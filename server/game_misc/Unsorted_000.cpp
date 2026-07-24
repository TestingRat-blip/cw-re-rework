// Unsorted_000 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_000.h"

/* FUN_00401420 @ 00401420  kind=gamemisc  attributed-by=none  size=40 */

float10 __fastcall FUN_00401420(longlong *param_1)

{
  return (float10)((float)*param_1 * 1.5258789e-05);
}


/* FUN_00401450 @ 00401450  kind=gamemisc  attributed-by=none  size=55 */

void __thiscall FUN_00401450(void *this,float *param_1,float *param_2)

{
  *param_1 = *(float *)this - *param_2;
  param_1[1] = *(float *)((int)this + 4) - param_2[1];
  param_1[2] = *(float *)((int)this + 8) - param_2[2];
  return;
}


/* FUN_00401490 @ 00401490  kind=gamemisc  attributed-by=none  size=28 */

void __thiscall FUN_00401490(void *this,int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *(uint *)this;
  uVar2 = *param_2;
  iVar3 = *(int *)((int)this + 4);
  uVar4 = param_2[1];
  *param_1 = uVar1 - *param_2;
  param_1[1] = (iVar3 - uVar4) - (uint)(uVar1 < uVar2);
  return;
}


/* FUN_00401570 @ 00401570  kind=gamemisc  attributed-by=none  size=40 */

float10 __thiscall FUN_00401570(float *param_1,float *param_2)

{
  return (float10)(param_2[1] * param_1[1] + *param_2 * *param_1);
}


/* FUN_004015a0 @ 004015a0  kind=gamemisc  attributed-by=none  size=54 */

float10 __thiscall FUN_004015a0(float *param_1,float *param_2)

{
  return (float10)(param_2[1] * param_1[1] + *param_2 * *param_1 + param_2[2] * param_1[2]);
}


/* FUN_004015e0 @ 004015e0  kind=gamemisc  attributed-by=none  size=37 */

float * __thiscall FUN_004015e0(void *this,float param_1)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * param_1;
  return this;
}


/* FUN_00401650 @ 00401650  kind=gamemisc  attributed-by=none  size=54 */

float * __thiscall FUN_00401650(void *this,float *param_1)

{
  *(float *)this = *param_1 + *(float *)this;
  *(float *)((int)this + 4) = param_1[1] + *(float *)((int)this + 4);
  *(float *)((int)this + 8) = param_1[2] + *(float *)((int)this + 8);
  return this;
}


/* FUN_00402030 @ 00402030  kind=gamemisc  attributed-by=none  size=278 */

void __thiscall FUN_00402030(void *this,float param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  dVar3 = (double)(param_1 * 0.017453292);
  libm_sse2_cos_precise();
  fVar2 = (float)dVar3;
  dVar3 = (double)(param_1 * 0.017453292);
  libm_sse2_sin_precise();
  fVar1 = *(float *)this;
  fVar4 = (float)dVar3;
  *(float *)this = *(float *)((int)this + 0x10) * fVar4 + fVar1 * fVar2;
  *(float *)((int)this + 0x10) = *(float *)((int)this + 0x10) * fVar2 - fVar1 * fVar4;
  fVar1 = *(float *)((int)this + 4);
  *(float *)((int)this + 4) = *(float *)((int)this + 0x14) * fVar4 + fVar1 * fVar2;
  *(float *)((int)this + 0x14) = *(float *)((int)this + 0x14) * fVar2 - fVar1 * fVar4;
  fVar1 = *(float *)((int)this + 8);
  *(float *)((int)this + 8) = fVar1 * fVar2 + fVar4 * *(float *)((int)this + 0x18);
  *(float *)((int)this + 0x18) = fVar2 * *(float *)((int)this + 0x18) - fVar1 * fVar4;
  fVar1 = *(float *)((int)this + 0xc);
  *(float *)((int)this + 0xc) = *(float *)((int)this + 0x1c) * fVar4 + fVar1 * fVar2;
  *(float *)((int)this + 0x1c) = *(float *)((int)this + 0x1c) * fVar2 - fVar1 * fVar4;
  return;
}


/* FUN_00402180 @ 00402180  kind=gamemisc  attributed-by=none  size=37 */

float10 __fastcall FUN_00402180(float *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1]);
}


/* FUN_004021b0 @ 004021b0  kind=gamemisc  attributed-by=none  size=50 */

float10 __fastcall FUN_004021b0(float *param_1)

{
  return (float10)(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
}


/* FUN_004021f0 @ 004021f0  kind=gamemisc  attributed-by=none  size=231 */

float * __thiscall FUN_004021f0(void *this,float *param_1,float *param_2)

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
  float fVar12;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *(float *)((int)this + 4);
  fVar5 = *(float *)((int)this + 8);
  fVar12 = 1.0 / (*(float *)((int)this + 0xc) * fVar1 + *(float *)((int)this + 0x1c) * fVar2 +
                  *(float *)((int)this + 0x2c) * fVar3 + *(float *)((int)this + 0x3c));
  fVar6 = *(float *)((int)this + 0x14);
  fVar7 = *(float *)((int)this + 0x24);
  fVar8 = *(float *)((int)this + 0x18);
  fVar9 = *(float *)((int)this + 0x34);
  fVar10 = *(float *)((int)this + 0x28);
  fVar11 = *(float *)((int)this + 0x38);
  *param_1 = fVar12 * (*(float *)((int)this + 0x10) * fVar2 + fVar1 * *(float *)this +
                       *(float *)((int)this + 0x20) * fVar3 + *(float *)((int)this + 0x30));
  param_1[1] = fVar12 * (fVar4 * fVar1 + fVar6 * fVar2 + fVar7 * fVar3 + fVar9);
  param_1[2] = fVar12 * (fVar5 * fVar1 + fVar8 * fVar2 + fVar10 * fVar3 + fVar11);
  return param_1;
}


/* FUN_004022e0 @ 004022e0  kind=gamemisc  attributed-by=none  size=203 */

void __thiscall FUN_004022e0(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  *(float *)((int)this + 0x30) =
       *(float *)((int)this + 0x10) * fVar2 + *(float *)this * fVar1 +
       *(float *)((int)this + 0x20) * fVar3 + *(float *)((int)this + 0x30);
  *(float *)((int)this + 0x34) =
       *(float *)((int)this + 4) * fVar1 + *(float *)((int)this + 0x14) * fVar2 +
       *(float *)((int)this + 0x24) * fVar3 + *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x38) =
       *(float *)((int)this + 8) * fVar1 + *(float *)((int)this + 0x18) * fVar2 +
       *(float *)((int)this + 0x28) * fVar3 + *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x3c) =
       *(float *)((int)this + 0xc) * fVar1 + *(float *)((int)this + 0x1c) * fVar2 +
       *(float *)((int)this + 0x2c) * fVar3 + *(float *)((int)this + 0x3c);
  return;
}


/* FUN_004023b0 @ 004023b0  kind=gamemisc  attributed-by=none  size=201 */

void __thiscall FUN_004023b0(void *this,float param_1,float param_2,float param_3)

{
  *(float *)((int)this + 0x30) =
       *(float *)((int)this + 0x10) * param_2 + *(float *)this * param_1 +
       *(float *)((int)this + 0x20) * param_3 + *(float *)((int)this + 0x30);
  *(float *)((int)this + 0x34) =
       *(float *)((int)this + 4) * param_1 + *(float *)((int)this + 0x14) * param_2 +
       *(float *)((int)this + 0x24) * param_3 + *(float *)((int)this + 0x34);
  *(float *)((int)this + 0x38) =
       *(float *)((int)this + 8) * param_1 + *(float *)((int)this + 0x18) * param_2 +
       *(float *)((int)this + 0x28) * param_3 + *(float *)((int)this + 0x38);
  *(float *)((int)this + 0x3c) =
       *(float *)((int)this + 0xc) * param_1 + *(float *)((int)this + 0x1c) * param_2 +
       *(float *)((int)this + 0x2c) * param_3 + *(float *)((int)this + 0x3c);
  return;
}


/* FUN_00402510 @ 00402510  kind=gamemisc  attributed-by=none  size=64 */

int __fastcall FUN_00402510(int param_1)

{
  int iVar1;
  ulonglong uVar2;
  
  iVar1 = 0;
  do {
    uVar2 = FUN_0054a946();
    *(int *)(param_1 + iVar1 * 8) = (int)uVar2;
    *(int *)(param_1 + 4 + iVar1 * 8) = (int)(uVar2 >> 0x20);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 3);
  return param_1;
}


/* FUN_00402c10 @ 00402c10  kind=gamemisc  attributed-by=none  size=22 */

void __thiscall FUN_00402c10(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x11c;
  return;
}


/* FUN_00402c30 @ 00402c30  kind=gamemisc  attributed-by=none  size=19 */

void __thiscall FUN_00402c30(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0xc;
  return;
}


/* FUN_00402cb0 @ 00402cb0  kind=gamemisc  attributed-by=none  size=85 */

uint * __thiscall FUN_00402cb0(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *(uint *)this;
  param_1[1] = *(uint *)((int)this + 4);
  param_1[2] = *(uint *)((int)this + 8);
  param_1[3] = *(uint *)((int)this + 0xc);
  param_1[4] = *(uint *)((int)this + 0x10);
  param_1[5] = *(uint *)((int)this + 0x14);
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


/* FUN_00402d10 @ 00402d10  kind=gamemisc  attributed-by=none  size=37 */

int __thiscall FUN_00402d10(void *this,uint param_1)

{
  uint3 uVar1;
  uint uVar2;
  
  uVar2 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  uVar1 = (uint3)((param_1 << 0x10) >> 8);
  if ((*(int *)((int)this + 4) <= (int)uVar2) &&
     ((*(int *)((int)this + 4) < (int)uVar2 || (*(uint *)this < param_1 << 0x10)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_00402e30 @ 00402e30  kind=gamemisc  attributed-by=none  size=46 */

uint * __thiscall FUN_00402e30(void *this,uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar2 = *(uint *)this;
  *(uint *)this = *(int *)this + uVar3;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[2];
  puVar1 = (uint *)((int)this + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_1[3] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[4];
  puVar1 = (uint *)((int)this + 0x10);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  *(int *)((int)this + 0x14) = *(int *)((int)this + 0x14) + param_1[5] + (uint)CARRY4(uVar2,uVar3);
  return this;
}


/* FUN_00402e60 @ 00402e60  kind=gamemisc  attributed-by=none  size=22 */

uint * __thiscall FUN_00402e60(void *this,uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *param_1;
  uVar1 = *(uint *)this;
  *(uint *)this = *(int *)this + uVar2;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_1[1] + (uint)CARRY4(uVar1,uVar2);
  return this;
}


/* FUN_00402e80 @ 00402e80  kind=gamemisc  attributed-by=none  size=46 */

uint * __thiscall FUN_00402e80(void *this,uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = *param_1;
  uVar2 = *(uint *)this;
  *(uint *)this = *(int *)this - uVar3;
  *(int *)((int)this + 4) = (*(int *)((int)this + 4) - param_1[1]) - (uint)(uVar2 < uVar3);
  uVar3 = param_1[2];
  puVar1 = (uint *)((int)this + 8);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  *(int *)((int)this + 0xc) = (*(int *)((int)this + 0xc) - param_1[3]) - (uint)(uVar2 < uVar3);
  uVar3 = param_1[4];
  puVar1 = (uint *)((int)this + 0x10);
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  *(int *)((int)this + 0x14) = (*(int *)((int)this + 0x14) - param_1[5]) - (uint)(uVar2 < uVar3);
  return this;
}


/* FUN_00405550 @ 00405550  kind=gamemisc  attributed-by=none  size=20 */

void __fastcall FUN_00405550(int *param_1)

{
  *param_1 = *param_1 + -1;
  if (*param_1 < 1) {
    *param_1 = 0;
    *(undefined2 *)(param_1 + 1) = 0;
  }
  return;
}


/* FUN_00405750 @ 00405750  kind=gamemisc  attributed-by=none  size=37 */

int __thiscall FUN_00405750(void *this,uint param_1)

{
  uint3 uVar1;
  uint uVar2;
  
  uVar2 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  uVar1 = (uint3)((param_1 << 0x10) >> 8);
  if (((int)uVar2 <= *(int *)((int)this + 4)) &&
     (((int)uVar2 < *(int *)((int)this + 4) || (param_1 << 0x10 < *(uint *)this)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_00407730 @ 00407730  kind=gamemisc  attributed-by=none  size=405 */

undefined1 * __thiscall FUN_00407730(void *this,undefined1 *param_1)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_1[3];
  *(undefined1 *)((int)this + 4) = param_1[4];
  *(undefined2 *)((int)this + 6) = *(undefined2 *)(param_1 + 6);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((int)this + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)((int)this + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined2 *)((int)this + 0x14) = *(undefined2 *)(param_1 + 0x14);
  *(undefined2 *)((int)this + 0x16) = *(undefined2 *)(param_1 + 0x16);
  *(undefined2 *)((int)this + 0x18) = *(undefined2 *)(param_1 + 0x18);
  *(undefined2 *)((int)this + 0x1a) = *(undefined2 *)(param_1 + 0x1a);
  *(undefined2 *)((int)this + 0x1c) = *(undefined2 *)(param_1 + 0x1c);
  *(undefined2 *)((int)this + 0x1e) = *(undefined2 *)(param_1 + 0x1e);
  *(undefined2 *)((int)this + 0x20) = *(undefined2 *)(param_1 + 0x20);
  *(undefined2 *)((int)this + 0x22) = *(undefined2 *)(param_1 + 0x22);
  *(undefined4 *)((int)this + 0x24) = *(undefined4 *)(param_1 + 0x24);
  *(undefined4 *)((int)this + 0x28) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)((int)this + 0x2c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)((int)this + 0x30) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)((int)this + 0x34) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)((int)this + 0x38) = *(undefined4 *)(param_1 + 0x38);
  *(undefined4 *)((int)this + 0x3c) = *(undefined4 *)(param_1 + 0x3c);
  *(undefined4 *)((int)this + 0x40) = *(undefined4 *)(param_1 + 0x40);
  *(undefined4 *)((int)this + 0x44) = *(undefined4 *)(param_1 + 0x44);
  *(undefined4 *)((int)this + 0x48) = *(undefined4 *)(param_1 + 0x48);
  *(undefined4 *)((int)this + 0x4c) = *(undefined4 *)(param_1 + 0x4c);
  *(undefined4 *)((int)this + 0x50) = *(undefined4 *)(param_1 + 0x50);
  *(undefined4 *)((int)this + 0x54) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)((int)this + 0x58) = *(undefined4 *)(param_1 + 0x58);
  *(undefined4 *)((int)this + 0x5c) = *(undefined4 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x60) = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 100) = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)((int)this + 0x68) = *(undefined4 *)(param_1 + 0x68);
  *(undefined4 *)((int)this + 0x6c) = *(undefined4 *)(param_1 + 0x6c);
  *(undefined4 *)((int)this + 0x70) = *(undefined4 *)(param_1 + 0x70);
  *(undefined4 *)((int)this + 0x74) = *(undefined4 *)(param_1 + 0x74);
  *(undefined4 *)((int)this + 0x78) = *(undefined4 *)(param_1 + 0x78);
  *(undefined4 *)((int)this + 0x7c) = *(undefined4 *)(param_1 + 0x7c);
  *(undefined4 *)((int)this + 0x80) = *(undefined4 *)(param_1 + 0x80);
  *(undefined4 *)((int)this + 0x84) = *(undefined4 *)(param_1 + 0x84);
  *(undefined4 *)((int)this + 0x88) = *(undefined4 *)(param_1 + 0x88);
  *(undefined4 *)((int)this + 0x8c) = *(undefined4 *)(param_1 + 0x8c);
  *(undefined4 *)((int)this + 0x90) = *(undefined4 *)(param_1 + 0x90);
  *(undefined4 *)((int)this + 0x94) = *(undefined4 *)(param_1 + 0x94);
  *(undefined4 *)((int)this + 0x98) = *(undefined4 *)(param_1 + 0x98);
  *(undefined4 *)((int)this + 0x9c) = *(undefined4 *)(param_1 + 0x9c);
  *(undefined4 *)((int)this + 0xa0) = *(undefined4 *)(param_1 + 0xa0);
  *(undefined4 *)((int)this + 0xa4) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)((int)this + 0xa8) = *(undefined4 *)(param_1 + 0xa8);
  return this;
}


/* FUN_00407a50 @ 00407a50  kind=gamemisc  attributed-by=none  size=76 */

int * __fastcall FUN_00407a50(int *param_1)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  iVar2 = *param_1;
  if (*(char *)(iVar2 + 0xd) == '\0') {
    piVar3 = *(int **)(iVar2 + 8);
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar3 + 0xd);
      piVar4 = (int *)*piVar3;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar4 + 0xd);
        piVar3 = piVar4;
        piVar4 = (int *)*piVar4;
      }
      *param_1 = (int)piVar3;
      return param_1;
    }
    iVar2 = *(int *)(iVar2 + 4);
    cVar1 = *(char *)(iVar2 + 0xd);
    while ((cVar1 == '\0' && (*param_1 == *(int *)(iVar2 + 8)))) {
      *param_1 = iVar2;
      iVar2 = *(int *)(iVar2 + 4);
      cVar1 = *(char *)(iVar2 + 0xd);
    }
    *param_1 = iVar2;
  }
  return param_1;
}


/* FUN_00407b00 @ 00407b00  kind=gamemisc  attributed-by=none  size=47 */

void FUN_00407b00(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x20);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00407b0e. Too many branches */
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


/* FUN_00407c80 @ 00407c80  kind=gamemisc  attributed-by=none  size=63 */

float10 __cdecl FUN_00407c80(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)(1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0));
}


/* FUN_00408230 @ 00408230  kind=gamemisc  attributed-by=none  size=196 */

void __thiscall FUN_00408230(void *this,int param_1)

{
  float fVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  if (((*(int *)((int)this + 0x128) != 0) && (*(char *)((int)this + 0x140) == '\x04')) &&
     (*(char *)((int)this + 0x141) == '\x01')) {
    fVar1 = *(float *)((int)this + 0x170) + 0.25;
    *(float *)((int)this + 0x170) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)((int)this + 0x170) = 0x3f800000;
    }
    uStack_18 = 0;
    local_c = 0;
    local_1c = CONCAT31(local_1c._1_3_,0xb);
    local_14 = 30000;
    FUN_00411740(this,(char *)&local_1c);
    local_34 = CONCAT44(uStack_18,local_1c);
    local_40 = *(undefined4 *)((int)this + 0xc);
    local_44 = *(undefined4 *)((int)this + 8);
    local_2c = CONCAT44(uStack_10,local_14);
    local_24 = local_c;
    local_3c = local_44;
    local_38 = local_40;
    FUN_00411040((void *)(param_1 + 0x58),(undefined8 *)&local_44);
  }
  return;
}


