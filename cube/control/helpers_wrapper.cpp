// helpers_wrapper (control) -- cube. 13 functions. Bodies = Ghidra pseudo-C.
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


