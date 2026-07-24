// Helpers_00 (world) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_00.h"

/* FUN_004030c0 @ 004030c0  kind=gamemisc  attributed-by=caller-vote  size=21 */

void FUN_004030c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  *param_2 = uVar1;
  return;
}


/* FUN_004033d0 @ 004033d0  kind=gamemisc  attributed-by=caller-vote  size=229 */

void * __thiscall FUN_004033d0(void *this,uint param_2,int param_3)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  uint uVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e12f2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_3 != 0) {
    *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable **)this
         = &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
    *(undefined **)((int)this + 0x10) = &DAT_006fcd08;
    *(code **)((int)this + 0x68) = _vftable__exref;
    *(code **)((int)this + 0x68) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18);
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)this + *(int *)(*(int *)this + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  uVar1 = 0;
  if ((param_2 & 1) == 0) {
    uVar1 = 4;
  }
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  if ((param_2 & 2) == 0) {
    uVar1 = uVar1 | 2;
  }
  if ((param_2 & 8) != 0) {
    uVar1 = uVar1 | 8;
  }
  if ((param_2 & 4) != 0) {
    uVar1 = uVar1 | 0x10;
  }
  *(uint *)((int)this + 0x54) = uVar1;
  *(undefined4 *)((int)this + 0x50) = 0;
  ExceptionList = local_10;
  return this;
}


/* FUN_00404420 @ 00404420  kind=gamemisc  attributed-by=caller-vote  size=91 */

void __thiscall FUN_00404420(void *this)

{
  ios_base *piVar1;
  
  piVar1 = (ios_base *)((int)this + 0x68);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (piVar1 + *(int *)(*(int *)this + 4) + -0x68) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)(piVar1 + *(int *)(*(int *)this + 4) + -0x6c) = *(int *)(*(int *)this + 4) + -0x68;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)((int)this + 0x18)
       = &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x18));
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)((int)this + 0x20));
  *(code **)piVar1 = _vftable__exref;
  *(code **)piVar1 = _vftable__exref;
  std::ios_base::_Ios_base_dtor(piVar1);
  return;
}


/* FUN_0040ee40 @ 0040ee40  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_0040ee40(undefined1 *param_1,undefined1 param_2)

{
  undefined1 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_2;
  return;
}


/* FUN_0040f0d0 @ 0040f0d0  kind=gamemisc  attributed-by=caller-vote  size=35 */

void FUN_0040f0d0(undefined4 param_1,undefined4 param_2,int param_3,code *param_4)

{
  while (param_3 = param_3 + -1, -1 < param_3) {
    (*param_4)();
  }
  return;
}


/* FUN_00411e10 @ 00411e10  kind=gamemisc  attributed-by=caller-vote  size=28 */

void FUN_00411e10(undefined8 param_1,undefined8 param_2)

{
  undefined8 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  return;
}


/* FUN_0042f5a0 @ 0042f5a0  kind=gamemisc  attributed-by=caller-vote  size=56 */

void FUN_0042f5a0(int *param_1)

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


/* FUN_004348c0 @ 004348c0  kind=gamemisc  attributed-by=caller-vote  size=11 */

byte FUN_004348c0(void)

{
  int in_ECX;
  
  return *(byte *)(in_ECX + 3) >> 6 & 1;
}


/* FUN_0043b640 @ 0043b640  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0043b640(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0043c8e0(0,0);
  *in_ECX = uVar1;
  return;
}


/* FUN_00443f40 @ 00443f40  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00443f40(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


/* FUN_00444020 @ 00444020  kind=gamemisc  attributed-by=caller-vote  size=192 */

void FUN_00444020(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

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


/* FUN_00449400 @ 00449400  kind=gamemisc  attributed-by=caller-vote  size=28 */

void FUN_00449400(void)

{
  int in_ECX;
  
  if (*(int *)(in_ECX + 4) != 0) {
    FUN_00520620(*(int *)(in_ECX + 4));
    *(undefined4 *)(in_ECX + 4) = 0;
  }
  return;
}


/* FUN_00449ba0 @ 00449ba0  kind=gamemisc  attributed-by=caller-vote  size=84 */

int FUN_00449ba0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0044b7b0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0064aec0(param_1,0);
    *(undefined4 *)(iVar1 + 0x30) = *(undefined4 *)(param_1 + 0x20);
    *(undefined4 *)(iVar1 + 0x34) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(iVar1 + 0x38) = *(undefined4 *)(param_1 + 0x28);
    *(undefined4 *)(iVar1 + 0x3c) = *(undefined4 *)(param_1 + 0x2c);
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(param_1 + 0x34);
  }
  return iVar1;
}


/* FUN_00449ce0 @ 00449ce0  kind=gamemisc  attributed-by=caller-vote  size=197 */

undefined4 FUN_00449ce0(int param_1,int param_2,int param_3)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  
  while( true ) {
    if (param_1 == param_2) {
      return 1;
    }
    cVar1 = FUN_0042f4a0(param_3);
    if (cVar1 == '\0') {
      return 0;
    }
    iVar3 = 0;
    piVar2 = (int *)(param_3 + 0x118);
    do {
      if (*(int *)((param_1 - param_3) + (int)piVar2) != *piVar2) {
        return 0;
      }
      if (*(int *)((param_1 - param_3) + 4 + (int)piVar2) != piVar2[1]) {
        return 0;
      }
      iVar3 = iVar3 + 1;
      piVar2 = piVar2 + 2;
    } while (iVar3 < 3);
    if (*(float *)(param_1 + 0x130) != *(float *)(param_3 + 0x130)) {
      return 0;
    }
    if (*(float *)(param_1 + 0x134) != *(float *)(param_3 + 0x134)) break;
    if (*(char *)(param_1 + 0x138) != *(char *)(param_3 + 0x138)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x13c) != *(int *)(param_3 + 0x13c)) {
      return 0;
    }
    if (*(int *)(param_1 + 0x140) != *(int *)(param_3 + 0x140)) {
      return 0;
    }
    param_1 = param_1 + 0x148;
    param_3 = param_3 + 0x148;
  }
  return 0;
}


/* FUN_00449db0 @ 00449db0  kind=gamemisc  attributed-by=caller-vote  size=539 */

void FUN_00449db0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x38e38e1 < (uint)in_ECX[1]) {
    if (0xf < (uint)param_5[10]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[5]);
    }
    param_5[10] = 0xf;
    param_5[9] = 0;
    *(undefined1 *)(param_5 + 5) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_00449fba;
      }
LAB_00449f11:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00449f11;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_00449fba:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00449fe0 @ 00449fe0  kind=gamemisc  attributed-by=caller-vote  size=413 */

undefined4 * FUN_00449fe0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  undefined4 *puVar2;
  int *in_ECX;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uStack_34;
  undefined1 local_24 [8];
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e2c30;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    piVar5 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_34;
  }
  else {
    piVar3 = (int *)*in_ECX;
    piVar5 = param_2;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        local_14 = (undefined1 *)&uStack_34;
        cVar1 = FUN_0044b5a0(piVar3[2] + 0x10,param_3);
        if (cVar1 == '\0') goto LAB_0044a14a;
        piVar5 = *(int **)(*in_ECX + 8);
        uVar4 = 0;
        goto LAB_0044a029;
      }
      cVar1 = FUN_0044b5a0(param_3,param_2 + 4);
      if (cVar1 == '\0') {
LAB_0044a0ef:
        cVar1 = FUN_0044b5a0(param_2 + 4,param_3);
        if (cVar1 == '\0') {
LAB_0044a14a:
          local_8 = 0xffffffff;
          puVar2 = (undefined4 *)FUN_0044a1a0(local_24,0,param_3,param_4);
          *param_1 = *puVar2;
          ExceptionList = local_10;
          return param_1;
        }
        local_1c = param_2;
        FUN_005c3ea0();
        piVar5 = local_1c;
        if ((local_1c != (int *)*in_ECX) &&
           (cVar1 = FUN_0044b5a0(param_3,local_1c + 4), cVar1 == '\0')) goto LAB_0044a14a;
        piVar3 = param_2;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar4 = 1;
          goto LAB_0044a029;
        }
      }
      else {
        local_1c = param_2;
        FUN_0042c740();
        piVar3 = local_1c;
        cVar1 = FUN_0044b5a0(local_1c + 4,param_3);
        if (cVar1 == '\0') goto LAB_0044a0ef;
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          uVar4 = 1;
          goto LAB_0044a029;
        }
      }
      uVar4 = 0;
      piVar5 = piVar3;
      goto LAB_0044a029;
    }
    local_14 = (undefined1 *)&uStack_34;
    cVar1 = FUN_0044b5a0(param_3,param_2 + 4);
    if (cVar1 == '\0') goto LAB_0044a14a;
  }
  uVar4 = 1;
LAB_0044a029:
  FUN_00449db0(param_1,uVar4,piVar5,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0044a1a0 @ 0044a1a0  kind=gamemisc  attributed-by=caller-vote  size=475 */

void FUN_0044a1a0(undefined4 *param_1,int *param_2,int *param_3,void *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int *piVar8;
  char cVar9;
  int *piVar10;
  int *local_20;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e2c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar10 = (int *)*in_ECX;
  cVar9 = '\x01';
  local_8 = 0;
  piVar5 = (int *)piVar10[1];
  local_20 = piVar10;
  while (*(char *)((int)piVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      if (*param_3 < piVar5[4]) {
LAB_0044a2a9:
        cVar9 = '\x01';
      }
      else {
        if (*param_3 <= piVar5[4]) {
          uVar1 = piVar5[9];
          piVar7 = piVar5 + 5;
          piVar8 = param_3 + 1;
          if (0xf < (uint)piVar5[10]) {
            piVar7 = (int *)*piVar7;
          }
          uVar2 = param_3[5];
          if (0xf < (uint)param_3[6]) {
            piVar8 = (int *)*piVar8;
          }
          uVar3 = uVar1;
          if (uVar2 < uVar1) {
            uVar3 = uVar2;
          }
          uVar3 = FUN_0040c590(piVar8,piVar7,uVar3);
          if (uVar3 == 0) {
            if (uVar2 < uVar1) goto LAB_0044a2a9;
            uVar3 = (uint)(uVar2 != uVar1);
          }
          if ((int)uVar3 < 0) goto LAB_0044a2a9;
        }
        cVar9 = '\0';
      }
    }
    else if (piVar5[4] < *param_3) {
LAB_0044a250:
      cVar9 = '\0';
    }
    else {
      if (piVar5[4] <= *param_3) {
        uVar1 = param_3[5];
        piVar7 = param_3 + 1;
        piVar8 = piVar5 + 5;
        if (0xf < (uint)param_3[6]) {
          piVar7 = (int *)*piVar7;
        }
        uVar2 = piVar5[9];
        if (0xf < (uint)piVar5[10]) {
          piVar8 = (int *)*piVar8;
        }
        uVar3 = uVar1;
        if (uVar2 < uVar1) {
          uVar3 = uVar2;
        }
        uVar3 = FUN_0040c590(piVar8,piVar7,uVar3);
        if (uVar3 == 0) {
          if (uVar2 < uVar1) goto LAB_0044a250;
          uVar3 = (uint)(uVar2 != uVar1);
        }
        if ((int)uVar3 < 0) goto LAB_0044a250;
      }
      cVar9 = '\x01';
    }
    local_20 = piVar5;
    if (cVar9 == '\0') {
      piVar5 = (int *)piVar5[2];
    }
    else {
      piVar5 = (int *)*piVar5;
    }
  }
  param_2 = local_20;
  if (cVar9 != '\0') {
    if (local_20 == (int *)*piVar10) {
      cVar9 = '\x01';
      piVar10 = param_3;
      goto LAB_0044a2de;
    }
    FUN_0042c740();
  }
  piVar10 = param_3;
  if (param_2[4] < *param_3) {
LAB_0044a2de:
    puVar4 = (undefined4 *)FUN_00449db0(&param_2,cVar9,local_20,piVar10,param_4);
    *param_1 = *puVar4;
    *(undefined1 *)(param_1 + 1) = 1;
    ExceptionList = local_10;
    return;
  }
  if (param_2[4] <= *param_3) {
    piVar5 = param_3 + 1;
    if (0xf < (uint)param_3[6]) {
      piVar5 = (int *)*piVar5;
    }
    iVar6 = FUN_0040c520(0,param_2[9],piVar5,param_3[5]);
    if (iVar6 < 0) goto LAB_0044a2de;
  }
  if (*(uint *)((int)param_4 + 0x28) < 0x10) {
    *(undefined4 *)((int)param_4 + 0x28) = 0xf;
    *(undefined4 *)((int)param_4 + 0x24) = 0;
    *(undefined1 *)((int)param_4 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)((int)param_4 + 0x14));
}


/* FUN_0044a8a0 @ 0044a8a0  kind=gamemisc  attributed-by=caller-vote  size=28 */

void FUN_0044a8a0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = 1;
  in_ECX[2] = 0;
  return;
}


/* FUN_0044a8c0 @ 0044a8c0  kind=gamemisc  attributed-by=caller-vote  size=168 */

void FUN_0044a8c0(int param_1)

{
  int in_ECX;
  
  FUN_0040ee70(param_1);
  *(undefined4 *)(in_ECX + 0x118) = *(undefined4 *)(param_1 + 0x118);
  *(undefined4 *)(in_ECX + 0x11c) = *(undefined4 *)(param_1 + 0x11c);
  *(undefined4 *)(in_ECX + 0x120) = *(undefined4 *)(param_1 + 0x120);
  *(undefined4 *)(in_ECX + 0x124) = *(undefined4 *)(param_1 + 0x124);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(in_ECX + 0x130) = *(undefined4 *)(param_1 + 0x130);
  *(undefined4 *)(in_ECX + 0x134) = *(undefined4 *)(param_1 + 0x134);
  *(undefined1 *)(in_ECX + 0x138) = *(undefined1 *)(param_1 + 0x138);
  *(undefined4 *)(in_ECX + 0x13c) = *(undefined4 *)(param_1 + 0x13c);
  *(undefined4 *)(in_ECX + 0x140) = *(undefined4 *)(param_1 + 0x140);
  *(undefined4 *)(in_ECX + 0x144) = *(undefined4 *)(param_1 + 0x144);
  return;
}


/* FUN_0044a970 @ 0044a970  kind=gamemisc  attributed-by=caller-vote  size=121 */

void FUN_0044a970(void)

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
  *(undefined4 *)(in_ECX + 0x9a) = 0x3d924925;
  *(undefined1 *)(in_ECX + 0x9c) = 0;
  *(undefined4 *)(in_ECX + 0x9e) = 0;
  *(undefined4 *)(in_ECX + 0xa0) = 0;
  *(undefined4 *)(in_ECX + 0xa2) = 0xffffffff;
  return;
}


/* FUN_0044abb0 @ 0044abb0  kind=gamemisc  attributed-by=caller-vote  size=352 */

void FUN_0044abb0(int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2d10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    if (*param_1 == param_1[1]) {
      iVar6 = *in_ECX;
    }
    else {
      uVar2 = (param_1[1] - *param_1) / 0x148;
      uVar3 = (in_ECX[1] - *in_ECX) / 0x148;
      if (uVar3 < uVar2) {
        if ((uint)((in_ECX[2] - *in_ECX) / 0x148) < uVar2) {
          if ((void *)*in_ECX != (void *)0x0) {
            param_1 = (int *)uVar2;
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          piVar1 = param_1 + 1;
          iVar6 = *param_1;
          param_1 = (int *)uVar2;
          cVar5 = FUN_0044b660((*piVar1 - iVar6) / 0x148);
          if (cVar5 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar6 = FUN_0044a650(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar6 = *param_1;
          iVar7 = uVar3 * 0x148 + iVar6;
          param_1 = (int *)uVar2;
          FUN_00449c00(iVar6,iVar7,*in_ECX,uVar2);
          iVar6 = FUN_0044a650(iVar7,piVar4[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        iVar6 = *param_1;
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar2;
        FUN_00449c00(iVar6,*piVar1,*in_ECX,uVar2);
        iVar6 = ((piVar4[1] - *piVar4) / 0x148) * 0x148 + *in_ECX;
      }
    }
    in_ECX[1] = iVar6;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0044b460 @ 0044b460  kind=gamemisc  attributed-by=caller-vote  size=242 */

void FUN_0044b460(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_68 [4];
  undefined1 local_64 [4];
  void *local_60;
  uint local_4c;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2d58;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_0044b880(param_1);
  if (iVar1 != *in_ECX) {
    if (*(int *)(iVar1 + 0x10) <= *param_1) {
      if (*(int *)(iVar1 + 0x10) < *param_1) goto LAB_0044b534;
      piVar2 = (int *)(iVar1 + 0x14);
      if (0xf < *(uint *)(iVar1 + 0x28)) {
        piVar2 = (int *)*piVar2;
      }
      iVar3 = FUN_0040c520(0,param_1[5],piVar2,*(undefined4 *)(iVar1 + 0x24));
      if (-1 < iVar3) goto LAB_0044b534;
    }
  }
  FUN_0064aec0(param_1,0);
  local_44 = local_2c;
  local_40 = local_28;
  local_3c = local_24;
  local_38 = local_20;
  local_34 = local_1c;
  local_30 = local_18;
  local_8 = 0;
  iVar3 = FUN_00449ba0(local_64);
  FUN_00449fe0(local_68,iVar1,iVar3 + 0x10,iVar3);
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_60);
  }
LAB_0044b534:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0044b5a0 @ 0044b5a0  kind=gamemisc  attributed-by=caller-vote  size=69 */

undefined4 FUN_0044b5a0(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_1 < *param_2) {
    return 1;
  }
  if (*param_1 <= *param_2) {
    piVar1 = param_2 + 1;
    if (0xf < (uint)param_2[6]) {
      piVar1 = (int *)*piVar1;
    }
    iVar2 = FUN_0040c520(0,param_1[5],piVar1,param_2[5]);
    if (iVar2 < 0) {
      return 1;
    }
  }
  return 0;
}


/* FUN_0044b660 @ 0044b660  kind=gamemisc  attributed-by=caller-vote  size=104 */

uint FUN_0044b660(uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xc7ce0c < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x148);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x148);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0044b7b0 @ 0044b7b0  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_0044b7b0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x48);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_0044b880 @ 0044b880  kind=gamemisc  attributed-by=caller-vote  size=150 */

undefined4 * FUN_0044b880(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *in_ECX;
  int *piVar5;
  undefined4 *puVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *local_8;
  
  puVar6 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar6[1] + 0xd) == '\0') {
    iVar1 = *param_1;
    puVar8 = (undefined4 *)puVar6[1];
    local_8 = puVar6;
    do {
      if ((int)puVar8[4] < iVar1) {
LAB_0044b902:
        puVar9 = (undefined4 *)puVar8[2];
      }
      else {
        if ((int)puVar8[4] <= iVar1) {
          piVar5 = param_1 + 1;
          piVar7 = puVar8 + 5;
          uVar2 = param_1[5];
          if (0xf < (uint)param_1[6]) {
            piVar5 = (int *)*piVar5;
          }
          uVar3 = puVar8[9];
          if (0xf < (uint)puVar8[10]) {
            piVar7 = (int *)*piVar7;
          }
          uVar4 = uVar2;
          if (uVar3 < uVar2) {
            uVar4 = uVar3;
          }
          uVar4 = FUN_0040c590(piVar7,piVar5,uVar4);
          puVar6 = local_8;
          if (uVar4 == 0) {
            if (uVar3 < uVar2) goto LAB_0044b902;
            uVar4 = (uint)(uVar3 != uVar2);
          }
          if ((int)uVar4 < 0) goto LAB_0044b902;
        }
        puVar9 = (undefined4 *)*puVar8;
        puVar6 = puVar8;
        local_8 = puVar8;
      }
      puVar8 = puVar9;
    } while (*(char *)((int)puVar9 + 0xd) == '\0');
  }
  return puVar6;
}


/* FUN_0044bb10 @ 0044bb10  kind=gamemisc  attributed-by=caller-vote  size=217 */

void FUN_0044bb10(void *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = (uint)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2dc0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    if (param_1 < 0xc7ce0d) {
      pvVar2 = operator_new((int)param_1 * 0x148);
      if (pvVar2 != (void *)0x0) goto LAB_0044bb74;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0044bb74:
  local_8 = 0;
  FUN_0044a650(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (void *)*in_ECX;
  if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_ECX[2] = (void *)(uVar1 * 0x148 + (int)pvVar2);
  in_ECX[1] = (void *)(((in_ECX[1] - (int)param_1) / 0x148) * 0x148 + (int)pvVar2);
  *in_ECX = pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_0044bd30 @ 0044bd30  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_0044bd30(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x148)) {
    return;
  }
  if (0xc7ce0cU - (in_ECX[1] - *in_ECX) / 0x148 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x148;
  if (0xc7ce0c - (uVar1 >> 1) < uVar1) {
    FUN_0044bb10();
    return;
  }
  FUN_0044bb10();
  return;
}


/* FUN_0044be30 @ 0044be30  kind=gamemisc  attributed-by=caller-vote  size=13 */

byte FUN_0044be30(void)

{
  int in_ECX;
  
  return ~(*(byte *)(in_ECX + 3) >> 7) & 1;
}


/* FUN_0044cb50 @ 0044cb50  kind=gamemisc  attributed-by=caller-vote  size=385 */

void FUN_0044cb50(int param_1)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    in_ECX[2] = *(int *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 8) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 1) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x14) = *(undefined1 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 1;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 1) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 0x15) = *(undefined1 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 1;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *(undefined4 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(piVar1[3] + *piVar1);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 8) {
    piVar1[3] = iVar2;
    return;
  }
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(piVar1[3] + *piVar1);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0044cce0 @ 0044cce0  kind=gamemisc  attributed-by=caller-vote  size=202 */

void FUN_0044cce0(undefined4 *param_1)

{
  int *piVar1;
  int *in_ECX;
  int iVar2;
  
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    in_ECX[2] = *(int *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    *param_1 = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 4) {
    piVar1[3] = iVar2;
  }
  else {
    param_1[1] = *(undefined4 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 4;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 1) {
    piVar1[3] = iVar2;
  }
  else {
    *(undefined1 *)(param_1 + 2) = *(undefined1 *)(*piVar1 + piVar1[3]);
    piVar1[3] = piVar1[3] + 1;
  }
  piVar1 = (int *)*in_ECX;
  iVar2 = piVar1[1] - *piVar1;
  if (iVar2 < piVar1[3] + 8) {
    piVar1[3] = iVar2;
    return;
  }
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(*piVar1 + piVar1[3]);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0044cdb0 @ 0044cdb0  kind=gamemisc  attributed-by=caller-vote  size=1681 */

void FUN_0044cdb0(int param_1,int param_2)

{
  undefined4 *puVar1;
  char cVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int *piVar7;
  void *local_190;
  int local_18c;
  undefined4 local_188;
  undefined4 *local_184;
  int *local_180;
  int *local_17c;
  int local_178;
  int local_174;
  undefined2 local_170 [2];
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined2 local_160;
  undefined1 local_15c [256];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e2e66;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar7 = (int *)*in_ECX;
  local_178 = param_1;
  iVar6 = piVar7[1] - *piVar7;
  local_174 = param_2;
  if (iVar6 < piVar7[3] + 4) {
    piVar7[3] = iVar6;
  }
  else {
    in_ECX[2] = *(int *)(*piVar7 + piVar7[3]);
    piVar7[3] = piVar7[3] + 4;
  }
  piVar7 = (int *)*in_ECX;
  iVar6 = piVar7[1] - *piVar7;
  local_180 = (int *)0x0;
  if (iVar6 < piVar7[3] + 4) {
    piVar7[3] = iVar6;
  }
  else {
    local_180 = *(int **)(*piVar7 + piVar7[3]);
    piVar7[3] = piVar7[3] + 4;
  }
  local_190 = (void *)0x0;
  local_18c = 0;
  local_188 = 0;
  local_8 = 0;
  local_14 = uVar3;
  if (0 < (int)local_180) {
    do {
      local_160 = 1;
      local_170[0] = 0;
      local_16c = 0;
      local_168 = 0;
      local_164 = 0;
      local_162 = 0;
      local_5c = 0;
      memset(local_15c,0,0x100);
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      local_3c = 0x3d924925;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = -1;
      if (iVar5 + 0x118 <= iVar6) {
        memcpy(local_170,(void *)(*piVar7 + iVar5),0x118);
        iVar6 = iVar5 + 0x118;
      }
      piVar7[3] = iVar6;
      piVar7 = (int *)*in_ECX;
      iVar6 = *piVar7;
      if (piVar7[1] - iVar6 < piVar7[3] + 0x18) {
        piVar7[3] = piVar7[1] - iVar6;
      }
      else {
        iVar5 = piVar7[3];
        local_58 = *(undefined8 *)(iVar6 + iVar5);
        local_50 = *(undefined8 *)(iVar6 + 8 + iVar5);
        local_48 = *(undefined8 *)(iVar6 + 0x10 + iVar5);
        piVar7[3] = piVar7[3] + 0x18;
      }
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      if (iVar5 + 4 <= iVar6) {
        local_40 = *(undefined4 *)(*piVar7 + iVar5);
        iVar6 = iVar5 + 4;
      }
      piVar7[3] = iVar6;
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      if (iVar5 + 4 <= iVar6) {
        local_3c = *(undefined4 *)(*piVar7 + iVar5);
        iVar6 = iVar5 + 4;
      }
      piVar7[3] = iVar6;
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      if (iVar5 + 1 <= iVar6) {
        local_38 = *(undefined1 *)(*piVar7 + iVar5);
        iVar6 = iVar5 + 1;
      }
      piVar7[3] = iVar6;
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      if (iVar5 + 4 <= iVar6) {
        local_34 = *(undefined4 *)(iVar5 + *piVar7);
        iVar6 = iVar5 + 4;
      }
      piVar7[3] = iVar6;
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      if (iVar5 + 4 <= iVar6) {
        local_30 = *(undefined4 *)(iVar5 + *piVar7);
        iVar6 = iVar5 + 4;
      }
      piVar7[3] = iVar6;
      piVar7 = (int *)*in_ECX;
      iVar5 = piVar7[3];
      iVar6 = piVar7[1] - *piVar7;
      if (iVar5 + 4 <= iVar6) {
        local_2c = *(int *)(iVar5 + *piVar7);
        iVar6 = iVar5 + 4;
      }
      piVar7[3] = iVar6;
      if ((*(int *)(local_178 + 0x800160) + -3 <= local_2c) || (local_2c < 0)) {
        FUN_0044d590(local_170);
      }
      local_180 = (int *)((int)local_180 + -1);
    } while (local_180 != (int *)0x0);
    local_180 = (int *)0x0;
  }
  iVar6 = local_174;
  if (((local_18c - (int)local_190) / 0x148 !=
       (*(int *)(local_174 + 0x34) - *(int *)(local_174 + 0x30)) / 0x148) ||
     (cVar2 = FUN_00449ce0(local_190,local_18c,*(int *)(local_174 + 0x30),uVar3), cVar2 == '\0')) {
    *(undefined1 *)(iVar6 + 0x75) = 1;
    FUN_0044abb0(&local_190);
  }
  piVar7 = (int *)*in_ECX;
  iVar6 = piVar7[1] - *piVar7;
  local_17c = (int *)0x0;
  if (iVar6 < piVar7[3] + 4) {
    piVar7[3] = iVar6;
  }
  else {
    local_17c = *(int **)(piVar7[3] + *piVar7);
    piVar7[3] = piVar7[3] + 4;
  }
  piVar7 = local_17c;
  if (0 < (int)local_17c) {
    do {
      local_180 = piVar7;
      piVar7 = (int *)*in_ECX;
      iVar6 = *piVar7;
      local_20 = local_20 & 0xffffffff;
      local_18 = 0;
      if (piVar7[1] - iVar6 < piVar7[3] + 0x14) {
        piVar7[3] = piVar7[1] - iVar6;
      }
      else {
        iVar5 = piVar7[3];
        local_28 = *(undefined8 *)(iVar5 + iVar6);
        local_20 = *(ulonglong *)(iVar5 + 8 + iVar6);
        local_18 = *(int *)(iVar5 + 0x10 + iVar6);
        piVar7[3] = piVar7[3] + 0x14;
      }
      if ((*(int *)(local_178 + 0x800160) + -3 <= local_18) || (local_18 < 0)) {
        FUN_0044e7a0((undefined4)local_28,local_28._4_4_,(undefined4)local_20,(int)&local_20 + 4,
                     local_174);
        FUN_0044d4b0(&local_28);
      }
      piVar7 = (int *)((int)local_180 + -1);
    } while ((int *)((int)local_180 + -1) != (int *)0x0);
    local_180 = (int *)0x0;
    if (0 < (int)local_17c) {
      local_180 = (int *)0x0;
      puVar4 = (undefined4 *)FUN_0046d550(0,0);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar7 = (int *)**(int **)(local_174 + 4);
      iVar6 = local_174;
      local_184 = puVar4;
      local_17c = piVar7;
      if (piVar7 != *(int **)(local_174 + 4)) {
        do {
          if (((*(byte *)(piVar7 + 0x10) & 2) != 0) &&
             (local_17c = piVar7,
             iVar5 = FUN_0042f860(piVar7[4],piVar7[5],piVar7[6],piVar7[7],piVar7[8] - 0x10000,
                                  piVar7[9] - (uint)((uint)piVar7[8] < 0x10000),local_174),
             iVar6 = local_174, (*(byte *)(iVar5 + 3) & 0x1f) == 0)) {
            iVar6 = FUN_00583cb0(puVar4,puVar4[1],&local_17c);
            if (local_180 == (int *)0x15555554) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            puVar4[1] = iVar6;
            local_180 = (int *)((int)local_180 + 1);
            **(int **)(iVar6 + 4) = iVar6;
            iVar6 = local_174;
          }
          piVar7 = (int *)*piVar7;
          local_17c = piVar7;
        } while (piVar7 != (int *)*(int *)(iVar6 + 4));
      }
      for (puVar1 = (undefined4 *)*puVar4; puVar1 != puVar4; puVar1 = (undefined4 *)*puVar1) {
        piVar7 = (int *)puVar1[2];
        if (piVar7 != *(int **)(iVar6 + 4)) {
          *(int *)piVar7[1] = *piVar7;
          *(int *)(*piVar7 + 4) = piVar7[1];
                    /* WARNING: Subroutine does not return */
          operator_delete(piVar7);
        }
      }
      puVar1 = (undefined4 *)*puVar4;
      *puVar4 = puVar4;
      puVar4[1] = puVar4;
      if (puVar1 != puVar4) {
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar1);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar4);
    }
  }
  piVar7 = (int *)*in_ECX;
  iVar6 = piVar7[1] - *piVar7;
  local_17c = (int *)0x0;
  if (iVar6 < piVar7[3] + 4) {
    piVar7[3] = iVar6;
  }
  else {
    local_17c = *(int **)(piVar7[3] + *piVar7);
    piVar7[3] = piVar7[3] + 4;
  }
  if ((local_17c == (int *)(*(int *)(local_174 + 0x1c) - *(int *)(local_174 + 0x18) >> 2)) &&
     (iVar6 = 0, 0 < (int)local_17c)) {
    do {
      piVar7 = (int *)*in_ECX;
      if (piVar7[1] - *piVar7 < piVar7[3] + 4) {
        piVar7[3] = piVar7[1] - *piVar7;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar6 * 4) + 0x38) =
             *(undefined4 *)(piVar7[3] + *piVar7);
        piVar7[3] = piVar7[3] + 4;
      }
      piVar7 = (int *)*in_ECX;
      if (piVar7[1] - *piVar7 < piVar7[3] + 4) {
        piVar7[3] = piVar7[1] - *piVar7;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar6 * 4) + 0x3c) =
             *(undefined4 *)(piVar7[3] + *piVar7);
        piVar7[3] = piVar7[3] + 4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < (int)local_17c);
  }
  piVar7 = (int *)*in_ECX;
  iVar6 = piVar7[1] - *piVar7;
  local_178 = 0;
  if (iVar6 < piVar7[3] + 4) {
    piVar7[3] = iVar6;
  }
  else {
    local_178 = *(int *)(piVar7[3] + *piVar7);
    piVar7[3] = piVar7[3] + 4;
  }
  if ((local_178 == (*(int *)(local_174 + 0x10) - *(int *)(local_174 + 0xc)) / 0x188) &&
     (0 < local_178)) {
    iVar6 = 0;
    do {
      piVar7 = (int *)*in_ECX;
      if (piVar7[1] - *piVar7 < piVar7[3] + 1) {
        piVar7[3] = piVar7[1] - *piVar7;
      }
      else {
        *(undefined1 *)(*(int *)(local_174 + 0xc) + 0x30 + iVar6) =
             *(undefined1 *)(piVar7[3] + *piVar7);
        piVar7[3] = piVar7[3] + 1;
      }
      iVar6 = iVar6 + 0x188;
      local_178 = local_178 + -1;
    } while (local_178 != 0);
  }
  if (local_190 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_190);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0044d590 @ 0044d590  kind=gamemisc  attributed-by=caller-vote  size=130 */

