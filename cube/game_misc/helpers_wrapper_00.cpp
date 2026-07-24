// helpers_wrapper_00 (game_misc) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper_00.h"

/* FUN_00402210 @ 00402210  kind=gamemisc  attributed-by=role:wrapper  size=89 */

void FUN_00402210(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1200;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00402370(*in_ECX,param_1,param_2,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_00402280 @ 00402280  kind=gamemisc  attributed-by=role:wrapper  size=89 */

void FUN_00402280(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1220;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  FUN_00402500(*in_ECX,param_1,param_2,param_2);
  ExceptionList = local_10;
  return;
}


/* FUN_00403ee0 @ 00403ee0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00403ee0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0040c790(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00405470 @ 00405470  kind=gamemisc  attributed-by=role:wrapper  size=53 */

void FUN_00405470(size_t param_1,char *param_2)

{
  void *_Dst;
  char cVar1;
  undefined4 *in_ECX;
  
  cVar1 = FUN_0064e310(param_1);
  if (cVar1 != '\0') {
    _Dst = (void *)*in_ECX;
    memset(_Dst,(int)*param_2,param_1);
    in_ECX[1] = (int)_Dst + param_1;
  }
  return;
}


/* FUN_00405810 @ 00405810  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_00405810(void *param_1)

{
  if (0xf < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 0xf;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined1 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00406d50 @ 00406d50  kind=gamemisc  attributed-by=role:wrapper  size=101 */

undefined4 FUN_00406d50(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x38);
  param_1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc - param_2;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar3 + 0x3c) = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return 0;
}


/* FUN_00406dc0 @ 00406dc0  kind=gamemisc  attributed-by=role:wrapper  size=107 */

undefined4 FUN_00406dc0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x38);
  param_1 = ((*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc - param_2) + DAT_0076af04;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar3 + 0x3c) = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return 0;
}


/* FUN_00406ec0 @ 00406ec0  kind=gamemisc  attributed-by=role:wrapper  size=105 */

undefined4 FUN_00406ec0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_2 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc - param_2;
  iVar1 = *(int *)(param_1 + 0x38);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_2);
  if (*(int *)(param_1 + 0x3c) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x3c) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return 0;
}


/* FUN_00407510 @ 00407510  kind=gamemisc  attributed-by=role:wrapper  size=91 */

undefined4 FUN_00407510(int param_1,int param_2)

{
  param_2 = param_2 / DAT_00765010;
  if (param_2 < 0) {
    FUN_0040d910(*(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc);
    return 0;
  }
  FUN_0040d910(*(int *)(param_1 + 0x2c) +
               (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  return 0;
}


/* FUN_00407620 @ 00407620  kind=gamemisc  attributed-by=role:wrapper  size=91 */

int FUN_00407620(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_0040d910(*(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc);
    return DAT_00765008 + -0xd;
  }
  FUN_0040d910(*(int *)(param_1 + 0x2c) +
               (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  return DAT_00765008 + -0xd;
}


/* FUN_00407680 @ 00407680  kind=gamemisc  attributed-by=role:wrapper  size=79 */

undefined4 FUN_00407680(int param_1,int param_2)

{
  if (param_2 < 0) {
    FUN_0040d910(*(int *)(param_1 + 0x2c) + (param_2 + 1) * -0xc);
    return 0;
  }
  FUN_0040d910(*(int *)(param_1 + 0x2c) +
               (*(int *)(*(int *)(*(int *)(param_1 + 0x38) + 4) + 8) + param_2) * 0xc);
  return 0;
}


/* FUN_00408160 @ 00408160  kind=gamemisc  attributed-by=role:wrapper  size=65 */

void FUN_00408160(undefined4 param_1,uint param_2)

{
  __security_check_cookie
            (DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc,
             (int)((param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f)) % 5,param_2,param_2,
             param_2,param_2,param_2);
  return;
}


/* FUN_0040bac0 @ 0040bac0  kind=gamemisc  attributed-by=role:wrapper  size=105 */

void FUN_0040bac0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1;
  iVar1 = *(int *)(param_1 + 0x38);
  param_1 = (*(int *)(param_1 + 0x30) - *(int *)(param_1 + 0x2c)) / 0xc + param_2 * param_3;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  iVar2 = *(int *)(iVar3 + 0x3c);
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(iVar3 + 0x3c) = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  return;
}


/* FUN_0040bb30 @ 0040bb30  kind=gamemisc  attributed-by=role:wrapper  size=81 */

undefined4 * FUN_0040bb30(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_3;
  if (param_3 == 0) {
    FUN_0040d800(param_1);
    return param_1;
  }
  param_3 = param_3 & 0xffffff;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  FUN_00405470(uVar1,(int)&param_3 + 3);
  return param_1;
}


/* FUN_0040bfc0 @ 0040bfc0  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void * FUN_0040bfc0(uint param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)0x0;
  if ((param_1 != 0) && (pvVar1 = operator_new(param_1), pvVar1 == (void *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  return pvVar1;
}


/* FUN_0040e420 @ 0040e420  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 FUN_0040e420(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_cos_precise();
  return (float10)(float)dVar1;
}


/* FUN_00412220 @ 00412220  kind=gamemisc  attributed-by=role:wrapper  size=56 */

void FUN_00412220(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  undefined8 uVar3;
  
  uVar3 = FUN_0068d946();
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  *param_1 = uVar1 - (uint)uVar3;
  param_1[1] = (uVar2 - (int)((ulonglong)uVar3 >> 0x20)) - (uint)(uVar1 < (uint)uVar3);
  return;
}


/* FUN_004122e0 @ 004122e0  kind=gamemisc  attributed-by=role:wrapper  size=52 */

void FUN_004122e0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  undefined8 uVar3;
  
  uVar3 = FUN_0068d946();
  uVar1 = *in_ECX;
  uVar2 = in_ECX[1];
  *param_1 = (uint)uVar3 + *in_ECX;
  param_1[1] = (int)((ulonglong)uVar3 >> 0x20) + uVar2 + (uint)CARRY4((uint)uVar3,uVar1);
  return;
}


/* FUN_00424b50 @ 00424b50  kind=gamemisc  attributed-by=role:wrapper  size=30 */

float10 FUN_00424b50(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_sin_precise();
  return (float10)(float)dVar1;
}


/* FUN_0042b810 @ 0042b810  kind=gamemisc  attributed-by=role:wrapper  size=70 */

void FUN_0042b810(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  piVar1 = (int *)(in_ECX + 400);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(in_ECX + 400) = 3;
  }
  FUN_0042c080(0);
  return;
}


/* FUN_0042b860 @ 0042b860  kind=gamemisc  attributed-by=role:wrapper  size=77 */

void FUN_0042b860(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(int *)(in_ECX + 400) = *(int *)(in_ECX + 400) + 1;
  if (3 < *(int *)(in_ECX + 400)) {
    *(undefined4 *)(in_ECX + 400) = 0;
  }
  FUN_0042c080(0);
  return;
}


/* FUN_0042b8b0 @ 0042b8b0  kind=gamemisc  attributed-by=role:wrapper  size=91 */

void FUN_0042b8b0(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(undefined1 *)(in_ECX + 0x1a0) = *(undefined1 *)(in_ECX + 0x1a3);
  *(undefined1 *)(in_ECX + 0x1a1) = *(undefined1 *)(in_ECX + 0x1a4);
  *(undefined1 *)(in_ECX + 0x1a2) = *(undefined1 *)(in_ECX + 0x1a5);
  FUN_0042c080(0);
  return;
}


/* FUN_0042b910 @ 0042b910  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_0042b910(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(int *)(in_ECX + 0x198) = *(int *)(in_ECX + 0x198) + -1;
  FUN_0042c080(0);
  return;
}


/* FUN_0042b950 @ 0042b950  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_0042b950(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(int *)(in_ECX + 0x198) = *(int *)(in_ECX + 0x198) + 1;
  FUN_0042c080(0);
  return;
}


/* FUN_0042b990 @ 0042b990  kind=gamemisc  attributed-by=role:wrapper  size=77 */

void FUN_0042b990(void)

{
  uint uVar1;
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  uVar1 = *(int *)(in_ECX + 0x194) + 1U & 0x80000001;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffe) + 1;
  }
  *(uint *)(in_ECX + 0x194) = uVar1;
  FUN_0042c080(0);
  return;
}


