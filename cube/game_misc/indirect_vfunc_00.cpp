// indirect_vfunc_00 (game_misc) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_vfunc_00.h"

/* FUN_0051c760 @ 0051c760  kind=gamemisc  attributed-by=role:vfunc-indirect  size=51 */

int FUN_0051c760(int param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 0x1c) & 0x10) == 0) {
    iVar1 = FUN_0056bce0(param_1,2);
    if (iVar1 == 0) {
      return 0;
    }
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(ushort *)(param_1 + 0x1c) & 0x4000) != 0) {
    iVar1 = iVar1 + *(int *)(param_1 + 0x10);
  }
  return iVar1;
}


/* FUN_0051c950 @ 0051c950  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void FUN_0051c950(undefined4 param_1)

{
  FUN_0056bce0(param_1,1);
  return;
}


/* FUN_0051c970 @ 0051c970  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void FUN_0051c970(undefined4 param_1)

{
  FUN_0056bce0(param_1,2);
  return;
}


/* FUN_0051c990 @ 0051c990  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void FUN_0051c990(undefined4 param_1)

{
  FUN_0056bce0(param_1,3);
  return;
}


/* FUN_0051c9b0 @ 0051c9b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=12 */

undefined1 FUN_0051c9b0(int param_1)

{
  return *(undefined1 *)(param_1 + 0x1e);
}


/* FUN_0051c9c0 @ 0051c9c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=89 */

undefined1 FUN_0051c9c0(int param_1)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0x1e) == '\x03') {
    FUN_0052b630(param_1);
    uVar1 = *(ushort *)(param_1 + 0x1c);
    if ((uVar1 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 5;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    if ((uVar1 & 4) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 1;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    if ((uVar1 & 8) != 0) {
      *(undefined1 *)(param_1 + 0x1e) = 2;
      return *(undefined1 *)(param_1 + 0x1e);
    }
    *(char *)(param_1 + 0x1e) = '\x04' - ((uVar1 & 2) != 0);
  }
  return *(undefined1 *)(param_1 + 0x1e);
}


/* FUN_0051cbf0 @ 0051cbf0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=532 */

int FUN_0051cbf0(int param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint local_10;
  int local_c;
  uint local_8;
  
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 == (int *)0x0) {
    iVar1 = FUN_0057fb50(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    piVar2 = *(int **)(param_1 + 0x18);
  }
  iVar1 = 0;
  piVar2 = (int *)*piVar2;
  if (*piVar2 != 0) {
    (*DAT_00766630)(*piVar2);
  }
  if (piVar2[0xc] <= param_2) {
    local_8 = (param_2 + 1) * param_3;
    piVar2[0xb] = param_3;
    iVar1 = FUN_00524570(piVar2 + 2,&local_10);
    if (iVar1 == 0) {
      iVar5 = (int)local_8 >> 0x1f;
      iVar1 = 0;
      if ((iVar5 < local_c) || ((iVar5 <= local_c && (local_8 <= local_10)))) {
LAB_0051cce2:
        iVar1 = 0;
        local_c = piVar2[0xd];
        iVar5 = FUN_00579f80();
        if ((iVar5 == 0) && (iVar5 = FUN_00563800(local_c,param_2 * 8 + 8), iVar5 != 0)) {
          piVar2[0xd] = iVar5;
          if (param_2 < piVar2[0xc]) goto LAB_0051cdbf;
          do {
            iVar5 = (*(code *)PTR_CreateFileMappingW_007670d8)(piVar2[4],0,4,0,local_8,0);
            if ((iVar5 == 0) ||
               (uVar6 = (uint)(piVar2[0xc] * param_3) % DAT_0076e2dc,
               iVar4 = (*(code *)PTR_MapViewOfFile_007672b8)
                                 (iVar5,6,0,piVar2[0xc] * param_3 - uVar6,param_3 + uVar6),
               iVar4 == 0)) {
              iVar1 = (*(code *)PTR_GetLastError_007671bc)();
              piVar2[0xe] = iVar1;
              iVar1 = FUN_0057fa50(0x150a,iVar1,"winShmMap3",*(undefined4 *)(param_1 + 0x1c),0x82e3)
              ;
              if (iVar5 != 0) {
                (*(code *)PTR_CloseHandle_007670a8)(iVar5);
              }
              break;
            }
            *(int *)(piVar2[0xd] + 4 + piVar2[0xc] * 8) = iVar4;
            *(int *)(piVar2[0xd] + piVar2[0xc] * 8) = iVar5;
            piVar2[0xc] = piVar2[0xc] + 1;
          } while (piVar2[0xc] <= param_2);
        }
        else {
          iVar1 = 0xc0a;
        }
      }
      else if (param_4 != 0) {
        iVar1 = FUN_005239d0(piVar2 + 2,local_8,iVar5);
        if (iVar1 == 0) goto LAB_0051cce2;
        uVar3 = (*(code *)PTR_GetLastError_007671bc)
                          ("winShmMap2",*(undefined4 *)(param_1 + 0x1c),0x82ad);
        iVar1 = FUN_0057fa50(0x130a,uVar3);
      }
    }
    else {
      uVar3 = (*(code *)PTR_GetLastError_007671bc)
                        ("winShmMap1",*(undefined4 *)(param_1 + 0x1c),0x829e);
      iVar1 = FUN_0057fa50(0x130a,uVar3);
    }
    if (piVar2[0xc] <= param_2) {
      *param_5 = 0;
      goto LAB_0051cdeb;
    }
  }
LAB_0051cdbf:
  *param_5 = (uint)(param_2 * param_3) % DAT_0076e2dc + *(int *)(piVar2[0xd] + 4 + param_2 * 8);
LAB_0051cdeb:
  if (*piVar2 != 0) {
    (*DAT_00766638)(*piVar2);
  }
  return iVar1;
}


/* FUN_0051ce90 @ 0051ce90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=13 */

undefined4 FUN_0051ce90(int *param_1)

{
  return *(undefined4 *)(*param_1 + 4);
}


/* FUN_0051cea0 @ 0051cea0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 FUN_0051cea0(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* FUN_0051ceb0 @ 0051ceb0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=35 */

undefined4 FUN_0051ceb0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 4);
  if (((iVar1 != 0) && (param_2 < *(int *)(iVar1 + 4))) && (-1 < param_2)) {
    return *(undefined4 *)(iVar1 + 8 + param_2 * 8);
  }
  return 0;
}


/* FUN_0051cee0 @ 0051cee0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=173 */

void FUN_0051cee0(undefined4 *param_1,int param_2,undefined4 param_3,code *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  
  if (-1 < param_2) {
    puVar1 = (undefined4 *)param_1[1];
    if (puVar1 == (undefined4 *)0x0) {
      iVar2 = 0;
    }
    else {
      iVar2 = puVar1[1];
      if (param_2 < iVar2) goto LAB_0051cf50;
    }
    puVar1 = (undefined4 *)FUN_00552390(param_1[2],puVar1,param_2 * 8 + 0x10);
    if (puVar1 != (undefined4 *)0x0) {
      param_1[1] = puVar1;
      memset(puVar1 + iVar2 * 2 + 2,0,(param_2 - iVar2) * 8 + 8);
      puVar1[1] = param_2 + 1;
      *puVar1 = *param_1;
LAB_0051cf50:
      if ((puVar1[param_2 * 2 + 2] != 0) && ((code *)puVar1[param_2 * 2 + 3] != (code *)0x0)) {
        (*(code *)puVar1[param_2 * 2 + 3])(puVar1[param_2 * 2 + 2]);
      }
      puVar1[param_2 * 2 + 2] = param_3;
      puVar1[param_2 * 2 + 3] = param_4;
      return;
    }
  }
  if (param_4 != (code *)0x0) {
    (*param_4)(param_3);
  }
  return;
}


/* FUN_0051cfd0 @ 0051cfd0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void FUN_0051cfd0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00575040(param_1 + 8,param_2,param_3,0,param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d010 @ 0051d010  kind=gamemisc  attributed-by=role:vfunc-indirect  size=33 */

void FUN_0051d010(int param_1,undefined8 param_2)

{
  FUN_00574df0(param_1 + 8,param_2);
  return;
}


/* FUN_0051d040 @ 0051d040  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void FUN_0051d040(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_00575040(param_1 + 8,param_2,param_3,1,0xffffffff);
  return;
}


/* FUN_0051d0b0 @ 0051d0b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

void FUN_0051d0b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)(param_1 + 0x38) = 1;
  FUN_00575040(param_1 + 8,param_2,param_3,2,0xffffffff);
  return;
}


/* FUN_0051d350 @ 0051d350  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void FUN_0051d350(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00575040(param_1 + 8,param_2,param_3,1,param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d390 @ 0051d390  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void FUN_0051d390(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00575040(param_1 + 8,param_2,param_3,2,param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d4d0 @ 0051d4d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void FUN_0051d4d0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_00575040(param_1 + 8,param_2,param_3,3,param_4);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d510 @ 0051d510  kind=gamemisc  attributed-by=role:vfunc-indirect  size=13 */

void FUN_0051d510(void)

{
  FUN_00574570();
  return;
}


/* FUN_0051d9c0 @ 0051d9c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=111 */

uint FUN_0051d9c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_00533960(param_1,param_2,param_3,param_4,param_5,0);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0051dac0 @ 0051dac0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=112 */

uint FUN_0051dac0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  uint uVar2;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_00533960(param_1,param_2,param_3,param_4,param_5,param_6);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0051db30 @ 0051db30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=145 */

uint FUN_0051db30(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  iVar2 = FUN_0056a850(param_1,param_2,0xffffffff,2);
  if (iVar2 != 0) {
    uVar3 = FUN_00533960(param_1,iVar2,param_3,param_4,param_5,0);
    FUN_005521a0(param_1,iVar2);
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar3;
}


/* FUN_0051dbd0 @ 0051dbd0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=74 */

undefined4 FUN_0051dbd0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 200) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_0051dc20 @ 0051dc20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=74 */

undefined4 FUN_0051dc20(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0xcc) = param_3;
  *(undefined4 *)(param_1 + 0xd0) = param_2;
  *(undefined4 *)(param_1 + 200) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_0051dde0 @ 0051dde0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=61 */

int FUN_0051dde0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_005224a0(0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(iVar1 + 0x3c))(iVar1,param_1 * 1000);
  return iVar1 / 1000;
}


/* FUN_0051de20 @ 0051de20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=12 */

undefined1 FUN_0051de20(int param_1)

{
  return *(undefined1 *)(param_1 + 0x36);
}


/* FUN_0051de30 @ 0051de30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

undefined4 FUN_0051de30(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    return *param_1;
  }
  return 0;
}


/* FUN_0051df10 @ 0051df10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

undefined4 FUN_0051df10(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_2 == 0) {
    uVar1 = *(undefined4 *)(param_1 + 4);
  }
  else {
    uVar1 = *(undefined4 *)(param_2 + 0x3c);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051df50 @ 0051df50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

undefined4 FUN_0051df50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0xac) = param_2;
  *(undefined4 *)(param_1 + 0xa8) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051dfa0 @ 0051dfa0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

undefined4 FUN_0051dfa0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb0);
  *(undefined4 *)(param_1 + 0xb4) = param_2;
  *(undefined4 *)(param_1 + 0xb0) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051e270 @ 0051e270  kind=gamemisc  attributed-by=role:vfunc-indirect  size=208 */

undefined4 FUN_0051e270(int param_1,void *param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  size_t _Size;
  size_t sVar4;
  bool bVar5;
  undefined4 local_10;
  undefined4 uStack_c;
  
  if (((*(uint *)(param_1 + 0x18) == param_4) && (*(int *)(param_1 + 0x1c) == param_5)) &&
     (param_4 != 0 || param_5 != 0)) {
    piVar3 = *(int **)(param_1 + 0x20);
  }
  else {
    piVar3 = *(int **)(param_1 + 4);
    if (piVar3 != (int *)0x0) {
      uStack_c = 0;
      local_10 = 0;
      do {
        bVar5 = 0xfffffc03 < local_10;
        local_10 = local_10 + 0x3fc;
        uStack_c = uStack_c + (uint)bVar5;
        if ((param_5 < uStack_c) || ((param_5 <= uStack_c && (param_4 < local_10)))) break;
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)0x0);
    }
  }
  iVar1 = __alldiv(param_4,param_5,0x3fc,0);
  iVar1 = param_4 + iVar1 * -0x3fc;
  uVar2 = param_3;
  do {
    sVar4 = 0x3fc - iVar1;
    _Size = sVar4;
    if ((int)uVar2 < (int)sVar4) {
      _Size = uVar2;
    }
    memcpy(param_2,(void *)(iVar1 + 4 + (int)piVar3),_Size);
    param_2 = (void *)((int)param_2 + _Size);
    uVar2 = uVar2 - sVar4;
    iVar1 = 0;
  } while (((-1 < (int)uVar2) && (piVar3 = (int *)*piVar3, piVar3 != (int *)0x0)) &&
          (0 < (int)uVar2));
  *(uint *)(param_1 + 0x18) = param_3 + param_4;
  *(int **)(param_1 + 0x20) = piVar3;
  *(uint *)(param_1 + 0x1c) = ((int)param_3 >> 0x1f) + param_5 + (uint)CARRY4(param_3,param_4);
  return 0;
}


/* FUN_0051e340 @ 0051e340  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

undefined4 FUN_0051e340(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xb8);
  *(undefined4 *)(param_1 + 0xbc) = param_2;
  *(undefined4 *)(param_1 + 0xb8) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_0051e950 @ 0051e950  kind=gamemisc  attributed-by=role:vfunc-indirect  size=15 */

undefined4 FUN_0051e950(undefined4 param_1)

{
  DAT_007666a4 = param_1;
  return 0;
}


/* FUN_0051ea40 @ 0051ea40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=26 */

void FUN_0051ea40(int param_1)

{
  if (param_1 < 0) {
    param_1 = 0;
  }
  FUN_0051e960(param_1,param_1 >> 0x1f);
  return;
}


/* FUN_0051ea60 @ 0051ea60  kind=gamemisc  attributed-by=role:vfunc-indirect  size=262 */

undefined4 FUN_0051ea60(int param_1,void *param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *_Size;
  
  puVar6 = param_3;
  do {
    if ((int)puVar6 < 1) {
      return 0;
    }
    puVar3 = *(undefined4 **)(param_1 + 0x10);
    iVar4 = __allrem(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),0x3fc,0);
    _Size = (undefined4 *)(0x3fc - iVar4);
    if ((int)puVar6 < 0x3fc - iVar4) {
      _Size = puVar6;
    }
    if (iVar4 == 0) {
      iVar5 = FUN_00579f80();
      if (iVar5 != 0) {
        return 0xc0a;
      }
      if (DAT_007665e0 == 0) {
        param_3 = (undefined4 *)(*DAT_00766600)(0x400);
      }
      else {
        if (DAT_0076b488 != 0) {
          (*DAT_00766630)(DAT_0076b488);
        }
        FUN_0053dcf0(0x400,&param_3);
        if (DAT_0076b488 != 0) {
          (*DAT_00766638)(DAT_0076b488);
        }
      }
      if (param_3 == (undefined4 *)0x0) {
        return 0xc0a;
      }
      *param_3 = 0;
      if (puVar3 == (undefined4 *)0x0) {
        *(undefined4 **)(param_1 + 4) = param_3;
      }
      else {
        *puVar3 = param_3;
      }
      *(undefined4 **)(param_1 + 0x10) = param_3;
    }
    memcpy((void *)(*(int *)(param_1 + 0x10) + 4 + iVar4),param_2,(size_t)_Size);
    param_2 = (void *)((int)param_2 + (int)_Size);
    puVar6 = (undefined4 *)((int)puVar6 - (int)_Size);
    puVar1 = (uint *)(param_1 + 8);
    uVar2 = *puVar1;
    *puVar1 = *puVar1 + (int)_Size;
    *(int *)(param_1 + 0xc) =
         *(int *)(param_1 + 0xc) + ((int)_Size >> 0x1f) + (uint)CARRY4(uVar2,(uint)_Size);
  } while( true );
}


/* FUN_0051f310 @ 0051f310  kind=gamemisc  attributed-by=role:vfunc-indirect  size=176 */

undefined4 * FUN_0051f310(undefined4 param_1,undefined4 param_2,int param_3)

{
  size_t _Size;
  bool bVar1;
  undefined4 *_Dst;
  int *piVar2;
  
  bVar1 = 0 < DAT_007665e4;
  _Size = (uint)bVar1 * 0x1c + 0x30;
  _Dst = (undefined4 *)FUN_0055da00(_Size);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,_Size);
    if (bVar1 == 0) {
      piVar2 = &DAT_0076b730;
    }
    else {
      piVar2 = _Dst + 0xc;
      _Dst[0xf] = 10;
    }
    _Dst[1] = param_1;
    _Dst[2] = param_2;
    *_Dst = piVar2;
    _Dst[3] = (uint)(param_3 != 0);
    if (param_3 != 0) {
      _Dst[4] = 10;
      if (*piVar2 != 0) {
        (*DAT_00766630)(*piVar2);
      }
      piVar2[2] = piVar2[2] + _Dst[4];
      piVar2[3] = (piVar2[1] - piVar2[2]) + 10;
      if (*piVar2 != 0) {
        (*DAT_00766638)(*piVar2);
      }
    }
  }
  return _Dst;
}


/* FUN_0051f890 @ 0051f890  kind=gamemisc  attributed-by=role:vfunc-indirect  size=103 */

void FUN_0051f890(int *param_1,int param_2)

{
  int *piVar1;
  
  if (param_1[3] != 0) {
    piVar1 = (int *)*param_1;
    if (*piVar1 != 0) {
      (*DAT_00766630)(*piVar1);
    }
    piVar1[1] = piVar1[1] + (param_2 - param_1[5]);
    piVar1[3] = (piVar1[1] - piVar1[2]) + 10;
    param_1[5] = param_2;
    param_1[6] = (uint)(param_2 * 9) / 10;
    FUN_005440c0(piVar1);
    if (*piVar1 != 0) {
      (*DAT_00766638)(*piVar1);
    }
  }
  return;
}


