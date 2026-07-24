// sqlite_04 (_library) -- cube. 101 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "sqlite_04.h"

/* FUN_005775d0 @ 005775d0  kind=lib  attributed-by=lib-island  size=204 */

int FUN_005775d0(int param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  char *_Src;
  char *pcVar4;
  size_t _Size;
  int iVar5;
  void *_Dst;
  int local_8;
  
  iVar5 = 0;
  iVar2 = *(int *)(param_1 + 0x138);
  *(undefined4 *)(param_1 + 0x138) = 0;
  local_8 = 0;
  do {
    if (*(int *)(param_1 + 0x120) <= local_8) break;
    piVar3 = *(int **)(*(int *)(iVar2 + local_8 * 4) + 8);
    if ((piVar3 != (int *)0x0) && (*(code **)(*piVar3 + 0x3c) != (code *)0x0)) {
      iVar5 = (**(code **)(*piVar3 + 0x3c))(piVar3);
      FUN_005521a0(param_1,*param_2);
      _Src = (char *)piVar3[2];
      if (_Src == (char *)0x0) {
        _Dst = (void *)0x0;
      }
      else {
        cVar1 = *_Src;
        pcVar4 = _Src;
        while (cVar1 != '\0') {
          pcVar4 = pcVar4 + 1;
          cVar1 = *pcVar4;
        }
        _Size = ((int)pcVar4 - (int)_Src & 0x3fffffffU) + 1;
        _Dst = (void *)FUN_00552230(param_1,_Size);
        if (_Dst != (void *)0x0) {
          memcpy(_Dst,_Src,_Size);
        }
      }
      *param_2 = _Dst;
      FUN_00524410(piVar3[2]);
    }
    local_8 = local_8 + 1;
  } while (iVar5 == 0);
  *(int *)(param_1 + 0x138) = iVar2;
  return iVar5;
}


/* FUN_005776a0 @ 005776a0  kind=lib  attributed-by=lib-island  size=47 */

void FUN_005776a0(undefined4 *param_1)

{
  undefined4 uVar1;
  int *piVar2;
  
  piVar2 = param_1 + 3;
  *piVar2 = *piVar2 + -1;
  uVar1 = *param_1;
  if (*piVar2 == 0) {
    piVar2 = (int *)param_1[2];
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x10))(piVar2);
    }
    FUN_005521a0(uVar1,param_1);
  }
  return;
}


/* FUN_005776d0 @ 005776d0  kind=lib  attributed-by=lib-island  size=97 */

void FUN_005776d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)(param_1 + 0x13c);
  *(undefined4 *)(param_1 + 0x13c) = 0;
  if (puVar5 != (undefined4 *)0x0) {
    for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
      *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
    }
    do {
      piVar4 = puVar5 + 3;
      *piVar4 = *piVar4 + -1;
      puVar2 = (undefined4 *)puVar5[6];
      uVar3 = *puVar5;
      if (*piVar4 == 0) {
        piVar4 = (int *)puVar5[2];
        if (piVar4 != (int *)0x0) {
          (**(code **)(*piVar4 + 0x10))(piVar4);
        }
        FUN_005521a0(uVar3,puVar5);
      }
      puVar5 = puVar2;
    } while (puVar2 != (undefined4 *)0x0);
  }
  return;
}


/* FUN_00577740 @ 00577740  kind=lib  attributed-by=lib-island  size=786 */

int FUN_00577740(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint *puVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  uint local_14;
  int local_8;
  
  iVar5 = 0;
  iVar8 = -0x85e;
LAB_00577753:
  do {
    iVar5 = iVar5 + 1;
    iVar8 = iVar8 + 0xee;
    if (5 < iVar5) {
      if (0x549a < iVar8) {
        return 0xf;
      }
      iVar2 = 1;
      if (9 < iVar5) {
        iVar2 = iVar8;
      }
      (**(code **)(*param_1 + 0x3c))(*param_1,iVar2);
    }
    iVar2 = FUN_0057e260(param_1,param_2);
    if (iVar2 == 5) {
      if (*(int *)param_1[8] == 0) {
        iVar2 = -1;
      }
      else {
        if (*(char *)((int)param_1 + 0x2b) == '\0') {
          iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,6);
          if (iVar2 != 0) {
            if (iVar2 != 5) goto LAB_005777fc;
            iVar2 = 0x105;
            goto LAB_005779b3;
          }
          if (*(char *)((int)param_1 + 0x2b) == '\0') {
            (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,5);
          }
        }
        iVar2 = -1;
      }
    }
    else {
LAB_005777fc:
      if (iVar2 == 0) {
        iVar1 = *(int *)param_1[8];
        iVar3 = 0;
        if (*(int *)(iVar1 + 0x60) == param_1[0x11]) {
          if (*(char *)((int)param_1 + 0x2b) == '\0') {
            iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,6);
          }
          if (*(char *)((int)param_1 + 0x2b) != '\x02') {
            (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
          }
          if (iVar2 == 0) {
            piVar7 = param_1 + 0xd;
            piVar4 = *(int **)param_1[8];
            uVar9 = 0x2c;
            while (*piVar4 == *piVar7) {
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
              bVar10 = uVar9 < 4;
              uVar9 = uVar9 - 4;
              if (bVar10) {
                *(undefined2 *)(param_1 + 10) = 0;
                return 0;
              }
            }
            if (*(char *)((int)param_1 + 0x2b) == '\0') {
              (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],3,1,5);
            }
            goto LAB_00577753;
          }
          iVar3 = iVar2;
          if (iVar2 != 5) goto LAB_005779b3;
        }
        iVar2 = iVar3;
        local_14 = 0;
        local_8 = 0;
        iVar3 = 1;
        puVar6 = (uint *)(iVar1 + 0x68);
        do {
          uVar9 = *puVar6;
          if ((local_14 <= uVar9) && (uVar9 <= (uint)param_1[0x11])) {
            local_14 = uVar9;
            local_8 = iVar3;
          }
          iVar3 = iVar3 + 1;
          puVar6 = puVar6 + 1;
        } while (iVar3 < 5);
        if ((*(byte *)((int)param_1 + 0x2e) & 2) == 0) {
          if ((local_14 < (uint)param_1[0x11]) || (local_8 == 0)) {
            iVar3 = 1;
            do {
              if (*(char *)((int)param_1 + 0x2b) != '\0') {
                iVar2 = 0;
LAB_00577934:
                local_14 = param_1[0x11];
                *(uint *)(iVar1 + 100 + iVar3 * 4) = local_14;
                local_8 = iVar3;
                if (*(char *)((int)param_1 + 0x2b) == '\0') {
                  (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar3 + 3,1,9);
                }
                break;
              }
              iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar3 + 3,1,10);
              if (iVar2 == 0) goto LAB_00577934;
              if (iVar2 != 5) goto LAB_005779b3;
              iVar3 = iVar3 + 1;
            } while (iVar3 < 5);
            goto LAB_00577965;
          }
        }
        else {
LAB_00577965:
          if (local_8 == 0) {
            bVar10 = iVar2 == 5;
            iVar2 = 0x208;
            if (bVar10) {
              iVar2 = -1;
            }
            goto LAB_005779b3;
          }
        }
        if ((*(char *)((int)param_1 + 0x2b) != '\0') ||
           (iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],local_8 + 3,1,6),
           iVar2 == 0)) {
          if (*(char *)((int)param_1 + 0x2b) != '\x02') {
            (**(code **)(*(int *)param_1[1] + 0x3c))((int *)param_1[1]);
          }
          if (*(uint *)(iVar1 + 100 + local_8 * 4) == local_14) {
            piVar7 = param_1 + 0xd;
            piVar4 = *(int **)param_1[8];
            uVar9 = 0x2c;
            while (*piVar4 == *piVar7) {
              piVar4 = piVar4 + 1;
              piVar7 = piVar7 + 1;
              bVar10 = uVar9 < 4;
              uVar9 = uVar9 - 4;
              if (bVar10) {
                *(short *)(param_1 + 10) = (short)local_8;
                return 0;
              }
            }
          }
          if (*(char *)((int)param_1 + 0x2b) == '\0') {
            (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],local_8 + 3,1,5);
          }
          goto LAB_00577753;
        }
        if (iVar2 == 5) {
          iVar2 = -1;
        }
      }
    }
LAB_005779b3:
    if (iVar2 != -1) {
      return iVar2;
    }
  } while( true );
}


/* FUN_00577a60 @ 00577a60  kind=lib  attributed-by=lib-island  size=146 */

int FUN_00577a60(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x2e) != '\0') {
    return 8;
  }
  if ((*(char *)(param_1 + 0x2b) != '\0') ||
     (iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,10),
     iVar1 == 0)) {
    *(undefined1 *)(param_1 + 0x2c) = 1;
    piVar3 = (int *)**(undefined4 **)(param_1 + 0x20);
    piVar2 = (int *)(param_1 + 0x34);
    uVar4 = 0x2c;
    while (*piVar2 == *piVar3) {
      piVar2 = piVar2 + 1;
      piVar3 = piVar3 + 1;
      bVar5 = uVar4 < 4;
      uVar4 = uVar4 - 4;
      if (bVar5) {
        return 0;
      }
    }
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    iVar1 = 5;
  }
  return iVar1;
}


/* FUN_00577b00 @ 00577b00  kind=lib  attributed-by=lib-island  size=372 */

int FUN_00577b00(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                int param_6,undefined4 param_7,undefined4 *param_8,undefined4 *param_9)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = param_2;
  local_8 = 0;
  if (*(char *)(param_1 + 0x2e) != '\0') {
    return 8;
  }
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,10),
     iVar2 != 0)) {
    return iVar2;
  }
  *(undefined1 *)(param_1 + 0x2d) = 1;
  if (param_2 != 0) {
    iVar2 = FUN_0057d880(param_1,param_3,param_4,0,1);
    if (iVar2 == 0) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
    }
    else {
      if (iVar2 != 5) goto LAB_00577c17;
      param_2 = 0;
    }
  }
  iVar2 = FUN_0057e260(param_1,&local_8);
  if (iVar2 == 0) {
    if ((*(int *)(param_1 + 0x44) == 0) ||
       ((*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00) ==
        param_6)) {
      iVar2 = FUN_0057d8d0(param_1,param_2,param_3,param_4,param_5,param_7);
    }
    else {
      iVar2 = FUN_00551190(0xb87d);
    }
    if ((iVar2 == 0) || (iVar2 == 5)) {
      if (param_8 != (undefined4 *)0x0) {
        *param_8 = *(undefined4 *)(param_1 + 0x44);
      }
      if (param_9 != (undefined4 *)0x0) {
        *param_9 = *(undefined4 *)(**(int **)(param_1 + 0x20) + 0x60);
      }
    }
  }
  if (local_8 != 0) {
    memset((void *)(param_1 + 0x34),0,0x30);
  }
LAB_00577c17:
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),1,1,9);
  }
  *(undefined1 *)(param_1 + 0x2d) = 0;
  if ((iVar2 == 0) && (iVar1 != param_2)) {
    iVar2 = 5;
  }
  return iVar2;
}


/* FUN_00577c80 @ 00577c80  kind=lib  attributed-by=lib-island  size=262 */

int FUN_00577c80(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int local_8;
  
  piVar2 = param_1;
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar3 = 0;
  local_8 = (**(code **)(*(int *)param_1[1] + 0x1c))((int *)param_1[1],4);
  if (local_8 == 0) {
    if (*(char *)((int)piVar2 + 0x2b) == '\0') {
      *(undefined1 *)((int)piVar2 + 0x2b) = 1;
    }
    local_8 = FUN_00577b00(piVar2,0,0,0,param_2,param_3,param_4,0,0);
    if (local_8 == 0) {
      param_1 = (int *)0xffffffff;
      (**(code **)(*(int *)piVar2[1] + 0x28))((int *)piVar2[1],10,&param_1);
      if (param_1 == (int *)0x1) {
        if (-1 < piVar2[5]) {
          FUN_0057ec20(piVar2,0,0);
        }
      }
      else {
        iVar3 = 1;
      }
    }
  }
  FUN_0057e060(piVar2,iVar3);
  piVar1 = (int *)piVar2[2];
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *piVar1 = 0;
  }
  if (iVar3 != 0) {
    if (DAT_0076b3bc != (code *)0x0) {
      (*DAT_0076b3bc)();
    }
    (**(code **)(*piVar2 + 0x1c))(*piVar2,piVar2[0x19],0);
    if (DAT_0076b3c0 != (code *)0x0) {
      (*DAT_0076b3c0)();
    }
  }
  FUN_00524410(piVar2[8]);
  FUN_00524410(piVar2);
  return local_8;
}


/* FUN_00577dd0 @ 00577dd0  kind=lib  attributed-by=lib-island  size=95 */

void FUN_00577dd0(int param_1)

{
  if (*(char *)(param_1 + 0x2c) != '\0') {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,9);
    }
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)(param_1 + 0x2f) = 0;
  }
  if (-1 < *(short *)(param_1 + 0x28)) {
    if (*(char *)(param_1 + 0x2b) == '\0') {
      (**(code **)(**(int **)(param_1 + 4) + 0x38))
                (*(int **)(param_1 + 4),*(short *)(param_1 + 0x28) + 3,1,5);
    }
    *(undefined2 *)(param_1 + 0x28) = 0xffff;
  }
  return;
}


/* FUN_00577e30 @ 00577e30  kind=lib  attributed-by=lib-island  size=1208 */

/* WARNING: Removing unreachable block (ram,0x00578130) */
/* WARNING: Removing unreachable block (ram,0x0057821b) */

void FUN_00577e30(int param_1,int param_2,int param_3,undefined4 param_4,int param_5,uint param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  longlong lVar10;
  undefined8 uVar11;
  longlong lVar12;
  int local_64;
  int *local_60;
  undefined8 local_5c;
  uint local_54;
  int local_50;
  int local_4c;
  int local_48;
  uint local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28 [2];
  undefined1 local_20;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined4 local_18;
  undefined4 local_14;
  undefined1 local_10;
  undefined1 local_f;
  undefined1 local_e;
  undefined1 local_d;
  undefined1 local_c;
  undefined1 local_b;
  undefined1 local_a;
  undefined1 local_9;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  local_48 = param_3;
  local_34 = 0;
  local_40 = 0;
  iVar2 = FUN_0057efa0(param_1);
  lVar10 = CONCAT44(local_2c,local_44);
  if (iVar2 != 0) goto LAB_005782db;
  local_3c = *(int *)(param_1 + 0x44);
  if (local_3c == 0) {
    local_20 = (char)((uint)param_2 >> 0x18);
    local_1f = (char)((uint)param_2 >> 0x10);
    local_1e = (char)((uint)param_2 >> 8);
    local_1d = (char)param_2;
    iVar2 = *(int *)(param_1 + 0x68);
    local_1c = (char)((uint)iVar2 >> 0x18);
    local_1b = (char)((uint)iVar2 >> 0x10);
    local_28[0] = -0x7df980c9;
    local_28[1] = 0x18e22d00;
    local_1a = (char)((uint)iVar2 >> 8);
    local_19 = (char)iVar2;
    if (iVar2 == 0) {
      FUN_005245e0(8,param_1 + 0x54);
    }
    local_18 = *(undefined4 *)(param_1 + 0x54);
    iVar2 = 0;
    local_14 = *(undefined4 *)(param_1 + 0x58);
    piVar5 = local_28;
    local_38 = 0;
    do {
      local_38 = local_38 + *piVar5 + iVar2;
      iVar2 = iVar2 + piVar5[1] + local_38;
      piVar5 = piVar5 + 2;
    } while (piVar5 < &local_10);
    local_10 = (undefined1)(local_38 >> 0x18);
    local_f = (undefined1)(local_38 >> 0x10);
    local_e = (undefined1)(local_38 >> 8);
    local_c = (undefined1)((uint)iVar2 >> 0x18);
    local_b = (undefined1)((uint)iVar2 >> 0x10);
    local_a = (undefined1)((uint)iVar2 >> 8);
    *(int *)(param_1 + 0x24) = param_2;
    *(undefined1 *)(param_1 + 0x41) = 0;
    *(int *)(param_1 + 0x50) = iVar2;
    *(uint *)(param_1 + 0x4c) = local_38;
    local_9 = (undefined1)iVar2;
    local_d = (undefined1)local_38;
    *(undefined1 *)(param_1 + 0x2f) = 1;
    iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0xc))(*(int **)(param_1 + 8),local_28,0x20,0,0);
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar2 != 0) goto LAB_005782db;
    if (((*(char *)(param_1 + 0x30) != '\0') && (param_6 != 0)) &&
       (iVar2 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_6 & 0x13)
       , iVar2 != 0)) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  piVar5 = *(int **)(param_1 + 8);
  local_50 = param_2;
  uVar3 = param_2 + 0x18;
  local_64 = param_1;
  local_5c = 0;
  local_54 = param_6;
  local_60 = piVar5;
  local_38 = uVar3;
  lVar10 = __allmul(local_3c,0,uVar3,(int)uVar3 >> 0x1f);
  lVar10 = lVar10 + 0x20;
  iVar2 = local_48;
  while( true ) {
    local_30 = iVar2;
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    uVar8 = (uint)lVar10;
    local_44 = uVar8;
    if (local_30 == 0) break;
    local_3c = local_3c + 1;
    if ((param_5 == 0) || (uVar4 = param_4, *(int *)(local_30 + 0xc) != 0)) {
      uVar4 = 0;
    }
    local_34 = *(int *)(local_30 + 4);
    FUN_0057deb0(param_1,*(undefined4 *)(local_30 + 0x14),uVar4,local_34,&local_20);
    iVar2 = FUN_0057f430(&local_64,&local_20,0x18,uVar8,local_2c);
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar2 != 0) goto LAB_005782db;
    iVar2 = FUN_0057f430(&local_64,local_34,param_2,uVar8 + 0x18,
                         local_2c + (uint)(0xffffffe7 < uVar8));
    lVar10 = CONCAT44(local_2c,local_44);
    if (iVar2 != 0) goto LAB_005782db;
    lVar10 = CONCAT44(local_2c + ((int)local_38 >> 0x1f) + (uint)CARRY4(uVar8,local_38),
                      uVar8 + local_38);
    iVar2 = *(int *)(local_30 + 0xc);
    local_34 = local_30;
  }
  iVar2 = 0;
  if (param_5 != 0) {
    if ((param_6 & 0x20) == 0) {
LAB_005781e2:
      iVar6 = 0;
    }
    else {
      if (*(char *)(param_1 + 0x31) == '\0') {
        iVar2 = (**(code **)(*piVar5 + 0x14))(piVar5,param_6 & 0x13);
        lVar10 = CONCAT44(local_2c,local_44);
        goto LAB_005781e2;
      }
      pcVar1 = *(code **)(**(int **)(param_1 + 8) + 0x2c);
      if (pcVar1 == (code *)0x0) {
        local_30 = 0x1000;
      }
      else {
        local_30 = (*pcVar1)(*(int **)(param_1 + 8));
        if (local_30 < 0x20) {
          local_30 = 0x200;
          lVar10 = CONCAT44(local_2c,local_44);
        }
        else {
          lVar10 = CONCAT44(local_2c,local_44);
          if (0x10000 < local_30) {
            local_30 = 0x10000;
            lVar10 = CONCAT44(local_2c,local_44);
          }
        }
      }
      local_2c = (int)((ulonglong)lVar10 >> 0x20);
      local_44 = (uint)lVar10;
      iVar6 = local_30 >> 0x1f;
      iVar7 = (int)(lVar10 + local_30);
      uVar11 = __alldiv(iVar7 + -1,
                        (int)((ulonglong)(lVar10 + local_30) >> 0x20) - (uint)(iVar7 == 0),local_30,
                        iVar6);
      local_5c = __allmul(uVar11,local_30,iVar6);
      param_1 = local_4c;
      lVar10 = CONCAT44(local_2c,local_44);
      uVar8 = local_44;
      if (local_5c <= lVar10) goto LAB_005781e2;
      do {
        local_30 = *(int *)(local_34 + 4);
        FUN_0057deb0(param_1,*(undefined4 *)(local_34 + 0x14),param_4,local_30,&local_20);
        iVar2 = FUN_0057f430(&local_64,&local_20,0x18,uVar8,local_2c);
        lVar10 = CONCAT44(local_2c,local_44);
        if (iVar2 != 0) goto LAB_005782db;
        iVar2 = FUN_0057f430(&local_64,local_30,param_2,uVar8 + 0x18,
                             local_2c + (uint)(0xffffffe7 < uVar8));
        lVar10 = CONCAT44(local_2c,local_44);
        if (iVar2 != 0) goto LAB_005782db;
        uVar9 = uVar8 + local_38;
        local_2c = local_2c + ((int)local_38 >> 0x1f) + (uint)CARRY4(uVar8,local_38);
        iVar6 = local_40 + 1;
        uVar8 = uVar9;
        local_40 = iVar6;
      } while ((local_2c < local_5c._4_4_) ||
              ((iVar2 = 0, lVar10 = CONCAT44(local_2c,local_44), local_2c <= local_5c._4_4_ &&
               (lVar10 = CONCAT44(local_2c,local_44), uVar9 < (uint)local_5c))));
    }
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = (uint)lVar10;
    if ((*(char *)(param_1 + 0x2f) != '\0') &&
       (uVar4 = *(undefined4 *)(param_1 + 0x10), -1 < *(int *)(param_1 + 0x14))) {
      lVar12 = __allmul(local_3c + iVar6,0,uVar3,(int)uVar3 >> 0x1f);
      lVar10 = CONCAT44(*(undefined4 *)(param_1 + 0x14),uVar4);
      if (CONCAT44(*(undefined4 *)(param_1 + 0x14),uVar4) < lVar12 + 0x20) {
        lVar10 = lVar12 + 0x20;
      }
      FUN_0057ec20(param_1,lVar10);
      lVar10 = CONCAT44(local_2c,local_44);
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
  }
  iVar6 = *(int *)(param_1 + 0x44);
  for (; local_48 != 0; local_48 = *(int *)(local_48 + 0xc)) {
    local_2c = (int)((ulonglong)lVar10 >> 0x20);
    local_44 = (uint)lVar10;
    if (iVar2 != 0) goto LAB_005782db;
    iVar6 = iVar6 + 1;
    iVar2 = FUN_0057df70(param_1,iVar6,*(undefined4 *)(local_48 + 0x14));
    lVar10 = CONCAT44(local_2c,local_44);
  }
  if (iVar2 == 0) {
    while( true ) {
      local_2c = (int)((ulonglong)lVar10 >> 0x20);
      local_44 = (uint)lVar10;
      if (local_40 < 1) break;
      local_40 = local_40 + -1;
      iVar6 = iVar6 + 1;
      iVar2 = FUN_0057df70(param_1,iVar6,*(undefined4 *)(local_34 + 0x14));
      lVar10 = CONCAT44(local_2c,local_44);
      if (iVar2 != 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    *(ushort *)(param_1 + 0x42) = (ushort)((uint)param_2 >> 0x10) | (ushort)param_2 & 0xff00;
    *(int *)(param_1 + 0x44) = iVar6;
    if (param_5 != 0) {
      *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
      *(undefined4 *)(param_1 + 0x48) = param_4;
      FUN_0057e910(param_1);
      lVar10 = CONCAT44(local_2c,local_44);
      *(int *)(param_1 + 0xc) = iVar6;
    }
  }
LAB_005782db:
  local_2c = (int)((ulonglong)lVar10 >> 0x20);
  local_44 = (uint)lVar10;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005782f0 @ 005782f0  kind=lib  attributed-by=lib-island  size=266 */

int FUN_005782f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                undefined4 *param_7)

{
  int *piVar1;
  undefined4 *puVar2;
  int *_Dst;
  int iVar3;
  uint uVar4;
  size_t _Size;
  
  puVar2 = param_7;
  *param_7 = 0;
  _Size = *(int *)(param_1 + 4) + 0x70;
  _Dst = (int *)FUN_0055da00(_Size);
  if (_Dst == (int *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  _Dst[2] = (int)(_Dst + 0x1c);
  _Dst[1] = param_2;
  *(undefined2 *)(_Dst + 10) = 0xffff;
  _Dst[4] = param_5;
  _Dst[5] = param_6;
  *(byte *)((int)_Dst + 0x2b) = -(param_4 != 0) & 2;
  *_Dst = param_1;
  _Dst[0x19] = param_3;
  *(undefined2 *)(_Dst + 0xc) = 0x101;
  param_7 = (undefined4 *)0x80006;
  iVar3 = (**(code **)(param_1 + 0x18))(param_1,param_3,_Dst[2],0x80006,&param_7);
  if (iVar3 == 0) {
    if (((uint)param_7 & 1) != 0) {
      *(undefined1 *)((int)_Dst + 0x2e) = 1;
    }
    uVar4 = (**(code **)(*(int *)_Dst[2] + 0x30))((int *)_Dst[2]);
    if ((uVar4 & 0x400) != 0) {
      *(undefined1 *)(_Dst + 0xc) = 0;
    }
    if ((uVar4 & 0x1000) != 0) {
      *(undefined1 *)((int)_Dst + 0x31) = 0;
    }
    *puVar2 = _Dst;
    return 0;
  }
  FUN_0057e060(_Dst,0);
  piVar1 = (int *)_Dst[2];
  if (*piVar1 != 0) {
    (**(code **)(*piVar1 + 4))(piVar1);
    *piVar1 = 0;
  }
  FUN_00524410(_Dst);
  return iVar3;
}


/* FUN_00578400 @ 00578400  kind=lib  attributed-by=lib-island  size=411 */

int FUN_00578400(int param_1,int param_2,undefined4 *param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  int local_c;
  uint local_8;
  
  uVar2 = *(uint *)(param_1 + 0x44);
  local_8 = 0;
  if ((uVar2 == 0) || (*(short *)(param_1 + 0x28) == 0)) {
    *param_3 = 0;
    return 0;
  }
  uVar10 = uVar2 + 0x21 >> 0xc;
  uVar9 = 0;
  do {
    if (uVar9 != 0) goto LAB_00578526;
    iVar5 = FUN_0057e140(param_1,uVar10,&local_c);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = local_c + 0x4000;
    if (uVar10 == 0) {
      local_c = local_c + 0x88;
      iVar11 = 0;
    }
    else {
      iVar11 = (uVar10 - 1) * 0x1000 + 0xfde;
    }
    uVar6 = param_2 * 0x17f & 0x1fff;
    sVar1 = *(short *)(iVar5 + uVar6 * 2);
    iVar4 = 0x2000;
    while (sVar1 != 0) {
      puVar7 = (ushort *)(iVar5 + uVar6 * 2);
      uVar8 = (uint)*puVar7 + iVar11;
      if ((uVar8 <= uVar2) &&
         (uVar9 = local_8, *(int *)(local_c + -4 + (uint)*puVar7 * 4) == param_2)) {
        uVar9 = uVar8;
        local_8 = uVar8;
      }
      if (iVar4 == 0) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xb62c,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
        return 0xb;
      }
      uVar6 = uVar6 + 1 & 0x1fff;
      iVar4 = iVar4 + -1;
      sVar1 = *(short *)(iVar5 + uVar6 * 2);
    }
    uVar10 = uVar10 - 1;
  } while (-1 < (int)uVar10);
  if (uVar9 == 0) {
    *param_3 = 0;
    return 0;
  }
LAB_00578526:
  iVar11 = (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
  *param_3 = 1;
  piVar3 = *(int **)(param_1 + 8);
  iVar5 = *piVar3;
  lVar12 = __allmul(iVar11 + 0x18,0,local_8 - 1,0);
  if (iVar11 < param_4) {
    param_4 = iVar11;
  }
  iVar5 = (**(code **)(iVar5 + 8))(piVar3,param_5,param_4,lVar12 + 0x38);
  return iVar5;
}


/* FUN_005785a0 @ 005785a0  kind=lib  attributed-by=lib-island  size=212 */

int FUN_005785a0(int param_1,code *param_2,undefined4 param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  iVar6 = 0;
  if (*(char *)(param_1 + 0x2c) != '\0') {
    uVar1 = *(uint *)(param_1 + 0x44);
    puVar2 = (undefined8 *)**(undefined4 **)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x34) = *puVar2;
    *(undefined8 *)(param_1 + 0x3c) = puVar2[1];
    *(undefined8 *)(param_1 + 0x44) = puVar2[2];
    *(undefined8 *)(param_1 + 0x4c) = puVar2[3];
    *(undefined8 *)(param_1 + 0x54) = puVar2[4];
    *(undefined8 *)(param_1 + 0x5c) = puVar2[5];
    uVar3 = *(uint *)(param_1 + 0x44);
    uVar7 = uVar3 + 0x22;
    iVar5 = uVar7 * 4;
    do {
      uVar3 = uVar3 + 1;
      if (uVar1 < uVar3) break;
      if (uVar7 >> 0xc == 0) {
        uVar4 = *(undefined4 *)(iVar5 + **(int **)(param_1 + 0x20));
      }
      else {
        uVar4 = *(undefined4 *)
                 (*(int *)(*(int *)(param_1 + 0x20) + (uVar7 >> 0xc) * 4) + (uVar7 & 0xfff) * 4);
      }
      iVar6 = (*param_2)(param_3,uVar4);
      iVar5 = iVar5 + 4;
      uVar7 = uVar7 + 1;
    } while (iVar6 == 0);
    if (uVar1 != *(uint *)(param_1 + 0x44)) {
      FUN_0057dcf0(param_1);
    }
  }
  return iVar6;
}


/* FUN_00578680 @ 00578680  kind=lib  attributed-by=lib-island  size=133 */

uint FUN_00578680(undefined4 *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar1 = (*(code *)*param_1)(param_1,param_2);
  if ((uVar1 == 0) && ((*(ushort *)(param_2 + 2) & 0x4000) == 0)) {
    iVar2 = FUN_00578680(param_1,*(undefined4 *)(param_2 + 8));
    if (iVar2 == 0) {
      iVar2 = FUN_00578680(param_1,*(undefined4 *)(param_2 + 0xc));
      if (iVar2 == 0) {
        if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
          iVar2 = FUN_00578710(param_1,*(undefined4 *)(param_2 + 0x10));
        }
        else {
          iVar2 = FUN_00578760();
        }
        if (iVar2 == 0) goto LAB_005786fb;
      }
    }
    return 2;
  }
LAB_005786fb:
  return uVar1 & 2;
}


/* FUN_00578710 @ 00578710  kind=lib  attributed-by=lib-island  size=72 */

undefined4 FUN_00578710(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_2 != (int *)0x0) {
    puVar3 = (undefined4 *)param_2[2];
    for (iVar2 = *param_2; 0 < iVar2; iVar2 = iVar2 + -1) {
      iVar1 = FUN_00578680(param_1,*puVar3);
      if (iVar1 != 0) {
        return 2;
      }
      puVar3 = puVar3 + 5;
    }
  }
  return 0;
}


/* FUN_00578760 @ 00578760  kind=lib  attributed-by=lib-island  size=161 */

uint FUN_00578760(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 4) == 0)) {
    return 0;
  }
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  do {
    uVar1 = (**(code **)(param_1 + 4))(param_1,param_2);
    if (uVar1 != 0) break;
    iVar2 = FUN_00578810(param_1,param_2);
    if (iVar2 != 0) {
LAB_005787ea:
      *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
      return 2;
    }
    psVar4 = *(short **)(param_2 + 0x28);
    if ((psVar4 != (short *)0x0) && (iVar2 = (int)*psVar4, 0 < iVar2)) {
      psVar4 = psVar4 + 0xe;
      do {
        iVar3 = FUN_00578760(param_1,*(undefined4 *)psVar4);
        if (iVar3 != 0) goto LAB_005787ea;
        iVar2 = iVar2 + -1;
        psVar4 = psVar4 + 0x24;
      } while (0 < iVar2);
    }
    param_2 = *(int *)(param_2 + 0x3c);
  } while (param_2 != 0);
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  return uVar1 & 2;
}


