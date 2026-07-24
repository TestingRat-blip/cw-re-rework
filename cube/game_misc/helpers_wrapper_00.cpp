// helpers_wrapper_00 (game_misc) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper_00.h"

/* FUN_00403ee0 @ 00403ee0  kind=gamemisc  attributed-by=role:wrapper  size=28 */

void FUN_00403ee0(void)

{
  undefined4 *in_ECX;
  undefined1 local_8 [4];
  
  FUN_0040c790(local_8,*(undefined4 *)*in_ECX,(undefined4 *)*in_ECX);
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
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


/* FUN_0040b4e0 @ 0040b4e0  kind=gamemisc  attributed-by=role:wrapper  size=86 */

void FUN_0040b4e0(void)

{
  int in_ECX;
  
  if ((*(byte *)(in_ECX + 0x3c) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)**(undefined4 **)(in_ECX + 0xc));
  }
  **(undefined4 **)(in_ECX + 0xc) = 0;
  **(undefined4 **)(in_ECX + 0x1c) = 0;
  **(undefined4 **)(in_ECX + 0x2c) = 0;
  **(undefined4 **)(in_ECX + 0x10) = 0;
  **(undefined4 **)(in_ECX + 0x20) = 0;
  **(undefined4 **)(in_ECX + 0x30) = 0;
  *(uint *)(in_ECX + 0x3c) = *(uint *)(in_ECX + 0x3c) & 0xfffffffe;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  return;
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


/* FUN_005a6ba0 @ 005a6ba0  kind=gamemisc  attributed-by=role:wrapper  size=113 */

int FUN_005a6ba0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3441;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_006819e0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8 = 1;
  if (iVar1 != -0x10) {
    FUN_005a7990(param_1);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_005a6c30 @ 005a6c30  kind=gamemisc  attributed-by=role:wrapper  size=41 */

int FUN_005a6c30(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_005a7b90();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_005a6a00(param_1,0);
  }
  return iVar1;
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


/* FUN_006291d0 @ 006291d0  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void FUN_006291d0(void)

{
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_0062de60(local_10);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
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


/* FUN_00663eb0 @ 00663eb0  kind=gamemisc  attributed-by=role:wrapper  size=39 */

void FUN_00663eb0(int param_1)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 0xa8) + *(int *)(in_ECX + 0x7c) * 0x18 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  return;
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


/* FUN_0069f6a0 @ 0069f6a0  kind=gamemisc  attributed-by=role:wrapper  size=57 */

undefined4 FUN_0069f6a0(void)

{
  undefined4 uVar1;
  undefined4 in_ECX;
  int unaff_ESI;
  uint unaff_EDI;
  
  if (*(uint *)(unaff_ESI + 0x1c) < unaff_EDI) {
    *(undefined4 *)(unaff_ESI + 0x24) = in_ECX;
    uVar1 = FUN_00693a60();
    *(undefined4 *)(unaff_ESI + 0x20) = uVar1;
    *(uint *)(unaff_ESI + 0x1c) = unaff_EDI;
  }
  return 0;
}


/* FUN_006a0860 @ 006a0860  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006a0860(void)

{
  int unaff_ESI;
  
  FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x304);
  *(undefined4 *)(unaff_ESI + 0x308) = 0;
  *(undefined4 *)(unaff_ESI + 0x30c) = 0;
  *(undefined4 *)(unaff_ESI + 0x310) = 0;
  *(undefined4 *)(unaff_ESI + 0x314) = 0;
  return;
}


/* FUN_006a1c20 @ 006a1c20  kind=gamemisc  attributed-by=role:wrapper  size=59 */

uint FUN_006a1c20(void)

{
  int in_EAX;
  undefined4 uVar1;
  int iVar2;
  uint in_ECX;
  
  uVar1 = FUN_00690cd0();
  *(undefined4 *)(in_EAX + 0xc) = uVar1;
  if (in_ECX == 0) {
    iVar2 = FUN_00692010();
    in_ECX = (uint)(iVar2 != 0);
  }
  return in_ECX;
}


/* FUN_006a3780 @ 006a3780  kind=gamemisc  attributed-by=role:wrapper  size=59 */

int FUN_006a3780(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_006a30a0(param_1,param_2,&local_4);
  if (iVar1 == 0) {
    FUN_00691360(param_3,local_4,param_4);
  }
  return iVar1;
}


/* FUN_006a3e30 @ 006a3e30  kind=gamemisc  attributed-by=role:wrapper  size=69 */

void FUN_006a3e30(int param_1,undefined4 param_2)

{
  char cVar1;
  int in_EAX;
  int in_ECX;
  int in_EDX;
  
  cVar1 = *(char *)(param_1 + 0x5a);
  FUN_006a3cb0(param_2,-in_EDX,-in_EAX,-in_ECX);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 0x5a) == '\0')) {
    *(int *)(*(int *)(param_1 + 0x5c) + 0x14) = -*(int *)(*(int *)(param_1 + 0x5c) + 0x14);
  }
  return;
}