/* FUN_0051f900 @ 0051f900  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

undefined4 FUN_0051f900(undefined4 param_1)

{
  FUN_0051f6b0(param_1,0,0);
  return 0;
}


/* FUN_0051f920 @ 0051f920  kind=gamemisc  attributed-by=role:vfunc-indirect  size=75 */

void FUN_0051f920(int *param_1)

{
  int iVar1;
  
  if (param_1[3] != 0) {
    param_1 = (int *)*param_1;
    if (*param_1 != 0) {
      (*DAT_00766630)(*param_1);
    }
    iVar1 = param_1[1];
    param_1[1] = 0;
    FUN_005440c0(param_1);
    param_1[1] = iVar1;
    if (*param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0051f962. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*DAT_00766638)();
      return;
    }
  }
  return;
}


/* FUN_0051ff10 @ 0051ff10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=53 */

undefined4 FUN_0051ff10(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  uVar1 = param_1[9];
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return uVar1;
}


/* FUN_0051ff50 @ 0051ff50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=24 */

undefined4 FUN_0051ff50(int param_1,undefined4 *param_2)

{
  *param_2 = *(undefined4 *)(param_1 + 8);
  param_2[1] = *(undefined4 *)(param_1 + 0xc);
  return 0;
}


/* FUN_0051ff80 @ 0051ff80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=528 */

int FUN_0051ff80(int *param_1,uint param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  
  iVar5 = 0;
  piVar2 = (int *)*param_1;
  if (*piVar2 != 0) {
    (*DAT_00766630)(*piVar2);
  }
  if (param_1[10] != 0) {
    for (iVar5 = *(int *)(param_1[0xb] + (param_2 % (uint)param_1[10]) * 4); iVar5 != 0;
        iVar5 = *(int *)(iVar5 + 0xc)) {
      if (*(uint *)(iVar5 + 8) == param_2) goto LAB_00520118;
    }
  }
  if (param_3 == 0) {
    if (iVar5 == 0) goto LAB_00520176;
LAB_00520118:
    iVar4 = **(int **)(iVar5 + 0x10);
    if ((*(int *)(iVar5 + 0x14) != 0) || (iVar5 == *(int *)(iVar4 + 0x18))) {
      if (*(int *)(iVar5 + 0x18) != 0) {
        *(int *)(*(int *)(iVar5 + 0x18) + 0x14) = *(int *)(iVar5 + 0x14);
      }
      if (*(int *)(iVar5 + 0x14) != 0) {
        *(undefined4 *)(*(int *)(iVar5 + 0x14) + 0x18) = *(undefined4 *)(iVar5 + 0x18);
      }
      if (*(int *)(iVar4 + 0x14) == iVar5) {
        *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(iVar5 + 0x14);
      }
      if (*(int *)(iVar4 + 0x18) == iVar5) {
        *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(iVar5 + 0x18);
      }
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      piVar1 = (int *)(*(int *)(iVar5 + 0x10) + 0x20);
      *piVar1 = *piVar1 + -1;
    }
  }
  else if (param_3 == 1) {
    if (((uint)(param_1[9] - param_1[8]) < (uint)piVar2[3]) &&
       ((uint)(param_1[9] - param_1[8]) < (uint)param_1[6])) {
      if ((DAT_0076b754 == 0) || (iVar4 = DAT_0076b770, DAT_0076b750 < param_1[2] + param_1[1])) {
        iVar4 = DAT_0076b4ac;
      }
      if (iVar4 == 0) goto LAB_00520021;
    }
  }
  else {
LAB_00520021:
    if (((uint)param_1[9] < (uint)param_1[10]) || (iVar4 = FUN_00544360(param_1), iVar4 == 0)) {
      if ((param_1[3] == 0) || (iVar4 = piVar2[6], iVar4 == 0)) {
LAB_005200a3:
        if (iVar5 == 0) goto LAB_005200a7;
      }
      else {
        if ((param_1[9] + 1U < (uint)param_1[5]) && ((uint)piVar2[4] < (uint)piVar2[1])) {
          uVar6 = FUN_00544540(param_1);
          iVar4 = (int)((ulonglong)uVar6 >> 0x20);
          if ((int)uVar6 == 0) goto LAB_005200a3;
        }
        FUN_00544320(iVar4);
        FUN_005442c0(iVar4);
        iVar5 = *(int *)(iVar4 + 0x10);
        if (*(int *)(iVar5 + 8) + *(int *)(iVar5 + 4) == param_1[2] + param_1[1]) {
          piVar2[4] = piVar2[4] + (param_1[3] - *(int *)(iVar5 + 0xc));
          iVar5 = iVar4;
          goto LAB_005200a3;
        }
        FUN_00544290(iVar4);
LAB_005200a7:
        if ((param_3 == 1) && (DAT_0076b3bc != (code *)0x0)) {
          (*DAT_0076b3bc)();
        }
        iVar5 = FUN_00544050(param_1);
        if ((param_3 == 1) && (DAT_0076b3c0 != (code *)0x0)) {
          (*DAT_0076b3c0)();
        }
        if (iVar5 == 0) goto LAB_00520176;
      }
      uVar3 = param_1[10];
      param_1[9] = param_1[9] + 1;
      *(uint *)(iVar5 + 8) = param_2;
      *(undefined4 *)(iVar5 + 0xc) = *(undefined4 *)(param_1[0xb] + (param_2 % uVar3) * 4);
      *(int **)(iVar5 + 0x10) = param_1;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      **(undefined4 **)(iVar5 + 4) = 0;
      *(int *)(param_1[0xb] + (param_2 % uVar3) * 4) = iVar5;
    }
  }
  if ((iVar5 != 0) && ((uint)param_1[7] < param_2)) {
    param_1[7] = param_2;
  }
LAB_00520176:
  if (*piVar2 != 0) {
    (*DAT_00766638)(*piVar2);
  }
  return iVar5;
}


/* FUN_00520c70 @ 00520c70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=178 */

void FUN_00520c70(int *param_1,undefined4 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00766630)(*piVar1);
  }
  if ((param_3 == 0) && ((uint)piVar1[4] <= (uint)piVar1[1])) {
    if (piVar1[5] == 0) {
      piVar1[6] = (int)param_2;
      piVar1[5] = (int)param_2;
      param_1[8] = param_1[8] + 1;
    }
    else {
      *(undefined4 **)(piVar1[5] + 0x18) = param_2;
      param_2[5] = piVar1[5];
      piVar1[5] = (int)param_2;
      param_1[8] = param_1[8] + 1;
    }
  }
  else {
    iVar2 = param_2[4];
    piVar1 = (int *)(*(int *)(iVar2 + 0x2c) + ((uint)param_2[2] % *(uint *)(iVar2 + 0x28)) * 4);
    puVar3 = (undefined4 *)*piVar1;
    while (puVar3 != param_2) {
      piVar1 = puVar3 + 3;
      puVar3 = (undefined4 *)*piVar1;
    }
    *piVar1 = *(int *)(*piVar1 + 0xc);
    *(int *)(iVar2 + 0x24) = *(int *)(iVar2 + 0x24) + -1;
    piVar1 = (int *)param_2[4];
    FUN_00544190(*param_2);
    if (piVar1[3] != 0) {
      piVar1 = (int *)(*piVar1 + 0x10);
      *piVar1 = *piVar1 + -1;
    }
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return;
}


/* FUN_00521220 @ 00521220  kind=gamemisc  attributed-by=role:vfunc-indirect  size=120 */

void FUN_00521220(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  piVar3 = (int *)(param_1[0xb] + (param_3 % (uint)param_1[10]) * 4);
  iVar1 = *(int *)(param_1[0xb] + (param_3 % (uint)param_1[10]) * 4);
  while (iVar1 != param_2) {
    piVar3 = (int *)(*piVar3 + 0xc);
    iVar1 = *piVar3;
  }
  *piVar3 = *(int *)(param_2 + 0xc);
  uVar2 = param_1[10];
  *(uint *)(param_2 + 8) = param_4;
  *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_1[0xb] + (param_4 % uVar2) * 4);
  *(int *)(param_1[0xb] + (param_4 % uVar2) * 4) = param_2;
  if ((uint)param_1[7] < param_4) {
    param_1[7] = param_4;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return;
}


/* FUN_00521340 @ 00521340  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

void FUN_00521340(undefined4 *param_1,uint param_2)

{
  if (*(int *)*param_1 != 0) {
    (*DAT_00766630)(*(int *)*param_1);
  }
  if (param_2 <= (uint)param_1[7]) {
    FUN_00544470(param_1,param_2);
    param_1[7] = param_2 - 1;
  }
  if (*(int *)*param_1 != 0) {
    (*DAT_00766638)(*(int *)*param_1);
  }
  return;
}


/* FUN_00521440 @ 00521440  kind=gamemisc  attributed-by=role:vfunc-indirect  size=27 */

void FUN_00521440(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00533b00(param_1,param_2,param_3,param_4,0);
  return;
}


/* FUN_00521460 @ 00521460  kind=gamemisc  attributed-by=role:vfunc-indirect  size=104 */

void FUN_00521460(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (*piVar1 != 0) {
    (*DAT_00766630)(*piVar1);
  }
  FUN_00544470(param_1,0);
  piVar1[1] = piVar1[1] - param_1[5];
  piVar1[2] = piVar1[2] - param_1[4];
  piVar1[3] = (piVar1[1] - piVar1[2]) + 10;
  FUN_005440c0(piVar1);
  if (*piVar1 != 0) {
    (*DAT_00766638)(*piVar1);
  }
  FUN_00524410(param_1[0xb]);
  FUN_00524410(param_1);
  return;
}


/* FUN_005215b0 @ 005215b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=9 */

void FUN_005215b0(void)

{
  FUN_00533b00();
  return;
}


/* FUN_005215c0 @ 005215c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=425 */

undefined4 FUN_005215c0(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *_Dst;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int local_8;
  
  uVar5 = 0;
  local_8 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if ((*(int *)(param_1 + 0x134) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x134) + 4), iVar1 != 0)) {
    _Dst = (int *)FUN_00552230(param_1,0x230);
    if (_Dst == (int *)0x0) {
      uVar5 = 7;
    }
    else {
      memset(_Dst,0,0x230);
      *(undefined1 *)((int)_Dst + 0x1d5) = 1;
      *_Dst = param_1;
      _Dst[0x6e] = 0;
      _Dst[0x6f] = 0x3ff00000;
      iVar3 = FUN_00564800(_Dst,param_2,&local_8);
      iVar2 = local_8;
      if ((((iVar3 == 0) && (iVar3 = _Dst[0x7f], iVar3 != 0)) && (*(char *)(param_1 + 0x38) == '\0')
          ) && ((*(int *)(iVar3 + 0xc) == 0 && ((*(byte *)(iVar3 + 0x2a) & 0x10) == 0)))) {
        if (*(int *)(iVar1 + 4) == 0) {
          *(undefined4 *)(iVar1 + 4) = *(undefined4 *)(iVar3 + 4);
          *(undefined2 *)(iVar1 + 0x26) = *(undefined2 *)(_Dst[0x7f] + 0x26);
          *(undefined2 *)(_Dst[0x7f] + 0x26) = 0;
          *(undefined4 *)(_Dst[0x7f] + 4) = 0;
        }
        *(undefined4 *)(*(int *)(param_1 + 0x134) + 4) = 0;
      }
      else {
        puVar4 = &DAT_00716900;
        if (local_8 == 0) {
          puVar4 = (undefined *)0x0;
        }
        FUN_00553890(param_1,1,puVar4,local_8);
        FUN_005521a0(param_1,iVar2);
        uVar5 = 1;
      }
      *(undefined1 *)((int)_Dst + 0x1d5) = 0;
      if (_Dst[2] != 0) {
        FUN_005734d0(_Dst[2]);
      }
      FUN_005529a0(param_1,_Dst[0x7f]);
      FUN_005521a0(param_1,_Dst);
    }
    uVar5 = FUN_0054a110(param_1,uVar5);
    if (*(int *)(param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(param_1 + 0xc));
    }
    return uVar5;
  }
  FUN_00553890(param_1,0x15,0);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x18ea9,
               "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
  return 0x15;
}


/* FUN_00522240 @ 00522240  kind=gamemisc  attributed-by=role:vfunc-indirect  size=201 */

uint FUN_00522240(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  
  iVar3 = param_1;
  if (param_1 == 0) {
    FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1146c,
                 "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
    return 0x15;
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(iVar1 + 0xc));
  }
  if (*(int *)(iVar3 + 0x14) == 0) {
    uVar5 = 4;
  }
  else {
    uVar5 = FUN_0052e230(iVar3,param_2,param_3,&param_1);
    iVar3 = param_1;
    if (uVar5 != 0) {
      puVar4 = &DAT_00716900;
      if (param_1 == 0) {
        puVar4 = (undefined *)0x0;
      }
      FUN_00553890(iVar1,uVar5,puVar4,param_1);
      FUN_005521a0(iVar1,iVar3);
    }
  }
  if ((*(char *)(iVar1 + 0x38) != '\0') || (uVar5 == 0xc0a)) {
    FUN_00553890(iVar1,7,0);
    *(undefined1 *)(iVar1 + 0x38) = 0;
    uVar5 = 7;
  }
  uVar2 = *(uint *)(iVar1 + 0x30);
  if (*(int *)(iVar1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(iVar1 + 0xc));
  }
  return uVar2 & uVar5;
}


/* FUN_00522310 @ 00522310  kind=gamemisc  attributed-by=role:vfunc-indirect  size=82 */

undefined4 FUN_00522310(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar1 + 0xc));
    }
    uVar2 = FUN_00528070(*(undefined4 *)(param_1 + 0x14));
    FUN_005521a0(iVar1,param_1);
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar1 + 0xc));
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00522370 @ 00522370  kind=gamemisc  attributed-by=role:vfunc-indirect  size=25 */

undefined4 FUN_00522370(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined4 *)(param_1 + 4);
  }
  return 0;
}


/* FUN_00522390 @ 00522390  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void FUN_00522390(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0052e130(param_1,param_2,param_3,param_4,FUN_0054cf10);
  return;
}


/* FUN_00522460 @ 00522460  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void FUN_00522460(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_0052e130(param_1,param_2,param_3,param_4,FUN_0054ecc0);
  return;
}


/* FUN_00522540 @ 00522540  kind=gamemisc  attributed-by=role:vfunc-indirect  size=121 */

int FUN_00522540(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = FUN_00579f80();
  if (iVar2 == 0) {
    if (DAT_007665e4 == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = (*DAT_00766628)(2);
      if (iVar2 != 0) {
        (*DAT_00766630)(iVar2);
      }
    }
    FUN_0057d3f0(param_1);
    iVar1 = DAT_0076b3b8;
    if ((param_2 == 0) && (DAT_0076b3b8 != 0)) {
      *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(DAT_0076b3b8 + 0xc);
      *(int *)(iVar1 + 0xc) = param_1;
    }
    else {
      *(int *)(param_1 + 0xc) = DAT_0076b3b8;
      DAT_0076b3b8 = param_1;
    }
    if (iVar2 != 0) {
      (*DAT_00766638)(iVar2);
    }
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_005225c0 @ 005225c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=126 */

undefined4 FUN_005225c0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (DAT_007665e4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*DAT_00766628)(2);
    if (iVar4 != 0) {
      (*DAT_00766630)(iVar4);
    }
  }
  if (param_1 != 0) {
    if (DAT_0076b3b8 == param_1) {
      DAT_0076b3b8 = *(int *)(param_1 + 0xc);
    }
    else if (DAT_0076b3b8 != 0) {
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
  if (iVar4 != 0) {
    (*DAT_00766638)(iVar4);
  }
  return 0;
}


/* FUN_00522640 @ 00522640  kind=gamemisc  attributed-by=role:vfunc-indirect  size=23 */

undefined4 FUN_00522640(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00579f80();
  if (iVar1 != 0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x00522651. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (*DAT_00766628)();
  return uVar2;
}


/* FUN_00522660 @ 00522660  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

void FUN_00522660(int param_1)

{
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052266e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*DAT_0076662c)();
    return;
  }
  return;
}


/* FUN_00522720 @ 00522720  kind=gamemisc  attributed-by=role:vfunc-indirect  size=24 */

undefined4 FUN_00522720(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0052272e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*DAT_00766634)();
    return uVar1;
  }
  return 0;
}


/* FUN_00522820 @ 00522820  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 FUN_00522820(int param_1)

{
  return *(undefined4 *)(param_1 + 0xc);
}


/* FUN_00522830 @ 00522830  kind=gamemisc  attributed-by=role:vfunc-indirect  size=260 */

undefined4 FUN_00522830(uint param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined8 local_18;
  ulonglong local_10;
  undefined4 local_8;
  
  uVar2 = param_3;
  uVar1 = param_1;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  local_10 = CONCAT44(param_5,param_4) & 0x7fffffffffffffff;
  while( true ) {
    iVar3 = (*(code *)PTR_ReadFile_007672dc)
                      (*(undefined4 *)(uVar1 + 8),param_2,uVar2,&param_1,&local_18);
    if (iVar3 != 0) break;
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
    if (iVar3 == 0x26) break;
    iVar3 = (*(code *)PTR_GetLastError_007671bc)();
    if ((DAT_007666d4 <= iVar5) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20)))) {
      *(int *)(uVar1 + 0x14) = iVar3;
      uVar4 = FUN_0057fa50(0x10a,iVar3,"winRead",*(undefined4 *)(uVar1 + 0x1c),0x7dec);
      return uVar4;
    }
    iVar5 = iVar5 + 1;
    (*(code *)PTR_Sleep_00767300)(iVar5 * DAT_007666d8);
  }
  if (iVar5 != 0) {
    FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                 ((iVar5 + 1) * DAT_007666d8 * iVar5) / 2);
  }
  if (param_1 < uVar2) {
    memset((void *)(param_1 + param_2),0,uVar2 - param_1);
    return 0x20a;
  }
  return 0;
}