/* FUN_00408300 @ 00408300  kind=gamemisc  attributed-by=none  size=419 */

float10 __fastcall FUN_00408300(int param_1)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  fVar4 = (float)dVar3 * (float)dVar2;
  local_8 = *(float *)(param_1 + 0x184) * fVar4;
  if (*(char *)(param_1 + 0x60) == '\0') {
    dVar3 = 2.0;
    libm_sse2_pow_precise();
    local_8 = (float)dVar3 * (float)dVar2 * *(float *)(param_1 + 0x184);
  }
  if ((*(byte *)(param_1 + 0x7e) & 0x20) != 0) {
    local_8 = local_8 + fVar4;
  }
  if (*(char *)(param_1 + 0x530) == '\x04') {
    fVar1 = FUN_004139b0((char *)(param_1 + 0x530));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x648) == '\x06') {
    fVar1 = FUN_004139b0((char *)(param_1 + 0x648));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x760) == '\x05') {
    fVar1 = FUN_004139b0((char *)(param_1 + 0x760));
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(param_1 + 0x878) == '\a') {
    fVar1 = FUN_004139b0((char *)(param_1 + 0x878));
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_00408f70 @ 00408f70  kind=gamemisc  attributed-by=none  size=735 */

float10 __fastcall FUN_00408f70(void *param_1)

{
  int *piVar1;
  int *piVar2;
  ushort uVar3;
  uint uVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  int *local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bae8;
  local_10 = ExceptionList;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar7 = 2.0;
  libm_sse2_pow_precise(uVar4);
  local_18 = (float)dVar7;
  dVar7 = 2.0;
  libm_sse2_pow_precise();
  local_18 = *(float *)((int)param_1 + 0x180) * (float)dVar7 * local_18;
  local_14 = local_18;
  FUN_00409270(param_1,&local_24);
  local_8 = 0;
  if (local_20 == 0) {
    uVar3 = *(ushort *)((int)param_1 + 0x7e);
    if ((uVar3 & 8) != 0) {
      dVar7 = 2.0;
      libm_sse2_pow_precise(uVar4);
      local_1c = (float)dVar7;
      dVar7 = 2.0;
      libm_sse2_pow_precise();
      uVar3 = *(ushort *)((int)param_1 + 0x7e);
      local_18 = local_1c * (float)dVar7 * 2.0 + local_18;
      local_14 = local_18;
    }
    fVar6 = local_18;
    if ((uVar3 & 0x10) != 0) {
      dVar7 = 2.0;
      libm_sse2_pow_precise(uVar4);
      local_1c = (float)dVar7;
      dVar7 = 2.0;
      libm_sse2_pow_precise();
      local_14 = (float)dVar7 * local_1c * 8.0 + local_18;
      fVar6 = local_14;
    }
  }
  else {
    for (piVar1 = (int *)*local_24; fVar6 = local_18, piVar1 != local_24; piVar1 = (int *)*piVar1) {
      fVar5 = FUN_00414550((char *)piVar1[2]);
      local_1c = (float)fVar5;
      local_18 = local_1c + local_18;
      local_14 = local_18;
    }
  }
  switch(*(undefined1 *)((int)param_1 + 0x68)) {
  case 0x57:
    local_14 = fVar6 * 50.0;
    break;
  case 0x5b:
    local_14 = fVar6 * 2.0;
    break;
  case 0x5d:
    local_14 = fVar6 * 5.0;
    break;
  case 0x60:
    local_14 = fVar6 * 3.0;
  }
  piVar1 = (int *)*local_24;
  *local_24 = (int)local_24;
  local_24[1] = (int)local_24;
  while (piVar1 != local_24) {
    piVar2 = (int *)*piVar1;
    operator_delete(piVar1);
    piVar1 = piVar2;
  }
  operator_delete(local_24);
  ExceptionList = local_10;
  return (float10)local_14;
}


/* FUN_004094a0 @ 004094a0  kind=gamemisc  attributed-by=none  size=296 */

float10 __fastcall FUN_004094a0(int param_1)

{
  float10 fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 local_8;
  
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  dVar4 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (float)dVar3 * (float)dVar4 * *(float *)(param_1 + 0x180);
  if (*(char *)(param_1 + 0x990) == '\x03') {
    if (*(char *)(param_1 + 0x991) != '\r') {
      fVar1 = FUN_00414550((char *)(param_1 + 0x990));
      local_8 = (float)fVar1 + local_8;
      goto LAB_0040958b;
    }
    fVar1 = FUN_00414550((char *)(param_1 + 0xaa8));
    fVar2 = (float)fVar1 * 4.0;
  }
  else {
LAB_0040958b:
    if (*(char *)(param_1 + 0xaa8) != '\x03') goto LAB_004095af;
    fVar1 = FUN_00414550((char *)(param_1 + 0xaa8));
    fVar2 = (float)fVar1;
  }
  local_8 = fVar2 + local_8;
LAB_004095af:
  return (float10)(*(float *)(param_1 + 0x180) * local_8);
}


/* FUN_004095d0 @ 004095d0  kind=gamemisc  attributed-by=none  size=78 */

float10 __cdecl FUN_004095d0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) * 3.0 + 1.0);
}


/* FUN_00409620 @ 00409620  kind=gamemisc  attributed-by=none  size=53 */

uint __fastcall FUN_00409620(int param_1)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  
  cVar1 = *(char *)(param_1 + 0x60);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x03')) &&
     ((cVar1 != '\x05' &&
      (((cVar1 != '\x06' || (uVar2 = *(uint *)(param_1 + 100), uVar2 == 0x8c)) ||
       ((uVar2 == 0x8e || (uVar2 == 0x8d)))))))) {
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* FUN_00409660 @ 00409660  kind=gamemisc  attributed-by=none  size=74 */

bool __thiscall FUN_00409660(void *this,char *param_1)

{
  int iVar1;
  
  if (*param_1 == '\x19') {
    iVar1 = *(int *)((int)this + 0x1164);
    if (100 < iVar1) {
      iVar1 = iVar1 + (iVar1 / 100) * -100 + 100;
    }
    return *(int *)(param_1 + 4) == iVar1;
  }
  return true;
}


/* FUN_00409740 @ 00409740  kind=gamemisc  attributed-by=none  size=55 */

float10 __cdecl FUN_00409740(int param_1)

{
  return (float10)(1.0 - 1.0 / ((float)(param_1 + 1) * 0.1 + 1.0));
}


/* FUN_00409780 @ 00409780  kind=gamemisc  attributed-by=none  size=669 */

int __thiscall FUN_00409780(void *this,undefined4 param_1,int param_2)

{
  float10 fVar1;
  
  switch(param_1) {
  case 0x15:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(8000.0 - (float)fVar1 * 8000.0);
  default:
    return 0;
  case 0x30:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 12000.0);
  case 0x31:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(16000.0 - (float)fVar1 * 10000.0);
  case 0x32:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(16000.0 - (float)fVar1 * 10000.0);
  case 0x36:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 14000.0);
  case 0x48:
    return 15000;
  case 0x56:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 40000.0);
  case 0x58:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(8000.0 - (float)fVar1 * 8000.0);
  case 0x60:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 14000.0);
  case 0x61:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 99:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(12000.0 - (float)fVar1 * 10000.0);
  case 100:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 0x65:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 0x66:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 0x67:
    fVar1 = FUN_00409de0((int)this,param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 10000.0);
  }
}


/* FUN_00409ac0 @ 00409ac0  kind=gamemisc  attributed-by=none  size=586 */

float10 __fastcall FUN_00409ac0(int param_1)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  dVar4 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (((float)dVar2 * (float)dVar3) / (float)dVar4) * 0.1;
  if (*(char *)(param_1 + 0x990) == '\x03') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0x990));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0xaa8) == '\x03') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0xaa8));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x530) == '\x04') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0x530));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x648) == '\x06') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0x648));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x760) == '\x05') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0x760));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x878) == '\a') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0x878));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x418) == '\b') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0x418));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0xbc0) == '\t') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0xbc0));
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(param_1 + 0xcd8) == '\t') {
    fVar1 = FUN_00413ac0((char *)(param_1 + 0xcd8));
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_00409d10 @ 00409d10  kind=gamemisc  attributed-by=none  size=94 */

float10 FUN_00409d10(undefined4 param_1)

{
  switch(param_1) {
  case 5:
  case 0x1a:
    return (float10)0.5;
  default:
    return (float10)1;
  case 0x15:
  case 0x48:
    return (float10)0.1;
  case 0x1e:
  case 0x20:
    return (float10)0.4;
  case 0x1f:
  case 0x21:
    return (float10)0.6;
  case 0x25:
  case 0x2b:
  case 0x39:
  case 0x3a:
  case 0x44:
    return (float10)2.0;
  case 0x37:
    return (float10)0.25;
  }
}


/* FUN_0040a4f0 @ 0040a4f0  kind=gamemisc  attributed-by=none  size=680 */

void __thiscall FUN_0040a4f0(void *this,undefined4 *param_1,int *param_2)

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
      goto LAB_0040a61c;
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
LAB_0040a61c:
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
              goto LAB_0040a74e;
            }
LAB_0040a6f0:
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
            goto LAB_0040a6f0;
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
            goto LAB_0040a74e;
          }
        }
        piVar5 = (int *)piVar6[1];
        piVar7 = piVar6;
      } while (piVar6 != *(int **)(*(int *)this + 4));
    }
    *(undefined1 *)(piVar7 + 3) = 1;
  }
LAB_0040a74e:
  if ((void *)piVar2[4] != (void *)0x0) {
    operator_delete((void *)piVar2[4]);
    piVar2[4] = 0;
    piVar2[5] = 0;
    piVar2[6] = 0;
  }
  operator_delete(piVar2);
  if (*(int *)((int)this + 4) != 0) {
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0040a7f0 @ 0040a7f0  kind=gamemisc  attributed-by=none  size=79 */

float10 __cdecl FUN_0040a7f0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) * 3.0 + 1.5);
}


/* FUN_0040ef90 @ 0040ef90  kind=gamemisc  attributed-by=none  size=48 */

undefined4 * __thiscall FUN_0040ef90(void *this,uint param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)**(undefined4 **)((int)this + 0x1178);
  while( true ) {
    if (puVar1 == *(undefined4 **)((int)this + 0x1178)) {
      return (undefined4 *)0x0;
    }
    if (*(byte *)(puVar1 + 2) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 2;
}


/* FUN_0040f520 @ 0040f520  kind=gamemisc  attributed-by=none  size=128 */

bool __fastcall FUN_0040f520(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  float10 fVar3;
  float local_8;
  
  puVar1 = (undefined4 *)**(undefined4 **)(param_1 + 0x1178);
  do {
    if (puVar1 == *(undefined4 **)(param_1 + 0x1178)) {
LAB_0040f53f:
      fVar3 = FUN_00409ac0(param_1);
      local_8 = (float)fVar3 + *(float *)(param_1 + 0x1190) * 0.15;
LAB_0040f565:
      iVar2 = rand();
      return (float)iVar2 / 32767.0 < local_8;
    }
    if (*(char *)(puVar1 + 2) == '\v') {
      if (puVar1 != (undefined4 *)0xfffffff8) {
        local_8 = 1.0;
        goto LAB_0040f565;
      }
      goto LAB_0040f53f;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* FUN_0040f610 @ 0040f610  kind=gamemisc  attributed-by=none  size=60 */

undefined1 __fastcall FUN_0040f610(int param_1)

{
  char cVar1;
  
  if ((*(int *)(param_1 + 0x130) < 1) &&
     ((((cVar1 = *(char *)(param_1 + 0x68), cVar1 == 'G' || (cVar1 == 'H')) || (cVar1 == '\b')) ||
      ((cVar1 == 'b' ||
       (((cVar1 == ';' || (cVar1 == '?')) &&
        ((*(char *)(param_1 + 0x140) == '\x01' && (*(char *)(param_1 + 0x141) == '\x01')))))))))) {
    return 1;
  }
  return 0;
}


/* FUN_0040f6e0 @ 0040f6e0  kind=gamemisc  attributed-by=none  size=48 */

undefined1 __fastcall FUN_0040f6e0(int param_1)

{
  if (((((*(byte *)(param_1 + 0x124) & 0x10) != 0) &&
       (*(float *)(param_1 + 0x3c) <= 0.0 && *(float *)(param_1 + 0x3c) != 0.0)) &&
      ((*(byte *)(param_1 + 0x5c) & 1) == 0)) &&
     ((*(int *)(param_1 + 300) < 1 && (*(int *)(param_1 + 0x128) < 1)))) {
    return 1;
  }
  return 0;
}


/* FUN_0040f7f0 @ 0040f7f0  kind=gamemisc  attributed-by=none  size=38 */

uint __cdecl FUN_0040f7f0(int param_1)

{
  switch(param_1) {
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x4a:
  case 0x4b:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x97:
    return 1;
  default:
    return 0;
  }
}


/* FUN_0040f8b0 @ 0040f8b0  kind=gamemisc  attributed-by=none  size=54 */

undefined1 __fastcall FUN_0040f8b0(char *param_1)

{
  char cVar1;
  
  if ((*param_1 == '\x03') &&
     ((((((cVar1 = param_1[1], cVar1 == '\x0f' || (cVar1 == '\x10')) || (cVar1 == '\x11')) ||
        ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    return 1;
  }
  return 0;
}


/* FUN_0040ffe0 @ 0040ffe0  kind=gamemisc  attributed-by=none  size=43 */

int __fastcall FUN_0040ffe0(int param_1)

{
  if (*(char *)(param_1 + 0x60) == '\0') {
    return 0x5dc;
  }
  return 3000 - ((int)((uint)*(byte *)(param_1 + 0x1a8) * 0x5dc) >> 2);
}


/* FUN_004103a0 @ 004103a0  kind=gamemisc  attributed-by=none  size=92 */

void __fastcall FUN_004103a0(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar2 = (undefined4 *)**(undefined4 **)(param_1 + 0x139c);
  while (puVar2 != *(undefined4 **)(param_1 + 0x139c)) {
    if (*(char *)((int)puVar2 + 0xd) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0xd) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0xd);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0xd);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0xd);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0xd);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return;
}


/* FUN_004110d0 @ 004110d0  kind=gamemisc  attributed-by=none  size=655 */

void __fastcall FUN_004110d0(int param_1)

{
  int *piVar1;
  int *piVar2;
  
  FUN_00411360(param_1 + 0x10);
  if (*(void **)(param_1 + 0x13e4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x13e4));
    *(undefined4 *)(param_1 + 0x13e4) = 0;
  }
  *(undefined4 *)(param_1 + 0x1d40) = 0;
  *(undefined4 *)(param_1 + 0x1d3c) = 1;
  *(undefined4 *)(param_1 + 0x11c0) = 0;
  *(undefined4 *)(param_1 + 0x11c4) = 0;
  *(undefined4 *)(param_1 + 0x11d0) = 0;
  *(undefined4 *)(param_1 + 0x11d4) = 0;
  *(undefined4 *)(param_1 + 0x11c8) = 0;
  *(undefined4 *)(param_1 + 0x11cc) = 0;
  *(undefined4 *)(param_1 + 0x1314) = 0;
  *(undefined4 *)(param_1 + 0x1318) = 0;
  piVar1 = *(int **)(param_1 + 0x130c);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 0x130c) + 4) = *(int *)(param_1 + 0x130c);
  *(undefined4 *)(param_1 + 0x1310) = 0;
  if (piVar2 != *(int **)(param_1 + 0x130c)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x130c));
  }
  FUN_004f8520((int *)(param_1 + 0x13a4));
  FUN_004f8520((int *)(param_1 + 0x13ac));
  FUN_004f8520((int *)(param_1 + 0x139c));
  *(undefined4 *)(param_1 + 0x13cc) = 0;
  *(undefined4 *)(param_1 + 0x13c8) = 0;
  *(undefined4 *)(param_1 + 0x13d0) = 0;
  *(undefined4 *)(param_1 + 0x13e0) = 0;
  *(undefined4 *)(param_1 + 0x1184) = 0;
  *(undefined4 *)(param_1 + 0x1190) = 0;
  *(undefined4 *)(param_1 + 0x1194) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x1398) = 0;
  *(undefined4 *)(param_1 + 0x118c) = 0;
  *(undefined4 *)(param_1 + 0x1188) = 0;
  *(undefined4 *)(param_1 + 0x13bc) = 0;
  *(undefined4 *)(param_1 + 0x11d8) = 0;
  *(undefined4 *)(param_1 + 0x13b4) = 0;
  *(undefined1 *)(param_1 + 0x13c0) = 0;
  *(undefined4 *)(param_1 + 0x1404) = 0;
  FUN_00406310(*(undefined4 **)(param_1 + 0x11dc),*(undefined4 **)(param_1 + 0x11e0));
  *(undefined4 *)(param_1 + 0x11e0) = *(undefined4 *)(param_1 + 0x11dc);
  FUN_00405330(param_1);
  *(undefined4 *)(param_1 + 0x1478) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x147c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1480) = 0;
  piVar1 = *(int **)(param_1 + 0x1470);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 0x1470) + 4) = *(int *)(param_1 + 0x1470);
  *(undefined4 *)(param_1 + 0x1474) = 0;
  if (piVar2 != *(int **)(param_1 + 0x1470)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x1470));
  }
  *(undefined4 *)(param_1 + 0x1484) = 0;
  *(undefined4 *)(param_1 + 0x1488) = 0;
  *(undefined4 *)(param_1 + 0x141c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1420) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1424) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1458) = 0;
  *(undefined4 *)(param_1 + 0x1490) = *(undefined4 *)(param_1 + 0x148c);
  piVar1 = *(int **)(param_1 + 0x1178);
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*(int *)(param_1 + 0x1178) + 4) = *(int *)(param_1 + 0x1178);
  *(undefined4 *)(param_1 + 0x117c) = 0;
  if (piVar2 != *(int **)(param_1 + 0x1178)) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*(int *)(param_1 + 0x1178));
  }
  return;
}


/* FUN_00411360 @ 00411360  kind=gamemisc  attributed-by=none  size=472 */

void __fastcall FUN_00411360(int param_1)