/* FUN_00578810 @ 00578810  kind=lib  attributed-by=lib-island  size=138 */

byte FUN_00578810(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00578710(param_1,*param_2);
  if (iVar1 == 0) {
    iVar1 = FUN_00578680(param_1,param_2[0xb]);
    if (iVar1 == 0) {
      iVar1 = FUN_00578710(param_1,param_2[0xc]);
      if (iVar1 == 0) {
        iVar1 = FUN_00578680(param_1,param_2[0xd]);
        if (iVar1 == 0) {
          iVar1 = FUN_00578710(param_1,param_2[0xe]);
          if (iVar1 == 0) {
            iVar1 = FUN_00578680(param_1,param_2[0x12]);
            if (iVar1 == 0) {
              iVar1 = FUN_00578680(param_1,param_2[0x13]);
              return -(iVar1 != 0) & 2;
            }
          }
        }
      }
    }
  }
  return 2;
}


/* FUN_005788a0 @ 005788a0  kind=lib  attributed-by=lib-island  size=3054 */

undefined4 *
FUN_005788a0(int *param_1,short *param_2,int param_3,undefined2 *param_4,int param_5,uint param_6,
            uint param_7)

{
  size_t _Size;
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  short *psVar8;
  uint uVar9;
  uint uVar10;
  short *psVar11;
  double *pdVar12;
  int *piVar13;
  int iVar14;
  undefined4 *puVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 local_fc;
  code *local_e8;
  longlong local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  double local_cc;
  int *local_c4;
  undefined4 *local_c0;
  short *local_bc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  undefined2 *local_a4;
  int local_a0;
  double *local_9c;
  int local_98;
  int local_94;
  double *local_90;
  uint local_8c;
  undefined2 uStack_88;
  ushort uStack_86;
  double local_84;
  double local_7c;
  double local_74;
  uint local_6c;
  uint uStack_68;
  undefined8 local_64;
  double local_5c;
  double local_54;
  double local_4c;
  uint local_44;
  short *local_40;
  int *local_3c;
  double *local_38;
  double *local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  uint local_24;
  double *local_20;
  int local_1c;
  int local_18;
  int *local_14;
  int local_10;
  short *local_c;
  undefined4 *local_8;
  
  piVar5 = (int *)param_1[2];
  local_14 = piVar5;
  memset(&local_c4,0,0x60);
  local_c4 = param_1;
  if (0x40 < *param_2) {
    FUN_00553950(param_1,"at most %d tables in a join",0x40);
    return (undefined4 *)0x0;
  }
  local_24 = param_6 & 0x40;
  if (local_24 == 0) {
    iVar3 = (int)*param_2;
  }
  else {
    iVar3 = 1;
  }
  local_1c = *param_1;
  _Size = iVar3 * 0x58 + 0x2a4;
  local_10 = iVar3;
  local_8 = (undefined4 *)FUN_00552230(local_1c,_Size);
  if (local_8 != (undefined4 *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar14 = local_10;
  if (*(char *)(local_1c + 0x38) != '\0') {
    FUN_005521a0(local_1c,local_8);
    return (undefined4 *)0x0;
  }
  *local_8 = param_1;
  local_8[7] = local_10;
  local_8[1] = param_2;
  uVar4 = FUN_005741e0(piVar5);
  local_8[6] = uVar4;
  local_c0 = local_8 + iVar3 * 0x16 + 0xe;
  local_8[8] = local_c0;
  *(short *)((int)local_8 + 10) = (short)param_6;
  iVar3 = param_1[0x6f];
  local_90 = (double *)(local_8 + 0xe);
  local_8[10] = param_1[0x6e];
  local_8[0xb] = iVar3;
  piVar5 = local_c0 + 0x5a;
  if ((*(byte *)(local_1c + 0x34) & 0x20) != 0) {
    param_5 = 0;
  }
  local_3c = piVar5;
  local_34 = local_90;
  memset(piVar5,0,0x104);
  local_c0[8] = local_c0 + 10;
  local_c0[1] = piVar5;
  *local_c0 = param_1;
  local_c0[4] = 0;
  local_c0[6] = 0;
  local_c0[7] = 8;
  local_c0[2] = 0;
  local_c0[3] = 0;
  *(short *)((int)local_c0 + 0x16) = (short)param_6;
  if ((param_1[0x57] == 0) && ((*(byte *)(*param_1 + 0x34) & 8) == 0)) {
    local_e8 = FUN_00534970;
    local_e4 = ZEXT48(param_1) << 0x20;
    FUN_00578680(&local_e8,param_3);
  }
  FUN_0057f770(local_c0,param_3,0x45);
  if ((param_3 != 0) && ((iVar14 == 0 || (iVar3 = FUN_005564f0(param_3), iVar3 != 0)))) {
    FUN_00555f40(param_1,param_3,local_8[6],8);
  }
  puVar15 = local_c0;
  uVar10 = 0;
  if (0 < *param_2) {
    piVar5 = (int *)(param_2 + 0xc);
    do {
      local_3c[*local_3c + 1] = piVar5[7];
      *local_3c = *local_3c + 1;
      if ((*piVar5 != 0) && ((*(byte *)(*piVar5 + 0x2a) & 0x10) != 0)) {
        uVar7 = 1 << (uVar10 & 0x1f);
        uVar9 = 0;
        if (0x1f < uVar10) {
          uVar9 = uVar7;
        }
        uVar7 = uVar7 ^ uVar9;
        if (0x3f < uVar10) {
          uVar9 = uVar7;
        }
        local_c0[2] = local_c0[2] | uVar7;
        local_c0[3] = local_c0[3] | uVar9;
      }
      uVar10 = uVar10 + 1;
      piVar5 = piVar5 + 0x12;
    } while ((int)uVar10 < (int)*param_2);
  }
  iVar3 = local_c0[6];
  while (iVar3 = iVar3 + -1, -1 < iVar3) {
    FUN_00535400(param_2,puVar15,iVar3);
  }
  if (*(char *)(local_1c + 0x38) != '\0') goto LAB_00578fa9;
  if ((param_5 != 0) && (iVar3 = FUN_0053c3f0(param_1,param_2,local_c0,param_5), iVar3 != 0)) {
    param_5 = 0;
    *(undefined1 *)((int)local_8 + 0xe) = 1;
  }
  local_ac = 0xffffffff;
  local_a8 = 0xffffffff;
  local_a4 = param_4;
  local_94 = local_10;
  local_28 = 0xffffffff;
  local_c = (short *)0x0;
  local_98 = 0;
  local_20 = local_34;
  local_a0 = param_5;
  if (0 < local_10) {
    local_18 = local_10 + -1;
    do {
      local_30 = (uint)((int)local_c < local_18);
      dVar16 = 0.0;
      local_40 = (short *)0xffffffff;
      local_5c = 0.0;
      local_fc = 0.0;
      local_4c = 0.0;
      local_54 = 0.0;
      local_e4 = 0;
      local_dc = 0;
      local_cc = 1e+99;
      local_2c = 0;
      psVar8 = local_c;
      iVar3 = local_10;
      dVar18 = dVar16;
      dVar17 = dVar16;
      do {
        if (-1 < (int)local_40) break;
        local_bc = param_2 + (int)psVar8 * 0x24 + 4;
        if ((int)psVar8 < iVar3) {
          local_38 = (double *)(local_8 + (int)psVar8 * 0x16 + 0x20);
          psVar11 = psVar8;
          do {
            pdVar12 = local_38;
            local_44 = (uint)((*(byte *)(local_bc + 0x10) & 10) != 0);
            if ((psVar11 != psVar8) && (local_44 != 0)) break;
            uVar10 = 0;
            if (0 < *local_3c) {
              piVar5 = local_3c;
              do {
                piVar5 = piVar5 + 1;
                if (*piVar5 == *(int *)(local_bc + 0x16)) {
                  uVar7 = 1 << (uVar10 & 0x1f);
                  uVar9 = 0;
                  if (0x1f < uVar10) {
                    uVar9 = uVar7;
                  }
                  uVar7 = uVar7 ^ uVar9;
                  if (0x3f < uVar10) {
                    uVar9 = uVar7;
                  }
                  goto LAB_00578c93;
                }
                uVar10 = uVar10 + 1;
              } while ((int)uVar10 < *local_3c);
            }
            local_d4 = 0;
            local_d4._4_4_ = 0;
            local_d4._0_4_ = 0;
            uVar7 = (uint)local_d4;
            uVar9 = local_d4._4_4_;
LAB_00578c93:
            if ((uVar7 & local_ac) == 0 && (uVar9 & local_a8) == 0) {
              if (psVar11 == local_c) {
                local_c = (short *)((int)local_c + 1);
              }
            }
            else {
              local_b4 = uVar7;
              local_b0 = uVar9;
              if (local_30 == 0) {
                local_b4 = local_ac;
                local_b0 = local_a8;
              }
              if (*(int *)(local_bc + 0x22) == 0) {
                local_2c = local_2c + 1;
              }
              if ((*(byte *)(*(int *)(local_bc + 8) + 0x2a) & 0x10) == 0) {
                FUN_0052d020(&local_c4);
                pdVar12 = local_38;
              }
              else {
                local_9c = local_38 + 1;
                FUN_0052dd50(&local_c4);
              }
              if (local_30 == 0) {
                if ((int)local_c < local_18) {
                  local_74 = local_74 / *pdVar12;
                }
              }
              else {
                *pdVar12 = local_74;
              }
              if ((((local_6c & local_ac) == 0 && (uStack_68 & local_a8) == 0) &&
                  (((local_2c == 0 || (*(int *)(local_bc + 0x22) == 0)) ||
                   ((local_8c & 0x100f3000) != 0)))) &&
                 ((((int)local_40 < 0 || (local_74 < local_cc)) ||
                  ((local_74 <= local_cc && ((local_fc._6_2_ < uStack_86 || (local_84 < local_4c))))
                  )))) {
                local_fc = (double)CONCAT26(uStack_86,CONCAT24(uStack_88,local_8c));
                local_dc = CONCAT44(uStack_68,local_6c);
                local_4c = local_84;
                local_54 = local_7c;
                local_cc = local_74;
                local_5c = local_fc;
                local_40 = psVar11;
              }
              psVar8 = local_c;
              iVar3 = local_10;
              dVar16 = local_4c;
              dVar18 = local_54;
              dVar17 = local_5c;
              if (local_44 != 0) break;
            }
            local_38 = local_38 + 0xb;
            psVar11 = (short *)((int)psVar11 + 1);
            local_bc = local_bc + 0x24;
            psVar8 = local_c;
            iVar3 = local_10;
          } while ((int)psVar11 < local_10);
        }
        local_30 = local_30 - 1;
      } while (-1 < (int)local_30);
      if (((ulonglong)local_fc & 0x40000000) != 0) {
        *(undefined1 *)((int)local_8 + 0xe) = 2;
      }
      local_28 = local_28 & (uint)local_fc;
      *local_20 = dVar17;
      local_20[1] = dVar16;
      local_20[2] = dVar18;
      *(uint *)((int)local_20 + 0x1c) = *(uint *)(param_2 + (int)local_40 * 0x24 + 0x1a);
      if (((ulonglong)local_fc & 0x200f0000) == 0) {
        *(uint *)(local_20 + 4) = 0xffffffff;
      }
      else if (((short)local_24 == 0) || (((ulonglong)local_fc & 0x20000000) != 0)) {
        *(int *)(local_20 + 4) = param_1[0x12];
        param_1[0x12] = param_1[0x12] + 1;
      }
      else {
        *(uint *)(local_20 + 4) = param_7;
      }
      uVar10 = 0;
      if (0 < *local_3c) {
        piVar5 = local_3c;
        do {
          piVar5 = piVar5 + 1;
          if (*piVar5 == *(int *)(param_2 + (int)local_40 * 0x24 + 0x1a)) {
            uVar7 = 1 << (uVar10 & 0x1f);
            uVar9 = 0;
            if (0x1f < uVar10) {
              uVar9 = uVar7;
            }
            uVar7 = uVar7 ^ uVar9;
            if (0x3f < uVar10) {
              uVar9 = uVar7;
            }
            goto LAB_00578f0e;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < *local_3c);
      }
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar7 = (uint)local_64;
      uVar9 = local_64._4_4_;
LAB_00578f0e:
      local_a8 = local_a8 & ~uVar9;
      local_ac = local_ac & ~uVar7;
      *(char *)((int)local_20 + 0x34) = (char)local_40;
      if (1.0 <= dVar16) {
        *(double *)(param_1 + 0x6e) = dVar16 * *(double *)(param_1 + 0x6e);
      }
      if ((*(undefined4 **)(param_2 + (int)local_40 * 0x24 + 0x26) != (undefined4 *)0x0) &&
         (((ulonglong)local_fc & 0xf0000) == 0)) {
        FUN_00553950(param_1,"cannot use index: %s",
                     **(undefined4 **)(param_2 + (int)local_40 * 0x24 + 0x26));
        goto LAB_00578fa9;
      }
      local_98 = local_98 + 1;
      local_20 = local_20 + 0xb;
    } while (local_98 < local_10);
  }
  if ((param_1[0x11] != 0) || (*(char *)(local_1c + 0x38) != '\0')) goto LAB_00578fa9;
  if (local_10 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined2 *)((int)local_20 - 0x52);
  }
  *(undefined2 *)(local_8 + 2) = uVar2;
  if (((local_28 & 0x2000000) != 0) && (param_4 != (undefined2 *)0x0)) {
    *(undefined2 *)(local_8 + 2) = *param_4;
  }
  if (((param_6 & 4) != 0) && ((local_28 & 0x2000000) != 0)) {
    *(undefined1 *)(local_8 + 3) = 1;
    local_8[0xe] = local_8[0xe] & 0xffbfffff;
  }
  piVar5 = (int *)param_1[0x6c];
  piVar13 = param_1;
  if ((piVar5 != (int *)0x0) && (piVar13 = piVar5, piVar5 != param_1)) {
    param_1[0x57] = -1;
  }
  if (piVar13[0x57] == 0) {
    iVar3 = piVar13[2];
    if (iVar3 == 0) {
      iVar3 = FUN_0056c7b0(*piVar13);
      piVar13[2] = iVar3;
      if (iVar3 == 0) goto LAB_00579084;
      FUN_0056bdc0(iVar3,0x94);
    }
    iVar3 = FUN_0056be90(iVar3,1,0,0);
    piVar13[0x57] = iVar3 + 1;
  }
LAB_00579084:
  local_28 = 0xffffffff;
  local_20 = (double *)0xffffffff;
  *(undefined8 *)(local_8 + 0xc) = 0x3ff0000000000000;
  if (0 < local_10) {
    local_2c = local_10;
    pdVar12 = (double *)(local_8 + 0xe);
    do {
      iVar3 = (uint)*(byte *)((int)pdVar12 + 0x34) * 9 + 1;
      iVar14 = -1000000;
      puVar15 = *(undefined4 **)(param_2 + iVar3 * 4 + 8);
      psVar8 = param_2 + iVar3 * 4;
      *(double *)(local_8 + 0xc) = pdVar12[1] * *(double *)(local_8 + 0xc);
      if (puVar15[0x10] != 0) {
        iVar14 = 0;
        if (0 < *(int *)(local_1c + 0x14)) {
          piVar5 = (int *)(*(int *)(local_1c + 0x10) + 0xc);
          do {
            if (*piVar5 == puVar15[0x10]) break;
            iVar14 = iVar14 + 1;
            piVar5 = piVar5 + 4;
          } while (iVar14 < *(int *)(local_1c + 0x14));
        }
      }
      local_c = psVar8;
      if (((*(byte *)((int)puVar15 + 0x2a) & 2) == 0) && (puVar15[3] == 0)) {
        if (((ulonglong)*local_34 & 0x8000000) == 0) {
          if ((*(byte *)((int)puVar15 + 0x2a) & 0x10) == 0) {
            if ((((ulonglong)*local_34 & 0x400000) == 0) && ((param_6 & 0x10) == 0)) {
              FUN_0055e5f0(param_1,*(undefined4 *)(psVar8 + 0x16),iVar14,puVar15,
                           (*(char *)(local_8 + 3) != '\0') + '\'');
              if ((*(char *)(local_8 + 3) == '\0') && (*(short *)((int)puVar15 + 0x26) < 0x40)) {
                uVar10 = *(uint *)(psVar8 + 0x1c);
                uVar7 = *(uint *)(psVar8 + 0x1e);
                iVar3 = 0;
                if (uVar10 != 0 || uVar7 != 0) {
                  do {
                    uVar10 = uVar10 >> 1 | uVar7 << 0x1f;
                    uVar7 = uVar7 >> 1;
                    iVar3 = iVar3 + 1;
                  } while (uVar10 != 0 || uVar7 != 0);
                }
                FUN_0056c320(local_14,local_14[7] + -1,iVar3,0xfffffff2);
              }
            }
            else {
              FUN_005681e0(param_1,iVar14,puVar15[8],0,*puVar15);
            }
          }
        }
        else {
          for (piVar5 = (int *)puVar15[0xe]; (piVar5 != (int *)0x0 && (*piVar5 != local_1c));
              piVar5 = (int *)piVar5[6]) {
          }
          local_24 = *(uint *)(psVar8 + 0x16);
          iVar3 = local_14[7];
          if ((iVar3 < local_14[8]) || (iVar6 = FUN_0053b4b0(local_14), iVar6 == 0)) {
            local_14[7] = local_14[7] + 1;
            iVar6 = local_14[1];
            *(undefined2 *)(iVar6 + iVar3 * 0x14) = 0x87;
            *(undefined1 *)(iVar6 + 3 + iVar3 * 0x14) = 0;
            *(uint *)(iVar6 + 4 + iVar3 * 0x14) = local_24;
            *(undefined4 *)(iVar6 + 8 + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0xc + iVar3 * 0x14) = 0;
            *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
          }
          else {
            iVar3 = 1;
          }
          psVar8 = local_c;
          if ((local_14[1] != 0) && (*(char *)(*local_14 + 0x38) == '\0')) {
            if (iVar3 < 0) {
              iVar3 = local_14[7] + -1;
            }
            local_44 = iVar3 * 5;
            iVar6 = local_14[1];
            FUN_00539320(*local_14,(int)*(char *)(iVar6 + 1 + iVar3 * 0x14),
                         *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14));
            *(undefined4 *)(iVar6 + 0x10 + local_44 * 4) = 0;
            psVar8 = local_c;
            if (piVar5 == (int *)0x0) {
              *(undefined4 *)(iVar6 + 0x10 + local_44 * 4) = 0;
              *(undefined1 *)(iVar6 + 1 + local_44 * 4) = 0;
            }
            else {
              *(int **)(iVar6 + 0x10 + local_44 * 4) = piVar5;
              *(undefined1 *)(iVar6 + 1 + local_44 * 4) = 0xf6;
              piVar5[3] = piVar5[3] + 1;
            }
          }
        }
      }
      if (((ulonglong)*local_34 & 0x20000000) == 0) {
        if (((ulonglong)*local_34 & 0xf0000) != 0) {
          uVar10 = *(uint *)(local_34 + 2);
          local_18 = FUN_0055b2a0(param_1,uVar10);
          uVar7 = *(uint *)(local_34 + 4);
          local_24 = *(uint *)(uVar10 + 0x28);
          iVar3 = local_14[7];
          if ((iVar3 < local_14[8]) || (iVar6 = FUN_0053b4b0(local_14), iVar6 == 0)) {
            local_14[7] = local_14[7] + 1;
            iVar6 = local_14[1];
            *(undefined2 *)(iVar6 + iVar3 * 0x14) = 0x27;
            *(undefined1 *)(iVar6 + 3 + iVar3 * 0x14) = 0;
            *(uint *)(iVar6 + 4 + iVar3 * 0x14) = uVar7;
            *(uint *)(iVar6 + 8 + iVar3 * 0x14) = local_24;
            *(int *)(iVar6 + 0xc + iVar3 * 0x14) = iVar14;
            *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
          }
          else {
            iVar3 = 1;
          }
          iVar6 = local_14[1];
          iVar1 = *local_14;
          if ((iVar6 == 0) || (*(char *)(iVar1 + 0x38) != '\0')) {
            FUN_00539320(iVar1,0xfffffff0,local_18);
          }
          else {
            if (iVar3 < 0) {
              iVar3 = local_14[7] + -1;
            }
            FUN_00539320(iVar1,(int)*(char *)(iVar6 + 1 + iVar3 * 0x14),
                         *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14));
            *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
            if (local_18 == 0) {
              *(undefined4 *)(iVar6 + 0x10 + iVar3 * 0x14) = 0;
              *(undefined1 *)(iVar6 + 1 + iVar3 * 0x14) = 0;
            }
            else {
              *(int *)(iVar6 + 0x10 + iVar3 * 0x14) = local_18;
              *(undefined1 *)(iVar6 + 1 + iVar3 * 0x14) = 0xfa;
            }
          }
        }
      }
      else {
        FUN_00532e80(param_1,local_c0,psVar8,local_28,local_20,local_34);
      }
      FUN_00550aa0(param_1,iVar14);
      piVar5 = (int *)local_c0[1];
      uVar10 = 0;
      iVar3 = *piVar5;
      if (0 < iVar3) {
        do {
          piVar5 = piVar5 + 1;
          if (*piVar5 == *(int *)(local_c + 0x16)) {
            uVar7 = 1 << (uVar10 & 0x1f);
            uVar9 = 0;
            if (0x1f < uVar10) {
              uVar9 = uVar7;
            }
            uVar7 = uVar7 ^ uVar9;
            if (0x3f < uVar10) {
              uVar9 = uVar7;
            }
            goto LAB_005793e1;
          }
          uVar10 = uVar10 + 1;
        } while ((int)uVar10 < iVar3);
      }
      local_64 = 0;
      local_64._4_4_ = 0;
      local_64._0_4_ = 0;
      uVar7 = (uint)local_64;
      uVar9 = local_64._4_4_;
LAB_005793e1:
      local_20 = (double *)((uint)local_20 & ~uVar9);
      local_28 = local_28 & ~uVar7;
      pdVar12 = local_34 + 0xb;
      local_2c = local_2c + -1;
      local_34 = pdVar12;
    } while (local_2c != 0);
    local_2c = 0;
  }
  local_8[4] = local_14[7];
  if (*(char *)(local_1c + 0x38) == '\0') {
    iVar3 = 0;
    uVar19 = 0xffffffffffffffff;
    if (0 < local_10) {
      puVar15 = local_8 + 0x19;
      do {
        local_18 = (int)((ulonglong)uVar19 >> 0x20);
        FUN_00534f70(param_1,param_2,puVar15 + -0xb,iVar3,*(undefined1 *)(puVar15 + 2),param_6);
        uVar19 = FUN_00530f60(local_8,iVar3,param_6,(int)uVar19,local_18);
        iVar3 = iVar3 + 1;
        local_8[5] = *puVar15;
        puVar15 = puVar15 + 0x16;
      } while (iVar3 < local_10);
    }
    return local_8;
  }
LAB_00578fa9:
  *(undefined8 *)(param_1 + 0x6e) = *(undefined8 *)(local_8 + 10);
  FUN_0057f6d0(local_1c,local_8);
  return (undefined4 *)0x0;
}


/* FUN_005794a0 @ 005794a0  kind=lib  attributed-by=lib-island  size=1502 */

void FUN_005794a0(int *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined1 *puVar15;
  uint *puVar16;
  int *piVar17;
  uint *puVar18;
  undefined4 *puVar19;
  int local_20;
  int local_14;
  int local_10;
  undefined4 *local_8;
  
  piVar2 = (int *)*param_1;
  iVar3 = param_1[1];
  piVar4 = (int *)piVar2[2];
  iVar5 = *piVar2;
  FUN_00554130(piVar2);
  local_14 = param_1[7] + -1;
  if (-1 < local_14) {
    local_8 = (undefined4 *)(local_14 * 0x48 + 0x34 + iVar3);
    piVar17 = param_1 + local_14 * 0x16 + 0x14;
    do {
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (piVar17[5] * 4 + 4)) = piVar4[7];
      }
      cVar1 = *(char *)((int)piVar17 + 0x1d);
      if (cVar1 != -0x6b) {
        iVar13 = piVar17[9];
        iVar11 = piVar4[7];
        iVar10 = piVar17[8];
        if ((iVar11 < piVar4[8]) || (iVar8 = FUN_0053b4b0(piVar4), iVar8 == 0)) {
          iVar8 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(char *)(iVar8 + iVar11 * 0x14) = cVar1;
          *(int *)(iVar8 + 4 + iVar11 * 0x14) = iVar10;
          *(undefined1 *)(iVar8 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar8 + 8 + iVar11 * 0x14) = iVar13;
          *(undefined4 *)(iVar8 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar8 + 0x10 + iVar11 * 0x14) = 0;
          *(undefined1 *)(iVar8 + 1 + iVar11 * 0x14) = 0;
        }
        if (piVar4[1] != 0) {
          *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) =
               *(undefined1 *)((int)piVar17 + 0x1e);
        }
      }
      if (((piVar17[-6] & 0xf1000U) != 0) && (0 < piVar17[10])) {
        if (piVar4[10] != 0) {
          *(int *)(piVar4[10] - (piVar17[4] * 4 + 4)) = piVar4[7];
        }
        iVar13 = piVar17[10];
        puVar19 = (undefined4 *)(piVar17[0xb] + (iVar13 + -1) * 8);
        for (; 0 < iVar13; iVar13 = iVar13 + -1) {
          uVar9 = puVar19[1] + 1;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
          }
          uVar6 = puVar19[1];
          uVar7 = *puVar19;
          iVar11 = piVar4[7];
          if ((iVar11 < piVar4[8]) || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar10 = piVar4[1];
            *(undefined4 *)(iVar10 + 4 + iVar11 * 0x14) = uVar7;
            *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x5f;
            *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
            *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = uVar6;
            *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = 0;
            *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
          }
          uVar9 = puVar19[1] - 1;
          if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
            *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
          }
          puVar19 = puVar19 + -2;
        }
        FUN_005521a0(iVar5,piVar17[0xb]);
      }
      if (piVar4[10] != 0) {
        *(int *)(piVar4[10] - (piVar17[3] * 4 + 4)) = piVar4[7];
      }
      iVar13 = *piVar17;
      if (iVar13 != 0) {
        uVar9 = piVar4[7];
        if (((int)uVar9 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
          iVar11 = piVar4[1];
          piVar4[7] = piVar4[7] + 1;
          *(undefined2 *)(iVar11 + uVar9 * 0x14) = 0x78;
          *(undefined1 *)(iVar11 + 3 + uVar9 * 0x14) = 0;
          *(int *)(iVar11 + 4 + uVar9 * 0x14) = iVar13;
          *(undefined4 *)(iVar11 + 8 + uVar9 * 0x14) = 0;
          *(undefined4 *)(iVar11 + 0xc + uVar9 * 0x14) = 0;
          *(undefined4 *)(iVar11 + 0x10 + uVar9 * 0x14) = 0;
        }
        else {
          uVar9 = 1;
        }
        if ((piVar17[-6] & 0x400000U) == 0) {
          uVar6 = *local_8;
          iVar13 = piVar4[7];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x42;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 4 + iVar13 * 0x14) = uVar6;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
        iVar13 = piVar17[2];
        if ((-1 < iVar13) &&
           ((iVar11 = piVar4[7], iVar11 < piVar4[8] || (iVar10 = FUN_0053b4b0(piVar4), iVar10 == 0))
           )) {
          piVar4[7] = piVar4[7] + 1;
          iVar10 = piVar4[1];
          *(undefined2 *)(iVar10 + iVar11 * 0x14) = 0x42;
          *(undefined1 *)(iVar10 + 3 + iVar11 * 0x14) = 0;
          *(int *)(iVar10 + 4 + iVar11 * 0x14) = iVar13;
          *(undefined4 *)(iVar10 + 8 + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar10 + 0xc + iVar11 * 0x14) = 0;
          *(undefined4 *)(iVar10 + 0x10 + iVar11 * 0x14) = 0;
        }
        iVar13 = piVar17[6];
        if (*(char *)((int)piVar17 + 0x1d) == '\x03') {
          iVar10 = piVar17[8];
          local_20 = piVar4[7];
          if ((local_20 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(int *)(iVar11 + 4 + local_20 * 0x14) = iVar10;
            *(undefined2 *)(iVar11 + local_20 * 0x14) = 2;
LAB_00579819:
            *(undefined4 *)(iVar11 + 0x10 + local_20 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + local_20 * 0x14) = 0;
            *(int *)(iVar11 + 8 + local_20 * 0x14) = iVar13;
            *(undefined1 *)(iVar11 + 3 + local_20 * 0x14) = 0;
          }
        }
        else {
          local_20 = piVar4[7];
          if ((local_20 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + local_20 * 0x14) = 1;
            *(undefined4 *)(iVar11 + 4 + local_20 * 0x14) = 0;
            goto LAB_00579819;
          }
        }
        if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar4[7])) {
          *(int *)(piVar4[1] + 8 + uVar9 * 0x14) = piVar4[7];
        }
      }
      local_8 = local_8 + -0x12;
      local_14 = local_14 + -1;
      piVar17 = piVar17 + -0x16;
    } while (-1 < local_14);
  }
  if (piVar4[10] != 0) {
    *(int *)(piVar4[10] - (param_1[6] * 4 + 4)) = piVar4[7];
  }
  puVar18 = (uint *)(param_1 + 0xe);
  local_10 = 0;
  if (0 < param_1[7]) {
    do {
      iVar13 = *(int *)(iVar3 + 0x18 + (uint)(byte)puVar18[0xd] * 0x48);
      if ((((*(byte *)(iVar13 + 0x2a) & 2) == 0) && (*(int *)(iVar13 + 0xc) == 0)) &&
         ((*(byte *)((int)param_1 + 10) & 0x10) == 0)) {
        uVar9 = *puVar18;
        if (((char)param_1[3] == '\0') && ((uVar9 & 0x400000) == 0)) {
          uVar6 = *(undefined4 *)(iVar3 + 0x34 + (uint)(byte)puVar18[0xd] * 0x48);
          iVar13 = piVar4[7];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            piVar4[7] = piVar4[7] + 1;
            iVar11 = piVar4[1];
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x2d;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 4 + iVar13 * 0x14) = uVar6;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
        if (((uVar9 & 0xf0000) != 0) && ((uVar9 & 0x20000000) == 0)) {
          iVar13 = piVar4[7];
          uVar9 = puVar18[8];
          if ((iVar13 < piVar4[8]) || (iVar11 = FUN_0053b4b0(piVar4), iVar11 == 0)) {
            iVar11 = piVar4[1];
            piVar4[7] = piVar4[7] + 1;
            *(undefined2 *)(iVar11 + iVar13 * 0x14) = 0x2d;
            *(undefined1 *)(iVar11 + 3 + iVar13 * 0x14) = 0;
            *(uint *)(iVar11 + 4 + iVar13 * 0x14) = uVar9;
            *(undefined4 *)(iVar11 + 8 + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0xc + iVar13 * 0x14) = 0;
            *(undefined4 *)(iVar11 + 0x10 + iVar13 * 0x14) = 0;
          }
        }
      }
      if ((*puVar18 & 0xf0000) == 0) {
        if ((*puVar18 & 0x10000000) != 0) {
          uVar9 = puVar18[0x10];
          goto LAB_005799a1;
        }
      }
      else {
        uVar9 = puVar18[4];
LAB_005799a1:
        if ((uVar9 != 0) && (*(char *)(iVar5 + 0x38) == '\0')) {
          iVar13 = param_1[4];
          iVar11 = iVar13;
          if (iVar13 < 0) {
            iVar11 = piVar4[7] + -1;
          }
          if (*(char *)(*piVar4 + 0x38) == '\0') {
            puVar15 = (undefined1 *)(piVar4[1] + iVar11 * 0x14);
          }
          else {
            puVar15 = &DAT_0076b50c;
          }
          if (iVar13 < piVar4[7]) {
            puVar16 = (uint *)(puVar15 + 4);
            iVar13 = piVar4[7] - iVar13;
            do {
              if (*puVar16 == puVar18[7]) {
                if ((char)puVar16[-1] == '\x1d') {
                  uVar12 = 0;
                  if (0 < *(int *)(uVar9 + 0x24)) {
                    puVar14 = *(uint **)(uVar9 + 4);
                    do {
                      if (puVar16[1] == *puVar14) {
                        puVar16[1] = uVar12;
                        uVar12 = puVar18[8];
                        goto LAB_00579a37;
                      }
                      uVar12 = uVar12 + 1;
                      puVar14 = puVar14 + 1;
                    } while ((int)uVar12 < *(int *)(uVar9 + 0x24));
                  }
                }
                else if ((char)puVar16[-1] == 'A') {
                  uVar12 = puVar18[8];
                  *(undefined1 *)(puVar16 + -1) = 99;
LAB_00579a37:
                  *puVar16 = uVar12;
                }
              }
              puVar16 = puVar16 + 5;
              iVar13 = iVar13 + -1;
            } while (iVar13 != 0);
          }
        }
      }
      local_10 = local_10 + 1;
      puVar18 = puVar18 + 0x16;
    } while (local_10 < param_1[7]);
  }
  *(undefined8 *)(piVar2 + 0x6e) = *(undefined8 *)(param_1 + 10);
  FUN_0057f6d0(iVar5,param_1);
  return;
}


