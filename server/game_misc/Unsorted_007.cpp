// Unsorted_007 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_007.h"

/* FUN_0048f740 @ 0048f740  kind=gamemisc  attributed-by=none  size=72 */

char * __cdecl FUN_0048f740(undefined4 *param_1,undefined4 *param_2,byte param_3)

{
  int *piVar1;
  char *pcVar2;
  
  FUN_0048fbc0(param_1);
  pcVar2 = FUN_00470d20(param_1,param_2,param_3);
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
  return pcVar2;
}


/* FUN_0048f790 @ 0048f790  kind=gamemisc  attributed-by=none  size=78 */

undefined4 __cdecl
FUN_0048f790(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  undefined4 uVar2;
  
  FUN_0048fbc0(param_1);
  uVar2 = FUN_00470f80((int)param_1,param_2,param_3,param_4,param_5);
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


/* FUN_0048f7e0 @ 0048f7e0  kind=gamemisc  attributed-by=none  size=137 */

int __cdecl FUN_0048f7e0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    iVar1 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    iVar1 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    iVar1 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (iVar1 != 0) goto LAB_0048f830;
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
  }
  if (iVar1 == 0) {
    if ((*(char *)((int)param_1 + 0x5b) == '\x01') && (param_1[0x15] == 0)) {
      *param_2 = 0;
      return 0;
    }
    *param_2 = 1;
    return 0;
  }
LAB_0048f830:
  *param_2 = 1;
  return iVar1;
}


/* FUN_0048f870 @ 0048f870  kind=gamemisc  attributed-by=none  size=62 */

uint __cdecl FUN_0048f870(int *param_1,uint param_2,size_t param_3,void *param_4)

{
  uint uVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) == 0) {
    return 4;
  }
  if ((1 < *(byte *)((int)param_1 + 0x5b)) && (uVar1 = FUN_00471850(param_1), uVar1 != 0)) {
    return uVar1;
  }
  uVar1 = FUN_0046b2f0((int)param_1,param_2,param_3,param_4,0);
  return uVar1;
}


/* FUN_0048f8b0 @ 0048f8b0  kind=gamemisc  attributed-by=none  size=32 */

int __cdecl FUN_0048f8b0(int param_1,uint *param_2)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    iVar1 = FUN_00479240(param_1,param_2,1);
    return iVar1;
  }
  return 0;
}


/* FUN_0048f8d0 @ 0048f8d0  kind=gamemisc  attributed-by=none  size=91 */

undefined4 __cdecl FUN_0048f8d0(int param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(short *)(param_1 + 0x42) == 0) {
    iVar1 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
    uVar2 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
    FUN_00471710(iVar1,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar1 + 0x40) + uVar2 * 2),
                                       *(undefined1 *)(*(int *)(iVar1 + 0x40) + 1 + uVar2 * 2)) &
                             *(ushort *)(iVar1 + 0x12)) + *(int *)(iVar1 + 0x38),
                 (uint *)(param_1 + 0x28));
    *(undefined1 *)(param_1 + 0x5a) = 1;
  }
  *param_2 = *(undefined4 *)(param_1 + 0x34);
  return 0;
}


/* FUN_0048f930 @ 0048f930  kind=gamemisc  attributed-by=none  size=485 */

uint __cdecl FUN_0048f930(uint *param_1)

{
  ushort uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint **ppuVar10;
  int local_18;
  int local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar5 = param_1;
  iVar9 = (int)*(short *)((int)param_1 + 0x5e);
  puVar6 = (uint *)*param_1;
  puVar2 = (undefined1 *)param_1[iVar9 + 0x22];
  local_c = puVar6[1];
  uVar1 = *(ushort *)((int)param_1 + iVar9 * 2 + 0x60);
  if ((*(ushort *)(puVar2 + 0x10) <= uVar1) || (*(char *)((int)param_1 + 0x5b) != '\x01')) {
    return 1;
  }
  local_10 = (uint)uVar1;
  local_8 = (uint)(CONCAT11(*(undefined1 *)(*(int *)(puVar2 + 0x40) + local_10 * 2),
                            *(undefined1 *)(*(int *)(puVar2 + 0x40) + 1 + local_10 * 2)) &
                  *(ushort *)(puVar2 + 0x12)) + *(int *)(puVar2 + 0x38);
  param_1 = puVar6;
  if (((puVar2[3] != '\0') ||
      (puVar6 = (uint *)FUN_00491450((int *)puVar5,&local_18), puVar6 == (uint *)0x0)) &&
     (puVar6 = (uint *)FUN_00489bc0(local_c,puVar5[6],(uint)puVar5), puVar6 == (uint *)0x0)) {
    if (puVar5[4] == 0) {
      uVar7 = puVar5[10];
      uVar8 = puVar5[0xb];
      for (iVar3 = *(int *)(param_1[1] + 8); iVar3 != 0; iVar3 = *(int *)(iVar3 + 8)) {
        if (((*(char *)(iVar3 + 0x5c) != '\0') && (*(uint *)(iVar3 + 0x28) == uVar7)) &&
           (*(uint *)(iVar3 + 0x2c) == uVar8)) {
          *(undefined1 *)(iVar3 + 0x5b) = 0;
        }
      }
    }
    puVar6 = (uint *)FUN_004a2c80(*(undefined4 **)(puVar2 + 0x44));
    if (puVar6 == (uint *)0x0) {
      param_1 = (uint *)FUN_00472980(puVar2,local_8);
      ppuVar10 = &param_1;
      uVar7 = FUN_00471aa0((uint)puVar2,local_8);
      FUN_004770f0((int)puVar2,local_10,uVar7 & 0xffff,(int *)ppuVar10);
      puVar6 = param_1;
      if (param_1 == (uint *)0x0) {
        if (puVar2[3] == '\0') {
          local_8 = puVar5[*(short *)((int)puVar5 + 0x5e) + 0x22];
          local_14 = *(int *)(puVar5[iVar9 + 0x23] + 0x48);
          local_18 = (uint)(CONCAT11(*(undefined1 *)
                                      (*(int *)(local_8 + 0x40) + -2 +
                                      (uint)*(ushort *)(local_8 + 0x10) * 2),
                                     *(undefined1 *)
                                      (*(int *)(local_8 + 0x40) + -1 +
                                      (uint)*(ushort *)(local_8 + 0x10) * 2)) &
                           *(ushort *)(local_8 + 0x12)) + *(int *)(local_8 + 0x38);
          uVar8 = FUN_00471aa0(local_8,local_18);
          uVar7 = local_c;
          FUN_0046c6a0(local_c);
          puVar4 = *(undefined1 **)(uVar7 + 0x50);
          param_1 = (uint *)FUN_004a2c80(*(undefined4 **)(local_8 + 0x44));
          FUN_0047e6f0((uint)puVar2,local_10,(undefined1 *)(local_18 + -4),(uVar8 & 0xffff) + 4,
                       puVar4,local_14,(uint *)&param_1);
          FUN_004770f0(local_8,*(ushort *)(local_8 + 0x10) - 1,uVar8 & 0xffff,(int *)&param_1);
          if (param_1 != (uint *)0x0) {
            return (uint)param_1;
          }
        }
        puVar6 = (uint *)FUN_0046e520((int)puVar5);
        if (puVar6 == (uint *)0x0) {
          if (iVar9 < *(short *)((int)puVar5 + 0x5e)) {
            do {
              uVar7 = puVar5[*(short *)((int)puVar5 + 0x5e) + 0x22];
              *(short *)((int)puVar5 + 0x5e) = *(short *)((int)puVar5 + 0x5e) + -1;
              FUN_004880a0(uVar7);
            } while (iVar9 < *(short *)((int)puVar5 + 0x5e));
            uVar7 = FUN_0046e520((int)puVar5);
            puVar6 = (uint *)0x0;
            if (uVar7 != 0) {
              return uVar7;
            }
          }
          FUN_00480c70((int *)puVar5);
        }
      }
    }
  }
  return (uint)puVar6;
}


/* FUN_0048fb0a @ 0048fb0a  kind=gamemisc  attributed-by=none  size=77 */

int FUN_0048fb0a(void)

{
  int iVar1;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    iVar1 = unaff_ESI[*(short *)((int)unaff_ESI + 0x5e) + 0x22];
    *(short *)((int)unaff_ESI + 0x5e) = *(short *)((int)unaff_ESI + 0x5e) + -1;
    FUN_004880a0(iVar1);
  } while (unaff_EDI < *(short *)((int)unaff_ESI + 0x5e));
  iVar1 = FUN_0046e520((int)unaff_ESI);
  if (iVar1 == 0) {
    FUN_00480c70(unaff_ESI);
  }
  return iVar1;
}


/* FUN_0048fb70 @ 0048fb70  kind=gamemisc  attributed-by=none  size=72 */

uint __cdecl FUN_0048fb70(undefined4 *param_1,char *param_2,uint *param_3)

{
  int *piVar1;
  uint uVar2;
  
  FUN_0048fbc0(param_1);
  uVar2 = FUN_00471000(param_1,param_2,param_3);
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


/* FUN_0048fdc0 @ 0048fdc0  kind=gamemisc  attributed-by=none  size=58 */

void __cdecl FUN_0048fdc0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00480c70(param_1);
  if (iVar1 == 0) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return;
    }
    *param_2 = 0;
    FUN_00480b10((int)param_1);
  }
  return;
}


/* FUN_0048fe00 @ 0048fe00  kind=gamemisc  attributed-by=none  size=72 */

char __cdecl FUN_0048fe00(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  
  FUN_0048fbc0(param_1);
  iVar2 = param_1[1];
  cVar3 = '\0';
  if (*(char *)(iVar2 + 0x11) != '\0') {
    cVar3 = (*(char *)(iVar2 + 0x12) != '\0') + '\x01';
  }
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return cVar3;
}


/* FUN_0048fe50 @ 0048fe50  kind=gamemisc  attributed-by=none  size=32 */

undefined1 * __cdecl FUN_0048fe50(int param_1)

{
  if (*(char *)(**(int **)(param_1 + 4) + 0xe) != '\0') {
    return &DAT_0055b524;
  }
  return *(undefined1 **)(**(int **)(param_1 + 4) + 0x90);
}


/* FUN_0048fe70 @ 0048fe70  kind=gamemisc  attributed-by=none  size=108 */

void __cdecl FUN_0048fe70(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  FUN_0048fbc0(param_1);
  iVar3 = *(int *)(*(int *)(iVar2 + 0xc) + 0x38);
  iVar2 = iVar3 + param_2 * 4;
  *param_3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x24 + param_2 * 4),
                                        *(undefined1 *)(iVar2 + 0x25)),*(undefined1 *)(iVar2 + 0x26)
                              ),*(undefined1 *)(iVar2 + 0x27));
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
  return;
}


/* FUN_0048fee0 @ 0048fee0  kind=gamemisc  attributed-by=none  size=64 */

int __cdecl FUN_0048fee0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  FUN_0048fbc0(param_1);
  iVar2 = param_1[1];
  iVar3 = *(int *)(iVar2 + 0x20);
  iVar4 = *(int *)(iVar2 + 0x24);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      if (*(int *)(iVar2 + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(iVar2 + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return iVar3 - iVar4;
}


/* FUN_0048ff20 @ 0048ff20  kind=gamemisc  attributed-by=none  size=187 */

uint __cdecl FUN_0048ff20(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  if (*(char *)((int)piVar1 + 0x11) == '\0') {
    uVar4 = 0x65;
  }
  else {
    for (iVar2 = piVar1[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
      FUN_00466dd0(*(int *)(iVar2 + 0x14));
      *(undefined4 *)(iVar2 + 0x14) = 0;
    }
    uVar4 = FUN_0047e2e0(piVar1,(undefined4 *)0x0,(char *)piVar1[0xb]);
    if (uVar4 == 0) {
      uVar4 = FUN_004a2c80(*(undefined4 **)(piVar1[3] + 0x44));
      iVar2 = piVar1[0xb];
      iVar3 = *(int *)(piVar1[3] + 0x38);
      *(char *)(iVar3 + 0x1c) = (char)((uint)iVar2 >> 0x18);
      *(char *)(iVar3 + 0x1d) = (char)((uint)iVar2 >> 0x10);
      *(char *)(iVar3 + 0x1e) = (char)((uint)iVar2 >> 8);
      *(char *)(iVar3 + 0x1f) = (char)iVar2;
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
  return uVar4;
}


/* FUN_0048ffe0 @ 0048ffe0  kind=gamemisc  attributed-by=none  size=509 */

uint * __cdecl
FUN_0048ffe0(uint *param_1,byte *param_2,uint param_3,uint param_4,void *param_5,size_t param_6,
            size_t param_7,int param_8,uint *param_9)

{
  uint *puVar1;
  int iVar2;
  undefined1 *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint local_c;
  uint *local_8;
  
  puVar5 = param_9;
  puVar4 = param_1;
  local_8 = param_9;
  uVar9 = *param_1;
  puVar6 = *(uint **)(uVar9 + 4);
  local_c = 0;
  if (*(char *)((int)param_1 + 0x5b) == '\x03') {
    return (uint *)param_1[0x15];
  }
  puVar1 = param_1 + 6;
  param_1 = puVar6;
  puVar6 = (uint *)FUN_00489bc0((int)puVar6,*puVar1,(uint)puVar4);
  uVar8 = param_4;
  if (puVar6 == (uint *)0x0) {
    if (puVar4[4] == 0) {
      for (iVar2 = *(int *)(*(int *)(uVar9 + 4) + 8); iVar2 != 0; iVar2 = *(int *)(iVar2 + 8)) {
        if (((*(char *)(iVar2 + 0x5c) != '\0') && (*(uint *)(iVar2 + 0x28) == param_3)) &&
           (*(uint *)(iVar2 + 0x2c) == param_4)) {
          *(undefined1 *)(iVar2 + 0x5b) = 0;
        }
      }
    }
    if (puVar5 == (uint *)0x0) {
      puVar6 = (uint *)FUN_004715a0((int *)puVar4,param_2,param_3,param_4,param_8,(uint *)&local_8);
      if (puVar6 != (uint *)0x0) {
        return puVar6;
      }
      param_9 = local_8;
    }
    puVar3 = (undefined1 *)puVar4[*(short *)((int)puVar4 + 0x5e) + 0x22];
    if (param_1[0x14] == 0) {
      puVar7 = FUN_004868a0(param_1[8]);
      param_1[0x14] = (uint)puVar7;
    }
    local_8 = (uint *)param_1[0x14];
    if (local_8 == (uint *)0x0) {
      return (uint *)0x7;
    }
    param_1 = FUN_004794b0((size_t)puVar3,local_8,param_2,param_3,uVar8,param_5,param_6,param_7,
                           &local_c);
    puVar6 = param_1;
    if (param_1 == (uint *)0x0) {
      uVar9 = (uint)*(ushort *)((int)puVar4 + *(short *)((int)puVar4 + 0x5e) * 2 + 0x60);
      if (param_9 == (uint *)0x0) {
        puVar6 = (uint *)FUN_004a2c80(*(undefined4 **)(puVar3 + 0x44));
        if (puVar6 != (uint *)0x0) {
          return puVar6;
        }
        param_9 = (uint *)((uint)(CONCAT11(*(undefined1 *)(*(int *)(puVar3 + 0x40) + uVar9 * 2),
                                           *(undefined1 *)(*(int *)(puVar3 + 0x40) + 1 + uVar9 * 2))
                                 & *(ushort *)(puVar3 + 0x12)) + *(int *)(puVar3 + 0x38));
        if (puVar3[3] == '\0') {
          *local_8 = *param_9;
        }
        uVar8 = FUN_00471aa0((uint)puVar3,(int)param_9);
        param_1 = (uint *)FUN_00472980(puVar3,(uint)param_9);
        FUN_004770f0((int)puVar3,uVar9,uVar8 & 0xffff,(int *)&param_1);
        if (param_1 != (uint *)0x0) {
          return param_1;
        }
      }
      else if (((int)param_9 < 0) && (*(short *)(puVar3 + 0x10) != 0)) {
        *(short *)((int)puVar4 + *(short *)((int)puVar4 + 0x5e) * 2 + 0x60) = (short)(uVar9 + 1);
        uVar9 = uVar9 + 1 & 0xffff;
      }
      FUN_0047e6f0((uint)puVar3,uVar9,(undefined1 *)local_8,local_c,(undefined1 *)0x0,0,
                   (uint *)&param_1);
      *(undefined2 *)((int)puVar4 + 0x42) = 0;
      *(undefined1 *)((int)puVar4 + 0x5a) = 0;
      puVar6 = param_1;
      if ((param_1 == (uint *)0x0) && (puVar3[1] != '\0')) {
        puVar6 = (uint *)FUN_0046e520((int)puVar4);
        *(undefined1 *)(puVar4[*(short *)((int)puVar4 + 0x5e) + 0x22] + 1) = 0;
        *(undefined1 *)((int)puVar4 + 0x5b) = 0;
      }
    }
  }
  return puVar6;
}


/* FUN_004901e0 @ 004901e0  kind=gamemisc  attributed-by=none  size=1117 */

void __cdecl FUN_004901e0(undefined4 *param_1,int param_2,int param_3,int param_4,int *param_5)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  size_t _Size;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *local_ac;
  int local_a8;
  void *local_a4;
  uint local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  undefined4 *local_8c;
  undefined4 *local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined1 local_78;
  undefined2 local_77;
  int *local_74;
  void *local_70;
  undefined4 local_6c [25];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)param_1[1];
  local_74 = param_5;
  FUN_0048fbc0(param_1);
  iVar2 = *(int *)(*(int *)(*piVar1 + 0xb4) + 0xc);
  local_a8 = *piVar1;
  local_a0 = piVar1[0xb];
  local_9c = param_4;
  local_98 = 0;
  local_94 = 0;
  *local_74 = 0;
  local_ac = piVar1;
  if (local_a0 != 0) {
    _Size = (local_a0 >> 3) + 1;
    local_70 = (void *)FUN_004a0350(_Size);
    if (local_70 != (void *)0x0) {
      memset(local_70,0,_Size);
    }
    if (local_70 != (void *)0x0) {
      uVar6 = DAT_00582bb8 / (uint)piVar1[8] + 1;
      if (uVar6 <= local_a0) {
        pbVar4 = (byte *)((uVar6 >> 3) + (int)local_70);
        *pbVar4 = *pbVar4 | '\x01' << ((byte)uVar6 & 7);
      }
      local_90 = 0;
      local_84 = 0;
      local_80 = 100;
      local_7c = 20000;
      local_77 = 2;
      local_78 = 0;
      local_8c = local_6c;
      iVar5 = *(int *)(piVar1[3] + 0x38);
      local_a4 = local_70;
      local_88 = local_8c;
      FUN_00471d80((int *)&local_ac,1,
                   (undefined4 *)
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 0x20),
                                              *(undefined1 *)(iVar5 + 0x21)),
                                     *(undefined1 *)(iVar5 + 0x22)),*(undefined1 *)(iVar5 + 0x23)),
                   CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar5 + 0x24),
                                              *(undefined1 *)(iVar5 + 0x25)),
                                     *(undefined1 *)(iVar5 + 0x26)),*(undefined1 *)(iVar5 + 0x27)),
                   "Main freelist: ");
      iVar5 = 0;
      if (0 < param_3) {
        do {
          if (local_9c == 0) break;
          puVar3 = *(undefined4 **)(param_2 + iVar5 * 4);
          if (puVar3 != (undefined4 *)0x0) {
            if ((*(char *)((int)piVar1 + 0x11) != '\0') && (1 < (int)puVar3)) {
              FUN_00471f80(&local_ac,puVar3,1,0,(char *)0x0);
            }
            FUN_00472090((int *)&local_ac,*(uint *)(param_2 + iVar5 * 4),"List of tree roots: ",
                         (uint *)0x0,(uint *)0x0);
          }
          iVar5 = iVar5 + 1;
        } while (iVar5 < param_3);
      }
      uVar6 = 1;
      if (local_a0 != 0) {
        do {
          if (local_9c == 0) break;
          local_70 = (void *)(1 << ((byte)uVar6 & 7));
          if ((*(byte *)((uVar6 >> 3) + (int)local_a4) & (byte)local_70) == 0) {
            if (uVar6 < 2) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)piVar1[9] / 5 + 1;
              iVar5 = ((uVar6 - 2) / uVar7) * uVar7;
              uVar7 = iVar5 + 2;
              if (uVar7 == DAT_00582bb8 / (uint)piVar1[8] + 1) {
                uVar7 = iVar5 + 3;
              }
            }
            if ((uVar7 != uVar6) || (*(char *)((int)piVar1 + 0x11) == '\0')) {
              FUN_00471c20((int)&local_ac,(char *)0x0,(byte *)"Page %d is never used");
            }
          }
          if ((*(byte *)((uVar6 >> 3) + (int)local_a4) & (byte)local_70) != 0) {
            if (uVar6 < 2) {
              uVar7 = 0;
            }
            else {
              uVar7 = (uint)piVar1[9] / 5 + 1;
              iVar5 = ((uVar6 - 2) / uVar7) * uVar7;
              uVar7 = iVar5 + 2;
              if (uVar7 == DAT_00582bb8 / (uint)piVar1[8] + 1) {
                uVar7 = iVar5 + 3;
              }
            }
            if ((uVar7 == uVar6) && (*(char *)((int)piVar1 + 0x11) != '\0')) {
              FUN_00471c20((int)&local_ac,(char *)0x0,(byte *)"Pointer map page %d is referenced");
            }
          }
          uVar6 = uVar6 + 1;
        } while (uVar6 <= local_a0);
      }
      if (iVar2 != *(int *)(*(int *)(*piVar1 + 0xb4) + 0xc)) {
        FUN_00471c20((int)&local_ac,(char *)0x0,
                     (byte *)"Outstanding page count goes from %d to %d during this analysis");
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
      FUN_00466dd0((int)local_a4);
      if (local_94 == 0) {
        *local_74 = local_98;
        if (local_98 == 0) {
          if (local_88 != local_8c) {
            if ((char)local_77 == '\x01') {
              FUN_00494b00(local_90,local_88);
            }
            else {
              FUN_00466dd0((int)local_88);
            }
          }
          local_88 = (undefined4 *)0x0;
        }
        FUN_004aa8f0(&local_90);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
      if (local_88 != local_8c) {
        if ((char)local_77 == '\x01') {
          FUN_00494b00(local_90,local_88);
          *local_74 = local_98 + 1;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        FUN_00466dd0((int)local_88);
      }
      *local_74 = local_98 + 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    *local_74 = 1;
    local_a4 = (void *)0x0;
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
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00490640 @ 00490640  kind=gamemisc  attributed-by=none  size=106 */

int __cdecl FUN_00490640(int param_1,uint *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  if (*(char *)(param_1 + 0x5b) == '\x01') {
    if (*(short *)(param_1 + 0x42) == 0) {
      iVar2 = *(int *)(param_1 + 0x88 + *(short *)(param_1 + 0x5e) * 4);
      uVar3 = (uint)*(ushort *)(param_1 + 0x60 + *(short *)(param_1 + 0x5e) * 2);
      FUN_00471710(iVar2,(uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar2 + 0x40) + uVar3 * 2),
                                         *(undefined1 *)(*(int *)(iVar2 + 0x40) + 1 + uVar3 * 2)) &
                               *(ushort *)(iVar2 + 0x12)) + *(int *)(iVar2 + 0x38),
                   (uint *)(param_1 + 0x28));
    }
    uVar1 = *(ushort *)(param_1 + 0x3c);
    iVar2 = *(int *)(param_1 + 0x30);
    *param_2 = (uint)*(ushort *)(param_1 + 0x3e);
    return (uint)uVar1 + iVar2;
  }
  return 0;
}


/* FUN_004906b0 @ 004906b0  kind=gamemisc  attributed-by=none  size=62 */

undefined4 __cdecl FUN_004906b0(int param_1,undefined4 *param_2)

{
  if (*(char *)(param_1 + 0x5b) != '\x01') {
    *param_2 = 0;
    param_2[1] = 0;
    return 0;
  }
  FUN_0047d150(param_1);
  *param_2 = *(undefined4 *)(param_1 + 0x28);
  param_2[1] = *(undefined4 *)(param_1 + 0x2c);
  return 0;
}


/* FUN_004906f0 @ 004906f0  kind=gamemisc  attributed-by=none  size=89 */

int __cdecl FUN_004906f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if ((*(char *)((int)param_1 + 0x5b) == '\x01') && (*(char *)((int)param_1 + 0x59) != '\0')) {
    return 0;
  }
  iVar1 = FUN_00480c70(param_1);
  if (iVar1 == 0) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
      *param_2 = 1;
      return 0;
    }
    *param_2 = 0;
    iVar1 = FUN_00480be0((int)param_1);
    *(bool *)((int)param_1 + 0x59) = iVar1 == 0;
  }
  return iVar1;
}


/* FUN_00490750 @ 00490750  kind=gamemisc  attributed-by=none  size=45 */

void __cdecl FUN_00490750(int param_1)

{
  int *piVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 9) != '\0') {
    piVar1 = (int *)(param_1 + 0xc);
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x38);
      if (iVar2 != 0) {
        (*DAT_00582b20)(iVar2);
      }
      *(undefined1 *)(param_1 + 10) = 0;
    }
  }
  return;
}


/* FUN_00490780 @ 00490780  kind=gamemisc  attributed-by=none  size=81 */

void __cdecl FUN_00490780(int param_1)

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
            (*DAT_00582b20)(iVar3);
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


/* FUN_00490810 @ 00490810  kind=gamemisc  attributed-by=none  size=112 */

int __cdecl FUN_00490810(undefined8 *param_1,int param_2,char param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)((int)param_1 + 9) != '\0') {
    FUN_0048fbc0((undefined4 *)param_1);
    iVar3 = FUN_00487510((int)param_1,param_2,param_3 + 1U);
    if (iVar3 == 0) {
      iVar3 = FUN_0048b5a0(param_1,param_2,param_3 + 1U);
    }
    if (*(char *)((int)param_1 + 9) != '\0') {
      piVar1 = (int *)((int)param_1 + 0xc);
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        iVar2 = *(int *)(*(int *)((int)param_1 + 4) + 0x38);
        if (iVar2 != 0) {
          (*DAT_00582b20)(iVar2);
        }
        *(undefined1 *)((int)param_1 + 10) = 0;
      }
    }
    return iVar3;
  }
  return 0;
}


/* FUN_00490880 @ 00490880  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __cdecl FUN_00490880(undefined4 *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  FUN_0048fbc0(param_1);
  iVar2 = *(int *)param_1[1];
  if (0 < param_2) {
    *(int *)(iVar2 + 0x84) = param_2;
  }
  uVar3 = *(undefined4 *)(iVar2 + 0x84);
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


/* FUN_004908e0 @ 004908e0  kind=gamemisc  attributed-by=none  size=941 */

uint __cdecl
FUN_004908e0(int *param_1,int *param_2,uint param_3,int param_4,int param_5,uint *param_6)

{
  undefined1 uVar1;
  size_t sVar2;
  undefined3 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  uint local_24;
  int local_20;
  uint local_1c;
  int local_18;
  int local_14;
  byte *local_10;
  int local_c;
  int local_8;
  
  if (((*(char *)((int)param_1 + 0x5b) == '\x01') && (*(char *)((int)param_1 + 0x5a) != '\0')) &&
     (*(char *)(param_1[0x22] + 2) != '\0')) {
    iVar5 = param_1[0xb];
    if ((param_1[10] == param_3) && (iVar5 == param_4)) {
      *param_6 = 0;
      return 0;
    }
    if (((*(char *)((int)param_1 + 0x59) != '\0') && (iVar5 <= param_4)) &&
       ((iVar5 < param_4 || ((uint)param_1[10] < param_3)))) goto LAB_00490938;
  }
  uVar4 = FUN_00480c70(param_1);
  if (uVar4 == 0) {
    if (*(char *)((int)param_1 + 0x5b) == '\0') {
LAB_00490938:
      *param_6 = 0xffffffff;
      return 0;
    }
    do {
      iVar5 = (int)*(short *)((int)param_1 + 0x5e);
      local_18 = 0;
      local_c = param_1[iVar5 + 0x22];
      local_14 = *(ushort *)(local_c + 0x10) - 1;
      if (param_5 == 0) {
        local_8 = local_14 / 2;
        *(short *)((int)param_1 + iVar5 * 2 + 0x60) = (short)local_8;
      }
      else {
        *(short *)((int)param_1 + iVar5 * 2 + 0x60) = (short)local_14;
        local_8 = local_14;
      }
      while( true ) {
        *(undefined2 *)((int)param_1 + 0x42) = 0;
        pbVar8 = (byte *)((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_c + 0x40) + local_8 * 2),
                                          *(undefined1 *)
                                           (*(int *)(local_c + 0x40) + 1 + local_8 * 2)) &
                                *(ushort *)(local_c + 0x12)) + (uint)*(byte *)(local_c + 6) +
                         *(int *)(local_c + 0x38));
        if (*(char *)(local_c + 2) == '\0') {
          uVar4 = (uint)*pbVar8;
          if (*(byte *)(local_c + 7) < uVar4) {
            if (((char)pbVar8[1] < '\0') ||
               (uVar4 = (uVar4 & 0x7f) * 0x80 + (uint)pbVar8[1], *(ushort *)(local_c + 8) < uVar4))
            {
              FUN_00471710(local_c,(int)pbVar8 - (uint)*(byte *)(local_c + 6),(uint *)(param_1 + 10)
                          );
              sVar2 = param_1[10];
              if (0x7ffffefe < sVar2 - 1) {
                return 7;
              }
              if (DAT_00582ac8 == 0) {
                local_10 = (byte *)(*DAT_00582ae8)(sVar2);
              }
              else {
                if (DAT_00583f40 != 0) {
                  (*DAT_00582b18)(DAT_00583f40);
                }
                FUN_00480650(sVar2,(int *)&local_10);
                if (DAT_00583f40 != 0) {
                  (*DAT_00582b20)(DAT_00583f40);
                }
              }
              pbVar8 = local_10;
              if (local_10 == (byte *)0x0) {
                return 7;
              }
              uVar4 = FUN_0046b2f0((int)param_1,0,sVar2,local_10,0);
              if (uVar4 != 0) {
                FUN_00466dd0((int)pbVar8);
                return uVar4;
              }
              uVar4 = FUN_004b83b0(sVar2,pbVar8,param_2);
              FUN_00466dd0((int)pbVar8);
            }
            else {
              uVar4 = FUN_004b83b0(uVar4,pbVar8 + 2,param_2);
            }
          }
          else {
            uVar4 = FUN_004b83b0(uVar4,pbVar8 + 1,param_2);
          }
        }
        else {
          if (*(char *)(local_c + 4) != '\0') {
            if (*pbVar8 < 0x80) {
              uVar4 = 1;
            }
            else {
              uVar4 = FUN_0049d440(pbVar8,&local_1c);
              uVar4 = uVar4 & 0xff;
            }
            pbVar8 = pbVar8 + uVar4;
          }
          FUN_0049d270(pbVar8,&local_24);
          if ((local_24 == param_3) && (local_20 == param_4)) {
            uVar4 = 0;
            *(undefined1 *)((int)param_1 + 0x5a) = 1;
            param_1[10] = local_24;
            param_1[0xb] = local_20;
          }
          else if ((param_4 < local_20) || ((param_4 <= local_20 && (param_3 <= local_24)))) {
            uVar4 = 1;
            *(undefined1 *)((int)param_1 + 0x5a) = 1;
            param_1[10] = local_24;
            param_1[0xb] = local_20;
          }
          else {
            uVar4 = 0xffffffff;
            *(undefined1 *)((int)param_1 + 0x5a) = 1;
            param_1[10] = local_24;
            param_1[0xb] = local_20;
          }
        }
        if (uVar4 == 0) break;
        if ((int)uVar4 < 0) {
          local_18 = local_8 + 1;
        }
        else {
          local_14 = local_8 + -1;
        }
        iVar5 = local_18;
        if (local_14 < local_18) goto LAB_00490bae;
        local_8 = (local_14 + local_18) / 2;
        *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60) = (short)local_8;
      }
      if ((*(char *)(local_c + 2) == '\0') || (iVar5 = local_8, *(char *)(local_c + 3) != '\0')) {
        *param_6 = 0;
        return 0;
      }
LAB_00490bae:
      if (*(char *)(local_c + 3) != '\0') {
LAB_00490c49:
        *param_6 = uVar4;
        return 0;
      }
      if (iVar5 < (int)(uint)*(ushort *)(local_c + 0x10)) {
        puVar7 = (undefined1 *)
                 ((uint)(CONCAT11(*(undefined1 *)(*(int *)(local_c + 0x40) + iVar5 * 2),
                                  *(undefined1 *)(*(int *)(local_c + 0x40) + 1 + iVar5 * 2)) &
                        *(ushort *)(local_c + 0x12)) + *(int *)(local_c + 0x38));
        uVar3 = CONCAT21(CONCAT11(*puVar7,puVar7[1]),puVar7[2]);
        uVar1 = puVar7[3];
      }
      else {
        iVar6 = (uint)*(byte *)(local_c + 5) + *(int *)(local_c + 0x38);
        uVar3 = CONCAT21(CONCAT11(*(undefined1 *)(iVar6 + 8),*(undefined1 *)(iVar6 + 9)),
                         *(undefined1 *)(iVar6 + 10));
        uVar1 = *(undefined1 *)(iVar6 + 0xb);
      }
      if (CONCAT31(uVar3,uVar1) == 0) goto LAB_00490c49;
      *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60) = (short)iVar5;
      *(undefined2 *)((int)param_1 + 0x42) = 0;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
      uVar4 = FUN_00480a70((int)param_1,CONCAT31(uVar3,uVar1));
    } while (uVar4 == 0);
  }
  return uVar4;
}


/* FUN_00490c90 @ 00490c90  kind=gamemisc  attributed-by=none  size=360 */

int __cdecl FUN_00490c90(int *param_1,undefined4 *param_2)

{
  short *psVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  short sVar6;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    iVar5 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    iVar5 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    iVar5 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (iVar5 != 0) {
      return iVar5;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    return iVar5;
  }
  if (*(char *)((int)param_1 + 0x5b) == '\0') {
    *param_2 = 1;
  }
  else {
    iVar5 = param_1[0x15];
    param_1[0x15] = 0;
    if (0 < iVar5) {
      *param_2 = 0;
      return 0;
    }
    iVar3 = (int)*(short *)((int)param_1 + 0x5e);
    iVar5 = param_1[iVar3 + 0x22];
    psVar1 = (short *)((int)param_1 + iVar3 * 2 + 0x60);
    *psVar1 = *psVar1 + 1;
    uVar2 = *(ushort *)((int)param_1 + iVar3 * 2 + 0x60);
    *(undefined2 *)((int)param_1 + 0x42) = 0;
    *(undefined1 *)((int)param_1 + 0x5a) = 0;
    if (uVar2 < *(ushort *)(iVar5 + 0x10)) {
      *param_2 = 0;
      if (*(char *)(iVar5 + 3) == '\0') {
        iVar5 = FUN_00480b10((int)param_1);
        return iVar5;
      }
    }
    else {
      if (*(char *)(iVar5 + 3) == '\0') {
        uVar4 = FUN_0049c920((undefined1 *)(*(int *)(iVar5 + 0x38) + 8 + (uint)*(byte *)(iVar5 + 5))
                            );
        iVar5 = FUN_00480a70((int)param_1,uVar4);
        if (iVar5 != 0) {
          return iVar5;
        }
        iVar5 = FUN_00480b10((int)param_1);
        *param_2 = 0;
        return iVar5;
      }
      sVar6 = *(short *)((int)param_1 + 0x5e);
      do {
        if (sVar6 == 0) {
          *param_2 = 1;
          *(undefined1 *)((int)param_1 + 0x5b) = 0;
          return 0;
        }
        FUN_00480b90((int)param_1);
        sVar6 = *(short *)((int)param_1 + 0x5e);
        iVar5 = param_1[sVar6 + 0x22];
      } while (*(ushort *)(iVar5 + 0x10) <= *(ushort *)((int)param_1 + sVar6 * 2 + 0x60));
      *param_2 = 0;
      if (*(char *)(iVar5 + 2) != '\0') {
        iVar5 = FUN_00490c90(param_1,param_2);
        return iVar5;
      }
    }
  }
  return 0;
}


/* FUN_00490e00 @ 00490e00  kind=gamemisc  attributed-by=none  size=1602 */