/* FUN_0042b9e0 @ 0042b9e0  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_0042b9e0(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(int *)(in_ECX + 0x19c) = *(int *)(in_ECX + 0x19c) + -1;
  FUN_0042c080(0);
  return;
}


/* FUN_0042ba20 @ 0042ba20  kind=gamemisc  attributed-by=role:wrapper  size=58 */

void FUN_0042ba20(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(int *)(in_ECX + 0x19c) = *(int *)(in_ECX + 0x19c) + 1;
  FUN_0042c080(0);
  return;
}


/* FUN_0042ba60 @ 0042ba60  kind=gamemisc  attributed-by=role:wrapper  size=70 */

void FUN_0042ba60(void)

{
  int *piVar1;
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  piVar1 = (int *)(in_ECX + 0x18c);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 < 0) {
    *(undefined4 *)(in_ECX + 0x18c) = 7;
  }
  FUN_0042c080(0);
  return;
}


/* FUN_0042bab0 @ 0042bab0  kind=gamemisc  attributed-by=role:wrapper  size=77 */

void FUN_0042bab0(void)

{
  int in_ECX;
  
  FUN_00484350(0x55,*(int *)(in_ECX + 0x160) + 0x140,0x3f800000,0x3f800000);
  *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x18c) + 1;
  if (7 < *(int *)(in_ECX + 0x18c)) {
    *(undefined4 *)(in_ECX + 0x18c) = 0;
  }
  FUN_0042c080(0);
  return;
}


/* FUN_0042c900 @ 0042c900  kind=gamemisc  attributed-by=role:wrapper  size=120 */

void FUN_0042c900(undefined4 param_1,undefined4 param_2)

{
  undefined8 *in_ECX;
  undefined8 uVar1;
  
  uVar1 = __allmul(*(undefined4 *)in_ECX,*(undefined4 *)((int)in_ECX + 4),param_1,param_2);
  uVar1 = __alldiv(uVar1,0x10000,0);
  *in_ECX = uVar1;
  uVar1 = __allmul(*(undefined4 *)(in_ECX + 1),*(undefined4 *)((int)in_ECX + 0xc),param_1,param_2);
  uVar1 = __alldiv(uVar1,0x10000,0);
  in_ECX[1] = uVar1;
  uVar1 = __allmul(*(undefined4 *)(in_ECX + 2),*(undefined4 *)((int)in_ECX + 0x14),param_1,param_2);
  uVar1 = __alldiv(uVar1,0x10000,0);
  in_ECX[2] = uVar1;
  return;
}


/* FUN_0042f3e0 @ 0042f3e0  kind=gamemisc  attributed-by=role:wrapper  size=74 */

void FUN_0042f3e0(void)

{
  undefined2 *in_ECX;
  
  in_ECX[8] = 1;
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 2) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined4 *)(in_ECX + 0x8a) = 0;
  memset(in_ECX + 10,0,0x100);
  return;
}


/* FUN_00439510 @ 00439510  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00439510(void)

{
  undefined4 *in_ECX;
  
  FUN_00439680();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0043b5e0 @ 0043b5e0  kind=gamemisc  attributed-by=role:wrapper  size=24 */

void FUN_0043b5e0(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  return;
}


/* FUN_0043c0a0 @ 0043c0a0  kind=gamemisc  attributed-by=role:wrapper  size=81 */

void FUN_0043c0a0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  *(undefined2 *)(in_ECX + 5) = 1;
  *(undefined2 *)(in_ECX + 1) = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  *(undefined1 *)((int)in_ECX + 0x12) = 0;
  in_ECX[0x46] = 0;
  memset(in_ECX + 6,0,0x100);
  return;
}


/* FUN_0043c380 @ 0043c380  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_0043c380(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0043f040(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0043c3b0 @ 0043c3b0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_0043c3b0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0043f3b0(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0043c3e0 @ 0043c3e0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_0043c3e0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0067eb10(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00444860 @ 00444860  kind=gamemisc  attributed-by=role:wrapper  size=88 */

float10 FUN_00444860(undefined4 param_1)

{
  int in_ECX;
  float10 fVar1;
  
  if ((*(char *)(in_ECX + 0x60) != '\x05') && (*(char *)(in_ECX + 0x60) != '\x03')) {
    switch(param_1) {
    case 1:
    case 2:
    case 9:
      fVar1 = (float10)FUN_00447700();
      return (float10)(6.0 / (float)fVar1);
    case 3:
    case 4:
    case 0x3e:
      fVar1 = (float10)FUN_00447700();
      return (float10)(3.0 / (float)fVar1);
    case 5:
      return (float10)4.0;
    case 6:
    case 7:
    case 0x12:
    case 0x13:
      fVar1 = (float10)FUN_00447700();
      return (float10)(3.0 / (float)fVar1);
    default:
      fVar1 = (float10)FUN_00447700();
      return (float10)(2.0 / (float)fVar1);
    case 0xb:
    case 0x57:
      return (float10)10.0;
    case 0xd:
    case 0xe:
    case 0xf:
      fVar1 = (float10)FUN_00447700();
      return (float10)(6.0 / (float)fVar1);
    case 0x11:
    case 0x14:
      return (float10)6.0;
    case 0x15:
      fVar1 = (float10)FUN_0043ed60(0x15,0xffffffff);
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
      fVar1 = (float10)FUN_00447700();
      return (float10)(6.0 / (float)fVar1);
    case 0x41:
    case 0x42:
      fVar1 = (float10)FUN_00447700();
      return (float10)(10.0 / (float)fVar1);
    case 0x58:
      fVar1 = (float10)FUN_0043ed60(0x15,0xffffffff);
      return (float10)((float)fVar1 * 30.0 + 5.0);
    }
  }
  return (float10)0;
}


/* FUN_00448010 @ 00448010  kind=gamemisc  attributed-by=role:wrapper  size=96 */

void FUN_00448010(undefined4 *param_1)

{
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = *param_1;
  local_14 = param_1[1];
  local_10 = param_1[2];
  local_c = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x70),&local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00448100 @ 00448100  kind=gamemisc  attributed-by=role:wrapper  size=108 */

void FUN_00448100(float param_1)