void FUN_0044d590(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_0044bd30(1);
    }
    if (in_ECX[1] != 0) {
      FUN_0044a8c0(((int)(param_1 - uVar2) / 0x148) * 0x148 + *in_ECX);
      in_ECX[1] = in_ECX[1] + 0x148;
      return;
    }
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_0044bd30(1);
    }
    if (in_ECX[1] != 0) {
      FUN_0044a8c0(param_1);
    }
  }
  in_ECX[1] = in_ECX[1] + 0x148;
  return;
}


/* FUN_0044e120 @ 0044e120  kind=gamemisc  attributed-by=caller-vote  size=338 */

void FUN_0044e120(int param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(int *)(piVar1[3] + *piVar1) = in_ECX[1];
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(*piVar1 + piVar1[3]) = *(undefined4 *)(param_1 + 4);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(*piVar1 + piVar1[3]) = *(undefined4 *)(param_1 + 8);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0xc);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0x10);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 1);
  *(undefined1 *)(*piVar1 + piVar1[3]) = *(undefined1 *)(param_1 + 0x14);
  piVar1[3] = piVar1[3] + 1;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 1);
  *(undefined1 *)(*piVar1 + piVar1[3]) = *(undefined1 *)(param_1 + 0x15);
  piVar1[3] = piVar1[3] + 1;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0x18);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = *(undefined4 *)(param_1 + 0x1c);
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 8);
  *(undefined8 *)(*piVar1 + piVar1[3]) = *(undefined8 *)(param_1 + 0x20);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0044e280 @ 0044e280  kind=gamemisc  attributed-by=caller-vote  size=178 */

void FUN_0044e280(undefined4 *param_1)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(int *)(piVar1[3] + *piVar1) = in_ECX[1];
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(*piVar1 + piVar1[3]) = *param_1;
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 4);
  *(undefined4 *)(piVar1[3] + *piVar1) = param_1[1];
  piVar1[3] = piVar1[3] + 4;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 1);
  *(undefined1 *)(piVar1[3] + *piVar1) = *(undefined1 *)(param_1 + 2);
  piVar1[3] = piVar1[3] + 1;
  piVar1 = (int *)*in_ECX;
  FUN_005870c0((piVar1[1] - *piVar1) + 8);
  *(undefined8 *)(piVar1[3] + *piVar1) = *(undefined8 *)(param_1 + 3);
  piVar1[3] = piVar1[3] + 8;
  return;
}


/* FUN_0044e340 @ 0044e340  kind=gamemisc  attributed-by=caller-vote  size=953 */

void FUN_0044e340(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int *in_ECX;
  int iVar7;
  size_t _Size;
  void *pvVar8;
  int local_c;
  
  iVar4 = param_1;
  piVar2 = (int *)*in_ECX;
  FUN_005870c0((piVar2[1] - *piVar2) + 4);
  *(int *)(*piVar2 + piVar2[3]) = in_ECX[1];
  piVar2[3] = piVar2[3] + 4;
  if (*(char *)(param_1 + 0x75) == '\0') {
    piVar2 = (int *)*in_ECX;
    FUN_005870c0((piVar2[1] - *piVar2) + 4);
    *(undefined4 *)(piVar2[3] + *piVar2) = 0;
    piVar2[3] = piVar2[3] + 4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x30);
    piVar2 = (int *)*in_ECX;
    FUN_005870c0((piVar2[1] - *piVar2) + 4);
    *(int *)(*piVar2 + piVar2[3]) = (iVar6 - iVar3) / 0x148;
    piVar2[3] = piVar2[3] + 4;
    pvVar8 = *(void **)(param_1 + 0x30);
    if (pvVar8 != *(void **)(param_1 + 0x34)) {
      do {
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 0x118);
        memcpy((void *)(piVar2[3] + *piVar2),pvVar8,0x118);
        piVar2[3] = piVar2[3] + 0x118;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 0x18);
        puVar5 = (undefined8 *)(piVar2[3] + *piVar2);
        *puVar5 = *(undefined8 *)((int)pvVar8 + 0x118);
        puVar5[1] = *(undefined8 *)((int)pvVar8 + 0x120);
        puVar5[2] = *(undefined8 *)((int)pvVar8 + 0x128);
        piVar2[3] = piVar2[3] + 0x18;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x130);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)pvVar8 + 0x134);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 1);
        *(undefined1 *)(*piVar2 + piVar2[3]) = *(undefined1 *)((int)pvVar8 + 0x138);
        piVar2[3] = piVar2[3] + 1;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x13c);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x140);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = (int *)*in_ECX;
        FUN_005870c0((piVar2[1] - *piVar2) + 4);
        puVar1 = (undefined4 *)((int)pvVar8 + 0x144);
        pvVar8 = (void *)((int)pvVar8 + 0x148);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *puVar1;
        piVar2[3] = piVar2[3] + 4;
      } while (pvVar8 != *(void **)(param_1 + 0x34));
    }
  }
  piVar2 = (int *)*in_ECX;
  iVar6 = (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68)) / 0x14;
  FUN_005870c0((piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  pvVar8 = *(void **)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x6c) - (int)pvVar8;
  iVar3 = iVar7 >> 0x1f;
  if (iVar7 / 0x14 + iVar3 != iVar3) {
    _Size = iVar6 * 0x14;
    piVar2 = (int *)*in_ECX;
    FUN_005870c0((piVar2[1] - *piVar2) + _Size);
    memcpy((void *)(*piVar2 + piVar2[3]),pvVar8,_Size);
    piVar2[3] = piVar2[3] + _Size;
  }
  piVar2 = (int *)*in_ECX;
  iVar6 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  FUN_005870c0((piVar2[1] - *piVar2) + 4);
  *(int *)(*piVar2 + piVar2[3]) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  param_1 = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = (int *)*in_ECX;
      FUN_005870c0((piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x38);
      piVar2[3] = piVar2[3] + 4;
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = (int *)*in_ECX;
      FUN_005870c0((piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x3c);
      piVar2[3] = piVar2[3] + 4;
      param_1 = param_1 + 1;
    } while (param_1 < iVar6);
  }
  piVar2 = (int *)*in_ECX;
  param_1 = (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) / 0x188;
  FUN_005870c0((piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = param_1;
  piVar2[3] = piVar2[3] + 4;
  if (0 < param_1) {
    local_c = 0;
    do {
      piVar2 = (int *)*in_ECX;
      iVar6 = *(int *)(iVar4 + 0xc);
      FUN_005870c0((piVar2[1] - *piVar2) + 1);
      *(undefined1 *)(piVar2[3] + *piVar2) = *(undefined1 *)(iVar6 + local_c + 0x30);
      piVar2[3] = piVar2[3] + 1;
      local_c = local_c + 0x188;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* FUN_0044e700 @ 0044e700  kind=gamemisc  attributed-by=caller-vote  size=151 */

void FUN_0044e700(int param_1,undefined1 *param_2)

{
  byte *pbVar1;
  int in_ECX;
  undefined1 *puVar2;
  
  if (param_1 < 0) {
    FUN_00450c50(*(int *)(in_ECX + 0x1c) - param_1,-param_1);
    puVar2 = *(undefined1 **)(in_ECX + 0x18);
  }
  else {
    if (*(int *)(in_ECX + 0x1c) <= param_1) {
      FUN_00450c50(param_1 + 1,0);
    }
    puVar2 = (undefined1 *)(*(int *)(in_ECX + 0x18) + param_1 * 4);
    if ((~((byte)puVar2[3] >> 7) & 1) == 0) {
      if ((param_2[3] & 0x1f) == 0) {
        return;
      }
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
      pbVar1 = (byte *)(*(int *)(in_ECX + 0x18) + 3 + param_1 * 4);
      *pbVar1 = *pbVar1 | 0x80;
      return;
    }
  }
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  return;
}


/* FUN_0044e8d0 @ 0044e8d0  kind=gamemisc  attributed-by=caller-vote  size=50 */

void FUN_0044e8d0(void *param_1,size_t param_2)

{
  int *in_ECX;
  
  FUN_005870c0((in_ECX[1] - *in_ECX) + param_2);
  memcpy((void *)(in_ECX[3] + *in_ECX),param_1,param_2);
  in_ECX[3] = in_ECX[3] + param_2;
  return;
}


/* FUN_00450c50 @ 00450c50  kind=gamemisc  attributed-by=caller-vote  size=300 */

void FUN_00450c50(uint param_1,int param_2)

{
  int in_ECX;
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  void *local_8;
  
  if (param_1 != *(uint *)(in_ECX + 0x1c)) {
    if (((int)param_1 < 0) || (param_1 == 0)) {
      if (*(void **)(in_ECX + 0x18) == (void *)0x0) {
        *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) - param_2;
        *(undefined4 *)(in_ECX + 0x1c) = 0;
        *(undefined4 *)(in_ECX + 0x18) = 0;
        return;
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(in_ECX + 0x18));
    }
    local_8 = operator_new(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
    if (local_8 == (void *)0x0) {
      local_8 = (void *)0x0;
    }
    else {
      iVar3 = param_1 - 1;
      if (-1 < iVar3) {
        iVar1 = (int)local_8 + 2;
        do {
          iVar3 = iVar3 + -1;
          *(undefined4 *)(iVar1 + -2) = 0;
          iVar1 = iVar1 + 4;
        } while (-1 < iVar3);
      }
    }
    if ((int)param_1 < *(int *)(in_ECX + 0x1c)) {
      if (0 < (int)param_1) {
        puVar4 = (undefined1 *)((int)local_8 + 2);
        uVar5 = param_1;
        do {
          puVar2 = puVar4 + *(int *)(in_ECX + 0x18) + (-2 - (int)local_8);
          puVar4[-2] = *puVar2;
          puVar4[-1] = puVar2[1];
          *puVar4 = puVar2[2];
          puVar4[1] = puVar2[3];
          uVar5 = uVar5 - 1;
          puVar4 = puVar4 + 4;
        } while (uVar5 != 0);
      }
    }
    else {
      iVar3 = 0;
      if (0 < *(int *)(in_ECX + 0x1c)) {
        puVar4 = (undefined1 *)(param_2 * 4 + 2 + (int)local_8);
        do {
          puVar2 = (undefined1 *)(*(int *)(in_ECX + 0x18) + iVar3 * 4);
          iVar3 = iVar3 + 1;
          puVar4[-2] = *puVar2;
          puVar4[-1] = puVar2[1];
          *puVar4 = puVar2[2];
          puVar4[1] = puVar2[3];
          puVar4 = puVar4 + 4;
        } while (iVar3 < *(int *)(in_ECX + 0x1c));
      }
    }
    if (*(void **)(in_ECX + 0x18) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)(in_ECX + 0x18));
    }
    *(void **)(in_ECX + 0x18) = local_8;
    *(int *)(in_ECX + 0x10) = *(int *)(in_ECX + 0x10) - param_2;
    *(uint *)(in_ECX + 0x1c) = param_1;
  }
  return;
}


/* FUN_00451470 @ 00451470  kind=gamemisc  attributed-by=caller-vote  size=53 */

bool FUN_00451470(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  if (*param_2 == '\0') {
    iVar2 = 0;
  }
  else {
    pcVar3 = param_2;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    iVar2 = (int)pcVar3 - (int)(param_2 + 1);
  }
  iVar2 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),param_2,iVar2);
  return iVar2 == 0;
}


/* FUN_00454400 @ 00454400  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00454400(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3530;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004cb5a0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xffffffe) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00456c80 @ 00456c80  kind=gamemisc  attributed-by=caller-vote  size=126 */

int FUN_00456c80(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006e3741;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_0044a700(param_1);
    }
    param_3 = param_3 + 0xc;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_00457e20 @ 00457e20  kind=gamemisc  attributed-by=caller-vote  size=113 */

void FUN_00457e20(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 extraout_EDX;
  undefined4 uVar1;
  undefined4 local_24;
  void *local_20;
  undefined4 local_10;
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_24 = *param_2;
  uVar1 = 0;
  local_c = 0xf;
  local_10 = 0;
  local_20 = (void *)((uint)local_20 & 0xffffff00);
  FUN_0040c0a0(param_3,0,0xffffffff);
  FUN_0064aec0(&local_24,0);
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar1);
  return;
}


/* FUN_00459250 @ 00459250  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00459250(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3a88;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_004ccbf0(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_00454400(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_004593e0 @ 004593e0  kind=gamemisc  attributed-by=caller-vote  size=156 */

void FUN_004593e0(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3ad0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0044b6d0((param_1[1] - *param_1) / 0xc);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00456c80(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00459ab0 @ 00459ab0  kind=gamemisc  attributed-by=caller-vote  size=94 */

void FUN_00459ab0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_1[6];
  in_ECX[7] = param_1[7];
  in_ECX[8] = param_1[8];
  in_ECX[9] = param_1[9];
  in_ECX[10] = param_1[10];
  in_ECX[0xb] = param_1[0xb];
  in_ECX[0xc] = param_1[0xc];
  in_ECX[0xd] = param_1[0xd];
  in_ECX[0xe] = param_1[0xe];
  return;
}


/* FUN_00466510 @ 00466510  kind=gamemisc  attributed-by=caller-vote  size=119 */

void FUN_00466510(void)

{
  undefined4 uVar1;
  int in_ECX;
  
  FUN_00466590();
  *(undefined4 *)(in_ECX + 0x78) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  uVar1 = FUN_0043c870();
  *(undefined4 *)(in_ECX + 0x78) = uVar1;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x84) = 0;
  *(undefined4 *)(in_ECX + 0x88) = 0;
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x94) = 0;
  *(undefined4 *)(in_ECX + 0x98) = 0;
  *(undefined4 *)(in_ECX + 0x9c) = 0;
  return;
}


/* FUN_00466590 @ 00466590  kind=gamemisc  attributed-by=caller-vote  size=185 */

void FUN_00466590(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  *(undefined1 *)(in_ECX + 2) = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x16] = 0;
  in_ECX[0x17] = 0;
  in_ECX[0x18] = 0;
  in_ECX[0x19] = 0;
  in_ECX[0x1a] = 0;
  in_ECX[0x1b] = 0;
  *(undefined1 *)(in_ECX + 0x1c) = 1;
  return;
}


/* FUN_00469000 @ 00469000  kind=gamemisc  attributed-by=caller-vote  size=32 */

int * FUN_00469000(int *param_1,int param_2)

{
  int *in_ECX;
  
  *param_1 = *in_ECX / param_2;
  param_1[1] = in_ECX[1] / param_2;
  return param_1;
}


/* FUN_00469060 @ 00469060  kind=gamemisc  attributed-by=caller-vote  size=64 */

undefined8 * FUN_00469060(undefined8 *param_1,int param_2)

{
  longlong *in_ECX;
  undefined8 uVar1;
  
  uVar1 = FUN_0068d946((double)*in_ECX / (double)param_2);
  *param_1 = uVar1;
  return param_1;
}


/* FUN_0046eeb0 @ 0046eeb0  kind=gamemisc  attributed-by=caller-vote  size=110 */

void FUN_0046eeb0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2;
  FUN_0066add0(&param_2);
  param_2 = iVar1 + 1;
  FUN_0066add0(&param_2);
  param_2 = iVar1 + 2;
  FUN_0066add0(&param_2);
  param_2 = iVar1;
  FUN_0066add0(&param_2);
  param_2 = iVar1 + 2;
  FUN_0066add0(&param_2);
  param_2 = iVar1 + 3;
  FUN_0066add0(&param_2);
  return;
}


/* FUN_0047faa0 @ 0047faa0  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 FUN_0047faa0(int param_1,int param_2)

{
  int in_ECX;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    return *(undefined4 *)(in_ECX + 0x4000bc + (param_1 * 0x400 + param_2) * 4);
  }
  return 0;
}


/* FUN_004862e0 @ 004862e0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004862e0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_005c03f0(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004868d0 @ 004868d0  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_004868d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005fbc10(1);
    }
    puVar3 = (undefined4 *)in_ECX[1];
    puVar1 = (undefined4 *)(*in_ECX + ((int)param_1 - (int)puVar2 >> 3) * 8);
    if (puVar3 != (undefined4 *)0x0) {
      *puVar3 = *puVar1;
      puVar3[1] = puVar1[1];
      in_ECX[1] = in_ECX[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005fbc10(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
    }
  }
  in_ECX[1] = in_ECX[1] + 8;
  return;
}


/* FUN_00486ba0 @ 00486ba0  kind=gamemisc  attributed-by=caller-vote  size=292 */

void FUN_00486ba0(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  int *piVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x250));
  *(undefined4 *)(in_ECX + 0x18) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1c) = 0xffffffff;
  piVar3 = (int *)**(int **)(in_ECX + 8);
  if (piVar3 != *(int **)(in_ECX + 8)) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 8));
  }
  puVar1 = *(undefined4 **)(in_ECX + 8);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 8) + 4) = *(int *)(in_ECX + 8);
  *(undefined4 *)(in_ECX + 0xc) = 0;
  if (pvVar2 != *(void **)(in_ECX + 8)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x10);
  if (piVar3 != *(int **)(in_ECX + 0x10)) {
    do {
      if ((undefined4 *)piVar3[2] != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)piVar3[2])(1);
      }
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x10));
  }
  puVar1 = *(undefined4 **)(in_ECX + 0x10);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x10) + 4) = *(int *)(in_ECX + 0x10);
  *(undefined4 *)(in_ECX + 0x14) = 0;
  if (pvVar2 == *(void **)(in_ECX + 0x10)) {
    puVar1 = *(undefined4 **)(in_ECX + 0x240);
    pvVar2 = (void *)*puVar1;
    *puVar1 = puVar1;
    *(int *)(*(int *)(in_ECX + 0x240) + 4) = *(int *)(in_ECX + 0x240);
    *(undefined4 *)(in_ECX + 0x244) = 0;
    if (pvVar2 != *(void **)(in_ECX + 0x240)) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    puVar1 = *(undefined4 **)(in_ECX + 0x248);
    pvVar2 = (void *)*puVar1;
    *puVar1 = puVar1;
    *(int *)(*(int *)(in_ECX + 0x248) + 4) = *(int *)(in_ECX + 0x248);
    *(undefined4 *)(in_ECX + 0x24c) = 0;
    if (pvVar2 == *(void **)(in_ECX + 0x248)) {
      *(undefined4 *)(in_ECX + 0x23c) = 0;
      *(undefined4 *)(in_ECX + 0x238) = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x250));
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* FUN_00487e30 @ 00487e30  kind=gamemisc  attributed-by=caller-vote  size=38 */

undefined4 FUN_00487e30(void)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x800a0c);
  if ((-1 < iVar1) && (iVar1 < *(int *)(in_ECX + 0x800988) - *(int *)(in_ECX + 0x800984) >> 2)) {
    return *(undefined4 *)(*(int *)(in_ECX + 0x800984) + iVar1 * 4);
  }
  return 0;
}


/* FUN_004a6ad0 @ 004a6ad0  kind=gamemisc  attributed-by=caller-vote  size=121 */

int FUN_004a6ad0(uint param_1,uint param_2)

{
  int iVar1;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     ((int)param_2 < 0x10000)) {
    iVar1 = FUN_00434a90((int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      param_1 = param_1 & 0x8000003f;
      if ((int)param_1 < 0) {
        param_1 = (param_1 - 1 | 0xffffffc0) + 1;
      }
      param_2 = param_2 & 0x8000003f;
      if ((int)param_2 < 0) {
        param_2 = (param_2 - 1 | 0xffffffc0) + 1;
      }
      return iVar1 + 0x18 + (param_1 * 0x40 + param_2) * 0x10;
    }
  }
  return 0;
}


/* FUN_004a8ef0 @ 004a8ef0  kind=gamemisc  attributed-by=caller-vote  size=38 */

void FUN_004a8ef0(int param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(char *)(iVar1 + in_ECX) = (char)(int)*(float *)(param_1 + iVar1 * 4);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return;
}


/* FUN_004c1510 @ 004c1510  kind=gamemisc  attributed-by=caller-vote  size=1265 */

/* WARNING: Removing unreachable block (ram,0x004c1834) */