void __cdecl
FUN_00490e00(undefined *param_1,byte *param_2,int param_3,undefined4 *param_4,byte param_5,
            uint param_6)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  int *_Dst;
  byte *pbVar6;
  int *piVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  char *pcVar11;
  byte *pbVar12;
  void *_Src;
  bool bVar13;
  bool bVar14;
  int local_94;
  int local_80;
  int local_70;
  undefined1 local_6c [16];
  ushort local_5c;
  byte local_58;
  undefined1 local_38 [12];
  undefined1 local_2c [36];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  bVar14 = false;
  local_80 = 0;
  local_70 = 0;
  if ((param_2 == (byte *)0x0) || (*param_2 == 0)) {
    bVar14 = true;
  }
  if (param_2 == (byte *)0x0) {
LAB_00490e7d:
    if (((bVar14) && (*(char *)(param_3 + 0x37) == '\x02')) || ((char)param_6 < '\0'))
    goto LAB_00490e98;
    bVar13 = false;
  }
  else {
    pcVar11 = ":memory:";
    pbVar4 = param_2;
    do {
      bVar2 = *pbVar4;
      bVar13 = bVar2 < (byte)*pcVar11;
      if (bVar2 != *pcVar11) {
LAB_00490e71:
        uVar5 = -(uint)bVar13 | 1;
        goto LAB_00490e76;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar4[1];
      bVar13 = bVar2 < (byte)pcVar11[1];
      if (bVar2 != pcVar11[1]) goto LAB_00490e71;
      pbVar4 = pbVar4 + 2;
      pcVar11 = pcVar11 + 2;
    } while (bVar2 != 0);
    uVar5 = 0;
LAB_00490e76:
    if (uVar5 != 0) goto LAB_00490e7d;
LAB_00490e98:
    bVar13 = true;
    param_5 = param_5 | 2;
  }
  if (((param_6 & 0x100) != 0) && ((bVar13 || (bVar14)))) {
    param_6 = param_6 & 0xfffffeff | 0x200;
  }
  _Dst = (int *)FUN_004a0350(0x2c);
  if (_Dst == (int *)0x0) {
LAB_00490f4c:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  memset(_Dst,0,0x2c);
  *(undefined1 *)(_Dst + 2) = 0;
  *_Dst = param_3;
  _Dst[7] = (int)_Dst;
  _Dst[8] = 1;
  if (((bVar14) || ((bVar13 && ((param_6 & 0x40) == 0)))) || ((param_6 & 0x20000) == 0)) {
LAB_004910e5:
    piVar7 = (int *)FUN_004a0350(0x54);
    if ((((piVar7 != (int *)0x0) && (memset(piVar7,0,0x54), piVar7 != (int *)0x0)) &&
        (iVar8 = FUN_004a1ea0(param_1,piVar7,(char *)param_2,0x4c,param_5,param_6,0x483ba0),
        iVar8 == 0)) && (iVar8 = FUN_004a24c0(*piVar7,100,local_6c), iVar8 == 0)) {
      *(byte *)(piVar7 + 4) = param_5;
      piVar7[1] = param_3;
      FUN_004a26b0(*piVar7,FUN_00471550,piVar7);
      _Dst[1] = (int)piVar7;
      piVar7[2] = 0;
      piVar7[3] = 0;
      if (*(char *)(*piVar7 + 0xd) != '\0') {
        *(ushort *)((int)piVar7 + 0x16) = *(ushort *)((int)piVar7 + 0x16) | 1;
      }
      uVar5 = (uint)local_5c * 0x100;
      puVar1 = (uint *)(piVar7 + 8);
      *puVar1 = uVar5;
      if (((uVar5 < 0x200) || (0x10000 < uVar5)) || ((uVar5 & uVar5 - 1) != 0)) {
        *puVar1 = 0;
        if ((param_2 != (byte *)0x0) && (!bVar13)) {
          *(undefined2 *)((int)piVar7 + 0x11) = 0;
        }
        local_58 = 0;
      }
      else {
        *(ushort *)((int)piVar7 + 0x16) = *(ushort *)((int)piVar7 + 0x16) | 2;
        iVar8 = FUN_0049c920(local_38);
        *(bool *)((int)piVar7 + 0x11) = iVar8 != 0;
        iVar8 = FUN_0049c920(local_2c);
        *(bool *)((int)piVar7 + 0x12) = iVar8 != 0;
      }
      iVar8 = FUN_004a27d0(*piVar7,puVar1,(uint)local_58);
      if (iVar8 == 0) {
        piVar7[9] = *puVar1 - (uint)local_58;
        local_70 = 0;
        if (*(char *)((int)_Dst + 9) != '\0') {
          piVar7[0x10] = 1;
          if (DAT_00582acc == 0) {
            iVar8 = 0;
          }
          else {
            iVar8 = (*DAT_00582b10)(2);
            if (DAT_00582acc != 0) {
              iVar10 = (*DAT_00582b10)(0);
              piVar7[0xe] = iVar10;
              if (iVar10 == 0) {
                *(undefined1 *)(param_3 + 0x38) = 0;
                goto LAB_004913f8;
              }
            }
          }
          FUN_004650e0(iVar8);
          piVar7[0x11] = (int)DAT_00583e80;
          DAT_00583e80 = piVar7;
          FUN_00465120(iVar8);
          goto LAB_004912bc;
        }
        goto LAB_0049138b;
      }
    }
  }
  else {
    iVar8 = *(int *)(param_1 + 8);
    pbVar4 = (byte *)FUN_004a0350(iVar8 + 1);
    *(undefined1 *)((int)_Dst + 9) = 1;
    if (pbVar4 == (byte *)0x0) {
      FUN_00466dd0((int)_Dst);
      goto LAB_00490f4c;
    }
    if (bVar13) {
      uVar5 = FUN_004aa9b0((char *)param_2);
      memcpy(pbVar4,_Src,uVar5 + 1);
    }
    else {
      *pbVar4 = 0;
      local_70 = (**(code **)(param_1 + 0x24))(param_1,param_2,iVar8 + 1,pbVar4);
      if (local_70 != 0) {
        FUN_00466dd0((int)pbVar4);
        FUN_00466dd0((int)_Dst);
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    if (DAT_00582acc == 0) {
      local_80 = 0;
      local_94 = 0;
    }
    else {
      local_80 = (*DAT_00582b10)(4);
      if (local_80 != 0) {
        (*DAT_00582b18)(local_80);
      }
      if (DAT_00582acc == 0) {
        local_94 = 0;
      }
      else {
        local_94 = (*DAT_00582b10)(2);
        if (local_94 != 0) {
          (*DAT_00582b18)(local_94);
        }
      }
    }
    piVar7 = DAT_00583e80;
    if (DAT_00583e80 != (int *)0x0) {
LAB_00491040:
      pbVar12 = (byte *)((int *)*piVar7)[0x24];
      pbVar6 = pbVar4;
      do {
        bVar2 = *pbVar6;
        bVar14 = bVar2 < *pbVar12;
        if (bVar2 != *pbVar12) {
LAB_00491070:
          uVar5 = -(uint)bVar14 | 1;
          goto LAB_00491075;
        }
        if (bVar2 == 0) break;
        bVar2 = pbVar6[1];
        bVar14 = bVar2 < pbVar12[1];
        if (bVar2 != pbVar12[1]) goto LAB_00491070;
        pbVar6 = pbVar6 + 2;
        pbVar12 = pbVar12 + 2;
      } while (bVar2 != 0);
      uVar5 = 0;
LAB_00491075:
      if ((uVar5 != 0) || (*(undefined **)*piVar7 != param_1)) goto LAB_00491080;
      iVar8 = *(int *)(param_3 + 0x14) + -1;
      if (-1 < iVar8) {
        piVar9 = (int *)(iVar8 * 0x10 + *(int *)(param_3 + 0x10) + 4);
        do {
          if ((*piVar9 != 0) && (*(int **)(*piVar9 + 4) == piVar7)) {
            if (local_94 != 0) {
              (*DAT_00582b20)(local_94);
            }
            if (local_80 != 0) {
              (*DAT_00582b20)(local_80);
            }
            FUN_00466dd0((int)pbVar4);
            FUN_00466dd0((int)_Dst);
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          piVar9 = piVar9 + -4;
          iVar8 = iVar8 + -1;
        } while (-1 < iVar8);
      }
      _Dst[1] = (int)piVar7;
      piVar7[0x10] = piVar7[0x10] + 1;
    }
LAB_004910bd:
    if (local_94 != 0) {
      (*DAT_00582b20)(local_94);
    }
    FUN_00466dd0((int)pbVar4);
    if (piVar7 == (int *)0x0) goto LAB_004910e5;
LAB_004912bc:
    if (*(char *)((int)_Dst + 9) != '\0') {
      iVar8 = 0;
      if (0 < *(int *)(param_3 + 0x14)) {
        piVar9 = (int *)(*(int *)(param_3 + 0x10) + 4);
LAB_004912e0:
        iVar10 = *piVar9;
        if ((iVar10 == 0) || (*(char *)(iVar10 + 9) == '\0')) goto LAB_004912ec;
        iVar8 = *(int *)(iVar10 + 0x18);
        while (iVar8 != 0) {
          iVar10 = *(int *)(iVar10 + 0x18);
          iVar8 = *(int *)(iVar10 + 0x18);
        }
        if ((uint)_Dst[1] < *(uint *)(iVar10 + 4)) {
          _Dst[5] = iVar10;
          _Dst[6] = 0;
          *(int **)(iVar10 + 0x18) = _Dst;
        }
        else {
          iVar8 = *(int *)(iVar10 + 0x14);
          while ((iVar8 != 0 &&
                 (iVar3 = *(int *)(iVar10 + 0x14), *(uint *)(iVar3 + 4) < (uint)_Dst[1]))) {
            iVar8 = *(int *)(iVar3 + 0x14);
            iVar10 = iVar3;
          }
          iVar8 = *(int *)(iVar10 + 0x14);
          _Dst[5] = iVar8;
          _Dst[6] = iVar10;
          if (iVar8 != 0) {
            *(int **)(iVar8 + 0x18) = _Dst;
          }
          *(int **)(iVar10 + 0x14) = _Dst;
        }
      }
    }
LAB_0049138b:
    *param_4 = _Dst;
    if (local_70 == 0) {
      iVar8 = _Dst[1];
      FUN_0048fbc0(_Dst);
      if (*(char *)((int)_Dst + 9) != '\0') {
        piVar7 = _Dst + 3;
        *piVar7 = *piVar7 + -1;
        if (*piVar7 == 0) {
          if (*(int *)(_Dst[1] + 0x38) != 0) {
            (*DAT_00582b20)(*(int *)(_Dst[1] + 0x38));
          }
          *(undefined1 *)((int)_Dst + 10) = 0;
        }
      }
      if (*(int *)(iVar8 + 0x30) == 0) {
        iVar8 = *(int *)(*(int *)_Dst[1] + 0xb4);
        *(undefined4 *)(iVar8 + 0x10) = 2000;
        iVar8 = *(int *)(iVar8 + 0x28);
        if (iVar8 != 0) {
          (*DAT_00582b40)(iVar8,2000);
        }
      }
      goto LAB_00491426;
    }
  }
LAB_004913f8:
  if ((piVar7 != (int *)0x0) && ((uint *)*piVar7 != (uint *)0x0)) {
    FUN_004a17a0((uint *)*piVar7);
  }
  FUN_00466dd0((int)piVar7);
  FUN_00466dd0((int)_Dst);
  *param_4 = 0;
LAB_00491426:
  if (local_80 != 0) {
    (*DAT_00582b20)(local_80);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_00491080:
  piVar7 = (int *)piVar7[0x11];
  if (piVar7 == (int *)0x0) goto LAB_004910bd;
  goto LAB_00491040;
LAB_004912ec:
  iVar8 = iVar8 + 1;
  piVar9 = piVar9 + 4;
  if (*(int *)(param_3 + 0x14) <= iVar8) goto LAB_0049138b;
  goto LAB_004912e0;
}


/* FUN_00491450 @ 00491450  kind=gamemisc  attributed-by=none  size=454 */

int __cdecl FUN_00491450(int *param_1,undefined4 *param_2)

{
  short *psVar1;
  short sVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined1 *puVar8;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    iVar6 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    iVar6 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    iVar6 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (iVar6 != 0) {
      return iVar6;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    iVar6 = 0;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  *(undefined1 *)((int)param_1 + 0x59) = 0;
  if (*(char *)((int)param_1 + 0x5b) == '\0') {
    *param_2 = 1;
    return 0;
  }
  iVar6 = param_1[0x15];
  param_1[0x15] = 0;
  if (-1 < iVar6) {
    iVar5 = (int)*(short *)((int)param_1 + 0x5e);
    iVar6 = param_1[iVar5 + 0x22];
    if (*(char *)(iVar6 + 3) == '\0') {
      uVar7 = (uint)*(ushort *)((int)param_1 + iVar5 * 2 + 0x60);
      puVar8 = (undefined1 *)
               ((uint)(CONCAT11(*(undefined1 *)(*(int *)(iVar6 + 0x40) + uVar7 * 2),
                                *(undefined1 *)(*(int *)(iVar6 + 0x40) + 1 + uVar7 * 2)) &
                      *(ushort *)(iVar6 + 0x12)) + *(int *)(iVar6 + 0x38));
      iVar6 = FUN_00480a70((int)param_1,
                           CONCAT31(CONCAT21(CONCAT11(*puVar8,puVar8[1]),puVar8[2]),puVar8[3]));
      if (iVar6 == 0) {
        iVar6 = FUN_00480be0((int)param_1);
        *param_2 = 0;
        return iVar6;
      }
    }
    else {
      sVar2 = *(short *)((int)param_1 + iVar5 * 2 + 0x60);
      while (sVar2 == 0) {
        if (*(short *)((int)param_1 + 0x5e) == 0) {
          *(undefined1 *)((int)param_1 + 0x5b) = 0;
          *param_2 = 1;
          return 0;
        }
        if ((param_1[*(short *)((int)param_1 + 0x5e) + 0x22] != 0) &&
           (puVar3 = *(undefined4 **)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 0x44),
           puVar3 != (undefined4 *)0x0)) {
          puVar4 = (uint *)puVar3[4];
          FUN_004a3a80(puVar3);
          if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
            FUN_00484370(puVar4);
          }
        }
        *(short *)((int)param_1 + 0x5e) = *(short *)((int)param_1 + 0x5e) + -1;
        *(undefined2 *)((int)param_1 + 0x42) = 0;
        *(undefined1 *)((int)param_1 + 0x5a) = 0;
        sVar2 = *(short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60);
      }
      *(undefined2 *)((int)param_1 + 0x42) = 0;
      *(undefined1 *)((int)param_1 + 0x5a) = 0;
      psVar1 = (short *)((int)param_1 + *(short *)((int)param_1 + 0x5e) * 2 + 0x60);
      *psVar1 = *psVar1 + -1;
      if ((*(char *)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 2) != '\0') &&
         (*(char *)(param_1[*(short *)((int)param_1 + 0x5e) + 0x22] + 3) == '\0')) {
        iVar6 = FUN_00491450(param_1,param_2);
        *param_2 = 0;
        return iVar6;
      }
      iVar6 = 0;
      *param_2 = 0;
    }
    return iVar6;
  }
  *param_2 = 0;
  return 0;
}


/* FUN_00491620 @ 00491620  kind=gamemisc  attributed-by=none  size=140 */

uint __cdecl FUN_00491620(int *param_1,uint param_2,size_t param_3,void *param_4)

{
  uint uVar1;
  
  if (*(byte *)((int)param_1 + 0x5b) < 2) {
    uVar1 = 0;
  }
  else if (*(byte *)((int)param_1 + 0x5b) == 3) {
    uVar1 = param_1[0x15];
  }
  else {
    *(undefined1 *)((int)param_1 + 0x5b) = 0;
    uVar1 = FUN_004715a0(param_1,(byte *)param_1[0x14],param_1[0x12],param_1[0x13],0,
                         (uint *)(param_1 + 0x15));
    if (uVar1 != 0) {
      return uVar1;
    }
    FUN_00466dd0(param_1[0x14]);
    param_1[0x14] = 0;
    uVar1 = 0;
  }
  if (uVar1 != 0) {
    return uVar1;
  }
  if (*(char *)((int)param_1 + 0x5b) != '\x01') {
    return 4;
  }
  if ((char)param_1[0x16] != '\0') {
    uVar1 = FUN_0046b2f0((int)param_1,param_2,param_3,param_4,1);
    return uVar1;
  }
  return 8;
}


/* FUN_00491910 @ 00491910  kind=gamemisc  attributed-by=none  size=170 */

uint __cdecl FUN_00491910(undefined4 *param_1,int param_2,int param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  
  if ((param_1 != (undefined4 *)0x0) && (*(char *)(param_1 + 2) == '\x02')) {
    puVar2 = (undefined4 *)param_1[1];
    FUN_0048fbc0(param_1);
    uVar4 = FUN_004a25c0((undefined4 *)*puVar2,param_2,param_3);
    if (uVar4 == 0) {
      if ((param_3 < 0) && ((*(byte *)((int)puVar2 + 0x16) & 8) != 0)) {
        puVar2[0xb] = 0;
      }
      uVar4 = FUN_00483380((int)puVar2);
      iVar3 = *(int *)(puVar2[3] + 0x38);
      puVar2[0xb] = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(iVar3 + 0x1c),
                                               *(undefined1 *)(iVar3 + 0x1d)),
                                      *(undefined1 *)(iVar3 + 0x1e)),*(undefined1 *)(iVar3 + 0x1f));
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
    return uVar4;
  }
  return 0;
}


/* FUN_004919c0 @ 004919c0  kind=gamemisc  attributed-by=none  size=113 */

undefined4 __cdecl FUN_004919c0(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  FUN_0048fbc0(param_1);
  iVar1 = param_1[1];
  if (*(char *)((int)param_1 + 9) != '\0') {
    if ((*(undefined4 **)(iVar1 + 0x4c) != param_1) && ((*(byte *)(iVar1 + 0x16) & 0x20) != 0)) {
LAB_004919e6:
      uVar3 = 0x106;
      goto LAB_00491a0d;
    }
    for (piVar2 = *(int **)(iVar1 + 0x48); piVar2 != (int *)0x0; piVar2 = (int *)piVar2[3]) {
      if ((((undefined4 *)*piVar2 != param_1) && (piVar2[1] == 1)) && ((char)piVar2[2] != '\x01'))
      goto LAB_004919e6;
    }
  }
  uVar3 = 0;
LAB_00491a0d:
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar2 = param_1 + 3;
    *piVar2 = *piVar2 + -1;
    if (*piVar2 == 0) {
      if (*(int *)(iVar1 + 0x38) != 0) {
        (*DAT_00582b20)(*(int *)(iVar1 + 0x38));
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar3;
}


/* FUN_00491a40 @ 00491a40  kind=gamemisc  attributed-by=none  size=108 */

ushort __cdecl FUN_00491a40(undefined4 *param_1,int param_2)

{
  int *piVar1;
  ushort uVar2;
  int iVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  FUN_0048fbc0(param_1);
  if ((-1 < param_2) &&
     (*(ushort *)(param_1[1] + 0x16) = *(ushort *)(param_1[1] + 0x16) & 0xfffb, param_2 != 0)) {
    *(ushort *)(param_1[1] + 0x16) = *(ushort *)(param_1[1] + 0x16) | 4;
  }
  uVar2 = *(ushort *)(param_1[1] + 0x16);
  if (*(char *)((int)param_1 + 9) != '\0') {
    piVar1 = param_1 + 3;
    *piVar1 = *piVar1 + -1;
    if (*piVar1 == 0) {
      iVar3 = *(int *)(param_1[1] + 0x38);
      if (iVar3 != 0) {
        (*DAT_00582b20)(iVar3);
      }
      *(undefined1 *)((int)param_1 + 10) = 0;
    }
  }
  return uVar2 >> 2 & 1;
}


/* FUN_00491ab0 @ 00491ab0  kind=gamemisc  attributed-by=none  size=113 */

undefined4 __cdecl FUN_00491ab0(undefined4 *param_1,char param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1[1];
  uVar3 = 0;
  FUN_0048fbc0(param_1);
  if (((*(byte *)(iVar2 + 0x16) & 2) == 0) || ((param_2 != '\0') == (bool)*(char *)(iVar2 + 0x11)))
  {
    *(bool *)(iVar2 + 0x11) = param_2 != '\0';
    *(bool *)(iVar2 + 0x12) = param_2 == '\x02';
  }
  else {
    uVar3 = 8;
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


/* FUN_00491b30 @ 00491b30  kind=gamemisc  attributed-by=none  size=144 */

undefined4 __cdecl FUN_00491b30(undefined4 *param_1,uint param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  iVar2 = *(int *)(*piVar1 + 0xb4);
  iVar3 = *(int *)(iVar2 + 0x28);
  *(uint *)(iVar2 + 0x10) = param_2;
  if (iVar3 != 0) {
    if ((int)param_2 < 0) {
      uVar4 = *(int *)(iVar2 + 0x18) + *(int *)(iVar2 + 0x14);
      lVar5 = __allmul(param_2,(int)param_2 >> 0x1f,0xfffffc00,-1);
      uVar6 = __alldiv((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),uVar4,(int)uVar4 >> 0x1f);
      param_2 = (uint)uVar6;
    }
    (*DAT_00582b40)(iVar3,param_2);
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
  return 0;
}


/* FUN_00491bc0 @ 00491bc0  kind=gamemisc  attributed-by=none  size=49 */

void __cdecl FUN_00491bc0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  for (iVar1 = *(int *)(*(int *)(param_1 + 4) + 8); iVar1 != 0; iVar1 = *(int *)(iVar1 + 8)) {
    if (*(int *)(iVar1 + 0x18) == *(int *)(param_1 + 0x18)) {
      *(undefined4 *)(iVar1 + 0x20) = param_2;
      *(undefined4 *)(iVar1 + 0x24) = param_3;
    }
  }
  return;
}


/* FUN_00491c00 @ 00491c00  kind=gamemisc  attributed-by=none  size=217 */

int __cdecl FUN_00491c00(undefined4 *param_1,uint param_2,uint param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  if ((*(byte *)((int)piVar1 + 0x16) & 2) != 0) {
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
    return 8;
  }
  if ((int)param_3 < 0) {
    param_3 = piVar1[8] - piVar1[9];
  }
  if ((param_2 - 0x200 < 0xfe01) && ((param_2 & param_2 - 1) == 0)) {
    piVar1[8] = param_2;
    FUN_00486af0((undefined4 *)piVar1[0x14]);
    piVar1[0x14] = 0;
  }
  iVar2 = FUN_004a27d0(*piVar1,(uint *)(piVar1 + 8),param_3);
  piVar1[9] = piVar1[8] - (param_3 & 0xffff);
  if (param_4 != 0) {
    *(ushort *)((int)piVar1 + 0x16) = *(ushort *)((int)piVar1 + 0x16) | 2;
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
  return iVar2;
}


/* FUN_00491ce0 @ 00491ce0  kind=gamemisc  attributed-by=none  size=77 */

undefined4 __cdecl FUN_00491ce0(undefined4 *param_1,int param_2,int param_3,int param_4)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[1];
  FUN_0048fbc0(param_1);
  FUN_004a2900(*piVar1,param_2,param_3,param_4);
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


/* FUN_00491d30 @ 00491d30  kind=gamemisc  attributed-by=none  size=475 */

uint __cdecl FUN_00491d30(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint *puVar4;
  code *pcVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  
  iVar1 = param_1[1];
  *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xffef;
  if (param_2 == 1) {
    *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) | 0x10;
  }
  piVar2 = (int *)param_1[1];
  uVar9 = 0;
  FUN_0048fbc0(param_1);
  if (((char)param_1[2] != '\x02') && ((char)param_1[2] != '\x01')) {
    if (((*(byte *)((int)piVar2 + 0x16) & 0x40) == 0) || (*(int *)piVar2[0x13] == 0)) {
      uVar9 = FUN_00487510((int)param_1,1,'\x01');
      if (uVar9 == 0) {
        *(ushort *)((int)piVar2 + 0x16) = *(ushort *)((int)piVar2 + 0x16) & 0xfff7;
        if (piVar2[0xb] == 0) {
          *(ushort *)((int)piVar2 + 0x16) = *(ushort *)((int)piVar2 + 0x16) | 8;
        }
LAB_00491dc0:
        if (piVar2[3] == 0) goto code_r0x00491dc6;
        if (uVar9 != 0) goto LAB_00491ddb;
        goto LAB_00491e17;
      }
    }
    else {
      uVar9 = 0x106;
    }
  }
LAB_00491e88:
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
  if (uVar9 == 0) {
    iVar6 = *(int *)(*(int *)(iVar1 + 0xc) + 0x38);
    cVar7 = (char)param_2;
    if ((((*(char *)(iVar6 + 0x12) != cVar7) || (*(char *)(iVar6 + 0x13) != cVar7)) &&
        (uVar9 = FUN_0048ed50(param_1,2), uVar9 == 0)) &&
       (uVar9 = FUN_004a2c80(*(undefined4 **)(*(int *)(iVar1 + 0xc) + 0x44)), uVar9 == 0)) {
      *(char *)(iVar6 + 0x12) = cVar7;
      *(char *)(iVar6 + 0x13) = cVar7;
    }
  }
  *(ushort *)(iVar1 + 0x16) = *(ushort *)(iVar1 + 0x16) & 0xffef;
  return uVar9;
code_r0x00491dc6:
  uVar9 = FUN_0047fc00(piVar2);
  if (uVar9 != 0) {
LAB_00491ddb:
    if ((*(char *)((int)piVar2 + 0x13) == '\0') && (piVar2[3] != 0)) {
      puVar3 = *(undefined4 **)(piVar2[3] + 0x44);
      if (puVar3 != (undefined4 *)0x0) {
        puVar4 = (uint *)puVar3[4];
        FUN_004a3a80(puVar3);
        if (*(int *)(puVar4[0x2d] + 0xc) == 0) {
          FUN_00484370(puVar4);
        }
      }
      piVar2[3] = 0;
    }
LAB_00491e17:
    if (((char)uVar9 != '\x05') || (*(char *)((int)piVar2 + 0x13) != '\0')) goto LAB_00491e56;
    iVar6 = piVar2[1];
    if (((undefined4 *)(iVar6 + 0x1ac) == (undefined4 *)0x0) ||
       ((pcVar5 = *(code **)(iVar6 + 0x1ac), pcVar5 == (code *)0x0 || (*(int *)(iVar6 + 0x1b4) < 0))
       )) goto LAB_00491e56;
    iVar8 = (*pcVar5)(*(undefined4 *)(iVar6 + 0x1b0),*(int *)(iVar6 + 0x1b4));
    if (iVar8 == 0) goto LAB_00491e4f;
    *(int *)(iVar6 + 0x1b4) = *(int *)(iVar6 + 0x1b4) + 1;
  }
  goto LAB_00491dc0;
LAB_00491e4f:
  *(undefined4 *)(iVar6 + 0x1b4) = 0xffffffff;
LAB_00491e56:
  if (uVar9 == 0) {
    if (((char)param_1[2] == '\0') &&
       (piVar2[10] = piVar2[10] + 1, *(char *)((int)param_1 + 9) != '\0')) {
      *(undefined1 *)(param_1 + 9) = 1;
      param_1[10] = piVar2[0x12];
      piVar2[0x12] = (int)(param_1 + 7);
    }
    *(undefined1 *)(param_1 + 2) = 1;
    if (*(char *)((int)piVar2 + 0x13) == '\0') {
      *(undefined1 *)((int)piVar2 + 0x13) = 1;
    }
  }
  goto LAB_00491e88;
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


/* FUN_00492040 @ 00492040  kind=gamemisc  attributed-by=none  size=146 */

uint __cdecl FUN_00492040(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  iVar2 = param_1[1];
  FUN_0048fbc0(param_1);
  iVar3 = *(int *)(iVar2 + 0xc);
  iVar4 = *(int *)(iVar3 + 0x38);
  uVar5 = FUN_004a2c80(*(undefined4 **)(iVar3 + 0x44));
  if (uVar5 == 0) {
    *(char *)(iVar4 + 0x24 + param_2 * 4) = (char)((uint)param_3 >> 0x18);
    *(char *)(iVar4 + 0x25 + param_2 * 4) = (char)((uint)param_3 >> 0x10);
    *(char *)(iVar4 + 0x26 + param_2 * 4) = (char)((uint)param_3 >> 8);
    *(char *)(iVar4 + 0x27 + param_2 * 4) = (char)param_3;
    if (param_2 == 7) {
      *(char *)(iVar2 + 0x12) = (char)param_3;
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
  return uVar5;
}


/* FUN_004920e0 @ 004920e0  kind=gamemisc  attributed-by=none  size=33 */

undefined4 FUN_004920e0(void)

{
  FUN_004683f0(0xe,"cannot open file at line %d of [%.10s]");
  return 0xe;
}


/* FUN_00492110 @ 00492110  kind=gamemisc  attributed-by=none  size=266 */

void __cdecl FUN_00492110(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar6 = param_1[0x13];
  }
  else {
    bVar1 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar1;
    iVar6 = param_1[bVar1 + 7];
  }
  piVar4 = (int *)param_1[2];
  iVar5 = **(int **)(*(int *)(*param_1 + 0x10) + 0xc + param_2 * 0x10);
  iVar3 = piVar4[7];
  if ((iVar3 < piVar4[8]) || (iVar2 = FUN_0047de10(piVar4), iVar2 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    iVar2 = piVar4[1];
    *(undefined2 *)(iVar2 + iVar3 * 0x14) = 7;
    *(undefined1 *)(iVar2 + 3 + iVar3 * 0x14) = 0;
    *(int *)(iVar2 + 4 + iVar3 * 0x14) = iVar5 + 1;
    *(int *)(iVar2 + 8 + iVar3 * 0x14) = iVar6;
    *(undefined4 *)(iVar2 + 0xc + iVar3 * 0x14) = 0;
    *(undefined4 *)(iVar2 + 0x10 + iVar3 * 0x14) = 0;
  }
  iVar5 = piVar4[7];
  if ((iVar5 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    iVar3 = piVar4[1];
    *(undefined2 *)(iVar3 + iVar5 * 0x14) = 0x25;
    *(undefined1 *)(iVar3 + 3 + iVar5 * 0x14) = 0;
    *(int *)(iVar3 + 4 + iVar5 * 0x14) = param_2;
    *(undefined4 *)(iVar3 + 8 + iVar5 * 0x14) = 1;
    *(int *)(iVar3 + 0xc + iVar5 * 0x14) = iVar6;
    *(undefined4 *)(iVar3 + 0x10 + iVar5 * 0x14) = 0;
  }
  if ((iVar6 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar5 = 0;
    piVar4 = param_1 + 0x19;
    while (piVar4[4] != iVar6) {
      iVar5 = iVar5 + 1;
      piVar4 = piVar4 + 6;
      if (9 < iVar5) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar6;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        return;
      }
    }
    *(undefined1 *)(piVar4 + 2) = 1;
  }
  return;
}


/* FUN_00492280 @ 00492280  kind=gamemisc  attributed-by=none  size=278 */

int __cdecl
FUN_00492280(int param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int local_8;
  
  bVar4 = false;
  iVar6 = 0;
  iVar7 = 0;
  bVar5 = false;
  if (0 < *(int *)(param_1 + 0x14)) {
    local_8 = 0;
    do {
      if (iVar7 != 0) {
        return iVar7;
      }
      if ((iVar6 == param_2) || (param_2 == 10)) {
        iVar7 = 0;
        puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x10) + 4 + local_8);
        if (puVar1 != (undefined4 *)0x0) {
          piVar2 = (int *)puVar1[1];
          FUN_0048fbc0(puVar1);
          if (*(char *)((int)piVar2 + 0x13) == '\0') {
            iVar3 = *piVar2;
            iVar7 = 0;
            if (*(int *)(iVar3 + 0xb8) != 0) {
              iVar7 = FUN_004ba4a0(*(int *)(iVar3 + 0xb8),param_3,*(undefined **)(iVar3 + 0x98),
                                   *(undefined4 *)(iVar3 + 0x9c),(uint)*(byte *)(iVar3 + 9),
                                   *(int *)(iVar3 + 0x80),*(undefined4 *)(iVar3 + 0xb0),param_4,
                                   param_5);
            }
          }
          else {
            iVar7 = 6;
          }
          if (*(char *)((int)puVar1 + 9) != '\0') {
            piVar2 = puVar1 + 3;
            *piVar2 = *piVar2 + -1;
            if (*piVar2 == 0) {
              if (*(int *)(puVar1[1] + 0x38) != 0) {
                (*DAT_00582b20)(*(int *)(puVar1[1] + 0x38));
              }
              *(undefined1 *)((int)puVar1 + 10) = 0;
            }
          }
        }
        param_4 = (undefined4 *)0x0;
        param_5 = (undefined4 *)0x0;
        bVar4 = bVar5;
        if (iVar7 == 5) {
          bVar5 = true;
          iVar7 = 0;
          bVar4 = true;
        }
      }
      iVar6 = iVar6 + 1;
      local_8 = local_8 + 0x10;
    } while (iVar6 < *(int *)(param_1 + 0x14));
    if ((iVar7 == 0) && (bVar4)) {
      return 5;
    }
  }
  return iVar7;
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


/* FUN_004927e0 @ 004927e0  kind=gamemisc  attributed-by=none  size=555 */

int __cdecl FUN_004927e0(int *param_1,int *param_2,byte *param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  piVar4 = (int *)param_1[2];
  iVar2 = param_1[0x13] + 1;
  iVar3 = param_1[0x13] + 2;
  param_1[0x13] = iVar3;
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  iVar6 = piVar4[7];
  if ((iVar6 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    puVar1 = (undefined2 *)(piVar4[1] + iVar6 * 0x14);
    *(int *)(puVar1 + 2) = iVar6 + 2;
    *puVar1 = 7;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 4) = iVar2;
    *(undefined4 *)(puVar1 + 6) = 0;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar6 = piVar4[7];
  if ((iVar6 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
    iVar5 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 7;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 0;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar3;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  param_3[0] = 10;
  param_3[1] = 0;
  *(int *)(param_3 + 4) = iVar2;
  param_3[8] = 0;
  param_3[9] = 0;
  param_3[10] = 0;
  param_3[0xb] = 0;
  param_3[0xc] = 0;
  param_3[0xd] = 0;
  param_3[0xe] = 0;
  param_3[0xf] = 0;
  uVar7 = piVar4[7];
  if (((int)uVar7 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    iVar6 = piVar4[1];
    piVar4[7] = piVar4[7] + 1;
    *(undefined2 *)(iVar6 + uVar7 * 0x14) = 1;
    *(undefined1 *)(iVar6 + 3 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 4 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 8 + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0xc + uVar7 * 0x14) = 0;
    *(undefined4 *)(iVar6 + 0x10 + uVar7 * 0x14) = 0;
  }
  else {
    uVar7 = 1;
  }
  iVar6 = FUN_004a7e30(param_1,param_2,param_3);
  if (*(char *)(*param_1 + 0x38) == '\0') {
    if (iVar6 == 0) {
      iVar6 = piVar4[7];
      if ((iVar6 < piVar4[8]) || (iVar5 = FUN_0047de10(piVar4), iVar5 == 0)) {
        iVar5 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar5 + iVar6 * 0x14) = 7;
        *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 4 + iVar6 * 0x14) = 1;
        *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar3;
        *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = 0;
        *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
      }
      FUN_004ae7d0(piVar4,4,iVar2);
      iVar2 = piVar4[7];
      if ((iVar2 < piVar4[8]) || (iVar3 = FUN_0047de10(piVar4), iVar3 == 0)) {
        iVar3 = piVar4[1];
        piVar4[7] = piVar4[7] + 1;
        *(undefined2 *)(iVar3 + iVar2 * 0x14) = 6;
        *(undefined1 *)(iVar3 + 3 + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 4 + iVar2 * 0x14) = 2;
        *(undefined4 *)(iVar3 + 8 + iVar2 * 0x14) = 2;
        *(undefined4 *)(iVar3 + 0xc + iVar2 * 0x14) = 0;
        *(undefined4 *)(iVar3 + 0x10 + iVar2 * 0x14) = 0;
      }
      if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar4[7])) {
        *(int *)(piVar4[1] + 8 + uVar7 * 0x14) = piVar4[7];
      }
      return 0;
    }
    return iVar6;
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  return 7;
}


/* FUN_00492ce0 @ 00492ce0  kind=gamemisc  attributed-by=none  size=144 */

int __cdecl FUN_00492ce0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  piVar3 = (int *)param_1[2];
  if (piVar3 == (int *)0x0) {
    piVar3 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar3;
    if (piVar3 != (int *)0x0) {
      FUN_004ae760(piVar3,0x94);
    }
  }
  iVar1 = param_1[0x15];
  param_1[0x15] = iVar1 + 1;
  iVar2 = piVar3[7];
  if (piVar3[8] <= iVar2) {
    iVar4 = FUN_0047de10(piVar3);
    if (iVar4 != 0) {
      return 1;
    }
  }
  iVar4 = piVar3[1];
  piVar3[7] = piVar3[7] + 1;
  *(int *)(iVar4 + 4 + iVar2 * 0x14) = iVar1;
  *(undefined2 *)(iVar4 + iVar2 * 0x14) = 0x1a;
  *(undefined1 *)(iVar4 + 3 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 8 + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 0xc + iVar2 * 0x14) = 0;
  *(undefined4 *)(iVar4 + 0x10 + iVar2 * 0x14) = 0;
  return iVar2;
}


/* FUN_00492d70 @ 00492d70  kind=gamemisc  attributed-by=none  size=87 */

void __cdecl
FUN_00492d70(int *param_1,int *param_2,uint param_3,int *param_4,uint param_5,undefined4 param_6,
            undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  for (; param_2 != (int *)0x0; param_2 = (int *)param_2[8]) {
    if (((*(byte *)(param_2 + 2) == param_3) && (*(byte *)((int)param_2 + 9) == param_5)) &&
       (iVar1 = FUN_00471c90((undefined4 *)param_2[4],param_4), iVar1 != 0)) {
      FUN_00492dd0(param_1,param_2,param_6,param_7,param_8,param_9);
    }
  }
  return;
}


/* FUN_00492dd0 @ 00492dd0  kind=gamemisc  attributed-by=none  size=297 */

void __cdecl
FUN_00492dd0(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,undefined4 param_6
            )

{
  undefined2 *puVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  piVar3 = param_1;
  piVar4 = (int *)param_1[2];
  if (piVar4 == (int *)0x0) {
    piVar4 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar4;
    if (piVar4 != (int *)0x0) {
      FUN_004ae760(piVar4,0x94);
    }
  }
  piVar5 = FUN_0047d6f0(param_1,param_2,param_3,param_5);
  if (piVar5 != (int *)0x0) {
    if ((*param_2 == 0) ||
       (iVar2 = *param_1, param_1._0_1_ = 1, (*(uint *)(iVar2 + 0x18) & 0x20000) != 0)) {
      param_1._0_1_ = 0;
    }
    iVar7 = piVar3[0x13] + 1;
    piVar3[0x13] = iVar7;
    iVar2 = piVar4[7];
    if ((iVar2 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      puVar1 = (undefined2 *)(piVar4[1] + iVar2 * 0x14);
      *(undefined4 *)(puVar1 + 2) = param_4;
      *puVar1 = 0x73;
      *(undefined1 *)((int)puVar1 + 3) = 0;
      *(undefined4 *)(puVar1 + 4) = param_6;
      *(int *)(puVar1 + 6) = iVar7;
      *(undefined4 *)(puVar1 + 8) = 0;
    }
    iVar2 = piVar4[1];
    piVar3 = (int *)piVar5[2];
    iVar7 = *piVar4;
    if ((iVar2 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
      FUN_0047bc80(iVar7,0xffffffee,piVar3);
    }
    else {
      iVar6 = iVar2 + (piVar4[7] + -1) * 0x14;
      FUN_0047bc80(iVar7,(int)*(char *)(iVar6 + 1),*(int **)(iVar2 + 0x10 + (piVar4[7] + -1) * 0x14)
                  );
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (piVar3 == (int *)0x0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined1 *)(iVar6 + 1) = 0;
      }
      else {
        *(int **)(iVar6 + 0x10) = piVar3;
        *(undefined1 *)(iVar6 + 1) = 0xee;
      }
    }
    if (piVar4[1] != 0) {
      *(undefined1 *)(piVar4[1] + -0x11 + piVar4[7] * 0x14) = param_1._0_1_;
    }
    return;
  }
  return;
}


/* FUN_00492f00 @ 00492f00  kind=gamemisc  attributed-by=none  size=1120 */

void __cdecl FUN_00492f00(int *param_1,char *param_2,int param_3,int param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  byte *extraout_EDX;
  byte *pbVar6;
  undefined1 uVar7;
  int local_54;
  int local_50;
  int local_4c;
  char *local_48;
  int *local_44;
  int *local_40;
  byte *local_3c;
  uint local_38;
  undefined4 *local_34;
  char local_2d;
  code *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)param_1[2];
  local_38 = 0xffffffff;
  local_44 = (int *)0x0;
  if (piVar1 == (int *)0x0) {
    piVar1 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar1;
    if (piVar1 == (int *)0x0) goto LAB_00492ffe;
    FUN_004ae760(piVar1,0x94);
  }
  param_1[0x17] = param_1[0x17] + 1;
  if ((param_2[2] & 0x20U) == 0) {
    local_38 = FUN_00492ce0(param_1);
  }
  if ((char)param_1[0x75] == '\x02') {
    piVar2 = (int *)FUN_004a02d0(*param_1,(byte *)"EXECUTE %s%s SUBQUERY %d");
    FUN_004ae8f0(piVar1,0x96,param_1[0x79],0,0,piVar2,0xffffffff);
  }
  if (*param_2 == 'H') {
    local_48 = *(char **)(param_2 + 8);
    if (param_3 != 0) {
      FUN_004ae830(piVar1,10,0,param_3);
    }
    local_2d = FUN_00496480(local_48);
    *(int *)(param_2 + 0x18) = param_1[0x12];
    param_1[0x12] = param_1[0x12] + 1;
    local_50 = FUN_004ae830(piVar1,0x2a,*(undefined4 *)(param_2 + 0x18),(uint)(param_4 == 0));
    if ((param_3 == 0) && (piVar1[1] != 0)) {
      *(undefined1 *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = 8;
    }
    local_18 = 0x1000000000000;
    local_10 = 0x583e7c;
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      local_40 = *(int **)(param_2 + 0x10);
      if (local_40 != (int *)0x0) {
        if (local_2d == '\0') {
          local_2d = 'b';
        }
        uVar5 = FUN_004984d0(param_1,*(char **)(param_2 + 8));
        local_10 = CONCAT44(uVar5,&DAT_00583e7c);
        local_48 = (char *)FUN_0049cb40((int)param_1);
        local_34 = (undefined4 *)FUN_0049cb40((int)param_1);
        FUN_004ae830(piVar1,10,0,local_34);
        local_4c = *local_40;
        local_40 = (int *)local_40[2];
        for (; 0 < local_4c; local_4c = local_4c + -1) {
          local_3c = (byte *)*local_40;
          if (-1 < (int)local_38) {
            local_1c = 1;
            local_2c = FUN_00478e60;
            local_28 = FUN_0048b2c0;
            FUN_004bb020(&local_2c,(int)local_3c);
            if (local_1c == 0) {
              FUN_004aee50(piVar1,local_38);
              local_38 = 0xffffffff;
            }
          }
          pbVar6 = local_3c;
          if ((param_4 == 0) ||
             (iVar3 = FUN_00498e90((char *)local_3c,&local_54), pbVar6 = extraout_EDX, iVar3 == 0))
          {
            local_3c = (byte *)FUN_00497780(param_1,pbVar6,(int)local_48);
            if (param_4 == 0) {
              FUN_004ae8f0(piVar1,0x1f,local_3c,1,local_34,(int *)&local_2d,1);
              FUN_00496d90((int)param_1,(int)local_3c,1);
              FUN_004ae830(piVar1,0x61,*(undefined4 *)(param_2 + 0x18),local_34);
            }
            else {
              FUN_004ae830(piVar1,0x15,local_3c,piVar1[7] + 2);
              FUN_004ae890(piVar1,0x39,*(undefined4 *)(param_2 + 0x18),local_34,local_3c);
            }
          }
          else {
            FUN_004ae890(piVar1,0x3a,*(undefined4 *)(param_2 + 0x18),local_34,local_54);
          }
          local_40 = local_40 + 5;
        }
        FUN_004a68f0((int)param_1,(int)local_48);
        FUN_004a68f0((int)param_1,(int)local_34);
      }
    }
    else {
      local_24 = *(undefined4 *)(param_2 + 0x18);
      local_28 = (code *)CONCAT31(CONCAT21(local_28._2_2_,local_2d),7);
      local_20 = 0;
      local_1c = 0;
      *(undefined4 *)(*(int *)(param_2 + 0x10) + 8) = 0;
      iVar3 = FUN_004a7e30(param_1,*(int **)(param_2 + 0x10),(byte *)&local_28);
      if (iVar3 != 0) goto LAB_00492ffe;
      piVar2 = (int *)**(int **)(param_2 + 0x10);
      if ((piVar2 != (int *)0x0) && (0 < *piVar2)) {
        uVar4 = FUN_0048e620(param_1,*(char **)(param_2 + 8),*(char **)piVar2[2]);
        local_10 = CONCAT44(uVar4,(undefined4)local_10);
      }
    }
    if (param_4 == 0) {
      FUN_004aecc0(piVar1,local_50,(int *)&local_18,0xfffffffa);
    }
  }
  else {
    local_44 = *(int **)(param_2 + 0x10);
    iVar3 = param_1[0x13] + 1;
    param_1[0x13] = iVar3;
    local_18 = CONCAT44(iVar3,(int)local_18);
    local_18._1_7_ = (uint7)((ulonglong)local_18 >> 8) & 0xffffffffffff00;
    local_10 = 0;
    if (*param_2 == 't') {
      local_18 = CONCAT71(local_18._1_7_,6);
      uVar7 = 10;
    }
    else {
      local_18 = CONCAT71(local_18._1_7_,3);
      uVar7 = 7;
    }
    FUN_004ae830(piVar1,uVar7,0,iVar3);
    piVar2 = local_44;
    FUN_00498790(*param_1,(undefined4 *)local_44[0x12]);
    local_34 = FUN_00496510(*param_1,0x81,&PTR_DAT_00569828,1);
    FUN_00496a30(*param_1,(int)local_34,(undefined4 *)0x0,(undefined4 *)0x0);
    if ((local_34 != (undefined4 *)0x0) && (*(int *)(*param_1 + 0x5c) < (int)local_34[5])) {
      FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
    }
    piVar2[0x12] = (int)local_34;
    piVar2[2] = 0;
    iVar3 = FUN_004a7e30(param_1,piVar2,(byte *)&local_18);
    if (iVar3 != 0) {
LAB_00492ffe:
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    local_44 = local_18._4_4_;
  }
  if ((-1 < (int)local_38) && (local_38 < (uint)piVar1[7])) {
    *(int *)(piVar1[1] + 8 + local_38 * 0x14) = piVar1[7];
  }
  FUN_00496d40((int)param_1,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00493360 @ 00493360  kind=gamemisc  attributed-by=none  size=155 */

void __cdecl FUN_00493360(int *param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  int iVar7;
  
  iVar3 = *param_1;
  iVar7 = 0;
  if (0 < *(int *)(iVar3 + 0x14)) {
    iVar5 = 0;
    do {
      if (*(int *)(*(int *)(iVar3 + 0x10) + 4 + iVar5) != 0) {
        if (param_2 != (byte *)0x0) {
          pbVar6 = *(byte **)(*(int *)(iVar3 + 0x10) + iVar5);
          bVar2 = *param_2;
          pbVar4 = param_2;
          while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar6]))) {
            pbVar1 = pbVar4 + 1;
            pbVar4 = pbVar4 + 1;
            pbVar6 = pbVar6 + 1;
            bVar2 = *pbVar1;
          }
          if ((&DAT_00569620)[*pbVar4] != (&DAT_00569620)[*pbVar6]) goto LAB_004933eb;
        }
        FUN_00493400(param_1,iVar7);
      }
LAB_004933eb:
      iVar7 = iVar7 + 1;
      iVar5 = iVar5 + 0x10;
    } while (iVar7 < *(int *)(iVar3 + 0x14));
  }
  return;
}


/* FUN_00493400 @ 00493400  kind=gamemisc  attributed-by=none  size=181 */

void __cdecl FUN_00493400(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar1 = (int *)param_1[0x6c];
  piVar4 = param_1;
  if ((piVar1 != (int *)0x0) && (piVar4 = piVar1, piVar1 != param_1)) {
    param_1[0x57] = -1;
  }
  if (piVar4[0x57] == 0) {
    piVar1 = (int *)piVar4[2];
    if (piVar1 == (int *)0x0) {
      piVar1 = FUN_004af150(*piVar4);
      piVar4[2] = (int)piVar1;
      if (piVar1 == (int *)0x0) {
        return;
      }
      FUN_004ae760(piVar1,0x94);
    }
    iVar2 = FUN_004ae830(piVar1,1,0,0);
    piVar4[0x57] = iVar2 + 1;
  }
  if (-1 < param_2) {
    uVar3 = 1 << ((byte)param_2 & 0x1f);
    if ((uVar3 & piVar4[0x56]) == 0) {
      piVar4[0x56] = piVar4[0x56] | uVar3;
      piVar4[param_2 + 0x58] = **(int **)(*(int *)(*piVar4 + 0x10) + 0xc + param_2 * 0x10);
      if (param_2 == 1) {
        FUN_004a11c0(piVar4);
      }
    }
  }
  return;
}


/* FUN_00493630 @ 00493630  kind=gamemisc  attributed-by=none  size=184 */

void __cdecl FUN_00493630(int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = param_2;
  if (param_2[3] == 0) {
    iVar5 = param_3 * 0x18;
    FUN_004ae300(*param_1,*(char **)(param_2[1] + 4 + iVar5),
                 (uint)*(byte *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                 (uint)*(byte *)(param_2[1] + 0x15 + iVar5),&param_2);
    if (param_2 != (int *)0x0) {
      iVar2 = param_1[1];
      iVar3 = *param_1;
      if ((iVar2 == 0) || (*(char *)(iVar3 + 0x38) != '\0')) {
        FUN_0047bc80(iVar3,0xfffffff8,param_2);
      }
      else {
        iVar1 = iVar2 + (param_1[7] + -1) * 0x14;
        FUN_0047bc80(iVar3,(int)*(char *)(iVar1 + 1),
                     *(int **)(iVar2 + 0x10 + (param_1[7] + -1) * 0x14));
        *(int **)(iVar1 + 0x10) = param_2;
        *(undefined1 *)(iVar1 + 1) = 0xf8;
      }
    }
    if ((-1 < param_4) && (*(char *)(iVar5 + 0x15 + piVar4[1]) == 'e')) {
      FUN_004ae7d0(param_1,0x16,param_4);
    }
  }
  return;
}


/* FUN_00493750 @ 00493750  kind=gamemisc  attributed-by=none  size=56 */

int __cdecl FUN_00493750(char *param_1,char param_2)

{
  char cVar1;
  undefined3 extraout_var;
  
  cVar1 = FUN_00496480(param_1);
  if (cVar1 == '\0') {
    if (param_2 != '\0') goto LAB_0049377e;
  }
  else {
    if (param_2 == '\0') {
LAB_0049377e:
      return (int)cVar1 + (int)param_2;
    }
    if (('b' < cVar1) || ('b' < param_2)) {
      return CONCAT31(extraout_var,99);
    }
  }
  return CONCAT31(extraout_var,0x62);
}


/* FUN_00493790 @ 00493790  kind=gamemisc  attributed-by=none  size=854 */

void __cdecl
FUN_00493790(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int param_8)

{
  undefined2 *puVar1;
  short sVar2;
  int iVar3;
  int *piVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int local_8;
  
  piVar4 = param_1;
  piVar6 = (int *)param_1[2];
  if (piVar6 == (int *)0x0) {
    piVar6 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_004ae760(piVar6,0x94);
    }
  }
  iVar11 = 0;
  for (iVar12 = param_2[2]; iVar12 != 0; iVar12 = *(int *)(iVar12 + 0x14)) {
    iVar11 = iVar11 + 1;
  }
  while (iVar11 = iVar11 + -1, -1 < iVar11) {
    iVar12 = *(int *)(param_5 + iVar11 * 4);
    if (iVar12 != 0) {
      iVar3 = piVar6[7];
      if ((iVar3 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
        piVar6[7] = piVar6[7] + 1;
        puVar1 = (undefined2 *)(piVar6[1] + iVar3 * 0x14);
        *(int *)(puVar1 + 2) = param_3 + 1 + iVar11;
        *puVar1 = 0x61;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 4) = iVar12;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      if ((param_8 != 0) && (piVar6[1] != 0)) {
        *(undefined1 *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = 0x10;
      }
    }
  }
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    local_8 = param_1[0x13];
  }
  else {
    bVar5 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar5;
    local_8 = param_1[bVar5 + 7];
  }
  sVar2 = *(short *)((int)param_2 + 0x26);
  iVar12 = piVar6[7];
  iVar11 = piVar6[8];
  if (iVar12 < iVar11) {
LAB_004938f6:
    iVar11 = piVar6[1];
    piVar6[7] = piVar6[7] + 1;
    *(int *)(iVar11 + 4 + iVar12 * 0x14) = param_4 + 1;
    *(int *)(iVar11 + 8 + iVar12 * 0x14) = (int)sVar2;
    *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x1f;
    *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
    *(int *)(iVar11 + 0xc + iVar12 * 0x14) = local_8;
    *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
  }
  else {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar11 * 0x14);
    if (puVar8 != (undefined4 *)0x0) {
      iVar11 = *piVar6;
      if (((iVar11 == 0) || (puVar8 < *(undefined4 **)(iVar11 + 0x104))) ||
         (*(undefined4 **)(iVar11 + 0x108) <= puVar8)) {
        uVar9 = (*DAT_00582af0._4_4_)(puVar8);
      }
      else {
        uVar9 = (uint)*(ushort *)(iVar11 + 0xe8);
      }
      piVar6[8] = uVar9 / 0x14;
      piVar6[1] = (int)puVar8;
      goto LAB_004938f6;
    }
  }
  FUN_004aaa40(piVar6,(int)param_2);
  sVar2 = *(short *)((int)param_2 + 0x26);
  piVar10 = param_1 + 0x1d;
  iVar12 = 10;
  do {
    iVar11 = *piVar10;
    if ((param_4 + 1 <= iVar11) && (iVar11 <= sVar2 + param_4)) {
      if ((char)piVar10[-2] != '\0') {
        if (*(byte *)((int)param_1 + 0x13) < 8) {
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar11;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar10 + -2) = 0;
      }
      *piVar10 = 0;
    }
    piVar10 = piVar10 + 6;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    param_1._0_1_ = (param_6 != 0) * '\x02' + 2U | 1;
  }
  else {
    param_1._0_1_ = 0;
  }
  if (param_7 != 0) {
    param_1._0_1_ = (byte)param_1 | 8;
  }
  if (param_8 != 0) {
    param_1._0_1_ = (byte)param_1 | 0x10;
  }
  iVar12 = piVar6[7];
  iVar11 = piVar6[8];
  if (iVar11 <= iVar12) {
    if (iVar11 == 0) {
      iVar11 = 0x33;
    }
    else {
      iVar11 = iVar11 * 2;
    }
    puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar11 * 0x14);
    if (puVar8 == (undefined4 *)0x0) goto LAB_00493a5e;
    iVar11 = *piVar6;
    if (((iVar11 == 0) || (puVar8 < *(undefined4 **)(iVar11 + 0x104))) ||
       (*(undefined4 **)(iVar11 + 0x108) <= puVar8)) {
      uVar9 = (*DAT_00582af0._4_4_)(puVar8);
    }
    else {
      uVar9 = (uint)*(ushort *)(iVar11 + 0xe8);
    }
    piVar6[8] = uVar9 / 0x14;
    piVar6[1] = (int)puVar8;
  }
  iVar11 = piVar6[1];
  piVar6[7] = piVar6[7] + 1;
  *(int *)(iVar11 + 4 + iVar12 * 0x14) = param_3;
  *(int *)(iVar11 + 8 + iVar12 * 0x14) = local_8;
  *(undefined2 *)(iVar11 + iVar12 * 0x14) = 0x39;
  *(undefined1 *)(iVar11 + 3 + iVar12 * 0x14) = 0;
  *(int *)(iVar11 + 0xc + iVar12 * 0x14) = param_4;
  *(undefined4 *)(iVar11 + 0x10 + iVar12 * 0x14) = 0;
LAB_00493a5e:
  if (*(char *)((int)piVar4 + 0x12) == '\0') {
    iVar12 = piVar6[1];
    piVar4 = (int *)*param_2;
    iVar11 = *piVar6;
    if ((iVar12 == 0) || (*(char *)(iVar11 + 0x38) != '\0')) {
      FUN_0047bc80(iVar11,0,piVar4);
    }
    else {
      iVar3 = iVar12 + (piVar6[7] + -1) * 0x14;
      FUN_0047bc80(iVar11,(int)*(char *)(iVar3 + 1),
                   *(int **)(iVar12 + 0x10 + (piVar6[7] + -1) * 0x14));
      *(undefined4 *)(iVar3 + 0x10) = 0;
      if (piVar4 == (int *)0x0) {
        *(undefined4 *)(iVar3 + 0x10) = 0;
        *(undefined1 *)(iVar3 + 1) = 0;
      }
      else {
        uVar9 = FUN_004aa9b0((char *)piVar4);
        puVar8 = FUN_00494e00(*piVar6,piVar4,uVar9);
        *(undefined4 **)(iVar3 + 0x10) = puVar8;
        *(undefined1 *)(iVar3 + 1) = 0xff;
      }
    }
  }
  if (piVar6[1] != 0) {
    *(byte *)(piVar6[1] + -0x11 + piVar6[7] * 0x14) = (byte)param_1;
  }
  return;
}


/* FUN_00493af0 @ 00493af0  kind=gamemisc  attributed-by=none  size=33 */

undefined4 FUN_00493af0(void)

{
  FUN_004683f0(0xb,"database corruption at line %d of [%.10s]");
  return 0xb;
}


/* FUN_00493b20 @ 00493b20  kind=gamemisc  attributed-by=none  size=167 */

undefined4 * __cdecl FUN_00493b20(int param_1,int param_2,int param_3,uint param_4)

{
  int iVar1;
  undefined4 *_Dst;
  uint uVar2;
  uint uVar3;
  
  _Dst = FUN_00494b90(param_1,0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,0x2c);
    iVar1 = param_2 + param_3 * 0x48;
    *(undefined1 *)_Dst = 0x98;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    _Dst[5] = 1;
    _Dst[10] = *(undefined4 *)(iVar1 + 0x18);
    _Dst[6] = *(undefined4 *)(iVar1 + 0x34);
    if ((int)*(short *)(_Dst[10] + 0x24) == param_4) {
      *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 4;
      *(undefined2 *)(_Dst + 7) = 0xffff;
      return _Dst;
    }
    *(short *)(_Dst + 7) = (short)param_4;
    if (0x3f < (int)param_4) {
      param_4 = 0x3f;
    }
    uVar2 = 1 << (param_4 & 0x1f);
    uVar3 = 0;
    if (0x1f < param_4) {
      uVar3 = uVar2;
    }
    uVar2 = uVar2 ^ uVar3;
    if (0x3f < param_4) {
      uVar3 = uVar2;
    }
    *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | uVar2;
    *(uint *)(iVar1 + 0x44) = *(uint *)(iVar1 + 0x44) | uVar3;
    *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 4;
  }
  return _Dst;
}


/* FUN_00493f20 @ 00493f20  kind=gamemisc  attributed-by=none  size=461 */

int __cdecl
FUN_00493f20(int param_1,byte *param_2,int param_3,uint param_4,undefined4 param_5,int param_6,
            int param_7,int param_8,int *param_9)

{
  uint uVar1;
  short *psVar2;
  int iVar3;
  byte *extraout_EDX;
  byte *pbVar4;
  uint extraout_EDX_00;
  
  if (param_2 == (byte *)0x0) goto LAB_00494001;
  if (param_6 == 0) {
    if (param_8 == 0) goto LAB_00493f46;
    if (param_7 == 0) goto LAB_00494001;
  }
  else {
    if (param_8 != 0) goto LAB_00494001;
LAB_00493f46:
    if (param_7 != 0) goto LAB_00494001;
  }
  if ((param_3 + 1U < 0x81) && (uVar1 = FUN_004aa9b0((char *)param_2), (int)uVar1 < 0x100)) {
    pbVar4 = extraout_EDX;
    if (param_4 == 4) {
      param_4 = 2;
    }
    else if (param_4 == 5) {
      iVar3 = FUN_00493f20(param_1,extraout_EDX,param_3,1,param_5,param_6,param_7,param_8,param_9);
      if (iVar3 != 0) {
        return iVar3;
      }
      iVar3 = FUN_00493f20(param_1,param_2,param_3,2,param_5,param_6,param_7,param_8,param_9);
      if (iVar3 != 0) {
        return iVar3;
      }
      param_4 = 3;
      pbVar4 = param_2;
    }
    psVar2 = FUN_004995c0(param_1,pbVar4,uVar1,param_3,(byte)param_4,'\0');
    if (((psVar2 != (short *)0x0) && (*(byte *)(psVar2 + 1) == param_4)) && (*psVar2 == param_3)) {
      if (*(int *)(param_1 + 0x84) != 0) {
        FUN_004961f0(param_1,5,
                     (byte *)"unable to delete/modify user-function due to active statements");
        return 5;
      }
      FUN_00496370(param_1);
      param_4 = extraout_EDX_00;
    }
    psVar2 = FUN_004995c0(param_1,param_2,uVar1,param_3,(byte)param_4,'\x01');
    if (psVar2 == (short *)0x0) {
      return 7;
    }
    FUN_0047c360(param_1,(int)psVar2);
    if (param_9 != (int *)0x0) {
      *param_9 = *param_9 + 1;
    }
    *(int **)(psVar2 + 0x10) = param_9;
    *(int *)(psVar2 + 6) = param_6;
    *(int *)(psVar2 + 10) = param_8;
    *(undefined4 *)(psVar2 + 2) = param_5;
    *(int *)(psVar2 + 8) = param_7;
    *psVar2 = (short)param_3;
    *(undefined1 *)((int)psVar2 + 3) = 0;
    return 0;
  }
LAB_00494001:
  FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
  return 0x15;
}


/* FUN_00494960 @ 00494960  kind=gamemisc  attributed-by=none  size=411 */

void __cdecl
FUN_00494960(int *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5,
            int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 local_20 [5];
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar1 = *param_1;
  if (param_1[0x73] < 1) {
    FUN_004aa1c0(param_1,param_3,param_4,param_6,1,0,param_7);
    iVar2 = param_1[0x7f];
    if ((iVar2 == 0) || (param_1[0x11] != 0)) {
      if (param_5 != (undefined4 *)0x0) {
        FUN_00472d10(iVar1,param_5);
        FUN_00494b00(iVar1,param_5);
      }
    }
    else {
      FUN_004ab150(param_1,param_3,param_4,&local_8);
      iVar3 = FUN_004a7ba0(iVar1,*(int *)(iVar2 + 0x40));
      iVar3 = FUN_0049a350(local_20,param_1,iVar3,&DAT_0056f6d8,local_8);
      if ((iVar3 != 0) && (iVar3 = FUN_0049a3a0(local_20,param_5), iVar3 != 0)) {
        FUN_004a9650(iVar1,param_5);
        return;
      }
      puVar4 = FUN_004a9680(iVar1,param_5,1);
      *(undefined4 **)(iVar2 + 0xc) = puVar4;
      if (param_5 != (undefined4 *)0x0) {
        FUN_00472d10(iVar1,param_5);
        FUN_00494b00(iVar1,param_5);
      }
      if (*(char *)(iVar1 + 0x38) == '\0') {
        if (*(char *)(iVar1 + 0x81) == '\0') {
          FUN_004b9570(param_1,iVar2);
        }
        pcVar5 = (char *)param_1[0x84];
        if ((*pcVar5 != '\0') && (*pcVar5 != ';')) {
          pcVar5 = pcVar5 + param_1[0x85];
        }
        iVar1 = *param_2;
        local_c = (int)pcVar5 - iVar1;
        while ((0 < local_c && (((&DAT_00569720)[*(byte *)(iVar1 + -1 + local_c)] & 1) != 0))) {
          local_c = local_c + -1;
        }
        local_c = iVar1 + -1 + local_c;
        local_8 = 1;
        FUN_00495df0(param_1,(int *)0x0,&local_c,(int *)0x0);
        return;
      }
    }
  }
  else {
    FUN_004962b0(param_1,(byte *)"parameters are not allowed in views");
    if (param_5 != (undefined4 *)0x0) {
      FUN_00472d10(iVar1,param_5);
      FUN_00494b00(iVar1,param_5);
      return;
    }
  }
  return;
}


/* FUN_00494b00 @ 00494b00  kind=gamemisc  attributed-by=none  size=139 */

void __cdecl FUN_00494b00(int param_1,undefined4 *param_2)

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
      iVar1 = (*DAT_00582af0._4_4_)(param_2);
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
  FUN_00466dd0((int)param_2);
  return;
}


/* FUN_00494c20 @ 00494c20  kind=gamemisc  attributed-by=none  size=43 */

undefined4 * __cdecl FUN_00494c20(int param_1,size_t param_2)

{
  undefined4 *_Dst;
  
  _Dst = FUN_00494b90(param_1,param_2);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,param_2);
  }
  return _Dst;
}


/* FUN_00494c50 @ 00494c50  kind=gamemisc  attributed-by=none  size=146 */

undefined4 __cdecl FUN_00494c50(int param_1,byte *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  
  if (0 < *(int *)(param_1 + 0x14)) {
    iVar6 = 0;
    puVar4 = *(undefined4 **)(param_1 + 0x10);
    do {
      if (puVar4[1] != 0) {
        if (param_2 == (byte *)0x0) {
LAB_00494cd9:
          return (*(undefined4 **)(param_1 + 0x10))[iVar6 * 4 + 1];
        }
        pbVar5 = (byte *)*puVar4;
        bVar2 = *param_2;
        pbVar3 = param_2;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar5]))) {
          pbVar1 = pbVar3 + 1;
          pbVar3 = pbVar3 + 1;
          pbVar5 = pbVar5 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar3] == (&DAT_00569620)[*pbVar5]) goto LAB_00494cd9;
      }
      iVar6 = iVar6 + 1;
      puVar4 = puVar4 + 4;
    } while (iVar6 < *(int *)(param_1 + 0x14));
  }
  return 0;
}