{
  int in_ECX;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0.0 < param_1) {
    local_18[0] = 1.0 / param_1;
    local_18[1] = 0.0;
    local_18[2] = 0.0;
    local_18[3] = 0.0;
    (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
              (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x60),local_18,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0044a9f0 @ 0044a9f0  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_0044a9f0(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x18)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}


/* FUN_0044b7f0 @ 0044b7f0  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_0044b7f0(void *param_1)

{
  if (0xf < *(uint *)((int)param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x14));
  }
  *(undefined4 *)((int)param_1 + 0x28) = 0xf;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined1 *)((int)param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_004514b0 @ 004514b0  kind=gamemisc  attributed-by=role:wrapper  size=40 */

bool FUN_004514b0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar2 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),param_2,*puVar1);
  return iVar2 != 0;
}


/* FUN_00452260 @ 00452260  kind=gamemisc  attributed-by=role:wrapper  size=58 */

int FUN_00452260(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00630a40();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0040eaf0(param_1);
    FUN_0040eaf0(param_1 + 0x18);
  }
  return iVar1;
}


/* FUN_004522a0 @ 004522a0  kind=gamemisc  attributed-by=role:wrapper  size=52 */

int FUN_004522a0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046d910();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    *(undefined4 *)(iVar1 + 0x18) = param_1[2];
  }
  return iVar1;
}


/* FUN_004522e0 @ 004522e0  kind=gamemisc  attributed-by=role:wrapper  size=58 */

int FUN_004522e0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046d950();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    FUN_00466050(param_1 + 2);
  }
  return iVar1;
}


/* FUN_004578a0 @ 004578a0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_004578a0(int param_1)

{
  if (*(void **)(param_1 + 0x11c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x11c));
  }
  return;
}


/* FUN_004578e0 @ 004578e0  kind=gamemisc  attributed-by=role:wrapper  size=21 */

void FUN_004578e0(undefined4 *param_1)

{
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*param_1);
}


/* FUN_00457900 @ 00457900  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_00457900(undefined4 *param_1)

{
  if (7 < (uint)param_1[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_00457ae0 @ 00457ae0  kind=gamemisc  attributed-by=role:wrapper  size=76 */

void FUN_00457ae0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_00453ff0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_00453ff0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00457b80 @ 00457b80  kind=gamemisc  attributed-by=role:wrapper  size=76 */

void FUN_00457b80(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  if (param_2 == *(int *)*in_ECX) {
    FUN_004540c0(param_2,param_3,param_4,param_4);
    *param_1 = *(undefined4 *)*in_ECX;
    return;
  }
  puVar1 = *(undefined4 **)(param_2 + 4);
  FUN_004540c0(param_2,param_3,param_4,param_4);
  *param_1 = *puVar1;
  return;
}


/* FUN_00458df0 @ 00458df0  kind=gamemisc  attributed-by=role:wrapper  size=127 */

void FUN_00458df0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3938;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d850(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_004544d0(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00458f30 @ 00458f30  kind=gamemisc  attributed-by=role:wrapper  size=127 */

void FUN_00458f30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3998;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d5d0(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00453ff0(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00458fd0 @ 00458fd0  kind=gamemisc  attributed-by=role:wrapper  size=127 */

void FUN_00458fd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e39c8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_0046d810(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_004540c0(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00465ae0 @ 00465ae0  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void FUN_00465ae0(int param_1)

{
  int in_ECX;
  
  FUN_004593e0(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_0040ee70(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  return;
}


/* FUN_00465b30 @ 00465b30  kind=gamemisc  attributed-by=role:wrapper  size=38 */

void FUN_00465b30(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  uVar1 = FUN_0046d8d0(0,0);
  *(undefined4 *)(in_ECX + 8) = uVar1;
  return;
}


/* FUN_00465b60 @ 00465b60  kind=gamemisc  attributed-by=role:wrapper  size=75 */

void FUN_00465b60(void)

{
  int in_ECX;
  
  *(undefined2 *)(in_ECX + 0x18) = 1;
  *(undefined2 *)(in_ECX + 8) = 0;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined2 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 0x16) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0;
  memset((void *)(in_ECX + 0x1c),0,0x100);
  return;
}


/* FUN_00465fd0 @ 00465fd0  kind=gamemisc  attributed-by=role:wrapper  size=113 */

void FUN_00465fd0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e4fb8;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar2 = FUN_0046d520(uVar1);
  *in_ECX = uVar2;
  local_8 = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  uVar2 = FUN_00630a10();
  in_ECX[2] = uVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_00466ab0 @ 00466ab0  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00466ab0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046f8b0();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00466ad0 @ 00466ad0  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00466ad0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046f910();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00466af0 @ 00466af0  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00466af0(void)

{
  undefined4 *in_ECX;
  
  FUN_0046f9f0();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00466b10 @ 00466b10  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00466b10(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_004777f0(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00466b90 @ 00466b90  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_00466b90(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_00452600(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_00467ab0 @ 00467ab0  kind=gamemisc  attributed-by=role:wrapper  size=24 */

void FUN_00467ab0(void)

{
  int in_ECX;
  
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 8));
}


/* FUN_00467af0 @ 00467af0  kind=gamemisc  attributed-by=role:wrapper  size=34 */

void FUN_00467af0(void)

{
  int in_ECX;
  undefined1 local_8 [4];
  
  FUN_004777f0(local_8,**(undefined4 **)(in_ECX + 8),*(undefined4 **)(in_ECX + 8));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 8));
}


/* FUN_00467b40 @ 00467b40  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00467b40(void)

{
  undefined4 *in_ECX;
  
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00467c70 @ 00467c70  kind=gamemisc  attributed-by=role:wrapper  size=48 */

void FUN_00467c70(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 0x60);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x60) + 4) = *(int *)(in_ECX + 0x60);
  *(undefined4 *)(in_ECX + 100) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x60)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x60));
}


/* FUN_00468e70 @ 00468e70  kind=gamemisc  attributed-by=role:wrapper  size=64 */

undefined4 * FUN_00468e70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[5];
  FUN_0042c900(0xffff0000,0xffffffff);
  return param_1;
}


/* FUN_0046dc50 @ 0046dc50  kind=gamemisc  attributed-by=role:wrapper  size=49 */

void FUN_0046dc50(int param_1)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 0x10);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(param_1 + 0x10) + 4) = *(int *)(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (pvVar2 != *(void **)(param_1 + 0x10)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(param_1 + 0x10));
}


/* FUN_0046eac0 @ 0046eac0  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_0046eac0(int *param_1)

{
  int *in_ECX;
  
  if (param_1 != (int *)*in_ECX) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
    FUN_0046dc50(param_1);
    in_ECX[1] = in_ECX[1] + -1;
  }
  return;
}


/* FUN_0046eaf0 @ 0046eaf0  kind=gamemisc  attributed-by=role:wrapper  size=41 */

void FUN_0046eaf0(int *param_1)

{
  int *in_ECX;
  
  if (param_1 != (int *)*in_ECX) {
    *(int *)param_1[1] = *param_1;
    *(int *)(*param_1 + 4) = param_1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}


/* FUN_0046f450 @ 0046f450  kind=gamemisc  attributed-by=role:wrapper  size=40 */

void FUN_0046f450(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x800600));
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8005e8));
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x800618));
  return;
}


/* FUN_00477280 @ 00477280  kind=gamemisc  attributed-by=role:wrapper  size=40 */

void FUN_00477280(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x800618));
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8005e8));
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x800600));
  return;
}