/* FUN_00579a80 @ 00579a80  kind=lib  attributed-by=lib-island  size=25 */

void FUN_00579a80(undefined4 param_1,undefined4 param_2)

{
  FUN_0056aa30(param_1,1,param_2,&stack0x0000000c);
  return;
}


/* FUN_00579aa0 @ 00579aa0  kind=lib  attributed-by=lib-island  size=651 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00579aa0(undefined4 param_1,undefined8 *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
  uVar2 = 0;
  if (DAT_007666a8 == 0) {
    switch(param_1) {
    case 1:
      DAT_007665e4 = 0;
      DAT_007665e8 = 0;
      return 0;
    case 2:
      DAT_007665e8 = 0;
      DAT_007665e4 = 1;
      return 0;
    case 3:
      DAT_007665e4 = 1;
      DAT_007665e8 = 1;
      return 0;
    case 4:
      _DAT_00766600 = *param_2;
      DAT_00766608 = param_2[1];
      _DAT_00766610 = param_2[2];
      DAT_00766618 = param_2[3];
      return 0;
    case 5:
      if (DAT_00766600 == 0) {
        FUN_00579aa0(4,&PTR_FUN_00713494);
      }
      *param_2 = _DAT_00766600;
      param_2[1] = DAT_00766608;
      param_2[2] = _DAT_00766610;
      param_2[3] = DAT_00766618;
      return 0;
    case 6:
      DAT_00766688 = param_2;
      DAT_0076668c = param_3;
      DAT_00766690 = param_4;
      return 0;
    case 7:
      DAT_00766694 = param_2;
      DAT_00766698 = param_3;
      DAT_0076669c = param_4;
      return 0;
    default:
      uVar2 = 1;
switchD_00579adc_caseD_e:
      return uVar2;
    case 9:
      DAT_007665e0 = param_2;
      return 0;
    case 10:
      _DAT_00766620 = *param_2;
      _DAT_00766628 = param_2[1];
      _DAT_00766630 = param_2[2];
      _DAT_00766638 = param_2[3];
      DAT_00766640 = *(undefined4 *)(param_2 + 4);
      return 0;
    case 0xb:
      *param_2 = _DAT_00766620;
      param_2[1] = _DAT_00766628;
      param_2[2] = _DAT_00766630;
      param_2[3] = _DAT_00766638;
      *(undefined4 *)(param_2 + 4) = DAT_00766640;
      return 0;
    case 0xd:
      DAT_007665f8 = param_2;
      DAT_007665fc = param_3;
      return 0;
    case 0xe:
      goto switchD_00579adc_caseD_e;
    case 0x10:
      DAT_007666c4 = param_2;
      DAT_007666c8 = param_3;
      return 0;
    case 0x11:
      DAT_007665ec = param_2;
      return 0;
    case 0x12:
      puVar3 = &DAT_00766644;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *(undefined4 *)param_2;
        param_2 = (undefined8 *)((int)param_2 + 4);
        puVar3 = puVar3 + 1;
      }
      return 0;
    case 0x13:
      if (DAT_0076664c == 0) {
        FUN_00579aa0(0x12,&DAT_007128c4);
      }
      puVar3 = &DAT_00766644;
      for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
        *(undefined4 *)param_2 = *puVar3;
        puVar3 = puVar3 + 1;
        param_2 = (undefined8 *)((int)param_2 + 4);
      }
      return 0;
    case 0x14:
      DAT_007665f0 = param_2;
      return 0;
    }
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1b939,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0x15;
}


/* FUN_00579d80 @ 00579d80  kind=lib  attributed-by=lib-island  size=129 */

undefined4 FUN_00579d80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  FUN_0054d340(param_1);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar2 = 0;
    do {
      iVar1 = *(int *)(*(int *)(param_1 + 0x10) + 4 + iVar2);
      if ((iVar1 != 0) &&
         (iVar1 = *(int *)(*(int *)(**(int **)(iVar1 + 4) + 0xb4) + 0x28), iVar1 != 0)) {
        (*DAT_00766674)(iVar1);
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(param_1 + 0x14));
  }
  FUN_0054de20(param_1);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00579e10 @ 00579e10  kind=lib  attributed-by=lib-string  size=357 */

undefined4 FUN_00579e10(int *param_1,int param_2,int param_3,int param_4)

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
    iVar3 = FUN_00579f80();
    if ((iVar3 != 0) || (iVar4 = FUN_00563800(iVar5,iVar4 * 4), iVar4 == 0)) {
LAB_00579f5a:
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
        iVar5 = FUN_00523d10(&DAT_00716900,*(undefined4 *)(param_4 + iVar4 * 4));
        if (iVar5 == 0) goto LAB_00579f5a;
        iVar4 = iVar4 + 1;
        *(int *)(*param_1 + param_1[5] * 4) = iVar5;
        param_1[5] = param_1[5] + 1;
      } while (iVar4 < param_2);
    }
  }
  else if (param_1[4] != param_2) {
    FUN_00524410(param_1[1]);
    iVar4 = FUN_00523d10("sqlite3_get_table() called with two or more incompatible queries");
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
          iVar5 = FUN_00579f80();
          if ((iVar5 != 0) || (_Dst = (void *)FUN_0055da00(_Size), _Dst == (void *)0x0))
          goto LAB_00579f5a;
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


/* FUN_00579f80 @ 00579f80  kind=lib  attributed-by=lib-island  size=548 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_00579f80(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_007666a8 != 0) {
    return 0;
  }
  iVar1 = FUN_0055e380();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (DAT_007665e4 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = (*DAT_00766628)(2);
    if (iVar1 != 0) {
      (*DAT_00766630)(iVar1);
    }
  }
  _DAT_007666b0 = 1;
  iVar2 = 0;
  if ((DAT_007666b4 != 0) || (iVar2 = FUN_0055daf0(), iVar2 == 0)) {
    DAT_007666b4 = 1;
    if (DAT_007666bc == 0) {
      if (DAT_007665e4 != 0) {
        DAT_007666bc = (*DAT_00766628)(1);
      }
      if ((DAT_007665e4 != 0) && (DAT_007666bc == 0)) {
        iVar2 = 7;
        goto LAB_0057a031;
      }
    }
    DAT_007666c0 = DAT_007666c0 + 1;
  }
LAB_0057a031:
  if (iVar1 != 0) {
    (*DAT_00766638)(iVar1);
  }
  if (iVar2 != 0) {
    return iVar2;
  }
  if (DAT_007666bc != 0) {
    (*DAT_00766630)(DAT_007666bc);
  }
  iVar2 = 0;
  if ((DAT_007666a8 != 0) || (DAT_007666ac != 0)) goto LAB_0057a142;
  DAT_007666ac = 1;
  memset(&DAT_0076b4b0,0,0x5c);
  FUN_00563c80();
  if (DAT_007666b8 == 0) {
    if (DAT_0076664c == (code *)0x0) {
      FUN_00579aa0(0x12,&DAT_007128c4);
    }
    iVar2 = (*DAT_0076664c)(DAT_00766648);
    if (iVar2 == 0) goto LAB_0057a0d2;
  }
  else {
LAB_0057a0d2:
    DAT_007666b8 = 1;
    iVar2 = FUN_00579f80();
    if ((iVar2 == 0) && (iVar2 = FUN_0055da00(10), iVar2 != 0)) {
      FUN_00524410(iVar2);
      iVar2 = FUN_0057a220();
      if (iVar2 == 0) {
        FUN_0055ea60(DAT_00766694,DAT_00766698,DAT_0076669c);
        DAT_007666a8 = 1;
      }
    }
    else {
      iVar2 = 7;
    }
  }
  DAT_007666ac = 0;
LAB_0057a142:
  if (DAT_007666bc != 0) {
    (*DAT_00766638)(DAT_007666bc);
  }
  if (iVar1 != 0) {
    (*DAT_00766630)(iVar1);
  }
  DAT_007666c0 = DAT_007666c0 + -1;
  if (DAT_007666c0 < 1) {
    if (DAT_007666bc != 0) {
      (*DAT_0076662c)(DAT_007666bc);
    }
    DAT_007666bc = 0;
  }
  if (iVar1 != 0) {
    (*DAT_00766638)(iVar1);
  }
  return iVar2;
}


/* FUN_0057a220 @ 0057a220  kind=lib  attributed-by=lib-island  size=159 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0057a220(void)

{
  int iVar1;
  
  _DAT_0076e2c0 = 0;
  _DAT_0076e2c8 = 0;
  _DAT_0076e2d0 = 0;
  _DAT_0076e2d8 = 0;
  _DAT_0076e2e0 = 0;
  (*(code *)PTR_GetSystemInfo_007671d4)(&DAT_0076e2c0);
  iVar1 = FUN_00579f80();
  if (iVar1 == 0) {
    if (DAT_007665e4 == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (*DAT_00766628)(2);
      if (iVar1 != 0) {
        (*DAT_00766630)(iVar1);
      }
    }
    FUN_0057d3f0(&DAT_00766f78);
    _DAT_00766f84 = DAT_0076b3b8;
    DAT_0076b3b8 = &DAT_00766f78;
    if (iVar1 != 0) {
      (*DAT_00766638)(iVar1);
    }
    return 0;
  }
  return 0;
}


/* FUN_0057a2c0 @ 0057a2c0  kind=lib  attributed-by=lib-island  size=70 */

int FUN_0057a2c0(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  
  bVar2 = *param_1;
  while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*param_2]))) {
    pbVar1 = param_1 + 1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
    bVar2 = *pbVar1;
  }
  return (uint)(byte)(&DAT_007120d8)[*param_1] - (uint)(byte)(&DAT_007120d8)[*param_2];
}


/* FUN_0057a3f0 @ 0057a3f0  kind=lib  attributed-by=lib-island  size=31 */

void FUN_0057a3f0(int param_1)

{
  FUN_00553950(param_1,"authorizer malfunction");
  *(undefined4 *)(param_1 + 0xc) = 1;
  return;
}


/* FUN_0057a480 @ 0057a480  kind=lib  attributed-by=lib-island  size=249 */

void FUN_0057a480(int param_1,int param_2)

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
LAB_0057a522:
          FUN_00524410(puVar1);
        }
        else if (*(int *)(param_1 + 0x1f0) == 0) {
          if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
             (*(undefined4 **)(param_1 + 0x108) <= puVar1)) goto LAB_0057a522;
          *puVar1 = *(undefined4 *)(param_1 + 0x100);
          *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
          *(undefined4 **)(param_1 + 0x100) = puVar1;
        }
        else if (((puVar1 == (undefined4 *)0x0) || (puVar1 < *(undefined4 **)(param_1 + 0x104))) ||
                (*(undefined4 **)(param_1 + 0x108) <= puVar1)) {
          iVar3 = (*DAT_00766608._4_4_)(puVar1);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar3;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
        }
        FUN_00555e30(param_1,puVar4[1]);
        FUN_005521a0(param_1,puVar4[2]);
        FUN_005521a0(param_1,puVar4[3]);
        FUN_005521a0(param_1,puVar4[4]);
        param_2 = param_2 + 1;
        puVar4 = puVar4 + 6;
      } while (param_2 < *(short *)(iVar2 + 0x26));
    }
    FUN_005521a0(param_1,*(undefined4 *)(iVar2 + 4));
  }
  return;
}


/* FUN_0057a580 @ 0057a580  kind=lib  attributed-by=lib-island  size=515 */

undefined4 FUN_0057a580(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  char *pcVar7;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int *local_20;
  short *local_1c;
  int local_18;
  int *local_14;
  int *local_10;
  uint local_c;
  int local_8;
  
  psVar3 = *(short **)(param_2 + 0x28);
  local_8 = 0;
  if (0 < *psVar3 + -1) {
    piVar6 = (int *)(psVar3 + 0x40);
    local_10 = (int *)(psVar3 + 0xc);
    local_1c = psVar3;
    do {
      local_18 = piVar6[-8];
      if ((*local_10 != 0) && (local_18 != 0)) {
        local_c = *(byte *)(piVar6 + -4) >> 5 & 1;
        local_20 = piVar6;
        if ((*(byte *)(piVar6 + -4) & 4) != 0) {
          if ((*piVar6 != 0) || (piVar6[1] != 0)) {
            uVar2 = 0;
            pcVar7 = "a NATURAL join may not have an ON or USING clause";
LAB_0057a73f:
            FUN_00553950(param_1,pcVar7,uVar2);
            return 1;
          }
          iVar4 = 0;
          if (0 < *(short *)(local_18 + 0x26)) {
            local_14 = (int *)(local_8 + 1);
            iVar5 = 0;
            do {
              iVar1 = FUN_0057af50(psVar3,local_14,*(undefined4 *)(iVar5 + *(int *)(local_18 + 4)),
                                   &local_28,&local_24);
              if (iVar1 != 0) {
                FUN_00529020(param_1,psVar3,local_28,local_24,local_14,iVar4,local_c,param_2 + 0x2c)
                ;
              }
              iVar4 = iVar4 + 1;
              iVar5 = iVar5 + 0x18;
            } while (iVar4 < *(short *)(local_18 + 0x26));
          }
        }
        piVar6 = local_20;
        if (*local_20 != 0) {
          if (local_20[1] != 0) {
            FUN_00553950(param_1,"cannot have both ON and USING clauses in the same join");
            return 1;
          }
          if (local_c != 0) {
            FUN_00548ba0(*local_20,local_20[-1]);
          }
          uVar2 = FUN_00553d70(*param_1,*(undefined4 *)(param_2 + 0x2c),*piVar6);
          *(undefined4 *)(param_2 + 0x2c) = uVar2;
          *piVar6 = 0;
        }
        local_14 = (int *)piVar6[1];
        if ((local_14 != (int *)0x0) && (iVar4 = 0, 0 < local_14[1])) {
          do {
            uVar2 = *(undefined4 *)(*local_14 + iVar4 * 8);
            local_20 = (int *)FUN_005325f0(local_18,uVar2);
            if (((int)local_20 < 0) ||
               (iVar5 = FUN_0057af50(local_1c,local_8 + 1,uVar2,&local_30,&local_2c),
               psVar3 = local_1c, iVar5 == 0)) {
              pcVar7 = "cannot join using column %s - column not present in both tables";
              goto LAB_0057a73f;
            }
            FUN_00529020(param_1,local_1c,local_30,local_2c,local_8 + 1,local_20,local_c,
                         param_2 + 0x2c);
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_14[1]);
        }
      }
      local_10 = local_10 + 0x12;
      local_8 = local_8 + 1;
      piVar6 = piVar6 + 0x12;
    } while (local_8 < *psVar3 + -1);
  }
  return 0;
}


/* FUN_0057a790 @ 0057a790  kind=lib  attributed-by=lib-island  size=213 */

void FUN_0057a790(int param_1,int param_2)

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
              FUN_005521a0(iVar4,*puVar5);
              FUN_00555e30(iVar4,puVar5[1]);
              FUN_005521a0(iVar4,puVar5[2]);
              FUN_005521a0(iVar4,puVar5[3]);
              FUN_005521a0(iVar4,puVar5[4]);
              param_1 = param_1 + 1;
              puVar5 = puVar5 + 6;
            } while (param_1 < *(short *)(iVar2 + 0x26));
          }
          FUN_005521a0(iVar4,*(undefined4 *)(iVar2 + 4));
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


/* FUN_0057a870 @ 0057a870  kind=lib  attributed-by=lib-island  size=54 */

uint FUN_0057a870(byte *param_1,int param_2)

{
  uint uVar1;
  
  uVar1 = 0;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    uVar1 = uVar1 ^ (uint)(byte)(&DAT_007120d8)[*param_1] ^ uVar1 * 8;
    param_1 = param_1 + 1;
  }
  return uVar1;
}


/* FUN_0057a8b0 @ 0057a8b0  kind=lib  attributed-by=lib-island  size=253 */

undefined4 FUN_0057a8b0(int param_1)

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


/* FUN_0057a9b0 @ 0057a9b0  kind=lib  attributed-by=lib-island  size=199 */

void FUN_0057a9b0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  longlong lVar6;
  
  iVar4 = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (*(char *)(iVar1 + 5) != '\x02') {
    iVar5 = FUN_005411b0(iVar1);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = *(int *)(iVar1 + 0x80) + 4;
    lVar6 = __allmul(*(undefined4 *)(iVar1 + 0x34),0,iVar5,iVar5 >> 0x1f);
    uVar2 = *(undefined4 *)(iVar4 + 0x14);
    uVar3 = *(undefined4 *)(iVar4 + 4);
    param_1 = CONCAT13((char)uVar2,
                       CONCAT12((char)((uint)uVar2 >> 8),
                                CONCAT11((char)((uint)uVar2 >> 0x10),(char)((uint)uVar2 >> 0x18))));
    iVar5 = (**(code **)(**(int **)(iVar1 + 0x44) + 0xc))(*(int **)(iVar1 + 0x44),&param_1,4,lVar6);
    if (iVar5 != 0) {
      return;
    }
    iVar5 = (**(code **)(**(int **)(iVar1 + 0x44) + 0xc))
                      (*(int **)(iVar1 + 0x44),uVar3,*(undefined4 *)(iVar1 + 0x80),lVar6 + 4);
    if (iVar5 != 0) {
      return;
    }
  }
  *(int *)(iVar1 + 0x34) = *(int *)(iVar1 + 0x34) + 1;
  FUN_00528db0(iVar1,*(undefined4 *)(iVar4 + 0x14));
  return;
}


/* FUN_0057aa80 @ 0057aa80  kind=lib  attributed-by=lib-island  size=184 */

char * FUN_0057aa80(undefined4 param_1,char *param_2,int param_3,int param_4)

{
  char *pcVar1;
  undefined4 uVar2;
  
  if (param_2 == (char *)0x0) {
    return (char *)0x0;
  }
  if ((*param_2 == -0x68) && (*(int *)(param_2 + 0x18) == param_3)) {
    if (*(short *)(param_2 + 0x1c) < 0) {
      *param_2 = 'b';
      return param_2;
    }
    pcVar1 = (char *)FUN_00536250(param_1,*(undefined4 *)
                                           (*(int *)(param_4 + 8) +
                                           *(short *)(param_2 + 0x1c) * 0x14),0,0);
    FUN_00555e30(param_1,param_2);
    return pcVar1;
  }
  uVar2 = FUN_0057aa80(param_1,*(undefined4 *)(param_2 + 8),param_3,param_4);
  *(undefined4 *)(param_2 + 8) = uVar2;
  uVar2 = FUN_0057aa80(param_1,*(undefined4 *)(param_2 + 0xc),param_3,param_4);
  *(undefined4 *)(param_2 + 0xc) = uVar2;
  if ((*(ushort *)(param_2 + 2) & 0x800) != 0) {
    FUN_0057ab80();
    return param_2;
  }
  FUN_0057ab40(param_1,*(undefined4 *)(param_2 + 0x10),param_3,param_4);
  return param_2;
}


/* FUN_0057ab40 @ 0057ab40  kind=lib  attributed-by=lib-island  size=63 */

void FUN_0057ab40(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if ((param_2 != (int *)0x0) && (iVar2 = 0, 0 < *param_2)) {
    iVar3 = 0;
    do {
      uVar1 = FUN_0057aa80(param_1,*(undefined4 *)(iVar3 + param_2[2]),param_3,param_4);
      iVar2 = iVar2 + 1;
      *(undefined4 *)(iVar3 + param_2[2]) = uVar1;
      iVar3 = iVar3 + 0x14;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_0057ab80 @ 0057ab80  kind=lib  attributed-by=lib-island  size=174 */

void FUN_0057ab80(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  short *psVar3;
  
  if (param_2 != (undefined4 *)0x0) {
    FUN_0057ab40(param_1,*param_2,param_3,param_4);
    FUN_0057ab40(param_1,param_2[0xc],param_3,param_4);
    FUN_0057ab40(param_1,param_2[0xe],param_3,param_4);
    uVar1 = FUN_0057aa80(param_1,param_2[0xd],param_3,param_4);
    param_2[0xd] = uVar1;
    uVar1 = FUN_0057aa80(param_1,param_2[0xb],param_3,param_4);
    param_2[0xb] = uVar1;
    FUN_0057ab80(param_1,param_2[0xf],param_3,param_4);
    psVar3 = (short *)param_2[10];
    if ((psVar3 != (short *)0x0) && (iVar2 = (int)*psVar3, 0 < iVar2)) {
      psVar3 = psVar3 + 0xe;
      do {
        FUN_0057ab80(param_1,*(undefined4 *)psVar3,param_3,param_4);
        iVar2 = iVar2 + -1;
        psVar3 = psVar3 + 0x24;
      } while (0 < iVar2);
    }
  }
  return;
}


/* FUN_0057ac30 @ 0057ac30  kind=lib  attributed-by=lib-island  size=494 */

void FUN_0057ac30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined8 uVar5;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined1 local_c [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(param_1 + 0xb8) != 0) || (iVar2 = FUN_00542b40(param_1,4), iVar2 == 0)) {
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
          FUN_00563650(local_c,*(undefined4 *)(param_1 + 0x2c));
          uVar5 = FUN_0053cc30(param_1);
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 8))
                            (*(int **)(param_1 + 0x40),&local_1c,8,uVar5);
          if ((((iVar2 != 0) ||
               (((local_1c == -0x6fa2a27 && (local_18 == -0x289c5ee0)) &&
                (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                   (*(int **)(param_1 + 0x40),&DAT_00712467,1,uVar5), iVar2 != 0))))
              && (iVar2 != 0x20a)) ||
             ((((*(char *)(param_1 + 8) != '\0' && ((uVar3 & 0x400) == 0)) &&
               (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                                  (*(int **)(param_1 + 0x40),*(undefined1 *)(param_1 + 0xb)),
               iVar2 != 0)) ||
              (iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                                 (*(int **)(param_1 + 0x40),&local_14,0xc,
                                  *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54)),
              iVar2 != 0)))) goto LAB_0057ae0f;
        }
        if ((uVar3 & 0x400) == 0) {
          bVar4 = 0;
          if (*(char *)(param_1 + 0xb) == '\x03') {
            bVar4 = 0x10;
          }
          iVar2 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))
                            (*(int **)(param_1 + 0x40),bVar4 | *(byte *)(param_1 + 0xb));
          if (iVar2 != 0) goto LAB_0057ae0f;
        }
        *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x4c);
        if ((param_2 != 0) && ((uVar3 & 0x200) == 0)) {
          *(undefined4 *)(param_1 + 0x2c) = 0;
          iVar2 = FUN_00580050(param_1);
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
LAB_0057ae0f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057ae20 @ 0057ae20  kind=lib  attributed-by=lib-island  size=276 */

undefined4 FUN_0057ae20(int param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined8 *puVar7;
  uint uVar8;
  uint uVar9;
  int local_c;
  
  pbVar3 = *(byte **)param_2;
  local_c = 0;
  while( true ) {
    bVar1 = (&DAT_00712464)[local_c];
    if (pbVar3 == (byte *)0x0) {
      iVar4 = *(int *)(param_1 + 8);
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
        uVar9 = 0;
      }
      else {
        uVar9 = 0;
        pbVar5 = pbVar3;
        uVar8 = uVar6;
        if (uVar6 != 0) {
          do {
            uVar8 = uVar8 - 1;
            uVar9 = uVar9 ^ (uint)(byte)(&DAT_007120d8)[*pbVar5] ^ uVar9 * 8;
            pbVar5 = pbVar5 + 1;
          } while (0 < (int)uVar8);
        }
        uVar9 = uVar9 % *(uint *)(param_1 + 0x19c);
      }
      iVar4 = FUN_00537190(param_1 + 0x19c,pbVar3,uVar6,uVar9);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)(iVar4 + 8);
      }
    }
    puVar7 = (undefined8 *)0x0;
    if (iVar4 != 0) {
      puVar7 = (undefined8 *)(iVar4 + (uint)bVar1 * 0x14 + -0x14);
    }
    if (*(int *)((int)puVar7 + 0xc) != 0) break;
    local_c = local_c + 1;
    if (2 < local_c) {
      return 1;
    }
  }
  *param_2 = *puVar7;
  param_2[1] = puVar7[1];
  *(undefined4 *)(param_2 + 2) = 0;
  return 0;
}


/* FUN_0057af50 @ 0057af50  kind=lib  attributed-by=lib-island  size=193 */

