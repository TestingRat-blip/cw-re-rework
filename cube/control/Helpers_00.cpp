// Helpers_00 (control) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers_00.h"

/* FUN_00401f80 @ 00401f80  kind=gamemisc  attributed-by=caller-vote  size=106 */

void FUN_00401f80(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,param_1[4] + 1);
    }
  }
  else {
    *in_ECX = *param_1;
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  in_ECX[6] = param_1[6];
  return;
}


/* FUN_004021e0 @ 004021e0  kind=gamemisc  attributed-by=caller-vote  size=41 */

int FUN_004021e0(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_004050c0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if (iVar1 != -0x10) {
    FUN_00401f80(param_1,0);
  }
  return iVar1;
}


/* FUN_004026a0 @ 004026a0  kind=gamemisc  attributed-by=caller-vote  size=539 */

void FUN_004026a0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
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
    if (0xf < (uint)param_5[9]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[4]);
    }
    param_5[9] = 0xf;
    param_5[8] = 0;
    *(undefined1 *)(param_5 + 4) = 0;
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
        goto LAB_004028aa;
      }
LAB_00402801:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00402801;
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
LAB_004028aa:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004028d0 @ 004028d0  kind=gamemisc  attributed-by=caller-vote  size=468 */

undefined4 * FUN_004028d0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

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
  
  puStack_c = &LAB_006e1280;
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
        if (0xf < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_0040c520(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_00402a71;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_00402919;
      }
      piVar3 = param_2 + 4;
      if (0xf < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_0040c520(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_004043c0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_00402a16;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00402919;
        }
      }
      else {
LAB_00402a16:
        cVar1 = FUN_004043c0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_004043c0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_00402a71:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_00402ac0(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_00402919;
        }
      }
      uVar5 = 0;
      goto LAB_00402919;
    }
    piVar3 = param_2 + 4;
    if (0xf < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_0040c520(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_00402a71;
  }
  uVar5 = 1;
LAB_00402919:
  FUN_004026a0(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00402ac0 @ 00402ac0  kind=gamemisc  attributed-by=caller-vote  size=600 */

void FUN_00402ac0(undefined4 *param_1,char param_2,byte *param_3,void *param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *in_ECX;
  int *piVar8;
  byte *pbVar9;
  byte *pbVar10;
  bool bVar11;
  int *local_24;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e12a0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar1 = (int *)*in_ECX;
  bVar11 = true;
  local_8 = 0;
  piVar8 = (int *)piVar1[1];
  local_24 = piVar1;
  while (*(char *)((int)piVar8 + 0xd) == '\0') {
    pbVar9 = (byte *)(piVar8 + 4);
    if (param_2 == '\0') {
      uVar2 = piVar8[8];
      if (0xf < (uint)piVar8[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar3 = *(uint *)(param_3 + 0x10);
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar5 = uVar2;
      if (uVar3 < uVar2) {
        uVar5 = uVar3;
      }
      if (uVar5 == 0) {
LAB_00402c40:
        if (uVar3 < uVar2) {
          uVar5 = 0xffffffff;
        }
        else {
          uVar5 = (uint)(uVar3 != uVar2);
        }
      }
      else {
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar10 != *(int *)pbVar9) goto LAB_00402c06;
          pbVar10 = pbVar10 + 4;
          pbVar9 = pbVar9 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_00402c3a:
          uVar5 = 0;
        }
        else {
LAB_00402c06:
          bVar11 = *pbVar10 < *pbVar9;
          if ((*pbVar10 == *pbVar9) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar10[1] < pbVar9[1], pbVar10[1] == pbVar9[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar10[2] < pbVar9[2], pbVar10[2] == pbVar9[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar10[3] < pbVar9[3], pbVar10[3] == pbVar9[3])
                  ))))))))))) goto LAB_00402c3a;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) goto LAB_00402c40;
      }
      bVar11 = (int)uVar5 < 0;
    }
    else {
      uVar2 = *(uint *)(param_3 + 0x10);
      pbVar10 = param_3;
      if (0xf < *(uint *)(param_3 + 0x14)) {
        pbVar10 = *(byte **)param_3;
      }
      uVar3 = piVar8[8];
      if (0xf < (uint)piVar8[9]) {
        pbVar9 = *(byte **)pbVar9;
      }
      uVar5 = uVar2;
      if (uVar3 < uVar2) {
        uVar5 = uVar3;
      }
      if (uVar5 == 0) {
LAB_00402ba1:
        if (uVar3 < uVar2) {
          bVar11 = false;
          goto LAB_00402c55;
        }
        uVar5 = (uint)(uVar3 != uVar2);
      }
      else {
        while (uVar4 = uVar5 - 4, 3 < uVar5) {
          if (*(int *)pbVar9 != *(int *)pbVar10) goto LAB_00402b67;
          pbVar9 = pbVar9 + 4;
          pbVar10 = pbVar10 + 4;
          uVar5 = uVar4;
        }
        if (uVar4 == 0xfffffffc) {
LAB_00402b9b:
          uVar5 = 0;
        }
        else {
LAB_00402b67:
          bVar11 = *pbVar9 < *pbVar10;
          if ((*pbVar9 == *pbVar10) &&
             ((uVar4 == 0xfffffffd ||
              ((bVar11 = pbVar9[1] < pbVar10[1], pbVar9[1] == pbVar10[1] &&
               ((uVar4 == 0xfffffffe ||
                ((bVar11 = pbVar9[2] < pbVar10[2], pbVar9[2] == pbVar10[2] &&
                 ((uVar4 == 0xffffffff || (bVar11 = pbVar9[3] < pbVar10[3], pbVar9[3] == pbVar10[3])
                  ))))))))))) goto LAB_00402b9b;
          uVar5 = -(uint)bVar11 | 1;
        }
        if (uVar5 == 0) goto LAB_00402ba1;
      }
      bVar11 = -1 < (int)uVar5;
    }
LAB_00402c55:
    local_24 = piVar8;
    if (bVar11 == false) {
      piVar8 = (int *)piVar8[2];
    }
    else {
      piVar8 = (int *)*piVar8;
    }
  }
  _param_2 = local_24;
  if (bVar11 != false) {
    if (local_24 == (int *)*piVar1) {
      bVar11 = true;
      pbVar9 = param_3;
      goto LAB_00402c8b;
    }
    FUN_0042c740();
  }
  pbVar9 = param_3;
  pbVar10 = param_3;
  if (0xf < *(uint *)(param_3 + 0x14)) {
    pbVar10 = *(byte **)param_3;
  }
  iVar7 = FUN_0040c520(0,_param_2[8],pbVar10,*(int *)(param_3 + 0x10));
  if (-1 < iVar7) {
    if (0xf < *(uint *)((int)param_4 + 0x24)) {
                    /* WARNING: Subroutine does not return */
      operator_delete(*(void **)((int)param_4 + 0x10));
    }
    *(undefined4 *)((int)param_4 + 0x24) = 0xf;
    *(undefined4 *)((int)param_4 + 0x20) = 0;
    *(undefined1 *)((int)param_4 + 0x10) = 0;
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_00402c8b:
  puVar6 = (undefined4 *)FUN_004026a0(&param_2,bVar11,local_24,pbVar9,param_4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_00402e80 @ 00402e80  kind=gamemisc  attributed-by=caller-vote  size=49 */

void FUN_00402e80(undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  int in_ECX;
  
  FUN_00402ed0(param_1,param_2);
  if (*(int *)(in_ECX + 0x2c) != *(int *)(in_ECX + 0x30)) {
    pvVar1 = *(void **)(*(int *)(in_ECX + 0x30) + -0xc);
    if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + -0xc;
  }
  return;
}


/* FUN_00402ed0 @ 00402ed0  kind=gamemisc  attributed-by=caller-vote  size=165 */

void FUN_00402ed0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1598;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  piVar2 = (int *)FUN_004042e0(param_1);
  iVar1 = *piVar2;
  if (-1 < iVar1) {
    local_1c = (undefined4 *)0x0;
    local_18 = 0;
    local_14 = 0;
    FUN_005870c0(4);
    *local_1c = param_2;
    local_8 = 0;
    FUN_0040d910(&local_1c);
    local_8 = 0xffffffff;
    if (local_1c != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1c);
    }
    FUN_0040da70(iVar1);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004030e0 @ 004030e0  kind=gamemisc  attributed-by=caller-vote  size=239 */

facet * FUN_004030e0(locale *param_1)

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
  local_14 = (facet *)DAT_0076af60;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = *(int *)param_1;
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    pfVar4 = *(facet **)(*(int *)(iVar1 + 8) + uVar2 * 4);
    if (pfVar4 != (facet *)0x0) goto LAB_004031b2;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_0040315f:
    if (pfVar4 != (facet *)0x0) goto LAB_004031b2;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(uint *)(p_Var3 + 0xc)) {
      pfVar4 = *(facet **)(*(int *)(p_Var3 + 8) + uVar2 * 4);
      goto LAB_0040315f;
    }
  }
  pfVar4 = local_14;
  if (local_14 == (facet *)0x0) {
    uVar2 = std::codecvt<char,char,int>::_Getcat(&local_14,param_1);
    pfVar4 = local_14;
    if (uVar2 == 0xffffffff) {
      std::bad_cast::bad_cast(local_24,"bad cast");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_0074aee8);
    }
    DAT_0076af60 = (int *)local_14;
    (**(code **)(*(int *)local_14 + 4))();
    Facet_Register(pfVar4);
  }
LAB_004031b2:
  std::_Lockit::~_Lockit(local_18);
  ExceptionList = local_10;
  return pfVar4;
}


/* FUN_004031d0 @ 004031d0  kind=gamemisc  attributed-by=caller-vote  size=264 */

void * __thiscall
FUN_004031d0(void *this,undefined4 param_2,uint param_3,undefined4 param_4,int param_5)

{
  basic_streambuf<char,std::char_traits<char>_> *this_00;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f60fd;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_5 != 0) {
    *(basic_ifstream<char,std::char_traits<char>_>_vbtable **)this =
         &std::basic_ifstream<char,std::char_traits<char>_>::vbtable;
    *(code **)((int)this + 0x70) = _vftable__exref;
    *(code **)((int)this + 0x70) = _vftable__exref;
    local_8 = 0;
  }
  this_00 = (basic_streambuf<char,std::char_traits<char>_> *)((int)this + 0x10);
  std::basic_istream<char,std::char_traits<char>_>::basic_istream<char,std::char_traits<char>_>
            (this,(basic_streambuf<char,std::char_traits<char>_> *)this_00,false);
  local_8 = 1;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_ifstream<char,std::char_traits<char>_> */
  *(basic_ifstream<char,std::char_traits<char>_>_vftable **)((int)this + *(int *)(*(int *)this + 4))
       = &std::basic_ifstream<char,std::char_traits<char>_>::vftable;
  *(int *)(*(int *)(*(int *)this + 4) + -4 + (int)this) = *(int *)(*(int *)this + 4) + -0x70;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            (this_00);
  local_8._0_1_ = 2;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_filebuf<char,std::char_traits<char>_> */
  *this_00 = (basic_streambuf<char,std::char_traits<char>_>)
             &std::basic_filebuf<char,std::char_traits<char>_>::vftable;
  *(undefined1 *)((int)this + 0x5c) = 0;
  *(undefined1 *)((int)this + 0x55) = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(this_00);
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x58) = DAT_0076af5c;
  *(undefined4 *)((int)this + 0x50) = 0;
  local_8 = CONCAT31(local_8._1_3_,3);
  iVar1 = FUN_0040d240(param_2,param_3 | 1,param_4);
  if (iVar1 == 0) {
    std::basic_ios<char,std::char_traits<char>_>::setstate
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(*(int *)this + 4) + (int)this),2
               ,false);
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_004032e0 @ 004032e0  kind=gamemisc  attributed-by=caller-vote  size=100 */

void FUN_004032e0(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  in_ECX[5] = 0xf;
  in_ECX[4] = 0;
  *(undefined1 *)in_ECX = 0;
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,param_1[4] + 1);
    }
  }
  else {
    *in_ECX = *param_1;
    *param_1 = 0;
  }
  in_ECX[4] = param_1[4];
  in_ECX[5] = param_1[5];
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return;
}


/* FUN_004033b0 @ 004033b0  kind=gamemisc  attributed-by=caller-vote  size=20 */

void FUN_004033b0(void)

{
  undefined1 *in_ECX;
  
  *(undefined4 *)(in_ECX + 0x14) = 0xf;
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *in_ECX = 0;
  return;
}


/* FUN_00404090 @ 00404090  kind=gamemisc  attributed-by=caller-vote  size=58 */

void FUN_00404090(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if (in_ECX != param_1) {
    if (0xf < (uint)in_ECX[5]) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*in_ECX);
    }
    in_ECX[5] = 0xf;
    in_ECX[4] = 0;
    *(undefined1 *)in_ECX = 0;
    FUN_00405060(param_1);
  }
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


/* FUN_004043c0 @ 004043c0  kind=gamemisc  attributed-by=caller-vote  size=43 */

bool FUN_004043c0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar2 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),param_2,*puVar1);
  return iVar2 < 0;
}


/* FUN_004043f0 @ 004043f0  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_004043f0(void)

{
  basic_ifstream<char,std::char_traits<char>_> *this;
  int in_ECX;
  
  this = (basic_ifstream<char,std::char_traits<char>_> *)(in_ECX + 0x70);
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            (this);
  this->vbtablePtr = (basic_ifstream<char,std::char_traits<char>_>_vbtable *)_vftable__exref;
  this->vbtablePtr = (basic_ifstream<char,std::char_traits<char>_>_vbtable *)_vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)this);
  return;
}


/* FUN_00405060 @ 00405060  kind=gamemisc  attributed-by=caller-vote  size=85 */

void FUN_00405060(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if ((uint)param_1[5] < 0x10) {
    if (param_1[4] + 1 != 0) {
      memmove(in_ECX,param_1,param_1[4] + 1);
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
  param_1[5] = 0xf;
  param_1[4] = 0;
  *(undefined1 *)param_1 = 0;
  return;
}


/* FUN_004050c0 @ 004050c0  kind=gamemisc  attributed-by=caller-vote  size=55 */

undefined4 * FUN_004050c0(void)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  
  puVar1 = operator_new(0x2c);
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


/* FUN_004054f0 @ 004054f0  kind=gamemisc  attributed-by=caller-vote  size=242 */

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


/* FUN_00405cc0 @ 00405cc0  kind=gamemisc  attributed-by=caller-vote  size=328 */

/* WARNING: Removing unreachable block (ram,0x00405d2b) */

void FUN_00405cc0(void)

{
  int iVar1;
  undefined8 *puVar2;
  size_t sVar3;
  int *in_ECX;
  char *pcVar4;
  size_t _Count;
  char *local_30;
  undefined8 local_2c;
  undefined1 local_24;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1458;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (((in_ECX[0x10] != 0) && (*(char *)((int)in_ECX + 0x45) != '\0')) &&
     (iVar1 = (**(code **)(*in_ECX + 0xc))(0xffffffff,local_14), iVar1 != -1)) {
    local_2c = 0;
    local_18 = 0xf;
    local_1c = 8;
    local_24 = 0;
    local_8 = 0;
LAB_00405d47:
    pcVar4 = (char *)&local_2c;
    if (0xf < local_18) {
      pcVar4 = (char *)local_2c;
    }
    iVar1 = std::codecvt<char,char,int>::unshift
                      ((codecvt<char,char,int> *)in_ECX[0x10],in_ECX + 0x12,pcVar4,pcVar4 + local_1c
                       ,&local_30);
    if (iVar1 == 0) {
      *(undefined1 *)((int)in_ECX + 0x45) = 0;
    }
    else if (iVar1 != 1) goto LAB_00405dd8;
    puVar2 = &local_2c;
    if (0xf < local_18) {
      puVar2 = (undefined8 *)(char *)local_2c;
    }
    _Count = (int)local_30 - (int)puVar2;
    if (_Count != 0) {
      puVar2 = &local_2c;
      if (0xf < local_18) {
        puVar2 = (undefined8 *)(char *)local_2c;
      }
      sVar3 = fwrite(puVar2,1,_Count,(FILE *)in_ECX[0x14]);
      if (_Count != sVar3) goto LAB_00405dd8;
    }
    if (*(char *)((int)in_ECX + 0x45) == '\0') goto LAB_00405dd8;
    if (_Count == 0) {
      FUN_0040bff0(8,0);
    }
    goto LAB_00405d47;
  }
LAB_00405def:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
LAB_00405dd8:
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete((char *)local_2c);
  }
  goto LAB_00405def;
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


/* FUN_0040c1c0 @ 0040c1c0  kind=gamemisc  attributed-by=caller-vote  size=191 */

void FUN_0040c1c0(uint param_1,char param_2)

{
  int *in_ECX;
  int *_Dst;
  
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if (param_1 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("string too long");
  }
  if ((uint)in_ECX[5] < param_1) {
    FUN_004054f0(param_1,in_ECX[4]);
    if (param_1 == 0) {
      return;
    }
  }
  else if (param_1 == 0) {
    in_ECX[4] = 0;
    if (0xf < (uint)in_ECX[5]) {
      *(undefined1 *)*in_ECX = 0;
      return;
    }
    *(undefined1 *)in_ECX = 0;
    return;
  }
  if (param_1 == 1) {
    if ((uint)in_ECX[5] < 0x10) {
      *(char *)in_ECX = param_2;
    }
    else {
      *(char *)*in_ECX = param_2;
    }
  }
  else {
    _Dst = in_ECX;
    if (0xf < (uint)in_ECX[5]) {
      _Dst = (int *)*in_ECX;
    }
    memset(_Dst,(int)param_2,param_1);
  }
  in_ECX[4] = param_1;
  if ((uint)in_ECX[5] < 0x10) {
    *(undefined1 *)((int)in_ECX + param_1) = 0;
    return;
  }
  *(undefined1 *)(*in_ECX + param_1) = 0;
  return;
}


/* FUN_0040c4c0 @ 0040c4c0  kind=gamemisc  attributed-by=caller-vote  size=91 */

basic_streambuf<char,std::char_traits<char>_> * FUN_0040c4c0(void)

{
  char cVar1;
  int iVar2;
  basic_streambuf<char,std::char_traits<char>_> *in_ECX;
  basic_streambuf<char,std::char_traits<char>_> *pbVar3;
  
  if (in_ECX[0x14] == (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
  }
  else {
    cVar1 = FUN_00405cc0();
    pbVar3 = in_ECX;
    if (cVar1 == '\0') {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
    iVar2 = fclose((FILE *)in_ECX[0x14]);
    if (iVar2 != 0) {
      pbVar3 = (basic_streambuf<char,std::char_traits<char>_> *)0x0;
    }
  }
  *(undefined1 *)(in_ECX + 0x13) = 0;
  in_ECX[0x11].field_0x1 = 0;
  std::basic_streambuf<char,std::char_traits<char>_>::_Init(in_ECX);
  in_ECX[0x14] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  in_ECX[0x12] = DAT_0076af5c;
  in_ECX[0x10] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
  return pbVar3;
}


/* FUN_0040c600 @ 0040c600  kind=gamemisc  attributed-by=caller-vote  size=197 */

void FUN_0040c600(int param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int in_ECX;
  int iVar4;
  int local_8;
  
  iVar4 = *(int *)(in_ECX + 0x24);
  local_8 = FUN_00408fc0(param_1);
  if (local_8 != *(int *)(in_ECX + 0x24)) {
    piVar3 = (int *)(local_8 + 0x10);
    if (0xf < *(uint *)(local_8 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar1 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(local_8 + 0x20));
    if (-1 < iVar1) goto LAB_0040c650;
  }
  local_8 = *(int *)(in_ECX + 0x24);
LAB_0040c650:
  if (local_8 != iVar4) {
    puVar2 = (undefined4 *)FUN_004042e0(param_1);
    param_1 = *puVar2;
    piVar3 = (int *)FUN_00468910(&param_1);
    if (*piVar3 != 0) {
      puVar2 = (undefined4 *)FUN_00468910(&param_1);
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar2);
    }
    piVar3 = (int *)FUN_00468910(&param_1);
    *piVar3 = param_2;
    piVar3 = *(int **)(param_2 + 4);
    if (piVar3 != (int *)0x0) {
      *(int *)(in_ECX + 0x4c) = *(int *)(in_ECX + 0x4c) + *piVar3;
      iVar4 = *(int *)(in_ECX + 0x4c) + piVar3[1];
      *(int *)(in_ECX + 0x4c) = iVar4;
      iVar4 = iVar4 + piVar3[2];
      *(int *)(in_ECX + 0x4c) = iVar4;
      *(int *)(in_ECX + 0x4c) = piVar3[3] + iVar4;
    }
  }
  return;
}


/* FUN_0040cc40 @ 0040cc40  kind=gamemisc  attributed-by=caller-vote  size=959 */

void FUN_0040cc40(basic_istream<char,std::char_traits<char>_> *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 *puVar7;
  int in_ECX;
  byte *pbVar8;
  int iVar9;
  bool bVar10;
  int local_264;
  int local_260;
  undefined4 local_25c;
  int local_258;
  undefined1 local_254 [24];
  void *local_23c [4];
  undefined4 local_22c;
  uint local_228;
  char local_224 [512];
  byte local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1906;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(in_ECX + 0xc);
  local_14 = uVar4;
  FUN_00405e10(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 4));
  *(int *)(*(int *)(in_ECX + 0x24) + 4) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)*(undefined4 *)(in_ECX + 0x24) = *(undefined4 *)(in_ECX + 0x24);
  *(int *)(*(int *)(in_ECX + 0x24) + 8) = *(int *)(in_ECX + 0x24);
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x1c) = *(undefined4 *)(in_ECX + 0x18);
  std::basic_istream<char,std::char_traits<char>_>::read
            (param_1,(char *)&local_258,(ulonglong)uVar4 << 0x20);
  if (local_258 == 1) {
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_25c,(ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_25c,(ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)&local_25c,(ulonglong)uVar4 << 0x20);
    local_24[8] = 0x61;
    local_24[9] = 0x70;
    local_24[10] = 0x68;
    local_24[0xb] = 0x69;
    local_24[0xc] = 99;
    local_24[0xd] = 0x73;
    local_24[0xe] = 0;
    local_24[0] = 0x50;
    local_24[1] = 0x6c;
    local_24[2] = 0x61;
    local_24[3] = 0x73;
    local_24[4] = 0x6d;
    local_24[5] = 0x61;
    local_24[6] = 0x47;
    local_24[7] = 0x72;
    std::basic_istream<char,std::char_traits<char>_>::read
              (param_1,(char *)local_24,(ulonglong)uVar4 << 0x20);
    pbVar5 = local_24;
    pbVar8 = &DAT_006fcad8;
    do {
      bVar1 = *pbVar5;
      bVar10 = bVar1 < *pbVar8;
      if (bVar1 != *pbVar8) {
LAB_0040cd60:
        uVar6 = -(uint)bVar10 | 1;
        goto LAB_0040cd65;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar10 = bVar1 < pbVar8[1];
      if (bVar1 != pbVar8[1]) goto LAB_0040cd60;
      pbVar5 = pbVar5 + 2;
      pbVar8 = pbVar8 + 2;
    } while (bVar1 != 0);
    uVar6 = 0;
LAB_0040cd65:
    if ((uVar6 == 0) &&
       (std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,(char *)&local_258,(ulonglong)uVar4 << 0x20),
       (*(byte *)((int)&param_1[3].vbtablePtr +
                 param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) == 0)) {
      local_260 = 0;
      if (0 < local_258) {
        do {
          std::basic_istream<char,std::char_traits<char>_>::read
                    (param_1,(char *)&local_264,(ulonglong)uVar4 << 0x20);
          if ((((0x200 < local_264) ||
               ((*(byte *)((int)&param_1[3].vbtablePtr +
                          param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1)
                != 0)) ||
              (std::basic_istream<char,std::char_traits<char>_>::read
                         (param_1,local_224,CONCAT44(uVar4,local_264 >> 0x1f)),
              (*(byte *)((int)&param_1[3].vbtablePtr +
                        param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) !=
              0)) || (std::basic_istream<char,std::char_traits<char>_>::read
                                (param_1,(char *)&local_25c,(ulonglong)uVar4 << 0x20),
                     (*(byte *)((int)&param_1[3].vbtablePtr +
                               param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset)
                     & 1) != 0)) goto LAB_0040cfe4;
          FUN_00403350(local_224);
          local_8 = 0;
          puVar7 = (undefined4 *)FUN_004041c0(local_254);
          *puVar7 = local_25c;
          local_8 = 0xffffffff;
          FUN_00403eb0();
          local_260 = local_260 + 1;
        } while (local_260 < local_258);
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_258,(ulonglong)uVar4 << 0x20);
      if (0 < local_258) {
        FUN_0040d9d0(local_258);
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,*(char **)(in_ECX + 0x18),(ulonglong)uVar4 << 0x20);
      }
      std::basic_istream<char,std::char_traits<char>_>::read
                (param_1,(char *)&local_258,(ulonglong)uVar4 << 0x20);
      if ((0 < local_258) &&
         ((*(byte *)((int)&param_1[3].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<char,std::char_traits<char>_>_offset) & 1) == 0))
      {
        FUN_0040d9d0(local_258);
        std::basic_istream<char,std::char_traits<char>_>::read
                  (param_1,*(char **)(in_ECX + 0xc),(ulonglong)uVar4 << 0x20);
        iVar9 = 0;
        if (0 < (int)(*(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x18) & 0xfffffffcU)) {
          do {
            iVar2 = *(int *)(*(int *)(in_ECX + 0x18) + iVar9 * 4);
            pcVar3 = *(code **)(*(int *)(in_ECX + 0x40) +
                               (iVar2 - *(int *)(*(int *)(in_ECX + 0xc) + iVar2 * 4)) * 4);
            if (pcVar3 != (code *)0x0) {
              (*pcVar3)();
            }
            iVar9 = iVar9 + 1;
          } while (iVar9 < *(int *)(in_ECX + 0x1c) - *(int *)(in_ECX + 0x18) >> 2);
        }
        *(undefined4 *)(in_ECX + 0x4c) = 0;
        local_228 = 0xf;
        local_22c = 0;
        local_23c[0] = (void *)((uint)local_23c[0] & 0xffffff00);
        FUN_0040c280(&DAT_006fca78,3);
        local_8 = 1;
        puVar7 = operator_new(0x10);
        if (puVar7 == (undefined4 *)0x0) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7[1] = 0;
                    /* inlined constructor:
                       abstr::Method0<abstr::Machine,int>::Method0<abstr::Machine,int> */
          *puVar7 = &abstr::Method0<abstr::Machine,int>::vftable;
          puVar7[2] = in_ECX;
          puVar7[3] = FUN_0047b5f0;
        }
        FUN_0040c600(local_23c,puVar7);
        if (0xf < local_228) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_23c[0]);
        }
      }
    }
  }
LAB_0040cfe4:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0040d010 @ 0040d010  kind=gamemisc  attributed-by=caller-vote  size=164 */

undefined1 FUN_0040d010(undefined4 *param_1)

{
  undefined1 uVar1;
  undefined1 local_c8 [96];
  int local_68;
  basic_ifstream<char,std::char_traits<char>_>_vbtable *local_58 [18];
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e193b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (0xf < (uint)param_1[5]) {
    param_1 = (undefined4 *)*param_1;
  }
  FUN_004031d0(local_c8,param_1,0x20,0x40,1);
  local_8 = 0;
  if (local_68 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0040cc40(local_c8);
  }
  local_8 = 0xffffffff;
  std::basic_ifstream<char,std::char_traits<char>_>::basic_ifstream<char,std::char_traits<char>_>
            ((basic_ifstream<char,std::char_traits<char>_> *)local_58);
  local_58[0] = (basic_ifstream<char,std::char_traits<char>_>_vbtable *)_vftable__exref;
  std::ios_base::_Ios_base_dtor((ios_base *)local_58);
  ExceptionList = local_10;
  return uVar1;
}


/* FUN_0040d240 @ 0040d240  kind=gamemisc  attributed-by=caller-vote  size=269 */

basic_streambuf<char,std::char_traits<char>_> * FUN_0040d240(char *param_1,int param_2,int *param_3)

{
  bool bVar1;
  uint uVar2;
  basic_streambuf<char,std::char_traits<char>_> bVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  basic_streambuf<char,std::char_traits<char>_> *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1968;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  if (in_ECX[0x14] == (basic_streambuf<char,std::char_traits<char>_>)0x0) {
    bVar3 = (basic_streambuf<char,std::char_traits<char>_>)
            std::_Fiopen(param_1,param_2,(int)param_3);
    if (bVar3 != (basic_streambuf<char,std::char_traits<char>_>)0x0) {
      *(undefined1 *)(in_ECX + 0x13) = 1;
      in_ECX[0x11].field_0x1 = 0;
      std::basic_streambuf<char,std::char_traits<char>_>::_Init(in_ECX);
      in_ECX[3] = (basic_streambuf<char,std::char_traits<char>_>)((int)bVar3 + 8);
      in_ECX[4] = (basic_streambuf<char,std::char_traits<char>_>)((int)bVar3 + 8);
      in_ECX[0xb] = (basic_streambuf<char,std::char_traits<char>_>)((int)bVar3 + 4);
      in_ECX[0xc] = (basic_streambuf<char,std::char_traits<char>_>)((int)bVar3 + 4);
      in_ECX[7] = bVar3;
      in_ECX[8] = bVar3;
      in_ECX[0x14] = bVar3;
      in_ECX[0x12] = DAT_0076af5c;
      in_ECX[0x10] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
      uVar4 = std::basic_streambuf<char,std::char_traits<char>_>::getloc(in_ECX);
      local_8 = 0;
      bVar3 = (basic_streambuf<char,std::char_traits<char>_>)FUN_004030e0(uVar4,uVar2);
      bVar1 = std::codecvt_base::always_noconv((codecvt_base *)bVar3);
      if (bVar1) {
        in_ECX[0x10] = (basic_streambuf<char,std::char_traits<char>_>)0x0;
      }
      else {
        in_ECX[0x10] = bVar3;
        std::basic_streambuf<char,std::char_traits<char>_>::_Init(in_ECX);
      }
      local_8 = 0xffffffff;
      if (param_3 != (int *)0x0) {
        puVar5 = (undefined4 *)(**(code **)(*param_3 + 8))();
        if (puVar5 != (undefined4 *)0x0) {
          (**(code **)*puVar5)(1);
        }
      }
      ExceptionList = local_10;
      return in_ECX;
    }
  }
  ExceptionList = local_10;
  return (basic_streambuf<char,std::char_traits<char>_> *)0x0;
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


/* FUN_0040ebc0 @ 0040ebc0  kind=gamemisc  attributed-by=caller-vote  size=22 */

void FUN_0040ebc0(void)

{
  undefined2 *in_ECX;
  
  *(undefined4 *)(in_ECX + 10) = 7;
  *(undefined4 *)(in_ECX + 8) = 0;
  *in_ECX = 0;
  return;
}


/* FUN_0040ecd0 @ 0040ecd0  kind=gamemisc  attributed-by=caller-vote  size=358 */

void FUN_0040ecd0(int param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  Widget *in_ECX;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1a90;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::AdaptionWidget::AdaptionWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::AdaptionWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::AdaptionWidget::vftable_for_Deformer;
  in_ECX[1].Object_data.offset_0x0 = -1;
  in_ECX[1].Object_data.offset_0x4 = (int *)0xffffffff;
  *(undefined4 *)&in_ECX[1].offset_0x0 = param_3;
  local_18 = 7;
  local_1c = 0;
  *(int *)&in_ECX[1].field_0x10 = param_4;
  *(undefined4 *)&in_ECX[1].field_0x14 = param_5;
  if (param_4 != 0) {
    iVar2 = FUN_00636040(param_2);
    *(int *)&in_ECX[1].field_0x10 = iVar2;
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x38) + 8))(uVar1);
    FUN_00636b70(uVar3);
    uVar3 = (**(code **)(**(int **)(*(int *)&in_ECX[1].field_0x10 + 0x3c) + 8))();
    FUN_006368e0(uVar3);
  }
  if (*(int *)&in_ECX[1].field_0x14 != 0) {
    iVar2 = FUN_00636040(param_2);
    *(int *)&in_ECX[1].field_0x14 = iVar2;
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x38) + 8))();
    FUN_00636b70(uVar3);
    uVar3 = (**(code **)(**(int **)(*(int *)&in_ECX[1].field_0x14 + 0x3c) + 8))();
    FUN_006368e0(uVar3);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_0040ef50 @ 0040ef50  kind=gamemisc  attributed-by=caller-vote  size=18 */

