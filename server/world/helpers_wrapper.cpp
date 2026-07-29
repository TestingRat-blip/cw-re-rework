// helpers_wrapper (world) -- server. 25 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_004014b0 @ 004014b0  kind=gamemisc  attributed-by=role:wrapper  size=56 */

void __thiscall FUN_004014b0(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = uVar1 - (uint)uVar3;
  param_1[1] = (iVar2 - (int)(uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
  return;
}


/* FUN_00401530 @ 00401530  kind=gamemisc  attributed-by=role:wrapper  size=52 */

void __thiscall FUN_00401530(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_0054a946();
  uVar1 = *(uint *)this;
  iVar2 = *(int *)((int)this + 4);
  *param_1 = (uint)uVar3 + *(int *)this;
  param_1[1] = (int)(uVar3 >> 0x20) + iVar2 + (uint)CARRY4((uint)uVar3,uVar1);
  return;
}


/* FUN_004024a0 @ 004024a0  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 __cdecl FUN_004024a0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_cos_precise();
  return (float10)(float)dVar1;
}


/* FUN_004024c0 @ 004024c0  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 __cdecl FUN_004024c0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_sin_precise();
  return (float10)(float)dVar1;
}


/* FUN_004055a0 @ 004055a0  kind=gamemisc  attributed-by=role:wrapper  size=38 */

float10 __cdecl FUN_004055a0(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_pow_precise();
  return (float10)(float)dVar1;
}


/* FUN_00406ef0 @ 00406ef0  kind=gamemisc  attributed-by=role:wrapper  size=122 */

undefined4 * __fastcall FUN_00406ef0(undefined4 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined2 *)(param_1 + 8) = 1;
  *(undefined2 *)(param_1 + 4) = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  param_1[0x49] = 0;
  memset(param_1 + 9,0,0x100);
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  return param_1;
}


/* FUN_00406fd0 @ 00406fd0  kind=gamemisc  attributed-by=role:wrapper  size=74 */

undefined2 * __fastcall FUN_00406fd0(undefined2 *param_1)

{
  param_1[8] = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  memset(param_1 + 10,0,0x100);
  return param_1;
}


/* FUN_0041d8d0 @ 0041d8d0  kind=gamemisc  attributed-by=role:wrapper  size=121 */

undefined2 * __fastcall FUN_0041d8d0(undefined2 *param_1)

{
  param_1[8] = 1;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined4 *)(param_1 + 0x8a) = 0;
  memset(param_1 + 10,0,0x100);
  *(undefined4 *)(param_1 + 0x9a) = 0x3d924925;
  *(undefined1 *)(param_1 + 0x9c) = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined4 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa2) = 0xffffffff;
  return param_1;
}


/* FUN_004cd8f0 @ 004cd8f0  kind=gamemisc  attributed-by=role:wrapper  size=69 */

void __fastcall FUN_004cd8f0(int param_1)

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


/* FUN_004ce2d0 @ 004ce2d0  kind=gamemisc  attributed-by=role:wrapper  size=64 */

ulonglong * FUN_004ce2d0(ulonglong *param_1)

{
  ulonglong uVar1;
  
  uVar1 = FUN_0054a946();
  *param_1 = uVar1;
  return param_1;
}


/* FUN_004ce990 @ 004ce990  kind=gamemisc  attributed-by=role:wrapper  size=89 */

void __fastcall FUN_004ce990(int param_1)

{
  if ((*(byte *)(param_1 + 0x3c) & 1) != 0) {
    operator_delete((void *)**(undefined4 **)(param_1 + 0xc));
  }
  **(undefined4 **)(param_1 + 0xc) = 0;
  **(undefined4 **)(param_1 + 0x1c) = 0;
  **(undefined4 **)(param_1 + 0x2c) = 0;
  **(undefined4 **)(param_1 + 0x10) = 0;
  **(undefined4 **)(param_1 + 0x20) = 0;
  **(undefined4 **)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x3c) = *(uint *)(param_1 + 0x3c) & 0xfffffffe;
  *(undefined4 *)(param_1 + 0x38) = 0;
  return;
}