/* FUN_005229f0 @ 005229f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

uint FUN_005229f0(undefined4 param_1,uint param_2,undefined4 *param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  uVar1 = DAT_007666d0;
  uVar4 = 0;
  switch(param_1) {
  case 5:
    puVar5 = &DAT_0076b520;
    puVar6 = &DAT_0076b628;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
    return 0;
  case 6:
    puVar5 = &DAT_0076b628;
    puVar6 = &DAT_0076b520;
    for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar6 = puVar6 + 1;
    }
    *(undefined2 *)puVar6 = *(undefined2 *)puVar5;
    *(undefined1 *)((int)puVar6 + 2) = *(undefined1 *)((int)puVar5 + 2);
    return 0;
  case 7:
    DAT_0076b520._0_1_ = 0;
    return 0;
  case 8:
    uVar1 = FUN_0054bd10(param_2,param_3);
    return uVar1;
  case 9:
    break;
  case 10:
    DAT_0076b3bc = param_2;
    DAT_0076b3c0 = param_3;
    return 0;
  case 0xb:
    uVar4 = DAT_007666d0;
    if (param_2 != 0) {
      DAT_007666d0 = param_2;
      return uVar1;
    }
    break;
  case 0xc:
    return 0;
  case 0xd:
    return param_2;
  case 0xe:
    if (*(int *)(param_2 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(param_2 + 0xc));
    }
    FUN_0054f2a0(*(undefined4 *)(*(int *)(param_2 + 0x10) + 4),0,param_3,0);
    if (*(int *)(param_2 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(param_2 + 0xc));
      return 0;
    }
    break;
  case 0xf:
    *(undefined2 *)(param_2 + 0x34) = param_3._0_2_;
    return 0;
  case 0x10:
    uVar7 = FUN_00568070(param_2);
    iVar2 = FUN_0053cd40((int)((ulonglong)uVar7 >> 0x20),(int)uVar7);
    return -(uint)(iVar2 != 0x1a) & 0x79;
  case 0x11:
    if (param_2 != 0) {
      uVar3 = FUN_005653d0(param_2);
      *param_3 = uVar3;
    }
    FUN_005652a0(param_4);
    return 0;
  case 0x12:
    DAT_007666cc = param_2;
    break;
  default:
    goto LAB_00522b71;
  }
LAB_00522b71:
  return uVar4;
}


/* FUN_00522bf0 @ 00522bf0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=86 */

undefined4 FUN_00522bf0(uint param_1,undefined4 *param_2,undefined4 *param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 10) {
    uVar1 = (&DAT_0076b388)[param_1];
    uVar2 = (&DAT_0076b360)[param_1];
    *param_2 = uVar2;
    *param_3 = uVar1;
    if (param_4 != 0) {
      (&DAT_0076b388)[param_1] = uVar2;
    }
    return 0;
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x3538,"c0e09560d26f0a6456be9dd3447f5311eb4f238f"
              );
  return 0x15;
}


/* FUN_00522ca0 @ 00522ca0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=156 */

undefined4 FUN_00522ca0(int param_1,int param_2,int param_3,uint *param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  
  if (param_2 == 0x3e9) {
    uVar4 = FUN_00548d00(param_1,param_3,param_4,param_5);
    return uVar4;
  }
  uVar5 = 0;
  while ((&DAT_0071557c)[uVar5 * 2] != param_2) {
    uVar5 = uVar5 + 1;
    if (1 < uVar5) {
      return 1;
    }
  }
  uVar1 = *(uint *)(param_1 + 0x18);
  if (param_3 < 1) {
    if (param_3 != 0) goto LAB_00522cef;
    uVar3 = ~*(uint *)(&UNK_00715580 + uVar5 * 8) & uVar1;
  }
  else {
    uVar3 = *(uint *)(&UNK_00715580 + uVar5 * 8) | uVar1;
  }
  *(uint *)(param_1 + 0x18) = uVar3;
LAB_00522cef:
  if (uVar1 != *(uint *)(param_1 + 0x18)) {
    for (iVar2 = *(int *)(param_1 + 4); iVar2 != 0; iVar2 = *(int *)(iVar2 + 0x3c)) {
      *(uint *)(iVar2 + 0x60) = *(uint *)(iVar2 + 0x60) | 0x20;
    }
  }
  if (param_4 != (uint *)0x0) {
    *param_4 = (uint)((*(uint *)(&UNK_00715580 + uVar5 * 8) & *(uint *)(param_1 + 0x18)) != 0);
  }
  return 0;
}


/* FUN_00522d40 @ 00522d40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=58 */

undefined4 __cdecl
FUN_00522d40(int param_1,int param_2,int *param_3,undefined4 *param_4,int param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iStack_8;
  
  iVar4 = param_1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  switch(param_2) {
  case 0:
    uVar7 = 0;
    *param_3 = *(int *)(iVar4 + 0xec);
    *param_4 = *(undefined4 *)(iVar4 + 0xf0);
    if (param_5 != 0) {
      *(undefined4 *)(iVar4 + 0xf0) = *(undefined4 *)(iVar4 + 0xec);
    }
    goto LAB_00522dc3;
  case 1:
    iVar8 = 0;
    param_1 = 0;
    FUN_0054d340(iVar4);
    iVar6 = 0;
    iVar5 = iVar8;
    if (0 < *(int *)(iVar4 + 0x14)) {
      do {
        iVar5 = *(int *)(iVar8 + 4 + *(int *)(iVar4 + 0x10));
        if (iVar5 != 0) {
          iVar5 = FUN_0055f340(**(undefined4 **)(iVar5 + 4));
          param_1 = param_1 + iVar5;
        }
        iVar6 = iVar6 + 1;
        iVar8 = iVar8 + 0x10;
        iVar5 = param_1;
      } while (iVar6 < *(int *)(iVar4 + 0x14));
    }
    FUN_0054de20(iVar4);
    *param_3 = iVar5;
    *param_4 = 0;
    uVar7 = FUN_00522dc1();
    return uVar7;
  case 2:
    param_1 = 0;
    FUN_0054d340(iVar4);
    *(int **)(iVar4 + 0x1f0) = &param_1;
    param_2 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      iStack_8 = 0;
      do {
        iVar5 = *(int *)(iStack_8 + 0xc + *(int *)(iVar4 + 0x10));
        if (iVar5 != 0) {
          iVar8 = (*DAT_00766610)(0x14);
          param_1 = param_1 + iVar8 * (*(int *)(iVar5 + 0x3c) + *(int *)(iVar5 + 0x2c) +
                                       *(int *)(iVar5 + 0x1c) + *(int *)(iVar5 + 0xc));
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x14));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x34));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x24));
          param_1 = param_1 + iVar8;
          iVar8 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar5 + 0x44));
          param_1 = param_1 + iVar8;
          for (puVar1 = *(undefined4 **)(iVar5 + 0x30); puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)*puVar1) {
            puVar2 = (undefined4 *)puVar1[2];
            if (puVar2 != (undefined4 *)0x0) {
              FUN_00552b20(iVar4,puVar2[7]);
              FUN_005521a0(iVar4,*puVar2);
              FUN_005521a0(iVar4,puVar2[1]);
              FUN_00555e30(iVar4,puVar2[3]);
              FUN_0055afc0(iVar4,puVar2[4]);
              FUN_005521a0(iVar4,puVar2);
            }
          }
          for (puVar1 = *(undefined4 **)(iVar5 + 0x10); puVar1 != (undefined4 *)0x0;
              puVar1 = (undefined4 *)*puVar1) {
            FUN_005529a0(iVar4,puVar1[2]);
          }
        }
        param_2 = param_2 + 1;
        iStack_8 = iStack_8 + 0x10;
      } while (param_2 < *(int *)(iVar4 + 0x14));
    }
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    FUN_0054de20(iVar4);
    *param_4 = 0;
    *param_3 = param_1;
    uVar7 = FUN_00522dc1();
    return uVar7;
  case 3:
    iVar5 = *(int *)(iVar4 + 4);
    param_1 = 0;
    *(int **)(iVar4 + 0x1f0) = &param_1;
    for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x3c)) {
      FUN_0056c560(iVar4,iVar5);
      FUN_005521a0(iVar4,iVar5);
    }
    *(undefined4 *)(iVar4 + 0x1f0) = 0;
    *param_4 = 0;
    *param_3 = param_1;
    break;
  case 4:
  case 5:
  case 6:
    *param_3 = 0;
    *param_4 = *(undefined4 *)(iVar4 + 0xe4 + param_2 * 4);
    if (param_5 != 0) {
      *(undefined4 *)(iVar4 + 0xe4 + param_2 * 4) = 0;
    }
    break;
  case 7:
  case 8:
  case 9:
    iVar5 = 0;
    iVar8 = 0;
    if (0 < *(int *)(iVar4 + 0x14)) {
      iVar6 = 0;
      do {
        iVar3 = *(int *)(iVar6 + 4 + *(int *)(iVar4 + 0x10));
        if (iVar3 != 0) {
          iVar3 = **(int **)(iVar3 + 4);
          iVar8 = iVar8 + *(int *)(iVar3 + 0x84 + param_2 * 4);
          if (param_5 != 0) {
            *(undefined4 *)(iVar3 + 0x84 + param_2 * 4) = 0;
          }
        }
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 0x10;
      } while (iVar5 < *(int *)(iVar4 + 0x14));
    }
    *param_4 = 0;
    *param_3 = iVar8;
    break;
  default:
    uVar7 = 1;
    goto LAB_00522dc3;
  }
  uVar7 = 0;
LAB_00522dc3:
  if (*(int *)(iVar4 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(iVar4 + 0xc));
  }
  return uVar7;
}


/* FUN_00523050 @ 00523050  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

undefined4 FUN_00523050(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  
  param_1 = param_1 + param_2 * 4;
  uVar1 = *(undefined4 *)(param_1 + 0x70);
  if (param_3 != 0) {
    *(undefined4 *)(param_1 + 0x70) = 0;
  }
  return uVar1;
}


/* FUN_00523070 @ 00523070  kind=gamemisc  attributed-by=role:vfunc-indirect  size=332 */

undefined4 FUN_00523070(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 local_18;
  ulonglong local_10;
  undefined4 local_8;
  
  uVar4 = param_3;
  param_3 = param_4;
  iVar5 = 0;
  local_18 = 0;
  local_8 = 0;
  local_10 = CONCAT44(param_5,param_4) & 0x7fffffffffffffff;
  uVar3 = param_5;
  if (0 < (int)uVar4) {
    do {
      iVar1 = (*(code *)PTR_WriteFile_00767348)
                        (*(undefined4 *)(param_1 + 8),param_2,uVar4,&param_5,&local_18);
      if (iVar1 == 0) {
        iVar1 = (*(code *)PTR_GetLastError_007671bc)();
        if ((DAT_007666d4 <= iVar5) || (((iVar1 != 5 && (iVar1 != 0x21)) && (iVar1 != 0x20)))) {
LAB_0052317a:
          if (0 < (int)uVar4) {
            *(int *)(param_1 + 0x14) = iVar1;
            if ((iVar1 != 0x27) && (iVar1 != 0x70)) {
              uVar2 = FUN_0057fa50(0x30a,iVar1,"winWrite",*(undefined4 *)(param_1 + 0x1c),0x7e43);
              return uVar2;
            }
            return 0xd;
          }
          break;
        }
        iVar5 = iVar5 + 1;
        (*(code *)PTR_Sleep_00767300)(iVar5 * DAT_007666d8);
      }
      else {
        if ((param_5 == 0) || (uVar4 < param_5)) {
          iVar1 = (*(code *)PTR_GetLastError_007671bc)();
          goto LAB_0052317a;
        }
        bVar6 = CARRY4(param_3,param_5);
        param_3 = param_3 + param_5;
        uVar3 = uVar3 + bVar6;
        param_2 = param_2 + param_5;
        local_10 = CONCAT44(uVar3,param_3) & 0x7fffffffffffffff;
        uVar4 = uVar4 - param_5;
      }
    } while (0 < (int)uVar4);
    if (iVar5 != 0) {
      FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                   ((iVar5 + 1) * DAT_007666d8 * iVar5) / 2);
    }
  }
  return 0;
}


/* FUN_00523220 @ 00523220  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

undefined4 FUN_00523220(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = 0xff;
  if (param_2 != 0) {
    uVar1 = 0xffffffff;
  }
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00523280 @ 00523280  kind=gamemisc  attributed-by=role:vfunc-indirect  size=14 */

undefined8 FUN_00523280(int param_1)

{
  return *(undefined8 *)(param_1 + 0x20);
}


/* FUN_00523290 @ 00523290  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 FUN_00523290(int param_1)

{
  return *(undefined4 *)(param_1 + 0x48);
}


/* FUN_005232a0 @ 005232a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 FUN_005232a0(int param_1)

{
  return *(undefined4 *)(param_1 + 0x4c);
}


/* FUN_005232b0 @ 005232b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void FUN_005232b0(int param_1)

{
  *(undefined4 *)(param_1 + 0xe0) = 1;
  return;
}


/* FUN_00523720 @ 00523720  kind=gamemisc  attributed-by=role:vfunc-indirect  size=204 */

uint FUN_00523720(undefined4 param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  uVar1 = FUN_00579f80();
  if (uVar1 == 0) {
    puVar2 = (undefined8 *)FUN_0055da00(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined2 *)((int)puVar2 + 0x1c) = 1;
      *(undefined1 *)((int)puVar2 + 0x1e) = 5;
      *(undefined4 *)puVar2 = 0;
      FUN_00575040(puVar2,param_1,0xffffffff,2,0);
    }
    iVar3 = FUN_0056bce0(puVar2,1);
    if (iVar3 == 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = FUN_005232d0(iVar3);
    }
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(ushort *)((int)puVar2 + 0x1c) & 0x2460) != 0) {
        FUN_00574d80(puVar2);
      }
      FUN_005521a0(*(undefined4 *)puVar2,*(undefined4 *)((int)puVar2 + 0x24));
      *(undefined4 *)((int)puVar2 + 4) = 0;
      *(undefined4 *)((int)puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      FUN_005521a0(*(undefined4 *)puVar2,puVar2);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* FUN_005237f0 @ 005237f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=84 */

undefined4 FUN_005237f0(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x1ac) = param_2;
  *(undefined4 *)(param_1 + 0x1b0) = param_3;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined4 *)(param_1 + 0x1dc) = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_00523a80 @ 00523a80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=420 */

int FUN_00523a80(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  *param_3 = 0;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 0;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = 0;
  }
  if (param_6 != (undefined4 *)0x0) {
    *param_6 = 0;
  }
  local_1c = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 1;
  local_18 = 0x14;
  local_8 = 0;
  iVar1 = FUN_00579f80();
  if (iVar1 == 0) {
    local_20 = (int *)FUN_0055da00(0x50);
  }
  else {
    local_20 = (int *)0x0;
  }
  if (local_20 == (int *)0x0) {
LAB_00523be8:
    *(undefined4 *)(param_1 + 0x2c) = 7;
    return 7;
  }
  *local_20 = 0;
  iVar1 = FUN_00520760(param_1,param_2,FUN_00579e10,&local_20,param_6);
  *local_20 = local_c;
  if ((char)iVar1 == '\x04') {
    FUN_00523c30(local_20 + 1);
    if (local_1c != 0) {
      if (param_6 != (undefined4 *)0x0) {
        FUN_00524410(*param_6);
        uVar2 = FUN_00523d10(&DAT_00716900,local_1c);
        *param_6 = uVar2;
      }
      FUN_00524410(local_1c);
    }
    *(int *)(param_1 + 0x2c) = local_8;
    return local_8;
  }
  FUN_00524410(local_1c);
  piVar4 = local_20;
  if (iVar1 != 0) {
    FUN_00523c30(local_20 + 1);
    return iVar1;
  }
  if (local_c < local_18) {
    iVar1 = local_c * 4;
    iVar3 = FUN_00579f80();
    if ((iVar3 != 0) || (piVar4 = (int *)FUN_00563800(piVar4,iVar1), piVar4 == (int *)0x0)) {
      FUN_00523c30(local_20 + 1);
      goto LAB_00523be8;
    }
  }
  *param_3 = piVar4 + 1;
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = local_10;
  }
  if (param_4 != (undefined4 *)0x0) {
    *param_4 = local_14;
  }
  return 0;
}


/* FUN_00524120 @ 00524120  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

undefined4 FUN_00524120(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = (*(code *)PTR_FlushFileBuffers_00767120)(*(undefined4 *)(param_1 + 8));
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = (*(code *)PTR_GetLastError_007671bc)();
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  uVar2 = FUN_0057fa50(0x40a,uVar2,"winSync",*(undefined4 *)(param_1 + 0x1c),0x7eae);
  return uVar2;
}


/* FUN_00524160 @ 00524160  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

undefined4 FUN_00524160(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00579f80();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_0055da00();
  return uVar2;
}


/* FUN_00524180 @ 00524180  kind=gamemisc  attributed-by=role:vfunc-indirect  size=22 */

undefined4 FUN_00524180(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_00579f80();
  if (iVar1 != 0) {
    return 0;
  }
  uVar2 = FUN_00563800();
  return uVar2;
}


/* FUN_005244c0 @ 005244c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void FUN_005244c0(int param_1)

{
  if (param_1 != 0) {
    DAT_0076b388 = DAT_0076b360;
  }
  return;
}


/* FUN_00524640 @ 00524640  kind=gamemisc  attributed-by=role:vfunc-indirect  size=82 */

undefined4 FUN_00524640(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  *(undefined4 *)(param_1 + 0x10c) = param_2;
  *(undefined4 *)(param_1 + 0x110) = param_3;
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return 0;
}


/* FUN_005247b0 @ 005247b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

undefined4 FUN_005247b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(param_1 + 0x98) = param_2;
  *(undefined4 *)(param_1 + 0x9c) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00524800 @ 00524800  kind=gamemisc  attributed-by=role:vfunc-indirect  size=264 */

int * FUN_00524800(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *_Dst;
  
  if (*(int *)(param_3 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_3 + 0xc));
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_3 == param_1) {
    FUN_00553890(param_1,1,"source and destination must be distinct");
LAB_005248dd:
    _Dst = (int *)0x0;
  }
  else {
    _Dst = (int *)FUN_0055da00(0x30);
    if (_Dst != (int *)0x0) {
      memset(_Dst,0,0x30);
      if (_Dst != (int *)0x0) {
        iVar1 = FUN_00536fb0(param_1,param_3,param_4);
        _Dst[6] = iVar1;
        iVar1 = FUN_00536fb0(param_1,param_1,param_2);
        _Dst[1] = iVar1;
        *_Dst = param_1;
        _Dst[5] = param_3;
        _Dst[4] = 1;
        _Dst[10] = 0;
        if ((_Dst[6] != 0) && (iVar1 != 0)) {
          iVar1 = FUN_0054f2a0(iVar1,*(undefined4 *)(*(int *)(_Dst[6] + 4) + 0x20),0xffffffff,0);
          if (iVar1 != 7) {
            *(int *)(_Dst[6] + 0x10) = *(int *)(_Dst[6] + 0x10) + 1;
            goto LAB_005248df;
          }
        }
        FUN_00524410(_Dst);
        goto LAB_005248dd;
      }
    }
    FUN_00553890(param_1,7,0);
  }