/* FUN_00494db0 @ 00494db0  kind=gamemisc  attributed-by=none  size=77 */

undefined4 * __cdecl FUN_00494db0(int param_1,char *param_2)

{
  size_t _Size;
  char cVar1;
  char *pcVar2;
  undefined4 *_Dst;
  
  if (param_2 != (char *)0x0) {
    cVar1 = *param_2;
    pcVar2 = param_2;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    _Size = ((int)pcVar2 - (int)param_2 & 0x3fffffffU) + 1;
    _Dst = FUN_00494b90(param_1,_Size);
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,param_2,_Size);
    }
    return _Dst;
  }
  return (undefined4 *)0x0;
}


/* FUN_00494e00 @ 00494e00  kind=gamemisc  attributed-by=none  size=62 */

undefined4 * __cdecl FUN_00494e00(int param_1,void *param_2,size_t param_3)

{
  undefined4 *_Dst;
  
  if (param_2 == (void *)0x0) {
    return (undefined4 *)0x0;
  }
  _Dst = FUN_00494b90(param_1,param_3 + 1);
  if (_Dst != (undefined4 *)0x0) {
    memcpy(_Dst,param_2,param_3);
    *(undefined1 *)((int)_Dst + param_3) = 0;
  }
  return _Dst;
}


/* FUN_00494e40 @ 00494e40  kind=gamemisc  attributed-by=none  size=80 */

void __cdecl FUN_00494e40(int param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  
  puVar1 = *(uint **)(param_1 + 8);
  uVar3 = *(uint *)(*(int *)(param_1 + 0xc) + 0x1c);
  if (uVar3 < 10) {
    uVar3 = 10;
  }
  *puVar1 = uVar3;
  iVar2 = 1;
  uVar3 = 10;
  if (0 < *(int *)(param_1 + 0x24)) {
    do {
      puVar1[iVar2] = uVar3;
      if (5 < uVar3) {
        uVar3 = uVar3 - 1;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 <= *(int *)(param_1 + 0x24));
  }
  if (*(char *)(param_1 + 0x2c) != '\0') {
    puVar1[*(int *)(param_1 + 0x24)] = 1;
  }
  return;
}


/* FUN_00494ea0 @ 00494ea0  kind=gamemisc  attributed-by=none  size=31 */

void __cdecl FUN_00494ea0(int param_1,undefined1 param_2)

{
  int iVar1;
  
  if ((*(int *)(param_1 + 0x1fc) != 0) &&
     (iVar1 = *(int *)(*(int *)(param_1 + 0x1fc) + 0x10), iVar1 != 0)) {
    *(undefined1 *)(iVar1 + 0x18) = param_2;
  }
  return;
}


/* FUN_00494ec0 @ 00494ec0  kind=gamemisc  attributed-by=none  size=1084 */

void __cdecl FUN_00494ec0(int *param_1,short *param_2,byte *param_3)

{
  ushort uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  undefined2 extraout_var;
  int iVar5;
  int *piVar6;
  undefined8 local_54;
  undefined8 local_4c;
  undefined8 local_44;
  undefined8 local_3c;
  undefined8 local_34;
  int *local_2c;
  int *local_28;
  int *local_24;
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
     (piVar2 = (int *)FUN_004aa130(param_1,(int)param_2), local_28 = piVar2, piVar2 != (int *)0x0))
  {
    local_24 = (int *)FUN_004ab0e0(param_1,piVar2,0x6a,(int *)0x0,(uint *)0x0);
    local_1c = (uint)(piVar2[3] != 0);
    iVar3 = FUN_004b9570(param_1,(int)piVar2);
    if ((iVar3 == 0) &&
       (iVar3 = FUN_0049f850(param_1,(int)piVar2,(uint)(local_24 != (int *)0x0)), iVar3 == 0)) {
      local_18 = FUN_004a7ba0(iVar5,piVar2[0x10]);
      local_2c = (int *)FUN_0048d4b0(param_1,9,*piVar2,0,
                                     *(undefined4 *)(*(int *)(iVar5 + 0x10) + local_18 * 0x10));
      if (local_2c != (int *)0x1) {
        local_14 = param_1[0x12];
        *(int *)(param_2 + 0x1a) = local_14;
        param_1[0x12] = param_1[0x12] + 1;
        iVar3 = param_1[0x12];
        for (iVar5 = piVar2[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
          iVar3 = iVar3 + 1;
          param_1[0x12] = iVar3;
        }
        if (local_1c == 0) {
          local_c = local_34._4_4_;
          local_10 = (int)local_34;
        }
        else {
          local_10 = param_1[0x81];
          local_c = param_1;
          param_1[0x81] = *piVar2;
        }
        piVar4 = FUN_0049d4d0(param_1);
        piVar6 = local_c;
        iVar3 = local_10;
        iVar5 = local_8;
        if (piVar4 != (int *)0x0) {
          if (*(char *)((int)param_1 + 0x12) == '\0') {
            piVar4[0x18] = piVar4[0x18] | 0x10;
          }
          FUN_0048e5e0(param_1,1,local_18);
          if (local_1c != 0) {
            FUN_004a05b0(param_1,piVar2,(undefined4 *)param_3,local_14);
          }
          local_4c = 0;
          local_44 = 0;
          local_3c = 0;
          local_54 = CONCAT44(param_2,param_1);
          uVar1 = FUN_004a69e0((int *)&local_54,(int)param_3);
          piVar6 = local_c;
          iVar3 = local_10;
          iVar5 = local_8;
          if (CONCAT22(extraout_var,uVar1) == 0) {
            if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
              param_1[0x13] = param_1[0x13] + 1;
              local_20 = param_1[0x13];
              FUN_004ae830(piVar4,7,0,local_20);
            }
            if ((((local_2c == (int *)0x0) && (param_3 == (byte *)0x0)) &&
                ((local_24 == (int *)0x0 && ((*(byte *)((int)piVar2 + 0x2a) & 0x10) == 0)))) &&
               (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
                ((iVar5 = FUN_0049ae70(piVar2), iVar5 == 0 && (piVar2[4] == 0)))))) {
              FUN_004ae8f0(piVar4,0x67,piVar2[8],local_18,local_20,(int *)*piVar2,0xfffffffe);
              iVar3 = local_18;
              for (iVar5 = piVar2[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                FUN_004ae830(piVar4,0x67,*(undefined4 *)(iVar5 + 0x28),iVar3);
              }
            }
            else {
              local_18 = param_1[0x13] + 1;
              param_1[0x13] = param_1[0x13] + 2;
              FUN_004ae830(piVar4,10,0,local_18);
              local_2c = FUN_004bb240(param_1,param_2,param_3,(undefined2 *)0x0,(int *)0x0,8,0);
              piVar6 = local_c;
              iVar3 = local_10;
              iVar5 = local_8;
              if (local_2c == (int *)0x0) goto LAB_004952d6;
              iVar5 = FUN_004970c0(param_1,piVar2,-1,local_14,local_18 + 1,'\0');
              FUN_004ae830(piVar4,0x70,local_18,iVar5);
              if ((*(byte *)(local_8 + 0x18) & 0x10) != 0) {
                FUN_004ae830(piVar4,0x14,local_20,1);
              }
              FUN_004bbe40(local_2c);
              local_2c = (int *)FUN_004b6b80(piVar4);
              if (local_1c == 0) {
                FUN_004a1030(param_1,piVar2,local_14,0x28);
              }
              iVar5 = FUN_004ae890(piVar4,0x71,local_18,local_2c,local_18 + 1);
              local_34 = CONCAT44(iVar5,(int)local_34);
              if ((*(byte *)((int)piVar2 + 0x2a) & 0x10) == 0) {
                FUN_0049c510(param_1,piVar2,local_14,local_18 + 1,
                             (uint)(*(char *)((int)param_1 + 0x12) == '\0'),local_24,99);
              }
              else {
                piVar2 = (int *)FUN_0049d250(local_8,(int)piVar2);
                FUN_004b9d20(param_1,(int)local_28);
                FUN_004ae8f0(piVar4,0x8c,0,1,local_18 + 1,piVar2,0xfffffff6);
                FUN_004aee30((int)piVar4,2);
                piVar2 = param_1;
                if ((int *)param_1[0x6c] != (int *)0x0) {
                  piVar2 = (int *)param_1[0x6c];
                }
                *(undefined1 *)(piVar2 + 6) = 1;
                piVar2 = local_28;
              }
              FUN_004ae830(piVar4,1,0,local_34._4_4_);
              FUN_004b87b0((int)piVar4,(int)local_2c);
              if ((local_1c == 0) && ((*(byte *)((int)piVar2 + 0x2a) & 0x10) == 0)) {
                iVar3 = local_14;
                for (iVar5 = piVar2[2]; iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x14)) {
                  iVar3 = iVar3 + 1;
                  FUN_004ae830(piVar4,0x2d,iVar3,*(undefined4 *)(iVar5 + 0x28));
                }
                FUN_004ae7d0(piVar4,0x2d,local_14);
              }
            }
            if ((*(char *)((int)param_1 + 0x12) == '\0') && (param_1[0x6d] == 0)) {
              FUN_0048dbc0(param_1);
            }
            piVar6 = local_c;
            iVar3 = local_10;
            iVar5 = local_8;
            if ((((*(byte *)(local_8 + 0x18) & 0x10) != 0) &&
                (*(char *)((int)param_1 + 0x12) == '\0')) && (param_1[0x6d] == 0)) {
              FUN_004ae830(piVar4,0x10,local_20,1);
              FUN_004b8c50(piVar4,1);
              FUN_004b8c10(piVar4,0,0,"rows deleted",(undefined *)0x0);
              piVar6 = local_c;
              iVar3 = local_10;
              iVar5 = local_8;
            }
          }
        }
        goto LAB_004952d6;
      }
    }
  }
  piVar6 = local_34._4_4_;
  iVar3 = (int)local_34;
