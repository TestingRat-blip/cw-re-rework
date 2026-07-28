// Unsorted (world) -- server. 128 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_00401370 @ 00401370  kind=gamemisc  attributed-by=logic:caller-vote  size=37 */

undefined1 * __thiscall FUN_00401370(void *this,undefined1 *param_1,undefined1 param_2)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_2;
  return this;
}


/* FUN_004014f0 @ 004014f0  kind=gamemisc  attributed-by=logic:caller-vote  size=55 */

void __thiscall FUN_004014f0(void *this,float *param_1,float *param_2)

{
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = param_2[1] + *(float *)((int)this + 4);
  param_1[2] = param_2[2] + *(float *)((int)this + 8);
  return;
}


/* FUN_00401610 @ 00401610  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

float * __thiscall FUN_00401610(void *this,float param_1)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * param_1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) * param_1;
  return this;
}


/* FUN_00401ca0 @ 00401ca0  kind=gamemisc  attributed-by=logic:caller-vote  size=33 */

float10 __cdecl FUN_00401ca0(float param_1)

{
  return (float10)ABS(param_1);
}


/* FUN_00402a40 @ 00402a40  kind=gamemisc  attributed-by=logic:caller-vote  size=46 */

undefined4 * __thiscall FUN_00402a40(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  return this;
}


/* FUN_00402a70 @ 00402a70  kind=gamemisc  attributed-by=logic:caller-vote  size=149 */

undefined1 * __thiscall FUN_00402a70(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0xc) = param_1[0xc];
  *(undefined1 *)((int)this + 0xd) = param_1[0xd];
  *(undefined1 *)((int)this + 0xe) = param_1[0xe];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  puVar2 = param_1 + 0x17;
  puVar1 = (undefined1 *)((int)this + 0x15);
  iVar3 = 0x20;
  do {
    puVar1[-1] = puVar2[-3];
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1[1] = puVar2[-1];
    puVar1[2] = *puVar2;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar2 + 1);
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return this;
}


/* FUN_00402eb0 @ 00402eb0  kind=gamemisc  attributed-by=logic:caller-vote  size=22 */

uint * __thiscall FUN_00402eb0(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this - uVar2;
  *(int *)((int)this + 4) = (*(int *)((int)this + 4) - param_1[1]) - (uint)(uVar1 < uVar2);
  return this;
}


/* FUN_00405610 @ 00405610  kind=gamemisc  attributed-by=logic:caller-vote  size=38 */

undefined1 * __thiscall FUN_00405610(void *this,undefined1 *param_1)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_1[3];
  return this;
}


/* FUN_00405660 @ 00405660  kind=gamemisc  attributed-by=logic:caller-vote  size=37 */

void __thiscall FUN_00405660(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = uVar1 + param_2 * -0x10000;
  param_1[1] = (iVar2 - (((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10)) -
               (uint)(uVar1 < param_2 * 0x10000);
  return;
}


/* FUN_00405690 @ 00405690  kind=gamemisc  attributed-by=logic:caller-vote  size=35 */

void __thiscall FUN_00405690(void *this,int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = param_2 * 0x10000 + *(int *)this;
  param_1[1] = (((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) + iVar2 +
               (uint)CARRY4(param_2 * 0x10000,uVar1);
  return;
}


/* FUN_004078f0 @ 004078f0  kind=gamemisc  attributed-by=logic:caller-vote  size=197 */

uint __thiscall FUN_004078f0(void *this,char *param_1)

{
  char cVar1;
  undefined4 in_EAX;
  undefined3 uVar4;
  uint uVar2;
  uint uVar3;
  undefined3 extraout_var;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  
  uVar4 = (undefined3)((uint)in_EAX >> 8);
  uVar2 = CONCAT31(uVar4,*(char *)this);
  if (((((*(char *)this == *param_1) &&
        (uVar2 = CONCAT31(uVar4,*(char *)((int)this + 1)), *(char *)((int)this + 1) == param_1[1]))
       && (uVar2 = *(uint *)((int)this + 4), uVar2 == *(uint *)(param_1 + 4))) &&
      ((uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)this + 0xe)),
       *(char *)((int)this + 0xe) == param_1[0xe] &&
       (uVar3 = *(uint *)((int)this + 8), uVar2 = uVar3, uVar3 == *(uint *)(param_1 + 8))))) &&
     ((uVar2 = CONCAT31((int3)(uVar3 >> 8),*(char *)((int)this + 0xc)),
      *(char *)((int)this + 0xc) == param_1[0xc] &&
      ((uVar2 = CONCAT22((short)(uVar3 >> 0x10),*(short *)((int)this + 0x10)),
       *(short *)((int)this + 0x10) == *(short *)(param_1 + 0x10) &&
       (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(char *)((int)this + 0xd)),
       *(char *)((int)this + 0xd) == param_1[0xd])))))) {
    uVar2 = *(uint *)((int)this + 0x114);
    if (uVar2 == *(uint *)(param_1 + 0x114)) {
      iVar6 = 0;
      uVar3 = uVar2;
      if (0 < (int)uVar2) {
        pcVar5 = param_1 + 0x14;
        pcVar7 = (char *)((int)this + 0x17);
        do {
          uVar3 = CONCAT31((int3)(uVar3 >> 8),*pcVar7);
          if (*pcVar7 != pcVar7[(int)param_1 - (int)this]) {
LAB_004079a1:
            return uVar3 & 0xffffff00;
          }
          cVar1 = FUN_004079c0(pcVar7 + -3,(int)pcVar5);
          uVar3 = CONCAT31(extraout_var,cVar1);
          if (cVar1 != '\0') goto LAB_004079a1;
          iVar6 = iVar6 + 1;
          pcVar5 = pcVar5 + 8;
          pcVar7 = pcVar7 + 8;
        } while (iVar6 < (int)uVar2);
      }
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
  }
  return uVar2 & 0xffffff00;
}


/* FUN_004079c0 @ 004079c0  kind=gamemisc  attributed-by=logic:caller-vote  size=41 */

undefined1 __thiscall FUN_004079c0(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  iVar2 = param_1 - (int)this;
  do {
    if (*(char *)this != *(char *)((int)this + iVar2)) {
      return 1;
    }
    iVar1 = iVar1 + 1;
    this = (void *)((int)this + 1);
  } while (iVar1 < 3);
  return 0;
}


/* FUN_004079f0 @ 004079f0  kind=gamemisc  attributed-by=logic:caller-vote  size=55 */

void __thiscall FUN_004079f0(void *this,float *param_1,float param_2)

{
  *param_1 = *(float *)this * param_2;
  param_1[1] = *(float *)((int)this + 4) * param_2;
  param_1[2] = *(float *)((int)this + 8) * param_2;
  return;
}


/* FUN_00407b30 @ 00407b30  kind=gamemisc  attributed-by=logic:caller-vote  size=47 */

void FUN_00407b30(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x18);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407b3e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_00407be0 @ 00407be0  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_00407be0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x14);
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


/* FUN_00407d60 @ 00407d60  kind=gamemisc  attributed-by=logic:caller-vote  size=53 */

float10 __cdecl FUN_00407d60(float param_1)

{
  return (float10)(1.0 - 1.0 / ((param_1 - 1.0) * 0.05 + 1.0));
}


/* FUN_0040a1d0 @ 0040a1d0  kind=gamemisc  attributed-by=logic:caller-vote  size=601 */

void __thiscall FUN_0040a1d0(void *this,undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar1 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar1;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar6 = piVar5;
    if ((*(char *)(piVar1[2] + 0xd) == '\0') && (piVar6 = (int *)param_2[2], param_2 != piVar1)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar1;
      piVar5 = param_2;
      if (param_2 != (int *)piVar1[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          piVar6[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar6;
        param_2[2] = piVar1[2];
        *(int **)(piVar1[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar1) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar3 = (int *)piVar1[1];
        if ((int *)*piVar3 == piVar1) {
          *piVar3 = (int)param_2;
        }
        else {
          piVar3[2] = (int)param_2;
        }
      }
      param_2[1] = piVar1[1];
      iVar4 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar1[3];
      *(char *)(piVar1 + 3) = (char)iVar4;
      goto LAB_0040a2ee;
    }
  }
  else {
    piVar6 = (int *)piVar1[2];
  }
  piVar5 = (int *)piVar1[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar1) {
    *(int **)(*(int *)this + 4) = piVar6;
  }
  else if ((int *)*piVar5 == piVar1) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  piVar3 = *(int **)this;
  if ((int *)*piVar3 == piVar1) {
    piVar2 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar2 = FUN_0042d440(piVar6);
      piVar3 = *(int **)this;
    }
    *piVar3 = (int)piVar2;
  }
  if (*(int **)(*(int *)this + 8) == piVar1) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar6);
      *(int *)(*(int *)this + 8) = iVar4;
    }
    else {
      *(int **)(*(int *)this + 8) = piVar5;
    }
  }
LAB_0040a2ee:
  if ((char)piVar1[3] == '\x01') {
    if (piVar6 != *(int **)(*(int *)this + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004ce780(this,(int)piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar3);
              break;
            }
LAB_0040a3b2:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042d460(this,piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_0040a3b2;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar3);
            break;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
  operator_delete(piVar1);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0040a840 @ 0040a840  kind=gamemisc  attributed-by=logic:caller-vote  size=17600 */

/* WARNING: Removing unreachable block (ram,0x0040a935) */
/* WARNING: Removing unreachable block (ram,0x0040a95c) */
/* WARNING: Removing unreachable block (ram,0x0040a986) */
/* WARNING: Removing unreachable block (ram,0x0040a99b) */
/* WARNING: Removing unreachable block (ram,0x0040a971) */
/* WARNING: Removing unreachable block (ram,0x0040a947) */
/* WARNING: Removing unreachable block (ram,0x0040a919) */
/* WARNING: Removing unreachable block (ram,0x0040a9b0) */

void __cdecl FUN_0040a840(uint *param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  void *pvVar8;
  short sVar9;
  bool bVar10;
  float fVar11;
  ushort local_2c;
  undefined1 local_2a;
  undefined4 local_28;
  undefined1 local_24;
  int local_20;
  int local_1c;
  ushort local_18;
  undefined1 local_16;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0xffff;
  local_16 = 0xff;
  if (param_3 == (undefined4 *)0x0) {
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_18 = local_2c;
    local_16 = (char)iVar4;
    local_20 = rand();
    local_20 = local_20 % 100;
    iVar4 = rand();
    param_3 = &local_28;
    local_1c = iVar4 % 100;
  }
  else {
    switch(*param_3) {
    case 0:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 2;
      break;
    case 1:
      uVar7 = *(byte *)(param_3 + 1) & 0x80000001;
      break;
    case 2:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 9;
      break;
    case 3:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xb;
      break;
    case 4:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 4;
      break;
    case 5:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 7;
      break;
    case 6:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xf;
      break;
    case 7:
      uVar7 = (*(byte *)(param_3 + 1) & 0x80000001) + 0xd;
      break;
    default:
      goto switchD_0040a907_default;
    }
    *param_1 = uVar7;
  }
switchD_0040a907_default:
  *(undefined4 *)(param_2 + 8) = 0x3f75c290;
  *(undefined4 *)(param_2 + 0xc) = 0x3f75c290;
  *(undefined4 *)(param_2 + 0x10) = 0x400a3d71;
  switch(*param_1) {
  case 0:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    uVar7 = param_3[2] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x4d4;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x500;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 1:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4d8;
    sVar3 = 0x1ae;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x50a;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    goto LAB_0040aaa7;
  case 2:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4de;
    sVar3 = 0x4e0;
    sVar9 = (short)((int)param_3[3] % 0xf) + 0x4e4;
    goto LAB_0040aa8e;
  case 3:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4f3;
    sVar3 = 0x4f5;
    sVar9 = (short)((int)param_3[3] % 7) + 0x4f9;
LAB_0040aa8e:
    *(short *)(param_2 + 0x16) = sVar9;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = (sVar3 < *(short *)(param_2 + 0x14)) + 0x1ae;
    goto LAB_0040aaa7;
  case 4:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x4b;
    sVar3 = (short)((int)param_3[3] % 6) + 0x50;
    goto LAB_0040aca5;
  case 5:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x56;
    sVar3 = (short)((int)param_3[3] % 6) + 0x5b;
LAB_0040aca5:
    *(short *)(param_2 + 0x16) = sVar3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x61;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    goto LAB_0040acc0;
  case 6:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    *(ushort *)(param_2 + 2) = local_2c;
    *(char *)(param_2 + 4) = (char)iVar4;
    iVar4 = rand();
    *(short *)(param_2 + 0x14) = (short)(iVar4 % 3) + 0x94b;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1af;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 7:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    uVar7 = param_3[2] & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x62;
    goto LAB_0040ae11;
  case 8:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x6a;
LAB_0040ae11:
    sVar3 = 0x6f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 100;
    *(undefined4 *)(param_2 + 0x1a) = 0x700071;
    goto LAB_0040aaa7;
  case 9:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x11a;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x11f;
    *(undefined4 *)(param_2 + 0x1a) = 0x12c01b0;
    goto LAB_0040b0fb;
  case 10:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x122;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x127;
    *(undefined4 *)(param_2 + 0x1a) = 0x12d01b0;
LAB_0040b0fb:
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_0040acc0;
  case 0xb:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x514;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 10) + 0x51e;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x12e;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_0040b1b7;
  case 0xc:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x519;
    uVar7 = param_3[3] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x16) = (short)uVar7 + 0x528;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x12e;
    *(undefined4 *)(param_2 + 0x40) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
LAB_0040b1b7:
    *(undefined4 *)(param_2 + 8) = 0x3f851eb8;
    *(undefined4 *)(param_2 + 0xc) = 0x3f851eb8;
    *(undefined4 *)(param_2 + 0x10) = 0x4015c28f;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0xd:
    local_2c = 0xffff;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined1 *)(param_2 + 4) = 0xff;
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x52c;
    sVar3 = 0x53e;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x531;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    goto LAB_0040aaa7;
  case 0xe:
    local_2c = 0xffff;
    *(undefined2 *)(param_2 + 2) = 0xffff;
    *(undefined1 *)(param_2 + 4) = 0xff;
    uVar7 = param_3[2] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x14) = (short)uVar7 + 0x536;
    uVar7 = param_3[3] & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    *(short *)(param_2 + 0x16) = (short)uVar7 + 0x53a;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = 0x53e;
    goto LAB_0040aaa7;
  case 0xf:
    FUN_00401020((void *)(param_2 + 2),(undefined1 *)(param_3 + 4));
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x12f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x135;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x10:
    FUN_00401020((void *)(param_2 + 2),(undefined1 *)(param_3 + 4));
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x13b;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x141;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x11:
    *(undefined4 *)(param_2 + 0x14) = 0x1490148;
    *(undefined4 *)(param_2 + 0x1a) = 0x14b014c;
    *(undefined2 *)(param_2 + 0x18) = 0x14a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 7.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 5.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x12:
    *(undefined2 *)(param_2 + 0x14) = 0xb;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0040aaa7;
  case 0x13:
    *(undefined2 *)(param_2 + 0x14) = 0x163;
    *(undefined4 *)(param_2 + 0x1a) = 0x1620165;
    *(undefined2 *)(param_2 + 0x18) = 0x164;
    uVar1 = 0x166;
    goto LAB_0040d4cf;
  case 0x14:
    *(undefined2 *)(param_2 + 0x14) = 0x168;
    *(undefined4 *)(param_2 + 0x1a) = 0x167016a;
    *(undefined2 *)(param_2 + 0x18) = 0x169;
    uVar1 = 0x16b;
LAB_0040d4cf:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
LAB_0040d582:
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_c = -1.0;
LAB_0040d597:
    local_10 = -8.0;
LAB_0040d59e:
    local_14 = 0.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_0040ecea;
  case 0x15:
    *(undefined2 *)(param_2 + 0x14) = 0x16d;
    *(undefined4 *)(param_2 + 0x1a) = 0x16c016f;
    *(undefined2 *)(param_2 + 0x18) = 0x16e;
    *(undefined2 *)(param_2 + 0x1e) = 0x170;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 2.5;
    local_c = -4.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    local_14 = 2.8;
    local_10 = 2.8;
    local_c = 4.0;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x16:
    *(undefined2 *)(param_2 + 0x14) = 0x172;
    *(undefined4 *)(param_2 + 0x1a) = 0x1710174;
    uVar1 = 0x173;
    goto LAB_0040d713;
  case 0x17:
    *(undefined2 *)(param_2 + 0x14) = 0x176;
    *(undefined4 *)(param_2 + 0x1a) = 0x1750178;
    uVar1 = 0x177;
LAB_0040d713:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -9.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    goto LAB_0040ecea;
  case 0x18:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x874;
    local_10 = 0.0;
    local_c = -1.5;
    pvVar8 = (void *)(param_2 + 100);
    goto LAB_0040ba92;
  case 0x19:
    *(undefined2 *)(param_2 + 0x14) = 0x872;
    *(undefined4 *)(param_2 + 0x1a) = 0x8710873;
    *(undefined2 *)(param_2 + 0x18) = 0x873;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 0.0;
    local_10 = 13.0;
    local_c = 0.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -3.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -3.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_c = 4.5;
    goto LAB_0040d597;
  case 0x1a:
    *(undefined2 *)(param_2 + 0x14) = 0x17a;
    *(undefined4 *)(param_2 + 0x1a) = 0x179017c;
    *(undefined2 *)(param_2 + 0x18) = 0x17b;
    *(undefined2 *)(param_2 + 0x1e) = 0x17d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -10.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 1.04;
    local_10 = 1.04;
    local_c = 2.34;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x1b:
    *(undefined2 *)(param_2 + 0x14) = 0x17f;
    *(undefined4 *)(param_2 + 0x1a) = 0x17e0181;
    *(undefined2 *)(param_2 + 0x18) = 0x180;
    *(undefined2 *)(param_2 + 0x1e) = 0x182;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.7;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x1c:
    *(undefined2 *)(param_2 + 0x14) = 0x184;
    *(undefined4 *)(param_2 + 0x1a) = 0x1830186;
    *(undefined2 *)(param_2 + 0x18) = 0x185;
    *(undefined2 *)(param_2 + 0x1e) = 0x187;
    local_14 = 0.0;
    local_10 = 11.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -3.5;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -7.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -7.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = -5.5;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    local_14 = 1.52;
    local_10 = 1.52;
    local_c = 3.23;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_0040ecea;
  case 0x1d:
    *(undefined2 *)(param_2 + 0x14) = 0x189;
    *(undefined4 *)(param_2 + 0x1a) = 0x188018b;
    *(undefined2 *)(param_2 + 0x18) = 0x18a;
    *(undefined2 *)(param_2 + 0x1e) = 0x18c;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    local_14 = 0.0;
    local_10 = 14.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 5.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -6.0;
    local_c = -9.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f8ccccd;
    local_10 = -11.0;
    local_c = -4.0;
    goto LAB_0040d59e;
  case 0x1e:
    *(undefined2 *)(param_2 + 0x14) = 0x18e;
    *(undefined4 *)(param_2 + 0x1a) = 0x18d0190;
    *(undefined2 *)(param_2 + 0x18) = 399;
    uVar1 = 0x191;
    goto LAB_0040dcda;
  case 0x1f:
    *(undefined2 *)(param_2 + 0x14) = 0x193;
    *(undefined4 *)(param_2 + 0x1a) = 0x1920195;
    *(undefined2 *)(param_2 + 0x18) = 0x194;
    uVar1 = 0x196;
    goto LAB_0040dcda;
  case 0x20:
    *(undefined2 *)(param_2 + 0x14) = 0x198;
    *(undefined4 *)(param_2 + 0x1a) = 0x197019a;
    *(undefined2 *)(param_2 + 0x18) = 0x199;
    uVar1 = 0x19b;
LAB_0040dcda:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_0040ecea;
  case 0x21:
    *(undefined2 *)(param_2 + 0x14) = 0x19d;
    *(undefined4 *)(param_2 + 0x1a) = 0x19c019e;
    *(undefined2 *)(param_2 + 0x18) = 0x19e;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_10 = 9.0;
    goto LAB_0040de38;
  case 0x22:
    *(undefined2 *)(param_2 + 0x14) = 0x1a0;
    *(undefined4 *)(param_2 + 0x1a) = 0x19f01a1;
    *(undefined2 *)(param_2 + 0x18) = 0x1a1;
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 1.2;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_10 = 4.0;
LAB_0040de38:
    local_14 = 0.0;
    local_c = 1.9;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -4.2;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.2;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f59999a;
    goto LAB_0040d582;
  case 0x23:
    *(undefined4 *)(param_2 + 0x1a) = 0x9a009b;
    goto LAB_0040c70d;
  case 0x24:
    *(undefined4 *)(param_2 + 0x1a) = 0x9c009d;