{
  undefined4 *puVar1;
  undefined4 local_b4 [43];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(param_1 + 0x180) = 1;
  *(undefined4 *)(param_1 + 0x184) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x168) = 0x42c80000;
  *(undefined4 *)(param_1 + 0x170) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x16c) = 0x3f800000;
  *(undefined1 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0xfffff448;
  *(undefined4 *)(param_1 + 0x120) = 0;
  *(undefined4 *)(param_1 + 0x124) = 0;
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined4 *)(param_1 + 300) = 0;
  memset((void *)(param_1 + 0x2f0),0,0xe38);
  *(undefined2 *)(param_1 + 0x114) = 0;
  *(undefined2 *)(param_1 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  *(undefined4 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x160) = 0;
  *(undefined4 *)(param_1 + 0x164) = 0;
  *(undefined4 *)(param_1 + 0x188) = 0;
  *(undefined4 *)(param_1 + 0x18c) = 0;
  *(undefined4 *)(param_1 + 400) = 0;
  *(undefined4 *)(param_1 + 0x194) = 0;
  *(undefined1 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x144) = 0;
  *(undefined4 *)(param_1 + 0x148) = 0;
  *(undefined4 *)(param_1 + 0x14c) = 0;
  *(undefined4 *)(param_1 + 0x1a0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a4) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1cc) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d0) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1d4) = 0;
  *(undefined1 *)(param_1 + 0x1c8) = 0;
  *(undefined2 *)(param_1 + 0x130) = 0;
  puVar1 = FUN_00406970(local_b4);
  FUN_00407730((void *)(param_1 + 0x68),(undefined1 *)puVar1);
  *(undefined8 *)(param_1 + 0x1158) = 0;
  *(undefined8 *)(param_1 + 0x1160) = 0;
  memset((void *)(param_1 + 0x1128),0,0x2c);
  *(undefined4 *)(param_1 + 0x1154) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00411540 @ 00411540  kind=gamemisc  attributed-by=none  size=419 */

float10 __fastcall FUN_00411540(int param_1)

{
  float10 fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  fVar4 = (float)dVar3 * (float)dVar2;
  local_8 = *(float *)(param_1 + 0x188) * fVar4;
  if (*(char *)(param_1 + 0x60) == '\0') {
    dVar3 = 2.0;
    libm_sse2_pow_precise();
    local_8 = (float)dVar3 * (float)dVar2 * *(float *)(param_1 + 0x188);
  }
  if ((*(byte *)(param_1 + 0x7e) & 0x20) != 0) {
    local_8 = local_8 + fVar4;
  }
  if (*(char *)(param_1 + 0x530) == '\x04') {
    fVar1 = FUN_00414260((char *)(param_1 + 0x530));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x648) == '\x06') {
    fVar1 = FUN_00414260((char *)(param_1 + 0x648));
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(param_1 + 0x760) == '\x05') {
    fVar1 = FUN_00414260((char *)(param_1 + 0x760));
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(param_1 + 0x878) == '\a') {
    fVar1 = FUN_00414260((char *)(param_1 + 0x878));
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_004116f0 @ 004116f0  kind=gamemisc  attributed-by=none  size=70 */

float10 __cdecl FUN_004116f0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) + 1.0);
}


/* FUN_00411ad0 @ 00411ad0  kind=gamemisc  attributed-by=none  size=655 */

float10 __fastcall FUN_00411ad0(void *param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  float10 fVar5;
  double dVar6;
  int *local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bae8;
  local_10 = ExceptionList;
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar6 = 2.0;
  libm_sse2_pow_precise(uVar4);
  local_18 = (float)dVar6;
  dVar6 = 2.0;
  libm_sse2_pow_precise();
  local_18 = *(float *)((int)param_1 + 0x180) * (float)dVar6 * local_18;
  local_14 = local_18;
  FUN_00409270(param_1,&local_24);
  local_8 = 0;
  if (local_20 == 0) {
    uVar1 = *(ushort *)((int)param_1 + 0x7e);
    if ((uVar1 & 8) != 0) {
      dVar6 = 2.0;
      libm_sse2_pow_precise(uVar4);
      local_1c = (float)dVar6;
      dVar6 = 2.0;
      libm_sse2_pow_precise();
      local_18 = local_1c * (float)dVar6 * 2.0 + local_14;
      local_14 = local_18;
    }
    if ((uVar1 & 0x10) != 0) {
      dVar6 = 2.0;
      libm_sse2_pow_precise(uVar4);
      local_1c = (float)dVar6;
      dVar6 = 2.0;
      libm_sse2_pow_precise();
      local_18 = local_1c * (float)dVar6 * 8.0 + local_14;
    }
  }
  else {
    for (piVar2 = (int *)*local_24; piVar2 != local_24; piVar2 = (int *)*piVar2) {
      fVar5 = FUN_00414550((char *)piVar2[2]);
      local_1c = (float)fVar5;
      local_18 = local_1c + local_14;
      local_14 = local_18;
    }
  }
  piVar2 = (int *)*local_24;
  *local_24 = (int)local_24;
  local_24[1] = (int)local_24;
  while (piVar2 != local_24) {
    piVar3 = (int *)*piVar2;
    operator_delete(piVar2);
    piVar2 = piVar3;
  }
  operator_delete(local_24);
  ExceptionList = local_10;
  return (float10)local_18;
}


/* FUN_004120f0 @ 004120f0  kind=gamemisc  attributed-by=none  size=83 */

float10 __cdecl FUN_004120f0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0.5;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) * 0.5 + 0.5);
}


/* FUN_00412550 @ 00412550  kind=gamemisc  attributed-by=none  size=288 */

void __fastcall FUN_00412550(int param_1)

