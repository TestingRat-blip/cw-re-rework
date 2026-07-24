// helpers_dtor_like (game_misc) -- cube. 74 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_dtor_like.h"

/* FUN_004044f0 @ 004044f0  kind=gamemisc  attributed-by=role:dtor-like  size=62 */

undefined1 * FUN_004044f0(byte param_1)

{
  undefined1 *puVar1;
  basic_ifstream<char,std::char_traits<char>_> *in_ECX;
  
  puVar1 = &in_ECX[-1].basic_ifstream<char,std::char_traits<char>_>_data.field_0x8;
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            (in_ECX);
  in_ECX->vbtablePtr = (basic_ifstream<char,std::char_traits<char>_>_vbtable *)_vftable__exref;
  in_ECX->vbtablePtr = (basic_ifstream<char,std::char_traits<char>_>_vbtable *)_vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  return puVar1;
}


/* FUN_00404570 @ 00404570  kind=gamemisc  attributed-by=role:dtor-like  size=116 */

int * __thiscall FUN_00404570(void *this,byte param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)((int)this + -0x68);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (*(int *)(*piVar1 + 4) + -0x68 + (int)this) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar2 = *(int *)(*(int *)((int)this + -0x68) + 4);
  *(int *)(iVar2 + -0x6c + (int)this) = iVar2 + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + -0x50) =
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + -0x50));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)((int)this + -0x48));
  *(code **)this = _vftable__exref;
  *(code **)this = _vftable__exref;
  std::ios_base::_Ios_base_dtor(this);
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar1);
  }
  return piVar1;
}


/* FUN_0040b9f0 @ 0040b9f0  kind=gamemisc  attributed-by=role:dtor-like  size=175 */

undefined4 FUN_0040b9f0(int param_1)

{
  float fVar1;
  void *pvVar2;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  fVar1 = **(float **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = (int)fVar1;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040bd50 @ 0040bd50  kind=gamemisc  attributed-by=role:dtor-like  size=211 */

undefined4 FUN_0040bd50(int param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  iVar3 = **(int **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  local_1c = (int *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = iVar1 - iVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0040e030 @ 0040e030  kind=gamemisc  attributed-by=role:dtor-like  size=240 */

void FUN_0040e030(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_20 [4];
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  if (((*(uint *)(in_ECX + 0x3c) & 2) == 0) && (uVar1 = **(uint **)(in_ECX + 0x20), uVar1 != 0)) {
    uVar2 = *(uint *)(in_ECX + 0x38);
    if (*(uint *)(in_ECX + 0x38) < uVar1) {
      uVar2 = uVar1;
    }
    local_c = 0xf;
    local_10 = 0;
    local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
    FUN_0040c280(**(int **)(in_ECX + 0x10),uVar2 - **(int **)(in_ECX + 0x10));
    FUN_004032e0(local_20);
    uVar3 = extraout_EDX;
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20[0]);
    }
  }
  else {
    if (((*(uint *)(in_ECX + 0x3c) & 4) == 0) && (**(int **)(in_ECX + 0x1c) != 0)) {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
      FUN_0040c280(**(int **)(in_ECX + 0xc),
                   (**(int **)(in_ECX + 0x2c) + **(int **)(in_ECX + 0x1c)) -
                   **(int **)(in_ECX + 0xc));
    }
    else {
      local_c = 0xf;
      local_10 = 0;
      local_20[0] = (void *)((uint)local_20[0]._1_3_ << 8);
    }
    FUN_004032e0(local_20);
    uVar3 = extraout_EDX_00;
    if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_20[0]);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,uVar3,uVar4);
  return;
}


/* FUN_00411ad0 @ 00411ad0  kind=gamemisc  attributed-by=role:dtor-like  size=186 */

void FUN_00411ad0(void)

{
  uint uVar1;
  int *piVar2;
  int in_ECX;
  uint uVar3;
  undefined4 extraout_EDX;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  if (((*(uint *)(in_ECX + 0x3c) & 2) == 0) && (uVar1 = **(uint **)(in_ECX + 0x20), uVar1 != 0)) {
    uVar3 = *(uint *)(in_ECX + 0x38);
    if (*(uint *)(in_ECX + 0x38) < uVar1) {
      uVar3 = uVar1;
    }
    piVar2 = *(int **)(in_ECX + 0x10);
  }
  else {
    if (((*(uint *)(in_ECX + 0x3c) & 4) != 0) || (**(int **)(in_ECX + 0x1c) == 0)) {
      local_c = 7;
      local_10 = 0;
      local_20 = (void *)((uint)local_20._2_2_ << 0x10);
      goto LAB_00411b5e;
    }
    uVar3 = **(int **)(in_ECX + 0x1c) + **(int **)(in_ECX + 0x2c) * 2;
    piVar2 = *(int **)(in_ECX + 0xc);
  }
  local_c = 7;
  local_10 = 0;
  local_20 = (void *)((uint)local_20._2_2_ << 0x10);
  FUN_0040f7a0(*piVar2,(int)(uVar3 - *piVar2) >> 1);
LAB_00411b5e:
  FUN_0040eaf0(&local_20);
  if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar4);
  return;
}


/* FUN_0044b920 @ 0044b920  kind=gamemisc  attributed-by=role:dtor-like  size=202 */

void FUN_0044b920(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2d80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xccccccd) {
      pvVar2 = operator_new(param_1 * 0x14);
      if (pvVar2 != (void *)0x0) goto LAB_0044b97f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0044b97f:
  local_8 = 0;
  FUN_0044a580(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0x14;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0x14);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0x14);
  ExceptionList = local_10;
  return;
}


/* FUN_00453c90 @ 00453c90  kind=gamemisc  attributed-by=role:dtor-like  size=284 */

void FUN_00453c90(undefined4 *param_1,char param_2,uint *param_3,void *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  int *piVar5;
  int *unaff_FS_OFFSET;
  bool bVar6;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3430;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
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
          goto LAB_00453d2c;
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
LAB_00453d2c:
          piVar3 = (int *)piVar5[2];
        }
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (bVar6) {
    if (piVar5 == (int *)*piVar1) {
      bVar6 = true;
      goto LAB_00453d51;
    }
    FUN_0042c740();
  }
  if (((int)param_3[1] < _param_2[5]) ||
     (((int)param_3[1] <= _param_2[5] && (*param_3 <= (uint)_param_2[4])))) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_00453d51:
  puVar4 = (undefined4 *)FUN_00452e30(&param_2,bVar6,piVar5,param_3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_00466b40 @ 00466b40  kind=gamemisc  attributed-by=role:dtor-like  size=71 */

void FUN_00466b40(void)

{
  undefined4 *in_ECX;
  
  if (7 < (uint)in_ECX[0xb]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)in_ECX[6]);
  }
  in_ECX[0xb] = 7;
  in_ECX[10] = 0;
  *(undefined2 *)(in_ECX + 6) = 0;
  if (7 < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[5] = 7;
  in_ECX[4] = 0;
  *(undefined2 *)in_ECX = 0;
  return;
}


/* thunk_FUN_0046ea70 @ 00466be0  kind=gamemisc  attributed-by=role:dtor-like  size=5 */

void thunk_FUN_0046ea70(void)

{
  undefined4 *puVar1;
  int *in_ECX;
  
  puVar1 = (undefined4 *)*in_ECX;
  if (puVar1 == (undefined4 *)0x0) {
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


/* FUN_00467bcb @ 00467bcb  kind=gamemisc  attributed-by=role:dtor-like  size=105 */

void FUN_00467bcb(void)

{
  Machine *unaff_EDI;
  
  unaff_EDI[1].Machine_data.offset_0x40 = 0xf;
  unaff_EDI[1].Machine_data.offset_0x3c = (undefined4 *)0x0;
  *(undefined1 *)&unaff_EDI[1].Machine_data.offset_0x2c = 0;
  if (0xf < (uint)unaff_EDI[1].Machine_data.offset_0x28) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)unaff_EDI[1].Machine_data.offset_0x14);
  }
  unaff_EDI[1].Machine_data.offset_0x28 = 0xf;
  unaff_EDI[1].Machine_data.offset_0x24 = 0;
  *(undefined1 *)&unaff_EDI[1].Machine_data.offset_0x14 = 0;
  if (0xf < (uint)unaff_EDI[1].Machine_data.offset_0x10) {
                    /* WARNING: Subroutine does not return */
    operator_delete(unaff_EDI[1].vftablePtr);
  }
  unaff_EDI[1].Machine_data.offset_0x10 = 0xf;
  unaff_EDI[1].Machine_data.offset_0xc = 0;
  *(undefined1 *)&unaff_EDI[1].vftablePtr = 0;
  abstr::Machine::~Machine(unaff_EDI);
  return;
}


/* FUN_0046db10 @ 0046db10  kind=gamemisc  attributed-by=role:dtor-like  size=81 */

void FUN_0046db10(void *param_1)