LAB_005248df:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  if (*(int *)(param_3 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_3 + 0xc));
  }
  return _Dst;
}


/* FUN_005253b0 @ 005253b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

undefined4 FUN_005253b0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0xa0) = param_2;
  *(undefined4 *)(param_1 + 0xa4) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00525500 @ 00525500  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 FUN_00525500(int param_1)

{
  return *(undefined4 *)(param_1 + 0x20);
}


/* FUN_00525510 @ 00525510  kind=gamemisc  attributed-by=role:vfunc-indirect  size=107 */

void FUN_00525510(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_2 < 1) {
    *(undefined4 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x11c) = 0;
    *(undefined4 *)(param_1 + 0x118) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x114) = param_3;
    *(int *)(param_1 + 0x11c) = param_2;
    *(undefined4 *)(param_1 + 0x118) = param_4;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return;
}


/* FUN_00525580 @ 00525580  kind=gamemisc  attributed-by=role:vfunc-indirect  size=11 */

undefined4 FUN_00525580(int param_1)

{
  return *(undefined4 *)(param_1 + 0x24);
}


/* FUN_005255b0 @ 005255b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=242 */

uint FUN_005255b0(undefined4 param_1,int *param_2)

{
  uint uVar1;
  undefined8 *puVar2;
  int iVar3;
  
  *param_2 = 0;
  uVar1 = FUN_00579f80();
  if (uVar1 == 0) {
    puVar2 = (undefined8 *)FUN_0055da00(0x28);
    if (puVar2 != (undefined8 *)0x0) {
      *puVar2 = 0;
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[3] = 0;
      puVar2[4] = 0;
      *(undefined2 *)((int)puVar2 + 0x1c) = 1;
      *(undefined1 *)((int)puVar2 + 0x1e) = 5;
      *(undefined4 *)puVar2 = 0;
      FUN_00575040(puVar2,param_1,0xffffffff,2,0);
    }
    iVar3 = FUN_0056bce0(puVar2,1);
    if (iVar3 == 0) {
      uVar1 = 7;
    }
    else {
      uVar1 = FUN_00540b70(iVar3,param_2,6,0);
      if ((uVar1 == 0) &&
         (iVar3 = *(int *)(*(int *)(*param_2 + 0x10) + 0xc), (*(byte *)(iVar3 + 0x4e) & 1) == 0)) {
        *(undefined1 *)(iVar3 + 0x4d) = 2;
      }
    }
    if (puVar2 != (undefined8 *)0x0) {
      if ((*(ushort *)((int)puVar2 + 0x1c) & 0x2460) != 0) {
        FUN_00574d80(puVar2);
      }
      FUN_005521a0(*(undefined4 *)puVar2,*(undefined4 *)((int)puVar2 + 0x24));
      *(undefined4 *)((int)puVar2 + 4) = 0;
      *(undefined4 *)((int)puVar2 + 0x24) = 0;
      *(undefined4 *)(puVar2 + 4) = 0;
      FUN_005521a0(*(undefined4 *)puVar2,puVar2);
    }
    uVar1 = uVar1 & 0xff;
  }
  return uVar1;
}


/* FUN_00525800 @ 00525800  kind=gamemisc  attributed-by=role:vfunc-indirect  size=441 */

undefined4 FUN_00525800(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int local_c;
  byte local_8;
  
  local_8 = *(byte *)(param_1 + 0xc);
  iVar2 = 1;
  local_c = 0;
  if (param_2 <= (int)(uint)local_8) {
    return 0;
  }
  if (local_8 == 0) {
LAB_00525841:
    iVar3 = 3;
    do {
      iVar3 = iVar3 + -1;
      iVar2 = FUN_0057f980(param_1 + 8,3,DAT_007666d0,0,1,0);
      if ((iVar2 != 0) || (iVar3 == 0)) break;
      (*(code *)PTR_Sleep_00767300)(1);
    } while (0 < iVar3);
    local_c = iVar2;
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_GetLastError_007671bc)();
    }
    else {
LAB_00525898:
      uVar1 = 0;
    }
    if (param_2 == 1) {
      if (iVar2 != 0) {
        iVar2 = FUN_0053ac70(param_1);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_GetLastError_007671bc)();
        }
        else {
          local_8 = 1;
        }
      }
    }
    else if (param_2 == 2) {
      if (iVar2 != 0) {
        iVar2 = FUN_0057f980(param_1 + 8,3,DAT_007666d0 + 1,0,1,0);
        if (iVar2 == 0) {
          uVar1 = (*(code *)PTR_GetLastError_007671bc)();
        }
        else {
          local_8 = 2;
        }
      }
    }
    else if ((param_2 == 4) && (iVar2 != 0)) goto LAB_00525957;
    if ((local_c != 0) && (param_2 == 1)) {
      FUN_0057ff40(param_1 + 8,DAT_007666d0,0,1,0);
    }
  }
  else {
    if (param_2 != 4) goto LAB_00525898;
    if (local_8 == 2) goto LAB_00525841;
    uVar1 = 0;
LAB_00525957:
    local_8 = 3;
    FUN_0057b2f0(param_1);
    iVar2 = FUN_0057f980(param_1 + 8,3,DAT_007666d0 + 2,0,0x1fe,0);
    if (iVar2 == 0) {
      uVar1 = (*(code *)PTR_GetLastError_007671bc)();
      FUN_0053ac70(param_1);
      goto LAB_005259a7;
    }
    local_8 = 4;
  }
  if (iVar2 != 0) {
    *(byte *)(param_1 + 0xc) = local_8;
    return 0;
  }
LAB_005259a7:
  *(undefined4 *)(param_1 + 0x14) = uVar1;
  *(byte *)(param_1 + 0xc) = local_8;
  return 5;
}


/* FUN_00525a20 @ 00525a20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=9 */

void FUN_00525a20(void)

{
  FUN_00540b70();
  return;
}


/* FUN_00525a50 @ 00525a50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

undefined4 FUN_00525a50(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar1 = *(undefined4 *)(param_1 + 0xc4);
  *(undefined4 *)(param_1 + 0xc0) = param_2;
  *(undefined4 *)(param_1 + 0xc4) = param_3;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00525d20 @ 00525d20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=104 */

undefined4 FUN_00525d20(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x44);
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
      FUN_00525a30(0x15,"misuse at line %d of [%.10s]",0x1bef1,
                   "c0e09560d26f0a6456be9dd3447f5311eb4f238f");
      return 0x15;
    }
    if (*(char *)(param_1 + 0x38) == '\0') {
      return *(undefined4 *)(param_1 + 0x2c);
    }
  }
  return 7;
}


/* FUN_00525f10 @ 00525f10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=205 */

wchar_t * FUN_00525f10(int param_1)

{
  int iVar1;
  wchar_t *pwVar2;
  undefined4 uVar3;
  undefined4 extraout_ECX;
  
  if (param_1 == 0) {
    return L"out of memory";
  }
  iVar1 = *(int *)(param_1 + 0x44);
  if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
    FUN_00525a30(0x15,"API call with %s database connection pointer","invalid");
    return L"library routine called out of sequence";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (*(char *)(param_1 + 0x38) == '\0') {
    pwVar2 = (wchar_t *)FUN_0056bce0(*(undefined4 *)(param_1 + 0xd4),2);
    if (pwVar2 == (wchar_t *)0x0) {
      if (*(int *)(param_1 + 0xd4) != 0) {
        uVar3 = FUN_00553860(*(undefined4 *)(param_1 + 0x2c),0xffffffff,1,0);
        FUN_00575040(extraout_ECX,uVar3);
      }
      pwVar2 = (wchar_t *)FUN_0056bce0(*(undefined4 *)(param_1 + 0xd4),2);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  else {
    pwVar2 = L"out of memory";
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return pwVar2;
}


/* FUN_00525ff0 @ 00525ff0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=51 */

undefined4 FUN_00525ff0(int param_1,uint param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 < 0xb) {
    param_1 = param_1 + param_2 * 4;
    uVar1 = *(undefined4 *)(param_1 + 0x50);
    if (-1 < param_3) {
      iVar2 = *(int *)((int)&DAT_00713100 + param_2 * 4);
      if (iVar2 < param_3) {
        param_3 = iVar2;
      }
      *(int *)(param_1 + 0x50) = param_3;
    }
    return uVar1;
  }
  return 0xffffffff;
}


/* FUN_00526030 @ 00526030  kind=gamemisc  attributed-by=role:vfunc-indirect  size=130 */

undefined4 FUN_00526030(int param_1,int param_2,undefined1 param_3)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  if (param_2 == 1) {
    if (*(int **)(param_1 + 0x134) != (int *)0x0) {
      *(undefined1 *)(**(int **)(param_1 + 0x134) + 0x10) = param_3;
      goto LAB_0052609b;
    }
    uVar1 = 0x19021;
  }
  else {
    uVar1 = 0x19029;
  }
  FUN_00525a30(0x15,"misuse at line %d of [%.10s]",uVar1,"c0e09560d26f0a6456be9dd3447f5311eb4f238f")
  ;
  uVar1 = 0x15;
  FUN_00553890(param_1,0x15,0);
LAB_0052609b:
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1;
}


/* FUN_00526410 @ 00526410  kind=gamemisc  attributed-by=role:vfunc-indirect  size=101 */

undefined4 FUN_00526410(int param_1,uint *param_2)

{
  int iVar1;
  
  if (1 < *(byte *)(param_1 + 0xc)) {
    *param_2 = 1;
    return 0;
  }
  iVar1 = FUN_0057f980(param_1 + 8,3,DAT_007666d0 + 1,0,1,0);
  if (iVar1 != 0) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0 + 1,0,1,0);
  }
  *param_2 = (uint)(iVar1 == 0);
  return 0;
}


/* FUN_005264a0 @ 005264a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=32 */

void FUN_005264a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0055d830(param_1,param_2,param_3,1,0,param_4,param_5);
  return;
}


/* FUN_005264c0 @ 005264c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=204 */

undefined4 FUN_005264c0(int param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_8;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  local_8 = 0;
  if (3 < bVar1) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0 + 2,0,0x1fe,0);
    if (param_2 == 1) {
      iVar2 = FUN_0053ac70(param_1);
      if (iVar2 == 0) {
        uVar3 = (*(code *)PTR_GetLastError_007671bc)
                          ("winUnlock",*(undefined4 *)(param_1 + 0x1c),0x7ffd);
        local_8 = FUN_0057fa50(0x80a,uVar3);
      }
    }
  }
  if (1 < bVar1) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0 + 1,0,1,0);
  }
  if ((param_2 == 0) && (bVar1 != 0)) {
    FUN_0057b2f0(param_1);
  }
  if (2 < bVar1) {
    FUN_0057ff40(param_1 + 8,DAT_007666d0,0,1,0);
  }
  *(char *)(param_1 + 0xc) = (char)param_2;
  return local_8;
}


/* FUN_00526590 @ 00526590  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void FUN_00526590(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00563550(param_1,param_2,param_3,0,param_4,param_5);
  return;
}


/* FUN_005265b0 @ 005265b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void FUN_005265b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_00563550(param_1,param_2,param_3,1,param_4,param_5);
  return;
}


/* FUN_005265d0 @ 005265d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=31 */

undefined4 FUN_005265d0(int param_1)

{
  if ((param_1 != 0) && ((*(uint *)(param_1 + 0x60) & 0x200) != 0)) {
    return *(undefined4 *)(param_1 + 0x98);
  }
  return 0;
}


/* FUN_005265f0 @ 005265f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=37 */

int FUN_005265f0(int param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uStack_c;
  int iStack_8;
  
  switch(param_2) {
  case 1:
    *param_3 = (uint)*(byte *)(param_1 + 0xc);
    break;
  default:
    return 0xc;
  case 4:
    *param_3 = *(uint *)(param_1 + 0x14);
    return 0;
  case 5:
    if (0 < *(int *)(param_1 + 0x20)) {
      iVar2 = FUN_00524570(param_1,&uStack_c);
      if (iVar2 != 0) {
        return iVar2;
      }
      uVar3 = param_3[1];
      if ((int)uVar3 < iStack_8) {
        return 0;
      }
      if (((int)uVar3 <= iStack_8) && (*param_3 <= uStack_c)) {
        return 0;
      }
      iVar2 = FUN_005239d0(param_1,*param_3,uVar3);
      return iVar2;
    }
    break;
  case 6:
    *(uint *)(param_1 + 0x20) = *param_3;
    return 0;
  case 9:
    uVar3 = *param_3;
    if ((int)*param_3 < 1) {
      *param_3 = DAT_007666d4;
      uVar3 = DAT_007666d4;
    }
    DAT_007666d4 = uVar3;
    if ((int)param_3[1] < 1) {
      param_3[1] = DAT_007666d8;
      return 0;
    }
    DAT_007666d8 = param_3[1];
    return 0;
  case 10:
    FUN_0057fb10(param_1,4,param_3);
    return 0;
  case 0xc:
    uVar3 = FUN_00523d10("win32");
    *param_3 = uVar3;
    return 0;
  case 0xd:
    FUN_0057fb10(param_1,0x10,param_3);
    return 0;
  case 0x10:
    uVar1 = *(undefined4 *)(*(int *)(param_1 + 4) + 8);
    iVar2 = FUN_00579f80();
    if ((iVar2 == 0) && (uVar3 = FUN_0055da00(uVar1), uVar3 != 0)) {
      FUN_0053b1b0(*(undefined4 *)(*(int *)(param_1 + 4) + 8),uVar3);
      *param_3 = uVar3;
    }
    return 0;
  }
  return 0;
}


/* FUN_00526810 @ 00526810  kind=gamemisc  attributed-by=role:vfunc-indirect  size=88 */

int FUN_00526810(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if ((iVar1 == 0) &&
     (FUN_00574df0(param_1[0x11] + (param_2 + -1) * 0x28,param_3), *(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00766638)();
  }
  return iVar1;
}


/* FUN_00526870 @ 00526870  kind=gamemisc  attributed-by=role:vfunc-indirect  size=81 */

int FUN_00526870(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00574ec0(param_1[0x11] + param_2 * 0x28 + -0x28,param_3,param_3 >> 0x1f);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_005268d0 @ 005268d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=14 */

void FUN_005268d0(int param_1)

{
                    /* WARNING: Could not recover jumptable at 0x005268d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  free((void *)(param_1 + -8));
  return;
}


/* FUN_005268e0 @ 005268e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=81 */

int FUN_005268e0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00574ec0(param_1[0x11] + param_2 * 0x28 + -0x28,param_3,param_4);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00526b00 @ 00526b00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=51 */

int FUN_00526b00(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if ((iVar1 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00766638)(*(int *)(*param_1 + 0xc));
  }
  return iVar1;
}


/* FUN_00526b40 @ 00526b40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=17 */

undefined4 FUN_00526b40(int param_1)

{
  if (param_1 == 0) {
    return 0;
  }
  return *(undefined4 *)(param_1 + -8);
}


/* FUN_00526b80 @ 00526b80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=86 */

int * FUN_00526b80(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = realloc((void *)(param_1 + -8),param_2 + 8);
  if (piVar1 != (int *)0x0) {
    *piVar1 = param_2;
    piVar1[1] = param_2 >> 0x1f;
    return piVar1 + 2;
  }
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + -8);
  }
  FUN_00525a30(7,"failed memory resize %u to %u bytes",uVar2,param_2);
  return (int *)0x0;
}


/* FUN_00526be0 @ 00526be0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=30 */

void FUN_00526be0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0052e070(param_1,param_2,param_3,param_4,param_5,2);
  return;
}


/* FUN_00526c00 @ 00526c00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=78 */