{
  float10 fVar1;
  
  if ((0 < *(int *)(param_1 + 400)) &&
     ((int)((1.0 - 1.0 / (((float)*(int *)(param_1 + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 + 50.0) <=
      *(int *)(param_1 + 0x194))) {
    do {
      *(int *)(param_1 + 0x194) =
           *(int *)(param_1 + 0x194) -
           (int)((1.0 - 1.0 / (((float)*(int *)(param_1 + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 + 50.0
                );
      *(int *)(param_1 + 400) = *(int *)(param_1 + 400) + 1;
      fVar1 = FUN_0040fda0(param_1);
      *(float *)(param_1 + 0x16c) = (float)fVar1;
    } while ((int)((1.0 - 1.0 / (((float)*(int *)(param_1 + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 +
                  50.0) <= *(int *)(param_1 + 0x194));
  }
  return;
}


/* FUN_00412670 @ 00412670  kind=gamemisc  attributed-by=none  size=148 */

float * __thiscall FUN_00412670(void *this,float *param_1)

{
  float fVar1;
  float fVar2;
  double dVar3;
  float fVar4;
  
  fVar1 = *(float *)this;
  dVar3 = (double)(fVar1 * fVar1 + *(float *)((int)this + 4) * *(float *)((int)this + 4) +
                  *(float *)((int)this + 8) * *(float *)((int)this + 8));
  libm_sse2_sqrt_precise();
  fVar4 = 1.0 / (float)dVar3;
  *param_1 = fVar1;
  param_1[1] = *(float *)((int)this + 4);
  fVar2 = *(float *)((int)this + 8);
  *param_1 = fVar1 * fVar4;
  param_1[2] = fVar2;
  param_1[1] = param_1[1] * fVar4;
  param_1[2] = fVar4 * param_1[2];
  return param_1;
}


/* FUN_004129a0 @ 004129a0  kind=gamemisc  attributed-by=none  size=43 */

void __fastcall FUN_004129a0(int *param_1)

{
  int *piVar1;
  bool bVar2;
  
  bVar2 = std::uncaught_exception();
  if (!bVar2) {
    std::basic_ostream<char,std::char_traits<char>_>::_Osfx
              ((basic_ostream<char,std::char_traits<char>_> *)*param_1);
  }
  piVar1 = *(int **)(*(int *)(*(int *)*param_1 + 4) + 0x38 + *param_1);
  if (piVar1 != (int *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004129c7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*piVar1 + 8))();
    return;
  }
  return;
}


/* FUN_00412b00 @ 00412b00  kind=gamemisc  attributed-by=none  size=95 */

/* WARNING: Removing unreachable block (ram,0x00412b2f) */

uint __thiscall FUN_00412b00(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  pvVar1 = operator_new(param_1);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *(void **)this = pvVar1;
  *(void **)((int)this + 4) = pvVar1;
  *(uint *)((int)this + 8) = (int)pvVar1 + param_1;
  return CONCAT31((int3)((int)pvVar1 + param_1 >> 8),1);
}


/* FUN_00412d00 @ 00412d00  kind=gamemisc  attributed-by=none  size=133 */

void __cdecl FUN_00412d00(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 *this;
  int iVar2;
  int local_c;
  
  this = param_2;
  piVar1 = param_1;
  iVar2 = param_1[1] - *param_1;
  local_c = (int)(longlong)
                 ROUND(((double)iVar2 + *(double *)(&DAT_0055ac20 + (iVar2 >> 0x1f) * -8)) * 1.1);
  param_1 = (int *)(local_c + 0xc);
  FUN_00413180(param_2,(uint)param_1);
  compress(*this,&param_1,*piVar1,iVar2);
  FUN_00413180(this,(uint)param_1);
  return;
}


/* FUN_00412e20 @ 00412e20  kind=gamemisc  attributed-by=none  size=347 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __cdecl FUN_00412e20(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  int iStack_1f444;
  int iStack_1f440;
  undefined1 *puStack_1f438;
  int iStack_1f434;
  undefined4 uStack_1f424;
  undefined4 uStack_1f420;
  undefined4 uStack_1f41c;
  int *piStack_1f40c;
  undefined1 auStack_1f408 [128004];
  
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piStack_1f40c = param_2;
  if (*param_1 != param_1[1]) {
    uStack_1f424 = 0;
    uStack_1f420 = 0;
    uStack_1f41c = 0;
    iStack_1f440 = 0;
    iStack_1f444 = 0;
    iVar4 = inflateInit_(&iStack_1f444,"1.2.3",0x38);
    if (iVar4 == 0) {
      iStack_1f444 = *param_1;
      iStack_1f440 = param_1[1] - iStack_1f444;
      while( true ) {
        puStack_1f438 = auStack_1f408;
        iStack_1f434 = 0x1f400;
        iVar4 = inflate(&iStack_1f444,0);
        if ((-5 < iVar4) && ((iVar4 < -2 || (iVar4 == 2)))) break;
        iVar1 = piStack_1f40c[1];
        _Size = 0x1f400 - iStack_1f434;
        iVar2 = *piStack_1f40c;
        FUN_00413180(piStack_1f40c,(iVar1 - iVar2) + _Size);
        memcpy((void *)(*piStack_1f40c + (iVar1 - iVar2)),auStack_1f408,_Size);
        if (iVar4 == 1) {
          inflateEnd(&iStack_1f444);
          __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      inflateEnd(&iStack_1f444);
      __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004137c0 @ 004137c0  kind=gamemisc  attributed-by=none  size=43 */

int __thiscall FUN_004137c0(void *this,int param_1)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 - (int)this;
  do {
    uVar1 = (uint3)((uint)*(int *)this >> 8);
    if (*(int *)this != *(int *)(iVar3 + (int)this)) {
      return (uint)uVar1 << 8;
    }
    iVar2 = iVar2 + 1;
    this = (void *)((int)this + 4);
  } while (iVar2 < 3);
  return CONCAT31(uVar1,1);
}


/* FUN_004139b0 @ 004139b0  kind=gamemisc  attributed-by=none  size=197 */

float10 __fastcall FUN_004139b0(char *param_1)

{
  char cVar1;
  float10 fVar2;
  float fVar3;
  float local_8;
  
  cVar1 = *param_1;
  if ((((cVar1 != '\x04') && (cVar1 != '\a')) && (cVar1 != '\x05')) && (cVar1 != '\x06')) {
    return (float10)0;
  }
  fVar3 = 0.5;
  local_8 = 0.5;
  if (cVar1 == '\x04') {
    fVar3 = 1.0;
    local_8 = 1.0;
  }
  switch(param_1[0xd]) {
  case '\x12':
    local_8 = fVar3 * 0.8;
    break;
  case '\x13':
  case '\x1a':
  case '\x1b':
    local_8 = fVar3 * 0.85;
    break;
  case '\x17':
  case '\x19':
    local_8 = fVar3 * 0.75;
  }
  fVar2 = FUN_00410f00();
  return (float10)((float)fVar2 * local_8);
}


/* FUN_00413aa0 @ 00413aa0  kind=gamemisc  attributed-by=none  size=26 */

undefined4 __fastcall FUN_00413aa0(char *param_1)

{
  undefined4 uVar1;
  
  if (*param_1 != '\x01') {
    return 0;
  }
  uVar1 = 10000;
  if (param_1[1] == '\x01') {
    uVar1 = 3000;
  }
  return uVar1;
}


/* FUN_00413ac0 @ 00413ac0  kind=gamemisc  attributed-by=none  size=286 */

float10 __fastcall FUN_00413ac0(char *param_1)

{
  char cVar1;
  char cVar2;
  float10 fVar3;
  float local_c;
  float local_8;
  
  cVar1 = *param_1;
  if ((((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\x03')) ||
     (((cVar1 == '\x04' || (cVar1 == '\a')) || ((cVar1 == '\x05' || (cVar1 == '\x06')))))) {
    local_8 = 0.05;
    if (((cVar1 == '\x03') &&
        ((((cVar2 = param_1[1], cVar2 == '\x0f' || (cVar2 == '\x10')) ||
          ((cVar2 == '\x11' ||
           ((((cVar2 == '\x05' || (cVar2 == '\n')) || (cVar2 == '\v')) ||
            ((cVar2 == '\x12' || (cVar2 == '\b')))))))) || ((cVar2 == '\x06' || (cVar2 == '\a'))))))
       || (cVar1 == '\x04')) {
      local_8 = 0.1;
    }
    local_c = 1.0 - ((float)(int)((ulonglong)*(uint *)(param_1 + 4) % 0x15) + 0.0) / 20.0;
    if (param_1[0xd] == '\v') {
      local_c = local_c + 1.0;
    }
    fVar3 = FUN_00410f90();
    local_c = (float)fVar3 * local_8 * local_c;
    if (0.001 <= local_c) {
      return (float10)local_c;
    }
  }
  return (float10)0;
}


/* FUN_00413be0 @ 00413be0  kind=gamemisc  attributed-by=none  size=221 */

float10 __fastcall FUN_00413be0(char *param_1)

{
  float10 fVar1;
  
  if (*param_1 == '\x01') {
    switch(param_1[1]) {
    case '\x01':
    case '\x02':
      fVar1 = FUN_00410f00();
      return (float10)((float)fVar1 * 200.0);
    case '\x04':
    case '\x05':
    case '\x06':
      fVar1 = FUN_00410f00();
      return (float10)((float)fVar1 * 200.0);
    case '\b':
    case '\t':
      fVar1 = FUN_00410f00();
      return (float10)((float)fVar1 * 100.0);
    }
  }
  return (float10)0;
}


/* FUN_00413df0 @ 00413df0  kind=gamemisc  attributed-by=none  size=858 */

float * __cdecl FUN_00413df0(float *param_1,undefined4 param_2,float *param_3,float param_4)

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


/* FUN_00414260 @ 00414260  kind=gamemisc  attributed-by=none  size=185 */

float10 __fastcall FUN_00414260(char *param_1)

{
  char cVar1;
  float10 fVar2;
  float fVar3;
  float local_8;
  
  cVar1 = *param_1;
  if ((((cVar1 != '\x04') && (cVar1 != '\a')) && (cVar1 != '\x05')) && (cVar1 != '\x06')) {
    return (float10)0;
  }
  fVar3 = 0.5;
  local_8 = 0.5;
  if (cVar1 == '\x04') {
    fVar3 = 1.0;
    local_8 = 1.0;
  }
  switch(param_1[0xd]) {
  case '\x01':
  case '\x13':
    local_8 = fVar3 * 0.85;
    break;
  case '\x1a':
  case '\x1b':
    local_8 = fVar3 * 0.75;
  }
  fVar2 = FUN_00410f00();
  return (float10)((float)fVar2 * local_8);
}


/* FUN_00414550 @ 00414550  kind=gamemisc  attributed-by=none  size=428 */

float10 __fastcall FUN_00414550(char *param_1)

{
  char cVar1;
  float10 fVar2;
  
  if (*param_1 != '\x03') {
    return (float10)0;
  }
  cVar1 = param_1[1];
  switch(cVar1) {
  case '\x03':
  case '\x04':
    fVar2 = FUN_00410f00();
    return (float10)((float)fVar2 * 2.0);
  case '\x05':
    fVar2 = FUN_00410f00();
    return (float10)((float)fVar2 * 4.0);
  case '\r':
    fVar2 = FUN_00410f00();
    return (float10)((float)fVar2 * 2.0);
  }
  if ((((((cVar1 != '\x0f') && (cVar1 != '\x10')) && (cVar1 != '\x11')) &&
       ((cVar1 != '\x05' && (cVar1 != '\n')))) &&
      ((cVar1 != '\v' && ((cVar1 != '\x12' && (cVar1 != '\b')))))) &&
     ((cVar1 != '\x06' && (cVar1 != '\a')))) {
    fVar2 = FUN_00410f00();
    return (float10)((float)fVar2 * 4.0);
  }
  fVar2 = FUN_00410f00();
  return (float10)((float)fVar2 * 8.0);
}


/* FUN_004149e0 @ 004149e0  kind=gamemisc  attributed-by=none  size=147 */

undefined1 __cdecl
FUN_004149e0(undefined4 *param_1,uint *param_2,uint *param_3,char *param_4,char *param_5,
            char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  char *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    puVar1 = (undefined4 *)*param_1;
    local_c = param_5;
    local_8 = 1;
    iVar3 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    puVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_00414a80 @ 00414a80  kind=gamemisc  attributed-by=none  size=149 */

undefined1 __cdecl
FUN_00414a80(undefined4 *param_1,uint *param_2,uint *param_3,short *param_4,short *param_5,
            char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  short *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    puVar1 = (undefined4 *)*param_1;
    local_c = param_5;
    local_8 = 2;
    iVar3 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    puVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_00414b20 @ 00414b20  kind=gamemisc  attributed-by=none  size=147 */

undefined1 __cdecl
FUN_00414b20(undefined4 *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    puVar1 = (undefined4 *)*param_1;
    local_c = param_5;
    local_8 = 4;
    iVar3 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    puVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_00414bc0 @ 00414bc0  kind=gamemisc  attributed-by=none  size=154 */

undefined1 __cdecl
FUN_00414bc0(undefined4 *param_1,uint *param_2,uint *param_3,float *param_4,float *param_5,
            char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  float *local_c;
  undefined4 local_8;
  
  uVar4 = 0;
  if ((param_6 != '\0') || (*param_4 != *param_5)) {
    puVar1 = (undefined4 *)*param_1;
    local_c = param_5;
    local_8 = 4;
    iVar3 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    puVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar5 = 1 << (uVar2 & 0x1f);
    uVar6 = 0;
    if (0x1f < uVar2) {
      uVar6 = uVar5;
    }
    uVar5 = uVar5 ^ uVar6;
    if (0x3f < uVar2) {
      uVar6 = uVar5;
    }
    *param_2 = *param_2 | uVar5;
    param_2[1] = param_2[1] | uVar6;
    uVar4 = 1;
  }
  *param_3 = *param_3 + 1;
  return uVar4;
}


/* FUN_00414c60 @ 00414c60  kind=gamemisc  attributed-by=none  size=212 */

int __cdecl
FUN_00414c60(undefined4 *param_1,uint *param_2,uint *param_3,float *param_4,float *param_5,
            char param_6)

{
  float *pfVar1;
  float fVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 in_EAX;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *local_c;
  undefined4 local_8;
  
  if ((((param_6 == '\0') && (*param_4 == *param_5)) && (param_4[1] == param_5[1])) &&
     ((param_4[2] == param_5[2] && (param_4[3] == param_5[3])))) {
    fVar2 = param_4[4];
    pfVar1 = param_5 + 4;
    iVar5 = (uint)CONCAT21((short)((uint)in_EAX >> 0x10),
                           (fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                           fVar2 < *pfVar1) << 8;
    if (fVar2 == *pfVar1) goto LAB_00414d2d;
  }
  puVar3 = (undefined4 *)*param_1;
  local_c = param_5;
  local_8 = 0x14;
  iVar5 = FUN_00549300(puVar3,(undefined4 *)puVar3[1],&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar3[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  uVar4 = *param_3;
  uVar6 = 1 << (uVar4 & 0x1f);
  uVar7 = 0;
  if (0x1f < uVar4) {
    uVar7 = uVar6;
  }
  uVar6 = uVar6 ^ uVar7;
  if (0x3f < uVar4) {
    uVar7 = uVar6;
  }
  *param_2 = *param_2 | uVar6;
  param_2[1] = param_2[1] | uVar7;
  iVar5 = CONCAT31((int3)((uint)param_2 >> 8),1);
LAB_00414d2d:
  *param_3 = *param_3 + 1;
  return iVar5;
}


/* FUN_00414d40 @ 00414d40  kind=gamemisc  attributed-by=none  size=151 */

undefined1 __cdecl
FUN_00414d40(undefined4 *param_1,uint *param_2,uint *param_3,void *param_4,int param_5,char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  int local_c [2];
  
  uVar7 = 0;
  if (param_6 == '\0') {
    cVar3 = FUN_00415750(param_4,param_5);
    if (cVar3 == '\0') goto LAB_00414dcc;
  }
  local_c[0] = param_5;
  puVar1 = (undefined4 *)*param_1;
  local_c[1] = 0xac;
  iVar4 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_00414dcc:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_00414de0 @ 00414de0  kind=gamemisc  attributed-by=none  size=151 */

undefined1 __cdecl
FUN_00414de0(undefined4 *param_1,uint *param_2,uint *param_3,void *param_4,char *param_5,
            char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  char *local_c;
  undefined4 local_8;
  
  uVar7 = 0;
  if (param_6 == '\0') {
    uVar3 = FUN_004159b0(param_4,param_5);
    if ((char)uVar3 == '\0') goto LAB_00414e6c;
  }
  local_c = param_5;
  puVar1 = (undefined4 *)*param_1;
  local_8 = 0xe38;
  iVar4 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar2 = *param_3;
  uVar5 = 1 << (uVar2 & 0x1f);
  uVar7 = 1;
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar5;
  }
  uVar5 = uVar5 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar6;
LAB_00414e6c:
  *param_3 = *param_3 + 1;
  return uVar7;
}


/* FUN_00414e80 @ 00414e80  kind=gamemisc  attributed-by=none  size=151 */

undefined1 __cdecl
FUN_00414e80(undefined4 *param_1,uint *param_2,uint *param_3,void *param_4,char *param_5,
            char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  char *local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  if (param_6 == '\0') {
    uVar2 = FUN_004078f0(param_4,param_5);
    if ((char)uVar2 != '\0') goto LAB_00414f0c;
  }
  local_c = param_5;
  puVar1 = (undefined4 *)*param_1;
  local_8 = 0x118;
  iVar3 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = iVar3;
  **(int **)(iVar3 + 4) = iVar3;
  uVar2 = *param_3;
  uVar4 = 1 << (uVar2 & 0x1f);
  uVar6 = 1;
  uVar5 = 0;
  if (0x1f < uVar2) {
    uVar5 = uVar4;
  }
  uVar4 = uVar4 ^ uVar5;
  if (0x3f < uVar2) {
    uVar5 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar5;
LAB_00414f0c:
  *param_3 = *param_3 + 1;
  return uVar6;
}


/* FUN_00414f20 @ 00414f20  kind=gamemisc  attributed-by=none  size=176 */

uint __cdecl
FUN_00414f20(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar3 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar3) == *piVar3) {
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return (uint)piVar3 & 0xffffff00;
      }
    }
  }
  local_10 = param_5;
  puVar1 = (undefined4 *)*param_1;
  local_c = 0xc;
  iVar5 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  uVar2 = *param_3;
  uVar4 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


/* FUN_00414fd0 @ 00414fd0  kind=gamemisc  attributed-by=none  size=178 */

uint __cdecl
FUN_00414fd0(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,float *param_5,char param_6
            )

{
  float fVar1;
  undefined4 *puVar2;
  uint in_EAX;
  uint uVar3;
  float *pfVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  float *local_c;
  undefined4 local_8;
  
  uVar3 = in_EAX & 0xffffff00;
  if (param_6 == '\0') {
    iVar6 = 0;
    pfVar4 = param_5;
    while( true ) {
      fVar1 = *(float *)((param_4 - (int)param_5) + (int)pfVar4);
      uVar3 = (uint)CONCAT21((short)(uVar3 >> 0x10),
                             (fVar1 == *pfVar4) << 6 | (NAN(fVar1) || NAN(*pfVar4)) << 2 | 2U |
                             fVar1 < *pfVar4) << 8;
      if (fVar1 != *pfVar4) break;
      iVar6 = iVar6 + 1;
      pfVar4 = pfVar4 + 1;
      if (2 < iVar6) {
        *param_3 = *param_3 + 1;
        return uVar3;
      }
    }
  }
  local_c = param_5;
  puVar2 = (undefined4 *)*param_1;
  local_8 = 0xc;
  iVar6 = FUN_00549300(puVar2,(undefined4 *)puVar2[1],&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar2[1] = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  uVar3 = *param_3;
  uVar5 = 1 << (uVar3 & 0x1f);
  uVar7 = 0;
  if (0x1f < uVar3) {
    uVar7 = uVar5;
  }
  uVar5 = uVar5 ^ uVar7;
  if (0x3f < uVar3) {
    uVar7 = uVar5;
  }
  *param_2 = *param_2 | uVar5;
  param_2[1] = param_2[1] | uVar7;
  *param_3 = *param_3 + 1;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


/* FUN_00415090 @ 00415090  kind=gamemisc  attributed-by=none  size=185 */

uint __cdecl
FUN_00415090(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar3 = param_5;
    while ((*(int *)((param_4 - (int)param_5) + (int)piVar3) == *piVar3 &&
           (*(int *)((param_4 - (int)param_5) + 4 + (int)piVar3) == piVar3[1]))) {
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 2;
      if (2 < iVar5) {
        *param_3 = *param_3 + 1;
        return (uint)piVar3 & 0xffffff00;
      }
    }
  }
  local_10 = param_5;
  puVar1 = (undefined4 *)*param_1;
  local_c = 0x18;
  iVar5 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  uVar2 = *param_3;
  uVar4 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


/* FUN_00415150 @ 00415150  kind=gamemisc  attributed-by=none  size=155 */

undefined1 __cdecl
FUN_00415150(undefined4 *param_1,uint *param_2,uint *param_3,int *param_4,int *param_5,char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  int *local_c;
  undefined4 local_8;
  
  uVar6 = 0;
  if (((param_6 != '\0') || (*param_4 != *param_5)) || (param_4[1] != param_5[1])) {
    puVar1 = (undefined4 *)*param_1;
    local_c = param_5;
    local_8 = 8;
    iVar3 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_c);
    if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    param_1[1] = param_1[1] + 1;
    puVar1[1] = iVar3;
    **(int **)(iVar3 + 4) = iVar3;
    uVar2 = *param_3;
    uVar4 = 1 << (uVar2 & 0x1f);
    uVar6 = 1;
    uVar5 = 0;
    if (0x1f < uVar2) {
      uVar5 = uVar4;
    }
    uVar4 = uVar4 ^ uVar5;
    if (0x3f < uVar2) {
      uVar5 = uVar4;
    }
    *param_2 = *param_2 | uVar4;
    param_2[1] = param_2[1] | uVar5;
  }
  *param_3 = *param_3 + 1;
  return uVar6;
}


/* FUN_004151f0 @ 004151f0  kind=gamemisc  attributed-by=none  size=109 */

undefined4 __cdecl FUN_004151f0(int *param_1,uint *param_2,uint *param_3,undefined1 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 1) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 1;
    }
    *param_4 = *(undefined1 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 1;
    *param_3 = *param_3 + 1;
    return 1;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415260 @ 00415260  kind=gamemisc  attributed-by=none  size=112 */

undefined4 __cdecl FUN_00415260(int *param_1,uint *param_2,uint *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 2) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 2;
    }
    *param_4 = *(undefined2 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 2;
    *param_3 = *param_3 + 1;
    return 2;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004152d0 @ 004152d0  kind=gamemisc  attributed-by=none  size=110 */

undefined4 __cdecl FUN_004152d0(int *param_1,uint *param_2,uint *param_3,undefined4 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 4) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 4;
    }
    *param_4 = *(undefined4 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 4;
    *param_3 = *param_3 + 1;
    return 4;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415340 @ 00415340  kind=gamemisc  attributed-by=none  size=132 */

undefined4 __cdecl FUN_00415340(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x14) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x14;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    *(undefined4 *)(param_4 + 2) = *(undefined4 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x14;
    *param_3 = *param_3 + 1;
    return 0x14;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004153d0 @ 004153d0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 __cdecl FUN_004153d0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xac) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xac;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xac);
    param_1[3] = param_1[3] + 0xac;
    *param_3 = *param_3 + 1;
    return 0xac;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415450 @ 00415450  kind=gamemisc  attributed-by=none  size=128 */

undefined4 __cdecl FUN_00415450(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0xe38) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0xe38;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0xe38);
    param_1[3] = param_1[3] + 0xe38;
    *param_3 = *param_3 + 1;
    return 0xe38;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004154d0 @ 004154d0  kind=gamemisc  attributed-by=none  size=128 */

undefined4 __cdecl FUN_004154d0(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x118) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x118;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x118);
    param_1[3] = param_1[3] + 0x118;
    *param_3 = *param_3 + 1;
    return 0x118;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415550 @ 00415550  kind=gamemisc  attributed-by=none  size=121 */

undefined4 __cdecl FUN_00415550(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0xc) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0xc;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    *(undefined4 *)(param_4 + 1) = *(undefined4 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0xc;
    *param_3 = *param_3 + 1;
    return 0xc;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004155d0 @ 004155d0  kind=gamemisc  attributed-by=none  size=136 */

undefined4 __cdecl FUN_004155d0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x18) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x18;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_4[2] = *(undefined8 *)(iVar3 + 0x10 + iVar2);
    param_1[3] = param_1[3] + 0x18;
    *param_3 = *param_3 + 1;
    return 0x18;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415660 @ 00415660  kind=gamemisc  attributed-by=none  size=114 */

undefined4 __cdecl FUN_00415660(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar1 = *param_3;
  uVar3 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar3;
  }
  uVar3 = uVar3 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar3;
  }
  if ((uVar3 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar4 = param_1[1] - *param_1;
    if (iVar4 < param_1[3] + 8) {
      param_1[3] = iVar4;
      *param_3 = *param_3 + 1;
      return 8;
    }
    *param_4 = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = param_1[3] + 8;
    *param_3 = *param_3 + 1;
    return 8;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_004156e0 @ 004156e0  kind=gamemisc  attributed-by=none  size=43 */

int __thiscall FUN_004156e0(void *this,int param_1)

{
  uint3 uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = param_1 - (int)this;
  do {
    uVar1 = (uint3)((uint)*(int *)this >> 8);
    if (*(int *)this != *(int *)(iVar3 + (int)this)) {
      return CONCAT31(uVar1,1);
    }
    iVar2 = iVar2 + 1;
    this = (void *)((int)this + 4);
  } while (iVar2 < 3);
  return (uint)uVar1 << 8;
}


/* FUN_00415710 @ 00415710  kind=gamemisc  attributed-by=none  size=50 */

undefined1 __thiscall FUN_00415710(void *this,float *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = (int)this - (int)param_1;
  do {
    if (*(float *)(iVar1 + (int)param_1) != *param_1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 3);
  return 0;
}


/* FUN_00415750 @ 00415750  kind=gamemisc  attributed-by=none  size=607 */

undefined1 __thiscall FUN_00415750(void *this,int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  
  iVar3 = 0;
  pcVar2 = this;
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)this]) {
      return 1;
    }
    iVar3 = iVar3 + 1;
    pcVar2 = pcVar2 + 1;
  } while (iVar3 < 2);
  pcVar2 = (char *)((int)this + 2);
  do {
    if (*pcVar2 != pcVar2[param_1 - (int)this]) {
      return 1;
    }
    pcVar2 = pcVar2 + 1;
  } while ((int)(pcVar2 + (-2 - (int)this)) < 3);
  if ((((((((*(short *)((int)this + 6) == *(short *)(param_1 + 6)) &&
           (cVar1 = FUN_00415710((void *)((int)this + 8),(float *)(param_1 + 8)), cVar1 == '\0')) &&
          (*(short *)((int)this + 0x14) == *(short *)(param_1 + 0x14))) &&
         (((*(short *)((int)this + 0x16) == *(short *)(param_1 + 0x16) &&
           (*(short *)((int)this + 0x18) == *(short *)(param_1 + 0x18))) &&
          ((*(short *)((int)this + 0x1a) == *(short *)(param_1 + 0x1a) &&
           ((*(short *)((int)this + 0x1c) == *(short *)(param_1 + 0x1c) &&
            (*(short *)((int)this + 0x1e) == *(short *)(param_1 + 0x1e))))))))) &&
        (*(short *)((int)this + 0x20) == *(short *)(param_1 + 0x20))) &&
       (((*(short *)((int)this + 0x22) == *(short *)(param_1 + 0x22) &&
         (*(float *)((int)this + 0x24) == *(float *)(param_1 + 0x24))) &&
        (*(float *)((int)this + 0x28) == *(float *)(param_1 + 0x28))))) &&
      (((*(float *)((int)this + 0x2c) == *(float *)(param_1 + 0x2c) &&
        (*(float *)((int)this + 0x30) == *(float *)(param_1 + 0x30))) &&
       ((*(float *)((int)this + 0x34) == *(float *)(param_1 + 0x34) &&
        ((*(float *)((int)this + 0x38) == *(float *)(param_1 + 0x38) &&
         (*(float *)((int)this + 0x3c) == *(float *)(param_1 + 0x3c))))))))) &&
     (((*(float *)((int)this + 0x40) == *(float *)(param_1 + 0x40) &&
       (((((*(float *)((int)this + 0x44) == *(float *)(param_1 + 0x44) &&
           (*(float *)((int)this + 0x48) == *(float *)(param_1 + 0x48))) &&
          (cVar1 = FUN_00415710((void *)((int)this + 0x4c),(float *)(param_1 + 0x4c)), cVar1 == '\0'
          )) && ((*(float *)((int)this + 0x58) == *(float *)(param_1 + 0x58) &&
                 (*(float *)((int)this + 0x5c) == *(float *)(param_1 + 0x5c))))) &&
        ((*(float *)((int)this + 0x60) == *(float *)(param_1 + 0x60) &&
         ((cVar1 = FUN_00415710((void *)((int)this + 100),(float *)(param_1 + 100)), cVar1 == '\0'
          && (cVar1 = FUN_00415710((void *)((int)this + 0x70),(float *)(param_1 + 0x70)),
             cVar1 == '\0')))))))) &&
      ((cVar1 = FUN_00415710((void *)((int)this + 0x7c),(float *)(param_1 + 0x7c)), cVar1 == '\0' &&
       (((cVar1 = FUN_00415710((void *)((int)this + 0x88),(float *)(param_1 + 0x88)), cVar1 == '\0'
         && (cVar1 = FUN_00415710((void *)((int)this + 0xa0),(float *)(param_1 + 0xa0)),
            cVar1 == '\0')) &&
        (cVar1 = FUN_00415710((void *)((int)this + 0x94),(float *)(param_1 + 0x94)), cVar1 == '\0'))
       )))))) {
    return 0;
  }
  return 1;
}


/* FUN_004159b0 @ 004159b0  kind=gamemisc  attributed-by=none  size=330 */

uint __thiscall FUN_004159b0(void *this,char *param_1)

{
  uint uVar1;
  
  uVar1 = FUN_004078f0((void *)((int)this + 0xd20),param_1 + 0xd20);
  if ((char)uVar1 != '\0') {
    uVar1 = FUN_004078f0((void *)((int)this + 0xaf0),param_1 + 0xaf0);
    if ((char)uVar1 != '\0') {
      uVar1 = FUN_004078f0((void *)((int)this + 0xc08),param_1 + 0xc08);
      if ((char)uVar1 != '\0') {
        uVar1 = FUN_004078f0(this,param_1);
        if ((char)uVar1 != '\0') {
          uVar1 = FUN_004078f0((void *)((int)this + 0x118),param_1 + 0x118);
          if ((char)uVar1 != '\0') {
            uVar1 = FUN_004078f0((void *)((int)this + 0x230),param_1 + 0x230);
            if ((char)uVar1 != '\0') {
              uVar1 = FUN_004078f0((void *)((int)this + 0x348),param_1 + 0x348);
              if ((char)uVar1 != '\0') {
                uVar1 = FUN_004078f0((void *)((int)this + 0x460),param_1 + 0x460);
                if ((char)uVar1 != '\0') {
                  uVar1 = FUN_004078f0((void *)((int)this + 0x578),param_1 + 0x578);
                  if ((char)uVar1 != '\0') {
                    uVar1 = FUN_004078f0((void *)((int)this + 0x690),param_1 + 0x690);
                    if ((char)uVar1 != '\0') {
                      uVar1 = FUN_004078f0((void *)((int)this + 0x7a8),param_1 + 0x7a8);
                      if ((char)uVar1 != '\0') {
                        uVar1 = FUN_004078f0((void *)((int)this + 0x8c0),param_1 + 0x8c0);
                        if ((char)uVar1 != '\0') {
                          uVar1 = FUN_004078f0((void *)((int)this + 0x9d8),param_1 + 0x9d8);
                          if ((char)uVar1 != '\0') {
                            return uVar1 & 0xffffff00;
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
      }
    }
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* FUN_00415b20 @ 00415b20  kind=gamemisc  attributed-by=none  size=186 */

undefined1 __cdecl
FUN_00415b20(undefined4 *param_1,uint *param_2,uint *param_3,byte *param_4,byte *param_5,
            char param_6)

{
  byte bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  uint uVar7;
  undefined1 uVar8;
  bool bVar9;
  byte *local_c;
  undefined4 local_8;
  
  uVar8 = 0;
  pbVar5 = param_5;
  if (param_6 == '\0') {
    do {
      bVar1 = *param_4;
      bVar9 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_00415b60:
        uVar3 = -(uint)bVar9 | 1;
        goto LAB_00415b65;
      }
      if (bVar1 == 0) break;
      bVar1 = param_4[1];
      bVar9 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_00415b60;
      param_4 = param_4 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_00415b65:
    if (uVar3 == 0) goto LAB_00415bd2;
  }
  local_c = param_5;
  puVar2 = (undefined4 *)*param_1;
  local_8 = 0x10;
  iVar4 = FUN_00549300(puVar2,(undefined4 *)puVar2[1],&local_c);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar2[1] = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  uVar3 = *param_3;
  uVar6 = 1 << (uVar3 & 0x1f);
  uVar8 = 1;
  uVar7 = 0;
  if (0x1f < uVar3) {
    uVar7 = uVar6;
  }
  uVar6 = uVar6 ^ uVar7;
  if (0x3f < uVar3) {
    uVar7 = uVar6;
  }
  *param_2 = *param_2 | uVar6;
  param_2[1] = param_2[1] | uVar7;
LAB_00415bd2:
  *param_3 = *param_3 + 1;
  return uVar8;
}


/* FUN_00415be0 @ 00415be0  kind=gamemisc  attributed-by=none  size=176 */

uint __cdecl
FUN_00415be0(undefined4 *param_1,uint *param_2,uint *param_3,int param_4,int *param_5,char param_6)

{
  undefined4 *puVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_5 = 0;
  if (param_6 == '\0') {
    iVar5 = 0;
    piVar3 = param_5;
    while (*(int *)((param_4 - (int)param_5) + (int)piVar3) == *piVar3) {
      iVar5 = iVar5 + 1;
      piVar3 = piVar3 + 1;
      if (10 < iVar5) {
        *param_3 = *param_3 + 1;
        return (uint)piVar3 & 0xffffff00;
      }
    }
  }
  local_10 = param_5;
  puVar1 = (undefined4 *)*param_1;
  local_c = 0x2c;
  iVar5 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],&local_10);
  if (param_1[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  param_1[1] = param_1[1] + 1;
  puVar1[1] = iVar5;
  **(int **)(iVar5 + 4) = iVar5;
  uVar2 = *param_3;
  uVar4 = 1 << (uVar2 & 0x1f);
  uVar6 = 0;
  if (0x1f < uVar2) {
    uVar6 = uVar4;
  }
  uVar4 = uVar4 ^ uVar6;
  if (0x3f < uVar2) {
    uVar6 = uVar4;
  }
  *param_2 = *param_2 | uVar4;
  param_2[1] = param_2[1] | uVar6;
  *param_3 = *param_3 + 1;
  return CONCAT31((int3)((uint)param_2 >> 8),1);
}


/* FUN_00415cd0 @ 00415cd0  kind=gamemisc  attributed-by=none  size=125 */

undefined4 __cdecl FUN_00415cd0(int *param_1,uint *param_2,uint *param_3,undefined8 *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar5 = 1 << (uVar1 & 0x1f);
  uVar4 = 0;
  if (0x1f < uVar1) {
    uVar4 = uVar5;
  }
  uVar5 = uVar5 ^ uVar4;
  if (0x3f < uVar1) {
    uVar4 = uVar5;
  }
  if ((uVar5 & *param_2) != 0 || (uVar4 & param_2[1]) != 0) {
    iVar2 = param_1[3];
    iVar3 = *param_1;
    if (param_1[1] - iVar3 < iVar2 + 0x10) {
      param_1[3] = param_1[1] - iVar3;
      *param_3 = *param_3 + 1;
      return 0x10;
    }
    *param_4 = *(undefined8 *)(iVar3 + iVar2);
    param_4[1] = *(undefined8 *)(iVar3 + 8 + iVar2);
    param_1[3] = param_1[3] + 0x10;
    *param_3 = *param_3 + 1;
    return 0x10;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415d50 @ 00415d50  kind=gamemisc  attributed-by=none  size=119 */

undefined4 __cdecl FUN_00415d50(int *param_1,uint *param_2,uint *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = *param_3;
  uVar4 = 1 << (uVar1 & 0x1f);
  uVar2 = 0;
  if (0x1f < uVar1) {
    uVar2 = uVar4;
  }
  uVar4 = uVar4 ^ uVar2;
  if (0x3f < uVar1) {
    uVar2 = uVar4;
  }
  if ((uVar4 & *param_2) != 0 || (uVar2 & param_2[1]) != 0) {
    iVar3 = param_1[1] - *param_1;
    if (iVar3 < param_1[3] + 0x2c) {
      param_1[3] = iVar3;
      *param_3 = *param_3 + 1;
      return 0x2c;
    }
    memcpy(param_4,(void *)(*param_1 + param_1[3]),0x2c);
    param_1[3] = param_1[3] + 0x2c;
    *param_3 = *param_3 + 1;
    return 0x2c;
  }
  *param_3 = *param_3 + 1;
  return 0;
}


/* FUN_00415dd0 @ 00415dd0  kind=gamemisc  attributed-by=none  size=1074 */

int __cdecl FUN_00415dd0(int *param_1,undefined8 *param_2)

{
  int iVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined8 local_c;
  
  puVar3 = param_2;
  piVar2 = param_1;
  iVar4 = param_1[1] - *param_1;
  iVar1 = param_1[3] + 8;
  local_c = 0;
  if (iVar4 < iVar1) {
    param_1[3] = iVar4;
  }
  else {
    local_c = *(undefined8 *)(*param_1 + param_1[3]);
    param_1[3] = iVar1;
  }
  param_1 = (int *)0x0;
  FUN_004155d0(piVar2,(uint *)&local_c,(uint *)&param_1,param_2);
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 3);
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined8 *)((int)puVar3 + 0x24));
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 6);
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined8 *)((int)puVar3 + 0x3c));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 9));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x4c));
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)(puVar3 + 10));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x54));
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)(puVar3 + 0xb));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x5c));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 0xc));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 100));
  FUN_004153d0(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0xd);
  FUN_00415260(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined2 *)((int)puVar3 + 0x114));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 0x23));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x11c));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 0x24));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x124));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 0x25));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 300));
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)(puVar3 + 0x26));
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)((int)puVar3 + 0x131));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x134));
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x27);
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined8 *)((int)puVar3 + 0x144));
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x2a);
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x15c));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 0x2c));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x164));
  FUN_00415340(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x2d);
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)((int)puVar3 + 0x17c));
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)((int)puVar3 + 0x17d));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)(puVar3 + 0x30));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x184));
  FUN_00415660(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x31);
  FUN_00415660(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x32);
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)(puVar3 + 0x33));
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x19c));
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x34);
  FUN_004155d0(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x36);
  FUN_00415550(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined8 *)((int)puVar3 + 0x1cc));
  FUN_004151f0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined1 *)(puVar3 + 0x39));
  FUN_004154d0(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x3b);
  FUN_00415450(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x5e);
  FUN_00415cd0(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x22b);
  FUN_00415d50(piVar2,(uint *)&local_c,(uint *)&param_1,puVar3 + 0x225);
  FUN_004152d0(piVar2,(uint *)&local_c,(uint *)&param_1,(undefined4 *)((int)puVar3 + 0x1154));
  return piVar2[1] - *piVar2;
}