LAB_004952d6:
  if (piVar6 != (int *)0x0) {
    piVar6[0x81] = iVar3;
  }
  FUN_004a9cb0(iVar5,param_2);
  FUN_00498790(iVar5,(undefined4 *)param_3);
  return;
}


/* FUN_00495540 @ 00495540  kind=gamemisc  attributed-by=none  size=107 */

int __cdecl FUN_00495540(char *param_1)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char cVar4;
  
  if (param_1 == (char *)0x0) {
    return -1;
  }
  cVar4 = *param_1;
  switch(cVar4) {
  case '\"':
  case '\'':
  case '`':
    break;
  default:
    return -1;
  case '[':
    cVar4 = ']';
  }
  pcVar1 = param_1 + 1;
  iVar2 = 0;
  if (*pcVar1 != '\0') {
    pcVar3 = param_1 + 2;
    do {
      if (*pcVar1 == cVar4) {
        if (*pcVar3 != cVar4) break;
        param_1[iVar2] = cVar4;
        pcVar3 = pcVar3 + 1;
        pcVar1 = pcVar1 + 1;
      }
      else {
        param_1[iVar2] = *pcVar1;
      }
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar1 != '\0');
  }
  param_1[iVar2] = '\0';
  return iVar2;
}


/* FUN_00495a40 @ 00495a40  kind=gamemisc  attributed-by=none  size=376 */

void __cdecl FUN_00495a40(int *param_1,short *param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  byte *pbVar11;
  uint uVar12;
  undefined4 *local_c;
  
  local_c = (undefined4 *)0x0;
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0x38) == '\0') {
    if ((*(char *)(iVar2 + 0x81) == '\0') && (iVar5 = FUN_0049ddb0(iVar2,param_1 + 1), iVar5 != 0))
    {
      param_1[0x11] = param_1[0x11] + 1;
      param_1[3] = iVar5;
      FUN_004a9cb0(iVar2,param_2);
      return;
    }
    pbVar3 = *(byte **)(param_2 + 6);
    pbVar4 = *(byte **)(param_2 + 8);
    uVar12 = 0;
    if (pbVar4 != (byte *)0x0) {
      bVar1 = *pbVar4;
      pbVar11 = pbVar4;
      while (bVar1 != 0) {
        pbVar11 = pbVar11 + 1;
        bVar1 = *pbVar11;
      }
      uVar12 = (int)pbVar11 - (int)pbVar4 & 0x3fffffff;
    }
    iVar5 = *(int *)(iVar2 + 0x14);
    uVar8 = 0;
    if (0 < iVar5) {
      do {
        uVar9 = uVar8;
        if ((int)uVar8 < 2) {
          uVar9 = uVar8 ^ 1;
        }
        if ((pbVar3 == (byte *)0x0) ||
           (iVar6 = FUN_004bcc60(*(byte **)(*(int *)(iVar2 + 0x10) + uVar9 * 0x10),pbVar3),
           iVar6 == 0)) {
          iVar6 = *(int *)(*(int *)(iVar2 + 0x10) + 0xc + uVar9 * 0x10);
          puVar10 = (uint *)(iVar6 + 0x28);
          if (*(int *)(iVar6 + 0x34) == 0) {
            uVar9 = 0;
          }
          else {
            uVar9 = FUN_004bd210(pbVar4,uVar12);
            uVar9 = uVar9 % *puVar10;
          }
          puVar7 = FUN_00479af0((int)puVar10,*(byte **)(param_2 + 8),uVar12,uVar9);
          if (puVar7 == (undefined4 *)0x0) {
            local_c = (undefined4 *)0x0;
          }
          else {
            local_c = (undefined4 *)puVar7[2];
            if (local_c != (undefined4 *)0x0) goto LAB_00495b65;
          }
        }
        uVar8 = uVar8 + 1;
      } while ((int)uVar8 < iVar5);
      if (local_c != (undefined4 *)0x0) {
LAB_00495b65:
        FUN_00495bc0(param_1,local_c);
        goto LAB_00495ba7;
      }
    }
    if (param_3 == 0) {
      FUN_004962b0(param_1,(byte *)"no such trigger: %S");
    }
    else {
      FUN_00493360(param_1,pbVar3);
    }
    *(undefined1 *)((int)param_1 + 0x11) = 1;
  }
LAB_00495ba7:
  FUN_004a9cb0(iVar2,param_2);
  return;
}


/* FUN_004961f0 @ 004961f0  kind=gamemisc  attributed-by=none  size=186 */

void __cdecl FUN_004961f0(int param_1,undefined4 param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 0xd4) == 0) {
      iVar2 = FUN_004ae630(param_1);
      *(int *)(param_1 + 0xd4) = iVar2;
      if (iVar2 == 0) {
        return;
      }
    }
    *(undefined4 *)(param_1 + 0x2c) = param_2;
    if (param_3 == (byte *)0x0) {
      iVar2 = *(int *)(param_1 + 0xd4);
      if (iVar2 != 0) {
        if ((*(byte *)(iVar2 + 0x1c) & 0x40) != 0) {
          piVar1 = *(int **)(iVar2 + 0x10);
          piVar1[1] = *(int *)(*piVar1 + 0xa4);
          *(int **)(*piVar1 + 0xa4) = piVar1;
        }
        if ((*(byte *)(iVar2 + 0x1c) & 0x20) != 0) {
          FUN_004a6e20(*(undefined4 **)(iVar2 + 0x10));
        }
        *(ushort *)(iVar2 + 0x1c) = *(ushort *)(iVar2 + 0x1c) & 0xbe01 | 1;
        *(undefined1 *)(iVar2 + 0x1e) = 5;
      }
    }
    else {
      pvVar3 = (void *)FUN_004ad2f0(param_1,param_3,(double *)&stack0x00000010);
      if (*(int **)(param_1 + 0xd4) != (int *)0x0) {
        FUN_004b79e0(*(int **)(param_1 + 0xd4),pvVar3,0xffffffff,'\x01',FUN_004a0570);
        return;
      }
    }
  }
  return;
}


/* FUN_004962b0 @ 004962b0  kind=gamemisc  attributed-by=none  size=183 */

void __cdecl FUN_004962b0(int *param_1,byte *param_2)

{
  int iVar1;
  undefined4 *puVar2;
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
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_68 = local_50;
  iVar1 = *param_1;
  local_58 = *(undefined4 *)(iVar1 + 0x50);
  local_60 = 0;
  local_5c = 0x46;
  local_53 = 1;
  local_54 = '\0';
  local_6c = iVar1;
  local_64 = local_68;
  FUN_004ad370(&local_6c,1,param_2,(double *)&stack0x0000000c);
  puVar2 = (undefined4 *)FUN_004aa8f0(&local_6c);
  if (local_54 != '\0') {
    *(undefined1 *)(iVar1 + 0x38) = 1;
  }
  if (*(char *)(iVar1 + 0x3b) != '\0') {
    FUN_00494b00(iVar1,puVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  param_1[0x11] = param_1[0x11] + 1;
  FUN_00494b00(iVar1,(undefined4 *)param_1[1]);
  param_1[1] = (int)puVar2;
  param_1[3] = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00496370 @ 00496370  kind=gamemisc  attributed-by=none  size=29 */

void __cdecl FUN_00496370(int param_1)

{
  int iVar1;
  
  for (iVar1 = *(int *)(param_1 + 4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x3c)) {
    *(uint *)(iVar1 + 0x60) = *(uint *)(iVar1 + 0x60) | 0x20;
  }
  return;
}


/* FUN_00496390 @ 00496390  kind=gamemisc  attributed-by=none  size=67 */

void __cdecl FUN_00496390(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  char *local_c;
  uint local_8;
  
  local_c = param_3;
  if (param_3 == (char *)0x0) {
    local_8 = 0;
  }
  else {
    cVar1 = *param_3;
    pcVar2 = param_3;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    local_8 = (int)pcVar2 - (int)param_3 & 0x3fffffff;
  }
  FUN_00496510(param_1,param_2,&local_c,0);
  return;
}


/* FUN_004963e0 @ 004963e0  kind=gamemisc  attributed-by=none  size=96 */

undefined4 * __cdecl FUN_004963e0(int *param_1,undefined4 *param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *local_c;
  uint local_8;
  
  local_c = param_3;
  local_8 = 0;
  if (param_3 != (char *)0x0) {
    cVar1 = *param_3;
    pcVar2 = param_3;
    while (cVar1 != '\0') {
      pcVar2 = pcVar2 + 1;
      cVar1 = *pcVar2;
    }
    local_8 = (int)pcVar2 - (int)param_3 & 0x3fffffff;
  }
  if ((local_8 != 0) &&
     (puVar3 = FUN_00496510(*param_1,0x5c,&local_c,1), puVar3 != (undefined4 *)0x0)) {
    *(ushort *)((int)puVar3 + 2) = *(ushort *)((int)puVar3 + 2) | 0x100;
    puVar3[2] = param_2;
    return puVar3;
  }
  return param_2;
}


/* FUN_00496440 @ 00496440  kind=gamemisc  attributed-by=none  size=56 */

undefined4 * __cdecl FUN_00496440(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_3[1] != 0) {
    puVar1 = FUN_00496510(*param_1,0x5c,param_3,1);
    if (puVar1 != (undefined4 *)0x0) {
      puVar1[2] = param_2;
      *(ushort *)((int)puVar1 + 2) = *(ushort *)((int)puVar1 + 2) | 0x100;
      return puVar1;
    }
  }
  return param_2;
}


/* FUN_00496480 @ 00496480  kind=gamemisc  attributed-by=none  size=133 */

char __cdecl FUN_00496480(char *param_1)

{
  char cVar1;
  
  while( true ) {
    for (; (param_1 != (char *)0x0 && ((*param_1 == '\\' || (*param_1 == '\x18'))));
        param_1 = *(char **)(param_1 + 8)) {
    }
    cVar1 = *param_1;
    if (cVar1 != 't') break;
    param_1 = (char *)**(undefined4 **)(**(int **)(param_1 + 0x10) + 8);
  }
  if (cVar1 == '%') {
    cVar1 = FUN_0048bf70(*(byte **)(param_1 + 4));
    return cVar1;
  }
  if ((((cVar1 == -0x66) || (cVar1 == -0x68)) || (cVar1 == -0x7c)) &&
     (*(int *)(param_1 + 0x28) != 0)) {
    if (-1 < *(short *)(param_1 + 0x1c)) {
      return *(char *)(*(int *)(*(int *)(param_1 + 0x28) + 4) + 0x15 +
                      *(short *)(param_1 + 0x1c) * 0x18);
    }
    return 'd';
  }
  return param_1[1];
}


/* FUN_00496510 @ 00496510  kind=gamemisc  attributed-by=none  size=254 */

undefined4 * __cdecl FUN_00496510(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  undefined4 *_Dst;
  int iVar3;
  uint local_8;
  
  iVar3 = 0;
  local_8 = 0;
  if (param_3 != (undefined4 *)0x0) {
    if ((param_2 == 0x81) && ((char *)*param_3 != (char *)0x0)) {
      iVar2 = FUN_0049ca30((char *)*param_3,&local_8);
      if (iVar2 != 0) goto LAB_00496547;
    }
    iVar3 = param_3[1] + 1;
  }
LAB_00496547:
  _Dst = FUN_00494b90(param_1,iVar3 + 0x2c);
  if (_Dst != (undefined4 *)0x0) {
    memset(_Dst,0,iVar3 + 0x2c);
    *(char *)_Dst = (char)param_2;
    *(undefined2 *)((int)_Dst + 0x1e) = 0xffff;
    if (param_3 != (undefined4 *)0x0) {
      if (iVar3 == 0) {
        *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x400;
        _Dst[1] = local_8;
        _Dst[5] = 1;
        return _Dst;
      }
      _Dst[1] = _Dst + 0xb;
      if (param_3[1] != 0) {
        memcpy(_Dst + 0xb,(void *)*param_3,param_3[1]);
      }
      *(undefined1 *)(param_3[1] + _Dst[1]) = 0;
      if (((param_4 != 0) && (2 < iVar3)) &&
         ((cVar1 = *(char *)*param_3, cVar1 == '\'' ||
          (((cVar1 == '\"' || (cVar1 == '[')) || (cVar1 == '`')))))) {
        FUN_00495540((char *)_Dst[1]);
        if (cVar1 == '\"') {
          *(ushort *)((int)_Dst + 2) = *(ushort *)((int)_Dst + 2) | 0x40;
        }
      }
    }
    _Dst[5] = 1;
  }
  return _Dst;
}


/* FUN_00496610 @ 00496610  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00496610(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)param_2[2];
    iVar2 = 0;
    if (0 < *param_2) {
      do {
        local_8 = param_1;
        local_10 = 0;
        local_18 = 0x46a0200046c7b0;
        FUN_004bb020((undefined4 *)&local_18,*piVar1);
        iVar2 = iVar2 + 1;
        piVar1 = piVar1 + 5;
      } while (iVar2 < *param_2);
    }
  }
  return;
}


/* FUN_00496680 @ 00496680  kind=gamemisc  attributed-by=none  size=65 */

void __cdecl FUN_00496680(undefined4 param_1,int param_2)

{
  undefined8 local_18;
  undefined8 local_10;
  undefined4 local_8;
  
  local_8 = param_1;
  local_10 = 0;
  local_18 = 0x46a0200046c7b0;
  FUN_004bb020((undefined4 *)&local_18,param_2);
  return;
}


/* FUN_004966d0 @ 004966d0  kind=gamemisc  attributed-by=none  size=199 */

char * __cdecl FUN_004966d0(int param_1,char *param_2,char *param_3)

{
  byte *pbVar1;
  char *pcVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var;
  char *_Dst;
  char *pcVar5;
  
  pcVar2 = param_3;
  pcVar5 = param_2;
  if (param_2 == (char *)0x0) {
    return param_3;
  }
  if (param_3 == (char *)0x0) {
    return param_2;
  }
  pbVar1 = (byte *)(param_2 + 2);
  param_2 = (char *)0x0;
  if ((*pbVar1 & 1) == 0) {
    iVar4 = FUN_00498e90(pcVar5,(int *)&param_2);
    if ((iVar4 != 0) && (param_2 == (char *)0x0)) goto LAB_0049676d;
  }
  bVar3 = FUN_00477d20(pcVar2);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    _Dst = (char *)FUN_00494b90(param_1,0x2c);
    if (_Dst != (char *)0x0) {
      memset(_Dst,0,0x2c);
      *_Dst = 'E';
      _Dst[0x1e] = -1;
      _Dst[0x1f] = -1;
      _Dst[0x14] = '\x01';
      _Dst[0x15] = '\0';
      _Dst[0x16] = '\0';
      _Dst[0x17] = '\0';
    }
    FUN_00496a30(param_1,(int)_Dst,(undefined4 *)pcVar5,(undefined4 *)pcVar2);
    return _Dst;
  }
LAB_0049676d:
  FUN_00498790(param_1,(undefined4 *)pcVar5);
  FUN_00498790(param_1,(undefined4 *)pcVar2);
  pcVar5 = (char *)FUN_00496510(param_1,0x81,&PTR_DAT_00569820,0);
  return pcVar5;
}


/* FUN_004967a0 @ 004967a0  kind=gamemisc  attributed-by=none  size=655 */

void __cdecl FUN_004967a0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
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
    goto LAB_004969ed;
  }
  piVar10 = local_8;
  cVar1 = (char)*local_8;
  while (cVar1 != '\0') {
    piVar10 = (int *)((int)piVar10 + 1);
    cVar1 = *(char *)piVar10;
  }
  _Size = (int)piVar10 - (int)local_8 & 0x3fffffff;
  if ((char)*local_8 == '?') {
    iVar6 = FUN_0048d300((byte *)((int)local_8 + 1),&local_10,_Size - 1,'\x01');
    sVar8 = (short)local_10;
    *(short *)(param_2 + 0x1c) = sVar8;
    if (((iVar6 == 0) && (-1 < local_c)) && ((0 < local_c || (local_10 != 0)))) {
      iVar6 = (int)*(uint *)(iVar2 + 0x74) >> 0x1f;
      if ((iVar6 <= local_c) && ((iVar6 < local_c || (*(uint *)(iVar2 + 0x74) < local_10))))
      goto LAB_00496844;
    }
    else {
LAB_00496844:
      FUN_004962b0(param_1,(byte *)"variable number must be between ?1 and ?%d");
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
            if (*piVar10 != *piVar9) goto LAB_004968bf;
            piVar10 = piVar10 + 1;
            piVar9 = piVar9 + 1;
            uVar5 = uVar3 - 4;
            uVar4 = uVar3;
          }
          if (uVar3 != 0xfffffffc) {
LAB_004968bf:
            if (((char)*piVar10 != (char)*piVar9) ||
               ((uVar3 != 0xfffffffd &&
                ((*(char *)((int)piVar10 + 1) != *(char *)((int)piVar9 + 1) ||
                 ((uVar3 != 0xfffffffe &&
                  ((*(char *)((int)piVar10 + 2) != *(char *)((int)piVar9 + 2) ||
                   ((uVar3 != 0xffffffff &&
                    (*(char *)((int)piVar10 + 3) != *(char *)((int)piVar9 + 3)))))))))))))
            goto LAB_004968ff;
          }
          sVar8 = (short)local_c + 1;
          *(short *)(param_2 + 0x1c) = sVar8;
          bVar11 = sVar8 == 0;
          if (!bVar11) goto LAB_0049692d;
          break;
        }
LAB_004968ff:
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
LAB_0049692d:
  if (!bVar11 && -1 < sVar8) {
    iVar6 = (int)sVar8;
    if (param_1[0x74] < iVar6) {
      puVar7 = FUN_00494cf0(iVar2,(undefined4 *)param_1[0x7b],iVar6 * 4);
      if (puVar7 == (undefined4 *)0x0) {
        return;
      }
      param_1[0x7b] = (int)puVar7;
      memset(puVar7 + param_1[0x74],0,(iVar6 - param_1[0x74]) * 4);
      param_1[0x74] = iVar6;
    }
    if (((char)*local_8 != '?') || (*(int *)(param_1[0x7b] + -4 + iVar6 * 4) == 0)) {
      FUN_00494b00(iVar2,*(undefined4 **)(param_1[0x7b] + -4 + iVar6 * 4));
      puVar7 = FUN_00494b90(iVar2,_Size + 1);
      if (puVar7 != (undefined4 *)0x0) {
        memcpy(puVar7,local_8,_Size);
        *(undefined1 *)((int)puVar7 + _Size) = 0;
      }
      *(undefined4 **)(param_1[0x7b] + -4 + iVar6 * 4) = puVar7;
    }
  }
LAB_004969ed:
  if ((param_1[0x11] == 0) && (*(int *)(iVar2 + 0x74) < param_1[0x73])) {
    FUN_004962b0(param_1,(byte *)"too many SQL variables");
  }
  return;
}


/* FUN_00496a30 @ 00496a30  kind=gamemisc  attributed-by=none  size=95 */

void __cdecl FUN_00496a30(int param_1,int param_2,undefined4 *param_3,undefined4 *param_4)

{
  if (param_2 == 0) {
    FUN_00498790(param_1,param_3);
    FUN_00498790(param_1,param_4);
    return;
  }
  if (param_4 != (undefined4 *)0x0) {
    *(undefined4 **)(param_2 + 0xc) = param_4;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)((int)param_4 + 2) & 0x100;
  }
  if (param_3 != (undefined4 *)0x0) {
    *(undefined4 **)(param_2 + 8) = param_3;
    *(ushort *)(param_2 + 2) = *(ushort *)(param_2 + 2) | *(ushort *)((int)param_3 + 2) & 0x100;
  }
  FUN_004790b0(param_2);
  return;
}


/* FUN_00496a90 @ 00496a90  kind=gamemisc  attributed-by=none  size=526 */

void __cdecl FUN_00496a90(int param_1)

{
  if (*(int *)(param_1 + 0x74) != 0) {
    if (*(char *)(param_1 + 0x6c) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x74);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x6c) = 0;
    }
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  if (*(int *)(param_1 + 0x8c) != 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x8c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x84) = 0;
    }
    *(undefined4 *)(param_1 + 0x8c) = 0;
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    if (*(char *)(param_1 + 0x9c) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xa4);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x9c) = 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
  }
  if (*(int *)(param_1 + 0xbc) != 0) {
    if (*(char *)(param_1 + 0xb4) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xbc);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xb4) = 0;
    }
    *(undefined4 *)(param_1 + 0xbc) = 0;
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    if (*(char *)(param_1 + 0xcc) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xd4);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xcc) = 0;
    }
    *(undefined4 *)(param_1 + 0xd4) = 0;
  }
  if (*(int *)(param_1 + 0xec) != 0) {
    if (*(char *)(param_1 + 0xe4) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0xec);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xe4) = 0;
    }
    *(undefined4 *)(param_1 + 0xec) = 0;
  }
  if (*(int *)(param_1 + 0x104) != 0) {
    if (*(char *)(param_1 + 0xfc) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x104);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0xfc) = 0;
    }
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    if (*(char *)(param_1 + 0x114) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x11c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x114) = 0;
    }
    *(undefined4 *)(param_1 + 0x11c) = 0;
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    if (*(char *)(param_1 + 300) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x134);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 300) = 0;
    }
    *(undefined4 *)(param_1 + 0x134) = 0;
  }
  if (*(int *)(param_1 + 0x14c) != 0) {
    if (*(char *)(param_1 + 0x144) != '\0') {
      if (*(byte *)(param_1 + 0x13) < 8) {
        *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *(int *)(param_1 + 0x14c);
        *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
      }
      *(undefined1 *)(param_1 + 0x144) = 0;
    }
    *(undefined4 *)(param_1 + 0x14c) = 0;
  }
  return;
}


/* FUN_00496ca0 @ 00496ca0  kind=gamemisc  attributed-by=none  size=155 */

void __cdecl FUN_00496ca0(int param_1,int param_2)