undefined4 FUN_0057af50(int param_1,int param_2,byte *param_3,int *param_4,int *param_5)

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
          while ((bVar2 != 0 && ((&DAT_007120d8)[bVar2] == (&DAT_007120d8)[*pbVar7]))) {
            pbVar1 = pbVar3 + 1;
            pbVar3 = pbVar3 + 1;
            pbVar7 = pbVar7 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_007120d8)[*pbVar3] == (&DAT_007120d8)[*pbVar7]) {
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


/* FUN_0057b020 @ 0057b020  kind=lib  attributed-by=lib-island  size=95 */

undefined4 FUN_0057b020(int param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  char *pcVar6;
  uint uVar7;
  
  pcVar2 = *(char **)(param_1 + 4);
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
  puVar5 = (uint *)(*(int *)(param_1 + 0x18) + 8);
  if (*(int *)(*(int *)(param_1 + 0x18) + 0x14) == 0) {
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


/* FUN_0057b080 @ 0057b080  kind=lib  attributed-by=lib-island  size=241 */

short * FUN_0057b080(int *param_1,int param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  
  iVar2 = *param_1;
  psVar4 = (short *)FUN_00552230(iVar2,0x50);
  if (psVar4 == (short *)0x0) {
    return (short *)0x0;
  }
  memset(psVar4,0,0x50);
  psVar4[1] = 1;
  psVar4 = (short *)FUN_00567680(iVar2,psVar4,1,(int)*psVar4);
  if (*(char *)(iVar2 + 0x38) != '\0') {
    FUN_00567370(iVar2,psVar4);
    return (short *)0x0;
  }
  sVar1 = *psVar4;
  uVar5 = FUN_0055e3f0(iVar2,param_2 + 0xc);
  *(undefined4 *)(psVar4 + sVar1 * 0x24 + -0x1c) = uVar5;
  uVar5 = FUN_0055e3f0(iVar2,0);
  *(undefined4 *)(psVar4 + sVar1 * 0x24 + -0x1e) = uVar5;
  iVar2 = *(int *)(*(int *)(param_2 + 4) + 0x14);
  iVar3 = *param_1;
  if (iVar2 != 0) {
    iVar6 = 0;
    if (0 < *(int *)(iVar3 + 0x14)) {
      piVar7 = (int *)(*(int *)(iVar3 + 0x10) + 0xc);
      do {
        if (*piVar7 == iVar2) break;
        iVar6 = iVar6 + 1;
        piVar7 = piVar7 + 4;
      } while (iVar6 < *(int *)(iVar3 + 0x14));
      if ((iVar6 != 0) && (iVar6 < 2)) {
        return psVar4;
      }
    }
    uVar5 = FUN_00552450(iVar3,*(undefined4 *)(*(int *)(iVar3 + 0x10) + iVar6 * 0x10));
    *(undefined4 *)(psVar4 + *psVar4 * 0x24 + -0x1e) = uVar5;
  }
  return psVar4;
}


/* FUN_0057b180 @ 0057b180  kind=lib  attributed-by=lib-island  size=83 */

bool FUN_0057b180(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  
  if (((param_1[2] == *(int *)(param_2 + 0x2c)) && (*(short *)(param_1 + 4) == 2)) &&
     ((param_1[6] & param_3) == 0 && (param_1[7] & param_4) == 0)) {
    iVar1 = FUN_0055b1e0(*param_1,*(undefined1 *)
                                   (*(int *)(*(int *)(param_2 + 0x10) + 4) + 0x15 +
                                   param_1[3] * 0x18));
    return iVar1 != 0;
  }
  return false;
}


/* FUN_0057b3b0 @ 0057b3b0  kind=lib  attributed-by=lib-island  size=1586 */

void FUN_0057b3b0(int *param_1,undefined1 *param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  int local_c;
  
  piVar4 = param_1;
  piVar2 = (int *)param_1[2];
  local_18 = 0;
  local_1c = 0;
  *param_2 = 1;
  FUN_00554130(param_1);
  piVar5 = *(int **)(param_2 + 0x20);
  local_28 = 0;
  if (0 < *(int *)(param_2 + 0x24)) {
    do {
      local_24 = 0;
      piVar11 = *(int **)(*piVar5 + 0x10);
      if (piVar11 == (int *)0x0) {
        local_14 = 0;
        local_c = 0;
      }
      else {
        local_14 = *piVar11;
        local_c = param_1[0x10];
        if (param_1[0xf] < local_14) {
          local_c = param_1[0x13] + 1;
          param_1[0x13] = param_1[0x13] + local_14;
          FUN_005546b0(param_1,piVar11,local_c,1);
        }
        else {
          param_1[0x10] = local_c + local_14;
          param_1[0xf] = param_1[0xf] - local_14;
          FUN_005546b0(param_1,piVar11,local_c,1);
        }
      }
      if (-1 < piVar5[3]) {
        uVar7 = piVar2[9];
        piVar2[9] = uVar7 + 1;
        if ((uVar7 & uVar7 - 1) == 0) {
          iVar12 = piVar2[10];
          iVar13 = *piVar2;
          iVar6 = FUN_00552390(iVar13,iVar12,uVar7 * 8 + 4);
          if (iVar6 == 0) {
            FUN_005521a0(iVar13,iVar12);
          }
          piVar2[10] = iVar6;
        }
        if (piVar2[10] != 0) {
          *(undefined4 *)(piVar2[10] + uVar7 * 4) = 0xffffffff;
        }
        local_24 = -1 - uVar7;
        FUN_00530be0(param_1,piVar5[3],local_24,1,local_c);
      }
      if ((*(byte *)(piVar5[1] + 3) & 8) != 0) {
        puVar9 = (undefined4 *)piVar11[2];
        local_20 = 0;
        iVar12 = 0;
        do {
          if (local_14 <= iVar12) {
            if (local_20 == 0) {
              local_20 = *(int *)(*param_1 + 8);
            }
            break;
          }
          local_20 = FUN_00555b70(param_1,*puVar9);
          iVar12 = iVar12 + 1;
          puVar9 = puVar9 + 5;
        } while (local_20 == 0);
        if ((local_18 == 0) && (*(int *)(param_2 + 0x1c) != 0)) {
          param_1[0x13] = param_1[0x13] + 1;
          local_18 = param_1[0x13];
        }
        iVar12 = piVar2[7];
        iVar13 = piVar2[8];
        if (iVar12 < iVar13) {
LAB_0057b5b8:
          iVar13 = piVar2[1];
          piVar2[7] = piVar2[7] + 1;
          *(int *)(iVar13 + 4 + iVar12 * 0x14) = local_18;
          *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x11;
          *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
          *(undefined4 *)(iVar13 + 8 + iVar12 * 0x14) = 0;
          *(undefined4 *)(iVar13 + 0xc + iVar12 * 0x14) = 0;
          *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
        }
        else {
          if (iVar13 == 0) {
            iVar13 = 0x33;
          }
          else {
            iVar13 = iVar13 * 2;
          }
          uVar7 = FUN_00552390(*piVar2,piVar2[1],iVar13 * 0x14);
          if (uVar7 != 0) {
            iVar13 = *piVar2;
            if (((iVar13 == 0) || (uVar7 < *(uint *)(iVar13 + 0x104))) ||
               (*(uint *)(iVar13 + 0x108) <= uVar7)) {
              uVar10 = (*DAT_00766608._4_4_)(uVar7);
            }
            else {
              uVar10 = (uint)*(ushort *)(iVar13 + 0xe8);
            }
            piVar2[8] = uVar10 / 0x14;
            piVar2[1] = uVar7;
            goto LAB_0057b5b8;
          }
          iVar12 = 1;
        }
        iVar13 = *piVar2;
        if ((piVar2[1] == 0) || (*(char *)(iVar13 + 0x38) != '\0')) {
          FUN_00539320(iVar13,0xfffffffc,local_20);
        }
        else {
          if (iVar12 < 0) {
            iVar12 = piVar2[7] + -1;
          }
          iVar6 = piVar2[1] + iVar12 * 0x14;
          FUN_00539320(iVar13,(int)*(char *)(iVar6 + 1),
                       *(undefined4 *)(piVar2[1] + 0x10 + iVar12 * 0x14));
          *(undefined4 *)(iVar6 + 0x10) = 0;
          if (local_20 == 0) {
            *(undefined4 *)(iVar6 + 0x10) = 0;
            *(undefined1 *)(iVar6 + 1) = 0;
          }
          else {
            *(int *)(iVar6 + 0x10) = local_20;
            *(undefined1 *)(iVar6 + 1) = 0xfc;
          }
        }
      }
      iVar12 = piVar5[1];
      iVar13 = piVar5[2];
      iVar6 = piVar2[7];
      iVar8 = piVar2[8];
      if (iVar6 < iVar8) {
LAB_0057b6dd:
        iVar8 = piVar2[1];
        piVar2[7] = piVar2[7] + 1;
        *(int *)(iVar8 + 8 + iVar6 * 0x14) = local_c;
        *(undefined2 *)(iVar8 + iVar6 * 0x14) = 0x7b;
        *(undefined1 *)(iVar8 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar8 + 4 + iVar6 * 0x14) = 0;
        *(int *)(iVar8 + 0xc + iVar6 * 0x14) = iVar13;
        *(undefined4 *)(iVar8 + 0x10 + iVar6 * 0x14) = 0;
      }
      else {
        if (iVar8 == 0) {
          iVar8 = 0x33;
        }
        else {
          iVar8 = iVar8 * 2;
        }
        uVar7 = FUN_00552390(*piVar2,piVar2[1],iVar8 * 0x14);
        if (uVar7 != 0) {
          iVar8 = *piVar2;
          if (((iVar8 == 0) || (uVar7 < *(uint *)(iVar8 + 0x104))) ||
             (*(uint *)(iVar8 + 0x108) <= uVar7)) {
            uVar10 = (*DAT_00766608._4_4_)(uVar7);
          }
          else {
            uVar10 = (uint)*(ushort *)(iVar8 + 0xe8);
          }
          piVar2[1] = uVar7;
          piVar2[8] = uVar10 / 0x14;
          goto LAB_0057b6dd;
        }
        iVar6 = 1;
      }
      iVar13 = piVar2[1];
      iVar8 = *piVar2;
      if ((iVar13 == 0) || (*(char *)(iVar8 + 0x38) != '\0')) {
        FUN_00539320(iVar8,0xfffffffb,iVar12);
      }
      else {
        if (iVar6 < 0) {
          iVar6 = piVar2[7] + -1;
        }
        iVar1 = iVar13 + iVar6 * 0x14;
        FUN_00539320(iVar8,(int)*(char *)(iVar1 + 1),*(undefined4 *)(iVar13 + 0x10 + iVar6 * 0x14));
        *(undefined4 *)(iVar1 + 0x10) = 0;
        if (iVar12 == 0) {
          *(undefined4 *)(iVar1 + 0x10) = 0;
          *(undefined1 *)(iVar1 + 1) = 0;
        }
        else {
          *(int *)(iVar1 + 0x10) = iVar12;
          *(undefined1 *)(iVar1 + 1) = 0xfb;
        }
      }
      if (piVar2[1] != 0) {
        *(char *)(piVar2[1] + -0x11 + piVar2[7] * 0x14) = (char)local_14;
      }
      iVar12 = local_c + local_14 + -1;
      piVar11 = param_1 + 0x1d;
      iVar13 = 10;
      do {
        iVar6 = *piVar11;
        if ((local_c <= iVar6) && (iVar6 <= iVar12)) {
          if ((char)piVar11[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar6;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar11 + -2) = 0;
          }
          *piVar11 = 0;
        }
        piVar11 = piVar11 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      piVar11 = param_1 + 0x1d;
      iVar13 = 10;
      do {
        iVar6 = *piVar11;
        if ((local_c <= iVar6) && (iVar6 <= iVar12)) {
          if ((char)piVar11[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar6;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar11 + -2) = 0;
          }
          *piVar11 = 0;
        }
        piVar11 = piVar11 + 6;
        iVar13 = iVar13 + -1;
      } while (iVar13 != 0);
      if (param_1[0xf] < local_14) {
        param_1[0xf] = local_14;
        param_1[0x10] = local_c;
      }
      if (local_24 != 0) {
        if (piVar2[10] != 0) {
          *(int *)(piVar2[10] - (local_24 * 4 + 4)) = piVar2[7];
        }
        FUN_00554130(param_1);
      }
      local_28 = local_28 + 1;
      piVar5 = piVar5 + 4;
    } while (local_28 < *(int *)(param_2 + 0x24));
    if (local_18 != 0) {
      local_1c = piVar2[7];
      if (((int)local_1c < piVar2[8]) || (iVar12 = FUN_0053b4b0(piVar2), iVar12 == 0)) {
        piVar2[7] = piVar2[7] + 1;
        iVar12 = piVar2[1];
        *(undefined2 *)(iVar12 + local_1c * 0x14) = 0x1b;
        *(undefined1 *)(iVar12 + 3 + local_1c * 0x14) = 0;
        *(int *)(iVar12 + 4 + local_1c * 0x14) = local_18;
        *(undefined4 *)(iVar12 + 8 + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0xc + local_1c * 0x14) = 0;
        *(undefined4 *)(iVar12 + 0x10 + local_1c * 0x14) = 0;
      }
      else {
        local_1c = 1;
      }
    }
  }
  FUN_00554130(param_1);
  param_1 = (int *)0x0;
  if (0 < *(int *)(param_2 + 0x1c)) {
    puVar9 = (undefined4 *)(*(int *)(param_2 + 0x14) + 0x14);
    do {
      iVar12 = puVar9[-1];
      pcVar3 = (char *)*puVar9;
      if ((pcVar3 == (char *)0x0) || (*pcVar3 != -0x7c)) {
        local_24 = FUN_00554e20(piVar4,pcVar3,iVar12);
        if (((local_24 != iVar12) && (iVar13 = piVar4[2], iVar13 != 0)) &&
           ((local_2c = *(int *)(iVar13 + 0x1c), local_2c < *(int *)(iVar13 + 0x20) ||
            (iVar6 = FUN_0053b4b0(iVar13), iVar6 == 0)))) {
          *(int *)(iVar13 + 0x1c) = *(int *)(iVar13 + 0x1c) + 1;
          iVar13 = *(int *)(iVar13 + 4);
          *(undefined2 *)(iVar13 + local_2c * 0x14) = 0xf;
          goto LAB_0057b976;
        }
      }
      else {
        local_24 = *(int *)(pcVar3 + 0x18);
        iVar13 = piVar4[2];
        local_2c = *(int *)(iVar13 + 0x1c);
        if ((local_2c < *(int *)(iVar13 + 0x20)) || (iVar6 = FUN_0053b4b0(iVar13), iVar6 == 0)) {
          *(int *)(iVar13 + 0x1c) = *(int *)(iVar13 + 0x1c) + 1;
          iVar13 = *(int *)(iVar13 + 4);
          *(undefined2 *)(iVar13 + local_2c * 0x14) = 0xe;
LAB_0057b976:
          *(undefined4 *)(iVar13 + 0x10 + local_2c * 0x14) = 0;
          *(undefined4 *)(iVar13 + 0xc + local_2c * 0x14) = 0;
          *(int *)(iVar13 + 8 + local_2c * 0x14) = iVar12;
          *(int *)(iVar13 + 4 + local_2c * 0x14) = local_24;
          *(undefined1 *)(iVar13 + 3 + local_2c * 0x14) = 0;
        }
      }
      param_1 = (int *)((int)param_1 + 1);
      puVar9 = puVar9 + 6;
    } while ((int)param_1 < *(int *)(param_2 + 0x1c));
  }
  *param_2 = 0;
  FUN_00554130(piVar4);
  if (((local_1c != 0) && (-1 < (int)local_1c)) && (local_1c < (uint)piVar2[7])) {
    *(int *)(piVar2[1] + 8 + local_1c * 0x14) = piVar2[7];
  }
  return;
}


/* FUN_0057b9f0 @ 0057b9f0  kind=lib  attributed-by=lib-island  size=2095 */

void FUN_0057b9f0(int *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int param_6,
                 undefined4 param_7,int param_8)

{
  undefined2 *puVar1;
  char cVar2;
  short sVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 uVar16;
  uint uVar17;
  char *pcVar18;
  uint uVar19;
  char *pcVar20;
  size_t _Size;
  uint local_28;
  int local_24;
  int *local_1c;
  undefined2 local_18 [2];
  int local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar5 = (int *)param_1[2];
  iVar6 = *param_1;
  for (piVar4 = *(int **)(param_3 + 0x38); (piVar4 != (int *)0x0 && (*piVar4 != iVar6));
      piVar4 = (int *)piVar4[6]) {
  }
  pcVar18 = "_rowid_";
  do {
    pcVar20 = pcVar18;
    pcVar18 = pcVar20 + 1;
  } while (*pcVar18 != '\0');
  uVar19 = (uint)(pcVar20 + -0x71950f) & 0x3fffffff;
  puVar8 = (undefined1 *)FUN_00552230(iVar6,uVar19 + 0x2d);
  if (puVar8 != (undefined1 *)0x0) {
    memset(puVar8,0,uVar19 + 0x2d);
    *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
    *puVar8 = 0x1a;
    if (uVar19 == 0xffffffff) {
      *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | 0x400;
      *(undefined4 *)(puVar8 + 4) = 0;
    }
    else {
      *(undefined1 **)(puVar8 + 4) = puVar8 + 0x2c;
      if (uVar19 != 0) {
        memcpy(puVar8 + 0x2c,&DAT_00719510,uVar19);
      }
      *(undefined1 *)(uVar19 + *(int *)(puVar8 + 4)) = 0;
    }
    *(undefined4 *)(puVar8 + 0x14) = 1;
  }
  iVar7 = *param_1;
  local_1c = (int *)FUN_00552230(iVar7,0xc);
  if (local_1c == (int *)0x0) {
LAB_0057bb36:
    FUN_00555e30(iVar7,puVar8);
    FUN_00556700(iVar7,local_1c);
    local_1c = (int *)0x0;
  }
  else {
    local_1c[0] = 0;
    local_1c[1] = 0;
    local_1c[2] = 0;
    iVar9 = FUN_00552230(iVar7,0x14);
    local_1c[2] = iVar9;
    if (iVar9 == 0) goto LAB_0057bb36;
    iVar7 = *local_1c;
    *local_1c = iVar7 + 1;
    *(undefined8 *)(iVar9 + iVar7 * 0x14) = 0;
    *(undefined8 *)(iVar9 + 8 + iVar7 * 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x10 + iVar7 * 0x14) = 0;
    *(undefined1 **)(iVar9 + iVar7 * 0x14) = puVar8;
  }
  if (param_5 != 0) {
    uVar10 = FUN_00536250(iVar6,param_5,0,0);
    local_1c = (int *)FUN_005565a0(param_1,local_1c,uVar10);
  }
  local_28 = 0;
  if (0 < *(short *)(param_3 + 0x26)) {
    local_24 = 0;
    do {
      iVar7 = *(int *)(param_6 + local_28 * 4);
      if (iVar7 < 0) {
        pcVar18 = *(char **)(local_24 + *(int *)(param_3 + 4));
        if (pcVar18 == (char *)0x0) {
          _Size = 0;
        }
        else {
          cVar2 = *pcVar18;
          pcVar20 = pcVar18;
          while (cVar2 != '\0') {
            pcVar20 = pcVar20 + 1;
            cVar2 = *pcVar20;
          }
          _Size = (int)pcVar20 - (int)pcVar18 & 0x3fffffff;
        }
        puVar8 = (undefined1 *)FUN_00552230(iVar6,_Size + 0x2d);
        if (puVar8 != (undefined1 *)0x0) {
          memset(puVar8,0,_Size + 0x2d);
          *(undefined2 *)(puVar8 + 0x1e) = 0xffff;
          *puVar8 = 0x1a;
          if (_Size == 0xffffffff) {
            *(ushort *)(puVar8 + 2) = *(ushort *)(puVar8 + 2) | 0x400;
            *(undefined4 *)(puVar8 + 4) = 0;
          }
          else {
            *(undefined1 **)(puVar8 + 4) = puVar8 + 0x2c;
            if (_Size != 0) {
              memcpy(puVar8 + 0x2c,pcVar18,_Size);
            }
            *(undefined1 *)(_Size + *(int *)(puVar8 + 4)) = 0;
          }
          *(undefined4 *)(puVar8 + 0x14) = 1;
        }
      }
      else {
        puVar8 = (undefined1 *)
                 FUN_00536250(iVar6,*(undefined4 *)(*(int *)(param_4 + 8) + iVar7 * 0x14),0,0);
      }
      local_1c = (int *)FUN_005565a0(param_1,local_1c,puVar8);
      local_28 = local_28 + 1;
      local_24 = local_24 + 0x18;
    } while ((int)local_28 < (int)*(short *)(param_3 + 0x26));
  }
  puVar11 = (undefined4 *)FUN_00566e90(param_1,local_1c,param_2,param_7,0,0,0,0,0,0);
  iVar7 = param_1[0x12];
  param_1[0x12] = iVar7 + 1;
  iVar9 = piVar5[7];
  uVar19 = (uint)(param_5 != 0);
  sVar3 = *(short *)(param_3 + 0x26);
  if ((iVar9 < piVar5[8]) || (iVar12 = FUN_0053b4b0(piVar5), iVar12 == 0)) {
    iVar12 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(undefined2 *)(iVar12 + iVar9 * 0x14) = 0x2a;
    *(undefined1 *)(iVar12 + 3 + iVar9 * 0x14) = 0;
    *(int *)(iVar12 + 4 + iVar9 * 0x14) = iVar7;
    *(uint *)(iVar12 + 8 + iVar9 * 0x14) = uVar19 + 1 + (int)sVar3;
    *(undefined4 *)(iVar12 + 0xc + iVar9 * 0x14) = 0;
    *(undefined4 *)(iVar12 + 0x10 + iVar9 * 0x14) = 0;
  }
  if (piVar5[1] != 0) {
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = 8;
  }
  local_18[0] = 8;
  local_10 = 0;
  local_c = 0;
  local_14 = iVar7;
  FUN_005654f0(param_1,puVar11,local_18);
  param_1[0x13] = param_1[0x13] + 1;
  iVar9 = param_1[0x13];
  param_1[0x13] = *(short *)(param_3 + 0x26) + 1 + iVar9;
  local_28 = piVar5[7];
  if (((int)local_28 < piVar5[8]) || (iVar12 = FUN_0053b4b0(piVar5), iVar12 == 0)) {
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
  if ((iVar12 < piVar5[8]) || (iVar13 = FUN_0053b4b0(piVar5), iVar13 == 0)) {
    iVar13 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar13 + 4 + iVar12 * 0x14) = iVar7;
    *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x1d;
    *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 8 + iVar12 * 0x14) = 0;
    *(int *)(iVar13 + 0xc + iVar12 * 0x14) = iVar9;
    *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
  }
  iVar12 = piVar5[7];
  if ((iVar12 < piVar5[8]) || (iVar13 = FUN_0053b4b0(piVar5), iVar13 == 0)) {
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar12 * 0x14);
    *(int *)(puVar1 + 2) = iVar7;
    *(uint *)(puVar1 + 4) = uVar19;
    *puVar1 = 0x1d;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 6) = iVar9 + 1;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar12 = 0;
  if (0 < *(short *)(param_3 + 0x26)) {
    do {
      iVar13 = piVar5[7];
      iVar14 = piVar5[8];
      if (iVar13 < iVar14) {
LAB_0057bec9:
        piVar5[7] = piVar5[7] + 1;
        puVar1 = (undefined2 *)(piVar5[1] + iVar13 * 0x14);
        *(int *)(puVar1 + 2) = iVar7;
        *(uint *)(puVar1 + 4) = uVar19 + 1 + iVar12;
        *puVar1 = 0x1d;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 6) = iVar9 + 2 + iVar12;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      else {
        if (iVar14 == 0) {
          iVar14 = 0x33;
        }
        else {
          iVar14 = iVar14 * 2;
        }
        uVar15 = FUN_00552390(*piVar5,piVar5[1],iVar14 * 0x14);
        if (uVar15 != 0) {
          iVar14 = *piVar5;
          if (((iVar14 == 0) || (uVar15 < *(uint *)(iVar14 + 0x104))) ||
             (*(uint *)(iVar14 + 0x108) <= uVar15)) {
            uVar17 = (*DAT_00766608._4_4_)(uVar15);
          }
          else {
            uVar17 = (uint)*(ushort *)(iVar14 + 0xe8);
          }
          piVar5[8] = uVar17 / 0x14;
          piVar5[1] = uVar15;
          goto LAB_0057bec9;
        }
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < *(short *)(param_3 + 0x26));
  }
  FUN_00577380(param_1,param_3);
  sVar3 = *(short *)(param_3 + 0x26);
  iVar12 = piVar5[7];
  iVar13 = piVar5[8];
  if (iVar12 < iVar13) {
LAB_0057bf98:
    iVar13 = piVar5[1];
    piVar5[7] = piVar5[7] + 1;
    *(int *)(iVar13 + 8 + iVar12 * 0x14) = sVar3 + 2;
    *(undefined2 *)(iVar13 + iVar12 * 0x14) = 0x8c;
    *(undefined1 *)(iVar13 + 3 + iVar12 * 0x14) = 0;
    *(undefined4 *)(iVar13 + 4 + iVar12 * 0x14) = 0;
    *(int *)(iVar13 + 0xc + iVar12 * 0x14) = iVar9;
    *(undefined4 *)(iVar13 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    if (iVar13 == 0) {
      iVar13 = 0x33;
    }
    else {
      iVar13 = iVar13 * 2;
    }
    uVar19 = FUN_00552390(*piVar5,piVar5[1],iVar13 * 0x14);
    if (uVar19 != 0) {
      iVar13 = *piVar5;
      if (((iVar13 == 0) || (uVar19 < *(uint *)(iVar13 + 0x104))) ||
         (*(uint *)(iVar13 + 0x108) <= uVar19)) {
        uVar15 = (*DAT_00766608._4_4_)(uVar19);
      }
      else {
        uVar15 = (uint)*(ushort *)(iVar13 + 0xe8);
      }
      piVar5[8] = uVar15 / 0x14;
      piVar5[1] = uVar19;
      goto LAB_0057bf98;
    }
    iVar12 = 1;
  }
  iVar9 = piVar5[1];
  if ((iVar9 != 0) && (*(char *)(*piVar5 + 0x38) == '\0')) {
    if (iVar12 < 0) {
      iVar12 = piVar5[7] + -1;
    }
    iVar13 = iVar9 + iVar12 * 0x14;
    FUN_00539320(*piVar5,(int)*(char *)(iVar13 + 1),*(undefined4 *)(iVar9 + 0x10 + iVar12 * 0x14));
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
    uVar16 = (undefined1)param_8;
    if (param_8 == 99) {
      uVar16 = 2;
    }
    *(undefined1 *)(piVar5[1] + -0x11 + piVar5[7] * 0x14) = uVar16;
  }
  if ((int *)param_1[0x6c] != (int *)0x0) {
    param_1 = (int *)param_1[0x6c];
  }
  *(undefined1 *)(param_1 + 6) = 1;
  iVar9 = piVar5[7];
  iVar12 = piVar5[8];
  if (iVar9 < iVar12) {
LAB_0057c0c0:
    piVar5[7] = piVar5[7] + 1;
    puVar1 = (undefined2 *)(piVar5[1] + iVar9 * 0x14);
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
    uVar19 = FUN_00552390(*piVar5,piVar5[1],iVar12 * 0x14);
    if (uVar19 != 0) {
      iVar12 = *piVar5;
      if (((iVar12 == 0) || (uVar19 < *(uint *)(iVar12 + 0x104))) ||
         (*(uint *)(iVar12 + 0x108) <= uVar19)) {
        uVar15 = (*DAT_00766608._4_4_)(uVar19);
      }
      else {
        uVar15 = (uint)*(ushort *)(iVar12 + 0xe8);
      }
      piVar5[8] = uVar15 / 0x14;
      piVar5[1] = uVar19;
      goto LAB_0057c0c0;
    }
  }
  if ((-1 < (int)local_28) && (local_28 < (uint)piVar5[7])) {
    *(int *)(piVar5[1] + 8 + local_28 * 0x14) = piVar5[7];
  }
  iVar9 = piVar5[7];
  iVar12 = piVar5[8];
  if (iVar12 <= iVar9) {
    if (iVar12 == 0) {
      iVar12 = 0x33;
    }
    else {
      iVar12 = iVar12 * 2;
    }
    uVar19 = FUN_00552390(*piVar5,piVar5[1],iVar12 * 0x14);
    if (uVar19 == 0) goto LAB_0057c1a7;
    iVar12 = *piVar5;
    if (((iVar12 == 0) || (uVar19 < *(uint *)(iVar12 + 0x104))) ||
       (*(uint *)(iVar12 + 0x108) <= uVar19)) {
      uVar15 = (*DAT_00766608._4_4_)(uVar19);
    }
    else {
      uVar15 = (uint)*(ushort *)(iVar12 + 0xe8);
    }
    piVar5[8] = uVar15 / 0x14;
    piVar5[1] = uVar19;
  }
  iVar12 = piVar5[1];
  piVar5[7] = piVar5[7] + 1;
  *(undefined2 *)(iVar12 + iVar9 * 0x14) = 0x2d;
  *(undefined1 *)(iVar12 + 3 + iVar9 * 0x14) = 0;
  *(int *)(iVar12 + 4 + iVar9 * 0x14) = iVar7;
  *(undefined4 *)(iVar12 + 8 + iVar9 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0xc + iVar9 * 0x14) = 0;
  *(undefined4 *)(iVar12 + 0x10 + iVar9 * 0x14) = 0;
LAB_0057c1a7:
  if (puVar11 != (undefined4 *)0x0) {
    FUN_00556700(iVar6,*puVar11);
    FUN_00567370(iVar6,puVar11[10]);
    FUN_00555e30(iVar6,puVar11[0xb]);
    FUN_00556700(iVar6,puVar11[0xc]);
    FUN_00555e30(iVar6,puVar11[0xd]);
    FUN_00556700(iVar6,puVar11[0xe]);
    FUN_00566d10(iVar6,puVar11[0xf]);
    FUN_00555e30(iVar6,puVar11[0x12]);
    FUN_00555e30(iVar6,puVar11[0x13]);
    FUN_005521a0(iVar6,puVar11);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057c2a0 @ 0057c2a0  kind=lib  attributed-by=lib-island  size=1797 */

uint FUN_0057c2a0(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  bool bVar12;
  uint local_28;
  uint local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  undefined8 local_14;
  int local_c;
  int *local_8;
  
  local_c = 0;
  local_18 = 0;
  uVar3 = FUN_005775d0(param_1,param_2 + 0x34);
  param_2 = 0;
  if (uVar3 != 0) {
    return uVar3;
  }
  local_1c = 0;
  uVar3 = 0;
  while (param_2 < param_1[5]) {
    iVar4 = *(int *)(param_1[4] + 4 + local_1c);
    if ((iVar4 != 0) && (*(char *)(iVar4 + 8) == '\x02')) {
      local_18 = 1;
      if (param_2 != 1) {
        local_c = local_c + 1;
      }
      FUN_0054d260(iVar4);
      uVar3 = 0;
      if (*(int *)(**(int **)(iVar4 + 4) + 0xb8) == 0) {
        uVar3 = FUN_00542b40(**(int **)(iVar4 + 4),4);
      }
      if (*(char *)(iVar4 + 9) != '\0') {
        piVar11 = (int *)(iVar4 + 0xc);
        *piVar11 = *piVar11 + -1;
        if (*piVar11 == 0) {
          iVar10 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
          if (iVar10 != 0) {
            (*DAT_00766638)(iVar10);
          }
          *(undefined1 *)(iVar4 + 10) = 0;
        }
      }
    }
    param_2 = param_2 + 1;
    local_1c = local_1c + 0x10;
    if (uVar3 != 0) {
      return uVar3;
    }
  }
  if (uVar3 != 0) {
    return uVar3;
  }
  if (((local_18 != 0) && ((code *)param_1[0x2b] != (code *)0x0)) &&
     (iVar4 = (*(code *)param_1[0x2b])(param_1[0x2a]), iVar4 != 0)) {
    return 0x13;
  }
  uVar3 = 0;
  pcVar7 = "";
  iVar4 = **(int **)(*(int *)(param_1[4] + 4) + 4);
  if (*(char *)(iVar4 + 0xe) == '\0') {
    pcVar7 = *(char **)(iVar4 + 0x90);
  }
  if (pcVar7 != (char *)0x0) {
    cVar1 = *pcVar7;
    pcVar5 = pcVar7;
    while (cVar1 != '\0') {
      pcVar5 = pcVar5 + 1;
      cVar1 = *pcVar5;
    }
    if ((((int)pcVar5 - (int)pcVar7 & 0x3fffffffU) != 0) && (1 < local_c)) {
      local_c = *param_1;
      local_1c = 0;
      pcVar7 = "";
      if (*(char *)(iVar4 + 0xe) == '\0') {
        pcVar7 = *(char **)(iVar4 + 0x90);
      }
      local_8 = (int *)0x0;
      local_14 = 0;
      if (pcVar7 == (char *)0x0) {
        local_18 = 0;
      }
      else {
        cVar1 = *pcVar7;
        pcVar5 = pcVar7;
        while (cVar1 != '\0') {
          pcVar5 = pcVar5 + 1;
          cVar1 = *pcVar5;
        }
        local_18 = (int)pcVar5 - (int)pcVar7 & 0x3fffffff;
      }
      iVar4 = FUN_0055d980(param_1,"%s-mjXXXXXX9XXz",pcVar7);
      puVar9 = (uint *)0x0;
      if (iVar4 == 0) {
        return 7;
      }
      do {
        if (puVar9 != (uint *)0x0) {
          if (100 < (int)puVar9) {
            FUN_00525a30(0xd,"MJ delete: %s",iVar4);
            iVar10 = local_c;
            (**(code **)(local_c + 0x1c))(local_c,iVar4,0);
            if (uVar3 != 0) goto LAB_0057c844;
            break;
          }
          if (puVar9 == (uint *)0x1) {
            FUN_00525a30(0xd,"MJ collide: %s",iVar4);
          }
        }
        local_20 = (uint *)((int)puVar9 + 1);
        iVar10 = 4;
        puVar9 = &local_24;
        if (DAT_007665e4 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = (*DAT_00766628)(5);
          if (iVar8 != 0) {
            (*DAT_00766630)(iVar8);
          }
        }
        do {
          uVar2 = FUN_00544c20();
          *(undefined1 *)puVar9 = uVar2;
          puVar9 = (uint *)((int)puVar9 + 1);
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        if (iVar8 != 0) {
          (*DAT_00766638)(iVar8);
        }
        FUN_005240c0(0xd,local_18 + iVar4,"-mj%06X9%02X",local_24 >> 8,local_24 & 0xff);
        iVar10 = local_c;
        uVar3 = (**(code **)(local_c + 0x20))(local_c,iVar4,0,&local_28);
        if (uVar3 != 0) goto LAB_0057c844;
        puVar9 = local_20;
      } while (local_28 != 0);
      uVar3 = FUN_0055e990(iVar10,iVar4,&local_8,0x4016,0);
      if (uVar3 != 0) {
LAB_0057c844:
        FUN_005521a0(param_1,iVar4);
        return uVar3;
      }
      local_20 = (uint *)0x0;
      if (0 < param_1[5]) {
        local_18 = local_14._4_4_;
        local_24 = 0;
        local_14 = CONCAT44((undefined4)local_14,(undefined4)local_14);
        do {
          uVar3 = local_1c;
          iVar10 = *(int *)(param_1[4] + 4 + local_24);
          if (((iVar10 != 0) && (*(char *)(iVar10 + 8) == '\x02')) &&
             (pcVar7 = *(char **)(**(int **)(iVar10 + 4) + 0x94), pcVar7 != (char *)0x0)) {
            local_1c = uVar3;
            if ((local_1c == 0) && (iVar10 = FUN_0054f5b0(iVar10), local_1c = uVar3, iVar10 == 0)) {
              local_1c = 1;
            }
            cVar1 = *pcVar7;
            pcVar5 = pcVar7;
            while (cVar1 != '\0') {
              pcVar5 = pcVar5 + 1;
              cVar1 = *pcVar5;
            }
            uVar3 = (**(code **)(*local_8 + 0xc))
                              (local_8,pcVar7,((int)pcVar5 - (int)pcVar7 & 0x3fffffffU) + 1,
                               local_14._4_4_,local_18);
            cVar1 = *pcVar7;
            pcVar5 = pcVar7;
            while (cVar1 != '\0') {
              pcVar5 = pcVar5 + 1;
              cVar1 = *pcVar5;
            }
            uVar6 = ((int)pcVar5 - (int)pcVar7 & 0x3fffffffU) + 1;
            bVar12 = CARRY4(local_14._4_4_,uVar6);
            local_14 = CONCAT44(local_14._4_4_ + uVar6,(undefined4)local_14);
            local_18 = local_18 + bVar12;
            piVar11 = local_8;
            if (uVar3 != 0) goto LAB_0057c6d9;
          }
          piVar11 = local_8;
          local_20 = (uint *)((int)local_20 + 1);
          local_24 = local_24 + 0x10;
        } while ((int)local_20 < param_1[5]);
        if (((local_1c != 0) &&
            (uVar3 = (**(code **)(*local_8 + 0x30))(local_8), (uVar3 & 0x400) == 0)) &&
           (uVar3 = (**(code **)(*piVar11 + 0x14))(piVar11,2), uVar3 != 0)) {
LAB_0057c6d9:
          if (*piVar11 != 0) {
            (**(code **)(*piVar11 + 4))(piVar11);
            *piVar11 = 0;
          }
          FUN_00524410(piVar11);
          (**(code **)(local_c + 0x1c))(local_c,iVar4,0);
          FUN_005521a0(param_1,iVar4);
          return uVar3;
        }
      }
      uVar3 = 0;
      iVar10 = 0;
      local_24 = 0;
      do {
        if (param_1[5] <= iVar10) break;
        iVar8 = *(int *)(param_1[4] + 4 + local_24);
        if (iVar8 != 0) {
          uVar3 = FUN_0054c990(iVar8,iVar4);
        }
        local_24 = local_24 + 0x10;
        iVar10 = iVar10 + 1;
      } while (uVar3 == 0);
      piVar11 = local_8;
      if (*local_8 != 0) {
        (**(code **)(*local_8 + 4))(local_8);
        *piVar11 = 0;
      }
      FUN_00524410(piVar11);
      if (uVar3 != 0) {
        FUN_005521a0(param_1,iVar4);
        return uVar3;
      }
      uVar3 = (**(code **)(local_c + 0x1c))(local_c,iVar4,1);
      local_1c = uVar3;
      FUN_005521a0(param_1,iVar4);
      if (uVar3 != 0) {
        return uVar3;
      }
      if (DAT_0076b3bc != (code *)0x0) {
        (*DAT_0076b3bc)();
      }
      if (0 < param_1[5]) {
        param_2 = 0;
        iVar4 = 0;
        do {
          iVar10 = *(int *)(param_1[4] + 4 + param_2);
          if ((iVar10 != 0) && (*(char *)(iVar10 + 8) != '\0')) {
            FUN_0054d260(iVar10);
            if (*(char *)(iVar10 + 8) == '\x02') {
              local_20 = *(uint **)(iVar10 + 4);
              local_24 = *local_20;
              if (*(int *)(local_24 + 0x28) == 0) {
                if (((*(char *)(local_24 + 0xf) == '\x02') && (*(char *)(local_24 + 4) != '\0')) &&
                   (*(char *)(local_24 + 5) == '\x01')) {
                  *(undefined1 *)(local_24 + 0xf) = 1;
                }
                else {
                  uVar3 = FUN_00541e00(local_24,*(undefined1 *)(local_24 + 0x12));
                  if (((uVar3 & 0xff) == 0xd) || ((uVar3 & 0xff) == 10)) {
                    *(uint *)(local_24 + 0x28) = uVar3;
                    *(undefined1 *)(local_24 + 0xf) = 6;
                  }
                }
              }
              *(undefined1 *)((int)local_20 + 0x13) = 1;
            }
            FUN_0052e890(iVar10);
            if (*(char *)(iVar10 + 9) != '\0') {
              piVar11 = (int *)(iVar10 + 0xc);
              *piVar11 = *piVar11 + -1;
              if (*piVar11 == 0) {
                iVar8 = *(int *)(*(int *)(iVar10 + 4) + 0x38);
                if (iVar8 != 0) {
                  (*DAT_00766638)(iVar8);
                }
                *(undefined1 *)(iVar10 + 10) = 0;
              }
            }
          }
          iVar4 = iVar4 + 1;
          param_2 = param_2 + 0x10;
          uVar3 = local_1c;
        } while (iVar4 < param_1[5]);
      }
      if (DAT_0076b3c0 != (code *)0x0) {
        (*DAT_0076b3c0)();
        FUN_0052f080(param_1,0x40);
        return uVar3;
      }
      goto LAB_0057c9a3;
    }
  }
  iVar4 = 0;
  param_2 = 0;
  do {
    if (param_1[5] <= iVar4) break;
    iVar10 = *(int *)(param_1[4] + 4 + param_2);
    if (iVar10 != 0) {
      uVar3 = FUN_0054c990(iVar10,0);
    }
    param_2 = param_2 + 0x10;
    iVar4 = iVar4 + 1;
  } while (uVar3 == 0);
  param_2 = 0;
  if (uVar3 != 0) {
    return uVar3;
  }
  local_24 = 0;
  uVar6 = 0;
  while (param_2 < param_1[5]) {
    iVar4 = *(int *)(param_1[4] + 4 + local_24);
    if (iVar4 != 0) {
      if (*(char *)(iVar4 + 8) != '\0') {
        FUN_0054d260(iVar4);
        if (*(char *)(iVar4 + 8) == '\x02') {
          local_20 = *(uint **)(iVar4 + 4);
          local_28 = *local_20;
          uVar6 = *(uint *)(local_28 + 0x28);
          if (uVar6 != 0) {
LAB_0057c97a:
            if (*(char *)(iVar4 + 9) != '\0') {
              piVar11 = (int *)(iVar4 + 0xc);
              *piVar11 = *piVar11 + -1;
              if (*piVar11 == 0) {
                iVar10 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
                if (iVar10 != 0) {
                  (*DAT_00766638)(iVar10);
                }
                *(undefined1 *)(iVar4 + 10) = 0;
              }
            }
            goto LAB_0057c927;
          }
          if (((*(char *)(local_28 + 0xf) == '\x02') && (*(char *)(local_28 + 4) != '\0')) &&
             (*(char *)(local_28 + 5) == '\x01')) {
            *(undefined1 *)(local_28 + 0xf) = 1;
          }
          else {
            uVar6 = FUN_00541e00(local_28,*(undefined1 *)(local_28 + 0x12));
            if (((uVar6 & 0xff) == 0xd) || ((uVar6 & 0xff) == 10)) {
              *(uint *)(local_28 + 0x28) = uVar6;
              *(undefined1 *)(local_28 + 0xf) = 6;
            }
            if (uVar6 != 0) goto LAB_0057c97a;
          }
          *(undefined1 *)((int)local_20 + 0x13) = 1;
        }
        FUN_0052e890(iVar4);
        if (*(char *)(iVar4 + 9) != '\0') {
          piVar11 = (int *)(iVar4 + 0xc);
          *piVar11 = *piVar11 + -1;
          if (*piVar11 == 0) {
            iVar10 = *(int *)(*(int *)(iVar4 + 4) + 0x38);
            if (iVar10 != 0) {
              (*DAT_00766638)(iVar10);
            }
            *(undefined1 *)(iVar4 + 10) = 0;
          }
        }
      }
      uVar6 = 0;
    }
LAB_0057c927:
    param_2 = param_2 + 1;
    local_24 = local_24 + 0x10;
    if (uVar6 != 0) {
      return uVar6;
    }
  }
  uVar3 = 0;
  if (uVar6 != 0) {
    return uVar6;
  }
LAB_0057c9a3:
  FUN_0052f080(param_1,0x40);
  return uVar3;
}


/* FUN_0057c9c0 @ 0057c9c0  kind=lib  attributed-by=lib-island  size=186 */

undefined4 FUN_0057c9c0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar1 = *(int *)(param_1 + 0x48);
  iVar5 = *(int *)(iVar1 + 0x14) / 2;
  if (param_2 < iVar5) {
    iVar8 = *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 8);
    iVar5 = *(int *)(*(int *)(iVar1 + 0x28) + 4 + param_2 * 8);
  }
  else {
    iVar8 = (param_2 - iVar5) * 2;
    iVar5 = iVar8 + 1;
  }
  iVar7 = iVar8 * 0x30 + *(int *)(iVar1 + 0x24);
  iVar6 = iVar5 * 0x30 + *(int *)(iVar1 + 0x24);
  if (*(int *)(iVar7 + 0x18) != 0) {
    if (*(int *)(iVar6 + 0x18) == 0) {
      *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 4) = iVar8;
      return 0;
    }
    uVar2 = *(undefined4 *)(iVar7 + 0x14);
    uVar3 = *(undefined4 *)(iVar7 + 0x20);
    uVar4 = *(undefined4 *)(iVar1 + 0x34);
    if (*(int *)(iVar6 + 0x20) != 0) {
      FUN_00575bc0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(iVar6 + 0x14),*(int *)(iVar6 + 0x20)
                   ,uVar4);
    }
    iVar6 = FUN_00575a10(uVar2,uVar3,uVar4);
    if (iVar6 < 1) {
      iVar5 = iVar8;
    }
  }
  *(int *)(*(int *)(iVar1 + 0x28) + param_2 * 4) = iVar5;
  return 0;
}


/* FUN_0057ca80 @ 0057ca80  kind=lib  attributed-by=lib-island  size=158 */

int FUN_0057ca80(undefined4 param_1,int param_2,undefined4 *param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined8 local_c;
  
  puVar1 = *(uint **)(param_2 + 0x48);
  local_c = 0;
  iVar3 = 0;
  do {
    iVar5 = puVar1[9] + iVar3;
    iVar2 = FUN_0057cb20(param_1,puVar1,puVar1[2],puVar1[3],iVar5,&local_c);
    puVar1[2] = *(uint *)(iVar5 + 8);
    uVar4 = *(uint *)(iVar5 + 0xc);
    puVar1[3] = uVar4;
    if (((iVar2 != 0) || ((int)puVar1[1] < (int)uVar4)) ||
       (((int)puVar1[1] <= (int)uVar4 && (*puVar1 <= puVar1[2])))) break;
    iVar3 = iVar3 + 0x30;
  } while (iVar3 < 0x300);
  uVar4 = puVar1[5];
  while ((iVar2 == 0 && (uVar4 = uVar4 - 1, 0 < (int)uVar4))) {
    iVar2 = FUN_0057c9c0(param_2,uVar4);
  }
  *param_3 = (undefined4)local_c;
  local_c._4_4_ = (undefined4)((ulonglong)local_c >> 0x20);
  param_3[1] = local_c._4_4_;
  return iVar2;
}


/* FUN_0057cb20 @ 0057cb20  kind=lib  attributed-by=lib-island  size=268 */

int FUN_0057cb20(int param_1,uint *param_2,uint param_3,uint param_4,uint *param_5,uint *param_6)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  puVar1 = param_5;
  uVar4 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x10) + 4) + 4) + 0x20);
  param_5[6] = param_2[0xb];
  *param_5 = param_3;
  param_5[1] = param_4;
  param_5[4] = 0x80;
  uVar2 = FUN_00552230(param_1,0x80);
  puVar1[7] = uVar2;
  puVar1[10] = uVar4;
  uVar2 = FUN_00552230(param_1,uVar4);
  puVar1[9] = uVar2;
  if (uVar2 == 0) {
    return 7;
  }
  param_5 = (uint *)__allrem(param_3,param_4,uVar4,(int)uVar4 >> 0x1f);
  if (param_5 != (uint *)0x0) {
    uVar4 = uVar4 - (int)param_5;
    iVar3 = ((int)uVar4 >> 0x1f) + param_4 + (uint)CARRY4(uVar4,param_3);
    if (((int)param_2[1] <= iVar3) && (((int)param_2[1] < iVar3 || (*param_2 < uVar4 + param_3)))) {
      uVar4 = *param_2 - param_3;
    }
    iVar3 = (**(code **)(*(int *)param_2[0xb] + 8))
                      ((int *)param_2[0xb],uVar2 + (int)param_5,uVar4,param_3,param_4);
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  puVar1[2] = *param_2;
  puVar1[3] = param_2[1];
  iVar3 = FUN_0057ce10(param_1,puVar1,&param_3);
  puVar1[2] = *puVar1 + param_3;
  puVar1[3] = puVar1[1] + param_4 + (uint)CARRY4(*puVar1,param_3);
  uVar4 = *param_6;
  *param_6 = *param_6 + param_3;
  param_6[1] = param_6[1] + param_4 + (uint)CARRY4(uVar4,param_3);
  if (iVar3 == 0) {
    iVar3 = FUN_0057cc30(param_1,puVar1);
  }
  return iVar3;
}


