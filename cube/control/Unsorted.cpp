// Unsorted (control) -- cube. 92 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted.h"

/* FUN_00403350 @ 00403350  kind=gamemisc  attributed-by=logic:caller-vote  size=81 */

void FUN_00403350(char *param_1)

{
  char cVar1;
  undefined1 *in_ECX;
  char *pcVar2;
  
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  if (*param_1 == '\0') {
    FUN_0040c280(param_1,0);
    return;
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_0040c280(param_1,(int)pcVar2 - (int)(param_1 + 1));
  return;
}


/* FUN_0040cba0 @ 0040cba0  kind=gamemisc  attributed-by=logic:caller-vote  size=33 */

float10 FUN_0040cba0(float param_1)

{
  return (float10)ABS(param_1);
}


/* FUN_0040ea50 @ 0040ea50  kind=gamemisc  attributed-by=logic:caller-vote  size=28 */

void FUN_0040ea50(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


/* FUN_0040ea70 @ 0040ea70  kind=gamemisc  attributed-by=logic:caller-vote  size=26 */

void FUN_0040ea70(undefined1 param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  return;
}


/* FUN_0040eac0 @ 0040eac0  kind=gamemisc  attributed-by=logic:caller-vote  size=48 */

void FUN_0040eac0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


/* FUN_0040eb60 @ 0040eb60  kind=gamemisc  attributed-by=logic:caller-vote  size=96 */

void FUN_0040eb60(short *param_1)

{
  short sVar1;
  undefined2 *in_ECX;
  short *psVar2;
  
  *(undefined4 *)(in_ECX + 10) = 7;
  *(undefined4 *)(in_ECX + 8) = 0;
  *in_ECX = 0;
  if (*param_1 == 0) {
    FUN_0040f7a0(param_1,0);
    return;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0040f7a0(param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return;
}


/* FUN_0040f570 @ 0040f570  kind=gamemisc  attributed-by=logic:caller-vote  size=214 */

char * FUN_0040f570(void)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  char *pcVar6;
  
  pcVar6 = *(char **)(in_ECX + 0x160);
  if (pcVar6 == (char *)0x0) {
    iVar3 = *(int *)(*(int *)(in_ECX + 0x16c) + 0x8006d0);
    if (*(int *)(iVar3 + 0x11dc) == *(int *)(iVar3 + 0x11e0)) {
      return (char *)0x0;
    }
    iVar4 = *(int *)(in_ECX + 0x164);
    if (iVar4 < 0) {
      return (char *)0x0;
    }
    if ((*(int *)(iVar3 + 0x11e0) - *(int *)(iVar3 + 0x11dc)) / 0xc <= iVar4) {
      return (char *)0x0;
    }
    iVar5 = *(int *)(in_ECX + 0x168);
    if (iVar5 < 0) {
      return (char *)0x0;
    }
    piVar1 = (int *)(*(int *)(iVar3 + 0x11dc) + iVar4 * 0xc);
    if ((piVar1[1] - *piVar1) / 0x11c <= iVar5) {
      return (char *)0x0;
    }
    if (*(int *)(iVar5 * 0x11c + *piVar1) == 0) {
      return (char *)0x0;
    }
    pcVar6 = (char *)(iVar5 * 0x11c + 4 + *piVar1);
  }
  cVar2 = *pcVar6;
  if ((((cVar2 != '\x03') && (cVar2 != '\a')) && (cVar2 != '\x05')) &&
     (((cVar2 != '\x04' && (cVar2 != '\x06')) && ((cVar2 != '\b' && (cVar2 != '\t')))))) {
    return (char *)0x0;
  }
  if ((pcVar6[0xe] & 1U) != 0) {
    pcVar6 = (char *)0x0;
  }
  return pcVar6;
}


/* FUN_0040f7a0 @ 0040f7a0  kind=gamemisc  attributed-by=logic:caller-vote  size=246 */

void FUN_0040f7a0(int *param_1,uint param_2)

{
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  
  if (param_1 != (int *)0x0) {
    uVar1 = in_ECX[5];
    piVar2 = in_ECX;
    if (7 < uVar1) {
      piVar2 = (int *)*in_ECX;
    }
    if (piVar2 <= param_1) {
      piVar2 = in_ECX;
      if (7 < uVar1) {
        piVar2 = (int *)*in_ECX;
      }
      if (param_1 < (int *)((int)piVar2 + in_ECX[4] * 2)) {
        piVar2 = in_ECX;
        if (7 < uVar1) {
          piVar2 = (int *)*in_ECX;
        }
        FUN_0040f680(in_ECX,(int)param_1 - (int)piVar2 >> 1,param_2);
        return;
      }
    }
  }
  if (0x7ffffffe < param_2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((uint)in_ECX[5] < param_2) {
    FUN_0040f170(param_2,in_ECX[4]);
    if (param_2 == 0) {
      return;
    }
  }
  else if (param_2 == 0) {
    in_ECX[4] = 0;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)*in_ECX = 0;
      return;
    }
    *(undefined2 *)in_ECX = 0;
    return;
  }
  piVar2 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    piVar2 = (int *)*in_ECX;
  }
  if (param_2 != 0) {
    memcpy(piVar2,param_1,param_2 * 2);
  }
  in_ECX[4] = param_2;
  if ((uint)in_ECX[5] < 8) {
    *(undefined2 *)((int)in_ECX + param_2 * 2) = 0;
    return;
  }
  *(undefined2 *)(*in_ECX + param_2 * 2) = 0;
  return;
}


/* FUN_00412080 @ 00412080  kind=gamemisc  attributed-by=logic:caller-vote  size=25 */

void FUN_00412080(uint param_1)

{
  int *in_ECX;
  
  *in_ECX = param_1 << 0x10;
  in_ECX[1] = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  return;
}


/* FUN_004120c0 @ 004120c0  kind=gamemisc  attributed-by=logic:caller-vote  size=38 */

undefined4 FUN_004120c0(int param_1)

{
  int in_ECX;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 8) - *(int *)(in_ECX + 4) >> 2)) {
    return *(undefined4 *)(*(int *)(in_ECX + 4) + param_1 * 4);
  }
  return 0;
}


/* FUN_004120f0 @ 004120f0  kind=gamemisc  attributed-by=logic:caller-vote  size=40 */

float10 FUN_004120f0(void)

{
  longlong *in_ECX;
  
  return (float10)((float)*in_ECX * 1.5258789e-05);
}


/* FUN_00412200 @ 00412200  kind=gamemisc  attributed-by=logic:caller-vote  size=28 */

void FUN_00412200(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  uVar2 = *param_2;
  uVar3 = in_ECX[1];
  uVar4 = param_2[1];
  *param_1 = uVar1 - *param_2;
  param_1[1] = (uVar3 - uVar4) - (uint)(uVar1 < uVar2);
  return;
}


/* FUN_00412280 @ 00412280  kind=gamemisc  attributed-by=logic:caller-vote  size=55 */

void FUN_00412280(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = param_2[2] + in_ECX[2];
  return;
}


/* FUN_00412780 @ 00412780  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_00412780(float param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX * param_1;
  in_ECX[1] = in_ECX[1] * param_1;
  in_ECX[2] = in_ECX[2] * param_1;
  return;
}


/* FUN_00412850 @ 00412850  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_00412850(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 + *in_ECX;
  in_ECX[1] = param_1[1] + in_ECX[1];
  in_ECX[2] = param_1[2] + in_ECX[2];
  return;
}


/* FUN_00424830 @ 00424830  kind=gamemisc  attributed-by=logic:caller-vote  size=37 */

float10 FUN_00424830(void)

{
  float *in_ECX;
  
  return (float10)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
}


/* FUN_00424860 @ 00424860  kind=gamemisc  attributed-by=logic:caller-vote  size=50 */

float10 FUN_00424860(void)

{
  float *in_ECX;
  
  return (float10)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1] + in_ECX[2] * in_ECX[2]);
}


/* FUN_004248a0 @ 004248a0  kind=gamemisc  attributed-by=logic:caller-vote  size=231 */

float * FUN_004248a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float *in_ECX;
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = in_ECX[1];
  fVar5 = in_ECX[2];
  fVar12 = 1.0 / (in_ECX[3] * fVar1 + in_ECX[7] * fVar2 + in_ECX[0xb] * fVar3 + in_ECX[0xf]);
  fVar6 = in_ECX[5];
  fVar7 = in_ECX[9];
  fVar8 = in_ECX[6];
  fVar9 = in_ECX[0xd];
  fVar10 = in_ECX[10];
  fVar11 = in_ECX[0xe];
  *param_1 = fVar12 * (in_ECX[4] * fVar2 + fVar1 * *in_ECX + in_ECX[8] * fVar3 + in_ECX[0xc]);
  param_1[1] = fVar12 * (fVar4 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3 + fVar9);
  param_1[2] = fVar12 * (fVar5 * fVar1 + fVar8 * fVar2 + fVar10 * fVar3 + fVar11);
  return param_1;
}


/* FUN_00424990 @ 00424990  kind=gamemisc  attributed-by=logic:caller-vote  size=203 */

void FUN_00424990(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *in_ECX;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  in_ECX[0xc] = in_ECX[4] * fVar2 + *in_ECX * fVar1 + in_ECX[8] * fVar3 + in_ECX[0xc];
  in_ECX[0xd] = in_ECX[1] * fVar1 + in_ECX[5] * fVar2 + in_ECX[9] * fVar3 + in_ECX[0xd];
  in_ECX[0xe] = in_ECX[2] * fVar1 + in_ECX[6] * fVar2 + in_ECX[10] * fVar3 + in_ECX[0xe];
  in_ECX[0xf] = in_ECX[3] * fVar1 + in_ECX[7] * fVar2 + in_ECX[0xb] * fVar3 + in_ECX[0xf];
  return;
}


/* FUN_004252f0 @ 004252f0  kind=gamemisc  attributed-by=logic:caller-vote  size=55 */

void FUN_004252f0(float *param_1,float param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX * param_2;
  param_1[1] = in_ECX[1] * param_2;
  param_1[2] = in_ECX[2] * param_2;
  return;
}


/* FUN_00428920 @ 00428920  kind=gamemisc  attributed-by=logic:caller-vote  size=31 */

void FUN_00428920(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  return;
}


/* FUN_00428db0 @ 00428db0  kind=gamemisc  attributed-by=logic:caller-vote  size=132 */

uint FUN_00428db0(uint param_1,uint param_2,ushort *param_3,uint param_4)