{
  if (7 < *(uint *)((int)param_1 + 0x3c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
  *(undefined4 *)((int)param_1 + 0x3c) = 7;
  *(undefined4 *)((int)param_1 + 0x38) = 0;
  *(undefined2 *)((int)param_1 + 0x28) = 0;
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


/* FUN_0046e250 @ 0046e250  kind=gamemisc  attributed-by=role:dtor-like  size=185 */

void FUN_0046e250(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5690;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x10000000) {
      pvVar3 = operator_new(param_1 << 4);
      if (pvVar3 != (void *)0x0) goto LAB_0046e2b1;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e2b1:
  local_8 = 0;
  FUN_00456e90(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)(uVar2 * 0x10 + (int)pvVar3);
  in_ECX[1] = (in_ECX[1] - (int)pvVar1 & 0xfffffff0U) + (int)pvVar3;
  *in_ECX = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_0046e430 @ 0046e430  kind=gamemisc  attributed-by=role:dtor-like  size=216 */

void FUN_0046e430(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e56d0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x2222223) {
      pvVar2 = operator_new(param_1 * 0x78);
      if (pvVar2 != (void *)0x0) goto LAB_0046e493;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e493:
  local_8 = 0;
  FUN_00456ee0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0x78;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0x78);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0x78);
  ExceptionList = local_10;
  return;
}


/* FUN_0046e530 @ 0046e530  kind=gamemisc  attributed-by=role:dtor-like  size=186 */

void FUN_0046e530(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e56f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 * 8);
      if (pvVar3 != (void *)0x0) goto LAB_0046e590;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e590:
  local_8 = 0;
  FUN_00456f20(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  param_1 = in_ECX[1] - (int)pvVar1 >> 3;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)pvVar3 + uVar2 * 8);
  *in_ECX = pvVar3;
  in_ECX[1] = (void *)((int)pvVar3 + param_1 * 8);
  ExceptionList = local_10;
  return;
}


/* FUN_0046eb20 @ 0046eb20  kind=gamemisc  attributed-by=role:dtor-like  size=75 */

void FUN_0046eb20(int *param_1)

{
  int *in_ECX;
  
  if (param_1 == (int *)*in_ECX) {
    return;
  }
  *(int *)param_1[1] = *param_1;
  *(int *)(*param_1 + 4) = param_1[1];
  if (7 < (uint)param_1[7]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[2]);
  }
  param_1[7] = 7;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 2) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_0046f8b0 @ 0046f8b0  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_0046f8b0(void)

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
  if (7 < *(uint *)((int)pvVar2 + 0x24)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 0x10));
  }
  *(undefined4 *)((int)pvVar2 + 0x24) = 7;
  *(undefined4 *)((int)pvVar2 + 0x20) = 0;
  *(undefined2 *)((int)pvVar2 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_0046f9f0 @ 0046f9f0  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_0046f9f0(void)

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
  if (7 < *(uint *)((int)pvVar2 + 0x54)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)pvVar2 + 0x40));
  }
  *(undefined4 *)((int)pvVar2 + 0x54) = 7;
  *(undefined4 *)((int)pvVar2 + 0x50) = 0;
  *(undefined2 *)((int)pvVar2 + 0x40) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_00477d20 @ 00477d20  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

int * FUN_00477d20(int *param_1,int *param_2)

{
  int *in_ECX;
  
  if (param_2 == (int *)*in_ECX) {
    *param_1 = *param_2;
    return param_1;
  }
  *(int *)param_2[1] = *param_2;
  *(int *)(*param_2 + 4) = param_2[1];
  if (7 < (uint)param_2[7]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[2]);
  }
  param_2[7] = 7;
  param_2[6] = 0;
  *(undefined2 *)(param_2 + 2) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_004abcc0 @ 004abcc0  kind=gamemisc  attributed-by=role:dtor-like  size=201 */

void FUN_004abcc0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7e90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      pvVar2 = operator_new(param_1 * 0xc);
      if (pvVar2 != (void *)0x0) goto LAB_004abd1f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004abd1f:
  local_8 = 0;
  FUN_00677760(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0xc;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0xc);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0xc);
  ExceptionList = local_10;
  return;
}


/* FUN_004abdb0 @ 004abdb0  kind=gamemisc  attributed-by=role:dtor-like  size=185 */

void FUN_004abdb0(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e7eb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x10000000) {
      pvVar3 = operator_new(param_1 << 4);
      if (pvVar3 != (void *)0x0) goto LAB_004abe11;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004abe11:
  local_8 = 0;
  FUN_004ab870(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)(uVar2 * 0x10 + (int)pvVar3);
  in_ECX[1] = (in_ECX[1] - (int)pvVar1 & 0xfffffff0U) + (int)pvVar3;
  *in_ECX = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_004cb2c0 @ 004cb2c0  kind=gamemisc  attributed-by=role:dtor-like  size=62 */

ios_base * FUN_004cb2c0(byte param_1)

{
  ios_base *in_ECX;
  
  FUN_004cb220(in_ECX);
  *(code **)in_ECX = _vftable__exref;
  *(code **)in_ECX = _vftable__exref;
  std::ios_base::_Ios_base_dtor(in_ECX);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX + -0x60);
  }
  return in_ECX + -0x60;
}


/* FUN_004ce460 @ 004ce460  kind=gamemisc  attributed-by=role:dtor-like  size=239 */

facet * FUN_004ce460(locale *param_1)

{
  int iVar1;
  uint uVar2;
  _Locimp *p_Var3;
  facet *pfVar4;
  bad_cast local_24 [12];
  _Lockit local_18 [4];
  facet *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1a09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_18,0);
  local_8 = 0;
  local_14 = (facet *)DAT_0076b26c;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = *(int *)param_1;
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    pfVar4 = *(facet **)(*(int *)(iVar1 + 8) + uVar2 * 4);
    if (pfVar4 != (facet *)0x0) goto LAB_004ce532;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_004ce4df:
    if (pfVar4 != (facet *)0x0) goto LAB_004ce532;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(uint *)(p_Var3 + 0xc)) {
      pfVar4 = *(facet **)(*(int *)(p_Var3 + 8) + uVar2 * 4);
      goto LAB_004ce4df;
    }
  }
  pfVar4 = local_14;
  if (local_14 == (facet *)0x0) {
    uVar2 = std::ctype<char>::_Getcat(&local_14,param_1);
    pfVar4 = local_14;
    if (uVar2 == 0xffffffff) {
      std::bad_cast::bad_cast(local_24,"bad cast");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_0074aee8);
    }
    DAT_0076b26c = (int *)local_14;
    (**(code **)(*(int *)local_14 + 4))();
    Facet_Register(pfVar4);
  }
LAB_004ce532:
  std::_Lockit::~_Lockit(local_18);
  ExceptionList = local_10;
  return pfVar4;
}


/* FUN_004e3630 @ 004e3630  kind=gamemisc  attributed-by=role:dtor-like  size=71 */

void FUN_004e3630(int param_1)

{
  if (*(char *)(param_1 + 0xd) == '\0') {
    FUN_004e3630(*(undefined4 *)(param_1 + 8));
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(param_1 + 0x30));
  }
  return;
}


/* FUN_00526fb0 @ 00526fb0  kind=gamemisc  attributed-by=role:dtor-like  size=198 */