int FUN_0040ef50(int param_1)

{
  int *in_ECX;
  
  return param_1 * 0x11c + *in_ECX;
}


/* FUN_0040ef70 @ 0040ef70  kind=gamemisc  attributed-by=caller-vote  size=10 */

int FUN_0040ef70(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x20) * 8;
}


/* FUN_0040ef80 @ 0040ef80  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_0040ef80(float param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX * param_1;
  in_ECX[1] = in_ECX[1] * param_1;
  return;
}


/* FUN_0040f170 @ 0040f170  kind=gamemisc  attributed-by=caller-vote  size=253 */

void FUN_0040f170(uint param_1,int param_2)

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
  
  puStack_c = &LAB_006e1ab0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uVar3 = param_1 | 7;
  if (uVar3 < 0x7fffffff) {
    uVar1 = in_ECX[5];
    uVar2 = uVar1 >> 1;
    param_1 = uVar3;
    if ((uVar3 / 3 < uVar2) && (param_1 = uVar2 + uVar1, 0x7ffffffe - uVar2 < uVar1)) {
      param_1 = 0x7ffffffe;
    }
  }
  uVar3 = param_1 + 1;
  local_8 = 0;
  local_18 = (undefined4 *)0x0;
  if ((uVar3 != 0) &&
     ((0x7fffffff < uVar3 || (local_18 = operator_new(uVar3 * 2), local_18 == (undefined4 *)0x0))))
  {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  if (param_2 != 0) {
    _Src = in_ECX;
    if (7 < (uint)in_ECX[5]) {
      _Src = (undefined4 *)*in_ECX;
    }
    if (param_2 != 0) {
      memcpy(local_18,_Src,param_2 * 2);
    }
  }
  if ((uint)in_ECX[5] < 8) {
    *in_ECX = local_18;
    in_ECX[5] = param_1;
    in_ECX[4] = param_2;
    if (7 < param_1) {
      in_ECX = local_18;
    }
    *(undefined2 *)((int)in_ECX + param_2 * 2) = 0;
    ExceptionList = local_10;
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* FUN_0040f490 @ 0040f490  kind=gamemisc  attributed-by=caller-vote  size=12 */

undefined4 * FUN_0040f490(void)

{
  undefined4 *in_ECX;
  
  if (7 < (uint)in_ECX[5]) {
    return (undefined4 *)*in_ECX;
  }
  return in_ECX;
}


/* FUN_0040f4f0 @ 0040f4f0  kind=gamemisc  attributed-by=caller-vote  size=125 */

int FUN_0040f4f0(void)

{
  short sVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  double dVar4;
  
  iVar2 = FUN_0040f570();
  if (iVar2 == 0) {
    return 0;
  }
  sVar1 = *(short *)(iVar2 + 0x10);
  iVar2 = *(int *)(*(int *)(*(int *)(in_ECX + 0x16c) + 0x8006d0) + 400);
  iVar3 = 0;
  if (sVar1 < iVar2) {
    dVar4 = 2.0;
    libm_sse2_pow_precise();
    iVar2 = iVar2 - sVar1;
    do {
      iVar3 = (int)((float)iVar3 + (float)dVar4 * 2.0);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return iVar3;
}


/* FUN_00411400 @ 00411400  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_00411400(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x148);
}


/* FUN_00411ab0 @ 00411ab0  kind=gamemisc  attributed-by=caller-vote  size=27 */

int FUN_00411ab0(void)

{
  int *in_ECX;
  
  return (in_ECX[1] - *in_ECX) / 0x11c;
}


/* FUN_00411c70 @ 00411c70  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 FUN_00411c70(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x38);
}


/* FUN_00412320 @ 00412320  kind=gamemisc  attributed-by=caller-vote  size=40 */

float10 FUN_00412320(float *param_1)

{
  float *in_ECX;
  
  return (float10)(param_1[1] * in_ECX[1] + *param_1 * *in_ECX);
}


/* FUN_00412890 @ 00412890  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_00412890(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX - *param_1;
  in_ECX[1] = in_ECX[1] - param_1[1];
  in_ECX[2] = in_ECX[2] - param_1[2];
  return;
}


/* FUN_004128d0 @ 004128d0  kind=gamemisc  attributed-by=caller-vote  size=19 */

int FUN_004128d0(int param_1,int param_2)

{
  int in_ECX;
  
  return in_ECX + (param_1 + param_2 * 4) * 4;
}


/* FUN_00423f20 @ 00423f20  kind=gamemisc  attributed-by=caller-vote  size=69 */

float10 FUN_00423f20(void)

{
  float *in_ECX;
  double dVar1;
  
  dVar1 = (double)(*in_ECX * *in_ECX + in_ECX[1] * in_ECX[1] + in_ECX[2] * in_ECX[2]);
  libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}


/* FUN_00424090 @ 00424090  kind=gamemisc  attributed-by=caller-vote  size=96 */

void FUN_00424090(void)

{
  float fVar1;
  float *in_ECX;
  double dVar2;
  
  fVar1 = *in_ECX;
  dVar2 = (double)(fVar1 * fVar1 + in_ECX[1] * in_ECX[1]);
  libm_sse2_sqrt_precise();
  *in_ECX = fVar1 * (1.0 / (float)dVar2);
  in_ECX[1] = (1.0 / (float)dVar2) * in_ECX[1];
  return;
}


/* FUN_00424b30 @ 00424b30  kind=gamemisc  attributed-by=caller-vote  size=30 */

float10 FUN_00424b30(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_asin_precise();
  return (float10)(float)dVar1;
}


/* FUN_00424b70 @ 00424b70  kind=gamemisc  attributed-by=caller-vote  size=40 */

float10 FUN_00424b70(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_sqrt_precise();
  return (float10)(float)dVar1;
}


/* FUN_00424e80 @ 00424e80  kind=gamemisc  attributed-by=caller-vote  size=164 */

void FUN_00424e80(int param_1,int param_2,int param_3)

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
                    /* inlined constructor: cube::CharacterPreviewWidget::CharacterPreviewWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].Object_data.offset_0x0 = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::CharacterPreviewWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr =
       (Widget_vftable_for_Deformer *)&cube::CharacterPreviewWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  ExceptionList = local_10;
  return;
}


/* FUN_00427870 @ 00427870  kind=gamemisc  attributed-by=caller-vote  size=148 */

float * FUN_00427870(float *param_1)

{
  float fVar1;
  float fVar2;
  float *in_ECX;
  double dVar3;
  float fVar4;
  
  fVar1 = *in_ECX;
  dVar3 = (double)(fVar1 * fVar1 + in_ECX[1] * in_ECX[1] + in_ECX[2] * in_ECX[2]);
  libm_sse2_sqrt_precise();
  fVar4 = 1.0 / (float)dVar3;
  *param_1 = fVar1;
  param_1[1] = in_ECX[1];
  fVar2 = in_ECX[2];
  *param_1 = fVar1 * fVar4;
  param_1[2] = fVar2;
  param_1[1] = param_1[1] * fVar4;
  param_1[2] = fVar4 * param_1[2];
  return param_1;
}


/* FUN_004279e0 @ 004279e0  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_004279e0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x110);
}


/* FUN_004279f0 @ 004279f0  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_004279f0(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x10c);
}


/* FUN_00427a00 @ 00427a00  kind=gamemisc  attributed-by=caller-vote  size=39 */

bool FUN_00427a00(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),param_2,*puVar1);
  return iVar2 == 0;
}


/* FUN_00427b40 @ 00427b40  kind=gamemisc  attributed-by=caller-vote  size=123 */

void FUN_00427b40(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  int *piVar3;
  
  if (*(int *)(in_ECX + 0x40) != 0) {
    puVar1 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar1 = (undefined4 *)*param_1;
    }
    iVar2 = FUN_00428db0(0,*(undefined4 *)(*(int *)(in_ECX + 0x40) + 0x1c),puVar1,param_1[4]);
    if (iVar2 == 0) {
      FUN_00427bc0(*(undefined4 *)(in_ECX + 0x40),param_2,param_3,param_4,param_5,param_6,1);
    }
  }
  piVar3 = (int *)**(int **)(in_ECX + 0x2c);
  if (piVar3 != *(int **)(in_ECX + 0x2c)) {
    do {
      FUN_00427b40(param_1,param_2,param_3,param_4,param_5,param_6);
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*(int *)(in_ECX + 0x2c));
  }
  return;
}


/* FUN_00427bc0 @ 00427bc0  kind=gamemisc  attributed-by=caller-vote  size=252 */

void __thiscall
FUN_00427bc0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *local_1c;
  undefined4 local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1e48;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)FUN_00468910(&param_2);
  if ((void *)*puVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar3);
  }
  puVar4 = operator_new(0x18);
  uVar2 = param_6;
  uVar1 = param_3;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    *(char *)(puVar4 + 1) = (char)param_7;
                    /* inlined constructor:
                       plasma::Widget::MemberFunctionConnection<cube::CharacterStyleWidget>::MemberFunctionConnection<cube::CharacterStyleWidget>
                        */
    *puVar4 = &plasma::Widget::MemberFunctionConnection<cube::CharacterStyleWidget>::vftable;
    puVar4[2] = param_3;
    puVar4[4] = param_4;
    puVar4[5] = param_5;
  }
  *puVar3 = puVar4;
  if ((char)param_6 != '\0') {
    FUN_00629140(&local_1c);
    local_8 = 0;
    piVar5 = (int *)*local_1c;
    if (piVar5 != local_1c) {
      do {
        FUN_00427bc0(piVar5[2],param_2,uVar1,param_4,param_5,uVar2,param_7);
        piVar5 = (int *)*piVar5;
      } while (piVar5 != local_1c);
    }
    piVar5 = (int *)*local_1c;
    *local_1c = (int)local_1c;
    local_1c[1] = (int)local_1c;
    local_18 = 0;
    if (piVar5 != local_1c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(piVar5);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00427ce0 @ 00427ce0  kind=gamemisc  attributed-by=caller-vote  size=2616 */

void FUN_00427ce0(int param_1,int param_2,Widget_vftable_for_NamedObject *param_3,int param_4,
                 int param_5)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  Widget_vftable_for_Deformer *pWVar8;
  Widget *in_ECX;
  void *local_60 [4];
  undefined4 local_50;
  uint local_4c;
  int local_48;
  undefined1 local_41;
  void *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1ef0;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_48 = param_1;
  local_30 = param_2;
  local_4c = 7;
  local_50 = 0;
  local_60[0] = (void *)((uint)local_60[0] & 0xffff0000);
  local_14 = uVar4;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::CharacterStyleWidget::CharacterStyleWidget */
  plasma::Widget::Widget(in_ECX,local_48,local_30,local_60);
  local_8._0_1_ = 2;
  if (7 < local_4c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_60[0]);
  }
  local_60[0] = (void *)((uint)local_60[0] & 0xffff0000);
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::CharacterStyleWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr =
       (Widget_vftable_for_Deformer *)&cube::CharacterStyleWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = param_3;
  in_ECX[1].offset_0x20 = 0;
  in_ECX[1].offset_0x24 = 0;
  in_ECX[1].offset_0x28 = (void *)0x0;
  in_ECX[1].offset_0x2c = 0;
  in_ECX[1].offset_0x30 = 0;
  in_ECX[1].offset_0x34 = 0xff32c8ff;
  local_4c = 7;
  local_50 = 0;
  *(undefined2 *)&in_ECX[1].offset_0x38 = 0xffff;
  iVar5 = FUN_00636040(local_30);
  in_ECX[1].Object_data.offset_0x0 = iVar5;
  uVar6 = (**(code **)(**(int **)(param_4 + 0x38) + 8))(uVar4);
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 3;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042ba60,0,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  piVar7 = (int *)FUN_00636040(local_30);
  in_ECX[1].Object_data.offset_0x4 = piVar7;
  uVar6 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 4;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042bab0,0,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  uVar6 = FUN_00636040(local_30);
  *(undefined4 *)&in_ECX[1].offset_0x0 = uVar6;
  uVar6 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 5;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b810,0,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  uVar6 = FUN_00636040(local_30);
  *(undefined4 *)&in_ECX[1].field_0x10 = uVar6;
  uVar6 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 6;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b860,0,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  uVar6 = FUN_00636040(local_30);
  *(undefined4 *)&in_ECX[1].field_0x14 = uVar6;
  uVar6 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 7;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b990,0,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  uVar6 = FUN_00636040(local_30);
  *(undefined4 *)&in_ECX[1].field_0x18 = uVar6;
  uVar6 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"rightbutton",0xb);
  local_8._0_1_ = 8;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b990,0,1);
  local_8._0_1_ = 2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  uVar6 = FUN_00636040(local_30);
  in_ECX[1].offset_0x10 = uVar6;
  uVar6 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
  FUN_00636b70(uVar6);
  uVar6 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
  FUN_006368e0(uVar6);
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c & 0xffff0000);
  FUN_0040f7a0(L"leftbutton",10);
  local_8._0_1_ = 9;
  FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b910,0,1);
  local_8._0_1_ = 2;
  if (local_18 < 8) {
    uVar6 = FUN_00636040(local_30);
    in_ECX[1].offset_0x14 = uVar6;
    uVar6 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
    FUN_00636b70(uVar6);
    uVar6 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
    FUN_006368e0(uVar6);
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    FUN_0040f7a0(L"rightbutton",0xb);
    local_8._0_1_ = 10;
    FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b950,0,1);
    local_8._0_1_ = 2;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    pWVar8 = (Widget_vftable_for_Deformer *)FUN_00636040(local_30);
    in_ECX[1].vftablePtr = pWVar8;
    uVar6 = (**(code **)(**(int **)(param_4 + 0x38) + 8))();
    FUN_00636b70(uVar6);
    uVar6 = (**(code **)(**(int **)(param_4 + 0x3c) + 8))();
    FUN_006368e0(uVar6);
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    FUN_0040f7a0(L"leftbutton",10);
    local_8._0_1_ = 0xb;
    FUN_00427b40(&local_2c,2,in_ECX,FUN_0042b9e0,0,1);
    local_8._0_1_ = 2;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    uVar6 = FUN_00636040(local_30);
    in_ECX[1].offset_0x1c = uVar6;
    uVar6 = (**(code **)(**(int **)(param_5 + 0x38) + 8))();
    FUN_00636b70(uVar6);
    uVar6 = (**(code **)(**(int **)(param_5 + 0x3c) + 8))();
    FUN_006368e0(uVar6);
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    FUN_0040f7a0(L"rightbutton",0xb);
    local_8._0_1_ = 0xc;
    FUN_00427b40(&local_2c,2,in_ECX,FUN_0042ba20,0,1);
    local_8._0_1_ = 2;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_18 = 7;
    local_1c = 0;
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8._0_1_ = 0xd;
    piVar7 = (int *)FUN_00650260(&local_2c);
    local_8 = CONCAT31(local_8._1_3_,2);
    if (local_18 < 8) {
      local_18 = 7;
      local_1c = 0;
      local_2c = (void *)((uint)local_2c & 0xffff0000);
      iVar5 = 0;
      if (0 < (int)(piVar7[0x2b] - piVar7[0x2a] & 0xfffffffcU)) {
        do {
          FUN_0042bea0(4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar7[0x2b] - piVar7[0x2a] >> 2);
      }
      iVar5 = 0;
      if (0 < (int)(piVar7[0x57] - piVar7[0x56] & 0xfffffffcU)) {
        do {
          FUN_0042bf80(4);
          iVar5 = iVar5 + 1;
        } while (iVar5 < piVar7[0x57] - piVar7[0x56] >> 2);
      }
      puVar1 = (undefined4 *)**(undefined4 **)(piVar7[0x2a] + piVar7[0x1f] * 4);
      *puVar1 = 0;
      puVar1[1] = 0;
      iVar5 = **(int **)(piVar7[0x2a] + piVar7[0x1f] * 4);
      *(undefined4 *)(iVar5 + 8) = 0x438c0000;
      *(undefined4 *)(iVar5 + 0xc) = 0;
      iVar5 = **(int **)(piVar7[0x2a] + piVar7[0x1f] * 4);
      *(undefined4 *)(iVar5 + 0x10) = 0x438c0000;
      *(undefined4 *)(iVar5 + 0x14) = 0x43160000;
      iVar5 = **(int **)(piVar7[0x2a] + piVar7[0x1f] * 4);
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0x43160000;
      puVar1 = (undefined4 *)**(undefined4 **)(piVar7[0x56] + piVar7[0x4b] * 4);
      *puVar1 = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      iVar5 = **(int **)(piVar7[0x56] + piVar7[0x4b] * 4);
      *(undefined4 *)(iVar5 + 0x10) = 0;
      *(undefined4 *)(iVar5 + 0x14) = 0;
      *(undefined4 *)(iVar5 + 0x18) = 0;
      *(undefined4 *)(iVar5 + 0x1c) = 0;
      iVar5 = **(int **)(piVar7[0x56] + piVar7[0x4b] * 4);
      *(undefined4 *)(iVar5 + 0x20) = 0;
      *(undefined4 *)(iVar5 + 0x24) = 0;
      *(undefined4 *)(iVar5 + 0x28) = 0;
      *(undefined4 *)(iVar5 + 0x2c) = 0;
      iVar5 = **(int **)(piVar7[0x56] + piVar7[0x4b] * 4);
      *(undefined4 *)(iVar5 + 0x30) = 0;
      *(undefined4 *)(iVar5 + 0x34) = 0;
      *(undefined4 *)(iVar5 + 0x38) = 0;
      *(undefined4 *)(iVar5 + 0x3c) = 0;
      local_40 = (void *)0x0;
      local_3c = 0;
      local_38 = 0;
      local_8._0_1_ = 0xe;
      FUN_00487380(1);
      local_34 = 0;
      FUN_0066add0(&local_34);
      local_34 = 1;
      FUN_0066add0(&local_34);
      local_34 = 2;
      FUN_0066add0(&local_34);
      local_34 = 3;
      FUN_0066add0(&local_34);
      FUN_00642a20(&local_40,1);
      FUN_00642a50(0,1);
      (**(code **)(*piVar7 + 4))(1);
      local_4c = 7;
      local_50 = 0;
      local_60[0] = (void *)((uint)local_60[0] & 0xffff0000);
      FUN_0040f7a0(&PTR_006fccac,0);
      local_8._0_1_ = 0xf;
      iVar5 = FUN_0064f4e0(0,piVar7,0,local_30,local_60);
      local_8._0_1_ = 0xe;
      if (7 < local_4c) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_60[0]);
      }
      local_4c = 7;
      local_50 = 0;
      local_60[0] = (void *)((uint)local_60[0] & 0xffff0000);
      local_18 = 7;
      local_1c = 0;
      local_2c = (void *)((uint)local_2c & 0xffff0000);
      FUN_0040f7a0(&PTR_006fccac,0);
      local_8._0_1_ = 0x10;
      uVar6 = FUN_006503e0(iVar5,&local_2c);
      local_8 = CONCAT31(local_8._1_3_,0xe);
      if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c);
      }
      local_18 = 7;
      local_1c = 0;
      local_2c = (void *)((uint)local_2c & 0xffff0000);
      FUN_00427bc0(uVar6,2,in_ECX,FUN_0042b8b0,0,1,1);
      iVar2 = *(int *)(*(int *)(iVar5 + 0x38) + 0x68);
      iVar3 = *(int *)(*(int *)(iVar5 + 0x38) + 0x94);
      *(undefined4 *)(iVar3 + iVar2 * 8) = 0x41200000;
      *(undefined4 *)(iVar3 + 4 + iVar2 * 8) = 0x43480000;
      (**(code **)(**(int **)(iVar5 + 0x38) + 4))(1);
      if (local_40 == (void *)0x0) {
        ExceptionList = local_10;
        __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
        return;
      }
      FUN_00639cf0(local_40,local_3c,&local_41,in_ECX);
                    /* WARNING: Subroutine does not return */
      operator_delete(local_40);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_2c);
}


