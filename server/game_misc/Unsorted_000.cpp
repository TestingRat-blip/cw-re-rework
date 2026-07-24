// Unsorted_000 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_000.h"

/* FUN_004010b0 @ 004010b0  kind=gamemisc  attributed-by=none  size=48 */

undefined4 * __thiscall
FUN_004010b0(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  return this;
}


/* FUN_00401370 @ 00401370  kind=gamemisc  attributed-by=none  size=37 */

undefined1 * __thiscall FUN_00401370(void *this,undefined1 *param_1,undefined1 param_2)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_2;
  return this;
}


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


/* FUN_004014f0 @ 004014f0  kind=gamemisc  attributed-by=none  size=55 */

void __thiscall FUN_004014f0(void *this,float *param_1,float *param_2)

{
  *param_1 = *param_2 + *(float *)this;
  param_1[1] = param_2[1] + *(float *)((int)this + 4);
  param_1[2] = param_2[2] + *(float *)((int)this + 8);
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


/* FUN_00401610 @ 00401610  kind=gamemisc  attributed-by=none  size=54 */

float * __thiscall FUN_00401610(void *this,float param_1)

{
  *(float *)this = *(float *)this * param_1;
  *(float *)((int)this + 4) = *(float *)((int)this + 4) * param_1;
  *(float *)((int)this + 8) = *(float *)((int)this + 8) * param_1;
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


/* FUN_00401ca0 @ 00401ca0  kind=gamemisc  attributed-by=none  size=33 */

float10 __cdecl FUN_00401ca0(float param_1)

{
  return (float10)ABS(param_1);
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


/* FUN_00402eb0 @ 00402eb0  kind=gamemisc  attributed-by=none  size=22 */

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


/* FUN_00405610 @ 00405610  kind=gamemisc  attributed-by=none  size=38 */

undefined1 * __thiscall FUN_00405610(void *this,undefined1 *param_1)

{
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined1 *)((int)this + 2) = param_1[2];
  *(undefined1 *)((int)this + 3) = param_1[3];
  return this;
}


/* FUN_00405660 @ 00405660  kind=gamemisc  attributed-by=none  size=37 */

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


/* FUN_00405690 @ 00405690  kind=gamemisc  attributed-by=none  size=35 */

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


/* FUN_00406380 @ 00406380  kind=gamemisc  attributed-by=none  size=44 */

undefined4 * __thiscall
FUN_00406380(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  *(undefined4 *)((int)this + 0xc) = param_4;
  *(undefined4 *)((int)this + 0x10) = param_5;
  *(undefined4 *)((int)this + 0x14) = param_6;
  return this;
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


/* FUN_004078f0 @ 004078f0  kind=gamemisc  attributed-by=none  size=197 */

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


/* FUN_004079c0 @ 004079c0  kind=gamemisc  attributed-by=none  size=41 */

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


/* FUN_004079f0 @ 004079f0  kind=gamemisc  attributed-by=none  size=55 */

void __thiscall FUN_004079f0(void *this,float *param_1,float param_2)

{
  *param_1 = *(float *)this * param_2;
  param_1[1] = *(float *)((int)this + 4) * param_2;
  param_1[2] = *(float *)((int)this + 8) * param_2;
  return;
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


/* FUN_00407b30 @ 00407b30  kind=gamemisc  attributed-by=none  size=47 */

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


/* FUN_00407c80 @ 00407c80  kind=gamemisc  attributed-by=none  size=63 */

float10 __cdecl FUN_00407c80(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)(1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0));
}


/* FUN_00407d60 @ 00407d60  kind=gamemisc  attributed-by=none  size=53 */

float10 __cdecl FUN_00407d60(float param_1)

{
  return (float10)(1.0 - 1.0 / ((param_1 - 1.0) * 0.05 + 1.0));
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


/* FUN_0040a840 @ 0040a840  kind=gamemisc  attributed-by=none  size=17600 */

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


/* FUN_0040efc0 @ 0040efc0  kind=gamemisc  attributed-by=none  size=76 */

void __cdecl FUN_0040efc0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 1;
  switch(param_1) {
  case 0x15:
  case 0x1c:
  case 0x2a:
  case 0x32:
  case 0x37:
  case 0x3f:
  case 0x45:
  case 0x46:
  case 0x57:
  case 0x58:
    *param_2 = 1;
    *param_3 = 3;
    break;
  case 0x16:
  case 0x23:
  case 0x24:
  case 0x36:
  case 0x38:
  case 0x3c:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x9a:
    *param_2 = 1;
    *param_3 = 5;
    return;
  }
  return;
}


/* FUN_0040f0a0 @ 0040f0a0  kind=gamemisc  attributed-by=none  size=192 */

void __cdecl FUN_0040f0a0(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  *param_2 = 1;
  *param_3 = 1;
  switch(param_1) {
  case 0x11:
  case 0x31:
  case 0x67:
  case 0x71:
  case 0x72:
  case 0x9a:
    *param_2 = 0x2f;
    *param_3 = 0x51;
    return;
  default:
    *param_2 = 2;
    *param_3 = 4;
    return;
  case 0x13:
  case 0x14:
  case 0x19:
  case 0x1a:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x3c:
  case 0x3f:
  case 0x43:
  case 0x45:
  case 0x46:
    *param_2 = 3;
    *param_3 = 6;
    return;
  case 0x15:
  case 0x2e:
  case 0x2f:
  case 0x32:
  case 0x3a:
  case 0x4b:
  case 0x50:
  case 0x56:
  case 0x59:
  case 0x66:
  case 0x68:
  case 0x96:
    *param_2 = 0x1f;
    *param_3 = 0x2f;
    return;
  case 0x1c:
  case 0x3d:
  case 0x5a:
  case 0x9b:
    *param_2 = 0xe;
    *param_3 = 0x15;
    return;
  case 0x24:
  case 0x36:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x48:
  case 0x49:
  case 0x5b:
  case 99:
  case 0x98:
  case 0x99:
    *param_2 = 0x15;
    *param_3 = 0x1f;
    return;
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x35:
  case 0x3b:
  case 0x58:
  case 0x69:
  case 0x6a:
  case 0x97:
    *param_2 = 9;
    *param_3 = 0xe;
    return;
  case 0x3e:
  case 0x52:
  case 0x55:
  case 0x61:
  case 0x6e:
  case 0x70:
    *param_2 = 0xb4;
    *param_3 = 0x4e0d;
    return;
  case 0x51:
  case 0x53:
  case 0x54:
  case 0x5e:
    *param_2 = 0x51;
    *param_3 = 0xb4;
    return;
  case 0x62:
  case 100:
    *param_2 = 6;
    *param_3 = 9;
    return;
  }
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


/* FUN_0040f8f0 @ 0040f8f0  kind=gamemisc  attributed-by=none  size=416 */

float10 __thiscall FUN_0040f8f0(int param_1,undefined4 param_2)

{
  float10 fVar1;
  
  if ((*(char *)(param_1 + 0x60) != '\x05') && (*(char *)(param_1 + 0x60) != '\x03')) {
    switch(param_2) {
    case 1:
    case 2:
    case 9:
      fVar1 = FUN_00412150(param_1);
      return (float10)(6.0 / (float)fVar1);
    case 3:
    case 4:
    case 0x3e:
      fVar1 = FUN_00412150(param_1);
      return (float10)(3.0 / (float)fVar1);
    case 5:
      return (float10)4.0;
    case 6:
    case 7:
    case 0x12:
    case 0x13:
      fVar1 = FUN_00412150(param_1);
      return (float10)(3.0 / (float)fVar1);
    default:
      fVar1 = FUN_00412150(param_1);
      return (float10)(2.0 / (float)fVar1);
    case 0xb:
    case 0x57:
      return (float10)10.0;
    case 0xd:
    case 0xe:
    case 0xf:
      fVar1 = FUN_00412150(param_1);
      return (float10)(6.0 / (float)fVar1);
    case 0x11:
    case 0x14:
      return (float10)6.0;
    case 0x15:
      fVar1 = FUN_00409de0(param_1,0x15,-1);
      return (float10)((float)fVar1 * 30.0 + 5.0);
    case 0x1e:
    case 0x1f:
    case 0x20:
    case 0x21:
      break;
    case 0x36:
      return (float10)5.0;
    case 0x3c:
    case 0x3d:
      fVar1 = FUN_00412150(param_1);
      return (float10)(6.0 / (float)fVar1);
    case 0x41:
    case 0x42:
      fVar1 = FUN_00412150(param_1);
      return (float10)(10.0 / (float)fVar1);
    case 0x58:
      fVar1 = FUN_00409de0(param_1,0x15,-1);
      return (float10)((float)fVar1 * 30.0 + 5.0);
    }
  }
  return (float10)0;
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


/* FUN_00414470 @ 00414470  kind=gamemisc  attributed-by=none  size=223 */

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