/* FUN_00416210 @ 00416210  kind=gamemisc  attributed-by=none  size=1759 */

int __cdecl FUN_00416210(int *param_1,int param_2,int *param_3,char param_4)

{
  size_t _Size;
  void *_Src;
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  undefined8 local_24;
  int *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bbc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_18 = 0;
  local_1c = (int *)FUN_00426a30((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 0;
  local_24 = 0;
  local_14 = 0;
  FUN_00415090(&local_1c,(uint *)&local_24,&local_14,param_2,param_3,param_4);
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x18,(float *)(param_3 + 6),param_4);
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x24,(float *)(param_3 + 9),param_4);
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x30,(float *)(param_3 + 0xc),param_4
              );
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x3c,(float *)(param_3 + 0xf),param_4
              );
  FUN_00414bc0(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 0x48),
               (float *)(param_3 + 0x12),param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x4c),param_3 + 0x13,param_4)
  ;
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x50),
               (char *)(param_3 + 0x14),param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x54),param_3 + 0x15,param_4)
  ;
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x58),
               (char *)(param_3 + 0x16),param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x5c),param_3 + 0x17,param_4)
  ;
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x60),param_3 + 0x18,param_4)
  ;
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 100),param_3 + 0x19,param_4);
  FUN_00414d40(&local_1c,(uint *)&local_24,&local_14,(void *)(param_2 + 0x68),(int)(param_3 + 0x1a),
               param_4);
  FUN_00414a80(&local_1c,(uint *)&local_24,&local_14,(short *)(param_2 + 0x114),
               (short *)(param_3 + 0x45),param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x118),param_3 + 0x46,param_4
              );
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x11c),param_3 + 0x47,param_4
              );
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x120),param_3 + 0x48,param_4
              );
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x124),param_3 + 0x49,param_4
              );
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x128),param_3 + 0x4a,param_4
              );
  FUN_00414bc0(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 300),
               (float *)(param_3 + 0x4b),param_4);
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x130),
               (char *)(param_3 + 0x4c),param_4);
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x131),
               (char *)((int)param_3 + 0x131),param_4);
  FUN_00414bc0(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 0x134),
               (float *)(param_3 + 0x4d),param_4);
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x138,(float *)(param_3 + 0x4e),
               param_4);
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x144,(float *)(param_3 + 0x51),
               param_4);
  FUN_00414fd0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x150,(float *)(param_3 + 0x54),
               param_4);
  FUN_00414bc0(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 0x15c),
               (float *)(param_3 + 0x57),param_4);
  FUN_00414bc0(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 0x160),
               (float *)(param_3 + 0x58),param_4);
  FUN_00414bc0(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 0x164),
               (float *)(param_3 + 0x59),param_4);
  FUN_00414c60(&local_1c,(uint *)&local_24,&local_14,(float *)(param_2 + 0x168),
               (float *)(param_3 + 0x5a),param_4);
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x17c),
               (char *)(param_3 + 0x5f),param_4);
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x17d),
               (char *)((int)param_3 + 0x17d),param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x180),param_3 + 0x60,param_4
              );
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x184),param_3 + 0x61,param_4
              );
  FUN_00415150(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x188),param_3 + 0x62,param_4
              );
  FUN_00415150(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 400),param_3 + 100,param_4);
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x198),
               (char *)(param_3 + 0x66),param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x19c),param_3 + 0x67,param_4
              );
  FUN_00414f20(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x1a0,param_3 + 0x68,param_4);
  FUN_00415090(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x1b0,param_3 + 0x6c,param_4);
  FUN_00414f20(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x1cc,param_3 + 0x73,param_4);
  FUN_004149e0(&local_1c,(uint *)&local_24,&local_14,(char *)(param_2 + 0x1c8),
               (char *)(param_3 + 0x72),param_4);
  FUN_00414e80(&local_1c,(uint *)&local_24,&local_14,(void *)(param_2 + 0x1d8),
               (char *)(param_3 + 0x76),param_4);
  FUN_00414de0(&local_1c,(uint *)&local_24,&local_14,(void *)(param_2 + 0x2f0),
               (char *)(param_3 + 0xbc),param_4);
  FUN_00415b20(&local_1c,(uint *)&local_24,&local_14,(byte *)(param_2 + 0x1158),
               (byte *)(param_3 + 0x456),param_4);
  FUN_00415be0(&local_1c,(uint *)&local_24,&local_14,param_2 + 0x1128,param_3 + 0x44a,param_4);
  FUN_00414b20(&local_1c,(uint *)&local_24,&local_14,(int *)(param_2 + 0x1154),param_3 + 0x455,
               param_4);
  FUN_00413180(param_1,(param_1[1] - *param_1) + 8);
  *(undefined8 *)(*param_1 + param_1[3]) = local_24;
  param_1[3] = param_1[3] + 8;
  piVar5 = (int *)*local_1c;
  if (piVar5 != local_1c) {
    do {
      _Size = piVar5[3];
      _Src = (void *)piVar5[2];
      FUN_00413180(param_1,(param_1[1] - *param_1) + _Size);
      memcpy((void *)(*param_1 + param_1[3]),_Src,_Size);
      param_1[3] = param_1[3] + _Size;
      piVar5 = (int *)*piVar5;
    } while (piVar5 != local_1c);
  }
  piVar4 = local_1c;
  iVar1 = param_1[1];
  iVar2 = *param_1;
  piVar5 = (int *)*local_1c;
  *local_1c = (int)local_1c;
  local_1c[1] = (int)local_1c;
  while (piVar5 != piVar4) {
    piVar3 = (int *)*piVar5;
    operator_delete(piVar5);
    piVar5 = piVar3;
  }
  operator_delete(piVar4);
  ExceptionList = local_10;
  return iVar1 - iVar2;
}


/* FUN_00416950 @ 00416950  kind=gamemisc  attributed-by=none  size=112 */

undefined4 __cdecl FUN_00416950(undefined4 *param_1,int *param_2,uint *param_3,uint param_4)

{
  uint *puVar1;
  int iVar2;
  ushort *puVar3;
  int iVar4;
  
  iVar4 = 0;
  for (puVar1 = param_3; puVar1 < param_3 + (param_4 >> 2); puVar1 = puVar1 + 1) {
    if (*puVar1 < 0x10000) {
      iVar4 = iVar4 + 1;
    }
    else {
      iVar4 = iVar4 + 2;
    }
  }
  *param_2 = iVar4;
  iVar2 = 1;
  if (iVar4 != 0) {
    iVar2 = iVar4;
  }
  puVar3 = (ushort *)(*(code *)PTR_FUN_00582198)(iVar2 * 2);
  *param_1 = puVar3;
  if (puVar3 == (ushort *)0x0) {
    return 0;
  }
  puVar3 = FUN_004178f0(param_3,param_4 >> 2,puVar3);
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}


/* FUN_004169c0 @ 004169c0  kind=gamemisc  attributed-by=none  size=82 */

undefined4 __cdecl FUN_004169c0(undefined4 *param_1,int *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  
  iVar1 = FUN_00417890(param_3,param_4 >> 2,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  puVar3 = (ushort *)(*(code *)PTR_FUN_00582198)(iVar2 * 2);
  *param_1 = puVar3;
  if (puVar3 == (ushort *)0x0) {
    return 0;
  }
  puVar3 = FUN_00417950(param_3,param_4 >> 2,puVar3);
  return CONCAT31((int3)((uint)puVar3 >> 8),1);
}


/* FUN_00416b00 @ 00416b00  kind=gamemisc  attributed-by=none  size=96 */

undefined2 * __thiscall FUN_00416b00(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  if ((short)*param_1 == 0) {
    FUN_00417410(this,param_1,0);
    return this;
  }
  piVar2 = param_1;
  do {
    iVar1 = *piVar2;
    piVar2 = (int *)((int)piVar2 + 2);
  } while ((short)iVar1 != 0);
  FUN_00417410(this,param_1,(int)piVar2 - ((int)param_1 + 2) >> 1);
  return this;
}


/* FUN_00416be0 @ 00416be0  kind=gamemisc  attributed-by=none  size=32 */

uint __thiscall FUN_00416be0(void *this,uint *param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)this;
  if ((uVar1 == *param_1) && (uVar1 = *(uint *)((int)this + 4), uVar1 == param_1[1])) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* FUN_00416c30 @ 00416c30  kind=gamemisc  attributed-by=none  size=27 */

void __thiscall FUN_00416c30(void *this,int *param_1)

{
  *param_1 = *(int *)this;
  param_1[1] = *(int *)((int)this + 4);
  *(undefined4 *)this = *(undefined4 *)(*(int *)this + 0x18);
  return;
}


/* FUN_00416d00 @ 00416d00  kind=gamemisc  attributed-by=none  size=82 */

void __thiscall FUN_00416d00(void *this,int param_1,uint param_2,undefined2 param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 1) {
    if (7 < *(uint *)((int)this + 0x14)) {
      this = *(void **)this;
    }
    *(undefined2 *)((int)this + param_1 * 2) = param_3;
    return;
  }
  if (7 < *(uint *)((int)this + 0x14)) {
    this = *(void **)this;
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((int)this + param_1 * 2);
    for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22(param_3,param_3);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_2 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = param_3;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
  }
  return;
}


/* FUN_00416ec0 @ 00416ec0  kind=gamemisc  attributed-by=none  size=48 */