/* FUN_004288b0 @ 004288b0  kind=gamemisc  attributed-by=caller-vote  size=45 */

int FUN_004288b0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 0x20);
  iVar2 = *(int *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar2 + iVar1 * 8) = *param_1;
  *(undefined4 *)(iVar2 + 4 + iVar1 * 8) = param_1[1];
  return *(int *)(in_ECX + 0x4c) + *(int *)(in_ECX + 0x20) * 8;
}


/* FUN_00428d80 @ 00428d80  kind=gamemisc  attributed-by=caller-vote  size=17 */

void FUN_00428d80(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = **(undefined4 **)(in_ECX + 0x2c);
  return;
}


/* FUN_00428da0 @ 00428da0  kind=gamemisc  attributed-by=caller-vote  size=15 */

void FUN_00428da0(undefined4 *param_1)

{
  int in_ECX;
  
  *param_1 = *(undefined4 *)(in_ECX + 0x2c);
  return;
}


/* FUN_0042b800 @ 0042b800  kind=gamemisc  attributed-by=caller-vote  size=4 */

int FUN_0042b800(void)

{
  int in_ECX;
  
  return in_ECX + 0xc;
}


/* FUN_0042c720 @ 0042c720  kind=gamemisc  attributed-by=caller-vote  size=22 */

void FUN_0042c720(int *param_1)

{
  int iVar1;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  *param_1 = iVar1;
  *in_ECX = iVar1 + 0x11c;
  return;
}


/* FUN_0042c740 @ 0042c740  kind=gamemisc  attributed-by=caller-vote  size=94 */

void FUN_0042c740(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int *in_ECX;
  int *piVar5;
  
  puVar2 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar2 + 0xd) != '\0') {
    *in_ECX = puVar2[2];
    return;
  }
  piVar5 = (int *)*puVar2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    iVar3 = piVar5[2];
    if (*(char *)(piVar5[2] + 0xd) == '\0') {
      do {
        iVar4 = iVar3;
        iVar3 = *(int *)(iVar4 + 8);
      } while (*(char *)(iVar3 + 0xd) == '\0');
      *in_ECX = iVar4;
      return;
    }
  }
  else {
    piVar5 = (int *)puVar2[1];
    cVar1 = *(char *)((int)piVar5 + 0xd);
    while ((cVar1 == '\0' && (*in_ECX == *piVar5))) {
      *in_ECX = (int)piVar5;
      piVar5 = (int *)piVar5[1];
      cVar1 = *(char *)((int)piVar5 + 0xd);
    }
    if (*(char *)(*in_ECX + 0xd) != '\0') {
      return;
    }
  }
  *in_ECX = (int)piVar5;
  return;
}


/* FUN_0042c860 @ 0042c860  kind=gamemisc  attributed-by=caller-vote  size=37 */

int FUN_0042c860(uint param_1)

{
  uint3 uVar1;
  uint *in_ECX;
  uint uVar2;
  
  uVar2 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  uVar1 = (uint3)((param_1 << 0x10) >> 8);
  if (((int)in_ECX[1] <= (int)uVar2) &&
     (((int)in_ECX[1] < (int)uVar2 || (*in_ECX < param_1 << 0x10)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_0042c890 @ 0042c890  kind=gamemisc  attributed-by=caller-vote  size=57 */

undefined4 FUN_0042c890(void)

{
  uint *in_ECX;
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_0068d946();
  iVar1 = (int)((ulonglong)uVar2 >> 0x20);
  if ((iVar1 <= (int)in_ECX[1]) && ((iVar1 < (int)in_ECX[1] || ((uint)uVar2 < *in_ECX)))) {
    return 1;
  }
  return 0;
}


/* FUN_0042c8d0 @ 0042c8d0  kind=gamemisc  attributed-by=caller-vote  size=37 */

uint FUN_0042c8d0(uint *param_1,uint *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[1];
  if (((int)uVar1 <= (int)param_2[1]) &&
     (((int)uVar1 < (int)param_2[1] || (uVar1 = *param_1, uVar1 < *param_2)))) {
    return CONCAT31((int3)(uVar1 >> 8),1);
  }
  return uVar1 & 0xffffff00;
}


/* FUN_0042c980 @ 0042c980  kind=gamemisc  attributed-by=caller-vote  size=46 */

void FUN_0042c980(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  
  uVar3 = *param_1;
  uVar2 = *in_ECX;
  *in_ECX = *in_ECX + uVar3;
  in_ECX[1] = in_ECX[1] + param_1[1] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[2];
  puVar1 = in_ECX + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  in_ECX[3] = in_ECX[3] + param_1[3] + (uint)CARRY4(uVar2,uVar3);
  uVar3 = param_1[4];
  puVar1 = in_ECX + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 + uVar3;
  in_ECX[5] = in_ECX[5] + param_1[5] + (uint)CARRY4(uVar2,uVar3);
  return;
}


/* FUN_0042c9b0 @ 0042c9b0  kind=gamemisc  attributed-by=caller-vote  size=22 */

void FUN_0042c9b0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint *in_ECX;
  
  uVar2 = *param_1;
  uVar1 = *in_ECX;
  *in_ECX = *in_ECX + uVar2;
  in_ECX[1] = in_ECX[1] + param_1[1] + (uint)CARRY4(uVar1,uVar2);
  return;
}


/* FUN_0042c9d0 @ 0042c9d0  kind=gamemisc  attributed-by=caller-vote  size=46 */

void FUN_0042c9d0(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint *in_ECX;
  
  uVar3 = *param_1;
  uVar2 = *in_ECX;
  *in_ECX = *in_ECX - uVar3;
  in_ECX[1] = (in_ECX[1] - param_1[1]) - (uint)(uVar2 < uVar3);
  uVar3 = param_1[2];
  puVar1 = in_ECX + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  in_ECX[3] = (in_ECX[3] - param_1[3]) - (uint)(uVar2 < uVar3);
  uVar3 = param_1[4];
  puVar1 = in_ECX + 4;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  in_ECX[5] = (in_ECX[5] - param_1[5]) - (uint)(uVar2 < uVar3);
  return;
}


/* FUN_0042ca20 @ 0042ca20  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0042ca20(void *param_1)

{
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  FUN_0042ca20(*(undefined4 *)((int)param_1 + 8));
  if (*(void **)((int)param_1 + 0x10) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_1 + 0x10));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_0042f000 @ 0042f000  kind=gamemisc  attributed-by=caller-vote  size=42 */

undefined4 FUN_0042f000(int param_1)

{
  int in_ECX;
  
  FUN_00477d90(&param_1,param_1);
  if (param_1 == *(int *)(in_ECX + 4)) {
    return 0;
  }
  return *(undefined4 *)(param_1 + 0x18);
}


/* FUN_0042f100 @ 0042f100  kind=gamemisc  attributed-by=caller-vote  size=54 */

int FUN_0042f100(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if ((iVar1 < 1) && (iVar1 < 0)) {
    iVar1 = __alldiv(*param_1,iVar1,0x10000,0);
    return iVar1 + -1;
  }
  iVar1 = __alldiv(*param_1,iVar1,0x10000,0);
  return iVar1;
}


/* FUN_0042f140 @ 0042f140  kind=gamemisc  attributed-by=caller-vote  size=20 */

void FUN_0042f140(void)

{
  int *in_ECX;
  
  *in_ECX = *in_ECX + -1;
  if (*in_ECX < 1) {
    *in_ECX = 0;
    *(undefined2 *)(in_ECX + 1) = 0;
  }
  return;
}


/* FUN_0042f160 @ 0042f160  kind=gamemisc  attributed-by=caller-vote  size=40 */

void FUN_0042f160(ushort param_1,char param_2)

{
  int in_ECX;
  
  if (param_2 != '\0') {
    *(ushort *)(in_ECX + 0x114) = *(ushort *)(in_ECX + 0x114) | param_1;
    return;
  }
  *(ushort *)(in_ECX + 0x114) = *(ushort *)(in_ECX + 0x114) & ~param_1;
  return;
}


/* FUN_0042f190 @ 0042f190  kind=gamemisc  attributed-by=caller-vote  size=448 */

void FUN_0042f190(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  Widget *in_ECX;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2226;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  local_14 = uVar2;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::BlueprintPreviewWidget::BlueprintPreviewWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_44);
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::BlueprintPreviewWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr =
       (Widget_vftable_for_Deformer *)&cube::BlueprintPreviewWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0xc2f00000;
  in_ECX[1].Object_data.offset_0x0 = 0;
  in_ECX[1].Object_data.offset_0x4 = (int *)0x0;
  FUN_0042f360(uVar2);
  *(undefined4 *)&in_ECX[1].offset_0x128 = param_3;
  in_ECX[1].offset_0x12c = param_4;
  in_ECX[1].offset_0x130 = param_5;
  in_ECX[1].offset_0x134 = param_6;
  in_ECX[1].offset_0x138 = 0;
  in_ECX[1].offset_0x13c = -1;
  *(undefined2 *)&in_ECX[1].offset_0x150 = 1;
  local_8 = CONCAT31(local_8._1_3_,3);
  *(undefined2 *)&in_ECX[1].field_0x14c = 0;
  in_ECX[1].offset_0x144 = 0;
  in_ECX[1].offset_0x148 = 0;
  *(undefined2 *)&in_ECX[1].offset_0x14c = 0;
  *(undefined1 *)((int)&in_ECX[1].offset_0x14c + 2) = 0;
  *(undefined4 *)&in_ECX[2].field_0x100 = 0;
  memset(in_ECX + 2,0,0x100);
  iVar1 = in_ECX[1].offset_0x130;
  in_ECX[2].field_0x104 = 0;
  if (iVar1 != 0) {
    FUN_00636950(param_2);
  }
  if (in_ECX[1].offset_0x134 != 0) {
    FUN_00636950(param_2);
    FUN_0040eb60(&DAT_006fd41c);
    local_8 = CONCAT31(local_8._1_3_,4);
    uVar3 = FUN_00633d70(local_2c);
    in_ECX[1].offset_0x138 = uVar3;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042f360 @ 0042f360  kind=gamemisc  attributed-by=caller-vote  size=114 */

void FUN_0042f360(void)

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
  *(undefined4 *)(in_ECX + 0x8c) = 0;
  *(undefined4 *)(in_ECX + 0x8e) = 0;
  *(undefined4 *)(in_ECX + 0x90) = 0;
  *(undefined4 *)(in_ECX + 0x92) = 0;
  return;
}


/* FUN_0042f430 @ 0042f430  kind=gamemisc  attributed-by=caller-vote  size=21 */

void FUN_0042f430(void)

{
  int in_ECX;
  
  if (*(void **)(in_ECX + 0x11c) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x11c));
  }
  return;
}


/* FUN_00434870 @ 00434870  kind=gamemisc  attributed-by=caller-vote  size=50 */

undefined1 FUN_00434870(void)

{
  char cVar1;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  if ((((((cVar1 != '\f') && (cVar1 != '\r')) && (cVar1 != '\x15')) &&
       ((cVar1 != '\v' || (in_ECX[1] == '\x0e')))) &&
      ((cVar1 != '\0' && ((cVar1 != '\x19' && (cVar1 != '\x14')))))) &&
     ((cVar1 != '\x18' && (cVar1 != '\x17')))) {
    return 1;
  }
  return 0;
}


/* FUN_00434a80 @ 00434a80  kind=gamemisc  attributed-by=caller-vote  size=4 */

undefined4 FUN_00434a80(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x28);
}


/* FUN_00434c20 @ 00434c20  kind=gamemisc  attributed-by=caller-vote  size=232 */

void FUN_00434c20(float param_1)

{
  int iVar1;
  int in_ECX;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  float fVar5;
  
  if (*(int *)(in_ECX + 0x2a4) != 0) {
    if (param_1 < 0.0) {
      param_1 = 0.0;
    }
    FUN_00423e70();
    iVar1 = *(int *)(*(int *)(in_ECX + 0x2a4) + 0x38);
    pfVar2 = (float *)(*(int *)(iVar1 + 0xc0) * 0x40 + *(int *)(iVar1 + 0xec));
    fVar3 = (float10)FUN_0062f600();
    fVar4 = (float10)FUN_00627d50();
    fVar5 = (((float)fVar3 - 8.0) * param_1) / (float)fVar4;
    if (fVar5 != 1.0) {
      *pfVar2 = fVar5 * *pfVar2;
      pfVar2[1] = fVar5 * pfVar2[1];
      pfVar2[2] = fVar5 * pfVar2[2];
      pfVar2[3] = fVar5 * pfVar2[3];
    }
    (**(code **)(**(int **)(*(int *)(in_ECX + 0x2a4) + 0x38) + 4))(1);
  }
  return;
}


/* FUN_00434d90 @ 00434d90  kind=gamemisc  attributed-by=caller-vote  size=154 */

void FUN_00434d90(int param_1,int param_2,Widget_vftable_for_NamedObject *param_3)

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
                    /* inlined constructor: cube::CharacterWidget::CharacterWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_28);
  if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_28[0]);
  }
  in_ECX[1].vftablePtr = param_3;
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::CharacterWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::CharacterWidget::vftable_for_Deformer;
  ExceptionList = local_10;
  return;
}


/* FUN_00439190 @ 00439190  kind=gamemisc  attributed-by=caller-vote  size=60 */

bool FUN_00439190(int param_1,short *param_2)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  
  if (*param_2 == 0) {
    iVar2 = 0;
  }
  else {
    psVar3 = param_2;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_2 + 1) >> 1;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),param_2,iVar2);
  return iVar2 == 0;
}


/* FUN_00439210 @ 00439210  kind=gamemisc  attributed-by=caller-vote  size=159 */

int FUN_00439210(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2941;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004395c0(param_1,param_2);
  local_8 = 1;
  if ((undefined2 *)(iVar1 + 8) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 7;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined2 *)(iVar1 + 8) = 0;
    FUN_0040f680(param_3,0,0xffffffff);
    *(undefined1 *)(iVar1 + 0x20) = *(undefined1 *)(param_3 + 0x18);
    *(undefined1 *)(iVar1 + 0x21) = *(undefined1 *)(param_3 + 0x19);
    *(undefined1 *)(iVar1 + 0x22) = *(undefined1 *)(param_3 + 0x1a);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_004392d0 @ 004392d0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_004392d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_00439600(param_1,param_2);
  if (iVar1 != -8) {
    FUN_0040eaf0(param_3);
  }
  return iVar1;
}


/* FUN_00439300 @ 00439300  kind=gamemisc  attributed-by=caller-vote  size=152 */

int FUN_00439300(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2971;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_004ccbf0(param_1,param_2);
  puVar1 = (undefined4 *)(iVar2 + 8);
  local_8 = 1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 0;
    *(undefined4 *)(iVar2 + 0xc) = 0;
    uVar3 = FUN_004395c0(0,0);
    *puVar1 = uVar3;
    *puVar1 = *param_3;
    *param_3 = uVar3;
    uVar3 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = param_3[1];
    param_3[1] = uVar3;
  }
  ExceptionList = local_10;
  return iVar2;
}


/* FUN_004393b0 @ 004393b0  kind=gamemisc  attributed-by=caller-vote  size=345 */

void FUN_004393b0(int param_1,int param_2)

{
  Widget_vftable_for_NamedObject *pWVar1;
  Widget_vftable_for_Deformer *pWVar2;
  Widget *in_ECX;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e29c4;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::ChatWidget::ChatWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_44);
  local_8._0_1_ = 2;
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  in_ECX->vftablePtr = (Widget_vftable_for_NamedObject *)&cube::ChatWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::ChatWidget::vftable_for_Deformer;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0x0;
  in_ECX[1].Object_data.offset_0x0 = 0;
  pWVar1 = (Widget_vftable_for_NamedObject *)FUN_004ccbf0(0,0);
  in_ECX[1].vftablePtr = pWVar1;
  in_ECX[1].offset_0x10 = 7;
  *(undefined4 *)&in_ECX[1].field_0x18 = 0;
  *(undefined2 *)&in_ECX[1].Object_data.offset_0x4 = 0;
  local_8._0_1_ = 4;
  *(undefined1 *)&in_ECX[1].offset_0x14 = 0;
  in_ECX[1].offset_0x1c = 0;
  in_ECX[1].offset_0x20 = 0;
  local_18 = 7;
  local_1c = 0;
  local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8 = CONCAT31(local_8._1_3_,5);
  pWVar2 = (Widget_vftable_for_Deformer *)FUN_00639800(&local_2c);
  in_ECX[1].vftablePtr = pWVar2;
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c);
  }
  in_ECX->offset_0x11c = in_ECX->offset_0x11c | 0x40;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004395c0 @ 004395c0  kind=gamemisc  attributed-by=caller-vote  size=54 */

void FUN_004395c0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x24);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_00439640 @ 00439640  kind=gamemisc  attributed-by=caller-vote  size=20 */

void FUN_00439640(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  if (7 < (uint)in_ECX[5]) {
    in_ECX = (undefined4 *)*in_ECX;
  }
  *param_1 = in_ECX;
  return;
}


/* FUN_004396d0 @ 004396d0  kind=gamemisc  attributed-by=caller-vote  size=86 */

void FUN_004396d0(void)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  FUN_0043a4a0();
  iVar2 = *(int *)(in_ECX + 0x188);
  if (iVar2 <= *(int *)(in_ECX + 0x178)) {
    iVar1 = *(int *)(in_ECX + 0x18c);
    if (iVar1 == 0) {
      iVar1 = 1;
    }
    else if (iVar1 < 0) {
      iVar2 = iVar2 + iVar1;
      iVar1 = -iVar1;
    }
    FUN_00411270(iVar2,iVar1);
    if (*(int *)(in_ECX + 0x18c) < 0) {
      *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + *(int *)(in_ECX + 0x18c);
    }
    *(undefined4 *)(in_ECX + 0x18c) = 0;
  }
  return;
}


/* FUN_0043a010 @ 0043a010  kind=gamemisc  attributed-by=caller-vote  size=184 */

void FUN_0043a010(undefined4 param_1)

{
  uint uVar1;
  int in_ECX;
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2a38;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  FUN_0043a4a0(uVar1);
  if (0x1f < (ushort)param_1) {
    FUN_0040eb60(&PTR_006fccac);
    local_8 = 0;
    FUN_00425390(1,param_1);
    if (*(int *)(in_ECX + 0x18c) != 0) {
      FUN_004396d0();
    }
    FUN_0043a4a0(uVar1);
    FUN_0043a270(*(undefined4 *)(in_ECX + 0x188),local_2c,0,0xffffffff);
    *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + 1;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0043a0d0 @ 0043a0d0  kind=gamemisc  attributed-by=caller-vote  size=402 */

void FUN_0043a0d0(short param_1)

{
  char cVar1;
  int in_ECX;
  undefined4 *puVar2;
  
  FUN_0043a4a0();
  *(undefined1 *)(in_ECX + 0x134) = 1;
  if (param_1 != 0xd) {
    if (param_1 == 0x25) {
      if (0 < *(int *)(in_ECX + 0x188)) {
        *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + -1;
        cVar1 = FUN_0043a3f0(0x10);
        if (cVar1 != '\0') {
          *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x18c) + 1;
          return;
        }
LAB_0043a124:
        *(undefined4 *)(in_ECX + 0x18c) = 0;
        return;
      }
    }
    else if (param_1 == 0x27) {
      if (*(int *)(in_ECX + 0x188) < *(int *)(in_ECX + 0x178)) {
        *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + 1;
        cVar1 = FUN_0043a3f0(0x10);
        if (cVar1 != '\0') {
          *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x18c) + -1;
          return;
        }
        goto LAB_0043a124;
      }
    }
    else {
      if (param_1 == 0x2e) {
LAB_0043a171:
        FUN_004396d0();
        return;
      }
      if (param_1 == 8) {
        if (*(int *)(in_ECX + 0x18c) != 0) goto LAB_0043a171;
        if (0 < *(int *)(in_ECX + 0x188)) {
          puVar2 = (undefined4 *)(in_ECX + 0x168);
          if (7 < *(uint *)(in_ECX + 0x17c)) {
            puVar2 = (undefined4 *)*puVar2;
          }
          FUN_00439fc0(&param_1,(int)puVar2 + (*(int *)(in_ECX + 0x188) + -1) * 2);
          *(int *)(in_ECX + 0x188) = *(int *)(in_ECX + 0x188) + -1;
          return;
        }
      }
      else {
        if (param_1 == 0x24) {
          cVar1 = FUN_0043a3f0(0x10);
          if (cVar1 == '\0') {
            *(undefined4 *)(in_ECX + 0x18c) = 0;
            *(undefined4 *)(in_ECX + 0x188) = 0;
            return;
          }
          *(int *)(in_ECX + 0x18c) = *(int *)(in_ECX + 0x18c) + *(int *)(in_ECX + 0x188);
          *(undefined4 *)(in_ECX + 0x188) = 0;
          return;
        }
        if (param_1 == 0x23) {
          cVar1 = FUN_0043a3f0(0x10);
          if (cVar1 != '\0') {
            *(int *)(in_ECX + 0x18c) =
                 *(int *)(in_ECX + 0x18c) + (*(int *)(in_ECX + 0x188) - *(int *)(in_ECX + 0x178));
            *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(in_ECX + 0x178);
            return;
          }
          *(undefined4 *)(in_ECX + 0x18c) = 0;
          *(undefined4 *)(in_ECX + 0x188) = *(undefined4 *)(in_ECX + 0x178);
        }
      }
    }
  }
  return;
}