int FUN_00526c00(int *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  switch(*(undefined1 *)(param_3 + 0x1e)) {
  case 1:
    iVar3 = FUN_005268e0(param_1,param_2,*(undefined4 *)(param_3 + 0x10),
                         *(undefined4 *)(param_3 + 0x14));
    return iVar3;
  case 2:
    iVar3 = FUN_00526810(param_1,param_2,*(undefined8 *)(param_3 + 8));
    return iVar3;
  case 3:
    iVar3 = FUN_0052e070(param_1,param_2,*(undefined4 *)(param_3 + 4),
                         *(undefined4 *)(param_3 + 0x18),0xffffffff,*(undefined1 *)(param_3 + 0x1f))
    ;
    return iVar3;
  case 4:
    break;
  default:
    iVar3 = FUN_0057d290(param_1,param_2);
    if ((iVar3 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
      (*DAT_00766638)();
    }
    return iVar3;
  }
  if ((*(ushort *)(param_3 + 0x1c) & 0x4000) == 0) {
    uVar2 = *(undefined4 *)(param_3 + 0x18);
    iVar3 = *(int *)(param_3 + 4);
    iVar1 = FUN_0057d290(param_1,param_2);
    if (iVar1 == 0) {
      if (iVar3 != 0) {
        uVar2 = FUN_00575040(param_1[0x11] + param_2 * 0x28 + -0x28,iVar3,uVar2,0,0xffffffff);
        FUN_00553890(*param_1,uVar2,0);
        iVar1 = FUN_0054a110(*param_1,uVar2);
      }
      if (*(int *)(*param_1 + 0xc) != 0) {
        (*DAT_00766638)(*(int *)(*param_1 + 0xc));
      }
    }
    return iVar1;
  }
  iVar3 = FUN_00526d60(param_1,param_2,*(undefined4 *)(param_3 + 0x10));
  return iVar3;
}


/* FUN_00526d60 @ 00526d60  kind=gamemisc  attributed-by=role:vfunc-indirect  size=78 */

int FUN_00526d60(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if (iVar1 == 0) {
    FUN_00575240(param_1[0x11] + param_2 * 0x28 + -0x28,param_3);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00526db0 @ 00526db0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=14 */

uint FUN_00526db0(int param_1)

{
  return param_1 + 7U & 0xfffffff8;
}


/* FUN_00526dc0 @ 00526dc0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=20 */

int FUN_00526dc0(int param_1)

{
  if (param_1 != 0) {
    return (int)*(short *)(param_1 + 0x4c);
  }
  return 0;
}


/* FUN_00526df0 @ 00526df0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

undefined4 FUN_00526df0(int param_1,int param_2)

{
  if (((param_1 != 0) && (0 < param_2)) && (param_2 <= *(short *)(param_1 + 0x4e))) {
    return *(undefined4 *)(*(int *)(param_1 + 0x48) + -4 + param_2 * 4);
  }
  return 0;
}


/* FUN_00526e20 @ 00526e20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=21 */

int FUN_00526e20(int param_1)

{
  return (*(byte *)(param_1 + 0x10) & 0x10 | 8) << 8;
}


/* FUN_00526e40 @ 00526e40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=60 */

void FUN_00526e40(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    FUN_005758f0(param_1,param_2,(int)pcVar2 - (int)param_2 & 0x3fffffff);
    return;
  }
  FUN_005758f0(param_1,0,0);
  return;
}


/* FUN_00526e80 @ 00526e80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=271 */

undefined4 FUN_00526e80(int *param_1)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar3 = param_1;
  iVar2 = *(int *)(*param_1 + 0xc);
  if (iVar2 != 0) {
    (*DAT_00766630)(iVar2);
  }
  param_1 = (int *)0x0;
  if (0 < (short)piVar3[0x13]) {
    iVar4 = 0;
    do {
      puVar5 = (undefined4 *)(piVar3[0x11] + iVar4);
      uVar1 = *(ushort *)(puVar5 + 7);
      if ((uVar1 & 0x2460) != 0) {
        if ((uVar1 & 0x2000) == 0) {
          if (((uVar1 & 0x400) == 0) || ((code *)puVar5[8] == (code *)0x0)) {
            if ((uVar1 & 0x20) == 0) {
              if ((uVar1 & 0x40) != 0) {
                FUN_00574f20(puVar5);
              }
            }
            else {
              FUN_005644e0(puVar5[4]);
            }
          }
          else {
            (*(code *)puVar5[8])(puVar5[1]);
            puVar5[8] = 0;
          }
        }
        else {
          FUN_00574670(puVar5,puVar5[4]);
          FUN_00574d40(puVar5);
        }
      }
      FUN_005521a0(*puVar5,puVar5[9]);
      puVar5[1] = 0;
      puVar5[9] = 0;
      puVar5[8] = 0;
      *(undefined2 *)(iVar4 + 0x1c + piVar3[0x11]) = 1;
      param_1 = (int *)((int)param_1 + 1);
      iVar4 = iVar4 + 0x28;
    } while ((int)param_1 < (int)(short)piVar3[0x13]);
  }
  if (((piVar3[0x18] & 0x200U) != 0) && (piVar3[0x2b] != 0)) {
    piVar3[0x18] = piVar3[0x18] | 0x20;
  }
  if (iVar2 != 0) {
    (*DAT_00766638)(iVar2);
  }
  return 0;
}


/* FUN_00526f90 @ 00526f90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=20 */

undefined2 FUN_00526f90(int param_1)

{
  if (param_1 != 0) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* FUN_005270f0 @ 005270f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=108 */

undefined4 FUN_005270f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *param_1;
  if ((param_2 < (int)(uint)*(ushort *)(param_1 + 0xb)) && (-1 < param_2)) {
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar1 + 0xc));
    }
    uVar2 = FUN_0056bce0(param_1[4] + param_2 * 0x28,2);
    if (*(char *)(iVar1 + 0x38) != '\0') {
      *(undefined1 *)(iVar1 + 0x38) = 0;
      uVar2 = 0;
    }
    if (*(int *)(iVar1 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar1 + 0xc));
    }
    return uVar2;
  }
  return 0;
}


/* FUN_00527220 @ 00527220  kind=gamemisc  attributed-by=role:vfunc-indirect  size=110 */

undefined4 FUN_00527220(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb);
  iVar2 = *param_1;
  if ((param_2 < (int)(uint)uVar1) && (-1 < param_2)) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar2 + 0xc));
    }
    uVar3 = FUN_0056bce0(param_1[4] + ((uint)uVar1 + param_2) * 0x28,1);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined1 *)(iVar2 + 0x38) = 0;
      uVar3 = 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar2 + 0xc));
    }
    return uVar3;
  }
  return 0;
}


/* FUN_00527290 @ 00527290  kind=gamemisc  attributed-by=role:vfunc-indirect  size=110 */

undefined4 FUN_00527290(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  
  uVar1 = *(ushort *)(param_1 + 0xb);
  iVar2 = *param_1;
  if ((param_2 < (int)(uint)uVar1) && (-1 < param_2)) {
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766630)(*(int *)(iVar2 + 0xc));
    }
    uVar3 = FUN_0056bce0(param_1[4] + ((uint)uVar1 + param_2) * 0x28,2);
    if (*(char *)(iVar2 + 0x38) != '\0') {
      *(undefined1 *)(iVar2 + 0x38) = 0;
      uVar3 = 0;
    }
    if (*(int *)(iVar2 + 0xc) != 0) {
      (*DAT_00766638)(*(int *)(iVar2 + 0xc));
    }
    return uVar3;
  }
  return 0;
}


/* FUN_00527570 @ 00527570  kind=gamemisc  attributed-by=role:vfunc-indirect  size=26 */

undefined2 FUN_00527570(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 0x14) != 0)) {
    return *(undefined2 *)(param_1 + 0x2c);
  }
  return 0;
}


/* FUN_00527b00 @ 00527b00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=95 */

int FUN_00527b00(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(byte *)(iVar1 + 0x1c) & 0x10) == 0) {
    iVar2 = FUN_0056bce0(iVar1,2);
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


/* FUN_00527d50 @ 00527d50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=128 */

float10 FUN_00527d50(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  double local_c;
  
  iVar2 = FUN_005326d0(param_1,param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  if ((uVar1 & 8) == 0) {
    if ((uVar1 & 4) != 0) {
      local_c = (double)*(longlong *)(iVar2 + 0x10);
      FUN_00532670(param_1);
      return (float10)local_c;
    }
    local_c = 0.0;
    if ((uVar1 & 0x12) != 0) {
      local_c = 0.0;
      FUN_0054a330(*(undefined4 *)(iVar2 + 4),&local_c,*(undefined4 *)(iVar2 + 0x18),
                   *(undefined1 *)(iVar2 + 0x1f));
    }
  }
  else {
    local_c = *(double *)(iVar2 + 8);
  }
  FUN_00532670(param_1);
  return (float10)local_c;
}


/* FUN_00527dd0 @ 00527dd0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

undefined4 FUN_00527dd0(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005326d0(param_1,param_2);
  uVar1 = FUN_0051c810(uVar1);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00527ea0 @ 00527ea0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=133 */

undefined8 FUN_00527ea0(undefined4 param_1,undefined4 param_2)

{
  ushort uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined8 local_c;
  
  iVar2 = FUN_005326d0(param_1,param_2);
  uVar1 = *(ushort *)(iVar2 + 0x1c);
  if ((uVar1 & 4) == 0) {
    if ((uVar1 & 8) == 0) {
      local_c = 0;
      uVar3 = local_c;
      if ((uVar1 & 0x12) != 0) {
        FUN_0054a9a0(*(undefined4 *)(iVar2 + 4),&local_c,*(undefined4 *)(iVar2 + 0x18),
                     *(undefined1 *)(iVar2 + 0x1f));
        uVar3 = local_c;
      }
    }
    else {
      uVar3 = FUN_00534710(*(undefined8 *)(iVar2 + 8));
    }
  }
  else {
    uVar3 = *(undefined8 *)(iVar2 + 0x10);
  }
  FUN_00532670();
  return uVar3;
}


/* FUN_00527f30 @ 00527f30  kind=gamemisc  attributed-by=role:vfunc-indirect  size=41 */

undefined4 FUN_00527f30(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005326d0(param_1,param_2);
  uVar1 = FUN_0056bce0(uVar1,1);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00527f60 @ 00527f60  kind=gamemisc  attributed-by=role:vfunc-indirect  size=41 */

undefined4 FUN_00527f60(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_005326d0(param_1,param_2);
  uVar1 = FUN_0056bce0(uVar1,2);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00527f90 @ 00527f90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=35 */

undefined1 FUN_00527f90(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_005326d0(param_1,param_2);
  uVar1 = *(undefined1 *)(iVar2 + 0x1e);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00528030 @ 00528030  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

int FUN_00528030(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_005326d0(param_1,param_2);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x800) != 0) {
    *(ushort *)(iVar1 + 0x1c) = *(ushort *)(iVar1 + 0x1c) & 0xf7ff | 0x1000;
  }
  FUN_00532670(param_1);
  return iVar1;
}


/* FUN_00528320 @ 00528320  kind=gamemisc  attributed-by=role:vfunc-indirect  size=39 */

void FUN_00528320(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  FUN_00528720(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  return;
}


/* FUN_005283b0 @ 005283b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=188 */

undefined4 FUN_005283b0(int param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x18);
  if (piVar1 != (int *)0x0) {
    piVar2 = (int *)*piVar1;
    if (*piVar2 != 0) {
      (*DAT_00766630)(*piVar2);
    }
    piVar4 = piVar2 + 0x10;
    piVar3 = (int *)piVar2[0x10];
    while (piVar3 != piVar1) {
      piVar4 = piVar3 + 1;
      piVar3 = (int *)*piVar4;
    }
    *piVar4 = piVar1[1];
    FUN_00524410(piVar1);
    *(undefined4 *)(param_1 + 0x18) = 0;
    if (*piVar2 != 0) {
      (*DAT_00766638)(*piVar2);
    }
    if ((DAT_007665e4 != 0) && (iVar5 = (*DAT_00766628)(2), iVar5 != 0)) {
      (*DAT_00766630)(iVar5);
    }
    piVar2 = piVar2 + 0xf;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      FUN_0057fe70(*(undefined4 *)(param_1 + 4),param_2);
    }
    if ((DAT_007665e4 != 0) && (iVar5 = (*DAT_00766628)(2), iVar5 != 0)) {
      (*DAT_00766638)(iVar5);
    }
  }
  return 0;
}


/* FUN_00528490 @ 00528490  kind=gamemisc  attributed-by=role:vfunc-indirect  size=145 */

uint FUN_00528490(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766630)(*(int *)(param_1 + 0xc));
  }
  uVar2 = FUN_0056a850(param_1,param_2,0xffffffff,2);
  uVar3 = FUN_005515c0(param_1,uVar2,param_3,param_4,param_5,param_6,param_7,param_8,0);
  FUN_005521a0(param_1,uVar2);
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar3 == 0xc0a)) {
    FUN_00553890(param_1,7,0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar3 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00766638)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar3;
}


/* FUN_00528550 @ 00528550  kind=gamemisc  attributed-by=role:vfunc-indirect  size=445 */

int FUN_00528550(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  int *piVar4;
  int iVar5;
  ushort uVar6;
  
  piVar1 = *(int **)(param_1 + 0x18);
  piVar2 = (int *)*piVar1;
  uVar3 = (1 << ((char)param_3 + (byte)param_2 & 0x1f)) - (1 << ((byte)param_2 & 0x1f));
  if (*piVar2 != 0) {
    (*DAT_00766630)(*piVar2);
  }
  if ((param_4 & 1) == 0) {
    iVar5 = piVar2[0x10];
    if ((param_4 & 4) == 0) {
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if (((*(ushort *)(iVar5 + 0xc) & uVar3) != 0) || ((*(ushort *)(iVar5 + 10) & uVar3) != 0))
        goto LAB_005286d4;
      }
      iVar5 = FUN_0057f980(piVar2 + 4,3,param_2 + 0x78,0,param_3,0);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_GetLastError_007671bc)();
        piVar2[0xe] = iVar5;
        iVar5 = 5;
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == 0) {
        *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) | uVar3;
      }
    }
    else {
      uVar6 = 0;
      for (; iVar5 != 0; iVar5 = *(int *)(iVar5 + 4)) {
        if ((*(ushort *)(iVar5 + 0xc) & uVar3) != 0) goto LAB_005286d4;
        uVar6 = uVar6 | *(ushort *)(iVar5 + 10);
      }
      if ((uVar6 & uVar3) == 0) {
        iVar5 = FUN_0057f980(piVar2 + 4,1,param_2 + 0x78,0,param_3,0);
        if (iVar5 == 0) {
          iVar5 = (*(code *)PTR_GetLastError_007671bc)();
          piVar2[0xe] = iVar5;
          iVar5 = 5;
        }
        else {
          iVar5 = 0;
        }
        if (iVar5 == 0) {
          *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) | uVar3;
        }
      }
      else {
        iVar5 = 0;
        *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) | uVar3;
      }
    }
  }
  else {
    piVar4 = (int *)piVar2[0x10];
    param_1._0_2_ = 0;
    if (piVar4 != (int *)0x0) {
      param_1._0_2_ = 0;
      do {
        if (piVar4 != piVar1) {
          param_1._0_2_ = (ushort)param_1 | *(ushort *)((int)piVar4 + 10);
        }
        piVar4 = (int *)piVar4[1];
      } while (piVar4 != (int *)0x0);
    }
    if (((ushort)param_1 & uVar3) == 0) {
      iVar5 = FUN_0057ff40(piVar2 + 4,param_2 + 0x78,0,param_3,0);
      if (iVar5 == 0) {
        iVar5 = (*(code *)PTR_GetLastError_007671bc)();
        piVar2[0xe] = iVar5;
        iVar5 = 5;
      }
      else {
        iVar5 = 0;
      }
      if (iVar5 == 0) {
        *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) & ~uVar3;
        *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) & ~uVar3;
      }
    }
    else {
      *(ushort *)(piVar1 + 3) = *(ushort *)(piVar1 + 3) & ~uVar3;
      iVar5 = 0;
      *(ushort *)((int)piVar1 + 10) = *(ushort *)((int)piVar1 + 10) & ~uVar3;
    }
  }
LAB_005286f1:
  if (*piVar2 != 0) {
    (*DAT_00766638)(*piVar2);
  }
  return iVar5;
LAB_005286d4:
  iVar5 = 5;
  goto LAB_005286f1;
}


/* FUN_00528810 @ 00528810  kind=gamemisc  attributed-by=role:vfunc-indirect  size=27 */

undefined4 FUN_00528810(int param_1)

{
  if ((param_1 != 0) && ((*(byte *)(param_1 + 0x60) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}


/* FUN_00528830 @ 00528830  kind=gamemisc  attributed-by=role:vfunc-indirect  size=88 */

undefined4 FUN_00528830(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(short *)(param_1 + 0x4c) != *(short *)(param_2 + 0x4c)) {
    return 1;
  }
  if (((*(uint *)(param_2 + 0x60) & 0x200) != 0) && (*(int *)(param_2 + 0xac) != 0)) {
    *(uint *)(param_2 + 0x60) = *(uint *)(param_2 + 0x60) | 0x20;
  }
  if (((*(uint *)(param_1 + 0x60) & 0x200) != 0) && (*(int *)(param_1 + 0xac) != 0)) {
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x20;
  }
  uVar1 = FUN_005682d0();
  return uVar1;
}


/* FUN_0068fe70 @ 0068fe70  kind=gamemisc  attributed-by=role:vfunc-indirect  size=147 */

void FUN_0068fe70(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  if (*(int *)(*(int *)(*(int *)(*param_1 + 0x60) + 0x14) + 0x60) != 0) {
    local_14 = param_2;
    local_10 = param_3;
    local_18 = 0;
    if (param_4 == 0) {
      param_4 = param_5;
    }
    if (param_5 == 0) {
      param_5 = param_4;
    }
    if (param_4 == 0) {
      param_5 = 0x48;
      param_4 = 0x48;
    }
    local_c = param_4;
    local_8 = param_5;
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x60) + 0x14) + 0x60))(param_1,&local_18);
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


/* FUN_0068ff10 @ 0068ff10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=119 */

void FUN_0068ff10(int *param_1,int param_2,int param_3)