{
  if (*(int *)(param_1 + 0x74) == param_2) {
    *(undefined1 *)(param_1 + 0x6c) = 0;
  }
  if (*(int *)(param_1 + 0x8c) == param_2) {
    *(undefined1 *)(param_1 + 0x84) = 0;
  }
  if (*(int *)(param_1 + 0xa4) == param_2) {
    *(undefined1 *)(param_1 + 0x9c) = 0;
  }
  if (*(int *)(param_1 + 0xbc) == param_2) {
    *(undefined1 *)(param_1 + 0xb4) = 0;
  }
  if (*(int *)(param_1 + 0xd4) == param_2) {
    *(undefined1 *)(param_1 + 0xcc) = 0;
  }
  if (*(int *)(param_1 + 0xec) == param_2) {
    *(undefined1 *)(param_1 + 0xe4) = 0;
  }
  if (*(int *)(param_1 + 0x104) == param_2) {
    *(undefined1 *)(param_1 + 0xfc) = 0;
  }
  if (*(int *)(param_1 + 0x11c) == param_2) {
    *(undefined1 *)(param_1 + 0x114) = 0;
  }
  if (*(int *)(param_1 + 0x134) == param_2) {
    *(undefined1 *)(param_1 + 300) = 0;
  }
  if (*(int *)(param_1 + 0x14c) == param_2) {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  return;
}


/* FUN_00496d40 @ 00496d40  kind=gamemisc  attributed-by=none  size=80 */

void __cdecl FUN_00496d40(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) - param_2;
  piVar1 = (int *)(param_1 + 0x74);
  iVar2 = 10;
  do {
    if ((*piVar1 != 0) && (*(int *)(param_1 + 0x5c) < piVar1[-1])) {
      if ((char)piVar1[-2] != '\0') {
        if (*(byte *)(param_1 + 0x13) < 8) {
          *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = *piVar1;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar1 + -2) = 0;
      }
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* FUN_00496d90 @ 00496d90  kind=gamemisc  attributed-by=none  size=90 */

void __cdecl FUN_00496d90(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)(param_1 + 0x74);
  iVar3 = 10;
  do {
    iVar1 = *piVar2;
    if ((param_2 <= iVar1) && (iVar1 <= param_3 + -1 + param_2)) {
      if ((char)piVar2[-2] != '\0') {
        if (*(byte *)(param_1 + 0x13) < 8) {
          *(int *)(param_1 + 0x1c + (uint)*(byte *)(param_1 + 0x13) * 4) = iVar1;
          *(char *)(param_1 + 0x13) = *(char *)(param_1 + 0x13) + '\x01';
        }
        *(undefined1 *)(piVar2 + -2) = 0;
      }
      *piVar2 = 0;
    }
    piVar2 = piVar2 + 6;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return;
}


/* FUN_00496df0 @ 00496df0  kind=gamemisc  attributed-by=none  size=26 */

void __cdecl FUN_00496df0(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if ((*(byte *)(*param_1 + 0x34) & 2) != 0) {
    return;
  }
  iVar1 = 0;
  piVar2 = param_1 + 0x19;
  do {
    if (piVar2[4] == 0) {
      piVar2[3] = param_1[0x17];
      *piVar2 = param_2;
      piVar2[1] = param_3;
      piVar2[4] = param_4;
      *(undefined1 *)(piVar2 + 2) = 0;
      piVar2[5] = param_1[0x18];
      param_1[0x18] = param_1[0x18] + 1;
      return;
    }
    iVar1 = iVar1 + 1;
    piVar2 = piVar2 + 6;
  } while (iVar1 < 10);
  iVar3 = -1;
  iVar1 = 0x7fffffff;
  if (param_1[0x1e] < 0x7fffffff) {
    iVar3 = 0;
    iVar1 = param_1[0x1e];
  }
  if (param_1[0x24] < iVar1) {
    iVar3 = 1;
    iVar1 = param_1[0x24];
  }
  if (param_1[0x2a] < iVar1) {
    iVar3 = 2;
    iVar1 = param_1[0x2a];
  }
  if (param_1[0x30] < iVar1) {
    iVar3 = 3;
    iVar1 = param_1[0x30];
  }
  if (param_1[0x36] < iVar1) {
    iVar3 = 4;
    iVar1 = param_1[0x36];
  }
  if (param_1[0x3c] < iVar1) {
    iVar3 = 5;
    iVar1 = param_1[0x3c];
  }
  if (param_1[0x42] < iVar1) {
    iVar3 = 6;
    iVar1 = param_1[0x42];
  }
  if (param_1[0x48] < iVar1) {
    iVar3 = 7;
    iVar1 = param_1[0x48];
  }
  if (param_1[0x4e] < iVar1) {
    iVar3 = 8;
    iVar1 = param_1[0x4e];
  }
  if (param_1[0x54] < iVar1) {
    iVar3 = 9;
  }
  else if (iVar3 < 0) {
    return;
  }
  param_1[iVar3 * 6 + 0x1c] = param_1[0x17];
  param_1[iVar3 * 6 + 0x19] = param_2;
  param_1[iVar3 * 6 + 0x1a] = param_3;
  param_1[iVar3 * 6 + 0x1d] = param_4;
  *(undefined1 *)(param_1 + iVar3 * 6 + 0x1b) = 0;
  param_1[iVar3 * 6 + 0x1e] = param_1[0x18];
  param_1[0x18] = param_1[0x18] + 1;
  return;
}


/* FUN_00496e0a @ 00496e0a  kind=gamemisc  attributed-by=none  size=286 */

void __fastcall FUN_00496e0a(undefined4 *param_1)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  
  do {
    if (param_1[4] == 0) {
      param_1[3] = *(undefined4 *)(unaff_ESI + 0x5c);
      *param_1 = *(undefined4 *)(unaff_EBP + 0xc);
      param_1[1] = *(undefined4 *)(unaff_EBP + 0x10);
      param_1[4] = *(undefined4 *)(unaff_EBP + 0x14);
      *(undefined1 *)(param_1 + 2) = 0;
      param_1[5] = *(undefined4 *)(unaff_ESI + 0x60);
      *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
      return;
    }
    in_EAX = in_EAX + 1;
    param_1 = param_1 + 6;
  } while (in_EAX < 10);
  iVar2 = -1;
  iVar1 = 0x7fffffff;
  if (*(int *)(unaff_ESI + 0x78) < 0x7fffffff) {
    iVar2 = 0;
    iVar1 = *(int *)(unaff_ESI + 0x78);
  }
  if (*(int *)(unaff_ESI + 0x90) < iVar1) {
    iVar2 = 1;
    iVar1 = *(int *)(unaff_ESI + 0x90);
  }
  if (*(int *)(unaff_ESI + 0xa8) < iVar1) {
    iVar2 = 2;
    iVar1 = *(int *)(unaff_ESI + 0xa8);
  }
  if (*(int *)(unaff_ESI + 0xc0) < iVar1) {
    iVar2 = 3;
    iVar1 = *(int *)(unaff_ESI + 0xc0);
  }
  if (*(int *)(unaff_ESI + 0xd8) < iVar1) {
    iVar2 = 4;
    iVar1 = *(int *)(unaff_ESI + 0xd8);
  }
  if (*(int *)(unaff_ESI + 0xf0) < iVar1) {
    iVar2 = 5;
    iVar1 = *(int *)(unaff_ESI + 0xf0);
  }
  if (*(int *)(unaff_ESI + 0x108) < iVar1) {
    iVar2 = 6;
    iVar1 = *(int *)(unaff_ESI + 0x108);
  }
  if (*(int *)(unaff_ESI + 0x120) < iVar1) {
    iVar2 = 7;
    iVar1 = *(int *)(unaff_ESI + 0x120);
  }
  if (*(int *)(unaff_ESI + 0x138) < iVar1) {
    iVar2 = 8;
    iVar1 = *(int *)(unaff_ESI + 0x138);
  }
  if (*(int *)(unaff_ESI + 0x150) < iVar1) {
    iVar2 = 9;
  }
  else if (iVar2 < 0) {
    return;
  }
  iVar1 = unaff_ESI + iVar2 * 0x18;
  *(undefined4 *)(iVar1 + 0x70) = *(undefined4 *)(unaff_ESI + 0x5c);
  *(undefined4 *)(iVar1 + 100) = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(iVar1 + 0x68) = *(undefined4 *)(unaff_EBP + 0x10);
  *(undefined4 *)(iVar1 + 0x74) = *(undefined4 *)(unaff_EBP + 0x14);
  *(undefined1 *)(iVar1 + 0x6c) = 0;
  *(undefined4 *)(iVar1 + 0x78) = *(undefined4 *)(unaff_ESI + 0x60);
  *(int *)(unaff_ESI + 0x60) = *(int *)(unaff_ESI + 0x60) + 1;
  return;
}


/* FUN_00496f30 @ 00496f30  kind=gamemisc  attributed-by=none  size=92 */

int __cdecl FUN_00496f30(int *param_1,byte *param_2,int param_3)

{
  int iVar1;
  
  if ((param_2 != (byte *)0x0) && (*param_2 == 0x84)) {
    FUN_004ae830((int *)param_1[2],0xe,*(undefined4 *)(param_2 + 0x18),param_3);
    return param_3;
  }
  iVar1 = FUN_00497780(param_1,param_2,param_3);
  if ((iVar1 != param_3) && ((int *)param_1[2] != (int *)0x0)) {
    FUN_004ae830((int *)param_1[2],0xf,iVar1,param_3);
  }
  return param_3;
}


/* FUN_00496f90 @ 00496f90  kind=gamemisc  attributed-by=none  size=122 */

int __cdecl FUN_00496f90(int *param_1,byte *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  undefined1 uVar4;
  
  piVar1 = (int *)param_1[2];
  if ((param_2 == (byte *)0x0) || (*param_2 != 0x84)) {
    iVar2 = FUN_00497780(param_1,param_2,param_3);
    if ((iVar2 == param_3) || (piVar3 = (int *)param_1[2], piVar3 == (int *)0x0)) goto LAB_00496fde;
    uVar4 = 0xf;
  }
  else {
    iVar2 = *(int *)(param_2 + 0x18);
    uVar4 = 0xe;
    piVar3 = piVar1;
  }
  FUN_004ae830(piVar3,uVar4,iVar2,param_3);
LAB_00496fde:
  if (*param_2 != 0x84) {
    param_1[0x13] = param_1[0x13] + 1;
    iVar2 = param_1[0x13];
    FUN_004ae830(piVar1,0xe,param_3,iVar2);
    *(int *)(param_2 + 0x18) = iVar2;
    param_2[0x23] = *param_2;
    *param_2 = 0x84;
  }
  return param_3;
}


/* FUN_00497010 @ 00497010  kind=gamemisc  attributed-by=none  size=170 */

int __cdecl FUN_00497010(int param_1,int *param_2,int param_3,int param_4)

{
  char *pcVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  
  piVar2 = (int *)*param_2;
  puVar7 = (undefined4 *)param_2[2];
  param_2 = piVar2;
  if (0 < (int)piVar2) {
    do {
      iVar5 = FUN_00497780((int *)param_1,(byte *)*puVar7,param_3);
      if (iVar5 != param_3) {
        piVar3 = *(int **)(param_1 + 8);
        iVar4 = piVar3[7];
        if ((iVar4 < piVar3[8]) || (iVar6 = FUN_0047de10(piVar3), iVar6 == 0)) {
          piVar3[7] = piVar3[7] + 1;
          iVar6 = piVar3[1];
          *(undefined1 *)(iVar6 + 3 + iVar4 * 0x14) = 0;
          pcVar1 = (char *)(iVar6 + iVar4 * 0x14);
          *pcVar1 = (param_4 == 0) + '\x0e';
          *(int *)(pcVar1 + 4) = iVar5;
          *(int *)(pcVar1 + 8) = param_3;
          pcVar1[0xc] = '\0';
          pcVar1[0xd] = '\0';
          pcVar1[0xe] = '\0';
          pcVar1[0xf] = '\0';
          pcVar1[0x10] = '\0';
          pcVar1[0x11] = '\0';
          pcVar1[0x12] = '\0';
          pcVar1[0x13] = '\0';
          pcVar1[1] = '\0';
        }
      }
      param_3 = param_3 + 1;
      puVar7 = puVar7 + 5;
      param_2 = (int *)((int)param_2 + -1);
    } while (param_2 != (int *)0x0);
    return (int)piVar2;
  }
  return (int)piVar2;
}


/* FUN_004970c0 @ 004970c0  kind=gamemisc  attributed-by=none  size=166 */

int __cdecl FUN_004970c0(int *param_1,int *param_2,int param_3,int param_4,int param_5,char param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int extraout_EDX;
  
  piVar1 = (int *)param_1[2];
  iVar2 = 0;
  piVar3 = param_1 + 0x19;
  while (((piVar3[4] < 1 || (*piVar3 != param_4)) || (piVar3[1] != param_3))) {
    iVar2 = iVar2 + 1;
    piVar3 = piVar3 + 6;
    if (9 < iVar2) {
      FUN_00497170(piVar1,param_2,param_4,param_3,param_5);
      if (param_6 == '\0') {
        FUN_00496df0(param_1,param_4,param_3,param_5);
      }
      else if (piVar1[1] != 0) {
        *(char *)(piVar1[1] + -0x11 + piVar1[7] * 0x14) = param_6;
        return param_5;
      }
      return param_5;
    }
  }
  piVar3[5] = param_1[0x18];
  param_1[0x18] = param_1[0x18] + 1;
  FUN_00496ca0((int)param_1,piVar3[4]);
  return *(int *)(extraout_EDX + 0x10);
}


/* FUN_00497170 @ 00497170  kind=gamemisc  attributed-by=none  size=165 */

void __cdecl FUN_00497170(int *param_1,int *param_2,undefined4 param_3,int param_4,int param_5)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((param_4 < 0) || (param_4 == (short)param_2[9])) {
    iVar1 = param_1[7];
    if ((iVar1 < param_1[8]) || (iVar3 = FUN_0047de10(param_1), iVar3 == 0)) {
      param_1[7] = param_1[7] + 1;
      iVar3 = param_1[1];
      *(undefined2 *)(iVar3 + iVar1 * 0x14) = 0x41;
      iVar3 = iVar3 + iVar1 * 0x14;
      *(undefined4 *)(iVar3 + 4) = param_3;
      *(undefined1 *)(iVar3 + 3) = 0;
      *(int *)(iVar3 + 8) = param_5;
      *(undefined4 *)(iVar3 + 0xc) = 0;
      *(undefined4 *)(iVar3 + 0x10) = 0;
    }
  }
  else {
    uVar2 = 0x1d;
    if ((*(byte *)((int)param_2 + 0x2a) & 0x10) != 0) {
      uVar2 = 0x89;
    }
    FUN_004ae890(param_1,uVar2,param_3,param_4,param_5);
  }
  if (-1 < param_4) {
    FUN_00493630(param_1,param_2,param_4,param_5);
  }
  return;
}


/* FUN_00497220 @ 00497220  kind=gamemisc  attributed-by=none  size=918 */

void __cdecl FUN_00497220(int *param_1,char *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  byte bVar11;
  int iVar12;
  int *piVar13;
  undefined1 uVar14;
  int local_c;
  char local_5;
  
  piVar10 = (int *)param_1[2];
  local_c = 0;
  iVar3 = FUN_004997b0(param_1,param_2,&local_c);
  local_5 = FUN_00475250((int)param_2);
  param_1[0x17] = param_1[0x17] + 1;
  if (*(char *)((int)param_1 + 0x13) == '\0') {
    param_1[0x13] = param_1[0x13] + 1;
    iVar12 = param_1[0x13];
  }
  else {
    bVar11 = *(char *)((int)param_1 + 0x13) - 1;
    *(byte *)((int)param_1 + 0x13) = bVar11;
    iVar12 = param_1[bVar11 + 7];
  }
  pbVar1 = *(byte **)(param_2 + 8);
  if ((pbVar1 == (byte *)0x0) || (*pbVar1 != 0x84)) {
    iVar5 = FUN_00497780(param_1,pbVar1,iVar12);
    if ((iVar5 == iVar12) || (piVar13 = (int *)param_1[2], piVar13 == (int *)0x0))
    goto LAB_004972b1;
    uVar14 = 0xf;
  }
  else {
    iVar5 = *(int *)(pbVar1 + 0x18);
    uVar14 = 0xe;
    piVar13 = (int *)param_1[2];
  }
  FUN_004ae830(piVar13,uVar14,iVar5,iVar12);
LAB_004972b1:
  if (param_4 == param_3) {
    FUN_004ae830(piVar10,0x49,iVar12,param_4);
  }
  else {
    uVar7 = FUN_004ae7d0(piVar10,0x4a,iVar12);
    FUN_004ae830(piVar10,0x48,*(undefined4 *)(param_2 + 0x18),param_3);
    iVar5 = piVar10[7];
    if ((iVar5 < piVar10[8]) || (iVar4 = FUN_0047de10(piVar10), iVar4 == 0)) {
      piVar10[7] = piVar10[7] + 1;
      iVar4 = piVar10[1];
      *(undefined2 *)(iVar4 + iVar5 * 0x14) = 1;
      *(undefined1 *)(iVar4 + 3 + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 4 + iVar5 * 0x14) = 0;
      *(int *)(iVar4 + 8 + iVar5 * 0x14) = param_4;
      *(undefined4 *)(iVar4 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar4 + 0x10 + iVar5 * 0x14) = 0;
    }
    if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar10[7])) {
      *(int *)(piVar10[1] + 8 + uVar7 * 0x14) = piVar10[7];
    }
  }
  if (iVar3 == 1) {
    FUN_004ae830(piVar10,0x15,iVar12,param_3);
    uVar2 = *(undefined4 *)(param_2 + 0x18);
    iVar3 = piVar10[7];
    if ((iVar3 < piVar10[8]) || (iVar5 = FUN_0047de10(piVar10), iVar5 == 0)) {
      piVar10[7] = piVar10[7] + 1;
      iVar5 = piVar10[1];
      *(undefined4 *)(iVar5 + 4 + iVar3 * 0x14) = uVar2;
      *(undefined2 *)(iVar5 + iVar3 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar3 * 0x14) = 0;
      *(int *)(iVar5 + 8 + iVar3 * 0x14) = param_3;
      *(int *)(iVar5 + 0xc + iVar3 * 0x14) = iVar12;
      *(undefined4 *)(iVar5 + 0x10 + iVar3 * 0x14) = 0;
    }
  }
  else {
    iVar3 = piVar10[7];
    if ((iVar3 < piVar10[8]) || (iVar5 = FUN_0047de10(piVar10), iVar5 == 0)) {
      iVar5 = piVar10[1];
      piVar10[7] = piVar10[7] + 1;
      *(undefined2 *)(iVar5 + iVar3 * 0x14) = 0x1e;
      *(undefined1 *)(iVar5 + 3 + iVar3 * 0x14) = 0;
      *(int *)(iVar5 + 4 + iVar3 * 0x14) = iVar12;
      *(undefined4 *)(iVar5 + 8 + iVar3 * 0x14) = 1;
      *(undefined4 *)(iVar5 + 0xc + iVar3 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x10 + iVar3 * 0x14) = 0;
    }
    else {
      iVar3 = 1;
    }
    iVar5 = *piVar10;
    if ((piVar10[1] == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
      FUN_0047bc80(iVar5,1,(int *)&local_5);
    }
    else {
      if (iVar3 < 0) {
        iVar3 = piVar10[7] + -1;
      }
      iVar4 = piVar10[1] + iVar3 * 0x14;
      FUN_0047bc80(iVar5,(int)*(char *)(iVar4 + 1),*(int **)(piVar10[1] + 0x10 + iVar3 * 0x14));
      *(undefined4 *)(iVar4 + 0x10) = 0;
      puVar6 = FUN_00494e00(*piVar10,&local_5,1);
      *(undefined4 **)(iVar4 + 0x10) = puVar6;
      *(undefined1 *)(iVar4 + 1) = 0xff;
    }
    if ((local_c == 0) || (param_3 == param_4)) {
      FUN_004ae960(piVar10,0x33,*(undefined4 *)(param_2 + 0x18),param_3,iVar12,(int *)0x1);
    }
    else {
      uVar7 = FUN_004ae960(piVar10,0x34,*(undefined4 *)(param_2 + 0x18),0,iVar12,(int *)0x1);
      uVar8 = FUN_004ae7d0(piVar10,0x4a,local_c);
      uVar9 = FUN_004ae960(piVar10,0x34,*(undefined4 *)(param_2 + 0x18),0,local_c,(int *)0x1);
      FUN_004ae830(piVar10,7,0xffffffff,local_c);
      if ((-1 < (int)uVar9) && (uVar9 < (uint)piVar10[7])) {
        *(int *)(piVar10[1] + 8 + uVar9 * 0x14) = piVar10[7];
      }
      FUN_004ae830(piVar10,0x14,local_c,1);
      if ((-1 < (int)uVar8) && (uVar8 < (uint)piVar10[7])) {
        *(int *)(piVar10[1] + 8 + uVar8 * 0x14) = piVar10[7];
      }
      FUN_004ae830(piVar10,0x1b,local_c,param_4);
      FUN_004ae830(piVar10,1,0,param_3);
      if ((-1 < (int)uVar7) && (uVar7 < (uint)piVar10[7])) {
        *(int *)(piVar10[1] + 8 + uVar7 * 0x14) = piVar10[7];
      }
    }
  }
  if ((iVar12 != 0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
    iVar3 = 0;
    piVar10 = param_1 + 0x19;
    while (piVar10[4] != iVar12) {
      iVar3 = iVar3 + 1;
      piVar10 = piVar10 + 6;
      if (9 < iVar3) {
        param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar12;
        *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        FUN_00496d40((int)param_1,1);
        return;
      }
    }
    *(undefined1 *)(piVar10 + 2) = 1;
  }
  FUN_00496d40((int)param_1,1);
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


/* FUN_00497600 @ 00497600  kind=gamemisc  attributed-by=none  size=371 */

void __cdecl FUN_00497600(int param_1,int param_2,int param_3,int param_4)

{
  undefined2 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  piVar2 = *(int **)(param_1 + 8);
  iVar3 = piVar2[7];
  if ((iVar3 < piVar2[8]) || (iVar4 = FUN_0047de10(piVar2), iVar4 == 0)) {
    piVar2[7] = piVar2[7] + 1;
    puVar1 = (undefined2 *)(piVar2[1] + iVar3 * 0x14);
    *puVar1 = 0xd;
    *(undefined1 *)((int)puVar1 + 3) = 0;
    *(int *)(puVar1 + 2) = param_2;
    *(int *)(puVar1 + 4) = param_3;
    *(int *)(puVar1 + 6) = param_4 + -1;
    *(undefined4 *)(puVar1 + 8) = 0;
  }
  iVar3 = *(int *)(param_1 + 0x74);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x74) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x8c) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xa4);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xa4) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xbc);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xbc) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xd4);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xd4) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0xec);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0xec) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x104);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x104) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x11c);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x11c) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x134);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x134) = (iVar3 - param_2) + param_3;
  }
  iVar3 = *(int *)(param_1 + 0x14c);
  if ((param_2 <= iVar3) && (iVar3 < param_2 + param_4)) {
    *(int *)(param_1 + 0x14c) = (iVar3 - param_2) + param_3;
  }
  return;
}


/* FUN_00498470 @ 00498470  kind=gamemisc  attributed-by=none  size=91 */

int __cdecl FUN_00498470(int param_1,byte *param_2,int *param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    *(int *)(param_1 + 0x4c) = *(int *)(param_1 + 0x4c) + 1;
    iVar3 = *(int *)(param_1 + 0x4c);
  }
  else {
    bVar1 = *(char *)(param_1 + 0x13) - 1;
    *(byte *)(param_1 + 0x13) = bVar1;
    iVar3 = *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
  }
  iVar2 = FUN_00497780((int *)param_1,param_2,iVar3);
  if (iVar2 == iVar3) {
    *param_3 = iVar3;
    return iVar2;
  }
  FUN_004a68f0(param_1,iVar3);
  *param_3 = 0;
  return iVar2;
}


/* FUN_004984d0 @ 004984d0  kind=gamemisc  attributed-by=none  size=316 */

uint __cdecl FUN_004984d0(int *param_1,char *param_2)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  char *pcVar5;
  int *piVar6;
  int *piVar7;
  
  iVar3 = *param_1;
  if (param_2 == (char *)0x0) {
    return 0;
  }
  do {
    cVar1 = *param_2;
    if ((cVar1 == '%') || (cVar1 == -99)) {
      pcVar5 = *(char **)(param_2 + 8);
    }
    else {
      if (cVar1 == '\\') {
        if (*(char *)(iVar3 + 0x81) == '\0') {
          piVar7 = FUN_0049c970(param_1,*(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d),
                                (int *)0x0,*(byte **)(param_2 + 4));
        }
        else {
          piVar7 = FUN_00499500(iVar3,*(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d),
                                *(byte **)(param_2 + 4),0);
        }
LAB_004985da:
        if (piVar7 != (int *)0x0) {
          piVar6 = FUN_0049c970(param_1,*(byte *)(*(int *)(*(int *)(*param_1 + 0x10) + 0xc) + 0x4d),
                                piVar7,(byte *)*piVar7);
          return -(uint)(piVar6 != (int *)0x0) & (uint)piVar7;
        }
        return 0;
      }
      if ((*(int *)(param_2 + 0x28) != 0) &&
         ((((cVar1 == -0x66 || (cVar1 == -0x68)) || (cVar1 == -0x7c)) || (cVar1 == '<')))) {
        if (*(short *)(param_2 + 0x1c) < 0) {
          return 0;
        }
        pbVar4 = *(byte **)(*(int *)(*(int *)(param_2 + 0x28) + 4) + 0x10 +
                           *(short *)(param_2 + 0x1c) * 0x18);
        bVar2 = *(byte *)(*(int *)(*(int *)(iVar3 + 0x10) + 0xc) + 0x4d);
        if (pbVar4 == (byte *)0x0) {
          piVar6 = *(int **)(iVar3 + 8);
        }
        else {
          piVar6 = FUN_004799f0(iVar3,pbVar4,0);
        }
        piVar7 = (int *)0x0;
        if (piVar6 != (int *)0x0) {
          piVar7 = piVar6 + (uint)bVar2 * 5 + -5;
        }
        goto LAB_004985da;
      }
      if ((*(ushort *)(param_2 + 2) & 0x100) == 0) {
        return 0;
      }
      pcVar5 = *(char **)(param_2 + 8);
      if ((pcVar5 == (char *)0x0) || ((*(ushort *)(pcVar5 + 2) & 0x100) == 0)) {
        pcVar5 = *(char **)(param_2 + 0xc);
      }
    }
    param_2 = pcVar5;
    if (pcVar5 == (char *)0x0) {
      return 0;
    }
  } while( true );
}


/* FUN_00498610 @ 00498610  kind=gamemisc  attributed-by=none  size=381 */

char __cdecl FUN_00498610(char *param_1,char *param_2)

{
  byte bVar1;
  char cVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  bool bVar7;
  
  if ((param_1 == (char *)0x0) || (param_2 == (char *)0x0)) {
    cVar2 = '\x02';
    if (param_2 == param_1) {
      cVar2 = '\0';
    }
    return cVar2;
  }
  if ((((*(ushort *)(param_1 + 2) & 0x800) == 0) && ((*(ushort *)(param_2 + 2) & 0x800) == 0)) &&
     ((((byte)*(ushort *)(param_2 + 2) ^ (byte)*(ushort *)(param_1 + 2)) & 0x10) == 0)) {
    if (*param_1 == *param_2) {
      cVar2 = FUN_00498610(*(char **)(param_1 + 8),*(char **)(param_2 + 8));
      if (CONCAT31(extraout_var_01,cVar2) != 0) {
        return '\x02';
      }
      cVar2 = FUN_00498610(*(char **)(param_1 + 0xc),*(char **)(param_2 + 0xc));
      if (CONCAT31(extraout_var_02,cVar2) != 0) {
        return '\x02';
      }
      iVar3 = FUN_00498fe0(*(int **)(param_1 + 0x10),*(int **)(param_2 + 0x10));
      if (iVar3 != 0) {
        return '\x02';
      }
      if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
        return '\x02';
      }
      if (*(short *)(param_1 + 0x1c) != *(short *)(param_2 + 0x1c)) {
        return '\x02';
      }
      if ((*(ushort *)(param_1 + 2) & 0x400) == 0) {
        cVar2 = *param_1;
        if (((cVar2 != -0x68) && (cVar2 != -0x66)) &&
           (pbVar6 = *(byte **)(param_1 + 4), pbVar6 != (byte *)0x0)) {
          if ((*(ushort *)(param_2 + 2) & 0x400) != 0) {
            return '\x02';
          }
          pbVar4 = *(byte **)(param_2 + 4);
          if (pbVar4 == (byte *)0x0) {
            return '\x02';
          }
          do {
            bVar1 = *pbVar6;
            bVar7 = bVar1 < *pbVar4;
            if (bVar1 != *pbVar4) {
LAB_00498756:
              uVar5 = -(uint)bVar7 | 1;
              goto LAB_0049875b;
            }
            if (bVar1 == 0) break;
            bVar1 = pbVar6[1];
            bVar7 = bVar1 < pbVar4[1];
            if (bVar1 != pbVar4[1]) goto LAB_00498756;
            pbVar6 = pbVar6 + 2;
            pbVar4 = pbVar4 + 2;
          } while (bVar1 != 0);
          uVar5 = 0;
LAB_0049875b:
          if (uVar5 != 0) {
            return (cVar2 != '\\') + '\x01';
          }
        }
      }
      else if (((*(ushort *)(param_2 + 2) & 0x400) == 0) ||
              (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) {
        return '\x02';
      }
      return '\0';
    }
    if ((*param_1 == '\\') &&
       (cVar2 = FUN_00498610(*(char **)(param_1 + 8),param_2), CONCAT31(extraout_var,cVar2) < 2)) {
      return '\x01';
    }
    if ((*param_2 == '\\') &&
       (cVar2 = FUN_00498610(param_1,*(char **)(param_2 + 8)), CONCAT31(extraout_var_00,cVar2) < 2))
    {
      return '\x01';
    }
  }
  return '\x02';
}


/* FUN_00498830 @ 00498830  kind=gamemisc  attributed-by=none  size=102 */

undefined4 * __cdecl FUN_00498830(int *param_1,int *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *param_1;
  puVar2 = FUN_00496510(iVar1,0x97,param_3,1);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_00499060(iVar1,param_2);
    return (undefined4 *)0x0;
  }
  puVar2[4] = param_2;
  FUN_004790b0((int)puVar2);
  if (*(int *)(*param_1 + 0x5c) < (int)puVar2[5]) {
    FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  return puVar2;
}


/* FUN_004988a0 @ 004988a0  kind=gamemisc  attributed-by=none  size=525 */

void __cdecl FUN_004988a0(int *param_1,char *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char cVar7;
  int local_8;
  
  uVar4 = param_4;
  iVar6 = param_3;
  pcVar3 = param_2;
  piVar2 = param_1;
  piVar1 = (int *)param_1[2];
  param_1 = (int *)0x0;
  local_8 = 0;
  if ((piVar1 != (int *)0x0) && (param_2 != (char *)0x0)) {
    cVar7 = (*param_2 + 1U ^ 1) - 1;
    switch(*param_2) {
    case '\x13':
      FUN_00498b60(piVar2,*(byte **)(param_2 + 8),param_3,param_4);
      break;
    default:
      iVar6 = FUN_00498470((int)piVar2,param_2,(int *)&param_1);
      FUN_004ae890(piVar1,0x1c,iVar6,param_3,(uint)(param_4 != 0));
      break;
    case 'D':
      iVar6 = FUN_004b6b80(piVar1);
      uVar4 = param_4;
      piVar2[0x17] = piVar2[0x17] + 1;
      FUN_00498b60(piVar2,*(byte **)(param_2 + 8),iVar6,param_4 ^ 8);
      FUN_004988a0(piVar2,*(char **)(param_2 + 0xc),param_3,uVar4);
      FUN_004b87b0((int)piVar1,iVar6);
      FUN_00496d40((int)piVar2,1);
      break;
    case 'E':
      FUN_004988a0(piVar2,*(char **)(param_2 + 8),param_3,param_4);
      FUN_004988a0(piVar2,*(char **)(param_2 + 0xc),iVar6,uVar4);
      break;
    case 'F':
    case -0x6e:
      iVar6 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pcVar3 + 0xc),&local_8);
      FUN_004733e0(piVar2,*(char **)(pcVar3 + 8),*(char **)(pcVar3 + 0xc),(*pcVar3 != 'F') + 'K',
                   iVar6,iVar5,param_3,0x80);
      break;
    case 'G':
      FUN_004789f0((int)piVar2,(int)param_2,param_3,0,param_4);
      break;
    case 'H':
      if (param_4 == 0) {
        iVar6 = FUN_004b6b80(piVar1);
        FUN_00497220(piVar2,pcVar3,param_3,iVar6);
        FUN_004b87b0((int)piVar1,iVar6);
      }
      else {
        FUN_00497220(piVar2,param_2,param_3,param_3);
      }
      break;
    case 'I':
    case 'J':
      iVar6 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      FUN_004ae830(piVar1,cVar7,iVar6,param_3);
      break;
    case 'K':
    case 'L':
    case 'M':
    case 'N':
    case 'O':
    case 'P':
      iVar6 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pcVar3 + 0xc),&local_8);
      FUN_004733e0(piVar2,*(char **)(pcVar3 + 8),*(char **)(pcVar3 + 0xc),cVar7,iVar6,iVar5,param_3,
                   (byte)param_4);
    }
    FUN_004a68f0((int)piVar2,(int)param_1);
    FUN_004a68f0((int)piVar2,local_8);
  }
  return;
}


/* FUN_00498b60 @ 00498b60  kind=gamemisc  attributed-by=none  size=521 */

void __cdecl FUN_00498b60(int *param_1,byte *param_2,int param_3,uint param_4)

{
  int *piVar1;
  int *piVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_c;
  uint local_8;
  
  uVar4 = param_4;
  iVar7 = param_3;
  pbVar3 = param_2;
  piVar2 = param_1;
  piVar1 = (int *)param_1[2];
  param_1 = (int *)0x0;
  local_c = 0;
  if ((piVar1 != (int *)0x0) && (param_2 != (byte *)0x0)) {
    local_8 = (uint)*param_2;
    switch(local_8) {
    case 0x13:
      FUN_004988a0(piVar2,*(char **)(param_2 + 8),param_3,param_4);
      break;
    default:
      iVar7 = FUN_00498470((int)piVar2,param_2,(int *)&param_1);
      FUN_004ae890(piVar1,0x1b,iVar7,param_3,(uint)(param_4 != 0));
      break;
    case 0x44:
      FUN_00498b60(piVar2,*(byte **)(param_2 + 8),param_3,param_4);
      FUN_00498b60(piVar2,*(byte **)(param_2 + 0xc),iVar7,uVar4);
      break;
    case 0x45:
      iVar7 = FUN_004b6b80(piVar1);
      uVar4 = param_4;
      piVar2[0x17] = piVar2[0x17] + 1;
      FUN_004988a0(piVar2,*(char **)(param_2 + 8),iVar7,param_4 ^ 8);
      FUN_00498b60(piVar2,*(byte **)(param_2 + 0xc),param_3,uVar4);
      FUN_004b87b0((int)piVar1,iVar7);
      FUN_00496d40((int)piVar2,1);
      break;
    case 0x46:
    case 0x92:
      iVar7 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pbVar3 + 0xc),&local_c);
      FUN_004733e0(piVar2,*(char **)(pbVar3 + 8),*(char **)(pbVar3 + 0xc),(local_8 == 0x46) + 'K',
                   iVar7,iVar5,param_3,0x80);
      break;
    case 0x47:
      FUN_004789f0((int)piVar2,(int)param_2,param_3,1,param_4);
      break;
    case 0x48:
      iVar6 = FUN_004b6b80(piVar1);
      iVar7 = param_3;
      iVar5 = iVar6;
      if (param_4 != 0) {
        iVar5 = param_3;
      }
      FUN_00497220(piVar2,(char *)param_2,iVar6,iVar5);
      FUN_004ae830(piVar1,1,0,iVar7);
      FUN_004b87b0((int)piVar1,iVar6);
      break;
    case 0x49:
    case 0x4a:
      iVar7 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      FUN_004ae830(piVar1,(char)local_8,iVar7,param_3);
      break;
    case 0x4b:
    case 0x4c:
    case 0x4d:
    case 0x4e:
    case 0x4f:
    case 0x50:
      iVar7 = FUN_00498470((int)piVar2,*(undefined4 *)(param_2 + 8),(int *)&param_1);
      iVar5 = FUN_00498470((int)piVar2,*(undefined4 *)(pbVar3 + 0xc),&local_c);
      FUN_004733e0(piVar2,*(char **)(pbVar3 + 8),*(char **)(pbVar3 + 0xc),(char)local_8,iVar7,iVar5,
                   param_3,(byte)param_4);
    }
    FUN_004a68f0((int)piVar2,(int)param_1);
    FUN_004a68f0((int)piVar2,local_c);
  }
  return;
}


/* FUN_00498e10 @ 00498e10  kind=gamemisc  attributed-by=none  size=49 */

undefined4 __cdecl FUN_00498e10(int param_1)

{
  code *local_18;
  code *local_14;
  undefined4 local_8;
  
  local_8 = 1;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,param_1);
  return local_8;
}


/* FUN_00498e50 @ 00498e50  kind=gamemisc  attributed-by=none  size=49 */

undefined4 __cdecl FUN_00498e50(int param_1)

{
  code *local_18;
  code *local_14;
  undefined4 local_8;
  
  local_8 = 3;
  local_18 = FUN_00478e60;
  local_14 = FUN_0048b2c0;
  FUN_004bb020(&local_18,param_1);
  return local_8;
}


/* FUN_00498e90 @ 00498e90  kind=gamemisc  attributed-by=none  size=108 */

undefined4 __cdecl FUN_00498e90(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((*(ushort *)(param_1 + 2) & 0x400) != 0) {
    *param_2 = *(int *)(param_1 + 4);
    return 1;
  }
  if (*param_1 == -100) {
    iVar1 = FUN_00498e90(*(char **)(param_1 + 8),(int *)&param_1);
    if (iVar1 != 0) {
      *param_2 = -(int)param_1;
      uVar2 = 1;
    }
  }
  else if (*param_1 == -99) {
    uVar2 = FUN_00498e90(*(char **)(param_1 + 8),param_2);
    return uVar2;
  }
  return uVar2;
}


/* FUN_00498f00 @ 00498f00  kind=gamemisc  attributed-by=none  size=174 */

uint * __cdecl FUN_00498f00(int *param_1,uint *param_2,undefined4 *param_3)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar2 = *param_1;
  if (param_2 == (uint *)0x0) {
    param_2 = FUN_00494b90(iVar2,0xc);
    if (param_2 != (uint *)0x0) {
      param_2[0] = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      puVar4 = FUN_00494b90(iVar2,0x14);
      param_2[2] = (uint)puVar4;
      if (puVar4 != (undefined4 *)0x0) goto LAB_00498f80;
    }
LAB_00498f64:
    FUN_00498790(iVar2,param_3);
    FUN_00499060(iVar2,(int *)param_2);
    return (uint *)0x0;
  }
  uVar3 = *param_2;
  if ((uVar3 & uVar3 - 1) == 0) {
    puVar4 = FUN_00494cf0(iVar2,(undefined4 *)param_2[2],uVar3 * 0x28);
    if (puVar4 == (undefined4 *)0x0) goto LAB_00498f64;
    param_2[2] = (uint)puVar4;
  }
LAB_00498f80:
  puVar1 = (undefined8 *)(param_2[2] + *param_2 * 0x14);
  *param_2 = *param_2 + 1;
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined4 *)(puVar1 + 2) = 0;
  *(undefined4 **)puVar1 = param_3;
  return param_2;
}


/* FUN_00498fb0 @ 00498fb0  kind=gamemisc  attributed-by=none  size=40 */

void __cdecl FUN_00498fb0(int *param_1,int *param_2)

{
  if ((param_2 != (int *)0x0) && (*(int *)(*param_1 + 0x58) < *param_2)) {
    FUN_004962b0(param_1,(byte *)"too many columns in %s");
    return;
  }
  return;
}


/* FUN_00498fe0 @ 00498fe0  kind=gamemisc  attributed-by=none  size=114 */

undefined4 __cdecl FUN_00498fe0(int *param_1,int *param_2)

{
  char cVar1;
  undefined3 extraout_var;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
  }
  else if ((param_2 != (int *)0x0) && (*param_1 == *param_2)) {
    iVar2 = 0;
    if (0 < *param_1) {
      iVar3 = 0;
      do {
        if (*(char *)(param_1[2] + 0xc + iVar3) != *(char *)(param_2[2] + 0xc + iVar3)) {
          return 1;
        }
        cVar1 = FUN_00498610(*(char **)(param_1[2] + iVar3),*(char **)(param_2[2] + iVar3));
        if (CONCAT31(extraout_var,cVar1) != 0) {
          return 1;
        }
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 0x14;
      } while (iVar2 < *param_1);
    }
    return 0;
  }
  return 1;
}


/* FUN_00499140 @ 00499140  kind=gamemisc  attributed-by=none  size=405 */

int * __cdecl FUN_00499140(int param_1,int *param_2,uint param_3)

