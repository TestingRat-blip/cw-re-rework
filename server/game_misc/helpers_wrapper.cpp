// helpers_wrapper (game_misc) -- server. 115 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_004018f0 @ 004018f0  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void * FUN_004018f0(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if ((param_1 != 0) && (pvVar1 = operator_new(param_1), pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  return pvVar1;
}


/* FUN_00401d40 @ 00401d40  kind=gamemisc  attributed-by=role:wrapper  size=56 */

float10 __fastcall FUN_00401d40(float *param_1)

{
  double dVar1;
  
  dVar1 = (double)(*param_1 * *param_1 + param_1[1] * param_1[1]);
  libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}


/* FUN_00401d80 @ 00401d80  kind=gamemisc  attributed-by=role:wrapper  size=69 */

float10 __fastcall FUN_00401d80(float *param_1)

{
  double dVar1;
  
  dVar1 = (double)(*param_1 * *param_1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}


/* FUN_00401f50 @ 00401f50  kind=gamemisc  attributed-by=role:wrapper  size=96 */

float * __fastcall FUN_00401f50(float *param_1)

{
  float fVar1;
  double dVar2;
  
  fVar1 = *param_1;
  dVar2 = (double)(fVar1 * fVar1 + param_1[1] * param_1[1]);
  libm_sse2_sqrt_precise();
  *param_1 = fVar1 * (1.0 / (float)dVar2);
  param_1[1] = (1.0 / (float)dVar2) * param_1[1];
  return param_1;
}


/* FUN_00401fb0 @ 00401fb0  kind=gamemisc  attributed-by=role:wrapper  size=122 */

float * __fastcall FUN_00401fb0(float *param_1)

{
  float fVar1;
  double dVar2;
  float fVar3;
  
  fVar1 = *param_1;
  dVar2 = (double)(fVar1 * fVar1 + param_1[1] * param_1[1] + param_1[2] * param_1[2]);
  libm_sse2_sqrt_precise();
  fVar3 = 1.0 / (float)dVar2;
  *param_1 = fVar1 * fVar3;
  param_1[1] = fVar3 * param_1[1];
  param_1[2] = fVar3 * param_1[2];
  return param_1;
}


/* FUN_00402480 @ 00402480  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 __cdecl FUN_00402480(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_asin_precise();
  return (float10)(float)dVar1;
}


/* FUN_004024e0 @ 004024e0  kind=gamemisc  attributed-by=role:wrapper  size=40 */

float10 __cdecl FUN_004024e0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}


/* FUN_00402d40 @ 00402d40  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined4 __fastcall FUN_00402d40(uint *param_1)

{
  uint3 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  iVar2 = (int)(uVar3 >> 0x20);
  uVar1 = (uint3)(uVar3 >> 8);
  if ((iVar2 <= (int)param_1[1]) && ((iVar2 < (int)param_1[1] || ((uint)uVar3 < *param_1)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_00402db0 @ 00402db0  kind=gamemisc  attributed-by=role:wrapper  size=120 */

uint * __thiscall FUN_00402db0(void *this,uint param_1,int param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = __allmul(*(uint *)this,*(int *)((int)this + 4),param_1,param_2);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  *(undefined8 *)this = uVar2;
  lVar1 = __allmul(*(uint *)((int)this + 8),*(int *)((int)this + 0xc),param_1,param_2);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  *(undefined8 *)((int)this + 8) = uVar2;
  lVar1 = __allmul(*(uint *)((int)this + 0x10),*(int *)((int)this + 0x14),param_1,param_2);
  uVar2 = __alldiv((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),0x10000,0);
  *(undefined8 *)((int)this + 0x10) = uVar2;
  return this;
}


/* FUN_00405420 @ 00405420  kind=gamemisc  attributed-by=role:wrapper  size=42 */

uint __thiscall FUN_00405420(void *this,uint *param_1)

{
  FUN_00530600((int *)((int)this + 4),(int *)&param_1,param_1);
  if (param_1 == *(uint **)((int)this + 4)) {
    return 0;
  }
  return param_1[6];
}


/* FUN_00405510 @ 00405510  kind=gamemisc  attributed-by=role:wrapper  size=54 */