/* FUN_006a5de0 @ 006a5de0  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_006a5de0(void)

{
  FUN_006a5a60();
  FUN_006a5a60();
  FUN_006a58a0();
  return;
}


/* FUN_006a5e40 @ 006a5e40  kind=gamemisc  attributed-by=role:wrapper  size=29 */

void FUN_006a5e40(undefined4 param_1)

{
  undefined1 local_4 [4];
  
  FUN_006a5e20();
  FUN_006a5ae0(param_1,local_4);
  return;
}


/* FUN_006a5e60 @ 006a5e60  kind=gamemisc  attributed-by=role:wrapper  size=45 */

void FUN_006a5e60(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006a5e40();
  if (iVar1 == 0) {
    FUN_006a5b70(param_1,param_3);
  }
  return;
}


/* FUN_006a6000 @ 006a6000  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void FUN_006a6000(undefined4 param_1)

{
  FUN_006a5e20();
  FUN_006a5d80(param_1);
  return;
}


/* FUN_006a6070 @ 006a6070  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006a6070(void)

{
  int in_EAX;
  int in_EDX;
  
  if ((0 < in_EAX) && (in_EAX < 3)) {
    *(int *)(in_EDX + 0xc) = in_EAX;
    *(undefined4 *)(in_EDX + 4) = 0;
    FUN_006a5e10();
    FUN_006a5e10();
    return;
  }
  *(undefined4 *)(in_EDX + 4) = 6;
  *(int *)(in_EDX + 0xc) = in_EAX;
  return;
}


/* FUN_006a6370 @ 006a6370  kind=gamemisc  attributed-by=role:wrapper  size=68 */

void FUN_006a6370(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  FUN_0068e970(*param_3);
  FUN_0068e970(param_3[1]);
  FUN_006a60a0(1);
  return;
}


/* FUN_006a74e0 @ 006a74e0  kind=gamemisc  attributed-by=role:wrapper  size=63 */

void FUN_006a74e0(void)

{
  undefined4 uVar1;
  undefined4 *unaff_EDI;
  
  uVar1 = unaff_EDI[4];
  FUN_006a6cd0();
  FUN_006a6cd0();
  FUN_00691290(uVar1,unaff_EDI[2]);
  unaff_EDI[2] = 0;
  FUN_00691290(uVar1,unaff_EDI[3]);
  unaff_EDI[3] = 0;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  unaff_EDI[4] = 0;
  return;
}


/* FUN_006a8e80 @ 006a8e80  kind=gamemisc  attributed-by=role:wrapper  size=80 */

void FUN_006a8e80(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = param_1[8];
  if (param_1[3] == -0x21524111) {
    FUN_00691290(uVar1,*param_1);
    *param_1 = 0;
    FUN_00691290(uVar1,param_1[6]);
    param_1[6] = 0;
    FUN_00691290(uVar1,param_1[7]);
    param_1[7] = 0;
    param_1[3] = 0;
  }
  return;
}


/* FUN_006a9660 @ 006a9660  kind=gamemisc  attributed-by=role:wrapper  size=85 */

void FUN_006a9660(int param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  int *piVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = *(int *)(param_1 + 0x14);
  if (*(char *)(param_1 + 0x44) != '\0') {
    sVar2 = *(short *)(iVar3 + 2);
    iVar4 = *(int *)(iVar3 + 8);
    piVar1 = (int *)(*(int *)(iVar3 + 4) + sVar2 * 8);
    iVar5 = FUN_0068e970(param_2);
    *piVar1 = iVar5 >> 0x10;
    iVar5 = FUN_0068e970(param_3);
    piVar1[1] = iVar5 >> 0x10;
    *(char *)(iVar4 + sVar2) = (param_4 == '\0') + '\x01';
  }
  *(short *)(iVar3 + 2) = *(short *)(iVar3 + 2) + 1;
  return;
}


