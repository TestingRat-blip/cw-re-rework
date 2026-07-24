// helpers_wrapper (engine) -- cube. 17 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_wrapper.h"

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


/* FUN_0042ca80 @ 0042ca80  kind=gamemisc  attributed-by=role:wrapper  size=44 */

void FUN_0042ca80(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    FUN_0042ca80(*(undefined4 *)((int)param_1 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
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


/* FUN_00692a70 @ 00692a70  kind=gamemisc  attributed-by=role:wrapper  size=43 */

void FUN_00692a70(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691460(unaff_ESI + 6,FUN_006929b0,unaff_ESI[2]);
  if ((*(uint *)*unaff_ESI & 0x200) == 0) {
    FUN_006915b0(unaff_ESI[9]);
  }
  return;
}