float * FUN_004c1510(float *param_1,int param_2,int param_3,int param_4,float *param_5,int *param_6,
                    char param_7)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  if (param_7 != '\0') {
    *param_1 = *param_5;
    param_1[1] = param_5[1];
    param_1[2] = param_5[2];
    param_1[3] = param_5[3];
    return param_1;
  }
  iVar9 = -3;
  iVar8 = 3;
  local_40 = 0.0;
  local_28 = 0.0;
  local_10 = -3;
  local_20 = 3;
  local_c = -3;
  local_8 = 3;
  local_1c = -3;
  local_14 = 3;
  if (0 < *param_6) {
    iVar9 = 0;
    local_10 = 0;
    local_20 = 1;
  }
  if (*param_6 < 0) {
    iVar9 = -1;
    local_10 = -1;
    local_20 = 0;
  }
  if (0 < param_6[1]) {
    local_c = 0;
    local_8 = 1;
  }
  if (param_6[1] < 0) {
    local_c = -1;
    local_8 = 0;
  }
  if (0 < param_6[2]) {
    iVar8 = 1;
    local_1c = 0;
    local_14 = 1;
  }
  if (param_6[2] < 0) {
    iVar8 = 0;
    local_1c = -1;
    local_14 = 0;
  }
  fVar15 = 0.0;
  fVar11 = 0.0;
  fVar17 = 0.0;
  local_34 = 0.0;
  local_24 = 0.0;
  local_3c = 0.0;
  if (iVar9 < local_20) {
    uVar6 = param_2 + iVar9;
    do {
      if (local_c < local_8) {
        uVar10 = param_3 + local_c;
        iVar3 = local_c;
        do {
          if (local_1c < iVar8) {
            iVar9 = param_4 + local_1c;
            local_38 = local_1c;
            do {
              if (((((int)uVar6 < 0) || ((int)uVar10 < 0)) || (0xffffff < (int)uVar6)) ||
                 ((0xffffff < (int)uVar10 ||
                  (iVar8 = FUN_00434d10((int)(uVar6 + ((int)uVar6 >> 0x1f & 0xffU)) >> 8,
                                        (int)(uVar10 + ((int)uVar10 >> 0x1f & 0xffU)) >> 8),
                  iVar8 == 0)))) {
LAB_004c1732:
                pbVar2 = &DAT_0076b18c;
              }
              else {
                uVar7 = uVar10 & 0x800000ff;
                if ((int)uVar7 < 0) {
                  uVar7 = (uVar7 - 1 | 0xffffff00) + 1;
                }
                uVar5 = uVar6 & 0x800000ff;
                if ((int)uVar5 < 0) {
                  uVar5 = (uVar5 - 1 | 0xffffff00) + 1;
                }
                iVar8 = (uVar7 * 0x100 + uVar5) * 0x20 + *(int *)(iVar8 + 0xa8);
                if ((iVar8 == 0) || (iVar1 = *(int *)(iVar8 + 0x10), iVar9 < iVar1))
                goto LAB_004c1732;
                if (iVar9 < *(int *)(iVar8 + 0x1c) + iVar1) {
                  pbVar2 = (byte *)FUN_0042f730(iVar9 - iVar1);
                  if ((((pbVar2[3] & 0x1f) == 0) && (iVar9 < 1)) && ((pbVar2[3] & 0x40) == 0)) {
                    pbVar2 = &DAT_0076b184;
                  }
                }
                else {
                  pbVar2 = &DAT_0076b184;
                  if (0 < iVar9) {
                    pbVar2 = &DAT_0076b188;
                  }
                }
              }
              fVar17 = 1.0;
              bVar4 = pbVar2[3] & 0x1f;
              if (bVar4 == 0xd) {
                bVar4 = 0xff;
              }
              else if (((pbVar2[3] & 0x1f) == 0) || (bVar4 == 2)) {
                bVar4 = *pbVar2;
                if (bVar4 < 5) {
                  bVar4 = 5;
                }
              }
              else {
                bVar4 = 5;
                fVar17 = 0.0;
              }
              fVar11 = ABS((float)local_10 + 0.5);
              if (ABS((float)local_10 + 0.5) < ABS((float)iVar3 + 0.5)) {
                fVar11 = ABS((float)iVar3 + 0.5);
              }
              if (fVar11 < ABS((float)local_38 + 0.5)) {
                fVar11 = ABS((float)local_38 + 0.5);
              }
              fVar13 = (3.0 - fVar11) / 3.0;
              fVar11 = (float)bVar4 * fVar13 + local_24;
              fVar15 = fVar13 + local_34;
              fVar17 = fVar13 * fVar17 + local_3c;
              local_38 = local_38 + 1;
              iVar9 = iVar9 + 1;
              iVar8 = local_14;
              local_3c = fVar17;
              local_34 = fVar15;
              local_24 = fVar11;
            } while (local_38 < local_14);
          }
          iVar3 = iVar3 + 1;
          uVar10 = uVar10 + 1;
          iVar9 = local_10;
        } while (iVar3 < local_8);
      }
      iVar9 = iVar9 + 1;
      uVar6 = uVar6 + 1;
      local_10 = iVar9;
    } while (iVar9 < local_20);
    if (0.0 < fVar15) {
      local_40 = fVar11 / (fVar15 * 255.0);
      local_28 = fVar17 / fVar15;
    }
  }
  fVar11 = *param_5;
  fVar17 = param_5[1];
  fVar15 = param_5[2];
  fVar13 = 1.0;
  if (0.0 <= fVar11) {
    fVar12 = fVar11;
    if (1.0 < fVar11) {
      fVar12 = fVar13;
    }
  }
  else {
    fVar12 = 0.0;
  }
  if (0.0 <= fVar17) {
    fVar18 = fVar17;
    if (1.0 < fVar17) {
      fVar18 = fVar13;
    }
  }
  else {
    fVar18 = 0.0;
  }
  if (0.0 <= fVar15) {
    fVar16 = fVar15;
    if (1.0 < fVar15) {
      fVar16 = fVar13;
    }
  }
  else {
    fVar16 = 0.0;
  }
  fVar14 = (fVar18 * 0.1 * 0.59 + fVar12 * 0.1 * 0.3 + fVar16 * 0.1 * 0.11) * -9.0;
  fVar19 = fVar12 * 0.1 * 10.0 + fVar14;
  fVar12 = 0.0;
  fVar18 = fVar18 * 0.1 * 10.0 + fVar14;
  fVar14 = fVar16 * 0.1 * 10.0 + fVar14;
  fVar13 = 0.0;
  if ((0.0 <= fVar19) && (fVar12 = fVar19, 1.0 < fVar19)) {
    fVar12 = 1.0;
  }
  fVar16 = fVar13;
  if ((0.0 <= fVar18) && (fVar16 = fVar18, 1.0 < fVar18)) {
    fVar16 = 1.0;
  }
  if ((0.0 <= fVar14) && (fVar13 = fVar14, 1.0 < fVar14)) {
    fVar13 = 1.0;
  }
  fVar18 = 1.0 - local_28;
  param_1[3] = local_40;
  *param_1 = fVar11 * local_28 + fVar18 * fVar12;
  param_1[1] = fVar17 * local_28 + fVar18 * fVar16;
  param_1[2] = fVar15 * local_28 + fVar18 * fVar13;
  return param_1;
}


/* FUN_004cb080 @ 004cb080  kind=gamemisc  attributed-by=caller-vote  size=56 */

void FUN_004cb080(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    puVar2 = param_1;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = puVar1[(int)(param_1 + (1 - (int)param_3))];
      puVar1[2] = puVar2[2];
      puVar2 = puVar2 + 3;
      puVar1 = puVar1 + 3;
    } while (puVar2 != param_2);
  }
  return;
}


/* FUN_004cb310 @ 004cb310  kind=gamemisc  attributed-by=caller-vote  size=194 */

void FUN_004cb310(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8520;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x55555556) {
      pvVar2 = operator_new(param_1 * 3);
      if (pvVar2 != (void *)0x0) goto LAB_004cb36c;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_004cb36c:
  local_8 = 0;
  FUN_004cb0c0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 3;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 3);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 3);
  *in_ECX = (int)pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_004cb3f0 @ 004cb3f0  kind=gamemisc  attributed-by=caller-vote  size=153 */

void FUN_004cb3f0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 3)) {
    return;
  }
  if (0x55555555U - (in_ECX[1] - *in_ECX) / 3 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 3;
  if (0x55555555 - (uVar1 >> 1) < uVar1) {
    FUN_004cb310();
    return;
  }
  FUN_004cb310();
  return;
}


/* FUN_004cb490 @ 004cb490  kind=gamemisc  attributed-by=caller-vote  size=243 */

int FUN_004cb490(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8540;
  local_10 = ExceptionList;
  iVar4 = in_ECX[1];
  uVar3 = (iVar4 - *in_ECX) / 3;
  if (param_1 < uVar3) {
    iVar2 = *in_ECX;
    iVar1 = iVar2 + param_1 * 3;
    if (iVar1 == iVar2) {
      in_ECX[1] = iVar2;
      return iVar1;
    }
    if (iVar1 == iVar4) {
      return iVar1;
    }
    ExceptionList = &local_10;
    iVar4 = FUN_004cb080(iVar4,iVar4,iVar1);
  }
  else {
    if (param_1 <= uVar3) {
      return (iVar4 - *in_ECX) * 0x55555556;
    }
    ExceptionList = &local_10;
    FUN_004cb3f0(param_1 - uVar3);
    local_8 = 0;
    cube::Controller::vfunction12();
    iVar4 = in_ECX[1] + (param_1 - (in_ECX[1] - *in_ECX) / 3) * 3;
  }
  in_ECX[1] = iVar4;
  ExceptionList = local_10;
  return iVar4;
}


/* FUN_004cb5a0 @ 004cb5a0  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_004cb5a0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_004ccbf0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
  }
  return;
}


/* FUN_004e0150 @ 004e0150  kind=gamemisc  attributed-by=caller-vote  size=51 */

int FUN_004e0150(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004050c0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    FUN_0040eaf0(param_1 + 1);
  }
  return iVar1;
}


/* FUN_004e0500 @ 004e0500  kind=gamemisc  attributed-by=caller-vote  size=542 */

void FUN_004e0500(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x5d1745b < (uint)in_ECX[1]) {
    if (7 < (uint)param_5[10]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[5]);
    }
    param_5[10] = 7;
    param_5[9] = 0;
    *(undefined2 *)(param_5 + 5) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_004e070a;
      }
LAB_004e0661:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_004e0661;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_004e070a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004e0bc0 @ 004e0bc0  kind=gamemisc  attributed-by=caller-vote  size=525 */