{
  char cVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  char *pcVar6;
  size_t sVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int local_8;
  
  if (param_2 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar3 = FUN_00494b90(param_1,0xc);
  if (piVar3 != (int *)0x0) {
    piVar3[1] = 0;
    iVar4 = *param_2;
    *piVar3 = iVar4;
    if ((param_3 & 1) == 0) {
      iVar4 = 1;
      if (1 < *param_2) {
        do {
          iVar4 = iVar4 * 2;
        } while (iVar4 < *param_2);
      }
    }
    puVar5 = FUN_00494b90(param_1,iVar4 * 0x14);
    piVar3[2] = (int)puVar5;
    if (puVar5 != (undefined4 *)0x0) {
      puVar9 = (undefined4 *)param_2[2];
      local_8 = 0;
      if (0 < *param_2) {
        puVar8 = puVar5 + 2;
        iVar4 = (int)puVar5 - (int)puVar9;
        do {
          puVar5 = FUN_00478bb0(param_1,(undefined4 *)*puVar9,param_3,(int *)0x0);
          *(undefined4 **)(iVar4 + (int)puVar9) = puVar5;
          pcVar2 = (char *)puVar9[1];
          if (pcVar2 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar2;
            pcVar6 = pcVar2;
            while (cVar1 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar1 = *pcVar6;
            }
            sVar7 = ((int)pcVar6 - (int)pcVar2 & 0x3fffffffU) + 1;
            puVar5 = FUN_00494b90(param_1,sVar7);
            if (puVar5 != (undefined4 *)0x0) {
              memcpy(puVar5,pcVar2,sVar7);
            }
          }
          puVar8[-1] = puVar5;
          pcVar2 = (char *)puVar9[2];
          if (pcVar2 == (char *)0x0) {
            puVar5 = (undefined4 *)0x0;
          }
          else {
            cVar1 = *pcVar2;
            pcVar6 = pcVar2;
            while (cVar1 != '\0') {
              pcVar6 = pcVar6 + 1;
              cVar1 = *pcVar6;
            }
            sVar7 = ((int)pcVar6 - (int)pcVar2 & 0x3fffffffU) + 1;
            puVar5 = FUN_00494b90(param_1,sVar7);
            if (puVar5 != (undefined4 *)0x0) {
              memcpy(puVar5,pcVar2,sVar7);
            }
          }
          *puVar8 = puVar5;
          *(undefined1 *)(puVar8 + 1) = *(undefined1 *)(puVar9 + 3);
          *(undefined1 *)((int)puVar8 + 5) = 0;
          *(undefined2 *)((int)puVar8 + 6) = *(undefined2 *)((int)puVar9 + 0xe);
          *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(puVar9 + 4);
          local_8 = local_8 + 1;
          puVar8 = puVar8 + 5;
          puVar9 = puVar9 + 5;
        } while (local_8 < *param_2);
      }
      return piVar3;
    }
    FUN_00494b00(param_1,piVar3);
  }
  return (int *)0x0;
}


/* FUN_004992e0 @ 004992e0  kind=gamemisc  attributed-by=none  size=115 */

void __cdecl FUN_004992e0(int *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *_Src;
  size_t _Size;
  char *_Dst;
  
  if (param_2 != (int *)0x0) {
    iVar1 = *param_2;
    iVar2 = param_2[2];
    _Src = (void *)*param_3;
    _Size = param_3[1];
    if (_Src == (void *)0x0) {
      _Dst = (char *)0x0;
    }
    else {
      _Dst = (char *)FUN_00494b90(*param_1,_Size + 1);
      if (_Dst != (char *)0x0) {
        memcpy(_Dst,_Src,_Size);
        _Dst[_Size] = '\0';
      }
    }
    *(char **)(iVar2 + iVar1 * 0x14 + -0x10) = _Dst;
    if ((param_4 != 0) && (_Dst != (char *)0x0)) {
      FUN_00495540(_Dst);
    }
  }
  return;
}


/* FUN_00499360 @ 00499360  kind=gamemisc  attributed-by=none  size=120 */

void __cdecl FUN_00499360(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  void *_Src;
  undefined4 *_Dst;
  size_t _Size;
  
  iVar2 = *param_1;
  if (param_2 != (int *)0x0) {
    iVar1 = param_2[2] + *param_2 * 0x14;
    FUN_00494b00(iVar2,*(undefined4 **)(iVar1 + -0xc));
    _Src = *(void **)(param_3 + 4);
    _Size = *(int *)(param_3 + 8) - (int)_Src;
    if (_Src == (void *)0x0) {
      *(undefined4 *)(iVar1 + -0xc) = 0;
      return;
    }
    _Dst = FUN_00494b90(iVar2,_Size + 1);
    if (_Dst != (undefined4 *)0x0) {
      memcpy(_Dst,_Src,_Size);
      *(undefined1 *)((int)_Dst + _Size) = 0;
    }
    *(undefined4 **)(iVar1 + -0xc) = _Dst;
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


/* FUN_004994a0 @ 004994a0  kind=gamemisc  attributed-by=none  size=47 */

void __cdecl FUN_004994a0(int *param_1,int param_2)

{
  FUN_004790b0(param_2);
  if (*(int *)(*param_1 + 0x5c) < *(int *)(param_2 + 0x14)) {
    FUN_004962b0(param_1,(byte *)"Expression tree is too large (maximum depth %d)");
  }
  return;
}


/* FUN_004994d0 @ 004994d0  kind=gamemisc  attributed-by=none  size=37 */

void __cdecl FUN_004994d0(char *param_1)

{
  for (; (param_1 != (char *)0x0 && ((*param_1 == '\\' || (*param_1 == '\x18'))));
      param_1 = *(char **)(param_1 + 8)) {
  }
  return;
}


/* FUN_00499500 @ 00499500  kind=gamemisc  attributed-by=none  size=58 */

int * __cdecl FUN_00499500(int param_1,byte param_2,byte *param_3,int param_4)

{
  int *piVar1;
  
  if (param_3 == (byte *)0x0) {
    piVar1 = *(int **)(param_1 + 8);
  }
  else {
    piVar1 = FUN_004799f0(param_1,param_3,param_4);
  }
  if (piVar1 != (int *)0x0) {
    return piVar1 + (uint)param_2 * 5 + -5;
  }
  return (int *)0x0;
}


/* FUN_00499540 @ 00499540  kind=gamemisc  attributed-by=none  size=118 */

int __cdecl FUN_00499540(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  int iVar8;
  
  if (param_2 == (byte *)0x0) {
    return -1;
  }
  bVar1 = *param_2;
  pbVar7 = param_2;
  while (bVar1 != 0) {
    pbVar7 = pbVar7 + 1;
    bVar1 = *pbVar7;
  }
  iVar8 = *(int *)(param_1 + 0x14) + -1;
  puVar6 = (undefined4 *)(iVar8 * 0x10 + *(int *)(param_1 + 0x10));
  while( true ) {
    if (iVar8 < 0) {
      return iVar8;
    }
    pbVar2 = (byte *)*puVar6;
    uVar4 = 0;
    if (pbVar2 != (byte *)0x0) {
      bVar1 = *pbVar2;
      pbVar3 = pbVar2;
      while (bVar1 != 0) {
        pbVar3 = pbVar3 + 1;
        bVar1 = *pbVar3;
      }
      uVar4 = (int)pbVar3 - (int)pbVar2 & 0x3fffffff;
    }
    if ((((int)pbVar7 - (int)param_2 & 0x3fffffffU) == uVar4) &&
       (iVar5 = FUN_004bcc60(pbVar2,param_2), iVar5 == 0)) break;
    puVar6 = puVar6 + -4;
    iVar8 = iVar8 + -1;
  }
  return iVar8;
}


/* FUN_004995c0 @ 004995c0  kind=gamemisc  attributed-by=none  size=491 */

short * __cdecl
FUN_004995c0(int param_1,byte *param_2,size_t param_3,int param_4,byte param_5,char param_6)

{
  short sVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short *_Dst;
  uint local_8;
  
  iVar4 = (int)((byte)(&DAT_00569620)[*param_2] + param_3) % 0x17;
  uVar5 = 0;
  _Dst = (short *)0x0;
  local_8 = 0;
  for (psVar2 = (short *)FUN_0047c390(param_1 + 0x140,iVar4,param_2,param_3); psVar2 != (short *)0x0
      ; psVar2 = *(short **)(psVar2 + 4)) {
    if (param_4 == -2) {
      if ((*(int *)(psVar2 + 6) == 0) && (*(int *)(psVar2 + 8) == 0)) {
        uVar3 = 0;
      }
      else {
        uVar3 = 6;
      }
    }
    else {
      sVar1 = *psVar2;
      if ((sVar1 == param_4) || (sVar1 < 0)) {
        uVar3 = 1;
        if (sVar1 == param_4) {
          uVar3 = 4;
        }
        uVar5 = local_8;
        if (param_5 == *(byte *)(psVar2 + 1)) {
          uVar3 = uVar3 + 2;
        }
        else if ((*(byte *)(psVar2 + 1) & param_5 & 2) != 0) {
          uVar3 = uVar3 + 1;
        }
      }
      else {
        uVar3 = 0;
      }
    }
    if (uVar5 < uVar3) {
      uVar5 = uVar3;
      _Dst = psVar2;
      local_8 = uVar3;
    }
  }
  if (param_6 == '\0') {
    if ((_Dst == (short *)0x0) || ((*(uint *)(param_1 + 0x18) & 0x100000) != 0)) {
      uVar5 = 0;
      for (psVar2 = (short *)FUN_0047c390(0x583f68,iVar4,param_2,param_3); psVar2 != (short *)0x0;
          psVar2 = *(short **)(psVar2 + 4)) {
        if (param_4 == -2) {
          if ((*(int *)(psVar2 + 6) == 0) && (*(int *)(psVar2 + 8) == 0)) {
            uVar3 = 0;
          }
          else {
            uVar3 = 6;
          }
        }
        else {
          sVar1 = *psVar2;
          if ((sVar1 == param_4) || (sVar1 < 0)) {
            uVar3 = 1;
            if (sVar1 == param_4) {
              uVar3 = 4;
            }
            if (param_5 == *(byte *)(psVar2 + 1)) {
              uVar3 = uVar3 + 2;
            }
            else if ((*(byte *)(psVar2 + 1) & param_5 & 2) != 0) {
              uVar3 = uVar3 + 1;
            }
          }
          else {
            uVar3 = 0;
          }
        }
        if (uVar5 < uVar3) {
          uVar5 = uVar3;
          _Dst = psVar2;
        }
      }
    }
  }
  else if (uVar5 < 6) {
    _Dst = (short *)FUN_00494b90(param_1,param_3 + 0x25);
    if (_Dst == (short *)0x0) {
      return (short *)0x0;
    }
    memset(_Dst,0,param_3 + 0x25);
    if (_Dst == (short *)0x0) {
      return (short *)0x0;
    }
    *(short **)(_Dst + 0xc) = _Dst + 0x12;
    *_Dst = (short)param_4;
    *(byte *)(_Dst + 1) = param_5;
    memcpy(_Dst + 0x12,param_2,param_3);
    *(undefined1 *)(param_3 + *(int *)(_Dst + 0xc)) = 0;
    FUN_0049b0f0(param_1 + 0x140,(int)_Dst);
  }
  if ((_Dst != (short *)0x0) &&
     (((*(int *)(_Dst + 8) != 0 || (*(int *)(_Dst + 6) != 0)) || (param_6 != '\0')))) {
    return _Dst;
  }
  return (short *)0x0;
}


/* FUN_004997b0 @ 004997b0  kind=gamemisc  attributed-by=none  size=822 */

int __cdecl FUN_004997b0(int *param_1,char *param_2,int *param_3)

{
  undefined8 uVar1;
  int iVar2;
  char *pcVar3;
  bool bVar4;
  undefined3 extraout_var;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined3 extraout_var_00;
  int *piVar9;
  int iVar10;
  int *piVar11;
  int *extraout_EDX;
  int iVar12;
  int iVar13;
  int iVar14;
  int *local_14;
  int local_8;
  
  iVar2 = param_1[0x12];
  param_1[0x12] = iVar2 + 1;
  local_14 = (int *)param_1[2];
  local_8 = 0;
  if (local_14 == (int *)0x0) {
    local_14 = FUN_004af150(*param_1);
    param_1[2] = (int)local_14;
    if (local_14 != (int *)0x0) {
      FUN_004ae760(local_14,0x94);
    }
  }
  if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
    piVar11 = (int *)0x0;
  }
  else {
    piVar11 = *(int **)(param_2 + 0x10);
  }
  if ((param_1[0x11] == 0) && (bVar4 = FUN_0047ea40(piVar11), CONCAT31(extraout_var,bVar4) != 0)) {
    iVar13 = *param_1;
    piVar11 = *(int **)(extraout_EDX[10] + 0x18);
    pcVar3 = (char *)**(undefined4 **)(*extraout_EDX + 8);
    iVar5 = (int)*(short *)(pcVar3 + 0x1c);
    iVar6 = FUN_004a7ba0(iVar13,piVar11[0x10]);
    FUN_00493400(param_1,iVar6);
    FUN_004aab20(param_1,iVar6,piVar11[8],'\0',*piVar11);
    if (iVar5 < 0) {
      uVar7 = FUN_00492ce0(param_1);
      FUN_004a0f40(param_1,iVar2,iVar6,piVar11,0x27);
      iVar12 = 1;
      if ((-1 < (int)uVar7) && (uVar7 < (uint)local_14[7])) {
        *(int *)(local_14[1] + 8 + uVar7 * 0x14) = local_14[7];
        *(int *)(param_2 + 0x18) = iVar2;
        return 1;
      }
LAB_00499a01:
      *(int *)(param_2 + 0x18) = iVar2;
      return iVar12;
    }
    piVar8 = (int *)FUN_0048e620(param_1,*(char **)(param_2 + 8),pcVar3);
    bVar4 = FUN_0049db30((int)param_2,*(char *)(piVar11[1] + 0x15 + iVar5 * 0x18));
    iVar14 = piVar11[2];
    if (iVar14 != 0) {
      iVar12 = 0;
      do {
        if (iVar12 != 0) goto LAB_00499a01;
        if (CONCAT31(extraout_var_00,bVar4) == 0) goto LAB_00499a13;
        if (((**(int **)(iVar14 + 4) == iVar5) &&
            (piVar9 = FUN_00499500(iVar13,*(byte *)(*(int *)(*(int *)(iVar13 + 0x10) + 0xc) + 0x4d),
                                   (byte *)**(undefined4 **)(iVar14 + 0x20),0), iVar12 = local_8,
            piVar9 == piVar8)) &&
           ((param_3 != (int *)0x0 ||
            ((*(int *)(iVar14 + 0x24) == 1 && (*(char *)(iVar14 + 0x2c) != '\0')))))) {
          piVar9 = FUN_0049dbf0(param_1,iVar14);
          uVar7 = FUN_00492ce0(param_1);
          FUN_004ae8f0(local_14,0x27,iVar2,*(undefined4 *)(iVar14 + 0x28),iVar6,piVar9,0xfffffff0);
          local_8 = 3;
          FUN_004b6720((int)local_14,uVar7);
          if (param_3 == (int *)0x0) {
            iVar12 = 3;
          }
          else {
            iVar12 = local_8;
            if (*(char *)(piVar11[1] + 0x14 + iVar5 * 0x18) == '\0') {
              iVar10 = param_1[0x13] + 1;
              param_1[0x13] = iVar10;
              *param_3 = iVar10;
              FUN_004ae830(local_14,10,0,iVar10);
            }
          }
        }
        iVar14 = *(int *)(iVar14 + 0x14);
      } while (iVar14 != 0);
      if (iVar12 != 0) goto LAB_00499a01;
    }
  }
LAB_00499a13:
  uVar1 = *(undefined8 *)(param_1 + 0x6e);
  iVar13 = 0;
  iVar2 = 2;
  iVar5 = iVar2;
  if (param_3 == (int *)0x0) {
    param_1[0x6e] = 0;
    param_1[0x6f] = 0x3ff00000;
    iVar5 = 2;
    if ((*(short *)(*(int *)(param_2 + 8) + 0x1c) < 0) &&
       (iVar5 = iVar2, (*(ushort *)(param_2 + 2) & 0x800) == 0)) {
      iVar5 = 1;
    }
  }
  else {
    param_1[0x13] = param_1[0x13] + 1;
    iVar13 = param_1[0x13];
    *param_3 = iVar13;
    iVar2 = local_14[7];
    if ((iVar2 < local_14[8]) || (iVar6 = FUN_0047de10(local_14), iVar6 == 0)) {
      local_14[7] = local_14[7] + 1;
      iVar6 = local_14[1];
      *(undefined2 *)(iVar6 + iVar2 * 0x14) = 10;
      *(undefined1 *)(iVar6 + 3 + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 4 + iVar2 * 0x14) = 0;
      *(int *)(iVar6 + 8 + iVar2 * 0x14) = iVar13;
      *(undefined4 *)(iVar6 + 0xc + iVar2 * 0x14) = 0;
      *(undefined4 *)(iVar6 + 0x10 + iVar2 * 0x14) = 0;
    }
  }
  FUN_00492f00(param_1,param_2,iVar13,(uint)(iVar5 == 1));
  *(undefined8 *)(param_1 + 0x6e) = uVar1;
  return iVar5;
}


/* FUN_00499af0 @ 00499af0  kind=gamemisc  attributed-by=none  size=119 */

int __cdecl FUN_00499af0(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  uint *puVar8;
  byte *pbVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar11 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar10 = param_2;
    while (bVar2 != 0) {
      pbVar10 = pbVar10 + 1;
      bVar2 = *pbVar10;
    }
    uVar11 = (int)pbVar10 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar7 = 0;
  if (0 < iVar3) {
    iVar4 = *(int *)(param_1 + 0x10);
    do {
      uVar5 = local_c;
      if ((int)local_c < 2) {
        uVar5 = local_c ^ 1;
      }
      iVar7 = *(int *)(uVar5 * 0x10 + 0xc + iVar4);
      if (param_3 == (byte *)0x0) {
LAB_00499bab:
        puVar8 = (uint *)(iVar7 + 0x18);
        if (*(int *)(iVar7 + 0x24) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          uVar12 = uVar11;
          pbVar10 = param_2;
          if (uVar11 != 0) {
            do {
              uVar12 = uVar12 - 1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_00569620)[*pbVar10] ^ uVar5 * 8;
              pbVar10 = pbVar10 + 1;
            } while (0 < (int)uVar12);
          }
          uVar5 = uVar5 % *puVar8;
        }
        puVar6 = FUN_00479af0((int)puVar8,param_2,uVar11,uVar5);
        if (puVar6 == (undefined4 *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = puVar6[2];
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar10 = *(byte **)(uVar5 * 0x10 + iVar4);
        bVar2 = *param_3;
        pbVar9 = param_3;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar10]))) {
          pbVar1 = pbVar9 + 1;
          pbVar9 = pbVar9 + 1;
          pbVar10 = pbVar10 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar9] == (&DAT_00569620)[*pbVar10]) goto LAB_00499bab;
      }
      local_c = local_c + 1;
      iVar7 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar7;
}


/* FUN_00499b6a @ 00499b6a  kind=gamemisc  attributed-by=none  size=197 */

int __fastcall FUN_00499b6a(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte in_AL;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int iVar6;
  uint unaff_EDI;
  
  do {
    if ((&DAT_00569620)[in_AL] == (&DAT_00569620)[*unaff_ESI]) {
      in_AL = param_2[1];
      param_2 = param_2 + 1;
      unaff_ESI = unaff_ESI + 1;
      goto joined_r0x00499b8b;
    }
    do {
      if ((&DAT_00569620)[*param_2] != (&DAT_00569620)[*unaff_ESI]) {
        iVar6 = *(int *)(unaff_EBP + -4);
        goto LAB_00499c1b;
      }
      iVar6 = *(int *)(unaff_EBP + 8);
      pbVar4 = *(byte **)(unaff_EBP + 0xc);
      do {
        puVar3 = (uint *)(iVar6 + 0x18);
        *(uint **)(unaff_EBP + 8) = puVar3;
        if (*(int *)(iVar6 + 0x24) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = unaff_EBX;
          if (0 < unaff_EBX) {
            do {
              iVar6 = iVar6 + -1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_00569620)[*pbVar4] ^ uVar5 * 8;
              pbVar4 = pbVar4 + 1;
            } while (0 < iVar6);
            puVar3 = *(uint **)(unaff_EBP + 8);
          }
          unaff_EDI = *(uint *)(unaff_EBP + -8);
          uVar5 = uVar5 % *puVar3;
        }
        puVar2 = FUN_00479af0((int)puVar3,*(byte **)(unaff_EBP + 0xc),unaff_EBX,uVar5);
        if (puVar2 == (undefined4 *)0x0) {
          iVar6 = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
        }
        else {
          iVar1 = puVar2[2];
          *(int *)(unaff_EBP + -4) = iVar1;
          iVar6 = 0;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
LAB_00499c1b:
        unaff_EDI = unaff_EDI + 1;
        *(uint *)(unaff_EBP + -8) = unaff_EDI;
        if (*(int *)(unaff_EBP + -0xc) <= (int)unaff_EDI) {
          return iVar6;
        }
        pbVar4 = *(byte **)(unaff_EBP + 0xc);
        uVar5 = unaff_EDI;
        if ((int)unaff_EDI < 2) {
          uVar5 = unaff_EDI ^ 1;
        }
        iVar6 = *(int *)(uVar5 * 0x10 + 0xc + *(int *)(unaff_EBP + -0x10));
        *(int *)(unaff_EBP + 8) = iVar6;
      } while (*(int *)(unaff_EBP + 0x10) == 0);
      param_2 = *(byte **)(unaff_EBP + 0x10);
      unaff_ESI = *(byte **)(uVar5 * 0x10 + *(int *)(unaff_EBP + -0x10));
      in_AL = *param_2;
joined_r0x00499b8b:
    } while (in_AL == 0);
  } while( true );
}


/* FUN_00499c30 @ 00499c30  kind=gamemisc  attributed-by=none  size=103 */

int __cdecl FUN_00499c30(int param_1,byte *param_2,byte *param_3)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_c;
  int local_8;
  
  local_8 = 0;
  uVar9 = 0;
  if (param_2 != (byte *)0x0) {
    bVar2 = *param_2;
    pbVar8 = param_2;
    while (bVar2 != 0) {
      pbVar8 = pbVar8 + 1;
      bVar2 = *pbVar8;
    }
    uVar9 = (int)pbVar8 - (int)param_2 & 0x3fffffff;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  local_c = 0;
  iVar5 = 0;
  if (0 < iVar3) {
    do {
      uVar11 = local_c;
      if ((int)local_c < 2) {
        uVar11 = local_c ^ 1;
      }
      if (param_3 == (byte *)0x0) {
LAB_00499cdf:
        iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0xc + uVar11 * 0x10);
        puVar6 = (uint *)(iVar5 + 8);
        if (*(int *)(iVar5 + 0x14) == 0) {
          uVar11 = 0;
        }
        else {
          uVar11 = 0;
          uVar10 = uVar9;
          pbVar8 = param_2;
          if (uVar9 != 0) {
            do {
              uVar10 = uVar10 - 1;
              uVar11 = uVar11 ^ (uint)(byte)(&DAT_00569620)[*pbVar8] ^ uVar11 * 8;
              pbVar8 = pbVar8 + 1;
            } while (0 < (int)uVar10);
          }
          uVar11 = uVar11 % *puVar6;
        }
        puVar4 = FUN_00479af0((int)puVar6,param_2,uVar9,uVar11);
        if (puVar4 == (undefined4 *)0x0) {
          local_8 = 0;
        }
        else {
          local_8 = puVar4[2];
          if (local_8 != 0) {
            return local_8;
          }
        }
      }
      else {
        pbVar8 = *(byte **)(*(int *)(param_1 + 0x10) + uVar11 * 0x10);
        bVar2 = *param_3;
        pbVar7 = param_3;
        while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar8]))) {
          pbVar1 = pbVar7 + 1;
          pbVar7 = pbVar7 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar1;
        }
        if ((&DAT_00569620)[*pbVar7] == (&DAT_00569620)[*pbVar8]) goto LAB_00499cdf;
      }
      local_c = local_c + 1;
      iVar5 = local_8;
    } while ((int)local_c < iVar3);
  }
  return iVar5;
}


/* FUN_00499c9a @ 00499c9a  kind=gamemisc  attributed-by=none  size=214 */

int __fastcall FUN_00499c9a(undefined4 param_1,byte *param_2)

{
  int iVar1;
  byte in_AL;
  undefined4 *puVar2;
  uint *puVar3;
  byte *pbVar4;
  uint uVar5;
  int unaff_EBX;
  int unaff_EBP;
  byte *unaff_ESI;
  int iVar6;
  uint unaff_EDI;
  
  do {
    if ((&DAT_00569620)[in_AL] == (&DAT_00569620)[*unaff_ESI]) {
      in_AL = param_2[1];
      param_2 = param_2 + 1;
      unaff_ESI = unaff_ESI + 1;
      goto joined_r0x00499cbb;
    }
    do {
      if ((&DAT_00569620)[*param_2] != (&DAT_00569620)[*unaff_ESI]) {
        iVar6 = *(int *)(unaff_EBP + -4);
        goto LAB_00499d59;
      }
      pbVar4 = *(byte **)(unaff_EBP + 0xc);
      iVar6 = *(int *)(unaff_EBP + 8);
      do {
        iVar6 = *(int *)(*(int *)(iVar6 + 0x10) + 0xc + unaff_EDI * 0x10);
        puVar3 = (uint *)(iVar6 + 8);
        *(uint **)(unaff_EBP + -4) = puVar3;
        if (*(int *)(iVar6 + 0x14) == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          iVar6 = unaff_EBX;
          if (0 < unaff_EBX) {
            do {
              iVar6 = iVar6 + -1;
              uVar5 = uVar5 ^ (uint)(byte)(&DAT_00569620)[*pbVar4] ^ uVar5 * 8;
              pbVar4 = pbVar4 + 1;
            } while (0 < iVar6);
            puVar3 = *(uint **)(unaff_EBP + -4);
          }
          uVar5 = uVar5 % *puVar3;
        }
        puVar2 = FUN_00479af0((int)puVar3,*(byte **)(unaff_EBP + 0xc),unaff_EBX,uVar5);
        if (puVar2 == (undefined4 *)0x0) {
          iVar6 = 0;
          *(undefined4 *)(unaff_EBP + -4) = 0;
        }
        else {
          iVar1 = puVar2[2];
          *(int *)(unaff_EBP + -4) = iVar1;
          iVar6 = 0;
          if (iVar1 != 0) {
            return iVar1;
          }
        }
LAB_00499d59:
        unaff_EDI = *(int *)(unaff_EBP + -8) + 1;
        *(uint *)(unaff_EBP + -8) = unaff_EDI;
        if (*(int *)(unaff_EBP + -0xc) <= (int)unaff_EDI) {
          return iVar6;
        }
        pbVar4 = *(byte **)(unaff_EBP + 0xc);
        iVar6 = *(int *)(unaff_EBP + 8);
        if ((int)unaff_EDI < 2) {
          unaff_EDI = unaff_EDI ^ 1;
        }
        param_2 = *(byte **)(unaff_EBP + 0x10);
      } while (param_2 == (byte *)0x0);
      unaff_ESI = *(byte **)(*(int *)(iVar6 + 0x10) + unaff_EDI * 0x10);
      in_AL = *param_2;
joined_r0x00499cbb:
    } while (in_AL == 0);
  } while( true );
}


/* FUN_00499d70 @ 00499d70  kind=gamemisc  attributed-by=none  size=730 */

void __cdecl FUN_00499d70(int *param_1)

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
  piVar3 = FUN_0049d4d0(param_1);
  if (piVar3 != (int *)0x0) {
    FUN_004ae760(piVar3,6);
    if (0 < param_1[0x57]) {
      FUN_004b6720((int)piVar3,param_1[0x57] - 1);
      iVar6 = 0;
      local_8 = 1;
      if (0 < *(int *)(iVar1 + 0x14)) {
        local_10 = param_1 + 0x58;
        local_c = 0;
        do {
          if ((param_1[0x56] & local_8) != 0) {
            FUN_004b9540(piVar3,iVar6);
            FUN_004ae830(piVar3,0x23,iVar6,(uint)((param_1[0x55] & local_8) != 0));
            if (*(char *)(iVar1 + 0x81) == '\0') {
              FUN_004ae890(piVar3,0x26,iVar6,*local_10,
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
          if ((iVar6 < piVar3[8]) || (iVar4 = FUN_0047de10(piVar3), iVar4 == 0)) {
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
            FUN_0047bc80(*piVar3,(int)*(char *)(piVar3[1] + 1 + iVar6 * 0x14),
                         *(int **)(piVar3[1] + 0x10 + iVar6 * 0x14));
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
      FUN_00474bc0(param_1);
      FUN_0048d7c0(param_1);
      iVar6 = piVar3[7];
      iVar4 = param_1[0x57];
      if ((iVar6 < piVar3[8]) || (iVar5 = FUN_0047de10(piVar3), iVar5 == 0)) {
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
      FUN_004b6bf0(piVar3,(int)param_1);
      param_1[3] = 0x65;
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_0049a010;
    }
  }
  param_1[3] = 1;
LAB_0049a010:
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x73] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  return;
}


/* FUN_0049a2b0 @ 0049a2b0  kind=gamemisc  attributed-by=none  size=147 */

undefined4 __cdecl FUN_0049a2b0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if ((param_2 == 0) || ((*(ushort *)(param_2 + 2) & 0x4000) != 0)) {
      return 0;
    }
    if ((*(ushort *)(param_2 + 2) & 0x800) == 0) {
      piVar1 = *(int **)(param_2 + 0x10);
      if (piVar1 != (int *)0x0) {
        piVar4 = (int *)piVar1[2];
        iVar2 = 0;
        if (0 < *piVar1) {
          do {
            iVar3 = FUN_0049a2b0(param_1,*piVar4);
            if (iVar3 != 0) {
              return 1;
            }
            iVar2 = iVar2 + 1;
            piVar4 = piVar4 + 5;
          } while (iVar2 < *piVar1);
        }
      }
    }
    else {
      iVar2 = FUN_0049a3a0(param_1,*(undefined4 **)(param_2 + 0x10));
      if (iVar2 != 0) {
        return 1;
      }
    }
    iVar2 = FUN_0049a2b0(param_1,*(int *)(param_2 + 0xc));
    if (iVar2 != 0) break;
    param_2 = *(int *)(param_2 + 8);
  }
  return 1;
}


/* FUN_0049a350 @ 0049a350  kind=gamemisc  attributed-by=none  size=72 */

undefined4 __cdecl
FUN_0049a350(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4,undefined4 param_5)

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


/* FUN_0049a3a0 @ 0049a3a0  kind=gamemisc  attributed-by=none  size=142 */

undefined4 __cdecl FUN_0049a3a0(undefined4 *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if (param_2 == (undefined4 *)0x0) {
      return 0;
    }
    piVar1 = (int *)*param_2;
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[2];
      iVar3 = 0;
      if (0 < *piVar1) {
        do {
          iVar2 = FUN_0049a2b0(param_1,*piVar4);
          if (iVar2 != 0) {
            return 1;
          }
          iVar3 = iVar3 + 1;
          piVar4 = piVar4 + 5;
        } while (iVar3 < *piVar1);
      }
    }
    iVar3 = FUN_0049a430(param_1,(short *)param_2[10]);
    if (((iVar3 != 0) || (iVar3 = FUN_0049a2b0(param_1,param_2[0xb]), iVar3 != 0)) ||
       (iVar3 = FUN_0049a2b0(param_1,param_2[0xd]), iVar3 != 0)) break;
    param_2 = (undefined4 *)param_2[0xf];
  }
  return 1;
}


/* FUN_0049a430 @ 0049a430  kind=gamemisc  attributed-by=none  size=248 */

undefined4 __cdecl FUN_0049a430(undefined4 *param_1,short *param_2)

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
            if ((&DAT_00569620)[bVar4] != (&DAT_00569620)[*pbVar6]) break;
            bVar4 = pbVar2[1];
            pbVar2 = pbVar2 + 1;
            pbVar6 = pbVar6 + 1;
          } while (bVar4 != 0);
          pbVar5 = *(byte **)(psVar7 + 2);
        }
        if ((&DAT_00569620)[*pbVar2] != (&DAT_00569620)[*pbVar6]) {
          FUN_004962b0((int *)*param_1,(byte *)"%s %T cannot reference objects in database %s");
          return 1;
        }
      }
      FUN_00494b00(*(int *)*param_1,(undefined4 *)pbVar5);
      psVar7[2] = 0;
      psVar7[3] = 0;
      *(undefined4 *)psVar7 = param_1[1];
      iVar3 = FUN_0049a3a0(param_1,*(undefined4 **)(psVar7 + 10));
      if ((iVar3 != 0) || (iVar3 = FUN_0049a2b0(param_1,*(int *)(psVar7 + 0x18)), iVar3 != 0)) {
        return 1;
      }
      local_8 = local_8 + 1;
      psVar7 = psVar7 + 0x24;
    } while (local_8 < *param_2);
  }
  return 0;
}


/* FUN_0049a530 @ 0049a530  kind=gamemisc  attributed-by=none  size=122 */

undefined4 __cdecl FUN_0049a530(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  while( true ) {
    if (param_2 == 0) {
      return 0;
    }
    iVar2 = FUN_0049a3a0(param_1,*(undefined4 **)(param_2 + 8));
    if ((iVar2 != 0) || (iVar2 = FUN_0049a2b0(param_1,*(int *)(param_2 + 0x14)), iVar2 != 0)) break;
    piVar1 = *(int **)(param_2 + 0x18);
    if (piVar1 != (int *)0x0) {
      piVar4 = (int *)piVar1[2];
      iVar2 = 0;
      if (0 < *piVar1) {
        do {
          iVar3 = FUN_0049a2b0(param_1,*piVar4);
          if (iVar3 != 0) {
            return 1;
          }
          iVar2 = iVar2 + 1;
          piVar4 = piVar4 + 5;
        } while (iVar2 < *piVar1);
      }
    }
    param_2 = *(int *)(param_2 + 0x20);
  }
  return 1;
}


/* FUN_0049a5b0 @ 0049a5b0  kind=gamemisc  attributed-by=none  size=86 */

void __cdecl FUN_0049a5b0(int *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) {
    for (piVar1 = (int *)FUN_0049ae70(param_2); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[3]) {
      puVar2 = FUN_00479db0(param_1,(int)param_2,piVar1,param_3);
      if (puVar2 != (uint *)0x0) {
        FUN_00492dd0(param_1,(int *)puVar2,param_2,param_4,2,0);
      }
    }
  }
  return;
}


/* FUN_0049a610 @ 0049a610  kind=gamemisc  attributed-by=none  size=922 */

void __cdecl FUN_0049a610(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  byte *pbVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  short *psVar9;
  uint *puVar10;
  uint uVar11;
  int *piVar12;
  byte *pbVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint local_28;
  uint local_24;
  byte *local_20;
  uint *local_1c;
  uint local_18;
  int local_14;
  uint *local_10;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_24 = (uint)*(byte *)((int)param_1 + 0x1ca);
  if ((*(uint *)(local_8 + 0x18) & 0x40000) != 0) {
    local_c = -1000000;
    if (param_2[0x10] != 0) {
      iVar15 = 0;
      local_c = 0;
      if (0 < *(int *)(local_8 + 0x14)) {
        piVar5 = (int *)(*(int *)(local_8 + 0x10) + 0xc);
        do {
          local_c = iVar15;
          if (*piVar5 == param_2[0x10]) break;
          iVar15 = iVar15 + 1;
          piVar5 = piVar5 + 4;
          local_c = iVar15;
        } while (iVar15 < *(int *)(local_8 + 0x14));
      }
    }
    pbVar3 = *(byte **)(*(int *)(local_8 + 0x10) + local_c * 0x10);
    piVar12 = param_1;
    puVar4 = param_2;
    for (piVar5 = (int *)param_2[4]; param_2 = puVar4, piVar5 != (int *)0x0;
        piVar5 = (int *)piVar5[1]) {
      local_14 = 0;
      local_1c = (uint *)0x0;
      local_18 = 0;
      if (*(char *)((int)piVar12 + 0x1ca) == '\0') {
        piVar6 = (int *)FUN_004a0080(piVar12,0,(byte *)piVar5[2],pbVar3);
      }
      else {
        piVar6 = (int *)FUN_00499c30(local_8,(byte *)piVar5[2],pbVar3);
      }
      if ((piVar6 == (int *)0x0) ||
         (iVar15 = FUN_0047f9a0(piVar12,(int)piVar6,(int)piVar5,&local_14,&local_1c), iVar15 != 0))
      {
        if (local_24 == 0) {
          return;
        }
        if (*(char *)(local_8 + 0x38) != '\0') {
          return;
        }
        if (piVar6 == (int *)0x0) {
          piVar6 = (int *)piVar12[2];
          if (piVar6 == (int *)0x0) {
            piVar6 = FUN_004af150(*piVar12);
            piVar12[2] = (int)piVar6;
            if (piVar6 != (int *)0x0) {
              FUN_004ae760(piVar6,0x94);
            }
          }
          local_14 = piVar6[7] + 1 + piVar5[5];
          iVar15 = 0;
          if (0 < piVar5[5]) {
            local_20 = (byte *)(piVar5 + 9);
            do {
              local_18 = *(int *)local_20 + param_3 + 1;
              local_1c = (uint *)piVar6[7];
              if (((int)local_1c < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
                piVar6[7] = piVar6[7] + 1;
                iVar7 = piVar6[1];
                *(uint *)(iVar7 + 4 + (int)local_1c * 0x14) = local_18;
                *(undefined2 *)(iVar7 + (int)local_1c * 0x14) = 0x49;
                *(undefined1 *)(iVar7 + 3 + (int)local_1c * 0x14) = 0;
                *(int *)(iVar7 + 8 + (int)local_1c * 0x14) = local_14;
                *(undefined4 *)(iVar7 + 0xc + (int)local_1c * 0x14) = 0;
                *(undefined4 *)(iVar7 + 0x10 + (int)local_1c * 0x14) = 0;
              }
              iVar15 = iVar15 + 1;
              local_20 = (byte *)((int)local_20 + 8);
            } while (iVar15 < piVar5[5]);
          }
          local_20 = (byte *)(uint)*(byte *)(piVar5 + 6);
          iVar15 = piVar6[7];
          if ((iVar15 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), piVar12 = param_1, iVar7 == 0))
          {
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(undefined2 *)(iVar7 + iVar15 * 0x14) = 0x75;
            *(undefined1 *)(iVar7 + 3 + iVar15 * 0x14) = 0;
            *(byte **)(iVar7 + 4 + iVar15 * 0x14) = local_20;
            *(undefined4 *)(iVar7 + 8 + iVar15 * 0x14) = 0xffffffff;
            *(undefined4 *)(iVar7 + 0xc + iVar15 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar15 * 0x14) = 0;
            piVar12 = param_1;
          }
        }
      }
      else {
        if (local_1c == (uint *)0x0) {
          puVar10 = &local_28;
          local_28 = piVar5[9];
          local_10 = puVar10;
        }
        else {
          local_10 = local_1c;
          puVar10 = local_1c;
        }
        local_20 = (byte *)0x0;
        local_10 = puVar10;
        if (0 < piVar5[5]) {
          do {
            iVar15 = (int)local_20 * 4;
            if (puVar10[(int)local_20] == (int)*(short *)(param_2 + 9)) {
              puVar10[(int)local_20] = 0xffffffff;
            }
            if (*(int *)(local_8 + 0x10c) != 0) {
              if (local_14 == 0) {
                iVar15 = (int)(short)piVar6[9];
              }
              else {
                iVar15 = *(int *)(iVar15 + *(int *)(local_14 + 4));
              }
              iVar15 = FUN_0048d620(piVar12,*piVar6,*(undefined4 *)(piVar6[1] + iVar15 * 0x18),
                                    local_c);
              local_18 = (uint)(iVar15 == 2);
              puVar10 = local_10;
            }
            local_20 = local_20 + 1;
          } while ((int)local_20 < piVar5[5]);
        }
        FUN_004aab20(piVar12,local_c,piVar6[8],'\0',*piVar6);
        piVar12[0x12] = piVar12[0x12] + 1;
        if (param_3 != 0) {
          FUN_0047a7a0(piVar12,local_c,piVar6,local_14,piVar5,(int *)local_10,param_3,-1,local_18);
        }
        if (param_4 != 0) {
          FUN_0047a7a0(piVar12,local_c,piVar6,local_14,piVar5,(int *)local_10,param_4,1,local_18);
        }
        FUN_00494b00(local_8,local_1c);
      }
      puVar4 = param_2;
    }
    pbVar3 = (byte *)*puVar4;
    uVar14 = 0;
    if (pbVar3 != (byte *)0x0) {
      bVar1 = *pbVar3;
      pbVar13 = pbVar3;
      while (bVar1 != 0) {
        pbVar13 = pbVar13 + 1;
        bVar1 = *pbVar13;
      }
      uVar14 = (int)pbVar13 - (int)pbVar3 & 0x3fffffff;
    }
    local_1c = (uint *)(puVar4[0x10] + 0x38);
    if (*(int *)(puVar4[0x10] + 0x44) == 0) {
      uVar16 = 0;
    }
    else {
      uVar16 = 0;
      pbVar13 = pbVar3;
      uVar11 = uVar14;
      local_20 = pbVar3;
      if (uVar14 != 0) {
        do {
          local_20 = pbVar13 + 1;
          uVar11 = uVar11 - 1;
          uVar16 = uVar16 ^ (uint)(byte)(&DAT_00569620)[*pbVar13] ^ uVar16 * 8;
          pbVar13 = local_20;
          piVar12 = param_1;
        } while (0 < (int)uVar11);
      }
      uVar16 = uVar16 % *local_1c;
    }
    puVar8 = FUN_00479af0((int)local_1c,pbVar3,uVar14,uVar16);
    if (puVar8 != (undefined4 *)0x0) {
      for (piVar5 = (int *)puVar8[2]; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
        local_1c = (uint *)0x0;
        param_1 = (int *)0x0;
        if ((((char)piVar5[6] != '\0') || (piVar12[0x6c] != 0)) ||
           (*(char *)((int)piVar12 + 0x17) != '\0')) {
          iVar15 = FUN_0047f9a0(piVar12,(int)puVar4,(int)piVar5,(int *)&local_1c,&param_1);
          if (iVar15 == 0) {
            psVar9 = (short *)FUN_00494b90(local_8,0x50);
            if (psVar9 != (short *)0x0) {
              memset(psVar9,0,0x50);
              psVar9[1] = 1;
              psVar9 = FUN_004a9fc0(local_8,psVar9,1,(int)*psVar9);
              if (*(char *)(local_8 + 0x38) == '\0') {
                sVar2 = *psVar9;
                (psVar9 + sVar2 * 0x24 + -0x1c)[0] = 0;
                (psVar9 + sVar2 * 0x24 + -0x1c)[1] = 0;
                (psVar9 + sVar2 * 0x24 + -0x1e)[0] = 0;
                (psVar9 + sVar2 * 0x24 + -0x1e)[1] = 0;
                *(int *)(psVar9 + 0xc) = *piVar5;
                *(undefined4 *)(psVar9 + 8) = *(undefined4 *)*piVar5;
                *(short *)(*(int *)(psVar9 + 0xc) + 0x28) =
                     *(short *)(*(int *)(psVar9 + 0xc) + 0x28) + 1;
                *(int *)(psVar9 + 0x1a) = piVar12[0x12];
                piVar12[0x12] = piVar12[0x12] + 1;
                if (param_4 != 0) {
                  FUN_0047afc0(piVar12,psVar9,(int)param_2,(int)local_1c,piVar5,(int)param_1,param_4
                               ,-1);
                }
                if (param_3 != 0) {
                  FUN_0047afc0(piVar12,psVar9,(int)param_2,(int)local_1c,piVar5,(int)param_1,param_3
                               ,1);
                }
                psVar9[8] = 0;
                psVar9[9] = 0;
              }
              FUN_004a9cb0(local_8,psVar9);
            }
            FUN_00494b00(local_8,param_1);
          }
          else {
            if (local_24 == 0) {
              return;
            }
            if (*(char *)(local_8 + 0x38) != '\0') {
              return;
            }
          }
        }
        puVar4 = param_2;
      }
    }
  }
  return;
}