void FUN_00526fb0(int param_1,undefined4 param_2,int *param_3)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar1 = (byte *)FUN_0056bce0(*param_3,1);
  iVar3 = *param_3;
  if (((*(byte *)(iVar3 + 0x1c) & 0x10) == 0) && (iVar2 = FUN_0056bce0(iVar3,1), iVar2 == 0)) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(uint *)(iVar3 + 0x18);
    if ((*(ushort *)(iVar3 + 0x1c) & 0x4000) != 0) {
      uVar5 = uVar5 + *(int *)(iVar3 + 0x10);
    }
  }
  if ((pbVar1 != (byte *)0x0) &&
     (iVar3 = FUN_005336b0(param_1,uVar5 + 1,((int)uVar5 >> 0x1f) + (uint)(0xfffffffe < uVar5)),
     iVar3 != 0)) {
    if (0 < (int)uVar5) {
      uVar4 = uVar5;
      pbVar6 = pbVar1;
      do {
        (pbVar6 + 1)[(iVar3 - (int)pbVar1) + -1] = ~((&DAT_007121d8)[*pbVar6] & 0x20) & *pbVar6;
        uVar4 = uVar4 - 1;
        pbVar6 = pbVar6 + 1;
      } while (uVar4 != 0);
    }
    iVar3 = FUN_00575040(param_1 + 8,iVar3,uVar5,1,FUN_00524410);
    if (iVar3 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_0057fb10 @ 0057fb10  kind=gamemisc  attributed-by=role:dtor-like  size=53 */

void FUN_0057fb10(int param_1,byte param_2,uint *param_3)

{
  if ((int)*param_3 < 0) {
    *param_3 = (uint)((*(byte *)(param_1 + 0x10) & param_2) != 0);
    return;
  }
  if (*param_3 == 0) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & ~param_2;
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) | param_2;
  return;
}


/* FUN_00587070 @ 00587070  kind=gamemisc  attributed-by=role:dtor-like  size=58 */

void FUN_00587070(int *param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  
  piVar1 = *(int **)*in_ECX;
  while( true ) {
    if (piVar1 == (int *)*in_ECX) {
      return;
    }
    if (piVar1[2] == *param_1) break;
    piVar1 = (int *)*piVar1;
  }
  piVar2 = (int *)piVar1[1];
  iVar3 = *piVar1;
  *piVar2 = iVar3;
  *(int **)(iVar3 + 4) = piVar2;
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}


/* FUN_005947e0 @ 005947e0  kind=gamemisc  attributed-by=role:dtor-like  size=78 */

void FUN_005947e0(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_005947e0(*(undefined4 *)((int)param_1 + 8));
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


/* FUN_005a7a70 @ 005a7a70  kind=gamemisc  attributed-by=role:dtor-like  size=212 */

void FUN_005a7a70(undefined4 *param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  undefined1 local_3c [4];
  void *local_38 [9];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3528;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar2;
  iVar3 = FUN_005a7c10(param_1);
  if (iVar3 != *in_ECX) {
    cVar1 = FUN_005a78a0(*param_1,param_1[1],*(undefined4 *)(iVar3 + 0x10),
                         *(undefined4 *)(iVar3 + 0x14),uVar2);
    if (cVar1 == '\0') goto LAB_005a7b26;
  }
  FUN_005a7990(param_1);
  local_8 = 0;
  iVar4 = FUN_005a6c30(local_38);
  FUN_005a7290(local_3c,iVar3,iVar4 + 0x10,iVar4);
  if (local_38[0] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_38[0]);
  }
LAB_005a7b26:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a9da0 @ 005a9da0  kind=gamemisc  attributed-by=role:dtor-like  size=143 */

void FUN_005a9da0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  char cVar3;
  int in_ECX;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_10 = (undefined4 *)0x0;
  local_c = 0;
  local_8 = 0;
  FUN_0040d9d0(3);
  puVar2 = local_10;
  *local_10 = param_1;
  local_10[1] = param_2;
  local_10[2] = param_3;
  param_1 = FUN_005a7c10(&local_10);
  iVar1 = *(int *)(in_ECX + 0x140c);
  if (param_1 != iVar1) {
    cVar3 = FUN_005a78a0(puVar2,local_c,*(undefined4 *)(param_1 + 0x10),
                         *(undefined4 *)(param_1 + 0x14));
    if (cVar3 == '\0') goto LAB_005a9e15;
  }
  param_1 = iVar1;
LAB_005a9e15:
  if (param_1 == iVar1) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar2);
}


/* FUN_005ae9f0 @ 005ae9f0  kind=gamemisc  attributed-by=role:dtor-like  size=37 */

void FUN_005ae9f0(undefined4 *param_1)

{
  if ((void *)param_1[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_1[3]);
  }
  if ((void *)*param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*param_1);
  }
  return;
}


/* FUN_005dc644 @ 005dc644  kind=gamemisc  attributed-by=role:dtor-like  size=112 */

void FUN_005dc644(void)

{
  undefined4 uStack00000010;
  void *in_stack_00000074;
  undefined4 uStack00000080;
  undefined4 uStack00000084;
  undefined4 uStack00000088;
  uint in_stack_0000031c;
  void *in_stack_00000324;
  
  uStack00000080 = 0;
  uStack00000084 = 0;
  uStack00000088 = 0;
  if (in_stack_00000074 != (void *)0x0) {
    std::_Container_base0::_Orphan_all((_Container_base0 *)&stack0x00000074);
                    /* WARNING: Subroutine does not return */
    operator_delete(in_stack_00000074);
  }
  uStack00000010 = 0x5dc6b3;
  ExceptionList = in_stack_00000324;
  __security_check_cookie(in_stack_0000031c ^ (uint)&stack0x00000014);
  return;
}


/* FUN_005fae00 @ 005fae00  kind=gamemisc  attributed-by=role:dtor-like  size=58 */

void FUN_005fae00(void)

{
  void *in_ECX;
  int iVar1;
  
  _eh_vector_constructor_iterator_
            (in_ECX,0x34,0x1000,cube::ZoneTile::ZoneTile,cube::ZoneTile::~ZoneTile);
  iVar1 = 0x3f;
  do {
    FUN_005c3bb0();
    iVar1 = iVar1 + -1;
  } while (-1 < iVar1);
  return;
}


/* FUN_005fbb30 @ 005fbb30  kind=gamemisc  attributed-by=role:dtor-like  size=186 */

void FUN_005fbb30(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f4a30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 * 8);
      if (pvVar3 != (void *)0x0) goto LAB_005fbb90;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005fbb90:
  local_8 = 0;
  FUN_00456f70(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  param_1 = in_ECX[1] - (int)pvVar1 >> 3;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)pvVar3 + uVar2 * 8);
  *in_ECX = pvVar3;
  in_ECX[1] = (void *)((int)pvVar3 + param_1 * 8);
  ExceptionList = local_10;
  return;
}


/* FUN_00609320 @ 00609320  kind=gamemisc  attributed-by=role:dtor-like  size=185 */

void FUN_00609320(uint param_1)

{
  void *pvVar1;
  uint uVar2;
  undefined4 *in_ECX;
  void *pvVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5150;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x10000000) {
      pvVar3 = operator_new(param_1 << 4);
      if (pvVar3 != (void *)0x0) goto LAB_00609381;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00609381:
  local_8 = 0;
  FUN_00456d60(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)(uVar2 * 0x10 + (int)pvVar3);
  in_ECX[1] = (in_ECX[1] - (int)pvVar1 & 0xfffffff0U) + (int)pvVar3;
  *in_ECX = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_006290d0 @ 006290d0  kind=gamemisc  attributed-by=role:dtor-like  size=98 */

void FUN_006290d0(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  iVar1 = param_1;
  if ((~(byte)(*(uint *)(param_1 + 200) >> 2) & 1) != 0) {
    if ((param_1 != *(int *)(in_ECX + 0x148)) && (*(int *)(param_1 + 0x40) != 0)) {
      param_1 = *(int *)(param_1 + 0x40);
      FUN_004860b0(&param_1);
      return;
    }
    piVar2 = (int *)**(int **)(param_1 + 0x2c);
    if (piVar2 != *(int **)(param_1 + 0x2c)) {
      do {
        FUN_006290d0(piVar2[2],param_2);
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(iVar1 + 0x2c));
    }
  }
  return;
}


/* FUN_0062b920 @ 0062b920  kind=gamemisc  attributed-by=role:dtor-like  size=278 */

void FUN_0062b920(void)

{
  int iVar1;
  int *piVar2;
  int in_ECX;
  int *piVar3;
  int *local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5720;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(int *)(in_ECX + 0x90) == 0) || (*(int *)(in_ECX + 0x148) == 0)) {
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_34 = (int *)0x0;
  local_30 = 0;
  ExceptionList = &local_10;
  local_34 = (int *)FUN_0046d550(0,0);
  local_8 = 0;
  FUN_0040eb60(L"caption");
  local_8._0_1_ = 1;
  FUN_00633dd0(&local_34,local_2c);
  local_8 = (uint)local_8._1_3_ << 8;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  piVar3 = (int *)*local_34;
  piVar2 = local_34;
  if (piVar3 != local_34) {
    do {
      iVar1 = *(int *)(piVar3[2] + 0x34);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x48) == 3)) {
        FUN_00663eb0(in_ECX + 0x80,piVar3[2]);
        piVar2 = local_34;
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != piVar2);
  }
  piVar3 = (int *)*piVar2;
  *piVar2 = (int)piVar2;
  local_34[1] = (int)local_34;
  local_30 = 0;
  if (piVar3 == local_34) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar3);
}


/* FUN_00636c40 @ 00636c40  kind=gamemisc  attributed-by=role:dtor-like  size=102 */

void FUN_00636c40(void)

{
  int in_ECX;
  int *piVar1;
  
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) && (*(char *)(in_ECX + 0xcc) != '\0')) {
    if (*(int *)(in_ECX + 0x34) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x34) + 0x2d) = 0;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x38) + 0x2d) = 0;
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x3c) + 0x2d) = 0;
    }
    if (*(int *)(in_ECX + 0x40) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x40) + 0x134) = 0;
    }
    piVar1 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar1 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636c40();
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00639300 @ 00639300  kind=gamemisc  attributed-by=role:dtor-like  size=91 */

void FUN_00639300(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00639300(*(undefined4 *)((int)param_1 + 8));
  if (*(void **)((int)param_1 + 0x28) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x28));
  }
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


/* FUN_00639cf0 @ 00639cf0  kind=gamemisc  attributed-by=role:dtor-like  size=39 */

void FUN_00639cf0(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if ((void *)*param_1 != (void *)0x0) break;
    param_1 = param_1 + 3;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*param_1);
}


/* FUN_0063a690 @ 0063a690  kind=gamemisc  attributed-by=role:dtor-like  size=95 */

undefined4 * FUN_0063a690(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != param_1) {
      if ((void *)*param_3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*param_3);
      }
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0063c680 @ 0063c680  kind=gamemisc  attributed-by=role:dtor-like  size=114 */

void FUN_0063c680(void)