/* FUN_004815c0 @ 004815c0  kind=gamemisc  attributed-by=role:wrapper  size=23 */

void FUN_004815c0(int param_1)

{
  int in_ECX;
  
  if (param_1 == *(int *)(in_ECX + 0x80095c)) {
    FUN_004a2300();
  }
  return;
}


/* FUN_00486050 @ 00486050  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_00486050(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)((int *)*in_ECX)[1];
  if (piVar1 != (int *)*in_ECX) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  return;
}


/* FUN_00486150 @ 00486150  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_00486150(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451d00(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486240 @ 00486240  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_00486240(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451e80(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x9249248) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486380 @ 00486380  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_00486380(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451cc0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xdd67c7) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00486560 @ 00486560  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_00486560(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_004cb5a0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xffffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00487ff0 @ 00487ff0  kind=gamemisc  attributed-by=role:wrapper  size=55 */

undefined1 * FUN_00487ff0(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_0040c0a0(in_ECX,param_2,param_3);
  return param_1;
}


/* FUN_00488bd0 @ 00488bd0  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_00488bd0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008c0) + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(uint *)(iVar1 + iVar2 * 4) = (uint)(*(int *)(iVar1 + iVar2 * 4) == 0);
  FUN_004a14c0();
  return;
}


/* FUN_00488c00 @ 00488c00  kind=gamemisc  attributed-by=role:wrapper  size=111 */

void FUN_00488c00(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008bc) + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(uint *)(iVar1 + iVar2 * 4) = (uint)(*(int *)(iVar1 + iVar2 * 4) == 0);
  FUN_004c6350();
  FUN_004c64c0();
  iVar1 = *(int *)(*(int *)(in_ECX + 0x8008bc) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x800910) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  }
  return;
}


/* FUN_0049be3b @ 0049be3b  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_0049be3b(void)

{
  int unaff_EDI;
  
  *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
  FUN_0043caa0(0xffffffff);
  FUN_0049bf44();
  return;
}


/* FUN_0049be57 @ 0049be57  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_0049be57(void)

{
  int unaff_EDI;
  
  *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
  FUN_0043caa0(0xffffffff);
  FUN_0049bf44();
  return;
}


/* FUN_004c76a0 @ 004c76a0  kind=gamemisc  attributed-by=role:wrapper  size=61 */

int FUN_004c76a0(void)

{
  int in_ECX;
  float10 fVar1;
  
  fVar1 = (float10)FUN_0043ca60((float)(int)*(short *)(in_ECX + 0x10));
  return (int)((float)fVar1 * 100.0 + 1.0);
}


/* FUN_004c9550 @ 004c9550  kind=gamemisc  attributed-by=role:wrapper  size=36 */

int FUN_004c9550(FILE *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int unaff_EBP;
  
  if (param_1 == (FILE *)0x0) {
    return -1;
  }
  iVar1 = _fseeki64(param_1,CONCAT44(param_4,param_3),unaff_EBP);
  return iVar1;
}


/* FUN_004c9580 @ 004c9580  kind=gamemisc  attributed-by=role:wrapper  size=32 */

void FUN_004c9580(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004c9640();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
  }
  return;
}


/* FUN_004cb290 @ 004cb290  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_004cb290(void)

{
  ios_base *piVar1;
  int in_ECX;
  
  piVar1 = (ios_base *)(in_ECX + 0x60);
  FUN_004cb220(piVar1);
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}


/* FUN_004d4650 @ 004d4650  kind=gamemisc  attributed-by=role:wrapper  size=55 */

void FUN_004d4650(void)

{
  int iVar1;
  int in_ECX;
  
  FUN_0046f390(in_ECX + 0x1d4);
  iVar1 = FUN_0062b400();
  iVar1 = *(int *)(*(int *)(iVar1 + 0x148) + 0x3c);
  *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  return;
}


/* FUN_004d94e0 @ 004d94e0  kind=gamemisc  attributed-by=role:wrapper  size=60 */

void FUN_004d94e0(int *param_1,int param_2)

{
  void *_Src;
  int iVar1;
  int *in_ECX;
  
  _Src = (void *)*in_ECX;
  if (_Src != (void *)0x0) {
    memmove((void *)((int)_Src + in_ECX[1] * -2),_Src,*param_1 - (int)_Src);
  }
  *param_1 = *param_1 + param_2 * 2;
  iVar1 = *param_1;
  in_ECX[1] = in_ECX[1] + param_2;
  *in_ECX = iVar1;
  return;
}


/* FUN_004d9ae0 @ 004d9ae0  kind=gamemisc  attributed-by=role:wrapper  size=39 */

int FUN_004d9ae0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004da730();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0040eaf0(param_1);
  }
  return iVar1;
}


/* FUN_004e29a0 @ 004e29a0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_004e29a0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_004e3840(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_004e29d0 @ 004e29d0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_004e29d0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_004e3bb0(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_004e2a70 @ 004e2a70  kind=gamemisc  attributed-by=role:wrapper  size=39 */

void FUN_004e2a70(void)

{
  int in_ECX;
  
  if (7 < *(uint *)(in_ECX + 0x18)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 7;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined2 *)(in_ECX + 4) = 0;
  return;
}


/* FUN_004e2aa0 @ 004e2aa0  kind=gamemisc  attributed-by=role:wrapper  size=104 */