{
  undefined4 *in_ECX;
  uint uVar1;
  ushort *puVar2;
  
  if ((uint)in_ECX[4] < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  uVar1 = in_ECX[4] - param_1;
  if (uVar1 < param_2) {
    param_2 = uVar1;
  }
  if (7 < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  uVar1 = param_4;
  if (param_2 < param_4) {
    uVar1 = param_2;
  }
  if (uVar1 != 0) {
    puVar2 = (ushort *)((int)in_ECX + param_1 * 2);
    do {
      if (*puVar2 != *param_3) {
        uVar1 = (-(uint)(*puVar2 < *param_3) & 0xfffffffe) + 1;
        goto LAB_00428e06;
      }
      puVar2 = puVar2 + 1;
      param_3 = param_3 + 1;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  uVar1 = 0;
LAB_00428e06:
  if (uVar1 == 0) {
    if (param_2 < param_4) {
      return 0xffffffff;
    }
    uVar1 = (uint)(param_2 != param_4);
  }
  return uVar1;
}


/* FUN_0042c460 @ 0042c460  kind=gamemisc  attributed-by=logic:caller-vote  size=64 */

void FUN_0042c460(void)

{
  int in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = FUN_0068d946();
    *(int *)(in_ECX + iVar1 * 8) = (int)uVar2;
    *(int *)(in_ECX + 4 + iVar1 * 8) = (int)((ulonglong)uVar2 >> 0x20);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return;
}


/* FUN_0042c520 @ 0042c520  kind=gamemisc  attributed-by=logic:caller-vote  size=34 */

void FUN_0042c520(void)

{
  undefined1 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  return;
}


/* FUN_0042c5b0 @ 0042c5b0  kind=gamemisc  attributed-by=logic:caller-vote  size=46 */

void FUN_0042c5b0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  return;
}


/* FUN_0042c5e0 @ 0042c5e0  kind=gamemisc  attributed-by=logic:caller-vote  size=149 */

void FUN_0042c5e0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *in_ECX;
  undefined1 *puVar2;
  int iVar3;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  *(undefined4 *)(in_ECX + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  *(undefined2 *)(in_ECX + 0x10) = *(undefined2 *)(param_1 + 0x10);
  puVar2 = param_1 + 0x17;
  puVar1 = in_ECX + 0x15;
  iVar3 = 0x20;
  do {
    puVar1[-1] = puVar2[-3];
    *puVar1 = puVar1[(int)param_1 - (int)in_ECX];
    puVar1[1] = puVar2[-1];
    puVar1[2] = *puVar2;
    *(undefined4 *)(puVar1 + 3) = *(undefined4 *)(puVar2 + 1);
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)(in_ECX + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return;
}


/* FUN_0042c7a0 @ 0042c7a0  kind=gamemisc  attributed-by=logic:caller-vote  size=85 */

uint * FUN_0042c7a0(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[5];
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 - uVar3;
  param_1[1] = (param_1[1] - param_2[1]) - (uint)(uVar2 < uVar3);
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  param_1[3] = (param_1[3] - param_2[3]) - (uint)(uVar2 < uVar3);
  uVar3 = param_2[4];
  puVar1 = param_1 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  param_1[5] = (param_1[5] - param_2[5]) - (uint)(uVar2 < uVar3);
  return param_1;
}


/* FUN_0042c800 @ 0042c800  kind=gamemisc  attributed-by=logic:caller-vote  size=85 */

uint * FUN_0042c800(uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[5];
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 + uVar3;
  param_1[1] = param_1[1] + param_2[1] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[3] = param_1[3] + param_2[3] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_2[4];
  puVar1 = param_1 + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  param_1[5] = param_1[5] + param_2[5] + (uint)CARRY4(uVar2,uVar3);
  return param_1;
}


/* FUN_0042ca00 @ 0042ca00  kind=gamemisc  attributed-by=logic:caller-vote  size=22 */

void FUN_0042ca00(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar2 = *param_1;
  uVar1 = *in_ECX;
  *in_ECX = *in_ECX - uVar2;
  in_ECX[1] = (in_ECX[1] - param_1[1]) - (uint)(uVar1 < uVar2);
  return;
}


/* FUN_0042f470 @ 0042f470  kind=gamemisc  attributed-by=logic:caller-vote  size=38 */

void FUN_0042f470(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  return;
}


/* FUN_0042f640 @ 0042f640  kind=gamemisc  attributed-by=logic:caller-vote  size=213 */

int FUN_0042f640(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (((((int)param_1 < 0) || ((int)param_2 < 0)) || (0x1fffff < (int)param_1)) ||
     (0x1fffff < (int)param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_00434d10((int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5,
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
  param_2 = param_2 & 0x8000001f;
  if ((int)param_2 < 0) {
    param_2 = (param_2 - 1 | 0xffffffe0) + 1;
  }
  param_1 = param_1 & 0x8000001f;
  if ((int)param_1 < 0) {
    param_1 = (param_1 - 1 | 0xffffffe0) + 1;
  }
  return *(int *)(param_3 + 0xac) + (param_2 * 0x20 + param_1) * 8;
}


/* FUN_0042f860 @ 0042f860  kind=gamemisc  attributed-by=logic:caller-vote  size=175 */

void FUN_0042f860(uint param_1,int param_2,uint param_3,int param_4,uint param_5,int param_6,
                 undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  
  if ((param_2 < 1) && (param_2 < 0)) {
    bVar4 = 0xffff < param_1;
    param_1 = param_1 - 0x10000;
    param_2 = param_2 + -1 + (uint)bVar4;
  }
  if ((param_4 < 1) && (param_4 < 0)) {
    bVar4 = 0xffff < param_3;
    param_3 = param_3 - 0x10000;
    param_4 = param_4 + -1 + (uint)bVar4;
  }
  if ((param_6 < 1) && (param_6 < 0)) {
    bVar4 = 0xffff < param_5;
    param_5 = param_5 - 0x10000;
    param_6 = param_6 + -1 + (uint)bVar4;
  }
  uVar1 = __alldiv(param_5,param_6,0x10000,0);
  uVar2 = __alldiv(param_3,param_4,0x10000,0);
  uVar3 = __alldiv(param_1,param_2,0x10000,0);
  FUN_0042f7e0(uVar3,uVar2,uVar1,param_7);
  return;
}


/* FUN_0043abc0 @ 0043abc0  kind=gamemisc  attributed-by=logic:caller-vote  size=37 */

void FUN_0043abc0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  *param_1 = uVar1 + param_2 * -0x10000;
  param_1[1] = (uVar2 - (((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10)) -
               (uint)(uVar1 < param_2 * 0x10000);
  return;
}


/* FUN_0043abf0 @ 0043abf0  kind=gamemisc  attributed-by=logic:caller-vote  size=35 */

void FUN_0043abf0(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  *param_1 = param_2 * 0x10000 + *in_ECX;
  param_1[1] = (((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) + uVar2 +
               (uint)CARRY4(param_2 * 0x10000,uVar1);
  return;
}


/* FUN_0043ac20 @ 0043ac20  kind=gamemisc  attributed-by=logic:caller-vote  size=129 */

uint * FUN_0043ac20(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *in_ECX;
  undefined8 uVar5;
  
  uVar5 = __allmul(*param_2,param_2[1],*in_ECX,in_ECX[1]);
  uVar5 = __alldiv(uVar5,0x10000,0);
  uVar2 = param_2[3];
  uVar3 = param_2[2];
  uVar4 = in_ECX[3];
  *(undefined8 *)param_1 = uVar5;
  uVar5 = __allmul(in_ECX[2],uVar4,uVar3,uVar2);
  uVar5 = __alldiv(uVar5,0x10000,0);
  uVar2 = param_2[5];
  uVar1 = *param_1;
  *param_1 = *param_1 + (uint)uVar5;
  uVar3 = param_2[4];
  uVar4 = in_ECX[5];
  param_1[1] = param_1[1] + (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar5);
  uVar5 = __allmul(in_ECX[4],uVar4,uVar3,uVar2);
  uVar5 = __alldiv(uVar5,0x10000,0);
  uVar1 = *param_1;
  *param_1 = *param_1 + (uint)uVar5;
  param_1[1] = param_1[1] + (int)((ulonglong)uVar5 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar5);
  return param_1;
}


/* FUN_0043b610 @ 0043b610  kind=gamemisc  attributed-by=logic:caller-vote  size=44 */

void FUN_0043b610(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  in_ECX[4] = param_5;
  in_ECX[5] = param_6;
  return;
}


/* FUN_0043e4a0 @ 0043e4a0  kind=gamemisc  attributed-by=logic:caller-vote  size=165 */

undefined4 FUN_0043e4a0(char *param_1)

{
  char cVar1;
  int *piVar2;
  char cVar3;
  int in_ECX;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  cVar1 = *param_1;
  if (((cVar1 == '\x01') || (cVar1 == '\v')) || (cVar1 == '\x14')) {
    iVar4 = 0;
    cVar3 = FUN_0042f4a0(param_1);
    if (cVar3 != '\0') {
      iVar4 = *(int *)(in_ECX + 0x11e8);
    }
    piVar2 = *(int **)(in_ECX + 0x11e0);
    for (piVar6 = *(int **)(in_ECX + 0x11dc); piVar6 != piVar2; piVar6 = piVar6 + 3) {
      piVar5 = (int *)*piVar6;
      if (piVar5 != (int *)piVar6[1]) {
        do {
          cVar3 = FUN_0042f4a0(param_1);
          if (cVar3 != '\0') {
            iVar4 = iVar4 + *piVar5;
          }
          piVar5 = piVar5 + 0x47;
        } while (piVar5 != (int *)piVar6[1]);
      }
    }
    if (((cVar1 == '\x14') && (0 < iVar4)) || (0x31 < iVar4)) {
      return 0;
    }
  }
  return 1;
}


/* FUN_0043f7c0 @ 0043f7c0  kind=gamemisc  attributed-by=logic:caller-vote  size=17600 */

/* WARNING: Removing unreachable block (ram,0x0043f8b5) */
/* WARNING: Removing unreachable block (ram,0x0043f8dc) */
/* WARNING: Removing unreachable block (ram,0x0043f906) */
/* WARNING: Removing unreachable block (ram,0x0043f91b) */
/* WARNING: Removing unreachable block (ram,0x0043f8f1) */
/* WARNING: Removing unreachable block (ram,0x0043f8c7) */
/* WARNING: Removing unreachable block (ram,0x0043f899) */
/* WARNING: Removing unreachable block (ram,0x0043f930) */

void FUN_0043f7c0(uint *param_1,int param_2,undefined4 *param_3)

{
  undefined2 uVar1;
  ushort uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  short sVar8;
  bool bVar9;
  float fVar10;
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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
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
      goto switchD_0043f887_default;
    }
    *param_1 = uVar7;
  }
switchD_0043f887_default:
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
    goto LAB_0043fa27;
  case 2:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4de;
    sVar3 = 0x4e0;
    sVar8 = (short)((int)param_3[3] % 0xf) + 0x4e4;
    goto LAB_0043fa0e;
  case 3:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x4f3;
    sVar3 = 0x4f5;
    sVar8 = (short)((int)param_3[3] % 7) + 0x4f9;
LAB_0043fa0e:
    *(short *)(param_2 + 0x16) = sVar8;
    *(undefined4 *)(param_2 + 0x1a) = 0x101b0;
    sVar3 = (sVar3 < *(short *)(param_2 + 0x14)) + 0x1ae;
    goto LAB_0043fa27;
  case 4:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x4b;
    sVar3 = (short)((int)param_3[3] % 6) + 0x50;
    goto LAB_0043fc25;
  case 5:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x56;
    sVar3 = (short)((int)param_3[3] % 6) + 0x5b;
LAB_0043fc25:
    *(short *)(param_2 + 0x16) = sVar3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x61;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    goto LAB_0043fc40;
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
    goto LAB_0043fd91;
  case 8:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x6a;
LAB_0043fd91:
    sVar3 = 0x6f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 100;
    *(int *)(param_2 + 0x1a) = (int)L"downbutton" + 1;
    goto LAB_0043fa27;
  case 9:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x11a;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x11f;
    *(undefined4 *)(param_2 + 0x1a) = 0x12c01b0;
    goto LAB_0044007b;
  case 10:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 5) + 0x122;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 5) + 0x127;
    *(undefined4 *)(param_2 + 0x1a) = 0x12d01b0;
LAB_0044007b:
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    *(undefined4 *)(param_2 + 0x38) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    goto LAB_0043fc40;
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
    goto LAB_00440137;
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
LAB_00440137:
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
    goto LAB_0043fa27;
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
    goto LAB_0043fa27;
  case 0xf:
    FUN_00428920(param_3 + 4);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 6) + 0x12f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 6) + 0x135;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    *(undefined2 *)(param_2 + 0x18) = 0x147;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x10:
    FUN_00428920(param_3 + 4);
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 7.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x428;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x12:
    *(undefined2 *)(param_2 + 0x14) = 0xb;
    *(undefined4 *)(param_2 + 0x1a) = 0x1b0;
    sVar3 = 0x1ae;
    goto LAB_0043fa27;
  case 0x13:
    *(undefined2 *)(param_2 + 0x14) = 0x163;
    *(undefined4 *)(param_2 + 0x1a) = 0x1620165;
    *(undefined2 *)(param_2 + 0x18) = 0x164;
    uVar1 = 0x166;
    goto LAB_0044244f;
  case 0x14:
    *(undefined2 *)(param_2 + 0x14) = 0x168;
    *(undefined4 *)(param_2 + 0x1a) = 0x167016a;
    *(undefined2 *)(param_2 + 0x18) = 0x169;
    uVar1 = 0x16b;
LAB_0044244f:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
LAB_00442502:
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_c = -1.0;
LAB_00442517:
    local_10 = -8.0;
LAB_0044251e:
    local_14 = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_00443c6a;
  case 0x15:
    *(undefined2 *)(param_2 + 0x14) = 0x16d;
    *(undefined4 *)(param_2 + 0x1a) = 0x16c016f;
    *(undefined2 *)(param_2 + 0x18) = 0x16e;
    *(undefined2 *)(param_2 + 0x1e) = 0x170;
    *(undefined4 *)(param_2 + 0x24) = 0x3f333333;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 2.5;
    local_c = -4.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    local_14 = 2.8;
    local_10 = 2.8;
    local_c = 4.0;
    goto LAB_00443c61;
  case 0x16:
    *(undefined2 *)(param_2 + 0x14) = 0x172;
    *(undefined4 *)(param_2 + 0x1a) = 0x1710174;
    uVar1 = 0x173;
    goto LAB_00442693;
  case 0x17:
    *(undefined2 *)(param_2 + 0x14) = 0x176;
    *(undefined4 *)(param_2 + 0x1a) = 0x1750178;
    uVar1 = 0x177;
LAB_00442693:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -9.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    goto LAB_00443c6a;
  case 0x18:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x874;
    local_10 = 0.0;
    local_c = -1.5;
    goto LAB_00440a12;
  case 0x19:
    *(undefined2 *)(param_2 + 0x14) = 0x872;
    *(undefined4 *)(param_2 + 0x1a) = 0x8710873;
    *(undefined2 *)(param_2 + 0x18) = 0x873;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 0.0;
    local_10 = 13.0;
    local_c = 0.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -3.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -3.5;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_c = 4.5;
    goto LAB_00442517;
  case 0x1a:
    *(undefined2 *)(param_2 + 0x14) = 0x17a;
    *(undefined4 *)(param_2 + 0x1a) = 0x179017c;
    *(undefined2 *)(param_2 + 0x18) = 0x17b;
    *(undefined2 *)(param_2 + 0x1e) = 0x17d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -10.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 1.04;
    local_10 = 1.04;
    local_c = 2.34;
    goto LAB_00443c61;
  case 0x1b:
    *(undefined2 *)(param_2 + 0x14) = 0x17f;
    *(undefined4 *)(param_2 + 0x1a) = 0x17e0181;
    *(undefined2 *)(param_2 + 0x18) = 0x180;
    *(undefined2 *)(param_2 + 0x1e) = 0x182;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f866666;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2f00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.7;
    goto LAB_00443c61;
  case 0x1c:
    *(undefined2 *)(param_2 + 0x14) = 0x184;
    *(undefined4 *)(param_2 + 0x1a) = 0x1830186;
    *(undefined2 *)(param_2 + 0x18) = 0x185;
    *(undefined2 *)(param_2 + 0x1e) = 0x187;
    local_14 = 0.0;
    local_10 = 11.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -3.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -7.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -7.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -5.5;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 1.52;
    local_10 = 1.52;
    local_c = 3.23;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_00443c6a;
  case 0x1d:
    *(undefined2 *)(param_2 + 0x14) = 0x189;
    *(undefined4 *)(param_2 + 0x1a) = 0x188018b;
    *(undefined2 *)(param_2 + 0x18) = 0x18a;
    *(undefined2 *)(param_2 + 0x1e) = 0x18c;
    *(undefined4 *)(param_2 + 0x24) = 0x3f19999a;
    local_14 = 0.0;
    local_10 = 14.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 5.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -6.0;
    local_c = -9.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f8ccccd;
    local_10 = -11.0;
    local_c = -4.0;
    goto LAB_0044251e;
  case 0x1e:
    *(undefined2 *)(param_2 + 0x14) = 0x18e;
    *(undefined4 *)(param_2 + 0x1a) = 0x18d0190;
    *(undefined2 *)(param_2 + 0x18) = 399;
    uVar1 = 0x191;
    goto LAB_00442c5a;
  case 0x1f:
    *(undefined2 *)(param_2 + 0x14) = 0x193;
    *(undefined4 *)(param_2 + 0x1a) = 0x1920195;
    *(undefined2 *)(param_2 + 0x18) = 0x194;
    uVar1 = 0x196;
    goto LAB_00442c5a;
  case 0x20:
    *(undefined2 *)(param_2 + 0x14) = 0x198;
    *(undefined4 *)(param_2 + 0x1a) = 0x197019a;
    *(undefined2 *)(param_2 + 0x18) = 0x199;
    uVar1 = 0x19b;
LAB_00442c5a:
    *(undefined2 *)(param_2 + 0x1e) = uVar1;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 0.0;
    local_10 = 9.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.1;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc1f00000;
    goto LAB_00443c6a;
  case 0x21:
    *(undefined2 *)(param_2 + 0x14) = 0x19d;
    *(undefined4 *)(param_2 + 0x1a) = 0x19c019e;
    *(undefined2 *)(param_2 + 0x18) = 0x19e;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00411e30(&local_14);
    local_10 = 9.0;
    goto LAB_00442db8;
  case 0x22:
    *(undefined2 *)(param_2 + 0x14) = 0x1a0;
    *(undefined4 *)(param_2 + 0x1a) = 0x19f01a1;
    *(undefined2 *)(param_2 + 0x18) = 0x1a1;
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 1.2;
    FUN_00411e30(&local_14);
    local_10 = 4.0;
LAB_00442db8:
    local_14 = 0.0;
    local_c = 1.9;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -4.2;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -4.2;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f59999a;
    goto LAB_00442502;
  case 0x23:
    *(undefined4 *)(param_2 + 0x1a) = 0x9a009b;
    goto LAB_0044168d;
  case 0x24:
    *(undefined4 *)(param_2 + 0x1a) = 0x9c009d;
LAB_0044168d:
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.1;
LAB_00440ef2:
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x30;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x25:
    uVar1 = 0x95f;
    goto LAB_004419f1;
  case 0x26:
    uVar1 = 0x960;
    goto LAB_004419f1;
  case 0x27:
    uVar1 = 0x961;
    goto LAB_004419f1;
  case 0x28:
    uVar1 = 0x962;
LAB_004419f1:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
LAB_00441a32:
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x29;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x29:
    *(undefined4 *)(param_2 + 0x14) = 0x9640963;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x429;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x2a:
    *(undefined2 *)(param_2 + 0x14) = 0x965;
    *(undefined2 *)(param_2 + 0x18) = 0x966;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 1.4;
    local_10 = 1.4;
    local_c = 2.5;
    goto LAB_00440900;
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
    goto LAB_0043fa27;
  case 0x2d:
    *(undefined2 *)(param_2 + 0x14) = 5;
    *(undefined4 *)(param_2 + 0x1a) = 0x601b0;
    *(undefined2 *)(param_2 + 0x18) = 0x1ae;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f4ccccd;
    break;
  case 0x2e:
    iVar4 = rand();
    iVar5 = rand();
    iVar6 = rand();
    local_2c = CONCAT11((char)iVar5,(char)iVar6);
    local_2a = (char)iVar4;
    FUN_00428920(&local_2c);
    *(undefined2 *)(param_2 + 0x14) = 0x3c;
    *(undefined4 *)(param_2 + 0x1a) = 0x3d003f;
    *(undefined2 *)(param_2 + 0x18) = 0x3e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 5.3999996;
    FUN_00411e30(&local_14);
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
    FUN_00411e30(&local_14);
    local_14 = 7.5;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -6.5;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 3.6000001;
    FUN_00411e30(&local_14);
    break;
  case 0x30:
    *(undefined2 *)(param_2 + 0x14) = 0xc;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000f;
    *(undefined2 *)(param_2 + 0x18) = 0xe;
    goto LAB_0043fe82;
  case 0x31:
    *(undefined2 *)(param_2 + 0x14) = 0x10;
    *(undefined4 *)(param_2 + 0x1a) = 0x110013;
    *(undefined2 *)(param_2 + 0x18) = 0x12;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x3fc00000;
    *(undefined4 *)(param_2 + 0x78) = 0x40800000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_0043fe82:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar10 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0043feaf:
    *(float *)(param_2 + 0x10) = fVar10;
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
    goto LAB_00442fa2;
  case 0x36:
    *(undefined2 *)(param_2 + 0x14) = 0xeb;
    *(undefined4 *)(param_2 + 0x1a) = 0xea00ec;
    *(undefined2 *)(param_2 + 0x22) = 0xee;
    *(undefined2 *)(param_2 + 0x18) = 0xed;
LAB_00442fa2:
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    local_10 = -6.0;
    local_c = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    goto LAB_00440ef2;
  case 0x37:
    *(undefined2 *)(param_2 + 0x14) = 0xff;
    *(undefined4 *)(param_2 + 0x1a) = 0xfe0100;
    uVar1 = 0x101;
    goto LAB_00443207;
  case 0x38:
    *(undefined2 *)(param_2 + 0x14) = 0x103;
    *(undefined4 *)(param_2 + 0x1a) = 0x1020104;
    *(undefined2 *)(param_2 + 0x22) = 0x105;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fa66666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    local_14 = 3.0;
    local_10 = -2.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.65;
    goto LAB_00440ef2;
  case 0x39:
    *(undefined2 *)(param_2 + 0x14) = 0x107;
    *(undefined4 *)(param_2 + 0x1a) = 0x1060108;
    *(undefined2 *)(param_2 + 0x22) = 0x109;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_10 = 5.0;
    local_c = 8.0;
    goto LAB_0044323d;
  case 0x3a:
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    bVar9 = uVar7 == 0;
    if ((int)uVar7 < 0) {
      bVar9 = (uVar7 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (bVar9) {
      *(undefined2 *)(param_2 + 0x14) = 0x10f;
      *(undefined4 *)(param_2 + 0x1a) = 0x10e0110;
      uVar1 = 0x111;
    }
    else {
      *(undefined2 *)(param_2 + 0x14) = 0x10b;
      *(undefined4 *)(param_2 + 0x1a) = 0x10a010c;
      uVar1 = 0x10d;
    }
LAB_00443207:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_10 = 3.0;
    local_c = 6.0;
LAB_0044323d:
    local_14 = 0.0;
LAB_00443247:
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    goto LAB_00440ef2;
  case 0x3b:
    *(undefined2 *)(param_2 + 0x14) = 0x113;
    *(undefined4 *)(param_2 + 0x1a) = 0x1120114;
    *(undefined2 *)(param_2 + 0x22) = 0x115;
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -10.0;
    goto LAB_00443247;
  case 0x3c:
    *(undefined2 *)(param_2 + 0x14) = 0xf0;
    *(undefined4 *)(param_2 + 0x1a) = 0xef00f1;
    uVar1 = 0xf2;
    goto LAB_0044303c;
  case 0x3d:
    *(undefined2 *)(param_2 + 0x14) = 0xf7;
    *(undefined4 *)(param_2 + 0x1a) = 0xf600f8;
    *(undefined2 *)(param_2 + 0x22) = 0xf9;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    local_10 = -5.0;
    local_c = -1.0;
    goto LAB_00443072;
  case 0x3e:
    *(undefined2 *)(param_2 + 0x14) = 0xfb;
    *(undefined4 *)(param_2 + 0x1a) = 0xfa00fc;
    uVar1 = 0xfd;
LAB_0044303c:
    *(undefined2 *)(param_2 + 0x22) = uVar1;
    local_14 = 3.0;
    local_10 = -1.0;
    local_c = -7.0;
    FUN_00411e30(&local_14);
    local_10 = -6.0;
    local_c = 1.0;
LAB_00443072:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x58) = 0x41f00000;
    local_14 = 1.0;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.0;
    goto LAB_00440ef2;
  case 0x3f:
    *(undefined4 *)(param_2 + 0x1a) = 0x14d014e;
    goto LAB_0044340d;
  case 0x40:
    *(undefined4 *)(param_2 + 0x1a) = 0x14f0150;
    goto LAB_0044340d;
  case 0x41:
    *(undefined4 *)(param_2 + 0x1a) = 0x1510152;
    goto LAB_0044340d;
  case 0x42:
    *(undefined4 *)(param_2 + 0x1a) = 0x1530154;
LAB_0044340d:
    *(undefined2 *)(param_2 + 0x18) = 0xffff;
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -1.5;
    FUN_00411e30(&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_00440909;
  case 0x43:
    *(undefined4 *)(param_2 + 0x1a) = 0x1550156;
    *(undefined2 *)(param_2 + 0x14) = 0x157;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 3.75;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x30) = 0x3fc00000;
    goto LAB_00440909;
  case 0x44:
    *(undefined2 *)(param_2 + 0x14) = 0x73;
    *(char **)(param_2 + 0x1a) = "p";
    *(undefined2 *)(param_2 + 0x18) = 0x75;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    break;
  case 0x45:
    *(undefined2 *)(param_2 + 0x14) = 0x77;
    *(undefined4 *)(param_2 + 0x1a) = 0x760078;
    *(undefined2 *)(param_2 + 0x18) = 0x79;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -10.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3f333333;
    goto LAB_00440d96;
  case 0x46:
    *(undefined **)(param_2 + 0x1a) = &DAT_007a007b;
    *(undefined2 *)(param_2 + 0x18) = 0x7c;
    local_14 = 6.0;
    local_10 = 3.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 2.0;
    local_c = -8.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 7.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
LAB_00440d96:
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    FUN_00411e30(&local_14);
    local_14 = -45.0;
    local_10 = 45.0;
    local_c = -45.0;
    goto LAB_00440900;
  case 0x47:
    *(undefined4 *)(param_2 + 0x1a) = 0x7d007e;
    goto LAB_00440e74;
  case 0x48:
    *(undefined4 *)(param_2 + 0x1a) = 0x7f0080;
LAB_00440e74:
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -12.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_c = 1.0;
LAB_00440ec3:
    local_10 = 0.0;
    local_14 = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 1.2;
    local_10 = 1.2;
    local_c = 2.6999998;
    goto LAB_00440ef2;
  case 0x49:
    *(undefined4 *)(param_2 + 0x1a) = 0x810082;
    local_14 = 3.0;
    local_10 = 0.0;
    local_c = -11.0;
    FUN_00411e30(&local_14);
    local_c = -12.0;
    goto LAB_00440ec3;
  case 0x4a:
    *(undefined2 *)(param_2 + 0x14) = 0x1a3;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a201a4;
    *(undefined2 *)(param_2 + 0x18) = 0x1a4;
    *(undefined2 *)(param_2 + 0x1e) = 0x1a5;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 8.5;
    local_c = 1.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.6;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 1.0;
    local_c = -3.7;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = -3.0;
    local_c = -3.7;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f3ae148;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f800000;
    local_14 = 0.0;
    local_10 = -8.5;
    local_c = -2.9;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x60) = 0xc2a00000;
    goto LAB_00443c6a;
  case 0x4b:
    *(undefined2 *)(param_2 + 0x14) = 0x1a7;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a601a8;
    *(undefined2 *)(param_2 + 0x18) = 0x1a8;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 17.5;
    local_c = 2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -9.0;
    local_c = 2.6;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 9.0;
    local_c = -1.7;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = -9.0;
    local_c = -1.7;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f8ccccd;
    *(undefined4 *)(param_2 + 0x30) = 0x3fcccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fcccccd;
    goto LAB_00443c6a;
  case 0x4c:
    *(undefined2 *)(param_2 + 0x14) = 0xa0;
    *(undefined4 *)(param_2 + 0x1a) = 0xa200a1;
    uVar1 = 0xa3;
    goto LAB_00440934;
  case 0x4d:
    *(undefined2 *)(param_2 + 0x14) = 0xa4;
    *(undefined4 *)(param_2 + 0x1a) = 0xa600a5;
    uVar1 = 0xa7;
    goto LAB_00440934;
  case 0x4e:
    *(undefined2 *)(param_2 + 0x14) = 0xa8;
    *(undefined4 *)(param_2 + 0x1a) = 0xaa00a9;
    uVar1 = 0xab;
    goto LAB_00440934;
  case 0x4f:
    *(undefined2 *)(param_2 + 0x14) = 0xac;
    *(undefined4 *)(param_2 + 0x1a) = 0xae00ad;
    uVar1 = 0xaf;
LAB_00440934:
    *(undefined2 *)(param_2 + 0x18) = uVar1;
    local_14 = 6.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
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
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -10.8;
    FUN_00411e30(&local_14);
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * 1.5;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * 1.5;
    fVar10 = *(float *)(param_2 + 0x10) * 1.5;
    goto LAB_0043feaf;
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 4.5;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -7.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.2;
    local_10 = 3.2;
    local_c = 5.8;
    FUN_00411e30(&local_14);
    break;
  case 0x53:
    iVar4 = rand();
    sVar3 = 0xb4;
    sVar8 = (short)(iVar4 % 3) + 0xb4;
    goto LAB_004409dd;
  case 0x54:
    iVar4 = rand();
    sVar3 = 0xb7;
    sVar8 = (short)(iVar4 % 3) + 0xb7;
LAB_004409dd:
    *(short *)(param_2 + 0x14) = sVar8;
    *(undefined4 *)(param_2 + 0x1a) = 0xbb00ba;
    local_10 = 0.8;
    local_c = 6.0;
    *(ushort *)(param_2 + 0x18) = (*(short *)(param_2 + 0x14) != sVar3) + 0xbc;
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_00440a12:
    local_14 = 0.0;
    FUN_00411e30(&local_14);
    break;
  case 0x55:
    *(undefined4 *)(param_2 + 0x14) = 0xc700c8;
    *(undefined4 *)(param_2 + 0x1a) = 0xca00c9;
    *(undefined2 *)(param_2 + 0x18) = 0xcb;
    local_14 = 8.0;
    local_10 = 5.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.0;
    FUN_00411e30(&local_14);
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
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    goto LAB_0043fc40;
  case 0x58:
    *(undefined2 *)(param_2 + 0x14) = 0x88;
    *(undefined4 *)(param_2 + 0x1a) = 0x870089;
    *(undefined2 *)(param_2 + 0x18) = 0x8a;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    goto LAB_004412bc;
  case 0x59:
    *(undefined2 *)(param_2 + 0x14) = 0x8c;
    *(undefined4 *)(param_2 + 0x1a) = 0x8b008d;
    *(undefined2 *)(param_2 + 0x18) = 0x8e;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_004412bc:
    fVar10 = 1.1;
    goto LAB_004412c4;
  case 0x5a:
    *(undefined2 *)(param_2 + 0x14) = 0x90;
    *(undefined4 *)(param_2 + 0x1a) = 0x8f0091;
    *(undefined2 *)(param_2 + 0x18) = 0x92;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    fVar10 = 0.7;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    goto LAB_004412c4;
  case 0x5b:
    *(undefined2 *)(param_2 + 0x14) = 0x94;
    *(undefined4 *)(param_2 + 0x1a) = 0x930095;
    *(undefined2 *)(param_2 + 0x18) = 0x96;
    local_14 = 7.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -5.0;
    local_c = -5.0;
    FUN_00411e30(&local_14);
    fVar10 = 0.9;
    *(undefined4 *)(param_2 + 0x50) = 0xc1f00000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
LAB_004412c4:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) * fVar10;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) * fVar10;
    fVar10 = *(float *)(param_2 + 0x10) * fVar10;
    goto LAB_0043fc6d;
  case 0x5c:
    *(undefined2 *)(param_2 + 0x14) = 0x97;
    *(undefined2 *)(param_2 + 0x22) = 0x99;
    *(undefined2 *)(param_2 + 0x1a) = 0x98;
    local_14 = 9.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 0.0;
    local_c = -11.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x48) = 0xc1200000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42a00000;
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2a;
    goto LAB_0043fc40;
  case 0x5d:
    *(undefined2 *)(param_2 + 0x14) = 0xcd;
    *(undefined4 *)(param_2 + 0x1a) = 0xcc00ce;
    *(undefined2 *)(param_2 + 0x18) = 0xcf;
    local_14 = 8.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 5.0;
    local_10 = 1.0;
    local_c = -8.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -6.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x2c) = 0x3f666666;
    local_14 = -60.0;
    local_10 = -45.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
LAB_0043fc40:
    *(float *)(param_2 + 8) = *(float *)(param_2 + 8) / 1.2;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0xc) / 1.2;
    fVar10 = *(float *)(param_2 + 0x10) / 1.2;
LAB_0043fc6d:
    *(float *)(param_2 + 0x10) = fVar10;
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    goto LAB_00440900;
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -3.25;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -5.0;
    local_c = -3.25;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    local_14 = 0.0;
    local_10 = -7.0;
    local_c = -4.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x3c) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_00443c6a;
  case 99:
    *(undefined2 *)(param_2 + 0x14) = 0x15d;
    *(undefined4 *)(param_2 + 0x1a) = 0x15c015e;
    *(undefined2 *)(param_2 + 0x18) = 0x15e;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 12.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -5.75;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -5.75;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f733333;
    goto LAB_00443c6a;
  case 100:
    *(undefined2 *)(param_2 + 0x14) = 0x160;
    *(undefined4 *)(param_2 + 0x1a) = 0x15f0161;
    *(undefined2 *)(param_2 + 0x18) = 0x161;
    *(undefined4 *)(param_2 + 0x24) = 0x3f266666;
    local_14 = 1.8;
    local_10 = 1.8;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 10.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -6.75;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = -6.75;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    goto LAB_00443c6a;
  case 0x65:
    *(undefined2 *)(param_2 + 0x14) = 0x1aa;
    *(undefined4 *)(param_2 + 0x1a) = 0x1a901ab;
    *(undefined2 *)(param_2 + 0x18) = 0x1ab;
    *(undefined2 *)(param_2 + 0x1e) = 0x1ad;
    *(undefined4 *)(param_2 + 0x24) = 0x3f028f5c;
    local_14 = 0.0;
    local_10 = 12.5;
    local_c = 0.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = -2.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 3.0;
    local_10 = -4.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 0.0;
    local_10 = -16.0;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x33;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x66:
    *(undefined2 *)(param_2 + 0x14) = 0xd8;
    *(undefined2 *)(param_2 + 0x1a) = 0xd9;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    goto LAB_00441f6c;
  case 0x67:
    *(undefined2 *)(param_2 + 0x14) = 0xda;
    uVar1 = 0xdb;
    goto LAB_00441f97;
  case 0x68:
    *(undefined2 *)(param_2 + 0x14) = 0xdc;
    *(undefined2 *)(param_2 + 0x1a) = 0xdd;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    goto LAB_00441a32;
  case 0x69:
    *(undefined2 *)(param_2 + 0x14) = 0xde;
    uVar1 = 0xdf;
LAB_00441f97:
    *(undefined2 *)(param_2 + 0x1a) = uVar1;
    local_14 = 3.5;
    local_10 = 1.0;
    local_c = -2.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f666666;
LAB_00441f6c:
    local_14 = 1.6;
    local_10 = 1.6;
    local_c = 1.6;
    goto LAB_00443c61;
  case 0x6a:
    *(undefined2 *)(param_2 + 0x14) = 0xd1;
    *(undefined4 *)(param_2 + 0x1a) = 0xd000d2;
    *(undefined2 *)(param_2 + 0x18) = 0xd3;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 1.2;
    goto LAB_00440900;
  case 0x6b:
    *(undefined2 *)(param_2 + 0x14) = 0xd5;
    *(undefined4 *)(param_2 + 0x1a) = 0xd400d6;
    *(undefined2 *)(param_2 + 0x18) = 0xd7;
    local_14 = 10.0;
    local_10 = 0.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 1.0;
    local_c = -5.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 5.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 90.0;
    local_10 = 30.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3f400000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f99999a;
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 7.2000003;
LAB_00440900:
    FUN_00411e30(&local_14);
LAB_00440909:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x28;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x6c:
    *(undefined2 *)(param_2 + 0x14) = 0x18;
    *(undefined4 *)(param_2 + 0x1a) = 0x19001c;
    *(undefined2 *)(param_2 + 0x18) = 0x1b;
    uVar1 = 0x1a;
    goto LAB_004401fc;
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
    goto LAB_0044031e;
  case 0x70:
    *(undefined2 *)(param_2 + 0x14) = 0x2d;
    *(undefined4 *)(param_2 + 0x1a) = 0x2e0031;
    *(undefined2 *)(param_2 + 0x18) = 0x30;
    uVar1 = 0x2f;
    goto LAB_00440378;
  case 0x71:
    *(undefined2 *)(param_2 + 0x14) = 0x32;
    *(undefined4 *)(param_2 + 0x1a) = 0x330036;
    *(undefined2 *)(param_2 + 0x18) = 0x35;
    uVar1 = 0x34;