/* FUN_0057cc30 @ 0057cc30  kind=lib  attributed-by=lib-island  size=126 */

int FUN_0057cc30(undefined4 param_1,uint *param_2)

{
  int iVar1;
  undefined8 local_c;
  
  local_c = 0;
  if (((int)param_2[3] <= (int)param_2[1]) &&
     (((int)param_2[3] < (int)param_2[1] || (param_2[2] <= *param_2)))) {
    FUN_005521a0(param_1,param_2[7]);
    FUN_005521a0(param_1,param_2[9]);
    memset(param_2,0,0x30);
    return 0;
  }
  iVar1 = FUN_0057ce10(param_1,param_2,&local_c);
  if (iVar1 == 0) {
    param_2[5] = (uint)local_c;
    iVar1 = FUN_0057ccb0(param_1,param_2,(uint)local_c,param_2 + 8);
  }
  return iVar1;
}


/* FUN_0057ccb0 @ 0057ccb0  kind=lib  attributed-by=lib-island  size=347 */

int FUN_0057ccb0(undefined4 param_1,uint *param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  size_t _Size;
  uint uVar7;
  uint uVar8;
  size_t sVar9;
  
  puVar3 = param_2;
  uVar7 = param_2[10];
  uVar8 = *param_2;
  iVar6 = (int)uVar7 >> 0x1f;
  param_2 = (uint *)__allrem(uVar8,param_2[1],uVar7,iVar6);
  if (param_2 == (void *)0x0) {
    iVar5 = (puVar3[3] - puVar3[1]) - (uint)(puVar3[2] < uVar8);
    if ((iVar5 < iVar6) || ((iVar5 <= iVar6 && (puVar3[2] - uVar8 <= uVar7)))) {
      uVar7 = puVar3[2] - uVar8;
    }
    iVar6 = (**(code **)(*(int *)puVar3[6] + 8))((int *)puVar3[6],puVar3[9],uVar7,uVar8,puVar3[1]);
    if (iVar6 != 0) {
      return iVar6;
    }
  }
  uVar7 = param_3;
  uVar8 = puVar3[10] - (int)param_2;
  if ((int)param_3 <= (int)uVar8) {
    *param_4 = puVar3[9] + (int)param_2;
    uVar7 = *puVar3;
    *puVar3 = *puVar3 + param_3;
    puVar3[1] = puVar3[1] + ((int)param_3 >> 0x1f) + (uint)CARRY4(uVar7,param_3);
    return 0;
  }
  uVar1 = puVar3[4];
  if ((int)uVar1 < (int)param_3) {
    do {
      uVar1 = uVar1 * 2;
    } while ((int)uVar1 < (int)param_3);
    uVar2 = puVar3[7];
    uVar4 = FUN_00552390(param_1,uVar2,uVar1);
    if (uVar4 == 0) {
      FUN_005521a0(param_1,uVar2);
    }
    puVar3[7] = uVar4;
    if (uVar4 == 0) {
      return 7;
    }
    puVar3[4] = uVar1;
  }
  memcpy((void *)puVar3[7],(void *)(puVar3[9] + (int)param_2),uVar8);
  uVar1 = *puVar3;
  *puVar3 = *puVar3 + uVar8;
  puVar3[1] = puVar3[1] + ((int)uVar8 >> 0x1f) + (uint)CARRY4(uVar1,uVar8);
  sVar9 = uVar7 - uVar8;
  while( true ) {
    if ((int)sVar9 < 1) {
      *param_4 = puVar3[7];
      return 0;
    }
    _Size = sVar9;
    if ((int)puVar3[10] < (int)sVar9) {
      _Size = puVar3[10];
    }
    iVar6 = FUN_0057ccb0(param_1,puVar3,_Size,&param_2);
    if (iVar6 != 0) break;
    memcpy((void *)((puVar3[7] - sVar9) + param_3),param_2,_Size);
    sVar9 = sVar9 - _Size;
  }
  return iVar6;
}


/* FUN_0057ce10 @ 0057ce10  kind=lib  attributed-by=lib-island  size=185 */

void FUN_0057ce10(undefined4 param_1,uint *param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  char *local_20;
  undefined4 local_1c;
  char local_18 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_1c = param_3;
  uVar4 = param_2[10];
  iVar2 = __allrem(*param_2,param_2[1],uVar4,(int)uVar4 >> 0x1f);
  if ((iVar2 != 0) && (8 < (int)(uVar4 - iVar2))) {
    uVar3 = FUN_0055a920(param_2[9] + iVar2,local_1c);
    uVar4 = *param_2;
    *param_2 = *param_2 + (uVar3 & 0xff);
    param_2[1] = param_2[1] + (uint)CARRY4(uVar4,uVar3 & 0xff);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar4 = 0;
  do {
    iVar2 = FUN_0057ccb0(param_1,param_2,1,&local_20);
    if (iVar2 != 0) goto LAB_0057ceb8;
    cVar1 = *local_20;
    uVar3 = uVar4 & 0xf;
    uVar4 = uVar4 + 1;
    local_18[uVar3] = cVar1;
  } while (cVar1 < '\0');
  FUN_0055a920(local_18,local_1c);
LAB_0057ceb8:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057ced0 @ 0057ced0  kind=lib  attributed-by=lib-island  size=294 */

void FUN_0057ced0(undefined4 param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = *(undefined4 **)(param_2 + 0x48);
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
  iVar4 = FUN_0057d1b0(param_2);
  if ((iVar4 == 0) &&
     ((puVar1[0xb] != 0 || (iVar4 = FUN_0057d0a0(param_1,puVar1 + 0xb), iVar4 == 0)))) {
    FUN_00536a00(param_1,puVar1[0xb],&local_44,*puVar1,puVar1[1]);
    puVar1[6] = puVar1[6] + 1;
    uVar5 = FUN_00563680(local_14,puVar1[4],(int)puVar1[4] >> 0x1f);
    FUN_00536a90(&local_44,local_14,uVar5);
    puVar3 = (undefined4 *)puVar1[0xc];
    uVar5 = param_1;
    while (puVar3 != (undefined4 *)0x0) {
      puVar2 = (undefined4 *)puVar3[2];
      uVar5 = FUN_00563680(local_14,puVar3[1],(int)puVar3[1] >> 0x1f);
      FUN_00536a90(&local_44,local_14,uVar5);
      FUN_00536a90(&local_44,*puVar3,puVar3[1]);
      FUN_005521a0(param_1,puVar3);
      puVar1 = local_1c;
      puVar3 = puVar2;
      uVar5 = local_18;
    }
    puVar1[0xc] = 0;
    FUN_00536970(uVar5,&local_44,puVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057d000 @ 0057d000  kind=lib  attributed-by=lib-island  size=158 */

void FUN_0057d000(int param_1,int *param_2,int *param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  bool bVar6;
  int local_8;
  
  local_8 = 0;
  piVar5 = &local_8;
  if (param_3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *param_3;
  }
  bVar6 = param_2 == (int *)0x0;
  if (!bVar6) {
    do {
      if (param_3 == (int *)0x0) break;
      iVar1 = param_2[1];
      iVar2 = *param_2;
      uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x48) + 0x34);
      if (iVar4 != 0) {
        FUN_00575bc0(*(undefined4 *)(param_1 + 8),param_3[1],iVar4,uVar3);
      }
      iVar4 = FUN_00575a10(iVar1,iVar2,uVar3);
      if (iVar4 < 1) {
        *piVar5 = (int)param_2;
        piVar5 = param_2 + 2;
        iVar4 = 0;
        param_2 = (int *)*piVar5;
      }
      else {
        *piVar5 = (int)param_3;
        piVar5 = param_3 + 2;
        param_3 = (int *)*piVar5;
        if (param_3 == (int *)0x0) break;
        iVar4 = *param_3;
      }
    } while (param_2 != (int *)0x0);
    bVar6 = param_2 == (int *)0x0;
  }
  if (!bVar6) {
    param_3 = param_2;
  }
  *piVar5 = (int)param_3;
  *param_4 = local_8;
  return;
}


/* FUN_0057d0a0 @ 0057d0a0  kind=lib  attributed-by=lib-island  size=103 */

int FUN_0057d0a0(int *param_1,undefined4 *param_2)

{
  size_t _Size;
  void *_Dst;
  int iVar1;
  
  iVar1 = *param_1;
  _Size = *(size_t *)(iVar1 + 4);
  _Dst = (void *)FUN_0055da00(_Size);
  if (_Dst == (void *)0x0) {
    return 7;
  }
  memset(_Dst,0,_Size);
  iVar1 = (**(code **)(iVar1 + 0x18))(iVar1,0,_Dst,0x101e,&param_1);
  if (iVar1 != 0) {
    FUN_00524410(_Dst);
    return iVar1;
  }
  *param_2 = _Dst;
  return 0;
}


/* FUN_0057d110 @ 0057d110  kind=lib  attributed-by=lib-island  size=145 */

void FUN_0057d110(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
joined_r0x0057d118:
  do {
    if (param_2 == (undefined4 *)0x0) {
      return;
    }
    puVar1 = (undefined4 *)param_2[2];
    if (param_1 != 0) {
      if (*(int *)(param_1 + 0x1f0) != 0) {
        if ((param_2 < *(undefined4 **)(param_1 + 0x104)) ||
           (*(undefined4 **)(param_1 + 0x108) <= param_2)) {
          iVar2 = (*DAT_00766608._4_4_)(param_2);
          **(int **)(param_1 + 0x1f0) = **(int **)(param_1 + 0x1f0) + iVar2;
          param_2 = puVar1;
        }
        else {
          **(int **)(param_1 + 0x1f0) =
               **(int **)(param_1 + 0x1f0) + (uint)*(ushort *)(param_1 + 0xe8);
          param_2 = puVar1;
        }
        goto joined_r0x0057d118;
      }
      if ((*(undefined4 **)(param_1 + 0x104) <= param_2) &&
         (param_2 < *(undefined4 **)(param_1 + 0x108))) {
        *param_2 = *(undefined4 *)(param_1 + 0x100);
        *(int *)(param_1 + 0xec) = *(int *)(param_1 + 0xec) + -1;
        *(undefined4 **)(param_1 + 0x100) = param_2;
        param_2 = puVar1;
        goto joined_r0x0057d118;
      }
    }
    FUN_00524410(param_2);
    param_2 = puVar1;
  } while( true );
}


/* FUN_0057d1b0 @ 0057d1b0  kind=lib  attributed-by=lib-island  size=211 */

undefined4 FUN_0057d1b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *_Dst;
  int iVar4;
  int iVar5;
  int local_8;
  
  iVar2 = *(int *)(param_1 + 0x48);
  _Dst = (int *)FUN_0055da00(0x100);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0x100);
    local_8 = *(int *)(iVar2 + 0x30);
    while (local_8 != 0) {
      iVar4 = *(int *)(local_8 + 8);
      iVar5 = 0;
      *(undefined4 *)(local_8 + 8) = 0;
      iVar3 = *_Dst;
      piVar1 = _Dst;
      while (iVar3 != 0) {
        FUN_0057d000(param_1,local_8,*piVar1,&local_8);
        iVar5 = iVar5 + 1;
        *piVar1 = 0;
        piVar1 = _Dst + iVar5;
        iVar3 = *piVar1;
      }
      _Dst[iVar5] = local_8;
      local_8 = iVar4;
    }
    local_8 = 0;
    iVar4 = 0;
    do {
      FUN_0057d000(param_1,local_8,_Dst[iVar4],&local_8);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 0x40);
    *(int *)(iVar2 + 0x30) = local_8;
    FUN_00524410(_Dst);
    return 0;
  }
  return 7;
}


/* FUN_0057d290 @ 0057d290  kind=lib  attributed-by=lib-island  size=349 */

undefined4 FUN_0057d290(int *param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  
  if (param_1 == (int *)0x0) {
    pcVar2 = "API called with NULL prepared statement";
  }
  else {
    if (*param_1 != 0) {
      iVar1 = *(int *)(*param_1 + 0xc);
      if (iVar1 != 0) {
        (*DAT_00766630)(iVar1);
      }
      if ((param_1[0xc] == -0x420df25d) && (param_1[0x15] < 0)) {
        if ((0 < param_2) && (param_2 <= (short)param_1[0x13])) {
          param_2 = param_2 + -1;
          iVar1 = param_1[0x11] + param_2 * 0x28;
          FUN_00574d40(iVar1);
          *(undefined2 *)(iVar1 + 0x1c) = 1;
          FUN_00553890(*param_1,0,0);
          if (((param_1[0x18] & 0x200U) != 0) &&
             (((param_2 < 0x20 && ((param_1[0x2b] & 1 << ((byte)param_2 & 0x1f)) != 0)) ||
              (param_1[0x2b] == -1)))) {
            param_1[0x18] = param_1[0x18] | 0x20;
          }
          return 0;
        }
        FUN_00553890(*param_1,0x19,0);
        if (*(int *)(*param_1 + 0xc) != 0) {
          (*DAT_00766638)(*(int *)(*param_1 + 0xc));
        }
        return 0x19;
      }
      FUN_00553890(*param_1,0x15,0);
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      }
      FUN_00525a30(0x15,"bind on a busy prepared statement: [%s]",param_1[0x26]);
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf556,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    pcVar2 = "API called with finalized prepared statement";
  }
  FUN_00525a30(0x15,pcVar2);
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0xf54e,"c0e09560d26f0a6456be9dd3447f5311eb4f238f"
              );
  return 0x15;
}


/* FUN_0057d3f0 @ 0057d3f0  kind=lib  attributed-by=lib-island  size=68 */