void FUN_004e2aa0(void)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9878;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)(in_ECX + 6));
  if (7 < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[5] = 7;
  in_ECX[4] = 0;
  *(undefined2 *)in_ECX = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_004e34f0 @ 004e34f0  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_004e34f0(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x28)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x14));
  }
  *(undefined4 *)((int)param_1 + 0x28) = 7;
  *(undefined4 *)((int)param_1 + 0x24) = 0;
  *(undefined2 *)((int)param_1 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_004e3530 @ 004e3530  kind=gamemisc  attributed-by=role:wrapper  size=21 */

void FUN_004e3530(void *param_1)

{
  FUN_004e2a00();
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_004e3550 @ 004e3550  kind=gamemisc  attributed-by=role:wrapper  size=98 */

void FUN_004e3550(void *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9a58;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  cube::QuestText::~QuestText((QuestText *)((int)param_1 + 0x28));
  if (7 < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_004e5e70 @ 004e5e70  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_004e5e70(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_00452650(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_004e6af0 @ 004e6af0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_004e6af0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_004e6e60(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_004ec0d0 @ 004ec0d0  kind=gamemisc  attributed-by=role:wrapper  size=48 */

void FUN_004ec0d0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  puVar1 = *(undefined4 **)(in_ECX + 4);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 4) + 4) = *(int *)(in_ECX + 4);
  *(undefined4 *)(in_ECX + 8) = 0;
  if (pvVar2 != *(void **)(in_ECX + 4)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 4));
}


/* FUN_0051cf90 @ 0051cf90  kind=gamemisc  attributed-by=role:wrapper  size=49 */

void FUN_0051cf90(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0055ddd0(*param_3,param_3[1],*(undefined4 *)(param_1 + 0x34));
  if (iVar1 != 0) {
    FUN_00574570(param_1 + 8,*param_3);
  }
  return;
}


/* FUN_0051cfd0 @ 0051cfd0  kind=gamemisc  attributed-by=role:wrapper  size=63 */

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


/* FUN_0051d070 @ 0051d070  kind=gamemisc  attributed-by=role:wrapper  size=63 */

void FUN_0051d070(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575040(param_1 + 8,"3.7.15.2",0xffffffff,1,0);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d1d0 @ 0051d1d0  kind=gamemisc  attributed-by=role:wrapper  size=63 */

void FUN_0051d1d0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00575040(param_1 + 8,&DAT_00719e18,0xffffffff,1,0);
  if (iVar1 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_0051d210 @ 0051d210  kind=gamemisc  attributed-by=role:wrapper  size=90 */

void FUN_0051d210(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = param_2 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_0051d350 @ 0051d350  kind=gamemisc  attributed-by=role:wrapper  size=63 */

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


/* FUN_0051d390 @ 0051d390  kind=gamemisc  attributed-by=role:wrapper  size=63 */

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


/* FUN_0051d4d0 @ 0051d4d0  kind=gamemisc  attributed-by=role:wrapper  size=63 */

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


/* FUN_00522640 @ 00522640  kind=gamemisc  attributed-by=role:wrapper  size=23 */

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


/* FUN_00522c50 @ 00522c50  kind=gamemisc  attributed-by=role:wrapper  size=66 */

undefined4 FUN_00522c50(undefined4 param_1,longlong *param_2)

{
  longlong lVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  (*(code *)PTR_GetSystemTimeAsFileTime_007671ec)(&local_c);
  lVar1 = __alldiv(local_c,local_8,10000,0);
  *param_2 = lVar1 + 0xb5310d9cba00;
  return 0;
}


/* FUN_005231c0 @ 005231c0  kind=gamemisc  attributed-by=role:wrapper  size=96 */

undefined4 FUN_005231c0(undefined4 param_1,double *param_2)

{
  longlong local_14;
  undefined4 local_c;
  undefined4 local_8;
  
  (*(code *)PTR_GetSystemTimeAsFileTime_007671ec)(&local_c);
  local_14 = __alldiv(local_c,local_8,10000,0);
  local_14 = local_14 + 0xb5310d9cba00;
  *param_2 = (double)local_14 / 86400000.0;
  return 0;
}


/* FUN_00523260 @ 00523260  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void FUN_00523260(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)PTR_GetLastError_007671bc)(param_2,param_3);
  FUN_0053a8f0(uVar1);
  return;
}


/* FUN_00524160 @ 00524160  kind=gamemisc  attributed-by=role:wrapper  size=22 */

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


/* FUN_00524180 @ 00524180  kind=gamemisc  attributed-by=role:wrapper  size=22 */

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


/* FUN_005244e0 @ 005244e0  kind=gamemisc  attributed-by=role:wrapper  size=86 */

void FUN_005244e0(int param_1,undefined4 param_2,int *param_3)

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
  iVar2 = FUN_00575040(param_1 + 8,pcVar1,0xffffffff,1,0);
  if (iVar2 == 0x12) {
    *(undefined4 *)(param_1 + 0x38) = 0x12;
    FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  }
  return;
}


/* FUN_005267c0 @ 005267c0  kind=gamemisc  attributed-by=role:wrapper  size=70 */

uint * FUN_005267c0(int param_1)

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
  FUN_00525a30(7,"failed to allocate %u bytes of memory",uVar2);
  return (uint *)0x0;
}


/* FUN_00526810 @ 00526810  kind=gamemisc  attributed-by=role:wrapper  size=88 */

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


/* FUN_00526b00 @ 00526b00  kind=gamemisc  attributed-by=role:wrapper  size=51 */

int FUN_00526b00(int *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0057d290(param_1,param_2);
  if ((iVar1 == 0) && (*(int *)(*param_1 + 0xc) != 0)) {
    (*DAT_00766638)(*(int *)(*param_1 + 0xc));
  }
  return iVar1;
}


/* FUN_00527f90 @ 00527f90  kind=gamemisc  attributed-by=role:wrapper  size=35 */

undefined1 FUN_00527f90(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = FUN_005326d0(param_1,param_2);
  uVar1 = *(undefined1 *)(iVar2 + 0x1e);
  FUN_00532670(param_1);
  return uVar1;
}


/* FUN_00527fc0 @ 00527fc0  kind=gamemisc  attributed-by=role:wrapper  size=98 */

void FUN_00527fc0(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int *piVar3;
  
  piVar3 = (int *)(param_1 + 8);
  uVar1 = *(undefined4 *)(*piVar3 + 0x20);
  uVar2 = *(undefined4 *)(*piVar3 + 0x24);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80(piVar3);
  }
  FUN_005521a0(*piVar3,*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x18) = uVar1;
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00528030 @ 00528030  kind=gamemisc  attributed-by=role:wrapper  size=64 */

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


/* FUN_005281b0 @ 005281b0  kind=gamemisc  attributed-by=role:wrapper  size=96 */

void FUN_005281b0(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *(int *)(*piVar2 + 0x48);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80(piVar2);
  }
  FUN_005521a0(*piVar2,*(undefined4 *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00528270 @ 00528270  kind=gamemisc  attributed-by=role:wrapper  size=96 */

void FUN_00528270(int param_1)

{
  int iVar1;
  int *piVar2;
  
  piVar2 = (int *)(param_1 + 8);
  iVar1 = *(int *)(*piVar2 + 0x4c);
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80(piVar2);
  }
  FUN_005521a0(*piVar2,*(undefined4 *)(param_1 + 0x2c));
  *(int *)(param_1 + 0x18) = iVar1;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(int *)(param_1 + 0x1c) = iVar1 >> 0x1f;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_00528470 @ 00528470  kind=gamemisc  attributed-by=role:wrapper  size=18 */

void FUN_00528470(LPCRITICAL_SECTION param_1)

{
  DeleteCriticalSection(param_1);
  FUN_00524410();
  return;
}


/* FUN_0053c6d0 @ 0053c6d0  kind=gamemisc  attributed-by=role:wrapper  size=93 */

void FUN_0053c6d0(void)

{
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00541240 @ 00541240  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_00541240(int param_1)

{
  if ((**(char **)(param_1 + 8) != '\0') &&
     (**(char **)(param_1 + 8) = '\0', 1 < *(short *)(param_1 + 0x1a))) {
    FUN_0052e9b0();
    return;
  }
  return;
}


/* FUN_00558820 @ 00558820  kind=gamemisc  attributed-by=role:wrapper  size=104 */

undefined4 FUN_00558820(int param_1,undefined4 param_2)

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
  local_24 = 0x5367f0;
  local_c = 0;
  local_8 = 0;
  FUN_00578710(&local_24,*(undefined4 *)(param_1 + 0x10));
  if ((local_c < 1) && (local_8 != 0)) {
    return 0;
  }
  return 1;
}


/* FUN_00583cb0 @ 00583cb0  kind=gamemisc  attributed-by=role:wrapper  size=32 */

void FUN_00583cb0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d550(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
  }
  return;
}


/* FUN_00585840 @ 00585840  kind=gamemisc  attributed-by=role:wrapper  size=38 */

void FUN_00585840(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = param_1[1];
  iVar2 = *param_1;
  FUN_005870c0((iVar1 - iVar2) + 4);
  *(undefined4 *)((iVar1 - iVar2) + *param_1) = param_2;
  return;
}


/* FUN_00585880 @ 00585880  kind=gamemisc  attributed-by=role:wrapper  size=61 */

undefined1 * FUN_00585880(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00583cd0(uVar2,uVar1,param_2);
  return param_1;
}


/* FUN_0058d8f0 @ 0058d8f0  kind=gamemisc  attributed-by=role:wrapper  size=52 */

int FUN_0058d8f0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004050c0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0040eaf0(param_1);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
  }
  return iVar1;
}


/* FUN_0058e990 @ 0058e990  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_0058e990(int param_1)

{
  int iVar1;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_00639cf0(*(int *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),(int)&param_1 + 3,param_1)
    ;
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(iVar1 + 0x48));
  }
  return;
}


/* FUN_00593df0 @ 00593df0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00593df0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0059c490(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00593e50 @ 00593e50  kind=gamemisc  attributed-by=role:wrapper  size=37 */

void FUN_00593e50(void)

{
  undefined4 *in_ECX;
  
  if (7 < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[5] = 7;
  in_ECX[4] = 0;
  *(undefined2 *)in_ECX = 0;
  return;
}


/* FUN_00594760 @ 00594760  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_00594760(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x2c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
  *(undefined4 *)((int)param_1 + 0x2c) = 7;
  *(undefined4 *)((int)param_1 + 0x28) = 0;
  *(undefined2 *)((int)param_1 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_005947a0 @ 005947a0  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_005947a0(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
  *(undefined4 *)((int)param_1 + 0x24) = 7;
  *(undefined4 *)((int)param_1 + 0x20) = 0;
  *(undefined2 *)((int)param_1 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_005a7bd0 @ 005a7bd0  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void FUN_005a7bd0(void *param_1)

{
  if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_005fa4c0 @ 005fa4c0  kind=gamemisc  attributed-by=role:wrapper  size=60 */

float10 FUN_005fa4c0(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = (float10)FUN_005f8e10(param_1,param_2);
  fVar2 = 1.0 - (float)fVar1;
  if (fVar2 <= 0.0) {
    return (float10)0;
  }
  return (float10)(fVar2 * fVar2);
}


/* FUN_005fb860 @ 005fb860  kind=gamemisc  attributed-by=role:wrapper  size=17 */

void FUN_005fb860(void)

{
  undefined4 *in_ECX;
  
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_00608a20 @ 00608a20  kind=gamemisc  attributed-by=role:wrapper  size=58 */

int FUN_00608a20(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d590(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
  }
  return iVar1;
}


/* FUN_00624340 @ 00624340  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_00624340(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_0058d970(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_00627670 @ 00627670  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_00627670(void)

{
  Object *in_ECX;
  
  if ((int *)0x7 < in_ECX[2].Object_data.offset_0x4) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX[1].vftablePtr);
  }
  in_ECX[2].Object_data.offset_0x4 = (int *)0x7;
  in_ECX[2].Object_data.offset_0x0 = 0;
  *(undefined2 *)&in_ECX[1].vftablePtr = 0;
  plasma::Object::~Object(in_ECX);
  return;
}


/* FUN_0062a650 @ 0062a650  kind=gamemisc  attributed-by=role:wrapper  size=64 */

void FUN_0062a650(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_10 = param_1;
  local_c = param_2;
  FUN_006295a0(&local_10,param_3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f600 @ 0062f600  kind=gamemisc  attributed-by=role:wrapper  size=41 */

void FUN_0062f600(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062de60(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f630 @ 0062f630  kind=gamemisc  attributed-by=role:wrapper  size=41 */

void FUN_0062f630(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062b510(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00630690 @ 00630690  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00630690(void)

{
  undefined4 *in_ECX;
  
  FUN_00632640();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_006306b0 @ 006306b0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_006306b0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00633900(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00639060 @ 00639060  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00639060(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00639470(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_00639390 @ 00639390  kind=gamemisc  attributed-by=role:wrapper  size=71 */

void FUN_00639390(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x1c);
  iVar2 = FUN_004521c0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (*(int *)(in_ECX + 0x20) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x20) = *(int *)(in_ECX + 0x20) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0063a710 @ 0063a710  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void * FUN_0063a710(void *param_1,int param_2,void *param_3)

{
  size_t _Size;
  void *pvVar1;
  
  _Size = (param_2 - (int)param_1 >> 2) * 4;
  pvVar1 = memmove(param_3,param_1,_Size);
  return (void *)((int)pvVar1 + _Size);
}


/* FUN_0063de60 @ 0063de60  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_0063de60(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_00639cf0(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_0064b460 @ 0064b460  kind=gamemisc  attributed-by=role:wrapper  size=34 */

void FUN_0064b460(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0064e410();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined2 *)(iVar1 + 0xe) != (undefined2 *)0x0) {
    *(undefined2 *)(iVar1 + 0xe) = *param_1;
  }
  return;
}


/* FUN_0064d810 @ 0064d810  kind=gamemisc  attributed-by=role:wrapper  size=24 */

void FUN_0064d810(void)

{
  Attribute *in_ECX;
  
  if (in_ECX[1].vftablePtr != (Attribute_vftable *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX[1].vftablePtr);
  }
  plasma::Attribute::~Attribute(in_ECX);
  return;
}


/* FUN_0064dd20 @ 0064dd20  kind=gamemisc  attributed-by=role:wrapper  size=34 */

void FUN_0064dd20(void)

{
  int in_ECX;
  undefined1 local_8 [4];
  
  FUN_0043f040(local_8,**(undefined4 **)(in_ECX + 0x18),*(undefined4 **)(in_ECX + 0x18));
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x18));
}


/* FUN_0064f080 @ 0064f080  kind=gamemisc  attributed-by=role:wrapper  size=120 */

Button * FUN_0064f080(int param_1,undefined4 param_2,undefined4 param_3)

{
  Button *pBVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pBVar1 = operator_new(0x238);
  local_8 = 0;
  if (pBVar1 != (Button *)0x0) {
    pBVar1 = plasma::Button::Button(pBVar1,in_ECX,param_1,param_2,param_3);
    ExceptionList = local_10;
    return pBVar1;
  }
  ExceptionList = local_10;
  return (Button *)0x0;
}


/* FUN_0064f200 @ 0064f200  kind=gamemisc  attributed-by=role:wrapper  size=117 */

Edit * FUN_0064f200(int param_1,undefined4 param_2)

{
  Edit *pEVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pEVar1 = operator_new(0x17c);
  local_8 = 0;
  if (pEVar1 != (Edit *)0x0) {
    pEVar1 = plasma::Edit::Edit(pEVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pEVar1;
  }
  ExceptionList = local_10;
  return (Edit *)0x0;
}


/* FUN_0064f300 @ 0064f300  kind=gamemisc  attributed-by=role:wrapper  size=117 */

ListWidget * FUN_0064f300(int param_1,undefined4 param_2)

{
  ListWidget *pLVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pLVar1 = operator_new(0x160);
  local_8 = 0;
  if (pLVar1 != (ListWidget *)0x0) {
    pLVar1 = plasma::ListWidget::ListWidget(pLVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pLVar1;
  }
  ExceptionList = local_10;
  return (ListWidget *)0x0;
}


/* FUN_006500d0 @ 006500d0  kind=gamemisc  attributed-by=role:wrapper  size=117 */

PopUpButton * FUN_006500d0(int param_1,undefined4 param_2)

{
  PopUpButton *pPVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pPVar1 = operator_new(0x240);
  local_8 = 0;
  if (pPVar1 != (PopUpButton *)0x0) {
    pPVar1 = plasma::PopUpButton::PopUpButton(pPVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pPVar1;
  }
  ExceptionList = local_10;
  return (PopUpButton *)0x0;
}


/* FUN_00650160 @ 00650160  kind=gamemisc  attributed-by=role:wrapper  size=117 */

ScrollButton * FUN_00650160(int param_1,undefined4 param_2)

{
  ScrollButton *pSVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0x24c);
  local_8 = 0;
  if (pSVar1 != (ScrollButton *)0x0) {
    pSVar1 = plasma::ScrollButton::ScrollButton(pSVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pSVar1;
  }
  ExceptionList = local_10;
  return (ScrollButton *)0x0;
}


/* FUN_006501e0 @ 006501e0  kind=gamemisc  attributed-by=role:wrapper  size=117 */

ScrollSlider * FUN_006501e0(int param_1,undefined4 param_2)

{
  ScrollSlider *pSVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0x254);
  local_8 = 0;
  if (pSVar1 != (ScrollSlider *)0x0) {
    pSVar1 = plasma::ScrollSlider::ScrollSlider(pSVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pSVar1;
  }
  ExceptionList = local_10;
  return (ScrollSlider *)0x0;
}


/* FUN_00652790 @ 00652790  kind=gamemisc  attributed-by=role:wrapper  size=96 */

void FUN_00652790(uint param_1)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined1 local_c [8];
  
  uVar2 = param_1;
  *(uint *)(in_ECX + 0xf8) = param_1 & 0xffff;
  puVar3 = (undefined4 *)FUN_0064e490(local_c,&param_1);
  FUN_0067eb10(&param_1,*puVar3,puVar3[1]);
  piVar1 = *(int **)(in_ECX + 0xcc);
  if ((piVar1 != (int *)0x0) && ((char)piVar1[0x57] != '\0')) {
    (**(code **)(*piVar1 + 100))(uVar2);
  }
  return;
}


/* FUN_00659fb0 @ 00659fb0  kind=gamemisc  attributed-by=role:wrapper  size=40 */

void FUN_00659fb0(int param_1)

{
  int in_ECX;
  
  *(int *)(in_ECX + 0xe8) = *(int *)(in_ECX + 0xe8) + param_1;
  *(int *)(in_ECX + 0xe4) = param_1;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  FUN_006372a0();
  return;
}


/* FUN_0065a0e0 @ 0065a0e0  kind=gamemisc  attributed-by=role:wrapper  size=34 */

void FUN_0065a0e0(undefined4 param_1,undefined4 param_2,undefined2 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d550(param_1,param_2);
  if ((undefined2 *)(iVar1 + 8) != (undefined2 *)0x0) {
    *(undefined2 *)(iVar1 + 8) = *param_3;
  }
  return;
}


/* FUN_0065aa90 @ 0065aa90  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_0065aa90(void)

{
  undefined4 *in_ECX;
  
  FUN_0065b890();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0065aab0 @ 0065aab0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_0065aab0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0065d060(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0065aae0 @ 0065aae0  kind=gamemisc  attributed-by=role:wrapper  size=18 */

void FUN_0065aae0(void)

{
  int in_ECX;
  
  if (*(void **)(in_ECX + 8) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 8));
  }
  return;
}


/* FUN_0065aeb0 @ 0065aeb0  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void FUN_0065aeb0(void *param_1)

{
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00661540 @ 00661540  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00661540(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_00661a20(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0066df80 @ 0066df80  kind=gamemisc  attributed-by=role:wrapper  size=102 */

void FUN_0066df80(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066dcb0(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066dff0 @ 0066dff0  kind=gamemisc  attributed-by=role:wrapper  size=102 */

void FUN_0066dff0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066dd80(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e060 @ 0066e060  kind=gamemisc  attributed-by=role:wrapper  size=102 */

void FUN_0066e060(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066de00(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e0d0 @ 0066e0d0  kind=gamemisc  attributed-by=role:wrapper  size=102 */

void FUN_0066e0d0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066de80(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e140 @ 0066e140  kind=gamemisc  attributed-by=role:wrapper  size=102 */

void FUN_0066e140(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined1 local_5;
  
  local_14 = param_4;
  local_10 = param_5;
  local_c = param_6;
  local_20 = param_1;
  local_1c = param_2;
  local_18 = param_3;
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',1);
  FUN_0066df00(&local_20,&local_14,param_7,&local_5,param_6);
  Concurrency::_Trace_ppl_function((_GUID *)&DAT_006fcbb0,'\x04',2);
  return;
}


/* FUN_0066e9a0 @ 0066e9a0  kind=gamemisc  attributed-by=role:wrapper  size=94 */

void __thiscall FUN_0066e9a0(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066ea00 @ 0066ea00  kind=gamemisc  attributed-by=role:wrapper  size=94 */

void __thiscall FUN_0066ea00(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066ea60 @ 0066ea60  kind=gamemisc  attributed-by=role:wrapper  size=94 */

void __thiscall FUN_0066ea60(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066eac0 @ 0066eac0  kind=gamemisc  attributed-by=role:wrapper  size=94 */

void __thiscall FUN_0066eac0(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_0066eb20 @ 0066eb20  kind=gamemisc  attributed-by=role:wrapper  size=94 */

void __thiscall FUN_0066eb20(void *this)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f7ff8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
                        */
  *(task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_vftable
    **)this = &Concurrency::
               task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>
               ::vftable;
  local_8 = 0;
  if ((*(int *)((int)this + 8) != 0) && (*(char *)((int)this + 0x10) == '\0')) {
    Concurrency::details::_UnrealizedChore::_CheckTaskCollection(this);
  }
                    /* inlined constructor or destructor (approx location) for
                       Concurrency::details::_Chore */
  *(_Chore_vftable **)this = &Concurrency::details::_Chore::vftable;
  ExceptionList = local_10;
  return;
}


/* FUN_006712c0 @ 006712c0  kind=gamemisc  attributed-by=role:wrapper  size=118 */

void FUN_006712c0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *param_1;
  iVar2 = param_1[1];
  iVar3 = *param_2;
  uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(iVar2 + iVar3);
  iVar1 = *(int *)(*(int *)(*(int *)(iVar1 + 0x1c) + uVar4 * 4) +
                  ((iVar2 + iVar3) - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 4);
  *(undefined4 *)(iVar1 + 0x2c) = 0;
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(undefined4 *)(iVar1 + 0x10) = 0;
  *(undefined4 *)(iVar1 + 0x14) = 0;
  *(undefined4 *)(iVar1 + 0x18) = 0;
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0;
  *(undefined4 *)(iVar1 + 0x24) = 0;
  *(undefined4 *)(iVar1 + 0x28) = 0;
  return;
}


/* FUN_00677790 @ 00677790  kind=gamemisc  attributed-by=role:wrapper  size=103 */

void FUN_00677790(int param_1)

{
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8388;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  local_8 = 0;
  in_ECX[3] = *(undefined4 *)(param_1 + 0xc);
  FUN_00677800(param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_00677970 @ 00677970  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00677970(int param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_00677800(param_1);
  return;
}


/* FUN_00681240 @ 00681240  kind=gamemisc  attributed-by=role:wrapper  size=28 */

float10 FUN_00681240(void)

{
  float in_ECX;
  
  std::basic_istream<char,std::char_traits<char>_>::read
            (*(basic_istream<char,std::char_traits<char>_> **)((int)in_ECX + 8),&stack0xfffffff8,
             (ulonglong)(uint)in_ECX << 0x20);
  return (float10)in_ECX;
}


/* FUN_00681820 @ 00681820  kind=gamemisc  attributed-by=role:wrapper  size=15 */

void FUN_00681820(void)

{
  undefined4 *in_ECX;
  
  FUN_00681b70();
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0068d593 @ 0068d593  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_0068d593(void)

{
  undefined4 *puVar1;
  
  puVar1 = DAT_0076df54;
  if (DAT_0076df54 == (undefined4 *)0x0) {
    return;
  }
  DAT_0076df54 = (undefined4 *)*DAT_0076df54;
  FUN_0068d57e();
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* FUN_0068d85f @ 0068d85f  kind=gamemisc  attributed-by=role:wrapper  size=16 */

void FUN_0068d85f(void)

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


/* FUN_0068db1c @ 0068db1c  kind=gamemisc  attributed-by=role:wrapper  size=16 */

void FUN_0068db1c(void)

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


/* FUN_0068e604 @ 0068e604  kind=gamemisc  attributed-by=role:wrapper  size=64 */

undefined4 FUN_0068e604(int *param_1)

{
  int iVar1;
  
  param_1 = (int *)*param_1;
  if (((*param_1 == -0x1f928c9d) && (param_1[4] == 3)) &&
     ((iVar1 = param_1[5], iVar1 == 0x19930520 ||
      (((iVar1 == 0x19930521 || (iVar1 == 0x19930522)) || (iVar1 == 0x1994000)))))) {
                    /* WARNING: Subroutine does not return */
    terminate();
  }
  return 0;
}


/* FUN_0068e87e @ 0068e87e  kind=gamemisc  attributed-by=role:wrapper  size=38 */

void FUN_0068e87e(void)

{
  errno_t eVar1;
  
  eVar1 = _controlfp_s((uint *)0x0,0x10000,0x30000);
  if (eVar1 == 0) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
}


/* FUN_0068ee50 @ 0068ee50  kind=gamemisc  attributed-by=role:wrapper  size=107 */

void FUN_0068ee50(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  param_3 = param_3 << 0x10;
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar1 = FUN_0068ea60(*param_1,param_2[2],param_3);
    iVar2 = FUN_0068ea60(param_1[1],param_2[3],param_3);
    iVar3 = FUN_0068ea60(param_1[1],param_2[1],param_3);
    iVar4 = FUN_0068ea60(*param_1,*param_2,param_3);
    param_1[1] = iVar1 + iVar2;
    *param_1 = iVar3 + iVar4;
  }
  return;
}


/* FUN_0068f0a0 @ 0068f0a0  kind=gamemisc  attributed-by=role:wrapper  size=22 */

void FUN_0068f0a0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_0068f040();
  FUN_0068f090();
  return;
}


/* FUN_0068fdf0 @ 0068fdf0  kind=gamemisc  attributed-by=role:wrapper  size=31 */

undefined4 FUN_0068fdf0(undefined4 param_1,undefined4 param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0068fd80(param_1,param_2);
  if (piVar1 != (int *)0x0) {
    return *(undefined4 *)(*piVar1 + 0x14);
  }
  return 0;
}


/* FUN_0068ff10 @ 0068ff10  kind=gamemisc  attributed-by=role:wrapper  size=119 */

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


/* FUN_00692520 @ 00692520  kind=gamemisc  attributed-by=role:wrapper  size=82 */

int FUN_00692520(int param_1,undefined4 param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = param_1;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 4) + 100);
  if ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 1) == 0) {
    puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
    *puVar1 = *puVar1 | 1;
  }
  else {
    FUN_00691290(uVar3,*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(iVar2 + 0x58) = 0;
  }
  uVar3 = FUN_00692230(uVar3,param_2,&param_1);
  *(undefined4 *)(iVar2 + 0x58) = uVar3;
  return param_1;
}


/* FUN_00693a30 @ 00693a30  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_00693a30(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00691f30(param_1,param_2);
  if (iVar1 == 0) {
    *param_3 = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x24) = 0;
  }
  return;
}


/* FUN_00693bf0 @ 00693bf0  kind=gamemisc  attributed-by=role:wrapper  size=70 */

undefined4 * FUN_00693bf0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar1 = param_1;
  iVar3 = FUN_00693a60(*param_1,8,0,param_1[1] * 2,0,&param_1);
  puVar2 = param_1;
  puVar1[10] = iVar3;
  if (param_1 == (undefined4 *)0x0) {
    *(undefined1 *)(puVar1 + 4) = 1;
    puVar1[0xb] = iVar3 + puVar1[1] * 8;
    FUN_0068f040();
  }
  return puVar2;
}


/* FUN_00694f50 @ 00694f50  kind=gamemisc  attributed-by=role:wrapper  size=80 */

undefined4
FUN_00694f50(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  undefined4 uVar1;
  undefined4 local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 local_10;
  
  if (param_2 == 0) {
    return 6;
  }
  local_1c = param_2;
  local_18 = param_3;
  local_20 = 1;
  local_10 = 0;
  uVar1 = FUN_00694b60(param_1,&local_20,param_4,param_5);
  return uVar1;
}


/* FUN_00697e30 @ 00697e30  kind=gamemisc  attributed-by=role:wrapper  size=100 */

int FUN_00697e30(void *param_1)

{
  size_t in_EAX;
  int iVar1;
  int unaff_ESI;
  void *_Dst;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_00693a60(*(undefined4 *)(unaff_ESI + 0x4088),1,*(int *)(unaff_ESI + 0x58),
                       *(int *)(unaff_ESI + 0x58) + 1 + in_EAX,*(undefined4 *)(unaff_ESI + 0x54),
                       &local_4);
  *(int *)(unaff_ESI + 0x54) = iVar1;
  if (local_4 == 0) {
    _Dst = (void *)(*(int *)(unaff_ESI + 0x58) + iVar1);
    memcpy(_Dst,param_1,in_EAX);
    *(undefined1 *)((int)_Dst + in_EAX) = 10;
    *(int *)(unaff_ESI + 0x58) = *(int *)(unaff_ESI + 0x58) + in_EAX + 1;
    return local_4;
  }
  return local_4;
}


/* FUN_0069a860 @ 0069a860  kind=gamemisc  attributed-by=role:wrapper  size=34 */

void FUN_0069a860(void)

{
  int iVar1;
  int unaff_ESI;
  
  if ((*(int *)(unaff_ESI + 0x28) == 0) &&
     (*(int *)(unaff_ESI + 0x20) != 0 || *(int *)(unaff_ESI + 0x24) != 0)) {
    iVar1 = FUN_0069a7f0();
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + *(int *)(unaff_ESI + 0x20);
    *(int *)(iVar1 + 4) = *(int *)(iVar1 + 4) + *(int *)(unaff_ESI + 0x24);
  }
  return;
}


/* FUN_0069f670 @ 0069f670  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_0069f670(int param_1)

{
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if ((*(int *)(param_1 + 0x24) != 0) && (*(int *)(param_1 + 0x20) != 0)) {
    FUN_00691290(*(int *)(param_1 + 0x24),*(int *)(param_1 + 0x20));
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  return;
}