/* FUN_004d6620 @ 004d6620  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_004d6620(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_0052dfb0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004d9b70 @ 004d9b70  kind=gamemisc  attributed-by=role:wrapper  size=50 */

int FUN_004d9b70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00407be0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
  }
  return iVar1;
}


/* FUN_004e14e0 @ 004e14e0  kind=gamemisc  attributed-by=role:wrapper  size=58 */

undefined4 * __thiscall FUN_004e14e0(void *this,uint *param_1)

{
  undefined8 uVar1;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x10000,0);
  *(int *)this = (int)uVar1;
  uVar1 = __alldiv(param_1[2],param_1[3],0x10000,0);
  *(int *)((int)this + 4) = (int)uVar1;
  return this;
}


/* FUN_004e2110 @ 004e2110  kind=gamemisc  attributed-by=role:wrapper  size=119 */

undefined4 * __fastcall FUN_004e2110(undefined4 *param_1)

{
  undefined4 uVar1;
  
  FUN_004e2190(param_1);
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  uVar1 = FUN_00407b30();
  param_1[0x1e] = uVar1;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  return param_1;
}


/* FUN_004f3b20 @ 004f3b20  kind=gamemisc  attributed-by=role:wrapper  size=52 */

undefined4 * __thiscall FUN_004f3b20(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004f7ba0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar1[6] = param_1[2];
  }
  return puVar1;
}


/* FUN_004f3b60 @ 004f3b60  kind=gamemisc  attributed-by=role:wrapper  size=58 */

undefined4 * __thiscall FUN_004f3b60(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = FUN_004f7be0(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    puVar1[4] = *param_1;
    puVar1[5] = param_1[1];
    puVar1[6] = param_1[2];
    puVar1[7] = param_1[3];
  }
  return puVar1;
}


/* FUN_004f7710 @ 004f7710  kind=gamemisc  attributed-by=role:wrapper  size=36 */

void __fastcall FUN_004f7710(undefined4 *param_1)

{
  undefined4 *local_8;
  
  local_8 = param_1;
  FUN_004fc060(param_1,&local_8,*(int **)*param_1,(int *)*param_1);
  operator_delete((void *)*param_1);
  return;
}


/* FUN_004f7740 @ 004f7740  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void __fastcall FUN_004f7740(undefined4 *param_1)

{
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    FUN_004f3bf0((undefined4 *)*param_1,(undefined4 *)param_1[1]);
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}


/* FUN_004fc100 @ 004fc100  kind=gamemisc  attributed-by=role:wrapper  size=50 */

float10 __thiscall FUN_004fc100(void *param_1,float param_2,uint param_3,int param_4)

{
  int iVar1;
  float10 fVar2;
  
  iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_4);
  if (iVar1 != 0) {
    return (float10)*(float *)(iVar1 + 4);
  }
  fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
  return fVar2;
}


/* FUN_005283b0 @ 005283b0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_005283b0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_0052df40(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0xaaaaaa9) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00528400 @ 00528400  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void __thiscall FUN_00528400(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_00420100(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x9249248) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0052df40 @ 0052df40  kind=gamemisc  attributed-by=role:wrapper  size=58 */

int FUN_0052df40(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004268f0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
  }
  return iVar1;
}


/* FUN_0052dfb0 @ 0052dfb0  kind=gamemisc  attributed-by=role:wrapper  size=32 */

void FUN_0052dfb0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004ce660(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
  }
  return;
}


/* FUN_0054ae15 @ 0054ae15  kind=gamemisc  attributed-by=role:wrapper  size=16 */

void FUN_0054ae15(void)

{
  int in_EAX;
  uint unaff_EBX;
  int unaff_EBP;
  void *unaff_ESI;
  int unaff_EDI;
  
  if (in_EAX == 0) {
    __ArrayUnwind(unaff_ESI,unaff_EBX,unaff_EDI,*(_func_void_void_ptr **)(unaff_EBP + 0x14));
  }
  return;
}