LAB_00440378:
    *(undefined2 *)(param_2 + 0x20) = uVar1;
    *(undefined4 *)(param_2 + 0x40) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x24) = 0x3f1c28f6;
LAB_0044031e:
    *(undefined4 *)(param_2 + 0x30) = 0x3f4147ae;
    *(undefined4 *)(param_2 + 0x34) = 0x3f666666;
    *(undefined4 *)(param_2 + 0x7c) = 0x41000000;
    *(undefined4 *)(param_2 + 0x80) = 0x40400000;
    *(undefined4 *)(param_2 + 0x84) = 0;
    *(undefined4 *)(param_2 + 0x70) = 0;
    *(undefined4 *)(param_2 + 0x74) = 0x40800000;
    goto LAB_00440245;
  case 0x72:
    *(undefined2 *)(param_2 + 0x14) = 0x37;
    *(undefined4 *)(param_2 + 0x1a) = 0x38003b;
    *(undefined2 *)(param_2 + 0x18) = 0x3a;
    uVar1 = 0x39;
LAB_004401fc:
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
LAB_00440245:
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
    FUN_00411e30(&local_14);
    local_14 = 4.8;
    local_10 = 4.8;
    local_c = 10.799999;
    FUN_00411e30(&local_14);
    break;
  case 0x74:
    iVar4 = rand();
    local_14 = ((float)iVar4 * 3.0) / 32767.0 + 7.0;
    local_c = local_14 * 1.12;
    local_10 = local_14;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x14) = 0x48;
    *(undefined4 *)(param_2 + 0x1a) = 0x49004a;
    *(undefined2 *)(param_2 + 0x18) = 0x4a;
    *(undefined4 *)(param_2 + 0x28) = 0x3f333333;
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    local_14 = 0.0;
    local_10 = 8.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00411e30(&local_14);
    local_14 = 2.9;
    goto LAB_00443c4d;
  case 0x75:
    *(undefined2 *)(param_2 + 0x14) = 0x117;
    *(undefined2 *)(param_2 + 0x1c) = 0x116;
    *(undefined2 *)(param_2 + 0x18) = 0x118;
    *(undefined2 *)(param_2 + 0x1a) = 0xffff;
    *(undefined2 *)(param_2 + 0x20) = 0x119;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 3.0;
    FUN_00411e30(&local_14);
    local_14 = 6.0;
    local_10 = 5.0;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 1.0;
    local_c = 11.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x24) = 0x3ecccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f400000;
    local_14 = 0.0;
    local_10 = -90.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 6.4;
    local_10 = 6.4;
    local_c = 14.4;
    FUN_00411e30(&local_14);
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 4.0;
    local_c = 8.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f4ccccd;
    *(undefined4 *)(param_2 + 0x2c) = 0x3fc00000;
    local_14 = 3.0;
    local_10 = 1.0;
    local_c = -9.5;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_14 = 4.0;
    local_10 = 4.0;
    local_c = 10.0;
    FUN_00411e30(&local_14);
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x2c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x77:
    local_14 = 9.0;
    local_10 = 9.0;
    local_c = 10.08;
    FUN_00411e30(&local_14);
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
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = -4.0;
    local_c = -3.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x30) = 0x3f000000;
    *(undefined4 *)(param_2 + 0x2c) = 0x3f000000;
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
    local_10 = 3.0;
    local_c = -4.1;
    FUN_00411e30(&local_14);
    iVar4 = rand();
    local_14 = (float)iVar4 / 32767.0 + 3.0;
LAB_00443c4d:
    local_c = -4.1;
    local_10 = -3.0;
LAB_00443c61:
    FUN_00411e30(&local_14);
LAB_00443c6a:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x31;
switchD_0043f962_default:
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x78:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x827;
    goto LAB_00443581;
  case 0x79:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x828;
    goto LAB_00443581;
  case 0x7a:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x82a;
    goto LAB_00443581;
  case 0x7b:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.5;
    FUN_00411e30(&local_14);
    sVar3 = 0x86f;
    goto LAB_00443581;
  case 0x7c:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000001;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffe) + 1;
    }
    sVar3 = 0x82e - (ushort)(uVar7 != 0);
    local_c = 2.0;
    goto LAB_00443588;
  case 0x7d:
    local_14 = 0.5;
    local_10 = 0.5;
    local_c = 1.7;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x829;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3fc00000;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x7e:
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x82f;
    local_c = 2.0;
    goto LAB_00443588;
  case 0x7f:
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x830;
    goto LAB_00443581;
  case 0x80:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    sVar3 = 0x906;
    goto LAB_00443581;
  case 0x81:
    *(undefined2 *)(param_2 + 0x1c) = 0x832;
    local_c = -4.0;
    goto LAB_0044358c;
  case 0x82:
    *(undefined2 *)(param_2 + 0x1c) = 0x833;
    local_14 = 3.0;
    local_10 = 3.0;
    local_c = 12.0;
    FUN_00411e30(&local_14);
    local_c = -4.0;
    goto LAB_0044358c;
  case 0x83:
    uVar1 = 0x834;
    goto LAB_00443898;
  case 0x84:
    uVar1 = 0x835;
    goto LAB_00443898;
  case 0x85:
    uVar1 = 0x836;
    goto LAB_00443898;
  case 0x86:
    uVar1 = 0x837;
    goto LAB_00443898;
  case 0x87:
    uVar1 = 0x838;
    goto LAB_00443898;
  case 0x88:
    uVar1 = 0x839;
    goto LAB_00443898;
  case 0x89:
    uVar1 = 0x83a;
    goto LAB_00443898;
  case 0x8a:
    uVar1 = 0x83b;
    goto LAB_00443898;
  case 0x8b:
    uVar1 = 0x83c;
LAB_00443898:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 2.0;
    local_10 = 2.0;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    local_c = -4.0;
LAB_0044358c:
    local_14 = 0.0;
    local_10 = 0.0;
    FUN_00411e30(&local_14);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x8c:
    *(undefined2 *)(param_2 + 0x1c) = 0x83d;
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 4.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x40000000;
    break;
  case 0x8d:
    uVar1 = 0x83e;
    local_c = 2.0;
    goto LAB_00443964;
  case 0x8e:
    uVar1 = 0x83f;
    local_c = 2.5;
LAB_00443964:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_10 = 1.5;
    local_14 = 1.5;
    FUN_00411e30(&local_14);
    local_10 = 0.0;
    local_c = 0.0;
    goto LAB_00440a12;
  case 0x8f:
    local_14 = 1.5;
    local_10 = 1.5;
    local_c = 1.25;
    FUN_00411e30(&local_14);
    uVar7 = rand();
    uVar7 = uVar7 & 0x80000003;
    if ((int)uVar7 < 0) {
      uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
    }
    sVar3 = (short)uVar7 + 0x841;
LAB_00443581:
    local_c = 0.0;
LAB_00443588:
    *(short *)(param_2 + 0x1c) = sVar3;
    goto LAB_0044358c;
  case 0x90:
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 0.8;
    FUN_00411e30(&local_14);
    *(undefined2 *)(param_2 + 0x1c) = 0x9f2;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 1.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f4ccccd;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x91:
    uVar1 = 0x96a;
    goto LAB_00441b61;
  case 0x92:
    uVar1 = 0x96b;
LAB_00441b61:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    iVar4 = rand();
    local_14 = (((float)iVar4 * 0.5) / 32767.0 + 1.2) * 0.8;
    local_10 = local_14;
    local_c = local_14;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x28) = 0x3f666666;
    goto LAB_00441bd5;
  case 0x93:
    *(undefined2 *)(param_2 + 0x1c) = 0x972;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 0.8;
    local_10 = 0.8;
    local_c = 2.0;
    FUN_00411e30(&local_14);
    goto LAB_00441bd5;
  case 0x94:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x53f;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x542;
    *(undefined2 *)(param_2 + 0x1c) = 0x545;
    sVar3 = 0x546;
    goto LAB_0043fa27;
  case 0x95:
    *(undefined1 *)(param_2 + 2) = *(undefined1 *)(param_3 + 4);
    *(undefined1 *)(param_2 + 3) = *(undefined1 *)((int)param_3 + 0x11);
    *(undefined1 *)(param_2 + 4) = *(undefined1 *)((int)param_3 + 0x12);
    *(short *)(param_2 + 0x14) = (short)((int)param_3[2] % 3) + 0x547;
    *(short *)(param_2 + 0x16) = (short)((int)param_3[3] % 3) + 0x54a;
    *(undefined2 *)(param_2 + 0x1c) = 0x54d;
    sVar3 = 0x546;
LAB_0043fa27:
    *(short *)(param_2 + 0x18) = sVar3;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  case 0x96:
    uVar1 = 0x96c;
    goto LAB_00441bfe;
  case 0x97:
    *(undefined2 *)(param_2 + 0x14) = 0xf3;
    *(undefined2 *)(param_2 + 0x22) = 0xf4;
    *(undefined2 *)(param_2 + 0x1a) = 0xf5;
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 2;
    local_14 = 3.0;
    local_10 = 4.0;
    local_c = -8.0;
    FUN_00411e30(&local_14);
    *(undefined4 *)(param_2 + 0x48) = 0xc2340000;
    *(undefined4 *)(param_2 + 0x5c) = 0x42340000;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    *(undefined4 *)(param_2 + 0x44) = 0x3f19999a;
    *(undefined4 *)(param_2 + 0x30) = 0x3f800000;
    local_14 = 1.0;
    local_10 = 1.0;
    local_c = 1.875;
    FUN_00411e30(&local_14);
    local_14 = 6.5;
    local_10 = 3.0;
    local_c = -1.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 3.0;
    local_c = 0.0;
    goto LAB_00440ef2;
  case 0x98:
    *(undefined4 *)(param_2 + 0x14) = 0x96e096d;
    *(undefined4 *)(param_2 + 0x24) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00411e30(&local_14);
    uVar2 = 0x531;
    goto LAB_00441bda;
  case 0x99:
    uVar1 = 0x96f;
    goto LAB_00441bfe;
  case 0x9a:
    uVar1 = 0x970;
    goto LAB_00441bfe;
  case 0x9b:
    uVar1 = 0x971;
LAB_00441bfe:
    *(undefined2 *)(param_2 + 0x1c) = uVar1;
    *(undefined4 *)(param_2 + 0x28) = 0x3f99999a;
    local_14 = 0.0;
    local_10 = 0.0;
    local_c = 0.0;
    FUN_00411e30(&local_14);
    local_14 = 2.4;
    local_10 = 2.4;
    local_c = 6.0;
    FUN_00411e30(&local_14);
LAB_00441bd5:
    uVar2 = 0x131;
LAB_00441bda:
    *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | uVar2;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  default:
    goto switchD_0043f962_default;
  }
  *(ushort *)(param_2 + 6) = *(ushort *)(param_2 + 6) | 0x20;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00444230 @ 00444230  kind=gamemisc  attributed-by=logic:caller-vote  size=61 */

undefined1 FUN_00444230(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(char *)(in_ECX + 0xaa8) == '\x03') &&
     ((((((cVar1 = *(char *)(in_ECX + 0xaa9), cVar1 == '\x0f' || (cVar1 == '\x10')) ||
         (cVar1 == '\x11')) || ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    return 1;
  }
  return 0;
}


/* FUN_004445d0 @ 004445d0  kind=gamemisc  attributed-by=logic:caller-vote  size=59 */

int FUN_004445d0(void)

{
  int iVar1;
  uint3 uVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 100);
  uVar2 = (uint3)((uint)iVar1 >> 8);
  if ((((((iVar1 != 0x6c) && (iVar1 != 0x6d)) && (iVar1 != 0x72)) &&
       ((iVar1 != 0x74 && (iVar1 != 0x73)))) &&
      ((iVar1 != 0x76 && ((iVar1 != 0x6b && (iVar1 != 0x75)))))) &&
     ((iVar1 != 0x65 && (iVar1 != 0x77)))) {
    return (uint)uVar2 << 8;
  }
  return CONCAT31(uVar2,1);
}


/* FUN_00444610 @ 00444610  kind=gamemisc  attributed-by=logic:caller-vote  size=55 */

undefined4 FUN_00444610(void)

{
  char cVar1;
  int in_ECX;
  
  if (((*(char *)(in_ECX + 0x140) == '\x03') || (*(int *)(in_ECX + 100) == 0x75)) ||
     (*(int *)(in_ECX + 100) == 0x56)) {
    return 1;
  }
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    cVar1 = *(char *)(in_ECX + 0xaa9);
    if (cVar1 == '\n') {
      return 1;
    }
    if (cVar1 == '\v') {
      return 1;
    }
    if (cVar1 == '\f') {
      return 1;
    }
  }
  return 0;
}


/* FUN_00444650 @ 00444650  kind=gamemisc  attributed-by=logic:caller-vote  size=48 */

undefined1 FUN_00444650(void)

{
  int in_ECX;
  
  if (((((*(byte *)(in_ECX + 0x124) & 0x10) != 0) &&
       (*(float *)(in_ECX + 0x3c) <= 0.0 && *(float *)(in_ECX + 0x3c) != 0.0)) &&
      ((*(byte *)(in_ECX + 0x5c) & 1) == 0)) &&
     ((*(int *)(in_ECX + 300) < 1 && (*(int *)(in_ECX + 0x128) < 1)))) {
    return 1;
  }
  return 0;
}


/* FUN_00447700 @ 00447700  kind=gamemisc  attributed-by=logic:caller-vote  size=427 */

float10 FUN_00447700(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  float10 fVar5;
  float fVar6;
  float local_8;
  
  local_8 = 1.0;
  if (*(char *)(in_ECX + 0x60) != '\0') {
    local_8 = (float)*(byte *)(in_ECX + 0x1a8) * 0.0625 + 0.75;
  }
  cVar1 = *(char *)(in_ECX + 0x140);
  if ((cVar1 == '\x01') && (*(char *)(in_ECX + 0x141) == '\0')) {
    iVar3 = FUN_00444cb0();
    if ((float)*(int *)(in_ECX + 0x70) / (float)iVar3 <= 1.0) {
      iVar3 = FUN_00444cb0();
      fVar6 = (float)*(int *)(in_ECX + 0x70) / (float)iVar3;
    }
    else {
      fVar6 = 1.0;
    }
    local_8 = fVar6 * 0.5 + local_8;
  }
  if ((cVar1 == '\x03') && (*(char *)(in_ECX + 0x141) == '\x01')) {
    iVar3 = FUN_00444cb0();
    if ((float)*(int *)(in_ECX + 0x70) / (float)iVar3 <= 1.0) {
      iVar3 = FUN_00444cb0();
      fVar6 = (float)*(int *)(in_ECX + 0x70) / (float)iVar3;
    }
    else {
      fVar6 = 1.0;
    }
    local_8 = fVar6 + local_8;
  }
  fVar5 = (float10)FUN_004478b0();
  piVar2 = *(int **)(in_ECX + 0x1178);
  local_8 = (float)fVar5 + local_8;
  piVar4 = (int *)*piVar2;
  if (piVar4 != piVar2) {
    while ((char)piVar4[2] != '\f') {
      piVar4 = (int *)*piVar4;
      if (piVar4 == piVar2) {
        return (float10)local_8;
      }
    }
    if (piVar4 != (int *)0xfffffff8) {
      iVar3 = *(int *)(in_ECX + 0x1158);
      if ((iVar3 == 0) && (*(char *)(in_ECX + 0x60) != '\0')) {
        iVar3 = *(int *)(in_ECX + 400) / 2 + *(byte *)(in_ECX + 0x1a8) + 1;
      }
      local_8 = ((1.0 - 1.0 / ((float)iVar3 * 0.1 + 1.0)) + 1.0) * local_8;
    }
  }
  return (float10)local_8;
}


/* FUN_0044a7c0 @ 0044a7c0  kind=gamemisc  attributed-by=logic:caller-vote  size=17 */

void FUN_0044a7c0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  return;
}


/* FUN_0044b580 @ 0044b580  kind=gamemisc  attributed-by=logic:caller-vote  size=22 */

void FUN_0044b580(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0x148;
  return;
}


/* FUN_00450960 @ 00450960  kind=gamemisc  attributed-by=logic:caller-vote  size=156 */

char * FUN_00450960(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  int in_ECX;
  
  iVar2 = *(int *)(*(int *)(in_ECX + 0x16c) + 0x8006d0);
  if ((((*(int *)(iVar2 + 0x11dc) != *(int *)(iVar2 + 0x11e0)) &&
       (iVar3 = *(int *)(in_ECX + 0x160), -1 < iVar3)) &&
      (iVar3 < (*(int *)(iVar2 + 0x11e0) - *(int *)(iVar2 + 0x11dc)) / 0xc)) &&
     (iVar4 = *(int *)(in_ECX + 0x164), -1 < iVar4)) {
    piVar1 = (int *)(*(int *)(iVar2 + 0x11dc) + iVar3 * 0xc);
    if (iVar4 < (piVar1[1] - *piVar1) / 0x11c) {
      if (*(int *)(iVar4 * 0x11c + *piVar1) != 0) {
        pcVar5 = (char *)(*piVar1 + 4 + iVar4 * 0x11c);
        if (*pcVar5 != '\x0e') {
          pcVar5 = (char *)0x0;
        }
        return pcVar5;
      }
    }
  }
  return (char *)0x0;
}


/* FUN_00451510 @ 00451510  kind=gamemisc  attributed-by=logic:caller-vote  size=56 */

void FUN_00451510(float *param_1,float param_2,float *param_3)

{
  *param_1 = *param_3 * param_2;
  param_1[1] = param_3[1] * param_2;
  param_1[2] = param_3[2] * param_2;
  return;
}


/* FUN_00454190 @ 00454190  kind=gamemisc  attributed-by=logic:caller-vote  size=157 */