/* FUN_006a96c0 @ 006a96c0  kind=gamemisc  attributed-by=role:wrapper  size=49 */

int FUN_006a96c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_006a9620(param_1,1);
  if (iVar1 == 0) {
    FUN_006a9660(param_1,param_2,param_3,1);
  }
  return iVar1;
}


/* FUN_006aa020 @ 006aa020  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006aa020(void)

{
  char *pcVar1;
  char *in_EAX;
  undefined4 *unaff_EBX;
  
  FUN_006a9f80();
  pcVar1 = (char *)*unaff_EBX;
  if ((pcVar1 < in_EAX) && (*pcVar1 == '#')) {
    *unaff_EBX = pcVar1 + 1;
    FUN_006a9f80();
  }
  return;
}


/* FUN_006af1a0 @ 006af1a0  kind=gamemisc  attributed-by=role:wrapper  size=114 */

void FUN_006af1a0(void)

{
  int unaff_ESI;
  
  FUN_00691600();
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  *(undefined4 *)(unaff_ESI + 0x2c) = 0;
  *(undefined4 *)(unaff_ESI + 0x30) = 0;
  *(undefined4 *)(unaff_ESI + 0x34) = 0;
  *(undefined4 *)(unaff_ESI + 0x6c) = 0;
  *(undefined4 *)(unaff_ESI + 0x70) = 0;
  *(undefined4 *)(unaff_ESI + 0x74) = 0;
  *(undefined4 *)(unaff_ESI + 0x78) = 0;
  *(undefined4 *)(unaff_ESI + 0x7c) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined4 *)(unaff_ESI + 0x58) = 0;
  *(undefined4 *)(unaff_ESI + 0x5c) = 0;
  *(undefined4 *)(unaff_ESI + 0x60) = 0;
  *(undefined4 *)(unaff_ESI + 100) = 0;
  *(undefined4 *)(unaff_ESI + 0x68) = 0;
  *(undefined4 *)(unaff_ESI + 0x80) = 0;
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  *(undefined4 *)(unaff_ESI + 0x98) = 0;
  *(undefined4 *)(unaff_ESI + 0x48) = 0;
  *(undefined4 *)(unaff_ESI + 0x38) = 0;
  *(undefined4 *)(unaff_ESI + 0x3c) = 0;
  return;
}


/* FUN_006b0370 @ 006b0370  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_006b0370(void)

{
  void *unaff_ESI;
  
  memset(unaff_ESI,0,0x130);
  *(undefined4 *)((int)unaff_ESI + 0x90) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x58) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x68) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xd4) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa0) = 0;
  return;
}


/* FUN_006b0b80 @ 006b0b80  kind=gamemisc  attributed-by=role:wrapper  size=57 */

void FUN_006b0b80(void)

{
  int iVar1;
  uint uVar2;
  uint *unaff_EBX;
  
  iVar1 = FUN_006908c0();
  if (iVar1 != 0) {
    *unaff_EBX = 0;
    return;
  }
  uVar2 = FUN_00690b80();
  *unaff_EBX = uVar2 & 0xffff;
  return;
}


/* FUN_006b1680 @ 006b1680  kind=gamemisc  attributed-by=role:wrapper  size=59 */

void FUN_006b1680(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = **(undefined4 **)(unaff_ESI + 0x1c);
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 8));
  *(undefined4 *)(unaff_ESI + 8) = 0;
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  FUN_00691290(uVar1,*(undefined4 *)(unaff_ESI + 0x18));
  *(undefined4 *)(unaff_ESI + 0x18) = 0;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined1 *)(unaff_ESI + 0x20) = 0;
  return;
}


/* FUN_006b1890 @ 006b1890  kind=gamemisc  attributed-by=role:wrapper  size=19 */

void FUN_006b1890(void)

{
  int unaff_ESI;
  
  FUN_006b16c0();
  FUN_0068f0c0(*(undefined4 *)(unaff_ESI + 0x1c));
  return;
}


/* FUN_006b33d0 @ 006b33d0  kind=gamemisc  attributed-by=role:wrapper  size=46 */

void FUN_006b33d0(void)

