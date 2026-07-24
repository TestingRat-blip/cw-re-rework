// Helpers_00 (engine) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_00.h"

/* FUN_00402e20 @ 00402e20  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_00402e20(undefined1 *param_1,undefined1 *param_2,undefined1 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 != (undefined1 *)0x0) {
      *param_3 = *param_1;
    }
    param_3 = param_3 + 1;
  }
  return;
}


/* FUN_004034c0 @ 004034c0  kind=gamemisc  attributed-by=caller-vote  size=140 */

void FUN_004034c0(int *param_1)

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
  puStack_c = &LAB_006e1310;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0064e310(param_1[1] - *param_1);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_00402e20(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004040d0 @ 004040d0  kind=gamemisc  attributed-by=caller-vote  size=231 */

int * FUN_004040d0(int *param_1)

{
  void *_Dst;
  int iVar1;
  char cVar2;
  void *pvVar3;
  int *in_ECX;
  void *pvVar4;
  size_t _Size;
  
  if (in_ECX != param_1) {
    pvVar3 = (void *)*param_1;
    pvVar4 = (void *)param_1[1];
    if (pvVar3 == pvVar4) {
      in_ECX[1] = *in_ECX;
      return in_ECX;
    }
    _Dst = (void *)*in_ECX;
    if ((uint)((int)pvVar4 - (int)pvVar3) <= (uint)(in_ECX[1] - (int)_Dst)) {
      memmove(_Dst,pvVar3,(int)pvVar4 - (int)pvVar3);
      in_ECX[1] = (param_1[1] - *param_1) + *in_ECX;
      return in_ECX;
    }
    if ((uint)((int)pvVar4 - (int)pvVar3) <= (uint)(in_ECX[2] - (int)_Dst)) {
      pvVar4 = (void *)((in_ECX[1] - (int)_Dst) + (int)pvVar3);
      memmove(_Dst,pvVar3,(int)pvVar4 - (int)pvVar3);
      iVar1 = param_1[1];
      pvVar3 = memmove((void *)in_ECX[1],pvVar4,iVar1 - (int)pvVar4);
      in_ECX[1] = (int)pvVar3 + (iVar1 - (int)pvVar4);
      return in_ECX;
    }
    if (_Dst != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(_Dst);
    }
    cVar2 = FUN_0064e310(param_1[1] - *param_1);
    if (cVar2 != '\0') {
      _Size = param_1[1] - *param_1;
      pvVar3 = memmove((void *)*in_ECX,(void *)*param_1,_Size);
      in_ECX[1] = (int)pvVar3 + _Size;
    }
  }
  return in_ECX;
}


/* FUN_00405420 @ 00405420  kind=gamemisc  attributed-by=caller-vote  size=66 */

void FUN_00405420(int param_1,size_t param_2,char param_3)

{
  undefined4 *in_ECX;
  
  if (param_2 == 1) {
    if (0xf < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(char *)((int)in_ECX + param_1) = param_3;
    return;
  }
  if (0xf < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  memset((void *)(param_1 + (int)in_ECX),(int)param_3,param_2);
  return;
}


/* FUN_00407e00 @ 00407e00  kind=gamemisc  attributed-by=caller-vote  size=42 */

float10 FUN_00407e00(int param_1,double param_2)

{
  while( true ) {
    for (; 0 < param_1; param_1 = param_1 + -1) {
    }
    if (-1 < param_1) break;
    param_1 = -param_1;
  }
  return (float10)((double)param_1 + param_2);
}


/* FUN_0040b810 @ 0040b810  kind=gamemisc  attributed-by=caller-vote  size=466 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0040b810(undefined4 param_1,undefined4 param_2,float param_3)

{
  uint uVar1;
  void **ppvVar2;
  int iStack_e4;
  basic_iostream<char,std::char_traits<char>_> local_e0;
  basic_streambuf<char,std::char_traits<char>_> local_c8 [2];
  basic_iostream<char,std::char_traits<char>_> local_c0 [2];
  undefined4 local_90;
  undefined4 local_8c;
  code *local_78 [18];
  undefined4 local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e186d;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_e0.vbtablePtr =
       (basic_iostream<char,std::char_traits<char>_>_vbtable *)
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_e0.basic_ostream<char,std::char_traits<char>_>.vbtablePtr =
       (basic_ostream<char,std::char_traits<char>_>_vbtable *)&DAT_006fcd08;
  local_78[0] = _vftable__exref;
  local_8 = 0;
  local_30 = 1;
  local_14 = uVar1;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            (&local_e0,(basic_streambuf<char,std::char_traits<char>_> *)local_c8);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_e0.vbtablePtr +
   (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_e4 + (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset)
       = (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (local_c8);
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  local_c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  local_90 = 0;
  local_8c = 0;
  local_8 = 3;
  FUN_00401ff0(&local_e0.basic_ostream<char,std::char_traits<char>_>,param_2,uVar1);
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            (&local_e0.basic_ostream<char,std::char_traits<char>_>,param_3);
  ppvVar2 = (void **)FUN_0040e140(local_2c);
  if (ppvVar2 != &DAT_00765030) {
    if (0xf < DAT_00765044) {
                    /* WARNING: Subroutine does not return */
      operator_delete(DAT_00765030);
    }
    DAT_00765044 = 0xf;
    _DAT_00765040 = 0;
    DAT_00765030 = (void *)((uint)DAT_00765030 & 0xffffff00);
    FUN_00405060(ppvVar2);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   ((int)&local_e0.vbtablePtr +
   (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(int *)((int)&iStack_e4 + (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset)
       = (local_e0.vbtablePtr)->basic_ios<char,std::char_traits<char>_>_offset + -0x68;
  local_c8[0] = (basic_streambuf<char,std::char_traits<char>_>)
                &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  FUN_0040b4e0();
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (local_c8);
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            (local_c0);
  std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)local_78);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0040bb90 @ 0040bb90  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_0040bb90(uint *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    *param_1 = (uint)(*param_1 == 0);
  }
  return;
}


/* FUN_0040bef0 @ 0040bef0  kind=gamemisc  attributed-by=caller-vote  size=184 */

int FUN_0040bef0(void)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  
  iVar8 = 0;
  iVar5 = 0;
  if ((0 < (int)DAT_00765008) && (7 < DAT_00765008)) {
    iVar12 = 0;
    iVar13 = 0;
    iVar14 = 0;
    iVar15 = 0;
    iVar8 = 0;
    iVar9 = 0;
    iVar10 = 0;
    iVar11 = 0;
    uVar6 = DAT_00765008 & 0x80000007;
    if ((int)uVar6 < 0) {
      uVar6 = (uVar6 - 1 | 0xfffffff8) + 1;
    }
    piVar7 = (int *)&DAT_0076af20;
    do {
      iVar5 = iVar5 + 8;
      iVar12 = iVar12 + piVar7[-4];
      iVar13 = iVar13 + piVar7[-3];
      iVar14 = iVar14 + piVar7[-2];
      iVar15 = iVar15 + piVar7[-1];
      iVar1 = *piVar7;
      piVar2 = piVar7 + 1;
      piVar3 = piVar7 + 2;
      piVar4 = piVar7 + 3;
      piVar7 = piVar7 + 8;
      iVar8 = iVar8 + iVar1;
      iVar9 = iVar9 + *piVar2;
      iVar10 = iVar10 + *piVar3;
      iVar11 = iVar11 + *piVar4;
    } while (iVar5 < (int)(DAT_00765008 - uVar6));
    iVar8 = iVar8 + iVar12 + iVar10 + iVar14 + iVar9 + iVar13 + iVar11 + iVar15;
  }
  iVar9 = 0;
  iVar10 = 0;
  if (iVar5 < (int)DAT_00765008) {
    if (1 < (int)(DAT_00765008 - iVar5)) {
      do {
        iVar9 = iVar9 + *(int *)(&DAT_0076af10 + iVar5 * 4);
        iVar10 = iVar10 + *(int *)(iVar5 * 4 + 0x76af14);
        iVar5 = iVar5 + 2;
      } while (iVar5 < (int)(DAT_00765008 - 1));
    }
    if (iVar5 < (int)DAT_00765008) {
      iVar8 = iVar8 + *(int *)(&DAT_0076af10 + iVar5 * 4);
    }
    iVar8 = iVar8 + iVar10 + iVar9;
  }
  return DAT_0076af00 * iVar8;
}


/* FUN_0040bff0 @ 0040bff0  kind=gamemisc  attributed-by=caller-vote  size=168 */

void FUN_0040bff0(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = in_ECX[4];
  if (-iVar2 - 1U <= param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (uVar1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_004054f0(uVar1,iVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if (0xf < (uint)in_ECX[5]) {
        *(undefined1 *)*in_ECX = 0;
        return;
      }
      *(undefined1 *)in_ECX = 0;
      return;
    }
    FUN_00405420(in_ECX[4],param_1,param_2);
    in_ECX[4] = uVar1;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)(*in_ECX + uVar1) = 0;
      return;
    }
    *(undefined1 *)((int)in_ECX + uVar1) = 0;
  }
  return;
}


/* FUN_0040d800 @ 0040d800  kind=gamemisc  attributed-by=caller-vote  size=69 */

undefined4 FUN_0040d800(undefined4 param_1)

{
  void *pvVar1;
  int in_ECX;
  
  FUN_004034c0(*(int *)(in_ECX + 0x30) + -0xc);
  if (*(int *)(in_ECX + 0x2c) != *(int *)(in_ECX + 0x30)) {
    pvVar1 = *(void **)(*(int *)(in_ECX + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -0xc;
  }
  return param_1;
}


/* FUN_0040d910 @ 0040d910  kind=gamemisc  attributed-by=caller-vote  size=181 */

void FUN_0040d910(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e6bb2;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_0063ddc0(1);
    }
    param_1 = *in_ECX + ((int)(param_1 - uVar2) / 0xc) * 0xc;
    uVar1 = in_ECX[1];
    local_8 = 0;
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_0063ddc0(1);
    }
    uVar1 = in_ECX[1];
    local_8 = 1;
  }
  if (uVar1 != 0) {
    FUN_004034c0(param_1);
  }
  in_ECX[1] = in_ECX[1] + 0xc;
  ExceptionList = local_10;
  return;
}


/* FUN_0040da70 @ 0040da70  kind=gamemisc  attributed-by=caller-vote  size=84 */

void FUN_0040da70(int param_1)

{
  code *pcVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  
  if ((-1 < param_1) && (param_1 < *(int *)(in_ECX + 0x10) - *(int *)(in_ECX + 0xc) >> 2)) {
    do {
      iVar3 = param_1 - *(int *)(*(int *)(in_ECX + 0xc) + param_1 * 4);
      param_1 = param_1 + 2;
      pcVar1 = *(code **)(*(int *)(in_ECX + 0x40) + iVar3 * 4);
      *(int *)(in_ECX + 0x50) = param_1;
      if (pcVar1 != (code *)0x0) {
        iVar2 = (*pcVar1)();
        param_1 = param_1 + iVar2;
      }
    } while (iVar3 != 0xc);
  }
  return;
}


/* FUN_0040f110 @ 0040f110  kind=gamemisc  attributed-by=caller-vote  size=89 */

void FUN_0040f110(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if ((uint)param_1[5] < 8) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,(param_1[4] + 1) * 2);
    }
  }
  else {
    if (in_ECX != (undefined4 *)0x0) {
      *in_ECX = *param_1;
    }
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  return;
}


/* FUN_0040f300 @ 0040f300  kind=gamemisc  attributed-by=caller-vote  size=178 */

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


/* FUN_00411270 @ 00411270  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00411270(uint param_1,uint param_2)

{
  void *_Dst;
  uint uVar1;
  int *piVar2;
  int *in_ECX;
  int iVar3;
  
  uVar1 = in_ECX[4];
  if (uVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid string position");
  }
  if (param_2 < uVar1 - param_1) {
    if (param_2 != 0) {
      piVar2 = in_ECX;
      if (7 < (uint)in_ECX[5]) {
        piVar2 = (int *)*in_ECX;
      }
      iVar3 = uVar1 - param_2;
      _Dst = (void *)((int)piVar2 + param_1 * 2);
      if (iVar3 - param_1 != 0) {
        memmove(_Dst,(void *)((int)_Dst + param_2 * 2),(iVar3 - param_1) * 2);
      }
      in_ECX[4] = iVar3;
      if (7 < (uint)in_ECX[5]) {
        *(undefined2 *)(*in_ECX + iVar3 * 2) = 0;
        return;
      }
      *(undefined2 *)((int)in_ECX + iVar3 * 2) = 0;
    }
    return;
  }
  in_ECX[4] = param_1;
  if ((uint)in_ECX[5] < 8) {
    *(undefined2 *)((int)in_ECX + param_1 * 2) = 0;
    return;
  }
  *(undefined2 *)(*in_ECX + param_1 * 2) = 0;
  return;
}


/* FUN_00411be0 @ 00411be0  kind=gamemisc  attributed-by=caller-vote  size=135 */

float * FUN_00411be0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  float fVar6;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = in_ECX[1];
  fVar6 = 1.0 / (in_ECX[3] * fVar1 + in_ECX[7] * fVar2 + in_ECX[0xf]);
  fVar4 = in_ECX[5];
  fVar5 = in_ECX[0xd];
  *param_1 = fVar6 * (in_ECX[4] * fVar2 + fVar1 * *in_ECX + in_ECX[0xc]);
  param_1[1] = fVar6 * (fVar3 * fVar1 + fVar4 * fVar2 + fVar5);
  return param_1;
}


/* FUN_00412400 @ 00412400  kind=gamemisc  attributed-by=caller-vote  size=890 */

void FUN_00412400(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *in_ECX;
  
  fVar1 = in_ECX[4];
  fVar2 = *in_ECX;
  fVar3 = in_ECX[8];
  fVar4 = in_ECX[0xc];
  *in_ECX = *param_1 * fVar2 + fVar1 * param_1[1] + fVar3 * param_1[2] + param_1[3] * fVar4;
  in_ECX[4] = param_1[5] * fVar1 + param_1[4] * fVar2 + param_1[6] * fVar3 + fVar4 * param_1[7];
  in_ECX[8] = param_1[9] * fVar1 + param_1[8] * fVar2 + param_1[10] * fVar3 + param_1[0xb] * fVar4;
  fVar5 = in_ECX[0xd];
  in_ECX[0xc] = fVar1 * param_1[0xd] + fVar2 * param_1[0xc] + param_1[0xe] * fVar3 +
                param_1[0xf] * fVar4;
  fVar1 = in_ECX[5];
  fVar2 = in_ECX[1];
  fVar3 = in_ECX[9];
  in_ECX[1] = *param_1 * fVar2 + fVar1 * param_1[1] + fVar3 * param_1[2] + param_1[3] * fVar5;
  in_ECX[5] = param_1[5] * fVar1 + param_1[4] * fVar2 + param_1[6] * fVar3 + fVar5 * param_1[7];
  in_ECX[9] = param_1[9] * fVar1 + param_1[8] * fVar2 + param_1[10] * fVar3 + param_1[0xb] * fVar5;
  fVar4 = in_ECX[0xe];
  in_ECX[0xd] = fVar1 * param_1[0xd] + fVar2 * param_1[0xc] + param_1[0xe] * fVar3 +
                param_1[0xf] * fVar5;
  fVar1 = in_ECX[6];
  fVar2 = in_ECX[2];
  fVar3 = in_ECX[10];
  in_ECX[2] = *param_1 * fVar2 + fVar1 * param_1[1] + fVar3 * param_1[2] + param_1[3] * fVar4;
  in_ECX[6] = param_1[5] * fVar1 + param_1[4] * fVar2 + param_1[6] * fVar3 + fVar4 * param_1[7];
  in_ECX[10] = param_1[9] * fVar1 + param_1[8] * fVar2 + param_1[10] * fVar3 + param_1[0xb] * fVar4;
  fVar5 = in_ECX[0xf];
  in_ECX[0xe] = fVar1 * param_1[0xd] + fVar2 * param_1[0xc] + param_1[0xe] * fVar3 +
                param_1[0xf] * fVar4;
  fVar1 = in_ECX[7];
  fVar2 = in_ECX[3];
  fVar3 = in_ECX[0xb];
  in_ECX[3] = *param_1 * fVar2 + fVar1 * param_1[1] + fVar3 * param_1[2] + param_1[3] * fVar5;
  in_ECX[7] = param_1[5] * fVar1 + param_1[4] * fVar2 + param_1[6] * fVar3 + fVar5 * param_1[7];
  in_ECX[0xb] = param_1[9] * fVar1 + param_1[8] * fVar2 + param_1[10] * fVar3 + param_1[0xb] * fVar5
  ;
  in_ECX[0xf] = fVar1 * param_1[0xd] + fVar2 * param_1[0xc] + param_1[0xe] * fVar3 +
                param_1[0xf] * fVar5;
  return;
}


/* FUN_00425330 @ 00425330  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_00425330(int param_1,uint param_2,undefined2 param_3)

{
  undefined4 *in_ECX;
  uint uVar1;
  undefined4 *puVar2;
  
  if (param_2 == 1) {
    if (7 < (uint)in_ECX[5]) {
      in_ECX = (undefined4 *)*in_ECX;
    }
    *(undefined2 *)((int)in_ECX + param_1 * 2) = param_3;
    return;
  }
  if (7 < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  if (param_2 != 0) {
    puVar2 = (undefined4 *)((int)in_ECX + param_1 * 2);
    for (uVar1 = param_2 >> 1; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar2 = CONCAT22(param_3,param_3);
      puVar2 = puVar2 + 1;
    }
    for (uVar1 = (uint)((param_2 & 1) != 0); uVar1 != 0; uVar1 = uVar1 - 1) {
      *(undefined2 *)puVar2 = param_3;
      puVar2 = (undefined4 *)((int)puVar2 + 2);
    }
  }
  return;
}


/* FUN_00425390 @ 00425390  kind=gamemisc  attributed-by=caller-vote  size=183 */

void FUN_00425390(uint param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int *in_ECX;
  
  iVar2 = in_ECX[4];
  if (-iVar2 - 1U <= param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_1 != 0) {
    uVar1 = iVar2 + param_1;
    if (0x7ffffffe < uVar1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("string too long");
    }
    if ((uint)in_ECX[5] < uVar1) {
      FUN_0040f170(uVar1,iVar2);
      if (uVar1 == 0) {
        return;
      }
    }
    else if (uVar1 == 0) {
      in_ECX[4] = 0;
      if (7 < (uint)in_ECX[5]) {
        *(undefined2 *)*in_ECX = 0;
        return;
      }
      *(undefined2 *)in_ECX = 0;
      return;
    }
    FUN_00425330(in_ECX[4],param_1,param_2);
    in_ECX[4] = uVar1;
    if (7 < (uint)in_ECX[5]) {
      *(undefined2 *)(*in_ECX + uVar1 * 2) = 0;
      return;
    }
    *(undefined2 *)((int)in_ECX + uVar1 * 2) = 0;
  }
  return;
}


/* FUN_00427a30 @ 00427a30  kind=gamemisc  attributed-by=caller-vote  size=68 */

undefined4 * FUN_00427a30(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      *param_3 = puVar2[-2];
      param_3[1] = puVar2[-1];
      param_3[2] = *puVar2;
      param_3[3] = puVar2[1];
      puVar1 = puVar2 + 2;
      param_3 = param_3 + 4;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00427ab0 @ 00427ab0  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 * FUN_00427ab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_00427af0 @ 00427af0  kind=gamemisc  attributed-by=caller-vote  size=73 */

undefined4 * FUN_00427af0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        param_3[3] = puVar2[1];
      }
      param_3 = param_3 + 4;
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00428a60 @ 00428a60  kind=gamemisc  attributed-by=caller-vote  size=56 */

uint FUN_00428a60(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
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


/* FUN_00428ac0 @ 00428ac0  kind=gamemisc  attributed-by=caller-vote  size=186 */

void FUN_00428ac0(uint param_1)

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
  puStack_c = &LAB_006e1f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x20000000) {
      pvVar3 = operator_new(param_1 * 8);
      if (pvVar3 != (void *)0x0) goto LAB_00428b20;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00428b20:
  local_8 = 0;
  FUN_00427ab0(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
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


/* FUN_00428ba0 @ 00428ba0  kind=gamemisc  attributed-by=caller-vote  size=185 */

void FUN_00428ba0(uint param_1)

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
  puStack_c = &LAB_006e1f40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x10000000) {
      pvVar3 = operator_new(param_1 << 4);
      if (pvVar3 != (void *)0x0) goto LAB_00428c01;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_00428c01:
  local_8 = 0;
  FUN_00427af0(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
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


/* FUN_00428c80 @ 00428c80  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_00428c80(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 3)) {
    return;
  }
  if (0x1fffffffU - (in_ECX[1] - *in_ECX >> 3) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 3;
  if (0x1fffffff - (uVar1 >> 1) < uVar1) {
    FUN_00428ac0();
    return;
  }
  FUN_00428ac0();
  return;
}


/* FUN_00428d00 @ 00428d00  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_00428d00(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 4)) {
    return;
  }
  if (0xfffffffU - (in_ECX[1] - *in_ECX >> 4) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 4;
  if (0xfffffff - (uVar1 >> 1) < uVar1) {
    FUN_00428ba0();
    return;
  }
  FUN_00428ba0();
  return;
}


/* FUN_0042b7a0 @ 0042b7a0  kind=gamemisc  attributed-by=caller-vote  size=90 */

void FUN_0042b7a0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int *in_ECX;
  undefined4 *puVar2;
  
  if ((param_2 == (undefined4 *)*in_ECX) && (param_3 == (undefined4 *)in_ECX[1])) {
    in_ECX[1] = *in_ECX;
    *param_1 = param_2;
    return;
  }
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)in_ECX[1];
    puVar2 = param_2;
    for (; param_3 != puVar1; param_3 = param_3 + 2) {
      *puVar2 = *param_3;
      puVar2[1] = param_3[1];
      puVar2 = puVar2 + 2;
    }
    in_ECX[1] = (int)puVar2;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0042be00 @ 0042be00  kind=gamemisc  attributed-by=caller-vote  size=65 */

void FUN_0042be00(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      FUN_0042bea0(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0042be50 @ 0042be50  kind=gamemisc  attributed-by=caller-vote  size=65 */

void FUN_0042be50(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      FUN_0042bf80(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0042bea0 @ 0042bea0  kind=gamemisc  attributed-by=caller-vote  size=195 */

void FUN_0042bea0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2160;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar2 = in_ECX[1] - *in_ECX >> 3;
  if (param_1 < uVar2) {
    FUN_0042b7a0(&param_1,*in_ECX + param_1 * 8,in_ECX[1]);
  }
  else if (uVar2 < param_1) {
    FUN_00428c80(param_1 - uVar2);
    local_8 = 0;
    cube::Controller::vfunction12();
    in_ECX[1] = in_ECX[1] + (uVar1 - (in_ECX[1] - *in_ECX >> 3)) * 8;
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0042bf80 @ 0042bf80  kind=gamemisc  attributed-by=caller-vote  size=207 */

void FUN_0042bf80(uint param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  uint uVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2180;
  local_10 = ExceptionList;
  iVar1 = in_ECX[1];
  iVar2 = *in_ECX;
  uVar3 = iVar1 - iVar2 >> 4;
  if (param_1 < uVar3) {
    iVar4 = param_1 * 0x10 + iVar2;
    if (iVar4 != iVar2) {
      if (iVar4 == iVar1) {
        return;
      }
      ExceptionList = &local_10;
      iVar2 = FUN_00427a30(iVar1,iVar1,iVar4,param_1);
    }
    in_ECX[1] = iVar2;
  }
  else if (uVar3 < param_1) {
    ExceptionList = &local_10;
    FUN_00428d00(param_1 - uVar3);
    local_8 = 0;
    cube::Controller::vfunction12();
    in_ECX[1] = in_ECX[1] + (param_1 - (in_ECX[1] - *in_ECX >> 4)) * 0x10;
    ExceptionList = local_10;
    return;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00439fc0 @ 00439fc0  kind=gamemisc  attributed-by=caller-vote  size=60 */

void FUN_00439fc0(int *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  int iVar2;
  
  puVar1 = in_ECX;
  if (7 < (uint)in_ECX[5]) {
    puVar1 = (undefined4 *)*in_ECX;
  }
  iVar2 = 0;
  if (param_2 != 0) {
    iVar2 = param_2 - (int)puVar1 >> 1;
  }
  FUN_00411270(iVar2,1);
  if (7 < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  *param_1 = (int)in_ECX + iVar2 * 2;
  return;
}


/* FUN_004490f0 @ 004490f0  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_004490f0(void)

{
  undefined4 *in_ECX;
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 local_48 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar2 = in_ECX;
  puVar3 = local_48;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  puVar2 = in_ECX + 8;
  puVar3 = local_48 + 1;
  iVar1 = 4;
  do {
    puVar2[-8] = puVar3[-1];
    puVar2[-4] = *puVar3;
    *puVar2 = puVar3[1];
    puVar2[4] = puVar3[2];
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 4;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00456fb0 @ 00456fb0  kind=gamemisc  attributed-by=caller-vote  size=144 */

int * FUN_00456fb0(int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  
  if (param_1 != param_2) {
    piVar2 = param_1 + 4;
    do {
      if (param_3 != (int *)0x0) {
        param_3[5] = 7;
        param_3[4] = 0;
        *(undefined2 *)param_3 = 0;
        if ((uint)piVar2[1] < 8) {
          if (*piVar2 + 1 != 0) {
            memmove(param_3,piVar2 + -4,(*piVar2 + 1) * 2);
          }
        }
        else {
          *param_3 = piVar2[-4];
          piVar2[-4] = 0;
        }
        param_3[4] = *piVar2;
        param_3[5] = piVar2[1];
        piVar2[1] = 7;
        *piVar2 = 0;
        *(undefined2 *)(piVar2 + -4) = 0;
      }
      param_3 = param_3 + 6;
      piVar1 = piVar2 + 2;
      piVar2 = piVar2 + 6;
    } while (piVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_00457040 @ 00457040  kind=gamemisc  attributed-by=caller-vote  size=96 */

void FUN_00457040(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
      }
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_0046dcc0 @ 0046dcc0  kind=gamemisc  attributed-by=caller-vote  size=56 */

uint FUN_0046dcc0(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = in_ECX[2] - *in_ECX >> 2;
  if (0x3fffffff - (uVar1 >> 1) < uVar1) {
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


/* FUN_0046dde0 @ 0046dde0  kind=gamemisc  attributed-by=caller-vote  size=73 */

uint FUN_0046dde0(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0x18;
  if (0xaaaaaaa - (uVar1 >> 1) < uVar1) {
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


/* FUN_0046de30 @ 0046de30  kind=gamemisc  attributed-by=caller-vote  size=532 */

void FUN_0046de30(int *param_1,undefined4 *param_2,void *param_3,undefined4 *param_4)

{
  size_t _Size;
  void *pvVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  void *_Src;
  
  uVar9 = (uint)param_3;
  iVar3 = (int)param_2 - *in_ECX;
  if (param_3 != (void *)0x0) {
    pvVar1 = (void *)in_ECX[1];
    if ((uint)(in_ECX[2] - (int)pvVar1 >> 2) < param_3) {
      iVar6 = (int)pvVar1 - *in_ECX >> 2;
      if (0x3fffffffU - iVar6 < param_3) {
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      uVar4 = FUN_0046dcc0(iVar6 + (int)param_3);
      param_3 = (void *)0x0;
      if ((uVar4 != 0) &&
         ((0x3fffffff < uVar4 || (param_3 = operator_new(uVar4 << 2), param_3 == (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      iVar6 = (int)param_2 - *in_ECX >> 2;
      puVar8 = (undefined4 *)((int)param_3 + iVar6 * 4);
      for (uVar7 = uVar9; uVar7 != 0; uVar7 = uVar7 - 1) {
        *puVar8 = *param_4;
        puVar8 = puVar8 + 1;
      }
      memmove(param_3,(void *)*in_ECX,(int)param_2 - *in_ECX & 0xfffffffc);
      memmove((void *)((int)param_3 + (iVar6 + uVar9) * 4),param_2,
              in_ECX[1] - (int)param_2 & 0xfffffffc);
      pvVar1 = (void *)*in_ECX;
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *in_ECX = (int)param_3;
      in_ECX[2] = (int)((int)param_3 + uVar4 * 4);
      in_ECX[1] = (int)((int)param_3 + (uVar9 + (in_ECX[1] - (int)pvVar1 >> 2)) * 4);
    }
    else {
      uVar2 = *param_4;
      uVar9 = (int)pvVar1 - (int)param_2 >> 2;
      if (uVar9 < param_3) {
        memmove(param_2 + (int)param_3,param_2,uVar9 * 4);
        iVar6 = (int)param_3 - (in_ECX[1] - (int)param_2 >> 2);
        if (iVar6 != 0) {
          puVar8 = (undefined4 *)in_ECX[1];
          for (; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          }
        }
        in_ECX[1] = in_ECX[1] + (int)param_3 * 4;
        iVar6 = in_ECX[1];
        for (; param_2 != (undefined4 *)(iVar6 + (int)param_3 * -4); param_2 = param_2 + 1) {
          *param_2 = uVar2;
        }
      }
      else {
        _Src = (void *)((int)pvVar1 + (int)param_3 * -4);
        _Size = ((int)pvVar1 - (int)_Src >> 2) * 4;
        pvVar5 = memmove(pvVar1,_Src,_Size);
        in_ECX[1] = (int)((int)pvVar5 + _Size);
        iVar6 = (int)_Src - (int)param_2 >> 2;
        memmove((void *)((int)pvVar1 + iVar6 * -4),param_2,iVar6 * 4);
        puVar8 = param_2;
        if (param_2 != param_2 + (int)param_3) {
          do {
            *puVar8 = uVar2;
            puVar8 = puVar8 + 1;
          } while (puVar8 != param_2 + (int)param_3);
        }
      }
    }
  }
  *param_1 = *in_ECX + (iVar3 >> 2) * 4;
  return;
}


/* FUN_0046e610 @ 0046e610  kind=gamemisc  attributed-by=caller-vote  size=219 */

void FUN_0046e610(uint param_1)

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
  puStack_c = &LAB_006e5710;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0xaaaaaab) {
      pvVar3 = operator_new(param_1 * 0x18);
      if (pvVar3 != (void *)0x0) goto LAB_0046e66f;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0046e66f:
  local_8 = 0;
  FUN_00456fb0(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  iVar1 = *in_ECX;
  if (*in_ECX != 0) {
    FUN_00452650(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar3;
  in_ECX[2] = (int)((int)pvVar3 + uVar2 * 0x18);
  in_ECX[1] = (int)((int)pvVar3 + ((in_ECX[1] - iVar1) / 0x18) * 0x18);
  ExceptionList = local_10;
  return;
}


/* FUN_0046e970 @ 0046e970  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_0046e970(uint param_1)

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
    FUN_0046e610();
    return;
  }
  FUN_0046e610();
  return;
}


/* FUN_0046ef20 @ 0046ef20  kind=gamemisc  attributed-by=caller-vote  size=52 */

void * FUN_0046ef20(uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((param_1 < 0xaaaaaab) && (pvVar1 = operator_new(param_1 * 0x18), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_00486950 @ 00486950  kind=gamemisc  attributed-by=caller-vote  size=124 */

void FUN_00486950(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar1 = in_ECX[1];
  if ((param_1 < uVar1) && (uVar2 = *in_ECX, uVar2 <= param_1)) {
    if (uVar1 == in_ECX[2]) {
      FUN_0046e970(1);
    }
    if (in_ECX[1] != 0) {
      FUN_0040eaf0(*in_ECX + ((int)(param_1 - uVar2) / 0x18) * 0x18);
      in_ECX[1] = in_ECX[1] + 0x18;
      return;
    }
  }
  else {
    if (uVar1 == in_ECX[2]) {
      FUN_0046e970(1);
    }
    if (in_ECX[1] != 0) {
      FUN_0040eaf0(param_1);
    }
  }
  in_ECX[1] = in_ECX[1] + 0x18;
  return;
}


/* FUN_00583da0 @ 00583da0  kind=gamemisc  attributed-by=caller-vote  size=181 */

void FUN_00583da0(undefined4 param_1,int param_2)

{
  void *pvVar1;
  uint uVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = **(undefined4 **)(*(int *)(param_2 + 0x30) + -0xc);
  if (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x30)) {
    pvVar1 = *(void **)(*(int *)(param_2 + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -0xc;
  }
  uVar3 = (**(code **)(in_ECX + 0xc))(uVar3,uVar2);
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = uVar3;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00583e80 @ 00583e80  kind=gamemisc  attributed-by=caller-vote  size=228 */

void FUN_00583e80(void)

{
  undefined4 uVar1;
  int in_ECX;
  undefined1 uVar2;
  void *local_2c [3];
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1120;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00584240(local_2c);
  local_8 = 0;
  uVar2 = 0;
  FUN_0040c0a0(local_2c,0,0xffffffff);
  uVar1 = (**(code **)(in_ECX + 0xc))(uVar2);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = uVar1;
  local_8 = 1;
  FUN_0040d910(&local_20);
  if (local_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00584240 @ 00584240  kind=gamemisc  attributed-by=caller-vote  size=130 */

undefined1 * FUN_00584240(undefined1 *param_1)

{
  void *local_20;
  undefined4 local_1c;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f0f78;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = 0;
  FUN_0040d800(&local_20);
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  local_8 = 0;
  *param_1 = 0;
  FUN_00583cd0(local_20,local_1c,param_1);
  if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_005859f0 @ 005859f0  kind=gamemisc  attributed-by=caller-vote  size=183 */

void FUN_005859f0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  uint uVar3;
  int in_ECX;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar1 = **(undefined4 **)(*(int *)(param_2 + 0x30) + -0xc);
  if (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_2 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -0xc;
  }
  (**(code **)(in_ECX + 0xc))(uVar1,uVar3);
  local_1c = (undefined4 *)0x0;
  local_18 = 0;
  local_14 = 0;
  FUN_005870c0(4);
  *local_1c = 0;
  local_8 = 0;
  FUN_0040d910(&local_1c);
  if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00585af0 @ 00585af0  kind=gamemisc  attributed-by=caller-vote  size=230 */

void FUN_00585af0(void)

{
  int in_ECX;
  undefined1 uVar1;
  void *local_2c [3];
  undefined4 *local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1120;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00584240(local_2c);
  local_8 = 0;
  uVar1 = 0;
  FUN_0040c0a0(local_2c,0,0xffffffff);
  (**(code **)(in_ECX + 0xc))(uVar1);
  local_8 = 0xffffffff;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_20 = (undefined4 *)0x0;
  local_1c = 0;
  local_18 = 0;
  FUN_005870c0(4);
  *local_20 = 0;
  local_8 = 1;
  FUN_0040d910(&local_20);
  if (local_20 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00585ef0 @ 00585ef0  kind=gamemisc  attributed-by=caller-vote  size=160 */

void FUN_00585ef0(undefined4 *param_1)

{
  undefined4 *_Src;
  int in_ECX;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  _Src = (undefined4 *)(**(code **)(in_ECX + 0xc))(local_20);
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((uint)_Src[5] < 0x10) {
    if (_Src[4] + 1 != 0) {
      memmove(param_1,_Src,_Src[4] + 1);
    }
  }
  else {
    *param_1 = *_Src;
    *_Src = 0;
  }
  param_1[4] = _Src[4];
  param_1[5] = _Src[5];
  _Src[5] = 0xf;
  _Src[4] = 0;
  *(undefined1 *)_Src = 0;
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00585fa0 @ 00585fa0  kind=gamemisc  attributed-by=caller-vote  size=205 */

void FUN_00585fa0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 *_Src;
  int in_ECX;
  void *local_20 [5];
  uint local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar1 = **(undefined4 **)(*(int *)(param_2 + 0x30) + -0xc);
  if (*(int *)(param_2 + 0x2c) != *(int *)(param_2 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_2 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_2 + 0x30) = *(int *)(param_2 + 0x30) + -0xc;
  }
  _Src = (undefined4 *)(**(code **)(in_ECX + 0xc))(local_20,uVar1);
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((uint)_Src[5] < 0x10) {
    if (_Src[4] + 1 != 0) {
      memmove(param_1,_Src,_Src[4] + 1);
    }
  }
  else {
    *param_1 = *_Src;
    *_Src = 0;
  }
  param_1[4] = _Src[4];
  param_1[5] = _Src[5];
  _Src[5] = 0xf;
  _Src[4] = 0;
  *(undefined1 *)_Src = 0;
  if (0xf < local_c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20[0]);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00586090 @ 00586090  kind=gamemisc  attributed-by=caller-vote  size=281 */

void FUN_00586090(undefined4 *param_1)

{
  undefined4 *_Src;
  int in_ECX;
  undefined1 uVar1;
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
  puStack_c = &LAB_006f1158;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00584240(local_44);
  local_8 = 0;
  uVar1 = 0;
  FUN_0040c0a0(local_44,0,0xffffffff);
  _Src = (undefined4 *)(**(code **)(in_ECX + 0xc))(local_2c,uVar1);
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((uint)_Src[5] < 0x10) {
    if (_Src[4] + 1 != 0) {
      memmove(param_1,_Src,_Src[4] + 1);
    }
  }
  else {
    *param_1 = *_Src;
    *_Src = 0;
  }
  param_1[4] = _Src[4];
  param_1[5] = _Src[5];
  _Src[5] = 0xf;
  _Src[4] = 0;
  *(undefined1 *)_Src = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005861b0 @ 005861b0  kind=gamemisc  attributed-by=caller-vote  size=105 */

void FUN_005861b0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  int in_ECX;
  
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  (**(code **)(in_ECX + 0xc))(uVar3,uVar1);
  return;
}


/* FUN_00586250 @ 00586250  kind=gamemisc  attributed-by=caller-vote  size=230 */

void FUN_00586250(void)

{
  int in_ECX;
  undefined4 extraout_EDX;
  undefined1 uVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1198;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00584240();
  local_8 = 0;
  FUN_00584240();
  ppvVar2 = local_2c;
  local_8._0_1_ = 1;
  FUN_0040c0a0(ppvVar2,0,0xffffffff);
  uVar4 = 0xf;
  uVar3 = 0;
  local_8._0_1_ = 2;
  uVar1 = 0;
  FUN_0040c0a0(local_44,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(in_ECX + 0xc))(uVar1);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,ppvVar2,uVar3,uVar4);
  return;
}


/* FUN_00586340 @ 00586340  kind=gamemisc  attributed-by=caller-vote  size=360 */

void FUN_00586340(undefined4 *param_1)

{
  undefined4 *_Src;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  void **ppvVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_5c [5];
  uint local_48;
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
  puStack_c = &LAB_006f11d8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00584240();
  local_8 = 0;
  FUN_00584240();
  ppvVar4 = local_44;
  local_8._0_1_ = 1;
  FUN_0040c0a0(ppvVar4,0,0xffffffff);
  uVar6 = 0xf;
  uVar5 = 0;
  local_8._0_1_ = 2;
  uVar3 = 0;
  FUN_0040c0a0(local_5c,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  uVar2 = (**(code **)(in_ECX + 0xc))(local_2c,uVar3);
  uVar1 = (undefined4)((ulonglong)uVar2 >> 0x20);
  _Src = (undefined4 *)uVar2;
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  if ((uint)_Src[5] < 0x10) {
    if (_Src[4] + 1 != 0) {
      memmove(param_1,_Src,_Src[4] + 1);
      uVar1 = extraout_EDX;
    }
  }
  else {
    *param_1 = *_Src;
    *_Src = 0;
  }
  param_1[4] = _Src[4];
  param_1[5] = _Src[5];
  _Src[5] = 0xf;
  _Src[4] = 0;
  *(undefined1 *)_Src = 0;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar1,ppvVar4,uVar5,uVar6);
  return;
}


/* FUN_005864c0 @ 005864c0  kind=gamemisc  attributed-by=caller-vote  size=226 */

void FUN_005864c0(void)

{
  int in_ECX;
  undefined4 extraout_EDX;
  undefined1 uVar1;
  void **ppvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  void *local_44 [5];
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f1198;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_00584240();
  local_8 = 0;
  FUN_00584240();
  ppvVar2 = local_2c;
  local_8._0_1_ = 1;
  FUN_0040c0a0(ppvVar2,0,0xffffffff);
  uVar4 = 0xf;
  uVar3 = 0;
  local_8._0_1_ = 2;
  uVar1 = 0;
  FUN_0040c0a0(local_44,0,0xffffffff);
  local_8 = CONCAT31(local_8._1_3_,1);
  (**(code **)(in_ECX + 0xc))(uVar1);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,extraout_EDX,ppvVar2,uVar3,uVar4);
  return;
}


/* FUN_005865b0 @ 005865b0  kind=gamemisc  attributed-by=caller-vote  size=146 */

void FUN_005865b0(int param_1)

{
  undefined4 uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int in_ECX;
  
  uVar1 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar3 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  uVar4 = **(undefined4 **)(*(int *)(param_1 + 0x30) + -0xc);
  if (*(int *)(param_1 + 0x2c) != *(int *)(param_1 + 0x30)) {
    pvVar2 = *(void **)(*(int *)(param_1 + 0x30) + -0xc);
    if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar2);
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -0xc;
  }
  (**(code **)(in_ECX + 0xc))(uVar4,uVar3,uVar1);
  return;
}


/* FUN_00627810 @ 00627810  kind=gamemisc  attributed-by=caller-vote  size=50 */

undefined1 FUN_00627810(float *param_1)

{
  int in_ECX;
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  iVar1 = in_ECX - (int)param_1;
  do {
    if (*(float *)(iVar1 + (int)param_1) != *param_1) {
      return 1;
    }
    iVar2 = iVar2 + 1;
    param_1 = param_1 + 1;
  } while (iVar2 < 2);
  return 0;
}


/* FUN_006278a0 @ 006278a0  kind=gamemisc  attributed-by=caller-vote  size=841 */

void FUN_006278a0(void)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  int *in_ECX;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = *(int *)(in_ECX[0x52] + 0x28);
  if (iVar4 != 0) {
    while (*(int *)(iVar4 + 0x40) == 0) {
      iVar4 = *(int *)(iVar4 + 0x28);
      if (iVar4 == 0) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    FUN_0062b510(&local_10);
    if (0.0 < local_10) {
      local_10 = 0.0;
    }
    fVar2 = local_10;
    pfVar3 = (float *)FUN_0062de60(local_18);
    fVar1 = *pfVar3;
    for (iVar4 = *(int *)(in_ECX[0x52] + 0x28); (iVar4 != 0 && (*(int *)(iVar4 + 0x40) == 0));
        iVar4 = *(int *)(iVar4 + 0x28)) {
    }
    pfVar3 = (float *)FUN_0062de60(local_20);
    if (*pfVar3 <= fVar1 && fVar1 != *pfVar3) {
      pfVar3 = (float *)FUN_0062de60(local_20);
      fVar1 = *pfVar3;
      for (iVar4 = *(int *)(in_ECX[0x52] + 0x28); (iVar4 != 0 && (*(int *)(iVar4 + 0x40) == 0));
          iVar4 = *(int *)(iVar4 + 0x28)) {
      }
      pfVar3 = (float *)FUN_0062de60(local_18);
      if (fVar2 + fVar1 < *pfVar3) {
        FUN_0062b400();
        pfVar3 = (float *)FUN_0062de60(local_20);
        fVar1 = *pfVar3;
        pfVar3 = (float *)FUN_0062de60(local_18);
        local_10 = fVar1 - *pfVar3;
      }
    }
    if (0.0 < local_c) {
      local_c = 0.0;
    }
    fVar2 = local_c;
    iVar4 = FUN_0062de60(local_20);
    fVar1 = *(float *)(iVar4 + 4);
    for (iVar4 = *(int *)(in_ECX[0x52] + 0x28); (iVar4 != 0 && (*(int *)(iVar4 + 0x40) == 0));
        iVar4 = *(int *)(iVar4 + 0x28)) {
    }
    iVar4 = FUN_0062de60(local_18);
    if (*(float *)(iVar4 + 4) <= fVar1 && fVar1 != *(float *)(iVar4 + 4)) {
      iVar4 = FUN_0062de60(local_20);
      fVar1 = *(float *)(iVar4 + 4);
      for (iVar4 = *(int *)(in_ECX[0x52] + 0x28); (iVar4 != 0 && (*(int *)(iVar4 + 0x40) == 0));
          iVar4 = *(int *)(iVar4 + 0x28)) {
      }
      iVar4 = FUN_0062de60(local_18);
      if (fVar2 + fVar1 < *(float *)(iVar4 + 4)) {
        FUN_0062b400();
        iVar4 = FUN_0062de60(local_20);
        fVar1 = *(float *)(iVar4 + 4);
        iVar4 = FUN_0062de60(local_18);
        local_c = fVar1 - *(float *)(iVar4 + 4);
      }
    }
    pfVar3 = (float *)FUN_0062de60(local_20);
    fVar1 = *pfVar3;
    for (iVar4 = *(int *)(in_ECX[0x52] + 0x28); (iVar4 != 0 && (*(int *)(iVar4 + 0x40) == 0));
        iVar4 = *(int *)(iVar4 + 0x28)) {
    }
    pfVar3 = (float *)FUN_0062de60(local_18);
    if (fVar1 < *pfVar3) {
      local_10 = 0.0;
    }
    iVar4 = FUN_0062de60(local_20);
    fVar1 = *(float *)(iVar4 + 4);
    for (iVar4 = *(int *)(in_ECX[0x52] + 0x28); (iVar4 != 0 && (*(int *)(iVar4 + 0x40) == 0));
        iVar4 = *(int *)(iVar4 + 0x28)) {
    }
    iVar4 = FUN_0062de60(local_18);
    if (fVar1 < *(float *)(iVar4 + 4)) {
      local_c = 0.0;
    }
    FUN_006295a0(&local_10,1);
    if (in_ECX[0x50] != 0) {
      FUN_00662860();
    }
    if (in_ECX[0x51] != 0) {
      FUN_00662860();
    }
    (**(code **)(*in_ECX + 0xa8))();
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00627cb0 @ 00627cb0  kind=gamemisc  attributed-by=caller-vote  size=38 */

void FUN_00627cb0(undefined4 param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00468910(&param_1);
  if ((undefined4 *)*piVar1 != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*piVar1)();
  }
  return;
}


/* FUN_00629200 @ 00629200  kind=gamemisc  attributed-by=caller-vote  size=21 */

void FUN_00629200(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x4c);
  *param_1 = *(undefined4 *)(in_ECX + 0x48);
  param_1[1] = uVar1;
  return;
}


/* FUN_00629220 @ 00629220  kind=gamemisc  attributed-by=caller-vote  size=21 */

void FUN_00629220(undefined4 *param_1)

{
  undefined4 uVar1;
  int in_ECX;
  
  uVar1 = *(undefined4 *)(in_ECX + 0x54);
  *param_1 = *(undefined4 *)(in_ECX + 0x50);
  param_1[1] = uVar1;
  return;
}


/* FUN_00629240 @ 00629240  kind=gamemisc  attributed-by=caller-vote  size=58 */

void FUN_00629240(float *param_1)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(in_ECX + 0x48) + *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 0x4c) + *(float *)(in_ECX + 0x6c);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  *param_1 = fVar1 - *(float *)(in_ECX + 0x58);
  param_1[1] = fVar2 - *(float *)(in_ECX + 0x5c);
  return;
}


/* FUN_00629280 @ 00629280  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_00629280(float *param_1)

{
  int in_ECX;
  float fVar1;
  float fVar2;
  
  fVar1 = *(float *)(in_ECX + 0x50) + *(float *)(in_ECX + 0x70);
  fVar2 = *(float *)(in_ECX + 0x54) + *(float *)(in_ECX + 0x74);
  *param_1 = fVar1;
  param_1[1] = fVar2;
  *param_1 = fVar1 - *(float *)(in_ECX + 0x60);
  param_1[1] = fVar2 - *(float *)(in_ECX + 100);
  fVar2 = (*(float *)(in_ECX + 0x50) + *(float *)(in_ECX + 0x78)) - *(float *)(in_ECX + 0x60);
  fVar1 = (*(float *)(in_ECX + 0x54) + *(float *)(in_ECX + 0x7c)) - *(float *)(in_ECX + 100);
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (*param_1 <= fVar2 && fVar2 != *param_1) {
    *param_1 = fVar2;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (param_1[1] <= fVar1 && fVar1 != param_1[1]) {
    param_1[1] = fVar1;
  }
  return;
}


/* FUN_00629300 @ 00629300  kind=gamemisc  attributed-by=caller-vote  size=440 */

void FUN_00629300(int param_1)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int *piVar4;
  int in_ECX;
  undefined1 local_18 [8];
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((((~(byte)(*(uint *)(param_1 + 200) >> 2) & 1) != 0) &&
      (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0x94) +
               *(int *)(*(int *)(param_1 + 0x3c) + 0x68) * 4) != 0)) &&
     ((*(int *)(param_1 + 0x40) == 0 || (*(int *)(param_1 + 0x40) == in_ECX)))) {
    fVar1 = *(float *)(*(int *)(in_ECX + 4) + 0xd8);
    fVar2 = *(float *)(*(int *)(in_ECX + 4) + 0xd4);
    local_c = 1.0 / (*(float *)(param_1 + 0xa4) * fVar1 + *(float *)(param_1 + 0x94) * fVar2 +
                    *(float *)(param_1 + 0xc4));
    local_10 = local_c * (*(float *)(param_1 + 0x98) * fVar1 + *(float *)(param_1 + 0x88) * fVar2 +
                         *(float *)(param_1 + 0xb8));
    local_c = local_c * (*(float *)(param_1 + 0x9c) * fVar1 + *(float *)(param_1 + 0x8c) * fVar2 +
                        *(float *)(param_1 + 0xbc));
    (**(code **)(*(int *)(in_ECX + 0x24) + 4))(local_18,&local_10,param_1);
    if (*(int **)(param_1 + 0x34) != (int *)0x0) {
      cVar3 = (**(code **)(**(int **)(param_1 + 0x34) + 0x10))(local_18);
      if (cVar3 != '\0') goto LAB_0062942d;
    }
    if (*(int **)(param_1 + 0x40) != (int *)0x0) {
      cVar3 = (**(code **)(**(int **)(param_1 + 0x40) + 0x14))(&local_10);
      if (cVar3 != '\0') {
LAB_0062942d:
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    if (*(int *)(*(int *)(*(int *)(param_1 + 0x3c) + 0xec) +
                *(int *)(*(int *)(param_1 + 0x3c) + 0xc0) * 4) == 0) {
      piVar4 = *(int **)(param_1 + 0x2c);
      if (piVar4 != (int *)*piVar4) {
        do {
          cVar3 = FUN_00629300(*(undefined4 *)(piVar4[1] + 8));
          if (cVar3 != '\0') {
            __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
            return;
          }
          piVar4 = (int *)piVar4[1];
        } while (piVar4 != (int *)**(undefined4 **)(param_1 + 0x2c));
      }
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062b430 @ 0062b430  kind=gamemisc  attributed-by=caller-vote  size=216 */

float * FUN_0062b430(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  int in_ECX;
  float fVar7;
  
  iVar6 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28);
  if (iVar6 != 0) {
    fVar1 = *(float *)(*(int *)(in_ECX + 4) + 0xd4);
    fVar2 = *(float *)(*(int *)(in_ECX + 4) + 0xd8);
    fVar3 = *(float *)(iVar6 + 0x8c);
    fVar7 = 1.0 / (*(float *)(iVar6 + 0x94) * fVar1 + *(float *)(iVar6 + 0xa4) * fVar2 +
                  *(float *)(iVar6 + 0xc4));
    fVar4 = *(float *)(iVar6 + 0x9c);
    fVar5 = *(float *)(iVar6 + 0xbc);
    *param_1 = fVar7 * (*(float *)(iVar6 + 0x98) * fVar2 + fVar1 * *(float *)(iVar6 + 0x88) +
                       *(float *)(iVar6 + 0xb8));
    param_1[1] = fVar7 * (fVar3 * fVar1 + fVar4 * fVar2 + fVar5);
    return param_1;
  }
  iVar6 = *(int *)(in_ECX + 4);
  *param_1 = *(float *)(iVar6 + 0xd4);
  param_1[1] = *(float *)(iVar6 + 0xd8);
  return param_1;
}


/* FUN_0062c5b0 @ 0062c5b0  kind=gamemisc  attributed-by=caller-vote  size=2579 */

void FUN_0062c5b0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  float *pfVar8;
  int in_ECX;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined1 local_88 [64];
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_00423e70();
  iVar7 = *(int *)(*(int *)(*(int *)(in_ECX + 4) + 0xb4) + 0x38);
  pfVar8 = (float *)FUN_0062cfd0(local_88);
  fVar1 = pfVar8[1];
  fVar2 = *pfVar8;
  pfVar10 = (float *)(iVar7 + 0x1f0);
  pfVar11 = local_48;
  for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
    *pfVar11 = *pfVar10;
    pfVar10 = pfVar10 + 1;
    pfVar11 = pfVar11 + 1;
  }
  fVar3 = pfVar8[0xd];
  fVar4 = pfVar8[0xf];
  fVar25 = fVar1 * local_38 + fVar2 * local_48[0] + pfVar8[2] * local_28 + pfVar8[3] * local_18;
  fVar2 = pfVar8[4];
  fVar26 = fVar2 * local_48[0] + pfVar8[5] * local_38 + pfVar8[6] * local_28 + pfVar8[7] * local_18;
  fVar5 = pfVar8[8];
  fVar27 = fVar5 * local_48[0] + pfVar8[9] * local_38 + pfVar8[10] * local_28 +
           pfVar8[0xb] * local_18;
  fVar24 = pfVar8[0xc];
  fVar6 = pfVar8[0xe];
  fVar13 = fVar24 * local_48[0] + fVar3 * local_38 + fVar6 * local_28 + fVar4 * local_18;
  fVar14 = fVar1 * local_34 + *pfVar8 * local_48[1] + pfVar8[2] * local_24 + pfVar8[3] * local_14;
  fVar20 = fVar2 * local_48[1] + pfVar8[5] * local_34 + pfVar8[6] * local_24 + pfVar8[7] * local_14;
  fVar21 = fVar5 * local_48[1] + pfVar8[9] * local_34 + pfVar8[10] * local_24 +
           pfVar8[0xb] * local_14;
  fVar15 = fVar24 * local_48[1] + fVar3 * local_34 + fVar6 * local_24 + fVar4 * local_14;
  fVar16 = fVar1 * local_30 + *pfVar8 * local_48[2] + pfVar8[2] * local_20 + pfVar8[3] * local_10;
  fVar22 = fVar2 * local_48[2] + pfVar8[5] * local_30 + pfVar8[6] * local_20 + pfVar8[7] * local_10;
  fVar23 = fVar5 * local_48[2] + pfVar8[9] * local_30 + pfVar8[10] * local_20 +
           pfVar8[0xb] * local_10;
  fVar17 = fVar24 * local_48[2] + fVar3 * local_30 + fVar6 * local_20 + fVar4 * local_10;
  fVar12 = fVar1 * local_2c + *pfVar8 * local_48[3] + pfVar8[2] * local_1c + pfVar8[3] * local_c;
  fVar18 = fVar2 * local_48[3] + pfVar8[5] * local_2c + pfVar8[6] * local_1c + pfVar8[7] * local_c;
  fVar19 = fVar5 * local_48[3] + pfVar8[9] * local_2c + pfVar8[10] * local_1c +
           pfVar8[0xb] * local_c;
  fVar1 = param_1[4];
  fVar2 = param_1[8];
  fVar5 = *param_1;
  fVar24 = fVar24 * local_48[3] + fVar3 * local_2c + fVar6 * local_1c + fVar4 * local_c;
  fVar3 = param_1[0xc];
  *param_1 = fVar14 * fVar1 + fVar25 * fVar5 + fVar16 * fVar2 + fVar12 * fVar3;
  param_1[4] = fVar20 * fVar1 + fVar26 * fVar5 + fVar22 * fVar2 + fVar18 * fVar3;
  param_1[8] = fVar21 * fVar1 + fVar27 * fVar5 + fVar23 * fVar2 + fVar19 * fVar3;
  fVar4 = param_1[0xd];
  param_1[0xc] = fVar15 * fVar1 + fVar13 * fVar5 + fVar17 * fVar2 + fVar24 * fVar3;
  fVar1 = param_1[1];
  fVar2 = param_1[5];
  fVar3 = param_1[9];
  param_1[1] = fVar14 * fVar2 + fVar25 * fVar1 + fVar16 * fVar3 + fVar12 * fVar4;
  param_1[5] = fVar20 * fVar2 + fVar26 * fVar1 + fVar22 * fVar3 + fVar18 * fVar4;
  param_1[9] = fVar21 * fVar2 + fVar27 * fVar1 + fVar23 * fVar3 + fVar19 * fVar4;
  fVar5 = param_1[0xe];
  param_1[0xd] = fVar15 * fVar2 + fVar13 * fVar1 + fVar17 * fVar3 + fVar24 * fVar4;
  fVar1 = param_1[2];
  fVar2 = param_1[6];
  fVar3 = param_1[10];
  param_1[2] = fVar14 * fVar2 + fVar25 * fVar1 + fVar16 * fVar3 + fVar12 * fVar5;
  param_1[6] = fVar20 * fVar2 + fVar26 * fVar1 + fVar22 * fVar3 + fVar18 * fVar5;
  param_1[10] = fVar21 * fVar2 + fVar27 * fVar1 + fVar23 * fVar3 + fVar19 * fVar5;
  fVar4 = param_1[0xf];
  param_1[0xe] = fVar15 * fVar2 + fVar13 * fVar1 + fVar17 * fVar3 + fVar24 * fVar5;
  fVar1 = param_1[3];
  fVar2 = param_1[7];
  fVar3 = param_1[0xb];
  param_1[3] = fVar14 * fVar2 + fVar25 * fVar1 + fVar16 * fVar3 + fVar12 * fVar4;
  param_1[7] = fVar20 * fVar2 + fVar26 * fVar1 + fVar22 * fVar3 + fVar18 * fVar4;
  param_1[0xb] = fVar21 * fVar2 + fVar27 * fVar1 + fVar23 * fVar3 + fVar19 * fVar4;
  param_1[0xf] = fVar15 * fVar2 + fVar13 * fVar1 + fVar17 * fVar3 + fVar24 * fVar4;
  fVar1 = *(float *)(in_ECX + 0x68);
  fVar2 = *(float *)(in_ECX + 0x6c);
  param_1[0xc] = fVar1 * *param_1 + param_1[4] * fVar2 + param_1[0xc];
  param_1[0xd] = param_1[5] * fVar2 + param_1[1] * fVar1 + param_1[0xd];
  param_1[0xe] = param_1[6] * fVar2 + param_1[2] * fVar1 + param_1[0xe];
  param_1[0xf] = fVar2 * param_1[7] + fVar1 * param_1[3] + param_1[0xf];
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062cfd0 @ 0062cfd0  kind=gamemisc  attributed-by=caller-vote  size=2066 */

void FUN_0062cfd0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int in_ECX;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar15 = *(float *)(in_ECX + 0xe8);
  fVar16 = *(float *)(in_ECX + 0xec);
  pfVar13 = (float *)(*(int *)(*(int *)(in_ECX + 0x148) + 0x38) + 0x1b0);
  pfVar14 = local_48;
  for (iVar11 = 0x10; fVar18 = local_20, fVar10 = local_24, fVar9 = local_28, fVar8 = local_30,
      fVar7 = local_34, fVar6 = local_38, fVar5 = local_48[3], fVar4 = local_48[2],
      fVar3 = local_48[1], fVar2 = local_48[0], iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar14 + 1;
  }
  fVar1 = *(float *)(in_ECX + 0x120);
  fVar17 = *(float *)(in_ECX + 0x124);
  local_48[0] = fVar15 * local_48[0] + fVar16 * local_38 + *(float *)(in_ECX + 0xf0) * local_28 +
                *(float *)(in_ECX + 0xf4) * local_18;
  fVar15 = *(float *)(in_ECX + 0x10c) * local_38;
  local_38 = *(float *)(in_ECX + 0xf8) * fVar2 + *(float *)(in_ECX + 0xfc) * local_38 +
             *(float *)(in_ECX + 0x100) * local_28 + *(float *)(in_ECX + 0x104) * local_18;
  local_28 = *(float *)(in_ECX + 0x108) * fVar2 + fVar15 + *(float *)(in_ECX + 0x110) * local_28 +
             *(float *)(in_ECX + 0x114) * local_18;
  local_18 = *(float *)(in_ECX + 0x118) * fVar2 + *(float *)(in_ECX + 0x11c) * fVar6 + fVar1 * fVar9
             + fVar17 * local_18;
  local_48[1] = local_34 * *(float *)(in_ECX + 0xec) + *(float *)(in_ECX + 0xe8) * local_48[1] +
                local_24 * *(float *)(in_ECX + 0xf0) + local_14 * *(float *)(in_ECX + 0xf4);
  fVar15 = *(float *)(in_ECX + 0x10c) * local_34;
  local_34 = local_34 * *(float *)(in_ECX + 0xfc) + *(float *)(in_ECX + 0xf8) * fVar3 +
             local_24 * *(float *)(in_ECX + 0x100) + local_14 * *(float *)(in_ECX + 0x104);
  local_24 = *(float *)(in_ECX + 0x108) * fVar3 + fVar15 + local_24 * *(float *)(in_ECX + 0x110) +
             local_14 * *(float *)(in_ECX + 0x114);
  local_14 = *(float *)(in_ECX + 0x118) * fVar3 + *(float *)(in_ECX + 0x11c) * fVar7 +
             fVar1 * fVar10 + local_14 * fVar17;
  fVar15 = *(float *)(in_ECX + 0xf8) * local_48[2];
  local_48[2] = local_48[2] * *(float *)(in_ECX + 0xe8) + local_30 * *(float *)(in_ECX + 0xec) +
                local_20 * *(float *)(in_ECX + 0xf0) + local_10 * *(float *)(in_ECX + 0xf4);
  fVar16 = *(float *)(in_ECX + 0x10c) * local_30;
  local_30 = local_30 * *(float *)(in_ECX + 0xfc) + fVar15 + local_20 * *(float *)(in_ECX + 0x100) +
             local_10 * *(float *)(in_ECX + 0x104);
  local_20 = *(float *)(in_ECX + 0x108) * fVar4 + fVar16 + local_20 * *(float *)(in_ECX + 0x110) +
             local_10 * *(float *)(in_ECX + 0x114);
  local_10 = *(float *)(in_ECX + 0x118) * fVar4 + *(float *)(in_ECX + 0x11c) * fVar8 +
             fVar1 * fVar18 + local_10 * fVar17;
  fVar15 = *(float *)(in_ECX + 0xf8) * local_48[3];
  local_48[3] = local_48[3] * *(float *)(in_ECX + 0xe8) + local_2c * *(float *)(in_ECX + 0xec) +
                local_1c * *(float *)(in_ECX + 0xf0) + local_c * *(float *)(in_ECX + 0xf4);
  local_2c = local_2c * *(float *)(in_ECX + 0xfc) + fVar15 + local_1c * *(float *)(in_ECX + 0x100) +
             local_c * *(float *)(in_ECX + 0x104);
  local_1c = *(float *)(in_ECX + 0x108) * fVar5 + *(float *)(in_ECX + 0x10c) * local_2c +
             local_1c * *(float *)(in_ECX + 0x110) + local_c * *(float *)(in_ECX + 0x114);
  local_c = *(float *)(in_ECX + 0x118) * fVar5 + *(float *)(in_ECX + 0x11c) * local_2c +
            fVar1 * local_1c + local_c * fVar17;
  pfVar13 = local_48;
  pfVar14 = param_1;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *pfVar14 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    pfVar14 = pfVar14 + 1;
  }
  for (iVar11 = *(int *)(*(int *)(in_ECX + 0x148) + 0x28); iVar11 != 0;
      iVar11 = *(int *)(iVar11 + 0x28)) {
    pfVar13 = (float *)(*(int *)(iVar11 + 0x38) + 0x1b0);
    pfVar14 = local_48;
    for (iVar12 = 0x10; fVar10 = local_20, fVar9 = local_24, fVar8 = local_28, fVar7 = local_2c,
        fVar6 = local_30, fVar5 = local_34, fVar4 = local_38, fVar3 = local_48[3],
        fVar2 = local_48[2], fVar16 = local_48[1], fVar15 = local_48[0], iVar12 != 0;
        iVar12 = iVar12 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
    fVar18 = param_1[0xe];
    fVar1 = param_1[0xf];
    local_48[0] = local_48[0] * *param_1 + local_38 * param_1[1] + local_28 * param_1[2] +
                  local_18 * param_1[3];
    fVar17 = param_1[9] * local_38;
    local_38 = param_1[4] * fVar15 + local_38 * param_1[5] + local_28 * param_1[6] +
               local_18 * param_1[7];
    local_28 = param_1[8] * fVar15 + fVar17 + local_28 * param_1[10] + local_18 * param_1[0xb];
    local_18 = param_1[0xc] * fVar15 + param_1[0xd] * fVar4 + fVar18 * fVar8 + local_18 * fVar1;
    local_48[1] = local_48[1] * *param_1 + local_34 * param_1[1] + local_24 * param_1[2] +
                  local_14 * param_1[3];
    fVar15 = param_1[9] * local_34;
    local_34 = param_1[4] * fVar16 + local_34 * param_1[5] + local_24 * param_1[6] +
               local_14 * param_1[7];
    local_24 = param_1[8] * fVar16 + fVar15 + local_24 * param_1[10] + local_14 * param_1[0xb];
    local_14 = param_1[0xc] * fVar16 + param_1[0xd] * fVar5 + fVar18 * fVar9 + local_14 * fVar1;
    local_48[2] = local_48[2] * *param_1 + local_30 * param_1[1] + local_20 * param_1[2] +
                  local_10 * param_1[3];
    fVar15 = param_1[9] * local_30;
    local_30 = param_1[4] * fVar2 + local_30 * param_1[5] + local_20 * param_1[6] +
               local_10 * param_1[7];
    local_20 = param_1[8] * fVar2 + fVar15 + local_20 * param_1[10] + local_10 * param_1[0xb];
    local_10 = param_1[0xc] * fVar2 + param_1[0xd] * fVar6 + fVar18 * fVar10 + local_10 * fVar1;
    fVar18 = fVar18 * local_1c;
    local_48[3] = local_48[3] * *param_1 + local_2c * param_1[1] + local_1c * param_1[2] +
                  local_c * param_1[3];
    fVar15 = param_1[9] * local_2c;
    local_2c = param_1[4] * fVar3 + local_2c * param_1[5] + local_1c * param_1[6] +
               local_c * param_1[7];
    local_1c = param_1[8] * fVar3 + fVar15 + local_1c * param_1[10] + local_c * param_1[0xb];
    local_c = param_1[0xc] * fVar3 + param_1[0xd] * fVar7 + fVar18 + local_c * fVar1;
    pfVar13 = local_48;
    pfVar14 = param_1;
    for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
      *pfVar14 = *pfVar13;
      pfVar13 = pfVar13 + 1;
      pfVar14 = pfVar14 + 1;
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062dcd0 @ 0062dcd0  kind=gamemisc  attributed-by=caller-vote  size=231 */

void FUN_0062dcd0(float *param_1)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int in_ECX;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar6 = *(float *)(in_ECX + 0x50);
  fVar1 = *(float *)(in_ECX + 0x60);
  fVar2 = *(float *)(in_ECX + 100);
  fVar5 = (fVar6 + *(float *)(in_ECX + 0x78)) - fVar1;
  fVar8 = (fVar6 + *(float *)(in_ECX + 0x70)) - fVar1;
  fVar7 = (*(float *)(in_ECX + 0x54) + *(float *)(in_ECX + 0x74)) - fVar2;
  fVar4 = (*(float *)(in_ECX + 0x54) + *(float *)(in_ECX + 0x7c)) - fVar2;
  if (fVar5 < 0.0) {
    fVar5 = 0.0;
  }
  if (fVar8 < fVar5) {
    fVar8 = fVar5;
  }
  if (fVar4 < 0.0) {
    fVar4 = 0.0;
  }
  if (fVar7 < fVar4) {
    fVar7 = fVar4;
  }
  fVar6 = (fVar1 + fVar8) - fVar6;
  fVar7 = (fVar2 + fVar7) - *(float *)(in_ECX + 0x54);
  pfVar3 = (float *)FUN_0062d7f0(local_48);
  fVar1 = pfVar3[4];
  fVar2 = *pfVar3;
  param_1[1] = pfVar3[1] * fVar6 + pfVar3[5] * fVar7;
  *param_1 = fVar1 * fVar7 + fVar2 * fVar6;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062ddf0 @ 0062ddf0  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_0062ddf0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x140) = param_1;
  FUN_00662fb0();
  return;
}


/* FUN_0062de10 @ 0062de10  kind=gamemisc  attributed-by=caller-vote  size=13 */

void FUN_0062de10(undefined1 param_1)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x2d) = param_1;
  return;
}


/* FUN_0062de40 @ 0062de40  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_0062de40(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x144) = param_1;
  FUN_00662fb0();
  return;
}


/* FUN_0062f2d0 @ 0062f2d0  kind=gamemisc  attributed-by=caller-vote  size=757 */

void FUN_0062f2d0(void)

{
  float fVar1;
  float fVar2;
  char cVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  int in_ECX;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined1 local_90 [64];
  undefined1 local_50 [64];
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if ((*(uint *)(in_ECX + 0x128) >> 6 & 1) == 0) {
    if (*(int *)(in_ECX + 0x3c) != 0) {
      FUN_006504c0(*(int *)(in_ECX + 0x3c));
      *(undefined4 *)(in_ECX + 0x3c) = 0;
    }
  }
  else {
    if (*(int *)(in_ECX + 0x3c) == 0) {
      iVar4 = (**(code **)(**(int **)(in_ECX + 4) + 0x34))(0);
      *(int *)(in_ECX + 0x3c) = iVar4;
      *(undefined1 *)(iVar4 + 4) = 0;
      *(undefined1 *)(in_ECX + 0x134) = 1;
      if (*(int *)(in_ECX + 0x3c) == 0) goto LAB_0062f5b6;
    }
    pfVar5 = (float *)FUN_0062d7f0(local_50);
    iVar4 = 0;
    fVar7 = 1.0 / (pfVar5[7] * 0.0 + pfVar5[3] * 0.0 + pfVar5[0xf]);
    fVar10 = (pfVar5[4] * 0.0 + *pfVar5 * 0.0 + pfVar5[0xc]) * fVar7;
    pfVar6 = (float *)(in_ECX + 0x40);
    fVar7 = (pfVar5[5] * 0.0 + pfVar5[1] * 0.0 + pfVar5[0xd]) * fVar7;
    local_10[0] = fVar10;
    local_10[1] = fVar7;
    do {
      if (local_10[iVar4] != *pfVar6) {
        FUN_0062d7f0(local_50);
        *(float *)(in_ECX + 0x40) = fVar10;
        *(float *)(in_ECX + 0x44) = fVar7;
        break;
      }
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 1;
    } while (iVar4 < 2);
    fVar7 = *(float *)(in_ECX + 0x50);
    fVar10 = *(float *)(in_ECX + 0x54);
    fVar12 = *(float *)(in_ECX + 100);
    fVar9 = (*(float *)(in_ECX + 0x78) + fVar7) - *(float *)(in_ECX + 0x60);
    fVar11 = (*(float *)(in_ECX + 0x70) + fVar7) - *(float *)(in_ECX + 0x60);
    fVar13 = (*(float *)(in_ECX + 0x74) + fVar10) - fVar12;
    fVar8 = (*(float *)(in_ECX + 0x7c) + fVar10) - fVar12;
    if (fVar9 < 0.0) {
      fVar9 = 0.0;
    }
    if (fVar11 < fVar9) {
      fVar11 = fVar9;
    }
    if (fVar8 < 0.0) {
      fVar8 = 0.0;
    }
    if (fVar13 < fVar8) {
      fVar13 = fVar8;
    }
    fVar8 = *(float *)(in_ECX + 0x60);
    iVar4 = FUN_0062d7f0(local_50);
    fVar9 = *(float *)(in_ECX + 0x50);
    fVar1 = *(float *)(in_ECX + 0x60);
    fVar2 = *(float *)(in_ECX + 0x54);
    local_10[1] = *(float *)(iVar4 + 4) * ((fVar11 + fVar8) - fVar7) +
                  *(float *)(iVar4 + 0x14) * ((fVar12 + fVar13) - fVar10);
    fVar11 = (*(float *)(in_ECX + 0x78) + fVar9) - fVar1;
    fVar12 = (*(float *)(in_ECX + 0x7c) + fVar2) - *(float *)(in_ECX + 100);
    fVar10 = (*(float *)(in_ECX + 0x70) + fVar9) - fVar1;
    fVar7 = (*(float *)(in_ECX + 0x74) + fVar2) - *(float *)(in_ECX + 100);
    if (fVar11 < 0.0) {
      fVar11 = 0.0;
    }
    if (fVar10 < fVar11) {
      fVar10 = fVar11;
    }
    if (fVar12 < 0.0) {
      fVar12 = 0.0;
    }
    if (fVar7 < fVar12) {
      fVar7 = fVar12;
    }
    fVar12 = *(float *)(in_ECX + 100);
    pfVar6 = (float *)FUN_0062d7f0(local_90);
    cVar3 = (**(code **)(**(int **)(in_ECX + 0x3c) + 4))
                      ((int)(pfVar6[4] * ((fVar7 + fVar12) - fVar2) +
                             *pfVar6 * ((fVar10 + fVar1) - fVar9) + 0.5),(int)(local_10[1] + 0.5));
    if (cVar3 != '\0') {
      *(undefined1 *)(in_ECX + 0x134) = 1;
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
LAB_0062f5b6:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0062f5d0 @ 0062f5d0  kind=gamemisc  attributed-by=caller-vote  size=34 */

void FUN_0062f5d0(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined4 in_EDX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 unaff_ESI;
  undefined8 uVar5;
  undefined1 *puVar6;
  float fVar7;
  int iVar8;
  undefined1 auStack_28 [8];
  float afStack_20 [2];
  undefined1 auStack_18 [8];
  undefined1 auStack_10 [4];
  float fStack_c;
  uint uStack_8;
  
  if (*(int *)(in_ECX + 0x140) != 0) {
    uStack_8 = 0x62f5e2;
    FUN_00662860();
    in_EDX = extraout_EDX;
  }
  iVar2 = *(int *)(in_ECX + 0x144);
  if (iVar2 == 0) {
    return;
  }
  uStack_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar8 = iVar2;
  if (*(int *)(iVar2 + 0x24c) != 0) {
    uVar5 = FUN_0062b400();
    in_EDX = (undefined4)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      uVar5 = FUN_0062b400();
      in_EDX = (undefined4)((ulonglong)uVar5 >> 0x20);
      if ((int)uVar5 != 0) {
        uVar1 = (uint)(*(int *)(iVar2 + 0x238) != 1);
        iVar2 = FUN_0062de60(auStack_10);
        puVar6 = auStack_18;
        FUN_0062b400(puVar6,unaff_ESI);
        iVar3 = FUN_0062de60(puVar6);
        fStack_c = *(float *)(iVar2 + uVar1 * 4) / *(float *)(iVar3 + uVar1 * 4);
        if (fStack_c < 1.0) {
          fStack_c = 1.0;
        }
        FUN_0062de60(afStack_20);
        puVar6 = auStack_18;
        FUN_0062b400(puVar6,unaff_ESI);
        iVar2 = FUN_0062de60(puVar6);
        afStack_20[uVar1] = *(float *)(iVar2 + uVar1 * 4) / fStack_c;
        FUN_0062bb90(afStack_20,1);
        iVar2 = FUN_0062de60(auStack_18);
        puVar6 = auStack_10;
        FUN_0062b400(puVar6);
        iVar3 = FUN_0062de60(puVar6);
        if (*(float *)(iVar3 + uVar1 * 4) < *(float *)(iVar2 + uVar1 * 4)) {
          iVar2 = FUN_0062b510(auStack_18);
          iVar3 = FUN_0062de60(auStack_10);
          puVar6 = auStack_28;
          FUN_0062b400(puVar6);
          iVar4 = FUN_0062de60(puVar6);
          fVar7 = -(*(float *)(iVar2 + uVar1 * 4) /
                   (*(float *)(iVar3 + uVar1 * 4) - *(float *)(iVar4 + uVar1 * 4)));
        }
        else {
          fVar7 = 0.0;
        }
        FUN_00662f00(fVar7);
        in_EDX = extraout_EDX_00;
      }
    }
  }
  __security_check_cookie(uStack_8 ^ (uint)&stack0xfffffffc,in_EDX,iVar8);
  return;
}


/* FUN_0062f720 @ 0062f720  kind=gamemisc  attributed-by=caller-vote  size=39 */

void FUN_0062f720(int param_1)

{
  int *in_ECX;
  int *piVar1;
  int iVar2;
  
  iVar2 = 2;
  piVar1 = in_ECX;
  do {
    *piVar1 = (int)*(float *)((param_1 - (int)in_ECX) + (int)piVar1);
    iVar2 = iVar2 + -1;
    piVar1 = piVar1 + 1;
  } while (iVar2 != 0);
  return;
}


/* FUN_00630970 @ 00630970  kind=gamemisc  attributed-by=caller-vote  size=103 */

int FUN_00630970(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  if (in_ECX[3] != 0) {
    iVar2 = (in_ECX[1] - iVar1) / 0xc;
    return iVar1 + ((param_1 + iVar2) % iVar2) * 0xc;
  }
  if (param_1 < 0) {
    param_1 = 0;
  }
  iVar2 = (in_ECX[1] - iVar1) / 0xc;
  if (iVar2 <= param_1) {
    param_1 = iVar2 + -1;
  }
  return iVar1 + param_1 * 0xc;
}


/* FUN_00631520 @ 00631520  kind=gamemisc  attributed-by=caller-vote  size=2184 */

void FUN_00631520(float *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_48 [4];
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x38);
  pfVar8 = (float *)(iVar1 + 0x1b0);
  local_74 = 0.0;
  local_70 = 0.0;
  bVar2 = true;
  if (*(int **)(in_ECX + 0x34) == (int *)0x0) {
    if ((*(int **)(in_ECX + 0x40) == (int *)0x0) ||
       (cVar3 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x10))(), cVar3 == '\0')) {
      if ((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0xec) +
                   *(int *)(*(int *)(in_ECX + 0x3c) + 0xc0) * 4) != 0) ||
         (*(int *)(in_ECX + 0x30) == 0)) {
        fVar14 = *(float *)(iVar1 + 0x1c4);
        fVar10 = *(float *)(iVar1 + 0x1b4);
        fVar17 = 1.0 / (*(float *)(iVar1 + 0x1cc) * 0.0 + *(float *)(iVar1 + 0x1bc) * 0.0 +
                       *(float *)(iVar1 + 0x1ec));
        fVar9 = *(float *)(iVar1 + 0x1e4);
        *param_1 = fVar17 * (*(float *)(iVar1 + 0x1c0) * 0.0 + *pfVar8 * 0.0 +
                            *(float *)(iVar1 + 0x1e0));
        param_1[1] = fVar17 * (fVar14 * 0.0 + fVar10 * 0.0 + fVar9);
        goto LAB_00631d9b;
      }
    }
    else {
      pfVar5 = (float *)(**(code **)(**(int **)(in_ECX + 0x40) + 0xc))(&local_30);
      fVar14 = pfVar5[1];
      fVar10 = *pfVar5;
      local_70 = 1.0 / (*(float *)(iVar1 + 0x1bc) * fVar10 + *(float *)(iVar1 + 0x1cc) * fVar14 +
                       *(float *)(iVar1 + 0x1ec));
      local_74 = (*(float *)(iVar1 + 0x1c0) * fVar14 + *pfVar8 * fVar10 + *(float *)(iVar1 + 0x1e0))
                 * local_70;
      bVar2 = false;
      local_70 = (*(float *)(iVar1 + 0x1b4) * fVar10 + *(float *)(iVar1 + 0x1c4) * fVar14 +
                 *(float *)(iVar1 + 0x1e4)) * local_70;
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))(&local_10);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))(&local_18);
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar4 = (undefined8 *)
               (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x24))(&local_30,&local_10);
      local_10 = *puVar4;
      pfVar5 = (float *)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x24))
                                  (&local_30,&local_18);
      local_18 = *pfVar5;
      local_14 = pfVar5[1];
    }
    iVar6 = *(int *)(in_ECX + 0x3c);
    fVar14 = (float)local_10;
    fVar10 = local_10._4_4_;
    local_7c = local_14;
    local_78 = local_18;
    if (((*(byte *)(iVar6 + 0x200) & 1) != 0) &&
       (fVar9 = *(float *)(*(int *)(iVar6 + 500) + *(int *)(iVar6 + 0x1c8) * 4), 0.0 < fVar9)) {
      local_78 = local_18 + fVar9;
      local_7c = local_14 + fVar9;
      fVar14 = (float)local_10 - fVar9;
      fVar10 = local_10._4_4_ - fVar9;
    }
    fVar12 = *(float *)(iVar1 + 0x1cc) * fVar10;
    fVar9 = *(float *)(iVar1 + 0x1c0) * fVar10;
    fVar17 = *(float *)(iVar1 + 0x1bc) * fVar14;
    fVar15 = *(float *)(iVar1 + 0x1b4) * fVar14;
    fVar10 = *(float *)(iVar1 + 0x1c4) * fVar10;
    local_70 = 1.0 / (fVar12 + fVar17 + *(float *)(iVar1 + 0x1ec));
    bVar2 = false;
    local_74 = local_70 * (*pfVar8 * fVar14 + fVar9 + *(float *)(iVar1 + 0x1e0));
    local_70 = local_70 * (fVar10 + fVar15 + *(float *)(iVar1 + 0x1e4));
    fVar11 = *(float *)(iVar1 + 0x1cc) * local_7c;
    fVar13 = *(float *)(iVar1 + 0x1c0) * local_7c;
    local_7c = *(float *)(iVar1 + 0x1c4) * local_7c;
    fVar17 = 1.0 / (fVar17 + fVar11 + *(float *)(iVar1 + 0x1ec));
    fVar14 = fVar17 * (*pfVar8 * fVar14 + fVar13 + *(float *)(iVar1 + 0x1e0));
    fVar17 = fVar17 * (fVar15 + local_7c + *(float *)(iVar1 + 0x1e4));
    if (local_74 < fVar14) {
      local_74 = fVar14;
    }
    if (local_70 < fVar17) {
      local_70 = fVar17;
    }
    fVar15 = *(float *)(iVar1 + 0x1bc) * local_78;
    fVar17 = *(float *)(iVar1 + 0x1b4) * local_78;
    fVar14 = 1.0 / (fVar15 + fVar11 + *(float *)(iVar1 + 0x1ec));
    fVar11 = fVar14 * (fVar17 + local_7c + *(float *)(iVar1 + 0x1e4));
    fVar14 = fVar14 * (*pfVar8 * local_78 + fVar13 + *(float *)(iVar1 + 0x1e0));
    if (local_74 < fVar14) {
      local_74 = fVar14;
    }
    if (local_70 < fVar11) {
      local_70 = fVar11;
    }
    fVar11 = 1.0 / (fVar12 + fVar15 + *(float *)(iVar1 + 0x1ec));
    fVar14 = fVar11 * (fVar9 + *pfVar8 * local_78 + *(float *)(iVar1 + 0x1e0));
    fVar11 = fVar11 * (fVar10 + fVar17 + *(float *)(iVar1 + 0x1e4));
    if (local_74 < fVar14) {
      local_74 = fVar14;
    }
    if (local_70 < fVar11) {
      local_70 = fVar11;
    }
  }
  fVar14 = local_74;
  fVar10 = local_70;
  if (((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0xec) +
                *(int *)(*(int *)(in_ECX + 0x3c) + 0xc0) * 4) == 0) && ((param_2 & 8) == 0)) &&
     (piVar7 = (int *)**(int **)(in_ECX + 0x2c), piVar7 != *(int **)(in_ECX + 0x2c))) {
    do {
      iVar6 = piVar7[2];
      if (((((~(byte)(*(uint *)(iVar6 + 200) >> 2) & 1) != 0) &&
           (((param_2 & 2) != 0 ||
            (*(int *)(*(int *)(*(int *)(iVar6 + 0x3c) + 0x94) +
                     *(int *)(*(int *)(iVar6 + 0x3c) + 0x68) * 4) != 0)))) &&
          (((param_2 & 4) == 0 || ((~(byte)(*(uint *)(iVar6 + 200) >> 1) & 1) != 0)))) &&
         (((param_2 & 1) == 0 || (*(int *)(iVar6 + 0x40) == 0)))) {
        FUN_00631db0(local_48 + 2,param_2);
        FUN_00631520(local_48,param_2);
        iVar6 = 0;
        do {
          if (*(float *)((int)local_48 + iVar6 + 8) != *(float *)((int)local_48 + iVar6)) {
            fVar14 = *(float *)(iVar1 + 0x1bc) * local_48[2];
            fVar11 = *(float *)(iVar1 + 0x1cc) * local_48[3];
            fVar10 = *pfVar8 * local_48[2];
            fVar12 = *(float *)(iVar1 + 0x1c0) * local_48[3];
            local_14 = *(float *)(iVar1 + 0x1b4) * local_48[2];
            fVar13 = *(float *)(iVar1 + 0x1c4) * local_48[3];
            fVar9 = 1.0 / (fVar14 + fVar11 + *(float *)(iVar1 + 0x1ec));
            fVar17 = (fVar10 + fVar12 + *(float *)(iVar1 + 0x1e0)) * fVar9;
            fVar9 = (local_14 + fVar13 + *(float *)(iVar1 + 0x1e4)) * fVar9;
            if (bVar2) {
              bVar2 = false;
              local_74 = fVar17;
LAB_00631b07:
              local_70 = fVar9;
            }
            else {
              if (local_74 < fVar17) {
                local_74 = fVar17;
              }
              if (local_70 < fVar9) goto LAB_00631b07;
            }
            fVar9 = *(float *)(iVar1 + 0x1bc) * local_48[0];
            fVar16 = *(float *)(iVar1 + 0x1b4) * local_48[0];
            fVar17 = *pfVar8 * local_48[0];
            fVar15 = 1.0 / (fVar9 + fVar11 + *(float *)(iVar1 + 0x1ec));
            fVar11 = (fVar17 + fVar12 + *(float *)(iVar1 + 0x1e0)) * fVar15;
            fVar15 = (fVar16 + fVar13 + *(float *)(iVar1 + 0x1e4)) * fVar15;
            _local_28 = CONCAT44(fVar15,fVar11);
            if (local_74 < fVar11) {
              local_74 = fVar11;
            }
            if (local_70 < fVar15) {
              local_70 = fVar15;
            }
            fVar15 = *(float *)(iVar1 + 0x1c0) * local_48[1];
            fVar13 = *(float *)(iVar1 + 0x1cc) * local_48[1];
            fVar11 = *(float *)(iVar1 + 0x1c4) * local_48[1];
            fVar12 = 1.0 / (fVar13 + fVar9 + *(float *)(iVar1 + 0x1ec));
            fVar9 = (fVar15 + fVar17 + *(float *)(iVar1 + 0x1e0)) * fVar12;
            fVar12 = (fVar16 + fVar11 + *(float *)(iVar1 + 0x1e4)) * fVar12;
            _local_20 = CONCAT44(fVar12,fVar9);
            if (local_74 < fVar9) {
              local_74 = fVar9;
            }
            if (local_70 < fVar12) {
              local_70 = fVar12;
            }
            fStack_2c = local_14 + fVar11 + *(float *)(iVar1 + 0x1e4);
            local_30 = fVar15 + fVar10 + *(float *)(iVar1 + 0x1e0);
            fVar9 = 1.0 / (fVar13 + fVar14 + *(float *)(iVar1 + 0x1ec));
            fVar14 = local_30 * fVar9;
            fVar9 = fStack_2c * fVar9;
            local_38 = CONCAT44(fVar9,fVar14);
            local_10 = local_38;
            if (local_74 < fVar14) {
              local_74 = fVar14;
            }
            fVar14 = local_74;
            fVar10 = local_70;
            if (local_70 < fVar9) {
              fVar10 = fVar9;
              local_70 = fVar9;
            }
            break;
          }
          iVar6 = iVar6 + 4;
          fVar14 = local_74;
          fVar10 = local_70;
        } while (iVar6 < 8);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(in_ECX + 0x2c));
  }
  *param_1 = fVar14;
  param_1[1] = fVar10;
LAB_00631d9b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00631db0 @ 00631db0  kind=gamemisc  attributed-by=caller-vote  size=2184 */

void FUN_00631db0(float *param_1,uint param_2)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  undefined8 *puVar4;
  float *pfVar5;
  int in_ECX;
  int iVar6;
  int *piVar7;
  float *pfVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_48 [4];
  undefined8 local_38;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  float local_18;
  float local_14;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = *(int *)(in_ECX + 0x38);
  pfVar8 = (float *)(iVar1 + 0x1b0);
  local_74 = 0.0;
  local_70 = 0.0;
  bVar2 = true;
  if (*(int **)(in_ECX + 0x34) == (int *)0x0) {
    if ((*(int **)(in_ECX + 0x40) == (int *)0x0) ||
       (cVar3 = (**(code **)(**(int **)(in_ECX + 0x40) + 0x10))(), cVar3 == '\0')) {
      if ((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0xec) +
                   *(int *)(*(int *)(in_ECX + 0x3c) + 0xc0) * 4) != 0) ||
         (*(int *)(in_ECX + 0x30) == 0)) {
        fVar14 = *(float *)(iVar1 + 0x1c4);
        fVar10 = *(float *)(iVar1 + 0x1b4);
        fVar17 = 1.0 / (*(float *)(iVar1 + 0x1cc) * 0.0 + *(float *)(iVar1 + 0x1bc) * 0.0 +
                       *(float *)(iVar1 + 0x1ec));
        fVar9 = *(float *)(iVar1 + 0x1e4);
        *param_1 = fVar17 * (*(float *)(iVar1 + 0x1c0) * 0.0 + *pfVar8 * 0.0 +
                            *(float *)(iVar1 + 0x1e0));
        param_1[1] = fVar17 * (fVar14 * 0.0 + fVar10 * 0.0 + fVar9);
        goto LAB_0063262b;
      }
    }
    else {
      pfVar5 = (float *)(**(code **)(**(int **)(in_ECX + 0x40) + 8))(&local_30);
      fVar14 = pfVar5[1];
      fVar10 = *pfVar5;
      local_70 = 1.0 / (*(float *)(iVar1 + 0x1bc) * fVar10 + *(float *)(iVar1 + 0x1cc) * fVar14 +
                       *(float *)(iVar1 + 0x1ec));
      local_74 = (*(float *)(iVar1 + 0x1c0) * fVar14 + *pfVar8 * fVar10 + *(float *)(iVar1 + 0x1e0))
                 * local_70;
      bVar2 = false;
      local_70 = (*(float *)(iVar1 + 0x1b4) * fVar10 + *(float *)(iVar1 + 0x1c4) * fVar14 +
                 *(float *)(iVar1 + 0x1e4)) * local_70;
    }
  }
  else {
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))(&local_10);
    (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))(&local_18);
    if (*(int *)(in_ECX + 0x44) != 0) {
      puVar4 = (undefined8 *)
               (*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x24))(&local_30,&local_10);
      local_10 = *puVar4;
      pfVar5 = (float *)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x24))
                                  (&local_30,&local_18);
      local_18 = *pfVar5;
      local_14 = pfVar5[1];
    }
    iVar6 = *(int *)(in_ECX + 0x3c);
    fVar14 = (float)local_10;
    fVar10 = local_10._4_4_;
    local_7c = local_14;
    local_78 = local_18;
    if (((*(byte *)(iVar6 + 0x200) & 1) != 0) &&
       (fVar9 = *(float *)(*(int *)(iVar6 + 500) + *(int *)(iVar6 + 0x1c8) * 4), 0.0 < fVar9)) {
      local_78 = local_18 + fVar9;
      local_7c = local_14 + fVar9;
      fVar14 = (float)local_10 - fVar9;
      fVar10 = local_10._4_4_ - fVar9;
    }
    fVar12 = *(float *)(iVar1 + 0x1cc) * fVar10;
    fVar9 = *(float *)(iVar1 + 0x1c0) * fVar10;
    fVar17 = *(float *)(iVar1 + 0x1bc) * fVar14;
    fVar15 = *(float *)(iVar1 + 0x1b4) * fVar14;
    fVar10 = *(float *)(iVar1 + 0x1c4) * fVar10;
    local_70 = 1.0 / (fVar12 + fVar17 + *(float *)(iVar1 + 0x1ec));
    bVar2 = false;
    local_74 = local_70 * (*pfVar8 * fVar14 + fVar9 + *(float *)(iVar1 + 0x1e0));
    local_70 = local_70 * (fVar10 + fVar15 + *(float *)(iVar1 + 0x1e4));
    fVar11 = *(float *)(iVar1 + 0x1cc) * local_7c;
    fVar13 = *(float *)(iVar1 + 0x1c0) * local_7c;
    local_7c = *(float *)(iVar1 + 0x1c4) * local_7c;
    fVar17 = 1.0 / (fVar17 + fVar11 + *(float *)(iVar1 + 0x1ec));
    fVar14 = fVar17 * (*pfVar8 * fVar14 + fVar13 + *(float *)(iVar1 + 0x1e0));
    fVar17 = fVar17 * (fVar15 + local_7c + *(float *)(iVar1 + 0x1e4));
    if (fVar14 < local_74) {
      local_74 = fVar14;
    }
    if (fVar17 < local_70) {
      local_70 = fVar17;
    }
    fVar15 = *(float *)(iVar1 + 0x1bc) * local_78;
    fVar17 = *(float *)(iVar1 + 0x1b4) * local_78;
    fVar14 = 1.0 / (fVar15 + fVar11 + *(float *)(iVar1 + 0x1ec));
    fVar11 = fVar14 * (fVar17 + local_7c + *(float *)(iVar1 + 0x1e4));
    fVar14 = fVar14 * (*pfVar8 * local_78 + fVar13 + *(float *)(iVar1 + 0x1e0));
    if (fVar14 < local_74) {
      local_74 = fVar14;
    }
    if (fVar11 < local_70) {
      local_70 = fVar11;
    }
    fVar11 = 1.0 / (fVar12 + fVar15 + *(float *)(iVar1 + 0x1ec));
    fVar14 = fVar11 * (fVar9 + *pfVar8 * local_78 + *(float *)(iVar1 + 0x1e0));
    fVar11 = fVar11 * (fVar10 + fVar17 + *(float *)(iVar1 + 0x1e4));
    if (fVar14 < local_74) {
      local_74 = fVar14;
    }
    if (fVar11 < local_70) {
      local_70 = fVar11;
    }
  }
  fVar14 = local_74;
  fVar10 = local_70;
  if (((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0xec) +
                *(int *)(*(int *)(in_ECX + 0x3c) + 0xc0) * 4) == 0) && ((param_2 & 8) == 0)) &&
     (piVar7 = (int *)**(int **)(in_ECX + 0x2c), piVar7 != *(int **)(in_ECX + 0x2c))) {
    do {
      iVar6 = piVar7[2];
      if (((((~(byte)(*(uint *)(iVar6 + 200) >> 2) & 1) != 0) &&
           (((param_2 & 2) != 0 ||
            (*(int *)(*(int *)(*(int *)(iVar6 + 0x3c) + 0x94) +
                     *(int *)(*(int *)(iVar6 + 0x3c) + 0x68) * 4) != 0)))) &&
          (((param_2 & 4) == 0 || ((~(byte)(*(uint *)(iVar6 + 200) >> 1) & 1) != 0)))) &&
         (((param_2 & 1) == 0 || (*(int *)(iVar6 + 0x40) == 0)))) {
        FUN_00631db0(local_48 + 2,param_2);
        FUN_00631520(local_48,param_2);
        iVar6 = 0;
        do {
          if (*(float *)((int)local_48 + iVar6 + 8) != *(float *)((int)local_48 + iVar6)) {
            fVar14 = *(float *)(iVar1 + 0x1bc) * local_48[2];
            fVar11 = *(float *)(iVar1 + 0x1cc) * local_48[3];
            fVar10 = *pfVar8 * local_48[2];
            fVar12 = *(float *)(iVar1 + 0x1c0) * local_48[3];
            local_14 = *(float *)(iVar1 + 0x1b4) * local_48[2];
            fVar13 = *(float *)(iVar1 + 0x1c4) * local_48[3];
            fVar9 = 1.0 / (fVar14 + fVar11 + *(float *)(iVar1 + 0x1ec));
            fVar17 = (fVar10 + fVar12 + *(float *)(iVar1 + 0x1e0)) * fVar9;
            fVar9 = (local_14 + fVar13 + *(float *)(iVar1 + 0x1e4)) * fVar9;
            if (bVar2) {
              bVar2 = false;
              local_74 = fVar17;
LAB_00632397:
              local_70 = fVar9;
            }
            else {
              if (fVar17 < local_74) {
                local_74 = fVar17;
              }
              if (fVar9 < local_70) goto LAB_00632397;
            }
            fVar9 = *(float *)(iVar1 + 0x1bc) * local_48[0];
            fVar16 = *(float *)(iVar1 + 0x1b4) * local_48[0];
            fVar17 = *pfVar8 * local_48[0];
            fVar15 = 1.0 / (fVar9 + fVar11 + *(float *)(iVar1 + 0x1ec));
            fVar11 = (fVar17 + fVar12 + *(float *)(iVar1 + 0x1e0)) * fVar15;
            fVar15 = (fVar16 + fVar13 + *(float *)(iVar1 + 0x1e4)) * fVar15;
            _local_28 = CONCAT44(fVar15,fVar11);
            if (fVar11 < local_74) {
              local_74 = fVar11;
            }
            if (fVar15 < local_70) {
              local_70 = fVar15;
            }
            fVar15 = *(float *)(iVar1 + 0x1c0) * local_48[1];
            fVar13 = *(float *)(iVar1 + 0x1cc) * local_48[1];
            fVar11 = *(float *)(iVar1 + 0x1c4) * local_48[1];
            fVar12 = 1.0 / (fVar13 + fVar9 + *(float *)(iVar1 + 0x1ec));
            fVar9 = (fVar15 + fVar17 + *(float *)(iVar1 + 0x1e0)) * fVar12;
            fVar12 = (fVar16 + fVar11 + *(float *)(iVar1 + 0x1e4)) * fVar12;
            _local_20 = CONCAT44(fVar12,fVar9);
            if (fVar9 < local_74) {
              local_74 = fVar9;
            }
            if (fVar12 < local_70) {
              local_70 = fVar12;
            }
            fStack_2c = local_14 + fVar11 + *(float *)(iVar1 + 0x1e4);
            local_30 = fVar15 + fVar10 + *(float *)(iVar1 + 0x1e0);
            fVar9 = 1.0 / (fVar13 + fVar14 + *(float *)(iVar1 + 0x1ec));
            fVar14 = local_30 * fVar9;
            fVar9 = fStack_2c * fVar9;
            local_38 = CONCAT44(fVar9,fVar14);
            local_10 = local_38;
            if (fVar14 < local_74) {
              local_74 = fVar14;
            }
            fVar14 = local_74;
            fVar10 = local_70;
            if (fVar9 < local_70) {
              fVar10 = fVar9;
              local_70 = fVar9;
            }
            break;
          }
          iVar6 = iVar6 + 4;
          fVar14 = local_74;
          fVar10 = local_70;
        } while (iVar6 < 8);
      }
      piVar7 = (int *)*piVar7;
    } while (piVar7 != (int *)*(int *)(in_ECX + 0x2c));
  }
  *param_1 = fVar14;
  param_1[1] = fVar10;
LAB_0063262b:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006326a0 @ 006326a0  kind=gamemisc  attributed-by=caller-vote  size=39 */

undefined4 FUN_006326a0(int param_1)

{
  int in_ECX;
  
  if (param_1 == 0) {
    return 0;
  }
  do {
    if (in_ECX == param_1) {
      return 1;
    }
    param_1 = *(int *)(param_1 + 0x28);
  } while (param_1 != 0);
  return 0;
}


/* FUN_00632910 @ 00632910  kind=gamemisc  attributed-by=caller-vote  size=4045 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00632910(uint param_1)

{
  int ****ppppiVar1;
  int ***pppiVar2;
  bool bVar3;
  bool bVar4;
  char cVar5;
  int *****pppppiVar6;
  float *pfVar7;
  int *piVar8;
  int ****ppppiVar9;
  uint uVar10;
  int ******in_ECX;
  int iVar11;
  float unaff_ESI;
  int ******ppppppiVar12;
  undefined4 unaff_EDI;
  int iVar13;
  double dVar14;
  undefined1 auVar15 [16];
  int *******pppppppiStack_12c;
  int ******ppppppiStack_128;
  int *******pppppppiStack_124;
  int *****pppppiStack_120;
  int ******ppppppiStack_11c;
  char cVar16;
  char cVar17;
  float fVar18;
  undefined1 auStack_10c [3];
  char cStack_109;
  int *****pppppiStack_108;
  int *****pppppiStack_100;
  int iStack_fc;
  float fStack_f8;
  int *piStack_f4;
  int ******ppppppiStack_f0;
  int ****ppppiStack_ec;
  int *****pppppiStack_e8;
  int ******ppppppiStack_e4;
  int ******ppppppiStack_e0;
  int *piStack_dc;
  int *****pppppiStack_d8;
  int *****pppppiStack_d4;
  int *piStack_d0;
  int iStack_cc;
  int ******ppppppiStack_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  int ******ppppppiStack_b8;
  float fStack_b4;
  int *******pppppppiStack_b0;
  float fStack_ac;
  int ******ppppppiStack_a8;
  float fStack_a4;
  int ******local_a0;
  int *****pppppiStack_9c;
  float fStack_98;
  int ******ppppppiStack_94;
  float fStack_90;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_58;
  float afStack_54 [3];
  float fStack_48;
  float fStack_44;
  uint uStack_2c;
  uint uStack_18;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_10c;
  if ((in_ECX[0xf][0x25][(int)in_ECX[0xf][0x1a]] == (int ***)0x0) ||
     ((~(byte)((uint)in_ECX[0x32] >> 2) & 1) == 0)) {
    __security_check_cookie(local_c ^ (uint)auStack_10c);
    return;
  }
  pppppiStack_120 = (int *****)0x632965;
  ppppppiStack_11c = in_ECX;
  local_a0 = in_ECX;
  (*(code *)(*in_ECX[1])[0x15])();
  iVar13 = 0;
  fStack_f8 = 0.0;
  ppppppiStack_f0 = (int ******)0x0;
  bVar4 = false;
  if (((((uint)in_ECX[1][99] >> 1 & 1) == 0) || (in_ECX[0x10] == (int *****)0x0)) ||
     (((uint)in_ECX[0x10][0x4a] >> 6 & 1) == 0)) {
LAB_006329b1:
    if (((uint)in_ECX[0x32] & 0x400) != 0) {
      if (in_ECX[0x34] == (int *****)0x0) {
        pppppiStack_120 = (int *****)0x0;
        pppppppiStack_124 = (int *******)0x6329cf;
        pppppiVar6 = (int *****)(*(code *)(*in_ECX[1])[0xd])();
        in_ECX[0x34] = pppppiVar6;
        *(undefined1 *)(in_ECX + 0x33) = 1;
      }
      ppppppiStack_f0 = (int ******)in_ECX[0x34];
      if (ppppppiStack_f0 != (int ******)0x0) goto LAB_006329ea;
    }
LAB_00632a07:
    bVar3 = false;
  }
  else {
    pppppiStack_120 = (int *****)0x63299e;
    FUN_0062f2d0();
    bVar4 = true;
    ppppppiStack_f0 = (int ******)in_ECX[0x10][0xf];
    if (ppppppiStack_f0 == (int ******)0x0) goto LAB_006329b1;
LAB_006329ea:
    if ((*(char *)(in_ECX + 0x33) == '\0') &&
       ((in_ECX[0x10] == (int *****)0x0 || (*(char *)(in_ECX[0x10] + 0x4d) == '\0'))))
    goto LAB_00632a07;
    bVar3 = true;
  }
  ppppppiVar12 = ppppppiStack_f0;
  fStack_c4 = 0.0;
  fStack_c0 = 0.0;
  iStack_cc = 0;
  ppppppiStack_c8 = (int ******)0x0;
  pppppiStack_100 =
       (int *****)(CONCAT13(*(undefined1 *)(in_ECX[1] + 99),pppppiStack_100._0_3_) & 0x1ffffff);
  piStack_f4 = (int *)0x3f800000;
  if (bVar3) {
    if (bVar4) {
      if ((float)in_ECX[0x10][10] <= 1.0 && (float)in_ECX[0x10][10] != 1.0) {
        pppppiVar6 = in_ECX[1] + 99;
        *pppppiVar6 = (int ****)((uint)*pppppiVar6 & 0xfffffffe);
      }
      pppppiStack_120 = (int *****)&iStack_cc;
      pppppppiStack_124 = (int *******)0x632a6c;
      FUN_0062f720();
      pppppiStack_120 = (int *****)&pppppiStack_9c;
      pppppppiStack_124 = (int *******)0x632a7c;
      pfVar7 = (float *)FUN_0062dcd0();
      ppppiStack_ec = (int ****)(*pfVar7 + 0.5);
      pppppiStack_e8 = (int *****)(pfVar7[1] + 0.5);
      pppppiStack_120 = &ppppiStack_ec;
      pppppppiStack_124 = (int *******)0x632aaf;
      piVar8 = (int *)FUN_0062f720();
      pppppiStack_d4 = (int *****)(float)(*piVar8 + (int)piStack_dc);
      piStack_d0 = (int *)(float)(piVar8[1] + (int)pppppiStack_d8);
      pppppiStack_120 = (int *****)&fStack_b4;
      pppppppiStack_124 = (int *******)0x632ae3;
      pfVar7 = (float *)FUN_0062dc20();
      ppppiStack_ec = (int ****)(*pfVar7 + 0.5);
      pppppiStack_e8 = (int *****)(pfVar7[1] + 0.5);
      pppppiStack_120 = &ppppiStack_ec;
      pppppppiStack_124 = (int *******)0x632b16;
      piVar8 = (int *)FUN_0062f720();
      pppppiStack_120 = (int *****)0x0;
      ppppppiStack_e4 = (int ******)((float)*piVar8 + 0.0);
      pppppppiStack_124 = (int *******)0x3f800000;
      ppppppiStack_128 = &pppppiStack_d4;
      pppppppiStack_12c = &ppppppiStack_e4;
      _ppppppiStack_e0 = CONCAT44(piStack_dc,(float)piVar8[1] + 0.0);
      (*(code *)(*in_ECX[1])[0x19])(ppppppiVar12);
      (*(code *)(*in_ECX[1])[0xe])(&ppppppiStack_a8);
      pppppiVar6 = in_ECX[0x10];
      ppppiVar9 = pppppiVar6[10];
      pppppppiStack_124 = (int *******)local_a0;
      if ((float)ppppiVar9 != 1.0) {
        fStack_ac = (float)ppppiVar9 * fStack_ac;
        ppppppiStack_a8 = (int ******)((float)ppppiVar9 * (float)ppppppiStack_a8);
        fStack_a4 = (float)ppppiVar9 * fStack_a4;
        pppppppiStack_124 = (int *******)((float)ppppiVar9 * (float)local_a0);
        pppppiStack_9c = (int *****)((float)ppppiVar9 * (float)pppppiStack_9c);
        fStack_98 = (float)ppppiVar9 * fStack_98;
        ppppppiStack_94 = (int ******)((float)ppppiVar9 * (float)ppppppiStack_94);
        fStack_90 = (float)ppppiVar9 * fStack_90;
      }
      unaff_ESI = fStack_98;
      ppppiVar9 = pppppiVar6[0xb];
      ppppiVar1 = pppppiVar6[0xc];
      fStack_7c = (float)ppppiVar9 * fStack_ac + (float)ppppiVar1 * (float)pppppiStack_9c +
                  fStack_7c;
      fStack_78 = (float)ppppiVar9 * (float)ppppppiStack_a8 + (float)ppppiVar1 * fStack_98 +
                  fStack_78;
      fStack_70 = (float)ppppiVar9 * (float)pppppppiStack_124 + (float)ppppiVar1 * fStack_90 +
                  fStack_70;
      fStack_74 = (float)ppppiVar9 * fStack_a4 + (float)ppppiVar1 * (float)ppppppiStack_94 +
                  fStack_74;
      ppppppiStack_11c = ppppppiStack_94;
      pppppiStack_d4 = pppppiStack_9c;
      local_a0 = (int ******)pppppppiStack_124;
      (*(code *)(*in_ECX[1])[0xf])(&fStack_ac);
    }
    else {
      pppppiStack_120 = &ppppiStack_ec;
      pppppppiStack_124 = (int *******)&piStack_dc;
      ppppppiStack_128 = (int ******)0x632d68;
      FUN_00634a70();
      fStack_bc = (float)pppppiStack_e8 - (float)pppppiStack_d8;
      fStack_b4 = (float)ppppiStack_ec - (float)piStack_dc;
      pppppiStack_120 = (int *****)((int)(fStack_bc + 0.5) + 2);
      pppppppiStack_124 = (int *******)((int)(fStack_b4 + 0.5) + 2);
      ppppppiStack_128 = (int ******)0x632db6;
      (*(code *)(*ppppppiVar12)[1])();
      ppppppiStack_128 = &pppppiStack_d4;
      pppppppiStack_12c = (int *******)0x632dc4;
      FUN_0062f720();
      ppppppiStack_128 = (int ******)&iStack_cc;
      pppppppiStack_12c = (int *******)0x632dd2;
      FUN_0062f720();
      piStack_f4 = (int *)(fStack_bc + 0.5);
      ppppppiStack_128 = (int ******)&piStack_f4;
      ppppppiStack_f0 = (int ******)(fStack_c4 + 0.5);
      pppppppiStack_12c = (int *******)0x632e0b;
      piVar8 = (int *)FUN_0062f720();
      _ppppppiStack_e0 = CONCAT44((float)(*piVar8 + (int)piStack_dc),ppppppiStack_e0);
      pppppiStack_d8 = (int *****)(float)(piVar8[1] + (int)pppppiStack_d8);
      ppppppiStack_128 = (int ******)&piStack_f4;
      piStack_f4 = (int *)((float)ppppppiStack_e4 + 0.5);
      ppppppiStack_f0 = (int ******)((float)ppppppiStack_e0 + 0.5);
      pppppppiStack_12c = (int *******)0x632e68;
      piVar8 = (int *)FUN_0062f720();
      piStack_f4 = (int *)(float)(*piVar8 + (int)ppppiStack_ec);
      ppppppiStack_128 = (int ******)0x0;
      ppppppiStack_f0 = (int ******)(float)(piVar8[1] + (int)pppppiStack_e8);
      pppppppiStack_12c = (int *******)0x3f800000;
      (*(code *)(*in_ECX[1])[0x19])(ppppppiVar12,&piStack_f4,&piStack_dc);
    }
    (*(code *)(*ppppppiVar12)[9])();
  }
  pppppiStack_120 = (int *****)afStack_54;
  pppppppiStack_124 = (int *******)0x632ec3;
  (*(code *)(*in_ECX[1])[0xe])();
  pppppiVar6 = in_ECX[0xf];
  if ((pppppiVar6[0x3b][(int)pppppiVar6[0x30]] == (int ***)0x0) ||
     (unaff_ESI = (float)CONCAT22((short)((uint)unaff_ESI >> 0x10),0x100), (param_1 & 0x14) != 0)) {
    unaff_ESI = (float)((uint)unaff_ESI & 0xffff0000);
  }
  if ((((((uint)in_ECX[1][99] >> 2 & 1) == 0) || (((uint)pppppiVar6[0x80] & 1) == 0)) ||
      ((float)pppppiVar6[0x7d][(int)pppppiVar6[0x72]] <= 0.0)) ||
     (unaff_ESI = (float)CONCAT31((int3)((uint)unaff_ESI >> 8),1), (param_1 & 8) != 0)) {
    unaff_ESI = (float)((uint)unaff_ESI & 0xffffff00);
  }
  if (in_ECX[0xd] != (int *****)0x0) {
    pppppppiStack_124 = (int *******)&fStack_58;
    ppppppiStack_128 = (int ******)0x632f3e;
    (*(code *)(*in_ECX[0xd])[0xe])();
  }
  cVar16 = SUB41(unaff_ESI,0);
  fVar18 = 0.0;
  fStack_c0 = 1.0;
  if (cVar16 != '\0') {
    pppppiVar6 = in_ECX[0xf];
    dVar14 = (double)(fStack_44 * fStack_44 + afStack_54[0] * afStack_54[0]);
    pppppppiStack_124 = (int *******)0x632f89;
    libm_sse2_sqrt_precise();
    auVar15._0_8_ = (double)(fStack_48 * fStack_48 + fStack_58 * fStack_58);
    auVar15._8_8_ = 0;
    pppppppiStack_124 = (int *******)0x632fb9;
    libm_sse2_sqrt_precise();
    fVar18 = (((float)dVar14 + (float)auVar15._0_8_) * 0.5 *
             (float)pppppiVar6[0x7d][(int)pppppiVar6[0x72]]) / 1.4;
    fStack_c0 = fVar18;
    if (8.0 < fVar18) {
      fStack_f8 = 8.0 / fVar18;
      fStack_c0 = 8.0;
    }
  }
  if ((param_1 & 1) == 0) {
LAB_00633025:
    cStack_109 = '\x01';
  }
  else {
    pppppppiStack_124 = (int *******)0x633021;
    cVar5 = FUN_00636190();
    cStack_109 = '\0';
    if (cVar5 != '\0') goto LAB_00633025;
  }
  cVar5 = (char)((uint)unaff_ESI >> 0x10);
  if ((cVar5 != '\0') || (piStack_f4 == (int *)0x0)) {
    cVar17 = (char)((uint)unaff_ESI >> 8);
    if ((cStack_109 != '\0') || ((cVar16 != '\0' && (cVar17 == '\0')))) {
      if (cVar16 != '\0') {
        pppppppiStack_124 = (int *******)&pppppiStack_d8;
        ppppppiStack_128 = &pppppiStack_e8;
        pppppppiStack_12c = (int *******)0x63306e;
        FUN_00634a70();
        pppppiStack_e8 = (int *****)((float)pppppiStack_e8 - fVar18);
        pppppiStack_d4 = (int *****)((float)pppppiStack_d4 + fVar18);
        ppppppiStack_e4 = (int ******)((float)ppppppiStack_e4 - fVar18);
        pppppiStack_d8 = (int *****)((float)pppppiStack_d8 + fVar18);
      }
      pppppiStack_108 = pppppiStack_d8;
      pppppiStack_100 = pppppiStack_d4;
      if ((cVar17 == '\0') && (cVar16 == '\0')) {
        in_ECX[1][0x13] = (int ****)0x0;
      }
      else {
        pppppppiStack_124 = (int *******)fStack_f8;
        ppppppiStack_128 = (int ******)0x633102;
        FUN_0064edb0();
        if (cVar16 == '\0') {
          pppppppiStack_124 = (int *******)fStack_f8;
LAB_006331e6:
          pppppppiStack_12c = (int *******)0x6331ef;
          ppppppiStack_128 = in_ECX;
          FUN_0064eff0();
        }
        else {
          pppppppiStack_124 = (int *******)0x1;
          ppppppiStack_128 = (int ******)&ppppppiStack_f0;
          ppppiStack_ec =
               (int ****)(((float)pppppiStack_100 - (float)ppppppiStack_e4) + 2.0 + fVar18 * 4.0);
          pppppppiStack_12c = &ppppppiStack_e0;
          ppppppiStack_f0 =
               (int ******)(((float)pppppiStack_108 - (float)pppppiStack_e8) + 2.0 + fVar18 * 4.0);
          _ppppppiStack_e0 =
               CONCAT44((float)ppppppiStack_e4 - fVar18 * 2.0,(float)pppppiStack_e8 - fVar18 * 2.0);
          (*(code *)(*in_ECX[1][0xe][(int)in_ECX[1][0x12]])[8])();
          if (cVar17 != '\0') {
            pppppppiStack_124 = (int *******)0x3f800000;
            ppppppiStack_128 = (int ******)0x6331b1;
            FUN_0064edb0();
            pppppppiStack_124 = (int *******)0x3f800000;
            goto LAB_006331e6;
          }
          if (cStack_109 != '\0') {
            if (in_ECX[0xd] != (int *****)0x0) {
              ppppppiStack_128 = (int ******)0x6331cf;
              (*(code *)(*in_ECX[0xd])[2])();
            }
            iVar13 = 1;
            iStack_fc = 1;
          }
        }
        pppppiVar6 = (int *****)*in_ECX[0xb];
        iVar11 = iStack_fc;
        if (pppppiVar6 != in_ECX[0xb]) {
          ppppppiStack_b8 = (int ******)(param_1 & 0xfffffff7);
          do {
            ppppppiStack_128 = (int ******)0x63320b;
            pppppppiStack_124 = (int *******)ppppppiStack_b8;
            iVar11 = FUN_00632910();
            pppppiVar6 = (int *****)*pppppiVar6;
            iVar13 = iVar13 + iVar11;
            iVar11 = iVar13;
          } while (pppppiVar6 != in_ECX[0xb]);
        }
        iStack_fc = iVar11;
        ppppppiVar12 = ppppppiStack_f0;
        if (cVar16 != '\0') {
          if (cVar17 != '\0') {
            pppppppiStack_124 = (int *******)0x633236;
            FUN_006509f0();
            if (in_ECX[0xd] != (int *****)0x0) {
              ppppppiStack_128 = (int ******)0x633243;
              (*(code *)(*in_ECX[0xd])[2])();
            }
            iStack_fc = iVar13 + 1;
          }
          pppppiVar6 = in_ECX[1];
          ppppppiStack_f0 = (int ******)pppppiVar6[0xe][(int)pppppiVar6[0x12]];
          ppppppiStack_b8 = ppppppiStack_f0;
          if (pppppiVar6[0x11] == (int ****)0x0) {
            pppppppiStack_124 = (int *******)0x0;
            ppppppiStack_128 = (int ******)0x63326b;
            ppppiVar9 = (int ****)(*(code *)(*pppppiVar6)[0xd])();
            ppppppiStack_128 = (int ******)pppppiVar6[0x44];
            pppppiVar6[0x11] = ppppiVar9;
            pppppppiStack_12c = (int *******)pppppiVar6[0x43];
            (*(code *)(*ppppiVar9)[1])();
          }
          ppppiVar9 = pppppiVar6[0x11];
          local_a0 = (int ******)in_ECX[1][0xe][(int)in_ECX[1][0x12]];
          ppppiStack_ec = ppppiVar9;
          if (local_a0 != (int ******)0x0) {
            pppppppiStack_124 = (int *******)0x6332a4;
            (*(code *)(*local_a0)[3])();
          }
          pppppppiStack_124 = (int *******)0x6332ab;
          (*(code *)(*ppppiVar9)[2])();
          pppppppiStack_124 = (int *******)0x1;
          pppppppiStack_b0 = (int *******)((float)pppppiStack_e8 - fVar18 * 2.0);
          fStack_ac = (float)ppppppiStack_e4 - fVar18 * 2.0;
          ppppppiStack_128 = (int ******)&ppppppiStack_e0;
          pppppppiStack_12c = (int *******)&pppppppiStack_b0;
          _ppppppiStack_e0 =
               CONCAT44(((float)pppppiStack_100 - (float)ppppppiStack_e4) + 2.0 + fVar18 * 4.0,
                        ((float)pppppiStack_108 - (float)pppppiStack_e8) + 2.0 + fVar18 * 4.0);
          (*(code *)(*ppppiVar9)[8])();
          (*(code *)(*ppppiVar9)[3])();
          iVar13 = 2;
          do {
            iVar11 = 0;
            pppppppiStack_b0 = (int *******)(fStack_c0 / (float)iVar13);
            do {
              uVar10 = iVar11 + 1U & 0x80000001;
              if ((int)uVar10 < 0) {
                uVar10 = (uVar10 - 1 | 0xfffffffe) + 1;
              }
              pppppiVar6 = (int *****)(&ppppppiStack_f0)[uVar10];
              pppppppiStack_124 = (int *******)0x63337a;
              (*(code *)(*pppppiVar6)[2])();
              ppppppiStack_128 = (int ******)(uint)(iVar11 == 0);
              _ppppppiStack_e0 =
                   CONCAT44((float)pppppiStack_d4 - (float)ppppppiStack_e4,
                            (float)pppppiStack_d8 - (float)pppppiStack_e8);
              pppppppiStack_124 = (int *******)fStack_f8;
              pppppppiStack_12c = pppppppiStack_b0;
              (*(code *)(*(&ppppppiStack_f0)[iVar11])[6])(&pppppiStack_e8,&ppppppiStack_e0);
              (*(code *)(*pppppiVar6)[3])();
              in_ECX = ppppppiStack_a8;
              iVar11 = iVar11 + 1;
            } while (iVar11 < 2);
            iVar13 = iVar13 + -1;
          } while (0 < iVar13);
          ppppppiVar12 = ppppppiStack_b8;
          if (local_a0 != (int ******)0x0) {
            pppppppiStack_124 = (int *******)0x633414;
            (*(code *)(*local_a0)[2])();
            ppppppiVar12 = ppppppiStack_b8;
          }
        }
        pppppppiStack_124 = (int *******)0x633420;
        FUN_006509f0();
        if (cVar16 != '\0') {
          ppppppiStack_128 = &pppppiStack_e8;
          ppppppiStack_f0 = (int ******)(((float)pppppiStack_108 - (float)pppppiStack_e8) + 2.0);
          ppppiStack_ec = (int ****)(((float)pppppiStack_100 - (float)ppppppiStack_e4) + 2.0);
          pppppppiStack_124 = (int *******)fStack_f8;
          pppppppiStack_12c = &ppppppiStack_f0;
          (*(code *)(*ppppppiVar12)[5])(&pppppiStack_e8);
          goto LAB_0063349b;
        }
      }
      if (in_ECX[0xd] != (int *****)0x0) {
        ppppppiStack_128 = (int ******)0x63349a;
        pppppppiStack_124 = (int *******)in_ECX;
        (*(code *)(*in_ECX[0xd])[2])();
      }
    }
LAB_0063349b:
    if (in_ECX[0x10] != (int *****)0x0) {
      pppppppiStack_124 = (int *******)0x6334a7;
      (*(code *)(*in_ECX[0x10])[1])();
    }
    if ((((cVar17 == '\0') && (cVar16 == '\0')) && ((param_1 & 0x10) == 0)) &&
       (pppppiVar6 = (int *****)*in_ECX[0xb], pppppiVar6 != in_ECX[0xb])) {
      ppppppiStack_a8 = (int ******)(param_1 & 4);
      do {
        if ((((ppppppiStack_a8 != (int ******)0x0) &&
             ((~(byte)((uint)pppppiVar6[2][0x32] >> 2) & 1) != 0)) &&
            (pppiVar2 = pppppiVar6[2][0xf], pppiVar2[0x25][(int)pppiVar2[0x1a]] != (int *)0x0)) &&
           ((pppiVar2[0x3b][(int)pppiVar2[0x30]] != (int *)0x0 ||
            ((((uint)pppiVar2[0x80] & 1) != 0 && (0.0 < (float)pppiVar2[0x7d][(int)pppiVar2[0x72]]))
            )))) break;
        pppppppiStack_124 = (int *******)(param_1 & 0xfffffff7);
        ppppppiStack_128 = (int ******)0x63354c;
        FUN_00632910();
        pppppiVar6 = (int *****)*pppppiVar6;
      } while (pppppiVar6 != in_ECX[0xb]);
    }
    if (cVar5 != '\0') {
      if (in_ECX[0x10] != (int *****)0x0) {
        pppppppiStack_124 = (int *******)0x63356c;
        (*(code *)(*in_ECX[0x10])[6])();
      }
      pppppppiStack_124 = (int *******)0x633574;
      (*(code *)(*in_ECX[1])[0x1a])();
    }
    if (piStack_f4 == (int *)0x0) goto LAB_006338bc;
  }
  piVar8 = piStack_f4;
  if ((char)((uint)unaff_ESI >> 0x18) != '\0') {
    iVar13 = 0;
    do {
      iVar11 = iVar13 + 4;
      *(int *)((int)&ppppppiStack_e0 + iVar13) = (int)*(float *)((int)&piStack_d0 + iVar13);
      iVar13 = iVar11;
    } while (iVar11 < 8);
    pppppppiStack_124 = &local_a0;
    ppppppiStack_128 = (int ******)0x6335b2;
    pfVar7 = (float *)FUN_0062dcd0();
    ppppppiStack_f0 = (int ******)(*pfVar7 + 0.5);
    ppppiStack_ec = (int ****)(pfVar7[1] + 0.5);
    iVar13 = 0;
    do {
      iVar11 = iVar13 + 4;
      *(int *)((int)&piStack_d0 + iVar13) = (int)*(float *)((int)&ppppppiStack_f0 + iVar13);
      iVar13 = iVar11;
    } while (iVar11 < 8);
    pppppiStack_e8 = (int *****)(float)((int)ppppppiStack_e0 + (int)piStack_d0);
    ppppppiStack_e4 = (int ******)(float)((int)piStack_dc + iStack_cc);
    iVar13 = 0;
    do {
      iVar11 = iVar13 + 4;
      *(int *)((int)&piStack_d0 + iVar13) = (int)*(float *)((int)&ppppppiStack_c8 + iVar13);
      iVar13 = iVar11;
    } while (iVar11 < 8);
    pppppppiStack_124 = (int *******)&pppppppiStack_b0;
    ppppppiStack_128 = (int ******)0x63363f;
    pfVar7 = (float *)FUN_0062dc20();
    ppppppiStack_c8 = (int ******)(*pfVar7 + 0.5);
    fStack_c4 = pfVar7[1] + 0.5;
    iVar13 = 0;
    do {
      iVar11 = iVar13 + 4;
      *(int *)((int)&ppppppiStack_f0 + iVar13) = (int)*(float *)((int)&ppppppiStack_c8 + iVar13);
      iVar13 = iVar11;
    } while (iVar11 < 8);
    pppppiVar6 = in_ECX[0x10];
    ppppppiStack_a8 = (int ******)(float)((int)piStack_d0 + (int)ppppppiStack_f0);
    fStack_a4 = (float)(iStack_cc + (int)ppppiStack_ec);
    pppppiStack_d8 =
         (int *****)(((float)pppppiVar6[0xb] * (float)pppppiVar6[10]) / (float)(int)pppppiVar6[0xd])
    ;
    pppppiStack_d4 =
         (int *****)(((float)pppppiVar6[0xc] * (float)pppppiVar6[10]) / (float)(int)pppppiVar6[0xd])
    ;
    pppppppiStack_124 = (int *******)pppppiVar6[0xd];
    ppppppiStack_128 = (int ******)((float)pppppiVar6[10] / (float)(int)pppppppiStack_124);
    pppppppiStack_12c = (int *******)&pppppiStack_d8;
    (**(code **)(*piVar8 + 0x1c))(&ppppppiStack_a8,&pppppiStack_e8);
    if ((char)((uint)unaff_EDI >> 0x18) != '\0') {
      pppppiVar6 = in_ECX[1] + 99;
      *pppppiVar6 = (int ****)((uint)*pppppiVar6 | 1);
      (*(code *)(*in_ECX[1])[0x16])(in_ECX);
      __security_check_cookie(uStack_2c ^ (uint)&pppppppiStack_12c);
      return;
    }
    pppppiVar6 = in_ECX[1] + 99;
    *pppppiVar6 = (int ****)((uint)*pppppiVar6 & 0xfffffffe);
    (*(code *)(*in_ECX[1])[0x16])(in_ECX);
    __security_check_cookie(uStack_2c ^ (uint)&pppppppiStack_12c);
    return;
  }
  pppppppiStack_124 = &ppppppiStack_e0;
  ppppppiStack_128 = (int ******)&ppppppiStack_f0;
  pppppppiStack_12c = (int *******)0x63377f;
  FUN_00634a70();
  ppppiVar9 = ppppiStack_ec;
  ppppppiVar12 = ppppppiStack_f0;
  iVar13 = 0;
  do {
    iVar11 = iVar13 + 4;
    *(int *)((int)&pppppiStack_d8 + iVar13) = (int)*(float *)((int)&piStack_d0 + iVar13);
    iVar13 = iVar11;
  } while (iVar11 < 8);
  iVar13 = 0;
  do {
    iVar11 = iVar13 + 4;
    *(int *)((int)&piStack_d0 + iVar13) = (int)*(float *)((int)&ppppppiStack_c8 + iVar13);
    iVar13 = iVar11;
  } while (iVar11 < 8);
  ppppppiStack_c8 = (int ******)((float)ppppppiStack_f0 + 0.5);
  fStack_c4 = (float)ppppiStack_ec + 0.5;
  iVar13 = 0;
  do {
    iVar11 = iVar13 + 4;
    *(int *)((int)&ppppppiStack_f0 + iVar13) = (int)*(float *)((int)&ppppppiStack_c8 + iVar13);
    iVar13 = iVar11;
  } while (iVar11 < 8);
  iVar11 = (int)piStack_d0 + (int)ppppppiStack_f0;
  iVar13 = iStack_cc + (int)ppppiStack_ec;
  piStack_d0 = (int *)0x0;
  pppppiStack_e8 = (int *****)(float)iVar11;
  iStack_cc = 0;
  ppppppiStack_e4 = (int ******)(float)iVar13;
  ppppppiStack_c8 = (int ******)(((float)ppppppiStack_e0 - (float)ppppppiVar12) + 0.5);
  fStack_c4 = ((float)piStack_dc - (float)ppppiVar9) + 0.5;
  iVar13 = 0;
  do {
    iVar11 = iVar13 + 4;
    *(int *)((int)&ppppppiStack_f0 + iVar13) = (int)*(float *)((int)&ppppppiStack_c8 + iVar13);
    iVar13 = iVar11;
  } while (iVar11 < 8);
  ppppppiStack_c8 = (int ******)(float)((int)pppppiStack_d8 + (int)ppppppiStack_f0);
  pppppppiStack_124 = (int *******)0xbf800000;
  ppppppiStack_128 = (int ******)&piStack_d0;
  fStack_c4 = (float)((int)pppppiStack_d4 + (int)ppppiStack_ec);
  pppppppiStack_12c = &ppppppiStack_c8;
  (**(code **)(*piVar8 + 0x14))(&pppppiStack_e8);
LAB_006338bc:
  ppppppiStack_128 = (int ******)0x6338c5;
  pppppppiStack_124 = (int *******)in_ECX;
  (*(code *)(*in_ECX[1])[0x16])();
  ppppppiStack_11c = (int ******)0x6338d8;
  __security_check_cookie(uStack_18 ^ (uint)&stack0xfffffee8);
  return;
}


/* FUN_00633900 @ 00633900  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_00633900(undefined4 *param_1,int *param_2,int *param_3)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int *in_ECX;
  undefined1 local_8 [4];
  
  piVar2 = (int *)*in_ECX;
  piVar3 = param_2;
  if ((param_2 == (int *)*piVar2) && (param_3 == piVar2)) {
    FUN_00630b60(piVar2[1]);
    *(int *)(*in_ECX + 4) = *in_ECX;
    *(int *)*in_ECX = *in_ECX;
    *(int *)(*in_ECX + 8) = *in_ECX;
    in_ECX[1] = 0;
    *param_1 = *(undefined4 *)*in_ECX;
    return param_1;
  }
  while (piVar3 != param_3) {
    param_2 = piVar3;
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      param_2 = (int *)piVar3[2];
      if (*(char *)((int)param_2 + 0xd) == '\0') {
        cVar1 = *(char *)(*param_2 + 0xd);
        piVar2 = (int *)*param_2;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar2 + 0xd);
          param_2 = piVar2;
          piVar2 = (int *)*piVar2;
        }
      }
      else {
        cVar1 = *(char *)(piVar3[1] + 0xd);
        piVar4 = (int *)piVar3[1];
        piVar2 = piVar3;
        while ((param_2 = piVar4, cVar1 == '\0' && (piVar2 == (int *)param_2[2]))) {
          cVar1 = *(char *)(param_2[1] + 0xd);
          piVar4 = (int *)param_2[1];
          piVar2 = param_2;
        }
      }
    }
    FUN_006339c0(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_006339c0 @ 006339c0  kind=gamemisc  attributed-by=caller-vote  size=677 */

/* WARNING: Removing unreachable block (ram,0x00633a8d) */
/* WARNING: Removing unreachable block (ram,0x00633a9d) */
/* WARNING: Removing unreachable block (ram,0x00633aa6) */
/* WARNING: Removing unreachable block (ram,0x00633aa9) */
/* WARNING: Removing unreachable block (ram,0x00633a99) */
/* WARNING: Removing unreachable block (ram,0x00633ab7) */
/* WARNING: Removing unreachable block (ram,0x00633ac6) */
/* WARNING: Removing unreachable block (ram,0x00633ad1) */
/* WARNING: Removing unreachable block (ram,0x00633acd) */
/* WARNING: Removing unreachable block (ram,0x00633ac1) */
/* WARNING: Removing unreachable block (ram,0x00633ad4) */

void FUN_006339c0(undefined4 param_1,int *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar6 = (int *)*param_2;
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar6 = (int *)param_2[2];
    }
  }
  else {
    piVar6 = (int *)param_2[2];
  }
  piVar5 = (int *)param_2[1];
  if (*(char *)((int)piVar6 + 0xd) == '\0') {
    piVar6[1] = (int)piVar5;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar6;
  }
  else if ((int *)*piVar5 == param_2) {
    *piVar5 = (int)piVar6;
  }
  else {
    piVar5[2] = (int)piVar6;
  }
  puVar1 = (undefined4 *)*in_ECX;
  if ((int *)*puVar1 == param_2) {
    piVar3 = piVar5;
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      piVar3 = (int *)FUN_004e6ce0(piVar6);
    }
    *puVar1 = piVar3;
  }
  iVar2 = *in_ECX;
  if (*(int **)(iVar2 + 8) == param_2) {
    if (*(char *)((int)piVar6 + 0xd) == '\0') {
      uVar4 = FUN_00428aa0(piVar6);
      *(undefined4 *)(iVar2 + 8) = uVar4;
    }
    else {
      *(int **)(iVar2 + 8) = piVar5;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar6 != *(int **)(*in_ECX + 4)) {
      do {
        piVar3 = piVar5;
        if ((char)piVar6[3] != '\x01') break;
        piVar5 = (int *)*piVar3;
        if (piVar6 == piVar5) {
          piVar5 = (int *)piVar3[2];
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_004e37e0(piVar3);
            piVar5 = (int *)piVar3[2];
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(*piVar5 + 0xc) != '\x01') || (*(char *)(piVar5[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar5[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar5 + 0xc) = 1;
                *(undefined1 *)(piVar5 + 3) = 0;
                FUN_0042cac0(piVar5);
                piVar5 = (int *)piVar3[2];
              }
              *(char *)(piVar5 + 3) = (char)piVar3[3];
              *(undefined1 *)(piVar3 + 3) = 1;
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              FUN_004e37e0(piVar3);
              *(undefined1 *)(piVar6 + 3) = 1;
              goto LAB_00633c1e;
            }
LAB_00633bc0:
            *(undefined1 *)(piVar5 + 3) = 0;
          }
        }
        else {
          if ((char)piVar5[3] == '\0') {
            *(undefined1 *)(piVar5 + 3) = 1;
            *(undefined1 *)(piVar3 + 3) = 0;
            FUN_0042cac0(piVar3);
            piVar5 = (int *)*piVar3;
          }
          if (*(char *)((int)piVar5 + 0xd) == '\0') {
            if ((*(char *)(piVar5[2] + 0xc) == '\x01') && (*(char *)(*piVar5 + 0xc) == '\x01'))
            goto LAB_00633bc0;
            if (*(char *)(*piVar5 + 0xc) == '\x01') {
              *(undefined1 *)(piVar5[2] + 0xc) = 1;
              *(undefined1 *)(piVar5 + 3) = 0;
              FUN_004e37e0(piVar5);
              piVar5 = (int *)*piVar3;
            }
            *(char *)(piVar5 + 3) = (char)piVar3[3];
            *(undefined1 *)(piVar3 + 3) = 1;
            *(undefined1 *)(*piVar5 + 0xc) = 1;
            FUN_0042cac0(piVar3);
            *(undefined1 *)(piVar6 + 3) = 1;
            goto LAB_00633c1e;
          }
        }
        piVar5 = (int *)piVar3[1];
        piVar6 = piVar3;
      } while (piVar3 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar6 + 3) = 1;
  }
LAB_00633c1e:
  if (0xf < (uint)param_2[0xf]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[10]);
  }
  param_2[0xf] = 0xf;
  param_2[0xe] = 0;
  *(undefined1 *)(param_2 + 10) = 0;
  if (0xf < (uint)param_2[9]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)param_2[4]);
  }
  param_2[9] = 0xf;
  param_2[8] = 0;
  *(undefined1 *)(param_2 + 4) = 0;
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_00634a70 @ 00634a70  kind=gamemisc  attributed-by=caller-vote  size=857 */

void FUN_00634a70(float *param_1,float *param_2)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  char cVar5;
  float *pfVar6;
  float *pfVar7;
  int in_ECX;
  float local_68;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  float local_4c;
  float local_38;
  float local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)(in_ECX + 4) + 0x38))(&local_68);
  cVar5 = FUN_00634dd0(param_1,param_2,&local_68);
  if (cVar5 == '\0') {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  fVar2 = param_1[1];
  fVar3 = *param_1;
  pfVar7 = param_1 + 1;
  pfVar1 = param_2 + 1;
  local_24 = 1.0 / (local_4c * fVar2 + local_5c * fVar3 + local_2c);
  local_28 = (local_58 * fVar2 + local_68 * fVar3 + local_38) * local_24;
  local_24 = (local_54 * fVar2 + local_64 * fVar3 + local_34) * local_24;
  fVar3 = *param_2;
  local_1c = 1.0 / (fVar2 * local_4c + fVar3 * local_5c + local_2c);
  local_20 = (fVar2 * local_58 + fVar3 * local_68 + local_38) * local_1c;
  local_1c = (fVar2 * local_54 + fVar3 * local_64 + local_34) * local_1c;
  fVar2 = *pfVar1;
  local_14 = 1.0 / (fVar2 * local_4c + fVar3 * local_5c + local_2c);
  local_18 = (fVar2 * local_58 + fVar3 * local_68 + local_38) * local_14;
  local_14 = (fVar2 * local_54 + fVar3 * local_64 + local_34) * local_14;
  fVar3 = *param_1;
  fVar4 = *param_1;
  local_c = 1.0 / (fVar2 * local_4c + *param_1 * local_5c + local_2c);
  *param_1 = local_28;
  local_10 = (fVar2 * local_58 + fVar3 * local_68 + local_38) * local_c;
  local_c = (fVar2 * local_54 + fVar4 * local_64 + local_34) * local_c;
  *pfVar7 = local_24;
  *param_2 = local_28;
  *pfVar1 = *pfVar7;
  pfVar6 = &local_20;
  if (*param_1 <= local_20) {
    pfVar6 = param_1;
  }
  *param_1 = *pfVar6;
  pfVar6 = &local_1c;
  if (*pfVar7 <= local_1c) {
    pfVar6 = pfVar7;
  }
  *pfVar7 = *pfVar6;
  pfVar6 = &local_20;
  if (local_20 < *param_2 || local_20 == *param_2) {
    pfVar6 = param_2;
  }
  *param_2 = *pfVar6;
  pfVar6 = &local_1c;
  if (local_1c < *pfVar1 || local_1c == *pfVar1) {
    pfVar6 = pfVar1;
  }
  *pfVar1 = *pfVar6;
  pfVar6 = &local_18;
  if (*param_1 <= local_18) {
    pfVar6 = param_1;
  }
  *param_1 = *pfVar6;
  pfVar6 = &local_14;
  if (*pfVar7 <= local_14) {
    pfVar6 = pfVar7;
  }
  *pfVar7 = *pfVar6;
  pfVar6 = &local_18;
  if (local_18 < *param_2 || local_18 == *param_2) {
    pfVar6 = param_2;
  }
  *param_2 = *pfVar6;
  pfVar6 = &local_14;
  if (local_14 < *pfVar1 || local_14 == *pfVar1) {
    pfVar6 = pfVar1;
  }
  *pfVar1 = *pfVar6;
  pfVar6 = &local_10;
  if (*param_1 <= local_10) {
    pfVar6 = param_1;
  }
  *param_1 = *pfVar6;
  pfVar6 = &local_c;
  if (*pfVar7 <= local_c) {
    pfVar6 = pfVar7;
  }
  *pfVar7 = *pfVar6;
  pfVar7 = &local_10;
  if (local_10 < *param_2 || local_10 == *param_2) {
    pfVar7 = param_2;
  }
  *param_2 = *pfVar7;
  pfVar7 = &local_c;
  if (local_c < *pfVar1 || local_c == *pfVar1) {
    pfVar7 = pfVar1;
  }
  *pfVar1 = *pfVar7;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00634dd0 @ 00634dd0  kind=gamemisc  attributed-by=caller-vote  size=1910 */

/* WARNING: Type propagation algorithm not settling */

void FUN_00634dd0(float *param_1,float *param_2,float *param_3)

{
  char cVar1;
  float *pfVar2;
  undefined4 uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  int *piVar6;
  float *pfVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined1 auStack_b4 [3];
  char local_b1;
  float *local_b0;
  float local_ac;
  float *local_a8;
  int local_a4;
  undefined8 local_a0;
  float local_98 [4];
  float fStack_88;
  float fStack_84;
  undefined8 uStack_80;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float local_50 [4];
  float local_40;
  float local_3c;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_b4;
  iVar4 = *(int *)(in_ECX + 0x3c);
  local_b0 = param_1;
  local_a8 = param_3;
  local_b1 = '\x01';
  local_ac = 0.0;
  local_a0 = CONCAT44(local_a0._4_4_,iVar4);
  local_a4 = in_ECX;
  if (((*(byte *)(iVar4 + 0x200) & 1) != 0) &&
     (0.0 < *(float *)(*(int *)(iVar4 + 500) + *(int *)(iVar4 + 0x1c8) * 4))) {
    pfVar2 = local_50;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar2 = *param_3;
      param_3 = param_3 + 1;
      pfVar2 = pfVar2 + 1;
    }
    fVar9 = local_3c * 0.0 + local_50[1];
    fVar10 = local_40 * 0.0 + local_50[0];
    local_98[2] = local_50[1] * 0.0 + local_3c;
    local_98[0] = local_50[0] * 0.0 + local_40;
    dVar8 = (double)(fVar9 * fVar9 + fVar10 * fVar10);
    libm_sse2_sqrt_precise();
    local_ac = (float)dVar8;
    dVar8 = (double)(local_98[2] * local_98[2] + local_98[0] * local_98[0]);
    libm_sse2_sqrt_precise();
    local_ac = (local_ac + (float)dVar8) *
               *(float *)(*(int *)((int)(float)local_a0 + 500) +
                         *(int *)((int)(float)local_a0 + 0x1c8) * 4) * 0.5;
    *local_b0 = *local_b0 + local_ac;
    local_b0[1] = local_b0[1] + local_ac;
    *param_2 = *param_2 - local_ac;
    param_2[1] = param_2[1] - local_ac;
  }
  iVar4 = local_a4;
  pfVar2 = local_b0;
  if (*(int **)(local_a4 + 0x34) != (int *)0x0) {
    (**(code **)(**(int **)(local_a4 + 0x34) + 0x38))(local_a8);
    (**(code **)(**(int **)(iVar4 + 0x34) + 0x18))(&local_a4);
    (**(code **)(**(int **)(iVar4 + 0x34) + 0x1c))(&local_a0);
    iVar5 = 0;
    do {
      if (*(float *)((int)&local_a0 + iVar5) != *(float *)((int)local_98 + iVar5)) {
        if (*(int *)(iVar4 + 0x44) == 0) {
          fVar9 = local_98[0];
          fVar10 = local_98[1];
        }
        else {
          pfVar2 = (float *)(*(code *)**(undefined4 **)(*(int *)(iVar4 + 0x44) + 0x24))
                                      (&fStack_88,&local_a0,iVar4);
          local_ac = *pfVar2;
          local_a8 = (float *)pfVar2[1];
          pfVar2 = (float *)(*(code *)**(undefined4 **)(*(int *)(iVar4 + 0x44) + 0x24))
                                      (local_98 + 1,&local_a4,iVar4);
          local_98[0] = *pfVar2;
          fVar9 = *pfVar2;
          fVar10 = pfVar2[1];
        }
        *local_b0 = (float)local_a0;
        local_b0[1] = local_a0._4_4_;
        *param_2 = fVar9;
        param_2[1] = fVar10;
        local_b1 = '\0';
        goto LAB_006350a6;
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < 8);
LAB_00635533:
    __security_check_cookie(local_c ^ (uint)auStack_b4);
    return;
  }
  if ((*(int **)(local_a4 + 0x40) == (int *)0x0) ||
     (cVar1 = (**(code **)(**(int **)(local_a4 + 0x40) + 0x10))(), cVar1 == '\0')) {
    if ((*(int *)(*(int *)(*(int *)(iVar4 + 0x3c) + 0xec) +
                 *(int *)(*(int *)(iVar4 + 0x3c) + 0xc0) * 4) != 0) || (*(int *)(iVar4 + 0x30) == 0)
       ) {
      *pfVar2 = 0.0;
      pfVar2[1] = 0.0;
      *param_2 = 0.0;
      param_2[1] = 0.0;
      goto LAB_00635533;
    }
  }
  else {
    pfVar7 = (float *)(**(code **)(**(int **)(iVar4 + 0x40) + 8))(&fStack_88);
    *pfVar2 = *pfVar7;
    pfVar2[1] = pfVar7[1];
    pfVar2 = (float *)(**(code **)(**(int **)(iVar4 + 0x40) + 0xc))(local_98 + 3);
    *param_2 = *pfVar2;
    param_2[1] = pfVar2[1];
    local_b1 = '\0';
  }
LAB_006350a6:
  pfVar2 = local_b0;
  if ((*(int *)(*(int *)(*(int *)(iVar4 + 0x3c) + 0xec) +
               *(int *)(*(int *)(iVar4 + 0x3c) + 0xc0) * 4) == 0) &&
     (piVar6 = (int *)**(int **)(iVar4 + 0x2c), piVar6 != *(int **)(iVar4 + 0x2c))) {
    do {
      iVar4 = piVar6[2];
      if (((~(byte)(*(uint *)(iVar4 + 200) >> 2) & 1) != 0) &&
         (*(int *)(*(int *)(*(int *)(iVar4 + 0x3c) + 0x94) +
                  *(int *)(*(int *)(iVar4 + 0x3c) + 0x68) * 4) != 0)) {
        iVar4 = *(int *)(iVar4 + 0x38);
        pfVar7 = (float *)(iVar4 + 0x1b0);
        uVar3 = FUN_00424f30(local_50,pfVar7);
        cVar1 = FUN_00634dd0(&fStack_60,&fStack_58,uVar3);
        pfVar2 = local_b0;
        if (cVar1 != '\0') {
          fStack_78 = fStack_5c * *(float *)(iVar4 + 0x1c0) + fStack_60 * *pfVar7 +
                      *(float *)(iVar4 + 0x1e0);
          fStack_74 = fStack_5c * *(float *)(iVar4 + 0x1c4) + fStack_60 * *(float *)(iVar4 + 0x1b4)
                      + *(float *)(iVar4 + 0x1e4);
          fVar9 = 1.0 / (fStack_5c * *(float *)(iVar4 + 0x1cc) +
                         fStack_60 * *(float *)(iVar4 + 0x1bc) + *(float *)(iVar4 + 0x1ec));
          fVar10 = fStack_78 * fVar9;
          fVar9 = fStack_74 * fVar9;
          local_a0 = CONCAT44(fVar9,fVar10);
          if (local_b1 == '\0') {
            if (fVar10 < *local_b0) {
              *local_b0 = fVar10;
            }
            if (fVar9 < local_b0[1]) {
              local_b0[1] = fVar9;
            }
            if (*param_2 <= fVar10 && fVar10 != *param_2) {
              *param_2 = fVar10;
            }
            if (param_2[1] <= fVar9 && fVar9 != param_2[1]) {
              param_2[1] = fVar9;
            }
          }
          else {
            *(undefined8 *)local_b0 = local_a0;
            *(undefined8 *)param_2 = local_a0;
            local_b1 = '\0';
          }
          fStack_68 = fStack_5c * *(float *)(iVar4 + 0x1c0) + fStack_58 * *pfVar7 +
                      *(float *)(iVar4 + 0x1e0);
          fStack_64 = fStack_58 * *(float *)(iVar4 + 0x1b4) + fStack_5c * *(float *)(iVar4 + 0x1c4)
                      + *(float *)(iVar4 + 0x1e4);
          local_98[1] = 1.0 / (fStack_58 * *(float *)(iVar4 + 0x1bc) +
                               fStack_5c * *(float *)(iVar4 + 0x1cc) + *(float *)(iVar4 + 0x1ec));
          local_98[0] = fStack_68 * local_98[1];
          local_98[1] = fStack_64 * local_98[1];
          if (local_98[0] < *local_b0) {
            *local_b0 = local_98[0];
          }
          if (local_98[1] < local_b0[1]) {
            local_b0[1] = local_98[1];
          }
          if (*param_2 <= local_98[0] && local_98[0] != *param_2) {
            *param_2 = local_98[0];
          }
          if (param_2[1] <= local_98[1] && local_98[1] != param_2[1]) {
            param_2[1] = local_98[1];
          }
          fStack_70 = fStack_54 * *(float *)(iVar4 + 0x1c0) + fStack_58 * *pfVar7 +
                      *(float *)(iVar4 + 0x1e0);
          fStack_6c = fStack_54 * *(float *)(iVar4 + 0x1c4) + fStack_58 * *(float *)(iVar4 + 0x1b4)
                      + *(float *)(iVar4 + 0x1e4);
          local_98[3] = 1.0 / (fStack_54 * *(float *)(iVar4 + 0x1cc) +
                               fStack_58 * *(float *)(iVar4 + 0x1bc) + *(float *)(iVar4 + 0x1ec));
          local_98[2] = local_98[3] * fStack_70;
          local_98[3] = local_98[3] * fStack_6c;
          if (local_98[2] < *local_b0) {
            *local_b0 = local_98[2];
          }
          if (local_98[3] < local_b0[1]) {
            local_b0[1] = local_98[3];
          }
          if (*param_2 <= local_98[2] && local_98[2] != *param_2) {
            *param_2 = local_98[2];
          }
          if (param_2[1] <= local_98[3] && local_98[3] != param_2[1]) {
            param_2[1] = local_98[3];
          }
          fStack_88 = fStack_54 * *(float *)(iVar4 + 0x1c0) + fStack_60 * *pfVar7 +
                      *(float *)(iVar4 + 0x1e0);
          fStack_84 = fStack_54 * *(float *)(iVar4 + 0x1c4) + fStack_60 * *(float *)(iVar4 + 0x1b4)
                      + *(float *)(iVar4 + 0x1e4);
          fVar10 = 1.0 / (fStack_54 * *(float *)(iVar4 + 0x1cc) +
                          fStack_60 * *(float *)(iVar4 + 0x1bc) + *(float *)(iVar4 + 0x1ec));
          fVar9 = fVar10 * fStack_88;
          fVar10 = fVar10 * fStack_84;
          uStack_80 = CONCAT44(fVar10,fVar9);
          local_a0 = uStack_80;
          if (fVar9 < *local_b0) {
            *local_b0 = fVar9;
          }
          if (fVar10 < local_b0[1]) {
            local_b0[1] = fVar10;
          }
          if (*param_2 <= fVar9 && fVar9 != *param_2) {
            *param_2 = fVar9;
          }
          if (param_2[1] <= fVar10 && fVar10 != param_2[1]) {
            param_2[1] = fVar10;
          }
        }
      }
      piVar6 = (int *)*piVar6;
      iVar4 = local_a4;
    } while (piVar6 != (int *)*(int *)(local_a4 + 0x2c));
  }
  iVar4 = *(int *)(iVar4 + 0x3c);
  if (((*(byte *)(iVar4 + 0x200) & 1) != 0) &&
     (0.0 < *(float *)(*(int *)(iVar4 + 500) + *(int *)(iVar4 + 0x1c8) * 4))) {
    *pfVar2 = *pfVar2 - local_ac;
    pfVar2[1] = pfVar2[1] - local_ac;
    *param_2 = *param_2 + local_ac;
    param_2[1] = param_2[1] + local_ac;
  }
  __security_check_cookie(local_c ^ (uint)auStack_b4);
  return;
}


/* FUN_00636190 @ 00636190  kind=gamemisc  attributed-by=caller-vote  size=862 */

void FUN_00636190(void)

{
  int iVar1;
  float *pfVar2;
  int in_ECX;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  undefined1 local_20 [4];
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(int **)(in_ECX + 0x34) == (int *)0x0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x18))(&local_10);
  (**(code **)(**(int **)(in_ECX + 0x34) + 0x1c))(&local_18);
  if (*(int *)(in_ECX + 0x44) != 0) {
    pfVar2 = (float *)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x24))
                                (local_20,&local_10);
    local_10 = *pfVar2;
    local_c = pfVar2[1];
    pfVar2 = (float *)(*(code *)**(undefined4 **)(*(int *)(in_ECX + 0x44) + 0x24))
                                (local_20,&local_18);
    local_18 = *pfVar2;
    local_14 = pfVar2[1];
  }
  iVar1 = *(int *)(in_ECX + 0x3c);
  if (((*(byte *)(iVar1 + 0x200) & 1) != 0) &&
     (fVar11 = *(float *)(*(int *)(iVar1 + 500) + *(int *)(iVar1 + 0x1c8) * 4), 0.0 < fVar11)) {
    local_10 = local_10 - fVar11;
    local_c = local_c - fVar11;
    local_18 = local_18 + fVar11;
    local_14 = local_14 + fVar11;
  }
  fVar11 = *(float *)(in_ECX + 0x84);
  fVar12 = *(float *)(in_ECX + 100) * local_c;
  fVar18 = *(float *)(in_ECX + 0x54) * local_10;
  fVar3 = *(float *)(in_ECX + 0x58) * local_c;
  fVar20 = *(float *)(in_ECX + 0x58) * local_14;
  fVar4 = *(float *)(in_ECX + 0x48) * local_10;
  fVar5 = *(float *)(in_ECX + 0x4c) * local_10;
  fVar17 = *(float *)(in_ECX + 0x5c) * local_c;
  local_1c = *(float *)(in_ECX + 0x7c);
  fVar19 = *(float *)(in_ECX + 0x5c) * local_14;
  fVar6 = 1.0 / (fVar12 + fVar18 + fVar11);
  fVar13 = (fVar4 + fVar3 + *(float *)(in_ECX + 0x78)) * fVar6;
  fVar6 = (fVar17 + fVar5 + local_1c) * fVar6;
  fVar7 = *(float *)(in_ECX + 0x54) * local_18;
  fVar14 = *(float *)(in_ECX + 100) * local_14;
  fVar8 = *(float *)(in_ECX + 0x48) * local_18;
  fVar9 = *(float *)(in_ECX + 0x4c) * local_18;
  fVar10 = 1.0 / (fVar14 + fVar7 + *(float *)(in_ECX + 0x84));
  fVar15 = (fVar8 + fVar20 + *(float *)(in_ECX + 0x78)) * fVar10;
  fVar10 = (fVar19 + fVar9 + *(float *)(in_ECX + 0x7c)) * fVar10;
  fVar16 = fVar15;
  if (fVar15 < fVar13) {
    fVar16 = fVar13;
    fVar13 = fVar15;
  }
  fVar15 = fVar10;
  if (fVar10 < fVar6) {
    fVar15 = fVar6;
    fVar6 = fVar10;
  }
  fVar10 = 1.0 / (fVar14 + fVar18 + fVar11);
  fVar4 = (fVar20 + fVar4 + *(float *)(in_ECX + 0x78)) * fVar10;
  fVar10 = (fVar19 + fVar5 + *(float *)(in_ECX + 0x7c)) * fVar10;
  if (fVar4 < fVar13) {
    fVar13 = fVar4;
  }
  if (fVar10 < fVar6) {
    fVar6 = fVar10;
  }
  if (fVar16 < fVar4) {
    fVar16 = fVar4;
  }
  if (fVar15 < fVar10) {
    fVar15 = fVar10;
  }
  fVar4 = 1.0 / (fVar7 + fVar12 + fVar11);
  fVar11 = fVar4 * (fVar8 + fVar3 + *(float *)(in_ECX + 0x78));
  fVar4 = fVar4 * (fVar9 + fVar17 + local_1c);
  if (fVar11 < fVar13) {
    fVar13 = fVar11;
  }
  if (fVar4 < fVar6) {
    fVar6 = fVar4;
  }
  if (fVar16 < fVar11) {
    fVar16 = fVar11;
  }
  if (fVar15 < fVar4) {
    fVar15 = fVar4;
  }
  if ((((0.0 <= fVar16) && (fVar13 < (float)*(int *)(*(int *)(in_ECX + 4) + 0x10c))) &&
      (0.0 <= fVar15)) && (fVar6 < (float)*(int *)(*(int *)(in_ECX + 4) + 0x110))) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00636be0 @ 00636be0  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_00636be0(void)

{
  int in_ECX;
  int *piVar1;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    if (*(int *)(in_ECX + 0x34) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x34) + 0x2e) = 0;
    }
    if (*(int *)(in_ECX + 0x38) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x38) + 0x2e) = 0;
    }
    if (*(int *)(in_ECX + 0x3c) != 0) {
      *(undefined1 *)(*(int *)(in_ECX + 0x3c) + 0x2e) = 0;
    }
    piVar1 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar1 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636be0();
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00636cb0 @ 00636cb0  kind=gamemisc  attributed-by=caller-vote  size=30 */

void FUN_00636cb0(undefined4 param_1)

{
  FUN_00636be0();
  FUN_00636cd0(param_1,0,0);
  return;
}


/* FUN_00636cd0 @ 00636cd0  kind=gamemisc  attributed-by=caller-vote  size=224 */

void FUN_00636cd0(undefined4 param_1,undefined4 param_2,char param_3)

{
  int in_ECX;
  int *piVar1;
  
  if ((*(uint *)(in_ECX + 200) & 0x2000) != 0) {
    param_3 = '\x01';
  }
  if (((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) &&
     ((*(int *)(*(int *)(*(int *)(in_ECX + 0x3c) + 0x94) +
               *(int *)(*(int *)(in_ECX + 0x3c) + 0x68) * 4) != 0 || (param_3 != '\0')))) {
    if (*(int *)(in_ECX + 0x40) == 0) {
      if (*(int *)(in_ECX + 0x28) == 0) {
        *(undefined4 *)(in_ECX + 0x44) = 0;
      }
      else {
        *(undefined4 *)(in_ECX + 0x44) = *(undefined4 *)(*(int *)(in_ECX + 0x28) + 0x44);
      }
    }
    else {
      *(int *)(in_ECX + 0x44) = *(int *)(in_ECX + 0x40);
    }
    if ((*(int *)(in_ECX + 0x34) != 0) && (*(char *)(*(int *)(in_ECX + 0x34) + 0x2e) == '\0')) {
      FUN_00664c60(param_1);
    }
    if ((*(int *)(in_ECX + 0x38) != 0) && (*(char *)(*(int *)(in_ECX + 0x38) + 0x2e) == '\0')) {
      FUN_00664c60(param_1);
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) && (*(char *)(*(int *)(in_ECX + 0x3c) + 0x2e) == '\0')) {
      FUN_00664c60(param_1);
    }
    FUN_006371b0();
    if (*(int **)(in_ECX + 0x40) != (int *)0x0) {
      (**(code **)(**(int **)(in_ECX + 0x40) + 0x6c))();
    }
    piVar1 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar1 != *(int **)(in_ECX + 0x2c)) {
      do {
        FUN_00636cd0(param_1,param_2,param_3);
        piVar1 = (int *)*piVar1;
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
    }
  }
  return;
}


/* FUN_00636f10 @ 00636f10  kind=gamemisc  attributed-by=caller-vote  size=82 */

void FUN_00636f10(void)

{
  int in_ECX;
  int *piVar1;
  
  if (*(int *)(in_ECX + 0x34) != 0) {
    FUN_00664cc0();
  }
  if (*(int *)(in_ECX + 0x38) != 0) {
    FUN_00664cc0();
  }
  if (*(int *)(in_ECX + 0x3c) != 0) {
    FUN_00664cc0();
  }
  piVar1 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar1 != *(int **)(in_ECX + 0x2c)) {
    do {
      if ((~(byte)(*(uint *)(piVar1[2] + 200) >> 2) & 1) != 0) {
        FUN_00636f10();
      }
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_00636f70 @ 00636f70  kind=gamemisc  attributed-by=caller-vote  size=403 */

int FUN_00636f70(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  if ((~(byte)(*(uint *)(in_ECX + 200) >> 2) & 1) != 0) {
    iVar5 = 0;
    if ((*(int *)(in_ECX + 0x34) != 0) &&
       (piVar1 = *(int **)(*(int *)(in_ECX + 0x34) + 0x24), piVar4 = (int *)*piVar1,
       piVar4 != piVar1)) {
      do {
        piVar1 = (int *)FUN_00661d90(param_1);
        if ((piVar1 != (int *)0x0) && (iVar2 = (piVar1[1] - *piVar1) / 0xc, 0 < iVar2)) {
          iVar2 = FUN_00630970(iVar2 + -1);
          if (iVar5 < *(int *)(iVar2 + 4)) {
            iVar5 = *(int *)(iVar2 + 4);
          }
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(*(int *)(in_ECX + 0x34) + 0x24));
    }
    if ((*(int *)(in_ECX + 0x38) != 0) &&
       (piVar1 = *(int **)(*(int *)(in_ECX + 0x38) + 0x24), piVar4 = (int *)*piVar1,
       piVar4 != piVar1)) {
      do {
        piVar1 = (int *)FUN_00661d90(param_1);
        if ((piVar1 != (int *)0x0) && (iVar2 = (piVar1[1] - *piVar1) / 0xc, 0 < iVar2)) {
          iVar2 = FUN_00630970(iVar2 + -1);
          if (iVar5 < *(int *)(iVar2 + 4)) {
            iVar5 = *(int *)(iVar2 + 4);
          }
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(*(int *)(in_ECX + 0x38) + 0x24));
    }
    if ((*(int *)(in_ECX + 0x3c) != 0) &&
       (piVar1 = *(int **)(*(int *)(in_ECX + 0x3c) + 0x24), piVar4 = (int *)*piVar1,
       piVar4 != piVar1)) {
      do {
        piVar1 = (int *)FUN_00661d90(param_1);
        if (piVar1 != (int *)0x0) {
          iVar2 = (piVar1[1] - *piVar1) / 0xc;
          if (0 < iVar2) {
            if (piVar1[3] == 0) {
              iVar3 = iVar2 + -1;
              if (iVar2 + -1 < 0) {
                iVar3 = 0;
              }
              if (iVar2 <= iVar3) {
                iVar3 = iVar2 + -1;
              }
            }
            else {
              iVar3 = (iVar2 + -1 + iVar2) % iVar2;
            }
            iVar2 = *(int *)(*piVar1 + 4 + iVar3 * 0xc);
            if (iVar5 < iVar2) {
              iVar5 = iVar2;
            }
          }
        }
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)(*(int *)(in_ECX + 0x3c) + 0x24));
    }
    piVar1 = (int *)**(int **)(in_ECX + 0x2c);
    if (piVar1 != *(int **)(in_ECX + 0x2c)) {
      do {
        iVar2 = FUN_00636f70(param_1);
        piVar1 = (int *)*piVar1;
        if (iVar5 < iVar2) {
          iVar5 = iVar2;
        }
      } while (piVar1 != (int *)*(int *)(in_ECX + 0x2c));
    }
    return iVar5;
  }
  return 0;
}


/* FUN_006371b0 @ 006371b0  kind=gamemisc  attributed-by=caller-vote  size=163 */

void FUN_006371b0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar3 = *(int *)(in_ECX + 0x28);
  if (iVar3 == 0) {
    iVar3 = *(int *)(in_ECX + 0x38);
    puVar1 = (undefined4 *)(iVar3 + 0x1b0);
    puVar4 = (undefined4 *)(in_ECX + 0x48);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1 = (undefined4 *)(iVar3 + 0x1f0);
  }
  else {
    puVar1 = (undefined4 *)FUN_00424f30(local_48,*(int *)(in_ECX + 0x38) + 0x1b0);
    puVar4 = (undefined4 *)(in_ECX + 0x48);
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar1;
      puVar1 = puVar1 + 1;
      puVar4 = puVar4 + 1;
    }
    puVar1 = (undefined4 *)FUN_00424f30(local_48,iVar3 + 0x88);
  }
  puVar4 = (undefined4 *)(in_ECX + 0x88);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar1;
    puVar1 = puVar1 + 1;
    puVar4 = puVar4 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00637850 @ 00637850  kind=gamemisc  attributed-by=caller-vote  size=144 */

void FUN_00637850(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_00638cf0();
  iVar2 = *(int *)(in_ECX + 0x174);
  if (iVar2 <= *(int *)(*(int *)(*(int *)(in_ECX + 0x160) + 0xa8) + 0x10 +
                       *(int *)(*(int *)(in_ECX + 0x160) + 0x7c) * 0x18)) {
    iVar1 = *(int *)(in_ECX + 0x178);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else if (iVar1 < 0) {
      iVar2 = iVar2 + iVar1;
      iVar1 = -iVar1;
    }
    FUN_00411270(iVar2,iVar1);
    if (*(int *)(in_ECX + 0x178) < 0) {
      *(int *)(in_ECX + 0x174) = *(int *)(in_ECX + 0x174) + *(int *)(in_ECX + 0x178);
    }
    *(undefined4 *)(in_ECX + 0x178) = 0;
    (**(code **)(**(int **)(in_ECX + 0x160) + 4))(1);
    FUN_00627cb0(0x14);
    FUN_00638610();
    return;
  }
  return;
}


/* FUN_00638610 @ 00638610  kind=gamemisc  attributed-by=caller-vote  size=1354 */

void FUN_00638610(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int in_ECX;
  float fVar5;
  float fVar6;
  void *local_8c [5];
  uint local_78;
  float local_74 [2];
  float local_6c [2];
  float local_64;
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5a16;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  if ((*(int *)(in_ECX + 0x160) == 0) || (*(int *)(*(int *)(in_ECX + 0x148) + 0x28) == 0))
  goto LAB_00638b41;
  FUN_00631db0(local_74,1);
  FUN_00631520(local_6c,1);
  FUN_00639460(uVar3);
  iVar1 = *(int *)(in_ECX + 0x160);
  FUN_0065e8d0(*(int *)(iVar1 + 0xa8) + *(int *)(iVar1 + 0x7c) * 0x18,
               *(undefined4 *)(in_ECX + 0x174),*(int *)(in_ECX + 0x148) + 0x48,
               *(undefined4 *)(iVar1 + 0x1bc),*(undefined4 *)(iVar1 + 0x1c0),
               *(undefined4 *)(iVar1 + 0x1c4),*(undefined4 *)(iVar1 + 0x1c8),
               *(undefined4 *)(iVar1 + 0x1e4),&local_1c,&local_24,*(undefined4 *)(iVar1 + 0x1ec),
               (byte)*(undefined4 *)(iVar1 + 0x1f0) & 1);
  FUN_00424f30(&local_64,*(int *)(*(int *)(in_ECX + 0x148) + 0x38) + 0x1b0);
  fVar5 = local_60 * local_1c;
  fVar6 = 1.0 / (local_18 * local_48 + local_1c * local_58 + local_28);
  local_1c = fVar6 * (local_54 * local_18 + local_64 * local_1c + local_34);
  local_18 = fVar6 * (local_50 * local_18 + fVar5 + local_30);
  fVar5 = local_24 * local_60;
  local_24 = local_20 * local_54 + local_24 * local_64;
  local_20 = local_20 * local_50 + fVar5;
  if (local_1c + local_24 < local_6c[0]) {
    if (local_1c < local_74[0]) {
      uVar4 = FUN_00451850(local_8c,*(int *)(*(int *)(in_ECX + 0x160) + 0xa8) +
                                    *(int *)(*(int *)(in_ECX + 0x160) + 0x7c) * 0x18,&DAT_006fd844);
      iVar1 = *(int *)(in_ECX + 0x160);
      local_8 = 1;
      FUN_0065e8d0(uVar4,*(int *)(in_ECX + 0x174) + -6,*(int *)(in_ECX + 0x148) + 0x48,
                   *(undefined4 *)(iVar1 + 0x1bc),*(undefined4 *)(iVar1 + 0x1c0),
                   *(undefined4 *)(iVar1 + 0x1c4),*(undefined4 *)(iVar1 + 0x1c8),
                   *(undefined4 *)(iVar1 + 0x1e4),&local_1c,&local_24,*(undefined4 *)(iVar1 + 0x1ec)
                   ,(byte)*(undefined4 *)(iVar1 + 0x1f0) & 1);
      local_8 = 0xffffffff;
      FUN_00593e50();
      local_60 = local_60 * local_1c;
      fVar5 = 1.0 / (local_18 * local_48 + local_1c * local_58 + local_28);
      local_1c = fVar5 * (local_64 * local_1c + local_54 * local_18 + local_34);
      local_6c[0] = local_1c - local_74[0];
      local_18 = fVar5 * (local_60 + local_50 * local_18 + local_30);
      goto LAB_00638ab3;
    }
  }
  else {
    uVar4 = FUN_00451850(local_8c,*(int *)(*(int *)(in_ECX + 0x160) + 0xa8) +
                                  *(int *)(*(int *)(in_ECX + 0x160) + 0x7c) * 0x18,&DAT_006fd844);
    iVar1 = *(int *)(in_ECX + 0x160);
    local_8 = 0;
    FUN_0065e8d0(uVar4,*(int *)(in_ECX + 0x174) + 6,*(int *)(in_ECX + 0x148) + 0x48,
                 *(undefined4 *)(iVar1 + 0x1bc),*(undefined4 *)(iVar1 + 0x1c0),
                 *(undefined4 *)(iVar1 + 0x1c4),*(undefined4 *)(iVar1 + 0x1c8),
                 *(undefined4 *)(iVar1 + 0x1e4),&local_1c,&local_24,*(undefined4 *)(iVar1 + 0x1ec),
                 (byte)*(undefined4 *)(iVar1 + 0x1f0) & 1);
    local_8 = 0xffffffff;
    if (7 < local_78) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_8c[0]);
    }
    local_60 = local_60 * local_1c;
    fVar5 = 1.0 / (local_18 * local_48 + local_1c * local_58 + local_28);
    local_1c = (local_64 * local_1c + local_54 * local_18 + local_34) * fVar5;
    local_18 = (local_60 + local_50 * local_18 + local_30) * fVar5;
    local_6c[0] = local_1c - local_6c[0];
LAB_00638ab3:
    iVar1 = *(int *)(*(int *)(in_ECX + 0x148) + 0x38);
    iVar2 = *(int *)(iVar1 + 0x68);
    iVar1 = *(int *)(iVar1 + 0x94);
    *(float *)(iVar1 + iVar2 * 8) = *(float *)(iVar1 + iVar2 * 8) - (float)(int)local_6c[0];
    if ((*(int *)(in_ECX + 0x174) == 6 || *(int *)(in_ECX + 0x174) + -6 < 0) ||
       (iVar1 = *(int *)(*(int *)(in_ECX + 0x148) + 0x38),
       fVar5 = *(float *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 8),
       *(float *)(in_ECX + 0x16c) <= fVar5 && fVar5 != *(float *)(in_ECX + 0x16c))) {
      iVar1 = *(int *)(*(int *)(in_ECX + 0x148) + 0x38);
      *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 8) =
           *(undefined4 *)(in_ECX + 0x16c);
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x148) + 0x38) + 4))(1);
  }
  FUN_00639a60();
LAB_00638b41:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00638b60 @ 00638b60  kind=gamemisc  attributed-by=caller-vote  size=386 */

void FUN_00638b60(float *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  float local_3c [2];
  float local_34 [2];
  void *local_2c [4];
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5a48;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  local_18 = 7;
  local_1c = 0;
  local_14 = uVar3;
  FUN_0040f680(*(int *)(*(int *)(in_ECX + 0x160) + 0xa8) +
               *(int *)(*(int *)(in_ECX + 0x160) + 0x7c) * 0x18,0,0xffffffff);
  iVar2 = local_1c;
  iVar4 = 0;
  local_8 = 0;
  *(undefined4 *)(in_ECX + 0x174) = 0;
  if (0 < local_1c) {
    do {
      FUN_00639460(uVar3);
      iVar1 = *(int *)(in_ECX + 0x160);
      FUN_0065e8d0(local_2c,iVar4,*(int *)(in_ECX + 0x148) + 0x48,*(undefined4 *)(iVar1 + 0x1bc),
                   *(undefined4 *)(iVar1 + 0x1c0),*(undefined4 *)(iVar1 + 0x1c4),
                   *(undefined4 *)(iVar1 + 0x1c8),*(undefined4 *)(iVar1 + 0x1e4),local_34,local_3c,
                   *(undefined4 *)(iVar1 + 0x1ec),*(byte *)(iVar1 + 0x1f0) & 1);
      FUN_00639a60();
      if (local_3c[0] * 0.7 + local_34[0] < *param_1) {
        *(int *)(in_ECX + 0x174) = iVar4 + 1;
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar2);
  }
  FUN_00638cf0();
  *(undefined1 *)(in_ECX + 0x134) = 1;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00638cf0 @ 00638cf0  kind=gamemisc  attributed-by=caller-vote  size=179 */

void FUN_00638cf0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x160);
  if (iVar1 == 0) {
    *(undefined4 *)(in_ECX + 0x174) = 0;
    *(undefined4 *)(in_ECX + 0x178) = 0;
    return;
  }
  if (*(int *)(in_ECX + 0x174) < 0) {
    *(undefined4 *)(in_ECX + 0x174) = 0;
  }
  if (*(int *)(*(int *)(iVar1 + 0xa8) + 0x10 + *(int *)(iVar1 + 0x7c) * 0x18) <
      *(int *)(in_ECX + 0x174)) {
    *(undefined4 *)(in_ECX + 0x174) =
         *(undefined4 *)(*(int *)(iVar1 + 0xa8) + 0x10 + *(int *)(iVar1 + 0x7c) * 0x18);
  }
  iVar2 = *(int *)(in_ECX + 0x174);
  if (*(int *)(in_ECX + 0x178) + iVar2 < 0) {
    *(int *)(in_ECX + 0x178) = -iVar2;
  }
  if (*(int *)(*(int *)(iVar1 + 0xa8) + 0x10 + *(int *)(iVar1 + 0x7c) * 0x18) <
      *(int *)(in_ECX + 0x178) + iVar2) {
    *(int *)(in_ECX + 0x174) =
         *(int *)(*(int *)(iVar1 + 0xa8) + 0x10 + *(int *)(iVar1 + 0x7c) * 0x18) -
         *(int *)(in_ECX + 0x178);
  }
  return;
}


/* FUN_00639460 @ 00639460  kind=gamemisc  attributed-by=caller-vote  size=11 */

void FUN_00639460(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  return;
}


/* FUN_00639a60 @ 00639a60  kind=gamemisc  attributed-by=caller-vote  size=11 */

void FUN_00639a60(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x24));
  return;
}


/* _Uninitialized_move<> @ 00639c20  kind=gamemisc  attributed-by=caller-vote  size=45 */

/* Library Function - Multiple Matches With Same Base Name
    struct `protected: int __thiscall GSI1::readHash(unsigned short,long,long)'::`2'::FileSymbolInfo
   * __cdecl std::_Uninitialized_move<struct `protected: int __thiscall GSI1::readHash(unsigned
   short,long,long)'::`2'::FileSymbolInfo *,class std::allocator<struct `protected: int __thiscall
   GSI1::readHash(unsigned short,long,long)'::`2'::FileSymbolInfo> >(struct `protected: int
   __thiscall GSI1::readHash(unsigned short,long,long)'::`2'::FileSymbolInfo * const,struct
   `protected: int __thiscall GSI1::readHash(unsigned short,long,long)'::`2'::FileSymbolInfo *
   const,struct `protected: int __thiscall GSI1::readHash(unsigned
   short,long,long)'::`2'::FileSymbolInfo *,class std::allocator<struct `protected: int __thiscall
   GSI1::readHash(unsigned short,long,long)'::`2'::FileSymbolInfo> &)
    struct GSISymbolEntry * __cdecl std::_Uninitialized_move<struct GSISymbolEntry *,class
   std::allocator<struct GSISymbolEntry> >(struct GSISymbolEntry * const,struct GSISymbolEntry *
   const,struct GSISymbolEntry *,class std::allocator<struct GSISymbolEntry> &)
   
   Library: Visual Studio 2019 Release */

void _Uninitialized_move<>(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  while (param_1 != param_2) {
    puVar3 = param_1 + 0x10;
    puVar1 = param_3 + 0x10;
    puVar4 = param_1;
    puVar5 = param_3;
    for (iVar2 = 0x10; param_1 = puVar3, param_3 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + 1;
      puVar5 = puVar5 + 1;
    }
  }
  return;
}


/* FUN_00639c80 @ 00639c80  kind=gamemisc  attributed-by=caller-vote  size=57 */

undefined4 * FUN_00639c80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = param_3;
  if (param_1 != param_2) {
    puVar2 = param_1;
    do {
      *puVar1 = *puVar2;
      puVar1[1] = *(undefined4 *)((int)param_1 + (4 - (int)param_3) + (int)puVar1);
      puVar1[2] = puVar2[2];
      puVar2 = puVar2 + 3;
      puVar1 = puVar1 + 3;
    } while (puVar2 != param_2);
  }
  return puVar1;
}


/* FUN_00639cc0 @ 00639cc0  kind=gamemisc  attributed-by=caller-vote  size=44 */

int FUN_00639cc0(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    FUN_0067a7b0(param_1);
    param_3 = param_3 + 0xc;
  }
  return param_3;
}


/* FUN_00639f40 @ 00639f40  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * FUN_00639f40(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

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
  
  puStack_c = &LAB_006f5b60;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_00639d30(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    puVar4 = &uStack_34;
    if ((*param_3 < (uint)param_2[4]) ||
       ((local_14 = (undefined1 *)&uStack_34, *param_3 <= (uint)param_2[4] &&
        (local_14 = (undefined1 *)&uStack_34, puVar4 = &uStack_34, param_3[1] < (uint)param_2[5]))))
    {
LAB_00639fd1:
      local_14 = (undefined1 *)puVar4;
      FUN_00639d30(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    if ((*(uint *)(iVar2 + 0x10) < *param_3) ||
       ((local_14 = (undefined1 *)&uStack_34, *(uint *)(iVar2 + 0x10) <= *param_3 &&
        (local_14 = (undefined1 *)&uStack_34, *(uint *)(iVar2 + 0x14) < param_3[1])))) {
      local_14 = (undefined1 *)&uStack_34;
      FUN_00639d30(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    if ((*param_3 < (uint)param_2[4]) ||
       ((puVar4 = &uStack_34, *param_3 <= (uint)param_2[4] &&
        (puVar4 = &uStack_34, param_3[1] < (uint)param_2[5])))) {
      local_20 = param_2;
      FUN_0042c740();
      piVar3 = local_20;
      cVar5 = FUN_0063d7c0(local_20 + 4,param_3);
      puVar4 = (uint *)local_14;
      if (cVar5 != '\0') {
        if (*(char *)(piVar3[2] + 0xd) != '\0') {
          FUN_00639d30(param_1,0,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_00639fd1;
      }
    }
    local_14 = (undefined1 *)puVar4;
    cVar5 = FUN_0063d7c0(param_2 + 4,param_3);
    if (cVar5 != '\0') {
      local_20 = param_2;
      FUN_005c3ea0();
      piVar3 = local_20;
      if ((local_20 == piVar1) || (cVar5 = FUN_0063d7c0(param_3,local_20 + 4), cVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_00639d30(param_1,1,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00639d30(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_0063a380(local_24,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0063a380 @ 0063a380  kind=gamemisc  attributed-by=caller-vote  size=286 */

void FUN_0063a380(undefined4 *param_1,char param_2,uint *param_3,void *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar4 = param_3;
  puStack_c = &LAB_006f5ba0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  local_8 = 0;
  bVar8 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    uVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      uVar3 = piVar7[4];
      if (param_2 == '\0') {
        if ((uVar2 < uVar3) || ((uVar2 <= uVar3 && (param_3[1] < (uint)piVar7[5])))) {
          bVar8 = true;
          goto LAB_0063a422;
        }
        bVar8 = false;
LAB_0063a418:
        piVar6 = (int *)piVar7[2];
      }
      else {
        if ((uVar3 < uVar2) || ((uVar3 <= uVar2 && ((uint)piVar7[5] < param_3[1])))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        bVar8 = !bVar8;
        if (!bVar8) goto LAB_0063a418;
LAB_0063a422:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (bVar8) {
    if (piVar7 == (int *)*piVar1) {
      bVar8 = true;
      goto LAB_0063a441;
    }
    FUN_0042c740();
  }
  if ((*puVar4 <= (uint)_param_2[4]) &&
     ((*puVar4 < (uint)_param_2[4] || (puVar4[1] <= (uint)_param_2[5])))) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_0063a441:
  puVar5 = (undefined4 *)FUN_00639d30(&param_2,bVar8,piVar7,puVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0063a600 @ 0063a600  kind=gamemisc  attributed-by=caller-vote  size=140 */

undefined4 * FUN_0063a600(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 8);
    puVar1 = param_3 + 6;
    param_1 = param_1 - (int)param_3;
    do {
      *param_3 = *(undefined4 *)(param_1 + -0x18 + (int)puVar1);
      puVar1[-5] = puVar2[-1];
      puVar1[-4] = *puVar2;
      puVar1[-3] = puVar2[1];
      puVar1[-2] = puVar2[2];
      puVar1[-1] = puVar2[3];
      *puVar1 = puVar2[4];
      puVar1[1] = puVar2[5];
      puVar1[2] = puVar2[6];
      puVar1[3] = puVar2[7];
      puVar1[4] = puVar2[8];
      puVar1[5] = puVar2[9];
      *(undefined1 *)(puVar1 + 6) = *(undefined1 *)(puVar2 + 10);
      puVar1 = puVar1 + 0xd;
      param_3 = param_3 + 0xd;
      puVar2 = puVar2 + 0xd;
    } while (param_1 + -0x18 + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0063a740 @ 0063a740  kind=gamemisc  attributed-by=caller-vote  size=49 */

void FUN_0063a740(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_1 != param_2; param_1 = param_1 + 0x10) {
    if (param_3 != (undefined4 *)0x0) {
      puVar2 = param_1;
      puVar3 = param_3;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_3 = param_3 + 0x10;
  }
  return;
}


/* FUN_0063a780 @ 0063a780  kind=gamemisc  attributed-by=caller-vote  size=122 */

int FUN_0063a780(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f5bf1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0xc) {
    local_8 = 1;
    if (param_3 != 0) {
      FUN_005a7990(param_1);
    }
    param_3 = param_3 + 0xc;
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_0063a820 @ 0063a820  kind=gamemisc  attributed-by=caller-vote  size=48 */

undefined4 * FUN_0063a820(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
    }
    param_1 = param_1 + 1;
    param_3 = param_3 + 1;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0063a850 @ 0063a850  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 * FUN_0063a850(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
    }
    param_1 = param_1 + 2;
    param_3 = param_3 + 2;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0063a890 @ 0063a890  kind=gamemisc  attributed-by=caller-vote  size=66 */

undefined4 * FUN_0063a890(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
      param_3[3] = param_1[3];
    }
    param_1 = param_1 + 4;
    param_3 = param_3 + 4;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0063a980 @ 0063a980  kind=gamemisc  attributed-by=caller-vote  size=998 */

void FUN_0063a980(int *param_1,int *param_2,uint param_3,int param_4,char param_5,float param_6,
                 int param_7)

{
  float *pfVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  double dVar10;
  float fVar11;
  float fVar12;
  int local_18;
  uint local_8;
  
  if (0 < param_4) {
    local_8 = 0;
    local_18 = param_4;
    uVar7 = param_3;
    fVar12 = DAT_0076de94;
    do {
      fVar11 = 0.5;
      uVar5 = ((int)param_3 / 2 - param_3) + uVar7;
      iVar4 = *param_1;
      uVar8 = param_1[1] - iVar4 >> 2;
      *(float *)(iVar4 + (uVar5 % uVar8) * 4) =
           (*(float *)(iVar4 + (uVar7 % uVar8) * 4) + *(float *)(iVar4 + (local_8 % uVar8) * 4)) *
           0.5;
      if (param_7 == 0) {
        if ((DAT_0076de98 & 1) == 0) {
          dVar10 = 0.7853981852531433;
          DAT_0076de98 = DAT_0076de98 | 1;
          libm_sse2_cos_precise();
          fVar12 = 1.0 / ((float)dVar10 * 2.0 + 1.0);
          DAT_0076de94 = fVar12;
        }
        iVar4 = *param_2;
        uVar6 = param_2[1] - iVar4 >> 2;
        uVar8 = *(uint *)(iVar4 + (local_8 % uVar6) * 4);
        uVar9 = uVar8 & 0xffff;
        fVar11 = 0.5;
        if ((uVar9 == 3) && (*(short *)(iVar4 + (uVar7 % uVar6) * 4) != (short)uVar8)) {
          fVar11 = fVar12;
        }
        if ((*(short *)(iVar4 + (uVar7 % uVar6) * 4) == 3) && (uVar9 != 3)) {
          fVar11 = 1.0 - fVar12;
        }
      }
      iVar4 = *param_1;
      uVar8 = param_1[1] - iVar4 >> 2;
      *(float *)(iVar4 + (uVar5 % uVar8) * 4) =
           (1.0 - fVar11) * *(float *)(iVar4 + (uVar7 % uVar8) * 4) +
           *(float *)(iVar4 + (local_8 % uVar8) * 4) * fVar11;
      uVar6 = param_2[1] - *param_2 >> 2;
      uVar8 = *(uint *)(*param_2 + (local_8 % uVar6) * 4) & 0xffff;
      if (((uVar8 == 2) || (uVar9 = *(uint *)(*param_2 + (uVar7 % uVar6) * 4) & 0xffff, uVar9 == 2))
         || ((param_7 == 0 && ((uVar8 == 3 || (uVar9 == 3)))))) {
        *(undefined4 *)(*param_2 + (uVar5 % uVar6) * 4) = 2;
      }
      else {
        *(undefined4 *)(*param_2 + (uVar5 % uVar6) * 4) = 0;
      }
      local_8 = local_8 + param_3;
      uVar7 = uVar7 + param_3;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (param_5 != '\0') {
    param_4 = param_4 + 1;
  }
  if (1 < param_4) {
    local_18 = param_4 + -1;
    uVar7 = param_3;
    do {
      sVar2 = *(short *)(*param_2 + (uVar7 % (uint)(param_2[1] - *param_2 >> 2)) * 4);
      if (sVar2 != 1) {
        if (sVar2 == 3) {
          if (param_7 == 0) {
LAB_0063abde:
            iVar4 = *param_1;
            uVar5 = param_1[1] - iVar4 >> 2;
            *(float *)(iVar4 + (uVar7 % uVar5) * 4) =
                 (*(float *)(iVar4 + ((uVar7 - (int)param_3 / 2) % uVar5) * 4) +
                 *(float *)(iVar4 + ((uVar7 + (int)param_3 / 2) % uVar5) * 4)) * 0.5;
          }
        }
        else {
          if (sVar2 != 0) goto LAB_0063abde;
          uVar5 = param_1[1] - *param_1 >> 2;
          pfVar1 = (float *)(*param_1 + (uVar7 % uVar5) * 4);
          *pfVar1 = ((*(float *)(*param_1 + ((uVar7 - (int)param_3 / 2) % uVar5) * 4) +
                     *(float *)(*param_1 + ((uVar7 + (int)param_3 / 2) % uVar5) * 4)) * 0.5 -
                    *pfVar1) * param_6 + *pfVar1;
        }
      }
      uVar7 = uVar7 + param_3;
      local_18 = local_18 + -1;
    } while (local_18 != 0);
  }
  if (0 < param_4) {
    _param_5 = 0;
    do {
      iVar4 = *param_2;
      uVar5 = param_2[1] - iVar4 >> 2;
      sVar2 = *(short *)(iVar4 + (_param_5 % uVar5) * 4);
      uVar7 = _param_5 + param_3;
      sVar3 = *(short *)(iVar4 + (uVar7 % uVar5) * 4);
      if (((sVar2 == 2) || ((param_7 == 0 && (sVar2 == 3)))) &&
         ((sVar3 == 2 || ((param_7 == 0 && (sVar3 == 3)))))) {
        iVar4 = *param_1;
        uVar8 = _param_5 + (int)param_3 / 2;
        uVar5 = param_1[1] - iVar4 >> 2;
        *(float *)(iVar4 + (uVar8 % uVar5) * 4) =
             (*(float *)(iVar4 + (uVar7 % uVar5) * 4) + *(float *)(iVar4 + (_param_5 % uVar5) * 4))
             * 0.5;
        *(undefined4 *)(*param_2 + (uVar8 % (uint)(param_2[1] - *param_2 >> 2)) * 4) = 1;
      }
      param_4 = param_4 + -1;
      _param_5 = uVar7;
    } while (param_4 != 0);
  }
  return;
}


/* FUN_0063ad70 @ 0063ad70  kind=gamemisc  attributed-by=caller-vote  size=1510 */

void FUN_0063ad70(int *param_1,int *param_2,uint param_3,int param_4,char param_5,float param_6,
                 int param_7)

{
  float *pfVar1;
  float *pfVar2;
  undefined8 uVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  float fVar14;
  float fVar15;
  int local_40;
  uint local_3c;
  float local_38;
  float fStack_34;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0 < param_4) {
    iVar8 = (int)param_3 / 2 - param_3;
    local_3c = 0;
    local_40 = param_4;
    uVar10 = param_3;
    fVar14 = DAT_0076de84;
    do {
      fVar15 = 0.5;
      iVar6 = *param_1;
      uVar11 = param_1[1] - iVar6 >> 3;
      pfVar1 = (float *)(iVar6 + (uVar10 % uVar11) * 8);
      uVar3 = *(undefined8 *)(iVar6 + (local_3c % uVar11) * 8);
      local_28 = (float)uVar3;
      fStack_24 = (float)((ulonglong)uVar3 >> 0x20);
      local_30 = CONCAT44((pfVar1[1] + fStack_24) * 0.5,(*pfVar1 + local_28) * 0.5);
      *(undefined8 *)(iVar6 + ((iVar8 + uVar10) % uVar11) * 8) = local_30;
      if (param_7 == 0) {
        if ((DAT_0076de88 & 1) == 0) {
          dVar13 = 0.7853981852531433;
          DAT_0076de88 = DAT_0076de88 | 1;
          libm_sse2_cos_precise();
          fVar14 = 1.0 / ((float)dVar13 * 2.0 + 1.0);
          DAT_0076de84 = fVar14;
        }
        uVar9 = param_2[1] - *param_2 >> 2;
        uVar11 = *(uint *)(*param_2 + (local_3c % uVar9) * 4);
        uVar12 = uVar11 & 0xffff;
        fVar15 = 0.5;
        if ((uVar12 == 3) && (*(short *)(*param_2 + (uVar10 % uVar9) * 4) != (short)uVar11)) {
          fVar15 = fVar14;
        }
        if ((*(short *)(*param_2 + (uVar10 % uVar9) * 4) == 3) && (uVar12 != 3)) {
          fVar15 = 1.0 - fVar14;
        }
      }
      iVar6 = *param_1;
      uVar11 = param_1[1] - iVar6 >> 3;
      uVar3 = *(undefined8 *)(iVar6 + (uVar10 % uVar11) * 8);
      local_38 = (float)uVar3;
      fStack_34 = (float)((ulonglong)uVar3 >> 0x20);
      uVar3 = *(undefined8 *)(iVar6 + (local_3c % uVar11) * 8);
      local_10._0_4_ = (float)uVar3;
      local_10._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
      local_18 = CONCAT44(local_10._4_4_ * fVar15 + (1.0 - fVar15) * fStack_34,
                          (float)local_10 * fVar15 + (1.0 - fVar15) * local_38);
      *(undefined8 *)(iVar6 + ((iVar8 + uVar10) % uVar11) * 8) = local_18;
      uVar9 = param_2[1] - *param_2 >> 2;
      uVar11 = *(uint *)(*param_2 + (local_3c % uVar9) * 4) & 0xffff;
      if (((uVar11 == 2) ||
          (uVar12 = *(uint *)(*param_2 + (uVar10 % uVar9) * 4) & 0xffff, uVar12 == 2)) ||
         ((param_7 == 0 && ((uVar11 == 3 || (uVar12 == 3)))))) {
        *(undefined4 *)(*param_2 + ((iVar8 + uVar10) % uVar9) * 4) = 2;
      }
      else {
        *(undefined4 *)(*param_2 + ((iVar8 + uVar10) % uVar9) * 4) = 0;
      }
      local_3c = local_3c + param_3;
      uVar10 = uVar10 + param_3;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  if (param_5 != '\0') {
    param_4 = param_4 + 1;
  }
  if (1 < param_4) {
    local_40 = param_4 + -1;
    uVar10 = param_3;
    do {
      sVar4 = *(short *)(*param_2 + (uVar10 % (uint)(param_2[1] - *param_2 >> 2)) * 4);
      if (sVar4 != 1) {
        if (sVar4 == 3) {
          if (param_7 == 0) {
LAB_0063b084:
            iVar8 = *param_1;
            uVar11 = param_1[1] - iVar8 >> 3;
            pfVar1 = (float *)(iVar8 + ((uVar10 + (int)param_3 / 2) % uVar11) * 8);
            uVar3 = *(undefined8 *)(iVar8 + ((uVar10 - (int)param_3 / 2) % uVar11) * 8);
            local_28 = (float)uVar3;
            fStack_24 = (float)((ulonglong)uVar3 >> 0x20);
            local_20 = CONCAT44((pfVar1[1] + fStack_24) * 0.5,(*pfVar1 + local_28) * 0.5);
            *(undefined8 *)(iVar8 + (uVar10 % uVar11) * 8) = local_20;
          }
        }
        else {
          if (sVar4 != 0) goto LAB_0063b084;
          iVar8 = *param_1;
          uVar11 = param_1[1] - iVar8 >> 3;
          pfVar1 = (float *)(iVar8 + (uVar10 % uVar11) * 8);
          pfVar2 = (float *)(iVar8 + ((uVar10 + (int)param_3 / 2) % uVar11) * 8);
          uVar3 = *(undefined8 *)(iVar8 + ((uVar10 - (int)param_3 / 2) % uVar11) * 8);
          local_18._0_4_ = (float)uVar3;
          local_18._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
          fVar14 = pfVar2[1];
          *pfVar1 = *pfVar1 + ((*pfVar2 + (float)local_18) * 0.5 - *pfVar1) * param_6;
          pfVar1[1] = ((fVar14 + local_18._4_4_) * 0.5 - pfVar1[1]) * param_6 + pfVar1[1];
        }
      }
      uVar10 = uVar10 + param_3;
      local_40 = local_40 + -1;
    } while (local_40 != 0);
  }
  if (0 < param_4) {
    uVar10 = 0;
    do {
      iVar8 = *param_2;
      uVar9 = param_2[1] - iVar8 >> 2;
      sVar4 = *(short *)(iVar8 + (uVar10 % uVar9) * 4);
      uVar11 = uVar10 + param_3;
      sVar5 = *(short *)(iVar8 + (uVar11 % uVar9) * 4);
      if (((sVar4 == 2) || ((param_7 == 0 && (sVar4 == 3)))) &&
         ((sVar5 == 2 || ((param_7 == 0 && (sVar5 == 3)))))) {
        iVar8 = *param_1;
        uVar9 = param_1[1] - iVar8 >> 3;
        pfVar1 = (float *)(iVar8 + (uVar11 % uVar9) * 8);
        uVar3 = *(undefined8 *)(iVar8 + (uVar10 % uVar9) * 8);
        local_18._0_4_ = (float)uVar3;
        local_18._4_4_ = (float)((ulonglong)uVar3 >> 0x20);
        uVar10 = uVar10 + (int)param_3 / 2;
        local_10 = CONCAT44((pfVar1[1] + local_18._4_4_) * 0.5,(*pfVar1 + (float)local_18) * 0.5);
        *(undefined8 *)(iVar8 + (uVar10 % uVar9) * 8) = local_10;
        *(undefined4 *)(*param_2 + (uVar10 % (uint)(param_2[1] - *param_2 >> 2)) * 4) = 1;
      }
      param_4 = param_4 + -1;
      uVar10 = uVar11;
    } while (param_4 != 0);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0063b360 @ 0063b360  kind=gamemisc  attributed-by=caller-vote  size=2109 */

void FUN_0063b360(int *param_1,int *param_2,uint param_3,int param_4,char param_5,float param_6,
                 int param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  float *pfVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  double dVar14;
  float fVar15;
  float fVar16;
  int local_78;
  int local_74;
  uint local_70;
  undefined8 local_58;
  undefined8 local_50;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0 < param_4) {
    local_70 = 0;
    local_74 = param_4;
    uVar10 = param_3;
    fVar15 = DAT_0076de8c;
    do {
      iVar5 = *param_1;
      uVar11 = param_1[1] - iVar5 >> 4;
      fVar16 = 0.5;
      uVar7 = uVar10 + ((int)param_3 / 2 - param_3);
      pfVar8 = (float *)((uVar10 % uVar11) * 0x10 + iVar5);
      uVar1 = *(undefined8 *)(iVar5 + (local_70 % uVar11) * 0x10);
      uVar2 = *(undefined8 *)(iVar5 + 8 + (local_70 % uVar11) * 0x10);
      local_38 = (float)uVar1;
      fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
      local_30 = (float)uVar2;
      fStack_2c = (float)((ulonglong)uVar2 >> 0x20);
      local_58 = CONCAT44((pfVar8[1] + fStack_34) * 0.5,(*pfVar8 + local_38) * 0.5);
      local_50 = CONCAT44((pfVar8[3] + fStack_2c) * 0.5,(pfVar8[2] + local_30) * 0.5);
      *(undefined8 *)(iVar5 + (uVar7 % uVar11) * 0x10) = local_58;
      *(undefined8 *)(iVar5 + 8 + (uVar7 % uVar11) * 0x10) = local_50;
      if (param_7 == 0) {
        if ((DAT_0076de90 & 1) == 0) {
          dVar14 = 0.7853981852531433;
          DAT_0076de90 = DAT_0076de90 | 1;
          libm_sse2_cos_precise();
          fVar15 = 1.0 / ((float)dVar14 * 2.0 + 1.0);
          DAT_0076de8c = fVar15;
        }
        iVar5 = *param_2;
        uVar9 = param_2[1] - iVar5 >> 2;
        uVar11 = *(uint *)(iVar5 + (local_70 % uVar9) * 4);
        uVar12 = uVar11 & 0xffff;
        fVar16 = 0.5;
        if ((uVar12 == 3) && (*(short *)(iVar5 + (uVar10 % uVar9) * 4) != (short)uVar11)) {
          fVar16 = fVar15;
        }
        if ((*(short *)(iVar5 + (uVar10 % uVar9) * 4) == 3) && (uVar12 != 3)) {
          fVar16 = 1.0 - fVar15;
        }
      }
      iVar5 = *param_1;
      uVar11 = param_1[1] - iVar5 >> 4;
      uVar1 = *(undefined8 *)(iVar5 + (uVar10 % uVar11) * 0x10);
      uVar2 = *(undefined8 *)(iVar5 + 8 + (uVar10 % uVar11) * 0x10);
      local_28._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
      local_20._0_4_ = (float)uVar2;
      local_20._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
      local_28._0_4_ = (float)uVar1;
      fVar13 = 1.0 - fVar16;
      uVar1 = *(undefined8 *)(iVar5 + (local_70 % uVar11) * 0x10);
      uVar2 = *(undefined8 *)(iVar5 + 8 + (local_70 % uVar11) * 0x10);
      local_48 = (float)uVar1;
      fStack_44 = (float)((ulonglong)uVar1 >> 0x20);
      local_40 = (float)uVar2;
      fStack_3c = (float)((ulonglong)uVar2 >> 0x20);
      local_18 = CONCAT44(fStack_44 * fVar16 + local_28._4_4_ * fVar13,
                          local_48 * fVar16 + (float)local_28 * fVar13);
      local_10 = CONCAT44(fStack_3c * fVar16 + local_20._4_4_ * fVar13,
                          local_40 * fVar16 + (float)local_20 * fVar13);
      *(undefined8 *)(iVar5 + (uVar7 % uVar11) * 0x10) = local_18;
      *(undefined8 *)(iVar5 + 8 + (uVar7 % uVar11) * 0x10) = local_10;
      uVar9 = param_2[1] - *param_2 >> 2;
      uVar11 = *(uint *)(*param_2 + (local_70 % uVar9) * 4) & 0xffff;
      if (((uVar11 == 2) ||
          (uVar12 = *(uint *)(*param_2 + (uVar10 % uVar9) * 4) & 0xffff, uVar12 == 2)) ||
         ((param_7 == 0 && ((uVar11 == 3 || (uVar12 == 3)))))) {
        *(undefined4 *)(*param_2 + (uVar7 % uVar9) * 4) = 2;
      }
      else {
        *(undefined4 *)(*param_2 + (uVar7 % uVar9) * 4) = 0;
      }
      local_70 = local_70 + param_3;
      uVar10 = uVar10 + param_3;
      local_74 = local_74 + -1;
    } while (local_74 != 0);
  }
  if (param_5 != '\0') {
    param_4 = param_4 + 1;
  }
  if (1 < param_4) {
    local_78 = param_4 + -1;
    uVar10 = param_3;
    do {
      sVar3 = *(short *)(*param_2 + (uVar10 % (uint)(param_2[1] - *param_2 >> 2)) * 4);
      if (sVar3 != 1) {
        if (sVar3 == 3) {
          if (param_7 == 0) {
LAB_0063b762:
            iVar5 = *param_1;
            uVar11 = param_1[1] - iVar5 >> 4;
            uVar7 = (uVar10 - (int)param_3 / 2) % uVar11;
            pfVar8 = (float *)(((uVar10 + (int)param_3 / 2) % uVar11) * 0x10 + iVar5);
            uVar1 = *(undefined8 *)(iVar5 + uVar7 * 0x10);
            uVar2 = *(undefined8 *)(iVar5 + 8 + uVar7 * 0x10);
            local_38 = (float)uVar1;
            fStack_34 = (float)((ulonglong)uVar1 >> 0x20);
            local_30 = (float)uVar2;
            fStack_2c = (float)((ulonglong)uVar2 >> 0x20);
            local_28 = CONCAT44((pfVar8[1] + fStack_34) * 0.5,(local_38 + *pfVar8) * 0.5);
            local_20 = CONCAT44((pfVar8[3] + fStack_2c) * 0.5,(pfVar8[2] + local_30) * 0.5);
            *(undefined8 *)(iVar5 + (uVar10 % uVar11) * 0x10) = local_28;
            *(undefined8 *)(iVar5 + 8 + (uVar10 % uVar11) * 0x10) = local_20;
          }
        }
        else {
          if (sVar3 != 0) goto LAB_0063b762;
          iVar5 = *param_1;
          uVar9 = param_1[1] - iVar5 >> 4;
          uVar7 = uVar10 % uVar9;
          uVar11 = (uVar10 - (int)param_3 / 2) % uVar9;
          pfVar8 = (float *)(((uVar10 + (int)param_3 / 2) % uVar9) * 0x10 + iVar5);
          uVar1 = *(undefined8 *)(iVar5 + uVar11 * 0x10);
          uVar2 = *(undefined8 *)(iVar5 + 8 + uVar11 * 0x10);
          local_18._0_4_ = (float)uVar1;
          local_18._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
          fVar15 = pfVar8[1];
          fVar16 = pfVar8[2];
          local_10._0_4_ = (float)uVar2;
          local_10._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
          fVar13 = pfVar8[3];
          *(float *)(iVar5 + uVar7 * 0x10) =
               (((float)local_18 + *pfVar8) * 0.5 - *(float *)(iVar5 + uVar7 * 0x10)) * param_6 +
               *(float *)(iVar5 + uVar7 * 0x10);
          *(float *)(iVar5 + 4 + uVar7 * 0x10) =
               ((fVar15 + local_18._4_4_) * 0.5 - *(float *)(iVar5 + 4 + uVar7 * 0x10)) * param_6 +
               *(float *)(iVar5 + 4 + uVar7 * 0x10);
          *(float *)(iVar5 + 8 + uVar7 * 0x10) =
               ((fVar16 + (float)local_10) * 0.5 - *(float *)(iVar5 + 8 + uVar7 * 0x10)) * param_6 +
               *(float *)(iVar5 + 8 + uVar7 * 0x10);
          *(float *)(iVar5 + 0xc + uVar7 * 0x10) =
               ((fVar13 + local_10._4_4_) * 0.5 - *(float *)(iVar5 + 0xc + uVar7 * 0x10)) * param_6
               + *(float *)(iVar5 + 0xc + uVar7 * 0x10);
        }
      }
      uVar10 = uVar10 + param_3;
      local_78 = local_78 + -1;
    } while (local_78 != 0);
  }
  if (0 < param_4) {
    local_70 = 0;
    do {
      iVar5 = *param_2;
      uVar7 = param_2[1] - iVar5 >> 2;
      sVar3 = *(short *)(iVar5 + (local_70 % uVar7) * 4);
      uVar10 = local_70 + param_3;
      sVar4 = *(short *)(iVar5 + (uVar10 % uVar7) * 4);
      if (((sVar3 == 2) || ((param_7 == 0 && (sVar3 == 3)))) &&
         ((sVar4 == 2 || ((param_7 == 0 && (sVar4 == 3)))))) {
        iVar5 = *param_1;
        uVar7 = param_1[1] - iVar5 >> 4;
        pfVar8 = (float *)((uVar10 % uVar7) * 0x10 + iVar5);
        uVar1 = *(undefined8 *)(iVar5 + (local_70 % uVar7) * 0x10);
        uVar2 = *(undefined8 *)(iVar5 + 8 + (local_70 % uVar7) * 0x10);
        local_28._0_4_ = (float)uVar1;
        local_28._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
        local_70 = local_70 + (int)param_3 / 2;
        uVar7 = local_70 % uVar7;
        local_20._0_4_ = (float)uVar2;
        local_20._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
        local_18 = CONCAT44((pfVar8[1] + local_28._4_4_) * 0.5,(*pfVar8 + (float)local_28) * 0.5);
        local_10 = CONCAT44((pfVar8[3] + local_20._4_4_) * 0.5,(pfVar8[2] + (float)local_20) * 0.5);
        *(undefined8 *)(iVar5 + uVar7 * 0x10) = local_18;
        *(undefined8 *)(iVar5 + 8 + uVar7 * 0x10) = local_10;
        *(undefined4 *)(*param_2 + (local_70 % (uint)(param_2[1] - *param_2 >> 2)) * 4) = 1;
      }
      param_4 = param_4 + -1;
      local_70 = uVar10;
    } while (param_4 != 0);
  }
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0063bba0 @ 0063bba0  kind=gamemisc  attributed-by=caller-vote  size=1111 */

void FUN_0063bba0(int *param_1,uint param_2,int param_3,char param_4,float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  float *pfVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint local_54;
  int local_50;
  uint local_4c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar7 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (0 < param_3) {
    uVar8 = (int)param_2 / 2;
    iVar10 = param_2 - uVar8;
    local_54 = 0;
    local_50 = param_3;
    do {
      iVar6 = *param_1;
      uVar12 = param_1[1] - iVar6 >> 4;
      pfVar9 = (float *)(((uVar8 + iVar10) % uVar12) * 0x10 + iVar6);
      uVar4 = *(undefined8 *)(iVar6 + (local_54 % uVar12) * 0x10);
      uVar5 = *(undefined8 *)(iVar6 + 8 + (local_54 % uVar12) * 0x10);
      local_38 = (float)uVar4;
      uVar12 = uVar8 % uVar12;
      fStack_34 = (float)((ulonglong)uVar4 >> 0x20);
      uVar8 = uVar8 + param_2;
      local_30 = (float)uVar5;
      fStack_2c = (float)((ulonglong)uVar5 >> 0x20);
      local_50 = local_50 + -1;
      local_18 = CONCAT44((pfVar9[1] + fStack_34) * 0.5,(*pfVar9 + local_38) * 0.5);
      local_10 = CONCAT44((pfVar9[3] + fStack_2c) * 0.5,(pfVar9[2] + local_30) * 0.5);
      *(undefined8 *)(iVar6 + uVar12 * 0x10) = local_18;
      *(undefined8 *)(iVar6 + 8 + uVar12 * 0x10) = local_10;
      local_54 = local_54 + param_2;
    } while (local_50 != 0);
  }
  if (param_4 != '\0') {
    param_3 = param_3 + 1;
  }
  if (1 < param_3) {
    local_54 = -((int)param_2 / 2);
    local_50 = param_3 + -1;
    uVar8 = param_2;
    do {
      local_54 = param_2 + local_54;
      iVar10 = *param_1;
      uVar12 = param_1[1] - iVar10 >> 4;
      uVar11 = uVar8 % uVar12;
      pfVar9 = (float *)((((int)param_2 / 2 + uVar8) % uVar12) * 0x10 + iVar10);
      uVar4 = *(undefined8 *)(iVar10 + (local_54 % uVar12) * 0x10);
      uVar5 = *(undefined8 *)(iVar10 + 8 + (local_54 % uVar12) * 0x10);
      local_18._0_4_ = (float)uVar4;
      local_18._4_4_ = (float)((ulonglong)uVar4 >> 0x20);
      fVar1 = pfVar9[1];
      fVar2 = pfVar9[2];
      local_10._0_4_ = (float)uVar5;
      local_10._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      fVar3 = pfVar9[3];
      *(float *)(iVar10 + uVar11 * 0x10) =
           *(float *)(iVar10 + uVar11 * 0x10) +
           ((*pfVar9 + (float)local_18) * 0.5 - *(float *)(iVar10 + uVar11 * 0x10)) * param_5;
      *(float *)(iVar10 + 4 + uVar11 * 0x10) =
           *(float *)(iVar10 + 4 + uVar11 * 0x10) +
           ((fVar1 + local_18._4_4_) * 0.5 - *(float *)(iVar10 + 4 + uVar11 * 0x10)) * param_5;
      *(float *)(iVar10 + 8 + uVar11 * 0x10) =
           *(float *)(iVar10 + 8 + uVar11 * 0x10) +
           ((fVar2 + (float)local_10) * 0.5 - *(float *)(iVar10 + 8 + uVar11 * 0x10)) * param_5;
      *(float *)(iVar10 + 0xc + uVar11 * 0x10) =
           *(float *)(iVar10 + 0xc + uVar11 * 0x10) +
           ((fVar3 + local_10._4_4_) * 0.5 - *(float *)(iVar10 + 0xc + uVar11 * 0x10)) * param_5;
      uVar8 = uVar8 + param_2;
      local_50 = local_50 + -1;
    } while (local_50 != 0);
  }
  if (0 < param_3) {
    uVar8 = (int)param_2 / 2;
    iVar10 = param_2 - uVar8;
    local_4c = 0;
    do {
      iVar6 = *param_1;
      uVar12 = param_1[1] - iVar6 >> 4;
      pfVar9 = (float *)(((uVar8 + iVar10) % uVar12) * 0x10 + iVar6);
      uVar4 = *(undefined8 *)(iVar6 + (local_4c % uVar12) * 0x10);
      uVar5 = *(undefined8 *)(iVar6 + 8 + (local_4c % uVar12) * 0x10);
      local_28 = (float)uVar4;
      fStack_24 = (float)((ulonglong)uVar4 >> 0x20);
      local_20 = (float)uVar5;
      fStack_1c = (float)((ulonglong)uVar5 >> 0x20);
      uVar12 = uVar8 % uVar12;
      uVar8 = uVar8 + param_2;
      local_18 = CONCAT44((pfVar9[1] + fStack_24) * 0.5,(local_28 + *pfVar9) * 0.5);
      param_3 = param_3 + -1;
      local_10 = CONCAT44((pfVar9[3] + fStack_1c) * 0.5,(pfVar9[2] + local_20) * 0.5);
      *(undefined8 *)(iVar6 + uVar12 * 0x10) = local_18;
      *(undefined8 *)(iVar6 + 8 + uVar12 * 0x10) = local_10;
      local_4c = local_4c + param_2;
    } while (param_3 != 0);
  }
  __security_check_cookie(uVar7 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0063c000 @ 0063c000  kind=gamemisc  attributed-by=caller-vote  size=143 */

void FUN_0063c000(int *param_1)

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
  puStack_c = &LAB_006f5c10;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0065ae10(param_1[1] - *param_1 >> 2);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0063a820(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063c0b0 @ 0063c0b0  kind=gamemisc  attributed-by=caller-vote  size=143 */

void FUN_0063c0b0(int *param_1)

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
  puStack_c = &LAB_006f5c30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0046d440(param_1[1] - *param_1 >> 3);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0063a850(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063c160 @ 0063c160  kind=gamemisc  attributed-by=caller-vote  size=143 */

void FUN_0063c160(int *param_1)

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
  puStack_c = &LAB_006f5c50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  cVar2 = FUN_0063d8c0(param_1[1] - *param_1 >> 4);
  if (cVar2 != '\0') {
    local_8 = 0;
    uVar3 = FUN_0063a890(*piVar1,piVar1[1],*in_ECX,(int)&param_1 + 3,param_1);
    in_ECX[1] = uVar3;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063cd20 @ 0063cd20  kind=gamemisc  attributed-by=caller-vote  size=239 */

int FUN_0063cd20(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f64cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00661680(param_1);
  iVar6 = *(int *)(in_ECX + 0x4c);
  piVar1 = (int *)(in_ECX + 0x4c);
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - iVar6 & 0xfffffffcU)) {
    do {
      puVar2 = *(undefined4 **)(iVar6 + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        if ((void *)*puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar2);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      iVar6 = *piVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x50) - iVar6 >> 2);
  }
  FUN_0040d9d0(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2);
  iVar6 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *piVar1 & 0xfffffffcU)) {
    do {
      pvVar3 = operator_new(0xc);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0063c000(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4));
      }
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar1 + -4 + iVar6 * 4) = uVar4;
      local_8 = 0xffffffff;
    } while (iVar6 < *(int *)(in_ECX + 0x50) - *piVar1 >> 2);
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_0063ce30 @ 0063ce30  kind=gamemisc  attributed-by=caller-vote  size=239 */

int FUN_0063ce30(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f64cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00661680(param_1);
  iVar6 = *(int *)(in_ECX + 0x4c);
  piVar1 = (int *)(in_ECX + 0x4c);
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - iVar6 & 0xfffffffcU)) {
    do {
      puVar2 = *(undefined4 **)(iVar6 + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        if ((void *)*puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar2);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      iVar6 = *piVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x50) - iVar6 >> 2);
  }
  FUN_0040d9d0(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2);
  iVar6 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *piVar1 & 0xfffffffcU)) {
    do {
      pvVar3 = operator_new(0xc);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0063c0b0(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4));
      }
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar1 + -4 + iVar6 * 4) = uVar4;
      local_8 = 0xffffffff;
    } while (iVar6 < *(int *)(in_ECX + 0x50) - *piVar1 >> 2);
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_0063cf40 @ 0063cf40  kind=gamemisc  attributed-by=caller-vote  size=239 */

int FUN_0063cf40(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f64cb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_00661680(param_1);
  iVar6 = *(int *)(in_ECX + 0x4c);
  piVar1 = (int *)(in_ECX + 0x4c);
  iVar5 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - iVar6 & 0xfffffffcU)) {
    do {
      puVar2 = *(undefined4 **)(iVar6 + iVar5 * 4);
      if (puVar2 != (undefined4 *)0x0) {
        if ((void *)*puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar2);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar2);
      }
      iVar6 = *piVar1;
      iVar5 = iVar5 + 1;
    } while (iVar5 < *(int *)(in_ECX + 0x50) - iVar6 >> 2);
  }
  FUN_0040d9d0(*(int *)(param_1 + 0x50) - *(int *)(param_1 + 0x4c) >> 2);
  iVar6 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *piVar1 & 0xfffffffcU)) {
    do {
      pvVar3 = operator_new(0xc);
      local_8 = 0;
      if (pvVar3 == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0063c160(*(undefined4 *)(*(int *)(param_1 + 0x4c) + iVar6 * 4));
      }
      iVar6 = iVar6 + 1;
      *(undefined4 *)(*piVar1 + -4 + iVar6 * 4) = uVar4;
      local_8 = 0xffffffff;
    } while (iVar6 < *(int *)(in_ECX + 0x50) - *piVar1 >> 2);
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_0063d050 @ 0063d050  kind=gamemisc  attributed-by=caller-vote  size=256 */

void FUN_0063d050(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int *piVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int *in_ECX;
  uint uVar7;
  int iVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5e60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar6 = *param_1;
    if (iVar6 == param_1[1]) {
      iVar6 = *in_ECX;
    }
    else {
      pvVar2 = (void *)*in_ECX;
      uVar5 = param_1[1] - iVar6 >> 6;
      uVar7 = in_ECX[1] - (int)pvVar2 >> 6;
      if (uVar7 < uVar5) {
        if ((uint)(in_ECX[2] - (int)pvVar2 >> 6) < uVar5) {
          if (pvVar2 != (void *)0x0) {
            param_1 = (int *)uVar5;
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar2);
          }
          piVar1 = param_1 + 1;
          iVar6 = *param_1;
          param_1 = (int *)uVar5;
          cVar4 = FUN_0063d850(*piVar1 - iVar6 >> 6);
          if (cVar4 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar6 = FUN_0063a740(*piVar3,piVar3[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar8 = uVar7 * 0x40 + iVar6;
          param_1 = (int *)uVar5;
          _Uninitialized_move<>(iVar6,iVar8,pvVar2);
          iVar6 = FUN_0063a740(iVar8,piVar3[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar5;
        _Uninitialized_move<>(iVar6,*piVar1,pvVar2);
        iVar6 = (piVar3[1] - *piVar3 & 0xffffffc0U) + *in_ECX;
      }
    }
    in_ECX[1] = iVar6;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063d170 @ 0063d170  kind=gamemisc  attributed-by=caller-vote  size=262 */

void FUN_0063d170(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  int *in_ECX;
  uint uVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5e80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar7 = *param_1;
    if (iVar7 == param_1[1]) {
      iVar7 = *in_ECX;
    }
    else {
      pvVar2 = (void *)*in_ECX;
      uVar6 = in_ECX[1] - (int)pvVar2 >> 3;
      uVar8 = param_1[1] - iVar7 >> 3;
      if (uVar6 < uVar8) {
        if ((uint)(in_ECX[2] - (int)pvVar2 >> 3) < uVar8) {
          if (pvVar2 != (void *)0x0) {
            param_1 = (int *)uVar6;
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar2);
          }
          piVar1 = param_1 + 1;
          iVar7 = *param_1;
          param_1 = (int *)uVar6;
          cVar5 = FUN_0046d440(*piVar1 - iVar7 >> 3);
          if (cVar5 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar7 = FUN_00427ab0(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar7 = iVar7 + uVar6 * 8;
          iVar3 = *param_1;
          param_1 = (int *)uVar6;
          FUN_00639c50(iVar3,iVar7,pvVar2);
          iVar7 = FUN_00427ab0(iVar7,piVar4[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar6;
        FUN_00639c50(iVar7,*piVar1,pvVar2);
        iVar7 = *in_ECX + (piVar4[1] - *piVar4 >> 3) * 8;
      }
    }
    in_ECX[1] = iVar7;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063d290 @ 0063d290  kind=gamemisc  attributed-by=caller-vote  size=343 */

void FUN_0063d290(int *param_1)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  char cVar7;
  int iVar8;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar6 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5ea0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    if (*param_1 == param_1[1]) {
      iVar8 = *in_ECX;
    }
    else {
      pvVar2 = (void *)*in_ECX;
      uVar4 = (param_1[1] - *param_1) / 0xc;
      uVar5 = (in_ECX[1] - (int)pvVar2) / 0xc;
      if (uVar5 < uVar4) {
        if ((uint)((in_ECX[2] - (int)pvVar2) / 0xc) < uVar4) {
          if (pvVar2 != (void *)0x0) {
            param_1 = (int *)uVar4;
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar2);
          }
          piVar1 = param_1 + 1;
          iVar8 = *param_1;
          param_1 = (int *)uVar4;
          cVar7 = FUN_0044b6d0((*piVar1 - iVar8) / 0xc);
          if (cVar7 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar8 = FUN_00666110(*piVar6,piVar6[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar3 = *param_1;
          iVar8 = iVar3 + uVar5 * 0xc;
          param_1 = (int *)uVar4;
          FUN_00639c80(iVar3,iVar8,*in_ECX);
          iVar8 = FUN_00666110(iVar8,piVar6[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        iVar8 = *param_1;
        piVar1 = param_1 + 1;
        param_1 = (int *)uVar4;
        FUN_00639c80(iVar8,*piVar1,pvVar2);
        iVar8 = *in_ECX + ((piVar6[1] - *piVar6) / 0xc) * 0xc;
      }
    }
    in_ECX[1] = iVar8;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063d400 @ 0063d400  kind=gamemisc  attributed-by=caller-vote  size=262 */

void FUN_0063d400(int *param_1)

{
  void *pvVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  int *in_ECX;
  uint uVar5;
  uint uVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (in_ECX != param_1) {
    iVar4 = *param_1;
    if (iVar4 == param_1[1]) {
      iVar4 = *in_ECX;
    }
    else {
      pvVar1 = (void *)*in_ECX;
      uVar5 = param_1[1] - iVar4 >> 4;
      uVar6 = in_ECX[1] - (int)pvVar1 >> 4;
      if (uVar6 < uVar5) {
        if ((uint)(in_ECX[2] - (int)pvVar1 >> 4) < uVar5) {
          if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar1);
          }
          cVar3 = FUN_0063d8c0(param_1[1] - *param_1 >> 4);
          if (cVar3 == '\0') {
            ExceptionList = local_10;
            return;
          }
          local_8 = 0;
          iVar4 = FUN_00427af0(*piVar2,piVar2[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar4 = uVar6 * 0x10 + *param_1;
          FUN_00427a30(*param_1,iVar4,pvVar1,param_1);
          iVar4 = FUN_00427af0(iVar4,piVar2[1],in_ECX[1],(int)&param_1 + 3,param_1);
        }
      }
      else {
        FUN_00427a30(iVar4,param_1[1],pvVar1,param_1);
        iVar4 = (piVar2[1] - *piVar2 & 0xfffffff0U) + *in_ECX;
      }
    }
    in_ECX[1] = iVar4;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0063d520 @ 0063d520  kind=gamemisc  attributed-by=caller-vote  size=432 */

int * FUN_0063d520(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  void **ppvVar5;
  uint *puVar6;
  char cVar7;
  int *in_ECX;
  int iVar8;
  int iVar9;
  uint uStack_3c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5ee0;
  local_10 = ExceptionList;
  uStack_3c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  if (in_ECX != param_1) {
    iVar9 = *param_1;
    iVar1 = param_1[1];
    if (iVar9 == iVar1) {
      ExceptionList = &local_10;
      local_14 = (undefined1 *)&uStack_3c;
      FUN_00639cf0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
      iVar9 = *in_ECX;
    }
    else {
      iVar8 = *in_ECX;
      uVar2 = (iVar1 - iVar9) / 0xc;
      uVar3 = (in_ECX[1] - iVar8) / 0xc;
      ppvVar5 = &local_10;
      puVar6 = &uStack_3c;
      if (uVar3 < uVar2) {
        if ((uint)((in_ECX[2] - iVar8) / 0xc) < uVar2) {
          if (iVar8 != 0) {
            ExceptionList = &local_10;
            local_14 = (undefined1 *)&uStack_3c;
            FUN_00639cf0(iVar8,in_ECX[1],&local_15,param_1);
                    /* WARNING: Subroutine does not return */
            operator_delete((void *)*in_ECX);
          }
          ExceptionList = &local_10;
          cVar7 = FUN_0044b6d0((param_1[1] - *param_1) / 0xc);
          if (cVar7 == '\0') {
            ExceptionList = local_10;
            return in_ECX;
          }
          local_8 = 0;
          iVar9 = FUN_0063a780(*piVar4,piVar4[1],*in_ECX,(int)&param_1 + 3,param_1);
        }
        else {
          iVar1 = iVar9 + uVar3 * 0xc;
          ExceptionList = &local_10;
          local_14 = (undefined1 *)&uStack_3c;
          FUN_00639cc0(iVar9,iVar1,iVar8);
          iVar9 = FUN_0063a780(iVar1,param_1[1],in_ECX[1],&local_15,param_1);
        }
      }
      else {
        for (; local_14 = (undefined1 *)puVar6, ExceptionList = ppvVar5, iVar9 != iVar1;
            iVar9 = iVar9 + 0xc) {
          FUN_0067a7b0(iVar9);
          iVar8 = iVar8 + 0xc;
          ppvVar5 = ExceptionList;
          puVar6 = (uint *)local_14;
        }
        FUN_00639cf0(iVar8,in_ECX[1],&local_15,param_1);
        iVar9 = *in_ECX + ((param_1[1] - *param_1) / 0xc) * 0xc;
      }
    }
    in_ECX[1] = iVar9;
  }
  ExceptionList = local_10;
  return in_ECX;
}


/* FUN_0063d6f0 @ 0063d6f0  kind=gamemisc  attributed-by=caller-vote  size=51 */

int FUN_0063d6f0(uint param_1)

{
  uint uVar1;
  int in_ECX;
  
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(param_1);
  return (param_1 - (1 << ((byte)uVar1 & 0x1f) & 0xfffffffeU)) * 0x4c +
         *(int *)(*(int *)(in_ECX + 0x1c) + uVar1 * 4);
}


/* FUN_0063d7c0 @ 0063d7c0  kind=gamemisc  attributed-by=caller-vote  size=39 */

undefined4 FUN_0063d7c0(uint *param_1,uint *param_2)

{
  if ((*param_2 <= *param_1) && ((*param_2 < *param_1 || (param_2[1] <= param_1[1])))) {
    return 0;
  }
  return 1;
}


/* FUN_0063d850 @ 0063d850  kind=gamemisc  attributed-by=caller-vote  size=101 */

uint FUN_0063d850(uint param_1)

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
  if (0x3ffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x40);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x40);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0063d8c0 @ 0063d8c0  kind=gamemisc  attributed-by=caller-vote  size=101 */

uint FUN_0063d8c0(uint param_1)

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
  if (0xfffffff < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x10);
  if (pvVar1 != (void *)0x0) {
    *in_ECX = pvVar1;
    in_ECX[1] = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x10);
    in_ECX[2] = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0063daa0 @ 0063daa0  kind=gamemisc  attributed-by=caller-vote  size=208 */

void FUN_0063daa0(void *param_1)

{
  uint uVar1;
  undefined4 *in_ECX;
  void *pvVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar1 = (uint)param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5f00;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar2 = (void *)0x0;
  if (param_1 != (void *)0x0) {
    if (param_1 < 0x4ec4ec5) {
      pvVar2 = operator_new((int)param_1 * 0x34);
      if (pvVar2 != (void *)0x0) goto LAB_0063db01;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0063db01:
  local_8 = 0;
  FUN_0063a8e0(*in_ECX,in_ECX[1],pvVar2,(int)&param_1 + 3,0,param_1);
  param_1 = (void *)*in_ECX;
  if (param_1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_1);
  }
  in_ECX[2] = (void *)(uVar1 * 0x34 + (int)pvVar2);
  in_ECX[1] = (void *)(((in_ECX[1] - (int)param_1) / 0x34) * 0x34 + (int)pvVar2);
  *in_ECX = pvVar2;
  ExceptionList = local_10;
  return;
}


/* FUN_0063db90 @ 0063db90  kind=gamemisc  attributed-by=caller-vote  size=218 */

void FUN_0063db90(uint param_1)

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
  puStack_c = &LAB_006f5f20;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x15555556) {
      pvVar3 = operator_new(param_1 * 0xc);
      if (pvVar3 != (void *)0x0) goto LAB_0063dbef;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_0063dbef:
  local_8 = 0;
  FUN_00457040(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  iVar1 = *in_ECX;
  if (*in_ECX != 0) {
    FUN_00639cf0(*in_ECX,in_ECX[1],(int)&param_1 + 3,param_1);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*in_ECX);
  }
  *in_ECX = (int)pvVar3;
  in_ECX[2] = (int)((int)pvVar3 + uVar2 * 0xc);
  in_ECX[1] = (int)((int)pvVar3 + ((in_ECX[1] - iVar1) / 0xc) * 0xc);
  ExceptionList = local_10;
  return;
}


/* FUN_0063dd10 @ 0063dd10  kind=gamemisc  attributed-by=caller-vote  size=162 */

void FUN_0063dd10(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0x34)) {
    return;
  }
  if (0x4ec4ec4U - (in_ECX[1] - *in_ECX) / 0x34 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0x34;
  if (0x4ec4ec4 - (uVar1 >> 1) < uVar1) {
    FUN_0063daa0();
    return;
  }
  FUN_0063daa0();
  return;
}


/* FUN_0063ddc0 @ 0063ddc0  kind=gamemisc  attributed-by=caller-vote  size=159 */

void FUN_0063ddc0(uint param_1)

{
  uint uVar1;
  int *in_ECX;
  
  if (param_1 <= (uint)((in_ECX[2] - in_ECX[1]) / 0xc)) {
    return;
  }
  if (0x15555555U - (in_ECX[1] - *in_ECX) / 0xc < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = (in_ECX[2] - *in_ECX) / 0xc;
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
    FUN_0063db90();
    return;
  }
  FUN_0063db90();
  return;
}


/* FUN_0063deb0 @ 0063deb0  kind=gamemisc  attributed-by=caller-vote  size=175 */

int FUN_0063deb0(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *piVar4;
  int iVar5;
  double dVar6;
  double dVar7;
  
  if ((*(char *)(in_ECX + 0xb2c) != '\0') && (2 < *(int *)(in_ECX + 0xb24))) {
    piVar4 = *(int **)(in_ECX + 0x86c);
    iVar3 = (*(int *)(in_ECX + 0x870) - (int)piVar4) / 0xc;
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        piVar1 = piVar4 + 1;
        iVar2 = *piVar4;
        piVar4 = piVar4 + 3;
        iVar5 = iVar5 + (*piVar1 - iVar2 >> 2);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    dVar6 = (double)(2560.0 / (float)iVar5);
    libm_sse2_log_precise();
    dVar7 = 4.0;
    libm_sse2_log_precise();
    iVar3 = (int)((float)dVar6 / (float)dVar7) + 1;
    if (iVar3 < *(int *)(in_ECX + 0xb24)) {
      return iVar3;
    }
  }
  return *(int *)(in_ECX + 0xb24);
}


/* FUN_0063fec0 @ 0063fec0  kind=gamemisc  attributed-by=caller-vote  size=3851 */

void FUN_0063fec0(void)

{
  byte *pbVar1;
  char cVar2;
  bool bVar3;
  int *piVar4;
  int **ppiVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  int *piVar9;
  uint *puVar10;
  uint *puVar11;
  uint *puVar12;
  uint **ppuVar13;
  undefined4 *puVar14;
  undefined4 **ppuVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  int in_ECX;
  int *piVar18;
  uint uVar19;
  undefined4 *puVar20;
  uint uVar21;
  _Concurrent_vector_base_v4 *p_Var22;
  int iVar23;
  int iVar24;
  int iVar25;
  undefined1 local_108 [4];
  uint local_104;
  uint local_100;
  undefined4 local_fc;
  int local_f8;
  int local_f4;
  undefined4 local_f0;
  uint local_ec;
  uint local_e8;
  undefined4 local_e4;
  uint local_e0;
  uint local_dc;
  undefined4 local_d8;
  int local_d4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  undefined4 local_c0;
  int local_bc;
  uint *local_b8;
  undefined4 local_b4;
  int local_b0;
  int local_ac;
  undefined4 local_a8;
  undefined4 *local_a4;
  int *local_a0;
  undefined4 *local_9c;
  undefined4 *local_98;
  undefined4 *local_94;
  int *local_90;
  undefined4 *local_8c;
  int *local_88;
  uint *local_84;
  int *local_80;
  int *local_7c;
  uint *local_78;
  uint *local_74;
  int *local_70;
  int *local_6c;
  uint *local_68;
  undefined4 local_64;
  int *local_60;
  uint *local_5c;
  uint local_58;
  int *local_54;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  uint local_44;
  int local_40;
  int *local_3c;
  undefined4 local_38;
  int *local_34;
  uint *local_30;
  uint *local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5f58;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0xc0c) = 0xf;
  local_24 = in_ECX;
  if (*(int *)(in_ECX + 0xb24) < 1) {
    if (0 < *(int *)(in_ECX + 0xb24)) {
      p_Var22 = (_Concurrent_vector_base_v4 *)(in_ECX + 0x8e8);
      iVar24 = 0;
      do {
        Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                  (p_Var22 + 0x20,cube::Controller::vfunction12);
        Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                  (p_Var22,cube::Controller::vfunction12);
        iVar24 = iVar24 + 1;
        p_Var22 = p_Var22 + 0x60;
      } while (iVar24 < *(int *)(local_24 + 0xb24));
    }
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  FUN_0042be50(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_0042be00(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_0040d9d0(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_0040d9d0(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_0042be50(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_0042be50(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_0042be50(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_006428a0(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  FUN_006428f0(((int *)**(int **)(in_ECX + 0xa8))[1] - *(int *)**(int **)(in_ECX + 0xa8) >> 3);
  piVar18 = (int *)(in_ECX + 0x86c);
  local_6c = piVar18;
  FUN_006428f0((*(int *)(in_ECX + 0x870) - *(int *)(in_ECX + 0x86c)) / 0xc);
  *(undefined4 *)(in_ECX + 0xb64) = *(undefined4 *)(in_ECX + 0xb60);
  local_2c = (uint *)0x0;
  local_3c = (int *)0x0;
  local_38 = 0;
  piVar4 = (int *)FUN_0046d4b0();
  local_8 = 0;
  local_30 = (uint *)0x0;
  local_3c = piVar4;
  if (0 < (*(int *)(in_ECX + 0x870) - *piVar18) / 0xc) {
    local_34 = (int *)0x0;
    do {
      iVar24 = *piVar18;
      iVar25 = *(int *)(iVar24 + (int)local_34);
      local_60 = (int *)(iVar24 + (int)local_34);
      local_44 = *(int *)(iVar24 + 4 + (int)local_34) - iVar25 >> 2;
      if ((2 < local_44) && (0 < (int)local_44)) {
        local_28 = 1;
        local_40 = 0;
        do {
          iVar24 = *(int *)(local_40 + iVar25);
          piVar18 = (int *)piVar4[1];
          local_5c = *(uint **)(iVar25 + (local_28 % local_44) * 4);
          piVar6 = piVar18;
          if (*(char *)((int)piVar18 + 0xd) == '\0') {
            do {
              if ((piVar6[4] < iVar24) || ((piVar6[4] <= iVar24 && (piVar6[5] < (int)local_5c)))) {
                piVar9 = (int *)piVar6[2];
              }
              else {
                piVar9 = (int *)*piVar6;
                piVar4 = piVar6;
              }
              piVar6 = piVar9;
            } while (*(char *)((int)piVar9 + 0xd) == '\0');
            if (((piVar4 == local_3c) || (iVar24 < piVar4[4])) ||
               ((iVar24 <= piVar4[4] && ((int)local_5c < piVar4[5])))) goto LAB_0064016e;
            local_88 = piVar4;
            ppiVar5 = &local_88;
          }
          else {
LAB_0064016e:
            local_a0 = local_3c;
            ppiVar5 = &local_a0;
          }
          if (*ppiVar5 == local_3c) {
            iVar24 = *(int *)(*local_60 + (local_28 % local_44) * 4);
            iVar25 = *(int *)(local_40 + *local_60);
            cVar2 = *(char *)((int)piVar18 + 0xd);
            piVar4 = local_3c;
            while (cVar2 == '\0') {
              if ((piVar18[4] < iVar25) || ((piVar18[4] <= iVar25 && (piVar18[5] < iVar24)))) {
                piVar6 = (int *)piVar18[2];
              }
              else {
                piVar6 = (int *)*piVar18;
                piVar4 = piVar18;
              }
              piVar18 = piVar6;
              cVar2 = *(char *)((int)piVar6 + 0xd);
            }
            if (((piVar4 == local_3c) || (iVar25 < piVar4[4])) ||
               ((iVar25 <= piVar4[4] && (iVar24 < piVar4[5])))) {
              local_a8 = 0;
              local_b0 = iVar25;
              local_ac = iVar24;
              iVar24 = FUN_00639be0(&local_b0);
              FUN_005c0630(&local_90,piVar4,iVar24 + 0x10,iVar24);
              piVar4 = local_90;
            }
            piVar4[6] = (int)local_2c;
            iVar24 = *local_60;
            iVar25 = *(int *)(iVar24 + (local_28 % (uint)(local_60[1] - iVar24 >> 2)) * 4);
            iVar24 = *(int *)(local_40 + iVar24);
            cVar2 = *(char *)(local_3c[1] + 0xd);
            piVar18 = (int *)local_3c[1];
            piVar4 = local_3c;
            while (cVar2 == '\0') {
              if ((piVar18[4] < iVar25) || ((piVar18[4] <= iVar25 && (piVar18[5] < iVar24)))) {
                piVar6 = (int *)piVar18[2];
              }
              else {
                piVar6 = (int *)*piVar18;
                piVar4 = piVar18;
              }
              piVar18 = piVar6;
              cVar2 = *(char *)((int)piVar6 + 0xd);
            }
            if (((piVar4 == local_3c) || (iVar25 < piVar4[4])) ||
               ((iVar25 <= piVar4[4] && (iVar24 < piVar4[5])))) {
              local_f0 = 0;
              local_f8 = iVar25;
              local_f4 = iVar24;
              iVar24 = FUN_00639be0(&local_f8);
              FUN_005c0630(&local_7c,piVar4,iVar24 + 0x10,iVar24);
              piVar4 = local_7c;
            }
            puVar8 = local_2c;
            local_20 = (int)local_30;
            local_1c = local_28 - 1;
            piVar4[6] = (int)local_2c;
            local_18 = local_2c;
            FUN_00674ee0(&local_20);
            local_2c = (uint *)((int)puVar8 + 1);
          }
          iVar25 = *local_60;
          uVar19 = local_28 + 1;
          local_44 = local_60[1] - iVar25 >> 2;
          local_40 = local_40 + 4;
          bVar3 = (int)local_28 < (int)local_44;
          piVar4 = local_3c;
          local_28 = uVar19;
        } while (bVar3);
      }
      local_34 = local_34 + 3;
      local_30 = (uint *)((int)local_30 + 1);
      piVar18 = local_6c;
    } while ((int)local_30 < (local_6c[1] - *local_6c) / 0xc);
  }
  iVar24 = local_24;
  FUN_006428f0(local_2c);
  p_Var22 = (_Concurrent_vector_base_v4 *)(iVar24 + 0x8e8);
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
            (p_Var22,cube::Controller::vfunction12);
  FUN_0063d520(piVar18);
  iVar24 = *(int *)(iVar24 + 0x870);
  uVar19 = 0;
  if (0 < (iVar24 - *(int *)(local_24 + 0x86c)) / 0xc) {
    piVar18 = *(int **)(local_24 + 0x86c);
    iVar24 = (iVar24 - (int)piVar18) / 0xc;
    do {
      uVar7 = piVar18[1] - *piVar18 >> 2;
      if (2 < uVar7) {
        uVar19 = uVar19 + uVar7;
      }
      piVar18 = piVar18 + 3;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_resize
            (p_Var22,uVar19,0x7c,0x2108421,cube::Controller::vfunction12,
             cube::Controller::vfunction12,(void *)0x0);
  local_44 = 0;
  local_68 = (uint *)0x0;
  local_64 = 0;
  puVar8 = (uint *)FUN_0046d4b0();
  local_8._0_1_ = 1;
  local_30 = (uint *)0x0;
  local_68 = puVar8;
  if (0 < (local_6c[1] - *local_6c) / 0xc) {
    local_28 = 0;
    local_60 = (int *)0x0;
    do {
      iVar24 = *(int *)(*local_6c + (int)local_60);
      local_34 = (int *)(*local_6c + (int)local_60);
      uVar19 = local_34[1] - iVar24 >> 2;
      if ((2 < uVar19) && (local_54 = (undefined4 *)0x0, 0 < (int)uVar19)) {
        do {
          uVar7 = local_44;
          local_48 = (undefined4 *)((int)local_54 + 1);
          local_58 = (int)local_54 * 4;
          iVar25 = *(int *)(local_58 + iVar24);
          local_40 = *(int *)(iVar24 + ((uint)local_48 % uVar19) * 4);
          local_5c = *(uint **)(iVar24 + (((int)local_54 + (uVar19 - 1)) % uVar19) * 4);
          uVar19 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(local_44);
          local_44 = uVar7 + 1;
          local_54 = (int *)((uVar7 - (1 << ((byte)uVar19 & 0x1f) & 0xfffffffeU)) * 0x7c +
                            *(int *)(*(int *)(local_24 + 0x900) + uVar19 * 4));
          *local_54 = *(int *)(local_24 + 0xb48) + local_28;
          cVar2 = *(char *)(local_3c[1] + 0xd);
          piVar18 = (int *)local_3c[1];
          piVar4 = local_3c;
          while (cVar2 == '\0') {
            if ((piVar18[4] < iVar25) || ((piVar18[4] <= iVar25 && (piVar18[5] < (int)local_5c)))) {
              piVar6 = (int *)piVar18[2];
            }
            else {
              piVar6 = (int *)*piVar18;
              piVar4 = piVar18;
            }
            piVar18 = piVar6;
            cVar2 = *(char *)((int)piVar6 + 0xd);
          }
          if (((piVar4 == local_3c) || (iVar25 < piVar4[4])) ||
             ((iVar25 <= piVar4[4] && ((int)local_5c < piVar4[5])))) {
            local_b8 = local_5c;
            local_b4 = 0;
            local_bc = iVar25;
            iVar24 = FUN_00639be0(&local_bc);
            FUN_005c0630(&local_80,piVar4,iVar24 + 0x10,iVar24);
            piVar4 = local_80;
          }
          piVar6 = local_54;
          local_54[1] = piVar4[6] * 0x34 + *(int *)(local_24 + 0xb3c);
          local_54[2] = *(int *)(*local_34 + local_58) * 0x34 + *(int *)(local_24 + 0xb30);
          cVar2 = *(char *)(local_3c[1] + 0xd);
          piVar18 = (int *)local_3c[1];
          piVar4 = local_3c;
          while (cVar2 == '\0') {
            if ((piVar18[4] < iVar25) || ((piVar18[4] <= iVar25 && (piVar18[5] < local_40)))) {
              piVar9 = (int *)piVar18[2];
            }
            else {
              piVar9 = (int *)*piVar18;
              piVar4 = piVar18;
            }
            piVar18 = piVar9;
            cVar2 = *(char *)((int)piVar9 + 0xd);
          }
          if (((piVar4 == local_3c) || (iVar25 < piVar4[4])) ||
             ((iVar25 <= piVar4[4] && (local_40 < piVar4[5])))) {
            local_c4 = local_40;
            local_c0 = 0;
            local_c8 = iVar25;
            iVar24 = FUN_00639be0(&local_c8);
            FUN_005c0630(&local_70,piVar4,iVar24 + 0x10,iVar24);
            piVar4 = local_70;
          }
          iVar24 = piVar4[6];
          iVar25 = *(int *)(local_24 + 0xb3c);
          piVar6[0x1d] = 0;
          piVar6[3] = iVar24 * 0x34 + iVar25;
          piVar6[0x1e] = 0;
          iVar24 = *local_34;
          iVar25 = *(int *)(iVar24 + ((uint)local_48 % (uint)(local_34[1] - iVar24 >> 2)) * 4);
          iVar24 = *(int *)(local_58 + iVar24);
          cVar2 = *(char *)((int)local_68[1] + 0xd);
          puVar8 = (uint *)local_68[1];
          puVar11 = local_68;
          while (cVar2 == '\0') {
            if (((int)puVar8[4] < iVar25) ||
               (((int)puVar8[4] <= iVar25 && ((int)puVar8[5] < iVar24)))) {
              puVar10 = (uint *)puVar8[2];
            }
            else {
              puVar10 = (uint *)*puVar8;
              puVar11 = puVar8;
            }
            puVar8 = puVar10;
            cVar2 = *(char *)((int)puVar10 + 0xd);
          }
          if (((puVar11 == local_68) || (iVar25 < (int)puVar11[4])) ||
             ((iVar25 <= (int)puVar11[4] && (iVar24 < (int)puVar11[5])))) {
            local_cc = 0;
            local_d4 = iVar25;
            local_d0 = iVar24;
            iVar24 = FUN_00639be0(&local_d4);
            FUN_005c0630(&local_74,puVar11,iVar24 + 0x10,iVar24);
            puVar11 = local_74;
          }
          local_54 = local_48;
          puVar11[6] = (uint)local_30;
          iVar24 = *local_34;
          uVar19 = local_34[1] - iVar24 >> 2;
          puVar8 = local_68;
        } while ((int)local_48 < (int)uVar19);
      }
      local_60 = local_60 + 3;
      local_28 = local_28 + 0x34;
      local_30 = (uint *)((int)local_30 + 1);
    } while ((int)local_30 < (*(int *)(local_24 + 0x870) - *(int *)(local_24 + 0x86c)) / 0xc);
  }
  local_58 = 0;
  if (0 < (local_6c[1] - *local_6c) / 0xc) {
    local_28 = 0;
    do {
      iVar24 = *local_6c;
      iVar25 = *(int *)(iVar24 + local_28);
      local_70 = (int *)(iVar24 + local_28);
      uVar19 = *(int *)(iVar24 + 4 + local_28) - iVar25 >> 2;
      puVar11 = (uint *)0x0;
      if (0 < (int)uVar19) {
        do {
          local_74 = (uint *)((int)puVar11 + 1);
          local_48 = (undefined4 *)((int)puVar11 * 4);
          iVar24 = *(int *)(iVar25 + ((uint)local_74 % uVar19) * 4);
          puVar11 = (uint *)puVar8[1];
          iVar25 = *(int *)((int)local_48 + iVar25);
          puVar10 = puVar8;
          if (*(char *)((int)puVar11 + 0xd) == '\0') {
            do {
              if (((int)puVar11[4] < iVar25) ||
                 (((int)puVar11[4] <= iVar25 && ((int)puVar11[5] < iVar24)))) {
                puVar12 = (uint *)puVar11[2];
              }
              else {
                puVar12 = (uint *)*puVar11;
                puVar10 = puVar11;
              }
              puVar11 = puVar12;
            } while (*(char *)((int)puVar12 + 0xd) == '\0');
            if (((puVar10 == puVar8) || (iVar25 < (int)puVar10[4])) ||
               ((iVar25 <= (int)puVar10[4] && (iVar24 < (int)puVar10[5])))) goto LAB_006407eb;
            local_78 = puVar10;
            ppuVar13 = &local_78;
          }
          else {
LAB_006407eb:
            local_84 = puVar8;
            ppuVar13 = &local_84;
          }
          if (*ppuVar13 == puVar8) {
            *(undefined4 *)((int)local_48 + *(int *)(local_28 + *(int *)(local_24 + 0xb54))) =
                 0xffffffff;
          }
          else {
            *(uint *)((int)local_48 + *(int *)(local_28 + *(int *)(local_24 + 0xb54))) =
                 (*ppuVar13)[6];
          }
          iVar25 = *local_70;
          uVar19 = local_70[1] - iVar25 >> 2;
          puVar11 = local_74;
          puVar8 = local_68;
        } while ((int)local_74 < (int)uVar19);
      }
      local_28 = local_28 + 0xc;
      local_58 = local_58 + 1;
    } while ((int)local_58 < (local_6c[1] - *local_6c) / 0xc);
  }
  uVar19 = (int)local_2c * 2;
  if (0 < (local_6c[1] - *(int *)(local_24 + 0x86c)) / 0xc) {
    piVar18 = *(int **)(local_24 + 0x86c);
    iVar24 = (local_6c[1] - (int)piVar18) / 0xc;
    do {
      uVar7 = piVar18[1] - *piVar18 >> 2;
      if (2 < uVar7) {
        uVar19 = uVar19 + uVar7;
      }
      piVar18 = piVar18 + 3;
      iVar24 = iVar24 + -1;
    } while (iVar24 != 0);
  }
  Concurrency::details::_Concurrent_vector_base_v4::_Internal_resize
            ((_Concurrent_vector_base_v4 *)(local_24 + 0x908),uVar19,0x4c,0x35e50d7,
             cube::Controller::vfunction12,cube::Controller::vfunction12,(void *)0x0);
  local_34 = (int *)0x0;
  local_50 = (undefined4 *)0x0;
  local_4c = 0;
  local_50 = (undefined4 *)FUN_0046d4b0();
  iVar24 = local_24;
  uVar21 = 0;
  uVar19 = *(uint *)(local_24 + 0x8fc);
  local_8 = CONCAT31(local_8._1_3_,2);
  local_44 = 0;
  uVar7 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(local_24 + 0x8e8));
  if (uVar7 < uVar19) {
    uVar19 = uVar7;
  }
  if (0 < (int)uVar19) {
    do {
      uVar19 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar21);
      local_54 = (undefined4 *)0x4;
      local_2c = (uint *)((uVar21 - (1 << ((byte)uVar19 & 0x1f) & 0xfffffffeU)) * 0x7c +
                         *(int *)(*(int *)(iVar24 + 0x900) + uVar19 * 4));
      local_58 = 1;
      local_30 = local_2c;
      do {
        piVar18 = local_34;
        uVar19 = *local_2c;
        uVar7 = local_58 & 0x80000003;
        if ((int)uVar7 < 0) {
          uVar7 = (uVar7 - 1 | 0xfffffffc) + 1;
        }
        local_5c = local_30 + uVar7;
        uVar7 = *local_5c;
        puVar14 = (undefined4 *)local_50[1];
        puVar20 = local_50;
        if (*(char *)((int)local_50[1] + 0xd) == '\0') {
          do {
            if (((uint)puVar14[4] < uVar19) ||
               (((uint)puVar14[4] <= uVar19 && ((uint)puVar14[5] < uVar7)))) {
              puVar16 = (undefined4 *)puVar14[2];
            }
            else {
              puVar16 = (undefined4 *)*puVar14;
              puVar20 = puVar14;
            }
            puVar14 = puVar16;
          } while (*(char *)((int)puVar16 + 0xd) == '\0');
          if (((puVar20 == local_50) || (uVar19 < (uint)puVar20[4])) ||
             ((uVar19 <= (uint)puVar20[4] && (uVar7 < (uint)puVar20[5])))) goto LAB_006409d7;
          local_94 = puVar20;
          ppuVar15 = &local_94;
        }
        else {
LAB_006409d7:
          local_8c = local_50;
          ppuVar15 = &local_8c;
        }
        puVar14 = *ppuVar15;
        if (puVar14 == local_50) {
          uVar21 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of
                             ((uint)local_34);
          local_48 = (undefined4 *)
                     (((int)piVar18 - (1 << ((byte)uVar21 & 0x1f) & 0xfffffffeU)) * 0x4c +
                     *(int *)(*(int *)(local_24 + 0x920) + uVar21 * 4));
          *local_48 = local_30;
          local_48[1] = 0;
          local_48[2] = uVar19;
          local_48[3] = uVar7;
          cVar2 = *(char *)((int)local_50[1] + 0xd);
          puVar14 = (undefined4 *)local_50[1];
          puVar20 = local_50;
          while (cVar2 == '\0') {
            if (((uint)puVar14[4] < uVar19) ||
               (((uint)puVar14[4] <= uVar19 && ((uint)puVar14[5] < uVar7)))) {
              puVar16 = (undefined4 *)puVar14[2];
            }
            else {
              puVar16 = (undefined4 *)*puVar14;
              puVar20 = puVar14;
            }
            puVar14 = puVar16;
            cVar2 = *(char *)((int)puVar16 + 0xd);
          }
          if (((puVar20 == local_50) || (uVar19 < (uint)puVar20[4])) ||
             ((uVar19 <= (uint)puVar20[4] && (uVar7 < (uint)puVar20[5])))) {
            local_e4 = 0;
            local_ec = uVar19;
            local_e8 = uVar7;
            iVar24 = FUN_00639be0(&local_ec);
            FUN_00639f40(&local_9c,puVar20,iVar24 + 0x10,iVar24);
            puVar20 = local_9c;
          }
          puVar20[6] = local_48;
          local_2c[0x11] = (uint)local_48;
          cVar2 = *(char *)((int)local_50[1] + 0xd);
          puVar14 = (undefined4 *)local_50[1];
          puVar20 = local_50;
          while (cVar2 == '\0') {
            if (((uint)puVar14[4] < uVar19) ||
               (((uint)puVar14[4] <= uVar19 && ((uint)puVar14[5] < uVar7)))) {
              puVar16 = (undefined4 *)puVar14[2];
            }
            else {
              puVar16 = (undefined4 *)*puVar14;
              puVar20 = puVar14;
            }
            puVar14 = puVar16;
            cVar2 = *(char *)((int)puVar16 + 0xd);
          }
          if (((puVar20 == local_50) || (uVar19 < (uint)puVar20[4])) ||
             ((uVar19 <= (uint)puVar20[4] && (uVar7 < (uint)puVar20[5])))) {
            local_fc = 0;
            local_104 = uVar19;
            local_100 = uVar7;
            iVar24 = FUN_00639be0(&local_104);
            FUN_00639f40(&local_a4,puVar20,iVar24 + 0x10,iVar24);
            puVar20 = local_a4;
          }
          puVar16 = local_48;
          puVar20[6] = local_48;
          uVar19 = *local_2c;
          uVar7 = *local_5c;
          cVar2 = *(char *)((int)local_50[1] + 0xd);
          puVar14 = (undefined4 *)local_50[1];
          puVar20 = local_50;
          while (cVar2 == '\0') {
            if (((uint)puVar14[4] < uVar7) ||
               (((uint)puVar14[4] <= uVar7 && ((uint)puVar14[5] < uVar19)))) {
              puVar17 = (undefined4 *)puVar14[2];
            }
            else {
              puVar17 = (undefined4 *)*puVar14;
              puVar20 = puVar14;
            }
            puVar14 = puVar17;
            cVar2 = *(char *)((int)puVar17 + 0xd);
          }
          if (((puVar20 == local_50) || (uVar7 < (uint)puVar20[4])) ||
             ((uVar7 <= (uint)puVar20[4] && (uVar19 < (uint)puVar20[5])))) {
            local_d8 = 0;
            local_e0 = uVar7;
            local_dc = uVar19;
            iVar24 = FUN_00639be0(&local_e0);
            FUN_00639f40(&local_98,puVar20,iVar24 + 0x10,iVar24);
            puVar20 = local_98;
          }
          local_34 = (int *)((int)local_34 + 1);
          puVar20[6] = puVar16;
        }
        else {
          *(uint **)(puVar14[6] + 4) = local_30;
          local_2c[0x11] = puVar14[6];
        }
        iVar24 = local_24;
        local_58 = local_58 + 1;
        local_2c = local_2c + 1;
        local_54 = (int *)((int)local_54 - 1);
      } while (local_54 != (undefined4 *)0x0);
      uVar19 = *(uint *)(local_24 + 0x8fc);
      uVar21 = local_44 + 1;
      local_44 = uVar21;
      uVar7 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                        ((_Concurrent_vector_base_v4 *)(local_24 + 0x8e8));
      if (uVar7 < uVar19) {
        uVar19 = uVar7;
      }
    } while ((int)uVar21 < (int)uVar19);
  }
  uVar21 = 0;
  uVar19 = *(uint *)(local_24 + 0x91c);
  p_Var22 = (_Concurrent_vector_base_v4 *)(local_24 + 0x908);
  uVar7 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(p_Var22);
  if (uVar7 < uVar19) {
    uVar19 = uVar7;
  }
  if (0 < (int)uVar19) {
    do {
      uVar19 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar21);
      if (*(int *)((uVar21 - (1 << ((byte)uVar19 & 0x1f) & 0xfffffffeU)) * 0x4c + 4 +
                  *(int *)(*(int *)(local_24 + 0x920) + uVar19 * 4)) == 0) {
        uVar19 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar21);
        pbVar1 = (byte *)(*(int *)((uVar21 - (1 << ((byte)uVar19 & 0x1f) & 0xfffffffeU)) * 0x4c + 8
                                  + *(int *)(*(int *)(local_24 + 0x920) + uVar19 * 4)) + 0x30);
        *pbVar1 = *pbVar1 | 1;
        uVar19 = Concurrency::details::_Concurrent_vector_base_v4::_Segment_index_of(uVar21);
        pbVar1 = (byte *)(*(int *)((uVar21 - (1 << ((byte)uVar19 & 0x1f) & 0xfffffffeU)) * 0x4c +
                                   0xc + *(int *)(*(int *)(local_24 + 0x920) + uVar19 * 4)) + 0x30);
        *pbVar1 = *pbVar1 | 1;
      }
      uVar19 = *(uint *)(local_24 + 0x91c);
      uVar21 = uVar21 + 1;
      uVar7 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity(p_Var22);
      if (uVar7 < uVar19) {
        uVar19 = uVar7;
      }
    } while ((int)uVar21 < (int)uVar19);
  }
  iVar24 = local_24;
  FUN_00671450();
  if ((*(byte *)(iVar24 + 0x85c) & 1) == 0) {
    iVar25 = 0;
    if (*(int *)(iVar24 + 0xb24) != 1 && -1 < *(int *)(iVar24 + 0xb24) + -1) {
      iVar23 = iVar24 + 0x944;
      do {
        FUN_00671750(iVar23 + -0x60);
        iVar25 = iVar25 + 1;
        iVar23 = iVar23 + 0x60;
      } while (iVar25 < *(int *)(iVar24 + 0xb24) + -1);
    }
  }
  else if (1 < *(int *)(iVar24 + 0xb24)) {
    p_Var22 = (_Concurrent_vector_base_v4 *)(iVar24 + 0x948);
    iVar24 = 1;
    do {
      Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                (p_Var22 + 0x20,cube::Controller::vfunction12);
      Concurrency::details::_Concurrent_vector_base_v4::_Internal_clear
                (p_Var22,cube::Controller::vfunction12);
      iVar24 = iVar24 + 1;
      p_Var22 = p_Var22 + 0x60;
    } while (iVar24 < *(int *)(local_24 + 0xb24));
  }
  local_8 = CONCAT31(local_8._1_3_,1);
  FUN_0067eb10(local_108,*local_50,local_50);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_50);
}


/* FUN_00641b60 @ 00641b60  kind=gamemisc  attributed-by=caller-vote  size=12 */

uint FUN_00641b60(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x85c) >> 1 & 1;
}


/* FUN_006423f0 @ 006423f0  kind=gamemisc  attributed-by=caller-vote  size=10 */

uint FUN_006423f0(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x85c) & 1;
}


/* FUN_00642400 @ 00642400  kind=gamemisc  attributed-by=caller-vote  size=13 */

uint FUN_00642400(void)

{
  int in_ECX;
  
  return *(uint *)(in_ECX + 0x85c) >> 4 & 1;
}


/* FUN_00642570 @ 00642570  kind=gamemisc  attributed-by=caller-vote  size=14 */

void FUN_00642570(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0xc1c));
  return;
}


/* FUN_00642590 @ 00642590  kind=gamemisc  attributed-by=caller-vote  size=114 */

void FUN_00642590(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *in_ECX;
  int iVar3;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && ((undefined4 *)*in_ECX <= param_1)) {
    iVar3 = (int)param_1 - (int)*in_ECX >> 3;
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00428c80(1);
    }
    puVar1 = (undefined4 *)in_ECX[1];
    uVar2 = *in_ECX;
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *(undefined4 *)(uVar2 + iVar3 * 8);
      puVar1[1] = *(undefined4 *)(uVar2 + 4 + iVar3 * 8);
      in_ECX[1] = in_ECX[1] + 8;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_00428c80(1);
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


/* FUN_006426d0 @ 006426d0  kind=gamemisc  attributed-by=caller-vote  size=40 */

float10 FUN_006426d0(float param_1,float param_2,float param_3)

{
  return (float10)((param_1 * 2.0) / (param_2 + param_3));
}


/* FUN_006428a0 @ 006428a0  kind=gamemisc  attributed-by=caller-vote  size=65 */

void FUN_006428a0(undefined4 param_1)

{
  int in_ECX;
  int iVar1;
  
  iVar1 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      FUN_0040d9d0(param_1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_006428f0 @ 006428f0  kind=gamemisc  attributed-by=caller-vote  size=273 */

int FUN_006428f0(uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f5fb0;
  local_10 = ExceptionList;
  iVar3 = *in_ECX;
  iVar2 = (in_ECX[1] - iVar3) * 0x4ec4ec4f;
  uVar1 = (in_ECX[1] - iVar3) / 0x34;
  if (param_1 < uVar1) {
    iVar4 = param_1 * 0x34 + iVar3;
    if (iVar4 == iVar3) {
      in_ECX[1] = iVar3;
    }
    else {
      iVar2 = in_ECX[1];
      if (iVar4 != iVar2) {
        ExceptionList = &local_10;
        iVar3 = FUN_0063a600(iVar2,iVar2,iVar4,param_1);
        in_ECX[1] = iVar3;
        ExceptionList = local_10;
        return iVar3;
      }
    }
  }
  else if (uVar1 < param_1) {
    ExceptionList = &local_10;
    FUN_0063dd10(param_1 - uVar1);
    local_8 = 0;
    cube::Controller::vfunction12();
    iVar3 = (in_ECX[1] - *in_ECX) / 0x34;
    in_ECX[1] = in_ECX[1] + (param_1 - iVar3) * 0x34;
    ExceptionList = local_10;
    return iVar3;
  }
  return iVar2;
}


/* FUN_00642a90 @ 00642a90  kind=gamemisc  attributed-by=caller-vote  size=22 */

uint FUN_00642a90(void)

{
  uint uVar1;
  int in_ECX;
  uint uVar2;
  
  uVar2 = *(uint *)(in_ECX + 0x18);
  uVar1 = Concurrency::details::_Concurrent_vector_base_v4::_Internal_capacity
                    ((_Concurrent_vector_base_v4 *)(in_ECX + 4));
  if (uVar1 < uVar2) {
    uVar2 = uVar1;
  }
  return uVar2;
}


/* FUN_0064e310 @ 0064e310  kind=gamemisc  attributed-by=caller-vote  size=95 */

/* WARNING: Removing unreachable block (ram,0x0064e33f) */

uint FUN_0064e310(uint param_1)

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
  pvVar1 = operator_new(param_1);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *in_ECX = pvVar1;
  in_ECX[1] = pvVar1;
  in_ECX[2] = (int)pvVar1 + param_1;
  return CONCAT31((int3)((int)pvVar1 + param_1 >> 8),1);
}


/* FUN_0064e3a0 @ 0064e3a0  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0064e3a0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x10);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0064e3ae. Too many branches */
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


/* FUN_0064e520 @ 0064e520  kind=gamemisc  attributed-by=caller-vote  size=600 */

void FUN_0064e520(int *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  int iVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  uint uStack_4c;
  void *local_38;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6490;
  local_10 = ExceptionList;
  uStack_4c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_4c;
  ExceptionList = &local_10;
  iVar1 = *in_ECX;
  local_18 = uStack_4c;
  puVar3 = &uStack_4c;
  if (param_3 != 0) {
    iVar6 = in_ECX[1];
    if ((uint)(in_ECX[2] - iVar6 >> 4) < param_3) {
      iVar6 = iVar6 - iVar1 >> 4;
      if (0xfffffffU - iVar6 < param_3) {
        local_14 = (undefined1 *)&uStack_4c;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_14 = (undefined1 *)&uStack_4c;
      uVar4 = FUN_0046dd00(iVar6 + param_3);
      local_38 = (void *)0x0;
      if ((uVar4 != 0) &&
         ((0xfffffff < uVar4 || (local_38 = operator_new(uVar4 << 4), local_38 == (void *)0x0)))) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      iVar6 = param_2 - *in_ECX >> 4;
      local_8 = 0;
      FUN_0064be40((void *)(iVar6 * 0x10 + (int)local_38),param_3,param_4,&local_29,0,param_1);
      FUN_00427af0(*in_ECX,param_2,local_38,&local_29,0,param_1);
      FUN_00427af0(param_2,in_ECX[1],(void *)((param_3 + iVar6) * 0x10 + (int)local_38),&local_29,0,
                   param_1);
      pvVar2 = (void *)*in_ECX;
      if (pvVar2 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar2);
      }
      in_ECX[2] = (int)(uVar4 * 0x10 + (int)local_38);
      in_ECX[1] = (int)((param_3 + (in_ECX[1] - (int)pvVar2 >> 4)) * 0x10 + (int)local_38);
      *in_ECX = (int)local_38;
      puVar3 = (uint *)local_14;
    }
    else {
      local_28 = *param_4;
      local_24 = param_4[1];
      local_20 = param_4[2];
      local_1c = param_4[3];
      if ((uint)(iVar6 - param_2 >> 4) < param_3) {
        local_14 = (undefined1 *)&uStack_4c;
        FUN_00427af0(param_2,iVar6,param_3 * 0x10 + param_2,&local_29,0,param_1);
        local_8 = 2;
        FUN_0064be40(in_ECX[1],param_3 - (in_ECX[1] - param_2 >> 4),&local_28,&local_29,0,param_1);
        in_ECX[1] = in_ECX[1] + param_3 * 0x10;
        FUN_0064be80(param_2,in_ECX[1] + param_3 * -0x10,&local_28);
        puVar3 = (uint *)local_14;
      }
      else {
        iVar7 = iVar6 + param_3 * -0x10;
        iVar5 = FUN_00427af0(iVar7,iVar6,iVar6,&local_29,0,param_1);
        in_ECX[1] = iVar5;
        FUN_0064b4f0(param_2,iVar7,iVar6,param_1);
        FUN_0064be80(param_2,param_3 * 0x10 + param_2,&local_28);
        puVar3 = (uint *)local_14;
      }
    }
  }
  local_14 = (undefined1 *)puVar3;
  *param_1 = (param_2 - iVar1 >> 4) * 0x10 + *in_ECX;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0064e7d0 @ 0064e7d0  kind=gamemisc  attributed-by=caller-vote  size=119 */

undefined4 * FUN_0064e7d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 0x8c);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0x90) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x90) = *(int *)(in_ECX + 0x90) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x8c) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064eae0 @ 0064eae0  kind=gamemisc  attributed-by=caller-vote  size=119 */

undefined4 * FUN_0064eae0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 0x94);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0x98) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x98) = *(int *)(in_ECX + 0x98) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x94) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064eb60 @ 0064eb60  kind=gamemisc  attributed-by=caller-vote  size=104 */

undefined4 * FUN_0064eb60(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 8);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0xc) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0xc) = *(int *)(in_ECX + 0xc) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 8) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064ebd0 @ 0064ebd0  kind=gamemisc  attributed-by=caller-vote  size=104 */

undefined4 * FUN_0064ebd0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 0x74);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0x78) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x78) = *(int *)(in_ECX + 0x78) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x74) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064ec40 @ 0064ec40  kind=gamemisc  attributed-by=caller-vote  size=119 */

undefined4 * FUN_0064ec40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 0x9c);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0xa0) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0xa0) = *(int *)(in_ECX + 0xa0) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x9c) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064ecc0 @ 0064ecc0  kind=gamemisc  attributed-by=caller-vote  size=119 */

undefined4 * FUN_0064ecc0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 0x84);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0x88) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x88) = *(int *)(in_ECX + 0x88) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x84) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064ed40 @ 0064ed40  kind=gamemisc  attributed-by=caller-vote  size=110 */

undefined4 * FUN_0064ed40(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  iVar1 = *(int *)(in_ECX + 0x7c);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000008);
  if (*(int *)(in_ECX + 0x80) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x80) = *(int *)(in_ECX + 0x80) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  *param_1 = *(undefined4 *)(*(int *)(in_ECX + 0x7c) + 4);
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return param_1;
}


/* FUN_0064edb0 @ 0064edb0  kind=gamemisc  attributed-by=caller-vote  size=447 */

/* WARNING: Type propagation algorithm not settling */

void FUN_0064edb0(undefined4 param_1)

{
  uint *puVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  int *in_ECX;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int *local_1c [3];
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  in_ECX[0x12] = in_ECX[0x12] + 1;
  puVar1 = (uint *)(in_ECX + 0xe);
  piVar7 = in_ECX;
  local_1c[2] = in_ECX;
  if (in_ECX[0xf] - in_ECX[0xe] >> 2 <= in_ECX[0x12]) {
    do {
      local_1c[0] = (int *)(**(code **)(*piVar7 + 0x34))(0);
      ppiVar2 = (int **)in_ECX[0xf];
      if ((local_1c < ppiVar2) &&
         (ppiVar3 = (int **)*puVar1, piVar7 = local_1c[2], ppiVar3 <= local_1c)) {
        ppiVar4 = (int **)in_ECX[0x10];
        if ((ppiVar2 == ppiVar4) && ((int)ppiVar4 - (int)ppiVar2 >> 2 == 0)) {
          iVar5 = (int)ppiVar2 - (int)ppiVar3 >> 2;
          if (iVar5 == 0x3fffffff) {
LAB_0064ef64:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("vector<T> too long");
          }
          local_c = (float)(iVar5 + 1);
          uVar6 = (int)ppiVar4 - (int)ppiVar3 >> 2;
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < (uint)local_c) {
            uVar6 = (uint)local_c;
          }
          FUN_0063da20(uVar6);
        }
        piVar7 = local_1c[2];
        if ((undefined4 *)in_ECX[0xf] != (undefined4 *)0x0) {
          *(undefined4 *)in_ECX[0xf] =
               *(undefined4 *)(*puVar1 + ((int)local_1c - (int)ppiVar3 >> 2) * 4);
        }
      }
      else {
        ppiVar3 = (int **)in_ECX[0x10];
        if ((ppiVar2 == ppiVar3) && ((int)ppiVar3 - (int)ppiVar2 >> 2 == 0)) {
          iVar5 = (int)((int)ppiVar2 - *puVar1) >> 2;
          if (iVar5 == 0x3fffffff) goto LAB_0064ef64;
          local_c = (float)(iVar5 + 1);
          uVar6 = (int)((int)ppiVar3 - *puVar1) >> 2;
          if (0x3fffffff - (uVar6 >> 1) < uVar6) {
            uVar6 = 0;
          }
          else {
            uVar6 = uVar6 + (uVar6 >> 1);
          }
          if (uVar6 < (uint)local_c) {
            uVar6 = (uint)local_c;
          }
          FUN_0063da20(uVar6);
        }
        if ((undefined4 *)in_ECX[0xf] != (undefined4 *)0x0) {
          *(undefined4 *)in_ECX[0xf] = local_1c[0];
        }
      }
      in_ECX[0xf] = in_ECX[0xf] + 4;
      (**(code **)(**(int **)(piVar7[0xf] + -4) + 4))(piVar7[0x43],piVar7[0x44]);
    } while ((int)(in_ECX[0xf] - *puVar1) >> 2 <= piVar7[0x12]);
  }
  local_10 = (float)piVar7[0x43];
  local_c = (float)piVar7[0x44];
  local_1c[1] = (int *)0x0;
  local_1c[2] = (int *)0x0;
  (**(code **)(*piVar7 + 100))
            (*(undefined4 *)(*puVar1 + piVar7[0x12] * 4),local_1c + 1,&local_10,param_1,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0064efe0 @ 0064efe0  kind=gamemisc  attributed-by=caller-vote  size=16 */

void FUN_0064efe0(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 200) = param_1;
  return;
}


/* FUN_0064eff0 @ 0064eff0  kind=gamemisc  attributed-by=caller-vote  size=137 */

void FUN_0064eff0(void)

{
  int *in_ECX;
  undefined1 local_60 [64];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  (**(code **)(*in_ECX + 0x38))(local_60);
  FUN_00634dd0(&local_10,&local_18,local_60);
  local_20 = local_18 - local_10;
  local_1c = local_14 - local_c;
  (**(code **)(**(int **)(in_ECX[0xe] +
                         ((uint)in_ECX[0x12] % (uint)(in_ECX[0xf] - in_ECX[0xe] >> 2)) * 4) + 0x20))
            (&local_10,&local_20,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0064f100 @ 0064f100  kind=gamemisc  attributed-by=caller-vote  size=114 */

undefined4 FUN_0064f100(undefined4 param_1)

{
  ContinuousAttribute<plasma::Vector<3,float>_> *this;
  undefined4 extraout_EAX;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x3f8);
  local_8 = 0;
  if (this != (ContinuousAttribute<plasma::Vector<3,float>_> *)0x0) {
    plasma::ContinuousAttribute<plasma::Vector<3,float>_>::
    ContinuousAttribute<plasma::Vector<3,float>_>(this,in_ECX,param_1);
    ExceptionList = local_10;
    return extraout_EAX;
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0064f180 @ 0064f180  kind=gamemisc  attributed-by=caller-vote  size=114 */

undefined4 FUN_0064f180(undefined4 param_1)

{
  ContinuousAttribute<float> *this;
  undefined4 extraout_EAX;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x210);
  local_8 = 0;
  if (this != (ContinuousAttribute<float> *)0x0) {
    plasma::ContinuousAttribute<float>::ContinuousAttribute<float>(this,in_ECX,param_1);
    ExceptionList = local_10;
    return extraout_EAX;
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_0064f280 @ 0064f280  kind=gamemisc  attributed-by=caller-vote  size=117 */

GenericShape * FUN_0064f280(undefined4 param_1,undefined4 param_2)

{
  GenericShape *pGVar1;
  int *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pGVar1 = operator_new(0x8c);
  local_8 = 0;
  if (pGVar1 != (GenericShape *)0x0) {
    pGVar1 = plasma::GenericShape::GenericShape(pGVar1,in_ECX,param_1,param_2);
    ExceptionList = local_10;
    return pGVar1;
  }
  ExceptionList = local_10;
  return (GenericShape *)0x0;
}


/* FUN_0064f380 @ 0064f380  kind=gamemisc  attributed-by=caller-vote  size=114 */

undefined4 FUN_0064f380(undefined4 param_1)

{
  MeshShape *this;
  undefined4 extraout_EAX;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x8e4);
  local_8 = 0;
  if (this != (MeshShape *)0x0) {
    plasma::MeshShape::MeshShape(this,in_ECX,param_1);
    ExceptionList = local_10;
    return extraout_EAX;
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_00650260 @ 00650260  kind=gamemisc  attributed-by=caller-vote  size=114 */

SmoothMeshShape * FUN_00650260(undefined4 param_1)

{
  SmoothMeshShape *pSVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pSVar1 = operator_new(0xc34);
  local_8 = 0;
  if (pSVar1 != (SmoothMeshShape *)0x0) {
    pSVar1 = plasma::SmoothMeshShape::SmoothMeshShape(pSVar1,in_ECX,param_1);
    ExceptionList = local_10;
    return pSVar1;
  }
  ExceptionList = local_10;
  return (SmoothMeshShape *)0x0;
}


/* FUN_00650360 @ 00650360  kind=gamemisc  attributed-by=caller-vote  size=114 */

undefined4 FUN_00650360(undefined4 param_1)

{
  ContinuousAttribute<plasma::Vector<3,float>_> *this;
  undefined4 extraout_EAX;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this = operator_new(0x234);
  local_8 = 0;
  if (this != (ContinuousAttribute<plasma::Vector<3,float>_> *)0x0) {
    plasma::ContinuousAttribute<plasma::Vector<3,float>_>::
    ContinuousAttribute<plasma::Vector<3,float>_>(this,in_ECX,param_1);
    ExceptionList = local_10;
    return extraout_EAX;
  }
  ExceptionList = local_10;
  return 0;
}


/* FUN_006504c0 @ 006504c0  kind=gamemisc  attributed-by=caller-vote  size=26 */

void FUN_006504c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x006504d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  return;
}


/* FUN_006509f0 @ 006509f0  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_006509f0(void)

{
  int iVar1;
  int *in_ECX;
  
  (**(code **)(*in_ECX + 0x68))();
  iVar1 = in_ECX[0x12];
  if (iVar1 < in_ECX[0xf] - in_ECX[0xe] >> 2) {
    in_ECX[0x13] = *(int *)(in_ECX[0xe] + iVar1 * 4);
  }
  in_ECX[0x12] = iVar1 + -1;
  return;
}


/* FUN_00650a90 @ 00650a90  kind=gamemisc  attributed-by=caller-vote  size=11 */

void FUN_00650a90(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return;
}


/* FUN_006531f0 @ 006531f0  kind=gamemisc  attributed-by=caller-vote  size=11 */

void FUN_006531f0(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x58));
  return;
}


/* FUN_00653680 @ 00653680  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_00653680(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x50);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  if (*(int *)(in_ECX + 0x54) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x54) = *(int *)(in_ECX + 0x54) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00659cf0 @ 00659cf0  kind=gamemisc  attributed-by=caller-vote  size=46 */

void FUN_00659cf0(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 200) = 0;
  FUN_00652c10(*(undefined4 *)(in_ECX + 0xd4),*(undefined4 *)(in_ECX + 0xd8));
  return;
}


/* FUN_00659df0 @ 00659df0  kind=gamemisc  attributed-by=caller-vote  size=144 */

void FUN_00659df0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  int in_ECX;
  
  iVar3 = param_1;
  iVar1 = *(int *)(in_ECX + 0xcc);
  if (iVar1 != 0) {
    if (param_1 == iVar1) {
      return;
    }
    *(undefined1 *)(iVar1 + 0x134) = 1;
    FUN_00653620(*(undefined4 *)(*(int *)(in_ECX + 0xcc) + 0x148),0x13);
  }
  *(int *)(in_ECX + 0xcc) = iVar3;
  if ((((iVar3 != 0) && (iVar1 = *(int *)(iVar3 + 0x148), iVar1 != 0)) &&
      ((~(byte)(*(uint *)(iVar1 + 200) >> 1) & 1) != 0)) &&
     (iVar1 = *(int *)(iVar1 + 0x44), iVar1 != 0)) {
    param_1 = 0x12;
    piVar4 = (int *)FUN_00468910(&param_1);
    puVar2 = (undefined4 *)*piVar4;
    if ((puVar2 != (undefined4 *)0x0) &&
       ((*(char *)(iVar1 + 0x15c) != '\0' || (*(char *)(puVar2 + 1) == '\0')))) {
      (**(code **)*puVar2)();
    }
  }
  return;
}


/* FUN_0065b8f0 @ 0065b8f0  kind=gamemisc  attributed-by=caller-vote  size=831 */

void FUN_0065b8f0(void)

{
  char cVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int *piVar4;
  int in_ECX;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  undefined1 local_c [4];
  int local_8;
  
  local_8 = in_ECX;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  if (*(int *)(in_ECX + 0xd8) != 0) {
    FUN_00693180(*(int *)(in_ECX + 0xd8));
    *(undefined4 *)(in_ECX + 0xd8) = 0;
  }
  if (*(int *)(in_ECX + 0xdc) != 0) {
    FUN_00695f80(*(int *)(in_ECX + 0xdc));
    *(undefined4 *)(in_ECX + 0xdc) = 0;
  }
  piVar7 = (int *)**(int **)(in_ECX + 0x68);
  if (piVar7 != *(int **)(in_ECX + 0x68)) {
    do {
      if ((int *)piVar7[7] != (int *)0x0) {
        piVar5 = *(int **)piVar7[7];
        piVar6 = (int *)*piVar5;
        if (piVar6 != piVar5) {
          do {
            if ((void *)piVar6[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete((void *)piVar6[5]);
            }
            if (*(char *)((int)piVar6 + 0xd) == '\0') {
              piVar5 = (int *)piVar6[2];
              if (*(char *)((int)piVar5 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar5 + 0xd);
                piVar6 = piVar5;
                piVar5 = (int *)*piVar5;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar5 + 0xd);
                  piVar6 = piVar5;
                  piVar5 = (int *)*piVar5;
                }
              }
              else {
                cVar1 = *(char *)(piVar6[1] + 0xd);
                piVar4 = (int *)piVar6[1];
                piVar5 = piVar6;
                while ((piVar6 = piVar4, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
                  cVar1 = *(char *)(piVar6[1] + 0xd);
                  piVar4 = (int *)piVar6[1];
                  piVar5 = piVar6;
                }
              }
            }
          } while (piVar6 != *(int **)piVar7[7]);
        }
        puVar2 = (undefined4 *)piVar7[7];
        if (puVar2 != (undefined4 *)0x0) {
          FUN_0067eb10(local_c,*(undefined4 *)*puVar2,(undefined4 *)*puVar2);
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar2);
        }
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar5 = (int *)piVar7[2];
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0xd);
          piVar7 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0xd);
            piVar7 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar6 = (int *)piVar7[1];
          piVar5 = piVar7;
          while ((piVar7 = piVar6, cVar1 == '\0' && (piVar5 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar6 = (int *)piVar7[1];
            piVar5 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int **)(in_ECX + 0x68));
  }
  pvVar3 = *(void **)(*(int *)(in_ECX + 0x68) + 4);
  if (*(char *)((int)pvVar3 + 0xd) == '\0') {
    FUN_0042ca80(*(undefined4 *)((int)pvVar3 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  *(int *)(*(int *)(in_ECX + 0x68) + 4) = *(int *)(in_ECX + 0x68);
  *(undefined4 *)*(undefined4 *)(in_ECX + 0x68) = *(undefined4 *)(in_ECX + 0x68);
  *(int *)(*(int *)(in_ECX + 0x68) + 8) = *(int *)(in_ECX + 0x68);
  *(undefined4 *)(in_ECX + 0x6c) = 0;
  piVar7 = (int *)**(int **)(in_ECX + 0x70);
  if (piVar7 != *(int **)(in_ECX + 0x70)) {
    do {
      if ((int *)piVar7[9] != (int *)0x0) {
        piVar5 = *(int **)piVar7[9];
        piVar6 = (int *)*piVar5;
        if (piVar6 != piVar5) {
          do {
            if ((void *)piVar6[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete((void *)piVar6[5]);
            }
            if (*(char *)((int)piVar6 + 0xd) == '\0') {
              piVar5 = (int *)piVar6[2];
              if (*(char *)((int)piVar5 + 0xd) == '\0') {
                cVar1 = *(char *)(*piVar5 + 0xd);
                piVar6 = piVar5;
                piVar5 = (int *)*piVar5;
                while (cVar1 == '\0') {
                  cVar1 = *(char *)(*piVar5 + 0xd);
                  piVar6 = piVar5;
                  piVar5 = (int *)*piVar5;
                }
              }
              else {
                cVar1 = *(char *)(piVar6[1] + 0xd);
                piVar4 = (int *)piVar6[1];
                piVar5 = piVar6;
                while ((piVar6 = piVar4, cVar1 == '\0' && (piVar5 == (int *)piVar6[2]))) {
                  cVar1 = *(char *)(piVar6[1] + 0xd);
                  piVar4 = (int *)piVar6[1];
                  piVar5 = piVar6;
                }
              }
            }
          } while (piVar6 != *(int **)piVar7[9]);
        }
        puVar2 = (undefined4 *)piVar7[9];
        if (puVar2 != (undefined4 *)0x0) {
          FUN_0067eb10(local_c,*(undefined4 *)*puVar2,(undefined4 *)*puVar2);
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*puVar2);
        }
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar5 = (int *)piVar7[2];
        if (*(char *)((int)piVar5 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar5 + 0xd);
          piVar7 = piVar5;
          piVar5 = (int *)*piVar5;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar5 + 0xd);
            piVar7 = piVar5;
            piVar5 = (int *)*piVar5;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar6 = (int *)piVar7[1];
          piVar5 = piVar7;
          while ((piVar7 = piVar6, cVar1 == '\0' && (piVar5 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar6 = (int *)piVar7[1];
            piVar5 = piVar7;
          }
        }
      }
    } while (piVar7 != *(int **)(in_ECX + 0x70));
  }
  FUN_0065b180(*(undefined4 *)(*(int *)(in_ECX + 0x70) + 4));
  piVar5 = (int *)(in_ECX + 0xd0);
  *(int *)(*(int *)(in_ECX + 0x70) + 4) = *(int *)(in_ECX + 0x70);
  *(undefined4 *)*(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(in_ECX + 0x70);
  *(int *)(*(int *)(in_ECX + 0x70) + 8) = *(int *)(in_ECX + 0x70);
  *(undefined4 *)(in_ECX + 0x74) = 0;
  piVar7 = *(int **)*piVar5;
  if (piVar7 != (int *)*piVar5) {
    do {
      if ((void *)piVar7[5] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)piVar7[5]);
      }
      if (*(char *)((int)piVar7 + 0xd) == '\0') {
        piVar6 = (int *)piVar7[2];
        if (*(char *)((int)piVar6 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar6 + 0xd);
          piVar7 = piVar6;
          piVar6 = (int *)*piVar6;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar6 + 0xd);
            piVar7 = piVar6;
            piVar6 = (int *)*piVar6;
          }
        }
        else {
          cVar1 = *(char *)(piVar7[1] + 0xd);
          piVar4 = (int *)piVar7[1];
          piVar6 = piVar7;
          while ((piVar7 = piVar4, cVar1 == '\0' && (piVar6 == (int *)piVar7[2]))) {
            cVar1 = *(char *)(piVar7[1] + 0xd);
            piVar4 = (int *)piVar7[1];
            piVar6 = piVar7;
          }
        }
      }
    } while (piVar7 != (int *)*piVar5);
  }
  pvVar3 = *(void **)(*piVar5 + 4);
  if (*(char *)((int)pvVar3 + 0xd) != '\0') {
    *(int *)(*piVar5 + 4) = *piVar5;
    *(int *)*piVar5 = *piVar5;
    *(int *)(*piVar5 + 8) = *piVar5;
    *(undefined4 *)(in_ECX + 0xd4) = 0;
    if (*(int *)(local_8 + 0xf4) != 0) {
      FUN_006504e0(*(int *)(local_8 + 0xf4));
      *(undefined4 *)(local_8 + 0xf4) = 0;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)(local_8 + 0x10c));
    return;
  }
  FUN_0042ca80(*(undefined4 *)((int)pvVar3 + 8));
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar3);
}


/* FUN_0065ded0 @ 0065ded0  kind=gamemisc  attributed-by=caller-vote  size=1130 */

void FUN_0065ded0(undefined4 *param_1,int param_2,float *param_3,float *param_4,uint param_5)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int in_ECX;
  uint uVar4;
  undefined4 *puVar5;
  float fVar6;
  float local_4c;
  int local_48;
  float local_40 [2];
  float local_38 [2];
  float local_30 [2];
  float local_28;
  float local_24;
  float local_20 [2];
  float local_18;
  float *local_14;
  float local_10;
  undefined4 *local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = param_4;
  local_4c = 1.0;
  if (*(int *)(in_ECX + 0xf4) != 0) {
    local_4c = *(float *)(in_ECX + 0xe4) / (*(float *)(in_ECX + 0x104) - *(float *)(in_ECX + 0xfc));
  }
  fVar6 = *(float *)(in_ECX + 0xe4);
  if ((int)param_1[4] < param_2) {
    param_2 = param_1[4];
  }
  *param_3 = 0.0;
  param_3[1] = -fVar6;
  fVar6 = *(float *)(in_ECX + 0xe4);
  *param_4 = 0.0;
  param_4[1] = fVar6;
  FUN_0065d530(param_1,local_38,local_30,0,0xffffffff,0);
  FUN_0065d530(param_1,&local_10,local_20,param_5,0,0);
  uVar4 = param_5 & 1;
  if (uVar4 == 0) {
    if ((param_5 & 2) != 0) {
      fVar6 = ((local_20[0] - local_10) - local_30[0]) + local_38[0];
      goto LAB_0065dfdd;
    }
  }
  else {
    fVar6 = (((local_20[0] - local_10) - local_30[0]) + local_38[0]) * 0.5;
LAB_0065dfdd:
    *param_3 = *param_3 - fVar6;
  }
  local_48 = 0;
  if (-1 < param_2) {
    do {
      if ((uint)param_1[5] < 8) {
        local_c = param_1;
      }
      else {
        local_c = (undefined4 *)*param_1;
      }
      if ((*(short *)((int)local_c + local_48 * 2) == 10) && (local_48 != param_2)) {
        *param_3 = 0.0;
        FUN_0065d530(param_1,&local_28,local_40,param_5,local_48 + 1,0);
        if (uVar4 == 0) {
          if ((param_5 & 2) != 0) {
            fVar6 = ((local_40[0] - local_28) - local_30[0]) + local_38[0];
            goto LAB_0065e085;
          }
        }
        else {
          fVar6 = (((local_40[0] - local_28) - local_30[0]) + local_38[0]) * 0.5;
LAB_0065e085:
          *param_3 = *param_3 - fVar6;
        }
        param_3[1] = *(float *)(in_ECX + 0xf0) + *(float *)(in_ECX + 0xe4) + param_3[1];
      }
      else {
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar5 + local_48 * 2) == 0) break;
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        uVar1 = *(undefined2 *)((int)puVar5 + local_48 * 2);
        if (*(int *)(in_ECX + 0xf4) == 0) {
          if (*(char *)(in_ECX + 0x108) == '\0') {
            iVar2 = FUN_0065ea80(*(undefined4 *)(in_ECX + 200),uVar1,0);
          }
          else {
            iVar2 = FUN_0065e340(*(undefined4 *)(in_ECX + 200),uVar1,0);
          }
        }
        else {
          iVar2 = FUN_0065e6b0(uVar1);
        }
        if (iVar2 != 0) {
          fVar6 = *(float *)(iVar2 + 0x10) * local_4c;
          if (local_48 == param_2) {
            *local_14 = fVar6;
          }
          else {
            *param_3 = fVar6 + *param_3;
          }
        }
        if (local_48 < param_2 + -1) {
          if (*(int *)(in_ECX + 0xf4) == 0) {
            if (*(char *)(in_ECX + 0x108) == '\0') {
              if ((uint)param_1[5] < 8) {
                local_c = param_1;
                puVar5 = param_1;
              }
              else {
                local_c = (undefined4 *)*param_1;
                puVar5 = (undefined4 *)*param_1;
              }
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar5 + local_48 * 2 + 2),2,local_20);
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_c + local_48 * 2),uVar3);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar3);
              *param_3 = ((float)(int)local_20[0] * *(float *)(in_ECX + 0xe0)) /
                         (float)*(ushort *)(*(int *)(in_ECX + 0xd8) + 0x44) + *param_3;
            }
            else {
              if ((uint)param_1[5] < 8) {
                local_c = param_1;
                puVar5 = param_1;
              }
              else {
                local_c = (undefined4 *)*param_1;
                puVar5 = (undefined4 *)*param_1;
              }
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar5 + local_48 * 2 + 2),0,local_20);
              uVar3 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_c + local_48 * 2),uVar3);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar3);
              *param_3 = (float)((int)local_20[0] >> 6) + *param_3;
            }
          }
          fVar6 = *(float *)(in_ECX + 0xec) + *param_3;
          *param_3 = fVar6;
          if (*(char *)(in_ECX + 0x108) != '\0') {
            *param_3 = (float)(int)fVar6;
          }
        }
      }
      local_48 = local_48 + 1;
    } while (local_48 <= param_2);
  }
  if (param_5 == 0) goto LAB_0065e328;
  FUN_0065d530(param_1,&local_28,&local_18,0,0xffffffff,0);
  if (uVar4 == 0) {
    if ((param_5 & 2) != 0) {
      local_18 = *param_3 - local_18;
      goto LAB_0065e2f4;
    }
  }
  else {
    local_18 = *param_3 - (local_18 + local_28) * 0.5;
LAB_0065e2f4:
    *param_3 = local_18;
  }
  if ((param_5 & 4) == 0) {
    if ((param_5 & 8) == 0) goto LAB_0065e328;
    fVar6 = param_3[1] - (float)local_14;
  }
  else {
    fVar6 = param_3[1] - ((float)local_14 + local_24) * 0.5;
  }
  param_3[1] = fVar6;
LAB_0065e328:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00660240 @ 00660240  kind=gamemisc  attributed-by=caller-vote  size=42 */

void FUN_00660240(undefined4 param_1,undefined4 param_2)

{
  FUN_00660270(param_1,param_1,param_2);
  return;
}


/* FUN_00661260 @ 00661260  kind=gamemisc  attributed-by=caller-vote  size=110 */

void FUN_00661260(int param_1,int param_2,void *param_3,int *param_4)

{
  int iVar1;
  int in_ECX;
  
  *(int *)(in_ECX + 0x44) = param_1;
  *(int *)(in_ECX + 0x48) = param_2;
  *(undefined8 *)(in_ECX + 0x30) = *(undefined8 *)param_4;
  *(undefined8 *)(in_ECX + 0x38) = *(undefined8 *)(param_4 + 2);
  *(int *)(in_ECX + 0x40) = param_4[4];
  if (*param_4 == 0) {
    iVar1 = 3;
  }
  else {
    iVar1 = 4;
  }
  FUN_005870c0(iVar1 * param_1 * param_2);
  memcpy(*(void **)(in_ECX + 0x24),param_3,*(int *)(in_ECX + 0x28) - (int)*(void **)(in_ECX + 0x24))
  ;
  return;
}


/* FUN_00661d90 @ 00661d90  kind=gamemisc  attributed-by=caller-vote  size=93 */

undefined4 FUN_00661d90(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int in_ECX;
  
  piVar1 = (int *)(in_ECX + 4);
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *piVar1) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    param_1 = iVar2;
    if (-1 < iVar4) goto LAB_00661dd4;
  }
  param_1 = *piVar1;
LAB_00661dd4:
  if (param_1 != *piVar1) {
    return *(undefined4 *)(param_1 + 0x28);
  }
  return 0;
}


/* FUN_00661df0 @ 00661df0  kind=gamemisc  attributed-by=caller-vote  size=392 */

void FUN_00661df0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int iVar6;
  
  piVar1 = in_ECX + 1;
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *piVar1) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    param_1 = iVar2;
    if (-1 < iVar4) goto LAB_00661e3a;
  }
  param_1 = *piVar1;
LAB_00661e3a:
  if (((param_1 != *piVar1) && (piVar1 = *(int **)(param_1 + 0x28), piVar1 != (int *)0x0)) &&
     (iVar2 = piVar1[1] - *piVar1 >> 0x1f, (piVar1[1] - *piVar1) / 0xc + iVar2 != iVar2)) {
    FUN_0044be20();
    in_ECX[6] = param_2;
    in_ECX[7] = 0;
    in_ECX[0x10] = 0;
    in_ECX[0xf] = -1;
    iVar2 = *piVar1;
    iVar4 = (piVar1[1] - iVar2) / 0xc;
    iVar6 = 0;
    if (0 < iVar4) {
      do {
        if (piVar1[3] == 0) {
          iVar5 = iVar6;
          if (iVar6 < 0) {
            iVar5 = 0;
          }
          if (iVar4 <= iVar5) {
            iVar5 = iVar4 + -1;
          }
        }
        else {
          iVar5 = (iVar4 + iVar6) % iVar4;
        }
        if ((param_2 < 1) || (*(int *)(iVar2 + 4 + iVar5 * 0xc) < param_2)) {
          FUN_006779e0(*(undefined4 *)(iVar2 + iVar5 * 0xc),*(undefined4 *)(iVar2 + 4 + iVar5 * 0xc)
                       ,*(undefined4 *)(iVar2 + 8 + iVar5 * 0xc));
        }
        iVar2 = *piVar1;
        iVar4 = (piVar1[1] - iVar2) / 0xc;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar4);
    }
    if ((0 < (in_ECX[4] - in_ECX[3]) / 0xc) && (iVar2 = FUN_00630970(0), *(int *)(iVar2 + 4) != 0))
    {
      (**(code **)(*in_ECX + 0x14))(1);
      iVar2 = FUN_00630970(0);
      FUN_006779e0(1,0,*(undefined4 *)(iVar2 + 8));
    }
  }
  return;
}


/* FUN_00662300 @ 00662300  kind=gamemisc  attributed-by=caller-vote  size=897 */

undefined4 FUN_00662300(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *in_ECX;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  int local_10;
  int local_c;
  
  iVar13 = (param_1[1] - *param_1) / 0xc;
  if (iVar13 != 0) {
    if (iVar13 != 1) {
      iVar4 = FUN_00630970(0);
      if (param_2 < *(int *)(iVar4 + 4)) {
        piVar2 = (int *)FUN_00630970(0);
        if (in_ECX[0xf] != *piVar2) {
          puVar3 = (undefined4 *)FUN_00630970(0);
          (**(code **)(*in_ECX + 0xc))(*puVar3);
          iVar13 = 0;
LAB_0066240a:
          piVar2 = (int *)FUN_00630970(iVar13);
          in_ECX[0xf] = *piVar2;
          *(undefined1 *)(in_ECX + 0x12) = 1;
          return 1;
        }
      }
      else {
        iVar13 = iVar13 + -1;
        iVar4 = FUN_00630970(iVar13);
        if ((param_2 < *(int *)(iVar4 + 4)) || (param_1[3] != 0)) {
          in_ECX[0xf] = -1;
          iVar13 = (param_1[1] - *param_1) / 0xc;
          iVar4 = iVar13 + -1;
          if (0 < param_1[3]) {
            iVar4 = iVar13;
          }
          if (iVar4 <= in_ECX[0x10]) {
            in_ECX[0x10] = 0;
          }
          local_c = 0;
          if (0 < iVar4) {
            do {
              iVar13 = (in_ECX[0x10] + local_c) % iVar4;
              piVar2 = (int *)FUN_00630970(iVar13);
              iVar10 = iVar13 + 1;
              if (0 < param_1[3]) {
                iVar10 = iVar10 % ((param_1[1] - *param_1) / 0xc);
              }
              piVar5 = (int *)FUN_00630970(iVar10);
              if (*piVar2 < 0) {
                return 0;
              }
              if (*piVar5 < 0) {
                return 0;
              }
              iVar10 = (**(code **)(*in_ECX + 4))();
              if (iVar10 <= *piVar2) {
                return 0;
              }
              iVar10 = (**(code **)(*in_ECX + 4))();
              if (iVar10 <= *piVar5) {
                return 0;
              }
              iVar10 = piVar5[1];
              iVar1 = param_1[3];
              iVar9 = piVar2[1];
              if (0 < iVar1) {
                iVar6 = (param_2 / iVar1) * iVar1;
                iVar9 = iVar9 + iVar6;
                iVar10 = iVar10 + iVar6;
                if (iVar13 == iVar4 + -1) {
                  iVar10 = iVar10 + iVar1;
                }
              }
              if ((iVar9 <= param_2) && (param_2 <= iVar10)) {
                fVar11 = (float)(param_2 - iVar9) / (float)(iVar10 - iVar9);
                local_10 = iVar13 + 2;
                iVar4 = iVar13 + -1;
                if (0 < param_1[3]) {
                  local_10 = (param_1[1] - *param_1) / 0xc;
                  iVar4 = (iVar13 + -1 + local_10) % local_10;
                  local_10 = (iVar13 + 2) % local_10;
                }
                piVar7 = (int *)FUN_00630970(iVar4);
                piVar8 = (int *)FUN_00630970(local_10);
                if (*piVar7 < 0) {
                  return 0;
                }
                if (*piVar8 < 0) {
                  return 0;
                }
                iVar4 = (**(code **)(*in_ECX + 4))();
                if (iVar4 <= *piVar7) {
                  return 0;
                }
                iVar4 = *piVar8;
                iVar10 = (**(code **)(*in_ECX + 4))();
                if (iVar10 <= iVar4) {
                  return 0;
                }
                fVar12 = 1.0 - fVar11;
                (**(code **)(*in_ECX + 0x18))
                          (*piVar7,*piVar2,*piVar5,iVar4,piVar2[2],piVar5[2],fVar11,
                           fVar12 * fVar12 * fVar12,fVar11 * 3.0 * fVar12 * fVar12,
                           fVar11 * 3.0 * fVar11 * fVar12,fVar11 * fVar11 * fVar11);
                in_ECX[0x10] = iVar13;
                *(undefined1 *)(in_ECX + 0x12) = 1;
                return 1;
              }
              local_c = local_c + 1;
            } while (local_c < iVar4);
          }
        }
        else {
          piVar2 = (int *)FUN_00630970(iVar13);
          if (in_ECX[0xf] != *piVar2) {
            puVar3 = (undefined4 *)FUN_00630970(iVar13);
            (**(code **)(*in_ECX + 0xc))(*puVar3);
            iVar13 = (param_1[1] - *param_1) / 0xc + -1;
            goto LAB_0066240a;
          }
        }
      }
      return 0;
    }
    piVar2 = (int *)FUN_00630970(0);
    if (in_ECX[0xf] != *piVar2) {
      puVar3 = (undefined4 *)FUN_00630970(0);
      (**(code **)(*in_ECX + 0xc))(*puVar3);
      piVar2 = (int *)FUN_00630970(0);
      in_ECX[0xf] = *piVar2;
      *(undefined1 *)(in_ECX + 0x12) = 1;
      return 1;
    }
  }
  return 0;
}


/* FUN_00662690 @ 00662690  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_00662690(undefined4 param_1)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x1c) = param_1;
  FUN_00662300(in_ECX + 0xc,param_1);
  return;
}


/* FUN_006626b0 @ 006626b0  kind=gamemisc  attributed-by=caller-vote  size=20 */

void FUN_006626b0(void)

{
  int in_ECX;
  
  FUN_0044be20();
  *(undefined4 *)(in_ECX + 0x1c) = 0;
  return;
}


/* FUN_00662860 @ 00662860  kind=gamemisc  attributed-by=caller-vote  size=404 */

void FUN_00662860(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  undefined1 *puVar5;
  float fVar6;
  undefined1 local_28 [8];
  float local_20 [2];
  undefined1 local_18 [8];
  undefined1 local_10 [4];
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0x24c) != 0) {
    iVar1 = FUN_0062b400();
    if (iVar1 != 0) {
      iVar1 = FUN_0062b400();
      if (iVar1 != 0) {
        uVar2 = (uint)(*(int *)(in_ECX + 0x238) != 1);
        iVar1 = FUN_0062de60(local_10);
        puVar5 = local_18;
        FUN_0062b400(puVar5);
        iVar3 = FUN_0062de60(puVar5);
        local_c = *(float *)(iVar1 + uVar2 * 4) / *(float *)(iVar3 + uVar2 * 4);
        if (local_c < 1.0) {
          local_c = 1.0;
        }
        FUN_0062de60(local_20);
        puVar5 = local_18;
        FUN_0062b400(puVar5);
        iVar1 = FUN_0062de60(puVar5);
        local_20[uVar2] = *(float *)(iVar1 + uVar2 * 4) / local_c;
        FUN_0062bb90(local_20,1);
        iVar1 = FUN_0062de60(local_18);
        puVar5 = local_10;
        FUN_0062b400(puVar5);
        iVar3 = FUN_0062de60(puVar5);
        if (*(float *)(iVar3 + uVar2 * 4) < *(float *)(iVar1 + uVar2 * 4)) {
          iVar1 = FUN_0062b510(local_18);
          iVar3 = FUN_0062de60(local_10);
          puVar5 = local_28;
          FUN_0062b400(puVar5);
          iVar4 = FUN_0062de60(puVar5);
          fVar6 = -(*(float *)(iVar1 + uVar2 * 4) /
                   (*(float *)(iVar3 + uVar2 * 4) - *(float *)(iVar4 + uVar2 * 4)));
        }
        else {
          fVar6 = 0.0;
        }
        FUN_00662f00(fVar6);
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00662dd0 @ 00662dd0  kind=gamemisc  attributed-by=caller-vote  size=49 */

int FUN_00662dd0(int param_1)

{
  int iVar1;
  
  while( true ) {
    if (param_1 == 0) {
      return 0;
    }
    iVar1 = FUN_00662e10(param_1);
    if (iVar1 != 0) break;
    param_1 = FUN_0062b400();
  }
  return iVar1;
}


/* FUN_00662e10 @ 00662e10  kind=gamemisc  attributed-by=caller-vote  size=217 */

void FUN_00662e10(int param_1)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  int *local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7308;
  local_10 = ExceptionList;
  if (param_1 == 0) {
    return;
  }
  if (((*(int *)(in_ECX + 0x238) == 0) && ((*(uint *)(param_1 + 0x128) >> 1 & 1) != 0)) ||
     ((*(int *)(in_ECX + 0x238) == 1 && ((*(byte *)(param_1 + 0x128) & 1) != 0)))) {
    return;
  }
  ExceptionList = &local_10;
  FUN_00629140(&local_18);
  local_8 = 0;
  piVar2 = (int *)*local_18;
  if (piVar2 != local_18) {
    do {
      iVar1 = FUN_00662e10(piVar2[2]);
      if (iVar1 != 0) break;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != local_18);
  }
  piVar2 = (int *)*local_18;
  *local_18 = (int)local_18;
  local_18[1] = (int)local_18;
  local_14 = 0;
  if (piVar2 == local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_18);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar2);
}


/* FUN_00662f00 @ 00662f00  kind=gamemisc  attributed-by=caller-vote  size=168 */

void FUN_00662f00(float param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  float fVar4;
  undefined1 *puVar5;
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0062b400();
  if (iVar1 != 0) {
    fVar4 = 0.0;
    if ((param_1 < 0.0) || (fVar4 = 1.0, 1.0 < param_1)) {
      param_1 = fVar4;
    }
    uVar3 = (uint)(*(int *)(in_ECX + 0x238) != 1);
    FUN_0062b510(local_10);
    puVar5 = local_18;
    FUN_0062b400(puVar5);
    iVar1 = FUN_0062de60(puVar5);
    iVar2 = FUN_0062de60(local_20);
    local_10[uVar3] = (*(float *)(iVar1 + uVar3 * 4) - *(float *)(iVar2 + uVar3 * 4)) * param_1;
    FUN_006295a0(local_10,1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00662fc0 @ 00662fc0  kind=gamemisc  attributed-by=caller-vote  size=52 */

int FUN_00662fc0(int param_1,int param_2,int param_3)

{
  while (param_1 != param_2) {
    param_2 = param_2 + -0x18;
    param_3 = param_3 + -0x18;
    if (param_3 != param_2) {
      FUN_0040f680(param_2,0,0xffffffff);
    }
  }
  return param_3;
}


/* FUN_00663000 @ 00663000  kind=gamemisc  attributed-by=caller-vote  size=152 */

undefined4 * FUN_00663000(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != param_1) {
      if (7 < (uint)param_3[5]) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*param_3);
      }
      param_3[5] = 7;
      param_3[4] = 0;
      *(undefined2 *)param_3 = 0;
      if ((uint)param_1[5] < 8) {
        if (param_1[4] + 1 != 0) {
          memmove(param_3,param_1,(param_1[4] + 1) * 2);
        }
      }
      else {
        *param_3 = *param_1;
        *param_1 = 0;
      }
      param_3[4] = param_1[4];
      param_3[5] = param_1[5];
      param_1[5] = 7;
      param_1[4] = 0;
      *(undefined2 *)param_1 = 0;
    }
    param_1 = param_1 + 6;
    param_3 = param_3 + 6;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_006630a0 @ 006630a0  kind=gamemisc  attributed-by=caller-vote  size=140 */

void FUN_006630a0(undefined2 *param_1,int param_2,undefined4 param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_006f7341;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_2 != 0; param_2 = param_2 + -1) {
    local_8 = 1;
    if (param_1 != (undefined2 *)0x0) {
      *(undefined4 *)(param_1 + 10) = 7;
      *(undefined4 *)(param_1 + 8) = 0;
      *param_1 = 0;
      FUN_0040f680(param_3,0,0xffffffff);
    }
    param_1 = param_1 + 0xc;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00663150 @ 00663150  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_00663150(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    if (param_1 != param_3) {
      FUN_0040f680(param_3,0,0xffffffff);
    }
  }
  return;
}


/* FUN_006637a0 @ 006637a0  kind=gamemisc  attributed-by=caller-vote  size=802 */

void FUN_006637a0(int *param_1,int param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int *in_ECX;
  uint uStack_80;
  undefined1 local_49;
  void *local_48 [4];
  undefined4 local_38;
  uint local_34;
  void *local_30 [4];
  undefined4 local_20;
  uint local_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7480;
  local_10 = ExceptionList;
  uStack_80 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_80;
  ExceptionList = &local_10;
  iVar1 = *in_ECX;
  local_18 = uStack_80;
  puVar3 = &uStack_80;
  if (param_3 != 0) {
    iVar2 = in_ECX[1];
    if ((uint)((in_ECX[2] - iVar2) / 0x18) < param_3) {
      iVar2 = (iVar2 - *in_ECX) / 0x18;
      if (0xaaaaaaaU - iVar2 < param_3) {
        local_14 = (undefined1 *)&uStack_80;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_14 = (undefined1 *)&uStack_80;
      iVar4 = FUN_0046dde0(param_3 + iVar2);
      iVar5 = FUN_0046ef20(iVar4);
      iVar2 = (param_2 - *in_ECX) / 0x18;
      local_8 = 0;
      FUN_006630a0(iVar5 + iVar2 * 0x18,param_3,param_4,&local_49,0,param_1);
      FUN_00456fb0(*in_ECX,param_2,iVar5,&local_49,0,param_1);
      FUN_00456fb0(param_2,in_ECX[1],iVar5 + (iVar2 + param_3) * 0x18,&local_49,0,param_1);
      iVar2 = *in_ECX;
      if (*in_ECX != 0) {
        FUN_00452650(*in_ECX,in_ECX[1],&local_49,param_1);
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*in_ECX);
      }
      *in_ECX = iVar5;
      in_ECX[2] = iVar5 + iVar4 * 0x18;
      in_ECX[1] = iVar5 + (param_3 + (in_ECX[1] - iVar2) / 0x18) * 0x18;
      puVar3 = (uint *)local_14;
    }
    else if ((uint)((iVar2 - param_2) / 0x18) < param_3) {
      local_1c = 7;
      local_20 = 0;
      local_30[0] = (void *)((uint)local_30[0] & 0xffff0000);
      local_14 = (undefined1 *)&uStack_80;
      FUN_0040f680(param_4,0,0xffffffff);
      local_8 = 2;
      FUN_00456fb0(param_2,in_ECX[1],param_3 * 0x18 + param_2,&local_49,0,param_1);
      local_8 = CONCAT31(local_8._1_3_,3);
      FUN_006630a0(in_ECX[1],param_3 - (in_ECX[1] - param_2) / 0x18,local_30,&local_49,0,param_1);
      in_ECX[1] = in_ECX[1] + param_3 * 0x18;
      local_8 = 2;
      FUN_00663150(param_2,in_ECX[1] + param_3 * -0x18,local_30);
      puVar3 = (uint *)local_14;
      if (7 < local_1c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_30[0]);
      }
    }
    else {
      local_34 = 7;
      local_38 = 0;
      local_48[0] = (void *)((uint)local_48[0] & 0xffff0000);
      FUN_0040f680(param_4,0,0xffffffff);
      iVar2 = in_ECX[1];
      iVar5 = iVar2 + param_3 * -0x18;
      local_8 = 5;
      iVar4 = FUN_00456fb0(iVar5,iVar2,iVar2,&local_49,0,param_1);
      in_ECX[1] = iVar4;
      FUN_00662fc0(param_2,iVar5,iVar2);
      FUN_00663150(param_2,param_3 * 0x18 + param_2,local_48);
      puVar3 = (uint *)local_14;
      if (7 < local_34) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_48[0]);
      }
    }
  }
  local_14 = (undefined1 *)puVar3;
  *param_1 = *in_ECX + ((param_2 - iVar1) / 0x18) * 0x18;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00663ee0 @ 00663ee0  kind=gamemisc  attributed-by=caller-vote  size=137 */

int * FUN_00663ee0(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int *in_ECX;
  undefined1 local_5;
  
  if ((param_2 == *in_ECX) && (param_3 == in_ECX[1])) {
    FUN_00452650(*in_ECX,in_ECX[1],&local_5,param_2);
    in_ECX[1] = *in_ECX;
    *param_1 = param_2;
    return param_1;
  }
  if (param_2 != param_3) {
    iVar1 = FUN_00663000(param_3,in_ECX[1],param_2,param_2);
    FUN_00452650(iVar1,in_ECX[1],&local_5,param_2);
    in_ECX[1] = iVar1;
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}


/* FUN_00664ba0 @ 00664ba0  kind=gamemisc  attributed-by=caller-vote  size=72 */

void FUN_00664ba0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x24);
  iVar2 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&stack0x00000004);
  if (*(int *)(in_ECX + 0x28) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x28) = *(int *)(in_ECX + 0x28) + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_00664c10 @ 00664c10  kind=gamemisc  attributed-by=caller-vote  size=80 */

void FUN_00664c10(int param_1,undefined4 param_2)

{
  int iVar1;
  int in_ECX;
  int *piVar2;
  
  if (in_ECX + 0x30 != param_1) {
    FUN_0040f680(param_1,0,0xffffffff);
  }
  piVar2 = (int *)**(int **)(in_ECX + 0x24);
  if (piVar2 != *(int **)(in_ECX + 0x24)) {
    do {
      iVar1 = FUN_00661d90(param_1);
      if (iVar1 != 0) {
        FUN_00661df0(param_1,param_2);
        *(undefined1 *)(in_ECX + 0x2c) = 1;
      }
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*(int *)(in_ECX + 0x24));
  }
  return;
}


/* FUN_00664c60 @ 00664c60  kind=gamemisc  attributed-by=caller-vote  size=78 */

char FUN_00664c60(undefined4 param_1)

{
  char cVar1;
  int *in_ECX;
  char cVar2;
  int *piVar3;
  
  cVar2 = '\0';
  *(undefined1 *)((int)in_ECX + 0x2e) = 1;
  piVar3 = *(int **)in_ECX[9];
  if (piVar3 != (int *)in_ECX[9]) {
    do {
      cVar1 = FUN_00662690(param_1);
      piVar3 = (int *)*piVar3;
      if (cVar1 != '\0') {
        cVar2 = '\x01';
      }
    } while (piVar3 != (int *)in_ECX[9]);
    if (cVar2 != '\0') {
      (**(code **)(*in_ECX + 4))(0);
    }
  }
  return cVar2;
}


/* FUN_00664cc0 @ 00664cc0  kind=gamemisc  attributed-by=caller-vote  size=35 */

void FUN_00664cc0(void)

{
  int in_ECX;
  int *piVar1;
  
  *(undefined1 *)(in_ECX + 0x2c) = 0;
  piVar1 = (int *)**(int **)(in_ECX + 0x24);
  if (piVar1 != *(int **)(in_ECX + 0x24)) {
    do {
      FUN_006626b0();
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(in_ECX + 0x24));
  }
  return;
}


/* FUN_006653a0 @ 006653a0  kind=gamemisc  attributed-by=caller-vote  size=425 */

void FUN_006653a0(char param_1,char param_2)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if ((*(char *)(in_ECX + 0x229) != param_1) && (*(int *)(in_ECX + 0x22c) != 0)) {
    if ((*(char *)(in_ECX + 0x229) == '\0') &&
       (((*(int *)(in_ECX + 0x22c) == 2 && (param_2 == '\0')) &&
        (piVar3 = (int *)**(int **)(in_ECX + 0x220), piVar3 != *(int **)(in_ECX + 0x220))))) {
      do {
        FUN_006653a0(0,1);
        piVar3 = (int *)*piVar3;
      } while (piVar3 != (int *)*(int *)(in_ECX + 0x220));
    }
    *(char *)(in_ECX + 0x229) = param_1;
    if (param_1 == '\0') {
      FUN_00636810(in_ECX + 0x1f0,0);
      FUN_00636810(in_ECX + 0x1c0,0);
      FUN_00636810(in_ECX + 0x178,0);
      FUN_00636810(in_ECX + 0x1a8,0);
      iVar1 = FUN_00636f70(in_ECX + 0x1f0);
      iVar2 = FUN_00636f70(in_ECX + 0x1c0);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = FUN_00636f70(in_ECX + 0x178);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = in_ECX + 0x1a8;
    }
    else {
      FUN_00636810(in_ECX + 400,0);
      FUN_00636810(in_ECX + 0x160,0);
      FUN_00636810(in_ECX + 0x1d8,0);
      FUN_00636810(in_ECX + 0x208,0);
      iVar1 = FUN_00636f70(in_ECX + 400);
      iVar2 = FUN_00636f70(in_ECX + 0x160);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = FUN_00636f70(in_ECX + 0x1d8);
      if (iVar1 < iVar2) {
        iVar1 = iVar2;
      }
      iVar2 = in_ECX + 0x208;
    }
    iVar2 = FUN_00636f70(iVar2);
    if (iVar1 < iVar2) {
      iVar1 = iVar2;
    }
    FUN_00636cb0(iVar1);
    FUN_00636f10();
  }
  return;
}


/* FUN_00665bd0 @ 00665bd0  kind=gamemisc  attributed-by=caller-vote  size=161 */

int FUN_00665bd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7711;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_006819e0();
  *(undefined2 *)(iVar2 + 0xc) = 0;
  local_8 = 1;
  if ((undefined4 *)(iVar2 + 0x10) != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x10) = *param_1;
    *puVar1 = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    uVar3 = FUN_0046d550(0,0);
    *puVar1 = uVar3;
    *puVar1 = param_1[1];
    param_1[1] = uVar3;
    uVar3 = *(undefined4 *)(iVar2 + 0x18);
    *(undefined4 *)(iVar2 + 0x18) = param_1[2];
    param_1[2] = uVar3;
  }
  ExceptionList = local_10;
  return iVar2;
}


/* FUN_00665f30 @ 00665f30  kind=gamemisc  attributed-by=caller-vote  size=313 */

undefined4 * FUN_00665f30(undefined4 *param_1,char param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  int *piVar6;
  int *piVar7;
  bool bVar8;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_006f7730;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  local_8 = 0;
  bVar8 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar6 = (int *)piVar1[1];
    do {
      piVar7 = piVar6;
      iVar3 = piVar7[4];
      if (param_2 == '\0') {
        if ((iVar2 < iVar3) || ((iVar2 <= iVar3 && (param_3[1] < piVar7[5])))) {
          bVar8 = true;
          goto LAB_00665fd3;
        }
        bVar8 = false;
LAB_00665fc9:
        piVar6 = (int *)piVar7[2];
      }
      else {
        if ((iVar3 < iVar2) || ((iVar3 <= iVar2 && (piVar7[5] < param_3[1])))) {
          bVar8 = true;
        }
        else {
          bVar8 = false;
        }
        bVar8 = !bVar8;
        if (!bVar8) goto LAB_00665fc9;
LAB_00665fd3:
        piVar6 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar6 + 0xd) == '\0');
  }
  _param_2 = piVar7;
  if (bVar8) {
    if (piVar7 == (int *)*piVar1) {
      puVar5 = (undefined4 *)&param_2;
      bVar8 = true;
      goto LAB_00665ff5;
    }
    FUN_0042c740();
  }
  if ((*piVar4 <= _param_2[4]) && ((*piVar4 < _param_2[4] || (piVar4[1] <= _param_2[5])))) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar5 = &param_3;
LAB_00665ff5:
  puVar5 = (undefined4 *)FUN_00665d30(puVar5,bVar8,piVar7,piVar4,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00667a90 @ 00667a90  kind=gamemisc  attributed-by=caller-vote  size=261 */

undefined4 * FUN_00667a90(int *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int *in_ECX;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int local_28;
  undefined4 *local_24;
  undefined4 local_20;
  undefined4 *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar1 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7ce0;
  local_10 = ExceptionList;
  puVar2 = (undefined4 *)*in_ECX;
  puVar6 = puVar2;
  if (*(char *)((int)puVar2[1] + 0xd) == '\0') {
    puVar4 = (undefined4 *)puVar2[1];
    do {
      if ((int)puVar4[4] < *param_1) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar6 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  if ((puVar6 != puVar2) && ((int)puVar6[4] <= *param_1)) {
    return puVar6 + 5;
  }
  local_18 = 0;
  ExceptionList = &local_10;
  puVar2 = (undefined4 *)FUN_0046d550(0,0);
  local_28 = *piVar1;
  local_8 = 0;
  local_1c = puVar2;
  local_1c = (undefined4 *)FUN_0046d550(0,0);
  local_20 = 0;
  local_18 = 0;
  local_8 = CONCAT31(local_8._1_3_,1);
  local_24 = puVar2;
  iVar3 = FUN_00665bd0(&local_28);
  FUN_004ebd50(&param_1,puVar6,iVar3 + 0x10,iVar3);
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


/* FUN_00667be0 @ 00667be0  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00667be0(int param_1)

{
  float *pfVar1;
  int in_ECX;
  float *pfVar2;
  int iVar3;
  
  iVar3 = 2;
  pfVar1 = (float *)(in_ECX + 4);
  pfVar2 = (float *)(param_1 + 0xc);
  do {
    pfVar1[-1] = pfVar2[-3] + pfVar1[-1];
    *pfVar1 = *(float *)((param_1 - in_ECX) + -0x20 + (int)(pfVar1 + 8)) + *pfVar1;
    pfVar1[1] = pfVar2[-1] + pfVar1[1];
    pfVar1[2] = *pfVar2 + pfVar1[2];
    pfVar1[3] = pfVar2[1] + pfVar1[3];
    pfVar1[4] = pfVar2[2] + pfVar1[4];
    pfVar1[5] = pfVar2[3] + pfVar1[5];
    pfVar1[6] = pfVar2[4] + pfVar1[6];
    iVar3 = iVar3 + -1;
    pfVar1 = pfVar1 + 8;
    pfVar2 = pfVar2 + 8;
  } while (iVar3 != 0);
  return;
}


/* FUN_00667c90 @ 00667c90  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00667c90(int param_1)

{
  float *pfVar1;
  int in_ECX;
  float *pfVar2;
  int iVar3;
  
  iVar3 = 2;
  pfVar1 = (float *)(in_ECX + 4);
  pfVar2 = (float *)(param_1 + 0xc);
  do {
    pfVar1[-1] = pfVar1[-1] - pfVar2[-3];
    *pfVar1 = *pfVar1 - *(float *)((param_1 - in_ECX) + -0x20 + (int)(pfVar1 + 8));
    pfVar1[1] = pfVar1[1] - pfVar2[-1];
    pfVar1[2] = pfVar1[2] - *pfVar2;
    pfVar1[3] = pfVar1[3] - pfVar2[1];
    pfVar1[4] = pfVar1[4] - pfVar2[2];
    pfVar1[5] = pfVar1[5] - pfVar2[3];
    pfVar1[6] = pfVar1[6] - pfVar2[4];
    iVar3 = iVar3 + -1;
    pfVar1 = pfVar1 + 8;
    pfVar2 = pfVar2 + 8;
  } while (iVar3 != 0);
  return;
}


/* FUN_00668110 @ 00668110  kind=gamemisc  attributed-by=caller-vote  size=556 */

void FUN_00668110(int *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  uint uVar2;
  int *piVar3;
  int *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uStack_70;
  undefined4 local_60 [16];
  uint local_20;
  int local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_3;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7d00;
  local_10 = ExceptionList;
  uStack_70 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_70;
  ExceptionList = &local_10;
  local_20 = param_2;
  local_1c = param_2 - *in_ECX >> 6;
  if (param_3 != 0) {
    iVar7 = in_ECX[1];
    if ((uint)(in_ECX[2] - iVar7 >> 6) < param_3) {
      iVar4 = iVar7 - *in_ECX >> 6;
      if (0x3ffffffU - iVar4 < param_3) {
        param_3 = iVar7;
        local_14 = (undefined1 *)&uStack_70;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      iVar4 = iVar4 + param_3;
      param_3 = iVar7;
      local_20 = FUN_00667e50(iVar4);
      local_18 = (void *)0x0;
      if ((local_20 != 0) &&
         ((0x3ffffff < local_20 || (local_18 = operator_new(local_20 << 6), local_18 == (void *)0x0)
          ))) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      iVar7 = param_2 - *in_ECX >> 6;
      local_8 = 0;
      FUN_00666080((void *)(iVar7 * 0x40 + (int)local_18),uVar2,param_4,(int)&param_3 + 3,0,param_2)
      ;
      FUN_0063a740(*in_ECX,param_2,local_18,(int)&param_4 + 3,0,param_2);
      piVar3 = local_18;
      FUN_0063a740(param_2,in_ECX[1],(void *)((iVar7 + uVar2) * 0x40 + (int)local_18),
                   (int)&param_4 + 3,0,param_2);
      pvVar1 = (void *)*in_ECX;
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      in_ECX[2] = (int)(local_20 * 0x40 + (int)piVar3);
      in_ECX[1] = (int)((uVar2 + (in_ECX[1] - (int)pvVar1 >> 6)) * 0x40 + (int)piVar3);
      *in_ECX = (int)piVar3;
    }
    else {
      puVar5 = param_4;
      puVar8 = local_60;
      local_18 = in_ECX;
      local_14 = (undefined1 *)&uStack_70;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar8 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar8 = puVar8 + 1;
      }
      if ((uint)(iVar7 - param_2 >> 6) < param_3) {
        iVar4 = param_3 * 0x40;
        param_3 = iVar7;
        FUN_0063a740(local_20,iVar7,iVar4 + local_20,(int)&param_4 + 3,0,param_2);
        local_8 = 2;
        FUN_00666080(local_18[1],uVar2 - (local_18[1] - param_2 >> 6),local_60,(int)&param_4 + 3,0,
                     param_2);
        local_18[1] = local_18[1] + iVar4;
        FUN_00666150(param_2,local_18[1] + uVar2 * -0x40,local_60);
        in_ECX = local_18;
      }
      else {
        iVar4 = param_3 * 0x40;
        iVar6 = iVar7 + param_3 * -0x40;
        param_3 = iVar7;
        iVar7 = FUN_0063a740(iVar6,iVar7,iVar7,(int)&param_4 + 3,0,param_2);
        local_18[1] = iVar7;
        FUN_00665c90(param_2,iVar6,param_3);
        FUN_00666150(param_2,iVar4 + param_2,local_60);
        in_ECX = local_18;
      }
    }
  }
  *param_1 = local_1c * 0x40 + *in_ECX;
  ExceptionList = local_10;
  return;
}


/* FUN_00668360 @ 00668360  kind=gamemisc  attributed-by=caller-vote  size=601 */

void FUN_00668360(int *param_1,undefined8 *param_2,uint param_3,undefined4 *param_4)

{
  void *pvVar1;
  void *pvVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int *in_ECX;
  int iVar6;
  int iVar7;
  undefined8 *puVar8;
  int iVar9;
  uint local_40;
  undefined1 local_21;
  undefined4 local_20;
  void *pvStack_1c;
  uint local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7d20;
  local_10 = ExceptionList;
  local_40 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&local_40;
  ExceptionList = &local_10;
  iVar6 = (int)param_2 - *in_ECX;
  local_18 = local_40;
  puVar3 = &local_40;
  if (param_3 != 0) {
    iVar7 = in_ECX[1];
    if ((uint)(in_ECX[2] - iVar7 >> 3) < param_3) {
      iVar7 = iVar7 - *in_ECX >> 3;
      if (0x1fffffffU - iVar7 < param_3) {
        local_14 = (undefined1 *)&local_40;
                    /* WARNING: Subroutine does not return */
        std::_Xlength_error("vector<T> too long");
      }
      local_14 = (undefined1 *)&local_40;
      uVar4 = FUN_00428a60(iVar7 + param_3);
      pvStack_1c = (void *)0x0;
      if ((uVar4 != 0) &&
         ((0x1fffffff < uVar4 || (pvStack_1c = operator_new(uVar4 * 8), pvStack_1c == (void *)0x0)))
         ) {
                    /* WARNING: Subroutine does not return */
        std::_Xbad_alloc();
      }
      iVar7 = (int)param_2 - *in_ECX >> 3;
      local_8 = 0;
      FUN_006660b0((void *)((int)pvStack_1c + iVar7 * 8),param_3,param_4,&local_21,0,param_1);
      FUN_00427ab0(*in_ECX,param_2,pvStack_1c,&local_21,0,param_1);
      pvVar2 = pvStack_1c;
      FUN_00427ab0(param_2,in_ECX[1],(void *)((int)pvStack_1c + (param_3 + iVar7) * 8),&local_21,0,
                   param_1);
      pvVar1 = (void *)*in_ECX;
      if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(pvVar1);
      }
      *in_ECX = (int)pvVar2;
      in_ECX[2] = (int)((int)pvVar2 + uVar4 * 8);
      in_ECX[1] = (int)((int)pvVar2 + (param_3 + (in_ECX[1] - (int)pvVar1 >> 3)) * 8);
      puVar3 = (uint *)local_14;
    }
    else {
      local_20 = *param_4;
      pvStack_1c = (void *)param_4[1];
      if ((uint)(iVar7 - (int)param_2 >> 3) < param_3) {
        local_14 = (undefined1 *)&local_40;
        FUN_00427ab0(param_2,iVar7,param_2 + param_3,&local_21,0,param_1);
        local_8 = 2;
        FUN_006660b0(in_ECX[1],param_3 - (in_ECX[1] - (int)param_2 >> 3),&local_20,&local_21,0,
                     param_1);
        in_ECX[1] = in_ECX[1] + param_3 * 8;
        puVar8 = (undefined8 *)(in_ECX[1] + param_3 * -8);
        puVar3 = (uint *)local_14;
        if (param_2 != puVar8) {
          do {
            *param_2 = CONCAT44(pvStack_1c,local_20);
            param_2 = param_2 + 1;
          } while (param_2 != puVar8);
        }
      }
      else {
        iVar9 = iVar7 + param_3 * -8;
        iVar5 = FUN_00427ab0(iVar9,iVar7,iVar7,&local_21,0,param_1);
        in_ECX[1] = iVar5;
        FUN_00665cc0(param_2,iVar9,iVar7);
        puVar3 = (uint *)local_14;
        if (param_2 != param_2 + param_3) {
          puVar8 = param_2;
          do {
            *puVar8 = CONCAT44(pvStack_1c,local_20);
            puVar8 = puVar8 + 1;
          } while (puVar8 != param_2 + param_3);
        }
      }
    }
  }
  local_14 = (undefined1 *)puVar3;
  *param_1 = *in_ECX + (iVar6 >> 3) * 8;
  ExceptionList = local_10;
  __security_check_cookie(local_18 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00668870 @ 00668870  kind=gamemisc  attributed-by=caller-vote  size=185 */

void FUN_00668870(uint param_1)

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
  puStack_c = &LAB_006f7d80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pvVar3 = (void *)0x0;
  if (param_1 != 0) {
    if (param_1 < 0x4000000) {
      pvVar3 = operator_new(param_1 << 6);
      if (pvVar3 != (void *)0x0) goto LAB_006688d1;
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
LAB_006688d1:
  local_8 = 0;
  FUN_0063a740(*in_ECX,in_ECX[1],pvVar3,(int)&param_1 + 3,0,param_1);
  pvVar1 = (void *)*in_ECX;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  in_ECX[2] = (void *)(uVar2 * 0x40 + (int)pvVar3);
  in_ECX[1] = (in_ECX[1] - (int)pvVar1 & 0xffffffc0U) + (int)pvVar3;
  *in_ECX = pvVar3;
  ExceptionList = local_10;
  return;
}


/* FUN_00668a40 @ 00668a40  kind=gamemisc  attributed-by=caller-vote  size=115 */

void FUN_00668a40(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  if (param_1 <= (uint)(in_ECX[2] - in_ECX[1] >> 6)) {
    return;
  }
  if (0x3ffffffU - (in_ECX[1] - *in_ECX >> 6) < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar1 = in_ECX[2] - *in_ECX >> 6;
  if (0x3ffffff - (uVar1 >> 1) < uVar1) {
    FUN_00668870();
    return;
  }
  FUN_00668870();
  return;
}