{
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  if (*(int *)(*(int *)(*(int *)(*param_1 + 0x60) + 0x14) + 0x60) != 0) {
    local_14 = param_2 << 6;
    local_18 = 0;
    local_10 = param_3 << 6;
    local_c = 0;
    local_8 = 0;
    (**(code **)(*(int *)(*(int *)(*param_1 + 0x60) + 0x14) + 0x60))(param_1,&local_18);
    __security_check_cookie(local_4 ^ (uint)&local_18);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


/* FUN_00699490 @ 00699490  kind=gamemisc  attributed-by=role:vfunc-indirect  size=246 */

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


/* FUN_0069c230 @ 0069c230  kind=gamemisc  attributed-by=role:vfunc-indirect  size=349 */

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


/* FUN_0069c470 @ 0069c470  kind=gamemisc  attributed-by=role:vfunc-indirect  size=347 */

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


/* FUN_0069c5d0 @ 0069c5d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=363 */

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


/* FUN_0069c740 @ 0069c740  kind=gamemisc  attributed-by=role:vfunc-indirect  size=121 */

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


/* FUN_0069c7c0 @ 0069c7c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=73 */

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


/* FUN_0069cb00 @ 0069cb00  kind=gamemisc  attributed-by=role:vfunc-indirect  size=58 */

void FUN_0069cb00(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x706f7374,param_2,0);
  if (iVar1 == 0) {
    FUN_00692010(param_2,&DAT_007236ac,param_1 + 0x1d4);
  }
  return;
}


/* FUN_0069cb40 @ 0069cb40  kind=gamemisc  attributed-by=role:vfunc-indirect  size=58 */

void FUN_0069cb40(int param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (**(code **)(param_1 + 0x1fc))(param_1,0x50434c54,param_2,0);
  if (iVar1 == 0) {
    FUN_00692010(param_2,&DAT_007236d8,param_1 + 0x22c);
  }
  return;
}


/* FUN_0069cec0 @ 0069cec0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=295 */

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


/* FUN_0069f670 @ 0069f670  kind=gamemisc  attributed-by=role:vfunc-indirect  size=45 */

void FUN_0069f670(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00691290(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


/* FUN_0069fdc0 @ 0069fdc0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=317 */

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


/* FUN_006a0890 @ 006a0890  kind=gamemisc  attributed-by=role:vfunc-indirect  size=484 */

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


/* FUN_006a1010 @ 006a1010  kind=gamemisc  attributed-by=role:vfunc-indirect  size=1780 */

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


/* FUN_006a1e90 @ 006a1e90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=740 */

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


/* FUN_006a2b20 @ 006a2b20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=258 */

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


/* FUN_006a37c0 @ 006a37c0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=125 */

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


/* FUN_006a38b0 @ 006a38b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=90 */

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


/* FUN_006a5430 @ 006a5430  kind=gamemisc  attributed-by=role:vfunc-indirect  size=57 */

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


/* FUN_006a54e0 @ 006a54e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=317 */

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


/* FUN_006a5680 @ 006a5680  kind=gamemisc  attributed-by=role:vfunc-indirect  size=541 */

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


/* FUN_006a8800 @ 006a8800  kind=gamemisc  attributed-by=role:vfunc-indirect  size=680 */

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


/* FUN_006a8b20 @ 006a8b20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=166 */

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


/* FUN_006a93f0 @ 006a93f0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=195 */

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


/* FUN_006a9770 @ 006a9770  kind=gamemisc  attributed-by=role:vfunc-indirect  size=56 */

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


/* FUN_006a97b0 @ 006a97b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=137 */

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


/* FUN_006a9a90 @ 006a9a90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=61 */

int FUN_006a9a90(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *param_2;
  do {
    uVar1 = uVar1 + 1;
    if (0xff < uVar1) {
      *param_2 = 0;
      return 0;
    }
    iVar2 = FUN_006a9a00(param_1,uVar1);
  } while (iVar2 == 0);
  *param_2 = uVar1;
  return iVar2;
}


/* FUN_006a9b80 @ 006a9b80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

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


/* FUN_006a9eb0 @ 006a9eb0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=29 */

void FUN_006a9eb0(undefined4 *param_1)

{
  FUN_00691290(*param_1,param_1[1]);
  param_1[1] = 0;
  return;
}


/* FUN_006aa4d0 @ 006aa4d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=314 */

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


/* FUN_006aa8b0 @ 006aa8b0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=24 */

void FUN_006aa8b0(undefined4 param_1)

{
  FUN_006a92c0(param_1);
  FUN_006aa020();
  return;
}


/* FUN_006aa8d0 @ 006aa8d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=119 */

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


/* FUN_006aa950 @ 006aa950  kind=gamemisc  attributed-by=role:vfunc-indirect  size=31 */

void FUN_006aa950(int param_1,undefined4 param_2)

{
  FUN_006a92c0(param_1);
  FUN_006aa050(param_1,*(undefined4 *)(param_1 + 8),param_2);
  return;
}


/* FUN_006aa970 @ 006aa970  kind=gamemisc  attributed-by=role:vfunc-indirect  size=36 */

void FUN_006aa970(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_006a92c0(param_1);
  FUN_006aa2e0(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3);
  return;
}


/* FUN_006aa9a0 @ 006aa9a0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=41 */

void FUN_006aa9a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_006a92c0(param_1);
  FUN_006aa3e0(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3,param_4);
  return;
}


/* FUN_006ac1e0 @ 006ac1e0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=318 */

void FUN_006ac1e0(undefined4 *param_1)

{
  char *_Str1;
  int iVar1;
  undefined4 uVar2;
  undefined1 *puVar3;
  undefined1 *local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_44;
  puVar3 = (undefined1 *)param_1[2];
  local_30 = *param_1;
  local_3c = 0xa0;
  local_38 = 0;
  local_44 = puVar3;
  if (puVar3 == (undefined1 *)0x0) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  _Str1 = (char *)FUN_006a9d80(1,&local_40);
  if (((_Str1 == (char *)0x0) || (local_40 != 0x10)) ||
     (iVar1 = strncmp(_Str1,"StartFontMetrics",0x10), iVar1 != 0)) {
LAB_006ac46e:
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  iVar1 = FUN_006a9d80(1,&local_40);
  do {
    if (iVar1 == 0) {
LAB_006ac2d7:
      uVar2 = local_30;
      FUN_00691290(local_30,*(undefined4 *)(puVar3 + 0x1c));
      *(undefined4 *)(puVar3 + 0x1c) = 0;
      *(undefined4 *)(puVar3 + 0x20) = 0;
      FUN_00691290(uVar2,*(undefined4 *)(puVar3 + 0x24));
      *(undefined4 *)(puVar3 + 0x24) = 0;
      *(undefined4 *)(puVar3 + 0x28) = 0;
      *puVar3 = 0;
      __security_check_cookie(local_c ^ (uint)&local_44);
      return;
    }
    uVar2 = FUN_006a9e10();
    switch(uVar2) {
    case 0:
      uStack_2c = 2;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 0x14) = uStack_28;
      break;
    case 0xe:
      uStack_2c = 2;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 0x18) = uStack_28;
      break;
    case 0x14:
      goto LAB_006ac455;
    case 0x1a:
      uStack_2c = 2;
      uStack_24 = 2;
      uStack_1c = 2;
      uStack_14 = 2;
      iVar1 = FUN_006abbc0(param_1,4);
      puVar3 = local_44;
      if (iVar1 != 4) goto LAB_006ac2d7;
      *(undefined4 *)(local_44 + 4) = uStack_28;
      *(undefined4 *)(local_44 + 8) = uStack_20;
      *(undefined4 *)(local_44 + 0xc) = uStack_18;
      *(undefined4 *)(local_44 + 0x10) = uStack_10;
      break;
    case 0x1e:
      uStack_2c = 4;
      iVar1 = FUN_006abbc0(param_1,1);
      puVar3 = local_44;
      if (iVar1 != 1) goto LAB_006ac2d7;
      *local_44 = (undefined1)uStack_28;
      break;
    case 0x28:
      iVar1 = FUN_006abd10(&local_38);
      puVar3 = local_44;
      if (iVar1 != 0) goto LAB_006ac2d7;
      if ((local_38 != 0) && (local_38 != 2)) {
        local_3c = 7;
        goto LAB_006ac2d7;
      }
      break;
    case 0x2d:
      uStack_34 = 0;
      iVar1 = FUN_006abd10(&uStack_34);
      puVar3 = local_44;
      if (iVar1 != 0) goto LAB_006ac2d7;
      local_3c = FUN_006a9f00(param_1,0x11);
      if (local_3c != 0) goto LAB_006ac46e;
      break;
    case 0x31:
      local_3c = FUN_006ac110();
      puVar3 = local_44;
      if (local_3c == 0) {
LAB_006ac455:
        __security_check_cookie(local_c ^ (uint)&local_44);
        return;
      }
      goto LAB_006ac2d7;
    }
    iVar1 = FUN_006a9d80(1,&local_40);
    puVar3 = local_44;
  } while( true );
}


/* FUN_006af030 @ 006af030  kind=gamemisc  attributed-by=role:vfunc-indirect  size=48 */

undefined4 FUN_006af030(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = param_1;
  uVar2 = FUN_006931e0(*(undefined4 *)(*param_1 + 500),&param_1);
  piVar1[0xb] = (int)param_1;
  FUN_0068fcc0(param_1);
  return uVar2;
}


/* FUN_006af100 @ 006af100  kind=gamemisc  attributed-by=role:vfunc-indirect  size=54 */

void FUN_006af100(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00691390(*(int *)(*param_1 + 500) + 0x6c,param_1[0xb]);
  if (iVar1 != 0) {
    FUN_006919d0(param_1[0xb]);
    param_1[0xb] = 0;
  }
  return;
}


/* FUN_006af140 @ 006af140  kind=gamemisc  attributed-by=role:vfunc-indirect  size=58 */

void FUN_006af140(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 500);
  if (*(int *)(*(int *)(param_1 + 4) + 0x54) == 0) {
    *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(iVar1 + 0x54);
    return;
  }
  FUN_00692580(iVar1,&param_1);
  *(int *)(iVar2 + 0xa0) = param_1;
  return;
}


/* FUN_006af220 @ 006af220  kind=gamemisc  attributed-by=role:vfunc-indirect  size=238 */

void FUN_006af220(int param_1,int param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 0x28);
  FUN_006af1a0();
  iVar1 = (**(code **)(iVar1 + 0x50))
                    (*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_2 + 0x2c),param_3,
                     param_4 | 8);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0xa0);
    puVar3 = (undefined4 *)(iVar1 + 0x18);
    puVar4 = (undefined4 *)(param_1 + 0x18);
    for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(iVar1 + 0x38);
    *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(iVar1 + 0x3c);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(iVar1 + 0x48);
    *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)(iVar1 + 0x6c);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar1 + 0x70);
    *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar1 + 0x74);
    *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar1 + 0x78);
    *(undefined4 *)(param_1 + 0x7c) = *(undefined4 *)(iVar1 + 0x7c);
    *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)(iVar1 + 0x4c);
    *(undefined4 *)(param_1 + 0x50) = *(undefined4 *)(iVar1 + 0x50);
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(iVar1 + 0x54);
    *(undefined4 *)(param_1 + 0x58) = *(undefined4 *)(iVar1 + 0x58);
    *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)(iVar1 + 0x5c);
    *(undefined4 *)(param_1 + 0x60) = *(undefined4 *)(iVar1 + 0x60);
    *(undefined4 *)(param_1 + 100) = *(undefined4 *)(iVar1 + 100);
    *(undefined4 *)(param_1 + 0x68) = *(undefined4 *)(iVar1 + 0x68);
    *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(iVar1 + 0x80);
    *(undefined4 *)(param_1 + 0x84) = *(undefined4 *)(iVar1 + 0x84);
    *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(iVar1 + 0x88);
    *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(iVar1 + 0x8c);
  }
  return;
}


/* FUN_006b04d0 @ 006b04d0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=28 */

undefined4 FUN_006b04d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xa8);
  for (iVar1 = 0x31; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006b0770 @ 006b0770  kind=gamemisc  attributed-by=role:vfunc-indirect  size=648 */

int FUN_006b0770(undefined4 param_1,undefined4 *param_2,int param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined4 *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  int local_8;
  undefined4 local_4;
  
  piVar4 = param_2 + 0x7d;
  *piVar4 = 0;
  *param_2 = 1;
  iVar5 = FUN_0068fe10(param_2[0x18],"postscript-cmaps");
  param_2[0x79] = iVar5;
  iVar6 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
  param_2[0x7a] = iVar6;
  iVar7 = FUN_006b0500();
  if ((iVar7 == 0) && (-1 < param_3)) {
    if (0 < param_3) {
      return 6;
    }
    param_2[4] = param_2[0x68];
    param_2[9] = 0;
    param_2[1] = 0;
    param_2[2] = 0x211;
    if (*(char *)(param_2 + 0x27) != '\0') {
      param_2[2] = 0x215;
    }
    param_2[2] = param_2[2] | 0x800;
    pcVar9 = (char *)param_2[0x24];
    param_2[5] = pcVar9;
    param_2[6] = "Regular";
    if (pcVar9 == (char *)0x0) {
      if (param_2[0x5b] != 0) {
        param_2[5] = param_2[0x5b];
      }
    }
    else {
      pcVar8 = (char *)param_2[0x23];
      if (pcVar8 != (char *)0x0) {
        cVar1 = *pcVar8;
        while (cVar1 != '\0') {
          cVar2 = *pcVar9;
          if (cVar1 == cVar2) {
            pcVar9 = pcVar9 + 1;
LAB_006b084f:
            pcVar8 = pcVar8 + 1;
          }
          else {
            if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006b084f;
            if ((cVar2 != ' ') && (cVar2 != '-')) {
              if (*pcVar9 == '\0') {
                param_2[6] = pcVar8;
              }
              break;
            }
            pcVar9 = pcVar9 + 1;
          }
          cVar1 = *pcVar8;
        }
      }
    }
    local_18 = param_2[0x7c];
    local_1c = param_2[0x7b];
    param_2[7] = 0;
    param_2[8] = 0;
    local_20 = 1;
    if (param_4 != 0) {
      local_20 = 0x11;
      local_8 = param_4;
      local_4 = param_5;
    }
    iVar7 = FUN_00694b60(*(undefined4 *)(param_2[0x18] + 4),&local_20,0,piVar4);
    if (iVar7 == 0) {
      FUN_006919d0(*(undefined4 *)(*piVar4 + 0x58));
      iVar3 = *piVar4;
      param_2[0xd] = *(undefined4 *)(iVar3 + 0x34);
      param_2[0xe] = *(undefined4 *)(iVar3 + 0x38);
      param_2[0xf] = *(undefined4 *)(iVar3 + 0x3c);
      param_2[0x10] = *(undefined4 *)(iVar3 + 0x40);
      *(undefined2 *)(param_2 + 0x11) = *(undefined2 *)(iVar3 + 0x44);
      *(undefined2 *)((int)param_2 + 0x46) = *(undefined2 *)(iVar3 + 0x46);
      *(undefined2 *)(param_2 + 0x12) = *(undefined2 *)(iVar3 + 0x48);
      *(undefined2 *)((int)param_2 + 0x4a) = *(undefined2 *)(iVar3 + 0x4a);
      *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(iVar3 + 0x4c);
      *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)(iVar3 + 0x4e);
      *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
      *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
      param_2[3] = 0;
      if (param_2[0x26] != 0) {
        param_2[3] = 1;
      }
      if ((*(byte *)(iVar3 + 0xc) & 2) != 0) {
        param_2[3] = param_2[3] | 2;
      }
      if ((*(byte *)(iVar3 + 8) & 0x20) != 0) {
        param_2[2] = param_2[2] | 0x20;
      }
      if ((iVar5 != 0) && (iVar6 != 0)) {
        piVar4 = *(int **)(iVar6 + 0x14);
        local_2c = param_2;
        local_24 = 0x10003;
        local_28 = 0x756e6963;
        iVar7 = FUN_00693ed0(piVar4[3],0,&local_2c,0);
        if ((iVar7 == 0) || (iVar7 == 0xa3)) {
          iVar7 = 0;
          switch(param_2[0x5c]) {
          case 1:
            local_28 = 0x41444243;
            local_24 = 0x20007;
            iVar5 = piVar4[2];
            break;
          case 2:
            local_28 = 0x41444f42;
            local_24 = 7;
            iVar5 = *piVar4;
            break;
          case 3:
            local_28 = 0x6c617431;
            local_24 = 0x30007;
            iVar5 = piVar4[3];
            break;
          case 4:
            local_28 = 0x41444245;
            local_24 = 0x10007;
            iVar5 = piVar4[1];
            break;
          default:
            goto LAB_006b0a58;
          }
          if (iVar5 != 0) {
            iVar7 = FUN_00693ed0(iVar5,0,&local_2c,0);
          }
        }
      }
    }
  }
LAB_006b0a58:
  return iVar7;
}


/* FUN_006b1960 @ 006b1960  kind=gamemisc  attributed-by=role:vfunc-indirect  size=158 */

uint FUN_006b1960(int param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint local_4;
  
  uVar5 = *param_2;
  local_4 = 0;
  do {
    uVar5 = uVar5 + 1;
    uVar4 = 0;
    uVar2 = *(uint *)(param_1 + 0x10);
    while( true ) {
      uVar3 = uVar2;
      if (uVar3 <= uVar4) {
        if (*(uint *)(param_1 + 0x10) <= uVar4) {
          *param_2 = 0;
          return local_4;
        }
        if (uVar4 == 0) {
          *param_2 = 0;
          return 0;
        }
        *param_2 = *(uint *)(*(int *)(param_1 + 0x14) + uVar4 * 0x10);
        return uVar4 + 1;
      }
      uVar2 = (uVar3 - uVar4 >> 1) + uVar4;
      uVar1 = *(uint *)(uVar2 * 0x10 + *(int *)(param_1 + 0x14));
      if (uVar1 == uVar5) break;
      if (uVar1 < uVar5) {
        uVar4 = uVar2 + 1;
        uVar2 = uVar3;
      }
    }
    local_4 = uVar2;
    if (uVar2 != 0) {
      *param_2 = uVar5;
      return uVar2 + 1;
    }
  } while( true );
}


/* FUN_006b1a80 @ 006b1a80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=18 */

void FUN_006b1a80(void)

{
  FUN_006b1680();
  return;
}


/* FUN_006b1aa0 @ 006b1aa0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=537 */