/* FUN_0049a9aa @ 0049a9aa  kind=gamemisc  attributed-by=none  size=337 */

void FUN_0049a9aa(void)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  int iVar4;
  int *unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  do {
    iVar2 = unaff_ESI[6];
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + 8) = 0;
    if ((((char)iVar2 != '\0') || (unaff_EBX[0x6c] != 0)) ||
       (*(char *)((int)unaff_EBX + 0x17) != '\0')) {
      iVar2 = FUN_0047f9a0(unaff_EBX,unaff_EDI,(int)unaff_ESI,(int *)(unaff_EBP + -0x18),
                           (undefined4 *)(unaff_EBP + 8));
      if (iVar2 == 0) {
        psVar3 = (short *)FUN_00494b90(*(int *)(unaff_EBP + -4),0x50);
        if (psVar3 != (short *)0x0) {
          memset(psVar3,0,0x50);
          psVar3[1] = 1;
          psVar3 = FUN_004a9fc0(*(int *)(unaff_EBP + -4),psVar3,1,(int)*psVar3);
          iVar2 = *(int *)(unaff_EBP + -4);
          if (*(char *)(iVar2 + 0x38) == '\0') {
            sVar1 = *psVar3;
            iVar2 = *(int *)(unaff_EBP + 0x14);
            (psVar3 + sVar1 * 0x24 + -0x1c)[0] = 0;
            (psVar3 + sVar1 * 0x24 + -0x1c)[1] = 0;
            (psVar3 + sVar1 * 0x24 + -0x1e)[0] = 0;
            (psVar3 + sVar1 * 0x24 + -0x1e)[1] = 0;
            *(int *)(psVar3 + 0xc) = *unaff_ESI;
            *(undefined4 *)(psVar3 + 8) = *(undefined4 *)*unaff_ESI;
            *(short *)(*(int *)(psVar3 + 0xc) + 0x28) =
                 *(short *)(*(int *)(psVar3 + 0xc) + 0x28) + 1;
            *(int *)(psVar3 + 0x1a) = unaff_EBX[0x12];
            unaff_EBX[0x12] = unaff_EBX[0x12] + 1;
            iVar4 = *(int *)(unaff_EBP + -0x18);
            if (iVar2 != 0) {
              FUN_0047afc0(unaff_EBX,psVar3,*(int *)(unaff_EBP + 0xc),iVar4,unaff_ESI,
                           *(int *)(unaff_EBP + 8),iVar2,-1);
              iVar4 = *(int *)(unaff_EBP + -0x18);
            }
            if (*(int *)(unaff_EBP + 0x10) != 0) {
              FUN_0047afc0(unaff_EBX,psVar3,*(int *)(unaff_EBP + 0xc),iVar4,unaff_ESI,
                           *(int *)(unaff_EBP + 8),*(int *)(unaff_EBP + 0x10),1);
            }
            iVar2 = *(int *)(unaff_EBP + -4);
            psVar3[8] = 0;
            psVar3[9] = 0;
          }
          FUN_004a9cb0(iVar2,psVar3);
        }
        FUN_00494b00(*(int *)(unaff_EBP + -4),*(undefined4 **)(unaff_EBP + 8));
      }
      else {
        if (*(int *)(unaff_EBP + -0x20) == 0) {
          return;
        }
        if (*(char *)(*(int *)(unaff_EBP + -4) + 0x38) != '\0') {
          return;
        }
      }
    }
    unaff_ESI = (int *)unaff_ESI[3];
    unaff_EDI = *(int *)(unaff_EBP + 0xc);
    if (unaff_ESI == (int *)0x0) {
      return;
    }
  } while( true );
}


/* FUN_0049ad30 @ 0049ad30  kind=gamemisc  attributed-by=none  size=310 */