/* FUN_0043a4a0 @ 0043a4a0  kind=gamemisc  attributed-by=caller-vote  size=91 */

void FUN_0043a4a0(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  if (*(int *)(in_ECX + 0x188) < 0) {
    *(undefined4 *)(in_ECX + 0x188) = 0;
  }
  iVar1 = *(int *)(in_ECX + 0x178);
  if (iVar1 < *(int *)(in_ECX + 0x188)) {
    *(int *)(in_ECX + 0x188) = iVar1;
  }
  iVar2 = *(int *)(in_ECX + 0x188);
  if (*(int *)(in_ECX + 0x18c) + iVar2 < 0) {
    *(int *)(in_ECX + 0x18c) = -iVar2;
  }
  if (iVar1 < *(int *)(in_ECX + 0x18c) + iVar2) {
    *(int *)(in_ECX + 0x188) = iVar1 - *(int *)(in_ECX + 0x18c);
  }
  return;
}


/* FUN_0043a500 @ 0043a500  kind=gamemisc  attributed-by=caller-vote  size=1478 */

void FUN_0043a500(undefined4 *param_1,undefined2 *param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  int *piVar12;
  float10 fVar13;
  float fVar14;
  void *local_7c;
  float local_78;
  int local_74;
  float local_70;
  char local_69;
  float local_68 [2];
  float local_60 [2];
  void *local_58 [4];
  undefined4 local_48;
  uint local_44;
  undefined2 local_40;
  undefined1 local_3e;
  void *local_3c [4];
  undefined4 local_2c;
  uint local_28;
  void *local_24;
  undefined4 local_20;
  void *local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2aa0;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar10 = 0;
  local_78 = 0.0;
  local_14 = uVar4;
  puVar5 = (undefined4 *)FUN_00439600(0,0);
  fVar14 = (float)param_1[4];
  fVar11 = 0.0;
  local_8._1_3_ = 0;
  local_70 = fVar14;
  if (-1 < (int)fVar14) {
    do {
      local_8._0_1_ = 0;
      uVar2 = param_1[5];
      puVar6 = param_1;
      if (7 < uVar2) {
        puVar6 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar6 + (int)fVar11 * 2) == 0x20) {
LAB_0043a5a1:
        if (0 < (int)fVar11 - (int)local_78) {
          uVar7 = FUN_0043a450(local_3c,local_78,(int)fVar11 - (int)local_78);
          local_8._0_1_ = 1;
          iVar8 = FUN_004392d0(puVar5,puVar5[1],uVar7);
          if (iVar10 == 0x7fffffe) goto LAB_0043a6e7;
          iVar10 = iVar10 + 1;
          puVar5[1] = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          local_8._0_1_ = 0;
          fVar14 = local_70;
          if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_3c[0]);
          }
        }
        local_8._0_1_ = 0;
        if (fVar11 != fVar14) {
          uVar7 = FUN_0043a450(local_3c,fVar11,1);
          local_8._0_1_ = 2;
          iVar8 = FUN_004392d0(puVar5,puVar5[1],uVar7);
          if (iVar10 == 0x7fffffe) goto LAB_0043a6e7;
          iVar10 = iVar10 + 1;
          puVar5[1] = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          local_8._0_1_ = 0;
          fVar14 = local_70;
          if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_3c[0]);
          }
        }
        local_78 = (float)((int)fVar11 + 1);
      }
      else {
        puVar6 = param_1;
        if (7 < uVar2) {
          puVar6 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar6 + (int)fVar11 * 2) == 10) goto LAB_0043a5a1;
        puVar6 = param_1;
        if (7 < uVar2) {
          puVar6 = (undefined4 *)*param_1;
        }
        if ((*(short *)((int)puVar6 + (int)fVar11 * 2) == 0xd) || (fVar11 == fVar14))
        goto LAB_0043a5a1;
      }
      fVar11 = (float)((int)fVar11 + 1);
    } while ((int)fVar11 <= (int)fVar14);
  }
  iVar10 = local_74;
  local_8._0_1_ = 0;
  fVar13 = (float10)FUN_00627d50(uVar4);
  local_78 = (float)fVar13;
  fVar14 = local_78 - 20.0;
  local_70 = 0.0;
  if (*(int *)(iVar10 + 0x164) == 0) {
    local_78 = 0.0;
    local_7c = (void *)FUN_004395c0(0,0);
    iVar8 = *(int *)(iVar10 + 0x160);
    local_8._0_1_ = 3;
    iVar9 = FUN_00439300(iVar8,*(undefined4 *)(iVar8 + 4),&local_7c);
    if (*(int *)(iVar10 + 0x164) != 0xffffffe) {
      *(int *)(iVar10 + 0x164) = *(int *)(iVar10 + 0x164) + 1;
      *(int *)(iVar8 + 4) = iVar9;
      **(int **)(iVar9 + 4) = iVar9;
      local_8 = (uint)local_8._1_3_ << 8;
      FUN_0046f990();
                    /* WARNING: Subroutine does not return */
      operator_delete(local_7c);
    }
    goto LAB_0043a6e7;
  }
  pfVar1 = (float *)(iVar10 + 0x160);
  iVar8 = *(int *)(*(int *)(iVar10 + 0x160) + 4);
  piVar12 = (int *)**(int **)(iVar8 + 8);
  iVar9 = iVar10;
  if (piVar12 != *(int **)(iVar8 + 8)) {
    do {
      iVar8 = FUN_00428db0(0,piVar12[6],&DAT_006fd844,1);
      iVar9 = local_74;
      if (iVar8 == 0) {
        local_70 = local_70 + 5.0;
      }
      else {
        FUN_0065e720(piVar12 + 2,*(int *)(local_74 + 0x148) + 0x48,0x41200000,0x40000000,0,0,0,
                     &local_1c,&local_24,0,1,0xffffffff,0);
        local_70 = ((float)local_24 - (float)local_1c) + local_70;
      }
      piVar12 = (int *)*piVar12;
    } while (piVar12 != (int *)*(int *)(*(int *)((int)*pfVar1 + 4) + 8));
  }
  if (*(int *)(*(int *)((int)*pfVar1 + 4) + 0xc) == 0) {
LAB_0043a808:
    local_69 = '\0';
  }
  else {
    iVar8 = FUN_00428db0(0,*(undefined4 *)
                            (*(int *)(*(int *)(*(int *)((int)*pfVar1 + 4) + 8) + 4) + 0x18),
                         &DAT_006fd844,1);
    local_69 = '\x01';
    if (iVar8 == 0) goto LAB_0043a808;
  }
  puVar6 = (undefined4 *)*puVar5;
  while( true ) {
    if (puVar6 == puVar5) {
      *(undefined1 *)(local_74 + 0x134) = 1;
      FUN_0046f990();
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar5);
    }
    FUN_0065e720(puVar6 + 2,*(int *)(iVar9 + 0x148) + 0x48,0x41200000,0x40000000,0,0,0,local_68,
                 local_60,0,1,0xffffffff,0);
    iVar8 = FUN_00428db0(0,puVar6[6],&DAT_006fd84c,1);
    if ((iVar8 == 0) || (iVar8 = FUN_00428db0(0,puVar6[6],&DAT_006fd850,1), iVar8 == 0)) break;
    iVar8 = FUN_00428db0(0,puVar6[6],&DAT_006fd844,1);
    if (iVar8 == 0) {
      local_78 = 7.00649e-45;
    }
    else {
      local_78 = (float)(int)(local_60[0] - local_68[0]);
    }
    local_70 = (float)(int)local_78 + local_70;
    if ((float)(int)fVar14 <= local_70) {
      if (local_69 == '\0') {
        local_18 = 0;
        local_1c = (void *)FUN_004395c0(0,0);
        local_70 = *pfVar1;
        local_8._0_1_ = 5;
        iVar8 = FUN_00439300(local_70,*(undefined4 *)((int)local_70 + 4),&local_1c);
        if (*(int *)(iVar10 + 0x164) != 0xffffffe) {
          *(int *)(iVar10 + 0x164) = *(int *)(iVar10 + 0x164) + 1;
          *(int *)((int)local_70 + 4) = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          local_8 = (uint)local_8._1_3_ << 8;
          FUN_0046f990();
                    /* WARNING: Subroutine does not return */
          operator_delete(local_1c);
        }
        goto LAB_0043a6e7;
      }
      local_69 = '\0';
    }
    local_28 = 7;
    local_2c = 0;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
    FUN_0040f680(puVar6 + 2,0,0xffffffff);
    local_58[0] = (void *)((uint)local_58[0] & 0xffff0000);
    local_8._0_1_ = 6;
    local_44 = 7;
    local_48 = 0;
    FUN_0040f680(local_3c,0,0xffffffff);
    local_40 = *param_2;
    local_3e = *(undefined1 *)(param_2 + 1);
    if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c[0]);
    }
    local_28 = 7;
    local_2c = 0;
    local_3c[0] = (void *)((uint)local_3c[0] & 0xffff0000);
    iVar8 = *(int *)((int)*pfVar1 + 4);
    local_78 = *(float *)(iVar8 + 8);
    local_8._0_1_ = 7;
    iVar9 = FUN_00439210(local_78,*(undefined4 *)((int)local_78 + 4),local_58);
    if (*(int *)(iVar8 + 0xc) == 0x71c71c6) goto LAB_0043a6e7;
    *(int *)(iVar8 + 0xc) = *(int *)(iVar8 + 0xc) + 1;
    *(int *)((int)local_78 + 4) = iVar9;
    local_8._0_1_ = 0;
    uVar3 = (undefined1)local_8;
    local_8._0_1_ = 0;
    **(int **)(iVar9 + 4) = iVar9;
    if (7 < local_44) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_58[0]);
    }
    puVar6 = (undefined4 *)*puVar6;
    iVar9 = local_74;
    local_8._0_1_ = uVar3;
  }
  local_20 = 0;
  local_24 = (void *)FUN_004395c0(0,0);
  fVar14 = *pfVar1;
  local_8._0_1_ = 4;
  iVar8 = FUN_00439300(fVar14,*(undefined4 *)((int)fVar14 + 4),&local_24);
  if (*(int *)(iVar10 + 0x164) != 0xffffffe) {
    *(int *)(iVar10 + 0x164) = *(int *)(iVar10 + 0x164) + 1;
    *(int *)((int)fVar14 + 4) = iVar8;
    **(int **)(iVar8 + 4) = iVar8;
    local_8 = (uint)local_8._1_3_ << 8;
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete(local_24);
  }
LAB_0043a6e7:
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_0043acb0 @ 0043acb0  kind=gamemisc  attributed-by=caller-vote  size=37 */

int FUN_0043acb0(uint param_1)

{
  uint3 uVar1;
  uint *in_ECX;
  uint uVar2;
  
  uVar2 = ((int)param_1 >> 0x1f) << 0x10 | param_1 >> 0x10;
  uVar1 = (uint3)((param_1 << 0x10) >> 8);
  if (((int)uVar2 <= (int)in_ECX[1]) &&
     (((int)uVar2 < (int)in_ECX[1] || (param_1 << 0x10 < *in_ECX)))) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* FUN_0043b4a0 @ 0043b4a0  kind=gamemisc  attributed-by=caller-vote  size=19 */

undefined4 FUN_0043b4a0(undefined4 param_1)

{
  undefined4 in_ECX;
  
  FUN_0043ac20(param_1,in_ECX);
  return param_1;
}


/* FUN_0043b660 @ 0043b660  kind=gamemisc  attributed-by=caller-vote  size=35 */

void FUN_0043b660(void)

{
  int in_ECX;
  
  *(undefined1 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  *(undefined4 *)(in_ECX + 0x18) = 0;
  *(undefined4 *)(in_ECX + 0x20) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  return;
}


/* FUN_0043c820 @ 0043c820  kind=gamemisc  attributed-by=caller-vote  size=19 */

bool FUN_0043c820(int *param_1)

{
  int *in_ECX;
  
  return *in_ECX == *param_1;
}


/* FUN_0043c9c0 @ 0043c9c0  kind=gamemisc  attributed-by=caller-vote  size=54 */

undefined4 FUN_0043c9c0(undefined4 param_1)

{
  switch(param_1) {
  case 0x15:
  case 0x22:
  case 0x30:
  case 0x36:
  case 0x58:
    return 6;
  default:
    return 0xffffffff;
  case 0x31:
  case 0x60:
  case 0x61:
  case 99:
  case 100:
  case 0x65:
  case 0x66:
    return 8;
  case 0x32:
  case 0x4f:
  case 0x56:
  case 0x67:
    return 7;
  }
}


/* FUN_0043cf20 @ 0043cf20  kind=gamemisc  attributed-by=caller-vote  size=196 */

void FUN_0043cf20(void)

{
  int in_ECX;
  float fVar1;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined8 local_c;
  
  if (((*(int *)(in_ECX + 0x128) != 0) && (*(char *)(in_ECX + 0x140) == '\x04')) &&
     (*(char *)(in_ECX + 0x141) == '\x01')) {
    fVar1 = *(float *)(in_ECX + 0x170) + 0.25;
    *(float *)(in_ECX + 0x170) = fVar1;
    if (1.0 < fVar1) {
      *(undefined4 *)(in_ECX + 0x170) = 0x3f800000;
    }
    uStack_18 = 0;
    local_c = 0;
    local_1c = CONCAT31(local_1c._1_3_,0xb);
    local_14 = 30000;
    FUN_00446af0(&local_1c);
    local_34 = CONCAT44(uStack_18,local_1c);
    local_40 = *(undefined4 *)(in_ECX + 0xc);
    local_44 = *(undefined4 *)(in_ECX + 8);
    local_2c = CONCAT44(uStack_10,local_14);
    local_24 = local_c;
    local_3c = local_44;
    local_38 = local_40;
    FUN_004460a0(&local_44);
  }
  return;
}


/* FUN_0043dc60 @ 0043dc60  kind=gamemisc  attributed-by=caller-vote  size=702 */

void FUN_0043dc60(void)

{
  int *piVar1;
  ushort uVar2;
  uint uVar3;
  int in_ECX;
  float10 fVar4;
  float fVar5;
  double dVar6;
  int *local_24;
  int local_20;
  float local_1c;
  float local_18;
  float local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bd8;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  dVar6 = 2.0;
  libm_sse2_pow_precise(uVar3);
  local_18 = (float)dVar6;
  dVar6 = 2.0;
  libm_sse2_pow_precise();
  local_18 = *(float *)(in_ECX + 0x180) * (float)dVar6 * local_18;
  local_14 = local_18;
  FUN_0043df60(&local_24);
  local_8 = 0;
  if (local_20 == 0) {
    uVar2 = *(ushort *)(in_ECX + 0x7e);
    if ((uVar2 & 8) != 0) {
      dVar6 = 2.0;
      libm_sse2_pow_precise(uVar3);
      local_1c = (float)dVar6;
      dVar6 = 2.0;
      libm_sse2_pow_precise();
      uVar2 = *(ushort *)(in_ECX + 0x7e);
      local_18 = local_1c * (float)dVar6 * 2.0 + local_18;
      local_14 = local_18;
    }
    fVar5 = local_18;
    if ((uVar2 & 0x10) != 0) {
      dVar6 = 2.0;
      libm_sse2_pow_precise(uVar3);
      local_1c = (float)dVar6;
      dVar6 = 2.0;
      libm_sse2_pow_precise();
      local_14 = (float)dVar6 * local_1c * 8.0 + local_18;
      fVar5 = local_14;
    }
  }
  else {
    for (piVar1 = (int *)*local_24; fVar5 = local_18, piVar1 != local_24; piVar1 = (int *)*piVar1) {
      fVar4 = (float10)FUN_004c7f60();
      local_1c = (float)fVar4;
      local_18 = local_1c + local_18;
      local_14 = local_18;
    }
  }
  switch(*(undefined1 *)(in_ECX + 0x68)) {
  case 0x57:
    local_14 = fVar5 * 50.0;
    break;
  case 0x5b:
    local_14 = fVar5 * 2.0;
    break;
  case 0x5d:
    local_14 = fVar5 * 5.0;
    break;
  case 0x60:
    local_14 = fVar5 * 3.0;
  }
  piVar1 = (int *)*local_24;
  *local_24 = (int)local_24;
  local_24[1] = (int)local_24;
  if (piVar1 == local_24) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_24);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(piVar1);
}


/* FUN_0043df60 @ 0043df60  kind=gamemisc  attributed-by=caller-vote  size=448 */

int * FUN_0043df60(int *param_1)

{
  char *pcVar1;
  char cVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char **ppcVar7;
  int in_ECX;
  char *local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bd8;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = FUN_0046d550(0,0);
  cVar2 = *(char *)(in_ECX + 0xaa8);
  local_18 = (char *)(in_ECX + 0xaa8);
  local_8 = 0;
  if ((cVar2 != '\x03') ||
     ((pcVar1 = local_18, *(char *)(in_ECX + 0xaa9) != '\x06' &&
      (pcVar1 = local_18, *(char *)(in_ECX + 0xaa9) != '\a')))) {
    cVar3 = *(char *)(in_ECX + 0x990);
    pcVar1 = (char *)(in_ECX + 0x990);
    if ((cVar3 != '\x03') ||
       ((*(char *)(in_ECX + 0x991) != '\x06' && (*(char *)(in_ECX + 0x991) != '\a')))) {
      switch(*(undefined1 *)(in_ECX + 0x68)) {
      case 2:
      case 4:
      case 7:
      case 8:
      case 10:
      case 0x12:
      case 0x27:
      case 0x29:
        if (cVar3 == '\x03') {
          ppcVar7 = &local_14;
          local_14 = pcVar1;
LAB_0043e0ca:
          FUN_004860b0(ppcVar7);
        }
        break;
      default:
        if (cVar2 == '\x03') {
          FUN_004860b0(&local_18);
        }
        if ((*pcVar1 == '\x03') && (*(char *)(in_ECX + 0x991) == '\f')) {
LAB_0043e0c7:
          local_18 = pcVar1;
          ppcVar7 = &local_18;
          goto LAB_0043e0ca;
        }
        break;
      case 0xb:
      case 0xc:
      case 0x10:
      case 0x11:
      case 0x14:
      case 0x36:
      case 0x56:
      case 0x5b:
      case 0x60:
        if (cVar3 == '\x03') {
          local_14 = pcVar1;
          FUN_004860b0(&local_14);
        }
        pcVar1 = local_18;
        if (*local_18 == '\x03') goto LAB_0043e0c7;
        break;
      case 0x28:
      case 0x2a:
        if (cVar2 == '\x03') {
          ppcVar7 = &local_14;
          local_14 = local_18;
          goto LAB_0043e0ca;
        }
      }
      *param_1 = 0;
      param_1[1] = 0;
      FUN_0046d550(0,0);
      *param_1 = iVar5;
      param_1[1] = 0;
      goto LAB_0043e0ff;
    }
  }
  local_14 = pcVar1;
  iVar6 = FUN_00583cb0(iVar5,*(undefined4 *)(iVar5 + 4),&local_14);
  *(int *)(iVar5 + 4) = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  *param_1 = 0;
  param_1[1] = 0;
  FUN_0046d550(0,0);
  *param_1 = iVar5;
  param_1[1] = 1;
LAB_0043e0ff:
  FUN_004da480(uVar4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0043e190 @ 0043e190  kind=gamemisc  attributed-by=caller-vote  size=296 */

float10 FUN_0043e190(void)

{
  int in_ECX;
  float10 fVar1;
  float fVar2;
  double dVar3;
  double dVar4;
  undefined4 local_8;
  
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  dVar4 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (float)dVar3 * (float)dVar4 * *(float *)(in_ECX + 0x180);
  if (*(char *)(in_ECX + 0x990) == '\x03') {
    if (*(char *)(in_ECX + 0x991) != '\r') {
      fVar1 = (float10)FUN_004c7f60();
      local_8 = (float)fVar1 + local_8;
      goto LAB_0043e27b;
    }
    fVar1 = (float10)FUN_004c7f60();
    fVar2 = (float)fVar1 * 4.0;
  }
  else {
LAB_0043e27b:
    if (*(char *)(in_ECX + 0xaa8) != '\x03') goto LAB_0043e29f;
    fVar1 = (float10)FUN_004c7f60();
    fVar2 = (float)fVar1;
  }
  local_8 = fVar2 + local_8;
LAB_0043e29f:
  return (float10)(*(float *)(in_ECX + 0x180) * local_8);
}


/* FUN_0043e2c0 @ 0043e2c0  kind=gamemisc  attributed-by=caller-vote  size=78 */

float10 FUN_0043e2c0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) * 3.0 + 1.0);
}


/* FUN_0043e310 @ 0043e310  kind=gamemisc  attributed-by=caller-vote  size=53 */

uint FUN_0043e310(void)

{
  char cVar1;
  undefined4 in_EAX;
  uint uVar2;
  int in_ECX;
  
  cVar1 = *(char *)(in_ECX + 0x60);
  uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),cVar1);
  if ((((cVar1 != '\0') && (cVar1 != '\x01')) && (cVar1 != '\x03')) &&
     ((cVar1 != '\x05' &&
      (((cVar1 != '\x06' || (uVar2 = *(uint *)(in_ECX + 100), uVar2 == 0x8c)) ||
       ((uVar2 == 0x8e || (uVar2 == 0x8d)))))))) {
    return uVar2 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar2 >> 8),1);
}


/* FUN_0043e420 @ 0043e420  kind=gamemisc  attributed-by=caller-vote  size=119 */

bool FUN_0043e420(void)

{
  int iVar1;
  char cVar2;
  int iVar3;
  int in_ECX;
  
  iVar1 = *(int *)(in_ECX + 400);
  iVar3 = FUN_004c76a0();
  if ((int)((1.0 - 1.0 / (((float)iVar1 - 1.0) * 0.05 + 1.0)) * 100.0 + 1.0) < iVar3) {
    return false;
  }
  cVar2 = FUN_004c6f20(*(undefined1 *)(in_ECX + 0x140));
  return cVar2 != '\0';
}


/* FUN_0043e660 @ 0043e660  kind=gamemisc  attributed-by=caller-vote  size=55 */

float10 FUN_0043e660(int param_1)

{
  return (float10)(1.0 - 1.0 / ((float)(param_1 + 1) * 0.1 + 1.0));
}


/* FUN_0043ed60 @ 0043ed60  kind=gamemisc  attributed-by=caller-vote  size=126 */

float10 FUN_0043ed60(undefined4 param_1,int param_2)

{
  int iVar1;
  int in_ECX;
  
  iVar1 = FUN_0043c9c0(param_1);
  if (iVar1 < 0) {
    return (float10)1;
  }
  if (param_2 < 0) {
    param_2 = *(int *)(in_ECX + 0x1138 + iVar1 * 4);
  }
  if ((param_2 == 0) && (*(char *)(in_ECX + 0x60) != '\0')) {
    param_2 = *(int *)(in_ECX + 400) / 2 + *(byte *)(in_ECX + 0x1a8) + 1;
  }
  return (float10)(1.0 - 1.0 / ((float)param_2 * 0.1 + 1.0));
}