{
  undefined4 uVar1;
  uint uVar2;
  int in_ECX;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f5cac;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = *(undefined4 *)(in_ECX + 0x1c);
  uVar3 = *(undefined4 *)(in_ECX + 0x14);
  local_8 = 0;
  uVar2 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 4),cube::Controller::vfunction12);
  FUN_0063d9c0(uVar1,uVar2,uVar3);
  local_8 = 0xffffffff;
  Concurrency::details::_Concurrent_vector_base_v4::~_Concurrent_vector_base_v4
            ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  ExceptionList = local_10;
  return;
}


/* FUN_0063da20 @ 0063da20  kind=gamemisc  attributed-by=role:dtor-like  size=122 */

void FUN_0063da20(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x40000000) {
      _Dst = operator_new(param_1 * 4);
      if (_Dst != (void *)0x0) goto LAB_0063da55;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0063da55:
  memmove(_Dst,(void *)*in_ECX,in_ECX[1] - (int)*in_ECX & 0xfffffffc);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)_Dst + param_1 * 4);
  *in_ECX = _Dst;
  in_ECX[1] = (void *)((int)_Dst + (in_ECX[1] - (int)pvVar1 >> 2) * 4);
  return;
}


/* FUN_00641180 @ 00641180  kind=gamemisc  attributed-by=role:dtor-like  size=250 */

StaticMeshShape * FUN_00641180(void)

{
  int iVar1;
  StaticMeshShape *pSVar2;
  int in_ECX;
  int iVar3;
  int iVar4;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5f8b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = *(int *)(in_ECX + 0xc10);
  local_14 = 0;
  iVar4 = 0;
  if ((iVar1 != 0) && ((~(byte)(*(uint *)(in_ECX + 0x85c) >> 2) & 1) != 0)) {
    cube::Controller::vfunction12();
    *(undefined4 *)(in_ECX + 0xc10) = 0;
    iVar4 = iVar1;
  }
  iVar1 = *(int *)(in_ECX + 0xc14);
  iVar3 = 0;
  if ((iVar1 != 0) && ((*(uint *)(in_ECX + 0x85c) >> 1 & 1) != 0)) {
    cube::Controller::vfunction12();
    *(undefined4 *)(in_ECX + 0xc14) = 0;
    iVar3 = iVar1;
  }
  iVar1 = *(int *)(in_ECX + 0xc18);
  if ((iVar1 != 0) && ((*(uint *)(in_ECX + 0x85c) >> 4 & 1) != 0)) {
    cube::Controller::vfunction12();
    *(undefined4 *)(in_ECX + 0xc18) = 0;
    local_14 = iVar1;
  }
  pSVar2 = operator_new(0x78);
  local_8 = 0;
  if (pSVar2 != (StaticMeshShape *)0x0) {
    pSVar2 = plasma::StaticMeshShape::StaticMeshShape
                       (pSVar2,*(int *)(in_ECX + 4),iVar4,iVar3,local_14,in_ECX + 0xc);
    ExceptionList = local_10;
    return pSVar2;
  }
  ExceptionList = local_10;
  return (StaticMeshShape *)0x0;
}


/* FUN_00659670 @ 00659670  kind=gamemisc  attributed-by=role:dtor-like  size=202 */

void FUN_00659670(undefined4 param_1,basic_istream<char,std::char_traits<char>_> *param_2)

{
  longlong lVar1;
  char *pcVar2;
  undefined4 extraout_EDX;
  undefined4 unaff_ESI;
  uint unaff_EDI;
  undefined4 uVar3;
  int local_28;
  basic_istream<char,std::char_traits<char>_> *local_24;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_24 = param_2;
  uVar3 = 0;
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_2,(char *)&local_28,(ulonglong)unaff_EDI << 0x20);
  if (local_28 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar3);
    return;
  }
  lVar1 = (ulonglong)(local_28 + 1) * 2;
  pcVar2 = (char *)FUN_0068d652(-(uint)((int)((ulonglong)lVar1 >> 0x20) != 0) | (uint)lVar1);
  (pcVar2 + local_28 * 2)[0] = '\0';
  (pcVar2 + local_28 * 2)[1] = '\0';
  std::basic_istream<char,std::char_traits<char>_>::read
            (local_24,pcVar2,CONCAT44(unaff_ESI,local_28 * 2 >> 0x1f));
  FUN_0040eb60(pcVar2);
  operator_delete__(pcVar2);
  FUN_0040eaf0(local_20);
  if (7 < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065b180 @ 0065b180  kind=gamemisc  attributed-by=role:dtor-like  size=57 */

void FUN_0065b180(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_0065b180(*(undefined4 *)((int)param_1 + 8));
  if (*(void **)((int)param_1 + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x18));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00661940 @ 00661940  kind=gamemisc  attributed-by=role:dtor-like  size=78 */

void FUN_00661940(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_00661940(*(undefined4 *)((int)param_1 + 8));
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


/* FUN_00663510 @ 00663510  kind=gamemisc  attributed-by=role:dtor-like  size=52 */

void FUN_00663510(void)

{
  Attribute *in_ECX;
  undefined1 local_5;
  
  if (in_ECX[1].vftablePtr != (Attribute_vftable *)0x0) {
    FUN_00452650(in_ECX[1].vftablePtr,in_ECX[1].Attribute_data.offset_0x0,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete(in_ECX[1].vftablePtr);
  }
  plasma::Attribute::~Attribute(in_ECX);
  return;
}


/* FUN_0066dcb0 @ 0066dcb0  kind=gamemisc  attributed-by=role:dtor-like  size=193 */

void FUN_0066dcb0(int *param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
  local_8;
  
  uVar1 = param_1[1];
  if ((uVar1 < (uint)param_2[1]) && (iVar2 = *param_1, iVar2 == *param_2)) {
    uVar3 = param_2[1] - uVar1;
    if (uVar3 == 1) {
      piVar4 = (int *)param_1[2];
      if (piVar4 == (int *)0x0) {
        uVar3 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar1);
        piVar4 = (int *)(*(int *)(*(int *)(iVar2 + 0x1c) + uVar3 * 4) +
                        (uVar1 - (1 << ((byte)uVar3 & 0x1f) & 0xfffffffeU)) * 4);
        param_1[2] = (int)piVar4;
      }
      iVar2 = *piVar4;
      *(undefined4 *)(iVar2 + 0x2c) = 0;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      *(undefined4 *)(iVar2 + 0x10) = 0;
      *(undefined4 *)(iVar2 + 0x14) = 0;
      *(undefined4 *)(iVar2 + 0x18) = 0;
      *(undefined4 *)(iVar2 + 0x1c) = 0;
      *(undefined4 *)(iVar2 + 0x20) = 0;
      *(undefined4 *)(iVar2 + 0x24) = 0;
      *(undefined4 *)(iVar2 + 0x28) = 0;
      return;
    }
    local_8.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_c31a3785b8ee29a1ce8445e019cbe6ee>,Concurrency::auto_partitioner,1>_>_>
              (&local_8,param_1,uVar3,(int *)&local_8,param_3);
  }
  return;
}


/* FUN_0066dd80 @ 0066dd80  kind=gamemisc  attributed-by=role:dtor-like  size=125 */

void FUN_0066dd80(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 4);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066f380(*(undefined4 *)pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadVertex*,std::allocator<plasma::QuadVertex*>_>,plasma::QuadVertex*>,int,<lambda_fe4ce4a6aaf0318c62c756eaccc0431b>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066de00 @ 0066de00  kind=gamemisc  attributed-by=role:dtor-like  size=126 */

void FUN_0066de00(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066eef0(pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_9843e8019373a7557d3f3e498d32c258>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066de80 @ 0066de80  kind=gamemisc  attributed-by=role:dtor-like  size=126 */

void FUN_0066de80(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x4c);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066f280(pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadEdge,std::allocator<plasma::QuadEdge>_>,plasma::QuadEdge>,int,<lambda_e3fd6255bcf168381cb2d01c4cfc52ca>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066df00 @ 0066df00  kind=gamemisc  attributed-by=role:dtor-like  size=126 */

void FUN_0066df00(_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
                  param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  deleting_destructor *pdVar1;
  deleting_destructor *pdVar2;
  _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
  _Var3;
  uint uVar4;
  deleting_destructor *pdVar5;
  
  _Var3.vftablePtr = param_1.vftablePtr;
  pdVar1 = param_1.vftablePtr[1].deleting_destructor;
  if ((pdVar1 < (deleting_destructor *)param_2[1]) &&
     (pdVar2 = (param_1.vftablePtr)->deleting_destructor, pdVar2 == (deleting_destructor *)*param_2)
     ) {
    uVar4 = param_2[1] - (int)pdVar1;
    if (uVar4 == 1) {
      pdVar5 = param_1.vftablePtr[2].deleting_destructor;
      if (pdVar5 == (deleting_destructor *)0x0) {
        uVar4 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of((uint)pdVar1);
        pdVar5 = (deleting_destructor *)
                 (*(int *)(*(int *)(pdVar2 + 0x1c) + uVar4 * 4) +
                 ((int)pdVar1 - (1 << ((byte)uVar4 & 0x1f) & 0xfffffffeU)) * 0x7c);
        _Var3.vftablePtr[2].deleting_destructor = pdVar5;
      }
      FUN_0066ed80(pdVar5);
      return;
    }
    param_1.vftablePtr =
         (_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>_vftable
          *)0x1;
    Concurrency::details::
    _MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
    ::
    ~_MallocaArrayHolder<Concurrency::task_handle<Concurrency::_Parallel_chunk_helper<Concurrency::details::_Vector_iterator<Concurrency::concurrent_vector<plasma::QuadFace,std::allocator<plasma::QuadFace>_>,plasma::QuadFace>,int,<lambda_37224fa58ba67e25838a8994307bb82e>,Concurrency::auto_partitioner,1>_>_>
              (&param_1,_Var3.vftablePtr,uVar4,(int *)&param_1,param_3);
  }
  return;
}


/* FUN_0066e970 @ 0066e970  kind=gamemisc  attributed-by=role:dtor-like  size=47 */

void FUN_0066e970(void)

{
  int *piVar1;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x10) != 2) {
    if (*(int *)(in_ECX + 4) != 0) {
      piVar1 = *(int **)(*(int *)(in_ECX + 4) + 8);
      LOCK();
      *piVar1 = *piVar1 + 1;
      UNLOCK();
    }
    LOCK();
    *(undefined4 *)(in_ECX + 0x10) = 1;
    UNLOCK();
  }
                    /* WARNING: Could not recover jumptable at 0x0066e999. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  Concurrency::details::_Cancellation_beacon::~_Cancellation_beacon
            ((_Cancellation_beacon *)(in_ECX + 8));
  return;
}


/* FUN_00672e80 @ 00672e80  kind=gamemisc  attributed-by=role:dtor-like  size=201 */

void FUN_00672e80(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8280;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      pvVar2 = operator_new(param_1 * 0xc);
      if (pvVar2 != (void *)0x0) goto LAB_00672edf;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00672edf:
  local_8 = 0;
  FUN_005c3790(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0xc;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0xc);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0xc);
  ExceptionList = local_10;
  return;
}


/* FUN_00677ac0 @ 00677ac0  kind=gamemisc  attributed-by=role:dtor-like  size=59 */

void FUN_00677ac0(undefined4 *param_1,undefined4 *param_2)

{
  while( true ) {
    if (param_1 == param_2) {
      return;
    }
    if (7 < (uint)param_1[5]) break;
    param_1[5] = 7;
    param_1[4] = 0;
    *(undefined2 *)param_1 = 0;
    param_1 = param_1 + 7;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*param_1);
}


/* FUN_00681840 @ 00681840  kind=gamemisc  attributed-by=role:dtor-like  size=69 */

void FUN_00681840(void)

{
  int in_ECX;
  
  if (0xf < *(uint *)(in_ECX + 0x30)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x1c));
  }
  *(undefined4 *)(in_ECX + 0x30) = 0xf;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 0;
  if (0xf < *(uint *)(in_ECX + 0x18)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 4));
  }
  *(undefined4 *)(in_ECX + 0x18) = 0xf;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined1 *)(in_ECX + 4) = 0;
  return;
}