void * FUN_00416ec0(uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((param_1 < 0x80000000) && (pvVar1 = operator_new(param_1 * 2), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_00416ef0 @ 00416ef0  kind=gamemisc  attributed-by=none  size=137 */

int __thiscall FUN_00416ef0(void *this,uint param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1;
  if (param_1 < 0x2001) {
    uVar1 = 0x8000;
  }
  iVar2 = FUN_00417000(this,uVar1);
  if (iVar2 == 0) {
    return 0;
  }
  if (param_1 < 0x2001) {
    *(undefined4 *)(*(int *)this + 0x10) = *(undefined4 *)((int)this + 4);
    *(undefined4 *)(iVar2 + 8) = *(undefined4 *)this;
    *(int *)(*(int *)this + 0xc) = iVar2;
    *(uint *)((int)this + 4) = param_1;
    *(int *)this = iVar2;
    *(uint *)(iVar2 + 0x10) = param_1;
    *param_2 = iVar2;
    return iVar2 + 0x18;
  }
  *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(*(int *)this + 8);
  *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)this;
  *(int *)(*(int *)(*(int *)this + 8) + 0xc) = iVar2;
  *(int *)(*(int *)this + 8) = iVar2;
  *(uint *)(iVar2 + 0x10) = param_1;
  *param_2 = iVar2;
  return iVar2 + 0x18;
}


/* FUN_00416f80 @ 00416f80  kind=gamemisc  attributed-by=none  size=114 */

uint * __cdecl FUN_00416f80(int *param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  int *piVar3;
  
  uVar1 = param_1[1] + 0x20;
  if (uVar1 < 0x8001) {
    piVar3 = (int *)*param_1;
    puVar2 = (uint *)(param_1[1] + 0x18 + (int)piVar3);
    param_1[1] = uVar1;
  }
  else {
    puVar2 = (uint *)FUN_00416ef0(param_1,0x20,(int *)&param_1);
    piVar3 = param_1;
  }
  if (puVar2 != (uint *)0x0) {
    puVar2[1] = 0;
    *puVar2 = (uint)piVar3 | param_2;
    puVar2[2] = 0;
    puVar2[3] = 0;
    puVar2[4] = 0;
    puVar2[5] = 0;
    puVar2[6] = 0;
    puVar2[7] = 0;
    return puVar2;
  }
  return (uint *)0x0;
}


/* FUN_00417000 @ 00417000  kind=gamemisc  attributed-by=none  size=110 */

void __thiscall FUN_00417000(void *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = (*(code *)PTR_FUN_00582198)(param_1 + 0x38);
  if (iVar1 == 0) {
    return;
  }
  puVar2 = (undefined4 *)(iVar1 + 0x1fU & 0xffffffe0);
  if (puVar2 == (undefined4 *)0x0) {
    iRam00000004 = iVar1;
    uRam00000000 = **(undefined4 **)this;
    return;
  }
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[1] = iVar1;
  *puVar2 = **(undefined4 **)this;
  return;
}


/* FUN_00417070 @ 00417070  kind=gamemisc  attributed-by=none  size=67 */

ushort * __cdecl FUN_00417070(ushort *param_1,uint param_2)

{
  if (param_2 < 0x10000) {
    *param_1 = (ushort)param_2;
    return param_1 + 1;
  }
  *param_1 = (short)(param_2 - 0x10000 >> 10) + 0xd800;
  param_1[1] = ((ushort)param_2 & 0x3ff) + 0xdc00;
  return param_1 + 2;
}


/* FUN_00417230 @ 00417230  kind=gamemisc  attributed-by=none  size=128 */

int * __cdecl FUN_00417230(int param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  
  uVar1 = param_2[1] + 0x14;
  if (uVar1 < 0x8001) {
    piVar5 = (int *)*param_2;
    piVar4 = (int *)(param_2[1] + 0x18 + (int)piVar5);
    param_2[1] = uVar1;
  }
  else {
    piVar4 = (int *)FUN_00416ef0(param_2,0x14,(int *)&param_2);
    piVar5 = param_2;
  }
  if (piVar4 != (int *)0x0) {
    *piVar4 = (int)piVar5;
    piVar4[1] = 0;
    piVar4[2] = 0;
    piVar4[3] = 0;
    piVar4[4] = 0;
    iVar2 = *(int *)(param_1 + 0x1c);
    if (iVar2 != 0) {
      iVar3 = *(int *)(iVar2 + 0xc);
      *(int **)(iVar3 + 0x10) = piVar4;
      piVar4[3] = iVar3;
      *(int **)(iVar2 + 0xc) = piVar4;
      return piVar4;
    }
    *(int **)(param_1 + 0x1c) = piVar4;
    piVar4[3] = (int)piVar4;
    return piVar4;
  }
  return (int *)0x0;
}


/* FUN_004172b0 @ 004172b0  kind=gamemisc  attributed-by=none  size=64 */

uint * __cdecl FUN_004172b0(uint param_1,int *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;
  
  puVar3 = FUN_00416f80(param_2,param_3);
  if (puVar3 == (uint *)0x0) {
    return (uint *)0x0;
  }
  puVar3[1] = param_1;
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 0x14);
    *(uint **)(uVar2 + 0x18) = puVar3;
    puVar3[5] = uVar2;
    *(uint **)(iVar1 + 0x14) = puVar3;
    return puVar3;
  }
  *(uint **)(param_1 + 0x10) = puVar3;
  puVar3[5] = (uint)puVar3;
  return puVar3;
}


/* FUN_00417510 @ 00417510  kind=gamemisc  attributed-by=none  size=128 */

void __thiscall FUN_00417510(void *this,int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  bool bVar6;
  
  if (*(int *)this == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*(int *)this + 0x1c);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 4);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_00417566:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_0041756b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_00417566;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_0041756b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x10);
  } while( true );
}


/* FUN_00417590 @ 00417590  kind=gamemisc  attributed-by=none  size=38 */

void __thiscall FUN_00417590(void *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  if (iVar1 != 0) {
    *param_1 = *(undefined4 *)(iVar1 + 0x10);
    param_1[1] = iVar1;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


/* FUN_004175c0 @ 004175c0  kind=gamemisc  attributed-by=none  size=128 */

void __thiscall FUN_004175c0(void *this,int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  uint uVar4;
  ushort *puVar5;
  bool bVar6;
  
  if (*(int *)this == 0) {
    *param_1 = 0;
    return;
  }
  iVar2 = *(int *)(*(int *)this + 0x10);
  do {
    if (iVar2 == 0) {
      *param_1 = 0;
      return;
    }
    puVar3 = *(ushort **)(iVar2 + 8);
    puVar5 = param_2;
    if (puVar3 != (ushort *)0x0) {
      do {
        uVar1 = *puVar5;
        bVar6 = uVar1 < *puVar3;
        if (uVar1 != *puVar3) {
LAB_00417616:
          uVar4 = -(uint)bVar6 | 1;
          goto LAB_0041761b;
        }
        if (uVar1 == 0) break;
        uVar1 = puVar5[1];
        bVar6 = uVar1 < puVar3[1];
        if (uVar1 != puVar3[1]) goto LAB_00417616;
        puVar3 = puVar3 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar1 != 0);
      uVar4 = 0;
LAB_0041761b:
      if (uVar4 == 0) {
        *param_1 = iVar2;
        return;
      }
    }
    iVar2 = *(int *)(iVar2 + 0x18);
  } while( true );
}


/* FUN_00417640 @ 00417640  kind=gamemisc  attributed-by=none  size=54 */

undefined * __fastcall FUN_00417640(int *param_1)

{
  uint *puVar1;
  
  if (*param_1 != 0) {
    for (puVar1 = *(uint **)(*param_1 + 0x10); puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[6]) {
      if ((puVar1[3] != 0) && (((*puVar1 & 7) == 3 || ((*puVar1 & 7) == 4)))) {
        return (undefined *)puVar1[3];
      }
    }
  }
  return &DAT_0055ae8c;
}


/* FUN_00417680 @ 00417680  kind=gamemisc  attributed-by=none  size=175 */

uint __cdecl
FUN_00417680(int *param_1,uint *param_2,uint param_3,uint *param_4,uint param_5,char param_6)

{
  uint uVar1;
  
  if (param_3 == 2) {
    uVar1 = FUN_00417f90(param_1,param_2,param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 == 3) {
    uVar1 = FUN_00417730(param_1,param_2,(int)param_4,param_5,param_6);
    return uVar1;
  }
  if (param_3 != 5) {
    if (param_3 == 1) {
      uVar1 = FUN_00417790(param_1,(int *)param_2,param_4,param_5);
      return uVar1;
    }
    if (param_3 == 6) {
      uVar1 = FUN_004169c0(param_1,(int *)param_2,param_4,param_5);
      return uVar1;
    }
    if (param_3 != 5) {
      return param_3 & 0xffffff00;
    }
  }
  uVar1 = FUN_00416950(param_1,(int *)param_2,param_4,param_5);
  return uVar1;
}


/* FUN_00417790 @ 00417790  kind=gamemisc  attributed-by=none  size=77 */

undefined4 __cdecl FUN_00417790(undefined4 *param_1,int *param_2,uint *param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  ushort *puVar3;
  undefined4 uVar4;
  
  iVar1 = FUN_004179e0(param_3,param_4,0);
  iVar2 = 1;
  if (iVar1 != 0) {
    iVar2 = iVar1;
  }
  *param_2 = iVar1;
  puVar3 = (ushort *)(*(code *)PTR_FUN_00582198)(iVar2 * 2);
  *param_1 = puVar3;
  if (puVar3 == (ushort *)0x0) {
    return 0;
  }
  uVar4 = FUN_00417ae0(param_3,param_4,puVar3);
  return CONCAT31((int3)((uint)uVar4 >> 8),1);
}


/* FUN_004177e0 @ 004177e0  kind=gamemisc  attributed-by=none  size=174 */

void __fastcall FUN_004177e0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  FUN_00417cc0(param_1);
  puVar5 = (undefined4 *)((int)param_1 + 0x27U & 0xffffffe0);
  if (puVar5 != (undefined4 *)0x0) {
    *puVar5 = 0;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    puVar5[4] = 0;
    puVar5[5] = 0;
  }
  puVar3 = puVar5 + 6;
  puVar5[4] = 0x8000;
  if (puVar3 == (uint *)0x0) {
    puVar3 = (uint *)0x0;
  }
  else {
    *puVar3 = (uint)puVar5 | 1;
    puVar5[7] = 0;
    puVar5[8] = 0;
    puVar5[9] = 0;
    puVar5[10] = 0;
    puVar5[0xb] = 0;
    puVar5[0xc] = 0;
    puVar5[0xd] = 0;
    puVar5[0xe] = 0;
    puVar5[0xf] = 0;
    puVar5[0x10] = 0;
  }
  *param_1 = (int)puVar3;
  puVar3[5] = (uint)puVar3;
  iVar1 = *param_1;
  uVar2 = puVar5[4];
  puVar4 = (undefined4 *)(iVar1 + 0x20);
  *puVar4 = puVar5;
  *(undefined4 *)(iVar1 + 0x24) = uVar2;
  *puVar5 = puVar4;
  return;
}


/* FUN_00417890 @ 00417890  kind=gamemisc  attributed-by=none  size=94 */

int __cdecl FUN_00417890(uint *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (((uVar2 & 0xff0000 | uVar2 >> 0x10) >> 8 | (uVar2 & 0xff00 | uVar2 << 0x10) << 8) < 0x10000)
    {
      param_3 = param_3 + 1;
    }
    else {
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004178f0 @ 004178f0  kind=gamemisc  attributed-by=none  size=92 */

ushort * __cdecl FUN_004178f0(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar2 = *param_1;
    if (uVar2 < 0x10000) {
      *param_3 = (ushort)uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar2 - 0x10000 >> 10) + 0xd800;
      param_3[1] = ((ushort)uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_00417950 @ 00417950  kind=gamemisc  attributed-by=none  size=130 */

ushort * __cdecl FUN_00417950(uint *param_1,int param_2,ushort *param_3)

{
  uint *puVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  
  puVar1 = param_1 + param_2;
  if (puVar1 <= param_1) {
    return param_3;
  }
  do {
    uVar4 = *param_1;
    uVar3 = uVar4 & 0xff0000 | uVar4 >> 0x10;
    uVar4 = uVar3 >> 8 | (uVar4 & 0xff00 | uVar4 << 0x10) << 8;
    uVar2 = (ushort)(uVar3 >> 8);
    if (uVar4 < 0x10000) {
      *param_3 = uVar2;
      param_3 = param_3 + 1;
    }
    else {
      *param_3 = (short)(uVar4 - 0x10000 >> 10) + 0xd800;
      param_3[1] = (uVar2 & 0x3ff) + 0xdc00;
      param_3 = param_3 + 2;
    }
    param_1 = param_1 + 1;
  } while (param_1 < puVar1);
  return param_3;
}


/* FUN_004179e0 @ 004179e0  kind=gamemisc  attributed-by=none  size=247 */

int __cdecl FUN_004179e0(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return param_3;
  }
  do {
    if ((byte)*param_1 < 0x80) {
      param_1 = (uint *)((int)param_1 + 1);
      param_3 = param_3 + 1;
      param_2 = param_2 - 1;
      if (((uint)param_1 & 3) == 0) {
        for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
          param_2 = param_2 - 4;
          param_3 = param_3 + 4;
        }
      }
    }
    else {
      uVar1 = (uint)(byte)*param_1;
      if (((uVar1 - 0xc0 < 0x20) && (1 < param_2)) && ((*param_1 & 0xc000) == 0x8000)) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 2);
        param_2 = param_2 - 2;
      }
      else if (((uVar1 - 0xe0 < 0x10) && (2 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 && ((*param_1 & 0xc00000) == 0x800000)))) {
        param_3 = param_3 + 1;
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
      }
      else if (((uVar1 - 0xf0 < 8) && (3 < param_2)) &&
              (((*param_1 & 0xc000) == 0x8000 &&
               (((*param_1 & 0xc00000) == 0x800000 && ((*param_1 & 0xc0000000) == 0x80000000)))))) {
        param_3 = param_3 + 2;
        param_1 = param_1 + 1;
        param_2 = param_2 - 4;
      }
      else {
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = param_2 - 1;
      }
    }
  } while (param_2 != 0);
  return param_3;
}


/* FUN_00417ae0 @ 00417ae0  kind=gamemisc  attributed-by=none  size=464 */

void __cdecl FUN_00417ae0(uint *param_1,uint param_2,ushort *param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  
  do {
    while( true ) {
      while( true ) {
        while( true ) {
          while( true ) {
            if (param_2 == 0) {
              return;
            }
            bVar1 = (byte)*param_1;
            if (0x7f < bVar1) break;
            *param_3 = (ushort)bVar1;
            param_1 = (uint *)((int)param_1 + 1);
            param_3 = param_3 + 1;
            param_2 = param_2 - 1;
            if (((uint)param_1 & 3) == 0) {
              for (; (3 < param_2 && ((*param_1 & 0x80808080) == 0)); param_1 = param_1 + 1) {
                *param_3 = (ushort)(byte)*param_1;
                param_3[1] = (ushort)*(byte *)((int)param_1 + 1);
                param_3[2] = (ushort)*(byte *)((int)param_1 + 2);
                param_3[3] = (ushort)*(byte *)((int)param_1 + 3);
                param_2 = param_2 - 4;
                param_3 = param_3 + 4;
              }
            }
          }
          uVar3 = (uint)bVar1;
          if (((0x1f < uVar3 - 0xc0) || (param_2 < 2)) ||
             (uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0
             , (char)uVar2 != -0x80)) break;
          *param_3 = (bVar1 & 0x3f) << 6 | (ushort)((byte)(uVar2 >> 8) & 0x3f);
          param_1 = (uint *)((int)param_1 + 2);
          param_2 = param_2 - 2;
          param_3 = param_3 + 1;
        }
        if (((0xf < uVar3 - 0xe0) || (param_2 < 3)) ||
           ((uVar2 = CONCAT11(*(byte *)((int)param_1 + 1),*(byte *)((int)param_1 + 1)) & 0xffffffc0,
            (char)uVar2 != -0x80 ||
            (uVar2 = CONCAT31((int3)(uVar2 >> 8),*(byte *)((int)param_1 + 2)) & 0xffffffc0,
            (char)uVar2 != -0x80)))) break;
        *param_3 = ((CONCAT11((char)(uVar2 >> 8),bVar1) & 0x3fff) >> 8 | (ushort)bVar1 << 6) << 6 |
                   (ushort)(*(byte *)((int)param_1 + 2) & 0x3f);
        param_1 = (uint *)((int)param_1 + 3);
        param_2 = param_2 - 3;
        param_3 = param_3 + 1;
      }
      if (((uVar3 - 0xf0 < 8) && (3 < param_2)) && ((*(byte *)((int)param_1 + 1) & 0xc0) == 0x80))
      break;
LAB_00417ca8:
      param_1 = (uint *)((int)param_1 + 1);
      param_2 = param_2 - 1;
    }
    if (((*(byte *)((int)param_1 + 2) & 0xc0) != 0x80) ||
       ((*(byte *)((int)param_1 + 3) & 0xc0) != 0x80)) goto LAB_00417ca8;
    uVar2 = *(byte *)((int)param_1 + 3) & 0x3f;
    uVar3 = (((uVar3 & 0xffffff0f) << 6 | *(byte *)((int)param_1 + 1) & 0x3f) << 6 |
            *(byte *)((int)param_1 + 2) & 0x3f) << 6;
    *param_3 = (short)((uVar3 | uVar2) - 0x10000 >> 10) + 0xd800;
    param_3[1] = ((ushort)uVar3 & 0x3ff | (ushort)uVar2) + 0xdc00;
    param_1 = param_1 + 1;
    param_2 = param_2 - 4;
    param_3 = param_3 + 2;
  } while( true );
}


/* FUN_00417cc0 @ 00417cc0  kind=gamemisc  attributed-by=none  size=106 */

void __fastcall FUN_00417cc0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_1[1] != 0) {
    (*(code *)PTR_free_0058219c)(param_1[1]);
    param_1[1] = 0;
  }
  if ((uint *)*param_1 != (uint *)0x0) {
    puVar3 = (undefined4 *)(*(uint *)*param_1 & 0xffffffe0);
    iVar2 = puVar3[3];
    while (iVar2 != 0) {
      puVar1 = (undefined4 *)(iVar2 + 4);
      iVar2 = *(int *)(iVar2 + 0xc);
      (*(code *)PTR_free_0058219c)(*puVar1);
    }
    *puVar3 = 0;
    puVar3[3] = 0;
    puVar3[5] = 0;
    puVar3[4] = 0;
    *param_1 = 0;
  }
  return;
}


/* FUN_00417d30 @ 00417d30  kind=gamemisc  attributed-by=none  size=21 */