/* FUN_0043ede0 @ 0043ede0  kind=gamemisc  attributed-by=caller-vote  size=570 */

/* WARNING: Removing unreachable block (ram,0x0043eea2) */
/* WARNING: Removing unreachable block (ram,0x0043eeb2) */
/* WARNING: Removing unreachable block (ram,0x0043eebb) */
/* WARNING: Removing unreachable block (ram,0x0043eebe) */
/* WARNING: Removing unreachable block (ram,0x0043eeae) */
/* WARNING: Removing unreachable block (ram,0x0043eecc) */
/* WARNING: Removing unreachable block (ram,0x0043eed8) */
/* WARNING: Removing unreachable block (ram,0x0043eee3) */
/* WARNING: Removing unreachable block (ram,0x0043eedf) */
/* WARNING: Removing unreachable block (ram,0x0043eed3) */
/* WARNING: Removing unreachable block (ram,0x0043eee6) */

void FUN_0043ede0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int *in_ECX;
  int *piVar4;
  int *piVar5;
  
  if (*(char *)((int)param_2 + 0xd) != '\0') {
                    /* WARNING: Subroutine does not return */
    std::_Xout_of_range("invalid map/set<T> iterator");
  }
  FUN_005c3ea0();
  piVar5 = (int *)*param_2;
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    if (*(char *)(param_2[2] + 0xd) == '\0') {
      piVar5 = (int *)param_2[2];
    }
  }
  else {
    piVar5 = (int *)param_2[2];
  }
  piVar4 = (int *)param_2[1];
  if (*(char *)((int)piVar5 + 0xd) == '\0') {
    piVar5[1] = (int)piVar4;
  }
  if (*(int **)(*in_ECX + 4) == param_2) {
    *(int **)(*in_ECX + 4) = piVar5;
  }
  else if ((int *)*piVar4 == param_2) {
    *piVar4 = (int)piVar5;
  }
  else {
    piVar4[2] = (int)piVar5;
  }
  puVar2 = (undefined4 *)*in_ECX;
  if ((int *)*puVar2 == param_2) {
    piVar1 = piVar4;
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      piVar1 = (int *)FUN_004e6ce0(piVar5);
      puVar2 = (undefined4 *)*in_ECX;
    }
    *puVar2 = piVar1;
  }
  if (*(int **)(*in_ECX + 8) == param_2) {
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      uVar3 = FUN_00428aa0(piVar5);
      *(undefined4 *)(*in_ECX + 8) = uVar3;
    }
    else {
      *(int **)(*in_ECX + 8) = piVar4;
    }
  }
  if ((char)param_2[3] == '\x01') {
    if (piVar5 != *(int **)(*in_ECX + 4)) {
      do {
        piVar1 = piVar4;
        if ((char)piVar5[3] != '\x01') break;
        piVar4 = (int *)*piVar1;
        if (piVar5 == piVar4) {
          piVar4 = (int *)piVar1[2];
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar1 + 3) = 0;
            FUN_004e37e0(piVar1);
            piVar4 = (int *)piVar1[2];
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(*piVar4 + 0xc) != '\x01') || (*(char *)(piVar4[2] + 0xc) != '\x01')) {
              if (*(char *)(piVar4[2] + 0xc) == '\x01') {
                *(undefined1 *)(*piVar4 + 0xc) = 1;
                *(undefined1 *)(piVar4 + 3) = 0;
                FUN_0042cac0(piVar4);
                piVar4 = (int *)piVar1[2];
              }
              *(char *)(piVar4 + 3) = (char)piVar1[3];
              *(undefined1 *)(piVar1 + 3) = 1;
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              FUN_004e37e0(piVar1);
              break;
            }
LAB_0043efc2:
            *(undefined1 *)(piVar4 + 3) = 0;
          }
        }
        else {
          if ((char)piVar4[3] == '\0') {
            *(undefined1 *)(piVar4 + 3) = 1;
            *(undefined1 *)(piVar1 + 3) = 0;
            FUN_0042cac0(piVar1);
            piVar4 = (int *)*piVar1;
          }
          if (*(char *)((int)piVar4 + 0xd) == '\0') {
            if ((*(char *)(piVar4[2] + 0xc) == '\x01') && (*(char *)(*piVar4 + 0xc) == '\x01'))
            goto LAB_0043efc2;
            if (*(char *)(*piVar4 + 0xc) == '\x01') {
              *(undefined1 *)(piVar4[2] + 0xc) = 1;
              *(undefined1 *)(piVar4 + 3) = 0;
              FUN_004e37e0(piVar4);
              piVar4 = (int *)*piVar1;
            }
            *(char *)(piVar4 + 3) = (char)piVar1[3];
            *(undefined1 *)(piVar1 + 3) = 1;
            *(undefined1 *)(*piVar4 + 0xc) = 1;
            FUN_0042cac0(piVar1);
            break;
          }
        }
        piVar4 = (int *)piVar1[1];
        piVar5 = piVar1;
      } while (piVar1 != *(int **)(*in_ECX + 4));
    }
    *(undefined1 *)(piVar5 + 3) = 1;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(param_2);
}


/* FUN_0043f3b0 @ 0043f3b0  kind=gamemisc  attributed-by=caller-vote  size=189 */

undefined4 * FUN_0043f3b0(undefined4 *param_1,int *param_2,int *param_3)

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
    FUN_0042ca20(piVar2[1]);
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
    FUN_0043f470(local_8,piVar3);
    piVar3 = param_2;
  }
  *param_1 = piVar3;
  return param_1;
}


/* FUN_0043f770 @ 0043f770  kind=gamemisc  attributed-by=caller-vote  size=79 */

float10 FUN_0043f770(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) * 3.0 + 1.5);
}


/* FUN_00443f10 @ 00443f10  kind=gamemisc  attributed-by=caller-vote  size=48 */

undefined4 * FUN_00443f10(uint param_1)

{
  undefined4 *puVar1;
  int in_ECX;
  
  puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x1178);
  while( true ) {
    if (puVar1 == *(undefined4 **)(in_ECX + 0x1178)) {
      return (undefined4 *)0x0;
    }
    if (*(byte *)(puVar1 + 2) == param_1) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  return puVar1 + 2;
}


/* FUN_004441a0 @ 004441a0  kind=gamemisc  attributed-by=caller-vote  size=116 */

bool FUN_004441a0(float param_1)

{
  int iVar1;
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    switch(*(undefined1 *)(in_ECX + 0xaa9)) {
    case 0:
    case 1:
    case 2:
    case 0xc:
      param_1 = param_1 * 0.5;
      break;
    default:
      goto switchD_004441bf_caseD_3;
    case 8:
    case 10:
      param_1 = param_1 * 0.3;
    }
  }
  else {
switchD_004441bf_caseD_3:
  }
  iVar1 = rand();
  return (float)iVar1 / 32767.0 < param_1;
}


/* FUN_00444590 @ 00444590  kind=gamemisc  attributed-by=caller-vote  size=60 */

undefined1 FUN_00444590(void)

{
  char cVar1;
  int in_ECX;
  
  if ((*(int *)(in_ECX + 0x130) < 1) &&
     ((((cVar1 = *(char *)(in_ECX + 0x68), cVar1 == 'G' || (cVar1 == 'H')) || (cVar1 == '\b')) ||
      ((cVar1 == 'b' ||
       (((cVar1 == ';' || (cVar1 == '?')) &&
        ((*(char *)(in_ECX + 0x140) == '\x01' && (*(char *)(in_ECX + 0x141) == '\x01')))))))))) {
    return 1;
  }
  return 0;
}


/* FUN_00444760 @ 00444760  kind=gamemisc  attributed-by=caller-vote  size=38 */

undefined4 FUN_00444760(undefined4 param_1)

{
  switch(param_1) {
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x24:
  case 0x25:
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x4a:
  case 0x4b:
  case 0x62:
  case 99:
  case 100:
  case 0x66:
  case 0x67:
  case 0x68:
  case 0x69:
  case 0x97:
    return 1;
  default:
    return 0;
  }
}


/* FUN_00444cb0 @ 00444cb0  kind=gamemisc  attributed-by=caller-vote  size=121 */

int FUN_00444cb0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    switch(*(undefined1 *)(in_ECX + 0xaa9)) {
    case 6:
      return (int)(*(float *)(in_ECX + 0x17c) * 60.0);
    case 8:
      return (int)(*(float *)(in_ECX + 0x17c) * 80.0);
    case 0xb:
    case 0xc:
    case 0xf:
    case 0x10:
    case 0x11:
switchD_00444cc8_caseD_b:
      return (int)(*(float *)(in_ECX + 0x17c) * 20.0);
    }
  }
  else if ((*(byte *)(in_ECX + 0x7e) & 0x10) != 0) goto switchD_00444cc8_caseD_b;
  return (int)(*(float *)(in_ECX + 0x17c) * 50.0);
}


/* FUN_00444d60 @ 00444d60  kind=gamemisc  attributed-by=caller-vote  size=67 */

int FUN_00444d60(void)

{
  int in_ECX;
  
  return (int)((1.0 - 1.0 / (((float)*(int *)(in_ECX + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 + 50.0);
}


/* FUN_00444ff0 @ 00444ff0  kind=gamemisc  attributed-by=caller-vote  size=43 */

int FUN_00444ff0(void)

{
  int in_ECX;
  
  if (*(char *)(in_ECX + 0x60) == '\0') {
    return 0x5dc;
  }
  return 3000 - ((int)((uint)*(byte *)(in_ECX + 0x1a8) * 0x5dc) >> 2);
}


/* FUN_00445020 @ 00445020  kind=gamemisc  attributed-by=caller-vote  size=637 */

char FUN_00445020(void)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  int in_ECX;
  
  if ((((*(char *)(in_ECX + 0x140) == '\x03') || (iVar4 = *(int *)(in_ECX + 100), iVar4 == 0x75)) ||
      (iVar4 == 0x56)) ||
     ((cVar3 = *(char *)(in_ECX + 0xaa8), cVar3 == '\x03' &&
      (((cVar1 = *(char *)(in_ECX + 0xaa9), cVar1 == '\n' || (cVar1 == '\v')) || (cVar1 == '\f')))))
     ) {
    if (*(char *)(in_ECX + 0xaa9) == '\v') {
      cVar3 = '&';
      if (*(char *)(in_ECX + 0x141) == '\x01') {
        cVar3 = ',';
      }
      return cVar3;
    }
    if (*(char *)(in_ECX + 0xaa9) == '\n') {
      return (*(char *)(in_ECX + 0x141) == '\x01') * '\x02' + '\x1e';
    }
    if (*(char *)(in_ECX + 0x141) != '\x01') {
      if (*(char *)(in_ECX + 0x68) == '(') {
        iVar4 = FUN_0043d1a0();
        if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
          return '\'';
        }
      }
      return '(';
    }
    if (*(char *)(in_ECX + 0x68) == '*') {
      iVar4 = FUN_0043d1a0();
      if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
        return ')';
      }
    }
    return '*';
  }
  if ((iVar4 == 0x68) ||
     ((cVar3 == '\x03' &&
      ((*(char *)(in_ECX + 0xaa9) == '\x06' || (*(char *)(in_ECX + 0xaa9) == '\a')))))) {
    return '\x16';
  }
  cVar1 = *(char *)(in_ECX + 0x990);
  if ((cVar1 == '\x03') &&
     ((*(char *)(in_ECX + 0x991) == '\x06' || (*(char *)(in_ECX + 0x991) == '\a')))) {
    return '\x16';
  }
  cVar2 = *(char *)(in_ECX + 0xaa9);
  if (cVar2 == '\x03') {
    if (*(char *)(in_ECX + 0x68) == '\x13') {
      iVar4 = FUN_0043d1a0();
      if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
        return '\x12';
      }
    }
    return '\x13';
  }
  if ((cVar2 != '\x04') && (cVar3 != '\0')) {
    if (cVar2 == '\x05') {
      if (*(char *)(in_ECX + 0x68) == '\x0e') {
        iVar4 = FUN_0043d1a0();
        if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
          return '\r';
        }
      }
      return '\x0e';
    }
    if ((cVar3 == '\x03') && (cVar2 == '\b')) {
      return '\x1a';
    }
    cVar3 = FUN_00444230();
    if (cVar3 != '\0') {
      if (*(char *)(in_ECX + 0x68) == '9') {
        iVar4 = FUN_0043d1a0();
        if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
          return 'C';
        }
      }
      if (*(char *)(in_ECX + 0x68) == 'C') {
        iVar4 = FUN_0043d1a0();
        if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
          return ':';
        }
      }
      return '9';
    }
    if ((cVar1 == '\x03') && (*(char *)(in_ECX + 0x991) == '\r')) {
      if (*(char *)(in_ECX + 0x68) == '\n') {
        iVar4 = FUN_0043d1a0();
        if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
          return '\t';
        }
      }
      return '\n';
    }
    if ((*(byte *)(in_ECX + 0x7e) & 0x10) != 0) {
      return 'K';
    }
    if (*(char *)(in_ECX + 0x68) == '\x01') {
      iVar4 = FUN_0043d1a0();
      if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
        return '\x02';
      }
    }
    return '\x01';
  }
  if (*(char *)(in_ECX + 0x68) == '\x06') {
    iVar4 = FUN_0043d1a0();
    if (*(int *)(in_ECX + 0x6c) < iVar4 + 200) {
      return '\a';
    }
  }
  return '\x06';
}


/* FUN_004453b0 @ 004453b0  kind=gamemisc  attributed-by=caller-vote  size=92 */

void FUN_004453b0(void)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int in_ECX;
  
  puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x139c);
  while (puVar2 != *(undefined4 **)(in_ECX + 0x139c)) {
    if (*(char *)((int)puVar2 + 0xd) == '\0') {
      puVar3 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar3 + 0xd) == '\0') {
        cVar1 = *(char *)((int)*puVar3 + 0xd);
        puVar2 = puVar3;
        puVar3 = (undefined4 *)*puVar3;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar3 + 0xd);
          puVar2 = puVar3;
          puVar3 = (undefined4 *)*puVar3;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0xd);
        puVar4 = (undefined4 *)puVar2[1];
        puVar3 = puVar2;
        while ((puVar2 = puVar4, cVar1 == '\0' && (puVar3 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0xd);
          puVar4 = (undefined4 *)puVar2[1];
          puVar3 = puVar2;
        }
      }
    }
  }
  return;
}


/* FUN_004460a0 @ 004460a0  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_004460a0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00451c70(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0x5555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_004460f0 @ 004460f0  kind=gamemisc  attributed-by=caller-vote  size=88 */

void FUN_004460f0(undefined4 *param_1)

{
  int in_ECX;
  
  if (((*(ushort *)(in_ECX + 0x7e) & 0x200) != 0) && (*(char *)(in_ECX + 0x60) == '\x01')) {
    *param_1 = 0x3f4ccccd;
    param_1[1] = 0;
    param_1[2] = 0x3f000000;
    param_1[3] = 0x3f800000;
    return;
  }
  *param_1 = 0x3f800000;
  param_1[1] = 0x3f800000;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  return;
}


/* FUN_00446330 @ 00446330  kind=gamemisc  attributed-by=caller-vote  size=603 */

void FUN_00446330(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  undefined4 local_9;
  undefined1 local_5;
  
  FUN_004465c0();
  if (*(void **)(in_ECX + 0x13e4) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(in_ECX + 0x13e4));
  }
  *(undefined4 *)(in_ECX + 0x1d40) = 0;
  *(undefined4 *)(in_ECX + 0x1d3c) = 1;
  *(undefined4 *)(in_ECX + 0x11c0) = 0;
  *(undefined4 *)(in_ECX + 0x11c4) = 0;
  *(undefined4 *)(in_ECX + 0x11d0) = 0;
  *(undefined4 *)(in_ECX + 0x11d4) = 0;
  *(undefined4 *)(in_ECX + 0x11c8) = 0;
  *(undefined4 *)(in_ECX + 0x11cc) = 0;
  *(undefined4 *)(in_ECX + 0x1314) = 0;
  *(undefined4 *)(in_ECX + 0x1318) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x130c);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x130c) + 4) = *(int *)(in_ECX + 0x130c);
  *(undefined4 *)(in_ECX + 0x1310) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x130c)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  FUN_0067e480();
  FUN_0067e480();
  FUN_0067e480();
  *(undefined4 *)(in_ECX + 0x13cc) = 0;
  *(undefined4 *)(in_ECX + 0x13c8) = 0;
  *(undefined4 *)(in_ECX + 0x13d0) = 0;
  *(undefined4 *)(in_ECX + 0x13e0) = 0;
  *(undefined4 *)(in_ECX + 0x1184) = 0;
  *(undefined4 *)(in_ECX + 0x1190) = 0;
  *(undefined4 *)(in_ECX + 0x1194) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x1398) = 0;
  *(undefined4 *)(in_ECX + 0x118c) = 0;
  *(undefined4 *)(in_ECX + 0x1188) = 0;
  *(undefined4 *)(in_ECX + 0x13bc) = 0;
  *(undefined4 *)(in_ECX + 0x11d8) = 0;
  *(undefined4 *)(in_ECX + 0x13b4) = 0;
  *(undefined1 *)(in_ECX + 0x13c0) = 0;
  *(undefined4 *)(in_ECX + 0x1404) = 0;
  FUN_00639cf0(*(undefined4 *)(in_ECX + 0x11dc),*(undefined4 *)(in_ECX + 0x11e0),&local_5,local_9);
  *(undefined4 *)(in_ECX + 0x11e0) = *(undefined4 *)(in_ECX + 0x11dc);
  FUN_0042ef10();
  *(undefined4 *)(in_ECX + 0x1478) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x147c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1480) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x1470);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x1470) + 4) = *(int *)(in_ECX + 0x1470);
  *(undefined4 *)(in_ECX + 0x1474) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x1470)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  *(undefined4 *)(in_ECX + 0x1484) = 0;
  *(undefined4 *)(in_ECX + 0x1488) = 0;
  *(undefined4 *)(in_ECX + 0x141c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1420) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1424) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1458) = 0;
  *(undefined4 *)(in_ECX + 0x1490) = *(undefined4 *)(in_ECX + 0x148c);
  puVar1 = *(undefined4 **)(in_ECX + 0x1178);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x1178) + 4) = *(int *)(in_ECX + 0x1178);
  *(undefined4 *)(in_ECX + 0x117c) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x1178)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  return;
}


/* FUN_004465c0 @ 004465c0  kind=gamemisc  attributed-by=caller-vote  size=472 */

void FUN_004465c0(void)

{
  uint uVar1;
  undefined4 uVar2;
  int in_ECX;
  
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  *(undefined4 *)(in_ECX + 0x180) = 1;
  *(undefined4 *)(in_ECX + 0x184) = 0;
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined4 *)(in_ECX + 0x168) = 0x42c80000;
  *(undefined4 *)(in_ECX + 0x170) = 0x3f800000;
  *(undefined4 *)(in_ECX + 0x16c) = 0x3f800000;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0xfffff448;
  *(undefined4 *)(in_ECX + 0x120) = 0;
  *(undefined4 *)(in_ECX + 0x124) = 0;
  *(undefined4 *)(in_ECX + 0x128) = 0;
  *(undefined4 *)(in_ECX + 300) = 0;
  memset((void *)(in_ECX + 0x2f0),0,0xe38);
  *(undefined2 *)(in_ECX + 0x114) = 0;
  *(undefined2 *)(in_ECX + 0x17c) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 0x134) = 0;
  *(undefined4 *)(in_ECX + 0x160) = 0;
  *(undefined4 *)(in_ECX + 0x164) = 0;
  *(undefined4 *)(in_ECX + 0x188) = 0;
  *(undefined4 *)(in_ECX + 0x18c) = 0;
  *(undefined4 *)(in_ECX + 400) = 0;
  *(undefined4 *)(in_ECX + 0x194) = 0;
  *(undefined1 *)(in_ECX + 0x198) = 0;
  *(undefined4 *)(in_ECX + 0x138) = 0;
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  *(undefined4 *)(in_ECX + 0x144) = 0;
  *(undefined4 *)(in_ECX + 0x148) = 0;
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  *(undefined4 *)(in_ECX + 0x1a0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1a4) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1a8) = 0;
  *(undefined4 *)(in_ECX + 0x1cc) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1d0) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1d4) = 0;
  *(undefined1 *)(in_ECX + 0x1c8) = 0;
  *(undefined2 *)(in_ECX + 0x130) = 0;
  uVar2 = FUN_00428750();
  FUN_00459800(uVar2);
  *(undefined8 *)(in_ECX + 0x1158) = 0;
  *(undefined8 *)(in_ECX + 0x1160) = 0;
  memset((void *)(in_ECX + 0x1128),0,0x2c);
  *(undefined4 *)(in_ECX + 0x1154) = 0;
  __security_check_cookie(uVar1 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00446af0 @ 00446af0  kind=gamemisc  attributed-by=caller-vote  size=186 */

void FUN_00446af0(char *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int in_ECX;
  
  cVar1 = *param_1;
  if (((((cVar1 == '\x01') || (cVar1 == '\x02')) || (cVar1 == '\x03')) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))) ||
     ((cVar1 == '\t' || ((cVar1 == '\n' || (cVar1 == '\v')))))) {
    for (puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x1178);
        puVar2 != *(undefined4 **)(in_ECX + 0x1178); puVar2 = (undefined4 *)*puVar2) {
      if (*(char *)(puVar2 + 2) == cVar1) {
        *(undefined8 *)(puVar2 + 2) = *(undefined8 *)param_1;
        *(undefined8 *)(puVar2 + 4) = *(undefined8 *)(param_1 + 8);
        *(undefined8 *)(puVar2 + 6) = *(undefined8 *)(param_1 + 0x10);
        return;
      }
    }
  }
  iVar3 = *(int *)(in_ECX + 0x1178);
  iVar4 = FUN_00451d00(iVar3,*(undefined4 *)(iVar3 + 4),param_1);
  if (*(int *)(in_ECX + 0x117c) != 0x7fffffe) {
    *(int *)(in_ECX + 0x117c) = *(int *)(in_ECX + 0x117c) + 1;
    *(int *)(iVar3 + 4) = iVar4;
    **(int **)(iVar4 + 4) = iVar4;
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00447110 @ 00447110  kind=gamemisc  attributed-by=caller-vote  size=326 */

void FUN_00447110(void)

{
  undefined4 *puVar1;
  void *pvVar2;
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x13bc) = 0;
  *(undefined4 *)(in_ECX + 0x1314) = 0;
  *(undefined4 *)(in_ECX + 0x1318) = 0;
  FUN_00447270();
  *(undefined4 *)(in_ECX + 0x11d0) = 0;
  *(undefined4 *)(in_ECX + 0x11d4) = 0;
  *(undefined4 *)(in_ECX + 0x13e0) = 0;
  *(undefined4 *)(in_ECX + 0x1184) = 0;
  *(undefined4 *)(in_ECX + 0x1190) = 0;
  *(undefined4 *)(in_ECX + 0x1194) = 0x3f800000;
  FUN_0067e480();
  FUN_0067e480();
  FUN_0067e480();
  *(undefined4 *)(in_ECX + 0x1398) = 0;
  *(undefined4 *)(in_ECX + 0x11d8) = 0;
  *(undefined4 *)(in_ECX + 0x118c) = 0;
  *(undefined4 *)(in_ECX + 0x1188) = 0;
  *(undefined4 *)(in_ECX + 0x13b4) = 0;
  *(undefined1 *)(in_ECX + 0x13c0) = 0;
  *(undefined4 *)(in_ECX + 0x1404) = 0;
  FUN_0042ef10();
  *(undefined4 *)(in_ECX + 0x1478) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x147c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1480) = 0;
  puVar1 = *(undefined4 **)(in_ECX + 0x1470);
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)(in_ECX + 0x1470) + 4) = *(int *)(in_ECX + 0x1470);
  *(undefined4 *)(in_ECX + 0x1474) = 0;
  if (pvVar2 != *(void **)(in_ECX + 0x1470)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
  *(undefined4 *)(in_ECX + 0x141c) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1420) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1424) = 0xffffffff;
  *(undefined4 *)(in_ECX + 0x1458) = 0;
  return;
}


/* FUN_00447270 @ 00447270  kind=gamemisc  attributed-by=caller-vote  size=158 */

void FUN_00447270(void)

