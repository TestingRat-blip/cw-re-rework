// helpers_dtor_like (control) -- cube. 43 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_004041c0 @ 004041c0  kind=gamemisc  attributed-by=role:dtor-like  size=275 */

void FUN_004041c0(uint *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_34 [4];
  void *local_30 [4];
  uint local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e13a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_00408fc0(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (0xf < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_0040c520(0,param_1[4],piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_004042b5;
  }
  local_1c = 0xf;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffffff00);
  if (param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(local_30,param_1,param_1[4] + 1);
    }
  }
  else {
    local_30[0] = (void *)*param_1;
    *param_1 = 0;
  }
  local_20 = param_1[4];
  local_1c = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_004021e0(local_30);
  FUN_004028d0(local_34,iVar1,iVar3 + 0x10,iVar3);
  if (0xf < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_004042b5:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004054f0 @ 004054f0  kind=gamemisc  attributed-by=role:dtor-like  size=242 */

void FUN_004054f0(uint param_1,size_t param_2)

{
  uint uVar1;
  undefined4 *in_ECX;
  uint uVar2;
  undefined4 *_Src;
  uint uVar3;
  undefined4 *local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 0xf;
  if (uVar3 != 0xffffffff) {
    uVar1 = in_ECX[5];
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = uVar2 + uVar1, -uVar2 - 2 < uVar1)) {
      param_1 = 0xfffffffe;
    }
  }
  local_8 = 0;
  local_18 = (undefined4 *)0x0;
  if ((param_1 + 1 != 0) && (local_18 = operator_new(param_1 + 1), local_18 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    _Src = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      _Src = (undefined4 *)*in_ECX;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2);
    }
  }
  if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *(undefined1 *)in_ECX = 0;
  *in_ECX = local_18;
  in_ECX[5] = param_1;
  in_ECX[4] = param_2;
  if (0xf < param_1) {
    in_ECX = local_18;
  }
  *(undefined1 *)((int)in_ECX + param_2) = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_0040f300 @ 0040f300  kind=gamemisc  attributed-by=role:dtor-like  size=178 */

bool FUN_0040f300(uint param_1,char param_2)