int FUN_006b1aa0(int param_1,uint param_2,uint param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  
  *param_4 = 0;
  param_4[1] = 0;
  if (param_2 != 0) {
    param_2 = param_2 - 1;
  }
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if (*(uint *)(param_1 + 0x198) < param_2) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x198) < param_3) {
    return 0;
  }
  piVar12 = *(int **)(param_1 + 0x1a8);
  iVar1 = *(int *)(param_1 + 0x68);
  uVar6 = *(int *)(*(int *)(param_1 + 0x1a0) + param_2 * 0x10) << 0x10 |
          (uint)*(ushort *)(*(int *)(param_1 + 0x1a0) + param_3 * 0x10);
  if (piVar12 == (int *)0x0) {
    return 0;
  }
  while ((uVar6 < (uint)piVar12[4] || ((uint)piVar12[5] < uVar6))) {
    piVar12 = (int *)*piVar12;
    if (piVar12 == (int *)0x0) {
      return 0;
    }
  }
  iVar2 = FUN_006908c0(iVar1,piVar12[3]);
  if (iVar2 != 0) {
    return iVar2;
  }
  iVar2 = FUN_00691f30(iVar1,(uint)*(byte *)(piVar12 + 1) * piVar12[2]);
  if (iVar2 != 0) {
    return iVar2;
  }
  bVar9 = *(byte *)(piVar12 + 1);
  uVar8 = piVar12[2];
  iVar2 = FUN_006914c0((uint)bVar9);
  iVar11 = (uint)bVar9 - iVar2;
  uVar10 = iVar2 * uVar8;
  pbVar5 = *(byte **)(iVar1 + 0x20);
  bVar9 = *(byte *)((int)piVar12 + 5) & 1;
  param_1._0_1_ = *(byte *)((int)piVar12 + 5) & 2;
  if (iVar11 == 0) {
LAB_006b1be8:
    if (uVar8 <= uVar10 && uVar10 - uVar8 != 0) {
      do {
        uVar10 = uVar10 >> 1;
        pbVar3 = pbVar5 + uVar10;
        if (bVar9 == 0) {
          pbVar4 = pbVar3 + 2;
          uVar7 = (uint)*pbVar3 << 0x10;
        }
        else {
          pbVar4 = pbVar3 + 4;
          uVar7 = (uint)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) << 8;
        }
        if ((uVar7 | pbVar4[-1]) == uVar6) goto LAB_006b1c77;
        if ((uVar7 | pbVar4[-1]) < uVar6) {
          pbVar5 = pbVar3;
        }
      } while (uVar8 < uVar10);
    }
    if (bVar9 == 0) {
      pbVar4 = pbVar5 + 2;
      uVar8 = (uint)*pbVar5 << 0x10;
    }
    else {
      pbVar4 = pbVar5 + 4;
      uVar8 = (uint)CONCAT21(CONCAT11(*pbVar5,pbVar5[1]),pbVar5[2]) << 8;
    }
    if ((uVar8 | pbVar4[-1]) != uVar6) goto LAB_006b1ca0;
  }
  else {
    pbVar3 = pbVar5 + iVar11 * uVar8;
    if (bVar9 == 0) {
      pbVar4 = pbVar3 + 2;
      uVar7 = (uint)*pbVar3 << 0x10;
    }
    else {
      pbVar4 = pbVar3 + 4;
      uVar7 = (uint)CONCAT21(CONCAT11(*pbVar3,pbVar3[1]),pbVar3[2]) << 8;
    }
    if ((uVar7 | pbVar4[-1]) != uVar6) {
      if ((uVar7 | pbVar4[-1]) < uVar6) {
        if ((byte)param_1 == 0) {
          pbVar5 = pbVar4 + 1;
        }
        else {
          pbVar5 = pbVar4 + 2;
        }
      }
      goto LAB_006b1be8;
    }
  }
LAB_006b1c77:
  if ((byte)param_1 == 0) {
    uVar6 = (uint)*pbVar4;
  }
  else {
    uVar6 = (int)(short)((short)(char)*pbVar4 << 8) | (uint)pbVar4[1];
  }
  *param_4 = (int)*(short *)((int)piVar12 + 6) + uVar6;
LAB_006b1ca0:
  FUN_00691fe0(iVar1);
  return 0;
}


/* FUN_006b3740 @ 006b3740  kind=gamemisc  attributed-by=role:vfunc-indirect  size=552 */

void FUN_006b3740(int param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined1 auStack_24 [3];
  byte local_21;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)auStack_24;
  local_20 = *(int *)(param_1 + 4);
  local_1c = param_2;
  puVar1 = (undefined4 *)(param_1 + 0x6c);
  if (param_3 != 0) {
    param_3 = param_3 - 1;
  }
  if ((((local_20 != 0) && (param_3 < *(uint *)(local_20 + 0x198))) &&
      (((param_4 & 9) != 0 || (iVar4 = FUN_006b24c0(param_2), iVar4 != 0)))) &&
     ((param_4 & 0x4000) == 0)) {
    iVar7 = param_3 * 0x10 + *(int *)(local_20 + 0x1a0);
    *(undefined4 *)(param_1 + 0x48) = 0x6f75746c;
    *puVar1 = 0;
    local_18 = FUN_006b33d0(*(undefined4 *)(local_20 + 0x68),*(undefined4 *)(local_20 + 0xbc),
                            *(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar7 + 8));
    iVar3 = local_1c;
    iVar4 = local_20;
    if (local_18 == 0) {
      local_21 = ~(byte)param_4 & 1;
      iVar2 = *(int *)(param_1 + 0xbc);
      *puVar1 = *(undefined4 *)(iVar2 + 0x14);
      *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(iVar2 + 0x18);
      *(undefined4 *)(param_1 + 0x74) = *(undefined4 *)(iVar2 + 0x1c);
      *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(iVar2 + 0x20);
      uVar5 = *(uint *)(iVar2 + 0x24);
      *(uint *)(param_1 + 0x7c) = uVar5;
      uVar5 = uVar5 & 0xfffffffe;
      *(uint *)(param_1 + 0x7c) = uVar5 | 4;
      if ((local_1c != 0) && (*(ushort *)(local_1c + 0xe) < 0x18)) {
        *(uint *)(param_1 + 0x7c) = uVar5 | 0x104;
      }
      *(undefined4 *)(param_1 + 0x28) = 0;
      *(undefined4 *)(param_1 + 0x34) = 0;
      uVar6 = *(undefined4 *)(iVar7 + 4);
      if (*(int *)(local_20 + 0x130) != *(int *)(local_20 + 300)) {
        uVar6 = FUN_0068ea60(uVar6,*(int *)(local_20 + 300),*(int *)(local_20 + 0x130));
      }
      if ((*(byte *)(iVar4 + 0x144) & 1) == 0) {
        *(undefined4 *)(param_1 + 0x28) = uVar6;
      }
      else {
        *(undefined4 *)(param_1 + 0x34) = uVar6;
      }
      *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
      *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x34);
      *(undefined4 *)(param_1 + 0x2c) = 0;
      *(undefined4 *)(param_1 + 0x30) = 0;
      if (local_21 != 0) {
        local_20 = *(int *)(iVar3 + 0x10);
        local_1c = *(int *)(iVar3 + 0x14);
        puVar8 = *(undefined4 **)(param_1 + 0x70);
        iVar4 = 0;
        if (0 < *(short *)(param_1 + 0x6e)) {
          do {
            uVar6 = FUN_0068ebc0(*puVar8,local_20);
            *puVar8 = uVar6;
            uVar6 = FUN_0068ebc0(puVar8[1],local_1c);
            puVar8[1] = uVar6;
            iVar4 = iVar4 + 1;
            puVar8 = puVar8 + 2;
          } while (iVar4 < *(short *)(param_1 + 0x6e));
        }
        uVar6 = FUN_0068ebc0(*(undefined4 *)(param_1 + 0x28),local_20);
        *(undefined4 *)(param_1 + 0x28) = uVar6;
        uVar6 = FUN_0068ebc0(*(undefined4 *)(param_1 + 0x34),local_1c);
        *(undefined4 *)(param_1 + 0x34) = uVar6;
      }
      FUN_00690430(puVar1,&local_14);
      *(int *)(param_1 + 0x18) = local_c - local_14;
      *(int *)(param_1 + 0x1c) = local_8 - local_10;
      *(int *)(param_1 + 0x20) = local_14;
      *(int *)(param_1 + 0x24) = local_8 - (local_8 - local_10);
      __security_check_cookie(local_4 ^ (uint)auStack_24);
      return;
    }
  }
  __security_check_cookie(local_4 ^ (uint)auStack_24);
  return;
}


/* FUN_006b4700 @ 006b4700  kind=gamemisc  attributed-by=role:vfunc-indirect  size=43 */

void FUN_006b4700(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_006b46c0();
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 8))(*(undefined4 *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


/* FUN_006b4730 @ 006b4730  kind=gamemisc  attributed-by=role:vfunc-indirect  size=72 */

int FUN_006b4730(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  
  piVar1 = param_1;
  puVar2 = (undefined4 *)FUN_006b46c0();
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = *piVar1;
    iVar3 = (*(code *)*puVar2)(*(undefined4 *)(iVar3 + 100),
                               *(int *)(iVar3 + 4) * 0xfc + *(int *)(iVar3 + 0x130),&param_1);
    if (iVar3 == 0) {
      piVar1[10] = (int)param_1;
      return 0;
    }
  }
  return iVar3;
}


/* FUN_006b4930 @ 006b4930  kind=gamemisc  attributed-by=role:vfunc-indirect  size=584 */

int FUN_006b4930(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  char *pcVar11;
  byte *pbVar12;
  char *pcVar13;
  bool bVar14;
  
  *param_2 = 1;
  if (param_2[0x22] == 0) {
    uVar7 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
    param_2[0x22] = uVar7;
  }
  if (param_2[0x50] == 0) {
    uVar7 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"pshinter");
    param_2[0x50] = uVar7;
  }
  iVar8 = FUN_006908c0(param_1,0);
  if (iVar8 != 0) {
    return iVar8;
  }
  iVar8 = FUN_006b4550(param_3);
  if (iVar8 != 0) {
    return iVar8;
  }
  if (param_3 < 0) {
    return 0;
  }
  if (param_3 != 0) {
    return 6;
  }
  param_2[4] = param_2[0x4a];
  param_2[9] = 0;
  param_2[1] = 0;
  param_2[2] = 0x811;
  if (*(char *)(param_2 + 0x2f) != '\0') {
    param_2[2] = 0x815;
  }
  pcVar13 = (char *)param_2[0x2c];
  param_2[5] = pcVar13;
  param_2[6] = "Regular";
  if (pcVar13 == (char *)0x0) {
    if (param_2[0x23] != 0) {
      param_2[5] = param_2[0x23];
    }
  }
  else {
    pcVar11 = (char *)param_2[0x2b];
    if (pcVar11 != (char *)0x0) {
      cVar1 = *pcVar11;
      while (cVar1 != '\0') {
        cVar2 = *pcVar13;
        if (cVar1 == cVar2) {
          pcVar13 = pcVar13 + 1;
LAB_006b4a19:
          pcVar11 = pcVar11 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006b4a19;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar13 == '\0') {
              param_2[6] = pcVar11;
            }
            break;
          }
          pcVar13 = pcVar13 + 1;
        }
        cVar1 = *pcVar11;
      }
    }
  }
  param_2[3] = 0;
  if (param_2[0x2e] != 0) {
    param_2[3] = 1;
  }
  pbVar10 = (byte *)param_2[0x2d];
  if (pbVar10 != (byte *)0x0) {
    pbVar12 = &DAT_00723468;
    pbVar9 = pbVar10;
    do {
      bVar3 = *pbVar9;
      bVar14 = bVar3 < *pbVar12;
      if (bVar3 != *pbVar12) {
LAB_006b4a90:
        iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
        goto LAB_006b4a95;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar9[1];
      bVar14 = bVar3 < pbVar12[1];
      if (bVar3 != pbVar12[1]) goto LAB_006b4a90;
      pbVar9 = pbVar9 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar3 != 0);
    iVar8 = 0;
LAB_006b4a95:
    if (iVar8 != 0) {
      pcVar13 = "Black";
      do {
        bVar3 = *pbVar10;
        bVar14 = bVar3 < (byte)*pcVar13;
        if (bVar3 != *pcVar13) {
LAB_006b4ac0:
          iVar8 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
          goto LAB_006b4ac5;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar10[1];
        bVar14 = bVar3 < (byte)pcVar13[1];
        if (bVar3 != pcVar13[1]) goto LAB_006b4ac0;
        pbVar10 = pbVar10 + 2;
        pcVar13 = pcVar13 + 2;
      } while (bVar3 != 0);
      iVar8 = 0;
LAB_006b4ac5:
      if (iVar8 != 0) goto LAB_006b4acd;
    }
    param_2[3] = param_2[3] | 2;
  }
LAB_006b4acd:
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xd] = (int)*(short *)((int)param_2 + 0xc6);
  param_2[0xe] = (int)*(short *)((int)param_2 + 0xca);
  param_2[0xf] = param_2[0x33] + 0xffff >> 0x10;
  param_2[0x10] = param_2[0x34] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x11) == 0) {
    *(undefined2 *)(param_2 + 0x11) = 1000;
  }
  sVar4 = *(short *)(param_2 + 0xe);
  sVar6 = (short)(((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
  sVar5 = (short)((uint)(param_2[0x34] + 0xffff) >> 0x10);
  *(short *)((int)param_2 + 0x4a) = sVar6;
  *(short *)((int)param_2 + 0x46) = sVar5;
  *(short *)(param_2 + 0x12) = sVar4;
  if ((int)sVar6 < (int)sVar5 - (int)sVar4) {
    *(short *)((int)param_2 + 0x4a) = sVar5 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0xbe);
  *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x30);
  return 0;
}


/* FUN_006b5520 @ 006b5520  kind=gamemisc  attributed-by=role:vfunc-indirect  size=70 */

int FUN_006b5520(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0068f110(&PTR_s_xf86_driver_name_007345b4,param_2);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      piVar2 = (int *)FUN_0068fd80(*(undefined4 *)(param_1 + 4),&DAT_007235ec);
      if (piVar2 != (int *)0x0) {
        iVar1 = (**(code **)(*piVar2 + 0x20))(piVar2,param_2);
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_006b7970 @ 006b7970  kind=gamemisc  attributed-by=role:vfunc-indirect  size=280 */

undefined4 FUN_006b7970(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  uVar5 = param_2;
  piVar3 = param_1;
  iVar4 = *param_1;
  if ((*(byte *)(iVar4 + 8) & 2) != 0) {
    iVar4 = (**(code **)(*(int *)(iVar4 + 0x214) + 0x94))(iVar4,param_2,&param_1);
    if (iVar4 == 0) {
      uVar5 = FUN_006b7880(piVar3,param_1);
      return uVar5;
    }
    piVar3[0xb] = -1;
  }
  FUN_0068f5f0(*piVar3,uVar5);
  iVar4 = FUN_006b7540();
  if (iVar4 != 0) {
    iVar7 = *(int *)(*piVar3 + 0x2b4);
    puVar1 = (undefined4 *)piVar3[10];
    iVar2 = *(int *)(iVar7 + 0x56c);
    (**(code **)(iVar4 + 4))(*puVar1,piVar3[4],piVar3[5],0,0);
    iVar8 = *(int *)(iVar7 + 0x764);
    if (iVar8 != 0) {
      param_1 = (int *)(iVar7 + 0x764 + iVar8 * 4);
      do {
        iVar7 = *(int *)(*param_1 + 0x40);
        if (iVar2 == iVar7) {
          iVar6 = piVar3[4];
          iVar7 = piVar3[5];
        }
        else {
          iVar6 = FUN_0068ea60(piVar3[4],iVar2,iVar7);
          iVar7 = FUN_0068ea60(piVar3[5],iVar2,iVar7);
        }
        (**(code **)(iVar4 + 4))(puVar1[iVar8],iVar6,iVar7,0,0);
        param_1 = param_1 + -1;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
  }
  return 0;
}


/* FUN_006b8400 @ 006b8400  kind=gamemisc  attributed-by=role:vfunc-indirect  size=78 */

void FUN_006b8400(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(param_1 + 0x214) != 0) {
      (**(code **)(*(int *)(param_1 + 0x214) + 0xc))(param_1);
    }
    if (*(int *)(param_1 + 0x2b4) != 0) {
      FUN_006b7420();
      FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x2b4));
      *(undefined4 *)(param_1 + 0x2b4) = 0;
    }
  }
  return;
}


/* FUN_006bace0 @ 006bace0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=63 */

void FUN_006bace0(int param_1,uint *param_2)

{
  uint uVar1;
  short *psVar2;
  
  uVar1 = *param_2;
  *param_2 = 0;
  if ((uVar1 < 0xff) && (uVar1 = uVar1 + 1, uVar1 < 0x100)) {
    psVar2 = (short *)(*(int *)(param_1 + 0x10) + uVar1 * 2);
    while (*psVar2 == 0) {
      uVar1 = uVar1 + 1;
      psVar2 = psVar2 + 1;
      if (0xff < uVar1) {
        return;
      }
    }
    *param_2 = uVar1;
  }
  return;
}


/* FUN_006bad90 @ 006bad90  kind=gamemisc  attributed-by=role:vfunc-indirect  size=33 */

void FUN_006bad90(int *param_1)

{
  FUN_00691290(*(undefined4 *)(*param_1 + 100),param_1[5]);
  param_1[5] = 0;
  param_1[4] = 0;
  return;
}


/* FUN_006bae50 @ 006bae50  kind=gamemisc  attributed-by=role:vfunc-indirect  size=90 */

void FUN_006bae50(int param_1,int param_2,uint param_3,uint param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  
  uVar4 = 0;
  iVar1 = *(int *)(param_1 + 0x54);
  if (param_3 != 0) {
    do {
      iVar2 = FUN_006bae00(iVar1,*(undefined4 *)(param_1 + 0x58),uVar4 + param_2,param_4 | 0x100);
      if (iVar2 != 0) {
        return;
      }
      if ((param_4 & 0x10) == 0) {
        uVar3 = *(undefined4 *)(iVar1 + 0x38);
      }
      else {
        uVar3 = *(undefined4 *)(iVar1 + 0x3c);
      }
      *(undefined4 *)(param_5 + uVar4 * 4) = uVar3;
      uVar4 = uVar4 + 1;
    } while (uVar4 < param_3);
  }
  return;
}


/* FUN_006bbb20 @ 006bbb20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=561 */

void FUN_006bbb20(int param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  uint *puVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  undefined4 uVar7;
  char *pcVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  bool bVar12;
  int local_60;
  int local_5c;
  int *local_58;
  uint local_54;
  int *local_50;
  uint local_4c;
  uint local_48;
  int local_40 [15];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_60;
  uVar7 = *(undefined4 *)(param_1 + 100);
  piVar10 = *(int **)(param_1 + 0x214);
  local_50 = param_2;
  local_58 = piVar10;
  local_5c = FUN_006bb970(param_1,&local_4c);
  uVar9 = local_4c;
  if ((local_5c == 0) &&
     (puVar3 = (uint *)FUN_00692230(uVar7,local_4c * 0x18 + 0x14,&local_5c), local_5c == 0)) {
    *puVar3 = uVar9;
    puVar3[1] = local_48;
    puVar3[2] = 0xffffffff;
    puVar3[3] = (uint)(puVar3 + 5);
    puVar3[4] = 0;
    if (uVar9 != 0) {
      iVar11 = 0;
      piVar10 = local_40;
      local_54 = uVar9;
      do {
        iVar5 = *piVar10;
        *(int *)(iVar11 + puVar3[3]) = piVar10[-1];
        iVar2 = piVar10[1];
        *(int *)(puVar3[3] + 4 + iVar11) = iVar5 << 0x10;
        *(int *)(puVar3[3] + 0xc + iVar11) = iVar2 << 0x10;
        uVar9 = puVar3[3];
        *(int *)(uVar9 + 8 + iVar11) =
             (*(int *)(uVar9 + 0xc + iVar11) + *(int *)(uVar9 + 4 + iVar11)) / 2;
        *(undefined4 *)(puVar3[3] + 0x14 + iVar11) = 0xffffffff;
        *(undefined4 *)(puVar3[3] + 0x10 + iVar11) = 0xffffffff;
        pbVar6 = *(byte **)(puVar3[3] + iVar11);
        local_60 = puVar3[3] + iVar11;
        pcVar8 = "Weight";
        pbVar4 = pbVar6;
        do {
          bVar1 = *pbVar4;
          bVar12 = bVar1 < (byte)*pcVar8;
          if (bVar1 != *pcVar8) {
LAB_006bbc40:
            iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
            goto LAB_006bbc45;
          }
          if (bVar1 == 0) break;
          bVar1 = pbVar4[1];
          bVar12 = bVar1 < (byte)pcVar8[1];
          if (bVar1 != pcVar8[1]) goto LAB_006bbc40;
          pbVar4 = pbVar4 + 2;
          pcVar8 = pcVar8 + 2;
        } while (bVar1 != 0);
        iVar5 = 0;
LAB_006bbc45:
        if (iVar5 == 0) {
          *(undefined4 *)(local_60 + 0x10) = 0x77676874;
        }
        else {
          pcVar8 = "Width";
          pbVar4 = pbVar6;
          do {
            bVar1 = *pbVar4;
            bVar12 = bVar1 < (byte)*pcVar8;
            if (bVar1 != *pcVar8) {
LAB_006bbc80:
              iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
              goto LAB_006bbc85;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar4[1];
            bVar12 = bVar1 < (byte)pcVar8[1];
            if (bVar1 != pcVar8[1]) goto LAB_006bbc80;
            pbVar4 = pbVar4 + 2;
            pcVar8 = pcVar8 + 2;
          } while (bVar1 != 0);
          iVar5 = 0;
LAB_006bbc85:
          if (iVar5 == 0) {
            *(undefined4 *)(local_60 + 0x10) = 0x77647468;
          }
          else {
            pcVar8 = "OpticalSize";
            do {
              bVar1 = *pbVar6;
              bVar12 = bVar1 < (byte)*pcVar8;
              if (bVar1 != *pcVar8) {
LAB_006bbcc0:
                iVar5 = (1 - (uint)bVar12) - (uint)(bVar12 != 0);
                goto LAB_006bbcc5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar6[1];
              bVar12 = bVar1 < (byte)pcVar8[1];
              if (bVar1 != pcVar8[1]) goto LAB_006bbcc0;
              pbVar6 = pbVar6 + 2;
              pcVar8 = pcVar8 + 2;
            } while (bVar1 != 0);
            iVar5 = 0;
LAB_006bbcc5:
            if (iVar5 == 0) {
              *(undefined4 *)(local_60 + 0x10) = 0x6f70737a;
            }
          }
        }
        piVar10 = piVar10 + 3;
        iVar11 = iVar11 + 0x18;
        local_54 = local_54 - 1;
      } while (local_54 != 0);
      local_54 = 0;
      piVar10 = local_58;
    }
    if (*piVar10 == 1 << ((byte)piVar10[1] & 0x1f)) {
      FUN_006bba60();
      uVar9 = 0;
      if (local_4c != 0) {
        iVar11 = 0;
        do {
          uVar7 = FUN_006bb9e0();
          *(undefined4 *)(puVar3[3] + 8 + iVar11) = uVar7;
          uVar9 = uVar9 + 1;
          iVar11 = iVar11 + 0x18;
        } while (uVar9 < local_4c);
      }
    }
    *local_50 = (int)puVar3;
  }
  __security_check_cookie(local_4 ^ (uint)&local_60);
  return;
}


/* FUN_006bbf10 @ 006bbf10  kind=gamemisc  attributed-by=role:vfunc-indirect  size=117 */

void FUN_006bbf10(undefined4 param_1,uint param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int local_14 [4];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)local_14;
  if (param_2 - 1 < 4) {
    uVar2 = 0;
    if (param_2 != 0) {
      do {
        iVar1 = FUN_0068e970(*(undefined4 *)(param_3 + uVar2 * 4));
        local_14[uVar2] = iVar1 >> 0x10;
        uVar2 = uVar2 + 1;
      } while (uVar2 < param_2);
    }
    FUN_006bbdf0(param_1,param_2,local_14);
  }
  __security_check_cookie(local_4 ^ (uint)local_14);
  return;
}


/* FUN_006bde20 @ 006bde20  kind=gamemisc  attributed-by=role:vfunc-indirect  size=43 */

void FUN_006bde20(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    iVar1 = FUN_006bdde0();
    if (iVar1 != 0) {
      (**(code **)(iVar1 + 8))(*(undefined4 *)(param_1 + 0x28));
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


/* FUN_006bdea0 @ 006bdea0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=64 */

undefined4 FUN_006bdea0(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_006bdde0();
  FUN_0068f5f0(*param_1,param_2);
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 4))(param_1[10],param_1[4],param_1[5],0,0);
  }
  return 0;
}


/* FUN_006beb80 @ 006beb80  kind=gamemisc  attributed-by=role:vfunc-indirect  size=517 */

int FUN_006beb80(int param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_14 [8];
  int iStack_c;
  code *pcStack_8;
  int iStack_4;
  
  iVar3 = param_2;
  puVar1 = (undefined4 *)(param_2 + 0x1c);
  param_2 = 2;
  iVar4 = FUN_00692230(*puVar1,0x2c,&param_2);
  if ((param_2 != 0) || (param_2 = FUN_00691f30(iVar3,*(undefined4 *)(iVar3 + 4)), param_2 != 0))
  goto LAB_006bed6c;
  *(undefined4 *)(iVar4 + 4) = *(undefined4 *)(param_1 + 0x1cc);
  *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(param_1 + 0x1d0);
  *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(param_1 + 0x1d4);
  *(undefined4 *)(iVar4 + 0x10) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar4 + 0x14) = *(undefined4 *)(param_1 + 0x1d8);
  *(undefined4 *)(iVar4 + 0x18) = *(undefined4 *)(param_1 + 0x1d0);
  iVar2 = *(int *)(param_1 + 0x1e8);
  if ((iVar2 != 0) &&
     ((*(undefined4 **)(iVar2 + 0x18) != (undefined4 *)0x0 &&
      (param_2 = (*(code *)**(undefined4 **)(iVar2 + 0x18))
                           (local_14,*(undefined4 *)(iVar3 + 0x1c),*(undefined4 *)(iVar3 + 0x20),
                            *(undefined4 *)(iVar3 + 0x24)), param_2 == 0)))) {
    pcStack_8 = FUN_006be910;
    iStack_c = iVar4;
    iStack_4 = param_1 + 0x84;
    param_2 = (**(code **)(*(int *)(iVar2 + 0x18) + 8))(local_14);
    (**(code **)(*(int *)(iVar2 + 0x18) + 4))(local_14);
  }
  if (param_2 == 2) {
    if (((6 < *(uint *)(iVar3 + 4)) && (*(byte *)(*(int *)(iVar3 + 0x20) + 1) < 4)) &&
       (*(int *)(*(int *)(iVar3 + 0x20) + 2) == *(int *)(iVar3 + 4))) {
      param_2 = FUN_006be990(iVar4);
      goto LAB_006becd6;
    }
  }
  else {
LAB_006becd6:
    if (param_2 == 0) {
      *(undefined4 *)(param_1 + 0x1cc) = *(undefined4 *)(iVar4 + 4);
      *(undefined4 *)(param_1 + 0x1d0) = *(undefined4 *)(iVar4 + 8);
      *(undefined4 *)(param_1 + 0x1d4) = *(undefined4 *)(iVar4 + 0xc);
      *(undefined4 *)(param_1 + 0x1d8) = *(undefined4 *)(iVar4 + 0x10);
      *(int *)(param_1 + 0x34) = (int)*(short *)(iVar4 + 6);
      *(int *)(param_1 + 0x38) = (int)*(short *)(iVar4 + 10);
      *(int *)(param_1 + 0x3c) = *(int *)(iVar4 + 0xc) + 0xffff >> 0x10;
      *(int *)(param_1 + 0x40) = *(int *)(iVar4 + 0x10) + 0xffff >> 0x10;
      *(short *)(param_1 + 0x46) = (short)((uint)(*(int *)(iVar4 + 0x14) + 0x8000) >> 0x10);
      *(short *)(param_1 + 0x48) = (short)((uint)(*(int *)(iVar4 + 0x18) + 0x8000) >> 0x10);
      if (*(int *)(iVar4 + 0x28) != 0) {
        *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 0x40;
        *(int *)(param_1 + 0x1ec) = iVar4;
        iVar4 = 0;
      }
    }
  }
  FUN_00691fe0(iVar3);
LAB_006bed6c:
  if (iVar4 != 0) {
    FUN_006be8e0();
  }
  return param_2;
}