{
  int in_ECX;
  
  *(undefined4 *)(in_ECX + 0x24) = 0;
  *(undefined4 *)(in_ECX + 0x28) = 0;
  *(undefined4 *)(in_ECX + 0x2c) = 0;
  *(undefined4 *)(in_ECX + 0x30) = 0;
  *(undefined4 *)(in_ECX + 0x34) = 0;
  *(undefined4 *)(in_ECX + 0x38) = 0;
  *(undefined4 *)(in_ECX + 0x3c) = 0;
  *(undefined4 *)(in_ECX + 0x40) = 0;
  *(undefined4 *)(in_ECX + 0x44) = 0;
  *(undefined1 *)(in_ECX + 0x58) = 0;
  *(undefined4 *)(in_ECX + 0x5c) = 0;
  *(undefined4 *)(in_ECX + 0x11c) = 0xfffff448;
  *(undefined4 *)(in_ECX + 0x120) = 0;
  *(undefined2 *)(in_ECX + 0x114) = 0;
  *(undefined4 *)(in_ECX + 0x160) = 0;
  *(undefined4 *)(in_ECX + 0x60) = 0;
  *(undefined4 *)(in_ECX + 100) = 0;
  *(undefined4 *)(in_ECX + 300) = 0;
  *(undefined4 *)(in_ECX + 0x138) = 0;
  *(undefined4 *)(in_ECX + 0x13c) = 0;
  *(undefined4 *)(in_ECX + 0x140) = 0;
  *(undefined4 *)(in_ECX + 0x144) = 0;
  *(undefined4 *)(in_ECX + 0x148) = 0;
  *(undefined4 *)(in_ECX + 0x14c) = 0;
  return;
}


/* FUN_004476a0 @ 004476a0  kind=gamemisc  attributed-by=caller-vote  size=83 */

float10 FUN_004476a0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0.5;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) * 0.5 + 0.5);
}


/* FUN_00447b00 @ 00447b00  kind=gamemisc  attributed-by=caller-vote  size=288 */

void FUN_00447b00(void)

{
  int in_ECX;
  float10 fVar1;
  
  if ((0 < *(int *)(in_ECX + 400)) &&
     ((int)((1.0 - 1.0 / (((float)*(int *)(in_ECX + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 + 50.0) <=
      *(int *)(in_ECX + 0x194))) {
    do {
      *(int *)(in_ECX + 0x194) =
           *(int *)(in_ECX + 0x194) -
           (int)((1.0 - 1.0 / (((float)*(int *)(in_ECX + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 + 50.0)
      ;
      *(int *)(in_ECX + 400) = *(int *)(in_ECX + 400) + 1;
      fVar1 = (float10)FUN_00444db0();
      *(float *)(in_ECX + 0x16c) = (float)fVar1;
    } while ((int)((1.0 - 1.0 / (((float)*(int *)(in_ECX + 400) - 1.0) * 0.05 + 1.0)) * 1000.0 +
                  50.0) <= *(int *)(in_ECX + 0x194));
  }
  return;
}


/* FUN_00447d50 @ 00447d50  kind=gamemisc  attributed-by=caller-vote  size=50 */

void FUN_00447d50(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x15c))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x170))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 4));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1ac))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x10));
  return;
}


/* FUN_00447d90 @ 00447d90  kind=gamemisc  attributed-by=caller-vote  size=50 */

void FUN_00447d90(void)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x15c))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x20));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x170))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 4));
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1ac))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0xc));
  return;
}


/* FUN_00448070 @ 00448070  kind=gamemisc  attributed-by=caller-vote  size=27 */

void FUN_00448070(undefined4 param_1)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x34),param_1,1);
  return;
}


/* FUN_00448090 @ 00448090  kind=gamemisc  attributed-by=caller-vote  size=104 */

void FUN_00448090(float param_1)

{
  int in_ECX;
  float local_18 [4];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18[0] = (param_1 - 80.0) / -30.0;
  local_18[1] = 0.0;
  local_18[2] = 0.0;
  local_18[3] = 0.0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 100),local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00449040 @ 00449040  kind=gamemisc  attributed-by=caller-vote  size=71 */

void FUN_00449040(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int in_ECX;
  
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1b4))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x4c),param_1,1);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1b4))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x50),param_2,1);
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x1b4))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x54),param_3,1);
  return;
}


/* FUN_00449090 @ 00449090  kind=gamemisc  attributed-by=caller-vote  size=88 */

void FUN_00449090(undefined4 param_1)

{
  int in_ECX;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_18 = param_1;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(**(int **)(in_ECX + 0x1c) + 0x178))
            (*(int **)(in_ECX + 0x1c),*(undefined4 *)(in_ECX + 0x48),&local_18,1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00449420 @ 00449420  kind=gamemisc  attributed-by=caller-vote  size=128 */

void FUN_00449420(void)

{
  int in_ECX;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  FUN_005fc0d0();
  FUN_004040d0(&local_1c);
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_004494b0 @ 004494b0  kind=gamemisc  attributed-by=caller-vote  size=128 */

void FUN_004494b0(void)

{
  int in_ECX;
  void *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e1488;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *(undefined4 *)(in_ECX + 0xc) = 0;
  local_1c = (void *)0x0;
  local_18 = 0;
  local_14 = 0;
  local_8 = 0;
  FUN_00449540();
  FUN_004040d0(&local_1c);
  if (local_1c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1c);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00449540 @ 00449540  kind=gamemisc  attributed-by=caller-vote  size=347 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_00449540(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  int iStack_1f444;
  int iStack_1f440;
  undefined1 *puStack_1f438;
  int iStack_1f434;
  undefined4 uStack_1f424;
  undefined4 uStack_1f420;
  undefined4 uStack_1f41c;
  int *piStack_1f40c;
  undefined1 auStack_1f408 [128004];
  
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piStack_1f40c = param_2;
  if (*param_1 != param_1[1]) {
    uStack_1f424 = 0;
    uStack_1f420 = 0;
    uStack_1f41c = 0;
    iStack_1f440 = 0;
    iStack_1f444 = 0;
    iVar4 = inflateInit_(&iStack_1f444,"1.2.3",0x38);
    if (iVar4 == 0) {
      iStack_1f444 = *param_1;
      iStack_1f440 = param_1[1] - iStack_1f444;
      while( true ) {
        puStack_1f438 = auStack_1f408;
        iStack_1f434 = 0x1f400;
        iVar4 = inflate(&iStack_1f444,0);
        if ((-5 < iVar4) && ((iVar4 < -2 || (iVar4 == 2)))) break;
        iVar1 = piStack_1f40c[1];
        _Size = 0x1f400 - iStack_1f434;
        iVar2 = *piStack_1f40c;
        FUN_005870c0((iVar1 - iVar2) + _Size);
        memcpy((void *)(*piStack_1f40c + (iVar1 - iVar2)),auStack_1f408,_Size);
        if (iVar4 == 1) {
          inflateEnd(&iStack_1f444);
          __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
      inflateEnd(&iStack_1f444);
      __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004497a0 @ 004497a0  kind=gamemisc  attributed-by=caller-vote  size=9 */

bool FUN_004497a0(void)

{
  int in_ECX;
  
  return *(int *)(in_ECX + 4) != 0;
}


/* FUN_00449b70 @ 00449b70  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00449b70(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0044b770(param_1,param_2);
  if (iVar1 != -8) {
    FUN_0040ee70(param_3);
  }
  return iVar1;
}


/* FUN_00449c00 @ 00449c00  kind=gamemisc  attributed-by=caller-vote  size=174 */

int FUN_00449c00(int param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = (undefined4 *)(param_1 + 0x120);
    puVar1 = (undefined4 *)(param_3 + 0x128);
    param_1 = param_1 - param_3;
    do {
      FUN_0042c5e0(param_1 + -0x128 + (int)puVar1);
      puVar1[-4] = puVar2[-2];
      puVar1[-3] = puVar2[-1];
      puVar1[-2] = *puVar2;
      puVar1[-1] = puVar2[1];
      *puVar1 = puVar2[2];
      puVar1[1] = puVar2[3];
      puVar1[2] = puVar2[4];
      puVar1[3] = puVar2[5];
      *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(puVar2 + 6);
      puVar1[5] = puVar2[7];
      puVar1[6] = puVar2[8];
      puVar1[7] = puVar2[9];
      puVar1 = puVar1 + 0x52;
      param_3 = param_3 + 0x148;
      puVar2 = puVar2 + 0x52;
    } while (param_1 + -0x128 + (int)puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0044a690 @ 0044a690  kind=gamemisc  attributed-by=caller-vote  size=105 */

void FUN_0044a690(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined1 local_120 [280];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar1 = *param_1;
  FUN_0040ee70(param_1 + 1);
  *param_1 = *param_2;
  FUN_0042c5e0(param_2 + 1);
  *param_2 = uVar1;
  FUN_0042c5e0(local_120);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0044a7e0 @ 0044a7e0  kind=gamemisc  attributed-by=caller-vote  size=181 */

void FUN_0044a7e0(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2ccb;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  *in_ECX = 0;
  *(undefined1 *)(in_ECX + 1) = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  *(undefined2 *)(in_ECX + 4) = 0xffff;
  *(undefined1 *)((int)in_ECX + 0x12) = 0xff;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  uVar2 = FUN_0044b770(0,0);
  in_ECX[5] = uVar2;
  local_8 = 0;
  in_ECX[7] = 0;
  in_ECX[8] = 0;
  uVar2 = FUN_0044b740(uVar1);
  in_ECX[7] = uVar2;
  in_ECX[9] = 0;
  in_ECX[0xf] = 0xf;
  in_ECX[0xe] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  ExceptionList = local_10;
  return;
}


/* FUN_0044af00 @ 0044af00  kind=gamemisc  attributed-by=caller-vote  size=240 */

void FUN_0044af00(int param_1)

{
  FUN_0042c5e0(param_1);
  FUN_0042c5e0(param_1 + 0x118);
  FUN_0042c5e0(param_1 + 0x230);
  FUN_0042c5e0(param_1 + 0x348);
  FUN_0042c5e0(param_1 + 0x460);
  FUN_0042c5e0(param_1 + 0x578);
  FUN_0042c5e0(param_1 + 0x690);
  FUN_0042c5e0(param_1 + 0x7a8);
  FUN_0042c5e0(param_1 + 0x8c0);
  FUN_0042c5e0(param_1 + 0x9d8);
  FUN_0042c5e0(param_1 + 0xaf0);
  FUN_0042c5e0(param_1 + 0xc08);
  FUN_0042c5e0(param_1 + 0xd20);
  return;
}


/* FUN_0044aff0 @ 0044aff0  kind=gamemisc  attributed-by=caller-vote  size=66 */

void FUN_0044aff0(int param_1)

{
  int in_ECX;
  
  FUN_0044ad30(param_1);
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  FUN_0042c5e0(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 0x128) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(in_ECX + 300) = *(undefined4 *)(param_1 + 300);
  return;
}


/* FUN_0044b040 @ 0044b040  kind=gamemisc  attributed-by=caller-vote  size=876 */

void FUN_0044b040(undefined4 *param_1)

{
  undefined4 *in_ECX;
  undefined4 *puVar1;
  int iVar2;
  
  *in_ECX = *param_1;
  in_ECX[1] = param_1[1];
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
  in_ECX[0xf] = param_1[0xf];
  in_ECX[0x10] = param_1[0x10];
  in_ECX[0x11] = param_1[0x11];
  in_ECX[0x12] = param_1[0x12];
  in_ECX[0x13] = param_1[0x13];
  *(undefined1 *)(in_ECX + 0x14) = *(undefined1 *)(param_1 + 0x14);
  in_ECX[0x15] = param_1[0x15];
  *(undefined1 *)(in_ECX + 0x16) = *(undefined1 *)(param_1 + 0x16);
  in_ECX[0x17] = param_1[0x17];
  in_ECX[0x18] = param_1[0x18];
  in_ECX[0x19] = param_1[0x19];
  FUN_00459800(param_1 + 0x1a);
  *(undefined2 *)(in_ECX + 0x45) = *(undefined2 *)(param_1 + 0x45);
  in_ECX[0x46] = param_1[0x46];
  in_ECX[0x47] = param_1[0x47];
  in_ECX[0x48] = param_1[0x48];
  in_ECX[0x49] = param_1[0x49];
  in_ECX[0x4a] = param_1[0x4a];
  in_ECX[0x4b] = param_1[0x4b];
  *(undefined1 *)(in_ECX + 0x4c) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)((int)in_ECX + 0x131) = *(undefined1 *)((int)param_1 + 0x131);
  in_ECX[0x4d] = param_1[0x4d];
  in_ECX[0x4e] = param_1[0x4e];
  in_ECX[0x4f] = param_1[0x4f];
  in_ECX[0x50] = param_1[0x50];
  in_ECX[0x51] = param_1[0x51];
  in_ECX[0x52] = param_1[0x52];
  in_ECX[0x53] = param_1[0x53];
  in_ECX[0x54] = param_1[0x54];
  in_ECX[0x55] = param_1[0x55];
  in_ECX[0x56] = param_1[0x56];
  in_ECX[0x57] = param_1[0x57];
  in_ECX[0x58] = param_1[0x58];
  in_ECX[0x59] = param_1[0x59];
  *(undefined8 *)(in_ECX + 0x5a) = *(undefined8 *)(param_1 + 0x5a);
  *(undefined8 *)(in_ECX + 0x5c) = *(undefined8 *)(param_1 + 0x5c);
  in_ECX[0x5e] = param_1[0x5e];
  *(undefined1 *)(in_ECX + 0x5f) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((int)in_ECX + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
  in_ECX[0x60] = param_1[0x60];
  in_ECX[0x61] = param_1[0x61];
  in_ECX[0x62] = param_1[0x62];
  in_ECX[99] = param_1[99];
  in_ECX[100] = param_1[100];
  in_ECX[0x65] = param_1[0x65];
  *(undefined1 *)(in_ECX + 0x66) = *(undefined1 *)(param_1 + 0x66);
  in_ECX[0x67] = param_1[0x67];
  in_ECX[0x68] = param_1[0x68];
  in_ECX[0x69] = param_1[0x69];
  in_ECX[0x6a] = param_1[0x6a];
  in_ECX[0x6c] = param_1[0x6c];
  in_ECX[0x6d] = param_1[0x6d];
  in_ECX[0x6e] = param_1[0x6e];
  in_ECX[0x6f] = param_1[0x6f];
  in_ECX[0x70] = param_1[0x70];
  in_ECX[0x71] = param_1[0x71];
  *(undefined1 *)(in_ECX + 0x72) = *(undefined1 *)(param_1 + 0x72);
  in_ECX[0x73] = param_1[0x73];
  in_ECX[0x74] = param_1[0x74];
  in_ECX[0x75] = param_1[0x75];
  FUN_0042c5e0(param_1 + 0x76);
  FUN_0044af00(param_1 + 0xbc);
  puVar1 = in_ECX + 0x44a;
  iVar2 = 0xb;
  do {
    *puVar1 = *(undefined4 *)(((int)param_1 - (int)in_ECX) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  in_ECX[0x455] = param_1[0x455];
  puVar1 = in_ECX + 0x456;
  iVar2 = 0x10;
  do {
    *(undefined1 *)puVar1 = *(undefined1 *)((int)puVar1 + ((int)param_1 - (int)in_ECX));
    puVar1 = (undefined4 *)((int)puVar1 + 1);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return;
}


/* FUN_0044b3b0 @ 0044b3b0  kind=gamemisc  attributed-by=caller-vote  size=168 */

void FUN_0044b3b0(int param_1)

{
  int in_ECX;
  
  FUN_0042c5e0(param_1);
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


/* FUN_0044b740 @ 0044b740  kind=gamemisc  attributed-by=caller-vote  size=47 */

void FUN_0044b740(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x48);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0044b74e. Too many branches */
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


/* FUN_0044b770 @ 0044b770  kind=gamemisc  attributed-by=caller-vote  size=57 */

void FUN_0044b770(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x120);
  if (puVar1 != (void *)0x0) {
    if (param_1 == (void *)0x0) {
      param_1 = puVar1;
      param_2 = puVar1;
    }
    *puVar1 = param_1;
    if (puVar1 + 1 != (undefined4 *)0x0) {
      puVar1[1] = param_2;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0044b830 @ 0044b830  kind=gamemisc  attributed-by=caller-vote  size=73 */

uint FUN_0044b830(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0x148;
  if (0xc7ce0c - (uVar1 >> 1) < uVar1) {
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


/* FUN_0044bde0 @ 0044bde0  kind=gamemisc  attributed-by=caller-vote  size=52 */

void * FUN_0044bde0(uint param_1)

{
  void *pvVar1;
  
  if (param_1 == 0) {
    return (void *)0x0;
  }
  if ((param_1 < 0xc7ce0d) && (pvVar1 = operator_new(param_1 * 0x148), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0044be20 @ 0044be20  kind=gamemisc  attributed-by=caller-vote  size=6 */

void FUN_0044be20(void)

{
  undefined4 *in_ECX;
  
  in_ECX[1] = *in_ECX;
  return;
}


/* FUN_0044be40 @ 0044be40  kind=gamemisc  attributed-by=caller-vote  size=3318 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void FUN_0044be40(int param_1)

{
  void *pvVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined8 *puVar7;
  int ***pppiVar8;
  undefined4 *puVar9;
  int *in_ECX;
  int *piVar10;
  int iVar11;
  size_t sVar12;
  undefined1 local_1325;
  int *local_1324;
  int local_1320;
  int *local_131c;
  int ***local_1318;
  size_t local_1314;
  void *local_1a8;
  undefined4 local_1a4;
  undefined2 local_190 [2];
  undefined4 local_18c;
  undefined4 local_188;
  undefined2 local_184;
  undefined1 local_182;
  undefined2 local_180;
  undefined1 local_17c [256];
  undefined4 local_7c;
  undefined1 local_78 [4];
  void *local_74;
  uint local_60;
  undefined8 local_5c;
  undefined8 local_54;
  undefined8 local_4c;
  int ***local_44 [4];
  undefined4 local_34;
  uint local_30;
  undefined4 ***local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2e1f;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1320 = param_1;
  FUN_00446330(local_14);
  pvVar1 = *(void **)(param_1 + 0x1d28);
  if (pvVar1 != (void *)0x0) {
    FUN_0043c790();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  local_1318 = operator_new(0x40);
  local_8 = 0;
  if (local_1318 == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = FUN_0044a7e0();
  }
  *(undefined4 *)(param_1 + 0x1d28) = uVar5;
  uVar5 = FUN_0043bc00();
  FUN_0044af00(uVar5);
  iVar6 = FUN_0043c020();
  local_1324 = (int *)(param_1 + 0x11dc);
  local_8 = 1;
  FUN_0044ad30(iVar6);
  *(undefined4 *)(param_1 + 0x11e8) = *(undefined4 *)(iVar6 + 0xc);
  FUN_0042c5e0(iVar6 + 0x10);
  local_8 = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1304) = *(undefined4 *)(iVar6 + 0x128);
  *(undefined4 *)(param_1 + 0x1308) = *(undefined4 *)(iVar6 + 300);
  if (local_1a8 == (void *)0x0) {
    FUN_00487380(4);
    uVar5 = FUN_0043c100();
    FUN_0044b040(uVar5);
    *(undefined1 *)(param_1 + 0x60) = 0;
    piVar2 = (int *)*in_ECX;
    if (piVar2[1] - *piVar2 < piVar2[3] + 4) {
      piVar2[3] = piVar2[1] - *piVar2;
    }
    else {
      in_ECX[2] = *(int *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    if (piVar2[1] - *piVar2 < piVar2[3] + 0x18) {
      piVar2[3] = piVar2[1] - *piVar2;
    }
    else {
      iVar6 = *piVar2;
      iVar11 = piVar2[3];
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(iVar11 + iVar6);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(iVar11 + 8 + iVar6);
      *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(iVar11 + 0x10 + iVar6);
      piVar2[3] = piVar2[3] + 0x18;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = *piVar2;
    if (piVar2[1] - iVar6 < piVar2[3] + 0xc) {
      piVar2[3] = piVar2[1] - iVar6;
    }
    else {
      iVar11 = piVar2[3];
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(iVar11 + iVar6);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar11 + 8 + iVar6);
      piVar2[3] = piVar2[3] + 0xc;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x194) = *(undefined4 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 400) = *(undefined4 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 1) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined1 *)(param_1 + 0x140) = *(undefined1 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 1;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 1) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined1 *)(param_1 + 0x141) = *(undefined1 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 1;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x1198) = *(undefined4 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x119c) = *(undefined4 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x300),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x418),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x530),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x648),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x760),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x878),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x990),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0xaa8),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0xbc0),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0xcd8),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0xdf0),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0xf08),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 0x118) {
      piVar2[3] = iVar6;
    }
    else {
      memcpy((void *)(param_1 + 0x1020),(void *)(piVar2[3] + *piVar2),0x118);
      piVar2[3] = piVar2[3] + 0x118;
    }
    iVar6 = local_1320;
    piVar2 = (int *)*in_ECX;
    iVar11 = piVar2[1] - *piVar2;
    local_1314 = 0;
    if (iVar11 < piVar2[3] + 4) {
      piVar2[3] = iVar11;
    }
    else {
      local_1314 = *(size_t *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    if (piVar2[1] - *piVar2 < (int)(piVar2[3] + local_1314)) {
      piVar2[3] = piVar2[1] - *piVar2;
    }
    else {
      memcpy((void *)(local_1320 + 0x1168),(void *)(*piVar2 + piVar2[3]),local_1314);
      piVar2[3] = piVar2[3] + local_1314;
    }
    *(undefined1 *)(iVar6 + 0x1168 + local_1314) = 0;
    pvVar1 = *(void **)(iVar6 + 0x1d28);
    if (pvVar1 != (void *)0x0) {
      FUN_0043c790();
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar1);
    }
    local_1318 = operator_new(0x40);
    local_8 = 2;
    if ((int ****)local_1318 == (int ****)0x0) {
      puVar7 = (undefined8 *)0x0;
    }
    else {
      puVar7 = (undefined8 *)FUN_0044a7e0();
    }
    *(undefined8 **)(iVar6 + 0x1d28) = puVar7;
    piVar2 = (int *)*in_ECX;
    local_8 = 0xffffffff;
    if (piVar2[1] - *piVar2 < piVar2[3] + 0x14) {
      piVar2[3] = piVar2[1] - *piVar2;
    }
    else {
      iVar11 = *piVar2;
      iVar3 = piVar2[3];
      *puVar7 = *(undefined8 *)(iVar3 + iVar11);
      puVar7[1] = *(undefined8 *)(iVar3 + 8 + iVar11);
      *(undefined4 *)(puVar7 + 2) = *(undefined4 *)(iVar3 + 0x10 + iVar11);
      piVar2[3] = piVar2[3] + 0x14;
    }
    FUN_0043f7c0(iVar6 + 100,iVar6 + 0x78,*(undefined4 *)(iVar6 + 0x1d28));
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    local_1314 = 0;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      local_1314 = *(int *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    sVar12 = local_1314;
    FUN_00487380(local_1314);
    if (0 < (int)sVar12) {
      iVar6 = 0;
      do {
        piVar2 = (int *)*in_ECX;
        iVar11 = 0;
        local_131c = (int *)(piVar2[3] + 4);
        piVar10 = (int *)(piVar2[1] - *piVar2);
        if ((int)local_131c <= piVar2[1] - *piVar2) {
          iVar11 = *(int *)(*piVar2 + piVar2[3]);
          piVar10 = local_131c;
        }
        piVar2[3] = (int)piVar10;
        FUN_0044d660(iVar11);
        if (iVar11 != 0) {
          local_1318 = (int ***)*in_ECX;
          local_131c = *(int **)(iVar6 + *local_1324);
          if ((int)local_1318[1] - (int)*local_1318 < (int)(local_1318[3] + iVar11 * 0x47)) {
            local_1318[3] = (int **)((int)local_1318[1] - (int)*local_1318);
          }
          else {
            memcpy(local_131c,(void *)((int)*local_1318 + (int)local_1318[3]),iVar11 * 0x11c);
            local_1318[3] = local_1318[3] + iVar11 * 0x47;
          }
        }
        iVar6 = iVar6 + 0xc;
        local_1314 = local_1314 + -1;
      } while (local_1314 != 0);
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(local_1320 + 0x1304) = *(undefined4 *)(*piVar2 + piVar2[3]);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)(local_1320 + 0x1308) = *(undefined4 *)(*piVar2 + piVar2[3]);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    local_1324 = (int *)0x0;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      local_1324 = *(int **)(*piVar2 + piVar2[3]);
      piVar2[3] = piVar2[3] + 4;
    }
    local_1314 = 0;
    if (0 < (int)local_1324) {
      do {
        local_180 = 1;
        local_190[0] = 0;
        local_18c = 0;
        local_188 = 0;
        local_184 = 0;
        local_182 = 0;
        local_7c = 0;
        memset(local_17c,0,0x100);
        iVar11 = local_1320;
        piVar2 = (int *)*in_ECX;
        iVar6 = piVar2[3] + 0x118;
        local_1318 = (int ***)(piVar2[1] - *piVar2);
        if (iVar6 <= (int)local_1318) {
          local_1318 = (int ***)iVar6;
          memcpy(local_190,(void *)(*piVar2 + piVar2[3]),0x118);
        }
        piVar2[3] = (int)local_1318;
        iVar6 = *(int *)(iVar11 + 0x1d28);
        local_1318 = *(int ****)(iVar6 + 0x14);
        pppiVar8 = (int ***)FUN_00449b70(local_1318,local_1318[1],local_190);
        if (*(int *)(iVar6 + 0x18) == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        *(int *)(iVar6 + 0x18) = *(int *)(iVar6 + 0x18) + 1;
        local_1318[1] = (int **)pppiVar8;
        *pppiVar8[1] = (int *)pppiVar8;
        local_1314 = local_1314 + 1;
      } while ((int)local_1314 < (int)local_1324);
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[1] - *piVar2;
    local_1314 = 0;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      local_1314 = *(int *)(*piVar2 + piVar2[3]);
      piVar2[3] = piVar2[3] + 4;
    }
    iVar6 = local_1320;
    if (0 < (int)local_1314) {
      do {
        piVar2 = (int *)*in_ECX;
        iVar11 = piVar2[3];
        iVar6 = piVar2[1] - *piVar2;
        if (iVar11 + 4 <= iVar6) {
          local_1324 = *(int **)(*piVar2 + iVar11);
          iVar6 = iVar11 + 4;
        }
        piVar2[3] = iVar6;
        piVar2 = (int *)*in_ECX;
        sVar12 = 0;
        iVar11 = piVar2[3];
        iVar6 = piVar2[1] - *piVar2;
        if (iVar11 + 4 <= iVar6) {
          sVar12 = *(size_t *)(*piVar2 + iVar11);
          iVar6 = iVar11 + 4;
        }
        piVar2[3] = iVar6;
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = (int ***)((uint)local_44[0] & 0xffffff00);
        local_8 = 3;
        if (sVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
          local_44[0]._0_1_ = 0;
          local_34 = 0;
        }
        else {
          FUN_0040bff0(sVar12,0);
        }
        local_131c = (int *)*in_ECX;
        local_1318 = (int ***)local_44;
        if (0xf < local_30) {
          local_1318 = local_44[0];
        }
        iVar6 = local_131c[1] - *local_131c;
        if (iVar6 < (int)(local_131c[3] + sVar12)) {
          local_131c[3] = iVar6;
        }
        else {
          memcpy(local_1318,(void *)(local_131c[3] + *local_131c),sVar12);
          local_131c[3] = local_131c[3] + sVar12;
        }
        piVar2 = (int *)*in_ECX;
        iVar6 = piVar2[3];
        iVar11 = *piVar2;
        if (piVar2[1] - iVar11 < iVar6 + 0x18) {
          piVar2[3] = piVar2[1] - iVar11;
        }
        else {
          local_5c = *(undefined8 *)(iVar11 + iVar6);
          local_54 = *(undefined8 *)(iVar11 + 8 + iVar6);
          local_4c = *(undefined8 *)(iVar11 + 0x10 + iVar6);
          piVar2[3] = iVar6 + 0x18;
        }
        uVar5 = FUN_00457e20(local_78,&local_1324,local_44);
        iVar6 = local_1320;
        local_8 = CONCAT31(local_8._1_3_,4);
        puVar9 = (undefined4 *)FUN_0044b460(uVar5);
        *puVar9 = (undefined4)local_5c;
        puVar9[1] = local_5c._4_4_;
        puVar9[2] = (undefined4)local_54;
        puVar9[4] = (undefined4)local_4c;
        puVar9[3] = local_54._4_4_;
        puVar9[5] = local_4c._4_4_;
        if (0xf < local_60) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_74);
        }
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_44[0]);
        }
        local_1314 = local_1314 + -1;
      } while (local_1314 != 0);
    }
    piVar2 = (int *)*in_ECX;
    local_1318 = *(int ****)(iVar6 + 0x1d28);
    iVar6 = piVar2[1] - *piVar2;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
    }
    else {
      *(undefined4 *)((int)local_1318 + 0x24) = *(undefined4 *)(*piVar2 + piVar2[3]);
      piVar2[3] = piVar2[3] + 4;
    }
    local_18 = 0xf;
    local_1c = 0;
    uVar4 = (uint)local_2c[0] >> 8;
    local_2c[0] = (undefined4 ***)(uVar4 << 8);
    piVar2 = (int *)*in_ECX;
    sVar12 = 0;
    iVar6 = piVar2[1] - *piVar2;
    local_8 = 5;
    if (iVar6 < piVar2[3] + 4) {
      piVar2[3] = iVar6;
      local_1c = 0;
      local_2c[0] = (undefined4 ***)(uVar4 << 8);
    }
    else {
      sVar12 = *(size_t *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
      if (sVar12 == 0) {
                    /* WARNING: Ignoring partial resolution of indirect */
        local_2c[0]._0_1_ = 0;
        local_1c = 0;
      }
      else {
        FUN_0040bff0(sVar12,0);
      }
    }
    local_131c = (int *)*in_ECX;
    local_1318 = (int ***)local_2c;
    if (0xf < local_18) {
      local_1318 = local_2c[0];
    }
    iVar6 = local_131c[1] - *local_131c;
    if (iVar6 < (int)(local_131c[3] + sVar12)) {
      local_131c[3] = iVar6;
    }
    else {
      memcpy(local_1318,(void *)(local_131c[3] + *local_131c),sVar12);
      local_131c[3] = local_131c[3] + sVar12;
    }
    iVar6 = local_1320;
    if ((undefined4 ****)(*(int *)(local_1320 + 0x1d28) + 0x28) != local_2c) {
      FUN_0040c0a0(local_2c,0,0xffffffff);
    }
    piVar2 = (int *)*in_ECX;
    iVar11 = piVar2[1] - *piVar2;
    if (iVar11 < piVar2[3] + 4) {
      piVar2[3] = iVar11;
    }
    else {
      *(undefined4 *)(iVar6 + 0x1164) = *(undefined4 *)(piVar2[3] + *piVar2);
      piVar2[3] = piVar2[3] + 4;
    }
    piVar2 = (int *)*in_ECX;
    iVar6 = piVar2[3];
    iVar11 = piVar2[1] - *piVar2;
    if (iVar11 < iVar6 + 4) {
      piVar2[3] = iVar11;
    }
    else {
      iVar11 = *(int *)(iVar6 + *piVar2);
      piVar2[3] = iVar6 + 4;
      if (iVar11 == 0xb) {
        piVar2 = (int *)*in_ECX;
        iVar6 = piVar2[1] - *piVar2;
        if (iVar6 < piVar2[3] + 0x2c) {
          piVar2[3] = iVar6;
        }
        else {
          memcpy((void *)(local_1320 + 0x1138),(void *)(piVar2[3] + *piVar2),0x2c);
          piVar2[3] = piVar2[3] + 0x2c;
        }
      }
    }
    if (local_18 < 0x10) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  FUN_00639cf0(local_1a8,local_1a4,&local_1325,local_1318);
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1a8);
}


/* FUN_0044d460 @ 0044d460  kind=gamemisc  attributed-by=caller-vote  size=67 */

void FUN_0044d460(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int *in_ECX;
  
  iVar1 = *in_ECX;
  iVar2 = FUN_00449b70(iVar1,*(undefined4 *)(iVar1 + 4),param_1);
  if (in_ECX[1] == 0xe38e37) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  in_ECX[1] = in_ECX[1] + 1;
  *(int *)(iVar1 + 4) = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}


/* FUN_0044d620 @ 0044d620  kind=gamemisc  attributed-by=caller-vote  size=64 */

void FUN_0044d620(void *param_1,size_t param_2)

{
  int *in_ECX;
  int iVar1;
  
  iVar1 = in_ECX[1] - *in_ECX;
  if (iVar1 < (int)(in_ECX[3] + param_2)) {
    in_ECX[3] = iVar1;
    return;
  }
  memcpy(param_1,(void *)(*in_ECX + in_ECX[3]),param_2);
  in_ECX[3] = in_ECX[3] + param_2;
  return;
}


/* FUN_0044d790 @ 0044d790  kind=gamemisc  attributed-by=caller-vote  size=2431 */

void FUN_0044d790(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  void *_Src;
  undefined4 uVar4;
  int *piVar5;
  undefined8 *puVar6;
  int *piVar7;
  int *in_ECX;
  char *pcVar8;
  size_t sVar9;
  undefined8 *puVar10;
  int *piVar11;
  undefined4 *****pppppuVar12;
  int local_54;
  int local_50;
  undefined4 ****local_44 [4];
  size_t local_34;
  uint local_30;
  undefined4 ****local_2c [4];
  size_t local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2ec0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(int *)(*piVar11 + piVar11[3]) = in_ECX[1];
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x18);
  puVar6 = (undefined8 *)(*piVar11 + piVar11[3]);
  *puVar6 = *(undefined8 *)(param_1 + 0x10);
  puVar6[1] = *(undefined8 *)(param_1 + 0x18);
  puVar6[2] = *(undefined8 *)(param_1 + 0x20);
  piVar11[3] = piVar11[3] + 0x18;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0xc);
  iVar2 = piVar11[3];
  iVar3 = *piVar11;
  *(undefined8 *)(iVar2 + iVar3) = *(undefined8 *)(param_1 + 0x28);
  *(undefined4 *)((undefined8 *)(iVar2 + iVar3) + 1) = *(undefined4 *)(param_1 + 0x30);
  piVar11[3] = piVar11[3] + 0xc;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(piVar11[3] + *piVar11) = *(undefined4 *)(param_1 + 0x16c);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 0x194);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 400);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 1);
  *(undefined1 *)(*piVar11 + piVar11[3]) = *(undefined1 *)(param_1 + 0x140);
  piVar11[3] = piVar11[3] + 1;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 1);
  *(undefined1 *)(piVar11[3] + *piVar11) = *(undefined1 *)(param_1 + 0x141);
  piVar11[3] = piVar11[3] + 1;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 0x1198);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 0x119c);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0x300),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0x418),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0x530),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0x648),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0x760),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0x878),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0x990),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0xaa8),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0xbc0),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0xcd8),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0xdf0),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0xf08),0x118);
  piVar11[3] = piVar11[3] + 0x118;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x118);
  memcpy((void *)(*piVar11 + piVar11[3]),(void *)(param_1 + 0x1020),0x118);
  pcVar8 = (char *)(param_1 + 0x1168);
  piVar11[3] = piVar11[3] + 0x118;
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  piVar11 = (int *)*in_ECX;
  sVar9 = (int)pcVar8 - (param_1 + 0x1169);
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(size_t *)(piVar11[3] + *piVar11) = sVar9;
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + sVar9);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0x1168),sVar9);
  piVar11[3] = piVar11[3] + sVar9;
  puVar6 = *(undefined8 **)(param_1 + 0x1d28);
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x14);
  puVar10 = (undefined8 *)(piVar11[3] + *piVar11);
  *puVar10 = *puVar6;
  puVar10[1] = puVar6[1];
  *(undefined4 *)(puVar10 + 2) = *(undefined4 *)(puVar6 + 2);
  piVar11[3] = piVar11[3] + 0x14;
  piVar11 = (int *)*in_ECX;
  local_54 = (*(int *)(param_1 + 0x11e0) - *(int *)(param_1 + 0x11dc)) / 0xc;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(int *)(*piVar11 + piVar11[3]) = local_54;
  piVar11[3] = piVar11[3] + 4;
  if (0 < local_54) {
    local_50 = 0;
    do {
      piVar11 = (int *)*in_ECX;
      piVar7 = (int *)(*(int *)(param_1 + 0x11dc) + local_50);
      iVar2 = (piVar7[1] - *piVar7) / 0x11c;
      FUN_005870c0((piVar11[1] - *piVar11) + 4);
      *(int *)(*piVar11 + piVar11[3]) = iVar2;
      piVar11[3] = piVar11[3] + 4;
      if (iVar2 != 0) {
        sVar9 = iVar2 * 0x11c;
        piVar11 = (int *)*in_ECX;
        _Src = *(void **)(local_50 + *(int *)(param_1 + 0x11dc));
        FUN_005870c0((piVar11[1] - *piVar11) + sVar9);
        memcpy((void *)(*piVar11 + piVar11[3]),_Src,sVar9);
        piVar11[3] = piVar11[3] + sVar9;
      }
      local_50 = local_50 + 0xc;
      local_54 = local_54 + -1;
    } while (local_54 != 0);
  }
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 0x1304);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 0x1308);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1d28) + 0x18);
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = uVar4;
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)**(int **)(*(int *)(param_1 + 0x1d28) + 0x14);
  if (piVar11 != *(int **)(*(int *)(param_1 + 0x1d28) + 0x14)) {
    do {
      piVar7 = (int *)*in_ECX;
      FUN_005870c0((piVar7[1] - *piVar7) + 0x118);
      memcpy((void *)(*piVar7 + piVar7[3]),piVar11 + 2,0x118);
      piVar7[3] = piVar7[3] + 0x118;
      piVar11 = (int *)*piVar11;
    } while (piVar11 != (int *)*(int *)(*(int *)(param_1 + 0x1d28) + 0x14));
  }
  piVar11 = (int *)*in_ECX;
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1d28) + 0x20);
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = uVar4;
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)**(int **)(*(int *)(param_1 + 0x1d28) + 0x1c);
  if (piVar11 != *(int **)(*(int *)(param_1 + 0x1d28) + 0x1c)) {
    do {
      iVar2 = piVar11[4];
      local_18 = 0xf;
      local_1c = 0;
      local_2c[0] = (undefined4 ****)((uint)local_2c[0] & 0xffffff00);
      FUN_0040c0a0(piVar11 + 5,0,0xffffffff);
      local_8 = 0;
      piVar7 = (int *)*in_ECX;
      FUN_005870c0((piVar7[1] - *piVar7) + 4);
      sVar9 = local_1c;
      *(int *)(*piVar7 + piVar7[3]) = iVar2;
      piVar7[3] = piVar7[3] + 4;
      piVar7 = (int *)*in_ECX;
      FUN_005870c0((piVar7[1] - *piVar7) + 4);
      *(size_t *)(piVar7[3] + *piVar7) = sVar9;
      piVar7[3] = piVar7[3] + 4;
      piVar7 = (int *)*in_ECX;
      pppppuVar12 = local_2c;
      if (0xf < local_18) {
        pppppuVar12 = (undefined4 *****)local_2c[0];
      }
      FUN_005870c0((piVar7[1] - *piVar7) + sVar9);
      memcpy((void *)(*piVar7 + piVar7[3]),pppppuVar12,sVar9);
      piVar7[3] = piVar7[3] + sVar9;
      piVar7 = (int *)*in_ECX;
      FUN_005870c0((piVar7[1] - *piVar7) + 0x18);
      puVar6 = (undefined8 *)(*piVar7 + piVar7[3]);
      local_8 = 0xffffffff;
      *puVar6 = *(undefined8 *)(piVar11 + 0xc);
      puVar6[1] = *(undefined8 *)(piVar11 + 0xe);
      puVar6[2] = *(undefined8 *)(piVar11 + 0x10);
      piVar7[3] = piVar7[3] + 0x18;
      if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_2c[0]);
      }
      if (*(char *)((int)piVar11 + 0xd) == '\0') {
        piVar7 = (int *)piVar11[2];
        if (*(char *)((int)piVar7 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar7 + 0xd);
          piVar11 = piVar7;
          piVar7 = (int *)*piVar7;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar7 + 0xd);
            piVar11 = piVar7;
            piVar7 = (int *)*piVar7;
          }
        }
        else {
          cVar1 = *(char *)(piVar11[1] + 0xd);
          piVar5 = (int *)piVar11[1];
          piVar7 = piVar11;
          while ((piVar11 = piVar5, cVar1 == '\0' && (piVar7 == (int *)piVar11[2]))) {
            cVar1 = *(char *)(piVar11[1] + 0xd);
            piVar5 = (int *)piVar11[1];
            piVar7 = piVar11;
          }
        }
      }
    } while (piVar11 != *(int **)(*(int *)(param_1 + 0x1d28) + 0x1c));
  }
  uVar4 = *(undefined4 *)(*(int *)(param_1 + 0x1d28) + 0x24);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 ****)((uint)local_44[0] & 0xffffff00);
  FUN_0040c0a0(*(int *)(param_1 + 0x1d28) + 0x28,0,0xffffffff);
  piVar11 = (int *)*in_ECX;
  local_8 = 1;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  sVar9 = local_34;
  *(undefined4 *)(piVar11[3] + *piVar11) = uVar4;
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(size_t *)(*piVar11 + piVar11[3]) = sVar9;
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  pppppuVar12 = local_44;
  if (0xf < local_30) {
    pppppuVar12 = (undefined4 *****)local_44[0];
  }
  FUN_005870c0((piVar11[1] - *piVar11) + sVar9);
  memcpy((void *)(piVar11[3] + *piVar11),pppppuVar12,sVar9);
  piVar11[3] = piVar11[3] + sVar9;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = *(undefined4 *)(param_1 + 0x1164);
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 4);
  *(undefined4 *)(*piVar11 + piVar11[3]) = 0xb;
  piVar11[3] = piVar11[3] + 4;
  piVar11 = (int *)*in_ECX;
  FUN_005870c0((piVar11[1] - *piVar11) + 0x2c);
  memcpy((void *)(piVar11[3] + *piVar11),(void *)(param_1 + 0x1138),0x2c);
  piVar11[3] = piVar11[3] + 0x2c;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0044e910 @ 0044e910  kind=gamemisc  attributed-by=caller-vote  size=284 */