void FUN_0057d3f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 != 0) {
    if (DAT_0076b3b8 == param_1) {
      DAT_0076b3b8 = *(undefined4 *)(param_1 + 0xc);
      return;
    }
    if (DAT_0076b3b8 != 0) {
      iVar1 = *(int *)(DAT_0076b3b8 + 0xc);
      iVar3 = DAT_0076b3b8;
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


/* FUN_0057d440 @ 0057d440  kind=lib  attributed-by=lib-string  size=227 */

int FUN_0057d440(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  
  piVar1 = (int *)param_2[0xe];
  if (piVar1 != (int *)0x0) {
    do {
      if (*piVar1 == *param_1) break;
      piVar1 = (int *)piVar1[6];
    } while (piVar1 != (int *)0x0);
  }
  piVar1 = (int *)piVar1[2];
  uVar2 = (**(code **)(*piVar1 + 0xc))(piVar1,param_3);
  if (uVar2 != 0) {
    if (uVar2 == 7) {
      *(undefined1 *)(*param_1 + 0x38) = 1;
    }
    else {
      pcVar3 = (char *)piVar1[2];
      if ((char *)piVar1[2] == (char *)0x0) {
        if (uVar2 == 0x204) {
          pcVar3 = "abort due to ROLLBACK";
        }
        else {
          pcVar3 = "unknown error";
          if (((uVar2 & 0xff) < 0x1b) &&
             ((&PTR_s_not_an_error_007123d0)[uVar2 & 0xff] != (char *)0x0)) {
            pcVar3 = (&PTR_s_not_an_error_007123d0)[uVar2 & 0xff];
          }
        }
      }
      FUN_00553950(param_1,&DAT_00716900,pcVar3);
    }
  }
  FUN_00524410(piVar1[2]);
  piVar1[2] = 0;
  iVar4 = 0;
  if (0 < *param_3) {
    iVar5 = 0;
    do {
      if ((*(char *)(param_3[1] + 5 + iVar5) == '\0') && (0 < *(int *)(param_3[4] + iVar4 * 8))) {
        FUN_00553950(param_1,"table %s: xBestIndex returned an invalid plan",*param_2);
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0xc;
    } while (iVar4 < *param_3);
    return param_1[0x11];
  }
  return param_1[0x11];
}


/* FUN_0057d530 @ 0057d530  kind=lib  attributed-by=lib-island  size=759 */

int FUN_0057d530(int param_1,undefined4 *param_2,undefined4 *param_3,code *param_4,
                undefined4 *param_5)

{
  ushort *puVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  int *local_28;
  undefined4 *local_24;
  char *local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_14 = 0;
  local_18 = param_2[0xd];
  local_10 = param_2[0xc];
  local_c = FUN_0055d980(param_1,&DAT_00716900,*param_2);
  if (local_c == 0) {
    return 7;
  }
  piVar3 = (int *)FUN_00552230(param_1,0x1c);
  if (piVar3 == (int *)0x0) {
    FUN_005521a0(param_1,local_c);
    return 7;
  }
  piVar3[0] = 0;
  piVar3[1] = 0;
  piVar3[2] = 0;
  piVar3[3] = 0;
  piVar3[4] = 0;
  piVar3[5] = 0;
  piVar3[6] = 0;
  *piVar3 = param_1;
  piVar3[1] = (int)param_3;
  iVar4 = FUN_00565260(param_1,param_2[0x10]);
  *(undefined4 *)(param_2[0xd] + 4) = *(undefined4 *)(*(int *)(param_1 + 0x10) + iVar4 * 0x10);
  uVar5 = *(undefined4 *)(param_1 + 0x134);
  *(int ***)(param_1 + 0x134) = &local_28;
  local_24 = param_2;
  local_28 = piVar3;
  local_10 = (*param_4)(param_1,param_3[2],local_10,local_18,piVar3 + 2,&local_14);
  iVar4 = local_c;
  *(undefined4 *)(param_1 + 0x134) = uVar5;
  if (local_10 == 7) {
    *(undefined1 *)(param_1 + 0x38) = 1;
  }
  else if (local_10 == 0) {
    if ((undefined4 *)piVar3[2] == (undefined4 *)0x0) {
      FUN_005521a0(param_1,local_c);
      return 0;
    }
    *(undefined4 *)piVar3[2] = *param_3;
    piVar3[3] = 1;
    if (local_24 != (undefined4 *)0x0) {
      uVar5 = FUN_0055d980(param_1,"vtable constructor did not declare schema: %s",*param_2);
      *param_5 = uVar5;
      FUN_005776a0(piVar3);
      FUN_005521a0(param_1,local_c);
      return 1;
    }
    piVar3[6] = param_2[0xe];
    param_2[0xe] = piVar3;
    local_18 = 0;
    local_10 = 0;
    if (0 < *(short *)((int)param_2 + 0x26)) {
      local_8 = 0;
      do {
        iVar9 = 0;
        iVar4 = *(int *)(param_2[1] + 0xc + local_8);
        if (iVar4 != 0) {
          iVar6 = FUN_00568070(iVar4);
          iVar7 = FUN_005259c0("hidden",iVar4,6);
          if ((iVar7 == 0) && ((*(char *)(iVar4 + 6) == '\0' || (*(char *)(iVar4 + 6) == ' ')))) {
LAB_0057d799:
            if (iVar9 < iVar6) {
              local_20 = (char *)(iVar9 + iVar4);
              iVar7 = (*(char *)(iVar9 + 6 + iVar4) != '\0') + 6;
              if (iVar7 + iVar9 <= iVar6) {
                local_1c = iVar7 - iVar4;
                pcVar8 = local_20;
                do {
                  *pcVar8 = pcVar8[iVar7];
                  pcVar8 = pcVar8 + 1;
                } while ((int)(pcVar8 + local_1c) <= iVar6);
              }
              if ((*local_20 == '\0') && (0 < iVar9)) {
                local_20[-1] = '\0';
              }
              puVar1 = (ushort *)(param_2[1] + 0x16 + local_8);
              *puVar1 = *puVar1 | 2;
            }
          }
          else {
            iVar9 = 0;
            if (0 < iVar6) {
              do {
                iVar7 = FUN_005259c0(" hidden",iVar9 + iVar4,7);
                if ((iVar7 == 0) &&
                   ((cVar2 = *(char *)(iVar9 + 7 + iVar4), cVar2 == '\0' || (cVar2 == ' ')))) {
                  iVar9 = iVar9 + 1;
                  goto LAB_0057d799;
                }
                iVar9 = iVar9 + 1;
              } while (iVar9 < iVar6);
            }
          }
        }
        local_18 = local_18 + 1;
        local_8 = local_8 + 0x18;
      } while (local_18 < *(short *)((int)param_2 + 0x26));
    }
    iVar4 = local_10;
    FUN_005521a0(param_1,local_c);
    return iVar4;
  }
  if (local_14 == 0) {
    uVar5 = FUN_0055d980(param_1,"vtable constructor failed: %s",local_c);
    *param_5 = uVar5;
  }
  else {
    uVar5 = FUN_0055d980(param_1,&DAT_00716900,local_14);
    *param_5 = uVar5;
    FUN_00524410(local_14);
    iVar4 = local_c;
  }
  FUN_005521a0(param_1,piVar3);
  iVar9 = local_10;
  FUN_005521a0(param_1,iVar4);
  return iVar9;
}


/* FUN_0057d830 @ 0057d830  kind=lib  attributed-by=lib-island  size=73 */

int * FUN_0057d830(int param_1,int param_2)

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


/* FUN_0057d880 @ 0057d880  kind=lib  attributed-by=lib-island  size=78 */

int FUN_0057d880(int param_1,code *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

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
    if (param_2 == (code *)0x0) {
      return iVar1;
    }
    if (iVar1 != 5) {
      return iVar1;
    }
    iVar1 = (*param_2)(param_3);
  } while (iVar1 != 0);
  return 5;
}


/* FUN_0057d8d0 @ 0057d8d0  kind=lib  attributed-by=lib-island  size=851 */

/* WARNING: Removing unreachable block (ram,0x0057da59) */

int FUN_0057d8d0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                undefined4 param_6)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  longlong lVar6;
  undefined8 uVar7;
  uint local_3c;
  undefined4 local_38;
  undefined8 local_34;
  uint local_2c;
  uint local_28;
  uint local_24;
  uint local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  uint *local_10;
  undefined4 local_c;
  uint local_8;
  
  local_14 = (*(ushort *)(param_1 + 0x42) & 1) * 0x10000 + (*(ushort *)(param_1 + 0x42) & 0xfe00);
  iVar5 = **(int **)(param_1 + 0x20);
  puVar2 = (uint *)(iVar5 + 0x60);
  local_1c = 0;
  local_18 = 0;
  local_20 = 0;
  if (*(uint *)(param_1 + 0x44) <= *puVar2) {
    return 0;
  }
  iVar3 = FUN_0057e9f0(param_1,&local_1c);
  if (iVar3 != 0) {
    return iVar3;
  }
  local_24 = *(uint *)(param_1 + 0x48);
  local_c = 0;
  if (param_2 != 0) {
    local_c = param_3;
  }
  uVar4 = *(uint *)(param_1 + 0x44);
  local_10 = (uint *)(iVar5 + 0x68);
  iVar5 = 1;
  iVar3 = 0;
  local_8 = uVar4;
  do {
    local_28 = *local_10;
    if (local_28 < uVar4) {
      iVar3 = FUN_0057d880(param_1,local_c,param_4,iVar5 + 3,1);
      if (iVar3 == 0) {
        uVar4 = 0xffffffff;
        if (iVar5 == 1) {
          uVar4 = local_8;
        }
        *local_10 = uVar4;
        uVar4 = local_8;
        if (*(char *)(param_1 + 0x2b) == '\0') {
          (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar5 + 3,1,9);
          uVar4 = local_8;
        }
      }
      else {
        if (iVar3 != 5) goto LAB_0057dc0f;
        local_8 = local_28;
        local_c = 0;
        uVar4 = local_28;
      }
    }
    iVar5 = iVar5 + 1;
    local_10 = local_10 + 1;
  } while (iVar5 < 5);
  if (*puVar2 < uVar4) {
    iVar3 = FUN_0057d880(param_1,local_c,param_4,3,1);
    if (iVar3 == 0) {
      local_2c = *puVar2;
      if (param_5 == 0) {
LAB_0057da13:
        local_10 = (uint *)((int)local_14 >> 0x1f);
        local_28 = local_14;
        local_34 = __allmul(local_24,0,local_14,local_10);
        iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x18))(*(int **)(param_1 + 4),&local_3c);
        if (iVar3 == 0) {
          uVar4 = local_8;
          if (CONCAT44(local_38,local_3c) < local_34) {
            (**(code **)(**(int **)(param_1 + 4) + 0x28))(*(int **)(param_1 + 4),5,&local_34);
            uVar4 = local_8;
          }
          do {
            do {
              iVar5 = FUN_0057eb80(local_1c,&local_18,&local_20);
              if (iVar5 != 0) {
                if (uVar4 == *(uint *)(**(int **)(param_1 + 0x20) + 0x10)) {
                  uVar7 = __allmul(*(undefined4 *)(param_1 + 0x48),0,local_28,local_10);
                  iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x10))
                                    (*(int **)(param_1 + 4),uVar7);
                  if (iVar3 != 0) goto LAB_0057db10;
                  if (param_5 != 0) {
                    iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x14))
                                      (*(int **)(param_1 + 4),param_5);
                    if (iVar3 != 0) goto LAB_0057db10;
                  }
                }
                *puVar2 = uVar4;
                goto LAB_0057db10;
              }
            } while (((local_20 <= local_2c) || (uVar4 < local_20)) || (local_24 < local_18));
            piVar1 = *(int **)(param_1 + 8);
            iVar5 = *piVar1;
            lVar6 = __allmul(local_14 + 0x18,(int)(local_14 + 0x18) >> 0x1f,local_20 - 1,0);
            iVar3 = (**(code **)(iVar5 + 8))(piVar1,param_6,local_14,lVar6 + 0x38);
            if (iVar3 != 0) break;
            piVar1 = *(int **)(param_1 + 4);
            iVar5 = *piVar1;
            uVar7 = __allmul(local_18 - 1,0,local_28,local_10);
            iVar3 = (**(code **)(iVar5 + 0xc))(piVar1,param_6,local_14,uVar7);
            uVar4 = local_8;
          } while (iVar3 == 0);
        }
      }
      else {
        iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x14))(*(int **)(param_1 + 8),param_5);
        if (iVar3 == 0) goto LAB_0057da13;
      }
LAB_0057db10:
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),3,1,9);
      }
    }
  }
  if (iVar3 == 5) {
    iVar3 = 0;
  }
  else if (iVar3 != 0) goto LAB_0057dc0f;
  if (param_2 != 0) {
    if (*puVar2 < *(uint *)(param_1 + 0x44)) {
      FUN_005652a0(local_1c);
      return 5;
    }
    if (param_2 == 2) {
      iVar3 = FUN_0057d880(param_1,local_c,param_4,4,4);
      if ((iVar3 == 0) && (*(char *)(param_1 + 0x2b) == '\0')) {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),4,4,9);
      }
    }
  }
LAB_0057dc0f:
  FUN_005652a0(local_1c);
  return iVar3;
}


/* FUN_0057dc30 @ 0057dc30  kind=lib  attributed-by=lib-island  size=185 */

void FUN_0057dc30(int param_1,uint *param_2,int param_3,int *param_4,int *param_5)

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


/* FUN_0057dcf0 @ 0057dcf0  kind=lib  attributed-by=lib-island  size=165 */

void FUN_0057dcf0(int param_1)

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
    iVar1 = FUN_0057e140(param_1,uVar3,&local_8);
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


/* FUN_0057dda0 @ 0057dda0  kind=lib  attributed-by=lib-island  size=263 */

undefined4
FUN_0057dda0(int param_1,int *param_2,undefined4 *param_3,undefined4 param_4,undefined1 *param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  piVar1 = (int *)(param_1 + 0x4c);
  if ((*(int *)(param_1 + 0x54) != *(int *)(param_5 + 8)) ||
     (*(int *)(param_1 + 0x58) != *(int *)(param_5 + 0xc))) {
    return 0;
  }
  iVar2 = CONCAT31(CONCAT21(CONCAT11(*param_5,param_5[1]),param_5[2]),param_5[3]);
  if (iVar2 != 0) {
    bVar3 = *(char *)(param_1 + 0x41) == '\0';
    FUN_0057dc30(bVar3,param_5,8,piVar1,piVar1);
    FUN_0057dc30(bVar3,param_4,*(undefined4 *)(param_1 + 0x24),piVar1,piVar1);
    if ((*piVar1 ==
         CONCAT31(CONCAT21(CONCAT11(param_5[0x10],param_5[0x11]),param_5[0x12]),param_5[0x13])) &&
       (*(int *)(param_1 + 0x50) ==
        CONCAT31(CONCAT21(CONCAT11(param_5[0x14],param_5[0x15]),param_5[0x16]),param_5[0x17]))) {
      *param_2 = iVar2;
      *param_3 = CONCAT31(CONCAT21(CONCAT11(param_5[4],param_5[5]),param_5[6]),param_5[7]);
      return 1;
    }
  }
  return 0;
}


/* FUN_0057deb0 @ 0057deb0  kind=lib  attributed-by=lib-island  size=189 */

void FUN_0057deb0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 *param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  bool bVar3;
  
  *param_5 = (char)((uint)param_2 >> 0x18);
  param_5[3] = (char)param_2;
  param_5[1] = (char)((uint)param_2 >> 0x10);
  param_5[2] = (char)((uint)param_2 >> 8);
  param_5[4] = (char)((uint)param_3 >> 0x18);
  param_5[5] = (char)((uint)param_3 >> 0x10);
  param_5[6] = (char)((uint)param_3 >> 8);
  param_5[7] = (char)param_3;
  *(undefined4 *)(param_5 + 8) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)(param_1 + 0x58);
  bVar3 = *(char *)(param_1 + 0x41) == '\0';
  puVar1 = (undefined4 *)(param_1 + 0x4c);
  FUN_0057dc30(bVar3,param_5,8,puVar1,puVar1);
  FUN_0057dc30(bVar3,param_4,*(undefined4 *)(param_1 + 0x24),puVar1,puVar1);
  uVar2 = *puVar1;
  param_5[0x10] = (char)((uint)uVar2 >> 0x18);
  param_5[0x11] = (char)((uint)uVar2 >> 0x10);
  param_5[0x12] = (char)((uint)uVar2 >> 8);
  param_5[0x13] = (char)uVar2;
  uVar2 = *(undefined4 *)(param_1 + 0x50);
  param_5[0x14] = (char)((uint)uVar2 >> 0x18);
  param_5[0x15] = (char)((uint)uVar2 >> 0x10);
  param_5[0x16] = (char)((uint)uVar2 >> 8);
  param_5[0x17] = (char)uVar2;
  return;
}


/* FUN_0057df70 @ 0057df70  kind=lib  attributed-by=lib-island  size=235 */

int FUN_0057df70(undefined4 param_1,void *param_2,int param_3)

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
  iVar6 = FUN_0057e140(param_1,uVar8,&param_2);
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
      FUN_0057dcf0(param_1);
    }
    uVar8 = param_3 * 0x17f & 0x1fff;
    sVar2 = *(short *)((int)pvVar5 + uVar8 * 2 + 0x4000);
    iVar3 = iVar7;
    while (sVar2 != 0) {
      if (iVar3 == 0) {
        FUN_00525a30(0xb,"database corruption at line %d of [%.10s]",0xb0e1,
                     "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
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


/* FUN_0057e060 @ 0057e060  kind=lib  attributed-by=lib-island  size=219 */

void FUN_0057e060(int param_1)

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
          if (DAT_007665e0 == 0) {
            (*DAT_00766604)(iVar1);
          }
          else {
            if (DAT_0076b488 != 0) {
              (*DAT_00766630)(DAT_0076b488);
            }
            iVar2 = (*DAT_00766608._4_4_)(iVar1);
            DAT_0076b360 = DAT_0076b360 - iVar2;
            if (DAT_0076b388 < DAT_0076b360) {
              DAT_0076b388 = DAT_0076b360;
            }
            DAT_0076b384 = DAT_0076b384 + -1;
            if (DAT_0076b3ac < DAT_0076b384) {
              DAT_0076b3ac = DAT_0076b384;
            }
            (*DAT_00766604)(iVar1);
            if (DAT_0076b488 != 0) {
              (*DAT_00766638)(DAT_0076b488);
            }
          }
        }
        iVar3 = iVar3 + 1;
        *(undefined4 *)(*(int *)(param_1 + 0x20) + -4 + iVar3 * 4) = 0;
      } while (iVar3 < *(int *)(param_1 + 0x18));
    }
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0057e139. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)(param_1 + 4) + 0x40))();
  return;
}


/* FUN_0057e140 @ 0057e140  kind=lib  attributed-by=lib-island  size=275 */

int FUN_0057e140(int param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  void *_Dst;
  int iVar4;
  
  iVar4 = 0;
  if (param_2 < *(int *)(param_1 + 0x18)) {
LAB_0057e1ae:
    iVar3 = param_2 * 4;
    piVar1 = (int *)(*(int *)(param_1 + 0x20) + param_2 * 4);
    if (*piVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) == '\x02') {
        _Dst = (void *)FUN_0055da00(0x8000);
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
  uVar2 = *(undefined4 *)(param_1 + 0x20);
  iVar3 = FUN_00579f80();
  if (iVar3 == 0) {
    iVar3 = FUN_00563800(uVar2,param_2 * 4 + 4);
    if (iVar3 != 0) {
      memset((void *)(iVar3 + *(int *)(param_1 + 0x18) * 4),0,
             (param_2 - *(int *)(param_1 + 0x18)) * 4 + 4);
      *(int *)(param_1 + 0x20) = iVar3;
      *(int *)(param_1 + 0x18) = param_2 + 1;
      goto LAB_0057e1ae;
    }
  }
  *param_3 = 0;
  return 7;
}


/* FUN_0057e260 @ 0057e260  kind=lib  attributed-by=lib-island  size=319 */

int FUN_0057e260(int param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int local_8;
  
  iVar1 = FUN_0057e140(param_1,0,&local_8);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (local_8 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = FUN_0057e710(param_1,param_2);
    iVar2 = 0;
    if (iVar1 == 0) goto LAB_0057e36f;
  }
  if ((*(byte *)(param_1 + 0x2e) & 2) == 0) {
    if ((*(char *)(param_1 + 0x2b) != '\0') ||
       (iVar2 = (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,10),
       iVar2 == 0)) {
      *(undefined1 *)(param_1 + 0x2c) = 1;
      iVar2 = FUN_0057e140(param_1,0,&local_8);
      if ((iVar2 == 0) && (iVar1 = FUN_0057e710(param_1,param_2), iVar1 != 0)) {
        iVar2 = FUN_0057e3a0(param_1);
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
      if (iVar2 != 0) goto LAB_0057e36b;
      if (*(char *)(param_1 + 0x2b) == '\0') {
        (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),0,1,5);
      }
    }
    iVar2 = 0x108;
  }
LAB_0057e36b:
  if (iVar1 != 0) {
    return iVar2;
  }
LAB_0057e36f:
  if (*(int *)(param_1 + 0x34) != 0x2de218) {
    FUN_00525a30(0xe,"cannot open file at line %d of [%.10s]",0xb4c9,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    iVar2 = 0xe;
  }
  return iVar2;
}


/* FUN_0057e3a0 @ 0057e3a0  kind=lib  attributed-by=lib-island  size=872 */

void FUN_0057e3a0(int param_1)

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
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_30;
  int local_2c;
  undefined1 local_28;
  undefined1 local_27;
  undefined1 local_26;
  undefined1 local_25;
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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar7 = *(byte *)(param_1 + 0x2d) + 1;
  local_58 = 8 - iVar7;
  local_4c = 0;
  local_48 = 0;
  if ((*(char *)(param_1 + 0x2b) == '\0') &&
     (iVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                        (*(int **)(param_1 + 4),iVar7,local_58,10), iVar3 != 0)) goto LAB_0057e6f1;
  memset((void *)(param_1 + 0x34),0,0x30);
  iVar3 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_40);
  if (iVar3 == 0) {
    if ((-1 < local_3c) && ((0 < local_3c || (0x20 < local_40)))) {
      iVar3 = (**(code **)(**(int **)(param_1 + 8) + 8))(*(int **)(param_1 + 8),&local_28,0x20,0,0);
      if (iVar3 != 0) goto LAB_0057e6d3;
      uVar2 = CONCAT21(CONCAT11(local_28,local_27),local_26);
      uVar8 = CONCAT31(CONCAT21(CONCAT11(local_20,local_1f),local_1e),local_1d);
      if ((((CONCAT31(uVar2,local_25) & 0xfffffffe) == 0x377f0682) && ((uVar8 & uVar8 - 1) == 0)) &&
         (uVar8 - 0x200 < 0xfe01)) {
        local_30 = CONCAT31(uVar2,local_25) & 0xffffff01;
        *(char *)(param_1 + 0x41) = (char)local_30;
        *(uint *)(param_1 + 0x24) = uVar8;
        uVar4 = FUN_00559fd0(local_1c);
        *(undefined4 *)(param_1 + 0x68) = uVar4;
        *(undefined4 *)(param_1 + 0x54) = local_18;
        *(undefined4 *)(param_1 + 0x58) = local_14;
        FUN_0057dc30((char)local_30 == '\0',&local_28,0x18,0,param_1 + 0x4c);
        iVar3 = FUN_00559fd0(local_10);
        if ((*(int *)(param_1 + 0x4c) == iVar3) &&
           (iVar3 = FUN_00559fd0(local_c), *(int *)(param_1 + 0x50) == iVar3)) {
          iVar3 = FUN_00559fd0(local_24);
          if (iVar3 == 0x2de218) {
            iVar3 = FUN_00579f80();
            if ((iVar3 != 0) || (local_34 = FUN_0055da00(uVar8 + 0x18), local_34 == 0))
            goto LAB_0057e6d3;
            local_54 = local_34 + 0x18;
            uVar1 = uVar8 + 0x18;
            local_30 = (int)uVar1 >> 0x1f;
            iVar6 = local_30 + (0xffffffdf < uVar1);
            local_2c = 0;
            local_38 = 0x20;
            local_44 = 0;
            iVar3 = 0;
            if ((iVar6 <= local_3c) && ((iVar6 < local_3c || (uVar8 + 0x38 <= local_40)))) {
              while( true ) {
                local_2c = local_2c + 1;
                iVar3 = FUN_0055ea00(*(undefined4 *)(param_1 + 8),local_34,uVar8 + 0x18,local_38,
                                     local_44);
                if ((iVar3 != 0) ||
                   ((iVar6 = FUN_0057dda0(param_1,&local_50,&local_5c,local_54,local_34), iVar6 == 0
                    || (iVar3 = FUN_0057df70(param_1,local_2c,local_50), iVar3 != 0)))) break;
                if (local_5c != 0) {
                  *(int *)(param_1 + 0x44) = local_2c;
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
            FUN_00524410(local_34);
          }
          else {
            iVar3 = FUN_0054f780(0xb164);
          }
          if (iVar3 != 0) goto LAB_0057e6d3;
        }
      }
    }
    *(undefined4 *)(param_1 + 0x4c) = local_4c;
    *(undefined4 *)(param_1 + 0x50) = local_48;
    FUN_0057e910(param_1);
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
      FUN_00525a30(0,"Recovered %d frames from WAL file %s",*(int *)(param_1 + 0x48),
                   *(undefined4 *)(param_1 + 100));
    }
  }
LAB_0057e6d3:
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),iVar7,local_58,9);
  }
LAB_0057e6f1:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057e710 @ 0057e710  kind=lib  attributed-by=lib-island  size=496 */

void FUN_0057e710(int param_1,undefined4 *param_2)

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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
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
    if (*piVar8 != *piVar10) goto LAB_0057e8f5;
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
LAB_0057e8f5:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0057e910 @ 0057e910  kind=lib  attributed-by=lib-island  size=215 */

void FUN_0057e910(int param_1)

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


/* FUN_0057e9f0 @ 0057e9f0  kind=lib  attributed-by=lib-island  size=397 */

int FUN_0057e9f0(int param_1,undefined4 *param_2)

{
  size_t _Size;
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int local_24;
  int local_14;
  int local_10;
  int local_c;
  void *local_8;
  
  uVar1 = *(uint *)(param_1 + 0x44);
  iVar7 = (uVar1 + 0x21 >> 0xc) + 1;
  iVar5 = 0;
  _Size = (uVar1 + iVar7 * 10) * 2 + 8;
  local_8 = (void *)FUN_005653d0(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
    uVar2 = uVar1;
    if (0x1000 < uVar1) {
      uVar2 = 0x1000;
    }
    *(int *)((int)local_8 + 4) = iVar7;
    iVar3 = FUN_005653d0(uVar2 * 2);
    if (iVar3 == 0) {
      iVar5 = 7;
    }
    iVar8 = param_1;
    for (iVar9 = 0; (iVar5 == 0 && (iVar9 < iVar7)); iVar9 = iVar9 + 1) {
      iVar5 = FUN_0057e140(param_1,iVar9,&local_14);
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
        iVar4 = iVar8 + *(int *)((int)local_8 + 4) * 10;
        iVar8 = iVar8 + 1;
        iVar6 = (int)local_8 + iVar4 * 2 + 8;
        iVar4 = 0;
        if (0 < local_c) {
          do {
            *(short *)(iVar6 + iVar4 * 2) = (short)iVar4;
            iVar4 = iVar4 + 1;
          } while (iVar4 < local_c);
        }
        FUN_0057ed80(local_10,iVar3,iVar6,&local_c);
        *(int *)((int)local_8 + iVar9 * 0x14 + 0x14) = local_c;
        *(int *)((int)local_8 + iVar9 * 0x14 + 0xc) = iVar6;
        *(int *)((int)local_8 + iVar9 * 0x14 + 0x18) = iVar8;
        *(int *)((int)local_8 + iVar9 * 0x14 + 0x10) = local_10;
      }
    }
    FUN_005652a0(iVar3);
    if (iVar5 != 0) {
      FUN_005652a0(local_8);
    }
    *param_2 = local_8;
    return iVar5;
  }
  return 7;
}


/* FUN_0057eb80 @ 0057eb80  kind=lib  attributed-by=lib-island  size=155 */

bool FUN_0057eb80(uint *param_1,uint *param_2,int *param_3)

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


/* FUN_0057ec20 @ 0057ec20  kind=lib  attributed-by=lib-island  size=122 */

void FUN_0057ec20(int param_1,uint param_2,int param_3)

{
  int iVar1;
  uint local_c;
  int local_8;
  
  if (DAT_0076b3bc != (code *)0x0) {
    (*DAT_0076b3bc)();
  }
  iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x18))(*(int **)(param_1 + 8),&local_c);
  if (((iVar1 == 0) && (param_3 <= local_8)) && ((param_3 < local_8 || (param_2 < local_c)))) {
    iVar1 = (**(code **)(**(int **)(param_1 + 8) + 0x10))(*(int **)(param_1 + 8),param_2,param_3);
  }
  if (DAT_0076b3c0 != (code *)0x0) {
    (*DAT_0076b3c0)();
  }
  if (iVar1 != 0) {
    FUN_00525a30(iVar1,"cannot limit WAL size: %s",*(undefined4 *)(param_1 + 100));
  }
  return;
}


/* FUN_0057eca0 @ 0057eca0  kind=lib  attributed-by=lib-island  size=214 */

void FUN_0057eca0(int param_1,void *param_2,int param_3,int *param_4,int *param_5,void *param_6)

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
      if (iVar4 < param_3) goto LAB_0057ed03;
LAB_0057ed2e:
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
LAB_0057ed03:
      if (iVar6 < iVar1) {
        if (*(uint *)(param_1 + (uint)*(ushort *)(iVar2 + iVar6 * 2) * 4) <=
            *(uint *)(param_1 + (uint)*(ushort *)((int)param_2 + iVar4 * 2) * 4)) goto LAB_0057ed2e;
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


/* FUN_0057ed80 @ 0057ed80  kind=lib  attributed-by=lib-island  size=534 */

void FUN_0057ed80(int param_1,void *param_2,void *param_3,uint *param_4)

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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
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
LAB_0057ee00:
        uVar5 = local_70[local_90 * 2];
        _Dst = (void *)local_70[local_90 * 2 + 1];
        iVar6 = 0;
        iVar7 = 0;
        local_88 = 0;
LAB_0057ee23:
        if (iVar7 < (int)local_74) {
          if (iVar6 < (int)uVar5) goto LAB_0057ee9c;
LAB_0057eec7:
          iVar7 = iVar7 + 1;
          uVar4 = *(ushort *)((int)local_78 + iVar7 * 2 + -2);
        }
        else {
          if ((int)uVar5 <= iVar6) goto code_r0x0057ee2b;
LAB_0057ee9c:
          if (iVar7 < (int)local_74) {
            if (*(uint *)(param_1 + (uint)*(ushort *)((int)pvVar8 + iVar7 * 2) * 4) <=
                *(uint *)(param_1 + (uint)*(ushort *)((int)_Dst + iVar6 * 2) * 4))
            goto LAB_0057eec7;
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
        goto LAB_0057ee23;
      }
LAB_0057ee73:
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
      FUN_0057eca0(param_1,local_70[iVar6 * 2 + 1],local_70[iVar6 * 2],&local_78,&local_74,param_2);
    }
    uVar9 = uVar9 << 1 | (uint)((int)uVar9 < 0);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 0xd);
  *param_4 = local_74;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
code_r0x0057ee2b:
  local_74 = local_88;
  local_78 = _Dst;
  memcpy(_Dst,param_2,local_88 * 2);
  iVar6 = local_90 + 1;
  pvVar8 = _Dst;
  local_90 = iVar6;
  if ((local_80 & 1 << ((byte)iVar6 & 0x1f)) == 0) goto LAB_0057ee73;
  goto LAB_0057ee00;
}


/* FUN_0057efa0 @ 0057efa0  kind=lib  attributed-by=lib-island  size=388 */

void FUN_0057efa0(int param_1)

{
  int iVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined1 local_10 [4];
  int *local_c;
  undefined4 local_8;
  
  iVar1 = param_1;
  if (*(short *)(param_1 + 0x28) != 0) {
    return;
  }
  local_c = (int *)(**(int **)(param_1 + 0x20) + 0x60);
  if (*local_c != 0) {
    iVar6 = 4;
    puVar5 = &local_8;
    if (DAT_007665e4 == 0) {
      param_1 = 0;
    }
    else {
      param_1 = (*DAT_00766628)(5);
      if (param_1 != 0) {
        (*DAT_00766630)(param_1);
      }
    }
    do {
      uVar2 = FUN_00544c20();
      *(undefined1 *)puVar5 = uVar2;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    if (param_1 != 0) {
      (*DAT_00766638)(param_1);
    }
    if ((*(char *)(iVar1 + 0x2b) == '\0') &&
       (iVar6 = (**(code **)(**(int **)(iVar1 + 4) + 0x38))(*(int **)(iVar1 + 4),4,4,10), iVar6 != 0
       )) {
      if (iVar6 != 5) {
        return;
      }
    }
    else {
      *(int *)(iVar1 + 0x68) = *(int *)(iVar1 + 0x68) + 1;
      *(undefined4 *)(iVar1 + 0x44) = 0;
      iVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar1 + 0x54),*(undefined1 *)(iVar1 + 0x55)
                                        ),*(undefined1 *)(iVar1 + 0x56)),
                       *(undefined1 *)(iVar1 + 0x57)) + 1;
      *(char *)(iVar1 + 0x54) = (char)((uint)iVar6 >> 0x18);
      *(char *)(iVar1 + 0x55) = (char)((uint)iVar6 >> 0x10);
      *(char *)(iVar1 + 0x56) = (char)((uint)iVar6 >> 8);
      *(char *)(iVar1 + 0x57) = (char)iVar6;
      *(undefined4 *)(iVar1 + 0x58) = local_8;
      FUN_0057e910(iVar1);
      *local_c = 0;
      local_c[2] = 0;
      piVar3 = local_c + 3;
      iVar6 = 3;
      do {
        *piVar3 = -1;
        piVar3 = piVar3 + 1;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      if (*(char *)(iVar1 + 0x2b) != '\0') goto LAB_0057f0ff;
      (**(code **)(**(int **)(iVar1 + 4) + 0x38))(*(int **)(iVar1 + 4),4,4,9);
    }
  }
  if (*(char *)(iVar1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(iVar1 + 4) + 0x38))(*(int **)(iVar1 + 4),3,1,5);
  }
LAB_0057f0ff:
  *(undefined2 *)(iVar1 + 0x28) = 0xffff;
  iVar6 = 0;
  do {
    iVar6 = iVar6 + 1;
    iVar4 = FUN_0057f130(iVar1,local_10,1,iVar6);
  } while (iVar4 == -1);
  return;
}


/* FUN_0057f130 @ 0057f130  kind=lib  attributed-by=lib-island  size=711 */

int FUN_0057f130(int *param_1,undefined4 param_2,int param_3,int param_4)

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
    iVar2 = FUN_0057e260(param_1,param_2);
    if (iVar2 == 5) {
      if (*(int *)param_1[8] == 0) {
        return -1;
      }
      if ((*(char *)((int)param_1 + 0x2b) != '\0') ||
         (iVar2 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],2,1,6), iVar2 == 0)) {
        FUN_0057f400(param_1,2);
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
          FUN_0057f400(param_1,3);
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
    if (((uint)param_1[0x11] <= local_8) && (param_4 != 0)) goto LAB_0057f351;
    iVar1 = 1;
    do {
      if (*(char *)((int)param_1 + 0x2b) != '\0') {
        iVar6 = 0;
LAB_0057f304:
        local_8 = param_1[0x11];
        *(uint *)(iVar2 + 100 + iVar1 * 4) = local_8;
        param_4 = iVar1;
        if (*(char *)((int)param_1 + 0x2b) == '\0') {
          (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,9);
        }
        break;
      }
      iVar6 = (**(code **)(*(int *)param_1[1] + 0x38))((int *)param_1[1],iVar1 + 3,1,10);
      if (iVar6 == 0) goto LAB_0057f304;
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
LAB_0057f351:
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


/* FUN_0057f400 @ 0057f400  kind=lib  attributed-by=lib-island  size=35 */

void FUN_0057f400(int param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x2b) == '\0') {
    (**(code **)(**(int **)(param_1 + 4) + 0x38))(*(int **)(param_1 + 4),param_2,1,5);
  }
  return;
}


/* FUN_0057f430 @ 0057f430  kind=lib  attributed-by=lib-island  size=171 */

void FUN_0057f430(int param_1,int param_2,uint param_3,uint param_4,int param_5)

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


/* FUN_0057f4e0 @ 0057f4e0  kind=lib  attributed-by=lib-island  size=120 */

void FUN_0057f4e0(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  iVar1 = param_1[6];
  uVar2 = *(undefined4 *)*param_1;
  puVar4 = (undefined4 *)param_1[8];
  while (iVar1 = iVar1 + -1, -1 < iVar1) {
    if ((*(byte *)((int)puVar4 + 0x12) & 1) != 0) {
      FUN_00555e30(uVar2,*puVar4);
    }
    if (((*(byte *)((int)puVar4 + 0x12) & 0x10) != 0) ||
       ((*(byte *)((int)puVar4 + 0x12) & 0x20) != 0)) {
      uVar3 = puVar4[3];
      FUN_0057f4e0(uVar3);
      FUN_005521a0(uVar2,uVar3);
    }
    puVar4 = puVar4 + 10;
  }
  if ((undefined4 *)param_1[8] != param_1 + 10) {
    FUN_005521a0(uVar2,(undefined4 *)param_1[8]);
  }
  return;
}