void FUN_00454190(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e34d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00449b70(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xe38e37) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454260 @ 00454260  kind=gamemisc  attributed-by=logic:caller-vote  size=157 */

void FUN_00454260(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e34f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004e0300(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x5555554) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00455340 @ 00455340  kind=gamemisc  attributed-by=logic:caller-vote  size=128 */

void FUN_00455340(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  
  if (*(float *)((int)param_2 + 4) <= *(float *)((int)param_1 + 4) &&
      *(float *)((int)param_1 + 4) != *(float *)((int)param_2 + 4)) {
    uVar1 = *param_2;
    uVar2 = *(undefined4 *)(param_2 + 1);
    *param_2 = *param_1;
    *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
    *param_1 = uVar1;
    *(undefined4 *)(param_1 + 1) = uVar2;
  }
  if (*(float *)((int)param_3 + 4) <= *(float *)((int)param_2 + 4) &&
      *(float *)((int)param_2 + 4) != *(float *)((int)param_3 + 4)) {
    uVar1 = *param_3;
    uVar2 = *(undefined4 *)(param_3 + 1);
    *param_3 = *param_2;
    *(undefined4 *)(param_3 + 1) = *(undefined4 *)(param_2 + 1);
    *param_2 = uVar1;
    *(undefined4 *)(param_2 + 1) = uVar2;
    if (*(float *)((int)param_2 + 4) <= *(float *)((int)param_1 + 4) &&
        *(float *)((int)param_1 + 4) != *(float *)((int)param_2 + 4)) {
      *param_2 = *param_1;
      *(undefined4 *)(param_2 + 1) = *(undefined4 *)(param_1 + 1);
      *param_1 = uVar1;
      *(undefined4 *)(param_1 + 1) = uVar2;
    }
  }
  return;
}


/* FUN_00459800 @ 00459800  kind=gamemisc  attributed-by=logic:caller-vote  size=405 */

void FUN_00459800(undefined1 *param_1)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  *(undefined2 *)(in_ECX + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)(in_ECX + 0x14) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)(in_ECX + 0x16) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)(in_ECX + 0x18) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)(in_ECX + 0x1a) = *(undefined2 *)(param_1 + 0x1a);
  *(undefined2 *)(in_ECX + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)(in_ECX + 0x1e) = *(undefined2 *)(param_1 + 0x1e);
  *(undefined2 *)(in_ECX + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)(in_ECX + 0x22) = *(undefined2 *)(param_1 + 0x22);
  *(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(in_ECX + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(in_ECX + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(in_ECX + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(in_ECX + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)(in_ECX + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)(in_ECX + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)(in_ECX + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)(in_ECX + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(in_ECX + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)(in_ECX + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)(in_ECX + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)(in_ECX + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)(in_ECX + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)(in_ECX + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)(in_ECX + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)(in_ECX + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)(in_ECX + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)(in_ECX + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)(in_ECX + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(in_ECX + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  return;
}


/* FUN_00468000 @ 00468000  kind=gamemisc  attributed-by=logic:caller-vote  size=65 */

void FUN_00468000(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  if (*param_1 == 0) {
    FUN_0040f7a0(param_1,0);
    return;
  }
  psVar2 = param_1;
  do {
    sVar1 = *psVar2;
    psVar2 = psVar2 + 1;
  } while (sVar1 != 0);
  FUN_0040f7a0(param_1,(int)psVar2 - (int)(param_1 + 1) >> 1);
  return;
}


/* FUN_00468840 @ 00468840  kind=gamemisc  attributed-by=logic:caller-vote  size=43 */

int FUN_00468840(int param_1)

{
  uint3 uVar1;
  int *in_ECX;
  int iVar2;
  
  iVar2 = 0;
  param_1 = param_1 - (int)in_ECX;
  do {
    uVar1 = (uint3)((uint)*in_ECX >> 8);
    if (*in_ECX != *(int *)(param_1 + (int)in_ECX)) {
      return (uint)uVar1 << 8;
    }
    iVar2 = iVar2 + 1;
    in_ECX = in_ECX + 1;
  } while (iVar2 < 2);
  return CONCAT31(uVar1,1);
}


/* FUN_00468910 @ 00468910  kind=gamemisc  attributed-by=logic:caller-vote  size=130 */

int * FUN_00468910(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  int local_c [2];
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar2[4] < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if ((puVar5 != puVar1) && ((int)puVar5[4] <= *param_1)) {
    return puVar5 + 5;
  }
  local_c[0] = *param_1;
  local_c[1] = 0;
  iVar4 = FUN_00608a60(local_c);
  FUN_00453040(&param_1,puVar5,iVar4 + 0x10,iVar4);
  return param_1 + 5;
}


/* FUN_00468ad0 @ 00468ad0  kind=gamemisc  attributed-by=logic:caller-vote  size=159 */

uint * FUN_00468ad0(uint *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (((int)param_1[1] < (int)puVar2[5]) ||
         (((int)param_1[1] <= (int)puVar2[5] && (*param_1 <= (uint)puVar2[4])))) {
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      else {
        puVar3 = (undefined4 *)puVar2[2];
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if (puVar5 != puVar1) {
    if (((int)puVar5[5] < (int)param_1[1]) ||
       (((int)puVar5[5] <= (int)param_1[1] && ((uint)puVar5[4] <= *param_1)))) {
      return puVar5 + 6;
    }
  }
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = 0;
  iVar4 = FUN_004522a0(&local_18);
  FUN_00453420(&param_1,puVar5,iVar4 + 0x10,iVar4);
  return param_1 + 6;
}


/* FUN_00468d30 @ 00468d30  kind=gamemisc  attributed-by=logic:caller-vote  size=18 */

void FUN_00468d30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  *param_1 = puVar1;
  *in_ECX = *puVar1;
  return;
}


/* FUN_00468df0 @ 00468df0  kind=gamemisc  attributed-by=logic:caller-vote  size=40 */

void FUN_00468df0(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  return;
}


/* FUN_0046d590 @ 0046d590  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_0046d590(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x18);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d5d0 @ 0046d5d0  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_0046d5d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x78);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_0046d650 @ 0046d650  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_0046d650(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1c);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_004777f0 @ 004777f0  kind=gamemisc  attributed-by=logic:caller-vote  size=189 */

undefined4 * FUN_004777f0(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_0046dbc0(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
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
    FUN_004778b0(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_00477d90 @ 00477d90  kind=gamemisc  attributed-by=logic:caller-vote  size=115 */

void FUN_00477d90(int *param_1,uint *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  undefined4 *puVar4;
  
  puVar1 = (undefined4 *)*in_ECX;
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


/* FUN_00484350 @ 00484350  kind=gamemisc  attributed-by=logic:caller-vote  size=6972 */

void FUN_00484350(undefined4 param_1,uint *param_2,float param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  float in_ECX;
  undefined4 uVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_a34 [4];
  float local_a30;
  float local_a2c;
  float local_a28;
  int local_a24;
  uint local_a20;
  uint local_a1c;
  uint local_a18;
  int local_a14;
  uint local_a10;
  uint local_a0c;
  int local_a08;
  uint local_a04;
  void *local_a00 [4];
  undefined4 local_9f0;
  uint local_9ec;
  float local_9e8;
  float local_9e4;
  float local_9e0;
  float local_9dc;
  float local_9d8;
  float local_9d4;
  int local_9d0;
  int iStack_9cc;
  int local_9c8;
  int iStack_9c4;
  int local_9c0;
  int iStack_9bc;
  int local_9b8;
  int iStack_9b4;
  int local_9b0;
  int iStack_9ac;
  int local_9a8;
  int iStack_9a4;
  float local_9a0;
  float fStack_99c;
  undefined1 local_994 [24];
  undefined1 local_97c [24];
  undefined1 local_964 [24];
  undefined1 local_94c [24];
  undefined1 local_934 [24];
  undefined1 local_91c [24];
  undefined1 local_904 [24];
  undefined1 local_8ec [24];
  undefined1 local_8d4 [24];
  undefined1 local_8bc [24];
  undefined1 local_8a4 [24];
  undefined1 local_88c [24];
  undefined1 local_874 [24];
  undefined1 local_85c [24];
  undefined1 local_844 [24];
  undefined1 local_82c [24];
  undefined1 local_814 [24];
  undefined1 local_7fc [24];
  undefined1 local_7e4 [24];
  undefined1 local_7cc [24];
  undefined1 local_7b4 [24];
  undefined1 local_79c [24];
  undefined1 local_784 [24];
  undefined1 local_76c [24];
  undefined1 local_754 [24];
  undefined1 local_73c [24];
  undefined1 local_724 [24];
  undefined1 local_70c [24];
  undefined1 local_6f4 [24];
  undefined1 local_6dc [24];
  undefined1 local_6c4 [24];
  undefined1 local_6ac [24];
  undefined1 local_694 [24];
  undefined1 local_67c [24];
  undefined1 local_664 [24];
  undefined1 local_64c [24];
  undefined1 local_634 [24];
  undefined1 local_61c [24];
  undefined1 local_604 [24];
  undefined1 local_5ec [24];
  undefined1 local_5d4 [24];
  undefined1 local_5bc [24];
  undefined1 local_5a4 [24];
  undefined1 local_58c [24];
  undefined1 local_574 [24];
  undefined1 local_55c [24];
  undefined1 local_544 [24];
  undefined1 local_52c [24];
  undefined1 local_514 [24];
  undefined1 local_4fc [24];
  undefined1 local_4e4 [24];
  undefined1 local_4cc [24];
  undefined1 local_4b4 [24];
  undefined1 local_49c [24];
  undefined1 local_484 [24];
  undefined1 local_46c [24];
  undefined1 local_454 [24];
  undefined1 local_43c [24];
  undefined1 local_424 [24];
  undefined1 local_40c [24];
  undefined1 local_3f4 [24];
  undefined1 local_3dc [24];
  undefined1 local_3c4 [24];
  undefined1 local_3ac [24];
  undefined1 local_394 [24];
  undefined1 local_37c [24];
  undefined1 local_364 [24];
  undefined1 local_34c [24];
  undefined1 local_334 [24];
  undefined1 local_31c [24];
  undefined1 local_304 [24];
  undefined1 local_2ec [24];
  undefined1 local_2d4 [24];
  undefined1 local_2bc [24];
  undefined1 local_2a4 [24];
  undefined1 local_28c [24];
  undefined1 local_274 [24];
  undefined1 local_25c [24];
  undefined1 local_244 [24];
  undefined1 local_22c [24];
  undefined1 local_214 [24];
  undefined1 local_1fc [24];
  undefined1 local_1e4 [24];
  undefined1 local_1cc [24];
  undefined1 local_1b4 [24];
  undefined1 local_19c [24];
  undefined1 local_184 [24];
  undefined1 local_16c [24];
  undefined1 local_154 [24];
  undefined1 local_13c [24];
  undefined1 local_124 [24];
  undefined1 local_10c [24];
  undefined1 local_f4 [24];
  undefined1 local_dc [24];
  undefined1 local_c4 [24];
  undefined1 local_ac [24];
  undefined1 local_94 [24];
  undefined1 local_7c [24];
  undefined1 local_64 [24];
  undefined1 local_4c [24];
  undefined1 local_34 [24];
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006e6b56;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)auStack_a34;
  ExceptionList = &local_14;
  local_a1c = param_2[3];
  local_a0c = *param_2;
  local_a18 = param_2[1];
  local_a04 = param_2[2];
  local_a10 = param_2[4];
  local_a2c = (float)param_2[5];
  local_a20 = *(uint *)((int)in_ECX + 0x140);
  local_a08 = *(int *)((int)in_ECX + 0x144);
  local_9d0 = local_a0c - local_a20;
  iStack_9cc = (local_a18 - local_a08) - (uint)(local_a0c < local_a20);
  uVar1 = *(uint *)((int)in_ECX + 0x148);
  local_a14 = *(int *)((int)in_ECX + 0x14c);
  local_9c8 = local_a04 - uVar1;
  iStack_9c4 = (local_a1c - local_a14) - (uint)(local_a04 < uVar1);
  uVar2 = *(uint *)((int)in_ECX + 0x150);
  local_9c0 = local_a10 - uVar2;
  local_a24 = *(int *)((int)in_ECX + 0x154);
  iStack_9bc = ((int)local_a2c - local_a24) - (uint)(local_a10 < uVar2);
  local_9e8 = (float)CONCAT44(iStack_9cc,local_9d0) * 1.5258789e-05;
  local_a28 = (float)CONCAT44(iStack_9bc,local_9c0);
  local_9e4 = (float)CONCAT44(iStack_9c4,local_9c8) * 1.5258789e-05;
  local_9e0 = local_a28 * 1.5258789e-05;
  local_a30 = in_ECX;
  if (10000.0 < local_9e4 * local_9e4 + local_9e8 * local_9e8 + local_9e0 * local_9e0)
  goto LAB_00485e69;
  local_9b8 = local_a0c - local_a20;
  iStack_9b4 = (local_a18 - local_a08) - (uint)(local_a0c < local_a20);
  local_9b0 = local_a04 - uVar1;
  iStack_9ac = (local_a1c - local_a14) - (uint)(local_a04 < uVar1);
  local_9a8 = local_a10 - uVar2;
  iStack_9a4 = ((int)local_a2c - local_a24) - (uint)(local_a10 < uVar2);
  local_9dc = (float)CONCAT44(iStack_9b4,local_9b8) * 1.5258789e-05;
  local_a2c = (float)CONCAT44(iStack_9a4,local_9a8);
  local_9d8 = (float)CONCAT44(iStack_9ac,local_9b0) * 1.5258789e-05;
  local_9d4 = local_a2c * 1.5258789e-05;
  dVar4 = (double)(local_9d8 * local_9d8 + local_9dc * local_9dc + local_9d4 * local_9d4);
  libm_sse2_sqrt_precise(DAT_0076aa78 ^ (uint)&stack0xfffff5c0);
  local_9ec = 0xf;
  local_9f0 = 0;
  local_a00[0] = (void *)((uint)local_a00[0] & 0xffffff00);
  local_a30 = (1.0 - (float)dVar4 / 100.0) * param_3;
  uVar3 = 0;
  local_c = 0;
  switch(param_1) {
  case 0:
    uVar3 = FUN_004515f0(local_2ec,local_a00,"hit.wav");
    local_c = CONCAT31(local_c._1_3_,1);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 1:
    uVar3 = FUN_004515f0(local_4cc,local_a00,"blade1.wav");
    local_c = CONCAT31(local_c._1_3_,2);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 2:
    uVar3 = FUN_004515f0(local_94c,local_a00,"blade2.wav");
    local_c = CONCAT31(local_c._1_3_,3);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 3:
    uVar3 = FUN_004515f0(local_49c,local_a00,"long-blade1.wav");
    local_c = CONCAT31(local_c._1_3_,6);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 4:
    uVar3 = FUN_004515f0(local_8ec,local_a00,"long-blade2.wav");
    local_c = CONCAT31(local_c._1_3_,7);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 5:
    uVar3 = FUN_004515f0(local_8bc,local_a00,"hit1.wav");
    local_c = CONCAT31(local_c._1_3_,9);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 6:
    uVar3 = FUN_004515f0(local_46c,local_a00,"hit2.wav");
    local_c = CONCAT31(local_c._1_3_,10);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 7:
    uVar3 = FUN_004515f0(local_88c,local_a00,"punch1.wav");
    local_c = CONCAT31(local_c._1_3_,0xb);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 8:
    uVar3 = FUN_004515f0(local_13c,local_a00,"punch2.wav");
    local_c = CONCAT31(local_c._1_3_,0xc);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 9:
    uVar3 = FUN_004515f0(local_7c,local_a00,"hit-arrow.wav");
    local_c = CONCAT31(local_c._1_3_,4);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 10:
    uVar3 = FUN_004515f0(local_91c,local_a00,"hit-arrow-critical.wav");
    local_c = CONCAT31(local_c._1_3_,5);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0xb:
    uVar3 = FUN_004515f0(local_25c,local_a00,"smash1.wav");
    local_c = CONCAT31(local_c._1_3_,8);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0xc:
    uVar3 = FUN_004515f0(local_43c,local_a00,"slam-ground.wav");
    local_c = CONCAT31(local_c._1_3_,0xe);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0xd:
    uVar3 = FUN_004515f0(local_82c,local_a00,"smash-hit2.wav");
    local_c = CONCAT31(local_c._1_3_,0xf);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0xe:
    uVar3 = FUN_004515f0(local_22c,local_a00,"smash-jump.wav");
    local_c = CONCAT31(local_c._1_3_,0x10);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0xf:
    uVar3 = FUN_004515f0(local_ac,local_a00,"swing.wav");
    local_c = CONCAT31(local_c._1_3_,0x14);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x10:
    uVar3 = FUN_004515f0(local_79c,local_a00,"shield-swing.wav");
    local_c = CONCAT31(local_c._1_3_,0x15);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x11:
    uVar3 = FUN_004515f0(local_3dc,local_a00,"swing-slow.wav");
    local_c = CONCAT31(local_c._1_3_,0x16);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x12:
    uVar3 = FUN_004515f0(local_76c,local_a00,"swing-slow2.wav");
    local_c = CONCAT31(local_c._1_3_,0x17);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x13:
    uVar3 = FUN_004515f0(local_10c,local_a00,"arrow-destroy.wav");
    local_c = CONCAT31(local_c._1_3_,0x1c);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x14:
    uVar3 = FUN_004515f0(local_6dc,local_a00,"blade1.wav");
    local_c = CONCAT31(local_c._1_3_,0x1d);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x15:
    uVar3 = FUN_004515f0(local_37c,local_a00,"punch2.wav");
    local_c = CONCAT31(local_c._1_3_,0x1e);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x16:
    uVar3 = FUN_004515f0(local_73c,local_a00,"salvo2.wav");
    local_c = CONCAT31(local_c._1_3_,0x19);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x17:
    uVar3 = FUN_004515f0(local_7fc,local_a00,"sword-hit03.wav");
    local_c = CONCAT31(local_c._1_3_,0x11);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x18:
    uVar3 = FUN_004515f0(local_40c,local_a00,"block.wav");
    local_c = CONCAT31(local_c._1_3_,0x12);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x19:
    uVar3 = FUN_004515f0(local_7cc,local_a00,"shield-slam.wav");
    local_c = CONCAT31(local_c._1_3_,0x13);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x1a:
    uVar3 = FUN_004515f0(local_3ac,local_a00,"roll.wav");
    local_c = CONCAT31(local_c._1_3_,0x1a);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x1b:
    uVar3 = FUN_004515f0(local_70c,local_a00,"destroy2.wav");
    local_c = CONCAT31(local_c._1_3_,0x1b);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x1c:
    uVar3 = FUN_004515f0(local_6ac,local_a00,"cry.wav");
    local_c = CONCAT31(local_c._1_3_,0x1f);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x1d:
    uVar3 = FUN_004515f0(local_1cc,local_a00,"levelup2.wav");
    local_c = CONCAT31(local_c._1_3_,0x20);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x1e:
    uVar3 = FUN_004515f0(local_67c,local_a00,"missioncomplete.wav");
    local_c = CONCAT31(local_c._1_3_,0x21);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x1f:
    uVar3 = FUN_004515f0(local_34c,local_a00,"water-splash01.wav");
    local_c = CONCAT31(local_c._1_3_,0x22);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x20:
    uVar3 = FUN_004515f0(local_64c,local_a00,"step2.wav");
    local_c = CONCAT31(local_c._1_3_,0x23);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x21:
    uVar3 = FUN_004515f0(local_4c,local_a00,"step-water.wav");
    local_c = CONCAT31(local_c._1_3_,0x24);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x22:
    uVar3 = FUN_004515f0(local_61c,local_a00,"step-water2.wav");
    local_c = CONCAT31(local_c._1_3_,0x25);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x23:
    uVar3 = FUN_004515f0(local_31c,local_a00,"step-water3.wav");
    local_c = CONCAT31(local_c._1_3_,0x26);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x24:
    uVar3 = FUN_004515f0(local_5ec,local_a00,"channel2.wav");
    local_c = CONCAT31(local_c._1_3_,0x27);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x25:
    uVar3 = FUN_004515f0(local_19c,local_a00,"channel-hit.wav");
    local_c = CONCAT31(local_c._1_3_,0x28);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x26:
    uVar3 = FUN_004515f0(local_5bc,local_a00,"fireball.wav");
    local_c = CONCAT31(local_c._1_3_,0x29);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x27:
    uVar3 = FUN_004515f0(local_994,local_a00,"fire-hit.wav");
    local_c = CONCAT31(local_c._1_3_,0x2a);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x28:
    uVar3 = FUN_004515f0(local_2bc,local_a00,"magic02.wav");
    local_c = CONCAT31(local_c._1_3_,0x2e);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x29:
    uVar3 = FUN_004515f0(local_52c,local_a00,"watersplash.wav");
    local_c = CONCAT31(local_c._1_3_,0x2f);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x2a:
    uVar3 = FUN_004515f0(local_16c,local_a00,"watersplash-hit.wav");
    local_c = CONCAT31(local_c._1_3_,0x30);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x2b:
    uVar3 = FUN_004515f0(local_28c,local_a00,"lich-scream.wav");
    local_c = CONCAT31(local_c._1_3_,0x32);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x2c:
    uVar3 = FUN_004515f0(local_97c,local_a00,"drink2.wav");
    local_c = CONCAT31(local_c._1_3_,0x33);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x2d:
    uVar3 = FUN_004515f0(local_964,local_a00,"pickup.wav");
    local_c = CONCAT31(local_c._1_3_,0x34);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x2e:
    uVar3 = FUN_004515f0(local_934,local_a00,"disenchant2.wav");
    local_c = CONCAT31(local_c._1_3_,0x35);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x2f:
    uVar3 = FUN_004515f0(local_904,local_a00,"upgrade2.wav");
    local_c = CONCAT31(local_c._1_3_,0x36);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x30:
    uVar3 = FUN_004515f0(local_1fc,local_a00,"swirl.wav");
    local_c = CONCAT31(local_c._1_3_,0x18);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x31:
    uVar3 = FUN_004515f0(local_8d4,local_a00,"human-voice01.wav");
    local_c = CONCAT31(local_c._1_3_,0x37);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x32:
    uVar3 = FUN_004515f0(local_8a4,local_a00,"human-voice02.wav");
    local_c = CONCAT31(local_c._1_3_,0x38);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x33:
    uVar3 = FUN_004515f0(local_874,local_a00,"gate.wav");
    local_c = CONCAT31(local_c._1_3_,0x39);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x34:
    uVar3 = FUN_004515f0(local_814,local_a00,"spike-trap.wav");
    local_c = CONCAT31(local_c._1_3_,0x3b);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x35:
    uVar3 = FUN_004515f0(local_7e4,local_a00,"fire-trap.wav");
    local_c = CONCAT31(local_c._1_3_,0x3c);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x36:
    uVar3 = FUN_004515f0(local_844,local_a00,"lever.wav");
    local_c = CONCAT31(local_c._1_3_,0x3a);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x37:
    uVar3 = FUN_004515f0(local_784,local_a00,"charge2.wav");
    local_c = CONCAT31(local_c._1_3_,0x3e);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x38:
    uVar3 = FUN_004515f0(local_7b4,local_a00,"magic02.wav");
    local_c = CONCAT31(local_c._1_3_,0x3d);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x39:
    uVar3 = FUN_004515f0(local_754,local_a00,"drop.wav");
    local_c = CONCAT31(local_c._1_3_,0x3f);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x3a:
    uVar3 = FUN_004515f0(local_724,local_a00,"drop-coin.wav");
    local_c = CONCAT31(local_c._1_3_,0x40);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x3b:
    uVar3 = FUN_004515f0(local_6f4,local_a00,"drop-item.wav");
    local_c = CONCAT31(local_c._1_3_,0x41);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x3c:
    uVar3 = FUN_004515f0(local_6c4,local_a00,"male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x42);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x3d:
    uVar3 = FUN_004515f0(local_694,local_a00,"female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x43);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x3e:
    uVar3 = FUN_004515f0(local_664,local_a00,"male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x44);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x3f:
    uVar3 = FUN_004515f0(local_634,local_a00,"female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x45);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x40:
    uVar3 = FUN_004515f0(local_604,local_a00,"goblin-male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x46);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x41:
    uVar3 = FUN_004515f0(local_5d4,local_a00,"goblin-female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x47);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x42:
    uVar3 = FUN_004515f0(local_5a4,local_a00,"lizard-male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x48);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x43:
    uVar3 = FUN_004515f0(local_574,local_a00,"lizard-female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x49);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x44:
    uVar3 = FUN_004515f0(local_544,local_a00,"dwarf-male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x4a);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x45:
    uVar3 = FUN_004515f0(local_514,local_a00,"dwarf-female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x4b);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x46:
    uVar3 = FUN_004515f0(local_4e4,local_a00,"orc-male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x4c);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x47:
    uVar3 = FUN_004515f0(local_4b4,local_a00,"orc-female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x4d);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x48:
    uVar3 = FUN_004515f0(local_484,local_a00,"undead-male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x4e);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x49:
    uVar3 = FUN_004515f0(local_454,local_a00,"undead-female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x4f);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x4a:
    uVar3 = FUN_004515f0(local_424,local_a00,"frogman-male-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x50);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x4b:
    uVar3 = FUN_004515f0(local_3f4,local_a00,"frogman-female-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x51);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x4c:
    uVar3 = FUN_004515f0(local_3c4,local_a00,"monster-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x52);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x4d:
    uVar3 = FUN_004515f0(local_394,local_a00,"troll-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x53);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x4e:
    uVar3 = FUN_004515f0(local_304,local_a00,"mole-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x56);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x4f:
    uVar3 = FUN_004515f0(local_334,local_a00,"slime-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x55);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x50:
    uVar3 = FUN_004515f0(local_364,local_a00,"zombie-groan.wav");
    local_c = CONCAT31(local_c._1_3_,0x54);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x51:
    uVar3 = FUN_004515f0(local_4fc,local_a00,"Explosion.wav");
    local_c = CONCAT31(local_c._1_3_,0x31);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x52:
    uVar3 = FUN_004515f0(local_85c,local_a00,"punch2.wav");
    local_c = CONCAT31(local_c._1_3_,0xd);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x53:
    uVar3 = FUN_004515f0(local_2d4,local_a00,"menu-open2.wav");
    local_c = CONCAT31(local_c._1_3_,0x57);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x54:
    uVar3 = FUN_004515f0(local_2a4,local_a00,"menu-close2.wav");
    local_c = CONCAT31(local_c._1_3_,0x58);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x55:
    uVar3 = FUN_004515f0(local_274,local_a00,"menu-select.wav");
    local_c = CONCAT31(local_c._1_3_,0x59);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x56:
    uVar3 = FUN_004515f0(local_244,local_a00,"menu-tab.wav");
    local_c = CONCAT31(local_c._1_3_,0x5a);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x57:
    uVar3 = FUN_004515f0(local_214,local_a00,"menu-grab-item.wav");
    local_c = CONCAT31(local_c._1_3_,0x5b);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x58:
    uVar3 = FUN_004515f0(local_1e4,local_a00,"menu-drop-item.wav");
    local_c = CONCAT31(local_c._1_3_,0x5c);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x59:
    uVar3 = FUN_004515f0(local_1b4,local_a00,"craft.wav");
    local_c = CONCAT31(local_c._1_3_,0x5d);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x5a:
    uVar3 = FUN_004515f0(local_184,local_a00,"craft-proc.wav");
    local_c = CONCAT31(local_c._1_3_,0x5e);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x5b:
    uVar3 = FUN_004515f0(local_58c,local_a00,"absorb.wav");
    local_c = CONCAT31(local_c._1_3_,0x2b);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x5c:
    uVar3 = FUN_004515f0(local_dc,local_a00,"manashield.wav");
    local_c = CONCAT31(local_c._1_3_,0x2c);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x5d:
    uVar3 = FUN_004515f0(local_55c,local_a00,"bulwark.wav");
    local_c = CONCAT31(local_c._1_3_,0x2d);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x5e:
    uVar3 = FUN_004515f0(local_154,local_a00,"bird1.wav");
    local_c = CONCAT31(local_c._1_3_,0x5f);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x5f:
    uVar3 = FUN_004515f0(local_124,local_a00,"bird2.wav");
    local_c = CONCAT31(local_c._1_3_,0x60);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x60:
    uVar3 = FUN_004515f0(local_f4,local_a00,"bird3.wav");
    local_c = CONCAT31(local_c._1_3_,0x61);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x61:
    uVar3 = FUN_004515f0(local_64,local_a00,"cricket1.wav");
    local_c = CONCAT31(local_c._1_3_,100);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 0x62:
    uVar3 = FUN_004515f0(local_34,local_a00,"cricket2.wav");
    local_c = CONCAT31(local_c._1_3_,0x65);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 99:
    uVar3 = FUN_004515f0(local_c4,local_a00,"owl1.wav");
    local_c = CONCAT31(local_c._1_3_,0x62);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  case 100:
    uVar3 = FUN_004515f0(local_94,local_a00,"owl2.wav");
    local_c = CONCAT31(local_c._1_3_,99);
    uVar3 = (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x1c))(uVar3);
    break;
  default:
    goto switchD_0048460d_default;
  }
  local_c = local_c & 0xffffff00;
  FUN_00403eb0();
switchD_0048460d_default:
  local_9a0 = (float)*(longlong *)param_2 * 1.5258789e-05;
  local_a2c = (float)*(longlong *)(param_2 + 4);
  fStack_99c = (float)*(longlong *)(param_2 + 2) * 1.5258789e-05;
  fVar5 = (1.0 / (*(float *)((int)in_ECX + 0x238) * local_9a0 +
                  *(float *)((int)in_ECX + 0x248) * fStack_99c +
                  *(float *)((int)in_ECX + 600) * local_a2c * 1.5258789e-05 +
                 *(float *)((int)in_ECX + 0x268))) *
          (*(float *)((int)in_ECX + 0x23c) * fStack_99c +
           *(float *)((int)in_ECX + 0x22c) * local_9a0 +
           *(float *)((int)in_ECX + 0x24c) * local_a2c * 1.5258789e-05 +
          *(float *)((int)in_ECX + 0x25c)) * -0.1;
  fVar6 = -1.0;
  if ((-1.0 <= fVar5) && (fVar6 = fVar5, 1.0 < fVar5)) {
    fVar6 = 1.0;
  }
  (**(code **)(**(int **)((int)in_ECX + 0x800714) + 0x18))
            (uVar3,(float)*(int *)((int)in_ECX + 0x184) * local_a30 * 0.01,fVar6,param_4,0);
  if (0xf < local_9ec) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_a00[0]);
  }
LAB_00485e69:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)auStack_a34);
  return;
}


/* FUN_004878a0 @ 004878a0  kind=gamemisc  attributed-by=logic:caller-vote  size=1262 */

void __thiscall FUN_004878a0(void *this,int param_2,int param_3,char param_4)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  Sprite *pSVar5;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  basic_ostream<char,struct_std::char_traits<char>_> *this_01;
  undefined4 uVar6;
  undefined4 *_Src;
  size_t _Size;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var7;
  int iStack_104;
  basic_iostream<char,std::char_traits<char>_> local_100;
  basic_streambuf<char,std::char_traits<char>_> local_e8 [2];
  basic_iostream<char,std::char_traits<char>_> local_e0 [2];
  undefined4 local_b0;
  undefined4 local_ac;
  basic_ios<char,std::char_traits<char>_> local_98 [6];
  void *local_50;
  int local_4c;
  undefined4 local_48;
  Sprite *local_44;
  void *local_40;
  void *local_3c;
  int local_38;
  undefined4 local_34;
  int local_30;
  void *local_2c [3];
  void *local_20;
  int iStack_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6d7b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_44 = (Sprite *)0x0;
  local_40 = this;
  if (param_4 != '\0') {
    FUN_00601cb0(local_14);
  }
  piVar2 = (int *)((int)this + 0x378);
  if (0xf < *(uint *)((int)this + 0x38c)) {
    piVar2 = (int *)*piVar2;
  }
  iVar3 = FUN_0040c520(0,*(undefined4 *)(param_3 + 0x18),piVar2,*(undefined4 *)((int)this + 0x388));
  if ((iVar3 == 0) && (*(int *)(param_3 + 0x20) == *(int *)((int)this + 0x800448))) {
    iVar3 = *(int *)((int)this + 0x8006d0);
    iVar4 = __alldiv(*(undefined4 *)(iVar3 + 0x18),*(undefined4 *)(iVar3 + 0x1c),0x10000,0);
    iVar3 = __alldiv(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),0x10000,0);
    pvVar1 = local_40;
    iVar3 = FUN_00602440((int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8,
                         (int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 8) != 0)) {
      if (*(int *)(param_3 + 4) == 0) {
        local_44 = operator_new(0x60);
        local_8 = 0;
        if (local_44 == (Sprite *)0x0) {
          pSVar5 = (Sprite *)0x0;
        }
        else {
          pSVar5 = cube::Sprite::Sprite(local_44,*(undefined4 *)((int)pvVar1 + 0x134));
        }
        local_8 = 0xffffffff;
        *(Sprite **)(param_3 + 4) = pSVar5;
      }
      iVar3 = *(int *)(iVar3 + 8);
      FUN_004e7650(*(undefined4 *)(iVar3 + 0x44),*(undefined4 *)(iVar3 + 0x48),
                   *(undefined4 *)(iVar3 + 0x4c),*(undefined4 *)(iVar3 + 0x30),1);
      FUN_004e7870();
    }
  }
  _Src = (undefined4 *)(param_3 + 8);
  local_3c = (void *)0x0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_40 = *(void **)(param_3 + 0x18);
  local_8 = 1;
  FUN_005870c0(4);
  *(void **)((int)local_3c + local_30) = local_40;
  local_30 = local_30 + 4;
  if (0xf < *(uint *)(param_3 + 0x1c)) {
    _Src = (undefined4 *)*_Src;
  }
  FUN_005870c0((local_38 - (int)local_3c) + (int)local_40);
  memcpy((void *)((int)local_3c + local_30),_Src,(size_t)local_40);
  local_30 = local_30 + (int)local_40;
  FUN_005870c0((local_38 - (int)local_3c) + 4);
  p_Var7 = endl_exref;
  *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(param_3 + 0x20);
  iVar3 = *(int *)(param_3 + 0x20);
  local_30 = local_30 + 4;
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(cout_exref,"wrote ");
  this_01 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,iVar3);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)this_01,p_Var7);
  FUN_005870c0((local_38 - (int)local_3c) + 4);
  *(undefined4 *)((int)local_3c + local_30) = *(undefined4 *)(param_3 + 0x24);
  iVar3 = *(int *)(param_3 + 4);
  local_30 = local_30 + 4;
  iVar4 = 0;
  local_20 = (void *)0x0;
  iStack_1c = 0;
  if (iVar3 != 0) {
    iStack_1c = *(int *)(iVar3 + 0x48);
    iVar4 = *(int *)(iVar3 + 0x4c);
    local_20 = *(void **)(iVar3 + 0x44);
  }
  local_40 = (void *)iStack_1c;
  FUN_005870c0((local_38 - (int)local_3c) + 0xc);
  *(ulonglong *)((int)local_3c + local_30) = CONCAT44(iStack_1c,local_20);
  *(int *)((int)local_3c + local_30 + 8) = iVar4;
  local_30 = local_30 + 0xc;
  if (((0 < (int)local_20) && (0 < (int)local_40)) && (0 < iVar4)) {
    iVar3 = iVar4 * (int)local_40 * (int)local_20;
    local_20 = (void *)0x0;
    iStack_1c = 0;
    local_18 = 0;
    FUN_005870c0(iVar3 * 3);
    pvVar1 = local_20;
    memcpy(local_20,*(void **)(*(int *)(param_3 + 4) + 0x30),iStack_1c - (int)local_20);
    local_50 = (void *)0x0;
    local_4c = 0;
    local_48 = 0;
    local_8._0_1_ = 3;
    FUN_005fc0d0(&local_20,&local_50);
    _Size = local_4c - (int)local_50;
    FUN_005870c0((local_38 - (int)local_3c) + 4);
    *(size_t *)((int)local_3c + local_30) = _Size;
    local_30 = local_30 + 4;
    FUN_005870c0((local_38 - (int)local_3c) + _Size);
    memcpy((void *)((int)local_3c + local_30),local_50,_Size);
    local_30 = local_30 + _Size;
    if (local_50 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_50);
    }
    local_8 = CONCAT31(local_8._1_3_,1);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
  }
  if (param_4 != '\0') {
    FUN_00601e90();
  }
  local_100.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_100.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>(local_98);
  local_8 = CONCAT31(local_8._1_3_,4);
  local_44 = (Sprite *)0x1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_100,(basic_streambuf<char,std::char_traits<char>_> *)local_e8);
  local_8 = 5;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_100.vbtablePtr +
   (local_100.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_104 + (local_100.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
          ) = (local_100.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_e8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_e8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_b0 = 0;
  local_ac = 0;
  local_8._0_1_ = 7;
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_100.basic_ostream<char,std::char_traits<char>_>,param_2);
  uVar6 = FUN_0040e140(local_2c);
  local_8 = CONCAT31(local_8._1_3_,8);
  FUN_004499c0(uVar6,&local_3c);
  if (local_18 < 0x10) {
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_100.vbtablePtr +
     (local_100.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_104 +
            (local_100.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         (local_100.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    local_e8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    FUN_0040b4e0();
    std::basic_streambuf<char,std::char_traits<char>_>::
    ~basic_streambuf<char,std::char_traits<char>_>(local_e8);
    std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
              (local_e0);
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>(local_98)
    ;
    if (local_3c == (void *)0x0) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_3c);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_004a14c0 @ 004a14c0  kind=gamemisc  attributed-by=logic:caller-vote  size=1224 */

void FUN_004a14c0(void)

{
  int iVar1;
  void *pvVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  void *pvVar6;
  void *pvVar7;
  undefined3 uVar8;
  char cVar9;
  uint uVar10;
  int in_ECX;
  int *piVar11;
  void *local_18c;
  int local_188;
  undefined4 local_184;
  void *local_180;
  int local_17c;
  undefined4 local_178;
  void *local_174;
  int local_170;
  undefined4 local_16c;
  void *local_168;
  int local_164;
  undefined4 local_160;
  void *local_15c;
  int local_158;
  undefined4 local_154;
  void *local_150;
  int local_14c;
  undefined4 local_148;
  uint local_141;
  undefined1 local_13d;
  undefined2 local_13c [2];
  undefined4 local_138;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined2 local_12c;
  undefined1 local_128 [256];
  undefined4 local_28;
  undefined4 local_24;
  void *local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006e795d;
  local_10 = ExceptionList;
  uVar10 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18c = (void *)0x0;
  local_188 = 0;
  local_184 = 0;
  local_180 = (void *)0x0;
  local_17c = 0;
  local_178 = 0;
  local_15c = (void *)0x0;
  local_158 = 0;
  local_154 = 0;
  local_150 = (void *)0x0;
  local_14c = 0;
  local_148 = 0;
  local_168 = (void *)0x0;
  local_164 = 0;
  local_160 = 0;
  local_174 = (void *)0x0;
  local_170 = 0;
  local_16c = 0;
  uStack_7 = 0;
  uVar8 = uStack_7;
  uStack_7 = 0;
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28);
  piVar11 = (int *)**(int **)(iVar1 + 0x14);
  local_14 = uVar10;
  if (piVar11 != *(int **)(iVar1 + 0x14)) {
    do {
      local_8 = 5;
      local_12c = 1;
      local_13c[0] = 0;
      local_138 = 0;
      local_134 = 0;
      local_130 = 0;
      local_12e = 0;
      local_28 = 0;
      memset(local_128,0,0x100);
      local_24 = 0;
      local_20 = (void *)0x0;
      local_1c = 0;
      local_18 = 0;
      _local_8 = CONCAT31(uStack_7,6);
      cVar9 = FUN_0059cff0(piVar11 + 2,local_13c);
      if (cVar9 != '\0') {
        switch((char)piVar11[2]) {
        case '\x01':
          break;
        default:
          goto switchD_004a161d_caseD_2;
        case '\x03':
          break;
        case '\x04':
        case '\x05':
        case '\x06':
        case '\a':
          break;
        case '\b':
        case '\t':
          break;
        case '\v':
        }
        FUN_00486600(local_13c);
      }
switchD_004a161d_caseD_2:
      local_8 = 5;
      if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20);
      }
      piVar11 = (int *)*piVar11;
      uVar8 = uStack_7;
    } while (piVar11 != (int *)*(int *)(*(int *)(*(int *)(in_ECX + 0x8006d0) + 0x1d28) + 0x14));
  }
  uStack_7 = uVar8;
  pvVar2 = local_18c;
  local_8 = 5;
  local_141 = local_141 & 0xffffff00;
  FUN_00455c30(local_18c,local_188,(local_188 - (int)local_18c) / 0x128,local_141,uVar10);
  pvVar3 = local_180;
  local_141 = local_141 & 0xffffff00;
  FUN_00455c30(local_180,local_17c,(local_17c - (int)local_180) / 0x128,local_141);
  local_141 = local_141 & 0xffffff00;
  FUN_00455c30(local_15c,local_158,(local_158 - (int)local_15c) / 0x128,local_141);
  local_141 = local_141 & 0xffffff00;
  FUN_00455c30(local_150,local_14c,(local_14c - (int)local_150) / 0x128,local_141);
  local_141 = local_141 & 0xffffff00;
  FUN_00455c30(local_168,local_164,(local_164 - (int)local_168) / 0x128,local_141);
  local_141 = local_141 & 0xffffff00;
  FUN_00455c30(local_174,local_170,(local_170 - (int)local_174) / 0x128,local_141);
  FUN_004a19d0(0,&local_18c);
  FUN_004a19d0(1,&local_180);
  FUN_004a19d0(2,&local_15c);
  FUN_004a19d0(3,&local_150);
  FUN_004a19d0(4,&local_168);
  FUN_004a19d0(5,&local_174);
  FUN_004c6350();
  FUN_004c64c0();
  pvVar7 = local_150;
  pvVar6 = local_15c;
  pvVar5 = local_168;
  pvVar4 = local_174;
  if (local_174 != (void *)0x0) {
    FUN_00452600(local_174,local_170,&local_13d,local_141);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar4);
  }
  if (local_168 != (void *)0x0) {
    FUN_00452600(local_168,local_164,&local_13d,local_141);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar5);
  }
  if (local_150 != (void *)0x0) {
    FUN_00452600(local_150,local_14c,&local_13d,local_141);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar7);
  }
  if (local_15c != (void *)0x0) {
    FUN_00452600(local_15c,local_158,&local_13d,local_141);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar6);
  }
  if (pvVar3 != (void *)0x0) {
    FUN_00452600(pvVar3,local_17c,&local_13d,local_141);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  if (pvVar2 != (void *)0x0) {
    FUN_00452600(pvVar2,local_188,&local_13d,local_141);
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004a2870 @ 004a2870  kind=gamemisc  attributed-by=logic:caller-vote  size=77 */

undefined1 * FUN_004a2870(int param_1,int param_2,int param_3)

{
  int in_ECX;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)(in_ECX + 0x44) && (param_2 < *(int *)(in_ECX + 0x48))) &&
      (param_3 < *(int *)(in_ECX + 0x4c))))) {
    return (undefined1 *)
           (((*(int *)(in_ECX + 0x48) * param_3 + param_2) * *(int *)(in_ECX + 0x44) + param_1) * 3
           + *(int *)(in_ECX + 0x30));
  }
  return &DAT_0076b340;
}


/* FUN_004ab8b0 @ 004ab8b0  kind=gamemisc  attributed-by=logic:caller-vote  size=132 */

undefined4 * FUN_004ab8b0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 0x10);
    puVar1 = param_3 + 9;
    param_1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + -0x24 + (int)puVar1);
        param_3[1] = *(undefined4 *)(param_1 + -0x20 + (int)puVar1);
        puVar1[-7] = puVar2[-2];
        puVar1[-6] = puVar2[-1];
        puVar1[-5] = *puVar2;
        puVar1[-4] = puVar2[1];
        puVar1[-3] = puVar2[2];
        puVar1[-2] = puVar2[3];
        puVar1[-1] = puVar2[4];
        *puVar1 = puVar2[5];
        puVar1[1] = puVar2[6];
      }
      puVar1 = puVar1 + 0xc;
      param_3 = param_3 + 0xc;
      puVar2 = puVar2 + 0xc;
    } while (param_1 + -0x24 + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_004c7250 @ 004c7250  kind=gamemisc  attributed-by=logic:caller-vote  size=858 */

float * FUN_004c7250(float *param_1,undefined4 param_2,float *param_3,float param_4)

{
  float fVar1;
  float fVar2;
  
  switch(param_2) {
  case 1:
    *param_1 = 0.7;
    param_1[1] = 0.7;
    param_1[2] = 0.7;
    param_1[3] = 1.0;
    *param_1 = *param_3 * 0.7;
    param_1[1] = param_3[1] * 0.7;
    param_1[2] = param_3[2] * 0.7;
    param_1[3] = param_3[3];
    return param_1;
  case 2:
    *param_1 = 0.4;
    param_1[1] = 0.3;
    param_1[2] = 0.2;
    param_1[3] = 1.0;
    *param_1 = *param_3 * 0.4;
    param_1[1] = param_3[1] * 0.3;
    param_1[2] = param_3[2] * 0.2;
    param_1[3] = param_3[3];
    return param_1;
  default:
    fVar2 = 0.5;
    *param_1 = 0.5;
    param_1[1] = 0.5;
    param_1[2] = 0.5;
    break;
  case 5:
    fVar2 = 0.1;
    *param_1 = 0.1;
    param_1[1] = 0.1;
    param_1[2] = 0.1;
    break;
  case 7:
    fVar2 = 0.9;
    *param_1 = 0.9;
    param_1[1] = 0.9;
    param_1[2] = 0.9;
    break;
  case 0xb:
    *param_1 = 1.0;
    param_1[1] = 0.7;
    param_1[2] = 0.2;
    param_1[3] = 1.0;
    *param_1 = *param_3;
    param_1[1] = param_3[1] * 0.7;
    param_1[2] = param_3[2] * 0.2;
    param_1[3] = param_3[3];
    return param_1;
  case 0xc:
    *param_1 = 0.8;
    param_1[1] = 0.8;
    param_1[2] = 0.85;
    param_1[3] = 1.0;
    *param_1 = *param_3 * 0.8;
    param_1[1] = param_3[1] * 0.8;
    param_1[2] = param_3[2] * 0.85;
    param_1[3] = param_3[3];
    return param_1;
  case 0x80:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    param_1[1] = fVar1 * 0.5;
    *param_1 = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    param_1[2] = fVar1 * 0.1;
    return param_1;
  case 0x81:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    *param_1 = fVar1 * 0.3;
    param_1[1] = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    param_1[2] = fVar1 * 0.5;
    return param_1;
  case 0x82:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    *param_1 = fVar1 * 0.3;
    param_1[2] = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    param_1[1] = fVar1 * 0.5;
    return param_1;
  case 0x83:
    fVar2 = param_3[3];
    fVar1 = param_4 * 0.5 + 1.0;
    *param_1 = fVar1 * 0.8;
    param_1[1] = fVar1 * 0.8;
    param_1[2] = fVar1;
    param_1[3] = (fVar2 + param_4) * fVar1;
    return param_1;
  }
  param_1[3] = 1.0;
  *param_1 = *param_3 * fVar2;
  param_1[1] = param_3[1] * fVar2;
  param_1[2] = param_3[2] * fVar2;
  param_1[3] = param_3[3];
  return param_1;
}


/* FUN_004ccbf0 @ 004ccbf0  kind=gamemisc  attributed-by=logic:caller-vote  size=54 */

void FUN_004ccbf0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x10);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
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


/* FUN_004e7870 @ 004e7870  kind=gamemisc  attributed-by=logic:caller-vote  size=16417 */

void FUN_004e7870(void)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  int in_ECX;
  int iVar7;
  short sVar8;
  int *piVar9;
  int iVar10;
  void *pvVar11;
  float10 fVar12;
  float fVar13;
  void *local_c04;
  void *local_c00;
  undefined4 local_bfc;
  void *local_bf8;
  void *local_bf4;
  undefined4 local_bf0;
  int *local_bec;
  void *local_be8;
  float local_be4;
  float local_be0;
  int local_bdc;
  byte *local_bd8;
  undefined1 *local_bd4;
  undefined1 *local_bd0;
  undefined4 local_b0c;
  undefined4 local_b08;
  undefined4 local_b04;
  int local_b00;
  int *local_afc;
  void *local_af8;
  undefined4 local_af4;
  undefined4 local_af0;
  undefined4 local_aec;
  undefined4 local_ae8;
  undefined4 local_ae4;
  undefined4 local_ae0;
  int local_adc;
  int local_ad8;
  int local_ad4;
  undefined4 local_ad0;
  undefined4 local_acc;
  undefined4 local_ac8;
  undefined4 local_ac4;
  undefined4 local_ac0;
  undefined4 local_abc;
  undefined4 local_ab8;
  undefined4 local_ab4;
  undefined4 local_ab0;
  undefined4 local_aac;
  undefined4 local_aa8;
  undefined4 local_aa4;
  undefined4 local_aa0;
  undefined4 local_a9c;
  undefined4 local_a98;
  int local_a94;
  int *local_a90;
  int local_a8c;
  int local_a88;
  int *local_a84;
  int local_a80;
  undefined4 local_a7c;
  undefined4 local_a78;
  undefined4 local_a74;
  int local_a70;
  int *local_a6c;
  void *local_a68;
  undefined4 local_a64;
  undefined4 local_a60;
  undefined4 local_a5c;
  undefined4 local_a58;
  undefined4 local_a54;
  undefined4 local_a50;
  int local_a4c;
  int *local_a48;
  int local_a44;
  undefined4 local_a40;
  undefined4 local_a3c;
  undefined4 local_a38;
  undefined4 local_a34;
  undefined4 local_a30;
  undefined4 local_a2c;
  int local_a28;
  int *local_a24;
  void *local_a20;
  undefined4 local_a1c;
  undefined4 local_a18;
  undefined4 local_a14;
  undefined4 local_a10;
  undefined4 local_a0c;
  undefined4 local_a08;
  int local_a04;
  int *local_a00;
  void *local_9fc;
  int local_9f8;
  int local_9f4;
  int local_9f0;
  undefined4 local_9ec;
  undefined4 local_9e8;
  undefined4 local_9e4;
  undefined4 local_9e0;
  undefined4 local_9dc;
  undefined4 local_9d8;
  undefined4 local_9d4;
  undefined4 local_9d0;
  undefined4 local_9cc;
  undefined4 local_9c8;
  undefined4 local_9c4;
  undefined4 local_9c0;
  int local_9bc;
  int local_9b8;
  void *local_9b4;
  int local_9b0;
  int local_9ac;
  int local_9a8;
  undefined4 local_9a4;
  undefined4 local_9a0;
  undefined4 local_99c;
  undefined4 local_998;
  undefined4 local_994;
  undefined4 local_990;
  undefined4 local_98c;
  undefined4 local_988;
  undefined4 local_984;
  undefined4 local_980;
  undefined4 local_97c;
  undefined4 local_978;
  int local_974;
  int local_970;
  void *local_96c;
  int local_968;
  int *local_964;
  int local_960;
  undefined4 local_95c;
  undefined4 local_958;
  undefined4 local_954;
  undefined4 local_950;
  undefined4 local_94c;
  undefined4 local_948;
  undefined4 local_944;
  undefined4 local_940;
  undefined4 local_93c;
  undefined4 local_938;
  undefined4 local_934;
  undefined4 local_930;
  int local_92c;
  int *local_928;
  void *local_924;
  int local_920;
  int *local_91c;
  void *local_918;
  undefined4 local_914;
  undefined4 local_910;
  undefined4 local_90c;
  undefined4 local_908;
  undefined4 local_904;
  undefined4 local_900;
  undefined4 local_8fc;
  undefined4 local_8f8;
  undefined4 local_8f4;
  undefined4 local_8f0;
  undefined4 local_8ec;
  undefined4 local_8e8;
  int local_8e4;
  void *local_8e0;
  void *local_8dc;
  undefined4 local_8d8;
  undefined4 local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined4 local_8c8;
  undefined4 local_8c4;
  int local_8c0;
  int local_8bc;
  void *local_8b8;
  undefined4 local_8b4;
  undefined4 local_8b0;
  undefined4 local_8ac;
  undefined4 local_8a8;
  undefined4 local_8a4;
  undefined4 local_8a0;
  undefined4 local_89c;
  undefined4 local_898;
  undefined4 local_894;
  undefined4 local_890;
  undefined4 local_88c;
  undefined4 local_888;
  int local_884;
  void *local_880;
  int local_87c;
  int local_878;
  int local_874;
  void *local_870;
  undefined4 local_86c;
  undefined4 local_868;
  undefined4 local_864;
  undefined4 local_860;
  undefined4 local_85c;
  undefined4 local_858;
  undefined4 local_854;
  undefined4 local_850;
  undefined4 local_84c;
  undefined4 local_848;
  undefined4 local_844;
  undefined4 local_840;
  int local_83c;
  void *local_838;
  void *local_834;
  int local_830;
  int *local_82c;
  int local_828;
  undefined4 local_824;
  undefined4 local_820;
  undefined4 local_81c;
  undefined4 local_818;
  undefined4 local_814;
  undefined4 local_810;
  undefined4 local_80c;
  undefined4 local_808;
  undefined4 local_804;
  undefined4 local_800;
  undefined4 local_7fc;
  undefined4 local_7f8;
  int local_7f4;
  int *local_7f0;
  int local_7ec;
  int local_7e8;
  int local_7e4;
  int local_7e0;
  undefined4 local_7dc;
  undefined4 local_7d8;
  undefined4 local_7d4;
  undefined4 local_7d0;
  undefined4 local_7cc;
  undefined4 local_7c8;
  int local_7c4;
  void *local_7c0;
  int local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  float local_7ac;
  float fStack_7a8;
  float local_7a4;
  undefined4 uStack_7a0;
  undefined8 local_79c;
  undefined8 local_794;
  float local_78c;
  float fStack_788;
  byte *local_784;
  undefined4 uStack_780;
  float local_77c;
  float fStack_778;
  byte *local_774;
  undefined4 uStack_770;
  undefined8 local_76c;
  undefined8 local_764;
  undefined8 local_75c;
  undefined8 local_754;
  float local_74c;
  float fStack_748;
  float local_744;
  undefined4 uStack_740;
  float local_73c;
  float fStack_738;
  float local_734;
  undefined4 uStack_730;
  float local_72c;
  float fStack_728;
  byte *local_724;
  undefined4 uStack_720;
  float local_71c;
  float fStack_718;
  byte *local_714;
  undefined4 uStack_710;
  undefined8 local_70c;
  undefined8 local_704;
  float local_6fc;
  float fStack_6f8;
  float local_6f4;
  undefined4 uStack_6f0;
  float local_6ec;
  float fStack_6e8;
  float local_6e4;
  undefined4 uStack_6e0;
  undefined8 local_6dc;
  undefined8 local_6d4;
  float local_6cc;
  float fStack_6c8;
  byte *local_6c4;
  undefined4 uStack_6c0;
  float local_6bc;
  float fStack_6b8;
  byte *local_6b4;
  undefined4 uStack_6b0;
  undefined8 local_6ac;
  undefined8 local_6a4;
  float local_69c;
  float fStack_698;
  float local_694;
  undefined4 uStack_690;
  float local_68c;
  float fStack_688;
  float local_684;
  undefined4 uStack_680;
  float local_67c;
  float fStack_678;
  float local_674;
  undefined4 uStack_670;
  float local_66c;
  float fStack_668;
  byte *local_664;
  undefined4 uStack_660;
  float local_65c;
  float fStack_658;
  byte *local_654;
  undefined4 uStack_650;
  undefined8 local_64c;
  undefined8 local_644;
  undefined8 local_63c;
  undefined8 local_634;
  float local_62c;
  float fStack_628;
  float local_624;
  undefined4 uStack_620;
  float local_61c;
  float fStack_618;
  float local_614;
  undefined4 uStack_610;
  float local_60c;
  float fStack_608;
  byte *local_604;
  undefined4 uStack_600;
  float local_5fc;
  float fStack_5f8;
  byte *local_5f4;
  undefined4 uStack_5f0;
  undefined8 local_5ec;
  undefined8 local_5e4;
  undefined8 local_5dc;
  undefined8 local_5d4;
  float local_5cc;
  float fStack_5c8;
  float local_5c4;
  undefined4 uStack_5c0;
  float local_5bc;
  float fStack_5b8;
  float local_5b4;
  undefined4 uStack_5b0;
  float local_5ac;
  float fStack_5a8;
  byte *local_5a4;
  undefined4 uStack_5a0;
  float local_59c;
  float fStack_598;
  byte *local_594;
  undefined4 uStack_590;
  undefined8 local_58c;
  undefined8 local_584;
  float local_57c;
  float fStack_578;
  float local_574;
  undefined4 uStack_570;
  float local_56c;
  float fStack_568;
  float local_564;
  undefined4 uStack_560;
  undefined8 local_55c;
  undefined8 local_554;
  float local_54c;
  float fStack_548;
  byte *local_544;
  undefined4 uStack_540;
  float local_53c;
  float fStack_538;
  byte *local_534;
  undefined4 uStack_530;
  undefined8 local_52c;
  undefined8 local_524;
  float local_51c;
  float fStack_518;
  float local_514;
  undefined4 uStack_510;
  float local_50c;
  float fStack_508;
  float local_504;
  undefined4 uStack_500;
  undefined8 local_4fc;
  undefined8 local_4f4;
  float local_4ec;
  float fStack_4e8;
  byte *local_4e4;
  undefined4 uStack_4e0;
  float local_4dc;
  float fStack_4d8;
  byte *local_4d4;
  undefined4 uStack_4d0;
  undefined8 local_4cc;
  undefined8 local_4c4;
  float local_4bc;
  float fStack_4b8;
  float local_4b4;
  undefined4 uStack_4b0;
  float local_4ac;
  float fStack_4a8;
  float local_4a4;
  undefined4 uStack_4a0;
  undefined8 local_49c;
  undefined8 local_494;
  float local_48c;
  float fStack_488;
  byte *local_484;
  undefined4 uStack_480;
  float local_47c;
  float fStack_478;
  byte *local_474;
  undefined4 uStack_470;
  undefined8 local_46c;
  undefined8 local_464;
  float local_45c;
  float fStack_458;
  float local_454;
  undefined4 uStack_450;
  float local_44c;
  float fStack_448;
  float local_444;
  undefined4 uStack_440;
  undefined8 local_43c;
  undefined8 local_434;
  float local_42c;
  float fStack_428;
  byte *local_424;
  undefined4 uStack_420;
  float local_41c;
  float fStack_418;
  byte *local_414;
  undefined4 uStack_410;
  undefined8 local_40c;
  undefined8 local_404;
  float local_3fc;
  float fStack_3f8;
  float local_3f4;
  undefined4 uStack_3f0;
  float local_3ec;
  float fStack_3e8;
  float local_3e4;
  undefined4 uStack_3e0;
  undefined8 local_3dc;
  undefined8 local_3d4;
  float local_3cc;
  float fStack_3c8;
  byte *local_3c4;
  undefined4 uStack_3c0;
  float local_3bc;
  float fStack_3b8;
  byte *local_3b4;
  undefined4 uStack_3b0;
  undefined8 local_3ac;
  undefined8 local_3a4;
  float local_39c;
  float fStack_398;
  float local_394;
  undefined4 uStack_390;
  float local_38c;
  float fStack_388;
  float local_384;
  undefined4 uStack_380;
  undefined8 local_37c;
  undefined8 local_374;
  float local_36c;
  float fStack_368;
  byte *local_364;
  undefined4 uStack_360;
  undefined8 local_35c;
  undefined8 local_354;
  undefined8 local_34c;
  undefined8 local_344;
  float local_33c;
  float fStack_338;
  byte *local_334;
  undefined4 uStack_330;
  float local_32c;
  float fStack_328;
  float local_324;
  undefined8 local_320;
  float local_318;
  float local_314;
  float fStack_310;
  float local_30c;
  float fStack_308;
  float local_304;
  float fStack_300;
  float local_2fc;
  float fStack_2f8;
  float local_2f4;
  float fStack_2f0;
  float local_2ec;
  float fStack_2e8;
  float local_2e4;
  float fStack_2e0;
  float local_2dc;
  float fStack_2d8;
  float local_2d4;
  float fStack_2d0;
  float local_2cc;
  float fStack_2c8;
  float local_2c4;
  float fStack_2c0;
  float local_2bc;
  float fStack_2b8;
  float local_2b4;
  float fStack_2b0;
  float local_2ac;
  float fStack_2a8;
  float local_2a4;
  float fStack_2a0;
  float local_29c;
  float fStack_298;
  float local_294;
  float fStack_290;
  float local_28c;
  float fStack_288;
  float local_284;
  float fStack_280;
  float local_27c;
  float fStack_278;
  float local_274;
  float fStack_270;
  float local_26c;
  float fStack_268;
  float local_264;
  float fStack_260;
  float local_25c;
  float fStack_258;
  float local_254;
  float fStack_250;
  float local_24c;
  float fStack_248;
  float local_244;
  float fStack_240;
  float local_23c;
  float fStack_238;
  float local_234;
  float fStack_230;
  float local_22c;
  float fStack_228;
  float local_224;
  float fStack_220;
  float local_21c;
  float fStack_218;
  float local_214;
  float fStack_210;
  float local_20c;
  float fStack_208;
  float local_204;
  float fStack_200;
  float local_1fc;
  float fStack_1f8;
  float local_1f4;
  float fStack_1f0;
  float local_1ec;
  float fStack_1e8;
  float local_1e4;
  float fStack_1e0;
  float local_1dc;
  float fStack_1d8;
  float local_1d4;
  float fStack_1d0;
  float local_1cc;
  float fStack_1c8;
  float local_1c4;
  float fStack_1c0;
  float local_1bc;
  float fStack_1b8;
  float local_1b4;
  float fStack_1b0;
  float local_1ac;
  float fStack_1a8;
  float local_1a4;
  float fStack_1a0;
  float local_19c;
  float fStack_198;
  float local_194;
  float fStack_190;
  float local_18c;
  float fStack_188;
  float local_184;
  float fStack_180;
  float local_17c;
  float fStack_178;
  float local_174;
  float fStack_170;
  float local_16c;
  float fStack_168;
  float local_164;
  float fStack_160;
  float local_15c;
  float fStack_158;
  float local_154;
  float fStack_150;
  float local_14c;
  float fStack_148;
  float local_144;
  float fStack_140;
  float local_13c;
  float fStack_138;
  float local_134;
  float fStack_130;
  float local_12c;
  float fStack_128;
  float local_124;
  float fStack_120;
  float local_11c;
  float fStack_118;
  float local_114;
  float fStack_110;
  float local_10c;
  float fStack_108;
  float local_104;
  float fStack_100;
  float local_fc;
  float fStack_f8;
  float local_f4;
  float fStack_f0;
  float local_ec;
  float fStack_e8;
  float local_e4;
  float fStack_e0;
  float local_dc;
  float fStack_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  float fStack_c8;
  float local_c4;
  float fStack_c0;
  float local_bc;
  float fStack_b8;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float local_9c;
  float fStack_98;
  float local_94;
  float fStack_90;
  float local_8c;
  float fStack_88;
  float local_84;
  float fStack_80;
  float local_7c;
  float fStack_78;
  float local_74;
  float fStack_70;
  float local_6c;
  float fStack_68;
  float local_64;
  float fStack_60;
  float local_5c;
  float fStack_58;
  float local_54;
  float fStack_50;
  float local_4c;
  float fStack_48;
  float local_44;
  float fStack_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006e9fb6;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_bf8 = (void *)0x0;
  local_bf4 = (void *)0x0;
  local_bf0 = 0;
  local_c04 = (void *)0x0;
  local_c00 = (void *)0x0;
  local_bfc = 0;
  local_8 = 1;
  local_bdc = 0;
  local_14 = uVar4;
  if (0 < *(int *)(in_ECX + 0x44)) {
    do {
      local_bec = (int *)0x0;
      iVar7 = local_bdc;
      if (0 < *(int *)(in_ECX + 0x48)) {
        do {
          local_be8 = (void *)0x0;
          piVar9 = local_bec;
          if (0 < *(int *)(in_ECX + 0x4c)) {
            do {
              pvVar11 = local_be8;
              if (((((iVar7 < 0) || ((int)piVar9 < 0)) || ((int)local_be8 < 0)) ||
                  ((*(int *)(in_ECX + 0x44) <= iVar7 || (*(int *)(in_ECX + 0x48) <= (int)piVar9))))
                 || (*(int *)(in_ECX + 0x4c) <= (int)local_be8)) {
                local_bd8 = &DAT_0076b340;
              }
              else {
                local_bd8 = (byte *)(((int)(*(int *)(in_ECX + 0x48) * (int)local_be8 + (int)piVar9)
                                      * *(int *)(in_ECX + 0x44) + iVar7) * 3 +
                                    *(int *)(in_ECX + 0x30));
              }
              cVar3 = FUN_004e71d0(local_bd8,*(undefined1 *)(in_ECX + 0x55));
              if (cVar3 == '\0') {
                local_32c = (float)*local_bd8;
                fStack_328 = (float)local_bd8[1];
                iVar7 = local_bdc + -1;
                local_324 = (float)local_bd8[2];
                local_320 = CONCAT44(fStack_328,local_32c);
                local_be4 = local_32c / 255.0;
                local_be0 = fStack_328 / 255.0;
                local_bd8 = (byte *)(local_324 / 255.0);
                if (((iVar7 < 0) || ((int)piVar9 < 0)) ||
                   (((int)pvVar11 < 0 ||
                    (((*(int *)(in_ECX + 0x44) <= iVar7 || (*(int *)(in_ECX + 0x48) <= (int)piVar9))
                     || (*(int *)(in_ECX + 0x4c) <= (int)pvVar11)))))) {
                  local_bd4 = &DAT_0076b340;
                }
                else {
                  local_bd4 = (undefined1 *)
                              (((int)(*(int *)(in_ECX + 0x48) * (int)pvVar11 + (int)piVar9) *
                                *(int *)(in_ECX + 0x44) + iVar7) * 3 + *(int *)(in_ECX + 0x30));
                }
                iVar7 = 0;
                local_bd4 = local_bd4 + -0x76b340;
                do {
                  local_318 = local_324;
                  if ((&DAT_0076b340)[(int)(local_bd4 + iVar7)] != (&DAT_0076b340)[iVar7])
                  goto LAB_004e8400;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 3);
                local_980 = 0xffffffff;
                local_97c = 0;
                local_978 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,piVar9,pvVar11,&local_980);
                local_bd4 = (undefined1 *)(float)fVar12;
                local_694 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_69c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_698 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_37c = CONCAT44(fStack_698,local_69c);
                uStack_690 = 0x3f800000;
                local_374 = CONCAT44(0x3f800000,local_694);
                local_59c = local_be4;
                fStack_598 = local_be0;
                local_594 = local_bd8;
                uStack_590 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd4;
                _local_84 = CONCAT44(local_be0 * (float)local_bd4,local_be4 * (float)local_bd4);
                _local_7c = CONCAT44((float)local_bd4 * 1.0,(float)local_bd8 * (float)local_bd4);
                _local_1e4 = CONCAT44(local_be0 * (float)local_bd4 + fVar13 * fStack_698,
                                      local_be4 * (float)local_bd4 + fVar13 * local_69c);
                _local_1dc = CONCAT44((float)local_bd4 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd8 * (float)local_bd4 + fVar13 * local_694);
                local_b00 = local_bdc;
                local_800 = 0xffffffff;
                local_7fc = 0;
                local_7f8 = 0;
                local_afc = piVar9;
                local_af8 = pvVar11;
                uVar5 = FUN_00466650(&local_b00,&local_800,&local_1e4);
                FUN_00486830(uVar5);
                iVar10 = (int)pvVar11 + 1;
                local_818 = 0xffffffff;
                local_814 = 0;
                local_810 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,piVar9,iVar10,&local_818);
                local_bd4 = (undefined1 *)(float)fVar12;
                local_394 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_39c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_398 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_79c = CONCAT44(fStack_398,local_39c);
                uStack_390 = 0x3f800000;
                local_794 = CONCAT44(0x3f800000,local_394);
                local_3bc = local_be4;
                fStack_3b8 = local_be0;
                local_3b4 = local_bd8;
                uStack_3b0 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd4;
                _local_184 = CONCAT44(local_be0 * (float)local_bd4,local_be4 * (float)local_bd4);
                local_830 = local_bdc;
                _local_17c = CONCAT44((float)local_bd4 * 1.0,(float)local_bd8 * (float)local_bd4);
                local_998 = 0xffffffff;
                _local_284 = CONCAT44(local_be0 * (float)local_bd4 + fVar13 * fStack_398,
                                      local_be4 * (float)local_bd4 + fVar13 * local_39c);
                local_994 = 0;
                local_990 = 0;
                _local_27c = CONCAT44((float)local_bd4 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd8 * (float)local_bd4 + fVar13 * local_394);
                local_82c = piVar9;
                local_828 = iVar10;
                uVar5 = FUN_00466650(&local_830,&local_998,&local_284);
                FUN_00486830(uVar5);
                iVar7 = (int)piVar9 + 1;
                local_a58 = 0xffffffff;
                local_a54 = 0;
                local_a50 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,iVar7,iVar10,&local_a58);
                local_bd4 = (undefined1 *)(float)fVar12;
                local_5b4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_5bc = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_5b8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_3dc = CONCAT44(fStack_5b8,local_5bc);
                uStack_5b0 = 0x3f800000;
                local_3d4 = CONCAT44(0x3f800000,local_5b4);
                fVar13 = 1.0 - (float)local_bd4;
                local_6bc = local_be4;
                fStack_6b8 = local_be0;
                local_6b4 = local_bd8;
                uStack_6b0 = 0x3f800000;
                local_9b0 = local_bdc;
                _local_a4 = CONCAT44(local_be0 * (float)local_bd4,local_be4 * (float)local_bd4);
                _local_9c = CONCAT44((float)local_bd4 * 1.0,(float)local_bd8 * (float)local_bd4);
                local_7b8 = 0xffffffff;
                local_7b4 = 0;
                local_7b0 = 0;
                _local_204 = CONCAT44(local_be0 * (float)local_bd4 + fStack_5b8 * fVar13,
                                      local_be4 * (float)local_bd4 + local_5bc * fVar13);
                _local_1fc = CONCAT44((float)local_bd4 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd8 * (float)local_bd4 + local_5b4 * fVar13);
                local_9ac = iVar7;
                local_9a8 = iVar10;
                uVar5 = FUN_00466650(&local_9b0,&local_7b8,&local_204);
                FUN_00486830(uVar5);
                pvVar11 = local_be8;
                local_860 = 0xffffffff;
                local_85c = 0;
                local_858 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,iVar7,local_be8,&local_860);
                local_bd4 = (undefined1 *)(float)fVar12;
                local_3fc = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_3f8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_3f4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_5dc = CONCAT44(fStack_3f8,local_3fc);
                uStack_3f0 = 0x3f800000;
                local_5d4 = CONCAT44(0x3f800000,local_3f4);
                fVar13 = 1.0 - (float)local_bd4;
                uStack_410 = 0x3f800000;
                local_878 = local_bdc;
                local_41c = local_be4;
                fStack_418 = local_be0;
                local_414 = local_bd8;
                _local_124 = CONCAT44(local_be0 * (float)local_bd4,local_be4 * (float)local_bd4);
                local_ab8 = 0xffffffff;
                local_ab4 = 0;
                _local_11c = CONCAT44((float)local_bd4 * 1.0,(float)local_bd8 * (float)local_bd4);
                local_ab0 = 0;
                local_870 = pvVar11;
                _local_304 = CONCAT44(local_be0 * (float)local_bd4 + fStack_3f8 * fVar13,
                                      local_be4 * (float)local_bd4 + local_3fc * fVar13);
                _local_2fc = CONCAT44((float)local_bd4 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd8 * (float)local_bd4 + local_3f4 * fVar13);
                local_874 = iVar7;
                uVar5 = FUN_00466650(&local_878,&local_ab8,&local_304);
                FUN_00486830(uVar5);
                piVar9 = local_bec;
LAB_004e8400:
                local_bd4 = (undefined1 *)(local_bdc + 1);
                if (((((int)local_bd4 < 0) || ((int)piVar9 < 0)) ||
                    (((int)pvVar11 < 0 ||
                     ((*(int *)(in_ECX + 0x44) <= (int)local_bd4 ||
                      (*(int *)(in_ECX + 0x48) <= (int)piVar9)))))) ||
                   (*(int *)(in_ECX + 0x4c) <= (int)pvVar11)) {
                  local_bd0 = &DAT_0076b340;
                }
                else {
                  local_bd0 = (undefined1 *)
                              (((int)(*(int *)(in_ECX + 0x48) * (int)pvVar11 + (int)piVar9) *
                                *(int *)(in_ECX + 0x44) + (int)local_bd4) * 3 +
                              *(int *)(in_ECX + 0x30));
                }
                iVar7 = 0;
                local_bd0 = local_bd0 + -0x76b340;
                do {
                  if ((&DAT_0076b340)[(int)(local_bd0 + iVar7)] != (&DAT_0076b340)[iVar7])
                  goto LAB_004e8dc5;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 3);
                local_9c8 = 1;
                local_9c4 = 0;
                local_9c0 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,piVar9,pvVar11,&local_9c8);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_734 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_73c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_738 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_43c = CONCAT44(fStack_738,local_73c);
                uStack_730 = 0x3f800000;
                local_434 = CONCAT44(0x3f800000,local_734);
                local_5fc = local_be4;
                fStack_5f8 = local_be0;
                local_5f4 = local_bd8;
                uStack_5f0 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd0;
                _local_c4 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                _local_bc = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                local_890 = 1;
                _local_224 = CONCAT44(local_be0 * (float)local_bd0 + fVar13 * fStack_738,
                                      local_73c * fVar13 + local_be4 * (float)local_bd0);
                _local_21c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd8 * (float)local_bd0 + fVar13 * local_734);
                local_a70 = (int)local_bd4;
                local_88c = 0;
                local_888 = 0;
                local_a6c = piVar9;
                local_a68 = pvVar11;
                uVar5 = FUN_00466650(&local_a70,&local_890,&local_224);
                FUN_00486830(uVar5);
                iVar7 = (int)piVar9 + 1;
                local_8a8 = 1;
                local_8a4 = 0;
                local_8a0 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,iVar7,pvVar11,&local_8a8);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_45c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                local_454 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                fStack_458 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_6dc = CONCAT44(fStack_458,local_45c);
                uStack_450 = 0x3f800000;
                local_6d4 = CONCAT44(0x3f800000,local_454);
                local_47c = local_be4;
                fStack_478 = local_be0;
                local_474 = local_bd8;
                uStack_470 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd0;
                _local_24 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_1c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_8c0 = (int)local_bd4;
                _local_2a4 = CONCAT44((float)local_bd0 * local_be0 + fVar13 * fStack_458,
                                      (float)local_bd0 * local_be4 + fVar13 * local_45c);
                local_9e0 = 1;
                local_9dc = 0;
                local_9d8 = 0;
                _local_29c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + fVar13 * local_454);
                local_8bc = iVar7;
                local_8b8 = pvVar11;
                uVar5 = FUN_00466650(&local_8c0,&local_9e0,&local_2a4);
                FUN_00486830(uVar5);
                iVar10 = (int)pvVar11 + 1;
                local_ae8 = 1;
                local_ae4 = 0;
                local_ae0 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,iVar7,iVar10,&local_ae8);
                local_bd0 = (undefined1 *)(float)fVar12;
                fStack_618 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_614 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_61c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fVar13 = 1.0 - (float)local_bd0;
                local_49c = CONCAT44(fStack_618,local_61c);
                uStack_610 = 0x3f800000;
                local_494 = CONCAT44(0x3f800000,local_614);
                local_77c = local_be4;
                fStack_778 = local_be0;
                local_774 = local_bd8;
                uStack_770 = 0x3f800000;
                local_9f8 = (int)local_bd4;
                _local_34 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_2c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_8d8 = 1;
                local_8d4 = 0;
                local_8d0 = 0;
                _local_244 = CONCAT44((float)local_bd0 * local_be0 + fVar13 * fStack_618,
                                      (float)local_bd0 * local_be4 + fVar13 * local_61c);
                _local_23c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + fVar13 * local_614);
                local_9f4 = iVar7;
                local_9f0 = iVar10;
                uVar5 = FUN_00466650(&local_9f8,&local_8d8,&local_244);
                FUN_00486830(uVar5);
                piVar9 = local_bec;
                local_848 = 1;
                local_844 = 0;
                local_840 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,local_bec,iVar10,&local_848);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_4bc = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_4b8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_4b4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_63c = CONCAT44(fStack_4b8,local_4bc);
                uStack_4b0 = 0x3f800000;
                local_634 = CONCAT44(0x3f800000,local_4b4);
                local_4dc = local_be4;
                fStack_4d8 = local_be0;
                local_4d4 = local_bd8;
                uStack_4d0 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd0;
                _local_164 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_15c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_a88 = (int)local_bd4;
                _local_2e4 = CONCAT44((float)local_bd0 * local_be0 + fVar13 * fStack_4b8,
                                      (float)local_bd0 * local_be4 + fVar13 * local_4bc);
                local_8f0 = 1;
                local_8ec = 0;
                local_8e8 = 0;
                local_a84 = piVar9;
                _local_2dc = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + fVar13 * local_4b4);
                local_a80 = iVar10;
                uVar5 = FUN_00466650(&local_a88,&local_8f0,&local_2e4);
                FUN_00486830(uVar5);
LAB_004e8dc5:
                pvVar11 = local_be8;
                iVar7 = (int)piVar9 + -1;
                if ((((local_bdc < 0) || (iVar7 < 0)) || ((int)local_be8 < 0)) ||
                   (((*(int *)(in_ECX + 0x44) <= local_bdc || (*(int *)(in_ECX + 0x48) <= iVar7)) ||
                    (*(int *)(in_ECX + 0x4c) <= (int)local_be8)))) {
                  local_bd0 = &DAT_0076b340;
                }
                else {
                  local_bd0 = (undefined1 *)
                              (((*(int *)(in_ECX + 0x48) * (int)local_be8 + iVar7) *
                                *(int *)(in_ECX + 0x44) + local_bdc) * 3 + *(int *)(in_ECX + 0x30));
                }
                iVar7 = 0;
                local_bd0 = local_bd0 + -0x76b340;
                do {
                  if ((&DAT_0076b340)[(int)(local_bd0 + iVar7)] != (&DAT_0076b340)[iVar7])
                  goto LAB_004e979a;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 3);
                local_908 = 0;
                local_904 = 0xffffffff;
                local_900 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,piVar9,local_be8,&local_908);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_6fc = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                local_6f4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                fStack_6f8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_4fc = CONCAT44(fStack_6f8,local_6fc);
                uStack_6f0 = 0x3f800000;
                local_4f4 = CONCAT44(0x3f800000,local_6f4);
                local_65c = local_be4;
                fStack_658 = local_be0;
                local_654 = local_bd8;
                uStack_650 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd0;
                local_a10 = 0;
                _local_e4 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_dc = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                _local_264 = CONCAT44((float)local_bd0 * local_be0 + fVar13 * fStack_6f8,
                                      (float)local_bd0 * local_be4 + fVar13 * local_6fc);
                _local_25c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + fVar13 * local_6f4);
                local_920 = local_bdc;
                local_a0c = 0xffffffff;
                local_a08 = 0;
                local_918 = pvVar11;
                local_91c = piVar9;
                uVar5 = FUN_00466650(&local_920,&local_a10,&local_264);
                FUN_00486830(uVar5);
                local_ad0 = 0;
                local_acc = 0xffffffff;
                local_ac8 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,piVar9,pvVar11,&local_ad0);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_51c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                local_514 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                fStack_518 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_75c = CONCAT44(fStack_518,local_51c);
                uStack_510 = 0x3f800000;
                local_754 = CONCAT44(0x3f800000,local_514);
                local_53c = local_be4;
                fStack_538 = local_be0;
                local_534 = local_bd8;
                uStack_530 = 0x3f800000;
                fVar13 = 1.0 - (float)local_bd0;
                _local_144 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_13c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_a28 = (int)local_bd4;
                _local_1c4 = CONCAT44((float)local_bd0 * local_be0 + fVar13 * fStack_518,
                                      (float)local_bd0 * local_be4 + fVar13 * local_51c);
                local_938 = 0;
                local_934 = 0xffffffff;
                local_930 = 0;
                local_a20 = pvVar11;
                _local_1bc = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + fVar13 * local_514);
                local_a24 = piVar9;
                uVar5 = FUN_00466650(&local_a28,&local_938,&local_1c4);
                FUN_00486830(uVar5);
                iVar7 = (int)pvVar11 + 1;
                local_950 = 0;
                local_94c = 0xffffffff;
                local_948 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,local_bec,iVar7,&local_950);
                local_bd0 = (undefined1 *)(float)fVar12;
                fStack_678 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_674 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_67c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fVar13 = 1.0 - (float)local_bd0;
                local_55c = CONCAT44(fStack_678,local_67c);
                uStack_670 = 0x3f800000;
                local_554 = CONCAT44(0x3f800000,local_674);
                local_71c = local_be4;
                fStack_718 = local_be0;
                local_714 = local_bd8;
                uStack_710 = 0x3f800000;
                local_968 = (int)local_bd4;
                local_964 = local_bec;
                _local_44 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_3c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_aa0 = 0;
                _local_1b4 = CONCAT44((float)local_bd0 * local_be0 + fVar13 * fStack_678,
                                      (float)local_bd0 * local_be4 + fVar13 * local_67c);
                local_a9c = 0xffffffff;
                local_a98 = 0;
                _local_1ac = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + fVar13 * local_674);
                local_960 = iVar7;
                uVar5 = FUN_00466650(&local_968,&local_aa0,&local_1b4);
                FUN_00486830(uVar5);
                local_a40 = 0;
                local_a3c = 0xffffffff;
                local_a38 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,local_bec,iVar7,&local_a40);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_57c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_578 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_574 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                uStack_570 = 0x3f800000;
                local_34c = CONCAT44(fStack_578,local_57c);
                local_344 = CONCAT44(0x3f800000,local_574);
                fVar13 = 1.0 - (float)local_bd0;
                uStack_360 = 0x3f800000;
                local_7f4 = local_bdc;
                local_36c = local_be4;
                fStack_368 = local_be0;
                local_364 = local_bd8;
                local_7f0 = local_bec;
                _local_64 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_5c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_7dc = 0;
                local_7d8 = 0xffffffff;
                local_7d4 = 0;
                _local_1d4 = CONCAT44((float)local_bd0 * local_be0 + fStack_578 * fVar13,
                                      (float)local_bd0 * local_be4 + local_57c * fVar13);
                _local_1cc = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + local_574 * fVar13);
                local_7ec = iVar7;
                uVar5 = FUN_00466650(&local_7f4,&local_7dc,&local_1d4);
                FUN_00486830(uVar5);
                piVar9 = local_bec;