/* FUN_00681890 @ 00681890  kind=gamemisc  attributed-by=role:dtor-like  size=261 */

undefined4 * FUN_00681890(uint *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7ce0;
  local_10 = ExceptionList;
  puVar2 = (undefined4 *)*in_ECX;
  puVar6 = puVar2;
  if (*(char *)((int)puVar2[1] + 0xd) == '\0') {
    puVar4 = (undefined4 *)puVar2[1];
    do {
      if ((uint)puVar4[4] < *param_1) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  if ((puVar6 != puVar2) && ((uint)puVar6[4] <= *param_1)) {
    return puVar6 + 5;
  }
  local_18 = 0;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_0046d550(0,0);
  local_28 = *puVar1;
  local_8 = 0;
  local_1c = puVar2;
  local_1c = (undefined4 *)FUN_0046d550(0,0);
  local_20 = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = puVar2;
  iVar3 = FUN_00665bd0(&local_28);
  FUN_0067fa60(&param_1,puVar6,iVar3 + 0x10,iVar3);
  puVar2 = (undefined4 *)*local_24;
  *local_24 = local_24;
  local_24[1] = local_24;
  if (puVar2 != local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_24);
}


/* FUN_00681a70 @ 00681a70  kind=gamemisc  attributed-by=role:dtor-like  size=122 */

void FUN_00681a70(uint param_1)

{
  void *pvVar1;
  undefined4 *in_ECX;
  void *_Dst;
  
  _Dst = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      _Dst = operator_new(param_1 * 8);
      if (_Dst != (void *)0x0) goto LAB_00681aa5;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00681aa5:
  memmove(_Dst,(void *)*in_ECX,in_ECX[1] - (int)*in_ECX & 0xfffffff8);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)((int)_Dst + param_1 * 8);
  *in_ECX = _Dst;
  in_ECX[1] = (void *)((int)_Dst + (in_ECX[1] - (int)pvVar1 >> 3) * 8);
  return;
}


/* FUN_00683750 @ 00683750  kind=gamemisc  attributed-by=role:dtor-like  size=280 */

void FUN_00683750(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f90c0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  uVar2 = FUN_0064f200(0,&local_44);
  local_8 = 0xffffffff;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  cVar1 = FUN_00688490();
  while( true ) {
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    local_8 = 1;
    cVar1 = FUN_00687560(uVar2,local_2c);
    if (cVar1 == '\0') {
      FUN_006886f0();
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) break;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    cVar1 = FUN_00688490();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_00683de0 @ 00683de0  kind=gamemisc  attributed-by=role:dtor-like  size=280 */

void FUN_00683de0(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f90c0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  uVar2 = FUN_0064f300(0,&local_44);
  local_8 = 0xffffffff;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  cVar1 = FUN_00688490();
  while( true ) {
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    local_8 = 1;
    cVar1 = FUN_00687560(uVar2,local_2c);
    if (cVar1 == '\0') {
      FUN_006886f0();
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) break;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    cVar1 = FUN_00688490();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* FUN_00687440 @ 00687440  kind=gamemisc  attributed-by=role:dtor-like  size=280 */

void FUN_00687440(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 local_44;
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f90c0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00688180(local_14);
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44._2_2_ << 0x10);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
  uVar2 = FUN_006503e0(0,&local_44);
  local_8 = 0xffffffff;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44);
  }
  local_30 = 7;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffff0000);
  cVar1 = FUN_00688490();
  while( true ) {
    if (cVar1 != '\0') {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00688220(local_2c,1);
    local_8 = 1;
    cVar1 = FUN_00687560(uVar2,local_2c);
    if (cVar1 == '\0') {
      FUN_006886f0();
    }
    local_8 = 0xffffffff;
    if (0xf < local_18) break;
    local_18 = 0xf;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
    cVar1 = FUN_00688490();
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c[0]);
}


/* __IsNonwritableInCurrentImage @ 0068e6b0  kind=gamemisc  attributed-by=role:dtor-like  size=164 */

/* Library Function - Single Match
    __IsNonwritableInCurrentImage
   
   Library: Visual Studio 2012 Release */

BOOL __cdecl __IsNonwritableInCurrentImage(PBYTE pTarget)

{
  BOOL BVar1;
  PIMAGE_SECTION_HEADER p_Var2;
  void *local_14;
  code *pcStack_10;
  uint local_c;
  undefined4 local_8;
  
  pcStack_10 = FUN_0068e489;
  local_14 = ExceptionList;
  local_c = DAT_0076aa78 ^ 0x760730;
  ExceptionList = &local_14;
  local_8 = 0;
  BVar1 = __ValidateImageBase((PBYTE)&IMAGE_DOS_HEADER_00400000);
  if (BVar1 != 0) {
    p_Var2 = __FindPESection((PBYTE)&IMAGE_DOS_HEADER_00400000,(DWORD_PTR)(pTarget + -0x400000));
    if (p_Var2 != (PIMAGE_SECTION_HEADER)0x0) {
      ExceptionList = local_14;
      return ~(p_Var2->Characteristics >> 0x1f) & 1;
    }
  }
  ExceptionList = local_14;
  return 0;
}


/* FUN_006a4a40 @ 006a4a40  kind=gamemisc  attributed-by=role:dtor-like  size=218 */

void FUN_006a4a40(undefined4 *param_1,undefined4 param_2,int param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  short sVar4;
  uint uVar5;
  short sVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  
  iVar9 = param_1[1];
  iVar2 = (iVar9 + -1 + param_3 & -iVar9) >> ((byte)*param_1 & 0x1f);
  iVar7 = iVar2;
  if ((int)param_1[6] < (int)((param_4 - iVar9) - param_3)) {
    iVar7 = (int)(-iVar9 & param_4) >> ((byte)*param_1 & 0x1f);
  }
  if ((-1 < iVar7) && (uVar5 = (uint)*(ushort *)(param_1 + 0xf), iVar2 < (int)uVar5)) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    if ((int)uVar5 <= iVar7) {
      iVar7 = uVar5 - 1;
    }
    sVar4 = (short)(iVar2 >> 3);
    iVar9 = (int)sVar4;
    sVar6 = (short)(iVar7 >> 3);
    bVar1 = ~(byte)(0x7f >> ((byte)iVar7 & 7));
    if (iVar9 < *(short *)((int)param_1 + 0xa2)) {
      *(short *)((int)param_1 + 0xa2) = sVar4;
    }
    if ((int)*(short *)(param_1 + 0x29) < (int)sVar6) {
      *(short *)(param_1 + 0x29) = sVar6;
    }
    iVar7 = sVar6 - iVar9;
    pbVar3 = (byte *)(param_1[0x26] + param_1[0x10] + iVar9);
    bVar8 = (byte)(0xff >> ((byte)iVar2 & 7));
    if (0 < iVar7) {
      *pbVar3 = *pbVar3 | bVar8;
      while (iVar7 = iVar7 + -1, 0 < iVar7) {
        pbVar3 = pbVar3 + 1;
        *pbVar3 = 0xff;
      }
      pbVar3[1] = pbVar3[1] | bVar1;
      return;
    }
    *pbVar3 = *pbVar3 | bVar1 & bVar8;
  }
  return;
}


/* FUN_006a59f0 @ 006a59f0  kind=gamemisc  attributed-by=role:dtor-like  size=27 */

void FUN_006a59f0(void)

{
  byte *pbVar1;
  uint in_ECX;
  uint *in_EDX;
  
  if (in_ECX < *in_EDX) {
    pbVar1 = (byte *)(((int)in_ECX >> 3) + in_EDX[2]);
    *pbVar1 = *pbVar1 & ~(byte)(0x80 >> ((byte)in_ECX & 7));
  }
  return;
}


/* FUN_006a5b70 @ 006a5b70  kind=gamemisc  attributed-by=role:dtor-like  size=138 */

int FUN_006a5b70(int param_1,int param_2)

{
  int iVar1;
  byte bVar2;
  int *in_ECX;
  uint in_EDX;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar1 = FUN_006a5b30();
  if ((iVar1 == 0) && (iVar1 = FUN_006a5970(), iVar1 == 0)) {
    pbVar3 = (byte *)((in_EDX >> 3) + param_1);
    iVar4 = 0x80 >> ((byte)in_EDX & 7);
    *in_ECX = param_2;
    pbVar6 = (byte *)in_ECX[2];
    iVar5 = 0x80;
    for (; param_2 != 0; param_2 = param_2 + -1) {
      bVar2 = *pbVar6 & ~(byte)iVar5;
      if ((*pbVar3 & (byte)iVar4) != 0) {
        bVar2 = bVar2 | (byte)iVar5;
      }
      iVar4 = iVar4 >> 1;
      *pbVar6 = bVar2;
      if (iVar4 == 0) {
        pbVar3 = pbVar3 + 1;
        iVar4 = 0x80;
      }
      iVar5 = iVar5 >> 1;
      if (iVar5 == 0) {
        pbVar6 = pbVar6 + 1;
        iVar5 = 0x80;
      }
    }
  }
  return iVar1;
}


/* FUN_006a5c00 @ 006a5c00  kind=gamemisc  attributed-by=role:dtor-like  size=87 */

uint FUN_006a5c00(void)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint *puVar3;
  int in_ECX;
  uint *puVar4;
  int in_EDX;
  byte *pbVar5;
  byte *pbVar6;
  
  puVar3 = (uint *)(in_EAX * 0x10 + *(int *)(in_EDX + 8));
  puVar4 = (uint *)(in_ECX * 0x10 + *(int *)(in_EDX + 8));
  pbVar5 = (byte *)puVar4[2];
  uVar1 = *puVar4;
  pbVar6 = (byte *)puVar3[2];
  uVar2 = *puVar3;
  if (uVar2 < uVar1) {
    uVar1 = uVar2;
  }
  for (; 7 < uVar1; uVar1 = uVar1 - 8) {
    if ((*pbVar5 & *pbVar6) != 0) {
      return 1;
    }
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  if (uVar1 == 0) {
    return 0;
  }
  return (uint)(*pbVar6 & *pbVar5) & ~(0xff >> ((byte)uVar1 & 0x1f));
}


/* FUN_006bf9f0 @ 006bf9f0  kind=gamemisc  attributed-by=role:dtor-like  size=137 */

void FUN_006bf9f0(int param_1)

{
  FUN_006bf970(~(byte)(*(uint *)(param_1 + 0x10) >> 9) & 1);
  FUN_006bf9b0();
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0;
  if (*(char *)(param_1 + 0x40) == '\0') {
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(undefined4 *)(param_1 + 0x3c) = 0;
  }
  return;
}


/* FUN_006c2810 @ 006c2810  kind=gamemisc  attributed-by=role:dtor-like  size=55 */

void FUN_006c2810(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int in_EDX;
  
  iVar1 = in_ECX[1];
  if (iVar1 - 1U < 2) {
    iVar2 = 0;
    if (*in_ECX != 0) {
      iVar2 = iVar1;
    }
    *(byte *)(in_EDX + 0x150) = ~(byte)iVar1 & *(byte *)(in_EDX + 0x150) | (byte)iVar2;
    return;
  }
  if (*(char *)(in_EDX + 0x231) != '\0') {
    *(undefined4 *)(in_EDX + 0xc) = 0x86;
  }
  return;
}


/* FUN_006ce050 @ 006ce050  kind=gamemisc  attributed-by=role:dtor-like  size=139 */

void FUN_006ce050(int param_1)

{
  uint *puVar1;
  byte bVar2;
  void *pvVar3;
  void *pvVar4;
  byte *pbVar5;
  int *in_EAX;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  byte bVar10;
  uint *in_ECX;
  int iVar11;
  byte *_Src;
  uint uVar12;
  int iVar13;
  uint local_3c;
  void *local_38;
  uint local_34;
  uint local_30;
  byte *local_2c;
  uint uStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  uint uStack_10;
  uint uStack_c;
  undefined4 uStack_8;
  undefined4 uStack_4;
  
  pvVar3 = (void *)in_ECX[0xd];
  uVar12 = in_ECX[7];
  local_34 = in_EAX[1];
  _Src = (byte *)*in_EAX;
  if (pvVar3 < (void *)in_ECX[0xc]) {
    local_30 = (int)in_ECX[0xc] + (-1 - (int)pvVar3);
  }
  else {
    local_30 = in_ECX[0xb] - (int)pvVar3;
  }
  uVar9 = *in_ECX;
  pbVar5 = _Src;
  uVar7 = in_ECX[8];
  uVar6 = in_ECX[8];
  do {
    local_3c = uVar6;
    local_38 = pvVar3;
    if (9 < uVar9) {
      iVar13 = -2;
LAB_006ce0a3:
      in_ECX[8] = local_3c;
LAB_006ce0aa:
      in_ECX[7] = uVar12;
      in_EAX[1] = local_34;
LAB_006ce0b4:
      iVar11 = (int)_Src - *in_EAX;
      *in_EAX = (int)_Src;
LAB_006ce0ba:
      in_EAX[2] = in_EAX[2] + iVar11;
      in_ECX[0xd] = (uint)local_38;
      FUN_006cd870(iVar13);
      return;
    }
    local_2c = _Src;
    switch((&PTR_LAB_006cea8c)[uVar9]) {
    case (undefined *)0x6ce0df:
      local_2c = pbVar5;
      for (; uVar6 = uVar7, uVar12 < 3; uVar12 = uVar12 + 8) {
        if (local_34 == 0) goto LAB_006ce7a8;
        bVar2 = *_Src;
        local_34 = local_34 - 1;
        _Src = _Src + 1;
        param_1 = 0;
        local_3c = uVar6 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
        uVar7 = local_3c;
        local_2c = _Src;
      }
      in_ECX[6] = uVar6 & 1;
      switch((uVar6 & 7) >> 1) {
      case 0:
        uVar9 = uVar12 - 3 & 7;
        uVar6 = (uVar6 >> 3) >> (sbyte)uVar9;
        uVar12 = (uVar12 - 3) - uVar9;
        *in_ECX = 1;
        local_3c = uVar6;
        break;
      case 1:
        FUN_006cd850(&uStack_20);
        uVar9 = FUN_006cd960(uStack_14,uStack_18,uStack_1c,uStack_20);
        in_ECX[1] = uVar9;
        if (uVar9 == 0) {
          iVar13 = -4;
          goto LAB_006ce0a3;
        }
        uVar6 = local_3c >> 3;
        uVar12 = uVar12 - 3;
        *in_ECX = 6;
        local_3c = uVar6;
        break;
      case 2:
        uVar6 = uVar6 >> 3;
        uVar12 = uVar12 - 3;
        *in_ECX = 3;
        local_3c = uVar6;
        break;
      case 3:
        *in_ECX = 9;
        in_EAX[6] = (int)"invalid block type";
        in_ECX[8] = local_3c >> 3;
        uVar12 = uVar12 - 3;
        iVar13 = -3;
        goto LAB_006ce0aa;
      }
      break;
    case (undefined *)0x6ce1b9:
      for (; uVar12 < 0x20; uVar12 = uVar12 + 8) {
        if (local_34 == 0) {
          in_ECX[8] = local_3c;
          in_ECX[7] = uVar12;
          in_EAX[1] = 0;
          iVar13 = param_1;
          goto LAB_006ce0b4;
        }
        bVar2 = *_Src;
        local_34 = local_34 - 1;
        _Src = _Src + 1;
        param_1 = 0;
        uVar7 = uVar7 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
        local_3c = uVar7;
        pbVar5 = _Src;
      }
      uVar9 = uVar7 & 0xffff;
      if (~uVar7 >> 0x10 != uVar9) {
        *in_ECX = 9;
        in_EAX[6] = (int)"invalid stored block lengths";
        goto LAB_006ce82e;
      }
      uVar6 = 0;
      uVar12 = 0;
      in_ECX[1] = uVar9;
      local_3c = 0;
      local_2c = pbVar5;
      if (uVar9 == 0) {
        *in_ECX = -(uint)(in_ECX[6] != 0) & 7;
      }
      else {
        *in_ECX = 2;
      }
      break;
    case (undefined *)0x6ce232:
      if (local_34 == 0) {
LAB_006ce861:
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        in_EAX[1] = 0;
        in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
        *in_EAX = (int)_Src;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(param_1);
        return;
      }
      if (local_30 == 0) {
        if (pvVar3 == (void *)in_ECX[0xb]) {
          pvVar4 = (void *)in_ECX[0xc];
          local_38 = (void *)in_ECX[10];
          if (local_38 != pvVar4) {
            if (local_38 < pvVar4) {
              local_30 = (int)pvVar4 + (-1 - (int)local_38);
            }
            else {
              local_30 = (int)in_ECX[0xb] - (int)local_38;
            }
            pvVar3 = local_38;
            if (local_30 != 0) goto LAB_006ce2df;
          }
        }
        local_38 = pvVar3;
        in_ECX[0xd] = (uint)local_38;
        param_1 = FUN_006cd870(param_1);
        pvVar3 = (void *)in_ECX[0xc];
        local_38 = (void *)in_ECX[0xd];
        if (local_38 < pvVar3) {
          local_30 = (int)pvVar3 + (-1 - (int)local_38);
        }
        else {
          local_30 = in_ECX[0xb] - (int)local_38;
        }
        if (local_38 == (void *)in_ECX[0xb]) {
          pvVar4 = (void *)in_ECX[10];
          if (pvVar4 != pvVar3) {
            local_38 = pvVar4;
            if (pvVar4 < pvVar3) {
              local_30 = (int)pvVar3 + (-1 - (int)pvVar4);
            }
            else {
              local_30 = in_ECX[0xb] - (int)pvVar4;
            }
          }
        }
        if (local_30 == 0) {
          in_ECX[8] = uVar6;
          in_ECX[7] = uVar12;
          in_EAX[1] = local_34;
          goto LAB_006ce7b9;
        }
      }
LAB_006ce2df:
      param_1 = 0;
      uStack_28 = in_ECX[1];
      if (local_34 < in_ECX[1]) {
        uStack_28 = local_34;
      }
      if (local_30 < uStack_28) {
        uStack_28 = local_30;
      }
      memcpy(local_38,_Src,uStack_28);
      local_34 = local_34 - uStack_28;
      local_38 = (void *)((int)local_38 + uStack_28);
      local_30 = local_30 - uStack_28;
      _Src = _Src + uStack_28;
      puVar1 = in_ECX + 1;
      *puVar1 = *puVar1 - uStack_28;
      local_2c = _Src;
      if (*puVar1 == 0) {
        *in_ECX = -(uint)(in_ECX[6] != 0) & 7;
      }
      break;
    case (undefined *)0x6ce34b:
      for (; uVar12 < 0xe; uVar12 = uVar12 + 8) {
        if (local_34 == 0) goto LAB_006ce861;
        bVar2 = *_Src;
        local_34 = local_34 - 1;
        _Src = _Src + 1;
        param_1 = 0;
        uVar7 = uVar7 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
        local_3c = uVar7;
        pbVar5 = _Src;
      }
      in_ECX[1] = uVar7 & 0x3fff;
      if ((0x1d < (uVar7 & 0x1f)) || (uVar9 = (uVar7 & 0x3fff) >> 5 & 0x1f, 0x1d < uVar9)) {
        *in_ECX = 9;
        in_EAX[6] = (int)"too many length or distance symbols";
        goto LAB_006ce82e;
      }
      uVar9 = (*(code *)in_EAX[8])(in_EAX[10],uVar9 + 0x102 + (uVar7 & 0x1f),4);
      in_ECX[3] = uVar9;
      if (uVar9 == 0) {
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        in_EAX[1] = local_34;
        in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
        *in_EAX = (int)_Src;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(0xfffffffc);
        return;
      }
      uVar7 = local_3c >> 0xe;
      uVar12 = uVar12 - 0xe;
      in_ECX[2] = 0;
      *in_ECX = 4;
      local_3c = uVar7;
    case (undefined *)0x6ce3e0:
      local_2c = pbVar5;
      if (in_ECX[2] < (in_ECX[1] >> 10) + 4) {
        do {
          for (; uVar12 < 3; uVar12 = uVar12 + 8) {
            if (local_34 == 0) goto LAB_006ce861;
            bVar2 = *_Src;
            local_34 = local_34 - 1;
            _Src = _Src + 1;
            param_1 = 0;
            local_3c = uVar7 | (uint)bVar2 << ((byte)uVar12 & 0x1f);
            uVar7 = local_3c;
            local_2c = _Src;
          }
          *(uint *)(in_ECX[3] + *(int *)(&DAT_007376b8 + in_ECX[2] * 4) * 4) = uVar7 & 7;
          in_ECX[2] = in_ECX[2] + 1;
          local_3c = local_3c >> 3;
          uVar12 = uVar12 - 3;
          uVar7 = local_3c;
        } while (in_ECX[2] < (in_ECX[1] >> 10) + 4);
      }
      uVar9 = in_ECX[2];
      while (uVar9 < 0x13) {
        *(undefined4 *)(in_ECX[3] + *(int *)(&DAT_007376b8 + in_ECX[2] * 4) * 4) = 0;
        in_ECX[2] = in_ECX[2] + 1;
        uVar9 = in_ECX[2];
      }
      in_ECX[4] = 7;
      iVar13 = FUN_006cd620(in_ECX[3],in_ECX + 4,in_ECX + 5,in_ECX[9]);
      if (iVar13 != 0) {
        if (iVar13 == -3) {
          (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
          *in_ECX = 9;
        }
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        iVar11 = *in_EAX;
        *in_EAX = (int)local_2c;
        in_EAX[2] = (int)(local_2c + (in_EAX[2] - iVar11));
        in_EAX[1] = local_34;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(iVar13);
        return;
      }
      in_ECX[2] = 0;
      *in_ECX = 5;
      uVar7 = local_3c;
      _Src = local_2c;
      pbVar5 = local_2c;
LAB_006ce4c7:
      local_2c = pbVar5;
      if (in_ECX[2] < (in_ECX[1] >> 5 & 0x1f) + 0x102 + (in_ECX[1] & 0x1f)) {
        do {
          uVar9 = in_ECX[4];
          if (uVar12 < uVar9) {
            do {
              if (local_34 == 0) goto LAB_006ce7a8;
              bVar2 = *_Src;
              local_34 = local_34 - 1;
              bVar10 = (byte)uVar12;
              uVar9 = in_ECX[4];
              _Src = _Src + 1;
              uVar12 = uVar12 + 8;
              uVar7 = uVar7 | (uint)bVar2 << (bVar10 & 0x1f);
              param_1 = 0;
              local_3c = uVar7;
              local_2c = _Src;
            } while (uVar12 < uVar9);
          }
          iVar13 = in_ECX[5] + (*(uint *)(&DAT_00737670 + uVar9 * 4) & uVar7) * 8;
          bVar2 = *(byte *)(iVar13 + 1);
          uStack_28 = (uint)bVar2;
          uStack_c = *(uint *)(iVar13 + 4);
          if (uStack_c < 0x10) {
            local_3c = uVar7 >> (bVar2 & 0x1f);
            uVar12 = uVar12 - uStack_28;
            *(uint *)(in_ECX[3] + in_ECX[2] * 4) = uStack_c;
            in_ECX[2] = in_ECX[2] + 1;
          }
          else {
            if (uStack_c == 0x12) {
              iStack_24 = 7;
            }
            else {
              iStack_24 = uStack_c - 0xe;
            }
            uStack_10 = uStack_28 + iStack_24;
            for (; uVar12 < uStack_10; uVar12 = uVar12 + 8) {
              if (local_34 == 0) goto LAB_006ce861;
              bVar10 = *_Src;
              local_34 = local_34 - 1;
              _Src = _Src + 1;
              param_1 = 0;
              uVar7 = uVar7 | (uint)bVar10 << ((byte)uVar12 & 0x1f);
              local_3c = uVar7;
              local_2c = _Src;
            }
            uVar7 = uVar7 >> (bVar2 & 0x1f);
            local_30 = (uint)(uStack_c == 0x12) * 8 + 3 +
                       (*(uint *)(&DAT_00737670 + iStack_24 * 4) & uVar7);
            local_3c = uVar7 >> ((byte)iStack_24 & 0x1f);
            uVar12 = uVar12 - (iStack_24 + uStack_28);
            uVar9 = in_ECX[2];
            if ((in_ECX[1] >> 5 & 0x1f) + 0x102 + (in_ECX[1] & 0x1f) < local_30 + uVar9) {
LAB_006ce943:
              (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
              *in_ECX = 9;
              in_EAX[6] = (int)"invalid bit length repeat";
              in_ECX[8] = local_3c;
              in_ECX[7] = uVar12;
              in_EAX[1] = local_34;
              in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
              *in_EAX = (int)_Src;
              in_ECX[0xd] = (uint)pvVar3;
              FUN_006cd870(0xfffffffd);
              return;
            }
            if (uStack_c == 0x10) {
              if (uVar9 == 0) goto LAB_006ce943;
              uVar8 = *(undefined4 *)((in_ECX[3] - 4) + uVar9 * 4);
            }
            else {
              uVar8 = 0;
            }
            do {
              *(undefined4 *)(in_ECX[3] + uVar9 * 4) = uVar8;
              uVar9 = uVar9 + 1;
              local_30 = local_30 + -1;
            } while (local_30 != 0);
            in_ECX[2] = uVar9;
          }
          uVar7 = local_3c;
        } while (in_ECX[2] < (in_ECX[1] >> 5 & 0x1f) + 0x102 + (in_ECX[1] & 0x1f));
      }
      in_ECX[5] = 0;
      uStack_28 = 9;
      iStack_24 = 6;
      iVar13 = FUN_006cd6c0((in_ECX[1] & 0x1f) + 0x101,(in_ECX[1] >> 5 & 0x1f) + 1,in_ECX[3],
                            &uStack_28,&iStack_24,&uStack_4,&uStack_8,in_ECX[9]);
      if (iVar13 != 0) {
        if (iVar13 == -3) {
          (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
          *in_ECX = 9;
        }
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        iVar11 = (int)local_2c - *in_EAX;
        in_EAX[1] = local_34;
        *in_EAX = (int)local_2c;
        goto LAB_006ce0ba;
      }
      uVar9 = FUN_006cd960(uStack_28,iStack_24,uStack_4,uStack_8);
      if (uVar9 == 0) {
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        iVar13 = *in_EAX;
        *in_EAX = (int)local_2c;
        in_EAX[2] = (int)(local_2c + (in_EAX[2] - iVar13));
        in_EAX[1] = local_34;
        in_ECX[0xd] = (uint)pvVar3;
        FUN_006cd870(0xfffffffc);
        return;
      }
      in_ECX[1] = uVar9;
      (*(code *)in_EAX[9])(in_EAX[10],in_ECX[3]);
      *in_ECX = 6;
LAB_006ce704:
      in_ECX[8] = local_3c;
      in_ECX[7] = uVar12;
      in_EAX[1] = local_34;
      iVar13 = *in_EAX;
      *in_EAX = (int)local_2c;
      in_EAX[2] = (int)(local_2c + (in_EAX[2] - iVar13));
      in_ECX[0xd] = (uint)pvVar3;
      iVar13 = FUN_006cd9a0(param_1);
      if (iVar13 != 1) {
        FUN_006cd870(iVar13);
        return;
      }
      param_1 = 0;
      FUN_006cdf30();
      uVar6 = in_ECX[8];
      local_38 = (void *)in_ECX[0xd];
      _Src = (byte *)*in_EAX;
      local_34 = in_EAX[1];
      uVar12 = in_ECX[7];
      if (local_38 < (void *)in_ECX[0xc]) {
        local_30 = (int)in_ECX[0xc] + (-1 - (int)local_38);
      }
      else {
        local_30 = in_ECX[0xb] - (int)local_38;
      }
      local_3c = uVar6;
      if (in_ECX[6] != 0) {
        *in_ECX = 7;
LAB_006cea1a:
        in_ECX[0xd] = (uint)local_38;
        iVar13 = FUN_006cd870(param_1);
        local_38 = (void *)in_ECX[0xd];
        if ((void *)in_ECX[0xc] == local_38) {
          *in_ECX = 8;
LAB_006cea57:
          in_ECX[8] = local_3c;
          in_ECX[7] = uVar12;
          in_EAX[1] = local_34;
          in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
          *in_EAX = (int)_Src;
          in_ECX[0xd] = (uint)local_38;
          FUN_006cd870(1);
          return;
        }
        in_ECX[8] = local_3c;
        in_ECX[7] = uVar12;
        in_EAX[1] = local_34;
        goto LAB_006ce0b4;
      }
      *in_ECX = 0;
      local_2c = _Src;
      break;
    case (undefined *)0x6ce4c7:
      goto LAB_006ce4c7;
    case (undefined *)0x6ce704:
      goto LAB_006ce704;
    case (undefined *)0x6ce82e:
LAB_006ce82e:
      in_ECX[8] = local_3c;
      in_ECX[7] = uVar12;
      in_EAX[1] = local_34;
      in_EAX[2] = (int)(_Src + (in_EAX[2] - *in_EAX));
      *in_EAX = (int)_Src;
      in_ECX[0xd] = (uint)pvVar3;
      FUN_006cd870(0xfffffffd);
      return;
    case (undefined *)0x6cea1a:
      goto LAB_006cea1a;
    case (undefined *)0x6cea57:
      goto LAB_006cea57;
    }
    uVar9 = *in_ECX;
    pvVar3 = local_38;
    pbVar5 = local_2c;
    uVar7 = uVar6;
    uVar6 = local_3c;
  } while( true );
LAB_006ce7a8:
  in_ECX[8] = local_3c;
  in_ECX[7] = uVar12;
  in_EAX[1] = 0;
LAB_006ce7b9:
  iVar13 = *in_EAX;
  *in_EAX = (int)_Src;
  in_EAX[2] = (int)(_Src + (in_EAX[2] - iVar13));
  in_ECX[0xd] = (uint)local_38;
  FUN_006cd870(param_1);
  return;
}


/* FUN_006cf530 @ 006cf530  kind=gamemisc  attributed-by=role:dtor-like  size=237 */

undefined4 FUN_006cf530(int param_1)

{
  char *in_EAX;
  int iVar1;
  int in_ECX;
  int in_EDX;
  
  if (((in_EAX == (char *)0x0) || (*in_EAX != '1')) || (param_1 != 0x38)) {
    return 0xfffffffa;
  }
  if (in_EDX == 0) {
    return 0xfffffffe;
  }
  *(undefined4 *)(in_EDX + 0x18) = 0;
  if (*(int *)(in_EDX + 0x20) == 0) {
    *(code **)(in_EDX + 0x20) = thunk_FUN_006cf090;
    *(undefined4 *)(in_EDX + 0x28) = 0;
  }
  if (*(int *)(in_EDX + 0x24) == 0) {
    *(undefined **)(in_EDX + 0x24) = &DAT_006cf0d0;
  }
  iVar1 = (**(code **)(in_EDX + 0x20))(*(undefined4 *)(in_EDX + 0x28),1,0x18);
  *(int *)(in_EDX + 0x1c) = iVar1;
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0xc) = 0;
    if (in_ECX < 0) {
      in_ECX = -in_ECX;
      *(undefined4 *)(*(int *)(in_EDX + 0x1c) + 0xc) = 1;
    }
    if (7 < in_ECX - 8U) {
      FUN_006ceb50();
      return 0xfffffffe;
    }
    *(int *)(*(int *)(in_EDX + 0x1c) + 0x10) = in_ECX;
    iVar1 = FUN_006cdfb0(~-(uint)(*(int *)(*(int *)(in_EDX + 0x1c) + 0xc) != 0) & 0x6cef50);
    *(int *)(*(int *)(in_EDX + 0x1c) + 0x14) = iVar1;
    if (iVar1 != 0) {
      FUN_006ceb10();
      return 0;
    }
    FUN_006ceb50();
  }
  return 0xfffffffc;
}


/* FUN_006fb150 @ 006fb150  kind=gamemisc  attributed-by=role:dtor-like  size=86 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb150(void)

{
  void *pvVar1;
  
  pvVar1 = DAT_00765030;
  if (0xf < DAT_00765044) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  DAT_00765044 = 0xf;
  _DAT_00765040 = 0;
  DAT_00765030 = (void *)((uint)DAT_00765030 & 0xffffff00);
  return;
}


/* FUN_006fb5f0 @ 006fb5f0  kind=gamemisc  attributed-by=role:dtor-like  size=74 */

void FUN_006fb5f0(void)

{
  void *pvVar1;
  
  FUN_0046f990();
  pvVar1 = DAT_0076b7fc;
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar1);
}


/* FUN_006fb9f0 @ 006fb9f0  kind=gamemisc  attributed-by=role:dtor-like  size=172 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006fb9f0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = (undefined4 *)*DAT_0076dea0;
  *DAT_0076dea0 = DAT_0076dea0;
  DAT_0076dea0[1] = DAT_0076dea0;
  puVar2 = DAT_0076dea0;
  _DAT_0076dea4 = 0;
  if (puVar1 != DAT_0076dea0) {
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
    cube::Controller::vfunction6();
    FUN_00458de0();
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar1);
  }
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
  cube::Controller::vfunction6();
  FUN_00458de0();
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar2);
}