LAB_0040c70d:
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.1;
LAB_0040bf6f:
    pvVar8 = (void *)(param_2 + 8);
LAB_0040bf72:
    FUN_00401060(pvVar8,&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x30;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x25:
    uVar1 = 0x95f;
    goto LAB_0040ca71;
  case 0x26:
    uVar1 = 0x960;
    goto LAB_0040ca71;
  case 0x27:
    uVar1 = 0x961;
    goto LAB_0040ca71;
  case 0x28:
    uVar1 = 0x962;
LAB_0040ca71:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
LAB_0040cab2:
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x29;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x29:
    *(undefined4 *)(param_2 + 0x14) = 0x9640963;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x429;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x2a:
    *(undefined2 *)(param_2 + 0x14) = 0x965;
    *(undefined2 *)(param_2 + 0x18) = 0x966;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040b980;
  case 0x2b:
    *(undefined2 *)(param_2 + 0x14) = 3;
    *(undefined4 *)(param_2 + 0x1a) = 0x401b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    break;
  case 0x2c:
    *(undefined2 *)(param_2 + 0x14) = 10;
    *(undefined2 *)(param_2 + 0x16) = 0xffff;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0040aaa7;
  case 0x2d:
    *(undefined2 *)(param_2 + 0x14) = 5;
    *(undefined4 *)(param_2 + 0x1a) = 0x601b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x2e:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_2a = (char)iVar4;
    FUN_00401020((void *)(param_2 + 2),(undefined1 *)&local_2c);
    *(undefined2 *)(param_2 + 0x14) = 0x3c;
    *(undefined4 *)(param_2 + 0x1a) = 0x3d003f;
    *(undefined2 *)(param_2 + 0x18) = 0x3e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 5.3999996;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x2f:
    *(undefined2 *)(param_2 + 0x14) = 0x40;
    *(undefined4 *)(param_2 + 0x18) = 0x420041;
    *(undefined4 *)(param_2 + 0x38) = 0x3f266666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f59999a;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f59999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -6.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 3.6000001;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x30:
    *(undefined2 *)(param_2 + 0x14) = 0xc;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000f;
    *(undefined2 *)(param_2 + 0x18) = 0xe;
    goto LAB_0040af02;
  case 0x31:
    *(undefined2 *)(param_2 + 0x14) = 0x10;
    *(undefined4 *)(param_2 + 0x1a) = 0x110013;
    *(undefined2 *)(param_2 + 0x18) = 0x12;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0040af02:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar11 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0040af2f:
    *(float *)(param_2 + 0x10) = fVar11;
    break;
  case 0x32:
    *(undefined2 *)(param_2 + 0x14) = 0x14;
    *(undefined4 *)(param_2 + 0x1a) = 0x150017;
    *(undefined2 *)(param_2 + 0x18) = 0x16;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40600000;
    *(undefined4 *)(param_2 + 0x78) = 0x40000000;
    *(undefined4 *)(param_2 + 0x88) = 0x40600000;
    *(undefined4 *)(param_2 + 0x8c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x90) = 0xc1080000;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0xc0800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f866666;
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 8) = 0x3f23d70b;
    *(undefined4 *)(param_2 + 0xc) = 0x3f23d70b;
    *(undefined4 *)(param_2 + 0x10) = 0x3fae147b;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x33:
    *(undefined2 *)(param_2 + 0x14) = 0x94f;
    *(undefined4 *)(param_2 + 0x1a) = 0xe2094e;
    *(undefined2 *)(param_2 + 0x18) = 0x950;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x34:
    *(undefined2 *)(param_2 + 0x14) = 0x952;
    *(undefined4 *)(param_2 + 0x1a) = 0x9540951;
    *(undefined2 *)(param_2 + 0x18) = 0x953;
    *(undefined4 *)(param_2 + 0x7c) = 0x40c00000;
    *(undefined4 *)(param_2 + 0x80) = 0;
    *(undefined4 *)(param_2 + 0x84) = 0x3f800000;
    *(undefined4 *)(param_2 + 100) = 0;
    *(undefined4 *)(param_2 + 0x68) = 0;
    *(undefined4 *)(param_2 + 0x6c) = 0xc0800000;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x35:
    *(undefined2 *)(param_2 + 0x14) = 0xe7;
    *(undefined4 *)(param_2 + 0x1a) = 0xe600e8;
    *(undefined2 *)(param_2 + 0x22) = 0xe9;
    goto LAB_0040e022;
  case 0x36:
    *(undefined2 *)(param_2 + 0x14) = 0xeb;
    *(undefined4 *)(param_2 + 0x1a) = 0xea00ec;
    *(undefined2 *)(param_2 + 0x22) = 0xee;
    *(undefined2 *)(param_2 + 0x18) = 0xed;
LAB_0040e022:
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    local_10 = -6.0;
    local_c = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    pvVar8 = (void *)(param_2 + 0xa0);
    goto LAB_0040bf72;
  case 0x37:
    *(undefined2 *)(param_2 + 0x14) = 0xff;
    *(undefined4 *)(param_2 + 0x1a) = 0xfe0100;
    uVar1 = 0x101;
    goto LAB_0040e287;
  case 0x38:
    *(undefined2 *)(param_2 + 0x14) = 0x103;
    *(undefined4 *)(param_2 + 0x1a) = 0x1020104;
    *(undefined2 *)(param_2 + 0x22) = 0x105;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fa66666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    local_14 = 3.0;
    local_10 = -2.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.65;
    goto LAB_0040bf6f;
  case 0x39:
    *(undefined2 *)(param_2 + 0x14) = 0x107;
    *(undefined4 *)(param_2 + 0x1a) = 0x1060108;
    *(undefined2 *)(param_2 + 0x22) = 0x109;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = 5.0;
    local_c = 8.0;
    goto LAB_0040e2bd;
  case 0x3a:
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    bVar10 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar10 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar10) {
      *(undefined2 *)(param_2 + 0x14) = 0x10f;
      *(undefined4 *)(param_2 + 0x1a) = 0x10e0110;
      uVar1 = 0x111;
    }
    else {
      *(undefined2 *)(param_2 + 0x14) = 0x10b;
      *(undefined4 *)(param_2 + 0x1a) = 0x10a010c;
      uVar1 = 0x10d;
    }
LAB_0040e287:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = 3.0;
    local_c = 6.0;
LAB_0040e2bd:
    local_14 = 0.0;
    pvVar8 = (void *)(param_2 + 0x70);
LAB_0040e2c7:
    FUN_00401060(pvVar8,&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    pvVar8 = (void *)(param_2 + 0xa0);
    goto LAB_0040bf72;
  case 0x3b:
    *(undefined2 *)(param_2 + 0x14) = 0x113;
    *(undefined4 *)(param_2 + 0x1a) = 0x1120114;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    pvVar8 = (void *)(param_2 + 0x88);
    goto LAB_0040e2c7;
  case 0x3c:
    *(undefined2 *)(param_2 + 0x14) = 0xf0;
    *(undefined4 *)(param_2 + 0x1a) = 0xef00f1;
    uVar1 = 0xf2;
    goto LAB_0040e0bc;
  case 0x3d:
    *(undefined2 *)(param_2 + 0x14) = 0xf7;
    *(undefined4 *)(param_2 + 0x1a) = 0xf600f8;
    *(undefined2 *)(param_2 + 0x22) = 0xf9;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = -5.0;
    local_c = -1.0;
    goto LAB_0040e0f2;
  case 0x3e:
    *(undefined2 *)(param_2 + 0x14) = 0xfb;
    *(undefined4 *)(param_2 + 0x1a) = 0xfa00fc;
    uVar1 = 0xfd;
LAB_0040e0bc:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_10 = -6.0;
    local_c = 1.0;
LAB_0040e0f2:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    pvVar8 = (void *)(param_2 + 0x70);
    goto LAB_0040bf72;
  case 0x3f:
    *(undefined4 *)(param_2 + 0x1a) = 0x14d014e;
    goto LAB_0040e48d;
  case 0x40:
    *(undefined4 *)(param_2 + 0x1a) = 0x14f0150;
    goto LAB_0040e48d;
  case 0x41:
    *(undefined4 *)(param_2 + 0x1a) = 0x1510152;
    goto LAB_0040e48d;
  case 0x42:
    *(undefined4 *)(param_2 + 0x1a) = 0x1530154;
LAB_0040e48d:
    *(undefined2 *)(param_2 + 0x18) = 0xffff;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -1.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_0040b989;
  case 0x43:
    *(undefined4 *)(param_2 + 0x1a) = 0x1550156;
    *(undefined2 *)(param_2 + 0x14) = 0x157;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 3.75;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_0040b989;
  case 0x44:
    *(undefined2 *)(param_2 + 0x14) = 0x73;
    *(undefined4 *)(param_2 + 0x1a) = 0x720074;
    *(undefined2 *)(param_2 + 0x18) = 0x75;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    break;
  case 0x45:
    *(undefined2 *)(param_2 + 0x14) = 0x77;
    *(undefined4 *)(param_2 + 0x1a) = 0x760078;
    *(undefined2 *)(param_2 + 0x18) = 0x79;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -10.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f333333;
    goto LAB_0040be16;
  case 0x46:
    *(undefined4 *)(param_2 + 0x1a) = 0x7a007b;
    *(undefined2 *)(param_2 + 0x18) = 0x7c;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -8.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
LAB_0040be16:
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = -45.0;
    local_10 = 45.0;
    local_c = -45.0;
LAB_0040b97d:
    pvVar8 = (void *)(param_2 + 0x4c);
    goto LAB_0040b980;
  case 0x47:
    *(undefined4 *)(param_2 + 0x1a) = 0x7d007e;
    goto LAB_0040bef4;
  case 0x48:
    *(undefined4 *)(param_2 + 0x1a) = 0x7f0080;
LAB_0040bef4:
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -12.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_c = 1.0;
    pvVar8 = (void *)(param_2 + 100);
LAB_0040bf43:
    local_10 = 0.0;
    local_14 = 0.0;
    FUN_00401060(pvVar8,&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    goto LAB_0040bf6f;
  case 0x49:
    *(undefined4 *)(param_2 + 0x1a) = 0x810082;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -11.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_c = -12.0;
    pvVar8 = (void *)(param_2 + 0x70);
    goto LAB_0040bf43;
  case 0x4a:
    *(undefined2 *)(param_2 + 0x14) = 0x1a3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a201a4;
    *(undefined2 *)(param_2 + 0x18) = 0x1a4;
    *(undefined2 *)(param_2 + 0x1e) = 0x1a5;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 8.5;
    local_c = 1.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.6;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 4.0;
    local_10 = 1.0;
    local_c = -3.7;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 4.0;
    local_10 = -3.0;
    local_c = -3.7;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f3ae148;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.5;
    local_c = -2.9;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2a00000;
    goto LAB_0040ecea;
  case 0x4b:
    *(undefined2 *)(param_2 + 0x14) = 0x1a7;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a601a8;
    *(undefined2 *)(param_2 + 0x18) = 0x1a8;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 17.5;
    local_c = 2.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = -9.0;
    local_c = 2.6;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 6.0;
    local_10 = 9.0;
    local_c = -1.7;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 6.0;
    local_10 = -9.0;
    local_c = -1.7;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3fcccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fcccccd;
    goto LAB_0040ecea;
  case 0x4c:
    *(undefined2 *)(param_2 + 0x14) = 0xa0;
    *(undefined4 *)(param_2 + 0x1a) = 0xa200a1;
    uVar1 = 0xa3;
    goto LAB_0040b9b4;
  case 0x4d:
    *(undefined2 *)(param_2 + 0x14) = 0xa4;
    *(undefined4 *)(param_2 + 0x1a) = 0xa600a5;
    uVar1 = 0xa7;
    goto LAB_0040b9b4;
  case 0x4e:
    *(undefined2 *)(param_2 + 0x14) = 0xa8;
    *(undefined4 *)(param_2 + 0x1a) = 0xaa00a9;
    uVar1 = 0xab;
    goto LAB_0040b9b4;
  case 0x4f:
    *(undefined2 *)(param_2 + 0x14) = 0xac;
    *(undefined4 *)(param_2 + 0x1a) = 0xae00ad;
    uVar1 = 0xaf;
LAB_0040b9b4:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    break;
  case 0x50:
    *(undefined2 *)(param_2 + 0x14) = 0xb0;
    *(undefined4 *)(param_2 + 0x1a) = 0xb200b1;
    *(undefined2 *)(param_2 + 0x18) = 0xb3;
    break;
  case 0x51:
    *(undefined2 *)(param_2 + 0x14) = 0xbe;
    *(undefined4 *)(param_2 + 0x1a) = 0xc000bf;
    *(undefined2 *)(param_2 + 0x18) = 0xc1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 1.8;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -10.8;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 1.5;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * 1.5;
    fVar11 = *(float *)(param_2 + 0x10) * 1.5;
    goto LAB_0040af2f;
  case 0x52:
    *(undefined2 *)(param_2 + 0x14) = 0xc2;
    *(undefined4 *)(param_2 + 0x1a) = 0xc400c3;
    *(undefined2 *)(param_2 + 0x18) = 0xc5;
    *(undefined2 *)(param_2 + 0x20) = 0xc6;
    *(undefined4 *)(param_2 + 0x34) = 0x3f266666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x38) = 0x3f666666;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 1.5;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -7.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.2;
    local_10 = 3.2;
    local_c = 5.8;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x53:
    iVar4 = rand();
    sVar3 = 0xb4;
    sVar9 = (short)(iVar4 % 3) + 0xb4;
    goto LAB_0040ba5d;
  case 0x54:
    iVar4 = rand();
    sVar3 = 0xb7;
    sVar9 = (short)(iVar4 % 3) + 0xb7;
LAB_0040ba5d:
    *(short *)(param_2 + 0x14) = sVar9;
    *(undefined4 *)(param_2 + 0x1a) = 0xbb00ba;
    local_10 = 0.8;
    local_c = 6.0;
    pvVar8 = (void *)(param_2 + 0x70);
    *(ushort *)(param_2 + 0x18) = (*(short *)(param_2 + 0x14) != sVar3) + 0xbc;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_0040ba92:
    local_14 = 0.0;
    FUN_00401060(pvVar8,&local_14);
    break;
  case 0x55:
    *(undefined4 *)(param_2 + 0x14) = 0xc700c8;
    *(undefined4 *)(param_2 + 0x1a) = 0xca00c9;
    *(undefined2 *)(param_2 + 0x18) = 0xcb;
    local_14 = 8.0;
    local_10 = 5.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x4c) = 0xc2b40000;
    *(undefined4 *)(param_2 + 0x50) = 0x41f00000;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x56:
    *(undefined4 *)(param_2 + 0x1a) = 0x9e009f;
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x10;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x57:
    *(undefined2 *)(param_2 + 0x14) = 0x84;
    *(undefined4 *)(param_2 + 0x1a) = 0x830085;
    *(undefined2 *)(param_2 + 0x18) = 0x86;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    goto LAB_0040acc0;
  case 0x58:
    *(undefined2 *)(param_2 + 0x14) = 0x88;
    *(undefined4 *)(param_2 + 0x1a) = 0x870089;
    *(undefined2 *)(param_2 + 0x18) = 0x8a;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_0040c33c;
  case 0x59:
    *(undefined2 *)(param_2 + 0x14) = 0x8c;
    *(undefined4 *)(param_2 + 0x1a) = 0x8b008d;
    *(undefined2 *)(param_2 + 0x18) = 0x8e;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0040c33c:
    fVar11 = 1.1;
    goto LAB_0040c344;
  case 0x5a:
    *(undefined2 *)(param_2 + 0x14) = 0x90;
    *(undefined4 *)(param_2 + 0x1a) = 0x8f0091;
    *(undefined2 *)(param_2 + 0x18) = 0x92;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    fVar11 = 0.7;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    goto LAB_0040c344;
  case 0x5b:
    *(undefined2 *)(param_2 + 0x14) = 0x94;
    *(undefined4 *)(param_2 + 0x1a) = 0x930095;
    *(undefined2 *)(param_2 + 0x18) = 0x96;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    fVar11 = 0.9;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0040c344:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * fVar11;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * fVar11;
    fVar11 = *(float *)(param_2 + 0x10) * fVar11;
    goto LAB_0040aced;
  case 0x5c:
    *(undefined2 *)(param_2 + 0x14) = 0x97;
    *(undefined2 *)(param_2 + 0x22) = 0x99;
    *(undefined2 *)(param_2 + 0x1a) = 0x98;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 0.0;
    local_c = -11.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x48) = 0xc1200000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42a00000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2a;
    goto LAB_0040acc0;
  case 0x5d:
    *(undefined2 *)(param_2 + 0x14) = 0xcd;
    *(undefined4 *)(param_2 + 0x1a) = 0xcc00ce;
    *(undefined2 *)(param_2 + 0x18) = 0xcf;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = -60.0;
    local_10 = -45.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
LAB_0040acc0:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar11 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0040aced:
    *(float *)(param_2 + 0x10) = fVar11;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x5e:
    *(undefined2 *)(param_2 + 0x14) = 0x877;
    *(undefined4 *)(param_2 + 0x1a) = 0x879087a;
    *(undefined2 *)(param_2 + 0x18) = 0x878;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 0x7c) = 0x40a00000;
    *(undefined4 *)(param_2 + 0x80) = 0x40800000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x4c) = 0;
    *(undefined4 *)(param_2 + 0x50) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x54) = 0;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f19999a;
    *(undefined4 *)(param_2 + 8) = 0x4019999a;
    *(undefined4 *)(param_2 + 0xc) = 0x4019999a;
    *(undefined4 *)(param_2 + 0x10) = 0x40accccc;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x5f:
    *(undefined2 *)(param_2 + 0x14) = 0xe1;
    *(undefined4 *)(param_2 + 0x1a) = 0xe001b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x60:
    *(undefined2 *)(param_2 + 0x14) = 0xe3;
    *(undefined2 *)(param_2 + 0x16) = 0xffff;
    *(undefined4 *)(param_2 + 0x1a) = 0xe200e4;
    *(undefined2 *)(param_2 + 0x18) = 0xe5;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    goto LAB_0040b97d;
  case 0x61:
    *(undefined4 *)(param_2 + 0x14) = 0x87c087b;
    *(undefined4 *)(param_2 + 0x1a) = 0x5b701b0;
    *(undefined2 *)(param_2 + 0x18) = 0x87d;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x402;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    *(undefined4 *)(param_2 + 0x44) = 0x40000000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42700000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x62:
    *(undefined2 *)(param_2 + 0x14) = 0x159;
    *(undefined4 *)(param_2 + 0x1a) = 0x158015a;
    *(undefined2 *)(param_2 + 0x18) = 0x15a;
    *(undefined2 *)(param_2 + 0x1e) = 0x15b;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4399999;
    local_10 = 1.4399999;
    local_c = 1.6;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -3.25;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = -3.25;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = -4.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_0040ecea;
  case 99:
    *(undefined2 *)(param_2 + 0x14) = 0x15d;
    *(undefined4 *)(param_2 + 0x1a) = 0x15c015e;
    *(undefined2 *)(param_2 + 0x18) = 0x15e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 12.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -5.75;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -5.75;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    goto LAB_0040ecea;
  case 100:
    *(undefined2 *)(param_2 + 0x14) = 0x160;
    *(undefined4 *)(param_2 + 0x1a) = 0x15f0161;
    *(undefined2 *)(param_2 + 0x18) = 0x161;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 10.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -6.75;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -6.75;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    goto LAB_0040ecea;
  case 0x65:
    *(undefined2 *)(param_2 + 0x14) = 0x1aa;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a901ab;
    *(undefined2 *)(param_2 + 0x18) = 0x1ab;
    *(undefined2 *)(param_2 + 0x1e) = 0x1ad;
    *(undefined4 *)(param_2 + 0x24) = 0x3f028f5c;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 0.5;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 0.0;
    local_10 = -16.0;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x33;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x66:
    *(undefined2 *)(param_2 + 0x14) = 0xd8;
    *(undefined2 *)(param_2 + 0x1a) = 0xd9;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    goto LAB_0040cfec;
  case 0x67:
    *(undefined2 *)(param_2 + 0x14) = 0xda;
    uVar1 = 0xdb;
    goto LAB_0040d017;
  case 0x68:
    *(undefined2 *)(param_2 + 0x14) = 0xdc;
    *(undefined2 *)(param_2 + 0x1a) = 0xdd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    goto LAB_0040cab2;
  case 0x69:
    *(undefined2 *)(param_2 + 0x14) = 0xde;
    uVar1 = 0xdf;