{
  int unaff_ESI;
  
  FUN_0068f020(*(undefined4 *)(unaff_ESI + 0x1c));
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  FUN_006b3230();
  return;
}


/* FUN_006b46c0 @ 006b46c0  kind=gamemisc  attributed-by=role:wrapper  size=55 */

undefined4 FUN_006b46c0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*in_EAX + 0x140);
  iVar3 = FUN_0068fd80(*(undefined4 *)(*(int *)(*in_EAX + 0x60) + 4),"pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}


/* FUN_006b5920 @ 006b5920  kind=gamemisc  attributed-by=role:wrapper  size=37 */

int FUN_006b5920(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  if (*(char *)*in_ECX == '\x1e') {
    iVar1 = FUN_006b5650(in_ECX[1],0,0);
    return iVar1 >> 0x10;
  }
  iVar1 = FUN_006b55b0();
  return iVar1;
}


/* FUN_006b5950 @ 006b5950  kind=gamemisc  attributed-by=role:wrapper  size=38 */

int FUN_006b5950(void)

{
  int iVar1;
  undefined4 *in_ECX;
  
  if (*(char *)*in_ECX == '\x1e') {
    iVar1 = FUN_006b5650(in_ECX[1],0,0);
    return iVar1;
  }
  iVar1 = FUN_006b55b0();
  return iVar1 << 0x10;
}


/* FUN_006b5980 @ 006b5980  kind=gamemisc  attributed-by=role:wrapper  size=45 */

int FUN_006b5980(void)

{
  int iVar1;
  undefined4 *in_ECX;
  int unaff_ESI;
  
  if (*(char *)*in_ECX == '\x1e') {
    iVar1 = FUN_006b5650(in_ECX[1]);
    return iVar1;
  }
  iVar1 = FUN_006b55b0();
  return iVar1 * *(int *)(&DAT_00734690 + unaff_ESI * 4) * 0x10000;
}


/* FUN_006b6530 @ 006b6530  kind=gamemisc  attributed-by=role:wrapper  size=41 */

void FUN_006b6530(undefined4 param_1)

{
  undefined1 *unaff_ESI;
  
  if (*(int *)(unaff_ESI + 8) != 0) {
    FUN_00691ee0(param_1,unaff_ESI + 8);
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *unaff_ESI = 0;
  *(undefined4 *)(unaff_ESI + 4) = 0;
  return;
}


/* FUN_006b6700 @ 006b6700  kind=gamemisc  attributed-by=role:wrapper  size=22 */

void FUN_006b6700(void)

{
  int unaff_ESI;
  
  FUN_00691290();
  *(undefined4 *)(unaff_ESI + 0xc) = 0;
  *(undefined4 *)(unaff_ESI + 0x10) = 0;
  return;
}


/* FUN_006b6720 @ 006b6720  kind=gamemisc  attributed-by=role:wrapper  size=40 */

void FUN_006b6720(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = *(undefined4 *)(in_EAX + 0x1c);
  FUN_006b6700();
  FUN_00691290(uVar1,in_ECX[2]);
  in_ECX[2] = 0;
  *in_ECX = 0;
  in_ECX[1] = 0;
  return;
}


/* FUN_006b7000 @ 006b7000  kind=gamemisc  attributed-by=role:wrapper  size=48 */

void FUN_006b7000(undefined4 param_1)

{
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    FUN_006b5fe0();
    FUN_00691290(param_1,*(undefined4 *)(unaff_EDI + 0x234));
    *(undefined4 *)(unaff_EDI + 0x234) = 0;
  }
  return;
}


/* FUN_006b7540 @ 006b7540  kind=gamemisc  attributed-by=role:wrapper  size=61 */

undefined4 FUN_006b7540(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*(int *)(*in_EAX + 0x2b4) + 0x804);
  iVar3 = FUN_0068fd80(*(undefined4 *)(*(int *)(*in_EAX + 0x60) + 4),"pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}


/* FUN_006b86d0 @ 006b86d0  kind=gamemisc  attributed-by=role:wrapper  size=43 */

int FUN_006b86d0(void)

{
  int iVar1;
  
  iVar1 = FUN_006b8660();
  if (iVar1 == 0) {
    FUN_006b8690(1);
  }
  return iVar1;
}


/* FUN_006bb130 @ 006bb130  kind=gamemisc  attributed-by=role:wrapper  size=92 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006bb130(undefined2 *param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 *unaff_EBX;
  
  *param_1 = 0;
  *unaff_EBX = 0;
  sVar1 = FUN_00690b80();
  if ((param_1 == (undefined2 *)0x0) &&
     ((_DAT_00000000 = sVar1, sVar1 == -0x7fff || (sVar1 == -0x7ffe)))) {
    uVar2 = FUN_00690d40();
    *unaff_EBX = uVar2;
  }
  return;
}


/* FUN_006bd950 @ 006bd950  kind=gamemisc  attributed-by=role:wrapper  size=68 */

void FUN_006bd950(void)

{
  void *unaff_ESI;
  
  memset(unaff_ESI,0,0x178);
  *(undefined4 *)((int)unaff_ESI + 0x98) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x60) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x70) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xdc) = 0;
  *(undefined4 *)((int)unaff_ESI + 0xa8) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x148) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x110) = 0;
  *(undefined1 *)((int)unaff_ESI + 0x170) = 0;
  *(undefined4 *)((int)unaff_ESI + 0x174) = 0;
  return;
}