/* FUN_0057f560 @ 0057f560  kind=lib  attributed-by=lib-island  size=250 */

int FUN_0057f560(undefined4 *param_1,char *param_2,byte param_3)

{
  undefined4 *puVar1;
  int iVar2;
  void *_Dst;
  uint uVar3;
  
  if ((int)param_1[7] <= (int)param_1[6]) {
    puVar1 = (undefined4 *)param_1[8];
    iVar2 = *(int *)*param_1;
    _Dst = (void *)FUN_00552230(iVar2,param_1[7] * 0x50);
    param_1[8] = _Dst;
    if (_Dst == (void *)0x0) {
      if ((param_3 & 1) != 0) {
        FUN_00555e30(iVar2,param_2);
      }
      param_1[8] = puVar1;
      return 0;
    }
    memcpy(_Dst,puVar1,param_1[6] * 0x28);
    if (puVar1 != param_1 + 10) {
      FUN_005521a0(iVar2,puVar1);
    }
    uVar3 = param_1[8];
    if ((((iVar2 == 0) || (uVar3 == 0)) || (uVar3 < *(uint *)(iVar2 + 0x104))) ||
       (*(uint *)(iVar2 + 0x108) <= uVar3)) {
      uVar3 = (*DAT_00766608._4_4_)(uVar3);
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


/* FUN_0057f660 @ 0057f660  kind=lib  attributed-by=lib-island  size=108 */

int FUN_0057f660(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  
  puVar3 = (undefined4 *)FUN_00558520(param_2);
  iVar2 = 0;
  for (; puVar3 != (undefined4 *)0x0; puVar3 = (undefined4 *)puVar3[3]) {
    uVar1 = *param_1;
    if (iVar2 == 0) {
      iVar4 = FUN_0055d980(uVar1,"name=%Q");
    }
    else {
      iVar4 = FUN_0055d980(uVar1,"%s OR name=%Q",iVar2,*(undefined4 *)*puVar3);
      FUN_005521a0(uVar1,iVar2);
    }
    iVar2 = iVar4;
  }
  return iVar2;
}


/* FUN_0057f6d0 @ 0057f6d0  kind=lib  attributed-by=lib-island  size=158 */

void FUN_0057f6d0(undefined4 param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  if (param_2 != 0) {
    iVar2 = 0;
    if (0 < *(int *)(param_2 + 0x1c)) {
      puVar3 = (uint *)(param_2 + 0x38);
      do {
        uVar1 = puVar3[0x14];
        if (uVar1 != 0) {
          if (*(int *)(uVar1 + 0x1c) != 0) {
            FUN_00524410(*(undefined4 *)(uVar1 + 0x18));
          }
          FUN_005521a0(param_1,uVar1);
        }
        if (((*puVar3 & 0x20000000) != 0) && (uVar1 = puVar3[4], uVar1 != 0)) {
          FUN_005521a0(param_1,*(undefined4 *)(uVar1 + 0x10));
          FUN_005521a0(param_1,uVar1);
        }
        iVar2 = iVar2 + 1;
        puVar3 = puVar3 + 0x16;
      } while (iVar2 < *(int *)(param_2 + 0x1c));
    }
    FUN_0057f4e0(*(undefined4 *)(param_2 + 0x20));
    FUN_005521a0(param_1,param_2);
  }
  return;
}


/* FUN_0057f770 @ 0057f770  kind=lib  attributed-by=lib-island  size=74 */

void FUN_0057f770(int param_1,byte *param_2,uint param_3)

{
  *(char *)(param_1 + 0x14) = (char)param_3;
  if (param_2 != (byte *)0x0) {
    while (*param_2 == param_3) {
      FUN_0057f770(param_1,*(undefined4 *)(param_2 + 8),param_3);
      param_2 = *(byte **)(param_2 + 0xc);
      *(char *)(param_1 + 0x14) = (char)param_3;
      if (param_2 == (byte *)0x0) {
        return;
      }
    }
    FUN_0057f560(param_1,param_2,0);
  }
  return;
}


/* FUN_0057f7c0 @ 0057f7c0  kind=lib  attributed-by=lib-island  size=191 */

undefined4 FUN_0057f7c0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  
  iVar1 = *param_1;
  iVar6 = 0;
  iVar2 = *(int *)(*(int *)(iVar1 + 0x10) + 0x1c);
  if (*(int *)(param_2 + 0x40) == iVar2) {
    return 0;
  }
  puVar3 = (undefined4 *)FUN_00568620(param_1,param_2);
  if (puVar3 != (undefined4 *)0x0) {
    do {
      iVar4 = iVar6;
      if (puVar3[5] == iVar2) {
        if (iVar6 == 0) {
          iVar4 = FUN_0055d980(iVar1,"name=%Q");
        }
        else {
          iVar4 = FUN_0055d980(iVar1,"%s OR name=%Q",iVar6,*puVar3);
          FUN_005521a0(iVar1,iVar6);
        }
      }
      puVar3 = (undefined4 *)puVar3[8];
      iVar6 = iVar4;
    } while (puVar3 != (undefined4 *)0x0);
    if (iVar4 != 0) {
      uVar5 = FUN_0055d980(*param_1,"type=\'trigger\' AND (%s)",iVar4);
      FUN_005521a0(*param_1,iVar4);
      return uVar5;
    }
  }
  return 0;
}


/* FUN_00580010 @ 00580010  kind=lib  attributed-by=lib-island  size=61 */

void FUN_00580010(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

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


/* FUN_00580050 @ 00580050  kind=lib  attributed-by=lib-island  size=526 */

int FUN_00580050(uint param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  int iVar11;
  longlong lVar12;
  undefined8 uVar13;
  int local_8;
  
  iVar4 = param_1;
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
    uVar13 = 0;
  }
  else {
    uVar3 = *(undefined4 *)(param_1 + 0x7c);
    lVar12 = __alldiv(iVar9 + -1,*(int *)(param_1 + 0x4c) - (uint)(iVar9 == 0),uVar3,0);
    uVar13 = __allmul(lVar12 + 1,uVar3,0);
  }
  *(undefined8 *)(param_1 + 0x48) = uVar13;
  *(undefined8 *)(param_1 + 0x50) = uVar13;
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
  if (DAT_007665e4 == 0) {
    local_8 = 0;
  }
  else {
    local_8 = (*DAT_00766628)(5);
    if (local_8 != 0) {
      (*DAT_00766630)(local_8);
    }
  }
  do {
    uVar5 = FUN_00544c20();
    *puVar10 = uVar5;
    puVar10 = puVar10 + 1;
    iVar9 = iVar9 + -1;
  } while (iVar9 != 0);
  if (local_8 != 0) {
    (*DAT_00766638)(local_8);
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
    if (*(uint *)(iVar4 + 0x7c) <= param_1) {
      return 0;
    }
    iVar9 = (**(code **)(**(int **)(iVar4 + 0x40) + 0xc))
                      (*(int **)(iVar4 + 0x40),puVar2,uVar7,*(undefined4 *)(iVar4 + 0x48),
                       *(undefined4 *)(iVar4 + 0x4c));
    puVar1 = (uint *)(iVar4 + 0x48);
    uVar6 = *puVar1;
    *puVar1 = *puVar1 + uVar7;
    *(int *)(iVar4 + 0x4c) = *(int *)(iVar4 + 0x4c) + (uint)CARRY4(uVar6,uVar7);
    param_1 = param_1 + uVar7;
  } while (iVar9 == 0);
  return iVar9;
}


/* FUN_00580270 @ 00580270  kind=lib  attributed-by=lib-island  size=422 */

int FUN_00580270(int param_1,char *param_2)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  undefined8 uVar8;
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
      uVar8 = FUN_0053cc30(param_1);
      *(undefined8 *)(param_1 + 0x48) = uVar8;
    }
    local_c = *(uint *)(param_1 + 0x48);
    local_10 = *(int *)(param_1 + 0x4c);
    iVar4 = DAT_007666d0 / *(int *)(param_1 + 0x80) + 1;
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
      iVar4 = FUN_00580010(*(undefined4 *)(param_1 + 0x40),local_c + 4,
                           iVar5 + (uint)(0xfffffffb < local_c),uVar6);
      uVar2 = local_c;
      if ((iVar4 == 0) &&
         ((iVar4 = FUN_00580010(*(undefined4 *)(param_1 + 0x40),local_c + 8,
                                iVar5 + (uint)(0xfffffff7 < local_c),local_14), iVar4 == 0 &&
          (iVar4 = (**(code **)(**(int **)(param_1 + 0x40) + 0xc))
                             (*(int **)(param_1 + 0x40),&DAT_007131b8,8,uVar2 + 0xc,
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
            iVar4 = FUN_0055ea20(*(undefined4 *)(param_1 + 0x40),*(uint *)(param_1 + 0x48),iVar5);
          }
        }
      }
    }
    return iVar4;
  }
  return 0;
}


/* FUN_00580420 @ 00580420  kind=lib  attributed-by=lib-island  size=46 */

bool FUN_00580420(int param_1,int param_2)

{
  int iVar1;
  
  if (param_1 == 0) {
    return param_2 == 0;
  }
  if (param_2 == 0) {
    return false;
  }
  iVar1 = FUN_0057a2c0(param_1,param_2);
  return iVar1 == 0;
}


/* FUN_00580450 @ 00580450  kind=lib  attributed-by=lib-island  size=158 */

undefined4 FUN_00580450(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if ((*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) ||
     (*(char *)(param_1 + 0x2c) != *(char *)(param_2 + 0x2c))) {
    return 0;
  }
  iVar5 = 0;
  if (*(int *)(param_2 + 0x24) < 1) {
    return 1;
  }
  iVar3 = *(int *)(param_2 + 4);
  iVar2 = *(int *)(param_1 + 4) - iVar3;
  while( true ) {
    iVar4 = *(int *)(param_2 + 0x24);
    if ((*(int *)(iVar3 + iVar5 * 4) != *(int *)(iVar2 + iVar3 + iVar5 * 4)) ||
       (*(char *)(iVar5 + *(int *)(param_2 + 0x1c)) != *(char *)(iVar5 + *(int *)(param_1 + 0x1c))))
    {
      return 0;
    }
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + iVar5 * 4);
    iVar1 = *(int *)(*(int *)(param_2 + 0x20) + iVar5 * 4);
    if (iVar1 != 0) {
      if (iVar3 == 0) {
        return 0;
      }
      iVar3 = FUN_0057a2c0(iVar1,iVar3);
      iVar4 = *(int *)(param_2 + 0x24);
    }
    if (iVar3 != 0) break;
    iVar5 = iVar5 + 1;
    if (iVar4 <= iVar5) {
      return 1;
    }
    iVar3 = *(int *)(param_2 + 4);
  }
  return 0;
}


/* FUN_005804f0 @ 005804f0  kind=lib  attributed-by=lib-island  size=1393 */

undefined4 FUN_005804f0(int *param_1,int *param_2,int *param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  short sVar2;
  short *psVar3;
  uint uVar4;
  bool bVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  undefined8 uVar21;
  int local_24;
  undefined4 local_14;
  
  bVar5 = false;
  if (param_3 == (int *)0x0) {
    return 0;
  }
  iVar6 = FUN_00568620(param_1,param_2);
  if ((iVar6 == 0) && ((*(byte *)((int)param_2 + 0x2a) & 0x10) == 0)) {
    if ((param_4 == 99) &&
       (((short)param_2[9] < 0 || (param_4 = (uint)*(byte *)((int)param_2 + 0x2b), param_4 == 99))))
    {
      param_4 = 2;
    }
    psVar3 = (short *)param_3[10];
    if (((((((*psVar3 == 1) && (*(int *)(psVar3 + 0xe) == 0)) && (param_3[0xb] == 0)) &&
          ((param_3[0xe] == 0 && (param_3[0xc] == 0)))) && (param_3[0x12] == 0)) &&
        (((param_3[0xf] == 0 && ((*(byte *)((int)param_3 + 6) & 1) == 0)) &&
         ((*(int *)*param_3 == 1 &&
          (((**(char **)((int *)*param_3)[2] == 'q' &&
            (piVar7 = (int *)FUN_0055d7d0(param_1,0,psVar3 + 4), piVar7 != (int *)0x0)) &&
           (piVar7 != param_2)))))))) &&
       ((((*(byte *)((int)piVar7 + 0x2a) & 0x10) == 0 && (piVar7[3] == 0)) &&
        ((sVar2 = *(short *)((int)param_2 + 0x26), sVar2 == *(short *)((int)piVar7 + 0x26) &&
         ((short)param_2[9] == (short)piVar7[9])))))) {
      iVar6 = 0;
      if (0 < sVar2) {
        puVar18 = (undefined4 *)(param_2[1] + 0x10);
        puVar20 = (undefined4 *)(piVar7[1] + 0x10);
        do {
          if (*(char *)((int)puVar18 + 5) != *(char *)((int)puVar20 + 5)) {
            return 0;
          }
          iVar8 = FUN_00580420(*puVar18,*puVar20);
          if (iVar8 == 0) {
            return 0;
          }
          if ((*(char *)(puVar18 + 1) != '\0') && (*(char *)(puVar20 + 1) == '\0')) {
            return 0;
          }
          iVar6 = iVar6 + 1;
          puVar18 = puVar18 + 6;
          puVar20 = puVar20 + 6;
        } while (iVar6 < sVar2);
      }
      iVar6 = param_2[2];
      if (iVar6 != 0) {
        iVar8 = piVar7[2];
        do {
          if (*(char *)(iVar6 + 0x2c) != '\0') {
            bVar5 = true;
          }
          iVar19 = iVar8;
          if (iVar8 == 0) {
            return 0;
          }
          while (iVar9 = FUN_00580450(iVar6,iVar19), iVar9 == 0) {
            iVar19 = *(int *)(iVar19 + 0x14);
            if (iVar19 == 0) {
              return 0;
            }
          }
          iVar6 = *(int *)(iVar6 + 0x14);
        } while (iVar6 != 0);
      }
      if ((param_2[6] == 0) || (iVar6 = FUN_00556680(piVar7[6],param_2[6]), iVar6 == 0)) {
        uVar4 = *(uint *)(*param_1 + 0x18);
        if ((((uVar4 & 0x40000) == 0) || (param_2[4] == 0)) && ((uVar4 & 0x10) == 0)) {
          uVar10 = FUN_00565260(*param_1,piVar7[0x10]);
          piVar11 = (int *)FUN_0055ab80(param_1);
          FUN_00550aa0(param_1,uVar10);
          iVar8 = param_1[0x12];
          iVar6 = iVar8 + 1;
          param_1[0x12] = iVar8 + 2;
          uVar12 = FUN_0052b750(param_1,param_5,param_2);
          FUN_0055e5f0(param_1,iVar8 + 1,param_5,param_2,0x28);
          if (((((short)param_2[9] < 0) && (param_2[2] != 0)) || (bVar5)) ||
             ((param_4 != 2 && (param_4 != 1)))) {
            uVar13 = FUN_0056be90(piVar11,0x48,iVar6,0);
            local_24 = FUN_0056be90(piVar11,1,0,0);
            FUN_00573d80(piVar11,uVar13);
          }
          else {
            local_24 = 0;
          }
          FUN_0055e5f0(param_1,iVar8,uVar10,piVar7,0x27);
          uVar13 = FUN_0056be90(piVar11,0x48,iVar8,0);
          uVar21 = FUN_0055a1f0(param_1);
          uVar14 = (undefined4)uVar21;
          uVar15 = FUN_0055a1f0((int)((ulonglong)uVar21 >> 0x20));
          if ((short)param_2[9] < 0) {
            if (param_2[2] == 0) {
              uVar12 = 0x38;
              iVar19 = iVar8 + 1;
            }
            else {
              uVar12 = 0x41;
              iVar19 = iVar8;
            }
            local_14 = FUN_0056be90(piVar11,uVar12,iVar19,uVar15);
          }
          else {
            local_14 = FUN_0056be90(piVar11,0x41,iVar8,uVar15);
            uVar16 = FUN_0056bef0(piVar11,0x36,iVar8 + 1,0,uVar15);
            FUN_0055abc0(param_1,param_4,"PRIMARY KEY must be unique",0xfffffffe);
            FUN_00573d80(piVar11,uVar16);
            FUN_0052b7d0(param_1,uVar12,uVar15);
          }
          FUN_0056be90(piVar11,0x40,iVar8,uVar14);
          FUN_0056bef0(piVar11,0x39,iVar8 + 1,uVar14,uVar15);
          FUN_0056c490(piVar11,0xb);
          iVar19 = piVar11[1];
          iVar9 = *param_2;
          iVar17 = *piVar11;
          if ((iVar19 == 0) || (*(char *)(iVar17 + 0x38) != '\0')) {
            FUN_00539320(iVar17,0,iVar9);
          }
          else {
            iVar1 = iVar19 + (piVar11[7] + -1) * 0x14;
            FUN_00539320(iVar17,(int)*(char *)(iVar1 + 1),
                         *(undefined4 *)(iVar19 + 0x10 + (piVar11[7] + -1) * 0x14));
            *(undefined4 *)(iVar1 + 0x10) = 0;
            if (iVar9 == 0) {
              *(undefined4 *)(iVar1 + 0x10) = 0;
              *(undefined1 *)(iVar1 + 1) = 0;
            }
            else {
              uVar21 = FUN_00568070(iVar9);
              uVar12 = FUN_005524a0(*piVar11,(int)((ulonglong)uVar21 >> 0x20),(int)uVar21);
              *(undefined4 *)(iVar1 + 0x10) = uVar12;
              *(undefined1 *)(iVar1 + 1) = 0xff;
            }
          }
          FUN_0056be90(piVar11,0x5f,iVar8,local_14);
          for (iVar19 = param_2[2]; iVar19 != 0; iVar19 = *(int *)(iVar19 + 0x14)) {
            iVar9 = piVar7[2];
            while ((iVar9 != 0 && (iVar17 = FUN_00580450(iVar19,iVar9), iVar17 == 0))) {
              iVar9 = *(int *)(iVar9 + 0x14);
            }
            FUN_0056be90(piVar11,0x2d,iVar8,0);
            FUN_0056be90(piVar11,0x2d,iVar6,0);
            uVar12 = FUN_0055b2a0(param_1,iVar9);
            FUN_0056bf50(piVar11,0x27,iVar8,*(undefined4 *)(iVar9 + 0x28),uVar10,uVar12,0xfffffff0);
            uVar12 = FUN_0055b2a0(param_1,iVar19);
            FUN_0056bf50(piVar11,0x28,iVar8 + 1,*(undefined4 *)(iVar19 + 0x28),param_5,uVar12,
                         0xfffffff0);
            iVar9 = FUN_0056be90(piVar11,0x48,iVar8,0);
            FUN_0056be90(piVar11,0x3f,iVar8,uVar14);
            FUN_0056bef0(piVar11,0x61,iVar6,uVar14,1);
            FUN_0056be90(piVar11,0x5f,iVar8,iVar9 + 1);
            FUN_00573d80(piVar11,iVar9);
          }
          FUN_00573d80(piVar11,uVar13);
          FUN_00563fb0(param_1,uVar15);
          FUN_00563fb0(param_1,uVar14);
          FUN_0056be90(piVar11,0x2d,iVar8,0);
          FUN_0056be90(piVar11,0x2d,iVar8 + 1,0);
          if (local_24 == 0) {
            return 1;
          }
          FUN_0056be90(piVar11,6,0,0);
          FUN_00573d80(piVar11,local_24);
          FUN_0056be90(piVar11,0x2d,iVar8 + 1,0);
        }
      }
    }
  }
  return 0;
}


/* FUN_00580a70 @ 00580a70  kind=lib  attributed-by=lib-island  size=74 */

void FUN_00580a70(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *param_1 = *param_1 + -1;
  iVar1 = *param_1;
  iVar2 = param_1[2];
  iVar3 = *param_1;
  while ((-1 < iVar1 && (-1 < iVar3))) {
    FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar3 * 0x10 + 0xe),param_1 + iVar3 * 4 + 4)
    ;
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar3 = *param_1;
  }
  FUN_00553950(iVar2,"parser stack overflow");
  param_1[2] = iVar2;
  return;
}


/* FUN_00580ac0 @ 00580ac0  kind=lib  attributed-by=lib-island  size=60 */

void FUN_00580ac0(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = param_1[2];
  iVar2 = *param_1;
  iVar1 = iVar2;
  while ((-1 < iVar1 && (-1 < iVar2))) {
    FUN_00580b00(param_1,*(undefined1 *)((int)param_1 + iVar2 * 0x10 + 0xe),param_1 + iVar2 * 4 + 4)
    ;
    *param_1 = *param_1 + -1;
    iVar1 = *param_1;
    iVar2 = *param_1;
  }
  param_1[2] = iVar3;
  return;
}


/* FUN_00580b00 @ 00580b00  kind=lib  attributed-by=lib-island  size=199 */

void FUN_00580b00(int param_1,undefined1 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  switch(param_2) {
  case 0xa0:
  case 0xc2:
    FUN_00566d10(*puVar1,*param_3);
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
    FUN_00555e30(*puVar1,*param_3);
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
    FUN_00556700(*puVar1,*param_3);
    return;
  case 0xc1:
  case 0xc6:
  case 0xce:
  case 0xcf:
    FUN_00567370(*puVar1,*param_3);
    return;
  case 0xd3:
  case 0xd5:
  case 0xda:
    FUN_0055afc0(*puVar1,*param_3);
    return;
  case 0xdb:
    FUN_00556700(*puVar1,*param_3);
    FUN_00566d10(*puVar1,param_3[1]);
    return;
  case 0xe8:
  case 0xed:
    FUN_00552b20(*puVar1,*param_3);
    return;
  case 0xea:
    FUN_0055afc0(*puVar1,param_3[1]);
  }
  return;
}


/* FUN_00580c40 @ 00580c40  kind=lib  attributed-by=lib-island  size=141 */

undefined2 FUN_00580c40(int *param_1,byte param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)(param_1 + *param_1 * 4 + 3);
  if (uVar3 < 0x1a1) {
    while (*(short *)(&DAT_00714718 + uVar3 * 2) != -0x46) {
      uVar1 = (int)*(short *)(&DAT_00714718 + uVar3 * 2) + (uint)param_2;
      if ((uVar1 < 0x61c) && ((&DAT_007140f8)[uVar1] == param_2)) {
LAB_00580cc0:
        return *(undefined2 *)(&DAT_007134c0 + uVar1 * 2);
      }
      if (param_2 == 0) break;
      if ((0x42 < param_2) || ((&DAT_00715210)[param_2] == 0)) {
        iVar2 = uVar1 - param_2;
        uVar1 = iVar2 + 0x43;
        if ((-1 < (int)uVar1) && ((&DAT_0071413b)[iVar2] == 'C')) goto LAB_00580cc0;
        break;
      }
      param_2 = (&DAT_00715210)[param_2];
      if (0x1a0 < uVar3) break;
    }
  }
  return *(undefined2 *)(&DAT_00714d28 + uVar3 * 2);
}


/* FUN_00580cd0 @ 00580cd0  kind=lib  attributed-by=lib-island  size=8156 */

void FUN_00580cd0(int *param_1,int param_2)