uint __cdecl FUN_0049ad30(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  uint *local_c;
  uint local_8;
  
  uVar8 = 0;
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) == 0) {
    return 0;
  }
  for (iVar2 = param_2[4]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    iVar9 = *(int *)(iVar2 + 0x14);
    if (0 < iVar9) {
      piVar6 = (int *)(iVar2 + 0x24);
      do {
        if (*piVar6 < 0x20) {
          uVar4 = 1 << ((byte)*piVar6 & 0x1f);
        }
        else {
          uVar4 = 0xffffffff;
        }
        uVar8 = uVar8 | uVar4;
        piVar6 = piVar6 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
  }
  pbVar3 = (byte *)*param_2;
  local_8 = 0;
  if (pbVar3 != (byte *)0x0) {
    bVar1 = *pbVar3;
    pbVar10 = pbVar3;
    while (bVar1 != 0) {
      pbVar10 = pbVar10 + 1;
      bVar1 = *pbVar10;
    }
    local_8 = (int)pbVar10 - (int)pbVar3 & 0x3fffffff;
  }
  local_c = (uint *)(param_2[0x10] + 0x38);
  uVar4 = 0;
  if (*(int *)(param_2[0x10] + 0x44) != 0) {
    uVar7 = local_8;
    pbVar10 = pbVar3;
    if (local_8 != 0) {
      do {
        uVar7 = uVar7 - 1;
        uVar4 = uVar4 ^ (uint)(byte)(&DAT_00569620)[*pbVar10] ^ uVar4 * 8;
        pbVar10 = pbVar10 + 1;
      } while (0 < (int)uVar7);
    }
    uVar4 = uVar4 % *local_c;
  }
  puVar5 = FUN_00479af0((int)local_c,pbVar3,local_8,uVar4);
  if (puVar5 != (undefined4 *)0x0) {
    for (iVar2 = puVar5[2]; iVar2 != 0; iVar2 = *(int *)(iVar2 + 0xc)) {
      local_c = (uint *)0x0;
      FUN_0047f9a0(param_1,(int)param_2,iVar2,(int *)&local_c,(undefined4 *)0x0);
      if ((local_c != (uint *)0x0) && (uVar4 = local_c[9], 0 < (int)uVar4)) {
        piVar6 = (int *)local_c[1];
        do {
          if (*piVar6 < 0x20) {
            uVar7 = 1 << ((byte)*piVar6 & 0x1f);
          }
          else {
            uVar7 = 0xffffffff;
          }
          uVar8 = uVar8 | uVar7;
          piVar6 = piVar6 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
  }
  return uVar8;
}


/* FUN_0049ae70 @ 0049ae70  kind=gamemisc  attributed-by=none  size=94 */

undefined4 __cdecl FUN_0049ae70(undefined4 *param_1)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint *puVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar2 = (byte *)*param_1;
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
  puVar5 = (uint *)(param_1[0x10] + 0x38);
  if (*(int *)(param_1[0x10] + 0x44) == 0) {
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


/* FUN_0049aed0 @ 0049aed0  kind=gamemisc  attributed-by=none  size=529 */

undefined4 __cdecl FUN_0049aed0(int *param_1,undefined4 *param_2,int param_3,int param_4)

{
  byte *pbVar1;
  byte bVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  ushort uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  
  if ((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) {
    if (param_3 == 0) {
      iVar3 = FUN_0049ae70(param_2);
      if ((iVar3 != 0) || (param_2[4] != 0)) {
        return 1;
      }
    }
    else {
      for (iVar3 = param_2[4]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 4)) {
        iVar8 = 0;
        if (0 < *(int *)(iVar3 + 0x14)) {
          piVar9 = (int *)(iVar3 + 0x24);
          do {
            if (-1 < *(int *)(param_3 + *piVar9 * 4)) {
              return 1;
            }
            if ((*piVar9 == (int)*(short *)(param_2 + 9)) && (param_4 != 0)) {
              return 1;
            }
            iVar8 = iVar8 + 1;
            piVar9 = piVar9 + 2;
          } while (iVar8 < *(int *)(iVar3 + 0x14));
        }
      }
      pbVar6 = (byte *)*param_2;
      uVar13 = 0;
      if (pbVar6 != (byte *)0x0) {
        bVar2 = *pbVar6;
        pbVar12 = pbVar6;
        while (bVar2 != 0) {
          pbVar12 = pbVar12 + 1;
          bVar2 = *pbVar12;
        }
        uVar13 = (int)pbVar12 - (int)pbVar6 & 0x3fffffff;
      }
      puVar4 = (uint *)(param_2[0x10] + 0x38);
      if (*(int *)(param_2[0x10] + 0x44) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = 0;
        uVar10 = uVar13;
        pbVar12 = pbVar6;
        if (uVar13 != 0) {
          do {
            uVar10 = uVar10 - 1;
            uVar14 = uVar14 ^ (uint)(byte)(&DAT_00569620)[*pbVar12] ^ uVar14 * 8;
            pbVar12 = pbVar12 + 1;
          } while (0 < (int)uVar10);
        }
        uVar14 = uVar14 % *puVar4;
      }
      puVar5 = FUN_00479af0((int)puVar4,pbVar6,uVar13,uVar14);
      if (puVar5 != (undefined4 *)0x0) {
        for (iVar3 = puVar5[2]; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
          param_1 = (int *)0x0;
          if (0 < *(int *)(iVar3 + 0x14)) {
            puVar5 = (undefined4 *)(iVar3 + 0x28);
            do {
              iVar8 = 0;
              if (0 < *(short *)((int)param_2 + 0x26)) {
                puVar11 = (undefined4 *)param_2[1];
                do {
                  if ((byte *)*puVar5 == (byte *)0x0) {
                    uVar7 = *(ushort *)((int)puVar11 + 0x16) & 1;
                  }
                  else {
                    pbVar6 = (byte *)*puVar11;
                    bVar2 = *pbVar6;
                    pbVar12 = (byte *)*puVar5;
                    while ((bVar2 != 0 && ((&DAT_00569620)[bVar2] == (&DAT_00569620)[*pbVar12]))) {
                      pbVar1 = pbVar6 + 1;
                      pbVar6 = pbVar6 + 1;
                      pbVar12 = pbVar12 + 1;
                      bVar2 = *pbVar1;
                    }
                    uVar7 = (ushort)((&DAT_00569620)[*pbVar6] == (&DAT_00569620)[*pbVar12]);
                  }
                  if (uVar7 != 0) {
                    if (-1 < *(int *)(param_3 + iVar8 * 4)) {
                      return 1;
                    }
                    if ((iVar8 == *(short *)(param_2 + 9)) && (param_4 != 0)) {
                      return 1;
                    }
                  }
                  iVar8 = iVar8 + 1;
                  puVar11 = puVar11 + 6;
                } while (iVar8 < *(short *)((int)param_2 + 0x26));
              }
              param_1 = (int *)((int)param_1 + 1);
              puVar5 = puVar5 + 2;
            } while ((int)param_1 < *(int *)(iVar3 + 0x14));
          }
        }
      }
    }
  }
  return 0;
}


/* FUN_0049b0f0 @ 0049b0f0  kind=gamemisc  attributed-by=none  size=113 */

void __cdecl FUN_0049b0f0(int param_1,int param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar2 = *(byte **)(param_2 + 0x18);
  uVar5 = 0;
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    pbVar4 = pbVar2;
    while (bVar1 != 0) {
      pbVar4 = pbVar4 + 1;
      bVar1 = *pbVar4;
    }
    uVar5 = (int)pbVar4 - (int)pbVar2 & 0x3fffffff;
  }
  uVar6 = ((byte)(&DAT_00569620)[*pbVar2] + uVar5) % 0x17;
  iVar3 = FUN_0047c390(param_1,uVar6,pbVar2,uVar5);
  if (iVar3 == 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(undefined4 *)(param_2 + 0x1c) = *(undefined4 *)(param_1 + uVar6 * 4);
    *(int *)(param_1 + uVar6 * 4) = param_2;
    return;
  }
  *(undefined4 *)(param_2 + 8) = *(undefined4 *)(iVar3 + 8);
  *(int *)(iVar3 + 8) = param_2;
  return;
}


/* FUN_0049b170 @ 0049b170  kind=gamemisc  attributed-by=none  size=104 */

undefined4 __cdecl FUN_0049b170(int param_1,undefined4 param_2)

{
  undefined8 local_24;
  undefined8 local_1c;
  undefined4 *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  local_14 = &local_10;
  local_10 = param_2;
  local_1c = 0;
  local_24 = 0x479150;
  local_c = 0;
  local_8 = 0;
  FUN_004bb0b0(&local_24,*(int **)(param_1 + 0x10));
  if ((local_c < 1) && (local_8 != 0)) {
    return 0;
  }
  return 1;
}


/* FUN_0049b1e0 @ 0049b1e0  kind=gamemisc  attributed-by=none  size=4187 */

void __cdecl
FUN_0049b1e0(int *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7,int *param_8,undefined4 param_9,int *param_10)

{
  undefined2 *puVar1;
  char cVar2;
  byte *pbVar3;
  char *pcVar4;
  byte bVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  int *piVar12;
  int *piVar13;
  int iVar14;
  int *piVar15;
  size_t _Size;
  uint uVar16;
  undefined1 uVar17;
  int local_54;
  int *local_50;
  int *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 local_3c;
  undefined2 local_3b;
  int local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  int *local_28;
  int *local_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  uint local_c;
  undefined4 *local_8;
  
  local_c = 0;
  local_20 = 0;
  if ((param_6 == 0) || (param_7 == 0)) {
    local_30 = param_4;
  }
  else {
    local_30 = param_6;
  }
  piVar6 = (int *)param_1[2];
  local_14 = *param_1;
  local_18 = piVar6;
  if (piVar6 == (int *)0x0) {
    piVar6 = FUN_004af150(local_14);
    param_1[2] = (int)piVar6;
    local_18 = piVar6;
    if (piVar6 != (int *)0x0) {
      FUN_004ae760(piVar6,0x94);
    }
  }
  local_24 = (int *)(int)*(short *)((int)param_2 + 0x26);
  iVar14 = param_4 + 1;
  local_1c = (int *)0x0;
  local_2c = iVar14;
  if (0 < (int)local_24) {
    local_10 = (int *)0x0;
    do {
      piVar15 = local_10;
      local_10 = piVar15;
      if (local_1c != (int *)(int)*(short *)(param_2 + 9)) {
        piVar12 = (int *)(uint)*(byte *)((int)local_10 + 0x14 + param_2[1]);
        if (piVar12 != (int *)0x0) {
          piVar13 = param_8;
          if ((param_8 == (int *)0x63) && (piVar13 = piVar12, piVar12 == (int *)0x63)) {
            piVar13 = (int *)0x2;
          }
          else if ((piVar13 == (int *)0x5) && (*(int *)((int)local_10 + 4 + param_2[1]) == 0)) {
            piVar13 = (int *)0x2;
          }
          switch(piVar13) {
          case (int *)0x2:
            piVar12 = param_1;
            if ((int *)param_1[0x6c] != (int *)0x0) {
              piVar12 = (int *)param_1[0x6c];
            }
            *(undefined1 *)(piVar12 + 6) = 1;
          case (int *)0x1:
          case (int *)0x3:
            FUN_004ae890(piVar6,5,0x13,piVar13,iVar14);
            local_28 = (int *)FUN_004a02d0(local_14,(byte *)"%s.%s may not be NULL");
            iVar7 = *piVar6;
            if ((piVar6[1] == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
              FUN_0047bc80(iVar7,0xffffffff,local_28);
              local_10 = piVar15;
            }
            else {
              iVar9 = piVar6[7] + -1;
              local_34 = (undefined4 *)(piVar6[1] + iVar9 * 0x14);
              FUN_0047bc80(iVar7,(int)*(char *)(piVar6[1] + 1 + iVar9 * 0x14),
                           *(int **)(piVar6[1] + 0x10 + iVar9 * 0x14));
              *(undefined4 *)((int)local_34 + 0x10) = 0;
              if (local_28 == (int *)0x0) {
                *(undefined4 *)((int)local_34 + 0x10) = 0;
                *(undefined1 *)((int)local_34 + 1) = 0;
                local_10 = piVar15;
              }
              else {
                *(int **)((int)local_34 + 0x10) = local_28;
                *(undefined1 *)((int)local_34 + 1) = 0xff;
                local_10 = piVar15;
              }
            }
            break;
          case (int *)0x4:
            FUN_004ae830(piVar6,0x49,iVar14,param_9);
            local_10 = piVar15;
            break;
          default:
            uVar16 = piVar6[7];
            if (((int)uVar16 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
              iVar7 = piVar6[1];
              piVar6[7] = piVar6[7] + 1;
              *(undefined2 *)(iVar7 + uVar16 * 0x14) = 0x4a;
              *(undefined1 *)(iVar7 + 3 + uVar16 * 0x14) = 0;
              *(int *)(iVar7 + 4 + uVar16 * 0x14) = iVar14;
              *(undefined4 *)(iVar7 + 8 + uVar16 * 0x14) = 0;
              *(undefined4 *)(iVar7 + 0xc + uVar16 * 0x14) = 0;
              *(undefined4 *)(iVar7 + 0x10 + uVar16 * 0x14) = 0;
            }
            else {
              uVar16 = 1;
            }
            pbVar3 = *(byte **)((int)local_10 + 4 + param_2[1]);
            if ((pbVar3 == (byte *)0x0) || (*pbVar3 != 0x84)) {
              iVar7 = FUN_00497780(param_1,pbVar3,iVar14);
              if ((iVar7 != iVar14) && (piVar15 = (int *)param_1[2], piVar15 != (int *)0x0)) {
                uVar17 = 0xf;
                goto LAB_0049b418;
              }
            }
            else {
              iVar7 = *(int *)(pbVar3 + 0x18);
              uVar17 = 0xe;
              piVar15 = (int *)param_1[2];
LAB_0049b418:
              FUN_004ae830(piVar15,uVar17,iVar7,iVar14);
            }
            if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar6[7])) {
              *(int *)(piVar6[1] + 8 + uVar16 * 0x14) = piVar6[7];
            }
          }
        }
      }
      local_1c = (int *)((int)local_1c + 1);
      local_10 = (int *)((int)local_10 + 0x18);
      iVar14 = iVar14 + 1;
    } while ((int)local_1c < (int)local_24);
  }
  local_10 = (int *)param_2[6];
  if ((local_10 != (int *)0x0) && ((*(uint *)(local_14 + 0x18) & 0x400) == 0)) {
    param_1[0x16] = local_2c;
    piVar15 = (int *)0x2;
    if (param_8 != (int *)0x63) {
      piVar15 = param_8;
    }
    local_28 = (int *)0x0;
    if (0 < *local_10) {
      local_1c = (int *)0x0;
      do {
        uVar16 = piVar6[9];
        piVar6[9] = uVar16 + 1;
        if ((uVar16 & uVar16 - 1) == 0) {
          local_34 = (undefined4 *)piVar6[10];
          local_24 = (int *)*piVar6;
          local_8 = FUN_00494cf0((int)local_24,local_34,uVar16 * 8 + 4);
          if (local_8 == (undefined4 *)0x0) {
            FUN_00494b00((int)local_24,local_34);
          }
          piVar6[10] = (int)local_8;
        }
        piVar12 = local_1c;
        if (piVar6[10] != 0) {
          *(undefined4 *)(piVar6[10] + uVar16 * 4) = 0xffffffff;
        }
        local_34 = (undefined4 *)(-uVar16 - 1);
        FUN_00498b60(param_1,*(byte **)((int)local_1c + local_10[2]),(int)local_34,8);
        if (piVar15 == (int *)0x4) {
          iVar14 = piVar6[7];
          if ((iVar14 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(undefined2 *)(iVar7 + iVar14 * 0x14) = 1;
            *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = param_9;
            *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
          }
        }
        else {
          if (piVar15 == (int *)0x5) {
            piVar15 = (int *)0x2;
          }
          if (*(int *)((int)piVar12 + local_10[2] + 4) == 0) {
            FUN_0049d510(param_1,(int)piVar15,(int *)0x0,0xffffffff);
            local_1c = piVar12;
          }
          else {
            piVar13 = (int *)FUN_004a02d0(local_14,(byte *)"constraint %s failed");
            FUN_0049d510(param_1,(int)piVar15,piVar13,0xffffffff);
            local_1c = piVar12;
          }
        }
        if (piVar6[10] != 0) {
          *(int *)(piVar6[10] - ((int)local_34 * 4 + 4)) = piVar6[7];
        }
        local_28 = (int *)((int)local_28 + 1);
        local_1c = local_1c + 5;
      } while ((int)local_28 < *local_10);
    }
  }
  if (param_6 != 0) {
    piVar15 = param_8;
    if ((param_8 == (int *)0x63) &&
       (piVar15 = (int *)(uint)*(byte *)((int)param_2 + 0x2b),
       (int *)(uint)*(byte *)((int)param_2 + 0x2b) == (int *)0x63)) {
      piVar15 = (int *)0x2;
    }
    if (param_7 != 0) {
      local_c = piVar6[7];
      if (((int)local_c < piVar6[8]) || (iVar14 = FUN_0047de10(piVar6), iVar14 == 0)) {
        iVar14 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(undefined2 *)(iVar14 + local_c * 0x14) = 0x4c;
        *(undefined1 *)(iVar14 + 3 + local_c * 0x14) = 0;
        *(int *)(iVar14 + 4 + local_c * 0x14) = param_4;
        *(undefined4 *)(iVar14 + 8 + local_c * 0x14) = 0;
        *(int *)(iVar14 + 0xc + local_c * 0x14) = param_6;
        *(undefined4 *)(iVar14 + 0x10 + local_c * 0x14) = 0;
      }
      else {
        local_c = 1;
      }
    }
    uVar16 = piVar6[7];
    if (((int)uVar16 < piVar6[8]) || (iVar14 = FUN_0047de10(piVar6), iVar14 == 0)) {
      iVar14 = piVar6[1];
      piVar6[7] = piVar6[7] + 1;
      *(int *)(iVar14 + 4 + uVar16 * 0x14) = param_3;
      *(undefined2 *)(iVar14 + uVar16 * 0x14) = 0x36;
      *(undefined1 *)(iVar14 + 3 + uVar16 * 0x14) = 0;
      *(undefined4 *)(iVar14 + 8 + uVar16 * 0x14) = 0;
      *(int *)(iVar14 + 0xc + uVar16 * 0x14) = param_4;
      *(undefined4 *)(iVar14 + 0x10 + uVar16 * 0x14) = 0;
    }
    else {
      uVar16 = 1;
    }
    switch(piVar15) {
    case (int *)0x4:
      iVar14 = piVar6[7];
      if ((iVar14 < piVar6[8]) || (iVar7 = FUN_0047de10(piVar6), iVar7 == 0)) {
        iVar7 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(undefined2 *)(iVar7 + iVar14 * 0x14) = 1;
        *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = param_9;
        *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
        *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
      }
      break;
    case (int *)0x5:
      piVar15 = (int *)0x0;
      if ((((*(uint *)(local_14 + 0x18) & 0x20000) == 0) ||
          (piVar15 = (int *)FUN_004ab0e0(param_1,param_2,0x6a,(int *)0x0,(uint *)0x0),
          piVar15 == (int *)0x0)) &&
         (((*(uint *)(*param_1 + 0x18) & 0x40000) == 0 ||
          ((iVar14 = FUN_0049ae70(param_2), iVar14 == 0 && (param_2[4] == 0)))))) {
        if (param_2[2] != 0) {
          piVar15 = param_1;
          if ((int *)param_1[0x6c] != (int *)0x0) {
            piVar15 = (int *)param_1[0x6c];
          }
          *(undefined1 *)((int)piVar15 + 0x17) = 1;
          FUN_0049c860(param_1,(int)param_2,param_3,(int *)0x0);
        }
        local_20 = 1;
      }
      else {
        piVar12 = param_1;
        if ((int *)param_1[0x6c] != (int *)0x0) {
          piVar12 = (int *)param_1[0x6c];
        }
        *(undefined1 *)((int)piVar12 + 0x17) = 1;
        FUN_0049c510(param_1,param_2,param_3,param_4,0,piVar15,5);
        local_20 = 1;
      }
      break;
    default:
      piVar15 = (int *)0x2;
    case (int *)0x1:
    case (int *)0x2:
    case (int *)0x3:
      FUN_0049d510(param_1,(int)piVar15,(int *)"PRIMARY KEY must be unique",0xfffffffe);
    }
    if ((-1 < (int)uVar16) && (uVar16 < (uint)piVar6[7])) {
      *(int *)(piVar6[1] + 8 + uVar16 * 0x14) = piVar6[7];
    }
    if (((param_7 != 0) && (-1 < (int)local_c)) && (local_c < (uint)piVar6[7])) {
      *(int *)(piVar6[1] + 8 + local_c * 0x14) = piVar6[7];
    }
  }
  local_c = 0;
  local_8 = (undefined4 *)param_2[2];
  do {
    if (local_8 == (undefined4 *)0x0) {
      if (param_10 != (int *)0x0) {
        *param_10 = local_20;
      }
      return;
    }
    if (*(int *)(param_5 + local_c * 4) != 0) {
      piVar15 = (int *)param_1[0x10];
      iVar14 = *(int *)((int)local_8 + 0x24) + 1;
      if (param_1[0xf] < iVar14) {
        piVar15 = (int *)(param_1[0x13] + 1);
        param_1[0x13] = param_1[0x13] + iVar14;
      }
      else {
        param_1[0x10] = iVar14 + (int)piVar15;
        param_1[0xf] = param_1[0xf] - iVar14;
      }
      local_10 = (int *)0x0;
      piVar12 = piVar15;
      if (0 < *(int *)((int)local_8 + 0x24)) {
        do {
          local_1c = piVar12;
          iVar14 = piVar6[7];
          local_34 = *(undefined4 **)(*(int *)((int)local_8 + 4) + (int)local_10 * 4);
          iVar7 = piVar6[8];
          if (local_34 == (undefined4 *)(int)*(short *)(param_2 + 9)) {
            if (iVar7 <= iVar14) {
              if (iVar7 == 0) {
                iVar7 = 0x33;
              }
              else {
                iVar7 = iVar7 * 2;
              }
              puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0049b9e9;
              iVar7 = *piVar6;
              if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
                 (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar8);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
              }
              piVar6[8] = uVar16 / 0x14;
              piVar6[1] = (int)puVar8;
            }
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(int *)(iVar7 + 4 + iVar14 * 0x14) = param_4;
            *(undefined2 *)(iVar7 + iVar14 * 0x14) = 0xf;
            *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
            *(int **)(iVar7 + 8 + iVar14 * 0x14) = local_1c;
            *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
          }
          else {
            if (iVar7 <= iVar14) {
              if (iVar7 == 0) {
                iVar7 = 0x33;
              }
              else {
                iVar7 = iVar7 * 2;
              }
              puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
              if (puVar8 == (undefined4 *)0x0) goto LAB_0049b9e9;
              iVar7 = *piVar6;
              if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
                 (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
                uVar16 = (*DAT_00582af0._4_4_)(puVar8);
              }
              else {
                uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
              }
              piVar6[8] = uVar16 / 0x14;
              piVar6[1] = (int)puVar8;
            }
            piVar6[7] = piVar6[7] + 1;
            puVar1 = (undefined2 *)(piVar6[1] + iVar14 * 0x14);
            *puVar1 = 0xf;
            *(undefined1 *)((int)puVar1 + 3) = 0;
            *(int *)(puVar1 + 2) = (int)local_34 + local_2c;
            *(int **)(puVar1 + 4) = local_1c;
            *(undefined4 *)(puVar1 + 6) = 0;
            *(undefined4 *)(puVar1 + 8) = 0;
          }
LAB_0049b9e9:
          local_1c = (int *)((int)local_1c + 1);
          local_10 = (int *)((int)local_10 + 1);
          piVar12 = local_1c;
        } while ((int)local_10 < *(int *)((int)local_8 + 0x24));
      }
      iVar14 = piVar6[7];
      iVar7 = piVar6[8];
      if (iVar14 < iVar7) {
LAB_0049ba6b:
        piVar6[7] = piVar6[7] + 1;
        puVar1 = (undefined2 *)(piVar6[1] + iVar14 * 0x14);
        *(int *)(puVar1 + 2) = param_4;
        *puVar1 = 0xf;
        *(undefined1 *)((int)puVar1 + 3) = 0;
        *(int *)(puVar1 + 4) = (int)local_10 + (int)piVar15;
        *(undefined4 *)(puVar1 + 6) = 0;
        *(undefined4 *)(puVar1 + 8) = 0;
      }
      else {
        if (iVar7 == 0) {
          iVar7 = 0x33;
        }
        else {
          iVar7 = iVar7 * 2;
        }
        puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
        if (puVar8 != (undefined4 *)0x0) {
          iVar7 = *piVar6;
          if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
             (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
            uVar16 = (*DAT_00582af0._4_4_)(puVar8);
          }
          else {
            uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
          }
          piVar6[8] = uVar16 / 0x14;
          piVar6[1] = (int)puVar8;
          goto LAB_0049ba6b;
        }
      }
      local_28 = *(int **)(param_5 + local_c * 4);
      local_34 = (undefined4 *)piVar6[7];
      iVar14 = *(int *)((int)local_8 + 0x24);
      iVar7 = piVar6[8];
      if ((int)local_34 < iVar7) {
LAB_0049bb22:
        iVar7 = piVar6[1];
        piVar6[7] = piVar6[7] + 1;
        *(int **)(iVar7 + 4 + (int)local_34 * 0x14) = piVar15;
        *(undefined2 *)(iVar7 + (int)local_34 * 0x14) = 0x1f;
        *(undefined1 *)(iVar7 + 3 + (int)local_34 * 0x14) = 0;
        *(int *)(iVar7 + 8 + (int)local_34 * 0x14) = iVar14 + 1;
        *(int **)(iVar7 + 0xc + (int)local_34 * 0x14) = local_28;
        *(undefined4 *)(iVar7 + 0x10 + (int)local_34 * 0x14) = 0;
      }
      else {
        if (iVar7 == 0) {
          iVar7 = 0x33;
        }
        else {
          iVar7 = iVar7 * 2;
        }
        puVar8 = FUN_00494cf0(*piVar6,(undefined4 *)piVar6[1],iVar7 * 0x14);
        if (puVar8 != (undefined4 *)0x0) {
          iVar7 = *piVar6;
          if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
             (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
            uVar16 = (*DAT_00582af0._4_4_)(puVar8);
          }
          else {
            uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
          }
          piVar6[8] = uVar16 / 0x14;
          piVar6[1] = (int)puVar8;
          goto LAB_0049bb22;
        }
      }
      piVar12 = (int *)FUN_0049db70(piVar6,(int)local_8);
      iVar14 = piVar6[1];
      iVar7 = *piVar6;
      if ((iVar14 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
        FUN_0047bc80(iVar7,0,piVar12);
      }
      else {
        iVar9 = iVar14 + (piVar6[7] + -1) * 0x14;
        local_28 = (int *)iVar9;
        FUN_0047bc80(iVar7,(int)*(char *)(iVar9 + 1),
                     *(int **)(iVar14 + 0x10 + (piVar6[7] + -1) * 0x14));
        *(undefined4 *)(iVar9 + 0x10) = 0;
        if (piVar12 == (int *)0x0) {
          *(undefined4 *)(iVar9 + 0x10) = 0;
          *(undefined1 *)(iVar9 + 1) = 0;
        }
        else {
          cVar2 = (char)*piVar12;
          piVar13 = piVar12;
          while (cVar2 != '\0') {
            piVar13 = (int *)((int)piVar13 + 1);
            cVar2 = *(char *)piVar13;
          }
          uVar16 = (int)piVar13 - (int)piVar12 & 0x3fffffff;
          local_34 = FUN_00494b90(*piVar6,uVar16 + 1);
          if (local_34 != (undefined4 *)0x0) {
            memcpy(local_34,piVar12,uVar16);
            *(undefined1 *)((int)local_34 + uVar16) = 0;
          }
          *(undefined4 **)((int)local_28 + 0x10) = local_34;
          *(undefined1 *)((int)local_28 + 1) = 0xff;
        }
      }
      piVar12 = local_18;
      iVar14 = *(int *)((int)local_8 + 0x24);
      local_28 = param_1 + 0x19;
      piVar6 = param_1 + 0x1d;
      iVar7 = 10;
      do {
        iVar9 = *piVar6;
        if (((int)piVar15 <= iVar9) && (iVar9 <= iVar14 + (int)piVar15)) {
          if ((char)piVar6[-2] != '\0') {
            if (*(byte *)((int)param_1 + 0x13) < 8) {
              param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar9;
              *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
            }
            *(undefined1 *)(piVar6 + -2) = 0;
          }
          *piVar6 = 0;
        }
        piVar6 = piVar6 + 6;
        iVar7 = iVar7 + -1;
      } while (iVar7 != 0);
      piVar6 = (int *)(uint)*(byte *)((int)local_8 + 0x2c);
      if (piVar6 == (int *)0x0) {
        iVar14 = *(int *)((int)local_8 + 0x24);
        local_34 = (undefined4 *)(iVar14 + 1);
        piVar6 = param_1 + 0x1d;
        iVar7 = 10;
        do {
          iVar9 = *piVar6;
          if (((int)piVar15 <= iVar9) && (iVar9 <= (int)piVar15 + iVar14)) {
            if ((char)piVar6[-2] != '\0') {
              if (*(byte *)((int)param_1 + 0x13) < 8) {
                param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar9;
                *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
              }
              *(undefined1 *)(piVar6 + -2) = 0;
            }
            *piVar6 = 0;
          }
          piVar6 = piVar6 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        piVar6 = local_18;
        if (param_1[0xf] < (int)local_34) {
          param_1[0xf] = (int)local_34;
          param_1[0x10] = (int)piVar15;
        }
      }
      else {
        local_1c = param_8;
        if ((param_8 == (int *)0x63) && (local_1c = piVar6, piVar6 == (int *)0x63)) {
          local_1c = (int *)0x2;
        }
        if (local_20 != 0) {
          if (local_1c == (int *)0x4) {
            local_1c = (int *)0x5;
          }
          else if (local_1c == (int *)0x3) {
            local_1c = (int *)0x2;
          }
        }
        if (*(char *)((int)param_1 + 0x13) == '\0') {
          param_1[0x13] = param_1[0x13] + 1;
          local_10 = (int *)param_1[0x13];
        }
        else {
          bVar5 = *(char *)((int)param_1 + 0x13) - 1;
          *(byte *)((int)param_1 + 0x13) = bVar5;
          local_10 = (int *)param_1[bVar5 + 7];
        }
        iVar14 = local_18[7];
        iVar7 = local_18[8];
        if (iVar14 < iVar7) {
LAB_0049bda9:
          iVar7 = piVar12[1];
          piVar12[7] = piVar12[7] + 1;
          *(int *)(iVar7 + 4 + iVar14 * 0x14) = local_30;
          *(undefined2 *)(iVar7 + iVar14 * 0x14) = 0xf;
          *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
          *(int **)(iVar7 + 8 + iVar14 * 0x14) = local_10;
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
          puVar8 = FUN_00494cf0(*local_18,(undefined4 *)local_18[1],iVar7 * 0x14);
          if (puVar8 != (undefined4 *)0x0) {
            iVar7 = *piVar12;
            if (((iVar7 == 0) || (puVar8 < *(undefined4 **)(iVar7 + 0x104))) ||
               (*(undefined4 **)(iVar7 + 0x108) <= puVar8)) {
              uVar16 = (*DAT_00582af0._4_4_)(puVar8);
            }
            else {
              uVar16 = (uint)*(ushort *)(iVar7 + 0xe8);
            }
            piVar12[8] = uVar16 / 0x14;
            piVar12[1] = (int)puVar8;
            goto LAB_0049bda9;
          }
        }
        uVar16 = piVar12[7];
        iVar14 = piVar12[8];
        local_34 = (undefined4 *)uVar16;
        if ((int)uVar16 < iVar14) {
LAB_0049be4e:
          piVar12[7] = piVar12[7] + 1;
          puVar1 = (undefined2 *)(piVar12[1] + uVar16 * 0x14);
          *puVar1 = 0x35;
          *(uint *)(puVar1 + 2) = local_c + 1 + param_3;
          *(undefined1 *)((int)puVar1 + 3) = 0;
          *(undefined4 *)(puVar1 + 4) = 0;
          *(int **)(puVar1 + 6) = local_10;
          *(undefined4 *)(puVar1 + 8) = 0;
        }
        else {
          if (iVar14 == 0) {
            iVar14 = 0x33;
          }
          else {
            iVar14 = iVar14 * 2;
          }
          puVar8 = FUN_00494cf0(*piVar12,(undefined4 *)piVar12[1],iVar14 * 0x14);
          if (puVar8 != (undefined4 *)0x0) {
            iVar14 = *piVar12;
            if (((iVar14 == 0) || (puVar8 < *(undefined4 **)(iVar14 + 0x104))) ||
               (*(undefined4 **)(iVar14 + 0x108) <= puVar8)) {
              uVar10 = (*DAT_00582af0._4_4_)(puVar8);
            }
            else {
              uVar10 = (uint)*(ushort *)(iVar14 + 0xe8);
            }
            piVar12[8] = uVar10 / 0x14;
            piVar12[1] = (int)puVar8;
            goto LAB_0049be4e;
          }
          uVar16 = 1;
          local_34 = (undefined4 *)0x1;
        }
        iVar14 = piVar12[1];
        iVar7 = *piVar12;
        if ((iVar14 == 0) || (*(char *)(iVar7 + 0x38) != '\0')) {
          FUN_0047bc80(iVar7,0xfffffff2,piVar15);
        }
        else {
          if ((int)uVar16 < 0) {
            uVar16 = piVar12[7] - 1;
          }
          iVar9 = iVar14 + uVar16 * 0x14;
          FUN_0047bc80(iVar7,(int)*(char *)(iVar9 + 1),*(int **)(iVar14 + 0x10 + uVar16 * 0x14));
          *(int **)(iVar9 + 0x10) = piVar15;
          *(undefined1 *)(iVar9 + 1) = 0xf2;
        }
        piVar6 = local_18;
        iVar14 = *(int *)((int)local_8 + 0x24);
        local_38 = iVar14 + 1;
        piVar12 = local_28 + 4;
        iVar7 = 10;
        do {
          iVar9 = *piVar12;
          if (((int)piVar15 <= iVar9) && (iVar9 <= (int)piVar15 + iVar14)) {
            if ((char)piVar12[-2] != '\0') {
              if (*(byte *)((int)param_1 + 0x13) < 8) {
                param_1[*(byte *)((int)param_1 + 0x13) + 7] = iVar9;
                *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
              }
              *(undefined1 *)(piVar12 + -2) = 0;
            }
            *piVar12 = 0;
          }
          piVar12 = piVar12 + 6;
          iVar7 = iVar7 + -1;
        } while (iVar7 != 0);
        if (param_1[0xf] < local_38) {
          param_1[0xf] = local_38;
          param_1[0x10] = (int)piVar15;
        }
        if ((int)local_1c < 1) {
LAB_0049c189:
          piVar15 = param_1;
          if ((int *)param_1[0x6c] != (int *)0x0) {
            piVar15 = (int *)param_1[0x6c];
          }
          *(undefined1 *)((int)piVar15 + 0x17) = 1;
          piVar15 = (int *)0x0;
          if ((*(uint *)(local_14 + 0x18) & 0x20000) != 0) {
            bVar5 = 0;
            piVar15 = (int *)0x0;
            piVar12 = piVar15;
            if ((*(uint *)(*param_1 + 0x18) & 0x400000) != 0) {
              piVar15 = (int *)FUN_004aaf60(param_1,param_2);
              piVar12 = piVar15;
            }
            for (; piVar15 != (int *)0x0; piVar15 = (int *)piVar15[8]) {
              if ((char)piVar15[2] == 'j') {
                bVar5 = bVar5 | *(byte *)((int)piVar15 + 9);
              }
            }
            piVar15 = (int *)0x0;
            if (bVar5 != 0) {
              piVar15 = piVar12;
            }
          }
          piVar12 = local_10;
          FUN_0049c510(param_1,param_2,param_3,local_10,0,piVar15,5);
          local_20 = 1;
          local_10 = piVar12;
        }
        else if ((int)local_1c < 4) {
          local_54 = local_14;
          pcVar11 = "columns ";
          if (*(int *)((int)local_8 + 0x24) < 2) {
            pcVar11 = "column ";
          }
          iVar14 = 0;
          local_50 = (int *)0x0;
          local_4c = (int *)0x0;
          local_48 = 0;
          local_44 = 0;
          local_40 = 200;
          local_3b = 1;
          local_3c = 0;
          if (0 < *(int *)((int)local_8 + 0x24)) {
            do {
              pcVar4 = *(char **)(param_2[1] +
                                 *(int *)(*(int *)((int)local_8 + 4) + iVar14 * 4) * 0x18);
              FUN_004aa7b0(&local_54,pcVar11,0xffffffff);
              pcVar11 = ", ";
              FUN_004aa7b0(&local_54,pcVar4,0xffffffff);
              iVar14 = iVar14 + 1;
            } while (iVar14 < *(int *)((int)local_8 + 0x24));
          }
          piVar6 = local_18;
          pcVar11 = " are not unique";
          if (*(int *)((int)local_8 + 0x24) < 2) {
            pcVar11 = " is not unique";
          }
          FUN_004aa7b0(&local_54,pcVar11,0xffffffff);
          uVar16 = local_48;
          piVar15 = local_4c;
          if (local_4c != (int *)0x0) {
            *(undefined1 *)(local_48 + (int)local_4c) = 0;
            if (((char)local_3b != '\0') && (local_4c == local_50)) {
              _Size = local_48 + 1;
              if ((char)local_3b == '\x01') {
                piVar15 = FUN_00494b90(local_54,_Size);
              }
              else {
                iVar14 = FUN_004bc920();
                if (iVar14 == 0) {
                  if (uVar16 < 0x7ffffeff) {
                    if (DAT_00582ac8 == 0) {
                      local_24 = (int *)(*DAT_00582ae8)(_Size);
                      piVar15 = local_24;
                    }
                    else {
                      if (DAT_00583f40 != 0) {
                        (*DAT_00582b18)(DAT_00583f40);
                      }
                      FUN_00480650(_Size,(int *)&local_24);
                      piVar15 = local_24;
                      if (DAT_00583f40 != 0) {
                        (*DAT_00582b20)(DAT_00583f40);
                        piVar15 = local_24;
                      }
                    }
                  }
                  else {
                    local_24 = (int *)0x0;
                    piVar15 = local_24;
                  }
                }
                else {
                  piVar15 = (int *)0x0;
                }
              }
              if (piVar15 != (int *)0x0) {
                memcpy(piVar15,local_50,_Size);
              }
            }
          }
          FUN_0049d510(param_1,(int)local_1c,piVar15,0);
          FUN_00494b00(local_54,piVar15);
        }
        else {
          if (local_1c != (int *)0x4) goto LAB_0049c189;
          iVar14 = local_18[7];
          if ((iVar14 < local_18[8]) || (iVar7 = FUN_0047de10(local_18), iVar7 == 0)) {
            iVar7 = piVar6[1];
            piVar6[7] = piVar6[7] + 1;
            *(undefined2 *)(iVar7 + iVar14 * 0x14) = 1;
            *(undefined1 *)(iVar7 + 3 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 4 + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 8 + iVar14 * 0x14) = param_9;
            *(undefined4 *)(iVar7 + 0xc + iVar14 * 0x14) = 0;
            *(undefined4 *)(iVar7 + 0x10 + iVar14 * 0x14) = 0;
          }
        }
        if ((-1 < (int)local_34) && (local_34 < (uint)piVar6[7])) {
          *(int *)(piVar6[1] + 8 + (int)local_34 * 0x14) = piVar6[7];
        }
        if ((local_10 != (int *)0x0) && (*(byte *)((int)param_1 + 0x13) < 8)) {
          iVar14 = 0;
          piVar15 = local_28;
          do {
            if ((int *)piVar15[4] == local_10) {
              *(undefined1 *)(piVar15 + 2) = 1;
              goto LAB_0049c21e;
            }
            iVar14 = iVar14 + 1;
            piVar15 = piVar15 + 6;
          } while (iVar14 < 10);
          param_1[*(byte *)((int)param_1 + 0x13) + 7] = (int)local_10;
          *(char *)((int)param_1 + 0x13) = *(char *)((int)param_1 + 0x13) + '\x01';
        }
      }
    }
LAB_0049c21e:
    local_8 = *(undefined4 **)((int)local_8 + 0x14);
    local_c = local_c + 1;
  } while( true );
}


/* FUN_0049c270 @ 0049c270  kind=gamemisc  attributed-by=none  size=660 */

int __cdecl
FUN_0049c270(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  void *extraout_EDX;
  int iVar10;
  int iVar11;
  int local_c;
  
  piVar2 = (int *)param_2[3];
  iVar3 = param_2[9];
  iVar10 = param_1[0x10];
  piVar4 = (int *)param_1[2];
  iVar1 = iVar3 + 1;
  if (param_1[0xf] < iVar1) {
    iVar10 = param_1[0x13] + 1;
    param_1[0x13] = param_1[0x13] + iVar1;
  }
  else {
    param_1[0x10] = iVar10 + iVar1;
    param_1[0xf] = param_1[0xf] - iVar1;
  }
  iVar11 = piVar4[7];
  if ((iVar11 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
    piVar4[7] = piVar4[7] + 1;
    iVar6 = piVar4[1];
    *(undefined2 *)(iVar6 + iVar11 * 0x14) = 0x41;
    iVar6 = iVar6 + iVar11 * 0x14;
    *(undefined4 *)(iVar6 + 4) = param_3;
    *(undefined1 *)(iVar6 + 3) = 0;
    *(int *)(iVar6 + 8) = iVar10 + iVar3;
    *(undefined4 *)(iVar6 + 0xc) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 0;
  }
  iVar11 = 0;
  local_c = iVar10;
  if (0 < iVar3) {
    do {
      iVar6 = *(int *)(param_2[1] + iVar11 * 4);
      iVar5 = piVar4[7];
      if (iVar6 == (short)piVar2[9]) {
        if ((iVar5 < piVar4[8]) || (iVar6 = FUN_0047de10(piVar4), iVar6 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar6 = piVar4[1];
          *(undefined2 *)(iVar6 + iVar5 * 0x14) = 0xf;
          iVar6 = iVar6 + iVar5 * 0x14;
          *(int *)(iVar6 + 4) = iVar3 + iVar10;
          *(undefined1 *)(iVar6 + 3) = 0;
          *(int *)(iVar6 + 8) = local_c;
          *(undefined4 *)(iVar6 + 0xc) = 0;
          *(undefined4 *)(iVar6 + 0x10) = 0;
        }
      }
      else {
        if ((iVar5 < piVar4[8]) || (iVar7 = FUN_0047de10(piVar4), iVar7 == 0)) {
          piVar4[7] = piVar4[7] + 1;
          iVar7 = piVar4[1];
          *(undefined4 *)(iVar7 + 4 + iVar5 * 0x14) = param_3;
          *(int *)(iVar7 + 0xc + iVar5 * 0x14) = local_c;
          *(undefined2 *)(iVar7 + iVar5 * 0x14) = 0x1d;
          *(undefined1 *)(iVar7 + 3 + iVar5 * 0x14) = 0;
          *(int *)(iVar7 + 8 + iVar5 * 0x14) = iVar6;
          *(undefined4 *)(iVar7 + 0x10 + iVar5 * 0x14) = 0;
        }
        FUN_00493630(piVar4,piVar2,iVar6,-1);
      }
      iVar11 = iVar11 + 1;
      local_c = local_c + 1;
    } while (iVar11 < iVar3);
  }
  if (param_5 != 0) {
    if ((piVar2[3] == 0) && ((*(byte *)(*param_1 + 0x34) & 0x10) == 0)) {
      param_2 = (int *)FUN_0049db70(piVar4,(int)param_2);
    }
    else {
      param_2 = (int *)0x0;
    }
    iVar3 = piVar4[7];
    if ((iVar3 < piVar4[8]) || (iVar11 = FUN_0047de10(piVar4), iVar11 == 0)) {
      piVar4[7] = piVar4[7] + 1;
      iVar11 = piVar4[1];
      *(undefined2 *)(iVar11 + iVar3 * 0x14) = 0x1f;
      iVar11 = iVar11 + iVar3 * 0x14;
      *(int *)(iVar11 + 4) = iVar10;
      *(int *)(iVar11 + 8) = iVar1;
      *(undefined1 *)(iVar11 + 3) = 0;
      *(undefined4 *)(iVar11 + 0xc) = param_4;
      *(undefined4 *)(iVar11 + 0x10) = 0;
    }
    iVar3 = piVar4[1];
    iVar11 = *piVar4;
    if ((iVar3 == 0) || (*(char *)(iVar11 + 0x38) != '\0')) {
      FUN_0047bc80(iVar11,0,param_2);
    }
    else {
      iVar6 = iVar3 + (piVar4[7] + -1) * 0x14;
      FUN_0047bc80(iVar11,(int)*(char *)(iVar6 + 1),
                   *(int **)(iVar3 + 0x10 + (piVar4[7] + -1) * 0x14));
      *(undefined4 *)(iVar6 + 0x10) = 0;
      if (param_2 == (int *)0x0) {
        *(undefined4 *)(iVar6 + 0x10) = 0;
        *(undefined1 *)(iVar6 + 1) = 0;
      }
      else {
        uVar8 = FUN_004aa9b0((char *)param_2);
        puVar9 = FUN_00494e00(*piVar4,extraout_EDX,uVar8);
        *(undefined4 **)(iVar6 + 0x10) = puVar9;
        *(undefined1 *)(iVar6 + 1) = 0xff;
      }
    }
  }
  FUN_00496d90((int)param_1,iVar10,iVar1);
  if (param_1[0xf] < iVar1) {
    param_1[0xf] = iVar1;
    param_1[0x10] = iVar10;
  }
  return iVar10;
}


/* FUN_0049c510 @ 0049c510  kind=gamemisc  attributed-by=none  size=844 */

void __cdecl
FUN_0049c510(int *param_1,int *param_2,int param_3,undefined4 param_4,int param_5,int *param_6,
            int param_7)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  void *extraout_EDX;
  int local_8;
  
  piVar3 = param_2;
  piVar1 = (int *)param_1[2];
  local_8 = 0;
  iVar4 = FUN_004b6b80(piVar1);
  iVar6 = piVar1[7];
  if ((iVar6 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
    iVar5 = piVar1[1];
    piVar1[7] = piVar1[7] + 1;
    *(int *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
    *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
    *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
    *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
    *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
    *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
  }
  if ((((*(uint *)(*param_1 + 0x18) & 0x40000) != 0) &&
      ((iVar6 = FUN_0049ae70(param_2), iVar6 != 0 || (param_2[4] != 0)))) || (param_6 != (int *)0x0)
     ) {
    param_2 = (int *)0x0;
    for (piVar2 = param_6; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[8]) {
      if (((((char)piVar2[2] == 'j') && ((*(byte *)((int)piVar2 + 9) & 3) != 0)) &&
          (iVar6 = FUN_00471c90((undefined4 *)piVar2[4],(int *)0x0), iVar6 != 0)) &&
         (piVar7 = FUN_0047d6f0(param_1,piVar2,(int)piVar3,param_7), piVar7 != (int *)0x0)) {
        param_2 = (int *)((uint)param_2 | piVar7[4]);
      }
    }
    uVar8 = FUN_0049ad30(param_1,piVar3);
    iVar6 = param_1[0x13];
    param_1[0x13] = *(short *)((int)piVar3 + 0x26) + 1 + iVar6;
    iVar5 = piVar1[7];
    local_8 = iVar6 + 1;
    if ((iVar5 < piVar1[8]) || (iVar9 = FUN_0047de10(piVar1), iVar9 == 0)) {
      iVar9 = piVar1[1];
      piVar1[7] = piVar1[7] + 1;
      *(undefined4 *)(iVar9 + 4 + iVar5 * 0x14) = param_4;
      *(undefined2 *)(iVar9 + iVar5 * 0x14) = 0xe;
      *(undefined1 *)(iVar9 + 3 + iVar5 * 0x14) = 0;
      *(int *)(iVar9 + 8 + iVar5 * 0x14) = local_8;
      *(undefined4 *)(iVar9 + 0xc + iVar5 * 0x14) = 0;
      *(undefined4 *)(iVar9 + 0x10 + iVar5 * 0x14) = 0;
    }
    iVar5 = 0;
    if (0 < *(short *)((int)piVar3 + 0x26)) {
      do {
        if ((((uint)param_2 | uVar8) == 0xffffffff) ||
           ((((uint)param_2 | uVar8) & 1 << ((byte)iVar5 & 0x1f)) != 0)) {
          FUN_00497170(piVar1,piVar3,param_3,iVar5,iVar6 + 2 + iVar5);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(short *)((int)piVar3 + 0x26));
    }
    FUN_00492d70(param_1,param_6,0x6a,(int *)0x0,1,piVar3,local_8,param_7,iVar4);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar5 = piVar1[1];
      *(int *)(iVar5 + 4 + iVar6 * 0x14) = param_3;
      *(int *)(iVar5 + 8 + iVar6 * 0x14) = iVar4;
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x36;
      *(undefined1 *)(iVar5 + 3 + iVar6 * 0x14) = 0;
      *(undefined4 *)(iVar5 + 0xc + iVar6 * 0x14) = param_4;
      *(undefined4 *)(iVar5 + 0x10 + iVar6 * 0x14) = 0;
    }
    FUN_0049a610(param_1,piVar3,local_8,0);
  }
  if (piVar3[3] == 0) {
    FUN_0049c860(param_1,(int)piVar3,param_3,(int *)0x0);
    iVar6 = piVar1[7];
    if ((iVar6 < piVar1[8]) || (iVar5 = FUN_0047de10(piVar1), iVar5 == 0)) {
      piVar1[7] = piVar1[7] + 1;
      iVar5 = piVar1[1];
      *(undefined2 *)(iVar5 + iVar6 * 0x14) = 0x3b;
      iVar5 = iVar5 + iVar6 * 0x14;
      *(int *)(iVar5 + 4) = param_3;
      *(undefined1 *)(iVar5 + 3) = 0;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(uint *)(iVar5 + 8) = (uint)(param_5 != 0);
    }
    if (param_5 != 0) {
      iVar6 = piVar1[1];
      piVar2 = (int *)*piVar3;
      iVar5 = *piVar1;
      if ((iVar6 == 0) || (*(char *)(iVar5 + 0x38) != '\0')) {
        FUN_0047bc80(iVar5,0,piVar2);
      }
      else {
        iVar9 = iVar6 + (piVar1[7] + -1) * 0x14;
        FUN_0047bc80(iVar5,(int)*(char *)(iVar9 + 1),
                     *(int **)(iVar6 + 0x10 + (piVar1[7] + -1) * 0x14));
        *(undefined4 *)(iVar9 + 0x10) = 0;
        if (piVar2 == (int *)0x0) {
          *(undefined4 *)(iVar9 + 0x10) = 0;
          *(undefined1 *)(iVar9 + 1) = 0;
        }
        else {
          uVar8 = FUN_004aa9b0((char *)piVar2);
          puVar10 = FUN_00494e00(*piVar1,extraout_EDX,uVar8);
          *(undefined4 **)(iVar9 + 0x10) = puVar10;
          *(undefined1 *)(iVar9 + 1) = 0xff;
        }
      }
    }
  }
  FUN_0049a5b0(param_1,piVar3,0,local_8);
  FUN_00492d70(param_1,param_6,0x6a,(int *)0x0,2,piVar3,local_8,param_7,iVar4);
  if (piVar1[10] != 0) {
    *(int *)(piVar1[10] - (iVar4 * 4 + 4)) = piVar1[7];
  }
  return;
}


/* FUN_0049c860 @ 0049c860  kind=gamemisc  attributed-by=none  size=187 */

void __cdecl FUN_0049c860(int *param_1,int param_2,int param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  iVar5 = param_3;
  piVar8 = param_4;
  for (piVar1 = *(int **)(param_2 + 8); piVar1 != (int *)0x0; piVar1 = (int *)piVar1[5]) {
    iVar5 = iVar5 + 1;
    if ((param_4 == (int *)0x0) || (*piVar8 != 0)) {
      iVar6 = FUN_0049c270(param_1,piVar1,param_3,0,0);
      piVar2 = (int *)param_1[2];
      iVar3 = piVar1[9];
      iVar4 = piVar2[7];
      if ((iVar4 < piVar2[8]) || (iVar7 = FUN_0047de10(piVar2), iVar7 == 0)) {
        piVar2[7] = piVar2[7] + 1;
        iVar7 = piVar2[1];
        *(int *)(iVar7 + 4 + iVar4 * 0x14) = iVar5;
        *(int *)(iVar7 + 8 + iVar4 * 0x14) = iVar6;
        *(undefined2 *)(iVar7 + iVar4 * 0x14) = 0x62;
        *(undefined1 *)(iVar7 + 3 + iVar4 * 0x14) = 0;
        *(int *)(iVar7 + 0xc + iVar4 * 0x14) = iVar3 + 1;
        *(undefined4 *)(iVar7 + 0x10 + iVar4 * 0x14) = 0;
      }
    }
    piVar8 = piVar8 + 1;
  }
  return;
}


/* FUN_0049c920 @ 0049c920  kind=gamemisc  attributed-by=none  size=38 */

undefined4 __cdecl FUN_0049c920(undefined1 *param_1)

{
  return CONCAT31(CONCAT21(CONCAT11(*param_1,param_1[1]),param_1[2]),param_1[3]);
}


/* FUN_0049c950 @ 0049c950  kind=gamemisc  attributed-by=none  size=30 */

bool __cdecl FUN_0049c950(byte *param_1,byte param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0047da70(param_1,1,param_2);
  return (char)uVar1 != '\0';
}


/* FUN_0049ca30 @ 0049ca30  kind=gamemisc  attributed-by=none  size=193 */

undefined4 __cdecl FUN_0049ca30(char *param_1,uint *param_2)

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
  else if (*param_1 != '+') goto LAB_0049ca5c;
  param_1 = param_1 + 1;
LAB_0049ca5c:
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
    uVar5 = (int)param_1[(int)pcVar6] - 0x30;
    if (9 < uVar5) break;
    uVar2 = local_10 >> 0x1e;
    bVar7 = CARRY4(local_10,local_10 * 4);
    uVar4 = local_10 * 5;
    uVar3 = local_10 * 10;
    local_10 = uVar3 + uVar5;
    uStack_c = ((uStack_c + (uStack_c << 2 | uVar2) + (uint)bVar7) * 2 | uVar4 >> 0x1f) +
               ((int)uVar5 >> 0x1f) + (uint)CARRY4(uVar3,uVar5);
    param_1 = param_1 + 1;
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


/* FUN_0049cb00 @ 0049cb00  kind=gamemisc  attributed-by=none  size=51 */

int __cdecl FUN_0049cb00(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (param_2 <= *(int *)(param_1 + 0x3c)) {
    *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) - param_2;
    *(int *)(param_1 + 0x40) = iVar1 + param_2;
    return iVar1;
  }
  iVar1 = *(int *)(param_1 + 0x4c);
  *(int *)(param_1 + 0x4c) = iVar1 + param_2;
  return iVar1 + 1;
}


/* FUN_0049cb40 @ 0049cb40  kind=gamemisc  attributed-by=none  size=36 */

int __cdecl FUN_0049cb40(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    iVar2 = *(int *)(param_1 + 0x4c) + 1;
    *(int *)(param_1 + 0x4c) = iVar2;
    return iVar2;
  }
  bVar1 = *(char *)(param_1 + 0x13) - 1;
  *(byte *)(param_1 + 0x13) = bVar1;
  return *(int *)(param_1 + 0x1c + (uint)bVar1 * 4);
}


/* FUN_0049cb70 @ 0049cb70  kind=gamemisc  attributed-by=none  size=1481 */

uint __cdecl FUN_0049cb70(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined3 extraout_var;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  bool bVar8;
  
  uVar4 = (uint)*param_1;
  switch(uVar4) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    uVar4 = 1;
    bVar1 = (&DAT_00569720)[param_1[1]];
    while ((bVar1 & 1) != 0) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
    }
    break;
  default:
switchD_0049cb8e_caseD_b:
    if (((&DAT_00569720)[uVar4] & 0x46) != 0) {
      uVar4 = 1;
      bVar1 = (&DAT_00569720)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar7 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar7]];
      }
      uVar2 = FUN_0047f6a0(param_1,uVar4);
      *param_2 = CONCAT31(extraout_var,uVar2);
      return uVar4;
    }
    *param_2 = 0x94;
    return 1;
  case 0x21:
    if (param_1[1] != 0x3d) {
      *param_2 = 0x94;
      return 2;
    }
    goto LAB_0049cd02;
  case 0x22:
  case 0x27:
  case 0x60:
    uVar3 = 1;
    bVar1 = param_1[1];
    while (uVar6 = (uint)bVar1, uVar6 != 0) {
      if (uVar6 == uVar4) {
        if (param_1[uVar3 + 1] != uVar4) break;
        uVar3 = uVar3 + 1;
      }
      iVar7 = uVar3 + 1;
      uVar3 = uVar3 + 1;
      bVar1 = param_1[iVar7];
    }
    if (uVar6 == 0x27) {
      *param_2 = 0x5e;
      return uVar3 + 1;
    }
    if (uVar6 != 0) {
      *param_2 = 0x1a;
      return uVar3 + 1;
    }
    *param_2 = 0x94;
    return uVar3;
  case 0x23:
    uVar4 = 1;
    if (((&DAT_00569720)[param_1[1]] & 4) != 0) {
      do {
        iVar7 = uVar4 + 1;
        uVar4 = uVar4 + 1;
      } while (((&DAT_00569720)[param_1[iVar7]] & 4) != 0);
      if (1 < (int)uVar4) {
        *param_2 = 0x84;
        return uVar4;
      }
    }
  case 0x24:
  case 0x3a:
  case 0x40:
    *param_2 = 0x85;
    uVar3 = (uint)param_1[1];
    iVar7 = 0;
    uVar4 = 1;
    if (uVar3 != 0) {
      do {
        if (((&DAT_00569720)[uVar3] & 0x46) == 0) {
          if (uVar3 == 0x28) {
            if (0 < iVar7) goto LAB_0049d060;
            break;
          }
          if ((uVar3 != 0x3a) || (param_1[uVar4 + 1] != 0x3a)) break;
          uVar4 = uVar4 + 1;
        }
        else {
          iVar7 = iVar7 + 1;
        }
        uVar3 = (uint)param_1[uVar4 + 1];
        uVar4 = uVar4 + 1;
      } while (uVar3 != 0);
LAB_0049d08b:
      if (iVar7 != 0) {
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
    if (((&DAT_00569720)[param_1[1]] & 4) == 0) {
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
    bVar1 = (&DAT_00569720)[*param_1];
    while ((bVar1 & 4) != 0) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
    }
    if (param_1[uVar4] == 0x2e) {
      bVar1 = (&DAT_00569720)[param_1[uVar4 + 1]];
      uVar3 = uVar4;
      while (uVar4 = uVar3 + 1, (bVar1 & 4) != 0) {
        bVar1 = (&DAT_00569720)[param_1[uVar3 + 2]];
        uVar3 = uVar4;
      }
      *param_2 = 0x82;
    }
    if (((param_1[uVar4] == 0x65) || (param_1[uVar4] == 0x45)) &&
       ((bVar1 = param_1[uVar4 + 1], ((&DAT_00569720)[bVar1] & 4) != 0 ||
        (((bVar1 == 0x2b || (bVar1 == 0x2d)) && (((&DAT_00569720)[param_1[uVar4 + 2]] & 4) != 0)))))
       ) {
      iVar7 = uVar4 + 2;
      uVar4 = uVar4 + 2;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
      while ((bVar1 & 4) != 0) {
        iVar7 = uVar4 + 1;
        uVar4 = uVar4 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar7]];
      }
      *param_2 = 0x82;
    }
    if (((&DAT_00569720)[param_1[uVar4]] & 0x46) == 0) {
      return uVar4;
    }
    do {
      uVar4 = uVar4 + 1;
      *param_2 = 0x94;
    } while (((&DAT_00569720)[param_1[uVar4]] & 0x46) != 0);
    return uVar4;
  case 0x2f:
    if ((param_1[1] != 0x2a) || (bVar1 = param_1[2], bVar1 == 0)) {
      *param_2 = 0x59;
      return 1;
    }
    for (uVar4 = 3; (bVar1 != 0x2a || (param_1[uVar4] != 0x2f)); uVar4 = uVar4 + 1) {
      bVar1 = param_1[uVar4];
      if (bVar1 == 0) goto LAB_0049cc97;
    }
    uVar4 = uVar4 + 1;
LAB_0049cc97:
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
LAB_0049cd02:
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
    if (((&DAT_00569720)[param_1[1]] & 4) == 0) {
      return 1;
    }
    do {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
    } while (((&DAT_00569720)[param_1[iVar7]] & 4) != 0);
    return uVar4;
  case 0x58:
  case 0x78:
    if (param_1[1] != 0x27) goto switchD_0049cb8e_caseD_b;
    uVar4 = 2;
    *param_2 = 0x83;
    bVar1 = (&DAT_00569720)[param_1[2]];
    while ((bVar1 & 8) != 0) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = (&DAT_00569720)[param_1[iVar7]];
    }
    if (param_1[uVar4] == 0x27) {
      uVar3 = uVar4 & 0x80000001;
      bVar8 = uVar3 == 0;
      if ((int)uVar3 < 0) {
        bVar8 = (uVar3 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (bVar8) goto LAB_0049d0ff;
    }
    *param_2 = 0x94;
    bVar1 = param_1[uVar4];
    while ((bVar1 != 0 && (bVar1 != 0x27))) {
      iVar7 = uVar4 + 1;
      uVar4 = uVar4 + 1;
      bVar1 = param_1[iVar7];
    }
LAB_0049d0ff:
    if (param_1[uVar4] != 0) {
      uVar4 = uVar4 + 1;
    }
    return uVar4;
  case 0x5b:
    for (uVar3 = 1; (uVar4 != 0x5d && (uVar4 = (uint)param_1[uVar3], uVar4 != 0)); uVar3 = uVar3 + 1
        ) {
    }
    uVar5 = 0x94;
    if (uVar4 == 0x5d) {
      uVar5 = 0x1a;
    }
    *param_2 = uVar5;
    return uVar3;
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
  while (uVar6 != 0x29) {
LAB_0049d060:
    uVar3 = uVar4;
    uVar6 = (uint)param_1[uVar3 + 1];
    uVar4 = uVar3 + 1;
    if ((uVar6 == 0) || (((&DAT_00569720)[uVar6] & 1) != 0)) {
      if (uVar6 == 0x29) {
        uVar4 = uVar3 + 2;
      }
      else {
        *param_2 = 0x94;
      }
      goto LAB_0049d08b;
    }
  }
  uVar4 = uVar3 + 2;
  goto LAB_0049d08b;
}


/* FUN_0049d250 @ 0049d250  kind=gamemisc  attributed-by=none  size=29 */

void __cdecl FUN_0049d250(int param_1,int param_2)

{
  int *piVar1;
  
  for (piVar1 = *(int **)(param_2 + 0x38); (piVar1 != (int *)0x0 && (*piVar1 != param_1));
      piVar1 = (int *)piVar1[6]) {
  }
  return;
}


/* FUN_0049d270 @ 0049d270  kind=gamemisc  attributed-by=none  size=450 */

undefined4 __cdecl FUN_0049d270(byte *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = (uint)*param_1;
  uVar3 = (undefined3)((uint)param_2 >> 8);
  if (-1 < (char)*param_1) {
    *param_2 = uVar4;
    param_2[1] = 0;
    return CONCAT31(uVar3,1);
  }
  uVar5 = (uint)param_1[1];
  if (-1 < (char)param_1[1]) {
    *param_2 = (uVar4 & 0x7f) << 7 | uVar5;
    param_2[1] = 0;
    return CONCAT31(uVar3,2);
  }
  uVar4 = uVar4 << 0xe | (uint)param_1[2];
  if (-1 < (char)param_1[2]) {
    *param_2 = (uVar5 & 0x7f) << 7 | uVar4 & 0x1fc07f;
    param_2[1] = 0;
    return CONCAT31(uVar3,3);
  }
  uVar5 = uVar5 << 0xe | (uint)param_1[3];
  uVar4 = uVar4 & 0x1fc07f;
  if (-1 < (char)param_1[3]) {
    *param_2 = uVar5 & 0x1fc07f | uVar4 << 7;
    param_2[1] = 0;
    return CONCAT31(uVar3,4);
  }
  uVar1 = uVar4 << 0xe | (uint)param_1[4];
  uVar5 = uVar5 & 0x1fc07f;
  if (-1 < (char)param_1[4]) {
    *param_2 = uVar5 << 7 | uVar1;
    param_2[1] = uVar4 >> 0x12;
    return CONCAT31(uVar3,5);
  }
  uVar4 = uVar4 << 7 | uVar5;
  uVar5 = uVar5 << 0xe | (uint)param_1[5];
  if (-1 < (char)param_1[5]) {
    *param_2 = (uVar1 & 0x1fc07f) << 7 | uVar5;
    param_2[1] = uVar4 >> 0x12;
    return CONCAT31(uVar3,6);
  }
  uVar1 = uVar1 << 0xe | (uint)param_1[6];
  if (-1 < (char)param_1[6]) {
    *param_2 = (uVar5 << 7 ^ uVar1) & 0xfe03f80 ^ uVar1;
    param_2[1] = uVar4 >> 0xb;
    return CONCAT31(uVar3,7);
  }
  uVar6 = uVar5 << 0xe | (uint)param_1[7];
  uVar5 = (uVar1 & 0x1fc07f) << 7;
  if (-1 < (char)param_1[7]) {
    *param_2 = uVar6 & 0xf01fc07f | uVar5;
    param_2[1] = uVar4 >> 4;
    return CONCAT31(uVar3,8);
  }
  bVar2 = param_1[4];
  *param_2 = (uVar6 & 0x1fc07f | uVar5) << 8 | (uint)param_1[8];
  param_2[1] = bVar2 >> 3 & 0xf | uVar4 << 4;
  return CONCAT31(uVar3,9);
}


/* FUN_0049d440 @ 0049d440  kind=gamemisc  attributed-by=none  size=137 */

uint __cdecl FUN_0049d440(byte *param_1,uint *param_2)

{
  byte bVar1;
  undefined3 uVar3;
  undefined4 uVar2;
  uint local_c;
  int local_8;
  
  bVar1 = param_1[1];
  uVar3 = (undefined3)((uint)param_2 >> 8);
  if (-1 < (char)bVar1) {
    *param_2 = (*param_1 & 0x7f) << 7 | (uint)bVar1;
    return CONCAT31(uVar3,2);
  }
  if ((char)param_1[2] < '\0') {
    uVar2 = FUN_0049d270(param_1,&local_c);
    if (local_8 != 0) {
      *param_2 = 0xffffffff;
      return CONCAT31(uVar3,(char)uVar2);
    }
    *param_2 = local_c;
    return CONCAT31(uVar3,(char)uVar2);
  }
  *param_2 = (bVar1 & 0x7f) << 7 | ((uint)*param_1 << 0xe | (uint)param_1[2]) & 0x1fc07f;
  return CONCAT31(uVar3,3);
}


/* FUN_0049d4d0 @ 0049d4d0  kind=gamemisc  attributed-by=none  size=54 */

int * __cdecl FUN_0049d4d0(int *param_1)

{
  int *piVar1;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 == (int *)0x0) {
    piVar1 = FUN_004af150(*param_1);
    param_1[2] = (int)piVar1;
    if (piVar1 != (int *)0x0) {
      FUN_004ae760(piVar1,0x94);
    }
  }
  return piVar1;
}