ulonglong __cdecl FUN_00405510(uint *param_1)

{
  uint uVar1;
  undefined8 uVar2;
  ulonglong uVar3;
  
  uVar1 = param_1[1];
  if (((int)uVar1 < 1) && ((int)uVar1 < 0)) {
    uVar2 = __alldiv(*param_1,uVar1,0x10000,0);
    return CONCAT44((int)((ulonglong)uVar2 >> 0x20),(int)uVar2 + -1);
  }
  uVar3 = __alldiv(*param_1,uVar1,0x10000,0);
  return uVar3;
}


/* FUN_00406350 @ 00406350  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_00406350(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_00406f70 @ 00406f70  kind=gamemisc  attributed-by=role:wrapper  size=81 */

undefined4 * __fastcall FUN_00406f70(undefined4 *param_1)

{
  *param_1 = 0;
  *(undefined2 *)(param_1 + 5) = 1;
  *(undefined2 *)(param_1 + 1) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  param_1[0x46] = 0;
  memset(param_1 + 6,0,0x100);
  return param_1;
}


/* FUN_004072a0 @ 004072a0  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_004072a0(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0040a430(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_00407650 @ 00407650  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void __fastcall FUN_00407650(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_00406310((undefined4 *)*param_1,(undefined4 *)param_1[1]);
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_0040f220 @ 0040f220  kind=gamemisc  attributed-by=role:wrapper  size=116 */

bool __thiscall FUN_0040f220(void *this,float param_1)

{
  int iVar1;
  
  if (*(char *)((int)this + 0xaa8) == '\x03') {
    switch(*(undefined1 *)((int)this + 0xaa9)) {
    case 0:
    case 1:
    case 2:
    case 0xc:
      param_1 = param_1 * 0.5;
      break;
    default:
      goto switchD_0040f23f_caseD_3;
    case 8:
    case 10:
      param_1 = param_1 * 0.3;
    }
  }
  else {
switchD_0040f23f_caseD_3:
  }
  iVar1 = rand();
  return (float)iVar1 / 32767.0 < param_1;
}


/* FUN_00411040 @ 00411040  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_00411040(void *this,undefined8 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420080(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x5555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00412c50 @ 00412c50  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void __fastcall FUN_00412c50(int param_1)

{
  if (*(int **)(param_1 + 4) != (int *)0x0) {
    FUN_00462fe0(*(int **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


/* FUN_00414200 @ 00414200  kind=gamemisc  attributed-by=role:wrapper  size=87 */

float10 __fastcall FUN_00414200(char *param_1)

{
  float10 fVar1;
  
  if ((*param_1 == '\x01') && ((param_1[1] == '\x04' || (param_1[1] == '\x06')))) {
    fVar1 = FUN_00410f90();
    return (float10)((float)fVar1 * 1.5);
  }
  return (float10)0;
}


/* FUN_00415c90 @ 00415c90  kind=gamemisc  attributed-by=role:wrapper  size=64 */

void __thiscall FUN_00415c90(void *this,void *param_1,size_t param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((int)this + 4) - *(int *)this;
  if (iVar1 < (int)(*(int *)((int)this + 0xc) + param_2)) {
    *(int *)((int)this + 0xc) = iVar1;
    return;
  }
  memcpy(param_1,(void *)(*(int *)this + *(int *)((int)this + 0xc)),param_2);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_2;
  return;
}


/* FUN_004168f0 @ 004168f0  kind=gamemisc  attributed-by=role:wrapper  size=50 */

void __thiscall FUN_004168f0(void *this,void *param_1,size_t param_2)

{
  FUN_00413180(this,(*(int *)((int)this + 4) - *(int *)this) + param_2);
  memcpy((void *)(*(int *)((int)this + 0xc) + *(int *)this),param_1,param_2);
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + param_2;
  return;
}


/* FUN_00419a80 @ 00419a80  kind=gamemisc  attributed-by=role:wrapper  size=60 */

void __thiscall FUN_00419a80(void *this,int *param_1,int param_2)