LAB_0040d017:
    *(undefined2 *)(param_2 + 0x1a) = uVar1;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_0040cfec:
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040ece1;
  case 0x6a:
    *(undefined2 *)(param_2 + 0x14) = 0xd1;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000d2;
    *(undefined2 *)(param_2 + 0x18) = 0xd3;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    pvVar8 = (void *)(param_2 + 8);
    goto LAB_0040b980;
  case 0x6b:
    *(undefined2 *)(param_2 + 0x14) = 0xd5;
    *(undefined4 *)(param_2 + 0x1a) = 0xd400d6;
    *(undefined2 *)(param_2 + 0x18) = 0xd7;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 7.2000003;
    pvVar8 = (void *)(param_2 + 8);
LAB_0040b980:
    FUN_00401060(pvVar8,&local_14);
LAB_0040b989:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6c:
    *(undefined2 *)(param_2 + 0x14) = 0x18;
    *(undefined4 *)(param_2 + 0x1a) = 0x19001c;
    *(undefined2 *)(param_2 + 0x18) = 0x1b;
    uVar1 = 0x1a;
    goto LAB_0040b27c;
  case 0x6d:
    *(undefined4 *)(param_2 + 0x14) = 0x1d001e;
    *(undefined4 *)(param_2 + 0x1a) = 0x1f0022;
    *(undefined2 *)(param_2 + 0x18) = 0x21;
    *(undefined2 *)(param_2 + 0x20) = 0x20;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 8) = 0x40b33333;
    *(undefined4 *)(param_2 + 0xc) = 0x40b33333;
    *(undefined4 *)(param_2 + 0x10) = 0x41499999;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x420;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6e:
    *(undefined2 *)(param_2 + 0x14) = 0x23;
    *(undefined4 *)(param_2 + 0x1a) = 0x240027;
    *(undefined2 *)(param_2 + 0x18) = 0x26;
    *(undefined2 *)(param_2 + 0x20) = 0x25;
    *(undefined4 *)(param_2 + 0x40) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f59999a;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
    *(undefined4 *)(param_2 + 0x78) = 0x3f800000;
    *(undefined4 *)(param_2 + 8) = 0x404ccccd;
    *(undefined4 *)(param_2 + 0xc) = 0x404ccccd;
    *(undefined4 *)(param_2 + 0x10) = 0x40e66666;
    break;
  case 0x6f:
    *(undefined2 *)(param_2 + 0x14) = 0x28;
    *(undefined4 *)(param_2 + 0x1a) = 0x29002c;
    *(undefined2 *)(param_2 + 0x18) = 0x2b;
    *(undefined2 *)(param_2 + 0x20) = 0x2a;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    goto LAB_0040b39e;
  case 0x70:
    *(undefined2 *)(param_2 + 0x14) = 0x2d;
    *(undefined4 *)(param_2 + 0x1a) = 0x2e0031;
    *(undefined2 *)(param_2 + 0x18) = 0x30;
    uVar1 = 0x2f;
    goto LAB_0040b3f8;
  case 0x71:
    *(undefined2 *)(param_2 + 0x14) = 0x32;
    *(undefined4 *)(param_2 + 0x1a) = 0x330036;
    *(undefined2 *)(param_2 + 0x18) = 0x35;
    uVar1 = 0x34;
LAB_0040b3f8:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
LAB_0040b39e:
    *(undefined4 *)(param_2 + 0x30) = 0x3f4147ae;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40800000;
    goto LAB_0040b2c5;
  case 0x72:
    *(undefined2 *)(param_2 + 0x14) = 0x37;
    *(undefined4 *)(param_2 + 0x1a) = 0x38003b;
    *(undefined2 *)(param_2 + 0x18) = 0x3a;
    uVar1 = 0x39;
LAB_0040b27c:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40400000;
LAB_0040b2c5:
    *(undefined4 *)(param_2 + 0x78) = 0x40400000;
    *(undefined4 *)(param_2 + 8) = 0x40b33333;
    *(undefined4 *)(param_2 + 0xc) = 0x40b33333;
    *(undefined4 *)(param_2 + 0x10) = 0x41499999;
    break;
  case 0x73:
    *(undefined2 *)(param_2 + 0x14) = 0x43;
    *(undefined4 *)(param_2 + 0x1a) = 0x440047;
    *(undefined2 *)(param_2 + 0x18) = 0x46;
    *(undefined2 *)(param_2 + 0x20) = 0x45;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 10.799999;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x74:
    iVar4 = rand();
    local_14 = ((float)iVar4 * 3.0) / 32767.0 + 7.0;
    local_c = local_14 * 1.12;
    local_10 = local_14;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x14) = 0x48;
    *(undefined4 *)(param_2 + 0x1a) = 0x49004a;
    *(undefined2 *)(param_2 + 0x18) = 0x4a;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 2.9;
    goto LAB_0040eccd;
  case 0x75:
    *(undefined2 *)(param_2 + 0x14) = 0x117;
    *(undefined2 *)(param_2 + 0x1c) = 0x116;
    *(undefined2 *)(param_2 + 0x18) = 0x118;
    *(undefined2 *)(param_2 + 0x1a) = 0xffff;
    *(undefined2 *)(param_2 + 0x20) = 0x119;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 6.0;
    local_10 = 5.0;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 11.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x4c),&local_14);
    local_14 = 6.4;
    local_10 = 6.4;
    local_c = 14.4;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    break;
  case 0x76:
    *(undefined2 *)(param_2 + 0x14) = 0x86a;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x1c) = (short)uVar7 + 0x86b;
    *(undefined4 *)(param_2 + 0x18) = 0x86e086d;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -9.5;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 4.0;
    local_10 = 4.0;
    local_c = 10.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x77:
    local_14 = 9.0;
    local_10 = 9.0;
    local_c = 10.08;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    iVar4 = rand();
    *(short *)(param_2 + 0x14) = (short)(iVar4 % 5) + 0x861;
    iVar4 = rand();
    *(short *)(param_2 + 0x1c) = (short)(iVar4 % 9) + 0x855;
    iVar4 = rand();
    sVar3 = (short)(iVar4 % 3) + 0x85e;
    *(short *)(param_2 + 0x18) = sVar3;
    *(short *)(param_2 + 0x1a) = sVar3;
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    *(short *)(param_2 + 0x1e) = (short)uVar7 + 0x866;
    *(undefined4 *)(param_2 + 0x3c) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    iVar4 = rand();
    local_14 = 0.0;
    local_10 = 8.0;
    *(float *)(param_2 + 0x24) = ((float)iVar4 * 0.1) / 32767.0 + 0.4;
    iVar4 = rand();
    local_c = ((float)iVar4 * 0.5) / 32767.0 - 1.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00401060((void *)(param_2 + 0x94),&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00401060((void *)(param_2 + 0x7c),&local_14);
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
LAB_0040eccd:
    pvVar8 = (void *)(param_2 + 0x88);
    local_c = -4.1;
    local_10 = -3.0;
LAB_0040ece1:
    FUN_00401060(pvVar8,&local_14);
LAB_0040ecea:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x31;
switchD_0040a9e2_default:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x78:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x827;
    goto LAB_0040e601;
  case 0x79:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x828;
    goto LAB_0040e601;
  case 0x7a:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x82a;
    goto LAB_0040e601;
  case 0x7b:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.5;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x86f;
    goto LAB_0040e601;
  case 0x7c:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    sVar3 = 0x82e - (ushort)(uVar7 != 0);
    local_c = 2.0;
    goto LAB_0040e608;
  case 0x7d:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.7;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x829;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x7e:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x82f;
    local_c = 2.0;
    goto LAB_0040e608;
  case 0x7f:
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x830;
    goto LAB_0040e601;
  case 0x80:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    sVar3 = 0x906;
    goto LAB_0040e601;
  case 0x81:
    *(undefined2 *)(param_2 + 0x1c) = 0x832;
    local_c = -4.0;
    goto LAB_0040e60c;
  case 0x82:
    *(undefined2 *)(param_2 + 0x1c) = 0x833;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = 12.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_c = -4.0;
    goto LAB_0040e60c;
  case 0x83:
    uVar1 = 0x834;
    goto LAB_0040e918;
  case 0x84:
    uVar1 = 0x835;
    goto LAB_0040e918;
  case 0x85:
    uVar1 = 0x836;
    goto LAB_0040e918;
  case 0x86:
    uVar1 = 0x837;
    goto LAB_0040e918;
  case 0x87:
    uVar1 = 0x838;
    goto LAB_0040e918;
  case 0x88:
    uVar1 = 0x839;
    goto LAB_0040e918;
  case 0x89:
    uVar1 = 0x83a;
    goto LAB_0040e918;
  case 0x8a:
    uVar1 = 0x83b;
    goto LAB_0040e918;
  case 0x8b:
    uVar1 = 0x83c;
LAB_0040e918:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_c = -4.0;
LAB_0040e60c:
    local_14 = 0.0;
    local_10 = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x8c:
    *(undefined2 *)(param_2 + 0x1c) = 0x83d;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 4.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    break;
  case 0x8d:
    uVar1 = 0x83e;
    local_c = 2.0;
    goto LAB_0040e9e4;
  case 0x8e:
    uVar1 = 0x83f;
    local_c = 2.5;
LAB_0040e9e4:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_10 = 1.5;
    local_14 = 1.5;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_10 = 0.0;
    local_c = 0.0;
    pvVar8 = (void *)(param_2 + 100);
    goto LAB_0040ba92;
  case 0x8f:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 1.25;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    sVar3 = (short)uVar7 + 0x841;
LAB_0040e601:
    local_c = 0.0;
LAB_0040e608:
    *(short *)(param_2 + 0x1c) = sVar3;
    goto LAB_0040e60c;
  case 0x90:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x9f2;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x91:
    uVar1 = 0x96a;
    goto LAB_0040cbe1;
  case 0x92:
    uVar1 = 0x96b;
LAB_0040cbe1:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    iVar4 = rand();
    local_14 = (((float)iVar4 * 0.5) / 32767.0 + 1.2) * 0.8;
    local_10 = local_14;
    local_c = local_14;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_0040cc55;
  case 0x93:
    *(undefined2 *)(param_2 + 0x1c) = 0x972;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 2.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    goto LAB_0040cc55;
  case 0x94:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x53f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x542;
    *(undefined2 *)(param_2 + 0x1c) = 0x545;
    sVar3 = 0x546;
    goto LAB_0040aaa7;
  case 0x95:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x547;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x54a;
    *(undefined2 *)(param_2 + 0x1c) = 0x54d;
    sVar3 = 0x546;
LAB_0040aaa7:
    *(short *)(param_2 + 0x18) = sVar3;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x96:
    uVar1 = 0x96c;
    goto LAB_0040cc7e;
  case 0x97:
    *(undefined2 *)(param_2 + 0x14) = 0xf3;
    *(undefined2 *)(param_2 + 0x22) = 0xf4;
    *(undefined2 *)(param_2 + 0x1a) = 0xf5;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.0;
    FUN_00401060((void *)(param_2 + 0x88),&local_14);
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x44) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.875;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    local_14 = 6.5;
    local_10 = 3.0;
    local_c = -1.0;
    FUN_00401060((void *)(param_2 + 0xa0),&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 0.0;
    pvVar8 = (void *)(param_2 + 0x70);
    goto LAB_0040bf72;
  case 0x98:
    *(undefined4 *)(param_2 + 0x14) = 0x96e096d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 0x70),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
    uVar2 = 0x531;
    goto LAB_0040cc5a;
  case 0x99:
    uVar1 = 0x96f;
    goto LAB_0040cc7e;
  case 0x9a:
    uVar1 = 0x970;
    goto LAB_0040cc7e;
  case 0x9b:
    uVar1 = 0x971;
LAB_0040cc7e:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00401060((void *)(param_2 + 100),&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00401060((void *)(param_2 + 8),&local_14);
LAB_0040cc55:
    uVar2 = 0x131;
LAB_0040cc5a:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | uVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  default:
    goto switchD_0040a9e2_default;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004128da @ 004128da  kind=gamemisc  attributed-by=logic:caller-vote  size=90 */

undefined4 __fastcall FUN_004128da(undefined4 param_1,int *param_2)

{
  basic_ostream<char,std::char_traits<char>_> *this;
  int *piVar1;
  bool bVar2;
  int unaff_EBP;
  int unaff_EDI;
  
  *(undefined4 *)(unaff_EBP + -4) = 1;
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*param_2 + 4) + (int)param_2),
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
  return *(undefined4 *)(unaff_EBP + 8);
}


/* FUN_00412bd0 @ 00412bd0  kind=gamemisc  attributed-by=logic:caller-vote  size=107 */

void __thiscall FUN_00412bd0(void *this,uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar1 = *(int *)((int)this + 4);
  if (param_1 <= (uint)(*(int *)((int)this + 8) - iVar1)) {
    return;
  }
  iVar2 = *(int *)this;
  if ((iVar2 - iVar1) - 1U < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = *(int *)((int)this + 8) - iVar2;
  uVar4 = (iVar1 - iVar2) + param_1;
  if (-(uVar3 >> 1) - 1 < uVar3) {
    uVar3 = 0;
    if (uVar4 != 0) {
      uVar3 = uVar4;
    }
    FUN_00412b60(this,uVar3);
    return;
  }
  uVar3 = uVar3 + (uVar3 >> 1);
  if (uVar3 < uVar4) {
    uVar3 = uVar4;
  }
  FUN_00412b60(this,uVar3);
  return;
}


/* FUN_00413180 @ 00413180  kind=gamemisc  attributed-by=logic:caller-vote  size=120 */

void __thiscall FUN_00413180(void *this,uint param_1)

{
  void *_Src;
  void *pvVar1;
  void *_Dst;
  
  _Src = *(void **)((int)this + 4);
  pvVar1 = *(void **)this;
  if (param_1 < (uint)((int)_Src - (int)pvVar1)) {
    _Dst = (void *)(param_1 + (int)pvVar1);
    if (_Dst == pvVar1) {
      *(void **)((int)this + 4) = pvVar1;
      return;
    }
    if (_Dst != _Src) {
      memmove(_Dst,_Src,0);
      *(void **)((int)this + 4) = _Dst;
      return;
    }
  }
  else if ((uint)((int)_Src - (int)pvVar1) < param_1) {
    FUN_00412bd0(this,(int)pvVar1 + (param_1 - (int)_Src));
    memset(*(void **)((int)this + 4),0,(*(int *)this - (int)*(void **)((int)this + 4)) + param_1);
    *(uint *)((int)this + 4) = *(int *)this + param_1;
  }
  return;
}


/* FUN_00414470 @ 00414470  kind=gamemisc  attributed-by=logic:caller-vote  size=223 */

uint __thiscall FUN_00414470(void *this,float param_1,char param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float fVar7;
  
  uVar1 = *(ushort *)((int)this + 0x10);
  uVar2 = (uint)uVar1;
  if (1 < (short)uVar1) {
    fVar6 = FUN_00407d60((float)(int)(short)uVar1);
    if ((float)fVar6 - param_1 <= 0.0) {
      *(undefined2 *)((int)this + 0x10) = 1;
      return 1;
    }
    fVar6 = FUN_00411090((float)fVar6 - param_1);
    iVar4 = (int)fVar6;
    iVar5 = (int)*(short *)((int)this + 0x10);
    if (iVar4 < 1) {
      iVar4 = 1;
    }
    if (param_2 != '\0') {
      fVar6 = FUN_00407d60((float)iVar5);
      fVar7 = (float)fVar6 + param_1;
      if (0.9999 < fVar7) {
        fVar7 = 0.9999;
      }
      fVar6 = FUN_00411090(fVar7);
      iVar5 = (int)fVar6;
    }
    iVar3 = rand();
    iVar5 = (iVar5 - iVar4) + 1;
    uVar2 = iVar3 / iVar5;
    *(short *)((int)this + 0x10) = (short)(iVar3 % iVar5) + (short)iVar4;
  }
  return uVar2;
}


/* FUN_0041b930 @ 0041b930  kind=gamemisc  attributed-by=logic:caller-vote  size=60 */

undefined4 * __cdecl FUN_0041b930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

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


/* FUN_0041bb80 @ 0041bb80  kind=gamemisc  attributed-by=logic:caller-vote  size=159 */

void __thiscall FUN_0041bb80(void *this,uint param_1)

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
    FUN_0041ba90(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041ba90(this,uVar2);
  return;
}


/* FUN_0041c9e0 @ 0041c9e0  kind=gamemisc  attributed-by=logic:caller-vote  size=213 */

int __thiscall FUN_0041c9e0(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((int)param_1 < 0) || ((int)param_2 < 0)) || (0x1fffff < (int)param_1)) ||
     (0x1fffff < (int)param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_00406290(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5,
                           (int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5);
  }
  else {
    iVar1 = *(int *)(param_3 + 0x60) * 0x100;
    iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    if ((int)param_1 < iVar1) {
      return 0;
    }
    iVar2 = *(int *)(param_3 + 100) * 0x100;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    if ((int)param_2 < iVar2) {
      return 0;
    }
    if (iVar1 + 0x20 <= (int)param_1) {
      return 0;
    }
    if (iVar2 + 0x20 <= (int)param_2) {
      return 0;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = param_2 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  uVar4 = param_1 & 0x8000001f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
  }
  return *(int *)(param_3 + 0xac) + (uVar3 * 0x20 + uVar4) * 8;
}


/* FUN_0041d160 @ 0041d160  kind=gamemisc  attributed-by=logic:caller-vote  size=38 */

int __thiscall FUN_0041d160(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(char *)(iVar1 + (int)this) = (char)(int)*(float *)(param_1 + iVar1 * 4);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return (int)this;
}


/* FUN_0041d190 @ 0041d190  kind=gamemisc  attributed-by=logic:caller-vote  size=174 */

void * __cdecl FUN_0041d190(int param_1,int param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)(param_1 + 0x120);
    puVar2 = (undefined4 *)((int)param_3 + 0x128);
    iVar1 = param_1 - (int)param_3;
    do {
      FUN_00402a70(param_3,(undefined1 *)(iVar1 + -0x128 + (int)puVar2));
      puVar2[-4] = puVar3[-2];
      puVar2[-3] = puVar3[-1];
      puVar2[-2] = *puVar3;
      puVar2[-1] = puVar3[1];
      *puVar2 = puVar3[2];
      puVar2[1] = puVar3[3];
      puVar2[2] = puVar3[4];
      puVar2[3] = puVar3[5];
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar3 + 6);
      puVar2[5] = puVar3[7];
      puVar2[6] = puVar3[8];
      puVar2[7] = puVar3[9];
      puVar2 = puVar2 + 0x52;
      param_3 = (void *)((int)param_3 + 0x148);
      puVar3 = puVar3 + 0x52;
    } while (iVar1 + -0x128 + (int)puVar2 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0041d270 @ 0041d270  kind=gamemisc  attributed-by=logic:caller-vote  size=197 */

undefined4 __cdecl FUN_0041d270(void *param_1,void *param_2,char *param_3)

{
  float *pfVar1;
  float fVar2;
  uint3 uVar3;
  uint in_EAX;
  undefined2 uVar4;
  uint *puVar5;
  int iVar6;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = FUN_004078f0(param_1,param_3);
    if ((char)in_EAX == '\0') break;
    iVar6 = 0;
    puVar5 = (uint *)(param_3 + 0x118);
    do {
      in_EAX = *(uint *)(((int)param_1 - (int)param_3) + (int)puVar5);
      if ((in_EAX != *puVar5) ||
         (in_EAX = *(uint *)(((int)param_1 - (int)param_3) + 4 + (int)puVar5), in_EAX != puVar5[1]))
      goto LAB_0041d32e;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 3);
    fVar2 = *(float *)((int)param_1 + 0x130);
    pfVar1 = (float *)(param_3 + 0x130);
    uVar4 = (undefined2)(in_EAX >> 0x10);
    in_EAX = (uint)CONCAT21(uVar4,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                                  fVar2 < *pfVar1) << 8;
    if (fVar2 != *pfVar1) break;
    fVar2 = *(float *)((int)param_1 + 0x134);
    pfVar1 = (float *)(param_3 + 0x134);
    uVar3 = CONCAT21(uVar4,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                           fVar2 < *pfVar1);
    in_EAX = (uint)uVar3 << 8;
    if ((((fVar2 != *pfVar1) ||
         (in_EAX = CONCAT31(uVar3,*(char *)((int)param_1 + 0x138)),
         *(char *)((int)param_1 + 0x138) != param_3[0x138])) ||
        (in_EAX = *(uint *)((int)param_1 + 0x13c), in_EAX != *(uint *)(param_3 + 0x13c))) ||
       (in_EAX = *(uint *)((int)param_1 + 0x140), in_EAX != *(uint *)(param_3 + 0x140))) break;
    param_1 = (void *)((int)param_1 + 0x148);
    param_3 = param_3 + 0x148;
  }
LAB_0041d32e:
  return in_EAX & 0xffffff00;
}


/* FUN_0041d500 @ 0041d500  kind=gamemisc  attributed-by=logic:caller-vote  size=71 */