{
  uint *puVar1;
  byte bVar2;
  ushort uVar3;
  int iVar4;
  short *psVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined1 *_Dst;
  int *piVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int extraout_EDX;
  uint uVar12;
  ushort *puVar13;
  undefined1 uVar14;
  undefined1 *local_2c;
  undefined8 local_28;
  int local_20;
  undefined1 *local_1c;
  undefined2 local_18 [2];
  undefined1 *local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar11 = (undefined1 *)0x0;
  iVar4 = *param_1;
  piVar7 = (int *)param_1[2];
  iVar6 = iVar4 * 0x10;
  local_28 = 0;
  local_1c = (undefined1 *)0x0;
  local_20 = 0;
  if (0x13e < param_2 - 5U) goto switchD_00580d2a_caseD_b3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)&PTR_caseD_b2_00582f74 + param_2 + 3)) {
  case 0:
    *(undefined1 *)(piVar7 + 0x75) = 0;
    piVar7[0x73] = 0;
    break;
  case 1:
    *(undefined1 *)(piVar7 + 0x75) = 1;
    piVar7[0x73] = 0;
    break;
  case 2:
    *(undefined1 *)(piVar7 + 0x75) = 2;
    piVar7[0x73] = 0;
    break;
  case 3:
    FUN_00557410(piVar7);
    puVar11 = local_1c;
    break;
  case 4:
    FUN_0054b750(piVar7,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 5:
    local_28 = 7;
    break;
  case 6:
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar6 + 0xe);
    break;
  case 7:
    FUN_00550d90(piVar7);
    puVar11 = local_1c;
    break;
  case 8:
    FUN_00564420(piVar7);
    puVar11 = local_1c;
    break;
  case 9:
    FUN_00564f90(piVar7,0,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 10:
    FUN_00564f90(piVar7,1,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xb:
    FUN_00564f90(piVar7,2,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xc:
    FUN_00567880(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4,param_1[iVar4 * 4 + -0xc],0,0,
                 param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
    break;
  case 0xd:
    *(undefined1 *)(*piVar7 + 0xea) = 0;
  case 0x14:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    break;
  case 0xf:
    local_28 = 1;
    break;
  case 0x10:
    FUN_00553490(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4,0);
    puVar11 = local_1c;
    break;
  case 0x11:
    FUN_00553490(piVar7,0,0,param_1[iVar4 * 4 + 4]);
    FUN_00566d10(*piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x12:
    local_28 = CONCAT44((piVar7[0x85] + piVar7[0x84]) - param_1[iVar4 * 4 + -4],
                        param_1[iVar4 * 4 + -4]);
    break;
  case 0x13:
    FUN_005490f0(piVar7,param_1 + iVar4 * 4 + 4);
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    piVar7[0x68] = 0;
    puVar11 = local_1c;
    break;
  case 0x15:
    FUN_00549230(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0x16:
    local_28 = CONCAT44((param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) - param_1[iVar4 * 4 + -8],
                        param_1[iVar4 * 4 + -8]);
    break;
  case 0x17:
    local_28 = CONCAT44((param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) -
                        param_1[iVar4 * 4 + -0x10],param_1[iVar4 * 4 + -0x10]);
    break;
  case 0x18:
    local_28 = CONCAT44((param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) - param_1[iVar4 * 4],
                        param_1[iVar4 * 4]);
    break;
  case 0x19:
    piVar7[0x67] = param_1[iVar4 * 4 + 4];
    piVar7[0x68] = param_1[iVar4 * 4 + 5];
    break;
  case 0x1a:
    FUN_00549280(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0x1b:
    FUN_00549280(piVar7,param_1 + iVar4 * 4);
    puVar11 = local_1c;
    break;
  case 0x1c:
    local_2c = (undefined1 *)param_1[iVar4 * 4 + 4];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x9c;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_2c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_10 = param_1[iVar4 * 4];
    local_c = param_1[iVar4 * 4 + 6];
    local_14 = puVar11;
    FUN_00549280(piVar7,&local_14);
    puVar11 = local_1c;
    break;
  case 0x1d:
    FUN_00548e60(&local_14,piVar7,0x5e,param_1 + iVar4 * 4 + 4);
    FUN_00549280(piVar7,&local_14);
    puVar11 = local_1c;
    break;
  case 0x1e:
    iVar6 = piVar7[0x7f];
    if ((iVar6 != 0) && (0 < *(short *)(iVar6 + 0x26))) {
      *(char *)(*(int *)(iVar6 + 4) + -4 + *(short *)(iVar6 + 0x26) * 0x18) =
           (char)param_1[iVar4 * 4 + 4];
      puVar11 = local_1c;
    }
    break;
  case 0x1f:
    FUN_00549420(piVar7,0,param_1[iVar4 * 4],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
    break;
  case 0x20:
    FUN_00551790(piVar7,0,0,0,0,param_1[iVar4 * 4 + 4],0,0,0,0);
    puVar11 = local_1c;
    break;
  case 0x21:
    FUN_00549000(piVar7,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x22:
    FUN_00551270(piVar7,0,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x23:
    FUN_00552540(piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = (undefined1 *)extraout_EDX;
    break;
  case 0x24:
    FUN_00549060(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0x25:
    local_28 = (ulonglong)
               (uint)(~param_1[iVar4 * 4 + 5] & param_1[iVar4 * 4] | param_1[iVar4 * 4 + 4]);
    break;
  case 0x26:
  case 0x44:
    local_28 = 0;
    break;
  case 0x27:
    local_28 = CONCAT44(0xff,param_1[iVar4 * 4 + 4]);
    break;
  case 0x28:
    local_28 = CONCAT44(0xff00,param_1[iVar4 * 4 + 4] << 8);
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
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4);
    break;
  case 0x2f:
    piVar7[0x68] = 0;
    break;
  case 0x30:
    FUN_00549420(piVar7,param_1[iVar4 * 4 + -8],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -4],0);
    puVar11 = local_1c;
    break;
  case 0x31:
    FUN_00551790(piVar7,0,0,0,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4],0,0,0,0);
    puVar11 = local_1c;
    break;
  case 0x32:
    FUN_00549000(piVar7,param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
    break;
  case 0x33:
    FUN_00551270(piVar7,param_1[iVar4 * 4 + -0x14],param_1 + iVar4 * 4 + -8,param_1[iVar4 * 4 + -4],
                 param_1[iVar4 * 4]);
    FUN_00552540(piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x34:
    local_28 = 99;
    break;
  case 0x35:
    local_28 = 99;
    break;
  case 0x36:
    local_28 = (ulonglong)*(byte *)(param_1 + iVar4 * 4 + 4);
    break;
  case 0x37:
    local_28 = 4;
    break;
  case 0x38:
    local_28 = 5;
    break;
  case 0x39:
    FUN_00552e90(piVar7,param_1[iVar4 * 4 + 4],0,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x3a:
    FUN_00552000(piVar7,param_1 + iVar4 * 4 + -0x18,param_1 + iVar4 * 4 + -8,
                 param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -0x14],
                 param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0x3b:
    FUN_00552e90(piVar7,param_1[iVar4 * 4 + 4],1,param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x3c:
    local_18[0] = 5;
    local_14 = (undefined1 *)0x0;
    local_10 = 0;
    local_c = 0;
    FUN_005654f0(piVar7,param_1[iVar4 * 4 + 4],local_18);
    FUN_00566d10(*piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x3d:
    if (param_1[iVar4 * 4 + 4] != 0) {
      *(char *)(param_1[iVar4 * 4 + 4] + 4) = (char)param_1[iVar4 * 4];
      *(int *)(param_1[iVar4 * 4 + 4] + 0x3c) = param_1[iVar4 * 4 + -4];
      local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + 4];
      break;
    }
    FUN_00566d10(*piVar7,param_1[iVar4 * 4 + -4]);
    puVar11 = local_1c;
  case 0x2c:
    local_28 = CONCAT44(local_28._4_4_,param_1[iVar4 * 4 + 4]);
    break;
  case 0x3e:
    local_28 = 0x71;
    break;
  case 0x3f:
    uVar10 = FUN_00566e90(piVar7,param_1[iVar4 * 4 + -0x14],param_1[iVar4 * 4 + -0x10],
                          param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4 + -8],param_1[iVar4 * 4 + -4],
                          param_1[iVar4 * 4],param_1[iVar4 * 4 + -0x18],param_1[iVar4 * 4 + 4],
                          param_1[iVar4 * 4 + 5]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x41:
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    if (param_1[iVar4 * 4 + 5] != 0) {
      FUN_00556980(piVar7,uVar10,param_1 + iVar4 * 4 + 4,1);
    }
    FUN_00556a00(piVar7,uVar10,param_1 + iVar4 * 4);
    puVar11 = local_1c;
    break;
  case 0x42:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2d);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2d);
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *puVar11 = 0x71;
      *(undefined1 **)(puVar11 + 4) = puVar11 + 0x2c;
      puVar11[0x2c] = 0;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4],puVar11);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x43:
    puVar11 = (undefined1 *)FUN_00553bb0(*piVar7,0x71,param_1 + iVar4 * 4 + 4,1);
    local_2c = puVar11;
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x76;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,iVar6,local_2c);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4 + -8],puVar11);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x45:
    uVar10 = FUN_005522c0(*piVar7,0x50);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x46:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + 4];
    FUN_00567840(param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x47:
    psVar5 = (short *)param_1[iVar4 * 4];
    local_28 = ZEXT48(psVar5);
    if ((psVar5 != (short *)0x0) && (0 < *psVar5)) {
      *(char *)(psVar5 + *psVar5 * 0x24 + -0x10) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x48:
    uVar10 = FUN_00567240(piVar7,param_1[iVar4 * 4 + -0x14],param_1 + iVar4 * 4 + -0x10,
                          param_1 + iVar4 * 4 + -0xc,param_1 + iVar4 * 4 + -8,0,param_1[iVar4 * 4],
                          param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    FUN_005677a0(piVar7,uVar10,param_1 + iVar4 * 4 + -4);
    puVar11 = local_1c;
    break;
  case 0x49:
    uVar10 = FUN_00567240(piVar7,param_1[iVar4 * 4 + -0x14],0,0,param_1 + iVar4 * 4 + -4,
                          param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4a:
    if ((((param_1[iVar4 * 4 + -0x14] == 0) && (param_1[iVar4 * 4 + -3] == 0)) &&
        (param_1[iVar4 * 4] == 0)) && (param_1[iVar4 * 4 + 4] == 0)) {
      local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + -0xc];
    }
    else {
      FUN_00567840(param_1[iVar4 * 4 + -0xc]);
      uVar10 = FUN_00566e90(piVar7,0,param_1[iVar4 * 4 + -0xc],0,0,0,0,0,0,0);
      uVar10 = FUN_00567240(piVar7,param_1[iVar4 * 4 + -0x14],0,0,param_1 + iVar4 * 4 + -4,uVar10,
                            param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
      local_28 = CONCAT44(local_28._4_4_,uVar10);
      puVar11 = local_1c;
    }
    break;
  case 0x4b:
    uVar10 = FUN_00567180(*piVar7,0,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4c:
    uVar10 = FUN_0055d020(piVar7,param_1 + iVar4 * 4,0,0);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4d:
    uVar10 = FUN_0055d020(piVar7,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4,0);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4e:
    uVar10 = FUN_0055d020(piVar7,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + -4,
                          param_1 + iVar4 * 4);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x4f:
    local_28 = 0x100000000;
    break;
  case 0x50:
    piVar7 = (int *)FUN_005565a0(piVar7,param_1[iVar4 * 4 + -8],param_1[iVar4 * 4]);
    local_28 = CONCAT44(local_28._4_4_,piVar7);
    puVar11 = local_1c;
    if (piVar7 != (int *)0x0) {
      *(char *)(piVar7[2] + -8 + *piVar7 * 0x14) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x51:
    iVar6 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4]);
    local_28 = CONCAT44(local_28._4_4_,iVar6);
    puVar11 = local_1c;
    if ((iVar6 != 0) && (*(int *)(iVar6 + 8) != 0)) {
      *(char *)(*(int *)(iVar6 + 8) + 0xc) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x52:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + 4];
    break;
  case 0x53:
    local_28 = CONCAT44(param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -4]);
    break;
  case 0x54:
    local_28 = CONCAT44(param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4]);
    break;
  case 0x55:
    FUN_005677a0(piVar7,param_1[iVar4 * 4 + -4],param_1 + iVar4 * 4);
    FUN_00552560(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0x56:
    FUN_005677a0(piVar7,param_1[iVar4 * 4 + -0xc],param_1 + iVar4 * 4 + -8);
    FUN_00556650(piVar7,param_1[iVar4 * 4],"set list");
    FUN_00568b40(piVar7,param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4],param_1[iVar4 * 4 + 4],
                 (char)param_1[iVar4 * 4 + -0x10]);
    puVar11 = local_1c;
    break;
  case 0x57:
    iVar8 = param_1[iVar4 * 4 + 4];
    iVar6 = param_1[iVar4 * 4 + -0xc];
    goto LAB_005816da;
  case 0x58:
    iVar8 = param_1[iVar4 * 4 + 4];
    iVar6 = 0;
LAB_005816da:
    uVar10 = FUN_005565a0(piVar7,iVar6,iVar8);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    FUN_00556980(piVar7,uVar10,param_1 + iVar4 * 4 + -4,1);
    puVar11 = local_1c;
    break;
  case 0x59:
    FUN_0055bc20(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + 5],
                 param_1[iVar4 * 4],(char)param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0x5a:
    FUN_0055bc20(piVar7,param_1[iVar4 * 4 + -4],0,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4],
                 (char)param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0x5b:
    FUN_0055bc20(piVar7,param_1[iVar4 * 4 + -8],0,0,param_1[iVar4 * 4 + -4],
                 (char)param_1[iVar4 * 4 + -0x10]);
    puVar11 = local_1c;
    break;
  case 0x5c:
    local_28 = 5;
    break;
  case 0x5d:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4];
    break;
  case 0x5e:
    uVar12 = FUN_00566e90(piVar7,param_1[iVar4 * 4],0,0,0,0,0,0,0,0);
    if (param_1[iVar4 * 4 + -0xc] != 0) {
      iVar6 = FUN_00566e90(piVar7,param_1[iVar4 * 4 + -0xc],0,0,0,0,0,0,0,0);
      param_1[iVar4 * 4 + -0xb] = iVar6;
      param_1[iVar4 * 4 + -0xc] = 0;
    }
    local_28 = local_28 & 0xffffffff00000000;
    if ((param_1[iVar4 * 4 + -0xb] == 0) || (uVar12 == 0)) {
      FUN_00566d10(*piVar7,uVar12);
      FUN_00566d10(*piVar7,param_1[iVar4 * 4 + -0xb]);
      local_28 = local_28 & 0xffffffff;
      puVar11 = local_1c;
    }
    else {
      *(undefined1 *)(uVar12 + 4) = 0x71;
      iVar6 = param_1[iVar4 * 4 + -0xb];
      *(ushort *)(uVar12 + 6) = *(ushort *)(uVar12 + 6) | 0x80;
      *(int *)(uVar12 + 0x3c) = iVar6;
      puVar13 = (ushort *)(iVar6 + 6);
      *puVar13 = *puVar13 | 0x80;
      local_28 = (ulonglong)uVar12 << 0x20;
      puVar11 = local_1c;
    }
    break;
  case 0x5f:
    uVar10 = FUN_0055af40(*piVar7,param_1[iVar4 * 4 + -4],param_1 + iVar4 * 4 + 4);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x60:
    iVar6 = *piVar7;
    piVar7 = (int *)FUN_00552230(iVar6,8);
    if (piVar7 != (int *)0x0) {
      piVar7[0] = 0;
      piVar7[1] = 0;
      iVar8 = FUN_0054a2b0(iVar6,*piVar7,8,piVar7 + 1,&local_2c);
      *piVar7 = iVar8;
      if (-1 < (int)local_2c) {
        uVar10 = FUN_0055e3f0(iVar6,param_1 + iVar4 * 4 + 4);
        *(undefined4 *)(*piVar7 + (int)local_2c * 8) = uVar10;
        local_28 = CONCAT44(local_28._4_4_,piVar7);
        puVar11 = local_1c;
        break;
      }
      FUN_0055afc0(iVar6,piVar7);
    }
    local_28 = local_28 & 0xffffffff00000000;
    puVar11 = local_1c;
    break;
  case 0x61:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)param_1[iVar4 * 4 + 6];
    break;
  case 0x62:
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -4],param_1[iVar4 * 4]);
    break;
  case 99:
    uVar14 = *(undefined1 *)((int)param_1 + iVar6 + 0xe);
    goto LAB_005818c1;
  case 100:
    uVar14 = 0x1a;
LAB_005818c1:
    FUN_00548e60(&local_28,piVar7,uVar14,param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x65:
    puVar11 = (undefined1 *)FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -4,1);
    local_2c = puVar11;
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + 4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x76;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_2c,iVar6);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -4],puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x66:
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -0xc,1);
    local_c = iVar6;
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    puVar11 = (undefined1 *)FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + -4,1);
    local_2c = puVar11;
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    iVar6 = FUN_00553bb0(*piVar7,0x1a,param_1 + iVar4 * 4 + 4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_1c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (local_1c != (undefined1 *)0x0) {
      memset(local_1c,0,0x2c);
      *local_1c = 0x76;
      *(undefined2 *)(local_1c + 0x1e) = 0xffff;
      *(undefined4 *)(local_1c + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,local_1c,local_2c,iVar6);
    if ((local_1c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_1c + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (local_2c != (undefined1 *)0x0) {
      memset(local_2c,0,0x2c);
      *local_2c = 0x76;
      *(undefined2 *)(local_2c + 0x1e) = 0xffff;
      *(undefined4 *)(local_2c + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,local_2c,local_c,local_1c);
    puVar11 = local_2c;
    if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x67:
    puVar1 = (uint *)(param_1 + iVar4 * 4 + 4);
    if (*(char *)((int)piVar7 + 0x12) == '\0') {
      FUN_00553950(piVar7,"near \"%T\": syntax error",puVar1);
      local_28 = (ulonglong)*puVar1 << 0x20;
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + *puVar1);
    }
    else {
      local_2c = (undefined1 *)FUN_00553bb0(*piVar7,0x84,puVar1,1);
      FUN_005540d0(*piVar7,local_2c,0,0);
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = CONCAT44(local_28._4_4_,local_2c);
      if (local_2c != (undefined1 *)0x0) {
        FUN_0055a0e0(*puVar1 + 1,local_2c + 0x18);
      }
      local_28 = CONCAT44(*puVar1,(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + *puVar1);
    }
    break;
  case 0x68:
    FUN_00548e60(&local_28,piVar7,0x85,param_1 + iVar4 * 4 + 4);
    FUN_00553e40(piVar7,(undefined4)local_28);
    iVar6 = param_1[iVar4 * 4 + 4];
    local_28 = CONCAT44(iVar6,(undefined4)local_28);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + iVar6);
    break;
  case 0x69:
    uVar10 = FUN_00553ae0(piVar7,param_1[iVar4 * 4 + -4],param_1 + iVar4 * 4 + 4);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -3],uVar10);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x6a:
    iVar6 = param_1[iVar4 * 4 + -8];
    iVar8 = FUN_00553bb0(*piVar7,0x25,param_1 + iVar4 * 4,1);
    FUN_005540d0(*piVar7,iVar8,iVar6,0);
    if ((iVar8 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar8 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0x10],iVar8);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x6b:
    if (((int *)param_1[iVar4 * 4] != (int *)0x0) &&
       (*(int *)(*piVar7 + 0x68) < *(int *)param_1[iVar4 * 4])) {
      FUN_00553950(piVar7,"too many arguments on function %T",param_1 + iVar4 * 4 + -0xc);
    }
    iVar6 = FUN_00555ed0(piVar7,param_1[iVar4 * 4],param_1 + iVar4 * 4 + -0xc);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],iVar6);
    if ((param_1[iVar4 * 4 + -4] != 0) && (iVar6 != 0)) {
      *(ushort *)(iVar6 + 2) = *(ushort *)(iVar6 + 2) | 0x10;
    }
    break;
  case 0x6c:
    uVar10 = FUN_00555ed0(piVar7,0,param_1 + iVar4 * 4 + -8);
    local_28 = CONCAT44(param_1[iVar4 * 4 + -8],uVar10);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x6d:
    puVar11 = (undefined1 *)FUN_00555ed0(piVar7,0,param_1 + iVar4 * 4 + 4);
    if (puVar11 != (undefined1 *)0x0) {
      *puVar11 = 0x9b;
    }
    iVar6 = param_1[iVar4 * 4 + 4];
    local_28 = CONCAT44(iVar6,puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + iVar6);
    break;
  case 0x6e:
    FUN_00548e20(&local_28,piVar7,*(undefined1 *)((int)param_1 + iVar6 + -2),
                 param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x6f:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)0;
    break;
  case 0x70:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)1;
    break;
  case 0x71:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + 4]);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + -4]);
    _Dst = (undefined1 *)FUN_00555ed0(piVar7,uVar10,param_1 + iVar4 * 4);
    local_28 = CONCAT44(local_28._4_4_,_Dst);
    if (param_1[iVar4 * 4 + 2] != 0) {
      _Dst = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (_Dst != (undefined1 *)0x0) {
        memset(_Dst,0,0x2c);
        *_Dst = 0x13;
        *(undefined2 *)(_Dst + 0x1e) = 0xffff;
        *(undefined4 *)(_Dst + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,_Dst,(undefined4)local_28,0);
      if ((_Dst != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(_Dst + 0x14))) {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(_Dst);
    }
    iVar6 = param_1[iVar4 * 4 + -3];
    goto LAB_00581e2b;
  case 0x72:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + -4]);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + -0xc]);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + 4]);
    _Dst = (undefined1 *)FUN_00555ed0(piVar7,uVar10,param_1 + iVar4 * 4 + -8);
    local_28 = CONCAT44(local_28._4_4_,_Dst);
    if (param_1[iVar4 * 4 + -6] != 0) {
      _Dst = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (_Dst != (undefined1 *)0x0) {
        memset(_Dst,0,0x2c);
        *_Dst = 0x13;
        *(undefined2 *)(_Dst + 0x1e) = 0xffff;
        *(undefined4 *)(_Dst + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,_Dst,(undefined4)local_28,0);
      if ((_Dst != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(_Dst + 0x14))) {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(_Dst);
    }
    iVar6 = param_1[iVar4 * 4 + -0xb];
LAB_00581e2b:
    puVar11 = (undefined1 *)param_1[iVar4 * 4 + 6];
    local_28 = CONCAT44(iVar6,(undefined4)local_28);
    if (_Dst != (undefined1 *)0x0) {
      *(ushort *)(_Dst + 2) = *(ushort *)(_Dst + 2) | 0x80;
    }
    break;
  case 0x73:
    FUN_00548ec0(&local_28,piVar7,*(undefined1 *)((int)param_1 + iVar6 + 0xe),param_1 + iVar4 * 4,
                 param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x74:
    FUN_00548ec0(&local_28,piVar7,0x4a,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x75:
    FUN_00548e20(&local_28,piVar7,0x46,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4);
    FUN_0052e030(piVar7,param_1[iVar4 * 4 + 4],(undefined4)local_28,0x49);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x76:
    FUN_00548e20(&local_28,piVar7,0x92,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + 4);
    FUN_0052e030(piVar7,param_1[iVar4 * 4 + 4],(undefined4)local_28,0x4a);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x77:
    FUN_00548f50(&local_28,piVar7,*(undefined1 *)((int)param_1 + iVar6 + -2),param_1 + iVar4 * 4 + 4
                 ,param_1 + iVar4 * 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x78:
    FUN_00548f50(&local_28,piVar7,0x9c,param_1 + iVar4 * 4 + 4,param_1 + iVar4 * 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x79:
    FUN_00548f50(&local_28,piVar7,0x9d,param_1 + iVar4 * 4 + 4,param_1 + iVar4 * 4);
    puVar11 = (undefined1 *)local_20;
    break;
  case 0x7a:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + -4]);
    local_2c = (undefined1 *)FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + 4]);
    local_c = param_1[iVar4 * 4 + -0xc];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x47;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00556700(*piVar7,local_2c);
    }
    else {
      *(undefined1 **)(puVar11 + 0x10) = local_2c;
    }
    if (param_1[iVar4 * 4 + -8] != 0) {
      local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (local_2c != (undefined1 *)0x0) {
        memset(local_2c,0,0x2c);
        *local_2c = 0x13;
        *(undefined2 *)(local_2c + 0x1e) = 0xffff;
        *(undefined4 *)(local_2c + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,local_2c,puVar11,0);
      puVar11 = local_2c;
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(puVar11);
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xb],(undefined4)local_28);
    puVar11 = (undefined1 *)param_1[iVar4 * 4 + 6];
    break;
  case 0x7b:
    if (param_1[iVar4 * 4] == 0) {
      iVar6 = FUN_00553bb0(*piVar7,0x81,&PTR_DAT_007122d8 + param_1[iVar4 * 4 + -8] * 2,1);
      FUN_005540d0(*piVar7,iVar6,0,0);
      if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = CONCAT44(local_28._4_4_,iVar6);
      FUN_00555e30(*piVar7,param_1[iVar4 * 4 + -0xc]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -0xb],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
      break;
    }
    local_c = param_1[iVar4 * 4 + -0xc];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x48;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00556700(*piVar7,param_1[iVar4 * 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      FUN_00556b40(piVar7,puVar11);
    }
    goto LAB_005821ea;
  case 0x7c:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x74;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00566d10(*piVar7,param_1[iVar4 * 4]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -4],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -4],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x7d:
    local_c = param_1[iVar4 * 4 + -0xc];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x48;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00566d10(*piVar7,param_1[iVar4 * 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
    }
LAB_005821ea:
    if (param_1[iVar4 * 4 + -8] != 0) {
      local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (local_2c != (undefined1 *)0x0) {
        memset(local_2c,0,0x2c);
        *local_2c = 0x13;
        *(undefined2 *)(local_2c + 0x1e) = 0xffff;
        *(undefined4 *)(local_2c + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,local_2c,puVar11,0);
      puVar11 = local_2c;
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(puVar11);
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0xb],(undefined4)local_28);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0x7e:
    local_2c = (undefined1 *)FUN_00567180(*piVar7,0,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    local_c = param_1[iVar4 * 4 + -8];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x48;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,local_c,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00567370(*piVar7,local_2c);
    }
    else {
      uVar10 = FUN_00566e90(piVar7,0,local_2c,0,0,0,0,0,0,0);
      *(undefined4 *)(puVar11 + 0x10) = uVar10;
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
    }
    if (param_1[iVar4 * 4 + -4] != 0) {
      local_2c = (undefined1 *)FUN_00552230(*piVar7,0x2c);
      if (local_2c != (undefined1 *)0x0) {
        memset(local_2c,0,0x2c);
        *local_2c = 0x13;
        *(undefined2 *)(local_2c + 0x1e) = 0xffff;
        *(undefined4 *)(local_2c + 0x14) = 1;
      }
      FUN_005540d0(*piVar7,local_2c,puVar11,0);
      puVar11 = local_2c;
      if ((local_2c != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(local_2c + 0x14)))
      {
        FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",
                     *(int *)(*piVar7 + 0x5c));
      }
      local_28 = ZEXT48(puVar11);
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -7],(undefined4)local_28);
    if (param_1[iVar4 * 4 + 4] == 0) {
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 1] + param_1[iVar4 * 4]);
    }
    else {
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x7f:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x14;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00566d10(*piVar7,param_1[iVar4 * 4]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -8],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4];
      *(ushort *)(puVar11 + 2) = *(ushort *)(puVar11 + 2) | 0x800;
      FUN_00556b40(piVar7,puVar11);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -8],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x80:
    local_c = param_1[iVar4 * 4];
    iVar6 = param_1[iVar4 * 4 + -8];
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x86;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,iVar6,local_c);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    local_28 = CONCAT44(local_28._4_4_,puVar11);
    if (puVar11 == (undefined1 *)0x0) {
      FUN_00556700(*piVar7,param_1[iVar4 * 4 + -4]);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    else {
      *(int *)(puVar11 + 0x10) = param_1[iVar4 * 4 + -4];
      FUN_00556b40(piVar7,puVar11);
      local_28 = CONCAT44(param_1[iVar4 * 4 + -0xc],(undefined4)local_28);
      puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    }
    break;
  case 0x81:
    iVar8 = param_1[iVar4 * 4 + -4];
    iVar6 = param_1[iVar4 * 4 + -0xc];
    goto LAB_00582654;
  case 0x82:
    iVar8 = param_1[iVar4 * 4 + -4];
    iVar6 = 0;
LAB_00582654:
    uVar10 = FUN_005565a0(piVar7,iVar6,iVar8);
    uVar10 = FUN_005565a0(piVar7,uVar10,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x83:
    uVar10 = FUN_005565a0(piVar7,param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x84:
    uVar10 = FUN_005565a0(piVar7,0,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x85:
    uVar10 = FUN_00567180(*piVar7,0,param_1 + iVar4 * 4 + -8,0,param_1[iVar4 * 4],
                          param_1[iVar4 * 4 + -0x20],param_1 + iVar4 * 4 + -0x24,
                          param_1 + iVar4 * 4 + 4,0,param_1[iVar4 * 4 + -0x18]);
    FUN_00551790(piVar7,param_1 + iVar4 * 4 + -0x14,param_1 + iVar4 * 4 + -0x10,uVar10);
    puVar11 = local_1c;
    break;
  case 0x86:
    local_28 = 2;
    break;
  case 0x87:
    uVar10 = FUN_00553ae0(piVar7,0,param_1 + iVar4 * 4);
    iVar6 = param_1[iVar4 * 4 + -0xc];
    goto LAB_00582701;
  case 0x88:
    uVar10 = FUN_00553ae0(piVar7,0,param_1 + iVar4 * 4);
    iVar6 = 0;
LAB_00582701:
    piVar9 = (int *)FUN_005565a0(piVar7,iVar6,uVar10);
    local_28 = CONCAT44(local_28._4_4_,piVar9);
    FUN_00556980(piVar7,piVar9,param_1 + iVar4 * 4 + -4,1);
    FUN_00556650(piVar7,piVar9,"index");
    puVar11 = local_1c;
    if (piVar9 != (int *)0x0) {
      *(char *)(piVar9[2] + -8 + *piVar9 * 0x14) = (char)param_1[iVar4 * 4 + 4];
    }
    break;
  case 0x89:
    FUN_00552ca0(piVar7,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0x8a:
    FUN_0056b870(piVar7);
    puVar11 = local_1c;
    break;
  case 0x8b:
    FUN_00561270(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4,0,0);
    puVar11 = local_1c;
    break;
  case 0x8c:
    uVar10 = 0;
    goto LAB_00582793;
  case 0x8d:
    FUN_00561270(piVar7,param_1 + iVar4 * 4 + -0xc,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4,0);
    puVar11 = local_1c;
    break;
  case 0x8e:
    uVar10 = 1;
LAB_00582793:
    FUN_00561270(piVar7,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4,
                 uVar10);
    puVar11 = local_1c;
    break;
  case 0x8f:
    FUN_00561270(piVar7,param_1 + iVar4 * 4 + -0xc,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4,1);
    puVar11 = local_1c;
    break;
  case 0x90:
    local_10 = param_1[iVar4 * 4 + -8];
    local_c = (param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]) - local_10;
    FUN_005576f0(piVar7,param_1[iVar4 * 4],&local_10);
    puVar11 = local_1c;
    break;
  case 0x91:
    FUN_0054b890(piVar7,param_1 + iVar4 * 4 + -0x18,param_1 + iVar4 * 4 + -0x14,
                 param_1[iVar4 * 4 + -0x10],param_1[iVar4 * 4 + -0xc],param_1[iVar4 * 4 + -0xb],
                 param_1[iVar4 * 4 + -4],param_1[iVar4 * 4 + 4],param_1[iVar4 * 4 + -0x24],
                 param_1[iVar4 * 4 + -0x1c]);
    puVar11 = local_1c;
    if (param_1[iVar4 * 4 + -0x13] == 0) {
      local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + -0x18);
    }
    else {
      local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + -0x14);
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
    local_28 = (ulonglong)*(byte *)((int)param_1 + iVar6 + 0xe);
    break;
  case 0x96:
    local_28 = CONCAT44(param_1[iVar4 * 4 + 4],0x6b);
    break;
  case 0x97:
    *(int *)(*(int *)(param_1[iVar4 * 4 + -4] + 0x24) + 0x20) = param_1[iVar4 * 4];
    *(int *)(param_1[iVar4 * 4 + -4] + 0x24) = param_1[iVar4 * 4];
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4 + -4];
    break;
  case 0x98:
    *(int *)(param_1[iVar4 * 4] + 0x24) = param_1[iVar4 * 4];
  case 0x40:
    local_28 = (ulonglong)(uint)param_1[iVar4 * 4];
    break;
  case 0x99:
    local_28 = *(ulonglong *)(param_1 + iVar4 * 4 + 4);
    FUN_00553950(piVar7,
                 "qualified table names are not allowed on INSERT, UPDATE, and DELETE statements within triggers"
                );
    puVar11 = local_1c;
    break;
  case 0x9a:
    FUN_00553950(piVar7,
                 "the INDEXED BY clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar11 = local_1c;
    break;
  case 0x9b:
    FUN_00553950(piVar7,
                 "the NOT INDEXED clause is not allowed on UPDATE or DELETE statements within triggers"
                );
    puVar11 = local_1c;
    break;
  case 0x9c:
    uVar10 = FUN_00568700(*piVar7,param_1 + iVar4 * 4 + -0xc,param_1[iVar4 * 4],
                          param_1[iVar4 * 4 + 4],(char)param_1[iVar4 * 4 + -0x10]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x9d:
    uVar10 = FUN_00568560(*piVar7,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]
                          ,param_1[iVar4 * 4 + 5],(char)param_1[iVar4 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x9e:
    uVar10 = FUN_00568560(*piVar7,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4],0,
                          param_1[iVar4 * 4 + 4],(char)param_1[iVar4 * 4 + -0xc]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0x9f:
    uVar10 = FUN_005684e0(*piVar7,param_1 + iVar4 * 4 + -4,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0xa0:
    uVar10 = FUN_00568690(*piVar7,param_1[iVar4 * 4 + 4]);
    local_28 = CONCAT44(local_28._4_4_,uVar10);
    puVar11 = local_1c;
    break;
  case 0xa1:
    puVar11 = (undefined1 *)FUN_00552230(*piVar7,0x2c);
    if (puVar11 != (undefined1 *)0x0) {
      memset(puVar11,0,0x2c);
      *puVar11 = 0x38;
      *(undefined2 *)(puVar11 + 0x1e) = 0xffff;
      *(undefined4 *)(puVar11 + 0x14) = 1;
    }
    FUN_005540d0(*piVar7,puVar11,0,0);
    if ((puVar11 != (undefined1 *)0x0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(puVar11 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    if (puVar11 != (undefined1 *)0x0) {
      puVar11[1] = 4;
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -8],puVar11);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0xa2:
    iVar6 = FUN_00553bb0(*piVar7,0x38,param_1 + iVar4 * 4,1);
    FUN_005540d0(*piVar7,iVar6,0,0);
    if ((iVar6 != 0) && (*(int *)(*piVar7 + 0x5c) < *(int *)(iVar6 + 0x14))) {
      FUN_00553950(piVar7,"Expression tree is too large (maximum depth %d)",*(int *)(*piVar7 + 0x5c)
                  );
    }
    if (iVar6 != 0) {
      *(char *)(iVar6 + 1) = (char)param_1[iVar4 * 4 + -8];
    }
    local_28 = CONCAT44(param_1[iVar4 * 4 + -0x10],iVar6);
    puVar11 = (undefined1 *)(param_1[iVar4 * 4 + 5] + param_1[iVar4 * 4 + 4]);
    break;
  case 0xa3:
    local_28 = 3;
    break;
  case 0xa4:
    FUN_005530e0(piVar7,param_1[iVar4 * 4 + 4],param_1[iVar4 * 4]);
    puVar11 = local_1c;
    break;
  case 0xa5:
    FUN_005308c0(piVar7,0x18,&DAT_00712670,param_1[iVar4 * 4 + -8],param_1[iVar4 * 4 + -8],
                 param_1[iVar4 * 4],param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0xa6:
    FUN_005308c0(piVar7,0x19,&DAT_00712604,param_1[iVar4 * 4 + 4],0,0,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0xa7:
    FUN_00563e10(piVar7,0,0);
    puVar11 = local_1c;
    break;
  case 0xa8:
    FUN_00563e10(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xa9:
    FUN_00549fd0(piVar7,0,0);
    puVar11 = local_1c;
    break;
  case 0xaa:
    FUN_00549fd0(piVar7,param_1 + iVar4 * 4,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xab:
    FUN_00549b90(piVar7,param_1[iVar4 * 4 + -8],param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xac:
    FUN_005498e0(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xad:
    *(undefined1 *)(*piVar7 + 0xea) = 0;
    FUN_005496d0(piVar7,param_1[iVar4 * 4 + 4]);
    puVar11 = local_1c;
    break;
  case 0xae:
    FUN_005771f0(piVar7,0);
    puVar11 = local_1c;
    break;
  case 0xaf:
    FUN_005771f0(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
    break;
  case 0xb0:
    FUN_00576df0(piVar7,param_1 + iVar4 * 4 + -8,param_1 + iVar4 * 4 + -4,param_1 + iVar4 * 4 + 4,
                 param_1[iVar4 * 4 + -0xc]);
    puVar11 = local_1c;
    break;
  case 0xb1:
    FUN_00528cb0(piVar7);
    piVar7[0x86] = 0;
    piVar7[0x87] = 0;
    puVar11 = local_1c;
    break;
  case 0xb2:
    FUN_00576d10(piVar7,param_1 + iVar4 * 4 + 4);
    puVar11 = local_1c;
  }
switchD_00580d2a_caseD_b3:
  bVar2 = (&DAT_007152c8)[param_2 * 2];
  local_1c = (undefined1 *)(uint)bVar2;
  uVar12 = (uint)(byte)(&DAT_007152c9)[param_2 * 2];
  *param_1 = *param_1 - uVar12;
  puVar13 = (ushort *)(param_1 + iVar4 * 4 + uVar12 * -4 + 3);
  uVar3 = *(ushort *)
           (&DAT_007134c0 +
           ((int)*(short *)(&DAT_00714a98 + (uint)*puVar13 * 2) + (int)local_1c) * 2);
  if (0x272 < uVar3) {
    FUN_00580ac0(param_1);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = *param_1 + 1;
  if (uVar12 == 0) {
    *param_1 = iVar4;
    if (iVar4 < 100) {
      *(ushort *)(param_1 + iVar4 * 4 + 3) = uVar3;
      *(ulonglong *)(param_1 + iVar4 * 4 + 4) = local_28;
      *(byte *)((int)param_1 + iVar4 * 0x10 + 0xe) = bVar2;
      param_1[iVar4 * 4 + 6] = (int)puVar11;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00580a70(param_1,&local_28);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  *param_1 = iVar4;
  *(ulonglong *)(puVar13 + 10) = local_28;
  puVar13[8] = uVar3;
  *(byte *)(puVar13 + 9) = bVar2;
  *(undefined1 **)(puVar13 + 0xe) = puVar11;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005830c0 @ 005830c0  kind=lib  attributed-by=lib-island  size=206 */

int FUN_005830c0(int param_1,int param_2)

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
                        (*(int **)(param_1 + 0x40),&DAT_00714a7c,0x1c,0,0);
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


/* FUN_00583190 @ 00583190  kind=lib  attributed-by=lib-island  size=210 */

void FUN_00583190(undefined1 *param_1,uint param_2)

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
  FUN_00533ea0(param_1,param_2);
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