{
  void *_Src;
  int iVar1;
  
  _Src = *(void **)this;
  if (_Src != (void *)0x0) {
    memmove((void *)((int)_Src + *(int *)((int)this + 4) * -2),_Src,*param_1 - (int)_Src);
  }
  *param_1 = *param_1 + param_2 * 2;
  iVar1 = *param_1;
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + param_2;
  *(int *)this = iVar1;
  return;
}


/* FUN_00419f90 @ 00419f90  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined2 * __thiscall FUN_00419f90(void *this,undefined2 *param_1,uint param_2,uint param_3)

{
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  FUN_004172f0(param_1,this,param_2,param_3);
  return param_1;
}


/* FUN_00419fd0 @ 00419fd0  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_00419fd0(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0041a180(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_0041a000 @ 0041a000  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_0041a000(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0041a510(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_0041caf0 @ 0041caf0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_0041caf0(void *this,undefined1 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_0041b900(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xd4c77a) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0041ce90 @ 0041ce90  kind=gamemisc  attributed-by=role:wrapper  size=85 */

uint * __thiscall FUN_0041ce90(void *this,uint *param_1)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = __allmul(*(uint *)this,*(int *)((int)this + 4),*(uint *)this,*(int *)((int)this + 4));
  uVar4 = __alldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),0x10000,0);
  uVar1 = *(uint *)((int)this + 8);
  iVar2 = *(int *)((int)this + 0xc);
  *(undefined8 *)param_1 = uVar4;
  lVar3 = __allmul(uVar1,iVar2,uVar1,iVar2);
  uVar4 = __alldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),0x10000,0);
  uVar1 = *param_1;
  *param_1 = *param_1 + (uint)uVar4;
  param_1[1] = param_1[1] + (int)((ulonglong)uVar4 >> 0x20) + (uint)CARRY4(uVar1,(uint)uVar4);
  return param_1;
}


/* FUN_0041df20 @ 0041df20  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void * __thiscall FUN_0041df20(void *this,int *param_1)

{
  FUN_0041dc60(this,param_1);
  *(int *)((int)this + 0xc) = param_1[3];
  FUN_00402a70((void *)((int)this + 0x10),(undefined1 *)(param_1 + 4));
  *(int *)((int)this + 0x128) = param_1[0x4a];
  *(int *)((int)this + 300) = param_1[0x4b];
  return this;
}


/* FUN_00420040 @ 00420040  kind=gamemisc  attributed-by=role:wrapper  size=58 */

undefined4 * __thiscall FUN_00420040(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_00426a70(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    FUN_00422f90(puVar1 + 6,param_1 + 2);
  }
  return puVar1;
}


/* FUN_00421e50 @ 00421e50  kind=gamemisc  attributed-by=role:wrapper  size=43 */

undefined2 * __thiscall FUN_00421e50(void *this,uint param_1,undefined2 param_2)

{
  *(undefined4 *)((int)this + 0x14) = 7;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined2 *)this = 0;
  FUN_00427fd0(this,param_1,param_2);
  return this;
}


/* FUN_00421e80 @ 00421e80  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00421e80(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c3c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_00407ba0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00420bb0(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00421fc0 @ 00421fc0  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00421fc0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c428;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00420d50(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422060 @ 00422060  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422060(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c458;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004267f0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421710(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422100 @ 00422100  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422100(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_00426870((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00420e20(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_004221a0 @ 004221a0  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_004221a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c4b8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004268b0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00420ef0(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422240 @ 00422240  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422240(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c4e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004268f0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00420fc0(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_004222e0 @ 004222e0  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_004222e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c518;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_00426930((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421090(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422380 @ 00422380  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422380(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c548;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421160(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422420 @ 00422420  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422420(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c578;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_00426970((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421230(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_004224c0 @ 004224c0  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_004224c0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c5a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004269b0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_00421300(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422560 @ 00422560  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422560(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c5d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004268b0((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_004213d0(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422600 @ 00422600  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_00422600(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c608;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_004214a0(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422d70 @ 00422d70  kind=gamemisc  attributed-by=role:wrapper  size=43 */

undefined4 * __thiscall FUN_00422d70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  FUN_00422da0((void *)((int)this + 0x10),param_2);
  return this;
}