undefined4 * __cdecl FUN_0041d500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00413710(param_3 + 1,(undefined1 *)(param_1 + 1));
    }
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d5d0 @ 0041d5d0  kind=gamemisc  attributed-by=logic:caller-vote  size=48 */

void __cdecl FUN_0041d5d0(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}


/* FUN_0041d600 @ 0041d600  kind=gamemisc  attributed-by=logic:caller-vote  size=114 */

undefined4 * __cdecl FUN_0041d600(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined1 *)((int)param_3 + 0xe);
    puVar2 = param_1 + 0xe;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(puVar2 + -0xe);
        *(undefined4 *)(puVar3 + -10) = *(undefined4 *)(puVar2 + -10);
        *(undefined4 *)(puVar3 + -6) = *(undefined4 *)(puVar2 + -6);
        puVar3[-2] = puVar2[-2];
        puVar3[-1] = puVar2[-1];
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
      }
      param_3 = param_3 + 5;
      puVar1 = puVar2 + 6;
      puVar3 = puVar3 + 0x14;
      puVar2 = puVar2 + 0x14;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0041d680 @ 0041d680  kind=gamemisc  attributed-by=logic:caller-vote  size=61 */

void * __cdecl FUN_0041d680(undefined1 *param_1,undefined1 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_0041d820(param_3,param_1);
    }
    param_1 = param_1 + 0x148;
    param_3 = (void *)((int)param_3 + 0x148);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d6c0 @ 0041d6c0  kind=gamemisc  attributed-by=logic:caller-vote  size=96 */

void __cdecl FUN_0041d6c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
      }
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_0041d820 @ 0041d820  kind=gamemisc  attributed-by=logic:caller-vote  size=168 */

void * __thiscall FUN_0041d820(void *this,undefined1 *param_1)

{
  FUN_00413710(this,param_1);
  *(undefined4 *)((int)this + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)((int)this + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)((int)this + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)((int)this + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)((int)this + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)((int)this + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)((int)this + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)((int)this + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined1 *)((int)this + 0x138) = param_1[0x138];
  *(undefined4 *)((int)this + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)((int)this + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)((int)this + 0x144) = *(undefined4 *)(param_1 + 0x144);
  return this;
}


/* FUN_0041dae0 @ 0041dae0  kind=gamemisc  attributed-by=logic:caller-vote  size=355 */

int * __thiscall FUN_0041dae0(void *this,int *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      pvVar2 = *(void **)this;
    }
    else {
      uVar3 = (param_1[1] - *param_1) / 0x148;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x148;
      if (uVar1 < uVar3) {
        if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x148) < uVar3) {
          if (*(void **)this != (void *)0x0) {
            operator_delete(*(void **)this);
          }
          uVar3 = FUN_0041e390(this,(param_1[1] - *param_1) / 0x148);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          pvVar2 = FUN_0041d680((undefined1 *)*param_1,(undefined1 *)param_1[1],*(void **)this);
        }
        else {
          puVar4 = (undefined1 *)(uVar1 * 0x148 + *param_1);
          FUN_0041d190(*param_1,(int)puVar4,*(void **)this);
          pvVar2 = FUN_0041d680(puVar4,(undefined1 *)param_1[1],*(void **)((int)this + 4));
        }
      }
      else {
        FUN_0041d190(*param_1,param_1[1],*(void **)this);
        pvVar2 = (void *)(((param_1[1] - *param_1) / 0x148) * 0x148 + *(int *)this);
      }
    }
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041e300 @ 0041e300  kind=gamemisc  attributed-by=logic:caller-vote  size=22 */

void __thiscall FUN_0041e300(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x148;
  return;
}


/* FUN_0041e320 @ 0041e320  kind=gamemisc  attributed-by=logic:caller-vote  size=104 */

uint __thiscall FUN_0041e320(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xe6c2b4 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x11c);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x11c);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0041e390 @ 0041e390  kind=gamemisc  attributed-by=logic:caller-vote  size=104 */

uint __thiscall FUN_0041e390(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xc7ce0c < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x148);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x148);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0041e840 @ 0041e840  kind=gamemisc  attributed-by=logic:caller-vote  size=162 */

void __thiscall FUN_0041e840(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (0xcccccccU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  uVar3 = iVar1 + param_1;
  if (0xccccccc - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041e450(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e450(this,uVar2);
  return;
}


/* FUN_0041e960 @ 0041e960  kind=gamemisc  attributed-by=logic:caller-vote  size=162 */

void __thiscall FUN_0041e960(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x148)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x148;
  if (0xc7ce0cU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x148;
  uVar3 = iVar1 + param_1;
  if (0xc7ce0c - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041e640(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e640(this,uVar2);
  return;
}


/* FUN_0041ea10 @ 0041ea10  kind=gamemisc  attributed-by=logic:caller-vote  size=159 */

void __thiscall FUN_0041ea10(void *this,uint param_1)

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
    FUN_0041e740(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e740(this,uVar2);
  return;
}


/* FUN_0041eb20 @ 0041eb20  kind=gamemisc  attributed-by=logic:caller-vote  size=137 */

undefined4 * __thiscall
FUN_0041eb20(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 == *(undefined4 **)this) && (param_3 == *(undefined4 **)((int)this + 4))) {
    FUN_00406310(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
    *param_1 = param_2;
    return param_1;
  }
  if (param_2 != param_3) {
    puVar1 = FUN_0041d390(param_3,*(undefined4 **)((int)this + 4),param_2);
    FUN_00406310(puVar1,*(undefined4 **)((int)this + 4));
    *(undefined4 **)((int)this + 4) = puVar1;
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}


/* FUN_0041ee20 @ 0041ee20  kind=gamemisc  attributed-by=logic:caller-vote  size=1708 */

void __thiscall FUN_0041ee20(void *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  void *local_190;
  void *local_18c;
  undefined4 local_188;
  undefined4 *local_184;
  int *local_180;
  int *local_17c;
  void *local_178;
  int local_174;
  undefined2 local_170 [2];
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined2 local_160;
  undefined1 local_15c [256];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c026;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar8 = *(int **)this;
  local_178 = param_1;
  iVar7 = piVar8[1] - *piVar8;
  local_174 = param_2;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(*piVar8 + piVar8[3]);
    piVar8[3] = piVar8[3] + 4;
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_180 = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_180 = *(int **)(*piVar8 + piVar8[3]);
    piVar8[3] = piVar8[3] + 4;
  }
  local_190 = (void *)0x0;
  local_18c = (void *)0x0;
  local_188 = 0;
  local_8 = 0;
  if (0 < (int)local_180) {
    do {
      local_160 = 1;
      local_170[0] = 0;
      local_16c = 0;
      local_168 = 0;
      local_164 = 0;
      local_162 = 0;
      local_5c = 0;
      memset(local_15c,0,0x100);
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      local_3c = 0x3d924925;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = -1;
      if (iVar6 + 0x118 <= iVar7) {
        memcpy(local_170,(void *)(*piVar8 + iVar6),0x118);
        iVar7 = iVar6 + 0x118;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar7 = *piVar8;
      if (piVar8[1] - iVar7 < piVar8[3] + 0x18) {
        piVar8[3] = piVar8[1] - iVar7;
      }
      else {
        iVar6 = piVar8[3];
        local_58 = *(undefined8 *)(iVar7 + iVar6);
        local_50 = *(undefined8 *)(iVar7 + 8 + iVar6);
        local_48 = *(undefined8 *)(iVar7 + 0x10 + iVar6);
        piVar8[3] = piVar8[3] + 0x18;
      }
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_40 = *(undefined4 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_3c = *(undefined4 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 1 <= iVar7) {
        local_38 = *(undefined1 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 1;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_34 = *(undefined4 *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_30 = *(undefined4 *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_2c = *(int *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      if ((*(int *)((int)local_178 + 0x800160) + -3 <= local_2c) || (local_2c < 0)) {
        FUN_0041f5b0(&local_190,(undefined1 *)local_170);
      }
      local_180 = (int *)((int)local_180 + -1);
    } while (local_180 != (int *)0x0);
    local_180 = (int *)0x0;
  }
  iVar7 = local_174;
  if ((((int)local_18c - (int)local_190) / 0x148 !=
       (*(int *)(local_174 + 0x34) - (int)*(char **)(local_174 + 0x30)) / 0x148) ||
     (uVar4 = FUN_0041d270(local_190,local_18c,*(char **)(local_174 + 0x30)), (char)uVar4 == '\0'))
  {
    *(undefined1 *)(iVar7 + 0x75) = 1;
    FUN_0041dae0((void *)(iVar7 + 0x30),(int *)&local_190);
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_17c = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_17c = *(int **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  piVar8 = local_17c;
  if (0 < (int)local_17c) {
    do {
      local_180 = piVar8;
      iVar6 = local_174;
      piVar8 = *(int **)this;
      iVar7 = *piVar8;
      local_20 = local_20 & 0xffffffff;
      local_18 = 0;
      if (piVar8[1] - iVar7 < piVar8[3] + 0x14) {
        piVar8[3] = piVar8[1] - iVar7;
      }
      else {
        iVar1 = piVar8[3];
        local_28 = *(undefined8 *)(iVar1 + iVar7);
        local_20 = *(ulonglong *)(iVar1 + 8 + iVar7);
        local_18 = *(int *)(iVar1 + 0x10 + iVar7);
        piVar8[3] = piVar8[3] + 0x14;
      }
      if ((*(int *)((int)local_178 + 0x800160) + -3 <= local_18) || (local_18 < 0)) {
        FUN_0041ff00(local_178,(float)local_28,local_28._4_4_,(int)local_20,
                     (undefined1 *)((int)&local_20 + 4),local_174);
        FUN_0041f4d0((void *)(iVar6 + 0x68),(undefined4 *)&local_28);
      }
      piVar8 = (int *)((int)local_180 + -1);
    } while ((int *)((int)local_180 + -1) != (int *)0x0);
    local_180 = (int *)0x0;
    if (0 < (int)local_17c) {
      local_180 = (int *)0x0;
      puVar5 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar8 = (int *)**(int **)(local_174 + 4);
      iVar7 = local_174;
      local_184 = puVar5;
      local_17c = piVar8;
      if (piVar8 != *(int **)(local_174 + 4)) {
        do {
          if (((*(byte *)(piVar8 + 0x10) & 2) != 0) &&
             (local_17c = piVar8,
             iVar6 = FUN_00406050(local_178,piVar8[4],piVar8[5],piVar8[6],piVar8[7],
                                  piVar8[8] - 0x10000,piVar8[9] - (uint)((uint)piVar8[8] < 0x10000),
                                  local_174), iVar7 = local_174, (*(byte *)(iVar6 + 3) & 0x1f) == 0)
             ) {
            iVar7 = FUN_0052dfb0(puVar5,(undefined4 *)puVar5[1],&local_17c);
            if (local_180 == (int *)0x15555554) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            puVar5[1] = iVar7;
            local_180 = (int *)((int)local_180 + 1);
            **(int **)(iVar7 + 4) = iVar7;
            iVar7 = local_174;
          }
          piVar8 = (int *)*piVar8;
          local_17c = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar7 + 4));
      }
      for (puVar2 = (undefined4 *)*puVar5; puVar2 != puVar5; puVar2 = (undefined4 *)*puVar2) {
        piVar8 = (int *)puVar2[2];
        if (piVar8 != *(int **)(iVar7 + 4)) {
          *(int *)piVar8[1] = *piVar8;
          *(int *)(*piVar8 + 4) = piVar8[1];
          operator_delete(piVar8);
          *(int *)(local_174 + 8) = *(int *)(local_174 + 8) + -1;
          iVar7 = local_174;
        }
      }
      puVar2 = (undefined4 *)*puVar5;
      *puVar5 = puVar5;
      puVar5[1] = puVar5;
      while (puVar2 != puVar5) {
        puVar3 = (undefined4 *)*puVar2;
        operator_delete(puVar2);
        puVar2 = puVar3;
      }
      operator_delete(puVar5);
    }
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_17c = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_17c = *(int **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  if ((local_17c == (int *)(*(int *)(local_174 + 0x1c) - *(int *)(local_174 + 0x18) >> 2)) &&
     (iVar7 = 0, 0 < (int)local_17c)) {
    do {
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 4) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar7 * 4) + 0x38) =
             *(undefined4 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 4;
      }
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 4) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar7 * 4) + 0x3c) =
             *(undefined4 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_17c);
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_178 = (void *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_178 = *(void **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  if ((local_178 == (void *)((*(int *)(local_174 + 0x10) - *(int *)(local_174 + 0xc)) / 0x188)) &&
     (0 < (int)local_178)) {
    iVar7 = 0;
    do {
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 1) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined1 *)(*(int *)(local_174 + 0xc) + 0x30 + iVar7) =
             *(undefined1 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 1;
      }
      iVar7 = iVar7 + 0x188;
      local_178 = (void *)((int)local_178 + -1);
    } while (local_178 != (void *)0x0);
  }
  if (local_190 != (void *)0x0) {
    operator_delete(local_190);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0041f4d0 @ 0041f4d0  kind=gamemisc  attributed-by=logic:caller-vote  size=216 */

void __thiscall FUN_0041f4d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e840(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0x14) * 0x14);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      *(undefined1 *)((int)puVar2 + 0xd) = *(undefined1 *)((int)puVar1 + 0xd);
      *(undefined1 *)((int)puVar2 + 0xe) = *(undefined1 *)((int)puVar1 + 0xe);
      *(undefined1 *)((int)puVar2 + 0xf) = *(undefined1 *)((int)puVar1 + 0xf);
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e840(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
      *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
      puVar1[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return;
}


/* FUN_0041f5b0 @ 0041f5b0  kind=gamemisc  attributed-by=logic:caller-vote  size=130 */

void __thiscall FUN_0041f5b0(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined1 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_0041e960(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_0041d820(*(void **)((int)this + 4),
                   (undefined1 *)((((int)param_1 - (int)puVar2) / 0x148) * 0x148 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x148;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_0041e960(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_0041d820(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x148;
  return;
}


/* FUN_0041f770 @ 0041f770  kind=gamemisc  attributed-by=logic:caller-vote  size=240 */

undefined4 * __thiscall FUN_0041f770(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = (int)*(undefined4 **)((int)this + 4) - *(int *)this;
  puVar3 = (undefined4 *)(iVar4 * 0x2aaaaaab);
  uVar1 = iVar4 / 0xc;
  if (param_1 < uVar1) {
    puVar3 = FUN_0041eb20(this,&param_1,(undefined4 *)(*(int *)this + param_1 * 0xc),
                          *(undefined4 **)((int)this + 4));
  }
  else if (uVar1 < param_1) {
    FUN_0041ea10(this,param_1 - uVar1);
    local_8 = 0;
    FUN_0041d5d0(*(undefined4 **)((int)this + 4),
                 uVar2 - ((int)*(undefined4 **)((int)this + 4) - *(int *)this) / 0xc);
    puVar3 = (undefined4 *)
             (*(int *)((int)this + 4) +
             (uVar2 - (*(int *)((int)this + 4) - *(int *)this) / 0xc) * 0xc);
    *(undefined4 **)((int)this + 4) = puVar3;
    ExceptionList = local_10;
    return puVar3;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0041faa0 @ 0041faa0  kind=gamemisc  attributed-by=logic:caller-vote  size=953 */

void __thiscall FUN_0041faa0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  size_t _Size;
  void *pvVar8;
  int local_c;
  
  iVar4 = param_1;
  piVar2 = *(int **)this;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)this + 4);
  piVar2[3] = piVar2[3] + 4;
  if (*(char *)(param_1 + 0x75) == '\0') {
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
    *(undefined4 *)(piVar2[3] + *piVar2) = 0;
    piVar2[3] = piVar2[3] + 4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x30);
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
    *(int *)(*piVar2 + piVar2[3]) = (iVar6 - iVar3) / 0x148;
    piVar2[3] = piVar2[3] + 4;
    pvVar8 = *(void **)(param_1 + 0x30);
    if (pvVar8 != *(void **)(param_1 + 0x34)) {
      do {
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 0x118);
        memcpy((void *)(piVar2[3] + *piVar2),pvVar8,0x118);
        piVar2[3] = piVar2[3] + 0x118;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 0x18);
        puVar5 = (undefined8 *)(piVar2[3] + *piVar2);
        *puVar5 = *(undefined8 *)((int)pvVar8 + 0x118);
        puVar5[1] = *(undefined8 *)((int)pvVar8 + 0x120);
        puVar5[2] = *(undefined8 *)((int)pvVar8 + 0x128);
        piVar2[3] = piVar2[3] + 0x18;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x130);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)pvVar8 + 0x134);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 1);
        *(undefined1 *)(*piVar2 + piVar2[3]) = *(undefined1 *)((int)pvVar8 + 0x138);
        piVar2[3] = piVar2[3] + 1;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x13c);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x140);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        puVar1 = (undefined4 *)((int)pvVar8 + 0x144);
        pvVar8 = (void *)((int)pvVar8 + 0x148);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *puVar1;
        piVar2[3] = piVar2[3] + 4;
      } while (pvVar8 != *(void **)(param_1 + 0x34));
    }
  }
  piVar2 = *(int **)this;
  iVar6 = (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68)) / 0x14;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  pvVar8 = *(void **)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x6c) - (int)pvVar8;
  iVar3 = iVar7 >> 0x1f;
  if (iVar7 / 0x14 + iVar3 != iVar3) {
    _Size = iVar6 * 0x14;
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + _Size);
    memcpy((void *)(*piVar2 + piVar2[3]),pvVar8,_Size);
    piVar2[3] = piVar2[3] + _Size;
  }
  piVar2 = *(int **)this;
  iVar6 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(*piVar2 + piVar2[3]) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  param_1 = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = *(int **)this;
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x38);
      piVar2[3] = piVar2[3] + 4;
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = *(int **)this;
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x3c);
      piVar2[3] = piVar2[3] + 4;
      param_1 = param_1 + 1;
    } while (param_1 < iVar6);
  }
  piVar2 = *(int **)this;
  param_1 = (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) / 0x188;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = param_1;
  piVar2[3] = piVar2[3] + 4;
  if (0 < param_1) {
    local_c = 0;
    do {
      piVar2 = *(int **)this;
      iVar6 = *(int *)(iVar4 + 0xc);
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 1);
      *(undefined1 *)(piVar2[3] + *piVar2) = *(undefined1 *)(iVar6 + local_c + 0x30);
      piVar2[3] = piVar2[3] + 1;
      local_c = local_c + 0x188;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* FUN_00420c80 @ 00420c80  kind=gamemisc  attributed-by=logic:caller-vote  size=157 */

void __thiscall FUN_00420c80(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c1c0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_0052df40(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0xaaaaaa9) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004267f0 @ 004267f0  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_004267f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x78);
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


/* FUN_00426a30 @ 00426a30  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_00426a30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
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


/* FUN_00426b80 @ 00426b80  kind=gamemisc  attributed-by=logic:caller-vote  size=155 */

void __thiscall FUN_00426b80(void *this,int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)this;
  puVar4 = (undefined4 *)puVar7[1];
  cVar1 = *(char *)((int)puVar4 + 0xd);
  puVar3 = puVar7;
  puVar5 = puVar4;
  while (cVar1 == '\0') {
    iVar2 = puVar5[5];
    if (((int)param_2[1] < iVar2) || (((int)param_2[1] <= iVar2 && (*param_2 <= (uint)puVar5[4]))))
    {
      if ((*(char *)((int)puVar7 + 0xd) != '\0') &&
         (((int)param_2[1] <= iVar2 && (((int)param_2[1] < iVar2 || (*param_2 < (uint)puVar5[4])))))
         ) {
        puVar7 = puVar5;
      }
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
      puVar5 = puVar3;
    }
    puVar3 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xd);
  }
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar4 = (undefined4 *)*puVar7;
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    do {
      if (((int)puVar4[5] < (int)param_2[1]) ||
         (((int)puVar4[5] <= (int)param_2[1] && ((uint)puVar4[4] <= *param_2)))) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar7;
  return;
}


/* FUN_00426eb0 @ 00426eb0  kind=gamemisc  attributed-by=logic:caller-vote  size=115 */

void __thiscall FUN_00426eb0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 2;
  if (0x3fffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_00426d30(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_00426d30(this,uVar1);
  return;
}


/* FUN_0042e220 @ 0042e220  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

undefined4 __thiscall FUN_0042e220(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    return *(undefined4 *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0x4000bc);
  }
  return 0;
}


/* FUN_0042e880 @ 0042e880  kind=gamemisc  attributed-by=logic:caller-vote  size=121 */

int __thiscall FUN_0042e880(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     ((int)param_2 < 0x10000)) {
    iVar1 = FUN_00406210(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      uVar2 = param_1 & 0x8000003f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
      }
      uVar3 = param_2 & 0x8000003f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
      }
      return iVar1 + 0x18 + (uVar2 * 0x40 + uVar3) * 0x10;
    }
  }
  return 0;
}