{
  uint uVar1;
  void *_Src;
  undefined4 *in_ECX;
  uint uVar2;
  
  if (0x7ffffffe < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  uVar1 = in_ECX[5];
  if (uVar1 < param_1) {
    FUN_0040f170(param_1,in_ECX[4]);
    return param_1 != 0;
  }
  if ((param_2 == '\0') || (7 < param_1)) {
    if (param_1 == 0) {
      in_ECX[4] = 0;
      if (7 < uVar1) {
        in_ECX = (undefined4 *)*in_ECX;
      }
      *(undefined2 *)in_ECX = 0;
    }
    return param_1 != 0;
  }
  uVar2 = in_ECX[4];
  if (param_1 < (uint)in_ECX[4]) {
    uVar2 = param_1;
  }
  if (7 < uVar1) {
    _Src = (void *)*in_ECX;
    if (uVar2 != 0) {
      memcpy(in_ECX,_Src,uVar2 * 2);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(_Src);
  }
  in_ECX[4] = uVar2;
  in_ECX[5] = 7;
  *(undefined2 *)((int)in_ECX + uVar2 * 2) = 0;
  return param_1 != 0;
}


/* FUN_0043c920 @ 0043c920  kind=gamemisc  attributed-by=role:dtor-like  size=76 */

void FUN_0043c920(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_0043c920(*(undefined4 *)((int)param_1 + 8));
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


/* FUN_0044ba10 @ 0044ba10  kind=gamemisc  attributed-by=role:dtor-like  size=219 */

void FUN_0044ba10(void *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = (uint)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2da0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    if (param_1 < 0xe6c2b5) {
      pvVar2 = operator_new((int)param_1 * 0x11c);
      if (pvVar2 != (void *)0x0) goto LAB_0044ba74;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0044ba74:
  local_8 = 0;
  FUN_0044a600(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (void *)*in_ECX;
  if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_ECX[2] = (void *)(uVar1 * 0x11c + (int)pvVar2);
  in_ECX[1] = (void *)(((in_ECX[1] - (int)param_1) / 0x11c) * 0x11c + (int)pvVar2);
  *in_ECX = pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_00450e00 @ 00450e00  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

void FUN_00450e00(int *param_1)

{
  int *piVar1;
  
  if ((int *)param_1[4] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_function_call();
  }
  (**(code **)(*(int *)param_1[4] + 8))();
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
  piVar1 = (int *)param_1[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != param_1);
    param_1[4] = 0;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00452600 @ 00452600  kind=gamemisc  attributed-by=role:dtor-like  size=53 */

void FUN_00452600(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 0x47;
    do {
      if ((void *)*puVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 0x4a;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_004538c0 @ 004538c0  kind=gamemisc  attributed-by=role:dtor-like  size=223 */

void FUN_004538c0(undefined4 *param_1,char param_2,int *param_3,void *param_4)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_3;
  puStack_c = &LAB_006e33d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar5 = true;
  local_8 = 0;
  piVar6 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    piVar3 = (int *)piVar1[1];
    do {
      piVar6 = piVar3;
      if (param_2 == '\0') {
        bVar5 = *param_3 < piVar6[4];
      }
      else {
        bVar5 = *param_3 <= piVar6[4];
      }
      if (bVar5 == false) {
        piVar3 = (int *)piVar6[2];
      }
      else {
        piVar3 = (int *)*piVar6;
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar6;
  if (bVar5 != false) {
    if (piVar6 == (int *)*piVar1) {
      bVar5 = true;
      goto LAB_00453953;
    }
    FUN_0042c740();
  }
  if (*piVar2 <= _param_2[4]) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_00453953:
  puVar4 = (undefined4 *)FUN_00452a10(&param_2,bVar5,piVar6,piVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00453b40 @ 00453b40  kind=gamemisc  attributed-by=role:dtor-like  size=284 */

void FUN_00453b40(undefined4 *param_1,char param_2,uint *param_3,void *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3410;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  local_8 = 0;
  bVar6 = true;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    uVar2 = param_3[1];
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      if (param_2 == '\0') {
        if ((piVar5[5] < (int)uVar2) || ((piVar5[5] <= (int)uVar2 && ((uint)piVar5[4] <= *param_3)))
           ) {
          bVar6 = false;
          goto LAB_00453bdc;
        }
        piVar3 = (int *)*piVar5;
        bVar6 = true;
      }
      else {
        if (((int)uVar2 < piVar5[5]) || (((int)uVar2 <= piVar5[5] && (*param_3 <= (uint)piVar5[4])))
           ) {
          bVar6 = false;
        }
        else {
          bVar6 = true;
        }
        bVar6 = !bVar6;
        if (bVar6) {
          piVar3 = (int *)*piVar5;
        }
        else {
LAB_00453bdc:
          piVar3 = (int *)piVar5[2];
        }
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (bVar6) {
    if (piVar5 == (int *)*piVar1) {
      bVar6 = true;
      goto LAB_00453c01;
    }
    FUN_0042c740();
  }
  if (((int)param_3[1] < _param_2[5]) ||
     (((int)param_3[1] <= _param_2[5] && (*param_3 <= (uint)_param_2[4])))) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_00453c01:
  puVar4 = (undefined4 *)FUN_005c0420(&param_2,bVar6,piVar5,param_3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00454ef0 @ 00454ef0  kind=gamemisc  attributed-by=role:dtor-like  size=237 */

void FUN_00454ef0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 local_13c [280];
  undefined4 local_24;
  void *local_20;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e369b;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = (param_2 - param_1) / 0x128;
  iVar3 = iVar1 / 2;
  local_14 = uVar2;
  if (0 < iVar3) {
    iVar4 = param_1 + 0x11c + iVar3 * 0x128;
    do {
      local_8 = 0xffffffff;
      iVar3 = iVar3 + -1;
      FUN_0040ee70(iVar4 + -0x244);
      local_24 = *(undefined4 *)(iVar4 + -300);
      FUN_004592f0(iVar4 + -0x128);
      local_8 = 0;
      FUN_00451940(param_1,iVar3,iVar1,local_13c,param_3,uVar2);
      local_8 = 0xffffffff;
      if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_20);
      }
      iVar4 = iVar4 + -0x128;
    } while (0 < iVar3);
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00455760 @ 00455760  kind=gamemisc  attributed-by=role:dtor-like  size=244 */

void FUN_00455760(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 local_13c [280];
  undefined4 local_24;
  void *local_20;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e369b;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_0040ee70(param_2 + -0x128);
  local_24 = *(undefined4 *)(param_2 + -0x10);
  FUN_004592f0(param_2 + -0xc);
  local_8 = 0;
  FUN_0042c5e0(param_1);
  *(undefined4 *)(param_2 + -0x10) = *(undefined4 *)(param_1 + 0x118);
  FUN_00468050(param_1 + 0x11c);
  FUN_00451940(param_1,0,((param_2 - param_1) + -0x128) / 0x128,local_13c,param_3,uVar1);
  if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00458c10 @ 00458c10  kind=gamemisc  attributed-by=role:dtor-like  size=204 */

void FUN_00458c10(int param_1,int param_2)

{
  undefined1 local_13c [280];
  undefined4 local_24;
  void *local_20 [3];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e38cb;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040ee70(param_1);
  local_24 = *(undefined4 *)(param_1 + 0x118);
  FUN_004592f0(param_1 + 0x11c);
  local_8 = 0;
  FUN_0042c5e0(param_2);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_2 + 0x118);
  FUN_00468050(param_2 + 0x11c);
  FUN_0042c5e0(local_13c);
  *(undefined4 *)(param_2 + 0x118) = local_24;
  FUN_00468050(local_20);
  if (local_20[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046e150 @ 0046e150  kind=gamemisc  attributed-by=role:dtor-like  size=227 */

void FUN_0046e150(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5670;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xdd67c9) {
      pvVar2 = operator_new(param_1 * 0x128);
      if (pvVar2 != (void *)0x0) goto LAB_0046e1b1;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e1b1:
  local_8 = 0;
  FUN_00456dc0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  if (*in_ECX != 0) {
    FUN_00452600(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[2] = (int)(uVar1 * 0x128 + (int)pvVar2);
  in_ECX[1] = (int)(((in_ECX[1] - *in_ECX) / 0x128) * 0x128 + (int)pvVar2);
  *in_ECX = (int)pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_0046e330 @ 0046e330  kind=gamemisc  attributed-by=role:dtor-like  size=205 */

void FUN_0046e330(uint param_1)

{
  undefined4 *puVar1;
  uint *puVar2;
  int *in_ECX;
  void *pvVar3;
  uint uStack_30;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e56b0;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  puVar2 = &uStack_30;
  if (param_1 != 0) {
    puVar2 = &uStack_30;
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 << 3);
      puVar2 = (uint *)local_14;
      if (pvVar3 != (void *)0x0) goto LAB_0046e38b;
    }
    local_14 = (undefined1 *)puVar2;
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e38b:
  local_14 = (undefined1 *)puVar2;
  local_8 = 0;
  FUN_00456a40(*in_ECX,in_ECX[1],pvVar3,&local_15,0,param_1);
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 == (undefined4 *)0x0) {
    *in_ECX = (int)pvVar3;
    in_ECX[2] = (int)((int)pvVar3 + param_1 * 8);
    in_ECX[1] = (int)((int)pvVar3 + (in_ECX[1] - (int)puVar1 >> 3) * 8);
    ExceptionList = local_10;
    return;
  }
  if (puVar1 != (undefined4 *)in_ECX[1]) {
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0046f990 @ 0046f990  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_0046f990(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (pvVar2 == (void *)*in_ECX) {
    return;
  }
  if (7 < *(uint *)((int)pvVar2 + 0x1c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 8));
  }
  *(undefined4 *)((int)pvVar2 + 0x1c) = 7;
  *(undefined4 *)((int)pvVar2 + 0x18) = 0;
  *(undefined2 *)((int)pvVar2 + 8) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_004815e0 @ 004815e0  kind=gamemisc  attributed-by=role:dtor-like  size=256 */

void FUN_004815e0(void)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *in_ECX;
  void *local_5c [5];
  uint local_48;
  void *local_44 [4];
  int local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6388;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_14 = uVar2;
  FUN_0040f7a0(L"edit",4);
  local_8 = 0;
  FUN_00635550(local_44,local_2c,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (local_34 != 0) {
    iVar1 = *(int *)(*(int *)&in_ECX[0x12f7c].
                              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                              .field_0x30 + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
    pcVar3 = (char *)FUN_00659f50(local_5c,local_44,uVar2);
    local_8._0_1_ = 3;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (in_ECX,pcVar3);
    if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00484230 @ 00484230  kind=gamemisc  attributed-by=role:dtor-like  size=228 */

void FUN_00484230(void)

{
  uint uVar1;
  int in_ECX;
  bool bVar2;
  void *local_44 [5];
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e66d0;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  bVar2 = *(char *)(in_ECX + 0x8009b0) == '\0';
  *(bool *)(in_ECX + 0x8009b0) = bVar2;
  local_14 = uVar1;
  if (bVar2) {
    FUN_0040eb60(L"Singleplayer worlds...");
    local_8 = 0;
    FUN_00636ad0(local_44);
    local_8 = 0xffffffff;
    if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_44[0]);
    }
  }
  else {
    FUN_0040eb60(L"Multiplayer worlds...");
    local_8 = 1;
    FUN_00636ad0(local_2c);
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
  FUN_004a23d0(uVar1);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00487ea0 @ 00487ea0  kind=gamemisc  attributed-by=role:dtor-like  size=173 */

void FUN_00487ea0(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6db8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar2 = param_2;
  if (0xf < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  piVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_00424da0(param_2,*piVar1 + (int)puVar2,local_30);
  local_8 = 0;
  FUN_00636a00(param_1,local_2c,param_3);
  if (local_18 < 8) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_004cb220 @ 004cb220  kind=gamemisc  attributed-by=role:dtor-like  size=108 */

void __thiscall FUN_004cb220(void *this)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ofstream<char,std::char_traits<char>_> */
  *(basic_ofstream<char,std::char_traits<char>_>_vftable **)
   (*(int *)(*(int *)((int)this + -0x60) + 4) + -0x60 + (int)this) =
       &std::basic_ofstream<char,std::char_traits<char>_>::vftable;
  iVar1 = *(int *)(*(int *)((int)this + -0x60) + 4);
  *(int *)(iVar1 + -100 + (int)this) = iVar1 + -0x60;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *(basic_filebuf<char,std::char_traits<char>_>_vftable **)((int)this + -0x5c) =
       &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  if ((*(int *)((int)this + -0xc) != 0) && (**(int **)((int)this + -0x50) == (int)this + -0x18)) {
    uVar2 = *(undefined4 *)((int)this + -0x20);
    **(int **)((int)this + -0x50) = *(int *)((int)this + -0x24);
    **(undefined4 **)((int)this + -0x40) = uVar2;
    **(undefined4 **)((int)this + -0x30) = 0;
  }
  if (*(char *)((int)this + -0x10) != '\0') {
    FUN_0040c4c0();
  }
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x5c));
                    /* WARNING: Could not recover jumptable at 0x004cb286. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)((int)this + -0x58));
  return;
}


/* FUN_004e6d00 @ 004e6d00  kind=gamemisc  attributed-by=role:dtor-like  size=117 */

void FUN_004e6d00(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x80000000) {
      _Dst = operator_new(param_1 * 2);
      if (_Dst != (void *)0x0) goto LAB_004e6d31;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004e6d31:
  memmove(_Dst,(void *)*in_ECX,in_ECX[1] - (int)*in_ECX & 0xfffffffe);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)_Dst + param_1 * 2);
  *in_ECX = _Dst;
  in_ECX[1] = (void *)((int)_Dst + (in_ECX[1] - (int)pvVar1 >> 1) * 2);
  return;
}


/* FUN_004e75c0 @ 004e75c0  kind=gamemisc  attributed-by=role:dtor-like  size=131 */

void FUN_004e75c0(undefined4 param_1,undefined4 param_2,int param_3)

{
  longlong lVar1;
  void *_Dst;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x44) = param_1;
  *(undefined4 *)(in_ECX + 0x48) = param_2;
  *(int *)(in_ECX + 0x4c) = param_3;
  if (*(void **)(in_ECX + 0x30) != (void *)0x0) {
    operator_delete__(*(void **)(in_ECX + 0x30));
    *(undefined4 *)(in_ECX + 0x30) = 0;
  }
  if (((0 < *(int *)(in_ECX + 0x44)) && (0 < *(int *)(in_ECX + 0x48))) &&
     (0 < *(int *)(in_ECX + 0x4c))) {
    lVar1 = (ulonglong)(uint)(*(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x44) * param_3) * 3;
    _Dst = (void *)FUN_0068d652(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
    *(void **)(in_ECX + 0x30) = _Dst;
    memset(_Dst,0,*(int *)(in_ECX + 0x48) * *(int *)(in_ECX + 0x4c) * *(int *)(in_ECX + 0x44) * 3);
  }
  return;
}


/* FUN_005866a0 @ 005866a0  kind=gamemisc  attributed-by=role:dtor-like  size=136 */

undefined4 FUN_005866a0(undefined4 param_1,void *param_2)

{
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  void *in_stack_00000020;
  uint in_stack_00000034;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1210;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  FUN_00583bf0(param_1,&param_2,&stack0x00000020,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_2);
  }
  in_stack_0000001c = 0xf;
  in_stack_00000018 = 0;
  param_2 = (void *)((uint)param_2 & 0xffffff00);
  if (0xf < in_stack_00000034) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_00000020);
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00586730 @ 00586730  kind=gamemisc  attributed-by=role:dtor-like  size=52 */

void FUN_00586730(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = param_1;
  FUN_00587070(&param_1);
  if (puVar1 == (undefined4 *)0x0) {
    return;
  }
  if ((void *)*puVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* FUN_00586980 @ 00586980  kind=gamemisc  attributed-by=role:dtor-like  size=244 */

void FUN_00586980(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  undefined4 extraout_EDX;
  uint in_stack_0000001c;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1238;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar7 = 0;
  puVar3 = &param_2;
  if (0xf < in_stack_0000001c) {
    puVar3 = param_2;
  }
  local_8 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar8 = 0x67452301;
  uVar9 = 0xefcdab89;
  uVar10 = 0x98badcfe;
  uVar11 = 0x10325476;
  pcVar4 = (char *)FUN_005868a0(puVar3);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (*pcVar4 == '\0') {
    iVar5 = 0;
  }
  else {
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    iVar5 = (int)pcVar6 - (int)(pcVar4 + 1);
  }
  FUN_0040c280(pcVar4,iVar5);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_2);
  }
  ExceptionList = local_10;
  __security_check_cookie
            (uVar2 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar7,uVar8,uVar9,uVar10,uVar11,uVar12,
             uVar13);
  return;
}


/* FUN_00586a80 @ 00586a80  kind=gamemisc  attributed-by=role:dtor-like  size=259 */

void FUN_00586a80(undefined1 *param_1,undefined4 *param_2)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 extraout_EDX;
  undefined4 in_stack_00000018;
  uint in_stack_0000001c;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char local_38 [36];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1268;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar6 = 0;
  puVar3 = &param_2;
  if (0xf < in_stack_0000001c) {
    puVar3 = param_2;
  }
  local_8 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar7 = 0x67452301;
  uVar8 = 0xefcdab89;
  uVar9 = 0x98badcfe;
  uVar10 = 0x10325476;
  local_14 = uVar2;
  FUN_005856b0(puVar3,in_stack_00000018);
  FUN_00584eb0(uVar2);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  if (local_38[0] == '\0') {
    iVar4 = 0;
  }
  else {
    pcVar5 = local_38;
    do {
      cVar1 = *pcVar5;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    iVar4 = (int)pcVar5 - (int)(local_38 + 1);
  }
  FUN_0040c280(local_38,iVar4);
  if (0xf < in_stack_0000001c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_2);
  }
  ExceptionList = local_10;
  __security_check_cookie
            (local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar6,uVar7,uVar8,uVar9,uVar10,uVar11,
             uVar12);
  return;
}


/* FUN_00587020 @ 00587020  kind=gamemisc  attributed-by=role:dtor-like  size=61 */

void FUN_00587020(LPCSTR param_1)

{
  LPCSTR lpFileName;
  uint in_stack_00000018;
  
  lpFileName = (LPCSTR)&param_1;
  if (0xf < in_stack_00000018) {
    lpFileName = param_1;
  }
  CreateFileA(lpFileName,0x80000000,1,(LPSECURITY_ATTRIBUTES)0x0,3,0x80,(HANDLE)0x0);
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  return;
}


/* FUN_00587180 @ 00587180  kind=gamemisc  attributed-by=role:dtor-like  size=95 */

void FUN_00587180(void *param_1)

{
  int in_ECX;
  uint in_stack_00000018;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f12e8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  if ((void **)(in_ECX + 0x84) != &param_1) {
    FUN_0040c0a0(&param_1,0,0xffffffff);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005871f0 @ 005871f0  kind=gamemisc  attributed-by=role:dtor-like  size=148 */

void FUN_005871f0(void *param_1)

{
  int in_ECX;
  undefined4 in_stack_00000014;
  uint in_stack_00000018;
  void *in_stack_0000001c;
  uint in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1320;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 1;
  if ((void **)(in_ECX + 0x54) != &param_1) {
    FUN_0040c0a0(&param_1,0,0xffffffff);
  }
  if ((void **)(in_ECX + 0x6c) != &stack0x0000001c) {
    FUN_0040c0a0(&stack0x0000001c,0,0xffffffff);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_stack_00000018 = 0xf;
  in_stack_00000014 = 0;
  param_1 = (void *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_0000001c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00587290 @ 00587290  kind=gamemisc  attributed-by=role:dtor-like  size=178 */

bool FUN_00587290(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *in_stack_0000001c;
  uint in_stack_0000002c;
  uint in_stack_00000030;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 uStack_8;
  
  uVar2 = in_stack_0000002c;
  uVar1 = in_stack_00000014;
  uStack_8 = 0xffffffff;
  puStack_c = &LAB_006f1350;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar5 = &stack0x0000001c;
  if (0xf < in_stack_00000030) {
    puVar5 = in_stack_0000001c;
  }
  puVar4 = &param_1;
  if (0xf < in_stack_00000018) {
    puVar4 = param_1;
  }
  uVar3 = in_stack_0000002c;
  if (in_stack_00000014 < in_stack_0000002c) {
    uVar3 = in_stack_00000014;
  }
  uVar3 = FUN_0040c590(puVar4,puVar5,uVar3,DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  if (uVar3 == 0) {
    if (uVar1 < uVar2) {
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)(uVar1 != uVar2);
    }
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_stack_00000018 = 0xf;
  in_stack_00000014 = 0;
  param_1 = (undefined4 *)((uint)param_1 & 0xffffff00);
  if (0xf < in_stack_00000030) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_0000001c);
  }
  ExceptionList = local_10;
  return uVar3 == 0;
}


/* FUN_00587350 @ 00587350  kind=gamemisc  attributed-by=role:dtor-like  size=254 */

undefined4 FUN_00587350(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  size_t _Size;
  undefined4 *puVar3;
  int iVar4;
  int in_ECX;
  size_t in_stack_00000014;
  uint in_stack_00000018;
  undefined4 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  _Size = in_stack_00000014;
  puStack_c = &LAB_006f1383;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  puVar3 = operator_new(0xc);
  local_8._0_1_ = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    local_14 = puVar3;
    FUN_005870c0(_Size);
  }
  piVar1 = (int *)(in_ECX + 0x51a0);
  iVar2 = *piVar1;
  local_8 = (uint)local_8._1_3_ << 8;
  local_14 = puVar3;
  iVar4 = FUN_00583cb0(iVar2,*(undefined4 *)(iVar2 + 4),&local_14);
  if (*(int *)(in_ECX + 0x51a4) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x51a4) = *(int *)(in_ECX + 0x51a4) + 1;
  *(int *)(iVar2 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  if (_Size != 0) {
    puVar3 = &param_1;
    if (0xf < in_stack_00000018) {
      puVar3 = param_1;
    }
    memcpy((void *)**(undefined4 **)(*(int *)(*piVar1 + 4) + 8),puVar3,_Size);
  }
  if (0xf < in_stack_00000018) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  ExceptionList = local_10;
  return *(undefined4 *)(*(int *)(*piVar1 + 4) + 8);
}


/* FUN_00605a20 @ 00605a20  kind=gamemisc  attributed-by=role:dtor-like  size=174 */

void FUN_00605a20(int param_1,int param_2,int *param_3)

{
  Widget *in_ECX;
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f0eb8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 7;
  local_18 = 0;
  local_28[0] = (void *)((uint)local_28[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::WorldPreviewWidget::WorldPreviewWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].Object_data.offset_0x4 = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::WorldPreviewWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr =
       (Widget_vftable_for_Deformer *)&cube::WorldPreviewWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_00630a80 @ 00630a80  kind=gamemisc  attributed-by=role:dtor-like  size=77 */

void FUN_00630a80(void *param_1)

{
  if (0xf < *(uint *)((int)param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 0xf;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined1 *)((int)param_1 + 0x28) = 0;
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


/* FUN_00630b60 @ 00630b60  kind=gamemisc  attributed-by=role:dtor-like  size=108 */

void FUN_00630b60(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00630b60(*(undefined4 *)((int)param_1 + 8));
  if (0xf < *(uint *)((int)param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 0xf;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined1 *)((int)param_1 + 0x28) = 0;
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


/* FUN_00636870 @ 00636870  kind=gamemisc  attributed-by=role:dtor-like  size=91 */

void FUN_00636870(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  
  piVar1 = *(int **)(in_ECX + 0x2c);
  piVar3 = (int *)*piVar1;
  if (piVar3 != piVar1) {
    while (piVar3[2] != param_1) {
      piVar3 = (int *)*piVar3;
      if (piVar3 == piVar1) {
        return;
      }
    }
    for (piVar3 = (int *)*piVar1; piVar3 != piVar1; piVar3 = (int *)*piVar3) {
      if (piVar3[2] == param_1) {
        piVar1 = (int *)piVar3[1];
        iVar2 = *piVar3;
        *piVar1 = iVar2;
        *(int **)(iVar2 + 4) = piVar1;
                    /* WARNING: Subroutine does not return */
        operator_delete(piVar3);
      }
    }
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  return;
}


/* FUN_00636ad0 @ 00636ad0  kind=gamemisc  attributed-by=role:dtor-like  size=158 */

void FUN_00636ad0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    piVar3 = *(int **)(in_ECX + 0x34);
    if ((piVar3 != (int *)0x0) && (piVar3[0x12] == 3)) {
      puVar1 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar1 = (undefined4 *)*param_1;
      }
      iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[0x2a] + piVar3[0x1f] * 0x18 + 0x10),puVar1,
                           param_1[4]);
      if (iVar2 != 0) {
        if ((undefined4 *)(piVar3[0x2a] + piVar3[0x1f] * 0x18) != param_1) {
          FUN_0040f680(param_1,0,0xffffffff);
        }
        (**(code **)(*piVar3 + 4))(1);
      }
    }
    piVar3 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar3 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636ad0(param_1);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00650890 @ 00650890  kind=gamemisc  attributed-by=role:dtor-like  size=78 */

void FUN_00650890(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)param_1[0x8c];
  if (piVar1 != *(int **)(in_ECX + 0x84)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*param_1)(1);
  return;
}


/* FUN_006508f0 @ 006508f0  kind=gamemisc  attributed-by=role:dtor-like  size=129 */

void FUN_006508f0(undefined4 *param_1)

{
  int *piVar1;
  int in_ECX;
  
  if (param_1 == *(undefined4 **)(in_ECX + 0xcc)) {
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  if (param_1 == *(undefined4 **)(in_ECX + 0xd0)) {
    *(undefined4 *)(in_ECX + 0xd0) = 0;
  }
  if (param_1 == *(undefined4 **)(in_ECX + 0xfc)) {
    *(undefined4 *)(in_ECX + 0xfc) = 0;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  piVar1 = (int *)param_1[0x56];
  if (piVar1 != *(int **)(in_ECX + 0x7c)) {
    *(int *)piVar1[1] = *piVar1;
    *(int *)(*piVar1 + 4) = piVar1[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  (**(code **)*param_1)(1);
  return;
}


/* FUN_00658530 @ 00658530  kind=gamemisc  attributed-by=role:dtor-like  size=238 */

void FUN_00658530(undefined1 *param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  undefined4 extraout_EDX;
  uint unaff_ESI;
  undefined4 unaff_EDI;
  undefined4 uVar5;
  int local_28;
  basic_istream<char,std::char_traits<char>_> *local_24;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  uVar5 = 0;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_2,(char *)&local_28,(ulonglong)unaff_ESI << 0x20);
  if (local_28 == 0) {
    *(undefined4 *)(param_1 + 0x14) = 0xf;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *param_1 = 0;
    FUN_0040c280(&DAT_006fc918,0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar5);
    return;
  }
  pcVar2 = (char *)FUN_0068d652(local_28 + 1);
  pcVar2[local_28] = '\0';
  std::basic_istream<char,std::char_traits<char>_>::read
            (local_24,pcVar2,CONCAT44(unaff_EDI,local_28 >> 0x1f));
  local_c = 0xf;
  local_10 = 0;
  local_20[0] = (void *)((uint)local_20[0] & 0xffffff00);
  if (*pcVar2 == '\0') {
    iVar3 = 0;
  }
  else {
    pcVar4 = pcVar2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    iVar3 = (int)pcVar4 - (int)(pcVar2 + 1);
  }
  FUN_0040c280(pcVar2,iVar3);
  operator_delete__(pcVar2);
  FUN_004032e0(local_20);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00661830 @ 00661830  kind=gamemisc  attributed-by=role:dtor-like  size=216 */

void FUN_00661830(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_34 [4];
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f72a8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_004e3790(param_1);
  if (iVar1 != *in_ECX) {
    piVar2 = (int *)(iVar1 + 0x10);
    if (7 < *(uint *)(iVar1 + 0x24)) {
      piVar2 = (int *)*piVar2;
    }
    iVar3 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar2,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar3) goto LAB_006618ea;
  }
  local_1c = 7;
  local_20 = 0;
  local_30[0] = (void *)((uint)local_30[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_0058d8f0(local_30);
  FUN_00638db0(local_34,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_30[0]);
  }
LAB_006618ea:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00677d10 @ 00677d10  kind=gamemisc  attributed-by=role:dtor-like  size=239 */

void FUN_00677d10(uint param_1)

{
  int iVar1;
  uint uVar2;
  int *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8430;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x924924a) {
      pvVar3 = operator_new(param_1 * 0x1c);
      if (pvVar3 != (void *)0x0) goto LAB_00677d75;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00677d75:
  local_8 = 0;
  FUN_00677b00(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  iVar1 = *in_ECX;
  if (*in_ECX != 0) {
    FUN_00677ac0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar3;
  in_ECX[2] = (int)((int)pvVar3 + uVar2 * 0x1c);
  in_ECX[1] = (int)((int)pvVar3 + ((in_ECX[1] - iVar1) / 0x1c) * 0x1c);
  ExceptionList = local_10;
  return;
}


/* FUN_006fb1b0 @ 006fb1b0  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_006fb1b0(void)

{
  void *pvVar1;
  
  FUN_0046f990();
  pvVar1 = DAT_0076b06c;
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar1);
}


/* FUN_006fb270 @ 006fb270  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb270(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_0076b104;
  if (7 < DAT_0076b118) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  DAT_0076b118 = 7;
  _DAT_0076b114 = 0;
  DAT_0076b104 = (void *)((uint)DAT_0076b104 & 0xffff0000);
  return;
}


/* FUN_006fb2d0 @ 006fb2d0  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb2d0(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_0076b11c;
  if (7 < DAT_0076b130) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  DAT_0076b130 = 7;
  _DAT_0076b12c = 0;
  DAT_0076b11c = (void *)((uint)DAT_0076b11c & 0xffff0000);
  return;
}