/* FUN_00423750 @ 00423750  kind=gamemisc  attributed-by=role:wrapper  size=20 */

void __fastcall FUN_00423750(int *param_1)

{
  FUN_00428080(param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_00426fa0 @ 00426fa0  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void __thiscall FUN_00426fa0(void *this,int *param_1)

{
  if (param_1 != *(int **)this) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    operator_delete(param_1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return;
}


/* FUN_00426fd0 @ 00426fd0  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void __thiscall FUN_00426fd0(void *this,int *param_1)

{
  if (param_1 != *(int **)this) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    FUN_00426c20(param_1);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
  }
  return;
}


/* FUN_00428360 @ 00428360  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_00428360(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004200d0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x2222221) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004283b0 @ 004283b0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_004283b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420200(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x6666665) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00428400 @ 00428400  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_00428400(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004202b0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00428450 @ 00428450  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_00428450(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004202e0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004284a0 @ 004284a0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_004284a0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420400(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x3fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004284f0 @ 004284f0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_004284f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420430(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x2aaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00428540 @ 00428540  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_00428540(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420470(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x3333332) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004285e0 @ 004285e0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_004285e0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00549300(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00429340 @ 00429340  kind=gamemisc  attributed-by=role:wrapper  size=58 */

undefined4 * __thiscall FUN_00429340(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_0042cf80(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
    FUN_00416a90(puVar1 + 10,param_1 + 6);
  }
  return puVar1;
}


/* FUN_0042b040 @ 0042b040  kind=gamemisc  attributed-by=role:wrapper  size=118 */

undefined4 * __thiscall FUN_0042b040(void *this,int *param_1)

{
  undefined4 uVar1;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cd68;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = FUN_0041a030();
  *(undefined4 *)this = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_00429430(this,param_1,local_18);
  ExceptionList = local_10;
  return this;
}


/* FUN_0042b0e0 @ 0042b0e0  kind=gamemisc  attributed-by=role:wrapper  size=118 */

undefined4 * __thiscall FUN_0042b0e0(void *this,int *param_1)

{
  undefined4 uVar1;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cd98;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = FUN_0041a060();
  *(undefined4 *)this = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_0041a670(this,param_1,local_18);
  ExceptionList = local_10;
  return this;
}


/* FUN_0042b180 @ 0042b180  kind=gamemisc  attributed-by=role:wrapper  size=127 */

undefined4 * __thiscall FUN_0042b180(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cdc8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  puVar1 = (undefined4 *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  *(undefined4 **)this = puVar1;
  local_8 = 1;
  FUN_0042ada0(this,(undefined4 *)*puVar1,*(undefined4 **)*param_1,(undefined4 *)*param_1);
  ExceptionList = local_10;
  return this;
}


/* FUN_0042c250 @ 0042c250  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_0042c250(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0042d580(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_0042c280 @ 0042c280  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_0042c280(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_0042d8f0(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_0042c2b0 @ 0042c2b0  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void __fastcall FUN_0042c2b0(int param_1)

{
  if (7 < *(uint *)(param_1 + 0x18)) {
    operator_delete(*(void **)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x18) = 7;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}


/* FUN_0042c3a0 @ 0042c3a0  kind=gamemisc  attributed-by=role:wrapper  size=107 */

void __fastcall FUN_0042c3a0(undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054cfa8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)(param_1 + 6));
  if (7 < (uint)param_1[5]) {
    operator_delete((void *)*param_1);
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_0042cfc0 @ 0042cfc0  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_0042cfc0(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x28)) {
    operator_delete(*(void **)((int)param_1 + 0x14));
  }
  *(undefined4 *)((int)param_1 + 0x28) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined2 *)((int)param_1 + 0x14) = 0;
  operator_delete(param_1);
  return;
}


/* FUN_0042d000 @ 0042d000  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_0042d000(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x24)) {
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
  operator_delete(param_1);
  return;
}


/* FUN_0042d040 @ 0042d040  kind=gamemisc  attributed-by=role:wrapper  size=29 */

void FUN_0042d040(void *param_1)

{
  FUN_0042c2e0((undefined4 *)((int)param_1 + 0x10));
  operator_delete(param_1);
  return;
}


/* FUN_0042d0c0 @ 0042d0c0  kind=gamemisc  attributed-by=role:wrapper  size=123 */

void FUN_0042d0c0(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054d188;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)((int)param_1 + 0x28));
  if (7 < *(uint *)((int)param_1 + 0x24)) {
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
  operator_delete(param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_0042ee10 @ 0042ee10  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void __fastcall FUN_0042ee10(int param_1)

{
  ios_base *this;
  
  this = (ios_base *)(param_1 + 0x70);
  FUN_0042ecd0(this);
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  return;
}


/* FUN_0042ee40 @ 0042ee40  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void __fastcall FUN_0042ee40(int param_1)

{
  ios_base *this;
  
  this = (ios_base *)(param_1 + 0x60);
  FUN_0042ed40(this);
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  return;
}


/* FUN_0045f950 @ 0045f950  kind=gamemisc  attributed-by=role:wrapper  size=49 */

void __cdecl FUN_0045f950(int param_1,undefined4 param_2,undefined4 *param_3)

{
  uint uVar1;
  
  uVar1 = FUN_004a0720((undefined8 *)*param_3,(undefined8 *)param_3[1],*(int *)(param_1 + 0x34));
  if (uVar1 != 0) {
    FUN_004b6f10((int *)(param_1 + 8),(undefined8 *)*param_3);
  }
  return;
}


/* FUN_0045fa30 @ 0045fa30  kind=gamemisc  attributed-by=role:wrapper  size=63 */

void __cdecl FUN_0045fa30(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b79e0((int *)(param_1 + 8),"3.7.15.2",0xffffffff,'\x01',(undefined *)0x0);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_0045faa0 @ 0045faa0  kind=gamemisc  attributed-by=role:wrapper  size=38 */

void __cdecl FUN_0045faa0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  return;
}


/* FUN_0045fb90 @ 0045fb90  kind=gamemisc  attributed-by=role:wrapper  size=63 */

void __cdecl FUN_0045fb90(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004b79e0((int *)(param_1 + 8),&DAT_00571370,0xffffffff,'\x01',(undefined *)0x0);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_0045fbd0 @ 0045fbd0  kind=gamemisc  attributed-by=role:wrapper  size=90 */

void __cdecl FUN_0045fbd0(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = param_2 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00464d50 @ 00464d50  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void __cdecl FUN_00464d50(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_GetLastError_005836a4)();
  FUN_0047d250(uVar1,param_2,param_3);
  return;
}


/* FUN_00465630 @ 00465630  kind=gamemisc  attributed-by=role:wrapper  size=66 */

undefined4 __cdecl FUN_00465630(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  uint local_c;
  uint local_8;
  
  (*(code *)PTR_GetSystemTimeAsFileTime_005836d4)(&local_c);
  lVar1 = __alldiv(local_c,local_8,10000,0);
  *param_2 = lVar1 + 0xb5310d9cba00;
  return 0;
}


/* FUN_00465ba0 @ 00465ba0  kind=gamemisc  attributed-by=role:wrapper  size=96 */

undefined4 __cdecl FUN_00465ba0(undefined4 param_1,double *param_2)

{
  longlong lVar1;
  uint local_c;
  uint local_8;
  
  (*(code *)PTR_GetSystemTimeAsFileTime_005836d4)(&local_c);
  lVar1 = __alldiv(local_c,local_8,10000,0);
  *param_2 = (double)(lVar1 + 0xb5310d9cba00) / 86400000.0;
  return 0;
}


/* FUN_00466ea0 @ 00466ea0  kind=gamemisc  attributed-by=role:wrapper  size=114 */

void __cdecl FUN_00466ea0(int param_1,undefined4 param_2,int *param_3)

{
  char *pcVar1;
  int iVar2;
  
  switch(*(undefined1 *)(*param_3 + 0x1e)) {
  case 1:
    pcVar1 = "integer";
    break;
  case 2:
    pcVar1 = "real";
    break;
  case 3:
    pcVar1 = "text";
    break;
  case 4:
    pcVar1 = "blob";
    break;
  default:
    pcVar1 = "null";
  }
  iVar2 = FUN_004b79e0((int *)(param_1 + 8),pcVar1,0xffffffff,'\x01',(undefined *)0x0);
  if (iVar2 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0);
  }
  return;
}


/* FUN_00469170 @ 00469170  kind=gamemisc  attributed-by=role:wrapper  size=70 */

uint * __cdecl FUN_00469170(int param_1)

{
  uint *puVar1;
  uint uVar2;
  
  uVar2 = param_1 + 7U & 0xfffffff8;
  puVar1 = malloc(uVar2 + 8);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = uVar2;
    puVar1[1] = (int)(param_1 + 7U) >> 0x1f;
    return puVar1 + 2;
  }
  FUN_004683f0(7,"failed to allocate %u bytes of memory");
  return (uint *)0x0;
}


/* FUN_004691c0 @ 004691c0  kind=gamemisc  attributed-by=role:wrapper  size=88 */

int __cdecl FUN_004691c0(int *param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if ((iVar1 == 0) &&
     (FUN_004b7790((int *)(param_1[0x11] + (param_2 + -1) * 0x28),param_3),
     *(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00582b20)();
  }
  return iVar1;
}


/* FUN_0046a980 @ 0046a980  kind=gamemisc  attributed-by=role:wrapper  size=98 */

void __cdecl FUN_0046a980(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(*piVar3 + 0x20);
  uVar2 = *(undefined4 *)(*piVar3 + 0x24);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720(piVar3);
  }
  FUN_00494b00(*piVar3,*(undefined4 **)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046ab70 @ 0046ab70  kind=gamemisc  attributed-by=role:wrapper  size=96 */

void __cdecl FUN_0046ab70(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *(int *)(*piVar2 + 0x48);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720(piVar2);
  }
  FUN_00494b00(*piVar2,*(undefined4 **)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046ac30 @ 0046ac30  kind=gamemisc  attributed-by=role:wrapper  size=96 */

void __cdecl FUN_0046ac30(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *(int *)(*piVar2 + 0x4c);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720(piVar2);
  }
  FUN_00494b00(*piVar2,*(undefined4 **)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0046ae30 @ 0046ae30  kind=gamemisc  attributed-by=role:wrapper  size=18 */

void __cdecl FUN_0046ae30(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  FUN_00466dd0((int)param_1);
  return;
}


/* FUN_0047f030 @ 0047f030  kind=gamemisc  attributed-by=role:wrapper  size=93 */

void FUN_0047f030(void)

{
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00483ba0 @ 00483ba0  kind=gamemisc  attributed-by=role:wrapper  size=35 */

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


/* FUN_004bdb20 @ 004bdb20  kind=gamemisc  attributed-by=role:wrapper  size=83 */

bool __cdecl FUN_004bdb20(int *param_1,int param_2,uint param_3,uint param_4)

{
  bool bVar1;
  undefined3 extraout_var;
  
  if (((param_1[2] == *(int *)(param_2 + 0x2c)) && ((short)param_1[4] == 2)) &&
     ((param_1[6] & param_3) == 0 && (param_1[7] & param_4) == 0)) {
    bVar1 = FUN_0049db30(*param_1,*(char *)(*(int *)(*(int *)(param_2 + 0x10) + 4) + 0x15 +
                                           param_1[3] * 0x18));
    return CONCAT31(extraout_var,bVar1) != 0;
  }
  return false;
}


/* FUN_004c64f0 @ 004c64f0  kind=gamemisc  attributed-by=role:wrapper  size=79 */

undefined4 * __thiscall FUN_004c64f0(void *this,uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x10000,0);
  *(int *)this = (int)uVar1;
  uVar1 = __alldiv(param_1[2],param_1[3],0x10000,0);
  *(int *)((int)this + 4) = (int)uVar1;
  uVar1 = __alldiv(param_1[4],param_1[5],0x10000,0);
  *(int *)((int)this + 8) = (int)uVar1;
  return this;
}


/* FUN_004c80d0 @ 004c80d0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_004c80d0(int param_1)

{
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    FUN_00406310(*(undefined4 **)(param_1 + 0x48),*(undefined4 **)(param_1 + 0x4c));
    operator_delete(*(void **)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
  }
  return;
}


/* FUN_004c83d0 @ 004c83d0  kind=gamemisc  attributed-by=role:wrapper  size=75 */

int __fastcall FUN_004c83d0(int param_1)

{
  *(undefined2 *)(param_1 + 0x18) = 1;
  *(undefined2 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined2 *)(param_1 + 0x14) = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0;
  memset((void *)(param_1 + 0x1c),0,0x100);
  return param_1;
}


/* FUN_004cd860 @ 004cd860  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_004cd860(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_004d3e10(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_004cd890 @ 004cd890  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void __fastcall FUN_004cd890(int param_1)

{
  if (7 < *(uint *)(param_1 + 0x1c)) {
    operator_delete(*(void **)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 0x1c) = 7;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  return;
}


/* FUN_004cd8c0 @ 004cd8c0  kind=gamemisc  attributed-by=role:wrapper  size=40 */

void __fastcall FUN_004cd8c0(undefined4 *param_1)

{
  if (7 < (uint)param_1[5]) {
    operator_delete((void *)*param_1);
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_004ce500 @ 004ce500  kind=gamemisc  attributed-by=role:wrapper  size=62 */

void * __thiscall FUN_004ce500(void *this,byte param_1)

{
  void *local_8;
  
  local_8 = this;
  FUN_004fc060((void *)((int)this + 0x78),&local_8,(int *)**(int **)((int)this + 0x78),
               *(int **)((int)this + 0x78));
  operator_delete(*(void **)((int)this + 0x78));
  if ((param_1 & 1) != 0) {
    operator_delete(this);
  }
  return this;
}


/* FUN_004ce6e0 @ 004ce6e0  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_004ce6e0(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x2c)) {
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 7;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined2 *)((int)param_1 + 0x18) = 0;
  operator_delete(param_1);
  return;
}


/* FUN_004d4430 @ 004d4430  kind=gamemisc  attributed-by=role:wrapper  size=50 */

void __thiscall FUN_004d4430(void *this,undefined4 *param_1,void *param_2)

{
  FUN_0041d190((int)param_2 + 0x148,*(int *)((int)this + 4),param_2);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + -0x148;
  *param_1 = param_2;
  return;
}


/* FUN_004d4f60 @ 004d4f60  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void __thiscall FUN_004d4f60(void *this,undefined4 *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_c [2];
  
  puVar2 = FUN_004da680(this,local_c,'\0',param_2,(uint)DAT_0058423e);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


/* FUN_004d65d0 @ 004d65d0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_004d65d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420380(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xdd67c7) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004da990 @ 004da990  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void * FUN_004da990(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


/* FUN_004dade0 @ 004dade0  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined4 __fastcall FUN_004dade0(uint *param_1)

{
  uint3 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  iVar2 = (int)(uVar3 >> 0x20);
  uVar1 = (uint3)(uVar3 >> 8);
  if (((int)param_1[1] <= iVar2) && (((int)param_1[1] < iVar2 || (*param_1 < (uint)uVar3)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_004daf10 @ 004daf10  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_004daf10(void *param_1)

{
  if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x10));
    *(undefined4 *)((int)param_1 + 0x10) = 0;
    *(undefined4 *)((int)param_1 + 0x14) = 0;
    *(undefined4 *)((int)param_1 + 0x18) = 0;
  }
  operator_delete(param_1);
  return;
}


/* FUN_004f7a30 @ 004f7a30  kind=gamemisc  attributed-by=role:wrapper  size=51 */

void __cdecl FUN_004f7a30(int *param_1,undefined4 param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_1 = (uint)uVar3 - *param_3;
  param_1[1] = ((int)(uVar3 >> 0x20) - uVar2) - (uint)((uint)uVar3 < uVar1);
  return;
}


/* FUN_0052b3f0 @ 0052b3f0  kind=gamemisc  attributed-by=role:wrapper  size=126 */

undefined1 * __thiscall FUN_0052b3f0(void *this,undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  *(undefined2 *)(param_1 + 0x10) = 1;
  param_1[1] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined2 *)(param_1 + 0xc) = 0;
  param_1[0xe] = 0;
  *(undefined4 *)(param_1 + 0x114) = 0;
  memset(param_1 + 0x14,0,0x100);
  *param_1 = 0x14;
  iVar1 = *(int *)((int)this + 0x8c);
  iVar2 = *(int *)((int)this + 0x88);
  uVar3 = rand();
  param_1[1] = *(undefined1 *)
                (*(int *)((int)this + 0x88) + (uVar3 % (uint)(iVar1 - iVar2 >> 2)) * 4);
  return param_1;
}


/* FUN_0052dfd0 @ 0052dfd0  kind=gamemisc  attributed-by=role:wrapper  size=92 */

void __thiscall FUN_0052dfd0(void *this,undefined4 *param_1,undefined4 *param_2)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_00556220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_0052e590(this,(undefined4 *)**(undefined4 **)this,param_1,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_0052e890 @ 0052e890  kind=gamemisc  attributed-by=role:wrapper  size=118 */

undefined4 * __thiscall FUN_0052e890(void *this,int *param_1)

{
  undefined4 uVar1;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005562a8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  uVar1 = FUN_00407b30();
  *(undefined4 *)this = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_0052e040(this,param_1,local_18);
  ExceptionList = local_10;
  return this;
}


/* FUN_0052ec80 @ 0052ec80  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined4 __fastcall FUN_0052ec80(uint *param_1)

{
  uint3 uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  iVar2 = (int)(uVar3 >> 0x20);
  uVar1 = (uint3)(uVar3 >> 8);
  if ((iVar2 <= (int)param_1[1]) && ((iVar2 < (int)param_1[1] || ((uint)uVar3 <= *param_1)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_005305b0 @ 005305b0  kind=gamemisc  attributed-by=role:wrapper  size=68 */

void __thiscall FUN_005305b0(void *this,int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_2;
  if (param_2 != *(int **)this) {
    *(int *)param_2[1] = *param_2;
    *(int *)(*param_2 + 4) = param_2[1];
    operator_delete(param_2);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + -1;
    *param_1 = iVar1;
    return;
  }
  *param_1 = iVar1;
  return;
}


/* FUN_00530690 @ 00530690  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void __thiscall FUN_00530690(void *this,undefined4 *param_1,uint *param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 local_c [2];
  
  puVar2 = FUN_0052e450(this,local_c,'\0',param_2,(uint)DAT_005842d2);
  uVar1 = *(undefined1 *)(puVar2 + 1);
  *param_1 = *puVar2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  return;
}


/* FUN_005307f0 @ 005307f0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_005307f0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420160(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00548b00 @ 00548b00  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 __cdecl FUN_00548b00(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_acos_precise();
  return (float10)(float)dVar1;
}


/* FUN_00548b20 @ 00548b20  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 __cdecl FUN_00548b20(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_exp_precise();
  return (float10)(float)dVar1;
}


/* FUN_00548db0 @ 00548db0  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void __fastcall FUN_00548db0(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_004c6860((undefined4 *)*param_1,(undefined4 *)param_1[1]);
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_0054ada6 @ 0054ada6  kind=gamemisc  attributed-by=role:wrapper  size=16 */

void FUN_0054ada6(void)

{
  int in_EAX;
  uint unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  void *unaff_EDI;
  
  if (in_EAX == 0) {
    __ArrayUnwind(unaff_EDI,unaff_EBX,unaff_ESI,*(_func_void_void_ptr **)(unaff_EBP + 0x18));
  }
  return;
}


/* entry @ 0054b44b  kind=gamemisc  attributed-by=role:wrapper  size=10 */

void entry(void)

{
  ___security_init_cookie();
  ___tmainCRTStartup();
  return;
}


/* FUN_0054b644 @ 0054b644  kind=gamemisc  attributed-by=role:wrapper  size=64 */

undefined4 FUN_0054b644(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) &&
     ((iVar2 = piVar1[5], iVar2 == 0x19930520 ||
      (((iVar2 == 0x19930521 || (iVar2 == 0x19930522)) || (iVar2 == 0x1994000)))))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return 0;
}


/* FUN_0054b8cb @ 0054b8cb  kind=gamemisc  attributed-by=role:wrapper  size=38 */

void FUN_0054b8cb(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