void __thiscall FUN_00417d30(void *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *(undefined4 *)this;
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


/* FUN_00417e00 @ 00417e00  kind=gamemisc  attributed-by=none  size=52 */

void __thiscall FUN_00417e00(void *this,undefined4 *param_1)

{
  if (*(int *)this != 0) {
    *param_1 = *(undefined4 *)(*(int *)this + 0x10);
    return;
  }
  *param_1 = 0;
  return;
}


/* FUN_00417e40 @ 00417e40  kind=gamemisc  attributed-by=none  size=336 */

int __cdecl FUN_00417e40(int param_1,char *param_2,uint param_3)

{
  char cVar1;
  
  if ((param_1 == 8) || (param_1 == 4)) {
    return 2;
  }
  if (param_1 == 7) {
    return 5;
  }
  if (param_1 != 0) {
    return param_1;
  }
  if (4 < param_3) {
    if ((((*param_2 == '\0') && (param_2[1] == '\0')) && (param_2[2] == -2)) && (param_2[3] == -1))
    {
      return 6;
    }
    if (((*param_2 == -1) && (param_2[1] == -2)) && ((param_2[2] == '\0' && (param_2[3] == '\0'))))
    {
      return 5;
    }
  }
  if (2 < param_3) {
    if ((*param_2 == -2) && (param_2[1] == -1)) {
      return 3;
    }
    if ((*param_2 == -1) && (param_2[1] == -2)) {
      return 2;
    }
  }
  if ((((param_3 < 4) || (*param_2 != -0x11)) || (param_2[1] != -0x45)) || (param_2[2] != -0x41)) {
    if (4 < param_3) {
      cVar1 = *param_2;
      if (((cVar1 == '\0') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '<')))
         ) {
        return 6;
      }
      if (((cVar1 == '<') && (param_2[1] == '\0')) && ((param_2[2] == '\0' && (param_2[3] == '\0')))
         ) {
        return 5;
      }
      if ((((cVar1 == '\0') && (param_2[1] == '<')) && (param_2[2] == '\0')) && (param_2[3] == '?'))
      {
        return 3;
      }
      if (cVar1 == '<') {
        if (((param_2[1] == '\0') && (param_2[2] == '?')) && (param_2[3] == '\0')) {
          return 2;
        }
        if (((param_2[1] == '?') && (param_2[2] == 'x')) && (param_2[3] == 'm')) {
          return 1;
        }
      }
    }
    if (2 < param_3) {
      if ((*param_2 == '\0') && (param_2[1] == '<')) {
        return 3;
      }
      if ((*param_2 == '<') && (param_2[1] == '\0')) {
        return 2;
      }
    }
  }
  return 1;
}


/* FUN_00417f90 @ 00417f90  kind=gamemisc  attributed-by=none  size=98 */

undefined4 __cdecl
FUN_00417f90(undefined4 *param_1,uint *param_2,void *param_3,uint param_4,char param_5)

{
  undefined3 uVar2;
  uint uVar1;
  void *_Dst;
  
  uVar2 = (undefined3)((uint)param_2 >> 8);
  if (param_5 != '\0') {
    *param_1 = param_3;
    *param_2 = param_4 >> 1;
    return CONCAT31(uVar2,1);
  }
  uVar1 = 1;
  if (param_4 != 0) {
    uVar1 = param_4;
  }
  _Dst = (void *)(*(code *)PTR_FUN_00582198)(uVar1);
  if (_Dst == (void *)0x0) {
    return 0;
  }
  memcpy(_Dst,param_3,param_4);
  *param_1 = _Dst;
  *param_2 = param_4 >> 1;
  return CONCAT31(uVar2,1);
}


/* FUN_00418000 @ 00418000  kind=gamemisc  attributed-by=none  size=84 */

undefined * __cdecl FUN_00418000(uint param_1)

{
  switch(param_1 >> 4 & 0xf) {
  case 0:
    return FUN_00419490;
  case 1:
    return FUN_004194e0;
  case 2:
    return FUN_00418cf0;
  case 3:
    return FUN_00418db0;
  case 4:
  case 6:
    return FUN_004195a0;
  case 5:
  case 7:
    return FUN_00419670;
  case 8:
  case 10:
  case 0xc:
  case 0xe:
    return FUN_00419770;
  case 9:
  case 0xb:
  case 0xd:
  case 0xf:
    return FUN_004198e0;
  default:
    return (undefined *)0x0;
  }
}


/* FUN_004180a0 @ 004180a0  kind=gamemisc  attributed-by=none  size=179 */

void __thiscall
FUN_004180a0(void *this,undefined8 *param_1,uint *param_2,uint param_3,uint param_4,uint param_5)

{
  undefined8 uVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  undefined8 *puVar5;
  undefined8 local_10;
  
  FUN_004177e0(this);
  uVar4 = param_3;
  puVar2 = param_2;
  param_5 = FUN_00417e40(param_5,(char *)param_2,param_3);
  param_2 = (uint *)0x0;
  param_3 = 0;
  uVar4 = FUN_00417680((int *)&param_2,&param_3,param_5,puVar2,uVar4,'\0');
  puVar3 = param_2;
  if ((char)uVar4 == '\0') {
    *param_1 = 3;
    *(undefined4 *)(param_1 + 1) = 0;
    return;
  }
  puVar5 = (undefined8 *)FUN_004189b0(&local_10,(ushort *)param_2,param_3,*(uint **)this,param_4);
  uVar1 = *puVar5;
  if (puVar3 != puVar2) {
    *(uint **)((int)this + 4) = puVar3;
  }
  *param_1 = uVar1;
  *(uint *)(param_1 + 1) = param_5;
  return;
}


/* FUN_00418280 @ 00418280  kind=gamemisc  attributed-by=none  size=217 */

ushort * __cdecl FUN_00418280(ushort *param_1)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  ushort *local_c;
  int local_8;
  
  _Src = (ushort *)0x0;
  iVar5 = 0;
  local_c = _Src;
  local_8 = iVar5;
  while( true ) {
    while( true ) {
      puVar4 = param_1;
      if (*puVar4 < 0x80) {
        bVar2 = (&DAT_0055ac88)[*puVar4];
      }
      else {
        bVar2 = 0;
      }
      if ((bVar2 & 1) != 0) break;
      param_1 = puVar4 + 1;
    }
    uVar1 = *puVar4;
    if (uVar1 == 0x3c) break;
    if (uVar1 == 0xd) {
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
        local_c = _Src;
        local_8 = iVar5;
      }
    }
    else if (uVar1 == 0x26) {
      param_1 = FUN_00419c90(puVar4,&local_c);
      _Src = local_c;
      iVar5 = local_8;
    }
    else {
      if (uVar1 == 0) {
        return puVar4;
      }
      param_1 = puVar4 + 1;
    }
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_00418410 @ 00418410  kind=gamemisc  attributed-by=none  size=1415 */

void __thiscall
FUN_00418410(void *this,ushort *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  uint *puVar6;
  int *piVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint *puVar12;
  code *local_c;
  uint *local_8;
  
  uVar9 = param_3;
  pcVar5 = (code *)FUN_00418000(param_3);
  switch(uVar9 >> 4 & 3) {
  case 0:
    local_c = FUN_00418180;
    break;
  case 1:
    local_c = FUN_004181d0;
    break;
  case 2:
    local_c = FUN_00418360;
    break;
  case 3:
    local_c = FUN_00418280;
    break;
  default:
    local_c = (code *)0x0;
  }
  uVar4 = *param_1;
  local_8 = param_2;
  puVar11 = param_1;
  puVar6 = param_2;
  if (uVar4 != 0) {
    do {
      puVar8 = puVar11;
      if (uVar4 == 0x3c) {
LAB_00418556:
        puVar11 = puVar11 + 1;
LAB_0041855c:
        uVar9 = (uint)*puVar11;
        if (*puVar11 < 0x80) {
          cVar3 = (&DAT_0055ac88)[uVar9];
        }
        else {
          cVar3 = -0x40;
        }
        param_1 = puVar11;
        if (cVar3 < '\0') {
          local_8 = FUN_004172b0((uint)puVar6,this,2);
          if (local_8 == (uint *)0x0) {
LAB_00418957:
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),3);
          }
          local_8[2] = (uint)puVar11;
          while( true ) {
            if (*puVar11 < 0x80) {
              bVar2 = (&DAT_0055ac88)[*puVar11];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            puVar11 = puVar11 + 1;
          }
          uVar4 = *puVar11;
          uVar9 = (uint)uVar4;
          *puVar11 = 0;
          puVar8 = puVar11 + 1;
          puVar6 = local_8;
          if (uVar9 != 0x3e) {
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_0055ac88)[uVar9];
            }
            else {
              bVar2 = 0;
            }
            puVar12 = local_8;
            if ((bVar2 & 8) == 0) {
              if (uVar9 == 0x2f) {
                uVar4 = *puVar8;
                if ((uVar4 != 0x3e) && ((puVar10 = puVar8, uVar4 != 0 || ((ushort)param_4 != 0x3e)))
                   ) goto LAB_0041862c;
                puVar8 = puVar8 + (uVar4 == 0x3e);
                puVar6 = (uint *)local_8[1];
                local_8 = (uint *)local_8[1];
              }
              else {
joined_r0x004188ab:
                puVar10 = puVar8;
                if ((uVar4 != 0) ||
                   (puVar8 = puVar11, puVar10 = puVar11, puVar6 = puVar12, (ushort)param_4 != 0x3e))
                {
LAB_0041862c:
                  *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)((int)this + 8),0xb);
                }
              }
            }
            else {
LAB_00418720:
              while( true ) {
                while( true ) {
                  if (*puVar8 < 0x80) {
                    bVar2 = (&DAT_0055ac88)[*puVar8];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar8 = puVar8 + 1;
                }
                if (*puVar8 < 0x80) {
                  cVar3 = (&DAT_0055ac88)[*puVar8];
                }
                else {
                  cVar3 = -0x40;
                }
                if (-1 < cVar3) break;
                piVar7 = FUN_00417230((int)puVar12,this);
                if (piVar7 == (int *)0x0) {
                  *(undefined4 *)((int)this + 0x48) = 0;
                  goto LAB_00418957;
                }
                piVar7[1] = (int)puVar8;
                while( true ) {
                  if (*puVar8 < 0x80) {
                    bVar2 = (&DAT_0055ac88)[*puVar8];
                  }
                  else {
                    bVar2 = 0xc0;
                  }
                  if ((bVar2 & 0x40) == 0) break;
                  puVar8 = puVar8 + 1;
                }
                uVar4 = *puVar8;
                if (uVar4 == 0) goto LAB_0041892f;
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
                if (*puVar8 == 0) goto LAB_0041892f;
                if (uVar4 < 0x80) {
                  bVar2 = (&DAT_0055ac88)[uVar4];
                }
                else {
                  bVar2 = 0;
                }
                if ((bVar2 & 8) != 0) {
                  while( true ) {
                    if (*puVar8 < 0x80) {
                      bVar2 = (&DAT_0055ac88)[*puVar8];
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((bVar2 & 8) == 0) break;
                    puVar8 = puVar8 + 1;
                  }
                  uVar4 = *puVar8;
                  if (uVar4 == 0) goto LAB_0041892f;
                  puVar8 = puVar8 + 1;
                }
                if (uVar4 != 0x3d) goto LAB_0041892f;
                while( true ) {
                  if (*puVar8 < 0x80) {
                    bVar2 = (&DAT_0055ac88)[*puVar8];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar8 = puVar8 + 1;
                }
                uVar4 = *puVar8;
                if ((uVar4 != 0x22) && (uVar4 != 0x27)) goto LAB_0041892f;
                piVar7[2] = (int)(puVar8 + 1);
                puVar8 = (ushort *)(*pcVar5)(puVar8 + 1,uVar4);
                if (puVar8 == (ushort *)0x0) {
                  *(int *)((int)this + 0x48) = piVar7[2];
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)((int)this + 8),0xc);
                }
                if (*puVar8 < 0x80) {
                  cVar3 = (&DAT_0055ac88)[*puVar8];
                }
                else {
                  cVar3 = -0x40;
                }
                puVar12 = local_8;
                if (cVar3 < '\0') {
LAB_0041892f:
                  *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)((int)this + 8),0xc);
                }
              }
              uVar4 = *puVar8;
              if (uVar4 == 0x2f) {
                puVar10 = puVar8 + 1;
                if (puVar8[1] == 0x3e) {
                  puVar8 = puVar8 + 2;
                  puVar6 = (uint *)puVar12[1];
                  local_8 = (uint *)puVar12[1];
                }
                else {
                  if ((puVar8[1] != 0) || ((ushort)param_4 != 0x3e)) goto LAB_0041862c;
                  puVar8 = puVar10;
                  puVar6 = (uint *)puVar12[1];
                  local_8 = (uint *)puVar12[1];
                }
              }
              else {
                puVar11 = puVar8;
                if (uVar4 != 0x3e) goto joined_r0x004188ab;
                puVar8 = puVar8 + 1;
                puVar6 = puVar12;
              }
            }
          }
        }
        else if (uVar9 == 0x2f) {
          puVar10 = (ushort *)puVar6[2];
          puVar8 = puVar11 + 1;
          if (puVar10 == (ushort *)0x0) {
LAB_0041867b:
            *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),0xe);
          }
          while( true ) {
            uVar4 = *puVar8;
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_0055ac88)[uVar4];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            uVar1 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
            if (uVar4 != uVar1) goto LAB_0041867b;
          }
          if (*puVar10 != 0) {
            if (((*puVar8 == 0) && (*puVar10 == (ushort)param_4)) && (puVar10[1] == 0))
            goto LAB_00418920;
            goto LAB_0041867b;
          }
          puVar6 = (uint *)puVar6[1];
          while( true ) {
            if (*puVar8 < 0x80) {
              bVar2 = (&DAT_0055ac88)[*puVar8];
            }
            else {
              bVar2 = 0;
            }
            if ((bVar2 & 8) == 0) break;
            puVar8 = puVar8 + 1;
          }
          local_8 = puVar6;
          if (*puVar8 == 0) {
            if ((ushort)param_4 != 0x3e) {
LAB_00418920:
              *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)((int)this + 8),0xd);
            }
          }
          else {
            if (*puVar8 != 0x3e) goto LAB_00418920;
            puVar8 = puVar8 + 1;
          }
        }
        else if (uVar9 == 0x3f) {
          FUN_00419210(this,(int *)&param_1,(uint *)&local_8,param_3,(ushort)param_4);
          puVar8 = param_1;
          puVar6 = local_8;
          if ((local_8 != (uint *)0x0) && (puVar12 = local_8, ((byte)*local_8 & 7) == 7))
          goto LAB_00418720;
        }
        else {
          if (uVar9 != 0x21) {
            if ((*puVar11 == 0) && ((ushort)param_4 == 0x3f)) {
              *(ushort **)((int)this + 0x48) = puVar11;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)((int)this + 8),6);
            }
            *(ushort **)((int)this + 0x48) = puVar11;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),5);
          }
          FUN_00418ea0(this,(int *)&param_1,puVar6,param_3,param_4);
          puVar8 = param_1;
        }
      }
      else {
        while( true ) {
          if (*puVar8 < 0x80) {
            bVar2 = (&DAT_0055ac88)[*puVar8];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar8 = puVar8 + 1;
        }
        if (((param_3 & 8) != 0) && (puVar11 != puVar8)) {
LAB_004184ce:
          if (puVar6[1] == 0) {
            uVar4 = *puVar11;
            puVar8 = puVar11;
            if (uVar4 != 0) {
              while (puVar8 = puVar11, uVar4 != 0x3c) {
                uVar4 = puVar11[1];
                puVar8 = puVar11 + 1;
                puVar11 = puVar8;
                if (uVar4 == 0) goto LAB_00418532;
              }
            }
            puVar11 = puVar8;
            if (*puVar8 != 0) goto LAB_00418556;
          }
          else {
            puVar6 = FUN_004172b0((uint)puVar6,this,3);
            if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              longjmp((int *)((int)this + 8),3);
            }
            puVar6[3] = (uint)puVar11;
            puVar8 = (ushort *)(*local_c)(puVar11);
            puVar6 = (uint *)puVar6[1];
            puVar11 = puVar8;
            param_1 = puVar8;
            local_8 = puVar6;
            if (*puVar8 != 0) goto LAB_0041855c;
          }
          break;
        }
        if (*puVar8 != 0x3c) {
          if (*puVar8 != 0) goto LAB_004184ce;
          break;
        }
      }
      uVar4 = *puVar8;
      puVar11 = puVar8;
    } while (uVar4 != 0);
LAB_00418532:
    if (puVar6 != param_2) {
      *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),0xe);
    }
  }
  return;
}


/* FUN_004189b0 @ 004189b0  kind=gamemisc  attributed-by=none  size=241 */

void __cdecl
FUN_004189b0(undefined8 *param_1,ushort *param_2,int param_3,uint *param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_54;
  uint local_50;
  undefined1 local_4c [64];
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  param_4[10] = (uint)param_2;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    local_54 = param_4[8];
    local_50 = param_4[9];
    local_c = 0;
    uVar1 = param_2[param_3 + -1];
    param_2[param_3 + -1] = 0;
    iVar2 = setjmp3(local_4c,0);
    if (iVar2 == 0) {
      FUN_00418410(&local_54,param_2,param_4,param_5,(uint)uVar1);
    }
    if (local_c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_c - (int)param_2 >> 1;
    }
    param_4[8] = local_54;
    param_4[9] = local_50;
    if ((iVar2 == 0) && (uVar1 == 0x3c)) {
      uVar4 = CONCAT44(param_3,5);
    }
    else {
      uVar4 = CONCAT44(iVar3,iVar2);
    }
  }
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00418ab0 @ 00418ab0  kind=gamemisc  attributed-by=none  size=166 */