LAB_004e979a:
                pvVar1 = (void *)((int)piVar9 + 1);
                if (((local_bdc < 0) || ((int)pvVar1 < 0)) ||
                   (((int)pvVar11 < 0 ||
                    (((*(int *)(in_ECX + 0x44) <= local_bdc ||
                      (*(int *)(in_ECX + 0x48) <= (int)pvVar1)) ||
                     (*(int *)(in_ECX + 0x4c) <= (int)pvVar11)))))) {
                  puVar6 = &DAT_0076b340;
                }
                else {
                  puVar6 = (undefined1 *)
                           (((int)(*(int *)(in_ECX + 0x48) * (int)pvVar11 + (int)pvVar1) *
                             *(int *)(in_ECX + 0x44) + local_bdc) * 3 + *(int *)(in_ECX + 0x30));
                }
                iVar7 = 0;
                local_bd0 = puVar6 + -0x76b340;
                do {
                  local_be8 = pvVar1;
                  if (puVar6[iVar7] != (&DAT_0076b340)[iVar7]) goto LAB_004ea1c6;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 3);
                local_80c = 0;
                local_808 = 1;
                local_804 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,pvVar1,pvVar11,&local_80c);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_38c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                local_384 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                fStack_388 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_3ac = CONCAT44(fStack_388,local_38c);
                uStack_380 = 0x3f800000;
                local_3a4 = CONCAT44(0x3f800000,local_384);
                fVar13 = 1.0 - (float)local_bd0;
                uStack_3c0 = 0x3f800000;
                local_3cc = local_be4;
                fStack_3c8 = local_be0;
                local_3c4 = local_bd8;
                _local_74 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_6c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                _local_1f4 = CONCAT44((float)local_bd0 * local_be0 + fStack_388 * fVar13,
                                      (float)local_bd0 * local_be4 + local_38c * fVar13);
                local_83c = local_bdc;
                _local_1ec = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + local_384 * fVar13);
                local_824 = 0;
                local_820 = 1;
                local_81c = 0;
                local_834 = pvVar11;
                local_838 = pvVar1;
                uVar5 = FUN_00466650(&local_83c,&local_824,&local_1f4);
                FUN_00486830(uVar5);
                iVar7 = (int)pvVar11 + 1;
                local_854 = 0;
                local_850 = 1;
                local_84c = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bdc,local_be8,iVar7,&local_854);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_3e4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_3ec = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_3e8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_40c = CONCAT44(fStack_3e8,local_3ec);
                uStack_3e0 = 0x3f800000;
                local_404 = CONCAT44(0x3f800000,local_3e4);
                fVar13 = 1.0 - (float)local_bd0;
                uStack_420 = 0x3f800000;
                local_42c = local_be4;
                fStack_428 = local_be0;
                local_424 = local_bd8;
                _local_94 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_8c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_884 = local_bdc;
                local_880 = local_be8;
                _local_214 = CONCAT44((float)local_bd0 * local_be0 + fStack_3e8 * fVar13,
                                      (float)local_bd0 * local_be4 + local_3ec * fVar13);
                local_86c = 0;
                local_868 = 1;
                local_864 = 0;
                _local_20c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + local_3e4 * fVar13);
                local_87c = iVar7;
                uVar5 = FUN_00466650(&local_884,&local_86c,&local_214);
                FUN_00486830(uVar5);
                local_89c = 0;
                local_898 = 1;
                local_894 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,local_be8,iVar7,&local_89c);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_444 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_44c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_448 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_46c = CONCAT44(fStack_448,local_44c);
                uStack_440 = 0x3f800000;
                local_464 = CONCAT44(0x3f800000,local_444);
                fVar13 = 1.0 - (float)local_bd0;
                local_48c = local_be4;
                fStack_488 = local_be0;
                local_484 = local_bd8;
                uStack_480 = 0x3f800000;
                local_7c4 = (int)local_bd4;
                local_7c0 = local_be8;
                _local_b4 = CONCAT44((float)local_bd0 * local_be0,(float)local_bd0 * local_be4);
                _local_ac = CONCAT44((float)local_bd0 * 1.0,(float)local_bd0 * (float)local_bd8);
                local_8b4 = 0;
                _local_234 = CONCAT44((float)local_bd0 * local_be0 + fStack_448 * fVar13,
                                      (float)local_bd0 * local_be4 + local_44c * fVar13);
                local_8b0 = 1;
                local_8ac = 0;
                _local_22c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd0 * (float)local_bd8 + local_444 * fVar13);
                local_7bc = iVar7;
                uVar5 = FUN_00466650(&local_7c4,&local_8b4,&local_234);
                FUN_00486830(uVar5);
                pvVar1 = local_be8;
                local_7d0 = 0;
                local_7cc = 1;
                local_7c8 = 0;
                fVar12 = (float10)FUN_004eb8d0(local_bd4,local_be8,pvVar11,&local_7d0);
                local_bd0 = (undefined1 *)(float)fVar12;
                local_4ac = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                fStack_4a8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                local_4a4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                local_4cc = CONCAT44(fStack_4a8,local_4ac);
                uStack_4a0 = 0x3f800000;
                local_4c4 = CONCAT44(0x3f800000,local_4a4);
                fVar13 = 1.0 - (float)local_bd0;
                uStack_4e0 = 0x3f800000;
                local_8e4 = (int)local_bd4;
                local_4ec = local_be4;
                fStack_4e8 = local_be0;
                local_4e4 = local_bd8;
                _local_d4 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                local_8cc = 0;
                local_8c8 = 1;
                _local_cc = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                local_8c4 = 0;
                local_8e0 = pvVar1;
                local_8dc = pvVar11;
                _local_254 = CONCAT44(local_be0 * (float)local_bd0 + fStack_4a8 * fVar13,
                                      local_be4 * (float)local_bd0 + local_4ac * fVar13);
                _local_24c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                      (float)local_bd8 * (float)local_bd0 + local_4a4 * fVar13);
                uVar5 = FUN_00466650(&local_8e4,&local_8cc,&local_254);
                FUN_00486830(uVar5);
                piVar9 = local_bec;