/* FUN_006bdde0 @ 006bdde0  kind=gamemisc  attributed-by=role:wrapper  size=55 */

undefined4 FUN_006bdde0(void)

{
  undefined4 *puVar1;
  code *pcVar2;
  int *in_EAX;
  int iVar3;
  undefined4 uVar4;
  
  puVar1 = *(undefined4 **)(*in_EAX + 0x228);
  iVar3 = FUN_0068fd80(*(undefined4 *)(*(int *)(*in_EAX + 0x60) + 4),"pshinter");
  if (((iVar3 != 0) && (puVar1 != (undefined4 *)0x0)) &&
     (pcVar2 = (code *)*puVar1, pcVar2 != (code *)0x0)) {
    uVar4 = (*pcVar2)(iVar3);
    return uVar4;
  }
  return 0;
}


/* FUN_006be8e0 @ 006be8e0  kind=gamemisc  attributed-by=role:wrapper  size=47 */

void FUN_006be8e0(void)

{
  int unaff_ESI;
  
  FUN_00691290();
  *(undefined4 *)(unaff_ESI + 0x24) = 0;
  *(undefined4 *)(unaff_ESI + 0x28) = 0;
  FUN_00691290();
  *(undefined4 *)(unaff_ESI + 0x1c) = 0;
  *(undefined4 *)(unaff_ESI + 0x20) = 0;
  FUN_00691290();
  return;
}


/* FUN_006bf680 @ 006bf680  kind=gamemisc  attributed-by=role:wrapper  size=30 */

void FUN_006bf680(void)

{
  int unaff_ESI;
  
  FUN_00691ee0(*(undefined4 *)(unaff_ESI + 0x68),unaff_ESI + 0x2e0);
  *(undefined4 *)(unaff_ESI + 0x2dc) = 0;
  return;
}


/* FUN_006bf8d0 @ 006bf8d0  kind=gamemisc  attributed-by=role:wrapper  size=52 */

void FUN_006bf8d0(void)

{
  int iVar1;
  int in_EAX;
  
  iVar1 = *(int *)(in_EAX + 0x68);
  FUN_00691290(*(undefined4 *)(iVar1 + 0x1c),*(undefined4 *)(in_EAX + 0x2f4));
  *(undefined4 *)(in_EAX + 0x2f4) = 0;
  FUN_00691ee0(iVar1,in_EAX + 0x2e4);
  return;
}


/* FUN_006c07c0 @ 006c07c0  kind=gamemisc  attributed-by=role:wrapper  size=93 */

void FUN_006c07c0(void)

{
  int iVar1;
  int *unaff_ESI;
  
  iVar1 = *unaff_ESI;
  if (iVar1 != 0) {
    FUN_00691290(iVar1,unaff_ESI[7]);
    unaff_ESI[7] = 0;
    FUN_00691290(iVar1,unaff_ESI[6]);
    unaff_ESI[6] = 0;
    FUN_00691290(iVar1,unaff_ESI[4]);
    unaff_ESI[4] = 0;
    FUN_00691290(iVar1,unaff_ESI[3]);
    unaff_ESI[3] = 0;
    FUN_00691290(iVar1,unaff_ESI[5]);
    unaff_ESI[5] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[1] = 0;
    *unaff_ESI = 0;
  }
  return;
}