void __thiscall FUN_00418ab0(void *this,int *param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      if ((param_3 != '\0') && ((short)param_2 == 0x3e)) {
        return;
      }
      *(int *)((int)this + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),9);
    }
    psVar2 = (short *)*param_1;
    sVar1 = *psVar2;
    if (sVar1 == 0x3c) {
      if ((psVar2[1] == 0x21) && (psVar2[2] != 0x2d)) {
        if (psVar2[2] == 0x5b) {
          FUN_00418b60(this,param_1);
        }
        else {
          FUN_00418ab0(this,param_1,param_2,'\0');
        }
      }
      else {
LAB_00418b1f:
        FUN_00418bd0(this,param_1);
      }
    }
    else {
      if ((sVar1 == 0x22) || (sVar1 == 0x27)) goto LAB_00418b1f;
      if (sVar1 == 0x3e) {
        *param_1 = *param_1 + 2;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_00418b60 @ 00418b60  kind=gamemisc  attributed-by=none  size=112 */

void __thiscall FUN_00418b60(void *this,int *param_1)

{
  short sVar1;
  short *psVar2;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      *(int *)((int)this + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),9);
    }
    psVar2 = (short *)*param_1;
    if (((*psVar2 == 0x3c) && (psVar2[1] == 0x21)) && (psVar2[2] == 0x5b)) {
      FUN_00418b60(this,param_1);
    }
    else {
      if (((*psVar2 == 0x5d) && (psVar2[1] == 0x5d)) && (psVar2[2] == 0x3e)) {
        *param_1 = *param_1 + 6;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_00418bd0 @ 00418bd0  kind=gamemisc  attributed-by=none  size=275 */

void __thiscall FUN_00418bd0(void *this,undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
    psVar3 = psVar3 + 1;
    *param_1 = psVar3;
    sVar2 = *psVar3;
    while ((sVar2 != 0 && (*psVar3 != sVar1))) {
      psVar3 = psVar3 + 1;
      *param_1 = psVar3;
      sVar2 = *psVar3;
    }
    psVar3 = (short *)*param_1;
    if (*psVar3 != 0) {
      *param_1 = psVar3 + 1;
      return;
    }
    *(short **)((int)this + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)((int)this + 8),9);
  }
  if (sVar1 == 0x3c) {
    if (psVar3[1] == 0x3f) {
      *param_1 = psVar3 + 2;
      sVar1 = psVar3[2];
      while ((sVar1 != 0 && ((psVar3 = (short *)*param_1, *psVar3 != 0x3f || (psVar3[1] != 0x3e)))))
      {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 2;
        return;
      }
    }
    else if (((psVar3[1] == 0x21) && (psVar3[2] == 0x2d)) && (psVar3[3] == 0x2d)) {
      *param_1 = psVar3 + 4;
      sVar1 = psVar3[4];
      while ((sVar1 != 0 &&
             (((psVar3 = (short *)*param_1, *psVar3 != 0x2d || (psVar3[1] != 0x2d)) ||
              (psVar3[2] != 0x3e))))) {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 4;
        return;
      }
      *(short **)((int)this + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),9);
    }
  }
  *(short **)((int)this + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)this + 8),9);
}


/* FUN_00418ea0 @ 00418ea0  kind=gamemisc  attributed-by=none  size=869 */

void __thiscall FUN_00418ea0(void *this,int *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  short sVar6;
  ushort *local_8;
  
  iVar2 = *param_1;
  local_8 = (ushort *)(iVar2 + 2);
  uVar1 = *local_8;
  sVar6 = (short)param_4;
  if (uVar1 != 0x2d) {
    if (uVar1 == 0x5b) {
      local_8 = (ushort *)(iVar2 + 4);
      if (((((*(ushort *)(iVar2 + 4) == 0x43) &&
            (local_8 = (ushort *)(iVar2 + 6), *(ushort *)(iVar2 + 6) == 0x44)) &&
           (local_8 = (ushort *)(iVar2 + 8), *(ushort *)(iVar2 + 8) == 0x41)) &&
          ((local_8 = (ushort *)(iVar2 + 10), *(ushort *)(iVar2 + 10) == 0x54 &&
           (local_8 = (ushort *)(iVar2 + 0xc), *(ushort *)(iVar2 + 0xc) == 0x41)))) &&
         (local_8 = (ushort *)(iVar2 + 0xe), *(ushort *)(iVar2 + 0xe) == 0x5b)) {
        local_8 = (ushort *)(iVar2 + 0x10);
        if ((param_3 & 4) != 0) {
          puVar4 = FUN_004172b0((uint)param_2,this,4);
          if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),3);
          }
          puVar4[3] = (uint)local_8;
          if ((param_3 & 0x20) == 0) {
            uVar1 = *local_8;
            puVar5 = local_8;
            while (local_8 = puVar5, uVar1 != 0) {
              if (((uVar1 == 0x5d) && (puVar5[1] == 0x5d)) &&
                 ((puVar5[2] == 0x3e || ((puVar5[2] == 0 && (sVar6 == 0x3e)))))) {
                if (*puVar5 != 0) {
                  *puVar5 = 0;
                  goto LAB_0041912d;
                }
                break;
              }
              puVar5 = puVar5 + 1;
              uVar1 = *puVar5;
            }
          }
          else {
            puVar5 = FUN_00419ac0(local_8,sVar6);
            if (puVar5 != (ushort *)0x0) goto LAB_00419133;
            puVar5 = (ushort *)puVar4[3];
            local_8 = (ushort *)0x0;
          }
          *(ushort **)((int)this + 0x48) = puVar5;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),8);
        }
        uVar1 = *local_8;
        puVar5 = local_8;
        while (local_8 = puVar5, uVar1 != 0) {
          if (((uVar1 == 0x5d) && (puVar5[1] == 0x5d)) &&
             ((puVar5[2] == 0x3e || ((puVar5[2] == 0 && (sVar6 == 0x3e)))))) {
            if (*puVar5 != 0) goto LAB_0041912d;
            break;
          }
          puVar5 = puVar5 + 1;
          uVar1 = *puVar5;
        }
      }
LAB_004191e7:
      *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),8);
    }
    if (((((uVar1 == 0x44) && (*(short *)(iVar2 + 4) == 0x4f)) && (*(short *)(iVar2 + 6) == 0x43))
        && ((*(short *)(iVar2 + 8) == 0x54 && (*(short *)(iVar2 + 10) == 0x59)))) &&
       (*(short *)(iVar2 + 0xc) == 0x50)) {
      if (*(short *)(iVar2 + 0xe) == 0x45) {
        local_8 = (ushort *)(iVar2 + -2);
        FUN_00418ab0(this,(int *)&local_8,param_4,'\x01');
        goto LAB_004191b9;
      }
      if ((*(short *)(iVar2 + 0xe) == 0) && (sVar6 == 0x45)) {
        *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),9);
      }
    }
    if (uVar1 == 0) {
      if (sVar6 == 0x2d) goto LAB_004191d2;
      if (sVar6 == 0x5b) goto LAB_004191e7;
    }
    *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)((int)this + 8),5);
  }
  local_8 = (ushort *)(iVar2 + 4);
  if (*local_8 == 0x2d) {
    local_8 = (ushort *)(iVar2 + 6);
    uVar3 = param_3 & 2;
    if (uVar3 != 0) {
      param_2 = FUN_004172b0((uint)param_2,this,5);
      if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),3);
      }
      param_2[3] = (uint)local_8;
    }
    if (((param_3 & 0x20) != 0) && (uVar3 != 0)) {
      local_8 = FUN_00419ba0(local_8,sVar6);
      if (local_8 == (ushort *)0x0) {
        *(uint *)((int)this + 0x48) = param_2[3];
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),7);
      }
LAB_004191b9:
      *param_1 = (int)local_8;
      return;
    }
    uVar1 = *local_8;
    while (uVar1 != 0) {
      if (((uVar1 == 0x2d) && (local_8[1] == 0x2d)) &&
         ((local_8[2] == 0x3e || ((local_8[2] == 0 && (sVar6 == 0x3e)))))) {
        if (*local_8 != 0) {
          if (uVar3 != 0) {
            *local_8 = 0;
          }
          *param_1 = (int)(local_8 + (local_8[2] == 0x3e) + 2);
          return;
        }
        break;
      }
      local_8 = local_8 + 1;
      uVar1 = *local_8;
    }
  }
LAB_004191d2:
  *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)this + 8),7);
LAB_0041912d:
  puVar5 = puVar5 + 1;
LAB_00419133:
  *param_1 = (int)(puVar5 + (puVar5[1] == 0x3e) + 1);
  return;
}


/* FUN_00419210 @ 00419210  kind=gamemisc  attributed-by=none  size=631 */

void __thiscall FUN_00419210(void *this,int *param_1,uint *param_2,uint param_3,short param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  puVar8 = (undefined4 *)*param_2;
  iVar1 = *param_1;
  puVar9 = (ushort *)(iVar1 + 2);
  if (*puVar9 < 0x80) {
    cVar3 = (&DAT_0055ac88)[*puVar9];
  }
  else {
    cVar3 = -0x40;
  }
  puVar10 = puVar9;
  if (cVar3 < '\0') {
    while( true ) {
      if (*puVar10 < 0x80) {
        bVar4 = (&DAT_0055ac88)[*puVar10];
      }
      else {
        bVar4 = 0xc0;
      }
      if ((bVar4 & 0x40) == 0) break;
      puVar10 = puVar10 + 1;
    }
    if (*puVar10 == 0) {
      *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),6);
    }
    if (((((*puVar9 | 0x20) == 0x78) && ((*(ushort *)(iVar1 + 4) | 0x20) == 0x6d)) &&
        ((*(ushort *)(iVar1 + 6) | 0x20) == 0x6c)) && ((ushort *)(iVar1 + 8) == puVar10)) {
      bVar2 = true;
      uVar6 = param_3 & 0x100;
    }
    else {
      bVar2 = false;
      uVar6 = param_3 & 1;
    }
    if (uVar6 == 0) {
      uVar5 = *puVar10;
      do {
        if ((uVar5 == 0x3f) && ((puVar10[1] == 0x3e || ((puVar10[1] == 0 && (param_4 == 0x3e)))))) {
          if (*puVar10 != 0) {
            uVar6 = (puVar10[1] == 0x3e) + 1;
            goto LAB_00419471;
          }
          break;
        }
        uVar5 = puVar10[1];
        puVar10 = puVar10 + 1;
      } while (uVar5 != 0);
    }
    else {
      if (bVar2) {
        if (((byte)*puVar8 & 7) != 1) {
          *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),6);
        }
        puVar7 = FUN_004172b0((uint)puVar8,this,7);
        if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),3);
        }
      }
      else {
        puVar7 = FUN_004172b0((uint)puVar8,this,6);
        if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),3);
        }
      }
      puVar7[2] = (uint)puVar9;
      uVar5 = *puVar10;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
      if (uVar5 == 0x3f) {
        uVar5 = *puVar10;
        if ((uVar5 != 0x3e) && ((uVar5 != 0 || (param_4 != 0x3e)))) {
          *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),6);
        }
        puVar8 = (undefined4 *)puVar7[1];
        uVar6 = (uint)(uVar5 == 0x3e);
LAB_00419471:
        *param_1 = (int)(puVar10 + uVar6);
        *param_2 = (uint)puVar8;
        return;
      }
      if (uVar5 < 0x80) {
        bVar4 = (&DAT_0055ac88)[uVar5];
      }
      else {
        bVar4 = 0;
      }
      if ((bVar4 & 8) != 0) {
        while( true ) {
          if (*puVar10 < 0x80) {
            bVar4 = (&DAT_0055ac88)[*puVar10];
          }
          else {
            bVar4 = 0;
          }
          if ((bVar4 & 8) == 0) break;
          puVar10 = puVar10 + 1;
        }
        puVar9 = puVar10;
        if (*puVar10 != 0) {
          do {
            if ((*puVar9 == 0x3f) &&
               ((puVar9[1] == 0x3e || ((puVar9[1] == 0 && (param_4 == 0x3e)))))) break;
            puVar9 = puVar9 + 1;
          } while (*puVar9 != 0);
          if (*puVar9 != 0) {
            if (bVar2) {
              *puVar9 = 0x2f;
              *param_1 = (int)puVar10;
              *param_2 = (uint)puVar7;
              return;
            }
            puVar7[3] = (uint)puVar10;
            puVar8 = (undefined4 *)puVar7[1];
            *puVar9 = 0;
            puVar10 = puVar9 + 1;
            uVar6 = (uint)(*puVar10 == 0x3e);
            goto LAB_00419471;
          }
        }
        *(ushort **)((int)this + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),6);
      }
    }
  }
  *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)this + 8),6);
}


/* FUN_00419ac0 @ 00419ac0  kind=gamemisc  attributed-by=none  size=219 */

ushort * __cdecl FUN_00419ac0(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_0055ac88)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x10) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    if (((uVar1 == 0x5d) && (puVar4[1] == 0x5d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_00419ba0 @ 00419ba0  kind=gamemisc  attributed-by=none  size=232 */

ushort * __cdecl FUN_00419ba0(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_0055ac88)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x20) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    if (((uVar1 == 0x2d) && (puVar4[1] == 0x2d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + (puVar4[2] == 0x3e) + 2;
}


/* FUN_00419c90 @ 00419c90  kind=gamemisc  attributed-by=none  size=489 */

ushort * __cdecl FUN_00419c90(ushort *param_1,void *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  
  puVar1 = param_1 + 1;
  puVar4 = puVar1;
  switch(*puVar1) {
  case 0x23:
    uVar2 = 0;
    if (param_1[2] == 0x78) {
      uVar6 = (uint)param_1[3];
      puVar4 = param_1 + 3;
      if (uVar6 == 0x3b) {
        return puVar4;
      }
      while( true ) {
        while (uVar6 - 0x30 < 10) {
          puVar1 = puVar4 + 1;
          uVar2 = uVar2 * 0x10 + -0x30 + uVar6;
          puVar4 = puVar4 + 1;
          uVar6 = (uint)*puVar1;
        }
        uVar3 = uVar6 | 0x20;
        if (5 < uVar3 - 0x61) break;
        uVar6 = (uint)puVar4[1];
        uVar2 = uVar2 * 0x10 + -0x57 + uVar3;
        puVar4 = puVar4 + 1;
      }
      uVar5 = (ushort)uVar6;
    }
    else {
      uVar5 = param_1[2];
      uVar6 = (uint)uVar5;
      puVar4 = param_1 + 2;
      if (uVar6 == 0x3b) {
        return puVar4;
      }
      while (uVar6 - 0x30 < 10) {
        uVar5 = puVar4[1];
        puVar4 = puVar4 + 1;
        uVar2 = uVar6 + uVar2 * 10 + -0x30;
        uVar6 = (uint)uVar5;
      }
    }
    if (uVar5 == 0x3b) {
      param_1 = FUN_00417070(param_1,uVar2);
      FUN_00419a80(param_2,(int *)&param_1,(int)(puVar4 + 1) - (int)param_1 >> 1);
      return puVar4 + 1;
    }
    break;
  case 0x61:
    puVar4 = param_1 + 2;
    if (param_1[2] == 0x6d) {
      puVar4 = param_1 + 3;
      if ((*puVar4 == 0x70) && (puVar4 = param_1 + 4, *puVar4 == 0x3b)) {
        uVar5 = 0x26;
        goto LAB_00419da1;
      }
    }
    else if ((((param_1[2] == 0x70) && (puVar4 = param_1 + 3, *puVar4 == 0x6f)) &&
             (puVar4 = param_1 + 4, *puVar4 == 0x73)) && (puVar4 = param_1 + 5, *puVar4 == 0x3b)) {
      uVar5 = 0x27;
      goto LAB_00419da1;
    }
    break;
  case 0x67:
    puVar4 = param_1 + 2;
    if ((*puVar4 == 0x74) && (puVar4 = param_1 + 3, *puVar4 == 0x3b)) {
      uVar5 = 0x3e;
LAB_00419da1:
      *param_1 = uVar5;
      param_1 = puVar1;
      FUN_00419a80(param_2,(int *)&param_1,(int)puVar4 + (2 - (int)puVar1) >> 1);
      return puVar4 + 1;
    }
    break;
  case 0x6c:
    puVar4 = param_1 + 2;
    if ((*puVar4 == 0x74) && (puVar4 = param_1 + 3, *puVar4 == 0x3b)) {
      uVar5 = 0x3c;
      goto LAB_00419da1;
    }
    break;
  case 0x71:
    puVar4 = param_1 + 2;
    if ((((*puVar4 == 0x75) && (puVar4 = param_1 + 3, *puVar4 == 0x6f)) &&
        (puVar4 = param_1 + 4, *puVar4 == 0x74)) && (puVar4 = param_1 + 5, *puVar4 == 0x3b)) {
      uVar5 = 0x22;
      goto LAB_00419da1;
    }
  }
  return puVar4;
}


/* FUN_0041a030 @ 0041a030  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0041a030(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a03e. Too many branches */
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


/* FUN_0041a5d0 @ 0041a5d0  kind=gamemisc  attributed-by=none  size=135 */

undefined4 * __thiscall FUN_0041a5d0(void *this,int *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bc21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0041af30(this);
  this_00 = puVar1 + 4;
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[9] = 7;
    puVar1[8] = 0;
    *(undefined2 *)this_00 = 0;
    FUN_004172f0(this_00,param_1,0,0xffffffff);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_0041a670 @ 0041a670  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_0041a670(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_0041a6f0(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
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


/* FUN_0041a6f0 @ 0041a6f0  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_0041a6f0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bc40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0041a5d0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_0041a6f0(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0041a6f0(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0041a7b0 @ 0041a7b0  kind=gamemisc  attributed-by=none  size=511 */

void __thiscall
FUN_0041a7b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = FUN_0041a5d0(this,param_4);
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
      goto LAB_0041a80e;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0041a80e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0041a80e:
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
        goto LAB_0041a98a;
      }
LAB_0041a8e1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0041a8e1;
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
LAB_0041a98a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0041a9b0 @ 0041a9b0  kind=gamemisc  attributed-by=none  size=319 */

void __thiscall
FUN_0041a9b0(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,undefined4 param_4)

{
  ushort *this_00;
  uint uVar1;
  ushort **ppuVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054bc60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar1 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_18 = (int)uVar1 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar1 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_18 = -1 < (int)uVar1;
    }
    puVar3 = puVar5;
    if (local_18 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      ppuVar2 = (ushort **)&param_2;
      local_18 = true;
      goto LAB_0041aa71;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar1 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  if (-1 < (int)uVar1) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppuVar2 = &param_3;
LAB_0041aa71:
  puVar3 = (undefined4 *)FUN_0041a7b0(this,ppuVar2,local_18,puVar3,(int *)this_00);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0041ab00 @ 0041ab00  kind=gamemisc  attributed-by=none  size=129 */

void __thiscall FUN_0041ab00(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_c [2];
  
  do {
    do {
      while( true ) {
        do {
          piVar3 = param_1;
          if (piVar3 == param_2) {
            return;
          }
          FUN_0041a9b0(this,local_c,(undefined4 *)0x0,(ushort *)(piVar3 + 4),(uint)DAT_00583d7a);
          param_1 = piVar3;
        } while (*(char *)((int)piVar3 + 0xd) != '\0');
        param_1 = (int *)piVar3[2];
        if (*(char *)((int)param_1 + 0xd) != '\0') break;
        cVar1 = *(char *)(*param_1 + 0xd);
        piVar3 = (int *)*param_1;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_1 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      param_1 = (int *)piVar3[1];
    } while (*(char *)((int)param_1 + 0xd) != '\0');
    do {
      if (piVar3 != (int *)param_1[2]) break;
      piVar2 = (int *)param_1[1];
      piVar3 = param_1;
      param_1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  } while( true );
}