LAB_004ea1c6:
                iVar7 = (int)pvVar11 + -1;
                if (((local_bdc < 0) || ((int)piVar9 < 0)) ||
                   (((iVar7 < 0 ||
                     ((*(int *)(in_ECX + 0x44) <= local_bdc ||
                      (*(int *)(in_ECX + 0x48) <= (int)piVar9)))) ||
                    (*(int *)(in_ECX + 0x4c) <= iVar7)))) {
                  puVar6 = &DAT_0076b340;
                }
                else {
                  puVar6 = (undefined1 *)
                           (((int)(iVar7 * *(int *)(in_ECX + 0x48) + (int)piVar9) *
                             *(int *)(in_ECX + 0x44) + local_bdc) * 3 + *(int *)(in_ECX + 0x30));
                }
                cVar3 = FUN_004e71d0(puVar6,1);
                if (cVar3 != '\0') {
                  local_8fc = 0;
                  local_8f8 = 0;
                  local_8f4 = 0xffffffff;
                  fVar12 = (float10)FUN_004eb8d0(local_bdc,piVar9,pvVar11,&local_8fc);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_504 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_50c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_508 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_52c = CONCAT44(fStack_508,local_50c);
                  uStack_500 = 0x3f800000;
                  local_524 = CONCAT44(0x3f800000,local_504);
                  local_54c = local_be4;
                  fStack_548 = local_be0;
                  local_544 = local_bd8;
                  uStack_540 = 0x3f800000;
                  fVar13 = 1.0 - (float)local_bd0;
                  _local_f4 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  _local_ec = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  _local_274 = CONCAT44(local_be0 * (float)local_bd0 + fVar13 * fStack_508,
                                        local_be4 * (float)local_bd0 + fVar13 * local_50c);
                  _local_26c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + fVar13 * local_504);
                  local_92c = local_bdc;
                  local_914 = 0;
                  local_910 = 0;
                  local_90c = 0xffffffff;
                  local_924 = pvVar11;
                  local_928 = piVar9;
                  uVar5 = FUN_00466650(&local_92c,&local_914,&local_274);
                  FUN_00486830(uVar5);
                  local_944 = 0;
                  local_940 = 0;
                  local_93c = 0xffffffff;
                  fVar12 = (float10)FUN_004eb8d0(local_bdc,(int)piVar9 + 1,pvVar11,&local_944);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_564 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_56c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_568 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_58c = CONCAT44(fStack_568,local_56c);
                  uStack_560 = 0x3f800000;
                  local_584 = CONCAT44(0x3f800000,local_564);
                  local_5ac = local_be4;
                  fStack_5a8 = local_be0;
                  local_5a4 = local_bd8;
                  uStack_5a0 = 0x3f800000;
                  fVar13 = 1.0 - (float)local_bd0;
                  _local_114 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  local_974 = local_bdc;
                  _local_10c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  local_970 = (int)piVar9 + 1;
                  _local_294 = CONCAT44(local_be0 * (float)local_bd0 + fVar13 * fStack_568,
                                        local_be4 * (float)local_bd0 + fVar13 * local_56c);
                  local_95c = 0;
                  local_958 = 0;
                  local_954 = 0xffffffff;
                  local_96c = pvVar11;
                  _local_28c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + fVar13 * local_564);
                  uVar5 = FUN_00466650(&local_974,&local_95c,&local_294);
                  FUN_00486830(uVar5);
                  local_98c = 0;
                  local_988 = 0;
                  local_984 = 0xffffffff;
                  fVar12 = (float10)FUN_004eb8d0(local_bd4,(int)piVar9 + 1,pvVar11,&local_98c);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  fStack_5c8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_5cc = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  local_5c4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  fVar13 = 1.0 - (float)local_bd0;
                  local_5ec = CONCAT44(fStack_5c8,local_5cc);
                  uStack_5c0 = 0x3f800000;
                  local_5e4 = CONCAT44(0x3f800000,local_5c4);
                  local_60c = local_be4;
                  fStack_608 = local_be0;
                  local_604 = local_bd8;
                  uStack_600 = 0x3f800000;
                  local_9bc = (int)local_bd4;
                  local_9b8 = (int)piVar9 + 1;
                  _local_134 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  _local_12c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  local_9a4 = 0;
                  local_9a0 = 0;
                  local_99c = 0xffffffff;
                  local_9b4 = pvVar11;
                  _local_2b4 = CONCAT44(local_be0 * (float)local_bd0 + fVar13 * fStack_5c8,
                                        local_be4 * (float)local_bd0 + fVar13 * local_5cc);
                  _local_2ac = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + fVar13 * local_5c4);
                  uVar5 = FUN_00466650(&local_9bc,&local_9a4,&local_2b4);
                  FUN_00486830(uVar5);
                  local_9d4 = 0;
                  local_9d0 = 0;
                  local_9cc = 0xffffffff;
                  fVar12 = (float10)FUN_004eb8d0(local_bd4,piVar9,pvVar11,&local_9d4);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_62c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_628 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_624 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_64c = CONCAT44(fStack_628,local_62c);
                  uStack_620 = 0x3f800000;
                  local_644 = CONCAT44(0x3f800000,local_624);
                  local_66c = local_be4;
                  fStack_668 = local_be0;
                  local_664 = local_bd8;
                  uStack_660 = 0x3f800000;
                  fVar13 = 1.0 - (float)local_bd0;
                  _local_154 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  _local_14c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  local_a04 = (int)local_bd4;
                  _local_2d4 = CONCAT44(local_be0 * (float)local_bd0 + fVar13 * fStack_628,
                                        local_be4 * (float)local_bd0 + fVar13 * local_62c);
                  local_9ec = 0;
                  local_9e8 = 0;
                  local_9e4 = 0xffffffff;
                  local_9fc = pvVar11;
                  _local_2cc = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + fVar13 * local_624);
                  local_a00 = piVar9;
                  uVar5 = FUN_00466650(&local_a04,&local_9ec,&local_2d4);
                  FUN_00486830(uVar5);
                }
                iVar7 = (int)pvVar11 + 1;
                if (((((local_bdc < 0) || ((int)piVar9 < 0)) || (iVar7 < 0)) ||
                    ((*(int *)(in_ECX + 0x44) <= local_bdc ||
                     (*(int *)(in_ECX + 0x48) <= (int)piVar9)))) ||
                   (*(int *)(in_ECX + 0x4c) <= iVar7)) {
                  puVar6 = &DAT_0076b340;
                }
                else {
                  puVar6 = (undefined1 *)
                           (((int)(*(int *)(in_ECX + 0x48) * iVar7 + (int)piVar9) *
                             *(int *)(in_ECX + 0x44) + local_bdc) * 3 + *(int *)(in_ECX + 0x30));
                }
                cVar3 = FUN_004e71d0(puVar6,1);
                if (cVar3 != '\0') {
                  local_a1c = 0;
                  local_a18 = 0;
                  local_a14 = 1;
                  fVar12 = (float10)FUN_004eb8d0(local_bdc,piVar9,(int)pvVar11 + 1,&local_a1c);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_684 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_68c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_688 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_6ac = CONCAT44(fStack_688,local_68c);
                  uStack_680 = 0x3f800000;
                  local_6a4 = CONCAT44(0x3f800000,local_684);
                  local_6cc = local_be4;
                  fStack_6c8 = local_be0;
                  local_6c4 = local_bd8;
                  uStack_6c0 = 0x3f800000;
                  fVar13 = 1.0 - (float)local_bd0;
                  _local_174 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  _local_16c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  _local_2f4 = CONCAT44(local_be0 * (float)local_bd0 + fVar13 * fStack_688,
                                        local_be4 * (float)local_bd0 + fVar13 * local_68c);
                  local_a4c = local_bdc;
                  local_a44 = (int)pvVar11 + 1;
                  _local_2ec = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + fVar13 * local_684);
                  local_a34 = 0;
                  local_a30 = 0;
                  local_a2c = 1;
                  local_a48 = piVar9;
                  uVar5 = FUN_00466650(&local_a4c,&local_a34,&local_2f4);
                  FUN_00486830(uVar5);
                  local_a64 = 0;
                  local_a60 = 0;
                  local_a5c = 1;
                  fVar12 = (float10)FUN_004eb8d0(local_bd4,piVar9,(int)pvVar11 + 1,&local_a64);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_6e4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_6ec = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_6e8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_70c = CONCAT44(fStack_6e8,local_6ec);
                  uStack_6e0 = 0x3f800000;
                  local_704 = CONCAT44(0x3f800000,local_6e4);
                  fVar13 = 1.0 - (float)local_bd0;
                  uStack_720 = 0x3f800000;
                  local_72c = local_be4;
                  fStack_728 = local_be0;
                  local_724 = local_bd8;
                  _local_194 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  local_a94 = (int)local_bd4;
                  local_a8c = (int)pvVar11 + 1;
                  _local_18c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  local_a7c = 0;
                  _local_314 = CONCAT44(local_be0 * (float)local_bd0 + fStack_6e8 * fVar13,
                                        local_be4 * (float)local_bd0 + local_6ec * fVar13);
                  local_a78 = 0;
                  local_a74 = 1;
                  _local_30c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + local_6e4 * fVar13);
                  local_a90 = piVar9;
                  uVar5 = FUN_00466650(&local_a94,&local_a7c,&local_314);
                  FUN_00486830(uVar5);
                  local_aac = 0;
                  local_aa8 = 0;
                  local_aa4 = 1;
                  fVar12 = (float10)FUN_004eb8d0(local_bd4,(int)piVar9 + 1,(int)pvVar11 + 1,
                                                 &local_aac);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_744 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_74c = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_748 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_76c = CONCAT44(fStack_748,local_74c);
                  uStack_740 = 0x3f800000;
                  local_764 = CONCAT44(0x3f800000,local_744);
                  fVar13 = 1.0 - (float)local_bd0;
                  local_78c = local_be4;
                  fStack_788 = local_be0;
                  local_784 = local_bd8;
                  uStack_780 = 0x3f800000;
                  local_adc = (int)local_bd4;
                  local_ad8 = (int)piVar9 + 1;
                  _local_104 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  local_ad4 = (int)pvVar11 + 1;
                  _local_fc = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  local_ac4 = 0;
                  local_ac0 = 0;
                  local_abc = 1;
                  _local_2c4 = CONCAT44(local_be0 * (float)local_bd0 + fStack_748 * fVar13,
                                        local_be4 * (float)local_bd0 + local_74c * fVar13);
                  _local_2bc = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + local_744 * fVar13);
                  uVar5 = FUN_00466650(&local_adc,&local_ac4,&local_2c4);
                  FUN_00486830(uVar5);
                  local_af4 = 0;
                  local_af0 = 0;
                  local_aec = 1;
                  fVar12 = (float10)FUN_004eb8d0(local_bdc,(int)piVar9 + 1,(int)pvVar11 + 1,
                                                 &local_af4);
                  local_bd0 = (undefined1 *)(float)fVar12;
                  local_7a4 = (float)*(byte *)(in_ECX + 0x5e) / 255.0;
                  local_7ac = (float)*(byte *)(in_ECX + 0x5c) / 255.0;
                  fStack_7a8 = (float)*(byte *)(in_ECX + 0x5d) / 255.0;
                  local_35c = CONCAT44(fStack_7a8,local_7ac);
                  uStack_7a0 = 0x3f800000;
                  local_354 = CONCAT44(0x3f800000,local_7a4);
                  fVar13 = 1.0 - (float)local_bd0;
                  uStack_330 = 0x3f800000;
                  local_7e8 = local_bdc;
                  local_7e4 = (int)piVar9 + 1;
                  local_33c = local_be4;
                  fStack_338 = local_be0;
                  local_334 = local_bd8;
                  local_7e0 = (int)pvVar11 + 1;
                  _local_54 = CONCAT44(local_be0 * (float)local_bd0,local_be4 * (float)local_bd0);
                  local_b0c = 0;
                  _local_4c = CONCAT44((float)local_bd0 * 1.0,(float)local_bd8 * (float)local_bd0);
                  local_b08 = 0;
                  local_b04 = 1;
                  _local_1a4 = CONCAT44(local_be0 * (float)local_bd0 + fStack_7a8 * fVar13,
                                        local_be4 * (float)local_bd0 + local_7ac * fVar13);
                  _local_19c = CONCAT44((float)local_bd0 * 1.0 + fVar13 * 1.0,
                                        (float)local_bd8 * (float)local_bd0 + local_7a4 * fVar13);
                  uVar5 = FUN_00466650(&local_7e8,&local_b0c,&local_1a4);
                  FUN_00486830(uVar5);
                }
              }
              local_be8 = (void *)((int)pvVar11 + 1);
              iVar7 = local_bdc;
            } while ((int)local_be8 < *(int *)(in_ECX + 0x4c));
          }
          local_bec = (int *)((int)piVar9 + 1);
        } while ((int)local_bec < *(int *)(in_ECX + 0x48));
      }
      local_bdc = iVar7 + 1;
    } while (local_bdc < *(int *)(in_ECX + 0x44));
  }
  FUN_004e7520(((uint)((int)local_bf4 - (int)local_bf8 >> 3) >> 2) * 6);
  iVar7 = 0;
  if (0 < (int)(((int)local_bf4 - (int)local_bf8 >> 3) +
               ((int)local_bf4 - (int)local_bf8 >> 0x1f & 3U)) >> 2) {
    iVar10 = 0;
    do {
      sVar8 = (short)iVar7 * 4;
      *(short *)((int)local_c04 + iVar10) = sVar8;
      *(short *)((int)local_c04 + iVar10 + 2) = sVar8 + 1;
      *(short *)((int)local_c04 + iVar10 + 4) = sVar8 + 2;
      iVar7 = iVar7 + 1;
      *(short *)((int)local_c04 + iVar10 + 6) = sVar8;
      *(short *)((int)local_c04 + iVar10 + 8) = sVar8 + 2;
      *(short *)((int)local_c04 + iVar10 + 10) = sVar8 + 3;
      iVar10 = iVar10 + 0xc;
    } while (iVar7 < (int)(((int)local_bf4 - (int)local_bf8 >> 3) +
                          ((int)local_bf4 - (int)local_bf8 >> 0x1f & 3U)) >> 2);
  }
  local_bd0 = (undefined1 *)((int)local_bf4 - (int)local_bf8 >> 3);
  *(undefined1 **)(in_ECX + 0x3c) = local_bd0;
  *(uint *)(in_ECX + 0x40) = (uint)((int)local_c00 - (int)local_c04 >> 1) / 3;
  if ((local_c04 != local_c00) && (local_bf8 != local_bf4)) {
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x68))
              (*(int **)(in_ECX + 0x58),(int)local_bd0 << 3,8,0,1,&local_bd8,0,uVar4);
    (**(code **)(**(int **)(in_ECX + 0x58) + 0x6c))
              (*(int **)(in_ECX + 0x58),(int)local_c00 - (int)local_c04 & 0xfffffffe,8,0x65,1,
               &local_bec,0);
    (**(code **)(*(int *)local_bd8 + 0x2c))
              (local_bd8,0,(int)local_bf4 - (int)local_bf8 & 0xfffffff8,&local_be8,0);
    memcpy(local_be8,local_bf8,(int)local_bf4 - (int)local_bf8 & 0xfffffff8);
    (**(code **)(*(int *)local_bd8 + 0x30))(local_bd8);
    (**(code **)(*local_bec + 0x2c))
              (local_bec,0,(int)local_c00 - (int)local_c04 & 0xfffffffe,&local_be8,0);
    memcpy(local_be8,local_c04,(int)local_c00 - (int)local_c04 & 0xfffffffe);
    (**(code **)(*local_bec + 0x30))(local_bec);
    piVar9 = *(int **)(in_ECX + 0x38);
    piVar2 = *(int **)(in_ECX + 0x34);
    *(int **)(in_ECX + 0x38) = local_bec;
    *(byte **)(in_ECX + 0x34) = local_bd8;
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 8))(piVar2);
    }
    if (piVar9 != (int *)0x0) {
      (**(code **)(*piVar9 + 8))(piVar9);
    }
  }
  *(undefined1 *)(in_ECX + 0x54) = 0;
  local_8 = local_8 & 0xffffff00;
  if (local_c04 == (void *)0x0) {
    local_8 = 0xffffffff;
    if (local_bf8 == (void *)0x0) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    std::_Container_base0::_Orphan_all((_Container_base0 *)&local_bf8);
                    /* WARNING: Subroutine does not return */
    operator_delete(local_bf8);
  }
  std::_Container_base0::_Orphan_all((_Container_base0 *)&local_c04);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_c04);
}