/* FUN_0042e960 @ 0042e960  kind=gamemisc  attributed-by=logic:caller-vote  size=62 */

undefined1 * __cdecl FUN_0042e960(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0042ede0 @ 0042ede0  kind=gamemisc  attributed-by=logic:caller-vote  size=44 */

int * __thiscall FUN_0042ede0(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this / param_2;
  param_1[1] = *(int *)((int)this + 4) / param_2;
  param_1[2] = *(int *)((int)this + 8) / param_2;
  return param_1;
}


/* FUN_0042feb0 @ 0042feb0  kind=gamemisc  attributed-by=logic:caller-vote  size=143 */

void __thiscall FUN_0042feb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041bb80(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0xc) * 0xc);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041bb80(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return;
}


/* FUN_004c6470 @ 004c6470  kind=gamemisc  attributed-by=logic:caller-vote  size=58 */

float * __thiscall FUN_004c6470(void *this,byte *param_1)

{
  *(float *)this = (float)*param_1;
  *(float *)((int)this + 4) = (float)param_1[1];
  *(float *)((int)this + 8) = (float)param_1[2];
  return this;
}


/* FUN_004c7f70 @ 004c7f70  kind=gamemisc  attributed-by=logic:caller-vote  size=126 */

void * __cdecl FUN_004c7f70(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00554461;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0041d720(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004c8020 @ 004c8020  kind=gamemisc  attributed-by=logic:caller-vote  size=128 */

void * __cdecl FUN_004c8020(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_00554491;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x62) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004c8420(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0x188);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004c8150 @ 004c8150  kind=gamemisc  attributed-by=logic:caller-vote  size=21 */

void __cdecl FUN_004c8150(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004c8190 @ 004c8190  kind=gamemisc  attributed-by=logic:caller-vote  size=229 */

basic_iostream<char,std::char_traits<char>_> * __thiscall
FUN_004c8190(void *this,uint param_1,int param_2)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005544e2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_2 != 0) {
    *(undefined ***)this = &PTR_0055b2c0;
    *(undefined ***)((int)this + 0x10) = &PTR_00571718;
    *(code **)((int)this + 0x68) = _vftable__exref;
    *(code **)((int)this + 0x68) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + *(int *)(*(int *)this + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  uVar1 = 0;
  if ((param_1 & 1) == 0) {
    uVar1 = 4;
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((param_1 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_1 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_1 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  ExceptionList = local_10;
  return this;
}


/* FUN_004c83b0 @ 004c83b0  kind=gamemisc  attributed-by=logic:caller-vote  size=31 */

int __fastcall FUN_004c83b0(int param_1)

{
  *(undefined4 *)(param_1 + 0x2c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x30) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x34) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x38) = 2;
  return param_1;
}


/* FUN_004ce220 @ 004ce220  kind=gamemisc  attributed-by=logic:caller-vote  size=41 */

void __thiscall FUN_004ce220(void *this,int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  *param_1 = *param_2 + *(int *)this;
  iVar1 = param_2[2];
  iVar2 = *(int *)((int)this + 8);
  param_1[1] = param_2[1] + *(int *)((int)this + 4);
  param_1[2] = iVar1 + iVar2;
  return;
}


/* FUN_004ce580 @ 004ce580  kind=gamemisc  attributed-by=logic:caller-vote  size=102 */

undefined4 __thiscall FUN_004ce580(void *this,uint param_1)

{
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return 0;
  }
  if (0x15555555 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0xc);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0xc);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_004d1a70 @ 004d1a70  kind=gamemisc  attributed-by=logic:caller-vote  size=1805 */

/* WARNING: Removing unreachable block (ram,0x004d1fdd) */

void __thiscall
FUN_004d1a70(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  void *pvVar4;
  ushort *puVar5;
  uint uVar6;
  undefined *puVar7;
  void *pvVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int local_1c;
  int local_18;
  ushort local_c;
  undefined2 local_8;
  
  uVar16 = param_1 - param_5;
  iVar12 = param_3 + param_5;
  if ((int)uVar16 < iVar12) {
    uVar14 = uVar16;
    do {
      uVar6 = param_2 - param_5;
      if ((int)(param_2 - param_5) < param_4 + param_5) {
        do {
          pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
          if (pvVar4 != (void *)0x0) {
            iVar17 = *(int *)((int)pvVar4 + 0x1c);
            bVar3 = true;
            while (iVar17 = iVar17 + -1, -1 < iVar17) {
              puVar5 = (ushort *)FUN_004d23f0(pvVar4,iVar17);
              if (((*(byte *)((int)puVar5 + 3) & 0x1f) == 0) ||
                 ((*(byte *)((int)puVar5 + 3) & 0x1f) == 2)) {
                if (bVar3) {
                  local_8 = CONCAT11(0xff,(byte)*puVar5);
                  bVar13 = 0xff;
                }
                else {
                  local_c = (ushort)(byte)*puVar5;
                  bVar13 = 0;
                  local_8 = local_c;
                }
                *puVar5 = local_8;
                *(byte *)(puVar5 + 1) = bVar13;
              }
              else {
                bVar3 = false;
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while ((int)uVar6 < param_4 + param_5);
      }
      uVar14 = uVar14 + 1;
    } while ((int)uVar14 < iVar12);
  }
  local_1c = 0;
  do {
    if ((int)uVar16 < iVar12) {
      uVar14 = uVar16;
      do {
        uVar6 = param_2 - param_5;
        if ((int)(param_2 - param_5) < param_4 + param_5) {
          do {
            pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
            if ((pvVar4 != (void *)0x0) && (local_18 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
              do {
                puVar7 = FUN_004d23f0(pvVar4,local_18);
                if ((((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) && (puVar7[2] != -1)) {
                  iVar17 = *(int *)((int)pvVar4 + 0x10) + local_18;
                  uVar15 = 0;
                  pvVar8 = (void *)FUN_00406100(this,uVar14 - 1,uVar6,param_6);
                  if (pvVar8 == (void *)0x0) {
                    puVar9 = &DAT_00584248;
                  }
                  else {
                    iVar1 = *(int *)((int)pvVar8 + 0x10);
                    if (iVar17 < iVar1) {
                      puVar9 = &DAT_00584248;
                    }
                    else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                      puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                      if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) && ((puVar9[3] & 0x40) == 0))
                      {
                        puVar9 = &DAT_00584240;
                      }
                    }
                    else {
                      puVar9 = &DAT_00584240;
                      if (0 < iVar17) {
                        puVar9 = &DAT_00584244;
                      }
                    }
                  }
                  bVar13 = puVar9[3] & 0x1f;
                  if (bVar13 == 0xd) {
                    uVar10 = 0xff;
LAB_004d1c86:
                    uVar15 = uVar10;
                    if (uVar10 < 0xff) goto LAB_004d1c93;
                  }
                  else {
                    if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                      if ((byte)puVar9[2] < 5) {
                        uVar10 = 5;
                      }
                      else {
                        uVar10 = (uint)(byte)puVar9[2];
                        if (uVar10 == 0) goto LAB_004d1c93;
                      }
                      goto LAB_004d1c86;
                    }
LAB_004d1c93:
                    pvVar8 = (void *)FUN_00406100(this,uVar14 + 1,uVar6,param_6);
                    if (pvVar8 == (void *)0x0) {
                      puVar9 = &DAT_00584248;
                    }
                    else {
                      iVar1 = *(int *)((int)pvVar8 + 0x10);
                      if (iVar17 < iVar1) {
                        puVar9 = &DAT_00584248;
                      }
                      else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                        puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                        if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) && ((puVar9[3] & 0x40) == 0)
                           ) {
                          puVar9 = &DAT_00584240;
                        }
                      }
                      else {
                        puVar9 = &DAT_00584240;
                        if (0 < iVar17) {
                          puVar9 = &DAT_00584244;
                        }
                      }
                    }
                    bVar13 = puVar9[3] & 0x1f;
                    if (bVar13 == 0xd) {
                      uVar11 = 0xff;
                    }
                    else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                      if ((byte)puVar9[2] < 5) {
                        uVar11 = 5;
                      }
                      else {
                        uVar11 = (uint)(byte)puVar9[2];
                      }
                    }
                    else {
                      uVar11 = 0;
                    }
                    uVar10 = uVar15;
                    if (uVar15 < uVar11) {
                      uVar10 = uVar11;
                    }
                    if (uVar10 < 0xff) {
                      pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6 - 1,param_6);
                      if (pvVar8 == (void *)0x0) {
                        puVar9 = &DAT_00584248;
                      }
                      else {
                        iVar1 = *(int *)((int)pvVar8 + 0x10);
                        if (iVar17 < iVar1) {
                          puVar9 = &DAT_00584248;
                        }
                        else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                          puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                          if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                             ((puVar9[3] & 0x40) == 0)) {
                            puVar9 = &DAT_00584240;
                          }
                        }
                        else {
                          puVar9 = &DAT_00584240;
                          if (0 < iVar17) {
                            puVar9 = &DAT_00584244;
                          }
                        }
                      }
                      bVar13 = puVar9[3] & 0x1f;
                      if (bVar13 == 0xd) {
                        uVar15 = 0xff;
                      }
                      else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                        if ((byte)puVar9[2] < 5) {
                          uVar15 = 5;
                        }
                        else {
                          uVar15 = (uint)(byte)puVar9[2];
                        }
                      }
                      else {
                        uVar15 = 0;
                      }
                      if (uVar10 < uVar15) {
                        uVar10 = uVar15;
                      }
                      if (uVar10 < 0xff) {
                        pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6 + 1,param_6);
                        if (pvVar8 == (void *)0x0) {
                          puVar9 = &DAT_00584248;
                        }
                        else {
                          iVar1 = *(int *)((int)pvVar8 + 0x10);
                          if (iVar17 < iVar1) {
                            puVar9 = &DAT_00584248;
                          }
                          else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                            puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                            if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                               ((puVar9[3] & 0x40) == 0)) {
                              puVar9 = &DAT_00584240;
                            }
                          }
                          else {
                            puVar9 = &DAT_00584240;
                            if (0 < iVar17) {
                              puVar9 = &DAT_00584244;
                            }
                          }
                        }
                        bVar13 = puVar9[3] & 0x1f;
                        if (bVar13 == 0xd) {
                          uVar15 = 0xff;
                        }
                        else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                          if ((byte)puVar9[2] < 5) {
                            uVar15 = 5;
                          }
                          else {
                            uVar15 = (uint)(byte)puVar9[2];
                          }
                        }
                        else {
                          uVar15 = 0;
                        }
                        if (uVar10 < uVar15) {
                          uVar10 = uVar15;
                        }
                        if (uVar10 < 0xff) {
                          iVar1 = iVar17 + -1;
                          pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
                          if (pvVar8 == (void *)0x0) {
                            puVar9 = &DAT_00584248;
                          }
                          else {
                            iVar2 = *(int *)((int)pvVar8 + 0x10);
                            if (iVar1 < iVar2) {
                              puVar9 = &DAT_00584248;
                            }
                            else if (iVar1 < *(int *)((int)pvVar8 + 0x1c) + iVar2) {
                              puVar9 = FUN_00405f20(pvVar8,iVar1 - iVar2);
                              if ((((puVar9[3] & 0x1f) == 0) && (iVar1 < 1)) &&
                                 ((puVar9[3] & 0x40) == 0)) {
                                puVar9 = &DAT_00584240;
                              }
                            }
                            else {
                              puVar9 = &DAT_00584240;
                              if (0 < iVar1) {
                                puVar9 = &DAT_00584244;
                              }
                            }
                          }
                          bVar13 = puVar9[3] & 0x1f;
                          if (bVar13 == 0xd) {
                            uVar15 = 0xff;
                          }
                          else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                            if ((byte)puVar9[2] < 5) {
                              uVar15 = 5;
                            }
                            else {
                              uVar15 = (uint)(byte)puVar9[2];
                            }
                          }
                          else {
                            uVar15 = 0;
                          }
                          if (uVar10 < uVar15) {
                            uVar10 = uVar15;
                          }
                          if (uVar10 < 0xff) {
                            iVar17 = iVar17 + 1;
                            pvVar8 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
                            if (pvVar8 == (void *)0x0) {
                              puVar9 = &DAT_00584248;
                            }
                            else {
                              iVar1 = *(int *)((int)pvVar8 + 0x10);
                              if (iVar17 < iVar1) {
                                puVar9 = &DAT_00584248;
                              }
                              else if (iVar17 < *(int *)((int)pvVar8 + 0x1c) + iVar1) {
                                puVar9 = FUN_00405f20(pvVar8,iVar17 - iVar1);
                                if ((((puVar9[3] & 0x1f) == 0) && (iVar17 < 1)) &&
                                   ((puVar9[3] & 0x40) == 0)) {
                                  puVar9 = &DAT_00584240;
                                }
                              }
                              else {
                                puVar9 = &DAT_00584240;
                                if (0 < iVar17) {
                                  puVar9 = &DAT_00584244;
                                }
                              }
                            }
                            bVar13 = puVar9[3] & 0x1f;
                            if (bVar13 == 0xd) {
                              if (uVar10 < 0xff) {
                                uVar10 = 0xff;
                              }
                            }
                            else if (((puVar9[3] & 0x1f) == 0) || (bVar13 == 2)) {
                              bVar13 = puVar9[2];
                              if (bVar13 < 5) {
                                if (uVar10 < 5) {
                                  uVar10 = 5;
                                }
                              }
                              else if (uVar10 < bVar13) {
                                uVar10 = (uint)bVar13;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  puVar7[1] = (char)((uVar10 * 0x55) / 100);
                }
                local_18 = local_18 + 1;
              } while (local_18 < *(int *)((int)pvVar4 + 0x1c));
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_4 + param_5);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    if ((int)uVar16 < iVar12) {
      uVar14 = uVar16;
      do {
        uVar6 = param_2 - param_5;
        if ((int)(param_2 - param_5) < param_4 + param_5) {
          do {
            pvVar4 = (void *)FUN_00406100(this,uVar14,uVar6,param_6);
            if ((pvVar4 != (void *)0x0) && (iVar17 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
              do {
                puVar7 = FUN_004d23f0(pvVar4,iVar17);
                if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
                  puVar7[2] = puVar7[1];
                }
                iVar17 = iVar17 + 1;
              } while (iVar17 < *(int *)((int)pvVar4 + 0x1c));
            }
            uVar6 = uVar6 + 1;
          } while ((int)uVar6 < param_4 + param_5);
        }
        uVar14 = uVar14 + 1;
      } while ((int)uVar14 < iVar12);
    }
    local_1c = local_1c + 1;
    if (0xf < local_1c) {
      for (; uVar16 = param_2, (int)param_1 < param_3; param_1 = param_1 + 1) {
        for (; (int)uVar16 < param_4; uVar16 = uVar16 + 1) {
          pvVar4 = (void *)FUN_00406100(this,param_1,uVar16,param_6);
          if ((pvVar4 != (void *)0x0) && (iVar12 = 0, 0 < *(int *)((int)pvVar4 + 0x1c))) {
            do {
              puVar7 = FUN_004d23f0(pvVar4,iVar12);
              if (((puVar7[3] & 0x1f) == 0) || ((puVar7[3] & 0x1f) == 2)) {
                *puVar7 = puVar7[2];
              }
              iVar12 = iVar12 + 1;
            } while (iVar12 < *(int *)((int)pvVar4 + 0x1c));
          }
        }
      }
      return;
    }
  } while( true );
}


/* FUN_004d2340 @ 004d2340  kind=gamemisc  attributed-by=logic:caller-vote  size=166 */

uint __thiscall FUN_004d2340(void *this,uint param_1,uint param_2,undefined8 param_3)

{
  uint uVar1;
  uint *puVar2;
  float10 fVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  uVar4 = FUN_0054a946();
  uVar5 = __alldiv((uint)uVar4,(uint)(uVar4 >> 0x20),0x10000,0);
  uVar1 = (uint)uVar5;
  uVar5 = __alldiv(param_1,param_2,0x10000,0);
  puVar2 = (uint *)FUN_004286f0(this,(int)((int)uVar5 + ((int)uVar5 >> 0x1f & 0x7ffU)) >> 0xb,uVar1)
  ;
  if ((puVar2 != (uint *)0x0) && (puVar2[6] != 0)) {
    fVar3 = FUN_0052c820(puVar2,&param_1,(uint *)&param_3);
    if ((float)fVar3 <= 1.0) {
      return puVar2[9];
    }
  }
  return 1;
}


/* FUN_004d24a0 @ 004d24a0  kind=gamemisc  attributed-by=logic:caller-vote  size=87 */

byte __thiscall
FUN_004d24a0(void *this,uint param_1,uint param_2,int param_3,int param_4,int param_5)

{
  undefined *puVar1;
  byte bVar2;
  
  puVar1 = FUN_00405fd0(this,param_1,param_2,param_3,param_4);
  bVar2 = puVar1[3] & 0x1f;
  if (bVar2 == 0xd) {
    return 0xff;
  }
  if (((puVar1[3] & 0x1f) != 0) && (bVar2 != 2)) {
    return 0;
  }
  if ((byte)puVar1[param_5] < 5) {
    return 5;
  }
  return puVar1[param_5];
}


/* FUN_004d3e10 @ 004d3e10  kind=gamemisc  attributed-by=logic:caller-vote  size=189 */

undefined4 * __thiscall FUN_004d3e10(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  piVar2 = *(int **)this;
  local_8 = this;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_004ce720((int *)piVar2[1]);
    *(int *)(*(int *)this + 4) = *(int *)this;
    *(undefined4 *)*(undefined4 *)this = *(undefined4 *)this;
    *(int *)(*(int *)this + 8) = *(int *)this;
    *(undefined4 *)((int)this + 4) = 0;
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_004d3ed0(this,&local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_004d3ed0 @ 004d3ed0  kind=gamemisc  attributed-by=logic:caller-vote  size=680 */

void __thiscall FUN_004d3ed0(void *this,undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  piVar2 = param_2;
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_00407a50((int *)&param_2);
  piVar5 = (int *)*piVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar7 = piVar5;
    if ((*(char *)(piVar2[2] + 0xd) == '\0') && (piVar7 = (int *)param_2[2], param_2 != piVar2)) {
      piVar5[1] = (int)param_2;
      *param_2 = *piVar2;
      piVar5 = param_2;
      if (param_2 != (int *)piVar2[2]) {
        piVar5 = (int *)param_2[1];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          piVar7[1] = (int)piVar5;
        }
        *piVar5 = (int)piVar7;
        param_2[2] = piVar2[2];
        *(int **)(piVar2[2] + 4) = param_2;
      }
      if (*(int **)(*(int *)this + 4) == piVar2) {
        *(int **)(*(int *)this + 4) = param_2;
      }
      else {
        piVar6 = (int *)piVar2[1];
        if ((int *)*piVar6 == piVar2) {
          *piVar6 = (int)param_2;
        }
        else {
          piVar6[2] = (int)param_2;
        }
      }
      param_2[1] = piVar2[1];
      iVar1 = param_2[3];
      *(char *)(param_2 + 3) = (char)piVar2[3];
      *(char *)(piVar2 + 3) = (char)iVar1;
      goto LAB_004d3ffc;
    }
  }
  else {
    piVar7 = (int *)piVar2[2];
  }
  piVar5 = (int *)piVar2[1];
  if (*(char *)((int)piVar7 + 0xd) == '\0') {
    piVar7[1] = (int)piVar5;
  }
  if (*(int **)(*(int *)this + 4) == piVar2) {
    *(int **)(*(int *)this + 4) = piVar7;
  }
  else if ((int *)*piVar5 == piVar2) {
    *piVar5 = (int)piVar7;
  }
  else {
    piVar5[2] = (int)piVar7;
  }
  piVar6 = *(int **)this;
  if ((int *)*piVar6 == piVar2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      piVar3 = FUN_0042d440(piVar7);
    }
    *piVar6 = (int)piVar3;
  }
  iVar1 = *(int *)this;
  if (*(int **)(iVar1 + 8) == piVar2) {
    if (*(char *)((int)piVar7 + 0xd) == '\0') {
      iVar4 = FUN_0042d420((int)piVar7);
      *(int *)(iVar1 + 8) = iVar4;
    }
    else {
      *(int **)(iVar1 + 8) = piVar5;
    }
  }
LAB_004d3ffc:
  if ((char)piVar2[3] == '\x01') {
    if (piVar7 != *(int **)(*(int *)this + 4)) {
      do {
        piVar6 = piVar5;
        if ((char)piVar7[3] != '\x01') break;
        piVar5 = (int *)*piVar6;
        if (piVar7 == piVar5) {
          piVar5 = (int *)piVar6[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_004ce780(this,(int)piVar6);
            piVar5 = (int *)piVar6[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042d460(this,piVar5);
                piVar5 = (int *)piVar6[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar6[3];
              *(undefined1 *)(piVar6 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004ce780(this,(int)piVar6);
              *(undefined1 *)(piVar7 + 3) = 1;
              goto LAB_004d412e;
            }
LAB_004d40d0:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar6 + 3) = 0;
            FUN_0042d460(this,piVar6);
            piVar5 = (int *)*piVar6;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_004d40d0;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004ce780(this,(int)piVar5);
              piVar5 = (int *)*piVar6;
            }
            *(char *)(piVar5 + 3) = (char)piVar6[3];
            *(undefined1 *)(piVar6 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042d460(this,piVar6);
            *(undefined1 *)(piVar7 + 3) = 1;
            goto LAB_004d412e;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_004d412e:
  if (7 < (uint)piVar2[0xb]) {
    operator_delete((void *)piVar2[6]);
  }
  piVar2[0xb] = 7;
  piVar2[10] = 0;
  *(undefined2 *)(piVar2 + 6) = 0;
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_004d4470 @ 004d4470  kind=gamemisc  attributed-by=logic:caller-vote  size=69 */

int * __thiscall FUN_004d4470(void *this,int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)((int)this + 4);
  if (puVar4 != puVar2) {
    puVar3 = (undefined4 *)(param_2 + 8);
    do {
      puVar3[-2] = *puVar4;
      puVar3[-1] = puVar4[1];
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar2);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0xc;
  *param_1 = param_2;
  return param_1;
}


/* FUN_004d81b0 @ 004d81b0  kind=gamemisc  attributed-by=logic:caller-vote  size=494 */

void __thiscall FUN_004d81b0(void *this,int param_1)

{
  char *pcVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 *puVar4;
  int iVar5;
  int in_stack_ffffff0c;
  undefined1 local_f0 [16];
  undefined **local_e0;
  basic_streambuf<char,std::char_traits<char>_> local_d8 [14];
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_88;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [3];
  undefined1 local_20 [8];
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554bb0;
  local_10 = ExceptionList;
  pcVar1 = (char *)(DAT_00583cc8 ^ (uint)&stack0xfffffffc);
  ExceptionList = &local_10;
  local_40 = 0;
  local_14 = pcVar1;
  if (((*(int *)((int)this + 0xa4) != 0) && (param_1 != 0)) &&
     ((*(char *)(param_1 + 0x75) != '\0' || (*(int *)(param_1 + 0x68) != *(int *)(param_1 + 0x6c))))
     ) {
    local_f0._0_4_ = &PTR_0055b2c0;
    local_e0 = &PTR_00571718;
    local_88 = _vftable__exref;
    local_8 = 0;
    local_40 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              ((basic_iostream<char,std::char_traits<char>_> *)local_f0,
               (basic_streambuf<char,std::char_traits<char>_> *)local_d8);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     (local_f0 + *(int *)(local_f0._0_4_ + 4)) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)(&local_d8[-7].field_0x0 + *(int *)(local_f0._0_4_ + 4)) =
         *(int *)(local_f0._0_4_ + 4) + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_d8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_d8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_a0 = 0;
    local_9c = 0;
    iVar5 = *(int *)(param_1 + 100);
    local_8 = 3;
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)&local_e0,"zone");
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                       ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,iVar5);
    pbVar2 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar3,pcVar1);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar2,in_stack_ffffff0c);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 4;
    puVar4 = FUN_0041d800(local_20,&local_3c);
    FUN_0041faa0(puVar4,param_1);
    puVar4 = FUN_004d8f70(local_f0,local_2c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_00413210((void *)((int)this + 0xac),puVar4,(int *)&local_3c);
    if (0xf < local_18) {
      operator_delete(local_2c[0]);
    }
    if (local_3c != (void *)0x0) {
      operator_delete(local_3c);
      local_3c = (void *)0x0;
      local_38 = 0;
      local_34 = 0;
    }
    FUN_004ce3e0(local_f0);
  }
  ExceptionList = local_10;
  __security_check_cookie((uint)local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004d8dc0 @ 004d8dc0  kind=gamemisc  attributed-by=logic:caller-vote  size=25 */

undefined4 __fastcall FUN_004d8dc0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0x68);
  }
  return *(undefined4 *)(param_1 + 100);
}


/* FUN_004d8de0 @ 004d8de0  kind=gamemisc  attributed-by=logic:caller-vote  size=25 */

undefined4 __fastcall FUN_004d8de0(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 100);
  }
  return *(undefined4 *)(param_1 + 0x68);
}


/* FUN_004d8e30 @ 004d8e30  kind=gamemisc  attributed-by=logic:caller-vote  size=39 */

float10 __fastcall FUN_004d8e30(double *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


/* FUN_004d99d0 @ 004d99d0  kind=gamemisc  attributed-by=logic:caller-vote  size=63 */

int * __thiscall FUN_004d99d0(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *param_1;
  *(uint *)this = uVar1 << 0x10;
  *(uint *)((int)this + 4) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[1];
  *(uint *)((int)this + 8) = uVar1 << 0x10;
  *(uint *)((int)this + 0xc) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[2];
  *(uint *)((int)this + 0x10) = uVar1 << 0x10;
  *(uint *)((int)this + 0x14) = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  return this;
}


/* FUN_004dad80 @ 004dad80  kind=gamemisc  attributed-by=logic:caller-vote  size=94 */

int * __fastcall FUN_004dad80(int *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  puVar2 = (undefined4 *)*param_1;
  if (*(char *)((int)puVar2 + 0xd) != '\0') {
    *param_1 = puVar2[2];
    return param_1;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xd) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xd) == '\0');
      *param_1 = iVar4;
      return param_1;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xd);
    while ((cVar1 == '\0' && (*param_1 == *piVar5))) {
      *param_1 = (int)piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xd);
    }
    if (*(char *)(*param_1 + 0xd) != '\0') {
      return param_1;
    }
  }
  *param_1 = (int)piVar5;
  return param_1;
}