/* FUN_006c0c20 @ 006c0c20  kind=gamemisc  attributed-by=role:wrapper  size=107 */

undefined4 FUN_006c0c20(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  uVar1 = unaff_ESI[2];
  unaff_ESI[0x6e] = 0;
  FUN_00691290(uVar1,unaff_ESI[6]);
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  FUN_00691290(uVar1,unaff_ESI[0x6d]);
  unaff_ESI[0x6d] = 0;
  unaff_ESI[0x6c] = 0;
  unaff_ESI[0x6b] = 0;
  FUN_00691290(uVar1,unaff_ESI[0x62]);
  unaff_ESI[0x62] = 0;
  unaff_ESI[0x61] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  FUN_00691290(uVar1);
  return 0;
}


/* FUN_006c0c90 @ 006c0c90  kind=gamemisc  attributed-by=role:wrapper  size=102 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_006c0c90(void)

{
  undefined4 in_EAX;
  undefined4 uVar1;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 8) = in_EAX;
  *(undefined4 *)(in_ECX + 0x1b0) = 0x20;
  uVar1 = FUN_00693a60();
  *(undefined4 *)(in_ECX + 0x1b4) = uVar1;
  if (in_ECX != 0) {
    FUN_006c0c20();
    return in_ECX;
  }
  uRam00000014 = 0;
  uRam00000184 = 0;
  uRam00000018 = 0;
  uRam00000188 = 0;
  _DAT_00000000 = 0;
  uRam00000004 = 0;
  uRam000001b8 = 0;
  return 0;
}


/* FUN_006c1250 @ 006c1250  kind=gamemisc  attributed-by=role:wrapper  size=27 */

void FUN_006c1250(void)

{
  int in_EAX;
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  FUN_0068ebc0(*(undefined2 *)(in_EAX + 0xfc),uVar1);
  return;
}


/* FUN_006c1290 @ 006c1290  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_006c1290(int param_1,int param_2)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  FUN_0068ebc0(*(undefined4 *)(*(int *)(param_1 + 0x180) + param_2 * 4),uVar1);
  return;
}


/* FUN_006c12e0 @ 006c12e0  kind=gamemisc  attributed-by=role:wrapper  size=39 */

void FUN_006c12e0(int param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_006c11c0();
  uVar1 = FUN_0068ec40(param_3,uVar1);
  *(undefined4 *)(*(int *)(param_1 + 0x180) + param_2 * 4) = uVar1;
  return;
}


/* FUN_006c1d80 @ 006c1d80  kind=gamemisc  attributed-by=role:wrapper  size=66 */

void FUN_006c1d80(void)

{
  void *_Dst;
  int iVar1;
  undefined4 uVar2;
  int *in_EAX;
  int iVar3;
  int unaff_ESI;
  
  iVar1 = *in_EAX;
  if ((0 < iVar1) && (iVar1 <= *(int *)(unaff_ESI + 0x1c))) {
    iVar3 = *(int *)(unaff_ESI + 0x1c) - iVar1;
    uVar2 = *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4);
    _Dst = (void *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4);
    memmove(_Dst,(void *)((int)_Dst + 4),iVar1 * 4 - 4);
    *(undefined4 *)(*(int *)(unaff_ESI + 0x18) + -4 + *(int *)(unaff_ESI + 0x1c) * 4) = uVar2;
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  return;
}


/* FUN_006ca2c0 @ 006ca2c0  kind=gamemisc  attributed-by=role:wrapper  size=35 */

void FUN_006ca2c0(void)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006ca150(*(undefined1 *)(unaff_EDI + 0xc),*(undefined1 *)(unaff_ESI + 0xc));
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006cb180 @ 006cb180  kind=gamemisc  attributed-by=role:wrapper  size=26 */

void __fastcall FUN_006cb180(undefined4 param_1)

{
  int iVar1;
  int unaff_ESI;
  int unaff_EDI;
  
  iVar1 = FUN_006cb050(param_1);
  *(int *)(unaff_ESI + 8) = iVar1 + *(int *)(unaff_EDI + 8);
  return;
}


/* FUN_006cb7e0 @ 006cb7e0  kind=gamemisc  attributed-by=role:wrapper  size=42 */

void FUN_006cb7e0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006c8870(unaff_ESI + 3);
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  FUN_006915b0(unaff_ESI[2]);
  unaff_ESI[2] = 0;
  return;
}