/* FUN_00596ca0 @ 00596ca0  kind=gamemisc  attributed-by=logic:caller-vote  size=141 */

undefined1 FUN_00596ca0(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  
  cVar1 = *(char *)(param_1 + 0x60);
  if ((((cVar1 == '\x05') && (*(char *)(param_2 + 0x60) == '\0')) || (cVar1 == '\x06')) ||
     (*(char *)(param_2 + 0x60) == '\x06')) {
    return 0;
  }
  if (cVar1 == '\x01') {
    if (*(char *)(param_2 + 0x60) != '\x01') {
      return 1;
    }
    cVar1 = FUN_00444680();
    cVar2 = FUN_00444680();
    if (cVar2 != cVar1) {
      return 1;
    }
  }
  if (*(char *)(param_2 + 0x60) == '\x01') {
    if (*(char *)(param_1 + 0x60) != '\x01') {
      return 1;
    }
    cVar1 = FUN_00444680();
    cVar2 = FUN_00444680();
    if (cVar1 != cVar2) {
      return 1;
    }
  }
  if (((*(byte *)(param_1 + 0x124) & 0x20) == 0) && ((*(byte *)(param_2 + 0x124) & 0x20) == 0)) {
    return 0;
  }
  return 1;
}


/* FUN_0059ee90 @ 0059ee90  kind=gamemisc  attributed-by=logic:caller-vote  size=472 */