/* FUN_004e1230 @ 004e1230  kind=gamemisc  attributed-by=logic:caller-vote  size=78 */

undefined4 * __cdecl FUN_004e1230(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004e1370 @ 004e1370  kind=gamemisc  attributed-by=logic:caller-vote  size=162 */

void __thiscall FUN_004e1370(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x18)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x18;
  if (0xaaaaaaaU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x18;
  uVar3 = iVar1 + param_1;
  if (0xaaaaaaa - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004e1280(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004e1280(this,uVar2);
  return;
}


/* FUN_004e1420 @ 004e1420  kind=gamemisc  attributed-by=logic:caller-vote  size=180 */

void __thiscall FUN_004e1420(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e1370(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0x18) * 0x18);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e1370(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      puVar1[5] = param_1[5];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x18;
  return;
}


/* FUN_004e1520 @ 004e1520  kind=gamemisc  attributed-by=logic:caller-vote  size=56 */

void __cdecl FUN_004e1520(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  return;
}


/* FUN_004e1d70 @ 004e1d70  kind=gamemisc  attributed-by=logic:caller-vote  size=53 */

void __cdecl FUN_004e1d70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}


/* FUN_004e1e90 @ 004e1e90  kind=gamemisc  attributed-by=logic:caller-vote  size=32 */

undefined4 * __thiscall
FUN_004e1e90(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return this;
}


/* FUN_004e1eb0 @ 004e1eb0  kind=gamemisc  attributed-by=logic:caller-vote  size=23 */

undefined4 * __fastcall FUN_004e1eb0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return param_1;
}


/* FUN_004e2360 @ 004e2360  kind=gamemisc  attributed-by=logic:caller-vote  size=32 */

int * __thiscall FUN_004e2360(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this / param_2;
  param_1[1] = *(int *)((int)this + 4) / param_2;
  return param_1;
}


/* FUN_004e27b0 @ 004e27b0  kind=gamemisc  attributed-by=logic:caller-vote  size=115 */

void __thiscall FUN_004e27b0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 <= (uint)(*(int *)((int)this + 8) - *(int *)((int)this + 4) >> 3)) {
    return;
  }
  iVar2 = *(int *)((int)this + 4) - *(int *)this >> 3;
  if (0x1fffffffU - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar3 = iVar2 + param_1;
  uVar1 = *(int *)((int)this + 8) - *(int *)this >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (uVar3 != 0) {
      uVar1 = uVar3;
    }
    FUN_004e25e0(this,uVar1);
    return;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  FUN_004e25e0(this,uVar1);
  return;
}


/* FUN_004f3850 @ 004f3850  kind=gamemisc  attributed-by=logic:caller-vote  size=45 */