undefined4 * FUN_004e0bc0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  bool bVar6;
  uint uStack_34;
  undefined1 local_24 [8];
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9530;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_004e0500(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*param_3 < param_2[4]) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004e0500(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    if (*(int *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_004e0500(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = param_2[4];
    local_1c = *param_3;
    bVar6 = SBORROW4(iVar2,local_1c);
    iVar3 = iVar2 - local_1c;
    puVar4 = &uStack_34;
    if (local_1c < iVar2) {
      local_18 = param_2;
      FUN_0042c740();
      if (local_18[4] < local_1c) {
        if (*(char *)(local_18[2] + 0xd) != '\0') {
          FUN_004e0500(param_1,0,local_18,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004e0500(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      bVar6 = SBORROW4(param_2[4],local_1c);
      iVar3 = param_2[4] - local_1c;
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if (bVar6 != iVar3 < 0) {
      local_18 = param_2;
      FUN_005c3ea0();
      if ((local_18 == piVar1) || (local_1c < local_18[4])) {
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_004e0500(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_004e0500(param_1,1,local_18,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_004e11d0(local_24,0,param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004e11d0 @ 004e11d0  kind=gamemisc  attributed-by=caller-vote  size=259 */

void FUN_004e11d0(undefined4 *param_1,char param_2,int *param_3,void *param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *in_ECX;
  bool bVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_3;
  puStack_c = &LAB_006e9590;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  local_8 = 0;
  bVar4 = true;
  if (*(char *)((int)puVar3[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_2 == '\0') {
        bVar4 = *param_3 < (int)puVar3[4];
      }
      else {
        bVar4 = *param_3 <= (int)puVar3[4];
      }
      if (bVar4 == false) {
        puVar2 = (undefined4 *)puVar3[2];
      }
      else {
        puVar2 = (undefined4 *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0xd) == '\0');
  }
  _param_2 = puVar3;
  if (bVar4) {
    if (puVar3 == *(undefined4 **)*in_ECX) {
      bVar4 = true;
      goto LAB_004e1261;
    }
    FUN_0042c740();
  }
  if (*piVar1 <= (int)_param_2[4]) {
    if (*(uint *)((int)param_4 + 0x28) < 8) {
      *(undefined4 *)((int)param_4 + 0x28) = 7;
      *(undefined4 *)((int)param_4 + 0x24) = 0;
      *(undefined2 *)((int)param_4 + 0x14) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x14));
  }
LAB_004e1261:
  puVar3 = (undefined4 *)FUN_004e0500(&param_2,bVar4,puVar3,piVar1,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004e2df0 @ 004e2df0  kind=gamemisc  attributed-by=caller-vote  size=255 */

void FUN_004e2df0(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined1 local_4c [4];
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  int local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9940;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar3 = (undefined4 *)puVar1[1];
    do {
      if ((int)puVar3[4] < *param_1) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  if ((puVar5 == puVar1) || (*param_1 < (int)puVar5[4])) {
    local_30 = *param_1;
    local_34 = 7;
    local_38 = 0;
    local_48[0] = (void *)((uint)local_48[0] & 0xffff0000);
    local_8 = 0;
    FUN_0040eaf0(local_48);
    local_8 = CONCAT31(local_8._1_3_,1);
    iVar2 = FUN_004e0150(&local_30);
    FUN_004e0bc0(local_4c,puVar5,iVar2 + 0x10,iVar2);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    if (7 < local_34) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_48[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004e6c00 @ 004e6c00  kind=gamemisc  attributed-by=caller-vote  size=44 */

int * FUN_004e6c00(int *param_1,int param_2)

{
  int *in_ECX;
  
  *param_1 = *in_ECX / param_2;
  param_1[1] = in_ECX[1] / param_2;
  param_1[2] = in_ECX[2] / param_2;
  return param_1;
}


/* FUN_0058d6f0 @ 0058d6f0  kind=gamemisc  attributed-by=caller-vote  size=24 */

void FUN_0058d6f0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = *param_2;
  return;
}


/* FUN_0058d8b0 @ 0058d8b0  kind=gamemisc  attributed-by=caller-vote  size=58 */

int FUN_0058d8b0(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00594720();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    FUN_0040eaf0(param_1 + 2);
  }
  return iVar1;
}


/* FUN_0058d930 @ 0058d930  kind=gamemisc  attributed-by=caller-vote  size=58 */

int FUN_0058d930(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00594720();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_0040eaf0(param_1);
    *(undefined4 *)(iVar1 + 0x28) = *(undefined4 *)(param_1 + 0x18);
    *(undefined4 *)(iVar1 + 0x2c) = *(undefined4 *)(param_1 + 0x1c);
  }
  return iVar1;
}


/* FUN_0058d970 @ 0058d970  kind=gamemisc  attributed-by=caller-vote  size=77 */

void FUN_0058d970(int *param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  if (param_1 != param_2) {
    piVar3 = param_1 + 0x12;
    do {
      puVar2 = (undefined4 *)*piVar3;
      if (puVar2 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar2 == (undefined4 *)piVar3[1]) {
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*piVar3);
          }
          if ((void *)*puVar2 != (void *)0x0) break;
          puVar2 = puVar2 + 3;
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      piVar1 = piVar3 + 0x50;
      piVar3 = piVar3 + 0x62;
    } while (piVar1 != param_2);
  }
  return;
}


/* FUN_0058d9f0 @ 0058d9f0  kind=gamemisc  attributed-by=caller-vote  size=542 */

void FUN_0058d9f0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x5555553 < (uint)in_ECX[1]) {
    if (7 < (uint)param_5[0xb]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[6]);
    }
    param_5[0xb] = 7;
    param_5[10] = 0;
    *(undefined2 *)(param_5 + 6) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_0058dbfa;
      }
LAB_0058db51:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0058db51;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_0058dbfa:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0058de50 @ 0058de50  kind=gamemisc  attributed-by=caller-vote  size=542 */

void FUN_0058de50(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x5555553 < (uint)in_ECX[1]) {
    if (7 < (uint)param_5[9]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[4]);
    }
    param_5[9] = 7;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 4) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_5);
  }
  in_ECX[1] = in_ECX[1] + 1;
  param_5[1] = (int)param_3;
  if (param_3 == (undefined4 *)*in_ECX) {
    ((undefined4 *)*in_ECX)[1] = param_5;
    *(int **)*in_ECX = param_5;
    *(int **)(*in_ECX + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*in_ECX + 8)) {
      *(int **)(*in_ECX + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == *(undefined4 **)*in_ECX) {
      *(int **)*in_ECX = param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*in_ECX + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*in_ECX + 4)) {
            *(int **)(*in_ECX + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int **)(*in_ECX + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_0058e05a;
      }
LAB_0058dfb1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0058dfb1;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*in_ECX + 4)) {
          *(int *)(*in_ECX + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*in_ECX + 4)) {
        *(int **)(*in_ECX + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_0058e05a:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0058e080 @ 0058e080  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * FUN_0058e080(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  int *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1640;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_0058d9f0(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    puVar4 = &uStack_34;
    if ((*param_3 < param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar4 = &uStack_34, param_3[1] < param_2[5])))) {
LAB_0058e111:
      local_14 = (undefined1 *)puVar4;
      FUN_0058d9f0(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    if ((*(int *)(iVar2 + 0x10) < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, *(int *)(iVar2 + 0x10) <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, *(int *)(iVar2 + 0x14) < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_0058d9f0(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < param_2[4]) ||
       ((puVar4 = &uStack_34, *param_3 <= param_2[4] &&
        (puVar4 = &uStack_34, param_3[1] < param_2[5])))) {
      local_20 = param_2;
      FUN_0042c740();
      piVar3 = local_20;
      cVar5 = FUN_0046d1c0(local_20 + 4,param_3);
      puVar4 = (uint *)local_14;
      if (cVar5 != '\0') {
        if (*(char *)(piVar3[2] + 0xd) != '\0') {
          FUN_0058d9f0(param_1,0,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0058e111;
      }
    }
    local_14 = (undefined1 *)puVar4;
    cVar5 = FUN_0046d1c0(param_2 + 4,param_3);
    if (cVar5 != '\0') {
      local_20 = param_2;
      FUN_005c3ea0();
      piVar3 = local_20;
      if ((local_20 == piVar1) || (cVar5 = FUN_0046d1c0(param_3,local_20 + 4), cVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_0058d9f0(param_1,1,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0058d9f0(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_0058e4c0(local_24,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0058e2d0 @ 0058e2d0  kind=gamemisc  attributed-by=caller-vote  size=468 */

undefined4 * FUN_0058e2d0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1660;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_0058e471;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_0058e319;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_0058e416;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_0058e319;
        }
      }
      else {
LAB_0058e416:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_0058e471:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_0058e640(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_0058e319;
        }
      }
      uVar5 = 0;
      goto LAB_0058e319;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_0058e471;
  }
  uVar5 = 1;
LAB_0058e319:
  FUN_0058de50(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0058e4c0 @ 0058e4c0  kind=gamemisc  attributed-by=caller-vote  size=325 */

void FUN_0058e4c0(undefined4 *param_1,char param_2,int *param_3,void *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_3;
  puStack_c = &LAB_006f1680;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar4 = (undefined4 *)*in_ECX;
  local_8 = 0;
  bVar6 = true;
  if (*(char *)((int)puVar4[1] + 0xd) == '\0') {
    iVar1 = *param_3;
    puVar5 = (undefined4 *)puVar4[1];
    do {
      puVar4 = puVar5;
      iVar2 = puVar4[4];
      if (param_2 == '\0') {
        if ((iVar1 < iVar2) || ((iVar1 <= iVar2 && (param_3[1] < (int)puVar4[5])))) {
          bVar6 = true;
          goto LAB_0058e561;
        }
        bVar6 = false;
LAB_0058e557:
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        if ((iVar2 < iVar1) || ((iVar2 <= iVar1 && ((int)puVar4[5] < param_3[1])))) {
          bVar6 = true;
        }
        else {
          bVar6 = false;
        }
        bVar6 = !bVar6;
        if (!bVar6) goto LAB_0058e557;
LAB_0058e561:
        puVar5 = (undefined4 *)*puVar4;
      }
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  _param_2 = puVar4;
  if (bVar6) {
    if (puVar4 == *(undefined4 **)*in_ECX) {
      bVar6 = true;
      goto LAB_0058e582;
    }
    FUN_0042c740();
  }
  if ((*piVar3 <= (int)_param_2[4]) &&
     ((*piVar3 < (int)_param_2[4] || (piVar3[1] <= (int)_param_2[5])))) {
    if (*(uint *)((int)param_4 + 0x2c) < 8) {
      *(undefined4 *)((int)param_4 + 0x2c) = 7;
      *(undefined4 *)((int)param_4 + 0x28) = 0;
      *(undefined2 *)((int)param_4 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x18));
  }
LAB_0058e582:
  puVar4 = (undefined4 *)FUN_0058d9f0(&param_2,bVar6,puVar4,piVar3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0058e640 @ 0058e640  kind=gamemisc  attributed-by=caller-vote  size=330 */

void FUN_0058e640(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  bool bVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_3;
  puStack_c = &LAB_006f16a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar6 = true;
  local_8 = 0;
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar3 = puVar5 + 4;
      if (7 < (uint)puVar5[9]) {
        piVar3 = (int *)*piVar3;
      }
      iVar2 = FUN_00428db0(0,puVar4[4],piVar3,puVar5[8]);
      bVar6 = iVar2 < 0;
    }
    else {
      puVar1 = puVar4;
      if (7 < (uint)puVar4[5]) {
        puVar1 = (undefined4 *)*puVar4;
      }
      iVar2 = FUN_00428db0(0,puVar5[8],puVar1,puVar4[4]);
      bVar6 = -1 < iVar2;
    }
    puVar1 = puVar5;
    if (bVar6 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar1;
  if (bVar6 != false) {
    if (puVar1 == *(undefined4 **)*in_ECX) {
      bVar6 = true;
      goto LAB_0058e6fe;
    }
    FUN_0042c740();
  }
  puVar5 = puVar4;
  if (7 < (uint)puVar4[5]) {
    puVar5 = (undefined4 *)*puVar4;
  }
  iVar2 = FUN_00428db0(0,param_2[8],puVar5,puVar4[4]);
  if (-1 < iVar2) {
    if (*(uint *)((int)param_4 + 0x24) < 8) {
      *(undefined4 *)((int)param_4 + 0x24) = 7;
      *(undefined4 *)((int)param_4 + 0x20) = 0;
      *(undefined2 *)((int)param_4 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x10));
  }
LAB_0058e6fe:
  puVar4 = (undefined4 *)FUN_0058de50(&param_2,bVar6,puVar1,puVar4,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0058e8e0 @ 0058e8e0  kind=gamemisc  attributed-by=caller-vote  size=128 */

int FUN_0058e8e0(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f16f1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x188) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_0058ea10(param_1);
    }
    param_3 = param_3 + 0x188;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_0058e9f0 @ 0058e9f0  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_0058e9f0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x2c) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x30) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x34) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x38) = 2;
  return;
}


/* FUN_0058ea10 @ 0058ea10  kind=gamemisc  attributed-by=caller-vote  size=133 */

void FUN_0058ea10(int param_1)

{
  int in_ECX;
  
  FUN_00468670(param_1);
  FUN_004593e0(param_1 + 0x48);
  *(undefined4 *)(in_ECX + 0x54) = *(undefined4 *)(param_1 + 0x54);
  FUN_0040ee70(param_1 + 0x58);
  *(undefined4 *)(in_ECX + 0x170) = *(undefined4 *)(param_1 + 0x170);
  *(undefined4 *)(in_ECX + 0x174) = *(undefined4 *)(param_1 + 0x174);
  *(undefined4 *)(in_ECX + 0x178) = *(undefined4 *)(param_1 + 0x178);
  *(undefined4 *)(in_ECX + 0x17c) = *(undefined4 *)(param_1 + 0x17c);
  *(undefined4 *)(in_ECX + 0x180) = *(undefined4 *)(param_1 + 0x180);
  *(undefined4 *)(in_ECX + 0x184) = *(undefined4 *)(param_1 + 0x184);
  return;
}


/* FUN_0058eaa0 @ 0058eaa0  kind=gamemisc  attributed-by=caller-vote  size=87 */

void FUN_0058eaa0(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x30) = 1;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  FUN_0043c020();
  *(undefined4 *)(in_ECX + 0x178) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x17c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x180) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x184) = 0;
  return;
}


/* FUN_00593e80 @ 00593e80  kind=gamemisc  attributed-by=caller-vote  size=45 */

void FUN_00593e80(void)

{
  int in_ECX;
  undefined1 local_5;
  
  if (*(int *)(in_ECX + 0x48) != 0) {
    FUN_00639cf0(*(int *)(in_ECX + 0x48),*(undefined4 *)(in_ECX + 0x4c),&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x48));
  }
  return;
}


/* FUN_005943b0 @ 005943b0  kind=gamemisc  attributed-by=caller-vote  size=251 */

void FUN_005943b0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  undefined1 local_50 [4];
  void *local_4c [4];
  undefined4 local_3c;
  uint local_38;
  int local_34;
  int local_30;
  void *local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1a90;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar1 = FUN_00594890(param_1);
  if (iVar1 != *in_ECX) {
    if ((*(int *)(iVar1 + 0x10) <= *param_1) &&
       ((*(int *)(iVar1 + 0x10) < *param_1 || (*(int *)(iVar1 + 0x14) <= param_1[1]))))
    goto LAB_00594490;
  }
  local_38 = 7;
  local_3c = 0;
  local_4c[0] = (void *)((uint)local_4c[0] & 0xffff0000);
  local_8 = 0;
  local_34 = *param_1;
  local_30 = param_1[1];
  FUN_0040eaf0(local_4c);
  local_8 = CONCAT31(local_8._1_3_,1);
  iVar2 = FUN_0058d8b0(&local_34);
  FUN_0058e080(local_50,iVar1,iVar2 + 0x10,iVar2);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  if (7 < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c[0]);
  }
LAB_00594490:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005944c0 @ 005944c0  kind=gamemisc  attributed-by=caller-vote  size=223 */

void FUN_005944c0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *in_ECX;
  undefined1 local_38 [4];
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1ac8;
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
    if (-1 < iVar3) goto LAB_00594581;
  }
  local_20 = 7;
  local_24 = 0;
  local_34[0] = (void *)((uint)local_34[0] & 0xffff0000);
  FUN_0040f680(param_1,0,0xffffffff);
  local_1c = 0;
  local_18 = 0;
  local_8 = 0;
  iVar3 = FUN_0058d930(local_34);
  FUN_0058e2d0(local_38,iVar1,iVar3 + 0x10,iVar3);
  if (7 < local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34[0]);
  }
LAB_00594581:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005945d0 @ 005945d0  kind=gamemisc  attributed-by=caller-vote  size=41 */

void FUN_005945d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  *param_1 = *param_2 + *in_ECX;
  iVar1 = param_2[2];
  iVar2 = in_ECX[2];
  param_1[1] = param_2[1] + in_ECX[1];
  param_1[2] = iVar1 + iVar2;
  return;
}


/* FUN_00594600 @ 00594600  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_00594600(int *param_1,int param_2)

{
  int *in_ECX;
  
  *param_1 = *in_ECX + param_2 * 0xc;
  return;
}


/* FUN_005946f0 @ 005946f0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_005946f0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x30);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x005946fe. Too many branches */
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


/* FUN_00594720 @ 00594720  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_00594720(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x30);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *in_ECX;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *in_ECX;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *in_ECX;
  }
  return puVar1;
}


/* FUN_005949d0 @ 005949d0  kind=gamemisc  attributed-by=caller-vote  size=225 */

void FUN_005949d0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1b10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xa72f06) {
      pvVar2 = operator_new(param_1 * 0x188);
      if (pvVar2 != (void *)0x0) goto LAB_00594a31;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00594a31:
  local_8 = 0;
  FUN_0058e8e0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  if (*in_ECX != 0) {
    FUN_0058d970(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[2] = (int)(uVar1 * 0x188 + (int)pvVar2);
  in_ECX[1] = (int)(((in_ECX[1] - *in_ECX) / 0x188) * 0x188 + (int)pvVar2);
  *in_ECX = (int)pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_00594b40 @ 00594b40  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_00594b40(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x188)) {
    return;
  }
  if (0xa72f05U - (in_ECX[1] - *in_ECX) / 0x188 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x188;
  if (0xa72f05 - (uVar1 >> 1) < uVar1) {
    FUN_005949d0();
    return;
  }
  FUN_005949d0();
  return;
}


/* FUN_0059aaf0 @ 0059aaf0  kind=gamemisc  attributed-by=caller-vote  size=167 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_0059aaf0(int param_1)

{
  int in_ECX;
  
  if (param_1 < 0) {
    if ((DAT_0076b7dc & 1) == 0) {
      DAT_0076b7dc = DAT_0076b7dc | 1;
    }
    _DAT_0076b7d8 = 0;
    _DAT_0076b7da = 0x100;
    return &DAT_0076b7d8;
  }
  if (*(int *)(in_ECX + 0x1c) <= param_1) {
    if ((DAT_0076b7dc & 2) == 0) {
      DAT_0076b7dc = DAT_0076b7dc | 2;
    }
    _DAT_0076b7e0 = 0;
    _DAT_0076b7e2 = 0;
    return &DAT_0076b7e0;
  }
  return (undefined *)(*(int *)(in_ECX + 0x18) + param_1 * 4);
}


/* FUN_0059aba0 @ 0059aba0  kind=gamemisc  attributed-by=caller-vote  size=762 */

void FUN_0059aba0(int param_1,int param_2,int param_3,int *param_4,undefined4 param_5,char param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  int local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  int local_24;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_5;
  
  local_28 = 0;
  if (0 < *param_4) {
    do {
      local_24 = 0;
      iVar3 = local_28;
      if (0 < param_4[1]) {
        do {
          local_40 = param_4[2] + -1;
          if (-1 < local_40) {
            iVar4 = param_1 + iVar3;
            iVar1 = param_2 + local_24;
            local_c = 0;
            local_5 = 0;
            iVar2 = param_3 + local_40;
            do {
              local_2c = local_c;
              local_2a = local_5;
              local_29 = 0xc0;
              FUN_0044e7a0(iVar4,iVar1,iVar2,&local_2c,param_5);
              if (param_6 != '\0') {
                if ((local_28 == 0) && (fVar5 = (float10)FUN_004c0ef0(), 0.5 < (float)fVar5)) {
                  local_10 = 0;
                  local_30 = 0;
                  local_2e = 0xc000;
                  FUN_0044e7a0(iVar4 + -1,iVar1,iVar2,&local_30,param_5);
                }
                if ((local_24 == 0) && (fVar5 = (float10)FUN_004c0ef0(), 0.5 < (float)fVar5)) {
                  local_14 = 0;
                  local_34 = 0;
                  local_32 = 0xc000;
                  FUN_0044e7a0(iVar4,iVar1 + -1,iVar2,&local_34,param_5);
                }
                if ((local_28 == *param_4 + -1) &&
                   (fVar5 = (float10)FUN_004c0ef0(), 0.5 < (float)fVar5)) {
                  local_18 = 0;
                  local_38 = 0;
                  local_36 = 0xc000;
                  FUN_0044e7a0(iVar4 + 1,iVar1,iVar2,&local_38,param_5);
                }
                if ((local_24 == param_4[1] + -1) &&
                   (fVar5 = (float10)FUN_004c0ef0(), 0.5 < (float)fVar5)) {
                  local_1c = 0;
                  local_3c = 0;
                  local_3a = 0xc000;
                  FUN_0044e7a0(iVar4,iVar1 + 1,iVar2,&local_3c,param_5);
                }
              }
              local_40 = local_40 + -1;
              iVar2 = iVar2 + -1;
              iVar3 = local_28;
            } while (-1 < local_40);
          }
          local_24 = local_24 + 1;
        } while (local_24 < param_4[1]);
      }
      local_28 = iVar3 + 1;
    } while (local_28 < *param_4);
  }
  return;
}


/* FUN_0059aeb0 @ 0059aeb0  kind=gamemisc  attributed-by=caller-vote  size=715 */

void FUN_0059aeb0(undefined4 param_1,int *param_2,float param_3,float param_4,undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  undefined1 local_164 [4];
  undefined4 local_160;
  undefined4 local_15c;
  int local_158;
  int local_154;
  undefined1 local_150 [280];
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  uint local_24;
  float local_20;
  float local_1c;
  int local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_160 = param_1;
  local_15c = param_5;
  FUN_0044a970();
  local_154 = *param_2;
  iVar4 = param_2[1];
  iVar3 = param_2[2];
  iVar1 = param_2[3];
  local_20 = param_3;
  local_1c = local_1c * param_4;
  local_28 = param_2[4];
  local_24 = param_2[5];
  local_38 = local_154;
  local_34 = iVar4;
  local_30 = iVar3;
  local_2c = iVar1;
  iVar2 = rand();
  local_c = *(undefined4 *)(local_158 + 0x800160);
  local_14 = iVar2 % 300 + 500;
  iVar3 = __alldiv(iVar3,iVar1,0x10000,0);
  iVar3 = (int)(iVar3 + (iVar3 >> 0x1f & 0xffU)) >> 8;
  iVar4 = __alldiv(local_154,iVar4,0x10000,0);
  local_154 = FUN_00434d10((int)(iVar4 + (iVar4 >> 0x1f & 0xffU)) >> 8,iVar3);
  if (local_154 != 0) {
    FUN_0042c5e0(local_160);
    iVar4 = rand();
    local_20 = ((float)iVar4 * 360.0) / 32767.0;
    if (((int)local_24 < 1) && ((int)local_24 < 0)) {
      iVar4 = __alldiv(local_28,local_24,0x10000,0);
      iVar4 = iVar4 + -1;
    }
    else {
      iVar4 = __alldiv(local_28,local_24,0x10000,0);
    }
    uVar5 = __alldiv(local_30,local_2c,0x10000,0);
    uVar6 = __alldiv(local_38,local_34,0x10000,0);
    do {
      if (((((int)uVar6 < 0) || ((int)uVar5 < 0)) || (0xffffff < (int)uVar6)) ||
         ((0xffffff < (int)uVar5 ||
          (iVar3 = FUN_00434d10((int)(uVar6 + ((int)uVar6 >> 0x1f & 0xffU)) >> 8,
                                (int)(uVar5 + ((int)uVar5 >> 0x1f & 0xffU)) >> 8), iVar3 == 0)))) {
LAB_0059b104:
        puVar7 = &DAT_0076b7d4;
      }
      else {
        uVar9 = uVar5 & 0x800000ff;
        if ((int)uVar9 < 0) {
          uVar9 = (uVar9 - 1 | 0xffffff00) + 1;
        }
        uVar8 = uVar6 & 0x800000ff;
        if ((int)uVar8 < 0) {
          uVar8 = (uVar8 - 1 | 0xffffff00) + 1;
        }
        iVar3 = (uVar9 * 0x100 + uVar8) * 0x20 + *(int *)(iVar3 + 0xa8);
        if ((iVar3 == 0) || (iVar1 = *(int *)(iVar3 + 0x10), iVar4 < iVar1)) goto LAB_0059b104;
        if (iVar4 < *(int *)(iVar3 + 0x1c) + iVar1) {
          puVar7 = (undefined *)FUN_0042f730(iVar4 - iVar1);
          if ((((puVar7[3] & 0x1f) == 0) && (iVar4 < 1)) && ((puVar7[3] & 0x40) == 0)) {
            puVar7 = &DAT_0076b7cc;
          }
        }
        else {
          puVar7 = &DAT_0076b7cc;
          if (0 < iVar4) {
            puVar7 = &DAT_0076b7d0;
          }
        }
      }
      if (((puVar7[3] & 0x1f) != 0) && ((puVar7[3] & 0x1f) != 2)) goto LAB_0059b11f;
      iVar4 = iVar4 + -1;
    } while( true );
  }
LAB_0059b168:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
LAB_0059b11f:
  uVar5 = iVar4 + 1;
  local_24 = ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10;
  local_28 = uVar5 * 0x10000;
  FUN_0044d590(local_150);
  FUN_0058e7d0(local_164,0,&local_154,DAT_0076b7ca);
  goto LAB_0059b168;
}


/* FUN_0059c840 @ 0059c840  kind=gamemisc  attributed-by=caller-vote  size=69 */

int * FUN_0059c840(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar4 = (undefined4 *)(param_2 + 0xc);
  puVar2 = *(undefined4 **)(in_ECX + 4);
  if (puVar4 != puVar2) {
    puVar3 = (undefined4 *)(param_2 + 8);
    do {
      puVar3[-2] = *puVar4;
      puVar3[-1] = puVar4[1];
      puVar1 = puVar4 + 2;
      puVar4 = puVar4 + 3;
      *puVar3 = *puVar1;
      puVar3 = puVar3 + 3;
    } while (puVar4 != puVar2);
  }
  *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + -0xc;
  *param_1 = param_2;
  return param_1;
}


/* FUN_0059c890 @ 0059c890  kind=gamemisc  attributed-by=caller-vote  size=842 */

void FUN_0059c890(int param_1,int param_2,int param_3,float param_4,byte *param_5,undefined4 param_6
                 ,char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 uVar8;
  int iVar9;
  undefined *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte *pbVar18;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  int local_4c;
  byte *local_48;
  float local_44;
  undefined4 local_3c;
  float local_38 [6];
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar5 = (float)param_1;
  fVar7 = (float)param_2;
  local_48 = param_5;
  local_3c = param_6;
  if (param_7 != '\0') {
    fVar5 = fVar5 + 0.5;
    fVar7 = fVar7 + 0.5;
  }
  fVar15 = (float)param_1 + param_4 + 1.0;
  iVar13 = (int)(((float)param_1 - param_4) - 1.0);
  local_4c = iVar13;
  if ((float)iVar13 <= fVar15) {
    fVar16 = (float)param_2 + param_4 + 1.0;
    iVar11 = (int)(((float)param_2 - param_4) - 1.0);
    do {
      if ((float)iVar11 <= fVar16) {
        fVar6 = (float)iVar13;
        fVar17 = param_4 * param_4;
        iVar12 = iVar11;
        local_4c = iVar13;
        local_44 = fVar17;
        do {
          if (((float)iVar12 - fVar7) * ((float)iVar12 - fVar7) + (fVar6 - fVar5) * (fVar6 - fVar5)
              <= fVar17) {
            iVar9 = FUN_004347a0(iVar13,iVar12,param_6);
            if (iVar9 == 0) {
              puVar10 = &DAT_0076b7d4;
            }
            else {
              iVar4 = *(int *)(iVar9 + 0x10);
              if (param_3 < iVar4) {
                puVar10 = &DAT_0076b7d4;
              }
              else if (param_3 < *(int *)(iVar9 + 0x1c) + iVar4) {
                puVar10 = (undefined *)FUN_0042f730(param_3 - iVar4);
                if ((((puVar10[3] & 0x1f) == 0) && (param_3 < 1)) && ((puVar10[3] & 0x40) == 0)) {
                  puVar10 = &DAT_0076b7cc;
                }
              }
              else {
                puVar10 = &DAT_0076b7cc;
                if (0 < param_3) {
                  puVar10 = &DAT_0076b7d0;
                }
              }
            }
            param_6 = local_3c;
            fVar17 = local_44;
            if ((puVar10[3] & 0x40) == 0) {
              pbVar18 = local_48;
              if (param_8 != '\0') {
                bVar1 = *local_48;
                bVar2 = local_48[1];
                bVar3 = local_48[2];
                local_38[3] = 50.0;
                local_38[4] = 120.0;
                local_38[5] = 60.0;
                local_14 = CONCAT44(120.0 - (float)bVar2,50.0 - (float)bVar1);
                local_c = 60.0 - (float)bVar3;
                fVar14 = (float10)FUN_005efdb0(local_4c,iVar12,param_3,local_3c);
                fVar17 = (float)fVar14;
                local_20 = local_14;
                uVar8 = local_20;
                local_20._0_4_ = (float)local_14;
                local_20._4_4_ = (float)((ulonglong)local_14 >> 0x20);
                local_18 = local_c;
                local_38[0] = (float)local_20 * fVar17 + (float)bVar1;
                local_38[1] = local_20._4_4_ * fVar17 + (float)bVar2;
                local_38[2] = local_c * fVar17 + (float)bVar3;
                iVar13 = 0;
                do {
                  iVar9 = iVar13 + 1;
                  *(char *)((int)&local_54 + iVar13) = (char)(int)local_38[iVar13];
                  iVar13 = iVar9;
                } while (iVar9 < 3);
                local_4d = local_48[3];
                local_50 = local_54;
                local_4e = local_52;
                iVar13 = local_4c;
                pbVar18 = (byte *)&local_50;
                local_20 = uVar8;
              }
              FUN_0044e7a0(iVar13,iVar12,param_3,pbVar18,local_3c);
              param_6 = local_3c;
              fVar17 = local_44;
            }
          }
          iVar12 = iVar12 + 1;
        } while ((float)iVar12 <= fVar16);
      }
      iVar13 = iVar13 + 1;
      local_4c = iVar13;
    } while ((float)iVar13 <= fVar15);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0059cbf0 @ 0059cbf0  kind=gamemisc  attributed-by=caller-vote  size=1013 */

void FUN_0059cbf0(int param_1,int param_2,int param_3,float param_4,byte *param_5,undefined4 param_6
                 ,char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  int iVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  byte *pbVar21;
  undefined2 local_4c;
  undefined1 local_4a;
  byte local_49;
  undefined2 local_48;
  undefined1 local_46;
  float local_44;
  undefined4 local_3c;
  float local_38 [6];
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar4 = (float)param_1;
  fVar5 = (float)param_2;
  fVar6 = (float)param_3;
  local_3c = param_6;
  if (param_7 != '\0') {
    fVar4 = fVar4 + 0.5;
    fVar5 = fVar5 + 0.5;
    fVar6 = fVar6 + 0.5;
  }
  fVar17 = (float)param_1 + param_4 + 1.0;
  iVar15 = (int)(((float)param_1 - param_4) - 1.0);
  if ((float)iVar15 <= fVar17) {
    fVar18 = (float)param_2 + param_4 + 1.0;
    iVar11 = (int)(((float)param_2 - param_4) - 1.0);
    local_44 = fVar18;
    do {
      if ((float)iVar11 <= fVar18) {
        fVar19 = (float)param_3 + param_4 + 1.0;
        iVar12 = (int)(((float)param_3 - param_4) - 1.0);
        iVar14 = iVar11;
        fVar20 = local_44;
        do {
          if ((float)iVar12 <= fVar19) {
            iVar13 = iVar12;
            do {
              if (((float)iVar13 - fVar6) * ((float)iVar13 - fVar6) +
                  ((float)iVar14 - fVar5) * ((float)iVar14 - fVar5) +
                  ((float)iVar15 - fVar4) * ((float)iVar15 - fVar4) <= param_4 * param_4) {
                iVar8 = FUN_004347a0(iVar15,iVar14,param_6);
                if (iVar8 == 0) {
                  puVar9 = &DAT_0076b7d4;
                }
                else {
                  iVar10 = *(int *)(iVar8 + 0x10);
                  if (iVar13 < iVar10) {
                    puVar9 = &DAT_0076b7d4;
                  }
                  else if (iVar13 < *(int *)(iVar8 + 0x1c) + iVar10) {
                    puVar9 = (undefined *)FUN_0042f730(iVar13 - iVar10);
                    if ((((puVar9[3] & 0x1f) == 0) && (iVar13 < 1)) && ((puVar9[3] & 0x40) == 0)) {
                      puVar9 = &DAT_0076b7cc;
                    }
                  }
                  else {
                    puVar9 = &DAT_0076b7cc;
                    if (0 < iVar13) {
                      puVar9 = &DAT_0076b7d0;
                    }
                  }
                }
                param_6 = local_3c;
                if ((puVar9[3] & 0x40) == 0) {
                  pbVar21 = param_5;
                  if (param_8 != '\0') {
                    bVar1 = *param_5;
                    bVar2 = param_5[1];
                    bVar3 = param_5[2];
                    local_38[3] = 50.0;
                    local_38[4] = 120.0;
                    local_38[5] = 60.0;
                    local_14 = CONCAT44(120.0 - (float)bVar2,50.0 - (float)bVar1);
                    local_c = 60.0 - (float)bVar3;
                    fVar16 = (float10)FUN_005efdb0(iVar15,iVar14,iVar13,local_3c);
                    fVar18 = (float)fVar16;
                    local_20 = local_14;
                    uVar7 = local_20;
                    local_20._0_4_ = (float)local_14;
                    local_20._4_4_ = (float)((ulonglong)local_14 >> 0x20);
                    local_18 = local_c;
                    local_38[0] = (float)local_20 * fVar18 + (float)bVar1;
                    local_38[1] = local_20._4_4_ * fVar18 + (float)bVar2;
                    local_38[2] = local_c * fVar18 + (float)bVar3;
                    iVar8 = 0;
                    do {
                      iVar10 = iVar8 + 1;
                      *(char *)((int)&local_48 + iVar8) = (char)(int)local_38[iVar8];
                      iVar8 = iVar10;
                    } while (iVar10 < 3);
                    local_49 = param_5[3];
                    local_4c = local_48;
                    local_4a = local_46;
                    pbVar21 = (byte *)&local_4c;
                    local_20 = uVar7;
                  }
                  FUN_0044e7a0(iVar15,iVar14,iVar13,pbVar21,local_3c);
                  param_6 = local_3c;
                }
              }
              iVar13 = iVar13 + 1;
              fVar20 = local_44;
            } while ((float)iVar13 <= fVar19);
          }
          iVar14 = iVar14 + 1;
          fVar18 = local_44;
        } while ((float)iVar14 <= fVar20);
      }
      iVar15 = iVar15 + 1;
    } while ((float)iVar15 <= fVar17);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0059fc90 @ 0059fc90  kind=gamemisc  attributed-by=caller-vote  size=476 */

double * FUN_0059fc90(double *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float10 fVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (double)param_3 * 0.01;
  dVar8 = (double)param_3 * 0.0005;
  dVar6 = (double)param_2 * 0.01;
  dVar5 = (double)param_2 * 0.0005;
  fVar3 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x800204) + dVar6,
                                (double)*(int *)(in_ECX + 0x800208) + dVar7);
  fVar4 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x8001fc) + dVar5,
                                (double)*(int *)(in_ECX + 0x800200) + dVar8);
  iVar1 = *(int *)(in_ECX + 0x800218);
  iVar2 = *(int *)(in_ECX + 0x800214);
  *param_1 = ((double)(float)fVar3 * 0.1 + (double)(float)fVar4) * 500.0 * 6.103515625e-05 +
             (double)param_2 * 6.103515625e-05;
  fVar3 = (float10)FUN_004c0ef0((double)iVar2 + dVar6,(double)iVar1 + dVar7);
  fVar4 = (float10)FUN_004c0ef0((double)*(int *)(in_ECX + 0x80020c) + dVar5,
                                (double)*(int *)(in_ECX + 0x800210) + dVar8);
  param_1[1] = ((double)(float)fVar3 * 0.1 + (double)(float)fVar4) * 500.0 * 6.103515625e-05 +
               (double)param_3 * 6.103515625e-05;
  return param_1;
}


/* FUN_0059ff50 @ 0059ff50  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 FUN_0059ff50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x14);
}


/* FUN_005a0e00 @ 005a0e00  kind=gamemisc  attributed-by=caller-vote  size=180 */

void ** FUN_005a0e00(void **param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  uint *in_ECX;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6bb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar1 = (void **)in_ECX[1];
  ppvVar2 = ExceptionList;
  if ((param_1 < ppvVar1) && (ppvVar2 = (void **)*in_ECX, ppvVar2 <= param_1)) {
    iVar4 = (int)param_1 - (int)ppvVar2;
    ppvVar2 = (void **)(iVar4 * 0x5397829d);
    if (ppvVar1 == (void **)in_ECX[2]) {
      ppvVar2 = (void **)FUN_00594b40(1);
    }
    uVar3 = in_ECX[1];
    param_1 = (void **)((iVar4 / 0x188) * 0x188 + *in_ECX);
    local_8 = 0;
  }
  else {
    if (ppvVar1 == (void **)in_ECX[2]) {
      ppvVar2 = (void **)FUN_00594b40(1);
    }
    uVar3 = in_ECX[1];
    local_8 = 1;
  }
  if (uVar3 != 0) {
    ppvVar2 = (void **)FUN_0058ea10(param_1);
  }
  in_ECX[1] = in_ECX[1] + 0x188;
  ExceptionList = local_10;
  return ppvVar2;
}


/* FUN_005a4710 @ 005a4710  kind=gamemisc  attributed-by=caller-vote  size=112 */

int FUN_005a4710(int param_1,int param_2)

{
  double dVar1;
  
  if ((param_1 == 0x200) && (param_2 == 0x200)) {
    return 1;
  }
  dVar1 = (double)((float)(0x200 - param_2) * (float)(0x200 - param_2) +
                  (float)(0x200 - param_1) * (float)(0x200 - param_1));
  libm_sse2_sqrt_precise();
  return 2 - (int)((float)dVar1 * -0.75);
}


/* FUN_005a4780 @ 005a4780  kind=gamemisc  attributed-by=caller-vote  size=120 */

void FUN_005a4780(int param_1,int param_2)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    puVar1 = (undefined4 *)(in_ECX + (param_1 * 0x400 + 0x10002f + param_2) * 4);
    pvVar2 = (void *)*puVar1;
    if (pvVar2 != (void *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *puVar1 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
  }
  return;
}


/* FUN_005a4800 @ 005a4800  kind=gamemisc  attributed-by=caller-vote  size=131 */

void FUN_005a4800(int param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  int in_ECX;
  
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    piVar1 = (int *)(in_ECX + (param_1 * 0x400 + 0x2f + param_2) * 4);
    puVar2 = (undefined4 *)*piVar1;
    if (puVar2 != (undefined4 *)0x0) {
      FUN_005a4af0(in_ECX,param_1,param_2);
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      *piVar1 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      (**(code **)*puVar2)(1);
    }
  }
  return;
}


/* FUN_005a4890 @ 005a4890  kind=gamemisc  attributed-by=caller-vote  size=230 */

void FUN_005a4890(uint param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  
  iVar2 = (int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6;
  iVar4 = (int)(((int)param_2 >> 0x1f & 0x3fU) + param_2) >> 6;
  if ((((-1 < iVar2) && (-1 < iVar4)) && (iVar2 < 0x400)) &&
     ((iVar4 < 0x400 && (iVar2 = *(int *)(in_ECX + 0xbc + (iVar2 * 0x400 + iVar4) * 4), iVar2 != 0))
     )) {
    param_1 = param_1 & 0x8000003f;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xffffffc0) + 1;
    }
    param_2 = param_2 & 0x8000003f;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xffffffc0) + 1;
    }
    piVar3 = (int *)(iVar2 + (param_1 * 0x40 + param_2) * 4 + 0x10018);
    puVar1 = (undefined4 *)*piVar3;
    if (puVar1 != (undefined4 *)0x0) {
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      *piVar3 = 0;
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
      LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
      if (*(char *)(in_ECX + 0xb4) == '\0') {
        FUN_005a5050(in_ECX,puVar1);
      }
      (**(code **)*puVar1)(1);
    }
  }
  return;
}


/* FUN_005a4af0 @ 005a4af0  kind=gamemisc  attributed-by=caller-vote  size=1303 */

void __thiscall FUN_005a4af0(void *this,int param_2,int param_3)

{
  basic_ostream<char,std::char_traits<char>_> *pbVar1;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iStack_1c4;
  basic_iostream<char,std::char_traits<char>_> local_1c0;
  basic_streambuf<char,std::char_traits<char>_> local_1a8 [2];
  undefined1 local_1a0 [8];
  undefined4 *local_198;
  undefined4 *local_188;
  undefined4 *local_178;
  undefined4 local_170;
  uint local_16c;
  basic_ios<char,std::char_traits<char>_> local_158 [5];
  int iStack_114;
  basic_iostream<char,std::char_traits<char>_> local_110;
  basic_streambuf<char,std::char_traits<char>_> local_f8 [2];
  undefined1 local_f0 [8];
  undefined4 *local_e8;
  undefined4 *local_d8;
  undefined4 *local_c8;
  undefined4 local_c0;
  uint local_bc;
  code *local_a8 [18];
  int local_60;
  void *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3100;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 0;
  if (((((*(char *)((int)this + 0xb4) == '\0') && (*(int *)((int)this + 0xa4) != 0)) &&
       (-1 < param_2)) && ((-1 < param_3 && (param_2 < 0x400)))) &&
     ((param_3 < 0x400 &&
      ((iVar5 = *(int *)((int)this + (param_2 * 0x400 + param_3) * 4 + 0xbc), iVar5 != 0 &&
       (*(char *)(iVar5 + 0x15a18) != '\0')))))) {
    local_3c = (int)this + 0xac;
    local_60 = (int)((param_3 * 0x40 >> 0x1f & 7U) + param_3 * 0x40) >> 3;
    local_34 = (int)(param_2 * 0x40 + (param_2 * 0x40 >> 0x1f & 7U)) >> 3;
    iVar5 = iVar5 + 0x1406c;
    local_38 = 8;
    local_30 = 0;
    do {
      iVar4 = 8;
      iVar6 = local_60;
      do {
        local_110.vbtablePtr =
             (basic_iostream<char,std::char_traits<char>_>_vbtable *)
             &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vbtable;
        local_110.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
             (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
        local_a8[0] = _vftable__exref;
        local_30 = local_30 | 1;
        local_8 = 0;
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  (&local_110,(basic_streambuf<char,std::char_traits<char>_> *)local_f8);
        local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((int)&local_110.vbtablePtr +
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&iStack_114 +
                (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>(local_f8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
        local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                      &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                       vftable;
        local_c0 = 0;
        local_bc = 0;
        local_8 = 3;
        iVar7 = local_34;
        iVar8 = iVar6;
        pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_00449150(&local_110.basic_ostream<char,std::char_traits<char>_>,"mission",
                              local_34,&DAT_0071c760);
        pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar7);
        pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar2);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar8);
        local_5c = (void *)0x0;
        local_58 = 0;
        local_54 = 0;
        local_50 = 0;
        iVar7 = iVar5 + -0x28;
        local_8._0_1_ = 4;
        FUN_0044a8a0(&local_5c);
        FUN_0044e120(iVar7);
        uVar3 = FUN_0040e140(local_2c);
        local_8._0_1_ = 5;
        FUN_004499c0(uVar3,&local_5c);
        local_8._0_1_ = 4;
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        local_1c0.vbtablePtr =
             (basic_iostream<char,std::char_traits<char>_>_vbtable *)
             &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
              vbtable;
        local_1c0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
             (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
        std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
                  (local_158);
        local_30 = local_30 | 2;
        local_8 = CONCAT31(local_8._1_3_,6);
        std::basic_iostream<char,std::char_traits<char>_>::
        basic_iostream<char,std::char_traits<char>_>
                  (&local_1c0,(basic_streambuf<char,std::char_traits<char>_> *)local_1a8);
        local_8 = 7;
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((int)&local_1c0.vbtablePtr +
         (local_1c0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&iStack_1c4 +
                (local_1c0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             (local_1c0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
        std::basic_streambuf<char,std::char_traits<char>_>::
        basic_streambuf<char,std::char_traits<char>_>(local_1a8);
        local_1a8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        local_170 = 0;
        local_16c = 0;
        local_8._0_1_ = 9;
        iVar7 = local_34;
        iVar8 = iVar6;
        pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)
                 FUN_00449150(&local_1c0.basic_ostream<char,std::char_traits<char>_>,"monster",
                              local_34,&DAT_0071c760);
        pbVar2 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar7);
        pbVar1 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar2);
        std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar1,iVar8);
        local_4c = (void *)0x0;
        local_48 = 0;
        local_44 = 0;
        local_40 = 0;
        local_8._0_1_ = 10;
        iVar7 = iVar5;
        FUN_0044a8a0(&local_4c);
        FUN_0044e280(iVar7);
        uVar3 = FUN_0040e140(local_2c);
        local_8._0_1_ = 0xb;
        FUN_004499c0(uVar3,&local_4c);
        if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_2c[0]);
        }
        if (local_4c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_4c);
        }
        local_8 = CONCAT31(local_8._1_3_,4);
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((int)&local_1c0.vbtablePtr +
         (local_1c0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&iStack_1c4 +
                (local_1c0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             (local_1c0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
        local_1a8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                        vftable;
        if ((local_16c & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)local_1a0._4_4_);
        }
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  (local_1a8,(char *)0x0,(char *)0x0,(char *)0x0);
        *local_198 = 0;
        *local_188 = 0;
        *local_178 = 0;
        local_16c = local_16c & 0xfffffffe;
        local_170 = 0;
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_1a8);
        std::basic_iostream<char,std::char_traits<char>_>::
        ~basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_1a0);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  (local_158);
        if (local_5c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_5c);
        }
        local_8 = 0xffffffff;
        *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
         ((int)&local_110.vbtablePtr +
         (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
        *(int *)((int)&iStack_114 +
                (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
             (local_110.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
        local_f8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                      &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::
                       vftable;
        if ((local_bc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)local_f0._4_4_);
        }
        std::basic_streambuf<char,std::char_traits<char>_>::setg
                  (local_f8,(char *)0x0,(char *)0x0,(char *)0x0);
        *local_e8 = 0;
        *local_d8 = 0;
        *local_c8 = 0;
        local_bc = local_bc & 0xfffffffe;
        local_c0 = 0;
        std::basic_streambuf<char,std::char_traits<char>_>::
        ~basic_streambuf<char,std::char_traits<char>_>(local_f8);
        std::basic_iostream<char,std::char_traits<char>_>::
        ~basic_iostream<char,std::char_traits<char>_>
                  ((basic_iostream<char,std::char_traits<char>_> *)local_f0);
        std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
                  ((basic_ios<char,std::char_traits<char>_> *)local_a8);
        iVar5 = iVar5 + 0x68;
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      local_34 = local_34 + 1;
      local_38 = local_38 + -1;
    } while (local_38 != 0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a5050 @ 005a5050  kind=gamemisc  attributed-by=caller-vote  size=467 */

void __thiscall FUN_005a5050(void *this,int param_2)

{
  uint uVar1;
  basic_ostream<char,std::char_traits<char>_> *pbVar2;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iStack_f4;
  basic_iostream<char,std::char_traits<char>_> local_f0;
  basic_streambuf<char,std::char_traits<char>_> local_d8 [14];
  undefined4 local_a0;
  undefined4 local_9c;
  code *local_88;
  undefined4 local_40;
  void *local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3180;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_40 = 0;
  local_14 = uVar1;
  if (((*(int *)((int)this + 0xa4) != 0) && (param_2 != 0)) &&
     ((*(char *)(param_2 + 0x75) != '\0' || (*(int *)(param_2 + 0x68) != *(int *)(param_2 + 0x6c))))
     ) {
    local_f0.vbtablePtr =
         (basic_iostream<char,std::char_traits<char>_>_vbtable *)
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_f0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
         (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
    local_88 = _vftable__exref;
    local_8 = 0;
    local_40 = 1;
    std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
              (&local_f0,(basic_streambuf<char,std::char_traits<char>_> *)local_d8);
    local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
    *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
     ((int)&local_f0.vbtablePtr +
     (local_f0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
         &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    *(int *)((int)&iStack_f4 + (local_f0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset
            ) = (local_f0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
    std::basic_streambuf<char,std::char_traits<char>_>::
    basic_streambuf<char,std::char_traits<char>_>(local_d8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
    local_d8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                  &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
    local_a0 = 0;
    local_9c = 0;
    iVar6 = *(int *)(param_2 + 100);
    iVar5 = *(int *)(param_2 + 0x60);
    local_8 = 3;
    pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)
             FUN_00449150(&local_f0.basic_ostream<char,std::char_traits<char>_>,&DAT_0071c764,iVar5,
                          &DAT_0071c760,iVar6,uVar1);
    pbVar3 = std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar5);
    pbVar2 = (basic_ostream<char,std::char_traits<char>_> *)FUN_00449150(pbVar3);
    std::basic_ostream<char,std::char_traits<char>_>::operator<<(pbVar2,iVar6);
    local_3c = (void *)0x0;
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_8._0_1_ = 4;
    FUN_0044a8a0(&local_3c);
    FUN_0044e340(param_2);
    uVar4 = FUN_0040e140(local_2c);
    local_8 = CONCAT31(local_8._1_3_,5);
    FUN_004499c0(uVar4,&local_3c);
    if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
    if (local_3c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c);
    }
    FUN_00404420(&local_f0);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005a5a10 @ 005a5a10  kind=gamemisc  attributed-by=caller-vote  size=25 */

undefined4 FUN_005a5a10(void)

{
  uint uVar1;
  int in_ECX;
  bool bVar2;
  
  uVar1 = *(uint *)(in_ECX + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(in_ECX + 0x68);
  }
  return *(undefined4 *)(in_ECX + 100);
}


/* FUN_005a5a30 @ 005a5a30  kind=gamemisc  attributed-by=caller-vote  size=25 */

undefined4 FUN_005a5a30(void)

{
  uint uVar1;
  int in_ECX;
  bool bVar2;
  
  uVar1 = *(uint *)(in_ECX + 4) & 0x80000001;
  bVar2 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar2 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (!bVar2) {
    return *(undefined4 *)(in_ECX + 100);
  }
  return *(undefined4 *)(in_ECX + 0x68);
}


/* FUN_005a5a50 @ 005a5a50  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 FUN_005a5a50(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x6c);
}


/* FUN_005a5b10 @ 005a5b10  kind=gamemisc  attributed-by=caller-vote  size=39 */

float10 FUN_005a5b10(void)

{
  double *in_ECX;
  
  return (float10)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1]);
}


/* FUN_005a5b40 @ 005a5b40  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_005a5b40(int *param_1,int *param_2)

{
  int iVar1;
  uint uVar2;
  int in_ECX;
  
  uVar2 = *(uint *)(in_ECX + 4) & 0x80000003;
  if ((int)uVar2 < 0) {
    uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
  }
  if (uVar2 == 1) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_1 = (*(int *)(in_ECX + 100) - *param_1) + -1;
  }
  else if (uVar2 == 2) {
    *param_1 = (*(int *)(in_ECX + 100) - *param_1) + -1;
    *param_2 = (*(int *)(in_ECX + 0x68) - *param_2) + -1;
  }
  else if (uVar2 == 3) {
    iVar1 = *param_1;
    *param_1 = *param_2;
    *param_2 = iVar1;
    *param_2 = (*(int *)(in_ECX + 0x68) - iVar1) + -1;
  }
  if (*(char *)(in_ECX + 8) != '\0') {
    *param_2 = (*(int *)(in_ECX + 0x68) - *param_2) + -1;
  }
  return;
}


/* FUN_005a5bc0 @ 005a5bc0  kind=gamemisc  attributed-by=caller-vote  size=235 */

float10 FUN_005a5bc0(int param_1,float param_2)

{
  int in_ECX;
  float10 fVar1;
  float fVar2;
  undefined4 local_8;
  
  fVar1 = (float10)FUN_004c0ef0((double)param_1 * 0.008 + (double)*(int *)(in_ECX + 0x8001f4),
                                (double)(int)param_2 * 0.008 + (double)*(int *)(in_ECX + 0x8001f8));
  fVar2 = (float)fVar1 * 1.2;
  local_8 = 0.0;
  if (0.0 <= fVar2) {
    if (fVar2 <= 1.0) {
      if (0.0 <= fVar2) {
        local_8 = fVar2;
      }
    }
    else {
      local_8 = 1.0;
    }
  }
  fVar1 = (float10)FUN_005c8310();
  param_2 = (float)fVar1 * 0.2 * (float)fVar1 + 0.02 + local_8;
  if (1.0 < param_2) {
    param_2 = 1.0;
  }
  return (float10)param_2;
}


/* FUN_005a6b60 @ 005a6b60  kind=gamemisc  attributed-by=caller-vote  size=50 */

int FUN_005a6b60(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0043c8e0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
  }
  return iVar1;
}


/* FUN_005ad320 @ 005ad320  kind=gamemisc  attributed-by=caller-vote  size=1983 */

void FUN_005ad320(int param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  float10 fVar12;
  undefined8 uVar13;
  uint local_360;
  uint local_35c;
  undefined4 local_354 [2];
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 *local_30c;
  undefined4 *local_308;
  int local_1cc [4];
  int local_1bc;
  int local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  undefined8 local_1a8;
  int local_1a0;
  undefined1 local_19c;
  int local_198;
  int local_194;
  undefined8 local_18c;
  undefined4 *local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  int local_178;
  undefined2 local_174 [2];
  undefined4 local_170;
  undefined4 local_16c;
  undefined2 local_168;
  undefined1 local_166;
  undefined2 local_164;
  undefined1 local_160 [256];
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  local_8 = 0xff;
  uStack_7 = 0xffffff;
  puStack_c = &LAB_006f3634;
  local_10 = ExceptionList;
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar5;
  uVar6 = __alldiv(param_2[2],param_2[3],0x10000,0);
  uVar7 = __alldiv(*param_2,param_2[1],0x10000,0);
  fVar12 = (float10)FUN_005f9340(uVar7,uVar6,param_1);
  if (0.0 <= 1.0 - (float)fVar12 * 50.0) goto LAB_005adafe;
  FUN_0058eaa0(uVar5);
  local_8 = 0;
  uStack_7 = 0;
  local_354[0] = 0x41;
  local_330 = 0x4019999a;
  local_32c = 0x4019999a;
  local_328 = 0x3f000000;
  local_334 = rand();
  local_334 = local_334 & 0x80000003;
  if ((int)local_334 < 0) {
    local_334 = (local_334 - 1 | 0xfffffffc) + 1;
  }
  local_35c = 0;
  do {
    local_360 = 0;
    do {
      local_33c = param_2[4];
      local_34c = *param_2 + local_35c * 0x10000;
      local_348 = param_2[1] + (((int)local_35c >> 0x1f) << 0x10 | local_35c >> 0x10) +
                  (uint)CARRY4(*param_2,local_35c * 0x10000);
      local_344 = param_2[2] + local_360 * 0x10000;
      local_338 = param_2[5];
      local_340 = param_2[3] + (((int)local_360 >> 0x1f) << 0x10 | local_360 >> 0x10) +
                  (uint)CARRY4(param_2[2],local_360 * 0x10000);
      cVar4 = FUN_005f4da0(local_354,param_1,1);
      if (cVar4 != '\0') {
        FUN_005a0e00(local_354);
        uVar13 = FUN_0068d946();
        iVar10 = (int)((ulonglong)uVar13 >> 0x20);
        uVar5 = (uint)uVar13;
        local_360 = 0;
        goto LAB_005ad533;
      }
      local_360 = local_360 + 1;
    } while ((int)local_360 < 3);
    local_35c = local_35c + 1;
  } while ((int)local_35c < 3);
  goto LAB_005adaaf;
LAB_005ad533:
  do {
    uVar8 = local_360 * 0x10000 - uVar5;
    local_35c = 0;
    do {
      local_19c = 1;
      local_198 = 0;
      local_194 = 0;
      local_18c = 0;
      local_184 = (undefined4 *)0x0;
      local_180 = (undefined4 *)0x0;
      local_17c = 0;
      local_178 = 0;
      local_174[0] = 0;
      local_170 = 0;
      local_16c = 0;
      local_168 = 0;
      local_166 = 0;
      local_164 = 1;
      local_60 = 0;
      memset(local_160,0,0x100);
      local_5c = 0;
      local_58 = 0;
      local_54 = -1;
      local_50 = -1;
      local_4c = -1;
      local_48 = 0;
      _local_8 = CONCAT31(uStack_7,1);
      uVar9 = rand();
      uVar9 = uVar9 & 0x80000003;
      if ((int)uVar9 < 0) {
        uVar9 = (uVar9 - 1 | 0xfffffffc) + 1;
      }
      if (uVar9 == 1) {
        local_44 = 0x3f800000;
        uStack_40 = 0x3f800000;
        local_1a8 = 0x3f8000003f800000;
        local_3c = 0x3f000000;
        local_1a0 = 0x3f000000;
        local_1cc[0] = 0x10;
      }
      else if (uVar9 == 2) {
        local_38 = 0x40400000;
        uStack_34 = 0x40400000;
        local_1a8 = 0x4040000040400000;
        local_30 = 0x3f800000;
        local_1a0 = 0x3f800000;
        local_1cc[0] = 0xc;
      }
      else if (uVar9 == 3) {
        local_2c = 0x40000000;
        uStack_28 = 0x40000000;
        local_1a8 = 0x4000000040000000;
        local_24 = 0x3dcccccd;
        local_1a0 = 0x3dcccccd;
        local_1cc[0] = 0x45;
      }
      else {
        local_20 = 0x40800000;
        uStack_1c = 0x40800000;
        local_1a8 = 0x4080000040800000;
        local_18 = 0x40400000;
        local_1a0 = 0x40400000;
        local_1cc[0] = 0x42;
      }
      local_1ac = rand();
      local_1ac = local_1ac & 0x80000003;
      if ((int)local_1ac < 0) {
        local_1ac = (local_1ac - 1 | 0xfffffffc) + 1;
      }
      uVar9 = local_35c * 0x10000 - uVar5;
      local_1b4 = param_2[4];
      local_1cc[2] = *param_2 + uVar8;
      local_1cc[3] = param_2[1] +
                     (((((int)local_360 >> 0x1f) << 0x10 | local_360 >> 0x10) - iVar10) -
                     (uint)(local_360 * 0x10000 < uVar5)) + (uint)CARRY4(*param_2,uVar8);
      local_1bc = param_2[2] + uVar9;
      local_1b0 = param_2[5];
      local_1b8 = param_2[3] +
                  (((((int)local_35c >> 0x1f) << 0x10 | local_35c >> 0x10) - iVar10) -
                  (uint)(local_35c * 0x10000 < uVar5)) + (uint)CARRY4(param_2[2],uVar9);
      cVar4 = FUN_005f4da0(local_1cc,param_1,1);
      if (cVar4 != '\0') {
        piVar1 = *(int **)(param_1 + 0x10);
        if (local_1cc < piVar1) {
          piVar2 = *(int **)(param_1 + 0xc);
          if (local_1cc < piVar2) goto LAB_005ad8f3;
          if (piVar1 == *(int **)(param_1 + 0x14)) {
            FUN_00594b40(1);
          }
          puVar3 = *(undefined4 **)(param_1 + 0x10);
          puVar11 = (undefined4 *)
                    ((((int)local_1cc - (int)piVar2) / 0x188) * 0x188 + *(uint *)(param_1 + 0xc));
          _local_8 = CONCAT31(uStack_7,2);
          if (puVar3 != (undefined4 *)0x0) {
            *puVar3 = *puVar11;
            puVar3[2] = puVar11[2];
            puVar3[3] = puVar11[3];
            puVar3[4] = puVar11[4];
            puVar3[5] = puVar11[5];
            puVar3[6] = puVar11[6];
            puVar3[7] = puVar11[7];
            puVar3[8] = puVar11[8];
            puVar3[9] = puVar11[9];
            puVar3[10] = puVar11[10];
            puVar3[0xb] = puVar11[0xb];
            *(undefined1 *)(puVar3 + 0xc) = *(undefined1 *)(puVar11 + 0xc);
            puVar3[0xd] = puVar11[0xd];
            puVar3[0xe] = puVar11[0xe];
            puVar3[0x10] = puVar11[0x10];
            puVar3[0x11] = puVar11[0x11];
            FUN_004593e0(puVar11 + 0x12);
            puVar3[0x15] = puVar11[0x15];
            FUN_0040ee70(puVar11 + 0x16);
            puVar3[0x5c] = puVar11[0x5c];
            puVar3[0x5d] = puVar11[0x5d];
            puVar3[0x5e] = puVar11[0x5e];
            puVar3[0x5f] = puVar11[0x5f];
            puVar3[0x60] = puVar11[0x60];
            puVar3[0x61] = puVar11[0x61];
          }
        }
        else {
LAB_005ad8f3:
          if (piVar1 == *(int **)(param_1 + 0x14)) {
            FUN_00594b40(1);
          }
          piVar1 = *(int **)(param_1 + 0x10);
          _local_8 = CONCAT31(uStack_7,3);
          if (piVar1 != (int *)0x0) {
            *piVar1 = local_1cc[0];
            piVar1[2] = local_1cc[2];
            piVar1[3] = local_1cc[3];
            piVar1[4] = local_1bc;
            piVar1[5] = local_1b8;
            piVar1[6] = local_1b4;
            piVar1[7] = local_1b0;
            piVar1[8] = local_1ac;
            piVar1[9] = (int)local_1a8;
            piVar1[10] = local_1a8._4_4_;
            piVar1[0xb] = local_1a0;
            *(undefined1 *)(piVar1 + 0xc) = local_19c;
            piVar1[0xd] = local_198;
            piVar1[0xe] = local_194;
            piVar1[0x10] = (int)local_18c;
            piVar1[0x11] = local_18c._4_4_;
            FUN_004593e0(&local_184);
            piVar1[0x15] = local_178;
            FUN_0040ee70(local_174);
            piVar1[0x5c] = local_5c;
            piVar1[0x5d] = local_58;
            piVar1[0x5e] = local_54;
            piVar1[0x5f] = local_50;
            piVar1[0x60] = local_4c;
            piVar1[0x61] = local_48;
          }
        }
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x188;
      }
      local_8 = 0;
      puVar3 = local_184;
      if (local_184 != (undefined4 *)0x0) {
        while( true ) {
          if (puVar3 == local_180) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_184);
          }
          if ((void *)*puVar3 != (void *)0x0) break;
          puVar3 = puVar3 + 3;
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar3);
      }
      local_35c = local_35c + 7;
    } while ((int)local_35c < 0xe);
    local_360 = local_360 + 7;
  } while ((int)local_360 < 0xe);
LAB_005adaaf:
  puVar3 = local_30c;
  if (local_30c != (undefined4 *)0x0) {
    while( true ) {
      if (puVar3 == local_308) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_30c);
      }
      if ((void *)*puVar3 != (void *)0x0) break;
      puVar3 = puVar3 + 3;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar3);
  }
LAB_005adafe:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005adde0 @ 005adde0  kind=gamemisc  attributed-by=caller-vote  size=39 */

void FUN_005adde0(int param_1)

{
  int *in_ECX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 4;
  piVar1 = in_ECX;
  do {
    *piVar1 = (int)*(float *)((param_1 - (int)in_ECX) + (int)piVar1);
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  return;
}


/* FUN_005ade60 @ 005ade60  kind=gamemisc  attributed-by=caller-vote  size=202 */

void FUN_005ade60(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3660;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xaaaaaab) {
      pvVar2 = operator_new(param_1 * 0x18);
      if (pvVar2 != (void *)0x0) goto LAB_005adebf;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005adebf:
  local_8 = 0;
  FUN_005ade10(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0x18;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0x18);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0x18);
  ExceptionList = local_10;
  return;
}


/* FUN_005adf50 @ 005adf50  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_005adf50(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x18)) {
    return;
  }
  if (0xaaaaaaaU - (in_ECX[1] - *in_ECX) / 0x18 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x18;
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
    FUN_005ade60();
    return;
  }
  FUN_005ade60();
  return;
}


/* FUN_005ae000 @ 005ae000  kind=gamemisc  attributed-by=caller-vote  size=58 */

void FUN_005ae000(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x10000,0);
  *in_ECX = uVar1;
  uVar1 = __alldiv(param_1[2],param_1[3],0x10000,0);
  in_ECX[1] = uVar1;
  return;
}


/* FUN_005ae040 @ 005ae040  kind=gamemisc  attributed-by=caller-vote  size=141 */

void FUN_005ae040(int param_1,int param_2,int param_3,undefined4 param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = param_2;
  while( true ) {
    iVar3 = iVar4 * 2 + 2;
    if (param_3 <= iVar3) break;
    fVar2 = *(float *)(*param_5 + 0x18 + *(int *)(param_1 + -4 + iVar3 * 4) * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + *(int *)(param_1 + iVar3 * 4) * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar3 = iVar4 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + iVar3 * 4);
    iVar4 = iVar3;
  }
  if (iVar3 == param_3) {
    *(undefined4 *)(param_1 + iVar4 * 4) = *(undefined4 *)(param_1 + -4 + param_3 * 4);
    iVar4 = param_3 + -1;
  }
  FUN_005ae4a0(param_1,iVar4,param_2,param_4,param_5);
  return;
}


/* FUN_005ae0d0 @ 005ae0d0  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_005ae0d0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 3;
    do {
      if ((void *)*puVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      if ((void *)puVar2[-3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)puVar2[-3]);
      }
      puVar1 = puVar2 + 3;
      puVar2 = puVar2 + 6;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_005ae140 @ 005ae140  kind=gamemisc  attributed-by=caller-vote  size=256 */

void FUN_005ae140(int *param_1,int *param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *local_8;
  
  if ((param_1 != param_2) && (piVar5 = param_1 + 1, piVar5 != param_2)) {
    do {
      iVar3 = *piVar5;
      fVar2 = *(float *)(*param_3 + 0x18 + iVar3 * 0x1c);
      if (*(float *)(*param_3 + 0x18 + *param_1 * 0x1c) <= fVar2) {
        iVar4 = piVar5[-1];
        piVar6 = piVar5;
        local_8 = piVar5;
        if (fVar2 < *(float *)(*param_3 + 0x18 + iVar4 * 0x1c)) {
          do {
            local_8 = piVar6 + -1;
            *piVar6 = iVar4;
            iVar4 = piVar6[-2];
            fVar2 = *(float *)(*param_3 + 0x18 + iVar4 * 0x1c);
            pfVar1 = (float *)(*param_3 + 0x18 + iVar3 * 0x1c);
            piVar6 = local_8;
          } while (*pfVar1 <= fVar2 && fVar2 != *pfVar1);
        }
        *local_8 = iVar3;
      }
      else {
        iVar4 = (int)piVar5 - (int)param_1 >> 2;
        memmove(piVar5 + (1 - iVar4),param_1,iVar4 * 4);
        *param_1 = iVar3;
      }
      piVar5 = piVar5 + 1;
    } while (piVar5 != param_2);
  }
  return;
}


/* FUN_005ae240 @ 005ae240  kind=gamemisc  attributed-by=caller-vote  size=206 */

void FUN_005ae240(int param_1,int param_2,int *param_3)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_10;
  int local_c;
  int local_8;
  
  iVar6 = param_2 - param_1 >> 2;
  iVar4 = iVar6 - (param_2 - param_1 >> 0x1f) >> 1;
  if (0 < iVar4) {
    local_c = iVar4 * 2 + 2;
    do {
      iVar4 = iVar4 + -1;
      local_10 = *(undefined4 *)(param_1 + iVar4 * 4);
      local_c = local_c + -2;
      local_8 = iVar4;
      for (iVar5 = local_c; iVar5 < iVar6; iVar5 = iVar5 * 2 + 2) {
        fVar2 = *(float *)(*param_3 + 0x18 + *(int *)(param_1 + -4 + iVar5 * 4) * 0x1c);
        pfVar1 = (float *)(*param_3 + 0x18 + *(int *)(param_1 + iVar5 * 4) * 0x1c);
        if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
          iVar5 = iVar5 + -1;
        }
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + iVar5 * 4);
        local_8 = iVar5;
      }
      iVar3 = local_8;
      if (iVar5 == iVar6) {
        *(undefined4 *)(param_1 + local_8 * 4) = *(undefined4 *)(param_1 + -4 + iVar6 * 4);
        iVar3 = iVar6 + -1;
      }
      FUN_005ae4a0(param_1,iVar3,iVar4,&local_10,param_3);
    } while (0 < iVar4);
  }
  return;
}


/* FUN_005ae310 @ 005ae310  kind=gamemisc  attributed-by=caller-vote  size=168 */

void FUN_005ae310(int *param_1,int *param_2,int *param_3,int *param_4)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  
  iVar3 = *param_2;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_2 = *param_1;
    *param_1 = iVar3;
  }
  iVar3 = *param_3;
  fVar2 = *(float *)(*param_4 + 0x18 + *param_2 * 0x1c);
  pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
  if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
    *param_3 = *param_2;
    *param_2 = iVar3;
    fVar2 = *(float *)(*param_4 + 0x18 + *param_1 * 0x1c);
    pfVar1 = (float *)(*param_4 + 0x18 + iVar3 * 0x1c);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      *param_2 = *param_1;
      *param_1 = iVar3;
    }
  }
  return;
}


/* FUN_005ae3c0 @ 005ae3c0  kind=gamemisc  attributed-by=caller-vote  size=159 */

void FUN_005ae3c0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = param_3 - param_1 >> 2;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar2 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar1 = iVar2 * 4 + param_1;
    FUN_005ae310(param_1,iVar1,iVar2 * 8 + param_1,param_4);
    FUN_005ae310(param_2 + iVar2 * -4,param_2,iVar2 * 4 + param_2,param_4);
    iVar3 = param_3 + iVar2 * -4;
    FUN_005ae310(param_3 + iVar2 * -8,iVar3,param_3,param_4);
    FUN_005ae310(iVar1,param_2,iVar3,param_4);
    return;
  }
  FUN_005ae310(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_005ae460 @ 005ae460  kind=gamemisc  attributed-by=caller-vote  size=64 */

void FUN_005ae460(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  for (; param_1 != param_2; param_1 = (undefined8 *)((int)param_1 + 0x1c)) {
    *param_3 = *param_1;
    param_3[1] = param_1[1];
    param_3[2] = param_1[2];
    *(undefined4 *)(param_3 + 3) = *(undefined4 *)(param_1 + 3);
    param_3 = (undefined8 *)((int)param_3 + 0x1c);
  }
  return;
}


/* FUN_005ae4a0 @ 005ae4a0  kind=gamemisc  attributed-by=caller-vote  size=158 */

void FUN_005ae4a0(int param_1,int param_2,int param_3,int *param_4,int *param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 <= param_3) {
    *(int *)(param_1 + param_2 * 4) = *param_4;
    return;
  }
  do {
    iVar4 = (param_2 + -1) / 2;
    iVar3 = *(int *)(param_1 + iVar4 * 4);
    fVar2 = *(float *)(*param_5 + 0x18 + *param_4 * 0x1c);
    pfVar1 = (float *)(*param_5 + 0x18 + iVar3 * 0x1c);
    if (fVar2 < *pfVar1 || fVar2 == *pfVar1) {
      *(int *)(param_1 + param_2 * 4) = *param_4;
      return;
    }
    *(int *)(param_1 + param_2 * 4) = iVar3;
    param_2 = iVar4;
  } while (param_3 < iVar4);
  *(int *)(param_1 + iVar4 * 4) = *param_4;
  return;
}


/* FUN_005ae540 @ 005ae540  kind=gamemisc  attributed-by=caller-vote  size=232 */

void FUN_005ae540(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar1 = param_2 - param_1;
  do {
    iVar1 = iVar1 >> 2;
    if (iVar1 < 0x21) {
LAB_005ae5d7:
      if (1 < iVar1) {
        FUN_005ae140(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar1) {
        if (4 < (int)(param_2 - param_1 & 0xfffffffcU)) {
          FUN_005ae240(param_1,param_2,param_4,0,0);
        }
        FUN_005ae630(param_1,param_2,param_4);
        return;
      }
      goto LAB_005ae5d7;
    }
    piVar2 = (int *)FUN_005ae690(local_c,param_1,param_2,param_4);
    iVar3 = *piVar2;
    iVar1 = piVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)(iVar3 - param_1 & 0xfffffffcU) < (int)(param_2 - iVar1 & 0xfffffffcU)) {
      FUN_005ae540(param_1,iVar3,param_3,param_4);
      iVar3 = param_2;
      param_1 = iVar1;
    }
    else {
      FUN_005ae540(iVar1,param_2,param_3,param_4);
    }
    iVar1 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_005ae630 @ 005ae630  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_005ae630(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar1 = param_3;
  uVar2 = param_2 - (int)param_1;
  while (4 < (int)(uVar2 & 0xfffffffc)) {
    param_2 = *(undefined4 *)((int)param_1 + (uVar2 - 4));
    *(undefined4 *)((int)param_1 + (uVar2 - 4)) = *param_1;
    uVar2 = uVar2 - 4;
    FUN_005ae040(param_1,0,(int)uVar2 >> 2,&param_2,uVar1);
  }
  return;
}


/* FUN_005ae690 @ 005ae690  kind=gamemisc  attributed-by=caller-vote  size=532 */

void FUN_005ae690(uint *param_1,int *param_2,int *param_3,int *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_c = param_2 + (((int)param_3 - (int)param_2 >> 2) - ((int)param_3 - (int)param_2 >> 0x1f) >>
                      1);
  FUN_005ae3c0(param_2,local_c,param_3 + -1,param_4);
  piVar5 = local_c + 1;
  if (param_2 < local_c) {
    do {
      piVar1 = local_c + -1;
      fVar2 = *(float *)(*param_4 + 0x18 + *piVar1 * 0x1c);
      fVar3 = *(float *)(*param_4 + 0x18 + *local_c * 0x1c);
      if ((fVar2 < fVar3) || (fVar3 < fVar2)) break;
      local_c = piVar1;
    } while (param_2 < piVar1);
  }
  local_10 = piVar5;
  piVar1 = piVar5;
  piVar6 = local_c;
  if (piVar5 < param_3) {
    fVar2 = *(float *)(*param_4 + 0x18 + *local_c * 0x1c);
    do {
      fVar3 = *(float *)(*param_4 + 0x18 + *piVar5 * 0x1c);
      local_10 = piVar5;
      piVar1 = piVar5;
      if ((fVar3 < fVar2) || (fVar2 < fVar3)) break;
      piVar5 = piVar5 + 1;
      local_10 = piVar5;
      piVar1 = piVar5;
    } while (piVar5 < param_3);
  }
joined_r0x005ae765:
  do {
    piVar7 = local_c;
    if (param_3 <= piVar5) {
joined_r0x005ae7c4:
      while (local_c = piVar7, param_2 < local_c) {
        piVar7 = local_c + -1;
        fVar2 = *(float *)(*param_4 + 0x18 + local_c[-1] * 0x1c);
        fVar3 = *(float *)(*param_4 + 0x18 + *piVar6 * 0x1c);
        piVar5 = local_10;
        if (fVar3 <= fVar2) {
          if (fVar3 < fVar2) break;
          iVar4 = piVar6[-1];
          piVar6 = piVar6 + -1;
          *piVar6 = *piVar7;
          *piVar7 = iVar4;
        }
      }
      if (local_c == param_2) {
        if (piVar5 == param_3) {
          *param_1 = (uint)piVar6;
          param_1[1] = (uint)piVar1;
          return;
        }
        if (piVar1 != piVar5) {
          iVar4 = *piVar6;
          *piVar6 = *piVar1;
          *piVar1 = iVar4;
        }
        iVar4 = *piVar6;
        *piVar6 = *piVar5;
        *piVar5 = iVar4;
        piVar5 = local_10 + 1;
        local_10 = local_10 + 1;
        piVar1 = piVar1 + 1;
        piVar6 = piVar6 + 1;
      }
      else {
        local_c = local_c + -1;
        if (piVar5 == param_3) {
          piVar6 = piVar6 + -1;
          if (local_c != piVar6) {
            iVar4 = *local_c;
            *local_c = *piVar6;
            *piVar6 = iVar4;
          }
          iVar4 = *piVar6;
          *piVar6 = piVar1[-1];
          piVar1[-1] = iVar4;
          piVar1 = piVar1 + -1;
        }
        else {
          iVar4 = *piVar5;
          *piVar5 = *local_c;
          *local_c = iVar4;
          piVar5 = piVar5 + 1;
          local_10 = piVar5;
        }
      }
      goto joined_r0x005ae765;
    }
    fVar2 = *(float *)(*param_4 + 0x18 + *piVar6 * 0x1c);
    fVar3 = *(float *)(*param_4 + 0x18 + *piVar5 * 0x1c);
    local_8 = piVar1;
    if (fVar3 <= fVar2) {
      local_10 = piVar5;
      if (fVar3 < fVar2) goto joined_r0x005ae7c4;
      local_8 = piVar1 + 1;
      iVar4 = *piVar1;
      *piVar1 = *piVar5;
      *piVar5 = iVar4;
    }
    piVar5 = piVar5 + 1;
    local_10 = piVar5;
    piVar1 = local_8;
  } while( true );
}


/* FUN_005ae8c0 @ 005ae8c0  kind=gamemisc  attributed-by=caller-vote  size=53 */

void FUN_005ae8c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_3 = param_3 + 3;
  }
  return;
}


/* FUN_005ae900 @ 005ae900  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_005ae900(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 0xc);
    do {
      if (puVar1 != (undefined4 *)0xc) {
        puVar1[-3] = 0;
        puVar1[-2] = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
        puVar1[3] = 0;
      }
      puVar1 = puVar1 + 7;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* FUN_005aea50 @ 005aea50  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_005aea50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


/* FUN_005aea90 @ 005aea90  kind=gamemisc  attributed-by=caller-vote  size=156 */

void FUN_005aea90(int *param_1)

{
  int *piVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3680;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0044b6d0((param_1[1] - *param_1) / 0xc);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_005ae8c0(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_005aec90 @ 005aec90  kind=gamemisc  attributed-by=caller-vote  size=52 */

void FUN_005aec90(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = param_1[3];
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  in_ECX[6] = param_2;
  return;
}


/* FUN_005aecd0 @ 005aecd0  kind=gamemisc  attributed-by=caller-vote  size=43 */

void FUN_005aecd0(void)

{
  int *in_ECX;
  undefined1 local_5;
  
  if (*in_ECX != 0) {
    FUN_005ae0d0(*in_ECX,in_ECX[1],&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_005aedf0 @ 005aedf0  kind=gamemisc  attributed-by=caller-vote  size=24 */

int FUN_005aedf0(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 0x1c;
}


/* FUN_005aee40 @ 005aee40  kind=gamemisc  attributed-by=caller-vote  size=75 */

uint FUN_005aee40(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0x1c;
  if (0x9249249 - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_005aee90 @ 005aee90  kind=gamemisc  attributed-by=caller-vote  size=222 */

void FUN_005aee90(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3700;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x924924a) {
      pvVar2 = operator_new(param_1 * 0x1c);
      if (pvVar2 != (void *)0x0) goto LAB_005aeef5;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005aeef5:
  local_8 = 0;
  FUN_005ae950(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0x1c;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar2;
  in_ECX[2] = (int)((int)pvVar2 + uVar1 * 0x1c);
  in_ECX[1] = (int)((int)pvVar2 + param_1 * 0x1c);
  ExceptionList = local_10;
  return;
}


/* FUN_005aef90 @ 005aef90  kind=gamemisc  attributed-by=caller-vote  size=185 */

void FUN_005aef90(uint param_1)

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
  puStack_c = &LAB_006f3720;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x8000000) {
      pvVar3 = operator_new(param_1 << 5);
      if (pvVar3 != (void *)0x0) goto LAB_005aeff1;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005aeff1:
  local_8 = 0;
  FUN_005ae9a0(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)(uVar2 * 0x20 + (int)pvVar3);
  in_ECX[1] = (in_ECX[1] - (int)pvVar1 & 0xffffffe0U) + (int)pvVar3;
  *in_ECX = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_005af070 @ 005af070  kind=gamemisc  attributed-by=caller-vote  size=111 */

int FUN_005af070(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  int *in_ECX;
  int iVar3;
  
  iVar3 = in_ECX[2] - in_ECX[1];
  iVar2 = iVar3 * -0x6db6db6d;
  if ((uint)(iVar3 / 0x1c) < param_1) {
    iVar2 = (in_ECX[1] - *in_ECX) / 0x1c;
    if (0x9249249U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_005aee40(iVar2 + param_1);
    iVar2 = FUN_005aee90(uVar1);
  }
  return iVar2;
}


/* FUN_005af0e0 @ 005af0e0  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_005af0e0(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 5)) {
    return;
  }
  if (0x7ffffffU - (in_ECX[1] - *in_ECX >> 5) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 5;
  if (0x7ffffff - (uVar1 >> 1) < uVar1) {
    FUN_005aef90();
    return;
  }
  FUN_005aef90();
  return;
}


/* FUN_005af160 @ 005af160  kind=gamemisc  attributed-by=caller-vote  size=7 */

int FUN_005af160(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) + -0x20;
}


/* FUN_005bf470 @ 005bf470  kind=gamemisc  attributed-by=caller-vote  size=117 */

void FUN_005bf470(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005af0e0(1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xffffffe0U) + *in_ECX);
  }
  else if (puVar1 == (undefined4 *)in_ECX[2]) {
    FUN_005af0e0(1);
  }
  puVar1 = (undefined4 *)in_ECX[1];
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
    puVar1[6] = param_1[6];
  }
  in_ECX[1] = in_ECX[1] + 0x20;
  return;
}


/* FUN_005bf4f0 @ 005bf4f0  kind=gamemisc  attributed-by=caller-vote  size=180 */

void FUN_005bf4f0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005adf50(1);
    }
    puVar1 = (undefined4 *)(*in_ECX + (((int)param_1 - (int)puVar2) / 0x18) * 0x18);
    puVar2 = (undefined4 *)in_ECX[1];
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      puVar2[3] = puVar1[3];
      puVar2[4] = puVar1[4];
      puVar2[5] = puVar1[5];
      in_ECX[1] = in_ECX[1] + 0x18;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_005adf50(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      puVar1[3] = param_1[3];
      puVar1[4] = param_1[4];
      puVar1[5] = param_1[5];
    }
  }
  in_ECX[1] = in_ECX[1] + 0x18;
  return;
}


/* FUN_005bf5b0 @ 005bf5b0  kind=gamemisc  attributed-by=caller-vote  size=498 */

undefined4 * FUN_005bf5b0(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_0043c020();
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  iVar1 = rand();
  switch(iVar1 % 7) {
  case 0:
    *param_1 = 0x18;
    param_1[9] = 0x40000000;
    param_1[10] = 0x40000000;
    param_1[0xb] = 0x40000000;
    return param_1;
  case 1:
    *param_1 = 0x19;
    iVar1 = rand();
    fVar2 = (((float)iVar1 * 0.5) / 32767.0 + 1.0) * 1.5;
    param_1[9] = fVar2;
    param_1[10] = fVar2;
    param_1[0xb] = fVar2;
    return param_1;
  case 2:
    *param_1 = 0x1a;
    iVar1 = rand();
    fVar3 = ((float)iVar1 * 0.5) / 32767.0 + 1.0;
    fVar2 = fVar3 * 1.5;
    param_1[9] = fVar2;
    param_1[10] = fVar2;
    param_1[0xb] = fVar3 * 0.75;
    return param_1;
  case 3:
    *param_1 = 0x1b;
    param_1[9] = 0x3fc00000;
    param_1[10] = 0x3fc00000;
    param_1[0xb] = 0x3fb33333;
    return param_1;
  case 4:
    *param_1 = 0x12;
    param_1[10] = 0x3f800000;
    param_1[0xb] = 0x3ecccccd;
    param_1[9] = 0x40400000;
    return param_1;
  case 5:
    *param_1 = 0x10;
    param_1[9] = 0x3f800000;
    param_1[10] = 0x3f800000;
    param_1[0xb] = 0x3f000000;
    return param_1;
  case 6:
    *param_1 = 0x1c;
    param_1[10] = 0x40400000;
    param_1[0xb] = 0x40200000;
    param_1[9] = 0x40400000;
  }
  return param_1;
}


/* FUN_005bf7c0 @ 005bf7c0  kind=gamemisc  attributed-by=caller-vote  size=1356 */

void FUN_005bf7c0(undefined4 param_1,uint *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 extraout_EDX;
  longlong lVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 uVar8;
  undefined1 local_1a5;
  uint local_1a4;
  float local_1a0;
  int local_19c [2];
  undefined8 local_194;
  undefined8 local_18c;
  uint local_184;
  uint local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined1 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined8 local_15c;
  void *local_154;
  undefined4 local_150;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f481b;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar8 = 0;
  local_16c = 1;
  local_168 = 0;
  local_164 = 0;
  local_15c = 0;
  FUN_0043c020(local_14);
  local_24 = 0xffffffff;
  local_20 = 0xffffffff;
  local_1c = 0xffffffff;
  local_18 = 0;
  local_8 = 0;
  local_1a4 = param_2[3];
  uVar4 = *param_2;
  uVar1 = param_2[1];
  lVar7 = *(longlong *)param_2;
  uVar2 = param_2[2];
  local_184 = param_2[4];
  local_180 = param_2[5];
  local_17c = param_3;
  local_194._0_4_ = uVar4;
  local_194._4_4_ = uVar1;
  local_18c._0_4_ = uVar2;
  local_18c._4_4_ = local_1a4;
  iVar3 = rand();
  if (iVar3 % 0x32 != 0) {
    if (param_4 == 1) {
      uVar4 = rand();
      uVar4 = uVar4 & 0x80000001;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xfffffffe) + 1;
      }
      if (uVar4 != 0) {
        local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
        local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
        if (uVar4 != 1) goto switchD_005bf8e6_default;
        local_19c[0] = 0x14;
        goto LAB_005bfc93;
      }
      iVar3 = rand();
LAB_005bf97a:
      local_178 = 0x40000000;
      local_170 = 0x3fc8f5c3;
      local_19c[0] = iVar3 % 3 + 0x20;
      goto LAB_005bfca7;
    }
    iVar3 = rand();
    local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
    switch(iVar3 % 6) {
    case 0:
      iVar3 = rand();
      goto LAB_005bf97a;
    case 1:
      local_19c[0] = 0x12;
      local_178 = 0x40400000;
      local_170 = 0x3ecccccd;
      break;
    case 2:
      local_19c[0] = 0x10;
      local_178 = 0x3f800000;
      local_174 = 0x3f800000;
      local_170 = 0x3f000000;
      local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      switch(param_3) {
      case 0:
        iVar3 = rand();
        local_1a0 = ((float)iVar3 / 32767.0) * 65536.0;
        uVar6 = FUN_0068d946();
        local_18c = CONCAT44((local_1a4 - (int)((ulonglong)uVar6 >> 0x20)) -
                             (uint)(uVar2 < (uint)uVar6),uVar2 - (uint)uVar6);
        break;
      case 1:
        iVar3 = rand();
        local_1a0 = ((float)iVar3 / 32767.0) * 65536.0;
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar7;
        break;
      case 2:
        iVar3 = rand();
        local_1a0 = ((float)iVar3 / 32767.0) * 65536.0;
        local_18c = FUN_0068d946();
        local_18c = local_18c + CONCAT44(local_1a4,uVar2);
        break;
      case 3:
        iVar3 = rand();
        local_1a0 = ((float)iVar3 / 32767.0) * 65536.0;
        uVar6 = FUN_0068d946();
        local_194 = CONCAT44((uVar1 - (int)((ulonglong)uVar6 >> 0x20)) - (uint)(uVar4 < (uint)uVar6)
                             ,uVar4 - (uint)uVar6);
      }
      goto switchD_005bf8e6_default;
    case 3:
      local_19c[0] = 0x1e;
      local_178 = 0x40400000;
      local_174 = 0x3f800000;
      local_170 = 0x3f800000;
      local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      switch(param_3) {
      case 0:
        goto LAB_005bfb89;
      case 1:
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar7;
        break;
      case 2:
        goto LAB_005bfb89;
      case 3:
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar7;
      }
      goto switchD_005bf8e6_default;
    case 4:
      local_19c[0] = 0x1d;
      local_178 = 0x40200000;
      local_174 = 0x3f800000;
      local_170 = 0x40400000;
      local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
      local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
      switch(param_3) {
      case 0:
        goto LAB_005bfb89;
      case 1:
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar7;
        break;
      case 2:
        goto LAB_005bfb89;
      case 3:
        local_194 = FUN_0068d946();
        local_194 = local_194 + lVar7;
      }
      goto switchD_005bf8e6_default;
    case 5:
      iVar3 = rand();
      local_19c[0] = iVar3 % 9 + 0x38;
LAB_005bfc93:
      local_170 = 0x3f800000;
      local_178 = 0x3f800000;
      break;
    default:
      goto switchD_005bf8e6_default;
    }
LAB_005bfca7:
    local_174 = 0x3f800000;
    local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
    goto switchD_005bf8e6_default;
  }
  local_19c[0] = 10;
  local_178 = 0x3f99999a;
  local_174 = 0x3f4ccccd;
  local_170 = 0x3f4ccccd;
  local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
  local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
  switch(param_3) {
  case 0:
    goto LAB_005bfb89;
  case 1:
    lVar5 = FUN_0068d946();
    local_194 = lVar5 + lVar7;
    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
    break;
  case 2:
LAB_005bfb89:
    lVar7 = FUN_0068d946();
    local_194 = CONCAT44(local_194._4_4_,(uint)local_194);
    local_18c = lVar7 + CONCAT44(local_1a4,uVar2);
    break;
  case 3:
    lVar5 = FUN_0068d946();
    local_194 = lVar5 + lVar7;
    local_18c = CONCAT44(local_18c._4_4_,(uint)local_18c);
  }
switchD_005bf8e6_default:
  FUN_0058ea10(local_19c);
  if (local_154 == (void *)0x0) {
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,uVar8,param_1);
    return;
  }
  FUN_00639cf0(local_154,local_150,&local_1a5,local_1a0);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_154);
}


/* FUN_005bfd70 @ 005bfd70  kind=gamemisc  attributed-by=caller-vote  size=397 */

undefined4 * FUN_005bfd70(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_0043c020();
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar1) {
  case 0:
    *param_1 = 0x18;
    param_1[9] = 0x40000000;
    param_1[10] = 0x40000000;
    param_1[0xb] = 0x40000000;
    return param_1;
  case 1:
    *param_1 = 0x19;
    iVar2 = rand();
    fVar3 = (((float)iVar2 * 0.5) / 32767.0 + 1.0) * 1.5;
    param_1[9] = fVar3;
    param_1[10] = fVar3;
    param_1[0xb] = fVar3;
    return param_1;
  case 2:
    *param_1 = 0x1a;
    iVar2 = rand();
    fVar4 = ((float)iVar2 * 0.5) / 32767.0 + 1.0;
    fVar3 = fVar4 * 1.5;
    param_1[9] = fVar3;
    param_1[10] = fVar3;
    param_1[0xb] = fVar4 * 0.75;
    return param_1;
  case 3:
    *param_1 = 0x1b;
    param_1[9] = 0x3fc00000;
    param_1[10] = 0x3fc00000;
    param_1[0xb] = 0x3fb33333;
  }
  return param_1;
}


/* FUN_005bff10 @ 005bff10  kind=gamemisc  attributed-by=caller-vote  size=186 */

int * FUN_005bff10(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_0043c020();
  param_1[0x5e] = -1;
  param_1[0x5f] = -1;
  param_1[0x60] = -1;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  iVar1 = rand();
  *param_1 = iVar1 % 3 + 0x15;
  param_1[9] = 0x40600000;
  param_1[10] = 0x40000000;
  param_1[0xb] = 0x40400000;
  return param_1;
}


/* FUN_005bffd0 @ 005bffd0  kind=gamemisc  attributed-by=caller-vote  size=275 */

int FUN_005bffd0(uint param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3c60;
  local_10 = ExceptionList;
  iVar5 = in_ECX[1];
  uVar3 = (iVar5 - *in_ECX) / 0x1c;
  if (param_1 < uVar3) {
    iVar2 = *in_ECX;
    iVar1 = iVar2 + param_1 * 0x1c;
    if (iVar1 == iVar2) {
      in_ECX[1] = iVar2;
      return iVar1;
    }
    if (iVar1 == iVar5) {
      return iVar1;
    }
    ExceptionList = &local_10;
    iVar5 = FUN_005ae460(iVar5,iVar5,iVar1);
  }
  else {
    if (param_1 <= uVar3) {
      return (iVar5 - *in_ECX) * -0x6db6db6d;
    }
    ExceptionList = &local_10;
    FUN_005af070(param_1 - uVar3);
    local_8 = 0;
    FUN_005ae900(in_ECX[1],uVar4 - (in_ECX[1] - *in_ECX) / 0x1c,(int)&param_1 + 3,0,param_1);
    iVar5 = in_ECX[1] + (uVar4 - (in_ECX[1] - *in_ECX) / 0x1c) * 0x1c;
  }
  in_ECX[1] = iVar5;
  ExceptionList = local_10;
  return iVar5;
}


/* FUN_005c0120 @ 005c0120  kind=gamemisc  attributed-by=caller-vote  size=45 */

undefined8 FUN_005c0120(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_2 * 0x10000 + param_1;
  uVar2 = uVar1 * 0x100;
  return CONCAT44(((int)param_3 >> 0x1f) +
                  (((((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10) + ((int)param_1 >> 0x1f) +
                   (uint)CARRY4(param_2 * 0x10000,param_1)) * 0x100 | uVar1 >> 0x18) +
                  (uint)CARRY4(param_3,uVar2),param_3 + uVar2);
}


/* FUN_005c0150 @ 005c0150  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_005c0150(byte *param_1)

{
  uint *in_ECX;
  
  *in_ECX = (uint)*param_1;
  in_ECX[1] = (uint)param_1[1];
  in_ECX[2] = (uint)param_1[2];
  return;
}


/* FUN_005c0170 @ 005c0170  kind=gamemisc  attributed-by=caller-vote  size=147 */

void FUN_005c0170(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + -0xc + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_005c2070(param_1,iVar3,param_2,param_4,param_5);
  return;
}


/* FUN_005c0210 @ 005c0210  kind=gamemisc  attributed-by=caller-vote  size=149 */

void FUN_005c0210(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    iVar5 = param_1 + iVar4 * 0xc;
    if (*(int *)(iVar5 + 8) < *(int *)(iVar5 + -4)) {
      iVar4 = iVar3 * 2 + 1;
    }
    puVar1 = (undefined4 *)(param_1 + iVar4 * 0xc);
    puVar2 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    iVar3 = iVar4;
  }
  iVar5 = iVar3;
  if (iVar4 == param_3) {
    iVar4 = param_1 + param_3 * 0xc;
    iVar5 = param_3 + -1;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    *puVar1 = *(undefined4 *)(iVar4 + -0xc);
    puVar1[1] = *(undefined4 *)(iVar4 + -8);
    puVar1[2] = *(undefined4 *)(iVar4 + -4);
  }
  FUN_005c20f0(param_1,iVar5,param_2,param_4,param_5);
  return;
}


/* FUN_005c02b0 @ 005c02b0  kind=gamemisc  attributed-by=caller-vote  size=147 */

void FUN_005c02b0(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  float *pfVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_2;
  while( true ) {
    iVar4 = iVar3 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar2 = *(float *)(param_1 + iVar4 * 0xc);
    pfVar1 = (float *)(param_1 + -0xc + iVar4 * 0xc);
    if (*pfVar1 <= fVar2 && fVar2 != *pfVar1) {
      iVar4 = iVar3 * 2 + 1;
    }
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar3 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined4 *)(param_1 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 4 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -8 + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar3 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar3 = param_3 + -1;
  }
  FUN_005c2170(param_1,iVar3,param_2,param_4,param_5);
  return;
}


/* FUN_005c03f0 @ 005c03f0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_005c03f0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00688b20(param_1,param_2);
  if (iVar1 != -8) {
    FUN_00459ab0(param_3);
  }
  return iVar1;
}


/* FUN_005c0880 @ 005c0880  kind=gamemisc  attributed-by=caller-vote  size=622 */

undefined4 * FUN_005c0880(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  int *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f3ca0;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_005c0420(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    iVar2 = param_2[4];
    iVar3 = *param_3;
    if ((iVar3 < iVar2) ||
       ((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
        ((param_3[1] < param_2[5] ||
         (((local_14 = (undefined1 *)&uStack_34, iVar3 <= iVar2 &&
           (local_14 = (undefined1 *)&uStack_34, param_3[1] <= param_2[5])) &&
          (local_14 = (undefined1 *)&uStack_34, param_3[2] < param_2[6])))))))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_005c0420(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    local_14 = (undefined1 *)&uStack_34;
    cVar5 = FUN_005c3f30(iVar2 + 0x10,param_3);
    if (cVar5 != '\0') {
      FUN_005c0420(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    cVar5 = FUN_005c3f30(param_3,param_2 + 4);
    if (cVar5 != '\0') {
      local_20 = param_2;
      FUN_0042c740();
      piVar4 = local_20;
      cVar5 = FUN_005c3f30(local_20 + 4,param_3);
      if (cVar5 != '\0') {
        if (*(char *)(piVar4[2] + 0xd) == '\0') {
          FUN_005c0420(param_1,1,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_005c0420(param_1,0,piVar4,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    cVar5 = FUN_005c3f30(param_2 + 4,param_3);
    if (cVar5 != '\0') {
      local_20 = param_2;
      FUN_005c3ea0();
      piVar4 = local_20;
      if ((local_20 == piVar1) || (cVar5 = FUN_005c3f30(param_3,local_20 + 4), cVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_005c0420(param_1,1,piVar4,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_005c0420(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_005c0c70(local_24,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_005c0c70 @ 005c0c70  kind=gamemisc  attributed-by=caller-vote  size=350 */

void FUN_005c0c70(undefined4 *param_1,char param_2,int *param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  int *unaff_FS_OFFSET;
  bool bVar8;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_006f3ce0;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = (int *)*in_ECX;
  local_8 = 0;
  bVar8 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      if (param_2 == '\0') {
        if (iVar2 < piVar7[4]) {
LAB_005c0d36:
          bVar8 = true;
          goto LAB_005c0d3b;
        }
        if (iVar2 <= piVar7[4]) {
          if ((param_3[1] < piVar7[5]) || ((param_3[1] <= piVar7[5] && (param_3[2] < piVar7[6]))))
          goto LAB_005c0d36;
        }
        bVar8 = false;
LAB_005c0d31:
        piVar6 = (int *)piVar7[2];
      }
      else {
        iVar3 = piVar7[4];
        if ((iVar3 < iVar2) ||
           ((iVar3 <= iVar2 &&
            ((piVar7[5] < param_3[1] ||
             (((iVar3 <= iVar2 && (piVar7[5] <= param_3[1])) && (piVar7[6] < param_3[2])))))))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        bVar8 = !bVar8;
        if (!bVar8) goto LAB_005c0d31;
LAB_005c0d3b:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (bVar8) {
    if (piVar7 == (int *)*piVar1) {
      bVar8 = true;
      goto LAB_005c0d5a;
    }
    FUN_0042c740();
  }
  iVar2 = _param_2[4];
  iVar3 = *piVar4;
  if ((iVar3 <= iVar2) &&
     ((iVar3 < iVar2 ||
      ((piVar4[1] <= _param_2[5] &&
       (((iVar3 < iVar2 || (piVar4[1] < _param_2[5])) || (piVar4[2] <= _param_2[6])))))))) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_005c0d5a:
  puVar5 = (undefined4 *)FUN_005c0420(&param_2,bVar8,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_005c0e10 @ 005c0e10  kind=gamemisc  attributed-by=caller-vote  size=217 */

void FUN_005c0e10(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar6 = param_1;
  if (param_1 != param_2) {
    while (pfVar6 = pfVar6 + 3, pfVar6 != param_2) {
      fVar2 = *pfVar6;
      uVar5 = *(undefined8 *)(pfVar6 + 1);
      uVar4 = *(undefined8 *)(pfVar6 + 1);
      if (*param_1 <= fVar2) {
        fVar3 = pfVar6[-3];
        pfVar8 = pfVar6;
        while (fVar2 < fVar3) {
          *pfVar8 = fVar3;
          pfVar8[1] = pfVar8[-2];
          pfVar8[2] = pfVar8[-1];
          fVar3 = pfVar8[-6];
          pfVar8 = pfVar8 + -3;
        }
        *pfVar8 = fVar2;
        *(undefined8 *)(pfVar8 + 1) = uVar5;
      }
      else {
        if (param_1 != pfVar6) {
          pfVar8 = pfVar6 + 4;
          do {
            pfVar8[-4] = pfVar8[-7];
            pfVar8[-3] = pfVar8[-6];
            pfVar8[-2] = pfVar8[-5];
            pfVar1 = pfVar8 + -7;
            pfVar8 = pfVar8 + -3;
          } while (pfVar1 != param_1);
        }
        *param_1 = fVar2;
        *(undefined8 *)(param_1 + 1) = uVar4;
      }
    }
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c0ef0 @ 005c0ef0  kind=gamemisc  attributed-by=caller-vote  size=144 */

void FUN_005c0ef0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  
  puVar6 = param_1;
  if (param_1 != param_2) {
    while (puVar5 = (undefined8 *)((int)puVar6 + 0xc), puVar5 != param_2) {
      iVar4 = *(int *)(puVar5 + 1);
      uVar3 = *puVar5;
      if (iVar4 < *(int *)(param_1 + 1)) {
        if (param_1 != puVar5) {
          puVar6 = puVar6 + 4;
          do {
            *(undefined4 *)((int)puVar6 + -0x14) = *(undefined4 *)(puVar6 + -4);
            *(undefined4 *)(puVar6 + -2) = *(undefined4 *)((int)puVar6 + -0x1c);
            *(undefined4 *)((int)puVar6 + -0xc) = *(undefined4 *)(puVar6 + -3);
            puVar1 = puVar6 + -4;
            puVar6 = (undefined8 *)((int)puVar6 + -0xc);
          } while (puVar1 != param_1);
        }
        *param_1 = uVar3;
        *(int *)(param_1 + 1) = iVar4;
        puVar6 = puVar5;
      }
      else {
        iVar2 = *(int *)(puVar6 + 1);
        puVar6 = puVar5;
        while (iVar4 < iVar2) {
          *(undefined4 *)puVar6 = *(undefined4 *)((int)puVar6 + -0xc);
          *(undefined4 *)((int)puVar6 + 4) = *(undefined4 *)(puVar6 + -1);
          *(undefined4 *)(puVar6 + 1) = *(undefined4 *)((int)puVar6 + -4);
          iVar2 = *(int *)(puVar6 + -2);
          puVar6 = (undefined8 *)((int)puVar6 + -0xc);
        }
        *puVar6 = uVar3;
        *(int *)(puVar6 + 1) = iVar4;
        puVar6 = puVar5;
      }
    }
  }
  return;
}


/* FUN_005c0f80 @ 005c0f80  kind=gamemisc  attributed-by=caller-vote  size=211 */

void FUN_005c0f80(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  float *pfVar6;
  uint uVar7;
  float *pfVar8;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar6 = param_1;
  if (param_1 != param_2) {
    while (pfVar6 = pfVar6 + 3, pfVar6 != param_2) {
      fVar2 = *pfVar6;
      uVar5 = *(undefined8 *)(pfVar6 + 1);
      uVar4 = *(undefined8 *)(pfVar6 + 1);
      if (fVar2 < *param_1 || fVar2 == *param_1) {
        fVar3 = pfVar6[-3];
        pfVar8 = pfVar6;
        while (fVar3 < fVar2) {
          *pfVar8 = fVar3;
          pfVar8[1] = pfVar8[-2];
          pfVar8[2] = pfVar8[-1];
          fVar3 = pfVar8[-6];
          pfVar8 = pfVar8 + -3;
        }
        *pfVar8 = fVar2;
        *(undefined8 *)(pfVar8 + 1) = uVar5;
      }
      else {
        if (param_1 != pfVar6) {
          pfVar8 = pfVar6 + 4;
          do {
            pfVar8[-4] = pfVar8[-7];
            pfVar8[-3] = pfVar8[-6];
            pfVar8[-2] = pfVar8[-5];
            pfVar1 = pfVar8 + -7;
            pfVar8 = pfVar8 + -3;
          } while (pfVar1 != param_1);
        }
        *param_1 = fVar2;
        *(undefined8 *)(param_1 + 1) = uVar4;
      }
    }
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c1100 @ 005c1100  kind=gamemisc  attributed-by=caller-vote  size=345 */

void FUN_005c1100(int param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_2 - param_1) / 0xc;
  iVar12 = iVar5 / 2;
  if (0 < iVar12) {
    iVar10 = iVar12 * 2 + 2;
    iVar8 = param_1 + iVar12 * 0xc + 8;
    do {
      puVar1 = (undefined8 *)(iVar8 + -0x10);
      fVar3 = *(float *)(iVar8 + -0x14);
      iVar8 = iVar8 + -0xc;
      uVar6 = *puVar1;
      iVar10 = iVar10 + -2;
      iVar12 = iVar12 + -1;
      iVar11 = iVar10;
      iVar9 = iVar12;
      while (iVar13 = iVar11, iVar13 < iVar5) {
        fVar4 = *(float *)(param_1 + -0xc + iVar13 * 0xc);
        pfVar2 = (float *)(param_1 + iVar13 * 0xc);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          iVar13 = iVar13 + -1;
        }
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
        iVar9 = iVar13;
        iVar11 = iVar13 * 2 + 2;
      }
      if (iVar13 == iVar5) {
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar5 * 0xc);
        iVar9 = iVar5 + -1;
      }
      while (iVar12 < iVar9) {
        iVar11 = (iVar9 + -1) / 2;
        fVar4 = *(float *)(param_1 + iVar11 * 0xc);
        if (fVar3 <= fVar4) break;
        *(float *)(param_1 + iVar9 * 0xc) = fVar4;
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar11 * 0xc);
        iVar9 = iVar11;
      }
      *(float *)(param_1 + iVar9 * 0xc) = fVar3;
      *(undefined8 *)(param_1 + 4 + iVar9 * 0xc) = uVar6;
    } while (0 < iVar12);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c1260 @ 005c1260  kind=gamemisc  attributed-by=caller-vote  size=273 */

void FUN_005c1260(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = (param_2 - param_1) / 0xc;
  iVar9 = iVar4 / 2;
  if (0 < iVar9) {
    iVar7 = iVar9 * 2 + 2;
    iVar5 = param_1 + iVar9 * 0xc;
    do {
      local_14 = *(undefined8 *)(iVar5 + -0xc);
      local_c = *(undefined4 *)(iVar5 + -4);
      iVar7 = iVar7 + -2;
      iVar9 = iVar9 + -1;
      iVar1 = iVar7;
      iVar8 = iVar9;
      while (iVar6 = iVar1, iVar6 < iVar4) {
        iVar1 = param_1 + iVar6 * 0xc;
        if (*(int *)(iVar1 + 8) < *(int *)(iVar1 + -4)) {
          iVar6 = iVar6 + -1;
        }
        puVar2 = (undefined4 *)(param_1 + iVar6 * 0xc);
        puVar3 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        puVar3[2] = puVar2[2];
        iVar8 = iVar6;
        iVar1 = iVar6 * 2 + 2;
      }
      if (iVar6 == iVar4) {
        iVar1 = param_1 + iVar4 * 0xc;
        puVar2 = (undefined4 *)(param_1 + iVar8 * 0xc);
        *puVar2 = *(undefined4 *)(iVar1 + -0xc);
        puVar2[1] = *(undefined4 *)(iVar1 + -8);
        puVar2[2] = *(undefined4 *)(iVar1 + -4);
        iVar8 = iVar4 + -1;
      }
      FUN_005c20f0(param_1,iVar8,iVar9,&local_14,param_3);
      iVar5 = iVar5 + -0xc;
    } while (0 < iVar9);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c1380 @ 005c1380  kind=gamemisc  attributed-by=caller-vote  size=345 */

void FUN_005c1380(int param_1,int param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  undefined8 uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar5 = (param_2 - param_1) / 0xc;
  iVar12 = iVar5 / 2;
  if (0 < iVar12) {
    iVar10 = iVar12 * 2 + 2;
    iVar8 = param_1 + iVar12 * 0xc + 8;
    do {
      puVar1 = (undefined8 *)(iVar8 + -0x10);
      fVar3 = *(float *)(iVar8 + -0x14);
      iVar8 = iVar8 + -0xc;
      uVar6 = *puVar1;
      iVar10 = iVar10 + -2;
      iVar12 = iVar12 + -1;
      iVar11 = iVar10;
      iVar9 = iVar12;
      while (iVar13 = iVar11, iVar13 < iVar5) {
        fVar4 = *(float *)(param_1 + iVar13 * 0xc);
        pfVar2 = (float *)(param_1 + -0xc + iVar13 * 0xc);
        if (*pfVar2 <= fVar4 && fVar4 != *pfVar2) {
          iVar13 = iVar13 + -1;
        }
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar13 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar13 * 0xc);
        iVar9 = iVar13;
        iVar11 = iVar13 * 2 + 2;
      }
      if (iVar13 == iVar5) {
        *(undefined4 *)(param_1 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -0xc + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -8 + iVar5 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + -4 + iVar5 * 0xc);
        iVar9 = iVar5 + -1;
      }
      while (iVar12 < iVar9) {
        iVar11 = (iVar9 + -1) / 2;
        fVar4 = *(float *)(param_1 + iVar11 * 0xc);
        if (fVar4 <= fVar3) break;
        *(float *)(param_1 + iVar9 * 0xc) = fVar4;
        *(undefined4 *)(param_1 + 4 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar11 * 0xc);
        *(undefined4 *)(param_1 + 8 + iVar9 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar11 * 0xc);
        iVar9 = iVar11;
      }
      *(float *)(param_1 + iVar9 * 0xc) = fVar3;
      *(undefined8 *)(param_1 + 4 + iVar9 * 0xc) = uVar6;
    } while (0 < iVar12);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c1600 @ 005c1600  kind=gamemisc  attributed-by=caller-vote  size=143 */

void FUN_005c1600(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = param_2[2];
  if (iVar1 < (int)param_1[2]) {
    uVar2 = *param_2;
    uVar3 = param_2[1];
    *param_2 = *param_1;
    param_2[1] = param_1[1];
    param_2[2] = param_1[2];
    *param_1 = uVar2;
    param_1[1] = uVar3;
    param_1[2] = iVar1;
  }
  iVar1 = param_3[2];
  if (iVar1 < (int)param_2[2]) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    *param_3 = *param_2;
    param_3[1] = param_2[1];
    param_3[2] = param_2[2];
    *param_2 = uVar2;
    param_2[1] = uVar3;
    param_2[2] = iVar1;
    if (iVar1 < (int)param_1[2]) {
      uVar3 = param_2[1];
      *param_2 = *param_1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = uVar2;
      param_1[1] = uVar3;
      param_1[2] = iVar1;
    }
  }
  return;
}


/* FUN_005c1720 @ 005c1720  kind=gamemisc  attributed-by=caller-vote  size=899 */

void FUN_005c1720(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  fVar1 = *param_1;
  iVar5 = ((int)param_3 - (int)param_1) / 0xc;
  if (iVar5 < 0x29) {
    fVar2 = *param_2;
    if (fVar2 < fVar1) {
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_2 = fVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    fVar1 = *param_3;
    if (fVar1 < *param_2) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < *param_1) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
  }
  else {
    iVar5 = iVar5 + 1;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    fVar2 = param_1[iVar5 * 3];
    if (fVar2 < fVar1) {
      fVar3 = param_1[iVar5 * 3 + 2];
      fVar4 = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = param_1[1];
      param_1[iVar5 * 3 + 2] = param_1[2];
      *param_1 = fVar2;
      param_1[2] = fVar3;
      param_1[1] = fVar4;
    }
    fVar1 = param_1[iVar5 * 6];
    if (fVar1 < param_1[iVar5 * 3]) {
      fVar2 = param_1[iVar5 * 6 + 1];
      fVar3 = param_1[iVar5 * 6 + 2];
      param_1[iVar5 * 6] = param_1[iVar5 * 3];
      param_1[iVar5 * 6 + 1] = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 6 + 2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
      fVar1 = param_1[iVar5 * 3];
      if (fVar1 < *param_1) {
        param_1[iVar5 * 3] = *param_1;
        param_1[iVar5 * 3 + 1] = param_1[1];
        param_1[iVar5 * 3 + 2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    pfVar6 = param_2 + iVar5 * -3;
    if (fVar1 < *pfVar6) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = *pfVar6;
      param_2[1] = pfVar6[1];
      param_2[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
    }
    fVar1 = param_2[iVar5 * 3];
    if (fVar1 < *param_2) {
      fVar2 = param_2[iVar5 * 3 + 1];
      fVar3 = param_2[iVar5 * 3 + 2];
      param_2[iVar5 * 3] = *param_2;
      param_2[iVar5 * 3 + 1] = param_2[1];
      param_2[iVar5 * 3 + 2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < *pfVar6) {
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
    }
    pfVar7 = param_3 + iVar5 * -6;
    pfVar6 = param_3 + iVar5 * -3;
    fVar1 = *pfVar6;
    if (fVar1 < *pfVar7) {
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      *pfVar7 = fVar1;
      pfVar7[2] = fVar2;
      pfVar7[1] = fVar3;
    }
    fVar1 = *param_3;
    if (fVar1 < *pfVar6) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      fVar1 = *pfVar6;
      if (fVar1 < *pfVar7) {
        fVar2 = pfVar6[1];
        *pfVar6 = *pfVar7;
        pfVar6[1] = pfVar7[1];
        pfVar6[2] = pfVar7[2];
        *pfVar7 = fVar1;
        pfVar7[1] = fVar2;
        pfVar7[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    if (fVar1 < param_1[iVar5 * 3]) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = param_1[iVar5 * 3];
      param_2[1] = param_1[iVar5 * 3 + 1];
      param_2[2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
    }
    fVar1 = *pfVar6;
    if (fVar1 < *param_2) {
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = *param_2;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (fVar1 < param_1[iVar5 * 3]) {
        *param_2 = param_1[iVar5 * 3];
        param_2[1] = param_1[iVar5 * 3 + 1];
        param_2[2] = param_1[iVar5 * 3 + 2];
        param_1[iVar5 * 3] = fVar1;
        param_1[iVar5 * 3 + 1] = fVar2;
        param_1[iVar5 * 3 + 2] = fVar3;
        return;
      }
    }
  }
  return;
}


/* FUN_005c1ab0 @ 005c1ab0  kind=gamemisc  attributed-by=caller-vote  size=167 */

void FUN_005c1ab0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (param_3 - param_1) / 0xc;
  if (0x28 < iVar1) {
    iVar1 = iVar1 + 1;
    iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 7U)) >> 3;
    iVar2 = iVar1 * 0xc;
    FUN_005c1600(param_1,iVar2 + param_1,iVar1 * 0x18 + param_1,param_4);
    FUN_005c1600(param_2 + iVar1 * -0xc,param_2,iVar2 + param_2,param_4);
    iVar3 = param_3 + iVar1 * -0xc;
    FUN_005c1600(param_3 + iVar1 * -0x18,iVar3,param_3,param_4);
    FUN_005c1600(param_1 + iVar2,param_2,iVar3,param_4);
    return;
  }
  FUN_005c1600(param_1,param_2,param_3,param_4);
  return;
}


/* FUN_005c1b60 @ 005c1b60  kind=gamemisc  attributed-by=caller-vote  size=899 */

void FUN_005c1b60(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  
  fVar1 = *param_1;
  iVar5 = ((int)param_3 - (int)param_1) / 0xc;
  if (iVar5 < 0x29) {
    fVar2 = *param_2;
    if (fVar1 < fVar2) {
      fVar3 = param_2[1];
      fVar4 = param_2[2];
      *param_2 = fVar1;
      param_2[1] = param_1[1];
      param_2[2] = param_1[2];
      *param_1 = fVar2;
      param_1[1] = fVar3;
      param_1[2] = fVar4;
    }
    fVar1 = *param_3;
    if (*param_2 < fVar1) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *param_2;
      param_3[1] = param_2[1];
      param_3[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (*param_1 < fVar1) {
        *param_2 = *param_1;
        param_2[1] = param_1[1];
        param_2[2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
  }
  else {
    iVar5 = iVar5 + 1;
    iVar5 = (int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3;
    fVar2 = param_1[iVar5 * 3];
    if (fVar1 < fVar2) {
      fVar3 = param_1[iVar5 * 3 + 2];
      fVar4 = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = param_1[1];
      param_1[iVar5 * 3 + 2] = param_1[2];
      *param_1 = fVar2;
      param_1[2] = fVar3;
      param_1[1] = fVar4;
    }
    fVar1 = param_1[iVar5 * 6];
    if (param_1[iVar5 * 3] < fVar1) {
      fVar2 = param_1[iVar5 * 6 + 1];
      fVar3 = param_1[iVar5 * 6 + 2];
      param_1[iVar5 * 6] = param_1[iVar5 * 3];
      param_1[iVar5 * 6 + 1] = param_1[iVar5 * 3 + 1];
      param_1[iVar5 * 6 + 2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
      fVar1 = param_1[iVar5 * 3];
      if (*param_1 < fVar1) {
        param_1[iVar5 * 3] = *param_1;
        param_1[iVar5 * 3 + 1] = param_1[1];
        param_1[iVar5 * 3 + 2] = param_1[2];
        *param_1 = fVar1;
        param_1[1] = fVar2;
        param_1[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    pfVar6 = param_2 + iVar5 * -3;
    if (*pfVar6 < fVar1) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = *pfVar6;
      param_2[1] = pfVar6[1];
      param_2[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
    }
    fVar1 = param_2[iVar5 * 3];
    if (*param_2 < fVar1) {
      fVar2 = param_2[iVar5 * 3 + 1];
      fVar3 = param_2[iVar5 * 3 + 2];
      param_2[iVar5 * 3] = *param_2;
      param_2[iVar5 * 3 + 1] = param_2[1];
      param_2[iVar5 * 3 + 2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (*pfVar6 < fVar1) {
        *param_2 = *pfVar6;
        param_2[1] = pfVar6[1];
        param_2[2] = pfVar6[2];
        *pfVar6 = fVar1;
        pfVar6[1] = fVar2;
        pfVar6[2] = fVar3;
      }
    }
    pfVar7 = param_3 + iVar5 * -6;
    pfVar6 = param_3 + iVar5 * -3;
    fVar1 = *pfVar6;
    if (*pfVar7 < fVar1) {
      fVar2 = pfVar6[2];
      fVar3 = pfVar6[1];
      *pfVar6 = *pfVar7;
      pfVar6[1] = pfVar7[1];
      pfVar6[2] = pfVar7[2];
      *pfVar7 = fVar1;
      pfVar7[2] = fVar2;
      pfVar7[1] = fVar3;
    }
    fVar1 = *param_3;
    if (*pfVar6 < fVar1) {
      fVar2 = param_3[1];
      fVar3 = param_3[2];
      *param_3 = *pfVar6;
      param_3[1] = pfVar6[1];
      param_3[2] = pfVar6[2];
      *pfVar6 = fVar1;
      pfVar6[1] = fVar2;
      pfVar6[2] = fVar3;
      fVar1 = *pfVar6;
      if (*pfVar7 < fVar1) {
        fVar2 = pfVar6[1];
        *pfVar6 = *pfVar7;
        pfVar6[1] = pfVar7[1];
        pfVar6[2] = pfVar7[2];
        *pfVar7 = fVar1;
        pfVar7[1] = fVar2;
        pfVar7[2] = fVar3;
      }
    }
    fVar1 = *param_2;
    if (param_1[iVar5 * 3] < fVar1) {
      fVar2 = param_2[1];
      fVar3 = param_2[2];
      *param_2 = param_1[iVar5 * 3];
      param_2[1] = param_1[iVar5 * 3 + 1];
      param_2[2] = param_1[iVar5 * 3 + 2];
      param_1[iVar5 * 3] = fVar1;
      param_1[iVar5 * 3 + 1] = fVar2;
      param_1[iVar5 * 3 + 2] = fVar3;
    }
    fVar1 = *pfVar6;
    if (*param_2 < fVar1) {
      fVar2 = pfVar6[1];
      fVar3 = pfVar6[2];
      *pfVar6 = *param_2;
      pfVar6[1] = param_2[1];
      pfVar6[2] = param_2[2];
      *param_2 = fVar1;
      param_2[1] = fVar2;
      param_2[2] = fVar3;
      fVar1 = *param_2;
      if (param_1[iVar5 * 3] < fVar1) {
        *param_2 = param_1[iVar5 * 3];
        param_2[1] = param_1[iVar5 * 3 + 1];
        param_2[2] = param_1[iVar5 * 3 + 2];
        param_1[iVar5 * 3] = fVar1;
        param_1[iVar5 * 3 + 1] = fVar2;
        param_1[iVar5 * 3 + 2] = fVar3;
        return;
      }
    }
  }
  return;
}


/* FUN_005c1fa0 @ 005c1fa0  kind=gamemisc  attributed-by=caller-vote  size=202 */

undefined1 * FUN_005c1fa0(undefined4 *param_1,undefined4 *param_2,undefined1 *param_3)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  if (param_1 != param_2) {
    puVar5 = param_1 + 1;
    do {
      *param_3 = *(undefined1 *)(puVar5 + -1);
      param_3[1] = *(undefined1 *)((int)puVar5 + -3);
      *(undefined4 *)(param_3 + 4) = *puVar5;
      *(undefined4 *)(param_3 + 8) = puVar5[1];
      param_3[0xc] = *(undefined1 *)(puVar5 + 2);
      param_3[0xd] = *(undefined1 *)((int)puVar5 + 9);
      param_3[0xe] = *(undefined1 *)((int)puVar5 + 10);
      *(undefined2 *)(param_3 + 0x10) = *(undefined2 *)(puVar5 + 3);
      puVar3 = (undefined1 *)((int)puVar5 + 0x13);
      puVar2 = param_3 + 0x15;
      iVar4 = 0x20;
      do {
        puVar2[-1] = puVar3[-3];
        *puVar2 = puVar2[(int)puVar5 + (-4 - (int)param_3)];
        puVar2[1] = puVar3[-1];
        puVar2[2] = *puVar3;
        *(undefined4 *)(puVar2 + 3) = *(undefined4 *)(puVar3 + 1);
        puVar3 = puVar3 + 8;
        puVar2 = puVar2 + 8;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      *(undefined4 *)(param_3 + 0x114) = puVar5[0x44];
      puVar1 = puVar5 + 0x45;
      param_3 = param_3 + 0x118;
      puVar5 = puVar5 + 0x46;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_005c2070 @ 005c2070  kind=gamemisc  attributed-by=caller-vote  size=117 */

void FUN_005c2070(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    fVar1 = *(float *)(param_1 + iVar2 * 0xc);
    if (*param_4 <= fVar1) break;
    *(float *)(param_1 + param_2 * 0xc) = fVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(float *)(param_1 + param_2 * 0xc) = *param_4;
  *(float *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(float *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_005c20f0 @ 005c20f0  kind=gamemisc  attributed-by=caller-vote  size=114 */

void FUN_005c20f0(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  while (param_3 < param_2) {
    iVar3 = (param_2 + -1) / 2;
    puVar1 = (undefined4 *)(param_1 + iVar3 * 0xc);
    if ((int)param_4[2] <= (int)puVar1[2]) break;
    puVar2 = (undefined4 *)(param_1 + param_2 * 0xc);
    *puVar2 = *puVar1;
    puVar2[1] = puVar1[1];
    puVar2[2] = puVar1[2];
    param_2 = iVar3;
  }
  puVar1 = (undefined4 *)(param_1 + param_2 * 0xc);
  *puVar1 = *param_4;
  puVar1[1] = param_4[1];
  puVar1[2] = param_4[2];
  return;
}


/* FUN_005c2170 @ 005c2170  kind=gamemisc  attributed-by=caller-vote  size=113 */

void FUN_005c2170(int param_1,int param_2,int param_3,float *param_4)

{
  float fVar1;
  int iVar2;
  
  while (param_3 < param_2) {
    iVar2 = (param_2 + -1) / 2;
    fVar1 = *(float *)(param_1 + iVar2 * 0xc);
    if (fVar1 < *param_4 || fVar1 == *param_4) break;
    *(float *)(param_1 + param_2 * 0xc) = fVar1;
    *(undefined4 *)(param_1 + 4 + param_2 * 0xc) = *(undefined4 *)(param_1 + 4 + iVar2 * 0xc);
    *(undefined4 *)(param_1 + 8 + param_2 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar2 * 0xc);
    param_2 = iVar2;
  }
  *(float *)(param_1 + param_2 * 0xc) = *param_4;
  *(float *)(param_1 + 4 + param_2 * 0xc) = param_4[1];
  *(float *)(param_1 + 8 + param_2 * 0xc) = param_4[2];
  return;
}


/* FUN_005c2270 @ 005c2270  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_005c2270(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_005c2348:
      if (1 < iVar2) {
        FUN_005c0e10(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_005c1100(param_1,param_2,param_4,0,0);
        }
        FUN_005c2770(param_1,param_2,param_4);
        return;
      }
      goto LAB_005c2348;
    }
    piVar1 = (int *)FUN_005c2a50(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_005c2270(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_005c2270(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_005c23b0 @ 005c23b0  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_005c23b0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_005c2488:
      if (1 < iVar2) {
        FUN_005c0ef0(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_005c1260(param_1,param_2,param_4,0,0);
        }
        FUN_005c2830(param_1,param_2,param_4);
        return;
      }
      goto LAB_005c2488;
    }
    piVar1 = (int *)FUN_005c2da0(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_005c23b0(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_005c23b0(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_005c24f0 @ 005c24f0  kind=gamemisc  attributed-by=caller-vote  size=310 */

void FUN_005c24f0(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 local_c [8];
  
  iVar2 = param_2 - param_1;
  do {
    iVar2 = iVar2 / 0xc;
    if (iVar2 < 0x21) {
LAB_005c25c8:
      if (1 < iVar2) {
        FUN_005c0f80(param_1,param_2,param_4,0);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (1 < (param_2 - param_1) / 0xc) {
          FUN_005c1380(param_1,param_2,param_4,0,0);
        }
        FUN_005c28e0(param_1,param_2,param_4);
        return;
      }
      goto LAB_005c25c8;
    }
    piVar1 = (int *)FUN_005c3010(local_c,param_1,param_2,param_4);
    iVar3 = *piVar1;
    iVar2 = piVar1[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((iVar3 - param_1) / 0xc < (param_2 - iVar2) / 0xc) {
      FUN_005c24f0(param_1,iVar3,param_3,param_4);
      param_1 = iVar2;
      iVar3 = param_2;
    }
    else {
      FUN_005c24f0(iVar2,param_2,param_3,param_4);
    }
    iVar2 = iVar3 - param_1;
    param_2 = iVar3;
  } while( true );
}


/* FUN_005c2770 @ 005c2770  kind=gamemisc  attributed-by=caller-vote  size=192 */

void FUN_005c2770(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -8);
    do {
      local_10 = *puVar1;
      local_14 = puVar1[-1];
      local_c = puVar1[1];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      FUN_005c0170(param_1,0,((-4 - (int)param_1) + (int)puVar1) / 0xc,&local_14,param_3);
      puVar1 = puVar1 + -3;
    } while (1 < ((8 - (int)param_1) + (int)puVar1) / 0xc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c2830 @ 005c2830  kind=gamemisc  attributed-by=caller-vote  size=163 */

void FUN_005c2830(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 local_14;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = (int)param_2 - (int)param_1;
  while (1 < iVar1 / 0xc) {
    local_c = param_2[-1];
    local_14 = *(undefined8 *)(param_2 + -3);
    puVar2 = param_2 + -3;
    *puVar2 = *param_1;
    param_2[-2] = param_1[1];
    param_2[-1] = param_1[2];
    FUN_005c0210(param_1,0,(iVar1 + -0xc) / 0xc,&local_14,param_3);
    param_2 = puVar2;
    iVar1 = (int)puVar2 - (int)param_1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c28e0 @ 005c28e0  kind=gamemisc  attributed-by=caller-vote  size=192 */

void FUN_005c28e0(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (1 < (param_2 - (int)param_1) / 0xc) {
    puVar1 = (undefined4 *)(param_2 + -8);
    do {
      local_10 = *puVar1;
      local_14 = puVar1[-1];
      local_c = puVar1[1];
      puVar1[-1] = *param_1;
      *puVar1 = param_1[1];
      puVar1[1] = param_1[2];
      FUN_005c02b0(param_1,0,((-4 - (int)param_1) + (int)puVar1) / 0xc,&local_14,param_3);
      puVar1 = puVar1 + -3;
    } while (1 < ((8 - (int)param_1) + (int)puVar1) / 0xc);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005c2a50 @ 005c2a50  kind=gamemisc  attributed-by=caller-vote  size=833 */

void FUN_005c2a50(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_64;
  
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_64 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_005c1720(param_2,local_64,param_3 + -3,param_4);
  pfVar6 = local_64 + 3;
  for (; param_2 < local_64; local_64 = local_64 + -3) {
    if ((local_64[-3] < *local_64) || (*local_64 < local_64[-3])) break;
  }
  pfVar4 = pfVar6;
  pfVar9 = local_64;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = *local_64;
      do {
        pfVar4 = pfVar6;
        if ((*pfVar6 < fVar1) || (fVar1 < *pfVar6)) goto joined_r0x005c2b83;
        if ((pfVar6[3] < fVar1) || (fVar1 < pfVar6[3])) {
          pfVar6 = pfVar6 + 3;
          pfVar4 = pfVar6;
          goto joined_r0x005c2b83;
        }
        if ((pfVar6[6] < fVar1) || (fVar1 < pfVar6[6])) {
          pfVar6 = pfVar6 + 6;
          pfVar4 = pfVar6;
          goto joined_r0x005c2b83;
        }
        if ((pfVar6[9] < fVar1) || (fVar1 < pfVar6[9])) {
          pfVar6 = pfVar6 + 9;
          pfVar4 = pfVar6;
          goto joined_r0x005c2b83;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar4 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar4 = pfVar6;
        if ((*pfVar6 < *local_64) || (*local_64 < *pfVar6)) break;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x005c2b83:
  do {
    if (param_3 <= pfVar4) {
joined_r0x005c2bd9:
      for (; param_2 < local_64; local_64 = local_64 + -3) {
        fVar1 = local_64[-3];
        pfVar7 = pfVar9;
        if (*pfVar9 <= fVar1) {
          if (*pfVar9 < fVar1) break;
          fVar2 = pfVar9[-3];
          pfVar7 = pfVar9 + -3;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          *pfVar7 = fVar1;
          pfVar9[-2] = local_64[-2];
          pfVar9[-1] = local_64[-1];
          local_64[-3] = fVar2;
          *(undefined8 *)(local_64 + -2) = uVar3;
        }
        pfVar9 = pfVar7;
      }
      if (local_64 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar9;
          param_1[1] = pfVar6;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar4) {
          fVar1 = *pfVar9;
          uVar3 = *(undefined8 *)(pfVar9 + 1);
          *pfVar9 = *pfVar6;
          pfVar9[1] = pfVar6[1];
          pfVar9[2] = pfVar6[2];
          *pfVar6 = fVar1;
          *(undefined8 *)(pfVar6 + 1) = uVar3;
        }
        fVar1 = *pfVar9;
        uVar3 = *(undefined8 *)(pfVar9 + 1);
        *pfVar9 = *pfVar4;
        pfVar9[1] = pfVar4[1];
        pfVar9[2] = pfVar4[2];
        *pfVar4 = fVar1;
        *(undefined8 *)(pfVar4 + 1) = uVar3;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar9 = pfVar9 + 3;
      }
      else {
        pfVar7 = local_64 + -3;
        if (pfVar4 == param_3) {
          pfVar10 = pfVar9 + -3;
          if (pfVar7 != pfVar10) {
            fVar1 = *pfVar7;
            uVar3 = *(undefined8 *)(local_64 + -2);
            *pfVar7 = *pfVar10;
            local_64[-2] = pfVar9[-2];
            local_64[-1] = pfVar9[-1];
            *pfVar10 = fVar1;
            *(undefined8 *)(pfVar9 + -2) = uVar3;
          }
          fVar1 = *pfVar10;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          pfVar8 = pfVar6 + -3;
          *pfVar10 = *pfVar8;
          pfVar9[-2] = pfVar6[-2];
          pfVar9[-1] = pfVar6[-1];
          *pfVar8 = fVar1;
          *(undefined8 *)(pfVar6 + -2) = uVar3;
          pfVar6 = pfVar8;
          local_64 = pfVar7;
          pfVar9 = pfVar10;
        }
        else {
          fVar1 = *pfVar4;
          uVar3 = *(undefined8 *)(pfVar4 + 1);
          *pfVar4 = *pfVar7;
          pfVar4[1] = local_64[-2];
          pfVar4[2] = local_64[-1];
          *pfVar7 = fVar1;
          *(undefined8 *)(local_64 + -2) = uVar3;
          pfVar4 = pfVar4 + 3;
          local_64 = pfVar7;
        }
      }
      goto joined_r0x005c2b83;
    }
    fVar1 = *pfVar4;
    pfVar7 = pfVar6;
    if (fVar1 <= *pfVar9) {
      if (fVar1 < *pfVar9) goto joined_r0x005c2bd9;
      pfVar7 = pfVar6 + 3;
      fVar2 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + 1);
      *pfVar6 = fVar1;
      pfVar6[1] = pfVar4[1];
      pfVar6[2] = pfVar4[2];
      *pfVar4 = fVar2;
      *(undefined8 *)(pfVar4 + 1) = uVar3;
    }
    pfVar6 = pfVar7;
    pfVar4 = pfVar4 + 3;
  } while( true );
}


/* FUN_005c2da0 @ 005c2da0  kind=gamemisc  attributed-by=caller-vote  size=616 */

void FUN_005c2da0(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *local_24;
  int *local_20;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_20 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_005c1ab0(param_2,local_20,param_3 + -3,param_4);
  piVar4 = local_20 + 3;
  for (; param_2 < local_20; local_20 = local_20 + -3) {
    if ((local_20[-1] < local_20[2]) || (local_20[2] < local_20[-1])) break;
  }
  local_24 = piVar4;
  piVar2 = piVar4;
  piVar7 = local_20;
  if (piVar4 < param_3) {
    do {
      local_24 = piVar4;
      piVar2 = piVar4;
      if ((piVar4[2] < local_20[2]) || (local_20[2] < piVar4[2])) break;
      piVar4 = piVar4 + 3;
      local_24 = piVar4;
      piVar2 = piVar4;
    } while (piVar4 < param_3);
  }
joined_r0x005c2e42:
  do {
    if (param_3 <= piVar4) {
LAB_005c2e89:
      if (param_2 < local_20) {
        piVar5 = local_20 + -1;
        piVar6 = piVar7;
        do {
          piVar7 = piVar6;
          piVar4 = local_24;
          if (piVar6[2] <= *piVar5) {
            if (piVar6[2] < *piVar5) break;
            local_c = piVar6[-1];
            local_14 = *(undefined8 *)(piVar6 + -3);
            piVar7 = piVar6 + -3;
            *piVar7 = piVar5[-2];
            piVar6[-2] = piVar5[-1];
            piVar6[-1] = *piVar5;
            iVar3 = 0;
            do {
              *(undefined4 *)((int)piVar5 + iVar3 + -8) = *(undefined4 *)((int)&local_14 + iVar3);
              iVar3 = iVar3 + 4;
            } while (iVar3 < 8);
            *piVar5 = local_c;
          }
          local_20 = local_20 + -3;
          piVar5 = piVar5 + -3;
          piVar6 = piVar7;
        } while (param_2 < local_20);
      }
      if (local_20 == param_2) {
        if (piVar4 == param_3) {
          *param_1 = piVar7;
          param_1[1] = piVar2;
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (piVar2 != piVar4) {
          uVar1 = *(undefined8 *)piVar7;
          iVar3 = piVar7[2];
          *piVar7 = *piVar2;
          piVar7[1] = piVar2[1];
          piVar7[2] = piVar2[2];
          *(undefined8 *)piVar2 = uVar1;
          piVar2[2] = iVar3;
        }
        uVar1 = *(undefined8 *)piVar7;
        iVar3 = piVar7[2];
        *piVar7 = *piVar4;
        piVar7[1] = piVar4[1];
        piVar7[2] = piVar4[2];
        *(undefined8 *)piVar4 = uVar1;
        piVar4[2] = iVar3;
        piVar4 = piVar4 + 3;
        local_24 = piVar4;
        piVar2 = piVar2 + 3;
        piVar7 = piVar7 + 3;
      }
      else {
        piVar5 = local_20 + -3;
        if (piVar4 == param_3) {
          piVar6 = piVar7 + -3;
          if (piVar5 != piVar6) {
            uVar1 = *(undefined8 *)piVar5;
            iVar3 = local_20[-1];
            *piVar5 = *piVar6;
            local_20[-2] = piVar7[-2];
            local_20[-1] = piVar7[-1];
            *(undefined8 *)piVar6 = uVar1;
            piVar7[-1] = iVar3;
          }
          uVar1 = *(undefined8 *)piVar6;
          iVar3 = piVar7[-1];
          *piVar6 = piVar2[-3];
          piVar7[-2] = piVar2[-2];
          piVar7[-1] = piVar2[-1];
          *(undefined8 *)(piVar2 + -3) = uVar1;
          piVar2[-1] = iVar3;
          piVar2 = piVar2 + -3;
          local_20 = piVar5;
          piVar7 = piVar6;
        }
        else {
          uVar1 = *(undefined8 *)piVar4;
          iVar3 = piVar4[2];
          *piVar4 = *piVar5;
          piVar4[1] = local_20[-2];
          piVar4[2] = local_20[-1];
          *(undefined8 *)piVar5 = uVar1;
          local_20[-1] = iVar3;
          piVar4 = piVar4 + 3;
          local_24 = piVar4;
          local_20 = piVar5;
        }
      }
      goto joined_r0x005c2e42;
    }
    piVar5 = piVar2;
    if (piVar4[2] <= piVar7[2]) {
      local_24 = piVar4;
      if (piVar4[2] < piVar7[2]) goto LAB_005c2e89;
      piVar5 = piVar2 + 3;
      uVar1 = *(undefined8 *)piVar2;
      iVar3 = piVar2[2];
      *piVar2 = *piVar4;
      piVar2[1] = piVar4[1];
      piVar2[2] = piVar4[2];
      *(undefined8 *)piVar4 = uVar1;
      piVar4[2] = iVar3;
    }
    piVar4 = piVar4 + 3;
    local_24 = piVar4;
    piVar2 = piVar5;
  } while( true );
}


/* FUN_005c3010 @ 005c3010  kind=gamemisc  attributed-by=caller-vote  size=833 */

void FUN_005c3010(undefined4 *param_1,float *param_2,float *param_3,undefined4 param_4)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  float *pfVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *local_64;
  
  uVar5 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_64 = param_2 + (((int)param_3 - (int)param_2) / 0x18) * 3;
  FUN_005c1b60(param_2,local_64,param_3 + -3,param_4);
  pfVar6 = local_64 + 3;
  for (; param_2 < local_64; local_64 = local_64 + -3) {
    if ((*local_64 < local_64[-3]) || (local_64[-3] < *local_64)) break;
  }
  pfVar4 = pfVar6;
  pfVar9 = local_64;
  if (pfVar6 < param_3) {
    if (3 < ((int)param_3 + (0xb - (int)pfVar6)) / 0xc) {
      fVar1 = *local_64;
      do {
        pfVar4 = pfVar6;
        if ((fVar1 < *pfVar6) || (*pfVar6 < fVar1)) goto joined_r0x005c3143;
        if ((fVar1 < pfVar6[3]) || (pfVar6[3] < fVar1)) {
          pfVar6 = pfVar6 + 3;
          pfVar4 = pfVar6;
          goto joined_r0x005c3143;
        }
        if ((fVar1 < pfVar6[6]) || (pfVar6[6] < fVar1)) {
          pfVar6 = pfVar6 + 6;
          pfVar4 = pfVar6;
          goto joined_r0x005c3143;
        }
        if ((fVar1 < pfVar6[9]) || (pfVar6[9] < fVar1)) {
          pfVar6 = pfVar6 + 9;
          pfVar4 = pfVar6;
          goto joined_r0x005c3143;
        }
        pfVar6 = pfVar6 + 0xc;
      } while ((int)pfVar6 < (int)(param_3 + -9));
    }
    pfVar4 = pfVar6;
    if (pfVar6 < param_3) {
      do {
        pfVar4 = pfVar6;
        if ((*local_64 < *pfVar6) || (*pfVar6 < *local_64)) break;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar6;
      } while (pfVar6 < param_3);
    }
  }
joined_r0x005c3143:
  do {
    if (param_3 <= pfVar4) {
joined_r0x005c3199:
      for (; param_2 < local_64; local_64 = local_64 + -3) {
        fVar1 = local_64[-3];
        pfVar7 = pfVar9;
        if (fVar1 <= *pfVar9) {
          if (fVar1 < *pfVar9) break;
          fVar2 = pfVar9[-3];
          pfVar7 = pfVar9 + -3;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          *pfVar7 = fVar1;
          pfVar9[-2] = local_64[-2];
          pfVar9[-1] = local_64[-1];
          local_64[-3] = fVar2;
          *(undefined8 *)(local_64 + -2) = uVar3;
        }
        pfVar9 = pfVar7;
      }
      if (local_64 == param_2) {
        if (pfVar4 == param_3) {
          *param_1 = pfVar9;
          param_1[1] = pfVar6;
          __security_check_cookie(uVar5 ^ (uint)&stack0xfffffffc);
          return;
        }
        if (pfVar6 != pfVar4) {
          fVar1 = *pfVar9;
          uVar3 = *(undefined8 *)(pfVar9 + 1);
          *pfVar9 = *pfVar6;
          pfVar9[1] = pfVar6[1];
          pfVar9[2] = pfVar6[2];
          *pfVar6 = fVar1;
          *(undefined8 *)(pfVar6 + 1) = uVar3;
        }
        fVar1 = *pfVar9;
        uVar3 = *(undefined8 *)(pfVar9 + 1);
        *pfVar9 = *pfVar4;
        pfVar9[1] = pfVar4[1];
        pfVar9[2] = pfVar4[2];
        *pfVar4 = fVar1;
        *(undefined8 *)(pfVar4 + 1) = uVar3;
        pfVar6 = pfVar6 + 3;
        pfVar4 = pfVar4 + 3;
        pfVar9 = pfVar9 + 3;
      }
      else {
        pfVar7 = local_64 + -3;
        if (pfVar4 == param_3) {
          pfVar10 = pfVar9 + -3;
          if (pfVar7 != pfVar10) {
            fVar1 = *pfVar7;
            uVar3 = *(undefined8 *)(local_64 + -2);
            *pfVar7 = *pfVar10;
            local_64[-2] = pfVar9[-2];
            local_64[-1] = pfVar9[-1];
            *pfVar10 = fVar1;
            *(undefined8 *)(pfVar9 + -2) = uVar3;
          }
          fVar1 = *pfVar10;
          uVar3 = *(undefined8 *)(pfVar9 + -2);
          pfVar8 = pfVar6 + -3;
          *pfVar10 = *pfVar8;
          pfVar9[-2] = pfVar6[-2];
          pfVar9[-1] = pfVar6[-1];
          *pfVar8 = fVar1;
          *(undefined8 *)(pfVar6 + -2) = uVar3;
          pfVar6 = pfVar8;
          local_64 = pfVar7;
          pfVar9 = pfVar10;
        }
        else {
          fVar1 = *pfVar4;
          uVar3 = *(undefined8 *)(pfVar4 + 1);
          *pfVar4 = *pfVar7;
          pfVar4[1] = local_64[-2];
          pfVar4[2] = local_64[-1];
          *pfVar7 = fVar1;
          *(undefined8 *)(local_64 + -2) = uVar3;
          pfVar4 = pfVar4 + 3;
          local_64 = pfVar7;
        }
      }
      goto joined_r0x005c3143;
    }
    fVar1 = *pfVar4;
    pfVar7 = pfVar6;
    if (*pfVar9 <= fVar1) {
      if (*pfVar9 < fVar1) goto joined_r0x005c3199;
      pfVar7 = pfVar6 + 3;
      fVar2 = *pfVar6;
      uVar3 = *(undefined8 *)(pfVar6 + 1);
      *pfVar6 = fVar1;
      pfVar6[1] = pfVar4[1];
      pfVar6[2] = pfVar4[2];
      *pfVar4 = fVar2;
      *(undefined8 *)(pfVar4 + 1) = uVar3;
    }
    pfVar6 = pfVar7;
    pfVar4 = pfVar4 + 3;
  } while( true );
}


/* FUN_005c37d0 @ 005c37d0  kind=gamemisc  attributed-by=caller-vote  size=66 */

undefined4 * FUN_005c37d0(int param_1,int param_2,undefined4 *param_3)

{
  if (param_1 != param_2) {
    param_1 = param_1 - (int)param_3;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(param_1 + (int)param_3);
        param_3[1] = *(undefined4 *)(param_1 + 4 + (int)param_3);
        param_3[2] = *(undefined4 *)(param_1 + 8 + (int)param_3);
      }
      param_3 = param_3 + 3;
    } while (param_1 + (int)param_3 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_005c3820 @ 005c3820  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_005c3820(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  uVar1 = *param_3;
  *param_1 = *param_2;
  param_1[1] = uVar1;
  return;
}


/* FUN_005c3840 @ 005c3840  kind=gamemisc  attributed-by=caller-vote  size=31 */

void FUN_005c3840(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_3;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = uVar2;
  return;
}


/* FUN_005c3860 @ 005c3860  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_005c3860(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d4b0();
  *in_ECX = uVar1;
  return;
}


/* FUN_005c3880 @ 005c3880  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_005c3880(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0065ae80();
  *in_ECX = uVar1;
  return;
}


/* FUN_005c38a0 @ 005c38a0  kind=gamemisc  attributed-by=caller-vote  size=32 */

void FUN_005c38a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *in_ECX;
  
  *in_ECX = param_1;
  in_ECX[1] = param_2;
  in_ECX[2] = param_3;
  in_ECX[3] = param_4;
  return;
}


/* FUN_005c3950 @ 005c3950  kind=gamemisc  attributed-by=caller-vote  size=130 */

void FUN_005c3950(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  FUN_0040ee70(param_1 + 1);
  in_ECX[0x47] = param_1[0x47];
  in_ECX[0x48] = param_1[0x48];
  in_ECX[0x4a] = param_1[0x4a];
  in_ECX[0x4b] = param_1[0x4b];
  in_ECX[0x4c] = param_1[0x4c];
  in_ECX[0x4d] = param_1[0x4d];
  in_ECX[0x4e] = param_1[0x4e];
  in_ECX[0x4f] = param_1[0x4f];
  return;
}


/* FUN_005c39e0 @ 005c39e0  kind=gamemisc  attributed-by=caller-vote  size=161 */

void FUN_005c39e0(void)

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
  in_ECX[0x47] = 0xffffffff;
  in_ECX[0x48] = 0xffffffff;
  in_ECX[0x4a] = 0;
  in_ECX[0x4b] = 0;
  in_ECX[0x4c] = 0;
  in_ECX[0x4d] = 0;
  in_ECX[0x4e] = 0;
  in_ECX[0x4f] = 0;
  return;
}


/* FUN_005c3a90 @ 005c3a90  kind=gamemisc  attributed-by=caller-vote  size=44 */

void FUN_005c3a90(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  return;
}


/* FUN_005c3b70 @ 005c3b70  kind=gamemisc  attributed-by=caller-vote  size=52 */

void FUN_005c3b70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
  in_ECX[2] = param_1[2];
  in_ECX[3] = *param_2;
  in_ECX[4] = param_2[1];
  in_ECX[5] = param_2[2];
  return;
}


/* FUN_005c3bb0 @ 005c3bb0  kind=gamemisc  attributed-by=caller-vote  size=166 */

void FUN_005c3bb0(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 1;
  in_ECX[10] = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  *(undefined2 *)(in_ECX + 0x10) = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  in_ECX[0x13] = 0;
  in_ECX[0x14] = 0;
  in_ECX[0x15] = 0;
  in_ECX[0x16] = 0;
  *(undefined1 *)(in_ECX + 0x17) = 0;
  return;
}


/* FUN_005c3c70 @ 005c3c70  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_005c3c70(void)

{
  undefined4 *in_ECX;
  
  if ((void *)in_ECX[3] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)in_ECX[3]);
  }
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  return;
}


/* FUN_005c3de0 @ 005c3de0  kind=gamemisc  attributed-by=caller-vote  size=146 */

int * FUN_005c3de0(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  iVar3 = FUN_005c3fe0(param_1);
  if (iVar3 != *in_ECX) {
    iVar4 = *piVar2;
    iVar1 = *(int *)(iVar3 + 0x10);
    if ((iVar1 <= iVar4) &&
       ((iVar1 < iVar4 ||
        ((*(int *)(iVar3 + 0x14) <= piVar2[1] &&
         (((iVar1 < iVar4 || (*(int *)(iVar3 + 0x14) < piVar2[1])) ||
          (*(int *)(iVar3 + 0x18) <= piVar2[2])))))))) {
      return (int *)(iVar3 + 0x1c);
    }
  }
  local_14 = *piVar2;
  local_10 = piVar2[1];
  local_c = piVar2[2];
  local_8 = 0;
  iVar4 = FUN_0065a110(&local_14);
  FUN_005c0880(&param_1,iVar3,iVar4 + 0x10,iVar4);
  return param_1 + 7;
}


/* FUN_005c3e80 @ 005c3e80  kind=gamemisc  attributed-by=caller-vote  size=18 */

int FUN_005c3e80(int param_1)

{
  int *in_ECX;
  
  return *in_ECX + param_1 * 0x18;
}


/* FUN_005c3f30 @ 005c3f30  kind=gamemisc  attributed-by=caller-vote  size=67 */

undefined4 FUN_005c3f30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if ((iVar2 <= iVar1) &&
     ((iVar2 < iVar1 ||
      ((param_2[1] <= param_1[1] &&
       (((iVar2 < iVar1 || (param_2[1] < param_1[1])) || (param_2[2] <= param_1[2])))))))) {
    return 0;
  }
  return 1;
}


/* FUN_005c3fe0 @ 005c3fe0  kind=gamemisc  attributed-by=caller-vote  size=85 */

undefined4 * FUN_005c3fe0(int *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 *puVar5;
  
  puVar5 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    iVar1 = *param_1;
    puVar3 = (undefined4 *)puVar5[1];
    do {
      iVar2 = puVar3[4];
      if ((iVar2 < iVar1) ||
         ((iVar2 <= iVar1 &&
          (((int)puVar3[5] < param_1[1] ||
           (((iVar2 <= iVar1 && ((int)puVar3[5] <= param_1[1])) && ((int)puVar3[6] < param_1[2])))))
          ))) {
        puVar4 = (undefined4 *)puVar3[2];
      }
      else {
        puVar4 = (undefined4 *)*puVar3;
        puVar5 = puVar3;
      }
      puVar3 = puVar4;
    } while (*(char *)((int)puVar4 + 0xd) == '\0');
  }
  return puVar5;
}


/* FUN_005c4040 @ 005c4040  kind=gamemisc  attributed-by=caller-vote  size=206 */

void FUN_005c4040(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f3d70;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xcccccd) {
      pvVar2 = operator_new(param_1 * 0x140);
      if (pvVar2 != (void *)0x0) goto LAB_005c409f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005c409f:
  local_8 = 0;
  FUN_005c36a0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (in_ECX[1] - *in_ECX) / 0x140;
  if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  in_ECX[2] = (int)(uVar1 * 0x140 + (int)pvVar2);
  in_ECX[1] = (int)(param_1 * 0x140 + (int)pvVar2);
  *in_ECX = (int)pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_005c4130 @ 005c4130  kind=gamemisc  attributed-by=caller-vote  size=219 */

void FUN_005c4130(uint param_1)

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
  puStack_c = &LAB_006f3d90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xaaaaaab) {
      pvVar3 = operator_new(param_1 * 0x18);
      if (pvVar3 != (void *)0x0) goto LAB_005c418f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_005c418f:
  local_8 = 0;
  FUN_005c36e0(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  iVar1 = *in_ECX;
  if (*in_ECX != 0) {
    FUN_005ae0d0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar3;
  in_ECX[2] = (int)((int)pvVar3 + uVar2 * 0x18);
  in_ECX[1] = (int)((int)pvVar3 + ((in_ECX[1] - iVar1) / 0x18) * 0x18);
  ExceptionList = local_10;
  return;
}