void FUN_0044e910(int param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  Widget *in_ECX;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2f00;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8 = 0;
                    /* inlined constructor: cube::EnchantWidget::EnchantWidget */
  plasma::Widget::Widget(in_ECX,param_1,param_2,local_2c);
  local_8 = CONCAT31(local_8._1_3_,2);
  if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  in_ECX->vftablePtr =
       (Widget_vftable_for_NamedObject *)&cube::EnchantWidget::vftable_for_NamedObject;
  in_ECX->vftablePtr = (Widget_vftable_for_Deformer *)&cube::EnchantWidget::vftable_for_Deformer;
  in_ECX[1].vftablePtr = (Widget_vftable_for_NamedObject *)0xffffffff;
  in_ECX[1].Object_data.offset_0x0 = -1;
  local_18 = 7;
  local_1c = 0;
  in_ECX[1].Object_data.offset_0x4 = (int *)0x1;
  *(undefined4 *)&in_ECX[1].offset_0x0 = param_3;
  *(int *)&in_ECX[1].field_0x10 = param_4;
  if (param_4 != 0) {
    iVar2 = FUN_00636040(param_2);
    *(int *)&in_ECX[1].field_0x10 = iVar2;
    uVar3 = (**(code **)(**(int **)(iVar2 + 0x38) + 8))(uVar1);
    FUN_00636b70(uVar3);
    uVar3 = (**(code **)(**(int **)(*(int *)&in_ECX[1].field_0x10 + 0x3c) + 8))();
    FUN_006368e0(uVar3);
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00450920 @ 00450920  kind=gamemisc  attributed-by=caller-vote  size=52 */

int FUN_00450920(void)

{
  int iVar1;
  
  iVar1 = FUN_00450960();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = FUN_004c76e0();
  if (iVar1 / 2 < 1) {
    return 1;
  }
  iVar1 = FUN_004c76e0();
  return iVar1 / 2;
}


/* FUN_00450a00 @ 00450a00  kind=gamemisc  attributed-by=caller-vote  size=170 */

void FUN_00450a00(void)

{
  float10 fVar1;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  FUN_006294d0(&local_10);
  fVar1 = (float10)FUN_00627ce0();
  if ((float)fVar1 - 30.0 < local_c) {
    fVar1 = (float10)FUN_00627ce0();
    if (local_c < (float)fVar1) {
      fVar1 = (float10)FUN_00627d50();
      if ((float)fVar1 * 0.5 < local_10) {
        fVar1 = (float10)FUN_00627d50();
        if (local_10 < (float)fVar1) {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00450b70 @ 00450b70  kind=gamemisc  attributed-by=caller-vote  size=32 */

undefined4 FUN_00450b70(void)

{
  int iVar1;
  char *pcVar2;
  
  iVar1 = FUN_00450960();
  if (iVar1 != 0) {
    pcVar2 = (char *)FUN_00450960();
    if (*pcVar2 == '\x0e') {
      return 1;
    }
  }
  return 0;
}


/* FUN_00450dc0 @ 00450dc0  kind=gamemisc  attributed-by=caller-vote  size=61 */

void FUN_00450dc0(void)

{
  int *piVar1;
  int *in_ECX;
  
  piVar1 = (int *)in_ECX[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != in_ECX);
    in_ECX[4] = 0;
  }
  piVar1 = (int *)in_ECX[4];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x10))(piVar1 != in_ECX);
    in_ECX[4] = 0;
  }
  return;
}


/* FUN_00450e70 @ 00450e70  kind=gamemisc  attributed-by=caller-vote  size=139 */

void FUN_00450e70(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  void *_ArgList;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3123;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  _ArgList = operator_new(0x18);
  local_8 = 0;
  if (_ArgList == (void *)0x0) {
    _ArgList = (void *)0x0;
  }
  else {
    local_8 = 1;
    puVar1 = (undefined4 *)param_1[4];
    if (puVar1 == (undefined4 *)0x0) {
      *(undefined4 *)((int)_ArgList + 0x10) = 0;
    }
    else if (puVar1 == param_1) {
      uVar3 = (**(code **)*puVar1)(_ArgList);
      *(undefined4 *)((int)_ArgList + 0x10) = uVar3;
    }
    else {
      uVar3 = (**(code **)*puVar1)(0,uVar2);
      *(undefined4 *)((int)_ArgList + 0x10) = uVar3;
    }
  }
  _beginthread(FUN_00450e00,0,_ArgList);
  ExceptionList = local_10;
  return;
}


/* FUN_00450f40 @ 00450f40  kind=gamemisc  attributed-by=caller-vote  size=23 */

void FUN_00450f40(byte *param_1)

{
  uint *in_ECX;
  
  *in_ECX = (uint)*param_1;
  in_ECX[1] = *(uint *)(param_1 + 4);
  return;
}


/* FUN_00450f60 @ 00450f60  kind=gamemisc  attributed-by=caller-vote  size=79 */

void FUN_00450f60(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  uVar1 = __alldiv(*param_1,param_1[1],0x10000,0);
  *in_ECX = uVar1;
  uVar1 = __alldiv(param_1[2],param_1[3],0x10000,0);
  in_ECX[1] = uVar1;
  uVar1 = __alldiv(param_1[4],param_1[5],0x10000,0);
  in_ECX[2] = uVar1;
  return;
}


/* FUN_00451210 @ 00451210  kind=gamemisc  attributed-by=caller-vote  size=336 */

basic_istream<wchar_t,std::char_traits<wchar_t>_> *
FUN_00451210(basic_istream<wchar_t,std::char_traits<wchar_t>_> *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  wchar_t wVar6;
  undefined4 uVar7;
  ctype<wchar_t> *this;
  undefined4 *puVar8;
  basic_istream<wchar_t,std::char_traits<wchar_t>_> *pbVar9;
  int iVar10;
  int *local_20;
  uint local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3188;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar10 = 0;
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  bVar4 = false;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))();
  }
  local_8 = 0;
  bVar5 = std::basic_istream<wchar_t,std::char_traits<wchar_t>_>::_Ipfx(param_1,false);
  local_8 = 1;
  if (bVar5) {
    uVar7 = std::ios_base::getloc
                      ((ios_base *)
                       ((int)&param_1->vbtablePtr +
                       param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset));
    local_8._0_1_ = 2;
    this = (ctype<wchar_t> *)FUN_0040e940(uVar7);
    local_8._0_1_ = 1;
    if ((local_20 != (int *)0x0) &&
       (puVar8 = (undefined4 *)(**(code **)(*local_20 + 8))(), puVar8 != (undefined4 *)0x0)) {
      (**(code **)*puVar8)(1);
    }
    param_2[4] = 0;
    if (7 < (uint)param_2[5]) {
      param_2 = (undefined4 *)*param_2;
    }
    *(undefined2 *)param_2 = 0;
    local_8 = CONCAT31(local_8._1_3_,3);
    iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
    iVar3 = *(int *)((int)&param_1[9].vbtablePtr + iVar2);
    local_1c = *(uint *)((int)&param_1[8].vbtablePtr + iVar2);
    if ((iVar3 < 0) || (((iVar3 < 1 && (local_1c == 0)) || (0x7ffffffd < local_1c)))) {
      local_1c = 0x7ffffffe;
    }
    wVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::sgetc
                      (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                        ((int)&param_1[0xe].vbtablePtr + iVar2));
    while (local_1c != 0) {
      if (wVar6 == L'\xffff') {
        pbVar9 = (basic_istream<wchar_t,std::char_traits<wchar_t>_> *)FUN_00451380();
        return pbVar9;
      }
      bVar5 = std::ctype<wchar_t>::is(this,0x48,wVar6);
      if (bVar5) break;
      FUN_00425390(1,wVar6);
      local_1c = local_1c - 1;
      bVar4 = true;
      wVar6 = std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::snextc
                        (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)
                          ((int)&param_1[0xe].vbtablePtr +
                          param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset)
                        );
    }
  }
  local_8 = 1;
  iVar2 = param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset;
  *(undefined4 *)((int)&param_1[8].vbtablePtr + iVar2) = 0;
  *(undefined4 *)((int)&param_1[9].vbtablePtr + iVar2) = 0;
  if (!bVar4) {
    iVar10 = 2;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             ((int)&param_1->vbtablePtr +
             param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset),iVar10,false
            );
  local_8 = 0xffffffff;
  piVar1 = *(int **)((int)&param_1[0xe].vbtablePtr +
                    param_1->vbtablePtr->basic_ios<wchar_t,std::char_traits<wchar_t>_>_offset);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
  }
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00451380 @ 00451380  kind=gamemisc  attributed-by=caller-vote  size=101 */