undefined8 __cdecl FUN_004f3850(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 * 0x10000 + param_1;
  uVar2 = uVar1 * 0x100;
  return CONCAT44(((int)param_3 >> 0x1f) +
                  (((((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) + ((int)param_1 >> 0x1f) +
                   (uint)CARRY4(param_2 * 0x10000,param_1)) * 0x100 | uVar1 >> 0x18) +
                  (uint)CARRY4(param_3,uVar2),param_3 + uVar2);
}


/* FUN_004f3880 @ 004f3880  kind=gamemisc  attributed-by=logic:caller-vote  size=31 */

uint * __thiscall FUN_004f3880(void *this,byte *param_1)

{
  *(uint *)this = (uint)*param_1;
  *(uint *)((int)this + 4) = (uint)param_1[1];
  *(uint *)((int)this + 8) = (uint)param_1[2];
  return this;
}


/* FUN_004f3940 @ 004f3940  kind=gamemisc  attributed-by=logic:caller-vote  size=149 */

void __cdecl FUN_004f3940(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar5 = param_1 + iVar4 * 0xc;
    if (*(int *)(iVar5 + 8) < *(int *)(iVar5 + -4)) {
      iVar4 = iVar3 * 2 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0xc);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar4;
  }
  iVar5 = iVar3;
  if (iVar4 == param_3) {
    iVar4 = param_1 + param_3 * 0xc;
    iVar5 = param_3 + -1;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar1 = *(undefined4 *)(iVar4 + -0xc);
    puVar1[1] = *(undefined4 *)(iVar4 + -8);
    puVar1[2] = *(undefined4 *)(iVar4 + -4);
  }
  FUN_004f5b40(param_1,iVar5,param_2,param_4);
  return;
}


/* FUN_004f3c60 @ 004f3c60  kind=gamemisc  attributed-by=logic:caller-vote  size=518 */

void __thiscall
FUN_004f3c60(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x9249247 < *(uint *)((int)this + 4)) {
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_004f3e41;
      }
LAB_004f3d98:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004f3d98;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_004f3e41:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004f4080 @ 004f4080  kind=gamemisc  attributed-by=logic:caller-vote  size=565 */

undefined4 * __thiscall
FUN_004f4080(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00555560;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004f3c60(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    puVar3 = &uStack_34;
    if ((*param_3 < param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
LAB_004f4111:
      local_14 = (undefined1 *)puVar3;
      FUN_004f3c60(local_1c,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar5 = (undefined4 *)piVar1[2];
    if (((int)puVar5[4] < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, (int)puVar5[4] <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, (int)puVar5[5] < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004f3c60(this,param_1,'\0',puVar5,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < param_2[4]) ||
       ((puVar3 = &uStack_34, *param_3 <= param_2[4] &&
        (puVar3 = &uStack_34, param_3[1] < param_2[5])))) {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar2 = local_20;
      uVar4 = FUN_004ce3b0(local_20 + 4,param_3);
      puVar3 = (uint *)local_14;
      if ((char)uVar4 != '\0') {
        if (*(char *)(piVar2[2] + 0xd) != '\0') {
          FUN_004f3c60(local_1c,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004f4111;
      }
    }
    local_14 = (undefined1 *)puVar3;
    uVar4 = FUN_004ce3b0(param_2 + 4,param_3);
    if ((char)uVar4 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar2 = local_20;
      if ((local_20 == piVar1) || (uVar4 = FUN_004ce3b0(param_3,local_20 + 4), (char)uVar4 != '\0'))
      {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3c60(local_1c,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3c60(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_004f4560(local_1c,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004f42d0 @ 004f42d0  kind=gamemisc  attributed-by=logic:caller-vote  size=622 */

undefined4 * __thiscall
FUN_004f42d0(void *this,undefined4 *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uStack_34;
  undefined4 local_24;
  int *local_20;
  void *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00555580;
  local_10 = ExceptionList;
  uStack_34 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004f3e70(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    iVar2 = param_2[4];
    iVar3 = *param_3;
    if ((iVar3 < iVar2) ||
       ((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
        ((param_3[1] < param_2[5] ||
         (((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
           (local_14 = (undefined1 *)&uStack_34, param_3[1] <= param_2[5])) &&
          (local_14 = (undefined1 *)&uStack_34, param_3[2] < param_2[6])))))))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004f3e70(this,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar6 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_34;
    uVar5 = FUN_004f7ab0(puVar6 + 4,param_3);
    if ((char)uVar5 != '\0') {
      FUN_004f3e70(this,param_1,'\0',puVar6,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    uVar5 = FUN_004f7ab0(param_3,param_2 + 4);
    if ((char)uVar5 != '\0') {
      local_20 = param_2;
      FUN_004dad80((int *)&local_20);
      piVar4 = local_20;
      uVar5 = FUN_004f7ab0(local_20 + 4,param_3);
      if ((char)uVar5 != '\0') {
        if (*(char *)(piVar4[2] + 0xd) == '\0') {
          FUN_004f3e70(local_1c,param_1,'\x01',param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_1c,param_1,'\0',piVar4,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    uVar5 = FUN_004f7ab0(param_2 + 4,param_3);
    this = local_1c;
    if ((char)uVar5 != '\0') {
      local_20 = param_2;
      FUN_00407a50((int *)&local_20);
      piVar4 = local_20;
      if ((local_20 == piVar1) ||
         (uVar5 = FUN_004f7ab0(param_3,local_20 + 4), this = local_1c, (char)uVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_004f3e70(local_1c,param_1,'\x01',piVar4,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004f3e70(local_1c,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_004f46c0(this,&local_24,'\0',param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004f4560 @ 004f4560  kind=gamemisc  attributed-by=logic:caller-vote  size=318 */

void __thiscall FUN_004f4560(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_005555a0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      iVar3 = piVar7[4];
      if (param_2 == '\0') {
        if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (param_3[1] < piVar7[5])))) {
          local_18 = true;
          goto LAB_004f4602;
        }
        local_18 = false;
LAB_004f45f8:
        piVar6 = (int *)piVar7[2];
      }
      else {
        if ((iVar3 < iVar2) || ((iVar3 <= iVar2 && (piVar7[5] < param_3[1])))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004f45f8;
LAB_004f4602:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (local_18) {
    if (piVar7 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004f4621;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if ((*piVar4 <= _param_2[4]) && ((*piVar4 < _param_2[4] || (piVar4[1] <= _param_2[5])))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_004f4621:
  puVar5 = (undefined4 *)FUN_004f3c60(this,(undefined4 *)&param_2,local_18,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004f46c0 @ 004f46c0  kind=gamemisc  attributed-by=logic:caller-vote  size=382 */

void __thiscall FUN_004f46c0(void *this,undefined4 *param_1,char param_2,int *param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_005555c0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      if (param_2 == '\0') {
        if (iVar2 < piVar7[4]) {
LAB_004f4786:
          local_18 = true;
          goto LAB_004f478b;
        }
        if (iVar2 <= piVar7[4]) {
          if ((param_3[1] < piVar7[5]) || ((param_3[1] <= piVar7[5] && (param_3[2] < piVar7[6]))))
          goto LAB_004f4786;
        }
        local_18 = false;
LAB_004f4781:
        piVar6 = (int *)piVar7[2];
      }
      else {
        iVar3 = piVar7[4];
        if ((iVar3 < iVar2) ||
           ((iVar3 <= iVar2 &&
            ((piVar7[5] < param_3[1] ||
             (((iVar3 <= iVar2 && (piVar7[5] <= param_3[1])) && (piVar7[6] < param_3[2])))))))) {
          local_18 = true;
        }
        else {
          local_18 = false;
        }
        local_18 = !local_18;
        if (!local_18) goto LAB_004f4781;
LAB_004f478b:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (local_18) {
    if (piVar7 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_004f47aa;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  iVar2 = _param_2[4];
  iVar3 = *piVar4;
  if ((iVar3 <= iVar2) &&
     ((iVar3 < iVar2 ||
      ((piVar4[1] <= _param_2[5] &&
       (((iVar3 < iVar2 || (piVar4[1] < _param_2[5])) || (piVar4[2] <= _param_2[6])))))))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_004f47aa:
  puVar5 = (undefined4 *)FUN_004f3e70(this,(undefined4 *)&param_2,local_18,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004f4940 @ 004f4940  kind=gamemisc  attributed-by=logic:caller-vote  size=144 */

void __cdecl FUN_004f4940(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = (undefined8 *)((int)puVar6 + 0xc), puVar5 != param_2) {
      iVar4 = *(int *)(puVar5 + 1);
      uVar3 = *puVar5;
      if (iVar4 < *(int *)(param_1 + 1)) {
        if (param_1 != puVar5) {
          puVar6 = puVar6 + 4;
          do {
            *(undefined4 *)((int)puVar6 + -0x14) = *(undefined4 *)(puVar6 + -4);
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)((int)puVar6 + -0x1c);
            *(undefined4 *)((int)puVar6 + -0xc) = *(undefined4 *)(puVar6 + -3);
            puVar1 = puVar6 + -4;
            puVar6 = (undefined8 *)((int)puVar6 + -0xc);
          } while (puVar1 != param_1);
        }
        *param_1 = uVar3;
        *(int *)(param_1 + 1) = iVar4;
        puVar6 = puVar5;
      }
      else {
        iVar2 = *(int *)(puVar6 + 1);
        puVar6 = puVar5;
        while (iVar4 < iVar2) {
          *(undefined4 *)puVar6 = *(undefined4 *)((int)puVar6 + -0xc);
          *(undefined4 *)((int)puVar6 + 4) = *(undefined4 *)(puVar6 + -1);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
          iVar2 = *(int *)(puVar6 + -2);
          puVar6 = (undefined8 *)((int)puVar6 + -0xc);
        }
        *puVar6 = uVar3;
        *(int *)(puVar6 + 1) = iVar4;
        puVar6 = puVar5;
      }
    }
  }
  return;
}


/* FUN_004f4cb0 @ 004f4cb0  kind=gamemisc  attributed-by=logic:caller-vote  size=273 */

void __cdecl FUN_004f4cb0(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
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
  iVar4 = (param_2 - param_1) / 0xc;
  iVar9 = iVar4 / 2;
  if (0 < iVar9) {
    iVar7 = iVar9 * 2 + 2;
    iVar5 = param_1 + iVar9 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar7 = iVar7 + -2;
      iVar9 = iVar9 + -1;
      iVar1 = iVar7;
      iVar8 = iVar9;
      while (iVar6 = iVar1, iVar6 < iVar4) {
        iVar1 = param_1 + iVar6 * 0xc;
        if (*(int *)(iVar1 + 8) < *(int *)(iVar1 + -4)) {
          iVar6 = iVar6 + -1;
        }
        puVar2 = (undefined4 *)(param_1 + iVar6 * 0xc);
        puVar3 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        iVar8 = iVar6;
        iVar1 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar4) {
        iVar1 = param_1 + iVar4 * 0xc;
        puVar2 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar2 = *(undefined4 *)(iVar1 + -0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + -8);
        puVar2[2] = *(undefined4 *)(iVar1 + -4);
        iVar8 = iVar4 + -1;
      }
      FUN_004f5b40(param_1,iVar8,iVar9,(undefined4 *)&local_14);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f5050 @ 004f5050  kind=gamemisc  attributed-by=logic:caller-vote  size=143 */

void __cdecl FUN_004f5050(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_2[2];
  if (iVar1 < (int)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = iVar1;
  }
  iVar1 = param_3[2];
  if (iVar1 < (int)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = iVar1;
    if (iVar1 < (int)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = iVar1;
    }
  }
  return;
}


/* FUN_004f5500 @ 004f5500  kind=gamemisc  attributed-by=logic:caller-vote  size=167 */

void __cdecl FUN_004f5500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = ((int)param_3 - (int)param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    FUN_004f5050(param_1,param_1 + iVar1 * 3,param_1 + iVar1 * 6);
    FUN_004f5050(param_2 + iVar1 * -3,param_2,param_2 + iVar1 * 3);
    FUN_004f5050(param_3 + iVar1 * -6,param_3 + iVar1 * -3,param_3);
    FUN_004f5050(param_1 + iVar1 * 3,param_2,param_3 + iVar1 * -3);
    return;
  }
  FUN_004f5050(param_1,param_2,param_3);
  return;
}


/* FUN_004f5b40 @ 004f5b40  kind=gamemisc  attributed-by=logic:caller-vote  size=114 */

void __cdecl FUN_004f5b40(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    if ((int)param_4[2] <= (int)puVar1[2]) break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    param_2 = iVar3;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return;
}


/* FUN_004f5e00 @ 004f5e00  kind=gamemisc  attributed-by=logic:caller-vote  size=310 */

void __cdecl FUN_004f5e00(int *param_1,int *param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f5ed8:
      if (1 < iVar3) {
        FUN_004f4940((undefined8 *)param_1,(undefined8 *)param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4cb0((int)param_1,(int)param_2);
        }
        FUN_004f6280(param_1,param_2);
        return;
      }
      goto LAB_004f5ed8;
    }
    puVar2 = (undefined4 *)FUN_004f67f0(local_c,param_1,param_2);
    piVar4 = (int *)*puVar2;
    piVar1 = (int *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)piVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)piVar1) / 0xc) {
      FUN_004f5e00(param_1,piVar4,param_3,param_4);
      param_1 = piVar1;
      piVar4 = param_2;
    }
    else {
      FUN_004f5e00(piVar1,param_2,param_3,param_4);
    }
    iVar3 = (int)piVar4 - (int)param_1;
    param_2 = piVar4;
  } while( true );
}


/* FUN_004f6280 @ 004f6280  kind=gamemisc  attributed-by=logic:caller-vote  size=163 */

void __cdecl FUN_004f6280(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_c = param_2[-1];
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_004f3940((int)param_1,0,(iVar1 + -0xc) / 0xc,(undefined4 *)&local_14);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004f67f0 @ 004f67f0  kind=gamemisc  attributed-by=logic:caller-vote  size=616 */

void __cdecl FUN_004f67f0(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_24;
  int *local_20;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_20 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_004f5500(param_2,local_20,param_3 + -3);
  piVar4 = local_20 + 3;
  for (; param_2 < local_20; local_20 = local_20 + -3) {
    if ((local_20[-1] < local_20[2]) || (local_20[2] < local_20[-1])) break;
  }
  local_24 = piVar4;
  piVar2 = piVar4;
  piVar7 = local_20;
  if (piVar4 < param_3) {
    do {
      local_24 = piVar4;
      piVar2 = piVar4;
      if ((piVar4[2] < local_20[2]) || (local_20[2] < piVar4[2])) break;
      piVar4 = piVar4 + 3;
      local_24 = piVar4;
      piVar2 = piVar4;
    } while (piVar4 < param_3);
  }
joined_r0x004f6892:
  do {
    if (param_3 <= piVar4) {
LAB_004f68d9:
      if (param_2 < local_20) {
        piVar5 = local_20 + -1;
        piVar6 = piVar7;
        do {
          piVar7 = piVar6;
          piVar4 = local_24;
          if (piVar6[2] <= *piVar5) {
            if (piVar6[2] < *piVar5) break;
            local_c = piVar6[-1];
            local_14 = *(undefined8 *)(piVar6 + -3);
            piVar7 = piVar6 + -3;
            *piVar7 = piVar5[-2];
            piVar6[-2] = piVar5[-1];
            piVar6[-1] = *piVar5;
            iVar3 = 0;
            do {
              *(undefined4 *)((int)piVar5 + iVar3 + -8) = *(undefined4 *)((int)&local_14 + iVar3);
              iVar3 = iVar3 + 4;
            } while (iVar3 < 8);
            *piVar5 = local_c;
          }
          local_20 = local_20 + -3;
          piVar5 = piVar5 + -3;
          piVar6 = piVar7;
        } while (param_2 < local_20);
      }
      if (local_20 == param_2) {
        if (piVar4 == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar2;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (piVar2 != piVar4) {
          uVar1 = *(undefined8 *)piVar7;
          iVar3 = piVar7[2];
          *piVar7 = *piVar2;
          piVar7[1] = piVar2[1];
          piVar7[2] = piVar2[2];
          *(undefined8 *)piVar2 = uVar1;
          piVar2[2] = iVar3;
        }
        uVar1 = *(undefined8 *)piVar7;
        iVar3 = piVar7[2];
        *piVar7 = *piVar4;
        piVar7[1] = piVar4[1];
        piVar7[2] = piVar4[2];
        *(undefined8 *)piVar4 = uVar1;
        piVar4[2] = iVar3;
        piVar4 = piVar4 + 3;
        local_24 = piVar4;
        piVar2 = piVar2 + 3;
        piVar7 = piVar7 + 3;
      }
      else {
        piVar5 = local_20 + -3;
        if (piVar4 == param_3) {
          piVar6 = piVar7 + -3;
          if (piVar5 != piVar6) {
            uVar1 = *(undefined8 *)piVar5;
            iVar3 = local_20[-1];
            *piVar5 = *piVar6;
            local_20[-2] = piVar7[-2];
            local_20[-1] = piVar7[-1];
            *(undefined8 *)piVar6 = uVar1;
            piVar7[-1] = iVar3;
          }
          uVar1 = *(undefined8 *)piVar6;
          iVar3 = piVar7[-1];
          *piVar6 = piVar2[-3];
          piVar7[-2] = piVar2[-2];
          piVar7[-1] = piVar2[-1];
          *(undefined8 *)(piVar2 + -3) = uVar1;
          piVar2[-1] = iVar3;
          piVar2 = piVar2 + -3;
          local_20 = piVar5;
          piVar7 = piVar6;
        }
        else {
          uVar1 = *(undefined8 *)piVar4;
          iVar3 = piVar4[2];
          *piVar4 = *piVar5;
          piVar4[1] = local_20[-2];
          piVar4[2] = local_20[-1];
          *(undefined8 *)piVar5 = uVar1;
          local_20[-1] = iVar3;
          piVar4 = piVar4 + 3;
          local_24 = piVar4;
          local_20 = piVar5;
        }
      }
      goto joined_r0x004f6892;
    }
    piVar5 = piVar2;
    if (piVar4[2] <= piVar7[2]) {
      local_24 = piVar4;
      if (piVar4[2] < piVar7[2]) goto LAB_004f68d9;
      piVar5 = piVar2 + 3;
      uVar1 = *(undefined8 *)piVar2;
      iVar3 = piVar2[2];
      *piVar2 = *piVar4;
      piVar2[1] = piVar4[1];
      piVar2[2] = piVar4[2];
      *(undefined8 *)piVar4 = uVar1;
      piVar4[2] = iVar3;
    }
    piVar4 = piVar4 + 3;
    local_24 = piVar4;
    piVar2 = piVar5;
  } while( true );
}


/* FUN_004f70f0 @ 004f70f0  kind=gamemisc  attributed-by=logic:caller-vote  size=61 */

void * __cdecl FUN_004f70f0(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_004f7400(param_3,param_1);
    }
    param_1 = param_1 + 0x50;
    param_3 = (void *)((int)param_3 + 0x140);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004f7130 @ 004f7130  kind=gamemisc  attributed-by=logic:caller-vote  size=138 */

void * __cdecl FUN_004f7130(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_005555f9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 6) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_004daa80(param_3,param_1);
      local_8 = 2;
      FUN_004daa80((void *)((int)param_3 + 0xc),param_1 + 3);
    }
    param_3 = (void *)((int)param_3 + 0x18);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_004f72d0 @ 004f72d0  kind=gamemisc  attributed-by=logic:caller-vote  size=23 */

void __cdecl FUN_004f72d0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* FUN_004f72f0 @ 004f72f0  kind=gamemisc  attributed-by=logic:caller-vote  size=31 */

void __cdecl FUN_004f72f0(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return;
}


/* FUN_004f7350 @ 004f7350  kind=gamemisc  attributed-by=logic:caller-vote  size=32 */

void __thiscall
FUN_004f7350(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return;
}


/* FUN_004f7400 @ 004f7400  kind=gamemisc  attributed-by=logic:caller-vote  size=130 */

undefined4 * __thiscall FUN_004f7400(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  FUN_00413710((void *)((int)this + 4),(undefined1 *)(param_1 + 1));
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined4 *)((int)this + 0x130) = param_1[0x4c];
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  return this;
}


/* FUN_004f7890 @ 004f7890  kind=gamemisc  attributed-by=logic:caller-vote  size=120 */

int * __thiscall FUN_004f7890(void *this,int *param_1)

{
  int *piVar1;
  int *piVar2;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  piVar1 = FUN_004f7c60(this,param_1);
  if (piVar1 != *(int **)this) {
    if ((piVar1[4] <= *piVar2) && ((piVar1[4] < *piVar2 || (piVar1[5] <= piVar2[1])))) {
      return piVar1 + 6;
    }
  }
  local_10 = *piVar2;
  local_c = piVar2[1];
  local_8 = 0;
  piVar2 = FUN_004f3b20(this,&local_10);
  FUN_004f4080(this,&param_1,piVar1,piVar2 + 4,piVar2);
  return param_1 + 6;
}


/* FUN_004f7910 @ 004f7910  kind=gamemisc  attributed-by=logic:caller-vote  size=146 */

int * __thiscall FUN_004f7910(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  piVar3 = FUN_004f7ca0(this,param_1);
  if (piVar3 != *(int **)this) {
    iVar1 = *piVar4;
    iVar2 = piVar3[4];
    if ((iVar2 <= iVar1) &&
       ((iVar2 < iVar1 ||
        ((piVar3[5] <= piVar4[1] &&
         (((iVar2 < iVar1 || (piVar3[5] < piVar4[1])) || (piVar3[6] <= piVar4[2])))))))) {
      return piVar3 + 7;
    }
  }
  local_14 = *piVar4;
  local_10 = piVar4[1];
  local_c = piVar4[2];
  local_8 = 0;
  piVar4 = FUN_004f3b60(this,&local_14);
  FUN_004f42d0(this,&param_1,piVar3,piVar4 + 4,piVar4);
  return param_1 + 7;
}


/* FUN_004f79d0 @ 004f79d0  kind=gamemisc  attributed-by=logic:caller-vote  size=19 */

void __thiscall FUN_004f79d0(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 4;
  return;
}


/* FUN_004f7ab0 @ 004f7ab0  kind=gamemisc  attributed-by=logic:caller-vote  size=67 */

uint FUN_004f7ab0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint in_EAX;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((iVar2 <= iVar1) &&
     ((iVar2 < iVar1 ||
      ((in_EAX = param_1[1], param_2[1] <= (int)in_EAX &&
       (((iVar2 < iVar1 || (in_EAX = param_2[1], (int)in_EAX < param_1[1])) ||
        (in_EAX = param_1[2], param_2[2] <= (int)in_EAX)))))))) {
    return in_EAX & 0xffffff00;
  }
  return CONCAT31((int3)(in_EAX >> 8),1);
}


/* FUN_004f7b60 @ 004f7b60  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_004f7b60(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x20);
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


/* FUN_004f7ba0 @ 004f7ba0  kind=gamemisc  attributed-by=logic:caller-vote  size=55 */

undefined4 * __fastcall FUN_004f7ba0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_004f7ca0 @ 004f7ca0  kind=gamemisc  attributed-by=logic:caller-vote  size=85 */

undefined4 * __thiscall FUN_004f7ca0(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar5 = *(undefined4 **)this;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    iVar1 = *param_1;
    puVar3 = (undefined4 *)puVar5[1];
    do {
      iVar2 = puVar3[4];
      if ((iVar2 < iVar1) ||
         ((iVar2 <= iVar1 &&
          (((int)puVar3[5] < param_1[1] ||
           (((iVar2 <= iVar1 && ((int)puVar3[5] <= param_1[1])) && ((int)puVar3[6] < param_1[2])))))
          ))) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return puVar5;
}


/* FUN_004f80d0 @ 004f80d0  kind=gamemisc  attributed-by=logic:caller-vote  size=162 */

void __thiscall FUN_004f80d0(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x140)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x140;
  if (0xccccccU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x140;
  uVar3 = iVar1 + param_1;
  if (0xcccccc - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_004f7d00(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_004f7d00(this,uVar2);
  return;
}


/* FUN_004fc060 @ 004fc060  kind=gamemisc  attributed-by=logic:caller-vote  size=155 */

undefined4 * __thiscall FUN_004fc060(void *this,undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  void *local_8;
  
  local_8 = this;
  piVar2 = param_2;
  if ((param_2 == (int *)**(int **)this) && (param_3 == *(int **)this)) {
    FUN_004f8520(this);
    *param_1 = **(undefined4 **)this;
    return param_1;
  }
  while (piVar2 != param_3) {
    param_2 = piVar2;
    if (*(char *)((int)piVar2 + 0xd) == '\0') {
      param_2 = (int *)piVar2[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar3 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_2 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      else {
        cVar1 = *(char *)(piVar2[1] + 0xd);
        piVar4 = (int *)piVar2[1];
        piVar3 = piVar2;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar3 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar3 = param_2;
        }
      }
    }
    FUN_0040a1d0(this,&local_8,piVar2);
    piVar2 = param_2;
  }
  *param_1 = piVar2;
  return param_1;
}


/* FUN_004ff1a0 @ 004ff1a0  kind=gamemisc  attributed-by=logic:caller-vote  size=409 */

void __cdecl
FUN_004ff1a0(int param_1,uint *param_2,uint param_3,int param_4,int param_5,int param_6,int param_7)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  int local_28;
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar3 = FUN_00521ed0(param_1,param_4,param_5,param_6,param_3,&local_14,&local_20);
  if ((char)iVar3 == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar7 = FUN_0054a946();
  uVar5 = local_10 + local_1c;
  uVar4 = local_14 + local_20;
  uVar6 = local_c + local_18;
  local_34 = ((int)uVar4 >> 0x1f) << 0x10 | uVar4 >> 0x10;
  local_2c = ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10;
  local_24 = ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10;
  local_30 = uVar5 * 0x10000;
  local_28 = uVar6 * 0x10000;
  local_38 = uVar4 * 0x10000;
  FUN_00402db0(&local_38,(uint)uVar7,(int)(uVar7 >> 0x20));
  *(int *)(param_7 + 8) = local_38;
  *(uint *)(param_7 + 0xc) = local_34;
  *(int *)(param_7 + 0x10) = local_30;
  *(uint *)(param_7 + 0x14) = local_2c;
  *(uint *)(param_7 + 0x1c) = ((int)local_c >> 0x1f) << 0x10 | local_c >> 0x10;
  *(uint *)(param_7 + 0x18) = local_c << 0x10;
  uVar5 = *param_2;
  uVar6 = param_2[1];
  uVar2 = param_2[2];
  puVar1 = (uint *)(param_7 + 8);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar5 * 0x10000;
  *(int *)(param_7 + 0xc) =
       *(int *)(param_7 + 0xc) + (((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10) +
       (uint)CARRY4(uVar4,uVar5 * 0x10000);
  puVar1 = (uint *)(param_7 + 0x10);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar6 * 0x10000;
  *(int *)(param_7 + 0x14) =
       *(int *)(param_7 + 0x14) + (((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10) +
       (uint)CARRY4(uVar4,uVar6 * 0x10000);
  puVar1 = (uint *)(param_7 + 0x18);
  uVar4 = *puVar1;
  *puVar1 = *puVar1 + uVar2 * 0x10000;
  *(int *)(param_7 + 0x1c) =
       *(int *)(param_7 + 0x1c) + (((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) +
       (uint)CARRY4(uVar4,uVar2 * 0x10000);
  local_1c = local_1c - local_10;
  local_20 = local_20 - local_14;
  if (local_1c < local_20) {
    *(undefined4 *)(param_7 + 0x20) = 0;
    iVar3 = local_20;
    local_20 = local_1c;
  }
  else {
    *(undefined4 *)(param_7 + 0x20) = 1;
    iVar3 = local_1c;
  }
  *(float *)(param_7 + 0x2c) = (float)(int)(local_18 - local_c);
  *(float *)(param_7 + 0x28) = (float)local_20;
  *(float *)(param_7 + 0x24) = (float)iVar3;
  *(undefined1 *)(param_7 + 0x30) = 1;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0050d260 @ 0050d260  kind=gamemisc  attributed-by=logic:caller-vote  size=1642 */

void __thiscall FUN_0050d260(void *this,int param_1)

{
  int *piVar1;
  undefined1 *puVar2;
  char cVar3;
  byte bVar4;
  vfunction1 *pvVar5;
  int iVar6;
  int *piVar7;
  CombatBehavior_vftable *pCVar8;
  CombatBehavior_vftable *pCVar9;
  int *piVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  Spawn *pSVar14;
  char *pcVar15;
  SequentialBehavior *pSVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  CombatBehavior *this_00;
  undefined8 uVar24;
  int local_14c [2];
  CombatBehavior_vftable local_144;
  int local_13c;
  CombatBehavior *local_138;
  CombatBehavior *local_134;
  SequentialBehavior *local_130;
  undefined1 local_12c [280];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555a8a;
  local_10 = ExceptionList;
  uVar11 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_13c = param_1;
  local_144.vfunction2 = this;
  local_14 = uVar11;
  if (*(int *)((int)this + 0xa4) != 0) {
    iVar20 = *(int *)(param_1 + 0xa0);
    this_00 = (CombatBehavior *)(param_1 + 0x18);
    local_134 = this_00;
    if (iVar20 < *(int *)(param_1 + 0x1c) - (int)this_00->vftablePtr >> 2) {
      piVar1 = (int *)((int)this + 4);
      do {
        FUN_00530600(piVar1,(int *)&local_130,
                     (uint *)((&this_00->vftablePtr->vfunction1)[iVar20] + 0x48));
        if ((local_130 != (SequentialBehavior *)*piVar1) &&
           (local_130[2].vftablePtr != (SequentialBehavior_vftable *)0x0)) {
          (**(code **)(local_130[2].vftablePtr)->vfunction1)(1,uVar11);
          puVar12 = (undefined4 *)
                    FUN_00426b80(piVar1,local_14c,
                                 (uint *)((&this_00->vftablePtr->vfunction1)[iVar20] + 0x48));
          FUN_004fc060(piVar1,&local_138,(int *)*puVar12,(int *)puVar12[1]);
        }
        pvVar5 = (&this_00->vftablePtr->vfunction1)[iVar20];
        if (pvVar5 != (vfunction1 *)0x0) {
          (*(code *)**(undefined4 **)pvVar5)(1);
        }
        iVar20 = iVar20 + 1;
      } while (iVar20 < *(int *)(param_1 + 0x1c) - (int)this_00->vftablePtr >> 2);
    }
    FUN_0045f080(this_00,*(uint *)(local_13c + 0xa0));
    iVar20 = 0;
    piVar1 = *(int **)(local_144.vfunction2 + 4);
    piVar13 = (int *)*piVar1;
    if (piVar13 != piVar1) {
      iVar23 = 0;
      do {
        iVar6 = piVar13[6];
        if ((iVar6 != 0) && (*(char *)(iVar6 + 0x60) == '\0')) {
          if ((iVar23 == 0) || (iVar19 = *(int *)(iVar6 + 400), iVar19 < iVar23)) {
            iVar19 = *(int *)(iVar6 + 400);
            iVar23 = iVar19;
          }
          if ((iVar20 == 0) || (iVar20 < iVar19)) {
            iVar20 = iVar19;
          }
        }
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          piVar7 = (int *)piVar13[2];
          if (*(char *)((int)piVar7 + 0xd) == '\0') {
            cVar3 = *(char *)(*piVar7 + 0xd);
            piVar13 = piVar7;
            piVar7 = (int *)*piVar7;
            while (cVar3 == '\0') {
              cVar3 = *(char *)(*piVar7 + 0xd);
              piVar13 = piVar7;
              piVar7 = (int *)*piVar7;
            }
          }
          else {
            cVar3 = *(char *)(piVar13[1] + 0xd);
            piVar10 = (int *)piVar13[1];
            piVar7 = piVar13;
            while ((piVar13 = piVar10, cVar3 == '\0' && (piVar7 == (int *)piVar13[2]))) {
              cVar3 = *(char *)(piVar13[1] + 0xd);
              piVar10 = (int *)piVar13[1];
              piVar7 = piVar13;
            }
          }
        }
        this_00 = local_134;
      } while (piVar13 != piVar1);
    }
    uVar11 = (int)((*(int *)(local_13c + 100) >> 0x1f & 7U) + *(int *)(local_13c + 100)) >> 3;
    uVar21 = (int)((*(int *)(local_13c + 0x60) >> 0x1f & 7U) + *(int *)(local_13c + 0x60)) >> 3;
    if ((((-1 < (int)uVar21) && (-1 < (int)uVar11)) && ((int)uVar21 < 0x2000)) &&
       ((int)uVar11 < 0x2000)) {
      local_134 = (CombatBehavior *)((int)(uVar11 * 8 + ((int)(uVar11 * 8) >> 0x1f & 0x3fU)) >> 6);
      iVar20 = (int)(uVar21 * 8 + ((int)(uVar21 * 8) >> 0x1f & 0x3fU)) >> 6;
      if (((-1 < iVar20) && (-1 < (int)local_134)) &&
         ((iVar20 < 0x400 &&
          (((int)local_134 < 0x400 &&
           (*(int *)(local_144.vfunction2 + (int)((int)local_134 + iVar20 * 0x400) * 4 + 0xbc) != 0)
           ))))) {
        uVar21 = uVar21 & 0x80000007;
        if ((int)uVar21 < 0) {
          uVar21 = (uVar21 - 1 | 0xfffffff8) + 1;
        }
        uVar11 = uVar11 & 0x80000007;
        if ((int)uVar11 < 0) {
          uVar11 = (uVar11 - 1 | 0xfffffff8) + 1;
        }
        local_130 = (SequentialBehavior *)
                    ((uVar11 + uVar21 * 8) * 0x68 + 0x14018 +
                    *(int *)(local_144.vfunction2 +
                            (int)((int)local_134 + iVar20 * 0x400) * 4 + 0xbc));
        if ((local_130 != (SequentialBehavior *)0x0) &&
           (local_130[7].vftablePtr != (SequentialBehavior_vftable *)0x0)) {
          iVar20 = 0;
          pSVar16 = local_130 + 8;
          do {
            if (pSVar16->vftablePtr !=
                *(SequentialBehavior_vftable **)((local_13c - (int)local_130) + (int)pSVar16))
            goto LAB_0050d89e;
            iVar20 = iVar20 + 1;
            pSVar16 = (SequentialBehavior *)&pSVar16->SequentialBehavior_data;
          } while (iVar20 < 2);
          pSVar14 = operator_new(0x10f0);
          if (pSVar14 == (Spawn *)0x0) {
            pSVar14 = (Spawn *)0x0;
          }
          else {
            pSVar14 = cube::Spawn::Spawn(pSVar14);
          }
          (pSVar14->Spawn_data).offset_0x24 = 1;
          if (local_130[4].SequentialBehavior_data.offset_0x0 == (undefined4 *)0x1) {
            puVar2 = &(pSVar14->Spawn_data).field_0x76;
            *(ushort *)puVar2 = *(ushort *)puVar2 | 0x2000;
          }
          uVar11 = *(int *)(local_13c + 100) * 0x100 + 0x80;
          uVar21 = *(int *)(local_13c + 0x60) * 0x100 + 0x80;
          uVar22 = ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          *(uint *)&(pSVar14->Spawn_data).field_0xc = uVar21 * 0x10000;
          *(uint *)&(pSVar14->Spawn_data).field_0x10 =
               ((int)uVar21 >> 0x1f) << 0x10 | uVar21 >> 0x10;
          *(uint *)&(pSVar14->Spawn_data).field_0x14 = uVar11 * 0x10000;
          *(uint *)&(pSVar14->Spawn_data).field_0x18 = uVar22;
          *(undefined4 *)&(pSVar14->Spawn_data).field_0x1c = 0;
          *(undefined4 *)&(pSVar14->Spawn_data).field_0x20 = 0;
          iVar20 = local_13c;
          local_144.vfunction1 = (vfunction1 *)pSVar14;
          uVar24 = __alldiv(uVar11 * 0x10000,uVar22,0x10000,0);
          uVar11 = (uint)uVar24;
          uVar24 = __alldiv(*(uint *)&(pSVar14->Spawn_data).field_0xc,
                            *(uint *)&(pSVar14->Spawn_data).field_0x10,0x10000,0);
          iVar20 = FUN_00406100(local_144.vfunction2,(uint)uVar24,uVar11,iVar20);
          uVar11 = *(int *)(iVar20 + 0x1c) + *(int *)(iVar20 + 0x10);
          *(uint *)&(pSVar14->Spawn_data).field_0x1c = uVar11 * 0x10000;
          *(uint *)&(pSVar14->Spawn_data).field_0x20 =
               ((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10;
          (pSVar14->Spawn_data).offset_0x28 = local_130[7].vftablePtr;
          (pSVar14->Spawn_data).offset_0x30 = local_130[7].SequentialBehavior_data.offset_0x0;
          bVar4 = (byte)local_130[7].SequentialBehavior_data.offset_0x4;
          (pSVar14->Spawn_data).offset_0x54 = bVar4;
          uVar11 = bVar4 + 1;
          iVar20 = rand();
          if (iVar20 % 0x14 == 0) {
            uVar11 = bVar4 + 2;
          }
          iVar20 = rand();
          if (iVar20 % 100 == 0) {
            uVar11 = uVar11 + 1;
          }
          iVar20 = -1;
          if (4 < uVar11) {
            uVar11 = 4;
          }
          pcVar15 = (char *)FUN_0052c4e0(local_12c,(short)(pSVar14->Spawn_data).offset_0x30,
                                         (char)uVar11,-1);
          FUN_00427000(&(pSVar14->Spawn_data).offset_0xf68,pcVar15,iVar20);
          uVar11 = (uint)(byte)(pSVar14->Spawn_data).offset_0x54;
          uVar21 = uVar11 + 1;
          iVar20 = rand();
          if (iVar20 % 100 == 0) {
            uVar21 = uVar11 + 2;
          }
          iVar20 = rand();
          if (iVar20 % 1000 == 0) {
            uVar21 = uVar21 + 1;
          }
          iVar20 = -1;
          if (4 < uVar21) {
            uVar21 = 4;
          }
          pcVar15 = (char *)FUN_00528bf0(local_12c,(short)(pSVar14->Spawn_data).offset_0x30,
                                         (char)uVar21,-1);
          FUN_00427000(&(pSVar14->Spawn_data).offset_0xf68,pcVar15,iVar20);
          local_138 = operator_new(0xc);
          local_8 = 0;
          if (local_138 == (CombatBehavior *)0x0) {
            local_130 = (SequentialBehavior *)0x0;
          }
          else {
            local_130 = cube::SequentialBehavior::SequentialBehavior
                                  ((SequentialBehavior *)local_138);
          }
          pSVar16 = local_130;
          local_8 = 0xffffffff;
          local_138 = operator_new(0x14);
          local_8 = 1;
          if (local_138 == (CombatBehavior *)0x0) {
            local_134 = (CombatBehavior *)0x0;
          }
          else {
            local_134 = cube::CombatBehavior::CombatBehavior(local_138,0x41a00000);
          }
          local_138 = (CombatBehavior *)(pSVar16->SequentialBehavior_data).offset_0x0;
          local_8 = 0xffffffff;
          iVar23 = FUN_0052dfb0((undefined4 *)local_138,
                                (undefined4 *)(local_138->CombatBehavior_data).offset_0x0,&local_134
                               );
          iVar20 = (pSVar16->SequentialBehavior_data).offset_0x4;
          if (iVar20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          (pSVar16->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
          (local_138->CombatBehavior_data).offset_0x0 = iVar23;
          **(int **)(iVar23 + 4) = iVar23;
          local_138 = operator_new(8);
          local_8 = 2;
          if (local_138 == (CombatBehavior *)0x0) {
            local_138 = (CombatBehavior *)0x0;
          }
          else {
            local_138 = (CombatBehavior *)
                        cube::RandomWalkBehavior::RandomWalkBehavior
                                  ((RandomWalkBehavior *)local_138);
          }
          local_134 = (CombatBehavior *)(pSVar16->SequentialBehavior_data).offset_0x0;
          local_8 = 0xffffffff;
          iVar23 = FUN_0052dfb0((undefined4 *)local_134,
                                (undefined4 *)(local_134->CombatBehavior_data).offset_0x0,&local_138
                               );
          iVar20 = (pSVar16->SequentialBehavior_data).offset_0x4;
          if (iVar20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          (pSVar16->SequentialBehavior_data).offset_0x4 = iVar20 + 1;
          (local_134->CombatBehavior_data).offset_0x0 = iVar23;
          **(int **)(iVar23 + 4) = iVar23;
          *(SequentialBehavior **)&pSVar14[1].Spawn_data.field_0x120 = local_130;
          FUN_0040a840(&(pSVar14->Spawn_data).offset_0x28,(int)&(pSVar14->Spawn_data).offset_0x70,
                       (undefined4 *)0x0);
          FUN_004fb480((int)pSVar14,0);
          uVar11 = *(uint *)(local_13c + 100);
          uVar21 = *(uint *)(local_13c + 0x60);
          uVar17 = uVar11 * 0x10000 + uVar21;
          iVar20 = (this_00->CombatBehavior_data).offset_0x0 - (int)this_00->vftablePtr;
          uVar22 = iVar20 >> 2;
          uVar18 = uVar17 * 0x100;
          (pSVar14->Spawn_data).offset_0x44 = uVar18 + uVar22;
          (pSVar14->Spawn_data).offset_0x48 =
               (((((int)uVar11 >> 0x1f) << 0x10 | uVar11 >> 0x10) + ((int)uVar21 >> 0x1f) +
                (uint)CARRY4(uVar11 * 0x10000,uVar21)) * 0x100 | uVar17 >> 0x18) + (iVar20 >> 0x1f)
               + (uint)CARRY4(uVar18,uVar22);
          pCVar8 = (CombatBehavior_vftable *)(this_00->CombatBehavior_data).offset_0x0;
          if (&local_144 < pCVar8) {
            pCVar9 = this_00->vftablePtr;
            if (pCVar9 <= &local_144) {
              if (pCVar8 == (CombatBehavior_vftable *)(this_00->CombatBehavior_data).offset_0x4) {
                FUN_00426eb0(this_00,1);
              }
              puVar12 = (undefined4 *)(this_00->CombatBehavior_data).offset_0x0;
              if (puVar12 != (undefined4 *)0x0) {
                *puVar12 = (&this_00->vftablePtr->vfunction1)[(int)&local_144 - (int)pCVar9 >> 2];
              }
              (this_00->CombatBehavior_data).offset_0x0 =
                   (this_00->CombatBehavior_data).offset_0x0 + 4;
              goto LAB_0050d8ac;
            }
          }
          if (pCVar8 == (CombatBehavior_vftable *)(this_00->CombatBehavior_data).offset_0x4) {
            FUN_00426eb0(this_00,1);
          }
          puVar12 = (undefined4 *)(this_00->CombatBehavior_data).offset_0x0;
          if (puVar12 != (undefined4 *)0x0) {
            *puVar12 = pSVar14;
          }
          (this_00->CombatBehavior_data).offset_0x0 = (this_00->CombatBehavior_data).offset_0x0 + 4;
          goto LAB_0050d8ac;
        }
      }
    }
LAB_0050d89e:
    FUN_00509e40(local_144.vfunction2,local_13c,0);
  }
LAB_0050d8ac:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00521ed0 @ 00521ed0  kind=gamemisc  attributed-by=logic:caller-vote  size=952 */

int __cdecl
FUN_00521ed0(int param_1,int param_2,int param_3,int param_4,uint param_5,int *param_6,int *param_7)

{
  char cVar1;
  int iVar2;
  uint3 uVar3;
  undefined2 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  uint uVar8;
  undefined2 local_8;
  undefined1 local_6;
  
  *param_6 = param_2;
  param_6[1] = param_3;
  param_6[2] = param_4;
  *param_7 = param_2;
  param_7[1] = param_3;
  param_7[2] = param_4;
  if (((((param_2 < 0) || (param_3 < 0)) || (param_4 < 0)) ||
      ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))) ||
     (*(int *)(param_1 + 0x4c) <= param_4)) {
    puVar4 = (undefined2 *)&DAT_00583dfc;
  }
  else {
    puVar4 = (undefined2 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + param_2)
              * 3 + *(int *)(param_1 + 0x30));
  }
  local_8 = *puVar4;
  iVar5 = param_2 + -1;
  local_6 = *(undefined1 *)(puVar4 + 1);
  if (((iVar5 < 0) || (param_3 < 0)) ||
     ((param_4 < 0 ||
      (((*(int *)(param_1 + 0x44) <= iVar5 || (*(int *)(param_1 + 0x48) <= param_3)) ||
       (*(int *)(param_1 + 0x4c) <= param_4)))))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) + iVar5) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_3 + -1;
  if (((param_2 < 0) || (iVar5 < 0)) ||
     (((param_4 < 0 ||
       ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= iVar5)))) ||
      (*(int *)(param_1 + 0x4c) <= param_4)))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((*(int *)(param_1 + 0x48) * param_4 + iVar5) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = param_4 + -1;
  if ((((param_2 < 0) || (param_3 < 0)) || (iVar5 < 0)) ||
     (((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)) ||
      (*(int *)(param_1 + 0x4c) <= iVar5)))) {
    puVar6 = &DAT_00583dfc;
  }
  else {
    puVar6 = (undefined1 *)
             (((iVar5 * *(int *)(param_1 + 0x48) + param_3) * *(int *)(param_1 + 0x44) + param_2) *
              3 + *(int *)(param_1 + 0x30));
  }
  puVar4 = &local_8;
  iVar5 = 0;
  iVar7 = (int)puVar6 - (int)puVar4;
  while( true ) {
    cVar1 = ((char *)((int)&local_8 + iVar5))[iVar7];
    uVar3 = (uint3)((uint)puVar4 >> 8);
    puVar4 = (undefined2 *)CONCAT31(uVar3,cVar1);
    if (cVar1 != *(char *)((int)&local_8 + iVar5)) break;
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      return (uint)uVar3 << 8;
    }
  }
  iVar5 = *(int *)(param_1 + 0x44);
  iVar7 = param_2;
  if (param_2 < iVar5) {
    do {
      if (((iVar7 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x48) <= param_3 || (*(int *)(param_1 + 0x4c) <= param_4)))))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * iVar5 + iVar7) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005220d5;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      *param_7 = iVar7;
      iVar5 = *(int *)(param_1 + 0x44);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_005220d5:
  iVar5 = *(int *)(param_1 + 0x48);
  iVar7 = param_3;
  if (param_3 < iVar5) {
    do {
      if ((((param_2 < 0) || (iVar7 < 0)) || (param_4 < 0)) ||
         ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x4c) <= param_4)))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((iVar5 * param_4 + iVar7) * *(int *)(param_1 + 0x44) + param_2) * 3 +
                 *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_00522146;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[1] = iVar7;
      iVar5 = *(int *)(param_1 + 0x48);
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar5);
  }
LAB_00522146:
  if (param_4 < *(int *)(param_1 + 0x4c)) {
    do {
      if (((param_2 < 0) || (param_3 < 0)) ||
         ((param_4 < 0 ||
          ((*(int *)(param_1 + 0x44) <= param_2 || (*(int *)(param_1 + 0x48) <= param_3)))))) {
        puVar6 = &DAT_00583dfc;
      }
      else {
        puVar6 = (undefined1 *)
                 (((*(int *)(param_1 + 0x48) * param_4 + param_3) * *(int *)(param_1 + 0x44) +
                  param_2) * 3 + *(int *)(param_1 + 0x30));
      }
      iVar5 = 0;
      do {
        if (((char *)((int)&local_8 + iVar5))[(int)puVar6 - (int)&local_8] !=
            *(char *)((int)&local_8 + iVar5)) goto LAB_005221b1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 3);
      param_7[2] = param_4;
      param_4 = param_4 + 1;
    } while (param_4 < *(int *)(param_1 + 0x4c));
  }
LAB_005221b1:
  uVar8 = param_5 & 0x80000003;
  if ((int)uVar8 < 0) {
    uVar8 = (uVar8 - 1 | 0xfffffffc) + 1;
  }
  if (uVar8 == 1) {
    iVar7 = *(int *)(param_1 + 0x44);
    iVar2 = *param_6;
    iVar5 = param_6[2];
    *param_6 = param_6[1];
    param_6[1] = (iVar7 - iVar2) + -1;
  }
  else {
    if (uVar8 != 2) {
      if (uVar8 == 3) {
        iVar5 = *param_6;
        *param_6 = (*(int *)(param_1 + 0x48) - param_6[1]) + -1;
        param_6[1] = iVar5;
        param_6[2] = param_6[2];
      }
      goto LAB_00522210;
    }
    iVar7 = *(int *)(param_1 + 0x48);
    iVar5 = param_6[2];
    *param_6 = (*(int *)(param_1 + 0x44) - *param_6) + -1;
    param_6[1] = (iVar7 - param_6[1]) + -1;
  }
  param_6[2] = iVar5;
LAB_00522210:
  if (uVar8 == 1) {
    iVar5 = *(int *)(param_1 + 0x44);
    iVar7 = *param_7;
    *param_7 = param_7[1];
    param_7[1] = (iVar5 - iVar7) + -1;
  }
  else if (uVar8 == 2) {
    iVar5 = *(int *)(param_1 + 0x48);
    *param_7 = (*(int *)(param_1 + 0x44) - *param_7) + -1;
    param_7[1] = (iVar5 - param_7[1]) + -1;
  }
  else if (uVar8 == 3) {
    iVar5 = *param_7;
    *param_7 = (*(int *)(param_1 + 0x48) - param_7[1]) + -1;
    param_7[1] = iVar5;
  }
  iVar5 = *param_6;
  if (*param_7 < iVar5) {
    *param_6 = *param_7;
    *param_7 = iVar5;
  }
  iVar5 = param_6[1];
  if (param_7[1] < iVar5) {
    param_6[1] = param_7[1];
    param_7[1] = iVar5;
  }
  iVar5 = param_6[2];
  iVar7 = param_7[2];
  if (iVar7 < iVar5) {
    param_6[2] = iVar7;
    param_7[2] = iVar5;
  }
  *param_7 = *param_7 + 1;
  param_7[1] = param_7[1] + 1;
  param_7[2] = param_7[2] + 1;
  return CONCAT31((int3)((uint)iVar7 >> 8),1);
}


/* FUN_00522820 @ 00522820  kind=gamemisc  attributed-by=logic:caller-vote  size=20 */

undefined1 __fastcall FUN_00522820(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if (((cVar1 != '\0') && (cVar1 != '\x02')) && (cVar1 != '\x01')) {
    return 0;
  }
  return 1;
}


/* FUN_00528730 @ 00528730  kind=gamemisc  attributed-by=logic:caller-vote  size=115 */

void __thiscall FUN_00528730(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e27b0(this,1);
    }
    puVar3 = *(undefined4 **)((int)this + 4);
    puVar1 = (undefined4 *)(*(int *)this + ((int)param_1 - (int)puVar2 >> 3) * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e27b0(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 8;
  return;
}


/* FUN_0052d820 @ 0052d820  kind=gamemisc  attributed-by=logic:caller-vote  size=25 */

undefined4 __fastcall FUN_0052d820(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  return *(undefined4 *)(param_1 + 0xc);
}


/* FUN_0052d840 @ 0052d840  kind=gamemisc  attributed-by=logic:caller-vote  size=25 */

undefined4 __fastcall FUN_0052d840(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  uVar1 = *(uint *)(param_1 + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(param_1 + 0xc);
  }
  return *(undefined4 *)(param_1 + 0x10);
}


/* FUN_0052de60 @ 0052de60  kind=gamemisc  attributed-by=logic:caller-vote  size=123 */

void __thiscall FUN_0052de60(void *this,int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  
  if (*(char *)((int)this + 8) != '\0') {
    *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
  }
  uVar2 = *(uint *)((int)this + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)((int)this + 0x10) - iVar1) + -1;
  }
  else {
    if (uVar2 == 2) {
      *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
      *param_2 = (*(int *)((int)this + 0x10) - *param_2) + -1;
      return;
    }
    if (uVar2 == 3) {
      iVar1 = *param_1;
      *param_1 = *param_2;
      *param_2 = iVar1;
      *param_1 = (*(int *)((int)this + 0xc) - *param_1) + -1;
      return;
    }
  }
  return;
}


/* FUN_0052ebf0 @ 0052ebf0  kind=gamemisc  attributed-by=logic:caller-vote  size=18 */

void __thiscall FUN_0052ebf0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)this;
  *param_1 = puVar1;
  *(undefined4 *)this = *puVar1;
  return;
}


/* `eh_vector_destructor_iterator' @ 0054adb6  kind=gamemisc  attributed-by=logic:caller-vote  size=83 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall `eh vector destructor iterator'(void *,unsigned int,int,void (__thiscall*)(void
   *))
   
   Library: Visual Studio 2012 Release */

void _eh_vector_destructor_iterator_
               (void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffd0;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffd0);
  }
  FUN_0054ae15();
  return;
}


/* __ArrayUnwind @ 0054ae25  kind=gamemisc  attributed-by=logic:caller-vote  size=50 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */
/* Library Function - Single Match
    void __stdcall __ArrayUnwind(void *,unsigned int,int,void (__thiscall*)(void *))
   
   Library: Visual Studio 2012 Release */

void __ArrayUnwind(void *param_1,uint param_2,int param_3,_func_void_void_ptr *param_4)

{
  void *in_stack_ffffffc8;
  
  while( true ) {
    param_3 = param_3 + -1;
    if (param_3 < 0) break;
    (*param_4)(in_stack_ffffffc8);
  }
  return;
}