/* FUN_006beeb0 @ 006beeb0  kind=gamemisc  attributed-by=role:vfunc-indirect  size=401 */

void FUN_006beeb0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 100);
    if (*(int *)(param_1 + 0x224) != 0) {
      FUN_00691290(uVar1,*(int *)(param_1 + 0x224));
      *(undefined4 *)(param_1 + 0x224) = 0;
      *(undefined4 *)(param_1 + 0x220) = 0;
    }
    FUN_006bbf90(param_1);
    *(undefined4 *)(param_1 + 0x214) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x84));
    *(undefined4 *)(param_1 + 0x84) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x8c));
    *(undefined4 *)(param_1 + 0x8c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x94));
    *(undefined4 *)(param_1 + 0x94) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x1ac));
    *(undefined4 *)(param_1 + 0x1ac) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x1a8));
    *(undefined4 *)(param_1 + 0x1a8) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x1a4));
    *(undefined4 *)(param_1 + 0x1a4) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x198));
    *(undefined4 *)(param_1 + 0x198) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x19c));
    *(undefined4 *)(param_1 + 0x19c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x188));
    *(undefined4 *)(param_1 + 0x188) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x18c));
    *(undefined4 *)(param_1 + 0x18c) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 400));
    *(undefined4 *)(param_1 + 400) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x180));
    *(undefined4 *)(param_1 + 0x180) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x184));
    *(undefined4 *)(param_1 + 0x184) = 0;
    FUN_00691290(uVar1,*(undefined4 *)(param_1 + 0x16c));
    *(undefined4 *)(param_1 + 0x16c) = 0;
    if (*(int *)(param_1 + 0x1ec) != 0) {
      FUN_006be8e0();
    }
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}


/* FUN_006bf050 @ 006bf050  kind=gamemisc  attributed-by=role:vfunc-indirect  size=789 */

int FUN_006bf050(undefined4 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  byte bVar3;
  short sVar4;
  int *piVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined2 extraout_var;
  char *pcVar14;
  byte *pbVar15;
  char *pcVar16;
  bool bVar17;
  undefined4 *local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  *param_2 = 1;
  iVar8 = FUN_0068fe10(param_2[0x18],"postscript-cmaps");
  param_2[0x79] = iVar8;
  iVar9 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"psaux");
  param_2[0x7a] = iVar9;
  uVar10 = FUN_0068fdf0(*(undefined4 *)(param_2[0x18] + 4),"pshinter");
  param_2[0x8a] = uVar10;
  iVar11 = FUN_006bda20(param_2);
  if (iVar11 != 0) {
    return iVar11;
  }
  if (param_3 < 0) {
    return 0;
  }
  if (0 < param_3) {
    return 6;
  }
  param_2[4] = param_2[0x68];
  param_2[1] = 0;
  param_2[2] = 0xa11;
  if (*(char *)(param_2 + 0x27) != '\0') {
    param_2[2] = 0xa15;
  }
  if (param_2[0x85] != 0) {
    param_2[2] = param_2[2] | 0x100;
  }
  pcVar16 = (char *)param_2[0x24];
  param_2[5] = pcVar16;
  param_2[6] = 0;
  if (pcVar16 == (char *)0x0) {
    if (param_2[0x5b] != 0) {
      param_2[5] = param_2[0x5b];
    }
  }
  else {
    pcVar14 = (char *)param_2[0x23];
    if (pcVar14 != (char *)0x0) {
      cVar1 = *pcVar14;
      while (cVar1 != '\0') {
        cVar2 = *pcVar16;
        if (cVar1 == cVar2) {
          pcVar16 = pcVar16 + 1;
LAB_006bf13e:
          pcVar14 = pcVar14 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_006bf13e;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (*pcVar16 == '\0') {
              param_2[6] = pcVar14;
            }
            goto LAB_006bf176;
          }
          pcVar16 = pcVar16 + 1;
        }
        cVar1 = *pcVar14;
      }
      param_2[6] = "Regular";
    }
  }
LAB_006bf176:
  if (param_2[6] == 0) {
    if (param_2[0x25] == 0) {
      param_2[6] = "Regular";
    }
    else {
      param_2[6] = param_2[0x25];
    }
  }
  param_2[3] = 0;
  if (param_2[0x26] != 0) {
    param_2[3] = 1;
  }
  pbVar13 = (byte *)param_2[0x25];
  if (pbVar13 != (byte *)0x0) {
    pbVar15 = &DAT_00723468;
    pbVar12 = pbVar13;
    do {
      bVar3 = *pbVar12;
      bVar17 = bVar3 < *pbVar15;
      if (bVar3 != *pbVar15) {
LAB_006bf1d0:
        iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
        goto LAB_006bf1d5;
      }
      if (bVar3 == 0) break;
      bVar3 = pbVar12[1];
      bVar17 = bVar3 < pbVar15[1];
      if (bVar3 != pbVar15[1]) goto LAB_006bf1d0;
      pbVar12 = pbVar12 + 2;
      pbVar15 = pbVar15 + 2;
    } while (bVar3 != 0);
    iVar11 = 0;
LAB_006bf1d5:
    if (iVar11 != 0) {
      pcVar16 = "Black";
      do {
        bVar3 = *pbVar13;
        bVar17 = bVar3 < (byte)*pcVar16;
        if (bVar3 != *pcVar16) {
LAB_006bf200:
          iVar11 = (1 - (uint)bVar17) - (uint)(bVar17 != 0);
          goto LAB_006bf205;
        }
        if (bVar3 == 0) break;
        bVar3 = pbVar13[1];
        bVar17 = bVar3 < (byte)pcVar16[1];
        if (bVar3 != pcVar16[1]) goto LAB_006bf200;
        pbVar13 = pbVar13 + 2;
        pcVar16 = pcVar16 + 2;
      } while (bVar3 != 0);
      iVar11 = 0;
LAB_006bf205:
      if (iVar11 != 0) goto LAB_006bf20d;
    }
    param_2[3] = param_2[3] | 2;
  }
LAB_006bf20d:
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[0xd] = (int)*(short *)((int)param_2 + 0x1ce);
  param_2[0xe] = (int)*(short *)((int)param_2 + 0x1d2);
  param_2[0xf] = param_2[0x75] + 0xffff >> 0x10;
  param_2[0x10] = param_2[0x76] + 0xffff >> 0x10;
  if (*(short *)(param_2 + 0x11) == 0) {
    *(undefined2 *)(param_2 + 0x11) = 1000;
  }
  sVar6 = (short)((uint)(param_2[0x76] + 0xffff) >> 0x10);
  sVar4 = *(short *)(param_2 + 0xe);
  sVar7 = (short)(((uint)*(ushort *)(param_2 + 0x11) * 0xc) / 10);
  *(short *)((int)param_2 + 0x4a) = sVar7;
  *(short *)((int)param_2 + 0x46) = sVar6;
  *(short *)(param_2 + 0x12) = sVar4;
  if ((int)sVar7 < (int)sVar6 - (int)sVar4) {
    *(short *)((int)param_2 + 0x4a) = sVar6 - sVar4;
  }
  *(undefined2 *)(param_2 + 0x13) = *(undefined2 *)(param_2 + 0xf);
  iVar11 = FUN_006be190();
  if (iVar11 == 0) {
    FUN_0068e970(param_2);
    *(undefined2 *)(param_2 + 0x13) = extraout_var;
  }
  iVar11 = 0;
  *(undefined2 *)((int)param_2 + 0x4e) = *(undefined2 *)((int)param_2 + 0x4a);
  *(undefined2 *)(param_2 + 0x14) = *(undefined2 *)((int)param_2 + 0x9e);
  *(undefined2 *)((int)param_2 + 0x52) = *(undefined2 *)(param_2 + 0x28);
  if ((iVar8 != 0) && (iVar9 != 0)) {
    piVar5 = *(int **)(iVar9 + 0x14);
    local_c = param_2;
    local_4 = 0x10003;
    local_8 = 0x756e6963;
    iVar11 = FUN_00693ed0(piVar5[3],0,&local_c,0);
    if ((iVar11 == 0) || (iVar11 == 0xa3)) {
      iVar11 = 0;
      switch(param_2[0x5c]) {
      case 1:
        local_8 = 0x41444243;
        local_4 = 0x20007;
        iVar8 = piVar5[2];
        break;
      case 2:
        local_8 = 0x41444f42;
        local_4 = 7;
        iVar8 = *piVar5;
        break;
      case 3:
        local_8 = 0x6c617431;
        local_4 = 0x30007;
        iVar8 = piVar5[3];
        break;
      case 4:
        local_8 = 0x41444245;
        local_4 = 0x10007;
        iVar8 = piVar5[1];
        break;
      default:
        goto LAB_006bf3ca;
      }
      if (iVar8 != 0) {
        iVar11 = FUN_00693ed0(iVar8,0,&local_c,0);
      }
    }
  }
LAB_006bf3ca:
  return iVar11;
}


/* FUN_006bf430 @ 006bf430  kind=gamemisc  attributed-by=role:vfunc-indirect  size=80 */

int FUN_006bf430(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_0068f110(&PTR_s_xf86_driver_name_00735cdc,param_2);
  if (iVar1 == 0) {
    if (param_1 != 0) {
      piVar2 = (int *)FUN_0068fd80(*(undefined4 *)(param_1 + 4),&DAT_007235ec);
      if ((piVar2 != (int *)0x0) && (*(int *)(*piVar2 + 0x14) != 0)) {
        iVar1 = (**(code **)(*(int *)(*piVar2 + 0x14) + 0x10))(param_1,param_2);
        return iVar1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