void FUN_00451380(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  cVar1 = *(char *)(unaff_EBP + -0x11);
  iVar3 = *(int *)(*unaff_ESI + 4);
  *(undefined4 *)(iVar3 + 0x20 + (int)unaff_ESI) = 0;
  *(undefined4 *)(iVar3 + 0x24 + (int)unaff_ESI) = 0;
  if (cVar1 == '\0') {
    unaff_EBX = unaff_EBX | 2;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),unaff_EBX,false);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 0x38 + (int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004513f0 @ 004513f0  kind=gamemisc  attributed-by=caller-vote  size=44 */

int * FUN_004513f0(int *param_1,undefined4 *param_2)

{
  int iVar1;
  
  if (param_1 == (int *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*param_1 + 4) + (int)param_1;
  }
  (*(code *)*param_2)(iVar1,param_2[2],param_2[3]);
  return param_1;
}


/* FUN_00451420 @ 00451420  kind=gamemisc  attributed-by=caller-vote  size=24 */

void FUN_00451420(int *param_1,undefined2 *param_2)

{
  *(undefined2 *)(*(int *)(*param_1 + 4) + 0x40 + (int)param_1) = *param_2;
  return;
}


/* FUN_00451440 @ 00451440  kind=gamemisc  attributed-by=caller-vote  size=39 */

bool FUN_00451440(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 4;
  if (0xf < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar2 = FUN_0040c520(0,*(undefined4 *)(param_1 + 0x10),param_2,*puVar1);
  return iVar2 == 0;
}


/* FUN_004514e0 @ 004514e0  kind=gamemisc  attributed-by=caller-vote  size=40 */

bool FUN_004514e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2 + 4;
  if (7 < (uint)param_2[5]) {
    param_2 = (undefined4 *)*param_2;
  }
  iVar2 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),param_2,*puVar1);
  return iVar2 != 0;
}


/* FUN_004517d0 @ 004517d0  kind=gamemisc  attributed-by=caller-vote  size=42 */

undefined4 FUN_004517d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_0046f170(param_3,0,0xffffffff);
  FUN_0040eaf0(uVar1);
  return param_1;
}


/* FUN_00451800 @ 00451800  kind=gamemisc  attributed-by=caller-vote  size=74 */

undefined4 FUN_00451800(undefined4 param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  undefined4 uVar4;
  
  if (*param_3 == 0) {
    iVar2 = 0;
  }
  else {
    psVar3 = param_3;
    do {
      sVar1 = *psVar3;
      psVar3 = psVar3 + 1;
    } while (sVar1 != 0);
    iVar2 = (int)psVar3 - (int)(param_3 + 1) >> 1;
  }
  uVar4 = FUN_0046f270(param_3,iVar2);
  FUN_0040eaf0(uVar4);
  return param_1;
}


/* FUN_00451b10 @ 00451b10  kind=gamemisc  attributed-by=caller-vote  size=211 */

void FUN_00451b10(int param_1,int param_2,int param_3,undefined8 *param_4)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  int iVar4;
  
  iVar1 = param_2;
  while( true ) {
    iVar4 = iVar1 * 2 + 2;
    if (param_3 <= iVar4) break;
    fVar3 = *(float *)(param_1 + -8 + iVar4 * 0xc);
    pfVar2 = (float *)(param_1 + 4 + iVar4 * 0xc);
    if (*pfVar2 <= fVar3 && fVar3 != *pfVar2) {
      iVar4 = iVar1 * 2 + 1;
    }
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar1 = iVar4;
  }
  if (iVar4 == param_3) {
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + -0xc + param_3 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + -4 + param_3 * 0xc);
    iVar1 = param_3 + -1;
  }
  while ((param_2 < iVar1 &&
         (iVar4 = (iVar1 + -1) / 2, pfVar2 = (float *)(param_1 + 4 + iVar4 * 0xc),
         *pfVar2 <= *(float *)((int)param_4 + 4) && *(float *)((int)param_4 + 4) != *pfVar2))) {
    *(undefined8 *)(param_1 + iVar1 * 0xc) = *(undefined8 *)(param_1 + iVar4 * 0xc);
    *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_1 + 8 + iVar4 * 0xc);
    iVar1 = iVar4;
  }
  *(undefined8 *)(param_1 + iVar1 * 0xc) = *param_4;
  *(undefined4 *)(param_1 + 8 + iVar1 * 0xc) = *(undefined4 *)(param_4 + 1);
  return;
}


/* FUN_00451bf0 @ 00451bf0  kind=gamemisc  attributed-by=caller-vote  size=103 */

int FUN_00451bf0(undefined4 param_1)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e31f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0044b7b0();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  local_8 = 0;
  FUN_00457800(iVar1 + 0x10,param_1);
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00451c70 @ 00451c70  kind=gamemisc  attributed-by=caller-vote  size=76 */

void FUN_00451c70(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d850(param_1,param_2);
  if ((undefined8 *)(iVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(iVar1 + 8) = *param_3;
    *(undefined8 *)(iVar1 + 0x10) = param_3[1];
    *(undefined8 *)(iVar1 + 0x18) = param_3[2];
    *(undefined8 *)(iVar1 + 0x20) = param_3[3];
    *(undefined8 *)(iVar1 + 0x28) = param_3[4];
  }
  return;
}


/* FUN_00451cc0 @ 00451cc0  kind=gamemisc  attributed-by=caller-vote  size=57 */

int FUN_00451cc0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d6d0(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_0040ee70(param_3 + 2);
  }
  return iVar1;
}


/* FUN_00451d00 @ 00451d00  kind=gamemisc  attributed-by=caller-vote  size=56 */

void FUN_00451d00(undefined4 param_1,undefined4 param_2,undefined8 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00439600(param_1,param_2);
  if ((undefined8 *)(iVar1 + 8) != (undefined8 *)0x0) {
    *(undefined8 *)(iVar1 + 8) = *param_3;
    *(undefined8 *)(iVar1 + 0x10) = param_3[1];
    *(undefined8 *)(iVar1 + 0x18) = param_3[2];
  }
  return;
}


/* FUN_00451d40 @ 00451d40  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00451d40(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d750(param_1,param_2);
  if (iVar1 != -8) {
    FUN_00465c00(param_3);
  }
  return iVar1;
}


/* FUN_00451da0 @ 00451da0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00451da0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d5d0(param_1,param_2);
  if (iVar1 != -8) {
    FUN_004595b0(param_3);
  }
  return iVar1;
}


/* FUN_00451dd0 @ 00451dd0  kind=gamemisc  attributed-by=caller-vote  size=153 */

int FUN_00451dd0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3221;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d610(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_0040f680(param_3 + 2,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00451ee0 @ 00451ee0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00451ee0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d810(param_1,param_2);
  if (iVar1 != -8) {
    FUN_004599a0(param_3);
  }
  return iVar1;
}


/* FUN_00451f10 @ 00451f10  kind=gamemisc  attributed-by=caller-vote  size=50 */

int FUN_00451f10(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d690(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    FUN_0040ee70(param_3 + 1);
  }
  return iVar1;
}


/* FUN_00451f50 @ 00451f50  kind=gamemisc  attributed-by=caller-vote  size=130 */

int FUN_00451f50(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3251;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d590(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    FUN_004591b0(param_3 + 2);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00451ff0 @ 00451ff0  kind=gamemisc  attributed-by=caller-vote  size=106 */

int FUN_00451ff0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d710(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    *(undefined4 *)(iVar1 + 0x14) = param_3[3];
    *(undefined4 *)(iVar1 + 0x18) = param_3[4];
    *(undefined4 *)(iVar1 + 0x1c) = param_3[5];
    *(undefined4 *)(iVar1 + 0x20) = param_3[6];
    *(undefined4 *)(iVar1 + 0x24) = param_3[7];
    *(undefined4 *)(iVar1 + 0x28) = param_3[8];
    *(undefined4 *)(iVar1 + 0x2c) = param_3[9];
    *(undefined4 *)(iVar1 + 0x30) = param_3[10];
    *(undefined4 *)(iVar1 + 0x34) = param_3[0xb];
  }
  return iVar1;
}


/* FUN_00452060 @ 00452060  kind=gamemisc  attributed-by=caller-vote  size=64 */

int FUN_00452060(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d790(param_1,param_2);
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x10) = param_3[2];
    FUN_00468670(param_3 + 4);
  }
  return iVar1;
}


/* FUN_004520a0 @ 004520a0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_004520a0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d7d0(param_1,param_2);
  if (iVar1 != -8) {
    FUN_00465ce0(param_3);
  }
  return iVar1;
}


/* FUN_004520d0 @ 004520d0  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_004520d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d810(param_1,param_2);
  if (iVar1 != -8) {
    FUN_00465e60(param_3);
  }
  return iVar1;
}


/* FUN_00452100 @ 00452100  kind=gamemisc  attributed-by=caller-vote  size=113 */

int FUN_00452100(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3281;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_0046d890(param_1,param_2);
  local_8 = 1;
  if (iVar1 != -8) {
    FUN_00466410(param_3);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00452190 @ 00452190  kind=gamemisc  attributed-by=caller-vote  size=39 */

int FUN_00452190(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_0046d8d0(param_1,param_2);
  if (iVar1 != -8) {
    FUN_0044a8c0(param_3);
  }
  return iVar1;
}


/* FUN_004523f0 @ 004523f0  kind=gamemisc  attributed-by=caller-vote  size=116 */

void FUN_004523f0(int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 uVar7;
  int *in_ECX;
  
  iVar2 = *in_ECX;
  uVar7 = FUN_00452540(*(undefined4 *)(*param_1 + 4),iVar2,param_2);
  *(undefined4 *)(iVar2 + 4) = uVar7;
  piVar3 = (int *)*in_ECX;
  in_ECX[1] = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*in_ECX + 8) = *in_ECX;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*in_ECX + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*in_ECX + 8) = iVar2;
  return;
}


/* FUN_00452470 @ 00452470  kind=gamemisc  attributed-by=caller-vote  size=69 */

int FUN_00452470(int param_1,int param_2,int param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    FUN_0042c5e0(param_1);
    *(undefined4 *)(param_3 + 0x118) = *(undefined4 *)(param_1 + 0x118);
    param_1 = param_1 + 0x11c;
    param_3 = param_3 + 0x11c;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004524c0 @ 004524c0  kind=gamemisc  attributed-by=caller-vote  size=52 */

undefined4 * FUN_004524c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 2) {
    if (param_3 != param_1) {
      FUN_004572c0(*(undefined4 *)*param_1,(undefined4 *)*param_1);
    }
    param_3 = param_3 + 2;
  }
  return param_3;
}


/* FUN_00452540 @ 00452540  kind=gamemisc  attributed-by=caller-vote  size=159 */

undefined4 * FUN_00452540(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *in_ECX;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e32f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = (undefined4 *)*in_ECX;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = (undefined4 *)FUN_00451bf0(param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    uVar2 = FUN_00452540(*param_1,puVar1,param_3);
    *puVar1 = uVar2;
    uVar2 = FUN_00452540(param_1[2],puVar1,param_3);
    puVar1[2] = uVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_00452690 @ 00452690  kind=gamemisc  attributed-by=caller-vote  size=397 */

void FUN_00452690(int param_1,int *param_2,int *param_3)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int *in_ECX;
  int iVar6;
  uint uVar7;
  uint uStack_2c;
  void *local_1c;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3310;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  uVar7 = 0;
  piVar3 = param_2;
  if (param_2 != param_3) {
    do {
      piVar3 = (int *)*piVar3;
      uVar7 = uVar7 + 1;
    } while (piVar3 != param_3);
    if (uVar7 != 0) {
      iVar6 = in_ECX[1];
      if ((uint)(in_ECX[2] - iVar6 >> 4) < uVar7) {
        iVar6 = iVar6 - *in_ECX >> 4;
        if (0xfffffffU - iVar6 < uVar7) {
          local_14 = (undefined1 *)&uStack_2c;
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar4 = FUN_0046dd00(iVar6 + uVar7);
        local_1c = (void *)0x0;
        if (uVar4 != 0) {
          if (uVar4 < 0x10000000) {
            local_1c = operator_new(uVar4 << 4);
            if (local_1c != (void *)0x0) goto LAB_00452746;
          }
                    /* WARNING: Subroutine does not return */
          std::_Xbad_alloc();
        }
LAB_00452746:
        local_8 = 0;
        uVar5 = FUN_00456d60(*in_ECX,param_1,local_1c,&local_15,0,param_1);
        uVar5 = FUN_00456ba0(param_2,param_3,uVar5,&local_15,param_1);
        FUN_00456d60(param_1,in_ECX[1],uVar5,&local_15,0,param_1);
        pvVar1 = (void *)*in_ECX;
        if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar1);
        }
        in_ECX[2] = (int)(uVar4 * 0x10 + (int)local_1c);
        in_ECX[1] = (int)((uVar7 + (in_ECX[1] - (int)pvVar1 >> 4)) * 0x10 + (int)local_1c);
        *in_ECX = (int)local_1c;
        ExceptionList = local_10;
        return;
      }
      FUN_00456ba0(param_2,param_3,iVar6,&local_15,param_1);
      iVar2 = in_ECX[1];
      iVar6 = uVar7 * 0x10 + iVar2;
      if ((param_1 != iVar2) && (iVar2 != iVar6)) {
        FUN_004559c0(param_1,iVar2,iVar6,0,0);
      }
      in_ECX[1] = in_ECX[1] + uVar7 * 0x10;
    }
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00452840 @ 00452840  kind=gamemisc  attributed-by=caller-vote  size=431 */

void FUN_00452840(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *in_ECX;
  uint uVar5;
  uint uStack_30;
  undefined1 local_15;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e3330;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  uVar5 = 0;
  piVar1 = param_2;
  if (param_2 != param_3) {
    do {
      piVar1 = (int *)*piVar1;
      uVar5 = uVar5 + 1;
    } while (piVar1 != param_3);
    if (uVar5 != 0) {
      if ((uint)((in_ECX[2] - in_ECX[1]) / 0x148) < uVar5) {
        iVar2 = (in_ECX[1] - *in_ECX) / 0x148;
        if (0xc7ce0cU - iVar2 < uVar5) {
          local_14 = (undefined1 *)&uStack_30;
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_14 = (undefined1 *)&uStack_30;
        iVar2 = FUN_0044b830(iVar2 + uVar5);
        iVar3 = FUN_0044bde0(iVar2);
        local_8 = 0;
        uVar4 = FUN_0044a650(*in_ECX,param_1,iVar3,&local_15,0,param_1);
        uVar4 = FUN_00456bf0(param_2,param_3,uVar4,&local_15,param_1);
        FUN_0044a650(param_1,in_ECX[1],uVar4,&local_15,0,param_1);
        if ((void *)*in_ECX != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete((void *)*in_ECX);
        }
        in_ECX[2] = iVar2 * 0x148 + iVar3;
        in_ECX[1] = (uVar5 + (in_ECX[1] - *in_ECX) / 0x148) * 0x148 + iVar3;
        *in_ECX = iVar3;
        ExceptionList = local_10;
        return;
      }
      FUN_00456bf0(param_2,param_3,in_ECX[1],&local_15,param_1);
      iVar3 = in_ECX[1];
      iVar2 = uVar5 * 0x148 + iVar3;
      if ((param_1 != iVar3) && (iVar3 != iVar2)) {
        FUN_00455ac0(param_1,iVar3,iVar2,0,0);
      }
      in_ECX[1] = in_ECX[1] + uVar5 * 0x148;
    }
  }
  ExceptionList = local_10;
  return;
}


/* FUN_00452a10 @ 00452a10  kind=gamemisc  attributed-by=caller-vote  size=504 */

void FUN_00452a10(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0xaaaaaa8 < (uint)in_ECX[1]) {
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
        goto LAB_00452bf1;
      }
LAB_00452b48:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00452b48;
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
LAB_00452bf1:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00453040 @ 00453040  kind=gamemisc  attributed-by=caller-vote  size=475 */

undefined4 * FUN_00453040(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  bool bVar7;
  uint uStack_30;
  undefined1 local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3350;
  local_10 = ExceptionList;
  uStack_30 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_30;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_30;
    FUN_00452a10(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    puVar5 = &uStack_30;
    if (*param_3 < param_2[4]) {
LAB_004530bf:
      local_14 = (undefined1 *)puVar5;
      FUN_00452a10(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    if (*(int *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00452a10(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    iVar2 = *param_3;
    iVar3 = param_2[4];
    bVar7 = SBORROW4(iVar3,iVar2);
    iVar4 = iVar3 - iVar2;
    puVar5 = &uStack_30;
    if (iVar2 < iVar3) {
      FUN_0042c740();
      iVar4 = *param_3;
      if (param_2[4] < iVar4) {
        puVar5 = (uint *)local_14;
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_00452a10(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004530bf;
      }
      bVar7 = SBORROW4(param_2[4],iVar4);
      iVar4 = param_2[4] - iVar4;
      puVar5 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar5;
    if ((bVar7 != iVar4 < 0) && ((FUN_005c3ea0(), param_2 == piVar1 || (*param_3 < param_2[4])))) {
      if (*(char *)(param_2[2] + 0xd) == '\0') {
        FUN_00452a10(param_1,1,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
      FUN_00452a10(param_1,0,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  local_8 = 0xffffffff;
  puVar6 = (undefined4 *)FUN_004538c0(local_20,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00453420 @ 00453420  kind=gamemisc  attributed-by=caller-vote  size=565 */

undefined4 * FUN_00453420(undefined4 *param_1,int *param_2,uint *param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  uint uVar7;
  uint uStack_3c;
  undefined1 local_2c [4];
  uint local_28;
  uint local_24;
  int *local_1c;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3390;
  local_10 = ExceptionList;
  uStack_3c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_005c0420(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)param_3[1] <= param_2[5]) &&
       ((puVar4 = &uStack_3c, (int)param_3[1] < param_2[5] ||
        (local_14 = (undefined1 *)&uStack_3c, puVar4 = &uStack_3c, *param_3 < (uint)param_2[4])))) {
LAB_004534ad:
      local_14 = (undefined1 *)puVar4;
      FUN_005c0420(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    local_14 = (undefined1 *)&uStack_3c;
    if ((*(int *)(iVar2 + 0x14) <= (int)param_3[1]) &&
       ((*(int *)(iVar2 + 0x14) < (int)param_3[1] ||
        (local_14 = (undefined1 *)&uStack_3c, *(uint *)(iVar2 + 0x10) < *param_3)))) {
      local_14 = (undefined1 *)&uStack_3c;
      FUN_005c0420(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_28 = param_3[1];
    local_24 = *param_3;
    uVar7 = param_2[4];
    puVar4 = &uStack_3c;
    if (((int)local_28 <= param_2[5]) &&
       (((int)local_28 < param_2[5] || (puVar4 = &uStack_3c, local_24 < uVar7)))) {
      local_1c = param_2;
      FUN_0042c740();
      piVar3 = local_1c;
      cVar5 = FUN_0042c8d0(local_1c + 4,param_3);
      if (cVar5 != '\0') {
        puVar4 = (uint *)local_14;
        if (*(char *)(piVar3[2] + 0xd) != '\0') {
          FUN_005c0420(param_1,0,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_004534ad;
      }
      uVar7 = param_2[4];
      puVar4 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar4;
    if ((param_2[5] <= (int)local_28) && ((param_2[5] < (int)local_28 || (uVar7 < local_24)))) {
      local_1c = param_2;
      FUN_005c3ea0();
      piVar3 = local_1c;
      if ((local_1c == piVar1) || (cVar5 = FUN_0042c8d0(param_3,local_1c + 4), cVar5 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_005c0420(param_1,1,piVar3,param_3,param_4);
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
  puVar6 = (undefined4 *)FUN_00453b40(local_2c,0,param_3,param_4);
  *param_1 = *puVar6;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00453de0 @ 00453de0  kind=gamemisc  attributed-by=caller-vote  size=310 */

undefined4 * FUN_00453de0(undefined4 *param_1,char param_2,uint *param_3,undefined4 param_4)

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
  
  puStack_c = &LAB_006e3450;
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
          goto LAB_00453e7c;
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
LAB_00453e7c:
          piVar3 = (int *)piVar5[2];
        }
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (bVar6) {
    if (piVar5 == (int *)*piVar1) {
      puVar4 = (undefined4 *)&param_2;
      bVar6 = true;
      goto LAB_00453ea4;
    }
    FUN_0042c740();
  }
  if (((int)param_3[1] < _param_2[5]) ||
     (((int)param_3[1] <= _param_2[5] && (*param_3 <= (uint)_param_2[4])))) {
    *param_1 = _param_2;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return param_1;
  }
  puVar4 = &param_3;
LAB_00453ea4:
  puVar4 = (undefined4 *)FUN_00665d30(puVar4,bVar6,piVar5,param_3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00453f20 @ 00453f20  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00453f20(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3470;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00608a20(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xaaaaaa9) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00453ff0 @ 00453ff0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00453ff0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3490;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451da0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x2222221) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004540c0 @ 004540c0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004540c0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e34b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451ee0(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x3333332) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00454330 @ 00454330  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_00454330(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3510;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00452190(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0xc30c2f) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004544d0 @ 004544d0  kind=gamemisc  attributed-by=caller-vote  size=157 */

void FUN_004544d0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e3550;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00451c70(param_1,*(undefined4 *)(param_1 + 4),param_2 + 2);
    if (*(int *)(in_ECX + 4) == 0x5555554) break;
    *(int *)(in_ECX + 4) = *(int *)(in_ECX + 4) + 1;
    *(int *)(param_1 + 4) = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


