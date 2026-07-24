// helpers_wrapper (control) -- cube. 30 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

/* FUN_00403eb0 @ 00403eb0  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_00403eb0(void)

{
  undefined4 *in_ECX;
  
  if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  return;
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


/* FUN_00423ee0 @ 00423ee0  kind=gamemisc  attributed-by=role:wrapper  size=56 */

float10 FUN_00423ee0(void)

{
  float *in_ECX;
  double dVar1;
  
  dVar1 = (double)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
  libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}


/* FUN_004240f0 @ 004240f0  kind=gamemisc  attributed-by=role:wrapper  size=122 */

void FUN_004240f0(void)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  float fVar3;
  
  fVar1 = *in_ECX;
  dVar2 = (double)(fVar1 * fVar1 + in_ECX[1] * in_ECX[1] + in_ECX[2] * in_ECX[2]);
  libm_sse2_sqrt_precise();
  fVar3 = 1.0 / (float)dVar2;
  *in_ECX = fVar1 * fVar3;
  in_ECX[1] = fVar3 * in_ECX[1];
  in_ECX[2] = fVar3 * in_ECX[2];
  return;
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


/* FUN_0043a450 @ 0043a450  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined2 * FUN_0043a450(undefined2 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 in_ECX;
  
  *(undefined4 *)(param_1 + 10) = 7;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  FUN_0040f680(in_ECX,param_2,param_3);
  return param_1;
}


/* FUN_0043ab30 @ 0043ab30  kind=gamemisc  attributed-by=role:wrapper  size=77 */

void FUN_0043ab30(undefined4 param_1,float *param_2)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  
  pfVar4 = param_2;
  fVar3 = *param_2;
  pfVar1 = param_2 + 1;
  pfVar2 = param_2 + 2;
  param_2._3_1_ = SUB41(pfVar4,3);
  param_2._0_3_ =
       CONCAT12((char)(int)(*pfVar2 * 255.0),
                CONCAT11((char)(int)(*pfVar1 * 255.0),(char)(int)(fVar3 * 255.0)));
  FUN_0043a500(param_1,&param_2);
  return;
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


/* FUN_00459530 @ 00459530  kind=gamemisc  attributed-by=role:wrapper  size=123 */

void FUN_00459530(void)

{
  undefined2 *in_ECX;
  
  *in_ECX = 0;
  *(undefined4 *)(in_ECX + 2) = 0;
  *(undefined4 *)(in_ECX + 4) = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  in_ECX[8] = 1;
  *(undefined4 *)(in_ECX + 0x8a) = 0;
  memset(in_ECX + 10,0,0x100);
  *(undefined4 *)(in_ECX + 0x8c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x8e) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x90) = 0xffffffff;
  in_ECX[0x95] = 1;
  *(undefined4 *)(in_ECX + 0x92) = 0;
  return;
}


/* FUN_004860b0 @ 004860b0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_004860b0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x15555554) {
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


/* FUN_004864c0 @ 004864c0  kind=gamemisc  attributed-by=role:wrapper  size=67 */

void FUN_004864c0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_0058d860(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
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


/* FUN_004da480 @ 004da480  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_004da480(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 != (void *)*in_ECX) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
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


/* FUN_0062f660 @ 0062f660  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void FUN_0062f660(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062b510(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f8c0 @ 0062f8c0  kind=gamemisc  attributed-by=role:wrapper  size=41 */

int FUN_0062f8c0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_00630a40();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0064af30(param_1,0);
  }
  return iVar1;
}


/* FUN_006502e0 @ 006502e0  kind=gamemisc  attributed-by=role:wrapper  size=117 */

undefined4 FUN_006502e0(undefined4 param_1,undefined4 param_2)

{
  TextShape *this;
  undefined4 extraout_EAX;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x21c);
  local_8 = 0;
  if (this != (TextShape *)0x0) {
    plasma::TextShape::TextShape(this,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return extraout_EAX;
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0067e480 @ 0067e480  kind=gamemisc  attributed-by=role:wrapper  size=61 */

void FUN_0067e480(void)

{
  void *pvVar1;
  int *in_ECX;
  
  pvVar1 = *(void **)(*in_ECX + 4);
  if (*(char *)((int)pvVar1 + 0xd) == '\0') {
    FUN_0042ca80(*(undefined4 *)((int)pvVar1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  *(int *)(*in_ECX + 4) = *in_ECX;
  *(int *)*in_ECX = *in_ECX;
  *(int *)(*in_ECX + 8) = *in_ECX;
  in_ECX[1] = 0;
  return;
}