void FUN_0059ee90(uint *param_1,uint *param_2,undefined4 param_3,float param_4)

{
  float10 fVar1;
  double dVar2;
  float fVar3;
  float local_44;
  float local_40;
  uint *local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int iStack_24;
  int local_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)&local_44;
  local_3c = param_1;
  local_28 = *param_2 - *param_1;
  iStack_24 = (param_2[1] - param_1[1]) - (uint)(*param_2 < *param_1);
  local_20 = param_2[2] - param_1[2];
  iStack_1c = (param_2[3] - param_1[3]) - (uint)(param_2[2] < param_1[2]);
  local_18 = param_2[4] - param_1[4];
  iStack_14 = (param_2[5] - param_1[5]) - (uint)(param_2[4] < param_1[4]);
  local_34 = (float)CONCAT44(iStack_24,local_28) * 1.5258789e-05;
  local_30 = (float)CONCAT44(iStack_1c,local_20) * 1.5258789e-05;
  local_44 = (float)CONCAT44(iStack_14,local_18) * 1.5258789e-05;
  fVar3 = local_30 * local_30 + local_34 * local_34 + local_44 * local_44;
  if (fVar3 < 0.0001) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  if (param_4 * param_4 < fVar3) {
    __security_check_cookie(local_c ^ (uint)&local_44);
    return;
  }
  dVar2 = (double)fVar3;
  libm_sse2_sqrt_precise();
  local_38 = (float)dVar2;
  local_34 = local_34 / local_38;
  local_30 = local_30 / local_38;
  local_2c = local_44 / local_38;
  fVar1 = (float10)FUN_005a35d0(local_3c,&local_34,local_38,0,param_3);
  local_40 = (float)fVar1;
  __security_check_cookie(local_c ^ (uint)&local_44);
  return;
}


/* FUN_005a6a00 @ 005a6a00  kind=gamemisc  attributed-by=logic:caller-vote  size=104 */

void FUN_005a6a00(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  return;
}


/* FUN_005a6a70 @ 005a6a70  kind=gamemisc  attributed-by=logic:caller-vote  size=63 */

void FUN_005a6a70(uint *param_1)

{
  uint uVar1;
  int *in_ECX;
  
  uVar1 = *param_1;
  *in_ECX = uVar1 << 0x10;
  in_ECX[1] = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[1];
  in_ECX[2] = uVar1 << 0x10;
  in_ECX[3] = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  uVar1 = param_1[2];
  in_ECX[4] = uVar1 << 0x10;
  in_ECX[5] = ((int)uVar1 >> 0x1f) << 0x10 | uVar1 >> 0x10;
  return;
}


/* FUN_005a6e60 @ 005a6e60  kind=gamemisc  attributed-by=logic:caller-vote  size=521 */

void FUN_005a6e60(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x4ec4ec2 < (uint)in_ECX[1]) {
    if ((void *)param_5[4] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[4]);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
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
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
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
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
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
        goto LAB_005a706a;
      }
LAB_005a6fc1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_005a6fc1;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
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
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
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
LAB_005a706a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_005c0350 @ 005c0350  kind=gamemisc  attributed-by=logic:caller-vote  size=148 */

void FUN_005c0350(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

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
  FUN_005c21f0(param_1,iVar3,param_2,param_4,param_5);
  return;
}


/* FUN_005c1060 @ 005c1060  kind=gamemisc  attributed-by=logic:caller-vote  size=154 */

void FUN_005c1060(undefined8 *param_1,undefined8 *param_2)

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


/* FUN_005c14e0 @ 005c14e0  kind=gamemisc  attributed-by=logic:caller-vote  size=279 */

void FUN_005c14e0(int param_1,int param_2,undefined4 param_3)

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
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
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
      FUN_005c21f0(param_1,iVar6,iVar8,&local_14,param_3);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c1ef0 @ 005c1ef0  kind=gamemisc  attributed-by=logic:caller-vote  size=167 */

void FUN_005c1ef0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar2 = iVar1 * 0xc;
    FUN_005c1690(param_1,iVar2 + param_1,iVar1 * 0x18 + param_1,param_4);
    FUN_005c1690(param_2 + iVar1 * -0xc,param_2,iVar2 + param_2,param_4);
    iVar3 = param_3 + iVar1 * -0xc;
    FUN_005c1690(param_3 + iVar1 * -0x18,iVar3,param_3,param_4);
    FUN_005c1690(param_1 + iVar2,param_2,iVar3,param_4);
    return;
  }
  FUN_005c1690(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_005c3d60 @ 005c3d60  kind=gamemisc  attributed-by=logic:caller-vote  size=120 */

int * FUN_005c3d60(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  iVar2 = FUN_00594890(param_1);
  if (iVar2 != *in_ECX) {
    if ((*(int *)(iVar2 + 0x10) <= *piVar1) &&
       ((*(int *)(iVar2 + 0x10) < *piVar1 || (*(int *)(iVar2 + 0x14) <= piVar1[1])))) {
      return (int *)(iVar2 + 0x18);
    }
  }
  local_10 = *piVar1;
  local_c = piVar1[1];
  local_8 = 0;
  iVar3 = FUN_00639be0(&local_10);
  FUN_005c0630(&param_1,iVar2,iVar3 + 0x10,iVar3);
  return param_1 + 6;
}


/* FUN_005cade0 @ 005cade0  kind=gamemisc  attributed-by=logic:caller-vote  size=749 */

void FUN_005cade0(undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int in_ECX;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  uint *local_4c;
  int local_48;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar6 = (int)(param_3 + -0x4000 + (param_3 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar12 = (int)((param_2 + -0x4000 >> 0x1f & 0x3fffU) + param_2 + -0x4000) >> 0xe;
  fVar13 = (float10)FUN_004c0ef0((double)param_3 * 0.0005,0x40aabe0000000000);
  fVar14 = (float10)FUN_004c0ef0((double)param_2 * 0.0005,0x40d6df4000000000);
  local_4c = (uint *)0x0;
  uVar8 = (uint)((float)param_2 + (float)fVar13 * 3.0 * 256.0);
  *(undefined4 *)param_1 = 0xffffffff;
  *(undefined4 *)((int)param_1 + 4) = 0xffffffff;
  uVar9 = (uint)((float)param_3 + (float)fVar14 * 3.0 * 256.0);
  local_48 = 0;
  if (iVar12 <= iVar7) {
    iVar10 = iVar12 * 0x400 + 0x10002f;
    iVar4 = iVar6;
    do {
      for (; iVar4 <= (int)(param_3 + 0x4000 + (param_3 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar4 = iVar4 + 1) {
        if ((((-1 < iVar12) && (-1 < iVar4)) && (iVar10 < 0x20002f)) &&
           ((iVar4 < 0x400 &&
            (puVar1 = *(uint **)(in_ECX + (iVar10 + iVar4) * 4), puVar1 != (uint *)0x0)))) {
          uVar2 = *puVar1;
          uVar3 = puVar1[1];
          local_18 = CONCAT44(((((int)uVar2 >> 0x1f) << 0x10 | uVar2 >> 0x10) -
                              (((int)uVar8 >> 0x1f) << 0x10 | uVar8 >> 0x10)) -
                              (uint)(uVar2 * 0x10000 < uVar8 * 0x10000),
                              uVar2 * 0x10000 + uVar8 * -0x10000);
          local_10 = CONCAT44(((((int)uVar3 >> 0x1f) << 0x10 | uVar3 >> 0x10) -
                              (((int)uVar9 >> 0x1f) << 0x10 | uVar9 >> 0x10)) -
                              (uint)(uVar3 * 0x10000 < uVar9 * 0x10000),
                              uVar3 * 0x10000 + uVar9 * -0x10000);
          iVar11 = (int)((float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05 +
                        (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05);
          if ((local_4c == (uint *)0x0) || (iVar11 < local_48)) {
            *param_1 = CONCAT44(iVar4,iVar12);
            local_4c = puVar1;
            local_48 = iVar11;
          }
        }
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x400;
      iVar4 = iVar6;
    } while (iVar12 <= iVar7);
  }
  __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005fbc10 @ 005fbc10  kind=gamemisc  attributed-by=logic:caller-vote  size=115 */

void FUN_005fbc10(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 3)) {
    return;
  }
  if (0x1fffffffU - (in_ECX[1] - *in_ECX >> 3) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    FUN_005fbb30();
    return;
  }
  FUN_005fbb30();
  return;
}


/* FUN_00602440 @ 00602440  kind=gamemisc  attributed-by=logic:caller-vote  size=129 */

int FUN_00602440(uint param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     (((int)param_2 < 0x10000 &&
      (iVar1 = *(int *)(in_ECX + 0xb0 +
                       (((int)(((int)param_1 >> 0x1f & 0x3fU) + param_1) >> 6) * 0x400 +
                       ((int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6)) * 4), iVar1 != 0))))
  {
    param_1 = param_1 & 0x8000003f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffffc0) + 1;
    }
    param_2 = param_2 & 0x8000003f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffffc0) + 1;
    }
    return iVar1 + (param_1 * 0x40 + param_2) * 0x34;
  }
  return 0;
}


/* FUN_006089c0 @ 006089c0  kind=gamemisc  attributed-by=logic:caller-vote  size=82 */

undefined2 * FUN_006089c0(undefined2 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  iVar1 = param_2[4];
  puVar2 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  FUN_00424da0(puVar2,iVar1 + (int)puVar3,param_2);
  return param_1;
}


/* FUN_0062f690 @ 0062f690  kind=gamemisc  attributed-by=logic:caller-vote  size=134 */

void FUN_0062f690(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *_Dst;
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  FUN_0040c0a0(param_1,0,0xffffffff);
  _Dst = (undefined4 *)(in_ECX + 0x18);
  *(undefined4 *)(in_ECX + 0x2c) = 0xf;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined1 *)_Dst = 0;
  if ((uint)param_2[5] < 0x10) {
    if (param_2[4] + 1 != 0) {
      memmove(_Dst,param_2,param_2[4] + 1);
    }
  }
  else {
    *_Dst = *param_2;
    *param_2 = 0;
  }
  *(undefined4 *)(in_ECX + 0x28) = param_2[4];
  *(undefined4 *)(in_ECX + 0x2c) = param_2[5];
  param_2[5] = 0xf;
  param_2[4] = 0;
  *(undefined1 *)param_2 = 0;
  return;
}


/* FUN_0062fdc0 @ 0062fdc0  kind=gamemisc  attributed-by=logic:caller-vote  size=468 */

undefined4 * FUN_0062fdc0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f57e0;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (0xf < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_0040c520(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_0062ff61;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_0062fe09;
      }
      piVar3 = param_2 + 4;
      if (0xf < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_0040c520(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_004043c0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_0062ff06;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_0062fe09;
        }
      }
      else {
LAB_0062ff06:
        cVar1 = FUN_004043c0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_004043c0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_0062ff61:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_0062ffb0(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_0062fe09;
        }
      }
      uVar5 = 0;
      goto LAB_0062fe09;
    }
    piVar3 = param_2 + 4;
    if (0xf < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_0040c520(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_0062ff61;
  }
  uVar5 = 1;
LAB_0062fe09:
  FUN_0062f9b0(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00633d70 @ 00633d70  kind=gamemisc  attributed-by=logic:caller-vote  size=93 */

int FUN_00633d70(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  puVar1 = param_1;
  if (7 < (uint)param_1[5]) {
    puVar1 = (undefined4 *)*param_1;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(in_ECX + 0x1c),puVar1,param_1[4]);
  if (iVar2 != 0) {
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        iVar2 = FUN_00633d70(param_1);
        if (iVar2 != 0) {
          return iVar2;
        }
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
    }
    return 0;
  }
  return in_ECX;
}


/* FUN_00636040 @ 00636040  kind=gamemisc  attributed-by=logic:caller-vote  size=321 */

int FUN_00636040(uint param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int in_ECX;
  int *piVar9;
  
  iVar7 = FUN_0064f4e0(*(undefined4 *)(in_ECX + 0x38),*(undefined4 *)(in_ECX + 0x34),
                       *(undefined4 *)(in_ECX + 0x3c),param_1,in_ECX + 0xc);
  piVar9 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar9 != *(int **)(in_ECX + 0x2c)) {
    do {
      if ((~(byte)(*(uint *)(piVar9[2] + 200) >> 2) & 1) != 0) {
        FUN_00636040(iVar7);
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(in_ECX + 0x2c));
  }
  *(undefined4 *)(iVar7 + 200) = *(undefined4 *)(in_ECX + 200);
  if ((undefined4 *)(iVar7 + 0xe0) != (undefined4 *)(in_ECX + 0xe0)) {
    puVar2 = *(undefined4 **)(in_ECX + 0xe0);
    FUN_006302f0(*puVar2,puVar2);
  }
  piVar9 = (int *)(iVar7 + 0xe8);
  if (piVar9 != (int *)(in_ECX + 0xe8)) {
    FUN_00630b60(*(undefined4 *)(*piVar9 + 4));
    param_1 = param_1 & 0xffffff00;
    *(int *)(*piVar9 + 4) = *piVar9;
    *(int *)*piVar9 = *piVar9;
    *(int *)(*piVar9 + 8) = *piVar9;
    *(undefined4 *)(iVar7 + 0xec) = 0;
    iVar3 = *piVar9;
    uVar8 = FUN_0062f8f0(*(undefined4 *)(*(int *)(in_ECX + 0xe8) + 4),iVar3,param_1);
    *(undefined4 *)(iVar3 + 4) = uVar8;
    piVar9 = *(int **)(iVar7 + 0xe8);
    *(undefined4 *)(iVar7 + 0xec) = *(undefined4 *)(in_ECX + 0xec);
    piVar4 = (int *)piVar9[1];
    if (*(char *)((int)piVar4 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar4 + 0xd);
      piVar6 = (int *)*piVar4;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar6 + 0xd);
        piVar4 = piVar6;
        piVar6 = (int *)*piVar6;
      }
      *piVar9 = (int)piVar4;
      iVar3 = *(int *)(*(int *)(iVar7 + 0xe8) + 4);
      iVar5 = *(int *)(iVar3 + 8);
      cVar1 = *(char *)(iVar5 + 0xd);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
        iVar3 = iVar5;
        iVar5 = *(int *)(iVar5 + 8);
      }
      *(int *)(*(int *)(iVar7 + 0xe8) + 8) = iVar3;
    }
    else {
      *piVar9 = (int)piVar9;
      *(int *)(*(int *)(iVar7 + 0xe8) + 8) = *(int *)(iVar7 + 0xe8);
    }
  }
  if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
    (**(code **)(**(int **)(in_ECX + 0x40) + 0xa0))(iVar7);
  }
  return iVar7;
}


/* FUN_00636b70 @ 00636b70  kind=gamemisc  attributed-by=logic:caller-vote  size=109 */

void FUN_00636b70(int param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_c [8];
  
  iVar2 = param_1;
  iVar1 = *(int *)(in_ECX + 0x38);
  if (iVar1 != param_1) {
    if (iVar1 != 0) {
      if (*(int *)(iVar1 + 0x1ac) == 1) {
        FUN_00650890(iVar1);
      }
      else {
        FUN_00633c90(&param_1);
      }
    }
    if (iVar2 != 0) {
      FUN_0058e7d0(local_c,0,&param_1,DAT_0076de66);
    }
    *(int *)(in_ECX + 0x38) = iVar2;
  }
  return;
}


/* FUN_0064b540 @ 0064b540  kind=gamemisc  attributed-by=logic:caller-vote  size=539 */

void FUN_0064b540(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x5d1745b < (uint)in_ECX[1]) {
    if (0xf < (uint)param_5[10]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[5]);
    }
    param_5[10] = 0xf;
    param_5[9] = 0;
    *(undefined1 *)(param_5 + 5) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
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
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
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
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
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
        goto LAB_0064b74a;
      }
LAB_0064b6a1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0064b6a1;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
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
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
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
LAB_0064b74a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_006504e0 @ 006504e0  kind=gamemisc  attributed-by=logic:caller-vote  size=673 */

void FUN_006504e0(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *local_20;
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3038;
  local_10 = ExceptionList;
  if (param_1[1] != in_ECX) {
    return;
  }
  ExceptionList = &local_10;
  if (param_1 == *(undefined4 **)(in_ECX + 200)) {
    *(undefined4 *)(in_ECX + 200) = 0;
    FUN_00652c10(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8));
  }
  if (puVar2 == *(undefined4 **)(in_ECX + 0xc4)) {
    *(undefined4 *)(in_ECX + 0xc4) = 0;
  }
  FUN_006303d0(puVar2 + 0xb);
  local_8 = 0;
  for (puVar3 = (undefined4 *)*local_20; puVar3 != local_20; puVar3 = (undefined4 *)*puVar3) {
    FUN_006504e0(puVar3[2]);
  }
  if (puVar2[10] != 0) {
    FUN_00636870(puVar2);
  }
  puVar3 = (undefined4 *)puVar2[0xe];
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x6b] == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      piVar1 = (int *)puVar3[0x8c];
      if (piVar1 != *(int **)(in_ECX + 0x84)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      (**(code **)*puVar3)(1);
    }
    else {
      puVar3 = (undefined4 *)FUN_00630ae0(local_18,&param_1);
      FUN_0067eb10(local_14,*puVar3,puVar3[1]);
    }
  }
  puVar3 = (undefined4 *)puVar2[0xd];
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x15] == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      piVar1 = (int *)puVar3[0x13];
      if (piVar1 != *(int **)(in_ECX + 0x74)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      (**(code **)*puVar3)(1);
    }
    else {
      puVar3 = (undefined4 *)FUN_00630ae0(local_18,&param_1);
      FUN_0067eb10(local_14,*puVar3,puVar3[1]);
    }
  }
  puVar3 = (undefined4 *)puVar2[0xf];
  if (puVar3 != (undefined4 *)0x0) {
    if (puVar3[0x82] == 1) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      piVar1 = (int *)puVar3[0x83];
      if (piVar1 != *(int **)(in_ECX + 0x8c)) {
        *(int *)piVar1[1] = *piVar1;
        *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar1);
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
      (**(code **)*puVar3)(1);
    }
    else {
      puVar3 = (undefined4 *)FUN_00630ae0(local_18,&param_1);
      FUN_0067eb10(&param_1,*puVar3,puVar3[1]);
    }
  }
  if (puVar2[0x10] != 0) {
    FUN_006508f0(puVar2[0x10]);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)puVar2[0x35];
  if (piVar1 != *(int **)(in_ECX + 0x94)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*puVar2)(1);
  puVar2 = (undefined4 *)*local_20;
  *local_20 = local_20;
  local_20[1] = local_20;
  if (puVar2 != local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_20);
}


/* __allmul @ 0068da90  kind=gamemisc  attributed-by=logic:caller-vote  size=52 */

/* Library Function - Single Match
    __allmul
   
   Library: Visual Studio */

longlong __allmul(uint param_1,int param_2,uint param_3,int param_4)

{
  if (param_4 == 0 && param_2 == 0) {
    return (ulonglong)param_1 * (ulonglong)param_3;
  }
  return CONCAT44((int)((ulonglong)param_1 * (ulonglong)param_3 >> 0x20) +
                  param_2 * param_3 + param_1 * param_4,
                  (int)((ulonglong)param_1 * (ulonglong)param_3));
}


