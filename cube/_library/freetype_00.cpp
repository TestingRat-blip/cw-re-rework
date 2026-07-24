// freetype_00 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "freetype_00.h"

/* FUN_0064b2e0 @ 0064b2e0  kind=lib  attributed-by=lib-island  size=239 */

undefined4 * FUN_0064b2e0(undefined4 *param_1,short *param_2,int param_3)

{
  short sVar1;
  uint uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  short *psVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f1619;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  param_1[5] = 7;
  param_1[4] = 0;
  *(undefined2 *)param_1 = 0;
  local_8 = 0;
  if (*param_2 == 0) {
    iVar6 = 0;
  }
  else {
    psVar7 = param_2;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    iVar6 = (int)psVar7 - (int)(param_2 + 1) >> 1;
  }
  uVar2 = param_1[4];
  uVar4 = *(int *)(param_3 + 0x10) + iVar6;
  if (((uVar2 <= uVar4) && (param_1[5] != uVar4)) && (cVar3 = FUN_0040f300(uVar4,1), cVar3 != '\0'))
  {
    param_1[4] = uVar2;
    puVar5 = param_1;
    if (7 < (uint)param_1[5]) {
      puVar5 = (undefined4 *)*param_1;
    }
    *(undefined2 *)((int)puVar5 + uVar2 * 2) = 0;
  }
  if (*param_2 == 0) {
    iVar6 = 0;
  }
  else {
    psVar7 = param_2;
    do {
      sVar1 = *psVar7;
      psVar7 = psVar7 + 1;
    } while (sVar1 != 0);
    iVar6 = (int)psVar7 - (int)(param_2 + 1) >> 1;
  }
  FUN_0046f270(param_2,iVar6);
  FUN_0046f170(param_3,0,0xffffffff);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0064b4f0 @ 0064b4f0  kind=lib  attributed-by=lib-island  size=68 */

undefined4 * FUN_0064b4f0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar2 = param_2 + 2;
    do {
      puVar3 = param_3 + -4;
      *puVar3 = puVar2[-6];
      param_3[-3] = puVar2[-5];
      param_3[-2] = puVar2[-4];
      param_3[-1] = puVar2[-3];
      puVar1 = puVar2 + -6;
      puVar2 = puVar2 + -4;
      param_3 = puVar3;
    } while (puVar1 != param_1);
    return puVar3;
  }
  return param_3;
}


/* FUN_0064be40 @ 0064be40  kind=lib  attributed-by=lib-island  size=58 */

void FUN_0064be40(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)0x8) {
        puVar1[-2] = *param_3;
        puVar1[-1] = param_3[1];
        *puVar1 = param_3[2];
        puVar1[1] = param_3[3];
      }
      puVar1 = puVar1 + 4;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* FUN_0064be80 @ 0064be80  kind=lib  attributed-by=lib-island  size=55 */

void FUN_0064be80(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      puVar2[-2] = *param_3;
      puVar2[-1] = param_3[1];
      *puVar2 = param_3[2];
      puVar2[1] = param_3[3];
      puVar1 = puVar2 + 2;
      puVar2 = puVar2 + 4;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_0064d0c0 @ 0064d0c0  kind=lib  attributed-by=lib-island  size=44 */

void FUN_0064d0c0(undefined4 param_1,undefined4 param_2)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_0064e450(param_1,param_2);
  return;
}


/* FUN_0064e370 @ 0064e370  kind=lib  attributed-by=lib-island  size=47 */

void FUN_0064e370(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x2c);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0064e37e. Too many branches */
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


/* FUN_0064e450 @ 0064e450  kind=lib  attributed-by=lib-island  size=53 */

void FUN_0064e450(size_t param_1,byte *param_2)

{
  void *_Dst;
  char cVar1;
  undefined4 *in_ECX;
  
  cVar1 = FUN_0064e310(param_1);
  if (cVar1 != '\0') {
    _Dst = (void *)*in_ECX;
    memset(_Dst,(uint)*param_2,param_1);
    in_ECX[1] = (int)_Dst + param_1;
  }
  return;
}


/* FUN_0064e850 @ 0064e850  kind=lib  attributed-by=lib-island  size=147 */

void FUN_0064e850(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  int iVar4;
  
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    iVar4 = 0;
    do {
      puVar1 = *(uint **)(*(int *)(in_ECX + 0x4c) + iVar4 * 4);
      puVar2 = (undefined4 *)puVar1[1];
      if ((param_1 < puVar2) && (puVar3 = (undefined4 *)*puVar1, puVar3 <= param_1)) {
        if (puVar2 == (undefined4 *)puVar1[2]) {
          FUN_0063dc90(1);
        }
        if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar1[1] =
               *(undefined4 *)(*puVar1 + ((int)param_1 - (int)puVar3 >> 2) * 4);
        }
      }
      else {
        if (puVar2 == (undefined4 *)puVar1[2]) {
          FUN_0063dc90(1);
        }
        if ((undefined4 *)puVar1[1] != (undefined4 *)0x0) {
          *(undefined4 *)puVar1[1] = *param_1;
        }
      }
      puVar1[1] = puVar1[1] + 4;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0064e8f0 @ 0064e8f0  kind=lib  attributed-by=lib-island  size=189 */

void FUN_0064e8f0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  int in_ECX;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      puVar1 = *(uint **)(*(int *)(in_ECX + 0x4c) + iVar4 * 4);
      puVar2 = (undefined4 *)puVar1[1];
      if ((param_1 < puVar2) && ((undefined4 *)*puVar1 <= param_1)) {
        iVar5 = (int)((int)param_1 - *puVar1) >> 3;
        if (puVar2 == (undefined4 *)puVar1[2]) {
          FUN_00428c80(1);
        }
        uVar3 = *puVar1;
        puVar2 = (undefined4 *)puVar1[1];
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *(undefined4 *)(uVar3 + iVar5 * 8);
          puVar2[1] = *(undefined4 *)(uVar3 + 4 + iVar5 * 8);
        }
      }
      else {
        if (puVar2 == (undefined4 *)puVar1[2]) {
          FUN_00428c80(1);
        }
        puVar2 = (undefined4 *)puVar1[1];
        if (puVar2 != (undefined4 *)0x0) {
          *puVar2 = *param_1;
          puVar2[1] = param_1[1];
        }
      }
      puVar1[1] = puVar1[1] + 8;
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0064e9b0 @ 0064e9b0  kind=lib  attributed-by=lib-island  size=193 */

void FUN_0064e9b0(undefined4 *param_1)

{
  uint *puVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int local_8;
  
  local_8 = 0;
  if (0 < (int)(*(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) & 0xfffffffcU)) {
    do {
      puVar1 = *(uint **)(*(int *)(in_ECX + 0x4c) + local_8 * 4);
      puVar3 = (undefined4 *)puVar1[1];
      if ((param_1 < puVar3) && (puVar4 = (undefined4 *)*puVar1, puVar4 <= param_1)) {
        if (puVar3 == (undefined4 *)puVar1[2]) {
          FUN_00428d00(1);
        }
        puVar3 = (undefined4 *)puVar1[1];
        puVar4 = (undefined4 *)(((int)param_1 - (int)puVar4 & 0xfffffff0U) + *puVar1);
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *puVar4;
          puVar3[1] = puVar4[1];
          puVar3[2] = puVar4[2];
          uVar2 = puVar4[3];
LAB_0064ea49:
          puVar3[3] = uVar2;
        }
      }
      else {
        if (puVar3 == (undefined4 *)puVar1[2]) {
          FUN_00428d00(1);
        }
        puVar3 = (undefined4 *)puVar1[1];
        if (puVar3 != (undefined4 *)0x0) {
          *puVar3 = *param_1;
          puVar3[1] = param_1[1];
          puVar3[2] = param_1[2];
          uVar2 = param_1[3];
          goto LAB_0064ea49;
        }
      }
      puVar1[1] = puVar1[1] + 0x10;
      local_8 = local_8 + 1;
    } while (local_8 < *(int *)(in_ECX + 0x50) - *(int *)(in_ECX + 0x4c) >> 2);
  }
  return;
}


/* FUN_0064f4e0 @ 0064f4e0  kind=lib  attributed-by=lib-island  size=349 */

Node * FUN_0064f4e0(int param_1,Node *param_2,int param_3,int param_4,undefined4 param_5)

{
  ContinuousAttribute<plasma::Vector<3,float>_> *this;
  int extraout_EAX;
  ContinuousAttribute<float> *this_00;
  int extraout_EAX_00;
  Node *pNVar1;
  int in_ECX;
  void *local_40 [4];
  undefined4 local_30;
  uint local_2c;
  void *local_28 [4];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6521;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (param_1 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8 = param_1;
    this = operator_new(0x234);
    local_8 = CONCAT31(local_8._1_3_,1);
    if (this == (ContinuousAttribute<plasma::Vector<3,float>_> *)0x0) {
      param_1 = 0;
    }
    else {
      plasma::ContinuousAttribute<plasma::Vector<3,float>_>::
      ContinuousAttribute<plasma::Vector<3,float>_>(this,in_ECX,local_28);
      param_1 = extraout_EAX;
    }
    local_8 = 0xffffffff;
    if (7 < local_14) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_28[0]);
    }
    local_14 = 7;
    local_18 = 0;
    local_28[0] = (void *)((uint)local_28[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
  if (param_3 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    local_8 = 2;
    this_00 = operator_new(0x210);
    local_8 = CONCAT31(local_8._1_3_,3);
    if (this_00 == (ContinuousAttribute<float> *)0x0) {
      param_3 = 0;
    }
    else {
      plasma::ContinuousAttribute<float>::ContinuousAttribute<float>(this_00,in_ECX,local_40);
      param_3 = extraout_EAX_00;
    }
    local_8 = 0xffffffff;
    if (7 < local_2c) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_40[0]);
    }
    local_2c = 7;
    local_30 = 0;
    local_40[0] = (void *)((uint)local_40[0] & 0xffff0000);
  }
  local_8 = 0xffffffff;
  pNVar1 = operator_new(0xf0);
  local_8 = 4;
  if (pNVar1 == (Node *)0x0) {
    pNVar1 = (Node *)0x0;
  }
  else {
    pNVar1 = plasma::Node::Node(pNVar1,in_ECX,param_1,param_2,param_3,param_5);
  }
  local_8 = 0xffffffff;
  if (param_4 != 0) {
    FUN_00630be0(pNVar1);
  }
  ExceptionList = local_10;
  return pNVar1;
}


/* FUN_0064fd30 @ 0064fd30  kind=lib  attributed-by=lib-island  size=111 */

PlasmaFont * FUN_0064fd30(int param_1)

{
  PlasmaFont *pPVar1;
  Font *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f661b;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  pPVar1 = operator_new(0x70);
  local_8 = 0;
  if (pPVar1 != (PlasmaFont *)0x0) {
    pPVar1 = plasma::PlasmaFont::PlasmaFont(pPVar1,in_ECX,param_1);
    ExceptionList = local_10;
    return pPVar1;
  }
  ExceptionList = local_10;
  return (PlasmaFont *)0x0;
}


/* FUN_0064fda0 @ 0064fda0  kind=lib  attributed-by=lib-island  size=808 */

void FUN_0064fda0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  PlasmaFont *this;
  float *pfVar4;
  undefined4 ****ppppuVar5;
  Font *in_ECX;
  int *piVar6;
  float fVar7;
  float fVar8;
  undefined1 local_6c [8];
  undefined1 local_64 [8];
  float local_5c;
  float fStack_58;
  undefined4 ***local_54 [4];
  undefined4 local_44;
  uint local_40;
  float local_3c;
  float fStack_38;
  float local_34;
  float fStack_30;
  float local_2c;
  float fStack_28;
  float local_24;
  float fStack_20;
  float local_1c;
  float fStack_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f65e3;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar3;
  this = operator_new(0x70);
  local_8 = 0;
  if (this != (PlasmaFont *)0x0) {
    plasma::PlasmaFont::PlasmaFont(this,in_ECX,param_2);
  }
  piVar6 = (int *)**(int **)(param_1 + 0x2c);
  if (piVar6 != *(int **)(param_1 + 0x2c)) {
    do {
      local_8 = 0xffffffff;
      iVar1 = piVar6[2];
      if ((*(int *)(iVar1 + 0x1c) == 1) && (*(int *)(iVar1 + 0x34) != 0)) {
        local_54[0] = (undefined4 ***)((uint)local_54[0] & 0xffff0000);
        local_40 = 7;
        local_44 = 0;
        FUN_0040f680(iVar1 + 0xc,0,0xffffffff);
        iVar1 = *(int *)(piVar6[2] + 0x38);
        local_8 = 1;
        pfVar4 = (float *)(**(code **)(**(int **)(piVar6[2] + 0x34) + 0x18))(local_64,uVar3);
        fVar7 = pfVar4[1];
        fVar8 = *pfVar4;
        local_3c = *(float *)(iVar1 + 0x1b0) * fVar8 + *(float *)(iVar1 + 0x1c0) * fVar7 +
                   *(float *)(iVar1 + 0x1e0);
        fStack_38 = *(float *)(iVar1 + 0x1b4) * fVar8 + *(float *)(iVar1 + 0x1c4) * fVar7 +
                    *(float *)(iVar1 + 0x1e4);
        iVar2 = *(int *)(piVar6[2] + 0x38);
        fVar7 = 1.0 / (*(float *)(iVar1 + 0x1bc) * fVar8 + *(float *)(iVar1 + 0x1cc) * fVar7 +
                      *(float *)(iVar1 + 0x1ec));
        _local_1c = CONCAT44(fStack_38 * fVar7,local_3c * fVar7);
        pfVar4 = (float *)(**(code **)(**(int **)(piVar6[2] + 0x34) + 0x1c))(local_6c);
        fVar7 = pfVar4[1];
        fVar8 = *pfVar4;
        local_5c = *(float *)(iVar2 + 0x1b0) * fVar8 + *(float *)(iVar2 + 0x1c0) * fVar7 +
                   *(float *)(iVar2 + 0x1e0);
        fStack_58 = *(float *)(iVar2 + 0x1b4) * fVar8 + *(float *)(iVar2 + 0x1c4) * fVar7 +
                    *(float *)(iVar2 + 0x1e4);
        fVar7 = 1.0 / (*(float *)(iVar2 + 0x1bc) * fVar8 + *(float *)(iVar2 + 0x1cc) * fVar7 +
                      *(float *)(iVar2 + 0x1ec));
        fVar8 = local_5c * fVar7;
        _local_2c = CONCAT44(fStack_58 * fVar7,fVar8);
        if ((~(byte)(*(uint *)(piVar6[2] + 200) >> 1) & 1) == 0) {
          FUN_00636990(0);
        }
        local_34 = (float)_local_2c;
        fStack_30 = (float)((ulonglong)_local_2c >> 0x20);
        _local_34 = CONCAT44(fStack_30 - fStack_18,local_34 - local_1c);
        iVar1 = *(int *)(*(int *)(piVar6[2] + 0x38) + 0x68);
        iVar2 = *(int *)(*(int *)(piVar6[2] + 0x38) + 0x94);
        ppppuVar5 = local_54;
        if (7 < local_40) {
          ppppuVar5 = (undefined4 ****)local_54[0];
        }
        _local_24 = CONCAT44(fStack_18 - *(float *)(iVar2 + 4 + iVar1 * 8),
                             local_1c - *(float *)(iVar2 + iVar1 * 8));
        FUN_0067f1b0(*(undefined2 *)ppppuVar5,&local_24,&local_34,piVar6[2],fVar8 - local_1c);
        local_8 = 0xffffffff;
        if (7 < local_40) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_54[0]);
        }
      }
      piVar6 = (int *)*piVar6;
    } while (piVar6 != (int *)*(int *)(param_1 + 0x2c));
  }
  local_8 = 0xffffffff;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00653210 @ 00653210  kind=lib  attributed-by=lib-island  size=269 */

basic_streambuf<char,std::char_traits<char>_> *
FUN_00653210(wchar_t *param_1,int param_2,int *param_3)

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


/* FUN_00659f50 @ 00659f50  kind=lib  attributed-by=lib-island  size=81 */

undefined1 * FUN_00659f50(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar3 = (undefined4 *)*param_2;
  }
  iVar1 = param_2[4];
  puVar2 = param_2;
  if (7 < (uint)param_2[5]) {
    puVar2 = (undefined4 *)*param_2;
  }
  *(undefined4 *)(param_1 + 0x14) = 0xf;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  FUN_00452320(puVar2,(int)puVar3 + iVar1 * 2,param_2);
  return param_1;
}


/* FUN_00659fe0 @ 00659fe0  kind=lib  attributed-by=lib-island  size=40 */

undefined4 FUN_00659fe0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00425390(1,param_3);
  FUN_0040eaf0(uVar1);
  return param_1;
}


/* FUN_0065a150 @ 0065a150  kind=lib  attributed-by=lib-island  size=112 */

int FUN_0065a150(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_004da730();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined4 *)(iVar1 + 0x10) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_1[1];
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined4 *)(iVar1 + 0x18) = param_1[2];
    *(undefined4 *)(iVar1 + 0x1c) = param_1[3];
    *(undefined4 *)(iVar1 + 0x20) = param_1[4];
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    *(undefined4 *)(iVar1 + 0x24) = param_1[5];
  }
  return iVar1;
}


/* FUN_0065a1c0 @ 0065a1c0  kind=lib  attributed-by=lib-island  size=521 */

void FUN_0065a1c0(undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
                 int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *in_ECX;
  int *piVar5;
  int *piVar6;
  
  if (0x6666664 < (uint)in_ECX[1]) {
    if ((void *)param_5[6] != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)param_5[6]);
    }
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
        goto LAB_0065a3ca;
      }
LAB_0065a321:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_0065a321;
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
LAB_0065a3ca:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0065a3f0 @ 0065a3f0  kind=lib  attributed-by=lib-island  size=586 */

undefined4 * FUN_0065a3f0(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  undefined4 *puVar5;
  undefined4 *in_ECX;
  uint uStack_34;
  undefined1 local_24 [4];
  int *local_20;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f6e00;
  local_10 = ExceptionList;
  uStack_34 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_34;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    local_14 = (undefined1 *)&uStack_34;
    FUN_0065a1c0(param_1,1,*in_ECX,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = (int *)*in_ECX;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_34;
    cVar4 = FUN_0065ad80(param_3,param_2 + 4);
    if (cVar4 != '\0') {
      FUN_0065a1c0(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    iVar2 = piVar1[2];
    local_14 = (undefined1 *)&uStack_34;
    cVar4 = FUN_0065ad80(iVar2 + 0x10,param_3);
    if (cVar4 != '\0') {
      FUN_0065a1c0(param_1,0,iVar2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    cVar4 = FUN_0065ad80(param_3,param_2 + 4);
    if (cVar4 != '\0') {
      local_20 = param_2;
      FUN_0042c740();
      piVar3 = local_20;
      cVar4 = FUN_0065ad80(local_20 + 4,param_3);
      if (cVar4 != '\0') {
        if (*(char *)(piVar3[2] + 0xd) == '\0') {
          FUN_0065a1c0(param_1,1,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0065a1c0(param_1,0,piVar3,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
    cVar4 = FUN_0065ad80(param_2 + 4,param_3);
    if (cVar4 != '\0') {
      local_20 = param_2;
      FUN_005c3ea0();
      piVar3 = local_20;
      if ((local_20 == piVar1) || (cVar4 = FUN_0065ad80(param_3,local_20 + 4), cVar4 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_0065a1c0(param_1,1,piVar3,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_0065a1c0(param_1,0,param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_0065a650(local_24,0,param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0065a650 @ 0065a650  kind=lib  attributed-by=lib-island  size=433 */

void FUN_0065a650(undefined4 *param_1,int *param_2,int *param_3,void *param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  undefined4 *puVar6;
  undefined4 *in_ECX;
  int *piVar7;
  int *piVar8;
  int *unaff_FS_OFFSET;
  bool bVar9;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar4 = param_3;
  puStack_c = &LAB_006f6e20;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = (int *)*in_ECX;
  local_8 = 0;
  bVar9 = true;
  piVar7 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    iVar2 = *param_3;
    piVar8 = (int *)piVar1[1];
    do {
      piVar7 = piVar8;
      if ((char)param_2 == '\0') {
        if (iVar2 < piVar7[4]) {
LAB_0065a749:
          bVar9 = true;
          goto LAB_0065a74e;
        }
        if (iVar2 <= piVar7[4]) {
          if ((piVar4[1] < piVar7[5]) ||
             ((piVar4[1] <= piVar7[5] &&
              (cVar5 = FUN_005a78a0(piVar4[2],piVar4[3],piVar7[6],piVar7[7]), cVar5 != '\0'))))
          goto LAB_0065a749;
        }
        bVar9 = false;
LAB_0065a744:
        piVar8 = (int *)piVar7[2];
      }
      else {
        iVar3 = piVar7[4];
        if ((iVar3 < iVar2) ||
           ((iVar3 <= iVar2 &&
            ((piVar7[5] < piVar4[1] ||
             (((iVar3 <= iVar2 && (piVar7[5] <= piVar4[1])) &&
              (cVar5 = FUN_005a78a0(piVar7[6],piVar7[7],piVar4[2],piVar4[3]), cVar5 != '\0'))))))))
        {
          bVar9 = true;
        }
        else {
          bVar9 = false;
        }
        bVar9 = !bVar9;
        if (!bVar9) goto LAB_0065a744;
LAB_0065a74e:
        piVar8 = (int *)*piVar7;
      }
    } while (*(char *)((int)piVar8 + 0xd) == '\0');
  }
  param_2 = piVar7;
  if (bVar9) {
    if (piVar7 == (int *)*piVar1) {
      bVar9 = true;
      goto LAB_0065a774;
    }
    FUN_0042c740();
  }
  iVar2 = param_2[4];
  iVar3 = *piVar4;
  if ((iVar3 <= iVar2) &&
     ((iVar3 < iVar2 ||
      ((piVar4[1] <= param_2[5] &&
       (((iVar3 < iVar2 || (piVar4[1] < param_2[5])) ||
        (cVar5 = FUN_005a78a0(param_2[6],param_2[7],piVar4[2],piVar4[3]), cVar5 == '\0')))))))) {
    if (*(void **)((int)param_4 + 0x18) == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(param_4);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)((int)param_4 + 0x18));
  }
LAB_0065a774:
  puVar6 = (undefined4 *)FUN_0065a1c0(&param_2,bVar9,piVar7,piVar4,param_4);
  *param_1 = *puVar6;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_0065a890 @ 0065a890  kind=lib  attributed-by=lib-island  size=76 */

undefined4 * FUN_0065a890(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_005a7990(param_3);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[2] = local_14;
  param_1[3] = local_10;
  param_1[4] = local_c;
  return param_1;
}


/* FUN_0065a8e0 @ 0065a8e0  kind=lib  attributed-by=lib-island  size=27 */

void FUN_0065a8e0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0043c870();
  *in_ECX = uVar1;
  return;
}


/* FUN_0065ac70 @ 0065ac70  kind=lib  attributed-by=lib-island  size=257 */

int * FUN_0065ac70(int *param_1)

{
  int iVar1;
  int *piVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  int *in_ECX;
  int local_28;
  int local_24;
  void *local_20;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  piVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6f18;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar5 = (int *)FUN_0065b1e0(param_1);
  if (piVar5 != (int *)*in_ECX) {
    iVar6 = *piVar2;
    iVar1 = piVar5[4];
    if (iVar1 <= iVar6) {
      if (iVar1 < iVar6) goto LAB_0065ad5d;
      if (piVar5[5] <= piVar2[1]) {
        if ((iVar1 < iVar6) || (piVar5[5] < piVar2[1])) goto LAB_0065ad5d;
        cVar3 = FUN_005a78a0(piVar2[2],piVar2[3],piVar5[6],piVar5[7],uVar4);
        if (cVar3 == '\0') goto LAB_0065ad5d;
      }
    }
  }
  local_28 = *piVar2;
  local_24 = piVar2[1];
  local_20 = (void *)piVar2[2];
  local_1c = piVar2[3];
  local_18 = piVar2[4];
  piVar2[2] = 0;
  piVar2[3] = 0;
  piVar2[4] = 0;
  local_14 = 0;
  local_8 = 0;
  iVar6 = FUN_0065a150(&local_28);
  FUN_0065a3f0(&param_1,piVar5,iVar6 + 0x10,iVar6);
  piVar5 = param_1;
  if (local_20 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_20);
  }
LAB_0065ad5d:
  ExceptionList = local_10;
  return piVar5 + 9;
}


/* FUN_0065ad80 @ 0065ad80  kind=lib  attributed-by=lib-island  size=83 */

undefined4 FUN_0065ad80(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar1 = *param_1;
  iVar2 = *param_2;
  if (iVar1 < iVar2) {
    return 1;
  }
  if (iVar1 <= iVar2) {
    if (param_1[1] < param_2[1]) {
      return 1;
    }
    if (((iVar1 <= iVar2) && (param_1[1] <= param_2[1])) &&
       (cVar3 = FUN_005a78a0(param_1[2],param_1[3],param_2[2],param_2[3]), cVar3 != '\0')) {
      return 1;
    }
  }
  return 0;
}


/* FUN_0065b1e0 @ 0065b1e0  kind=lib  attributed-by=lib-island  size=179 */

undefined4 * FUN_0065b1e0(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *in_ECX;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *local_c;
  
  puVar5 = (undefined4 *)*in_ECX;
  if (*(char *)((int)puVar5[1] + 0xd) == '\0') {
    iVar1 = *param_1;
    puVar4 = puVar5;
    puVar7 = (undefined4 *)puVar5[1];
    local_c = puVar5;
    do {
      puVar5 = puVar7;
      iVar2 = puVar5[4];
      if (iVar2 < iVar1) {
LAB_0065b27a:
        puVar7 = (undefined4 *)puVar5[2];
        puVar5 = puVar4;
      }
      else if (iVar1 < iVar2) {
LAB_0065b26b:
        puVar7 = (undefined4 *)*puVar5;
        local_c = puVar5;
      }
      else {
        puVar4 = local_c;
        if ((int)puVar5[5] < param_1[1]) goto LAB_0065b27a;
        if ((iVar1 < iVar2) || (param_1[1] < (int)puVar5[5])) goto LAB_0065b26b;
        piVar3 = (int *)param_1[2];
        for (piVar6 = (int *)puVar5[6]; piVar6 != (int *)puVar5[7]; piVar6 = piVar6 + 1) {
          if (piVar3 == (int *)param_1[3]) {
            if (piVar6 != (int *)puVar5[7]) goto LAB_0065b26b;
            break;
          }
          if (*piVar6 < *piVar3) goto LAB_0065b27a;
          if (*piVar3 < *piVar6) goto LAB_0065b26b;
          piVar3 = piVar3 + 1;
        }
        if (piVar3 != (int *)param_1[3]) goto LAB_0065b27a;
        puVar7 = (undefined4 *)*puVar5;
        local_c = puVar5;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar7 + 0xd) == '\0');
  }
  return puVar5;
}


/* FUN_0065d3d0 @ 0065d3d0  kind=lib  attributed-by=lib-island  size=104 */

void FUN_0065d3d0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_ECX;
  
  iVar3 = FUN_005c3fe0(param_2);
  if (iVar3 != *in_ECX) {
    iVar1 = *param_2;
    iVar2 = *(int *)(iVar3 + 0x10);
    if ((iVar2 <= iVar1) &&
       ((iVar2 < iVar1 ||
        ((*(int *)(iVar3 + 0x14) <= param_2[1] &&
         (((iVar2 < iVar1 || (*(int *)(iVar3 + 0x14) < param_2[1])) ||
          (*(int *)(iVar3 + 0x18) <= param_2[2])))))))) {
      *param_1 = iVar3;
      return;
    }
  }
  *param_1 = *in_ECX;
  return;
}


/* FUN_0065d440 @ 0065d440  kind=lib  attributed-by=lib-island  size=122 */

void FUN_0065d440(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int iVar5;
  int *in_ECX;
  
  iVar5 = FUN_0065b1e0(param_2);
  iVar1 = *in_ECX;
  if (iVar5 != iVar1) {
    iVar2 = *param_2;
    iVar3 = *(int *)(iVar5 + 0x10);
    if (iVar3 <= iVar2) {
      if (iVar2 <= iVar3) {
        if (param_2[1] < *(int *)(iVar5 + 0x14)) goto LAB_0065d4a6;
        if ((iVar2 <= iVar3) && (param_2[1] <= *(int *)(iVar5 + 0x14))) {
          cVar4 = FUN_005a78a0(param_2[2],param_2[3],*(undefined4 *)(iVar5 + 0x18),
                               *(undefined4 *)(iVar5 + 0x1c));
          if (cVar4 != '\0') goto LAB_0065d4a6;
        }
      }
      *param_1 = iVar5;
      return;
    }
  }
LAB_0065d4a6:
  *param_1 = iVar1;
  return;
}


/* FUN_0065d530 @ 0065d530  kind=lib  attributed-by=lib-island  size=2460 */

void FUN_0065d530(undefined4 *param_1,float *param_2,float *param_3,uint param_4,int param_5,
                 undefined4 param_6)

{
  char cVar1;
  undefined2 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 **ppuVar8;
  float *pfVar9;
  float *pfVar10;
  undefined4 uVar11;
  char cVar12;
  int in_ECX;
  float fVar13;
  float fVar14;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  int local_ac [2];
  float local_a4;
  float *local_a0;
  float *local_9c;
  float *local_98;
  int local_94;
  float *local_90;
  float local_8c;
  undefined4 *local_88;
  float local_84;
  int local_80;
  char local_79;
  undefined8 local_78;
  float local_70;
  float fStack_6c;
  float local_68;
  float local_64;
  float local_60;
  float fStack_5c;
  undefined8 local_58;
  float local_50;
  float local_4c;
  undefined8 local_48;
  float local_40;
  float fStack_3c;
  undefined8 local_38;
  undefined8 local_30;
  float local_28;
  float fStack_24;
  float local_20;
  float fStack_1c;
  undefined8 local_18;
  float local_10;
  float fStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_98 = param_2;
  local_90 = param_3;
  local_80 = 0;
  local_94 = param_1[4];
  if (-1 < param_5) {
    local_80 = param_5;
    for (; param_5 <= (int)param_1[4]; param_5 = param_5 + 1) {
      puVar5 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)puVar5 + param_5 * 2) == 10) {
        local_94 = param_5;
        break;
      }
    }
  }
  fVar13 = *(float *)(in_ECX + 0xe4);
  *param_2 = 0.0;
  local_a0 = param_2 + 1;
  param_2[1] = -fVar13;
  *param_3 = 0.0;
  param_3[1] = 0.0;
  local_9c = param_3 + 1;
  local_84 = 0.0;
  local_10 = 0.0;
  fStack_c = 0.0;
  local_8c = 1.0;
  if (*(int *)(in_ECX + 0xf4) != 0) {
    local_8c = *(float *)(in_ECX + 0xe4) / (*(float *)(in_ECX + 0x104) - *(float *)(in_ECX + 0xfc));
  }
  local_79 = '\x01';
  cVar12 = (char)param_6;
  if (cVar12 != '\0') {
    local_94 = local_94 + 1;
  }
  if (local_80 < local_94) {
    do {
      puVar5 = param_1;
      if (7 < (uint)param_1[5]) {
        puVar5 = (undefined4 *)*param_1;
      }
      puVar5 = (undefined4 *)(uint)*(ushort *)((int)puVar5 + local_80 * 2);
      if (*(int *)(in_ECX + 0xf4) == 0) {
        if (*(char *)(in_ECX + 0x108) == '\0') {
          pfVar9 = (float *)FUN_0065ea80(*(undefined4 *)(in_ECX + 200),puVar5,0);
        }
        else {
          pfVar9 = (float *)FUN_0065e340(*(undefined4 *)(in_ECX + 200),puVar5,0);
        }
      }
      else {
        local_88 = puVar5;
        puVar7 = (undefined4 *)(*(undefined4 **)(in_ECX + 0xd0))[1];
        cVar1 = *(char *)((int)puVar7 + 0xd);
        puVar4 = *(undefined4 **)(in_ECX + 0xd0);
        while (cVar1 == '\0') {
          if ((int)puVar7[4] < (int)puVar5) {
            puVar6 = (undefined4 *)puVar7[2];
            puVar7 = puVar4;
          }
          else {
            puVar6 = (undefined4 *)*puVar7;
          }
          puVar4 = puVar7;
          puVar7 = puVar6;
          cVar1 = *(char *)((int)puVar6 + 0xd);
        }
        puVar7 = *(undefined4 **)(in_ECX + 0xd0);
        if (puVar4 == puVar7) {
LAB_0065d6d8:
          local_b0 = puVar7;
          ppuVar8 = &local_b0;
        }
        else {
          if ((int)puVar5 < (int)puVar4[4]) {
            puVar7 = *(undefined4 **)(in_ECX + 0xd0);
            goto LAB_0065d6d8;
          }
          local_b4 = puVar4;
          ppuVar8 = &local_b4;
        }
        puVar5 = *ppuVar8;
        if (puVar5 == *(undefined4 **)(in_ECX + 0xd0)) {
          pfVar9 = (float *)0x0;
        }
        else {
          *(undefined1 *)(puVar5[5] + 0x30) = 1;
          pfVar9 = (float *)puVar5[5];
        }
      }
      if (0.0 < *(float *)(in_ECX + 0xe8)) {
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        uVar2 = *(undefined2 *)((int)puVar5 + local_80 * 2);
        if (*(char *)(in_ECX + 0x108) == '\0') {
          pfVar9 = (float *)FUN_0065ea80(*(undefined4 *)(in_ECX + 0xcc),uVar2,1);
        }
        else {
          pfVar9 = (float *)FUN_0065e340(*(undefined4 *)(in_ECX + 0xcc),uVar2,1);
        }
      }
      if (pfVar9 == (float *)0x0) {
        if (cVar12 != '\0') goto LAB_0065db55;
      }
      else if (cVar12 == '\0') {
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar5 + local_80 * 2) != 10) {
          puVar5 = param_1;
          if (7 < (uint)param_1[5]) {
            puVar5 = (undefined4 *)*param_1;
          }
          if (*(short *)((int)puVar5 + local_80 * 2) != 0xd) {
            if (*(int *)(in_ECX + 0xf4) == 0) {
              if (local_79 == '\0') {
                local_cc = local_84 + *pfVar9 + 1.0;
                pfVar10 = &local_cc;
                if (*local_98 <= local_cc) {
                  pfVar10 = local_98;
                }
                *local_98 = *pfVar10;
                local_a4 = fStack_c + pfVar9[1] + 1.0;
                pfVar10 = &local_a4;
                if (*local_a0 <= local_a4) {
                  pfVar10 = local_a0;
                }
                *local_a0 = *pfVar10;
                local_c4 = (local_84 + *pfVar9 + pfVar9[2]) - 1.0;
                pfVar10 = &local_c4;
                if (local_c4 < *local_90 || local_c4 == *local_90) {
                  pfVar10 = local_90;
                }
                *local_90 = *pfVar10;
                local_bc = (fStack_c + pfVar9[1] + pfVar9[3]) - 1.0;
                pfVar10 = &local_bc;
                if (local_bc < *local_9c || local_bc == *local_9c) {
                  pfVar10 = local_9c;
                }
                *local_9c = *pfVar10;
              }
              else {
                local_79 = '\0';
                _local_28 = CONCAT44(fStack_c + pfVar9[1],local_10 + *pfVar9);
                local_30 = CONCAT44(fStack_c + pfVar9[1] + 1.0,local_10 + *pfVar9 + 1.0);
                *(undefined8 *)local_98 = local_30;
                _local_20 = CONCAT44(fStack_c + pfVar9[1],local_10 + *pfVar9);
                fVar13 = pfVar9[2] + local_10 + *pfVar9;
                fVar14 = pfVar9[3] + fStack_c + pfVar9[1];
                _local_40 = CONCAT44(fVar14,fVar13);
                local_48 = CONCAT44(fVar14 - 1.0,fVar13 - 1.0);
                *(undefined8 *)local_90 = local_48;
              }
            }
            else if (local_79 == '\0') {
              local_b8 = (pfVar9[6] + *pfVar9) * local_8c + local_84;
              pfVar10 = &local_b8;
              if (*local_98 <= local_b8) {
                pfVar10 = local_98;
              }
              *local_98 = *pfVar10;
              local_c0 = (pfVar9[7] + pfVar9[1]) * local_8c + fStack_c;
              pfVar10 = &local_c0;
              if (*local_a0 <= local_c0) {
                pfVar10 = local_a0;
              }
              *local_a0 = *pfVar10;
              local_c8 = (pfVar9[8] + *pfVar9) * local_8c + local_84;
              pfVar10 = &local_c8;
              if (local_c8 < *local_90 || local_c8 == *local_90) {
                pfVar10 = local_90;
              }
              *local_90 = *pfVar10;
              local_d0 = (pfVar9[9] + pfVar9[1]) * local_8c + fStack_c;
              pfVar10 = &local_d0;
              if (local_d0 < *local_9c || local_d0 == *local_9c) {
                pfVar10 = local_9c;
              }
              *local_9c = *pfVar10;
            }
            else {
              local_60 = pfVar9[6] + *pfVar9;
              fStack_5c = pfVar9[7] + pfVar9[1];
              local_78 = CONCAT44(fStack_5c,local_60);
              local_79 = '\0';
              local_18 = CONCAT44(fStack_c + fStack_5c * local_8c,local_10 + local_60 * local_8c);
              *(undefined8 *)local_98 = local_18;
              local_70 = pfVar9[8] + *pfVar9;
              fStack_6c = pfVar9[9] + pfVar9[1];
              local_58 = CONCAT44(fStack_6c,local_70);
              local_38 = CONCAT44(fStack_c + fStack_6c * local_8c,local_10 + local_70 * local_8c);
              *(undefined8 *)local_90 = local_38;
            }
          }
        }
      }
      else {
LAB_0065db55:
        pfVar10 = &local_10;
        if (local_84 < *local_90 || local_84 == *local_90) {
          pfVar10 = local_90;
        }
        *local_90 = *pfVar10;
        pfVar10 = &fStack_c;
        if (fStack_c < *local_9c || fStack_c == *local_9c) {
          pfVar10 = local_9c;
        }
        *local_9c = *pfVar10;
      }
      if ((uint)param_1[5] < 8) {
        local_88 = param_1;
      }
      else {
        local_88 = (undefined4 *)*param_1;
      }
      if (*(short *)((int)local_88 + local_80 * 2) == 10) {
        local_10 = 0.0;
        fStack_c = *(float *)(in_ECX + 0xf0) + *(float *)(in_ECX + 0xe4) + fStack_c;
LAB_0065ddb7:
        local_84 = local_10;
      }
      else {
        puVar5 = param_1;
        if (7 < (uint)param_1[5]) {
          puVar5 = (undefined4 *)*param_1;
        }
        if (*(short *)((int)puVar5 + local_80 * 2) == 0) break;
        if (pfVar9 != (float *)0x0) {
          local_84 = pfVar9[4] * local_8c + local_84;
          local_10 = local_84;
        }
        if (local_80 < local_94 + -1) {
          uVar3 = param_1[5];
          puVar5 = param_1;
          if (7 < uVar3) {
            puVar5 = (undefined4 *)*param_1;
          }
          if (*(short *)((int)puVar5 + local_80 * 2 + 2) != 10) {
            if (*(int *)(in_ECX + 0xf4) == 0) {
              if (*(char *)(in_ECX + 0x108) == '\0') {
                if (uVar3 < 8) {
                  local_88 = param_1;
                  puVar5 = param_1;
                }
                else {
                  local_88 = (undefined4 *)*param_1;
                  puVar5 = (undefined4 *)*param_1;
                }
                uVar11 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                      *(undefined2 *)((int)puVar5 + local_80 * 2 + 2),2,local_ac);
                uVar11 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                      *(undefined2 *)((int)local_88 + local_80 * 2),uVar11);
                FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar11);
                local_84 = ((float)local_ac[0] * *(float *)(in_ECX + 0xe0)) /
                           (float)*(ushort *)(*(int *)(in_ECX + 0xd8) + 0x44) + local_84;
              }
              else {
                if (uVar3 < 8) {
                  local_88 = param_1;
                  puVar5 = param_1;
                }
                else {
                  local_88 = (undefined4 *)*param_1;
                  puVar5 = (undefined4 *)*param_1;
                }
                uVar11 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                      *(undefined2 *)((int)puVar5 + local_80 * 2 + 2),0,local_ac);
                uVar11 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                      *(undefined2 *)((int)local_88 + local_80 * 2),uVar11);
                FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar11);
                local_84 = (float)(local_ac[0] >> 6) + local_84;
              }
            }
            local_84 = *(float *)(in_ECX + 0xec) + local_84;
            local_10 = local_84;
            if (*(char *)(in_ECX + 0x108) != '\0') {
              local_10 = (float)(int)local_84;
              goto LAB_0065ddb7;
            }
          }
        }
      }
      local_80 = local_80 + 1;
    } while (local_80 < local_94);
  }
  if (param_4 == 0) goto LAB_0065deba;
  FUN_0065d530(param_1,&local_68,&local_50,0,0xffffffff,param_6);
  if ((param_4 & 1) == 0) {
    if ((param_4 & 2) != 0) {
      *local_98 = *local_98 - local_50;
      local_50 = *local_90 - local_50;
      goto LAB_0065de58;
    }
  }
  else {
    local_50 = (local_50 + local_68) * 0.5;
    *local_98 = *local_98 - local_50;
    local_50 = *local_90 - local_50;
LAB_0065de58:
    *local_90 = local_50;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 8) == 0) goto LAB_0065deba;
    *local_a0 = *local_a0 - local_4c;
    local_4c = *local_9c - local_4c;
  }
  else {
    local_4c = (local_4c + local_64) * 0.5;
    *local_a0 = *local_a0 - local_4c;
    local_4c = *local_9c - local_4c;
  }
  *local_9c = local_4c;
LAB_0065deba:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065e340 @ 0065e340  kind=lib  attributed-by=lib-island  size=868 */

void FUN_0065e340(int *param_1,ushort param_2,char param_3)

{
  undefined8 uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined4 *puVar9;
  uint in_ECX;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  float fVar13;
  void *local_88;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 *local_60;
  int local_5c;
  uint local_58;
  undefined1 *local_54;
  int local_50;
  int local_4c;
  undefined1 local_45;
  void *local_44;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f6fcb;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar5 = (undefined1 *)(uint)param_2;
  local_60 = puVar5;
  local_58 = in_ECX;
  local_14 = uVar4;
  if (param_1 != (int *)0x0) {
    local_54 = puVar5;
    FUN_0043f720(&local_50,&local_54);
    if (local_50 == *param_1) {
      iVar6 = FUN_0068f8f0(*(undefined4 *)(in_ECX + 0xd8),
                           (int)(*(float *)(in_ECX + 0xe0) * 64.0 + 0.5),
                           (int)(*(float *)(in_ECX + 0xe4) * 64.0 + 0.5),0,0,uVar4);
      if ((iVar6 == 0) &&
         (iVar6 = FUN_00692920(*(undefined4 *)(in_ECX + 0xd8),puVar5,8), iVar6 == 0)) {
        FUN_00695360(*(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x54),&local_4c);
        if (param_3 != '\0') {
          FUN_006970b0(&local_4c,*(undefined4 *)(in_ECX + 0xdc),1);
        }
        FUN_00695420(&local_4c,0,0,1);
        uVar1 = *(undefined8 *)(local_4c + 0x1c);
        local_70 = *(ulonglong *)(local_4c + 0x24);
        local_78._4_4_ = (int)((ulonglong)uVar1 >> 0x20);
        local_78._0_4_ = (int)uVar1;
        iVar6 = local_78._4_4_ + 2;
        local_68 = *(undefined8 *)(local_4c + 0x2c);
        iVar11 = (int)local_78 + 2;
        fVar13 = 0.0;
        local_78 = uVar1;
        local_5c = iVar6;
        if ((0 < iVar6) && (0 < iVar11)) {
          local_45 = 0;
          FUN_0064d0c0(iVar11 * iVar6 * 4,&local_45);
          iVar3 = local_5c;
          local_8 = 0;
          if (0 < iVar6) {
            local_54 = (undefined1 *)((int)local_88 + 3);
            do {
              iVar10 = 0;
              if (0 < iVar11) {
                local_50 = iVar6 * 4;
                puVar12 = (undefined1 *)((local_70._4_4_ - (int)local_70) + -1 + (int)fVar13);
                puVar5 = local_54;
                do {
                  *(undefined2 *)(puVar5 + -3) = 0xffff;
                  puVar5[-1] = 0xff;
                  if (((((int)fVar13 < 1) || (iVar10 < 1)) || (local_78._4_4_ < (int)fVar13)) ||
                     ((int)local_78 < iVar10)) {
                    *puVar5 = 0;
                  }
                  else {
                    *puVar5 = *puVar12;
                  }
                  puVar12 = puVar12 + (int)local_70;
                  iVar10 = iVar10 + 1;
                  puVar5 = puVar5 + local_50;
                  iVar6 = local_5c;
                } while (iVar10 < iVar11);
              }
              fVar13 = (float)((int)fVar13 + 1);
              local_54 = local_54 + 4;
            } while ((int)fVar13 < iVar6);
          }
          bVar2 = 99 < local_5c;
          uVar7 = FUN_0040eb60(&PTR_006fccac);
          local_8._0_1_ = 1;
          uVar7 = FUN_00659fe0(local_2c,uVar7,local_60);
          local_70 = (ulonglong)CONCAT14(bVar2,(uint)bVar2);
          local_78 = CONCAT44(1,(int)local_78);
          local_68 = 0;
          local_8 = CONCAT31(local_8._1_3_,2);
          fVar13 = (float)(**(code **)(**(int **)(local_58 + 4) + 8))
                                    (iVar3,iVar11,local_88,(int)&local_78 + 4,uVar7,1);
          if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_2c[0]);
          }
          local_18 = 7;
          local_1c = 0;
          local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
          if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_44);
          }
          local_8 = 0xffffffff;
          if (local_88 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_88);
          }
        }
        pfVar8 = operator_new(0x34);
        local_58 = (uint)local_60 & 0xffff;
        puVar9 = (undefined4 *)FUN_00468910(&local_58);
        *puVar9 = pfVar8;
        iVar6 = *(int *)(local_4c + 0x18);
        *pfVar8 = (float)(*(int *)(local_4c + 0x14) + -1);
        pfVar8[1] = (float)(-1 - iVar6);
        pfVar8[2] = (float)local_5c;
        pfVar8[3] = (float)iVar11;
        pfVar8[0xb] = 0.0;
        iVar6 = *(int *)(local_4c + 0x10);
        pfVar8[4] = (float)*(int *)(local_4c + 0xc) * 1.5258789e-05;
        pfVar8[5] = (float)iVar6 * 1.5258789e-05;
        pfVar8[10] = fVar13;
        *(undefined1 *)(pfVar8 + 0xc) = 1;
        FUN_006952a0(local_4c);
      }
    }
    else {
      *(undefined1 *)(*(int *)(local_50 + 0x14) + 0x30) = 1;
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065e6b0 @ 0065e6b0  kind=lib  attributed-by=lib-island  size=97 */

undefined4 FUN_0065e6b0(ushort param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int in_ECX;
  undefined4 *puVar4;
  uint uVar5;
  
  uVar5 = (uint)param_1;
  puVar2 = *(undefined4 **)(in_ECX + 0xd0);
  cVar1 = *(char *)((int)puVar2[1] + 0xd);
  _param_1 = puVar2;
  puVar4 = (undefined4 *)puVar2[1];
  while (cVar1 == '\0') {
    if ((int)puVar4[4] < (int)uVar5) {
      puVar3 = (undefined4 *)puVar4[2];
      puVar4 = _param_1;
    }
    else {
      puVar3 = (undefined4 *)*puVar4;
    }
    _param_1 = puVar4;
    puVar4 = puVar3;
    cVar1 = *(char *)((int)puVar3 + 0xd);
  }
  if ((_param_1 == puVar2) || ((int)uVar5 < (int)_param_1[4])) {
    _param_1 = puVar2;
  }
  if (_param_1 != puVar2) {
    *(undefined1 *)(_param_1[5] + 0x30) = 1;
    return _param_1[5];
  }
  return 0;
}


/* FUN_0065e720 @ 0065e720  kind=lib  attributed-by=lib-island  size=419 */

void FUN_0065e720(undefined4 param_1,undefined4 param_2,float param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,float param_7,float *param_8,float *param_9,
                 uint param_10,undefined4 param_11,undefined4 param_12,undefined4 param_13)

{
  int in_ECX;
  float fVar1;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7008;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  FUN_006605c0(param_3,param_4,param_5,param_6,param_2,param_11);
  fVar1 = param_3 / *(float *)(in_ECX + 0xe4);
  param_3 = param_3 / *(float *)(in_ECX + 0xe0);
  if ((char)param_11 != '\0') {
    param_7 = param_7 / param_3;
  }
  if ((param_10 & 0x10) == 0) {
    FUN_0065d530(param_1,param_8,param_9,param_10,param_12,param_13);
  }
  else {
    local_18 = 7;
    local_1c = 0;
    local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
    FUN_0040f680(param_1,0,0xffffffff);
    local_8 = 0;
    FUN_00660d50(local_2c,param_7);
    FUN_0065d530(local_2c,param_8,param_9,param_10,param_12,param_13);
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  *param_8 = *param_8 * param_3;
  param_8[1] = param_8[1] * fVar1;
  *param_9 = *param_9 * param_3;
  param_9[1] = param_9[1] * fVar1;
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x10c));
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0065ea80 @ 0065ea80  kind=lib  attributed-by=lib-island  size=1985 */

void FUN_0065ea80(undefined4 *param_1,ushort param_2,char param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  bool bVar4;
  void *pvVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  float *pfVar10;
  undefined4 *puVar11;
  int in_ECX;
  undefined1 *puVar12;
  int iVar13;
  undefined1 *puVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_e4;
  float local_e0;
  undefined1 local_d9;
  undefined1 *local_d8;
  float local_d4;
  float local_d0;
  int local_cc;
  float local_c8;
  int local_c4;
  float local_c0;
  undefined4 *local_bc;
  void *local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  void *local_a8 [4];
  undefined4 uStack_98;
  uint uStack_94;
  float local_84;
  float local_74;
  float local_60;
  float local_5c;
  float local_54;
  void *local_4c;
  uint uStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  uint local_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006f704e;
  local_14 = ExceptionList;
  local_1c = DAT_0076aa78 ^ (uint)&local_e4;
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xffffff10;
  ExceptionList = &local_14;
  local_c8 = (float)(uint)param_2;
  local_bc = param_1;
  if (param_1 != (undefined4 *)0x0) {
    local_e4 = local_c8;
    local_c4 = in_ECX;
    FUN_0043f720(&local_d8,&local_e4);
    if (local_d8 == (undefined1 *)*param_1) {
      iVar7 = FUN_0068f8f0(*(undefined4 *)(in_ECX + 0xd8),
                           (int)(*(float *)(in_ECX + 0xe0) * 64.0 + 0.5),
                           (int)(*(float *)(in_ECX + 0xe4) * 64.0 + 0.5),0,0,uVar6);
      FUN_0068f1b0(*(undefined4 *)(in_ECX + 0xd8),(int *)(in_ECX + 0x78),0);
      if ((iVar7 == 0) &&
         (iVar7 = FUN_00692920(*(undefined4 *)(in_ECX + 0xd8),(uint)local_c8 & 0xffff,10),
         iVar7 == 0)) {
        iVar7 = *(int *)(in_ECX + 0xd8);
        iVar8 = *(int *)(iVar7 + 0x54);
        local_d4 = (float)*(int *)(iVar8 + 0x18) * 0.015625;
        local_d0 = (float)*(int *)(iVar8 + 0x1c) * 0.015625;
        FUN_00423e70();
        local_e0 = (float)*(int *)(in_ECX + 0x84) * 1.5258789e-05;
        local_c0 = (float)*(int *)(in_ECX + 0x78) * 1.5258789e-05;
        local_e4 = (float)-*(int *)(in_ECX + 0x7c) * 1.5258789e-05;
        local_d8 = (undefined1 *)((float)-*(int *)(in_ECX + 0x80) * 1.5258789e-05);
        fVar16 = 1.0 / (local_74 * 0.0 + local_84 * local_d4 + local_54);
        local_34 = CONCAT44(fVar16 * (local_e0 * 0.0 + (float)local_d8 * local_d4 + local_5c),
                            fVar16 * (local_e4 * 0.0 + local_c0 * local_d4 + local_60));
        local_74 = local_74 * local_d0;
        fVar16 = 1.0 / (local_74 + local_84 * local_d4 + local_54);
        local_2c = CONCAT44(fVar16 * (local_e0 * local_d0 + (float)local_d8 * local_d4 + local_5c),
                            fVar16 * (local_e4 * local_d0 + local_c0 * local_d4 + local_60));
        fVar19 = 0.0;
        fVar16 = 0.0;
        iVar8 = 0;
        fVar17 = 1.0 / (local_84 * 0.0 + local_74 + local_54);
        fVar18 = 0.0;
        local_24 = CONCAT44(fVar17 * ((float)local_d8 * 0.0 + local_e0 * local_d0 + local_5c),
                            fVar17 * (local_c0 * 0.0 + local_e4 * local_d0 + local_60));
        fVar17 = 0.0;
        do {
          fVar1 = *(float *)(&local_34 + iVar8);
          if (fVar1 < fVar19) {
            fVar19 = fVar1;
          }
          fVar2 = *(float *)((int)&local_34 + iVar8 * 8 + 4);
          if (fVar2 < fVar16) {
            fVar16 = fVar2;
          }
          if (fVar18 < fVar1) {
            fVar18 = fVar1;
          }
          if (fVar17 < fVar2) {
            fVar17 = fVar2;
          }
          iVar8 = iVar8 + 1;
        } while (iVar8 < 3);
        dVar15 = (double)((fVar17 - fVar16) * (fVar18 - fVar19));
        local_d0 = local_74;
        libm_sse2_sqrt_precise();
        local_d4 = 500.0 / (float)dVar15;
        if (local_d4 < 1.0) {
          local_b8 = (void *)(int)(local_c0 * local_d4 * 65536.0);
          local_b0 = -(int)((float)local_d8 * local_d4 * 65536.0);
          local_ac = (int)(local_e0 * local_d4 * 65536.0);
          local_b4 = -(int)(local_e4 * local_d4 * 65536.0);
          FUN_0068f1b0(iVar7,&local_b8,0);
          iVar7 = FUN_00692920(*(undefined4 *)(in_ECX + 0xd8),(uint)local_c8 & 0xffff,10);
          if (iVar7 != 0) goto LAB_0065f22c;
        }
        else {
          local_d4 = 1.0;
        }
        FUN_00695360(*(undefined4 *)(*(int *)(in_ECX + 0xd8) + 0x54),&local_cc);
        if (param_3 != '\0') {
          FUN_006971a0(*(undefined4 *)(in_ECX + 0xdc),
                       (int)(*(float *)(in_ECX + 0xe8) * 64.0 * local_d4 + 0.5),1,0,0);
          FUN_006970b0(&local_cc,*(undefined4 *)(in_ECX + 0xdc),1);
        }
        FUN_00695420(&local_cc,0,0,1);
        uVar3 = *(undefined8 *)(local_cc + 0x1c);
        local_2c = *(ulonglong *)(local_cc + 0x24);
        local_34._4_4_ = (int)((ulonglong)uVar3 >> 0x20);
        local_34._0_4_ = (int)uVar3;
        fVar16 = (float)(local_34._4_4_ + 2);
        local_24 = *(ulonglong *)(local_cc + 0x2c);
        iVar7 = (int)local_34 + 2;
        local_e4 = 0.0;
        local_e0 = fVar16;
        local_34 = uVar3;
        if ((0 < (int)fVar16) && (0 < iVar7)) {
          local_d9 = 0;
          local_b8 = (void *)0x0;
          local_b4 = 0;
          local_b0 = 0;
          FUN_0064e450(iVar7 * (int)fVar16 * 4,&local_d9);
          fVar19 = local_e0;
          iVar8 = 0;
          local_c = 0;
          if (0 < (int)fVar16) {
            local_d8 = (undefined1 *)((int)local_b8 + 3);
            do {
              iVar13 = 0;
              if (0 < iVar7) {
                local_e4 = (float)((int)fVar16 * 4);
                puVar14 = (undefined1 *)((local_2c._4_4_ - (int)local_2c) + -1 + iVar8);
                puVar12 = local_d8;
                do {
                  *(undefined2 *)(puVar12 + -3) = 0xffff;
                  puVar12[-1] = 0xff;
                  if ((((iVar8 < 1) || (iVar13 < 1)) || (local_34._4_4_ < iVar8)) ||
                     ((int)local_34 < iVar13)) {
                    *puVar12 = 0;
                  }
                  else {
                    *puVar12 = *puVar14;
                  }
                  puVar14 = puVar14 + (int)local_2c;
                  iVar13 = iVar13 + 1;
                  puVar12 = puVar12 + (int)local_e4;
                  fVar16 = local_e0;
                } while (iVar13 < iVar7);
              }
              iVar8 = iVar8 + 1;
              local_d8 = local_d8 + 4;
            } while (iVar8 < (int)fVar16);
          }
          bVar4 = 99 < (int)local_e0;
          uVar9 = FUN_0040eb60(&PTR_006fccac);
          local_c._0_1_ = 1;
          uVar9 = FUN_00659fe0(local_a8,uVar9,local_c8);
          pvVar5 = local_b8;
          local_34 = CONCAT44((uint)bVar4,1);
          local_2c = (ulonglong)(uint)bVar4;
          local_24 = local_24 & 0xffffffff00000000;
          local_c = CONCAT31(local_c._1_3_,2);
          local_e4 = (float)(**(code **)(**(int **)(local_c4 + 4) + 8))
                                      (fVar19,iVar7,local_b8,&local_34,uVar9,1);
          if (7 < uStack_94) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_a8[0]);
          }
          uStack_94 = 7;
          uStack_98 = 0;
          local_a8[0] = (void *)((uint)local_a8[0] & 0xffff0000);
          if (7 < uStack_38) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_4c);
          }
          local_c = 0xffffffff;
          fVar16 = fVar19;
          if (pvVar5 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            operator_delete(pvVar5);
          }
        }
        pfVar10 = operator_new(0x34);
        local_d0 = (float)((uint)local_c8 & 0xffff);
        puVar11 = (undefined4 *)FUN_00468910(&local_d0);
        *puVar11 = pfVar10;
        iVar8 = *(int *)(local_cc + 0x18);
        *pfVar10 = (float)(*(int *)(local_cc + 0x14) + -1) / local_d4;
        pfVar10[1] = (float)(-1 - iVar8) / local_d4;
        pfVar10[2] = (float)(int)fVar16 / local_d4;
        pfVar10[3] = (float)iVar7 / local_d4;
        pfVar10[0xb] = 0.0;
        iVar7 = *(int *)(*(int *)(*(int *)(local_c4 + 0xd8) + 0x54) + 0x28);
        pfVar10[5] = 0.0;
        pfVar10[4] = (float)iVar7 * 0.015625;
        pfVar10[10] = local_e4;
        *(undefined1 *)(pfVar10 + 0xc) = 1;
        FUN_006952a0(local_cc);
      }
    }
    else {
      *(undefined1 *)(*(int *)(local_d8 + 0x14) + 0x30) = 1;
    }
  }
LAB_0065f22c:
  ExceptionList = local_14;
  __security_check_cookie(local_1c ^ (uint)&local_e4);
  return;
}


/* FUN_00660270 @ 00660270  kind=lib  attributed-by=lib-island  size=836 */

void FUN_00660270(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  uint uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int in_ECX;
  int iVar5;
  int local_1c;
  int local_18;
  int local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7156;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar4 = param_2;
  if ((float)param_2 <= 0.0) {
    puVar4 = param_1;
  }
  if (((0.0 < (float)param_1) || (param_1 = puVar4, 0.0 < (float)puVar4)) && (0.0 <= (float)param_3)
     ) {
    *(undefined4 **)(in_ECX + 0xe4) = puVar4;
    *(undefined4 **)(in_ECX + 0xe0) = param_1;
    *(void **)(in_ECX + 0xe8) = param_3;
    FUN_0068f8f0(*(undefined4 *)(in_ECX + 0xd8),(int)((float)param_1 * 64.0 + 0.5),
                 (int)((float)puVar4 * 64.0 + 0.5),0,0,uVar1);
    FUN_0068f1b0(*(undefined4 *)(in_ECX + 0xd8),0,0);
    FUN_00423e70();
    *(undefined1 *)(in_ECX + 0x108) = 1;
    local_14 = 0;
    local_18 = (int)(*(float *)(in_ECX + 0xe4) * 64.0 + 0.5);
    local_1c = (int)(*(float *)(in_ECX + 0xe0) * 64.0 + 0.5);
    FUN_0065d3d0(&param_2,&local_1c);
    if (param_2 == *(undefined4 **)(in_ECX + 0x68)) {
      puVar4 = operator_new(8);
      local_8 = 0;
      param_2 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        puVar4 = (undefined4 *)0x0;
      }
      else {
        *puVar4 = 0;
        puVar4[1] = 0;
        uVar3 = FUN_0043c870();
        *puVar4 = uVar3;
      }
      local_8 = 0xffffffff;
      *(undefined4 **)(in_ECX + 200) = puVar4;
      local_14 = 0;
      local_18 = (int)(*(float *)(in_ECX + 0xe4) * 64.0 + 0.5);
      local_1c = (int)(*(float *)(in_ECX + 0xe0) * 64.0 + 0.5);
      puVar4 = (undefined4 *)FUN_005c3de0(&local_1c);
      *puVar4 = *(undefined4 *)(in_ECX + 200);
    }
    else {
      *(undefined4 *)(in_ECX + 200) = param_2[7];
    }
    if (0.0 < (float)param_3) {
      iVar5 = (int)((float)param_3 * 64.0 + 0.5);
      local_18 = (int)(*(float *)(in_ECX + 0xe4) * 64.0 + 0.5);
      local_1c = (int)(*(float *)(in_ECX + 0xe0) * 64.0 + 0.5);
      local_14 = iVar5;
      piVar2 = (int *)FUN_0065d3d0(&param_3,&local_1c);
      if (*piVar2 == *(int *)(in_ECX + 0x68)) {
        param_3 = operator_new(8);
        local_8 = 1;
        if (param_3 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          uVar3 = FUN_0065a8e0();
        }
        *(undefined4 *)(in_ECX + 0xcc) = uVar3;
        local_8 = 0xffffffff;
        local_1c = (int)(*(float *)(in_ECX + 0xe0) * 64.0 + 0.5);
        local_18 = (int)(*(float *)(in_ECX + 0xe4) * 64.0 + 0.5);
        local_14 = iVar5;
        puVar4 = (undefined4 *)FUN_005c3de0(&local_1c);
        *puVar4 = *(undefined4 *)(in_ECX + 0xcc);
      }
      else {
        *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(*piVar2 + 0x1c);
      }
      FUN_006971a0(*(undefined4 *)(in_ECX + 0xdc),(int)(*(float *)(in_ECX + 0xe8) * 64.0 + 0.5),1,0,
                   0);
      ExceptionList = local_10;
      return;
    }
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  ExceptionList = local_10;
  return;
}


/* FUN_006605c0 @ 006605c0  kind=lib  attributed-by=lib-island  size=292 */

void FUN_006605c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,char param_6)

{
  int in_ECX;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(int *)(in_ECX + 0xf4) == 0) {
    if (param_6 != '\0') {
      FUN_00660b60(param_5,param_1,param_2,param_3,param_4,&local_10,&local_1c,&local_14,&local_18);
      FUN_00660270(local_10,local_c,local_1c);
      *(undefined4 *)(in_ECX + 0xec) = local_14;
      param_4 = local_18;
      goto LAB_006606cb;
    }
    FUN_006606f0(param_1,param_2,param_5);
  }
  else {
    *(undefined4 *)(in_ECX + 0xe0) = param_1;
    *(undefined4 *)(in_ECX + 0xe4) = param_1;
    *(undefined4 *)(in_ECX + 0xe8) = param_2;
    *(undefined1 *)(in_ECX + 0x108) = 0;
  }
  *(undefined4 *)(in_ECX + 0xec) = param_3;
LAB_006606cb:
  *(undefined4 *)(in_ECX + 0xf0) = param_4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_006606f0 @ 006606f0  kind=lib  attributed-by=lib-island  size=1109 */

void FUN_006606f0(float param_1,float param_2,float *param_3)

{
  void *pvVar1;
  uint uVar2;
  undefined4 **ppuVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int *piVar6;
  int in_ECX;
  undefined4 *puVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  undefined4 *local_50;
  undefined4 local_4c;
  undefined4 *local_48;
  undefined4 *local_44;
  int *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 local_2c [8];
  void *local_24;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  pvVar1 = ExceptionList;
  local_c = 0xffffffff;
  puStack_10 = &LAB_006f71ae;
  local_14 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xffffffa0;
  ExceptionList = &local_14;
  *(float *)(in_ECX + 0x88) = *param_3;
  *(float *)(in_ECX + 0x8c) = param_3[1];
  *(float *)(in_ECX + 0x9c) = param_3[5];
  *(float *)(in_ECX + 0x98) = param_3[4];
  piVar6 = (int *)(in_ECX + 0x78);
  *piVar6 = (int)(*param_3 * 65536.0);
  *(int *)(in_ECX + 0x80) = -(int)(param_3[1] * 65536.0);
  *(int *)(in_ECX + 0x84) = (int)(param_3[5] * 65536.0);
  *(int *)(in_ECX + 0x7c) = -(int)(param_3[4] * 65536.0);
  if (param_1 <= 0.0) {
    ExceptionList = pvVar1;
    return;
  }
  *(float *)(in_ECX + 0xe0) = param_1;
  *(float *)(in_ECX + 0xe4) = param_1;
  *(undefined1 *)(in_ECX + 0x108) = 0;
  local_50 = (undefined4 *)(param_3[4] * 0.0 + *param_3);
  fVar9 = *param_3 * 0.0 + param_3[4];
  local_44 = (undefined4 *)(param_3[5] * 0.0 + param_3[1]);
  fVar10 = param_3[1] * 0.0 + param_3[5];
  dVar8 = (double)(fVar10 * fVar10 + fVar9 * fVar9);
  libm_sse2_sqrt_precise(uVar2);
  local_48 = (undefined4 *)(float)dVar8;
  dVar8 = (double)((float)local_44 * (float)local_44 + (float)local_50 * (float)local_50);
  libm_sse2_sqrt_precise();
  local_50 = (undefined4 *)(float)dVar8;
  ppuVar3 = &local_48;
  if ((float)dVar8 <= (float)local_48) {
    ppuVar3 = &local_50;
  }
  *(float *)(in_ECX + 0xe8) = (float)*ppuVar3 * param_2;
  puVar7 = (undefined4 *)(int)(param_1 * 64.0 + 0.5);
  local_48 = puVar7;
  FUN_0068f8f0(*(undefined4 *)(in_ECX + 0xd8),puVar7,puVar7,0,0);
  FUN_0068f1b0(*(undefined4 *)(in_ECX + 0xd8),piVar6,0);
  local_40 = (int *)0x0;
  local_3c = 0;
  local_38 = 0;
  FUN_0040d9d0(4);
  local_c._0_1_ = 0;
  local_c._1_3_ = 0;
  *local_40 = *piVar6;
  local_40[1] = *(int *)(in_ECX + 0x7c);
  local_40[2] = *(int *)(in_ECX + 0x80);
  local_40[3] = *(int *)(in_ECX + 0x84);
  local_4c = 0;
  local_50 = puVar7;
  uVar4 = FUN_0065a890(local_2c,&local_50,&local_40);
  FUN_0065d440(&local_50,uVar4);
  if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_24);
  }
  if (local_50 == *(undefined4 **)(in_ECX + 0x70)) {
    puVar5 = operator_new(8);
    local_c._0_1_ = 1;
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      *puVar5 = 0;
      puVar5[1] = 0;
      local_50 = puVar5;
      uVar4 = FUN_0043c870();
      *puVar5 = uVar4;
    }
    puVar7 = local_48;
    *(undefined4 **)(in_ECX + 200) = puVar5;
    local_c._0_1_ = 0;
    local_50 = local_48;
    local_4c = 0;
    uVar4 = FUN_0065a890(local_2c,&local_50,&local_40);
    local_c._0_1_ = 2;
    puVar5 = (undefined4 *)FUN_0065ac70(uVar4);
    *puVar5 = *(undefined4 *)(in_ECX + 200);
    local_c._0_1_ = 0;
    if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_24);
    }
  }
  else {
    *(undefined4 *)(in_ECX + 200) = local_50[9];
  }
  if (param_2 <= 0.0) {
    *(undefined4 *)(in_ECX + 0xcc) = 0;
  }
  else {
    local_50 = (undefined4 *)(int)(param_2 * 64.0 + 0.5);
    local_34 = puVar7;
    local_30 = local_50;
    uVar4 = FUN_0065a890(local_2c,&local_34,&local_40);
    piVar6 = (int *)FUN_0065d440(&local_44,uVar4);
    if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_24);
    }
    if (*piVar6 == *(int *)(in_ECX + 0x70)) {
      puVar7 = operator_new(8);
      local_c._0_1_ = 3;
      local_44 = puVar7;
      if (puVar7 == (undefined4 *)0x0) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        *puVar7 = 0;
        puVar7[1] = 0;
        uVar4 = FUN_0043c870();
        *puVar7 = uVar4;
      }
      local_34 = local_48;
      local_30 = local_50;
      local_c._0_1_ = 0;
      *(undefined4 **)(in_ECX + 0xcc) = puVar7;
      uVar4 = FUN_0065a890(local_2c,&local_34,&local_40);
      local_c._0_1_ = 4;
      puVar7 = (undefined4 *)FUN_0065ac70(uVar4);
      *puVar7 = *(undefined4 *)(in_ECX + 0xcc);
      if (local_24 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_24);
      }
    }
    else {
      *(undefined4 *)(in_ECX + 0xcc) = *(undefined4 *)(*piVar6 + 0x24);
    }
    FUN_006971a0(*(undefined4 *)(in_ECX + 0xdc),(int)(*(float *)(in_ECX + 0xe8) * 64.0 + 0.5),1,0,0)
    ;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_40);
}


/* FUN_00660b60 @ 00660b60  kind=lib  attributed-by=lib-island  size=481 */

void FUN_00660b60(float *param_1,float param_2,float param_3,float param_4,float param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9)

{
  int in_ECX;
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (*(int *)(in_ECX + 0xf4) != 0) {
    *param_6 = param_2;
    param_6[1] = param_2;
    *param_7 = param_3;
    *param_8 = param_4;
    *param_9 = param_5;
    return;
  }
  fVar3 = param_1[5] * 0.0 + param_1[1];
  fVar4 = param_1[4] * 0.0 + *param_1;
  fVar5 = param_1[1] * 0.0 + param_1[5];
  fVar6 = *param_1 * 0.0 + param_1[4];
  dVar1 = (double)(fVar3 * fVar3 + fVar4 * fVar4);
  libm_sse2_sqrt_precise();
  dVar2 = (double)(fVar5 * fVar5 + fVar6 * fVar6);
  libm_sse2_sqrt_precise();
  fVar4 = (float)(int)((float)dVar1 * param_2 * 64.0 + 0.5) * 0.015625;
  fVar3 = (float)(int)((float)dVar2 * param_2 * 64.0 + 0.5) * 0.015625;
  *param_6 = fVar4;
  param_6[1] = fVar3;
  if (1000.0 < fVar4) {
    *param_6 = 1000.0;
  }
  if (1000.0 < fVar3) {
    param_6[1] = 1000.0;
  }
  fVar3 = param_6[1];
  fVar4 = *param_6;
  *param_7 = (fVar3 / param_2 + fVar4 / param_2) * 0.5 * param_3;
  *param_8 = (fVar4 / param_2) * param_4;
  *param_9 = (fVar3 / param_2) * param_5;
  if (*param_6 <= 1.0 && *param_6 != 1.0) {
    *param_6 = 1.0;
  }
  if (param_6[1] <= 1.0 && param_6[1] != 1.0) {
    param_6[1] = 1.0;
  }
  if (DAT_00768f6c < *param_7) {
    *param_7 = DAT_00768f6c;
  }
  return;
}


/* FUN_00660d50 @ 00660d50  kind=lib  attributed-by=lib-island  size=765 */

void FUN_00660d50(undefined4 *param_1,float param_2)

{
  undefined2 uVar1;
  uint uVar2;
  undefined4 *puVar3;
  float fVar4;
  undefined4 *puVar5;
  int iVar6;
  undefined4 uVar7;
  int in_ECX;
  int iVar8;
  float fVar9;
  int local_24 [2];
  int local_1c;
  float local_18;
  undefined4 *local_14;
  int local_10;
  float local_c;
  float local_8;
  
  puVar3 = param_1;
  local_10 = param_1[4];
  local_8 = 0.0;
  local_c = 0.0;
  local_1c = -1;
  local_18 = 1.0;
  if (*(int *)(in_ECX + 0xf4) != 0) {
    local_18 = *(float *)(in_ECX + 0xe4) / (*(float *)(in_ECX + 0x104) - *(float *)(in_ECX + 0xfc));
  }
  iVar8 = 0;
  if (0 < local_10) {
    do {
      fVar9 = 0.0;
      uVar2 = puVar3[5];
      puVar5 = puVar3;
      if (7 < uVar2) {
        puVar5 = (undefined4 *)*puVar3;
      }
      if (*(short *)((int)puVar5 + iVar8 * 2) == 0x20) {
LAB_00660e03:
        iVar6 = iVar8;
        fVar4 = local_8;
        if (param_2 <= local_8) {
          if (-1 < local_1c) {
            puVar5 = puVar3;
            if (7 < uVar2) {
              puVar5 = (undefined4 *)*puVar3;
            }
            *(undefined2 *)((int)puVar5 + local_1c * 2) = 10;
          }
          local_8 = local_8 - local_c;
          fVar4 = local_8;
        }
      }
      else {
        puVar5 = puVar3;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*puVar3;
        }
        if (*(short *)((int)puVar5 + iVar8 * 2) == 10) goto LAB_00660e03;
        puVar5 = puVar3;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*puVar3;
        }
        if ((*(short *)((int)puVar5 + iVar8 * 2) == 0xd) ||
           (iVar6 = local_1c, fVar4 = local_c, iVar8 == local_10 + -1)) goto LAB_00660e03;
      }
      local_c = fVar4;
      local_1c = iVar6;
      uVar2 = puVar3[5];
      puVar5 = puVar3;
      if (7 < uVar2) {
        puVar5 = (undefined4 *)*puVar3;
      }
      if (*(short *)((int)puVar5 + iVar8 * 2) == 10) {
LAB_00661027:
        local_c = 0.0;
      }
      else {
        puVar5 = puVar3;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*puVar3;
        }
        if (*(short *)((int)puVar5 + iVar8 * 2) == 0xd) goto LAB_00661027;
        puVar5 = puVar3;
        if (7 < uVar2) {
          puVar5 = (undefined4 *)*puVar3;
        }
        uVar1 = *(undefined2 *)((int)puVar5 + iVar8 * 2);
        if (*(int *)(in_ECX + 0xf4) == 0) {
          if (*(char *)(in_ECX + 0x108) == '\0') {
            iVar6 = FUN_0065ea80(*(undefined4 *)(in_ECX + 200),uVar1,0);
          }
          else {
            iVar6 = FUN_0065e340(*(undefined4 *)(in_ECX + 200),uVar1,0);
          }
        }
        else {
          iVar6 = FUN_0065e6b0(uVar1);
        }
        param_1 = (undefined4 *)0x0;
        if (iVar6 != 0) {
          param_1 = *(undefined4 **)(iVar6 + 0x10);
        }
        if (iVar8 < local_10 + -1) {
          if (*(int *)(in_ECX + 0xf4) == 0) {
            if (*(char *)(in_ECX + 0x108) == '\0') {
              if ((uint)puVar3[5] < 8) {
                local_14 = puVar3;
                puVar5 = puVar3;
              }
              else {
                local_14 = (undefined4 *)*puVar3;
                puVar5 = (undefined4 *)*puVar3;
              }
              uVar7 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar5 + iVar8 * 2 + 2),2,local_24);
              uVar7 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_14 + iVar8 * 2),uVar7);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar7);
              param_1 = (undefined4 *)
                        (((float)local_24[0] * *(float *)(in_ECX + 0xe0)) /
                         (float)*(ushort *)(*(int *)(in_ECX + 0xd8) + 0x44) + (float)param_1);
            }
            else {
              if ((uint)puVar3[5] < 8) {
                local_14 = puVar3;
                puVar5 = puVar3;
              }
              else {
                local_14 = (undefined4 *)*puVar3;
                puVar5 = (undefined4 *)*puVar3;
              }
              uVar7 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)puVar5 + iVar8 * 2 + 2),0,local_24);
              uVar7 = FUN_0068fb90(*(undefined4 *)(in_ECX + 0xd8),
                                   *(undefined2 *)((int)local_14 + iVar8 * 2),uVar7);
              FUN_0068fa30(*(undefined4 *)(in_ECX + 0xd8),uVar7);
              param_1 = (undefined4 *)((float)(local_24[0] >> 6) + (float)param_1);
            }
          }
          local_8 = *(float *)(in_ECX + 0xec) + local_8;
        }
        if (*(char *)(in_ECX + 0x108) == '\0') {
          fVar9 = (float)param_1 * local_18 + local_8;
        }
        else {
          fVar9 = (float)(int)((float)param_1 + local_8);
        }
      }
      iVar8 = iVar8 + 1;
      local_8 = fVar9;
    } while (iVar8 < local_10);
  }
  return;
}


/* FUN_00665c90 @ 00665c90  kind=lib  attributed-by=lib-island  size=45 */

void FUN_00665c90(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  while (param_1 != param_2) {
    param_2 = param_2 + -0x10;
    param_3 = param_3 + -0x10;
    puVar2 = param_2;
    puVar3 = param_3;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


/* FUN_00665cc0 @ 00665cc0  kind=lib  attributed-by=lib-island  size=48 */

void FUN_00665cc0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (param_1 != param_2) {
    iVar3 = param_2 - (int)param_3;
    do {
      puVar1 = (undefined4 *)(param_2 + -8);
      param_2 = param_2 + -8;
      puVar2 = param_3 + -2;
      *puVar2 = *puVar1;
      param_3[-1] = *(undefined4 *)(iVar3 + 4 + (int)puVar2);
      param_3 = puVar2;
    } while (param_2 != param_1);
  }
  return;
}


/* FUN_00665cf0 @ 00665cf0  kind=lib  attributed-by=lib-island  size=54 */

void FUN_00665cf0(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != param_2) {
    puVar1 = param_3;
    iVar3 = param_2;
    do {
      iVar4 = iVar3 + -0xc;
      puVar2 = puVar1 + -3;
      *puVar2 = *(undefined4 *)(iVar3 + -0xc);
      puVar1[-2] = *(undefined4 *)((param_2 - (int)param_3) + 4 + (int)puVar2);
      puVar1[-1] = *(undefined4 *)(iVar3 + -4);
      puVar1 = puVar2;
      iVar3 = iVar4;
    } while (iVar4 != param_1);
  }
  return;
}


/* FUN_00666080 @ 00666080  kind=lib  attributed-by=lib-island  size=45 */

void FUN_00666080(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      puVar2 = param_3;
      puVar3 = param_1;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *puVar3 = *puVar2;
        puVar2 = puVar2 + 1;
        puVar3 = puVar3 + 1;
      }
    }
    param_1 = param_1 + 0x10;
  }
  return;
}


/* FUN_006660b0 @ 006660b0  kind=lib  attributed-by=lib-island  size=40 */

void FUN_006660b0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
    }
    param_1 = param_1 + 2;
  }
  return;
}


/* FUN_006660e0 @ 006660e0  kind=lib  attributed-by=lib-island  size=46 */

void FUN_006660e0(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = *param_3;
      param_1[1] = param_3[1];
      param_1[2] = param_3[2];
    }
    param_1 = param_1 + 3;
  }
  return;
}


/* FUN_00666110 @ 00666110  kind=lib  attributed-by=lib-island  size=60 */

undefined4 * FUN_00666110(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_00666150 @ 00666150  kind=lib  attributed-by=lib-island  size=42 */

void FUN_00666150(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  while (param_1 != param_2) {
    puVar1 = param_1 + 0x10;
    puVar3 = param_3;
    puVar4 = param_1;
    for (iVar2 = 0x10; param_1 = puVar1, iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
  }
  return;
}


/* FUN_00666180 @ 00666180  kind=lib  attributed-by=lib-island  size=43 */

void FUN_00666180(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    *param_1 = *param_3;
    param_1[1] = param_3[1];
    param_1[2] = param_3[2];
  }
  return;
}


/* FUN_00667e50 @ 00667e50  kind=lib  attributed-by=lib-island  size=56 */

uint FUN_00667e50(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = in_ECX[2] - *in_ECX >> 6;
  if (0x3ffffff - (uVar1 >> 1) < uVar1) {
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


/* FUN_00667e90 @ 00667e90  kind=lib  attributed-by=lib-island  size=72 */

uint FUN_00667e90(uint param_1)

{
  int *in_ECX;
  uint uVar1;
  
  uVar1 = (in_ECX[2] - *in_ECX) / 0xc;
  if (0x15555555 - (uVar1 >> 1) < uVar1) {
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


/* FUN_00669250 @ 00669250  kind=lib  attributed-by=lib-island  size=105 */

void FUN_00669250(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if ((param_2 == (undefined4 *)*in_ECX) && (param_3 == (undefined4 *)in_ECX[1])) {
    in_ECX[1] = (undefined4 *)*in_ECX;
    *param_1 = param_2;
    return;
  }
  if (param_2 != param_3) {
    puVar1 = (undefined4 *)in_ECX[1];
    puVar2 = param_2;
    while (param_3 != puVar1) {
      puVar3 = param_3 + 0x10;
      puVar5 = puVar2 + 0x10;
      puVar6 = param_3;
      puVar7 = puVar2;
      for (iVar4 = 0x10; puVar2 = puVar5, param_3 = puVar3, iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar7 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar7 = puVar7 + 1;
      }
    }
    in_ECX[1] = puVar2;
  }
  *param_1 = param_2;
  return;
}


/* FUN_0066add0 @ 0066add0  kind=lib  attributed-by=lib-island  size=101 */

void FUN_0066add0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint *in_ECX;
  
  puVar1 = (undefined4 *)in_ECX[1];
  if ((param_1 < puVar1) && (puVar2 = (undefined4 *)*in_ECX, puVar2 <= param_1)) {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_0063dc90(1);
    }
    if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
      *(undefined4 *)in_ECX[1] = *(undefined4 *)(*in_ECX + ((int)param_1 - (int)puVar2 >> 2) * 4);
      in_ECX[1] = in_ECX[1] + 4;
      return;
    }
  }
  else {
    if (puVar1 == (undefined4 *)in_ECX[2]) {
      FUN_0063dc90(1);
    }
    if ((undefined4 *)in_ECX[1] != (undefined4 *)0x0) {
      *(undefined4 *)in_ECX[1] = *param_1;
    }
  }
  in_ECX[1] = in_ECX[1] + 4;
  return;
}


/* FUN_0066b110 @ 0066b110  kind=lib  attributed-by=lib-island  size=112 */

void FUN_0066b110(uint param_1,undefined4 param_2)

{
  void *_Dst;
  void *_Src;
  void *pvVar1;
  undefined4 *in_ECX;
  uint uVar2;
  
  _Src = (void *)in_ECX[1];
  pvVar1 = (void *)*in_ECX;
  uVar2 = (int)_Src - (int)pvVar1 >> 2;
  if (param_1 < uVar2) {
    _Dst = (void *)((int)pvVar1 + param_1 * 4);
    if (_Dst == pvVar1) {
      in_ECX[1] = pvVar1;
      return;
    }
    if (_Dst != _Src) {
      memmove(_Dst,_Src,0);
      in_ECX[1] = _Dst;
      return;
    }
  }
  else if (uVar2 < param_1) {
    FUN_00667ee0(&param_1,_Src,param_1 - uVar2,param_2);
  }
  return;
}


/* FUN_0066b180 @ 0066b180  kind=lib  attributed-by=lib-island  size=112 */

void FUN_0066b180(uint param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int *in_ECX;
  
  iVar4 = in_ECX[1];
  iVar2 = *in_ECX;
  uVar3 = (iVar4 - iVar2) / 0xc;
  if (param_1 < uVar3) {
    iVar1 = iVar2 + param_1 * 0xc;
    if (iVar1 == iVar2) {
      in_ECX[1] = iVar2;
      return;
    }
    if (iVar1 != iVar4) {
      iVar4 = FUN_00639c80(iVar4,iVar4,iVar1);
      in_ECX[1] = iVar4;
      return;
    }
  }
  else if (uVar3 < param_1) {
    FUN_006685d0(&param_1,iVar4,param_1 - uVar3,param_2);
  }
  return;
}


/* FUN_00678520 @ 00678520  kind=lib  attributed-by=lib-island  size=47 */

void FUN_00678520(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x14);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0067852e. Too many branches */
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


/* FUN_0067dec0 @ 0067dec0  kind=lib  attributed-by=lib-island  size=46 */

int FUN_0067dec0(undefined2 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0046d990();
  *(undefined2 *)(iVar1 + 0xc) = 0;
  if ((undefined2 *)(iVar1 + 0x10) != (undefined2 *)0x0) {
    *(undefined2 *)(iVar1 + 0x10) = *param_1;
    *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)(param_1 + 2);
  }
  return iVar1;
}


/* FUN_0067def0 @ 0067def0  kind=lib  attributed-by=lib-island  size=489 */

undefined4 * FUN_0067def0(undefined4 *param_1,int *param_2,ushort *param_3,undefined4 param_4)

{
  int *piVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 *in_ECX;
  bool bVar4;
  uint uStack_30;
  undefined1 local_20 [12];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f8a10;
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
    puVar2 = &uStack_30;
    if (*param_3 < *(ushort *)(param_2 + 4)) {
LAB_0067df71:
      local_14 = (undefined1 *)puVar2;
      FUN_00452a10(param_1,1,param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    local_14 = (undefined1 *)&uStack_30;
    if (*(ushort *)(piVar1[2] + 0x10) < *param_3) {
      local_14 = (undefined1 *)&uStack_30;
      FUN_00452a10(param_1,0,piVar1[2],param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    bVar4 = *(ushort *)(param_2 + 4) < *param_3;
    puVar2 = &uStack_30;
    if (*param_3 < *(ushort *)(param_2 + 4)) {
      FUN_0042c740();
      if (*(ushort *)(param_2 + 4) < *param_3) {
        puVar2 = (uint *)local_14;
        if (*(char *)(param_2[2] + 0xd) != '\0') {
          FUN_00452a10(param_1,0,param_2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0067df71;
      }
      bVar4 = *(ushort *)(param_2 + 4) < *param_3;
      puVar2 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar2;
    if ((bVar4) && ((FUN_005c3ea0(), param_2 == piVar1 || (*param_3 < *(ushort *)(param_2 + 4))))) {
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
  puVar3 = (undefined4 *)FUN_0067e0f0(local_20,0,param_3,param_4);
  *param_1 = *puVar3;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0067e0f0 @ 0067e0f0  kind=lib  attributed-by=lib-island  size=228 */

void FUN_0067e0f0(undefined4 *param_1,char param_2,ushort *param_3,void *param_4)

{
  int *piVar1;
  ushort *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  undefined4 *in_ECX;
  bool bVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar2 = param_3;
  puStack_c = &LAB_006f8a30;
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
        bVar5 = *param_3 < *(ushort *)(piVar6 + 4);
      }
      else {
        bVar5 = *param_3 <= *(ushort *)(piVar6 + 4);
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
      goto LAB_0067e186;
    }
    FUN_0042c740();
  }
  if (*puVar2 <= *(ushort *)(_param_2 + 4)) {
                    /* WARNING: Subroutine does not return */
    operator_delete(param_4);
  }
LAB_0067e186:
  puVar4 = (undefined4 *)FUN_00452a10(&param_2,bVar5,piVar6,puVar2,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0067e340 @ 0067e340  kind=lib  attributed-by=lib-island  size=135 */

ushort * FUN_0067e340(ushort *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int *in_ECX;
  undefined4 *puVar5;
  ushort local_c [2];
  undefined4 local_8;
  
  puVar1 = (undefined4 *)*in_ECX;
  puVar5 = puVar1;
  if (*(char *)((int)puVar1[1] + 0xd) == '\0') {
    puVar2 = (undefined4 *)puVar1[1];
    do {
      if (*(ushort *)(puVar2 + 4) < *param_1) {
        puVar3 = (undefined4 *)puVar2[2];
      }
      else {
        puVar3 = (undefined4 *)*puVar2;
        puVar5 = puVar2;
      }
      puVar2 = puVar3;
    } while (*(char *)((int)puVar3 + 0xd) == '\0');
  }
  if ((puVar5 != puVar1) && (*(ushort *)(puVar5 + 4) <= *param_1)) {
    return (ushort *)(puVar5 + 5);
  }
  local_c[0] = *param_1;
  local_8 = 0;
  iVar4 = FUN_0067dec0(local_c);
  FUN_0067def0(&param_1,puVar5,iVar4 + 0x10,iVar4);
  return param_1 + 10;
}


/* FUN_0067e4d0 @ 0067e4d0  kind=lib  attributed-by=lib-island  size=373 */

int FUN_0067e4d0(void)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  void *pvVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int in_ECX;
  int *piVar10;
  uint local_10;
  
  iVar8 = FUN_0064fd30(in_ECX + 0xc);
  *(undefined4 *)(iVar8 + 0x68) = *(undefined4 *)(in_ECX + 0x68);
  *(undefined4 *)(iVar8 + 0x6c) = *(undefined4 *)(in_ECX + 0x6c);
  *(undefined4 *)(iVar8 + 0x60) = *(undefined4 *)(in_ECX + 0x60);
  *(undefined4 *)(iVar8 + 100) = *(undefined4 *)(in_ECX + 100);
  piVar10 = (int *)**(int **)(in_ECX + 0x58);
  if (piVar10 != *(int **)(in_ECX + 0x58)) {
    do {
      iVar2 = piVar10[5];
      FUN_0067f1b0((short)piVar10[4],iVar2,iVar2 + 8,*(undefined4 *)(iVar2 + 0x14),
                   *(undefined4 *)(iVar2 + 0x10));
      if (*(char *)((int)piVar10 + 0xd) == '\0') {
        piVar3 = (int *)piVar10[2];
        if (*(char *)((int)piVar3 + 0xd) == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          piVar10 = piVar3;
          piVar3 = (int *)*piVar3;
          while (cVar1 == '\0') {
            cVar1 = *(char *)(*piVar3 + 0xd);
            piVar10 = piVar3;
            piVar3 = (int *)*piVar3;
          }
        }
        else {
          cVar1 = *(char *)(piVar10[1] + 0xd);
          piVar5 = (int *)piVar10[1];
          piVar3 = piVar10;
          while ((piVar10 = piVar5, cVar1 == '\0' && (piVar3 == (int *)piVar10[2]))) {
            cVar1 = *(char *)(piVar10[1] + 0xd);
            piVar5 = (int *)piVar10[1];
            piVar3 = piVar10;
          }
        }
      }
    } while (piVar10 != *(int **)(in_ECX + 0x58));
  }
  piVar10 = (int *)(iVar8 + 0x24);
  if (piVar10 != (int *)(in_ECX + 0x24)) {
    pvVar4 = *(void **)(*piVar10 + 4);
    if (*(char *)((int)pvVar4 + 0xd) == '\0') {
      FUN_0042ca80(*(undefined4 *)((int)pvVar4 + 8));
                    /* WARNING: Subroutine does not return */
      operator_delete(pvVar4);
    }
    *(int *)(*piVar10 + 4) = *piVar10;
    local_10 = local_10 & 0xffffff00;
    *(int *)*piVar10 = *piVar10;
    *(int *)(*piVar10 + 8) = *piVar10;
    iVar2 = *piVar10;
    *(undefined4 *)(iVar8 + 0x28) = 0;
    uVar9 = FUN_00608c80(*(undefined4 *)(*(int *)(in_ECX + 0x24) + 4),iVar2,local_10);
    *(undefined4 *)(iVar2 + 4) = uVar9;
    piVar3 = (int *)*piVar10;
    *(undefined4 *)(iVar8 + 0x28) = *(undefined4 *)(in_ECX + 0x28);
    piVar5 = (int *)piVar3[1];
    if (*(char *)((int)piVar5 + 0xd) == '\0') {
      cVar1 = *(char *)(*piVar5 + 0xd);
      piVar7 = (int *)*piVar5;
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*piVar7 + 0xd);
        piVar5 = piVar7;
        piVar7 = (int *)*piVar7;
      }
      *piVar3 = (int)piVar5;
      iVar2 = *(int *)(*piVar10 + 4);
      iVar6 = *(int *)(iVar2 + 8);
      cVar1 = *(char *)(iVar6 + 0xd);
      while (cVar1 == '\0') {
        cVar1 = *(char *)(*(int *)(iVar6 + 8) + 0xd);
        iVar2 = iVar6;
        iVar6 = *(int *)(iVar6 + 8);
      }
      *(int *)(*piVar10 + 8) = iVar2;
    }
    else {
      *piVar3 = (int)piVar3;
      *(int *)(*piVar10 + 8) = *piVar10;
    }
  }
  *(undefined4 *)(iVar8 + 0x4c) = *(undefined4 *)(in_ECX + 0x4c);
  *(undefined4 *)(iVar8 + 0x50) = *(undefined4 *)(in_ECX + 0x50);
  return iVar8;
}


/* FUN_0067f1b0 @ 0067f1b0  kind=lib  attributed-by=lib-island  size=213 */

void FUN_0067f1b0(undefined4 param_1,float *param_2,float *param_3,float param_4,float param_5)

{
  float *pfVar1;
  float *pfVar2;
  undefined4 *puVar3;
  int in_ECX;
  float *pfVar4;
  float fVar5;
  
  pfVar2 = param_3;
  pfVar1 = param_2;
  if (*(int *)(in_ECX + 0x5c) == 0) {
    *(float *)(in_ECX + 0x60) = *param_2;
    *(float *)(in_ECX + 100) = param_2[1];
    *(float *)(in_ECX + 0x68) = *param_3;
    *(float *)(in_ECX + 0x6c) = param_3[1];
  }
  puVar3 = (undefined4 *)FUN_0067e340(&param_1);
  pfVar4 = (float *)*puVar3;
  if ((float *)*puVar3 == (float *)0x0) {
    param_3 = operator_new(0x18);
    puVar3 = (undefined4 *)FUN_0067e340(&param_1);
    *puVar3 = param_3;
    pfVar4 = param_3;
  }
  if (*pfVar1 < *(float *)(in_ECX + 0x60)) {
    *(float *)(in_ECX + 0x60) = *pfVar1;
  }
  if (pfVar1[1] < *(float *)(in_ECX + 100)) {
    *(float *)(in_ECX + 100) = pfVar1[1];
  }
  fVar5 = *pfVar1 + *pfVar2;
  if (*(float *)(in_ECX + 0x68) <= fVar5 && fVar5 != *(float *)(in_ECX + 0x68)) {
    *(float *)(in_ECX + 0x68) = fVar5;
  }
  fVar5 = pfVar2[1] + pfVar1[1];
  if (*(float *)(in_ECX + 0x6c) <= fVar5 && fVar5 != *(float *)(in_ECX + 0x6c)) {
    *(float *)(in_ECX + 0x6c) = fVar5;
  }
  *pfVar4 = *pfVar1;
  pfVar4[1] = pfVar1[1];
  pfVar4[2] = *pfVar2;
  pfVar4[3] = pfVar2[1];
  pfVar4[5] = param_4;
  pfVar4[4] = param_5;
  return;
}


/* ___raise_securityfailure @ 0068db6e  kind=lib  attributed-by=lib-island  size=61 */

/* Library Function - Single Match
    ___raise_securityfailure
   
   Library: Visual Studio 2012 Release */

void ___raise_securityfailure(EXCEPTION_POINTERS *param_1)

{
  DAT_0076e27c = IsDebuggerPresent();
  _crt_debugger_hook(1);
  __crtUnhandledException(param_1);
  if (DAT_0076e27c == 0) {
    _crt_debugger_hook(1);
  }
  __crtTerminateProcess(0xc0000409);
  return;
}


/* FUN_0068e9a0 @ 0068e9a0  kind=lib  attributed-by=lib-island  size=84 */

void FUN_0068e9a0(uint *param_1)

{
  uint in_EAX;
  uint uVar1;
  uint in_ECX;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (in_ECX & 0xffff) * (in_EAX >> 0x10);
  uVar1 = (in_ECX >> 0x10) * (in_EAX & 0xffff) + uVar2;
  uVar3 = (in_ECX & 0xffff) * (in_EAX & 0xffff) + uVar1 * 0x10000;
  *param_1 = uVar3;
  param_1[1] = (uint)(uVar3 < uVar1 * 0x10000) +
               (uint)(uVar1 < uVar2) * 0x10000 + (in_ECX >> 0x10) * (in_EAX >> 0x10) +
               (uVar1 >> 0x10);
  return;
}


/* FUN_0068ea00 @ 0068ea00  kind=lib  attributed-by=lib-island  size=52 */

uint FUN_0068ea00(void)

{
  uint in_EAX;
  uint uVar1;
  uint in_ECX;
  uint in_EDX;
  int iVar2;
  
  uVar1 = 0;
  if (in_EDX <= in_ECX) {
    return 0x7fffffff;
  }
  iVar2 = 0x20;
  do {
    in_ECX = in_ECX * 2 | in_EAX >> 0x1f;
    uVar1 = uVar1 * 2;
    if (in_EDX <= in_ECX) {
      in_ECX = in_ECX - in_EDX;
      uVar1 = uVar1 | 1;
    }
    in_EAX = in_EAX * 2;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  return uVar1;
}


/* FUN_0068ea40 @ 0068ea40  kind=lib  attributed-by=lib-island  size=24 */

void FUN_0068ea40(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint *in_EDX;
  int *unaff_ESI;
  uint *unaff_EDI;
  
  uVar1 = *unaff_EDI;
  uVar4 = *unaff_ESI + uVar1;
  uVar2 = unaff_EDI[1];
  iVar3 = unaff_ESI[1];
  *in_EDX = uVar4;
  in_EDX[1] = (uVar4 < uVar1) + uVar2 + iVar3;
  return;
}


/* FUN_0068ea60 @ 0068ea60  kind=lib  attributed-by=lib-island  size=196 */

uint FUN_0068ea60(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_10 [8];
  int local_8;
  undefined4 local_4;
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == param_3) {
    return param_1;
  }
  iVar4 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  iVar3 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if (((iVar4 < 0xb505) && (iVar2 < 0xb505)) && (iVar3 < 0x2afe0)) {
    if (0 < iVar3) {
      uVar1 = (iVar4 * iVar2 + (iVar3 >> 1)) / iVar3;
      goto LAB_0068eb16;
    }
  }
  else if (0 < iVar3) {
    FUN_0068e9a0(local_10);
    local_4 = 0;
    local_8 = iVar3 >> 1;
    FUN_0068ea40();
    uVar1 = FUN_0068ea00();
    goto LAB_0068eb16;
  }
  uVar1 = 0x7fffffff;
LAB_0068eb16:
  if ((int)(param_1 ^ param_2 ^ param_3) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* FUN_0068ebc0 @ 0068ebc0  kind=lib  attributed-by=lib-island  size=118 */

uint FUN_0068ebc0(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  if ((param_1 != 0) && (param_2 != 0x10000)) {
    uVar2 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
    uVar3 = param_1 ^ param_2;
    uVar1 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
    if ((uVar2 < 0x801) && (uVar1 < 0x100001)) {
      param_1 = uVar1 * uVar2 + 0x8000 >> 0x10;
    }
    else {
      param_1 = ((uVar1 & 0xffff) * (uVar2 & 0xffff) + 0x8000 >> 0x10) +
                (uVar1 >> 0x10) * (uVar2 & 0xffff) + (uVar2 >> 0x10) * uVar1;
    }
    if ((int)uVar3 < 0) {
      param_1 = -param_1;
    }
  }
  return param_1;
}


/* FUN_0068ec40 @ 0068ec40  kind=lib  attributed-by=lib-island  size=134 */

uint FUN_0068ec40(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  uVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  if (uVar2 == 0) {
    uVar2 = 0x7fffffff;
  }
  else if (iVar1 >> 0x10 == 0) {
    uVar2 = (uint)(((int)uVar2 >> 1) + iVar1 * 0x10000) / uVar2;
  }
  else {
    FUN_0068ea40();
    uVar2 = FUN_0068ea00();
  }
  if ((int)(param_1 ^ param_2) < 0) {
    uVar2 = -uVar2;
  }
  return uVar2;
}


/* FUN_0068f020 @ 0068f020  kind=lib  attributed-by=lib-island  size=29 */

void FUN_0068f020(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x30) = 0;
  puVar2 = (undefined4 *)(param_1 + 0x14);
  puVar3 = (undefined4 *)(param_1 + 0x38);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  return;
}


/* FUN_0068f110 @ 0068f110  kind=lib  attributed-by=lib-string  size=96 */

undefined4 FUN_0068f110(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  
  if (((param_1 == (undefined4 *)0x0) || (param_2 == (byte *)0x0)) ||
     (pbVar2 = (byte *)*param_1, pbVar4 = param_2, pbVar2 == (byte *)0x0)) {
    return 0;
  }
LAB_0068f132:
  do {
    bVar1 = *pbVar2;
    bVar5 = bVar1 < *pbVar4;
    if (bVar1 == *pbVar4) {
      if (bVar1 != 0) {
        bVar1 = pbVar2[1];
        bVar5 = bVar1 < pbVar4[1];
        if (bVar1 != pbVar4[1]) goto LAB_0068f152;
        pbVar2 = pbVar2 + 2;
        pbVar4 = pbVar4 + 2;
        if (bVar1 != 0) goto LAB_0068f132;
      }
      iVar3 = 0;
    }
    else {
LAB_0068f152:
      iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
    }
    if (iVar3 == 0) {
      return param_1[1];
    }
    pbVar2 = (byte *)param_1[2];
    param_1 = param_1 + 2;
    pbVar4 = param_2;
    if (pbVar2 == (byte *)0x0) {
      return 0;
    }
  } while( true );
}


/* FUN_0068f1b0 @ 0068f1b0  kind=lib  attributed-by=lib-island  size=150 */

void FUN_0068f1b0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x80);
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    if (param_2 == (int *)0x0) {
      param_2 = (int *)(iVar1 + 4);
      *param_2 = 0x10000;
      *(undefined4 *)(iVar1 + 8) = 0;
      *(undefined4 *)(iVar1 + 0xc) = 0;
      *(undefined4 *)(iVar1 + 0x10) = 0x10000;
    }
    else {
      *(int *)(iVar1 + 4) = *param_2;
      *(int *)(iVar1 + 8) = param_2[1];
      *(int *)(iVar1 + 0xc) = param_2[2];
      *(int *)(iVar1 + 0x10) = param_2[3];
    }
    if (((param_2[2] != 0 || param_2[1] != 0) || (*param_2 != 0x10000)) || (param_2[3] != 0x10000))
    {
      *(undefined4 *)(iVar1 + 0x1c) = 1;
    }
    if (param_3 == (int *)0x0) {
      param_3 = (int *)(iVar1 + 0x14);
      *param_3 = 0;
    }
    else {
      *(int *)(iVar1 + 0x14) = *param_3;
      iVar2 = param_3[1];
    }
    *(int *)(iVar1 + 0x18) = iVar2;
    if (param_3[1] != 0 || *param_3 != 0) {
      *(uint *)(iVar1 + 0x1c) = *(uint *)(iVar1 + 0x1c) | 2;
    }
  }
  return;
}


/* FUN_0068f250 @ 0068f250  kind=lib  attributed-by=lib-island  size=156 */

void FUN_0068f250(char param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == '\0') {
    iVar1 = *(int *)(in_EAX + 0x24);
    *(uint *)(in_EAX + 0x2c) = *(uint *)(in_EAX + 0x2c) & 0xffffffc0;
    *(uint *)(in_EAX + 0x30) = *(uint *)(in_EAX + 0x30) & 0xffffffc0;
    uVar3 = *(uint *)(in_EAX + 0x20) & 0xffffffc0;
    uVar4 = iVar1 + 0x3fU & 0xffffffc0;
    *(uint *)(in_EAX + 0x24) = uVar4;
    iVar2 = (*(int *)(in_EAX + 0x18) + 0x3f + *(uint *)(in_EAX + 0x20) & 0xffffffc0) - uVar3;
    *(uint *)(in_EAX + 0x20) = uVar3;
    *(uint *)(in_EAX + 0x1c) = uVar4 - (iVar1 - *(int *)(in_EAX + 0x1c) & 0xffffffc0U);
  }
  else {
    uVar4 = *(uint *)(in_EAX + 0x30);
    *(uint *)(in_EAX + 0x20) = *(uint *)(in_EAX + 0x20) & 0xffffffc0;
    *(uint *)(in_EAX + 0x24) = *(int *)(in_EAX + 0x24) + 0x3fU & 0xffffffc0;
    uVar3 = *(uint *)(in_EAX + 0x2c) & 0xffffffc0;
    uVar5 = uVar4 & 0xffffffc0;
    iVar2 = (*(int *)(in_EAX + 0x18) + 0x3f + *(uint *)(in_EAX + 0x2c) & 0xffffffc0) - uVar3;
    *(uint *)(in_EAX + 0x2c) = uVar3;
    *(uint *)(in_EAX + 0x30) = uVar5;
    *(uint *)(in_EAX + 0x1c) = (uVar4 + 0x3f + *(int *)(in_EAX + 0x1c) & 0xffffffc0) - uVar5;
  }
  *(int *)(in_EAX + 0x18) = iVar2;
  *(uint *)(in_EAX + 0x28) = *(int *)(in_EAX + 0x28) + 0x20U & 0xffffffc0;
  *(uint *)(in_EAX + 0x34) = *(int *)(in_EAX + 0x34) + 0x20U & 0xffffffc0;
  return;
}


/* FUN_0068f2f0 @ 0068f2f0  kind=lib  attributed-by=lib-island  size=178 */

undefined4 FUN_0068f2f0(int param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  
  piVar1 = *(int **)(param_1 + 0x28);
  if (piVar1 == (int *)0x0) {
    return 0x26;
  }
  piVar4 = piVar1 + *(int *)(param_1 + 0x24) + -1;
  if (piVar1 <= piVar4) {
    uVar5 = (int)piVar4 - (int)piVar1;
    piVar3 = piVar4;
    do {
      iVar2 = *piVar3;
      if ((*(int *)(iVar2 + 4) == 0x756e6963) &&
         ((((*(short *)(iVar2 + 8) == 3 && (*(short *)(iVar2 + 10) == 10)) ||
           ((*(short *)(iVar2 + 8) == 0 && (*(short *)(iVar2 + 10) == 4)))) &&
          ((int)(uVar5 & 0xfffffffc) < 0x3d)))) {
        *(int *)(param_1 + 0x5c) = *piVar3;
        return 0;
      }
      piVar3 = piVar3 + -1;
      uVar5 = uVar5 - 4;
    } while (piVar1 <= piVar3);
  }
  if (piVar1 <= piVar4) {
    uVar5 = (int)piVar4 - (int)piVar1;
    do {
      if ((*(int *)(*piVar4 + 4) == 0x756e6963) && ((int)(uVar5 & 0xfffffffc) < 0x3d)) {
        *(int *)(param_1 + 0x5c) = *piVar4;
        return 0;
      }
      piVar4 = piVar4 + -1;
      uVar5 = uVar5 - 4;
    } while (piVar1 <= piVar4);
  }
  return 0x26;
}


/* FUN_0068f3b0 @ 0068f3b0  kind=lib  attributed-by=lib-island  size=240 */

undefined4 FUN_0068f3b0(int param_1,int *param_2,char param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if ((*(byte *)(param_1 + 8) & 2) == 0) {
    return 0x23;
  }
  if (*param_2 == 0) {
    iVar6 = param_2[1];
    iVar5 = iVar6;
    if (param_2[3] != 0) {
      iVar5 = (iVar6 * param_2[3] + 0x24) / 0x48;
    }
    iVar1 = param_2[2];
    iVar2 = iVar1;
    if (param_2[4] != 0) {
      iVar2 = (iVar1 * param_2[4] + 0x24) / 0x48;
    }
    if (((iVar6 == 0) || ((iVar3 = iVar5, iVar1 != 0 && (iVar3 = iVar2, iVar6 == 0)))) &&
       (iVar3 = iVar2, iVar1 != 0)) {
      iVar5 = iVar2;
    }
    iVar6 = 0;
    if (0 < *(int *)(param_1 + 0x1c)) {
      piVar4 = (int *)(*(int *)(param_1 + 0x20) + 8);
      do {
        if (((iVar3 + 0x20U & 0xffffffc0) == (piVar4[1] + 0x20U & 0xffffffc0)) &&
           (((iVar5 + 0x20U & 0xffffffc0) == (*piVar4 + 0x20U & 0xffffffc0) || (param_3 != '\0'))))
        {
          if (param_4 != (int *)0x0) {
            *param_4 = iVar6;
          }
          return 0;
        }
        iVar6 = iVar6 + 1;
        piVar4 = piVar4 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x1c));
    }
    return 0x17;
  }
  return 7;
}


/* FUN_0068f500 @ 0068f500  kind=lib  attributed-by=lib-island  size=89 */

void FUN_0068f500(void)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int unaff_ESI;
  int unaff_EDI;
  
  uVar1 = *(undefined4 *)(unaff_ESI + 8);
  iVar2 = FUN_0068ebc0((int)*(short *)(unaff_EDI + 0x46),uVar1);
  *(uint *)(unaff_ESI + 0xc) = iVar2 + 0x3fU & 0xffffffc0;
  uVar3 = FUN_0068ebc0((int)*(short *)(unaff_EDI + 0x48),uVar1);
  *(uint *)(unaff_ESI + 0x10) = uVar3 & 0xffffffc0;
  iVar2 = FUN_0068ebc0((int)*(short *)(unaff_EDI + 0x4a),uVar1);
  *(uint *)(unaff_ESI + 0x14) = iVar2 + 0x20U & 0xffffffc0;
  iVar2 = FUN_0068ebc0((int)*(short *)(unaff_EDI + 0x4c),*(undefined4 *)(unaff_ESI + 4));
  *(uint *)(unaff_ESI + 0x18) = iVar2 + 0x20U & 0xffffffc0;
  return;
}


/* FUN_0068f560 @ 0068f560  kind=lib  attributed-by=lib-island  size=143 */

void FUN_0068f560(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  short *psVar3;
  
  iVar1 = *(int *)(param_1 + 0x58);
  psVar3 = (short *)(param_2 * 0x10 + *(int *)(param_1 + 0x20));
  *(short *)(iVar1 + 0xc) = (short)(*(int *)(psVar3 + 4) + 0x20 >> 6);
  *(short *)(iVar1 + 0xe) = (short)(*(int *)(psVar3 + 6) + 0x20 >> 6);
  if ((*(byte *)(param_1 + 8) & 1) != 0) {
    uVar2 = FUN_0068ec40(*(undefined4 *)(psVar3 + 4),*(undefined2 *)(param_1 + 0x44));
    *(undefined4 *)(iVar1 + 0x10) = uVar2;
    uVar2 = FUN_0068ec40(*(undefined4 *)(psVar3 + 6),*(undefined2 *)(param_1 + 0x44));
    *(undefined4 *)(iVar1 + 0x14) = uVar2;
    FUN_0068f500();
    return;
  }
  *(undefined4 *)(iVar1 + 0x10) = 0x10000;
  *(undefined4 *)(iVar1 + 0x14) = 0x10000;
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)(psVar3 + 6);
  *(undefined4 *)(iVar1 + 0x1c) = 0;
  *(int *)(iVar1 + 0x20) = (int)*psVar3 << 6;
  *(undefined4 *)(iVar1 + 0x24) = *(undefined4 *)(psVar3 + 4);
  return;
}


/* FUN_0068f5f0 @ 0068f5f0  kind=lib  attributed-by=lib-island  size=514 */

void FUN_0068f5f0(int param_1,int *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint local_8;
  int local_4;
  
  iVar2 = *(int *)(param_1 + 0x58);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    *(undefined4 *)(iVar2 + 0xc) = 0;
    *(undefined4 *)(iVar2 + 0x18) = 0;
    *(undefined4 *)(iVar2 + 0x1c) = 0;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x24) = 0;
    *(undefined4 *)(iVar2 + 0x10) = 0x10000;
    *(undefined4 *)(iVar2 + 0x14) = 0x10000;
    return;
  }
  iVar6 = 0;
  uVar7 = 0;
  iVar8 = 0;
  local_8 = 0;
  switch(*param_2) {
  case 0:
    uVar7 = (uint)*(ushort *)(param_1 + 0x44);
    local_8 = uVar7;
    break;
  case 1:
    uVar7 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    local_8 = uVar7;
    break;
  case 2:
    uVar7 = *(int *)(param_1 + 0x40) - *(int *)(param_1 + 0x38);
    local_8 = *(int *)(param_1 + 0x3c) - *(int *)(param_1 + 0x34);
    break;
  case 3:
    uVar7 = (int)*(short *)(param_1 + 0x46) - (int)*(short *)(param_1 + 0x48);
    local_8 = (int)*(short *)(param_1 + 0x4c);
    break;
  case 4:
    *(int *)(iVar2 + 0x10) = param_2[1];
    iVar3 = param_2[2];
    *(int *)(iVar2 + 0x14) = iVar3;
    if (*(int *)(iVar2 + 0x10) == 0) {
      *(int *)(iVar2 + 0x10) = iVar3;
    }
    else if (iVar3 == 0) {
      *(int *)(iVar2 + 0x14) = *(int *)(iVar2 + 0x10);
    }
    goto LAB_0068f742;
  default:
    goto switchD_0068f620_default;
  }
  if ((int)local_8 < 0) {
    local_8 = -local_8;
  }
  if ((int)uVar7 < 0) {
    uVar7 = -uVar7;
  }
switchD_0068f620_default:
  if (param_2[3] == 0) {
    iVar8 = param_2[1];
    local_4 = iVar8;
  }
  else {
    iVar8 = (param_2[1] * param_2[3] + 0x24) / 0x48;
    local_4 = param_2[1];
  }
  if (param_2[4] == 0) {
    iVar6 = param_2[2];
  }
  else {
    iVar6 = (param_2[2] * param_2[4] + 0x24) / 0x48;
  }
  if (local_4 == 0) {
    uVar5 = FUN_0068ec40(iVar6,uVar7);
    *(undefined4 *)(iVar2 + 0x14) = uVar5;
    *(undefined4 *)(iVar2 + 0x10) = uVar5;
    iVar8 = FUN_0068ea60(iVar6,local_8,uVar7);
  }
  else {
    iVar3 = FUN_0068ec40(iVar8,local_8);
    *(int *)(iVar2 + 0x10) = iVar3;
    if (param_2[2] == 0) {
      *(int *)(iVar2 + 0x14) = iVar3;
      iVar6 = FUN_0068ea60(iVar8,uVar7,local_8);
    }
    else {
      iVar4 = FUN_0068ec40(iVar6,uVar7);
      *(int *)(iVar2 + 0x14) = iVar4;
      if (*param_2 == 3) {
        if (iVar3 < iVar4) {
          *(int *)(iVar2 + 0x14) = iVar3;
        }
        else {
          *(int *)(iVar2 + 0x10) = iVar4;
        }
      }
    }
  }
LAB_0068f742:
  if (*param_2 != 0) {
    uVar1 = *(undefined2 *)(param_1 + 0x44);
    iVar8 = FUN_0068ebc0(uVar1,*(undefined4 *)(iVar2 + 0x10));
    iVar6 = FUN_0068ebc0(uVar1,*(undefined4 *)(iVar2 + 0x14));
  }
  *(short *)(iVar2 + 0xc) = (short)(iVar8 + 0x20 >> 6);
  *(short *)(iVar2 + 0xe) = (short)(iVar6 + 0x20 >> 6);
  FUN_0068f500();
  return;
}


/* FUN_0068f810 @ 0068f810  kind=lib  attributed-by=lib-island  size=78 */

undefined4 FUN_0068f810(int param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar1;
  
  if ((param_1 == 0) || ((*(byte *)(param_1 + 8) & 2) == 0)) {
    return 0x23;
  }
  if ((-1 < param_2) && (param_2 < *(int *)(param_1 + 0x1c))) {
    UNRECOVERED_JUMPTABLE = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0x14) + 100);
    if (UNRECOVERED_JUMPTABLE != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0068f843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (*UNRECOVERED_JUMPTABLE)();
      return uVar1;
    }
    FUN_0068f560(param_1,param_2);
    return 0;
  }
  return 6;
}


/* FUN_0068f860 @ 0068f860  kind=lib  attributed-by=lib-island  size=137 */

int FUN_0068f860(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1;
  if (param_1 == 0) {
    return 0x23;
  }
  if ((((param_2 == (int *)0x0) || (param_2[1] < 0)) || (param_2[2] < 0)) || (4 < *param_2)) {
    iVar3 = 6;
  }
  else {
    pcVar1 = *(code **)(*(int *)(*(int *)(param_1 + 0x60) + 0x14) + 0x60);
    if (pcVar1 != (code *)0x0) {
      iVar2 = (*pcVar1)(*(undefined4 *)(param_1 + 0x58),param_2);
      return iVar2;
    }
    if (((*(uint *)(param_1 + 8) & 1) != 0) || ((*(uint *)(param_1 + 8) & 2) == 0)) {
      FUN_0068f5f0(param_1,param_2);
      return 0;
    }
    iVar3 = FUN_0068f3b0(param_1,param_2,0,&param_1);
    if (iVar3 == 0) {
      iVar2 = FUN_0068f810(iVar2,param_1);
      return iVar2;
    }
  }
  return iVar3;
}


/* FUN_0068f8f0 @ 0068f8f0  kind=lib  attributed-by=lib-island  size=150 */

void FUN_0068f8f0(undefined4 param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  local_14 = param_3;
  if ((param_2 != 0) && (local_14 = param_2, param_3 == 0)) {
    param_3 = param_2;
  }
  local_c = param_5;
  if ((param_4 != 0) && (local_c = param_4, param_5 == 0)) {
    param_5 = param_4;
  }
  if (local_14 < 0x40) {
    local_14 = 0x40;
  }
  if (param_3 < 0x40) {
    param_3 = 0x40;
  }
  if (local_c == 0) {
    param_5 = 0x48;
    local_c = 0x48;
  }
  local_18 = 0;
  local_10 = param_3;
  local_8 = param_5;
  FUN_0068f860(param_1,&local_18);
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


/* FUN_0068f990 @ 0068f990  kind=lib  attributed-by=lib-island  size=151 */

void FUN_0068f990(undefined4 param_1,uint param_2,uint param_3)

{
  uint uVar1;
  undefined4 local_18;
  int local_14;
  int local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_18;
  uVar1 = param_3;
  if ((param_2 != 0) && (uVar1 = param_2, param_3 == 0)) {
    param_3 = param_2;
  }
  if (uVar1 == 0) {
    uVar1 = 1;
  }
  if (param_3 == 0) {
    param_3 = 1;
  }
  if (0xfffe < uVar1) {
    uVar1 = 0xffff;
  }
  if (0xfffe < param_3) {
    param_3 = 0xffff;
  }
  local_10 = param_3 << 6;
  local_14 = uVar1 << 6;
  local_18 = 0;
  local_c = 0;
  local_8 = 0;
  FUN_0068f860(param_1,&local_18);
  __security_check_cookie(local_4 ^ (uint)&local_18);
  return;
}


/* FUN_0068fa30 @ 0068fa30  kind=lib  attributed-by=lib-island  size=224 */

int FUN_0068fa30(int param_1,undefined4 param_2,undefined4 param_3,int param_4,uint *param_5)

{
  ushort uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  int iVar5;
  
  iVar5 = 0;
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_5 != (uint *)0x0) {
    iVar2 = *(int *)(param_1 + 0x60);
    *param_5 = 0;
    param_5[1] = 0;
    pcVar3 = *(code **)(*(int *)(iVar2 + 0x14) + 0x54);
    if (((pcVar3 != (code *)0x0) && (iVar5 = (*pcVar3)(param_1,param_2,param_3,param_5), iVar5 == 0)
        ) && (param_4 != 2)) {
      uVar4 = FUN_0068ebc0(*param_5,*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x10));
      *param_5 = uVar4;
      uVar4 = FUN_0068ebc0(param_5[1],*(undefined4 *)(*(int *)(param_1 + 0x58) + 0x14));
      param_5[1] = uVar4;
      if (param_4 != 1) {
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x58) + 0xc);
        if (uVar1 < 0x19) {
          uVar4 = FUN_0068ea60(*param_5,uVar1,0x19);
          *param_5 = uVar4;
        }
        uVar1 = *(ushort *)(*(int *)(param_1 + 0x58) + 0xe);
        if (uVar1 < 0x19) {
          uVar4 = FUN_0068ea60(param_5[1],uVar1,0x19);
          param_5[1] = uVar4;
        }
        *param_5 = *param_5 + 0x20 & 0xffffffc0;
        param_5[1] = param_5[1] + 0x20 & 0xffffffc0;
      }
    }
    return iVar5;
  }
  return 6;
}


/* FUN_0068fb90 @ 0068fb90  kind=lib  attributed-by=lib-island  size=30 */

undefined4 FUN_0068fb90(int param_1)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x5c) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0068fbab. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(*(int *)(*(int *)(param_1 + 0x5c) + 0xc) + 0xc))();
    return uVar1;
  }
  return 0;
}


/* FUN_0068fce0 @ 0068fce0  kind=lib  attributed-by=lib-island  size=77 */

int FUN_0068fce0(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0;
  iVar2 = iVar1;
  if (param_1 != 0) {
    iVar3 = *(int *)(param_1 + 0x9c);
    if (param_3 != (int *)0x0) {
      if (*param_3 != 0) {
        iVar3 = *(int *)(*param_3 + 4);
      }
      *param_3 = 0;
    }
    if (iVar3 != 0) {
      while (iVar2 = *(int *)(iVar3 + 8), *(int *)(iVar2 + 0x18) != param_2) {
        iVar3 = *(int *)(iVar3 + 4);
        if (iVar3 == 0) {
          return iVar1;
        }
      }
      if (param_3 != (int *)0x0) {
        *param_3 = iVar3;
      }
    }
  }
  return iVar2;
}


/* FUN_0068fd30 @ 0068fd30  kind=lib  attributed-by=lib-island  size=45 */

void FUN_0068fd30(void)

{
  int iVar1;
  int iVar2;
  int in_EDX;
  
  iVar1 = *(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x60) + 4);
  iVar2 = *(int *)(iVar1 + 0xa4);
  if ((iVar2 == 0) || (*(int *)(iVar2 + 0x18) != *(int *)(in_EDX + 0x48))) {
    FUN_0068fce0(iVar1,*(undefined4 *)(in_EDX + 0x48),0);
  }
  return;
}


/* FUN_0068fd80 @ 0068fd80  kind=lib  attributed-by=lib-island  size=112 */

undefined4 FUN_0068fd80(int param_1,byte *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  if ((param_1 == 0) || (param_2 == (byte *)0x0)) {
    return 0;
  }
  puVar6 = (undefined4 *)(param_1 + 0x1c);
  puVar1 = puVar6 + *(int *)(param_1 + 0x18);
  if (puVar1 <= puVar6) {
    return 0;
  }
  do {
    pbVar3 = *(byte **)(*(int *)*puVar6 + 8);
    pbVar5 = param_2;
    do {
      bVar2 = *pbVar3;
      bVar7 = bVar2 < *pbVar5;
      if (bVar2 != *pbVar5) {
LAB_0068fdd0:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_0068fdd5;
      }
      if (bVar2 == 0) break;
      bVar2 = pbVar3[1];
      bVar7 = bVar2 < pbVar5[1];
      if (bVar2 != pbVar5[1]) goto LAB_0068fdd0;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar2 != 0);
    iVar4 = 0;
LAB_0068fdd5:
    if (iVar4 == 0) {
      return *puVar6;
    }
    puVar6 = puVar6 + 1;
    if (puVar1 <= puVar6) {
      return 0;
    }
  } while( true );
}


/* FUN_00690340 @ 00690340  kind=lib  attributed-by=lib-island  size=93 */

undefined4 FUN_00690340(short *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short *psVar6;
  
  if (param_1 != (short *)0x0) {
    iVar4 = (int)param_1[1];
    iVar5 = (int)*param_1;
    if (iVar4 == 0) {
      if (iVar5 == 0) {
        return 0;
      }
    }
    else if ((0 < iVar4) && (0 < iVar5)) {
      iVar1 = -1;
      iVar2 = 0;
      if (0 < iVar5) {
        psVar6 = *(short **)(param_1 + 6);
        iVar3 = -1;
        do {
          iVar1 = (int)*psVar6;
          if (iVar1 <= iVar3) {
            return 6;
          }
          if (iVar4 <= iVar1) {
            return 6;
          }
          iVar2 = iVar2 + 1;
          psVar6 = psVar6 + 1;
          iVar3 = iVar1;
        } while (iVar2 < iVar5);
      }
      if (iVar1 == iVar4 + -1) {
        return 0;
      }
    }
  }
  return 6;
}


/* FUN_006904c0 @ 006904c0  kind=lib  attributed-by=lib-island  size=58 */

void FUN_006904c0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  
  if (param_1 != 0) {
    piVar1 = *(int **)(param_1 + 4);
    uVar2 = 0;
    if (0 < *(short *)(param_1 + 2)) {
      do {
        *piVar1 = *piVar1 + param_2;
        piVar1[1] = piVar1[1] + param_3;
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 2;
      } while ((int)(uVar2 & 0xffff) < (int)*(short *)(param_1 + 2));
    }
  }
  return;
}


/* FUN_00690500 @ 00690500  kind=lib  attributed-by=lib-island  size=87 */

void FUN_00690500(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((param_1 != (int *)0x0) && (param_2 != (undefined4 *)0x0)) {
    iVar3 = param_1[1];
    iVar1 = FUN_0068ebc0(*param_1,param_2[2]);
    iVar2 = FUN_0068ebc0(iVar3,param_2[3]);
    iVar3 = FUN_0068ebc0(iVar3,param_2[1]);
    iVar4 = FUN_0068ebc0(*param_1,*param_2);
    *param_1 = iVar3 + iVar4;
    param_1[1] = iVar1 + iVar2;
  }
  return;
}


/* FUN_00690560 @ 00690560  kind=lib  attributed-by=lib-island  size=54 */

void FUN_00690560(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar2 = *(uint *)(param_1 + 4);
    uVar1 = uVar2 + *(short *)(param_1 + 2) * 8;
    for (; uVar2 < uVar1; uVar2 = uVar2 + 8) {
      FUN_00690500(uVar2,param_2);
    }
  }
  return;
}


/* FUN_00690880 @ 00690880  kind=lib  attributed-by=lib-island  size=32 */

void FUN_00690880(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = 0;
  param_1[8] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  return;
}


/* FUN_006908a0 @ 006908a0  kind=lib  attributed-by=lib-island  size=22 */

void FUN_006908a0(int param_1)

{
  if ((param_1 != 0) && (*(code **)(param_1 + 0x18) != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x006908b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 0x18))();
    return;
  }
  return;
}


/* FUN_006908c0 @ 006908c0  kind=lib  attributed-by=lib-island  size=56 */

undefined4 FUN_006908c0(int param_1,uint param_2)

{
  int iVar1;
  
  if (*(code **)(param_1 + 0x14) == (code *)0x0) {
    if (param_2 <= *(uint *)(param_1 + 4)) goto LAB_006908ef;
  }
  else {
    iVar1 = (**(code **)(param_1 + 0x14))(param_1,param_2,0,0);
    if (iVar1 == 0) {
LAB_006908ef:
      *(uint *)(param_1 + 8) = param_2;
      return 0;
    }
  }
  return 0x55;
}


/* FUN_00690900 @ 00690900  kind=lib  attributed-by=lib-island  size=36 */

undefined4 FUN_00690900(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_2 < 0) {
    return 0x55;
  }
  uVar1 = FUN_006908c0();
  return uVar1;
}


/* FUN_00690930 @ 00690930  kind=lib  attributed-by=lib-island  size=8 */

undefined4 FUN_00690930(int param_1)

{
  return *(undefined4 *)(param_1 + 8);
}


/* FUN_00690940 @ 00690940  kind=lib  attributed-by=lib-island  size=118 */

undefined4 FUN_00690940(int *param_1,uint param_2,void *param_3,uint param_4)

{
  uint _Size;
  undefined4 uVar1;
  
  if ((uint)param_1[1] <= param_2) {
    return 0x55;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    _Size = param_1[1] - param_2;
    if (param_4 < _Size) {
      _Size = param_4;
    }
    memcpy(param_3,(void *)(*param_1 + param_2),_Size);
  }
  else {
    _Size = (*(code *)param_1[5])(param_1,param_2,param_3,param_4);
  }
  param_1[2] = _Size + param_2;
  uVar1 = 0x55;
  if (param_4 <= _Size) {
    uVar1 = 0;
  }
  return uVar1;
}


/* FUN_00690b80 @ 00690b80  kind=lib  attributed-by=lib-island  size=99 */

undefined2 FUN_00690b80(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined2 uVar3;
  
  puVar2 = param_2;
  uVar3 = 0;
  *param_2 = 0;
  iVar1 = param_1[2];
  if ((uint)param_1[1] <= iVar1 + 1U) {
LAB_00690bd8:
    *puVar2 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar2 = (undefined4 *)(*param_1 + iVar1);
    if (puVar2 == (undefined4 *)0x0) goto LAB_00690bd1;
  }
  else {
    iVar1 = (*(code *)param_1[5])(param_1,iVar1,&param_2,2);
    if (iVar1 != 2) goto LAB_00690bd8;
    puVar2 = &param_2;
  }
  uVar3 = CONCAT11(*(undefined1 *)puVar2,*(undefined1 *)((int)puVar2 + 1));
LAB_00690bd1:
  param_1[2] = param_1[2] + 2;
  return uVar3;
}


/* FUN_00690cd0 @ 00690cd0  kind=lib  attributed-by=lib-island  size=111 */

undefined4 FUN_00690cd0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = param_2;
  uVar1 = 0;
  *param_2 = 0;
  iVar2 = param_1[2];
  if ((uint)param_1[1] <= iVar2 + 3U) {
LAB_00690d34:
    *puVar3 = 0x55;
    return 0;
  }
  if ((code *)param_1[5] == (code *)0x0) {
    puVar3 = (undefined4 *)(*param_1 + iVar2);
    if (puVar3 == (undefined4 *)0x0) goto LAB_00690d2d;
  }
  else {
    iVar2 = (*(code *)param_1[5])(param_1,iVar2,&param_2,4);
    if (iVar2 != 4) goto LAB_00690d34;
    puVar3 = &param_2;
  }
  uVar1 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)puVar3,*(undefined1 *)((int)puVar3 + 1)),
                            *(undefined1 *)((int)puVar3 + 2)),*(undefined1 *)((int)puVar3 + 3));
LAB_00690d2d:
  param_1[2] = param_1[2] + 4;
  return uVar1;
}


/* FUN_00690db0 @ 00690db0  kind=lib  attributed-by=lib-island  size=85 */

int FUN_00690db0(void)

{
  uint in_EAX;
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = (in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f);
  uVar4 = uVar1 & 0xffff;
  uVar1 = uVar1 >> 0x10;
  uVar3 = uVar4 * 0x4585 + uVar1 * 0xb9e9;
  uVar5 = uVar4 * 0xb9e9 >> 0x10;
  uVar4 = uVar3;
  if (uVar3 < uVar5) {
    uVar4 = uVar5;
  }
  iVar2 = uVar1 * 0x4585 + (uVar3 + uVar5 >> 0x10);
  if (uVar3 + uVar5 < uVar4) {
    iVar2 = iVar2 + 0x10000;
  }
  if ((int)in_EAX < 0) {
    iVar2 = -iVar2;
  }
  return iVar2;
}


/* FUN_00690e10 @ 00690e10  kind=lib  attributed-by=lib-island  size=143 */

int FUN_00690e10(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = param_1[1];
  uVar2 = *param_1;
  uVar5 = (uVar1 ^ (int)uVar1 >> 0x1f) - ((int)uVar1 >> 0x1f) |
          (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  uVar4 = 0;
  if (0xffff < (int)uVar5) {
    uVar5 = (int)uVar5 >> 0x10;
    uVar4 = 0x10;
  }
  if (0xff < (int)uVar5) {
    uVar5 = (int)uVar5 >> 8;
    uVar4 = uVar4 + 8;
  }
  if (0xf < (int)uVar5) {
    uVar5 = (int)uVar5 >> 4;
    uVar4 = uVar4 + 4;
  }
  if (3 < (int)uVar5) {
    uVar5 = (int)uVar5 >> 2;
    uVar4 = uVar4 + 2;
  }
  if (1 < (int)uVar5) {
    uVar4 = uVar4 + 1;
  }
  if (uVar4 < 0x1c) {
    bVar3 = (byte)(0x1b - uVar4);
    *param_1 = uVar2 << (bVar3 & 0x1f);
    param_1[1] = uVar1 << (bVar3 & 0x1f);
    return 0x1b - uVar4;
  }
  bVar3 = (byte)(uVar4 - 0x1b);
  *param_1 = (int)uVar2 >> (bVar3 & 0x1f);
  param_1[1] = (int)uVar1 >> (bVar3 & 0x1f);
  return -(uVar4 - 0x1b);
}


/* FUN_00690ea0 @ 00690ea0  kind=lib  attributed-by=lib-island  size=213 */

void FUN_00690ea0(int *param_1)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *param_1;
  iVar7 = param_1[1];
  if (in_EAX < -0x59ffff) {
    iVar2 = (-in_EAX - 0x5a0000U) / 0xb40000 + 1;
    in_EAX = in_EAX + iVar2 * 0xb40000;
    do {
      iVar4 = -iVar4;
      iVar7 = -iVar7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (0x5a0000 < in_EAX) {
    iVar2 = (in_EAX - 0x5a0001U) / 0xb40000 + 1;
    in_EAX = in_EAX + iVar2 * -0xb40000;
    do {
      iVar4 = -iVar4;
      iVar7 = -iVar7;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  if (in_EAX < 0) {
    iVar2 = iVar7 * 2;
    iVar3 = iVar4 * -2;
    iVar8 = in_EAX + 0x3f6f59;
  }
  else {
    iVar2 = iVar7 * -2;
    iVar3 = iVar4 * 2;
    iVar8 = in_EAX + -0x3f6f59;
  }
  iVar7 = iVar7 + iVar3;
  iVar4 = iVar4 + iVar2;
  piVar5 = &DAT_007226bc;
  iVar2 = 0;
  do {
    iVar3 = iVar4 >> ((byte)iVar2 & 0x1f);
    iVar6 = iVar7 >> ((byte)iVar2 & 0x1f);
    if (iVar8 < 0) {
      iVar3 = -iVar3;
      iVar1 = *piVar5;
    }
    else {
      iVar6 = -iVar6;
      iVar1 = -*piVar5;
    }
    iVar8 = iVar8 + iVar1;
    iVar7 = iVar7 + iVar3;
    iVar4 = iVar4 + iVar6;
    iVar2 = iVar2 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar2 < 0x17);
  param_1[1] = iVar7;
  *param_1 = iVar4;
  return;
}


/* FUN_00690f80 @ 00690f80  kind=lib  attributed-by=lib-island  size=162 */

void FUN_00690f80(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar2 = *param_1;
  iVar3 = param_1[1];
  iVar7 = 0;
  if (iVar2 < 0) {
    iVar2 = -iVar2;
    iVar3 = -iVar3;
    iVar7 = 0xb40000;
  }
  if (0 < iVar3) {
    iVar7 = -iVar7;
  }
  piVar5 = &DAT_007226bc;
  if (iVar3 < 0) {
    iVar4 = iVar2 * 2;
    iVar8 = iVar3 * -2;
    iVar7 = iVar7 + -0x3f6f59;
  }
  else {
    iVar4 = iVar2 * -2;
    iVar8 = iVar3 * 2;
    iVar7 = iVar7 + 0x3f6f59;
  }
  iVar3 = iVar3 + iVar4;
  iVar2 = iVar2 + iVar8;
  iVar4 = 0;
  do {
    iVar8 = iVar3 >> ((byte)iVar4 & 0x1f);
    iVar6 = iVar2 >> ((byte)iVar4 & 0x1f);
    if (iVar3 < 0) {
      iVar8 = -iVar8;
      iVar1 = -*piVar5;
    }
    else {
      iVar6 = -iVar6;
      iVar1 = *piVar5;
    }
    iVar7 = iVar7 + iVar1;
    iVar3 = iVar3 + iVar6;
    iVar2 = iVar2 + iVar8;
    iVar4 = iVar4 + 1;
    piVar5 = piVar5 + 1;
  } while (iVar4 < 0x17);
  if (-1 < iVar7) {
    param_1[1] = iVar7 + 0x10U & 0xffffffe0;
    *param_1 = iVar2;
    return;
  }
  *param_1 = iVar2;
  param_1[1] = -(0x10U - iVar7 & 0xffffffe0);
  return;
}


/* FUN_00691030 @ 00691030  kind=lib  attributed-by=lib-island  size=52 */

int FUN_00691030(void)

{
  int local_8 [2];
  
  local_8[0] = 0x4585ba3;
  local_8[1] = 0;
  FUN_00690ea0(local_8);
  return (int)(local_8[0] + (local_8[0] >> 0x1f & 0xfffU)) >> 0xc;
}


/* FUN_00691070 @ 00691070  kind=lib  attributed-by=lib-island  size=18 */

void FUN_00691070(void)

{
  FUN_00691030();
  return;
}


/* FUN_00691090 @ 00691090  kind=lib  attributed-by=lib-island  size=62 */

int FUN_00691090(int param_1,int param_2)

{
  int local_8;
  int local_4;
  
  if ((param_1 == 0) && (param_2 == 0)) {
    return 0;
  }
  local_8 = param_1;
  local_4 = param_2;
  FUN_00690e10(&local_8);
  FUN_00690f80(&local_8);
  return local_4;
}


/* FUN_006910d0 @ 006910d0  kind=lib  attributed-by=lib-island  size=158 */

void FUN_006910d0(int *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_8;
  int local_4;
  
  local_8 = *param_1;
  local_4 = param_1[1];
  if ((param_2 != 0) && ((local_8 != 0 || (local_4 != 0)))) {
    iVar2 = FUN_00690e10(&local_8);
    FUN_00690ea0(&local_8);
    iVar3 = FUN_00690db0();
    iVar4 = FUN_00690db0();
    bVar1 = (byte)iVar2;
    if (0 < iVar2) {
      iVar2 = 1 << (bVar1 - 1 & 0x1f);
      *param_1 = (iVar3 >> 0x1f) + iVar2 + iVar3 >> (bVar1 & 0x1f);
      param_1[1] = (iVar4 >> 0x1f) + iVar2 + iVar4 >> (bVar1 & 0x1f);
      return;
    }
    *param_1 = iVar3 << (-bVar1 & 0x1f);
    param_1[1] = iVar4 << (-bVar1 & 0x1f);
  }
  return;
}


/* FUN_006911e0 @ 006911e0  kind=lib  attributed-by=lib-island  size=32 */

void FUN_006911e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  *param_1 = param_2;
  param_1[1] = 0;
  FUN_006910d0(param_1,param_3);
  return;
}


/* FUN_00691200 @ 00691200  kind=lib  attributed-by=lib-island  size=60 */

int FUN_00691200(int param_1,int param_2)

{
  int iVar1;
  
  param_2 = param_2 - param_1;
  iVar1 = (int)((ulonglong)((longlong)param_2 * 0x49f49f49) >> 0x20) - param_2;
  param_2 = param_2 + ((iVar1 >> 0x18) - (iVar1 >> 0x1f)) * 0x1680000;
  if (param_2 < 0) {
    param_2 = param_2 + 0x1680000;
  }
  iVar1 = param_2 + -0x1680000;
  if (param_2 < 0xb40001) {
    iVar1 = param_2;
  }
  return iVar1;
}


/* FUN_00691240 @ 00691240  kind=lib  attributed-by=lib-island  size=71 */

int FUN_00691240(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  
  if (param_2 < 1) {
    if (param_2 < 0) {
      *param_3 = 6;
      return 0;
    }
    *param_3 = 0;
    return 0;
  }
  iVar1 = (**(code **)(param_1 + 4))(param_1,param_2);
  if (iVar1 == 0) {
    *param_3 = 0x40;
    return 0;
  }
  *param_3 = 0;
  return iVar1;
}


/* FUN_00691290 @ 00691290  kind=lib  attributed-by=lib-island  size=26 */

void FUN_00691290(int param_1,int param_2)

{
  if (param_2 != 0) {
                    /* WARNING: Could not recover jumptable at 0x006912a7. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_1 + 8))();
    return;
  }
  return;
}


/* FUN_00691390 @ 00691390  kind=lib  attributed-by=lib-island  size=31 */

int FUN_00691390(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  while( true ) {
    if (iVar1 == 0) {
      return 0;
    }
    if (*(int *)(iVar1 + 8) == param_2) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  return iVar1;
}


/* FUN_006913b0 @ 006913b0  kind=lib  attributed-by=lib-island  size=37 */

void FUN_006913b0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  param_2[1] = 0;
  *param_2 = iVar1;
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = param_2;
    param_1[1] = param_2;
    return;
  }
  *param_1 = param_2;
  param_1[1] = param_2;
  return;
}


/* FUN_006913e0 @ 006913e0  kind=lib  attributed-by=lib-island  size=35 */

void FUN_006913e0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (iVar1 == 0) {
    *param_1 = piVar2;
  }
  else {
    *(int **)(iVar1 + 4) = piVar2;
  }
  if (piVar2 != (int *)0x0) {
    *piVar2 = iVar1;
    return;
  }
  param_1[1] = iVar1;
  return;
}


/* FUN_00691410 @ 00691410  kind=lib  attributed-by=lib-island  size=68 */

void FUN_00691410(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_2;
  piVar2 = (int *)param_2[1];
  if (iVar1 != 0) {
    *(int **)(iVar1 + 4) = piVar2;
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      *param_2 = 0;
      param_2[1] = *param_1;
      *(int **)*param_1 = param_2;
      *param_1 = (int)param_2;
      return;
    }
    param_1[1] = iVar1;
    *param_2 = 0;
    param_2[1] = *param_1;
    *(int **)*param_1 = param_2;
    *param_1 = (int)param_2;
  }
  return;
}


/* FUN_00691460 @ 00691460  kind=lib  attributed-by=lib-island  size=82 */

void FUN_00691460(int *param_1,code *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_1;
  while (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 4);
    if (param_2 != (code *)0x0) {
      (*param_2)(param_3,*(undefined4 *)(iVar2 + 8),param_4);
    }
    FUN_00691290(param_3,iVar2);
    iVar2 = iVar1;
  }
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* FUN_00691540 @ 00691540  kind=lib  attributed-by=lib-island  size=101 */

void FUN_00691540(undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = *param_1;
  FUN_00691290(uVar1,param_1[6]);
  param_1[6] = 0;
  FUN_00691290(uVar1,param_1[7]);
  param_1[7] = 0;
  FUN_00691290(uVar1,param_1[8]);
  param_1[8] = 0;
  FUN_00691290(uVar1,param_1[10]);
  param_1[10] = 0;
  FUN_00691290(uVar1,param_1[0xd]);
  param_1[0xd] = 0;
  param_1[0xb] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_0068f020(param_1);
  return;
}


/* FUN_006915b0 @ 006915b0  kind=lib  attributed-by=lib-island  size=31 */

void FUN_006915b0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *param_1;
    FUN_00691540(param_1);
    FUN_00691290(uVar1,param_1);
  }
  return;
}


/* FUN_006915d0 @ 006915d0  kind=lib  attributed-by=lib-island  size=42 */

void FUN_006915d0(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + 0x1c);
    FUN_006908a0(param_1);
    if (param_2 == 0) {
      FUN_00691290(uVar1,param_1);
    }
  }
  return;
}


/* FUN_00691600 @ 00691600  kind=lib  attributed-by=lib-island  size=68 */

void FUN_00691600(int param_1)

{
  uint *puVar1;
  
  if ((*(int *)(param_1 + 0x9c) != 0) && ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 1) != 0)) {
    FUN_00691290(*(undefined4 *)(*(int *)(param_1 + 4) + 100),*(undefined4 *)(param_1 + 0x58));
    *(undefined4 *)(param_1 + 0x58) = 0;
    puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    return;
  }
  *(undefined4 *)(param_1 + 0x58) = 0;
  return;
}


/* FUN_00691670 @ 00691670  kind=lib  attributed-by=lib-island  size=120 */

void FUN_00691670(void)

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
  *(undefined4 *)(unaff_ESI + 0x50) = 0;
  *(undefined4 *)(unaff_ESI + 0x4c) = 0;
  *(undefined4 *)(unaff_ESI + 0x54) = 0;
  *(undefined1 *)(unaff_ESI + 0x5e) = 0;
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
  *(undefined4 *)(unaff_ESI + 0x90) = 0;
  *(undefined4 *)(unaff_ESI + 0x94) = 0;
  return;
}


/* FUN_006916f0 @ 006916f0  kind=lib  attributed-by=lib-island  size=108 */

void FUN_006916f0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  puVar1 = *(undefined4 **)(*(int *)(unaff_ESI + 4) + 0x60);
  uVar2 = puVar1[2];
  if (*(code **)(puVar1[5] + 0x44) != (code *)0x0) {
    (**(code **)(puVar1[5] + 0x44))();
  }
  FUN_00691600();
  if (*(undefined4 **)(unaff_ESI + 0x9c) != (undefined4 *)0x0) {
    if ((*(uint *)*puVar1 & 0x200) == 0) {
      FUN_006915b0(**(undefined4 **)(unaff_ESI + 0x9c));
      **(undefined4 **)(unaff_ESI + 0x9c) = 0;
    }
    FUN_00691290(uVar2,*(undefined4 *)(unaff_ESI + 0x9c));
    *(undefined4 *)(unaff_ESI + 0x9c) = 0;
  }
  return;
}


/* FUN_00691760 @ 00691760  kind=lib  attributed-by=lib-island  size=103 */

void FUN_00691760(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x54);
    uVar2 = *(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 8);
    iVar4 = 0;
    if (iVar1 != 0) {
      while (iVar3 = iVar1, iVar3 != param_1) {
        iVar1 = *(int *)(iVar3 + 8);
        iVar4 = iVar3;
        if (*(int *)(iVar3 + 8) == 0) {
          return;
        }
      }
      if (iVar4 == 0) {
        *(undefined4 *)(*(int *)(param_1 + 4) + 0x54) = *(undefined4 *)(iVar3 + 8);
        FUN_006916f0();
        FUN_00691290(uVar2,param_1);
        return;
      }
      *(undefined4 *)(iVar4 + 8) = *(undefined4 *)(iVar3 + 8);
      FUN_006916f0();
      FUN_00691290(uVar2,param_1);
    }
  }
  return;
}


/* FUN_00691840 @ 00691840  kind=lib  attributed-by=lib-island  size=388 */

undefined1 * FUN_00691840(undefined4 param_1,int param_2,undefined1 *param_3)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *unaff_ESI;
  int *unaff_EDI;
  int local_c;
  
  puVar1 = param_3;
  *unaff_EDI = 0;
  *unaff_ESI = 0;
  *param_3 = 0;
  iVar2 = FUN_00690cd0(param_1,&param_3);
  if (param_3 != (undefined1 *)0x0) {
    return param_3;
  }
  if (iVar2 != 0x74797031) {
    return (undefined1 *)0x2;
  }
  uVar3 = FUN_00690b80(param_1,&param_3);
  if ((param_3 == (undefined1 *)0x0) &&
     (param_3 = (undefined1 *)FUN_00690900(param_1,6), param_3 == (undefined1 *)0x0)) {
    *puVar1 = 0;
    iVar2 = -1;
    local_c = 0;
    param_3 = (undefined1 *)0x0;
    if ((uVar3 & 0xffff) != 0) {
      do {
        iVar4 = FUN_00690cd0(param_1,&param_3);
        if (param_3 != (undefined1 *)0x0) {
          return param_3;
        }
        param_3 = (undefined1 *)FUN_00690900(param_1,4);
        if (param_3 != (undefined1 *)0x0) {
          return param_3;
        }
        iVar5 = FUN_00690cd0(param_1,&param_3);
        *unaff_EDI = iVar5;
        if (param_3 != (undefined1 *)0x0) {
          return param_3;
        }
        iVar5 = FUN_00690cd0(param_1,&param_3);
        *unaff_ESI = iVar5;
        if (param_3 != (undefined1 *)0x0) {
          return param_3;
        }
        if (iVar4 == 0x43494420) {
          *unaff_EDI = *unaff_EDI + 0x16;
          *unaff_ESI = *unaff_ESI + -0x16;
          *puVar1 = 1;
joined_r0x00691995:
          iVar2 = iVar2 + 1;
          if (param_2 < 0) {
            return (undefined1 *)0x0;
          }
LAB_006919a0:
          if (iVar2 == param_2) {
            return (undefined1 *)0x0;
          }
        }
        else {
          if (iVar4 == 0x54595031) {
            *unaff_EDI = *unaff_EDI + 0x18;
            *unaff_ESI = *unaff_ESI + -0x18;
            *puVar1 = 0;
            goto joined_r0x00691995;
          }
          if (-1 < param_2) goto LAB_006919a0;
        }
        local_c = local_c + 1;
      } while (local_c < (int)(uVar3 & 0xffff));
    }
    param_3 = (undefined1 *)0x8e;
  }
  return param_3;
}


/* FUN_00691b00 @ 00691b00  kind=lib  attributed-by=lib-island  size=34 */

void FUN_00691b00(void)

{
  undefined4 uVar1;
  int *unaff_ESI;
  
  uVar1 = *(undefined4 *)(*unaff_ESI + 100);
  if (*(code **)(unaff_ESI[3] + 8) != (code *)0x0) {
    (**(code **)(unaff_ESI[3] + 8))();
  }
  FUN_00691290(uVar1);
  return;
}


/* FUN_00691b90 @ 00691b90  kind=lib  attributed-by=lib-island  size=141 */

int FUN_00691b90(int param_1,int param_2,int param_3,undefined4 *param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  
  if (param_1 == 0) {
    return 0x21;
  }
  if (param_2 != 0) {
    uVar3 = FUN_00691390(param_1 + 0x9c,param_2);
    if ((int)uVar3 == 0) {
      return 6;
    }
    FUN_00691410((int)((ulonglong)uVar3 >> 0x20),(int)uVar3);
    if (*(int *)(param_2 + 0x18) == 0x6f75746c) {
      *(int *)(param_1 + 0xa4) = param_2;
    }
    if (param_3 != 0) {
      pcVar1 = *(code **)(*(int *)(param_2 + 0x14) + 0x34);
      do {
        iVar2 = (*pcVar1)(param_2,*param_4,param_4[1]);
        if (iVar2 != 0) {
          return iVar2;
        }
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    return 0;
  }
  return 6;
}


/* FUN_00691c20 @ 00691c20  kind=lib  attributed-by=lib-island  size=190 */

int FUN_00691c20(int param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 local_4;
  
  iVar3 = *(int *)(param_2 + 0x48);
  iVar2 = 0;
  if (iVar3 != 0x62697473) {
    local_4 = 0;
    bVar1 = false;
    if (iVar3 == 0x6f75746c) {
      local_4 = *(undefined4 *)(param_1 + 0x9c);
      iVar3 = *(int *)(param_1 + 0xa4);
    }
    else {
      iVar3 = FUN_0068fce0(param_1,iVar3,&local_4);
    }
    iVar2 = 7;
    if (iVar3 != 0) {
      while (iVar2 = (**(code **)(iVar3 + 0x44))(iVar3,param_2,param_3,0), iVar2 != 0) {
        if ((char)iVar2 != '\x13') {
          return iVar2;
        }
        iVar3 = FUN_0068fce0(param_1,*(undefined4 *)(param_2 + 0x48),&local_4);
        bVar1 = true;
        if (iVar3 == 0) {
          return iVar2;
        }
      }
      iVar2 = 0;
      if (bVar1) {
        FUN_00691b90(param_1,iVar3,0,0);
      }
    }
  }
  return iVar2;
}


/* FUN_00691ce0 @ 00691ce0  kind=lib  attributed-by=lib-island  size=43 */

undefined4 FUN_00691ce0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    uVar1 = FUN_00691c20(*(undefined4 *)(*(int *)(*(int *)(param_1 + 4) + 0x60) + 4),param_1,param_2
                        );
    return uVar1;
  }
  return 6;
}


/* FUN_00691d10 @ 00691d10  kind=lib  attributed-by=lib-island  size=133 */

undefined4 FUN_00691d10(int param_1,undefined4 *param_2)

{
  if ((param_1 != 0) && (param_2 != (undefined4 *)0x0)) {
    if ((*(byte *)(param_2 + 4) & 1) != 0) {
      FUN_00691290(param_1,param_2[1]);
      param_2[1] = 0;
      FUN_00691290(param_1,param_2[2]);
      param_2[2] = 0;
      FUN_00691290(param_1,param_2[3]);
      param_2[3] = 0;
    }
    *param_2 = 0;
    param_2[1] = 0;
    param_2[2] = 0;
    param_2[3] = 0;
    param_2[4] = 0;
    return 0;
  }
  return 6;
}


/* FUN_00691da0 @ 00691da0  kind=lib  attributed-by=lib-island  size=25 */

undefined4 FUN_00691da0(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x21;
  }
  uVar1 = FUN_00691d10();
  return uVar1;
}


/* FUN_00691ec0 @ 00691ec0  kind=lib  attributed-by=lib-island  size=28 */

void FUN_00691ec0(int param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_00690940(param_1,*(undefined4 *)(param_1 + 8),param_2,param_3);
  return;
}


/* FUN_00691f30 @ 00691f30  kind=lib  attributed-by=lib-island  size=175 */

int FUN_00691f30(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int local_4;
  
  local_4 = 0;
  if (param_1[5] == 0) {
    uVar3 = param_1[2];
    if (uVar3 < (uint)param_1[1]) {
      if (uVar3 + param_2 <= (uint)param_1[1]) {
        param_1[2] = uVar3 + param_2;
        param_1[8] = uVar3 + *param_1;
        param_1[9] = uVar3 + *param_1 + param_2;
        return 0;
      }
    }
  }
  else {
    iVar1 = param_1[7];
    if (param_2 <= (uint)param_1[1]) {
      iVar2 = FUN_00691240(iVar1,param_2,&local_4);
      iVar4 = local_4;
      *param_1 = iVar2;
      if (local_4 == 0) {
        uVar3 = (*(code *)param_1[5])(param_1,param_1[2],iVar2,param_2);
        if (uVar3 < param_2) {
          FUN_00691290(iVar1,*param_1);
          *param_1 = 0;
          iVar4 = 0x55;
        }
        param_1[8] = *param_1;
        param_1[2] = param_1[2] + uVar3;
        param_1[9] = *param_1 + param_2;
      }
      return iVar4;
    }
  }
  return 0x55;
}


/* FUN_00691fe0 @ 00691fe0  kind=lib  attributed-by=lib-island  size=39 */

void FUN_00691fe0(undefined4 *param_1)

{
  if (param_1[5] != 0) {
    FUN_00691290(param_1[7],*param_1);
    *param_1 = 0;
  }
  param_1[9] = 0;
  param_1[8] = 0;
  return;
}


/* FUN_00692230 @ 00692230  kind=lib  attributed-by=lib-island  size=89 */

void * FUN_00692230(undefined4 param_1,size_t param_2,int *param_3)

{
  void *_Dst;
  int local_4;
  
  _Dst = (void *)FUN_00691240(param_1,param_2,&local_4);
  if (local_4 != 0) {
    *param_3 = local_4;
    return _Dst;
  }
  if (0 < (int)param_2) {
    memset(_Dst,0,param_2);
    *param_3 = 0;
    return _Dst;
  }
  *param_3 = 0;
  return _Dst;
}


/* FUN_00692290 @ 00692290  kind=lib  attributed-by=lib-island  size=268 */

int FUN_00692290(int param_1,int param_2,int param_3,int param_4,int param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  if (((param_3 < 0) || (param_4 < 0)) || (param_2 < 0)) {
    *param_6 = 6;
    return param_5;
  }
  if ((param_4 == 0) || (param_2 == 0)) {
    FUN_00691290(param_1,param_5);
    *param_6 = 0;
    return 0;
  }
  if ((int)(0x7fffffff / (longlong)param_2) < param_4) {
    *param_6 = 10;
    return param_5;
  }
  if (param_3 == 0) {
    iVar1 = FUN_00692230(param_1,param_2 * param_4,&local_4);
    *param_6 = local_4;
    return iVar1;
  }
  iVar1 = (**(code **)(param_1 + 0xc))(param_1,param_2 * param_3,param_2 * param_4,param_5);
  if (iVar1 == 0) {
    *param_6 = 0x40;
    return param_5;
  }
  *param_6 = 0;
  return iVar1;
}


/* FUN_006923a0 @ 006923a0  kind=lib  attributed-by=lib-island  size=43 */

void FUN_006923a0(undefined4 param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int local_4;
  
  puVar1 = (undefined4 *)FUN_00692230(param_1,0x60,&local_4);
  if (local_4 == 0) {
    *puVar1 = param_1;
    *param_2 = puVar1;
  }
  return;
}


/* FUN_006923d0 @ 006923d0  kind=lib  attributed-by=lib-island  size=211 */

undefined4 * FUN_006923d0(undefined4 *param_1,uint *param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  puVar3 = param_2;
  *param_3 = 0;
  if (param_1 == (undefined4 *)0x0) {
    return (undefined4 *)0x21;
  }
  if (param_2 == (uint *)0x0) {
    return (undefined4 *)0x6;
  }
  uVar1 = *param_1;
  uVar4 = FUN_00692230(uVar1,0x28,&param_1);
  puVar6 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    *(undefined4 *)(uVar4 + 0x1c) = uVar1;
    uVar2 = *puVar3;
    if ((uVar2 & 1) == 0) {
      if ((uVar2 & 4) == 0) {
        if (((uVar2 & 2) != 0) && (puVar3[4] != 0)) {
          FUN_00691290(uVar1,uVar4);
          uVar4 = puVar3[4];
          *(undefined4 *)(uVar4 + 0x1c) = uVar1;
          *param_3 = uVar4;
          return (undefined4 *)0x0;
        }
        puVar5 = (undefined4 *)0x6;
LAB_0069245c:
        FUN_00691290(uVar1,uVar4);
        *param_3 = 0;
        return puVar5;
      }
      puVar5 = (undefined4 *)FUN_006cc610(uVar4,puVar3[3]);
      *(uint *)(uVar4 + 0x10) = puVar3[3];
      puVar6 = (undefined4 *)0x0;
      if (puVar5 != (undefined4 *)0x0) goto LAB_0069245c;
    }
    else {
      FUN_00690880(uVar4,puVar3[1],puVar3[2]);
    }
    *(undefined4 *)(uVar4 + 0x1c) = uVar1;
    *param_3 = uVar4;
  }
  return puVar6;
}


/* FUN_006924b0 @ 006924b0  kind=lib  attributed-by=lib-island  size=103 */

void FUN_006924b0(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *unaff_EDI;
  int local_4;
  
  puVar1 = *(undefined4 **)(unaff_EDI[1] + 0x60);
  uVar2 = puVar1[2];
  iVar3 = puVar1[5];
  local_4 = 0;
  *unaff_EDI = puVar1[1];
  uVar4 = FUN_00692230(uVar2,0x28,&local_4);
  if (local_4 == 0) {
    unaff_EDI[0x27] = uVar4;
    if (((*(uint *)*puVar1 & 0x200) == 0) && (iVar5 = FUN_006923a0(uVar2,uVar4), iVar5 != 0)) {
      return;
    }
    if (*(code **)(iVar3 + 0x40) != (code *)0x0) {
      (**(code **)(iVar3 + 0x40))();
    }
  }
  return;
}


/* FUN_00692580 @ 00692580  kind=lib  attributed-by=lib-island  size=149 */

int FUN_00692580(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1;
  if ((param_1 == 0) || (iVar3 = *(int *)(param_1 + 0x60), iVar3 == 0)) {
    return 6;
  }
  uVar1 = *(undefined4 *)(iVar3 + 8);
  iVar3 = FUN_00692230(uVar1,*(undefined4 *)(*(int *)(iVar3 + 0x14) + 0x2c),&param_1);
  if (param_1 == 0) {
    *(int *)(iVar3 + 4) = iVar2;
    iVar4 = FUN_006924b0();
    if (iVar4 != 0) {
      FUN_006916f0();
      FUN_00691290(uVar1,iVar3);
      return iVar4;
    }
    *(undefined4 *)(iVar3 + 8) = *(undefined4 *)(iVar2 + 0x54);
    *(int *)(iVar2 + 0x54) = iVar3;
    param_1 = 0;
    if (param_2 != (int *)0x0) {
      *param_2 = iVar3;
      return 0;
    }
  }
  else if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  return param_1;
}


/* FUN_00692620 @ 00692620  kind=lib  attributed-by=lib-island  size=765 */

int FUN_00692620(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  
  if (((param_1 == 0) || (*(int *)(param_1 + 0x58) == 0)) ||
     (iVar1 = *(int *)(param_1 + 0x54), iVar1 == 0)) {
    return 0x23;
  }
  FUN_00691670();
  puVar2 = *(undefined4 **)(param_1 + 0x60);
  piVar3 = *(int **)(puVar2[1] + 0xa8);
  if ((param_3 & 0x400) != 0) {
    param_3 = param_3 | 0x801;
  }
  if ((param_3 & 1) != 0) {
    param_3 = param_3 & 0xfffffffb | 10;
  }
  if ((((piVar3 != (int *)0x0) && ((param_3 & 2) == 0)) &&
      (((param_3 & 0x8000) == 0 &&
       ((uVar8 = *(uint *)*puVar2, (uVar8 & 0x100) != 0 && ((uVar8 & 0x200) == 0)))))) &&
     ((*(uint *)(param_1 + 8) & 0x2000) == 0)) {
    iVar5 = *(int *)(param_1 + 0x80);
    if ((((*(int *)(iVar5 + 0xc) == 0) && (*(int *)(iVar5 + 4) != 0)) ||
        ((*(int *)(iVar5 + 4) == 0 && (*(int *)(iVar5 + 0xc) != 0)))) &&
       (((((param_3 & 0x20) != 0 || ((uVar8 & 0x400) == 0)) || ((param_3 & 0xf0000) == 0x10000)) ||
        (*(char *)(iVar5 + 0x38) != '\0')))) {
      if ((((*(uint *)(param_1 + 8) & 2) == 0) || ((param_3 & 8) != 0)) ||
         ((iVar5 = (**(code **)(puVar2[5] + 0x50))
                             (iVar1,*(undefined4 *)(param_1 + 0x58),param_2,param_3 | 0x4000),
          iVar5 != 0 || (iVar5 = 0, *(int *)(iVar1 + 0x48) != 0x62697473)))) {
        iVar4 = *(int *)(param_1 + 0x80);
        uVar6 = *(undefined4 *)(iVar4 + 0x1c);
        *(undefined4 *)(iVar4 + 0x1c) = 0;
        iVar5 = (**(code **)(*(int *)(*piVar3 + 0x14) + 0xc))
                          (piVar3,iVar1,*(undefined4 *)(param_1 + 0x58),param_2,param_3);
        *(undefined4 *)(iVar4 + 0x1c) = uVar6;
      }
      goto LAB_006927eb;
    }
  }
  iVar5 = (**(code **)(puVar2[5] + 0x50))(iVar1,*(undefined4 *)(param_1 + 0x58),param_2,param_3);
  if (iVar5 != 0) {
    return iVar5;
  }
  iVar5 = 0;
  if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
    iVar5 = FUN_00690340(iVar1 + 0x6c);
    if (iVar5 != 0) {
      return iVar5;
    }
    iVar5 = 0;
    if ((param_3 & 2) == 0) {
      FUN_0068f250((byte)param_3 & 0x10);
    }
  }
LAB_006927eb:
  if ((param_3 & 0x10) == 0) {
    *(undefined4 *)(iVar1 + 0x40) = *(undefined4 *)(iVar1 + 0x28);
    *(undefined4 *)(iVar1 + 0x44) = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x40) = 0;
    *(undefined4 *)(iVar1 + 0x44) = *(undefined4 *)(iVar1 + 0x34);
  }
  if (((param_3 & 0x2000) == 0) && ((*(byte *)(param_1 + 8) & 1) != 0)) {
    iVar4 = *(int *)(param_1 + 0x58);
    uVar6 = FUN_0068ea60(*(undefined4 *)(iVar1 + 0x38),*(undefined4 *)(iVar4 + 0x10),0x40);
    *(undefined4 *)(iVar1 + 0x38) = uVar6;
    uVar6 = FUN_0068ea60(*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar4 + 0x14),0x40);
    *(undefined4 *)(iVar1 + 0x3c) = uVar6;
  }
  if (((param_3 & 0x800) == 0) && (iVar4 = *(int *)(param_1 + 0x80), *(int *)(iVar4 + 0x1c) != 0)) {
    iVar7 = FUN_0068fd30();
    if (iVar7 == 0) {
      if (*(int *)(iVar1 + 0x48) == 0x6f75746c) {
        if (iVar4 + 4 != 0) {
          FUN_00690560(iVar1 + 0x6c,iVar4 + 4);
        }
        if ((undefined4 *)(iVar4 + 0x14) != (undefined4 *)0x0) {
          FUN_006904c0(iVar1 + 0x6c,*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18));
        }
      }
    }
    else {
      iVar5 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x2c))(iVar7,iVar1,iVar4 + 4,iVar4 + 0x14);
    }
    FUN_00690500(iVar1 + 0x40,iVar4 + 4);
  }
  if ((((iVar5 == 0) && (*(int *)(iVar1 + 0x48) != 0x62697473)) &&
      (*(int *)(iVar1 + 0x48) != 0x636f6d70)) && ((param_3 & 4) != 0)) {
    uVar8 = (int)param_3 >> 0x10 & 0xf;
    if ((uVar8 == 0) && ((param_3 & 0x1000) != 0)) {
      uVar8 = 2;
    }
    iVar5 = FUN_00691ce0(iVar1,uVar8);
  }
  return iVar5;
}


/* FUN_00692920 @ 00692920  kind=lib  attributed-by=lib-island  size=51 */

undefined4 FUN_00692920(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x23;
  }
  if (*(int *)(param_1 + 0x5c) != 0) {
    param_2 = FUN_0068fb90(param_1,param_2);
  }
  uVar1 = FUN_00692620(param_1,param_2,param_3);
  return uVar1;
}


/* FUN_00692960 @ 00692960  kind=lib  attributed-by=lib-island  size=77 */

void FUN_00692960(undefined4 param_1)

{
  int iVar1;
  int unaff_EDI;
  
  if (unaff_EDI != 0) {
    iVar1 = 0;
    if (0 < *(int *)(unaff_EDI + 0x24)) {
      do {
        FUN_00691b00();
        *(undefined4 *)(*(int *)(unaff_EDI + 0x28) + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(unaff_EDI + 0x24));
    }
    FUN_00691290(param_1,*(undefined4 *)(unaff_EDI + 0x28));
    *(undefined4 *)(unaff_EDI + 0x28) = 0;
    *(undefined4 *)(unaff_EDI + 0x24) = 0;
  }
  return;
}


/* FUN_006929b0 @ 006929b0  kind=lib  attributed-by=lib-island  size=192 */

void FUN_006929b0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  code *pcVar3;
  
  iVar1 = *(int *)(param_3 + 0x14);
  if (*(code **)(param_2 + 0x78) != (code *)0x0) {
    (**(code **)(param_2 + 0x78))(*(undefined4 *)(param_2 + 0x74));
  }
  iVar2 = *(int *)(param_2 + 0x54);
  while (iVar2 != 0) {
    FUN_00691760(*(undefined4 *)(param_2 + 0x54));
    iVar2 = *(int *)(param_2 + 0x54);
  }
  FUN_00691460(param_2 + 0x6c,FUN_006917d0,param_1,param_3);
  *(undefined4 *)(param_2 + 0x58) = 0;
  if (*(code **)(param_2 + 0x30) != (code *)0x0) {
    (**(code **)(param_2 + 0x30))(param_2);
  }
  FUN_00692960(param_1);
  pcVar3 = *(code **)(iVar1 + 0x34);
  if (pcVar3 != (code *)0x0) {
    (*pcVar3)(param_2);
  }
  FUN_006915d0(*(undefined4 *)(param_2 + 0x68),*(uint *)(param_2 + 8) >> 10 & 1);
  *(undefined4 *)(param_2 + 0x68) = 0;
  if (*(int *)(param_2 + 0x80) != 0) {
    FUN_00691290(param_1,*(int *)(param_2 + 0x80));
    *(undefined4 *)(param_2 + 0x80) = 0;
  }
  FUN_00691290(param_1,param_2);
  return;
}


/* FUN_00692aa0 @ 00692aa0  kind=lib  attributed-by=lib-island  size=304 */

int FUN_00692aa0(undefined4 param_1,undefined4 param_2,int param_3,int param_4,int *param_5)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int local_c;
  int local_8;
  int local_4;
  
  local_8 = *(int *)(in_EAX + 0x14);
  uVar1 = *(undefined4 *)(in_EAX + 8);
  local_4 = 0;
  iVar2 = FUN_00692230(uVar1,*(undefined4 *)(local_8 + 0x24),&local_c);
  iVar3 = local_c;
  if ((local_c == 0) && (local_4 = FUN_00692230(uVar1,0x3c,&local_c), iVar3 = local_c, local_c == 0)
     ) {
    *(int *)(iVar2 + 0x80) = local_4;
    *(int *)(iVar2 + 0x60) = in_EAX;
    *(undefined4 *)(iVar2 + 100) = uVar1;
    *(undefined4 *)(iVar2 + 0x68) = param_1;
    *(undefined4 *)(local_4 + 0x34) = 0;
    iVar3 = 0;
    if (0 < param_3) {
      do {
        if (*(int *)(*(int *)(iVar2 + 0x80) + 0x34) != 0) break;
        if (*(int *)(param_4 + iVar3 * 8) == 0x696e6372) {
          *(undefined4 *)(*(int *)(iVar2 + 0x80) + 0x34) = *(undefined4 *)(param_4 + 4 + iVar3 * 8);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_3);
    }
    if (((*(code **)(local_8 + 0x30) == (code *)0x0) ||
        (iVar3 = (**(code **)(local_8 + 0x30))(param_1,iVar2,param_2,param_3,param_4), iVar3 == 0))
       && ((iVar3 = FUN_0068f2f0(iVar2), iVar3 == 0 || (iVar3 == 0x26)))) {
      *param_5 = iVar2;
      return 0;
    }
  }
  FUN_00692960(uVar1);
  if (*(code **)(local_8 + 0x34) != (code *)0x0) {
    (**(code **)(local_8 + 0x34))(iVar2);
  }
  FUN_00691290(uVar1,local_4);
  FUN_00691290(uVar1,iVar2);
  *param_5 = 0;
  return iVar3;
}


/* FUN_00692be0 @ 00692be0  kind=lib  attributed-by=lib-island  size=95 */

int FUN_00692be0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_EAX;
  int iVar1;
  int *unaff_EDI;
  int local_4;
  
  if (in_EAX == (undefined4 *)0x0) {
    return 0x21;
  }
  if (param_1 == 0) {
    return 6;
  }
  *unaff_EDI = 0;
  iVar1 = FUN_00692230(*in_EAX,0x28,&local_4);
  if (local_4 == 0) {
    FUN_00690880(iVar1,param_1,param_2);
    *(undefined4 *)(iVar1 + 0x18) = param_3;
    *unaff_EDI = iVar1;
  }
  return local_4;
}


/* FUN_00692c40 @ 00692c40  kind=lib  attributed-by=lib-island  size=189 */

int FUN_00692c40(undefined4 param_1,int param_2,int *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_EDX;
  
  uVar1 = *in_EDX;
  iVar2 = FUN_00692be0();
  if (iVar2 != 0) {
    FUN_00691290(uVar1);
    return iVar2;
  }
  if (param_2 != 0) {
    FUN_0068fd80();
  }
  iVar2 = FUN_00694b60();
  if (iVar2 == 0) {
    *(uint *)(*param_3 + 8) = *(uint *)(*param_3 + 8) & 0xfffffbff;
    return 0;
  }
  FUN_006908a0(0);
  FUN_00691290(uVar1,0);
  return iVar2;
}


/* FUN_00692d00 @ 00692d00  kind=lib  attributed-by=lib-island  size=214 */

int FUN_00692d00(undefined4 *param_1,uint param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char local_11;
  int local_10;
  undefined4 local_c;
  undefined4 local_4;
  
  uVar1 = *param_1;
  local_c = FUN_00690930();
  local_10 = FUN_00691840();
  iVar2 = local_10;
  if (local_10 == 0) {
    iVar2 = FUN_006908c0();
    if (iVar2 != 0) {
      return 0;
    }
    FUN_00692230(uVar1,local_4,&local_10);
    iVar2 = local_10;
    if ((local_10 == 0) && (iVar2 = FUN_00691ec0(), iVar2 == 0)) {
      pcVar3 = "cid";
      if (local_11 == '\0') {
        pcVar3 = "type1";
      }
      iVar2 = FUN_00692c40((-1 < (int)param_2) - 1 & param_2,pcVar3,param_3);
    }
  }
  if ((iVar2 == 2) && (iVar4 = FUN_006908c0(), iVar4 != 0)) {
    return iVar4;
  }
  return iVar2;
}


/* FUN_00692de0 @ 00692de0  kind=lib  attributed-by=lib-island  size=620 */

int FUN_00692de0(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,undefined4 param_5)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
  local_4 = *param_1;
  local_18 = 1;
  if ((in_EAX != -1) && (in_EAX != 0)) {
    return 1;
  }
  iVar6 = 0;
  iVar5 = 0;
  if (0 < param_4) {
    do {
      local_18 = FUN_006908c0(param_2,*(undefined4 *)(param_3 + iVar5 * 4));
      if (local_18 != 0) {
        return local_18;
      }
      iVar1 = FUN_00690cd0(param_2,&local_18);
      if (local_18 != 0) {
        return local_18;
      }
      iVar5 = iVar5 + 1;
      iVar6 = iVar6 + 6 + iVar1;
    } while (iVar5 < param_4);
  }
  local_c = iVar6 + 2;
  puVar2 = (undefined4 *)FUN_00692230(local_4,local_c,&local_18);
  if (local_18 == 0) {
    iVar5 = 0;
    iVar1 = 6;
    *puVar2 = 0x180;
    *(undefined2 *)(puVar2 + 1) = 0;
    iVar6 = 2;
    local_8 = 1;
    local_10 = 0;
    if (0 < param_4) {
      do {
        local_18 = FUN_006908c0(param_2,*(undefined4 *)(param_3 + local_10 * 4));
        if (local_18 != 0) goto LAB_00693001;
        local_14 = FUN_00690cd0(param_2,&local_18);
        if (local_18 != 0) {
          return local_18;
        }
        uVar3 = FUN_00690b80(param_2,&local_18);
        if (local_18 != 0) {
          return local_18;
        }
        iVar4 = (int)(uVar3 & 0xffff) >> 8;
        if (iVar4 != 0) {
          if (local_14 < 3) {
            local_14 = 0;
          }
          else {
            local_14 = local_14 + -2;
          }
          if (iVar4 == local_8) {
            iVar5 = iVar5 + local_14;
          }
          else {
            if (local_c < iVar6 + 3) goto LAB_00693001;
            *(char *)((int)puVar2 + iVar6 + 1) = (char)((uint)iVar5 >> 8);
            *(char *)((int)puVar2 + iVar6 + 2) = (char)((uint)iVar5 >> 0x10);
            *(char *)((int)puVar2 + iVar6) = (char)iVar5;
            *(char *)((int)puVar2 + iVar6 + 3) = (char)((uint)iVar5 >> 0x18);
            if (iVar4 == 5) break;
            if (local_c < iVar1 + 6) goto LAB_00693001;
            *(undefined1 *)(iVar1 + (int)puVar2) = 0x80;
            *(char *)(iVar1 + 1 + (int)puVar2) = (char)((uVar3 & 0xffff) >> 8);
            *(undefined2 *)(iVar1 + 2 + (int)puVar2) = 0;
            iVar6 = iVar1 + 2;
            *(undefined2 *)(iVar1 + 4 + (int)puVar2) = 0;
            iVar1 = iVar1 + 6;
            iVar5 = local_14;
            local_8 = iVar4;
          }
          local_18 = FUN_00691ec0(param_2,iVar1 + (int)puVar2,local_14);
          if (local_18 != 0) goto LAB_00693001;
          iVar1 = iVar1 + local_14;
        }
        local_10 = local_10 + 1;
      } while (local_10 < param_4);
    }
    if ((iVar1 + 2 <= local_c) &&
       (*(undefined2 *)(iVar1 + (int)puVar2) = 0x380, iVar6 + 3 <= local_c)) {
      *(char *)((int)puVar2 + iVar6) = (char)iVar5;
      *(char *)((int)puVar2 + iVar6 + 1) = (char)((uint)iVar5 >> 8);
      *(char *)((int)puVar2 + iVar6 + 2) = (char)((uint)iVar5 >> 0x10);
      *(char *)((int)puVar2 + iVar6 + 3) = (char)((uint)iVar5 >> 0x18);
      iVar6 = FUN_00692c40(0,"type1",param_5);
      return iVar6;
    }
LAB_00693001:
    FUN_00691290(local_4,puVar2);
  }
  return local_18;
}


/* FUN_00693060 @ 00693060  kind=lib  attributed-by=lib-island  size=275 */

int FUN_00693060(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  char *pcVar6;
  
  uVar1 = *param_1;
  if (in_EAX == -1) {
    in_EAX = 0;
  }
  if (in_EAX < param_2) {
    param_2 = FUN_006908c0();
    iVar3 = param_2;
    if ((param_2 == 0) && (iVar2 = FUN_00690cd0(), iVar3 = param_2, param_2 == 0)) {
      if (iVar2 == -1) {
        return 1;
      }
      iVar3 = FUN_00692d00(param_1,in_EAX,param_3);
      if ((((iVar3 != 0) && (param_2 = iVar3, iVar4 = FUN_006908c0(), iVar4 == 0)) &&
          (piVar5 = (int *)FUN_00692230(uVar1,iVar2,&param_2), iVar3 = param_2, param_2 == 0)) &&
         (iVar3 = FUN_00691ec0(), iVar3 == 0)) {
        if ((iVar2 < 5) || (pcVar6 = "cff", *piVar5 != 0x4f54544f)) {
          pcVar6 = "truetype";
        }
        iVar3 = FUN_00692c40(0,pcVar6,param_3);
      }
    }
    return iVar3;
  }
  return 1;
}


/* FUN_00693180 @ 00693180  kind=lib  attributed-by=lib-island  size=88 */

undefined4 FUN_00693180(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined8 uVar4;
  
  if ((param_1 != 0) && (iVar1 = *(int *)(param_1 + 0x60), iVar1 != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 8);
    uVar4 = FUN_00691390(iVar1 + 0x18,param_1);
    iVar3 = (int)uVar4;
    if (iVar3 != 0) {
      FUN_006913e0((int)((ulonglong)uVar4 >> 0x20),iVar3);
      FUN_00691290(uVar2,iVar3);
      FUN_006929b0(uVar2,param_1,iVar1);
      return 0;
    }
  }
  return 0x23;
}


/* FUN_006931e0 @ 006931e0  kind=lib  attributed-by=lib-island  size=223 */

int FUN_006931e0(int param_1,int *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int local_4;
  
  iVar4 = param_1;
  local_4 = 0;
  if (param_1 == 0) {
    return 0x23;
  }
  if (param_2 == (int *)0x0) {
    return 0x24;
  }
  if (*(int *)(param_1 + 0x60) == 0) {
    return 0x22;
  }
  *param_2 = 0;
  uVar1 = *(undefined4 *)(param_1 + 100);
  iVar2 = *(int *)(*(int *)(param_1 + 0x60) + 0x14);
  piVar5 = (int *)FUN_00692230(uVar1,*(undefined4 *)(iVar2 + 0x28),&param_1);
  if ((param_1 == 0) && (local_4 = FUN_00692230(uVar1,0xc,&param_1), param_1 == 0)) {
    *piVar5 = iVar4;
    piVar5[10] = 0;
    pcVar3 = *(code **)(iVar2 + 0x38);
    if (pcVar3 != (code *)0x0) {
      param_1 = (*pcVar3)(piVar5);
      if (param_1 != 0) goto LAB_006932a4;
      param_1 = 0;
    }
    *param_2 = (int)piVar5;
    *(int **)(local_4 + 8) = piVar5;
    FUN_006913b0(iVar4 + 0x6c,local_4);
    return param_1;
  }
LAB_006932a4:
  FUN_00691290(uVar1,local_4);
  FUN_00691290(uVar1,piVar5);
  return param_1;
}


/* FUN_00693580 @ 00693580  kind=lib  attributed-by=lib-island  size=457 */

void FUN_00693580(undefined4 param_1,undefined4 param_2,int param_3,int *param_4,int *param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  int local_28;
  char local_24 [32];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_28;
  iVar2 = FUN_006908c0(param_2,param_3);
  if ((iVar2 == 0) && (iVar2 = FUN_00691ec0(param_2,local_24,0x10), iVar2 == 0)) {
    iVar3 = CONCAT31(CONCAT21(CONCAT11(local_24[0],local_24[1]),local_24[2]),local_24[3]) + param_3;
    *param_5 = iVar3;
    iVar2 = CONCAT31(CONCAT21(CONCAT11(local_24[4],local_24[5]),local_24[6]),local_24[7]) + param_3;
    if ((CONCAT31(CONCAT21(CONCAT11(local_24[8],local_24[9]),local_24[10]),local_24[0xb]) + iVar3 ==
         iVar2) && ((iVar2 != param_3 && (iVar3 = FUN_006908c0(param_2,iVar2), iVar3 == 0)))) {
      local_24[0x1f] = local_24[0xf] + '\x01';
      iVar3 = FUN_00691ec0(param_2,local_24 + 0x10,0x10);
      if (iVar3 == 0) {
        bVar5 = true;
        bVar1 = true;
        iVar3 = 0;
        do {
          if (local_24[iVar3 + 0x10] != '\0') {
            bVar5 = false;
          }
          if (local_24[iVar3 + 0x10] != local_24[iVar3]) {
            bVar1 = false;
          }
          if (local_24[iVar3 + 0x11] != '\0') {
            bVar5 = false;
          }
          if (local_24[iVar3 + 0x11] != local_24[iVar3 + 1]) {
            bVar1 = false;
          }
          if (local_24[iVar3 + 0x12] != '\0') {
            bVar5 = false;
          }
          if (local_24[iVar3 + 0x12] != local_24[iVar3 + 2]) {
            bVar1 = false;
          }
          if (local_24[iVar3 + 0x13] != '\0') {
            bVar5 = false;
          }
          if (local_24[iVar3 + 0x13] != local_24[iVar3 + 3]) {
            bVar1 = false;
          }
          iVar3 = iVar3 + 4;
        } while (iVar3 < 0x10);
        if ((bVar5) || (bVar1)) {
          local_28 = FUN_00690900(param_2,8);
          uVar4 = FUN_00690b80(param_2,&local_28);
          if ((local_28 == 0) && ((uVar4 & 0xffff) != 0xffffffff)) {
            iVar2 = (uVar4 & 0xffff) + iVar2;
            iVar3 = FUN_006908c0(param_2,iVar2);
            if (iVar3 == 0) {
              *param_4 = iVar2;
              __security_check_cookie(local_4 ^ (uint)&local_28);
              return;
            }
          }
        }
      }
    }
  }
  __security_check_cookie(local_4 ^ (uint)&local_28);
  return;
}


/* FUN_00693a60 @ 00693a60  kind=lib  attributed-by=lib-island  size=132 */

int FUN_00693a60(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                int *param_6)

{
  int iVar1;
  int local_4;
  
  local_4 = 0;
  iVar1 = FUN_00692290(param_1,param_2,param_3,param_4,param_5,&local_4);
  if (local_4 != 0) {
    *param_6 = local_4;
    return iVar1;
  }
  if (param_3 < param_4) {
    memset((void *)(param_2 * param_3 + iVar1),0,(param_4 - param_3) * param_2);
    *param_6 = local_4;
    return iVar1;
  }
  *param_6 = 0;
  return iVar1;
}


/* FUN_00694170 @ 00694170  kind=lib  attributed-by=lib-island  size=222 */

undefined4 * FUN_00694170(int param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  puVar1 = param_4;
  if ((param_4 != (undefined4 *)0x0) && (param_1 != 0)) {
    *param_4 = 0;
    param_4[1] = 0;
    param_4[2] = 0;
    param_4[3] = 0;
    param_4[4] = 0;
    uVar3 = FUN_00693a60(param_1,8,0,param_2,0,&param_4);
    puVar1[1] = uVar3;
    if (param_4 == (undefined4 *)0x0) {
      uVar3 = FUN_00693a60(param_1,1,0,param_2,0,&param_4);
      puVar1[2] = uVar3;
      if (param_4 == (undefined4 *)0x0) {
        uVar3 = FUN_00693a60(param_1,2,0,param_3,0,&param_4);
        puVar1[3] = uVar3;
        if (param_4 == (undefined4 *)0x0) {
          puVar1[4] = puVar1[4] | 1;
          *(short *)((int)puVar1 + 2) = (short)param_2;
          *(undefined2 *)puVar1 = (undefined2)param_3;
          return (undefined4 *)0x0;
        }
      }
    }
    puVar2 = param_4;
    puVar1[4] = puVar1[4] | 1;
    FUN_00691d10(param_1,puVar1);
    return puVar2;
  }
  return (undefined4 *)0x6;
}


/* FUN_00694250 @ 00694250  kind=lib  attributed-by=lib-island  size=25 */

undefined4 FUN_00694250(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 0) {
    return 0x21;
  }
  uVar1 = FUN_00694170();
  return uVar1;
}


/* FUN_00694270 @ 00694270  kind=lib  attributed-by=lib-island  size=557 */

undefined4 *
FUN_00694270(undefined4 *param_1,undefined4 param_2,int param_3,int param_4,int param_5,int *param_6
            ,size_t *param_7)

{
  undefined4 uVar1;
  undefined4 uVar2;
  size_t *psVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  void *_Base;
  int iVar9;
  int *piVar10;
  int local_8;
  
  uVar2 = param_2;
  uVar1 = *param_1;
  param_1 = (undefined4 *)FUN_006908c0(param_2,param_3);
  if (param_1 == (undefined4 *)0x0) {
    uVar5 = FUN_00690b80(uVar2,&param_1);
    if (param_1 == (undefined4 *)0x0) {
      local_8 = (int)param_1;
      if ((uVar5 & 0xffff) != 0xffffffff) {
        do {
          iVar6 = FUN_00690cd0(uVar2,&param_1);
          if (param_1 != (undefined4 *)0x0) {
            return (undefined4 *)(int)param_1;
          }
          uVar7 = FUN_00690b80(uVar2,&param_1);
          if (param_1 != (undefined4 *)0x0) {
            return (undefined4 *)(int)param_1;
          }
          uVar8 = FUN_00690b80(uVar2,&param_1);
          psVar3 = param_7;
          if (param_1 != (undefined4 *)0x0) {
            return (undefined4 *)(int)param_1;
          }
          if (iVar6 == param_5) {
            *param_7 = (uVar7 & 0xffff) + 1;
            param_1 = (undefined4 *)FUN_006908c0(uVar2,(uVar8 & 0xffff) + param_3);
            if (param_1 != (undefined4 *)0x0) {
              return (undefined4 *)(int)param_1;
            }
            _Base = (void *)FUN_00693a60(uVar1,8,0,*psVar3,0,&param_1);
            if (param_1 != (undefined4 *)0x0) {
              return (undefined4 *)(int)param_1;
            }
            local_8 = (int)param_1;
            if ((int)*psVar3 < 1) goto LAB_00694412;
            goto LAB_00694380;
          }
          local_8 = local_8 + 1;
        } while (local_8 < (int)((uVar5 & 0xffff) + 1));
      }
      param_1 = (undefined4 *)0x1;
    }
  }
  return param_1;
  while( true ) {
    *(uint *)((int)_Base + local_8 * 8 + 4) = uVar5 & 0xffffff;
    local_8 = local_8 + 1;
    if ((int)*psVar3 <= local_8) break;
LAB_00694380:
    uVar4 = FUN_00690b80(uVar2,&param_1);
    *(undefined2 *)((int)_Base + local_8 * 8) = uVar4;
    if ((((param_1 != (undefined4 *)0x0) ||
         (param_1 = (undefined4 *)FUN_00690900(uVar2,2), param_1 != (undefined4 *)0x0)) ||
        (uVar5 = FUN_00690cd0(uVar2,&param_1), param_1 != (undefined4 *)0x0)) ||
       (param_1 = (undefined4 *)FUN_00690900(uVar2,4), param_1 != (undefined4 *)0x0))
    goto LAB_00694485;
  }
LAB_00694412:
  qsort(_Base,*psVar3,8,(_PtFuncCompare *)&LAB_00690860);
  iVar6 = FUN_00693a60(uVar1,4,0,*psVar3,0,&param_1);
  if (param_1 == (undefined4 *)0x0) {
    iVar9 = 0;
    if (0 < (int)*psVar3) {
      piVar10 = (int *)((int)_Base + 4);
      do {
        *(int *)(iVar6 + iVar9 * 4) = *piVar10 + param_4;
        iVar9 = iVar9 + 1;
        piVar10 = piVar10 + 2;
      } while (iVar9 < (int)*psVar3);
    }
    *param_6 = iVar6;
    FUN_00691290(uVar1,_Base);
    return (undefined4 *)0;
  }
LAB_00694485:
  iVar6 = (int)param_1;
  FUN_00691290(uVar1,_Base);
  return (undefined4 *)iVar6;
}


/* FUN_006946d0 @ 006946d0  kind=lib  attributed-by=lib-island  size=260 */

int FUN_006946d0(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *in_EAX;
  int iVar2;
  undefined4 local_10;
  undefined4 local_c;
  
  uVar1 = *in_EAX;
  iVar2 = FUN_00693580();
  if (iVar2 == 0) {
    iVar2 = FUN_00694270();
    if (iVar2 == 0) {
      iVar2 = FUN_00692de0();
      FUN_00691290(uVar1,local_c);
      if (iVar2 == 0) {
        *(undefined4 *)*param_3 = 1;
      }
      return iVar2;
    }
    iVar2 = FUN_00694270();
    if (iVar2 == 0) {
      iVar2 = FUN_00693060();
      FUN_00691290(uVar1,local_c);
      if (iVar2 == 0) {
        *(undefined4 *)*param_3 = local_10;
      }
    }
  }
  return iVar2;
}


/* FUN_006947e0 @ 006947e0  kind=lib  attributed-by=lib-island  size=258 */

void FUN_006947e0(undefined4 param_1)

{
  int iVar1;
  int in_ECX;
  char local_84;
  byte local_83;
  char acStack_82 [61];
  char local_45;
  char local_3a;
  char local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_84;
  if (in_ECX == 0) {
    __security_check_cookie(local_4 ^ (uint)&local_84);
    return;
  }
  iVar1 = FUN_006908c0();
  if ((((((iVar1 == 0) && (iVar1 = FUN_00691ec0(), iVar1 == 0)) && (local_84 == '\0')) &&
       ((local_3a == '\0' && (local_32 == '\0')))) &&
      ((local_83 != 0 && ((local_83 < 0x22 && (local_45 == '\0')))))) &&
     (acStack_82[local_83] == '\0')) {
    FUN_006946d0((CONCAT31(CONCAT21(CONCAT11(local_31,local_30),local_2f),local_2e) + 0x7fU &
                 0xffffff80) + 0x80,param_1);
    __security_check_cookie(local_4 ^ (uint)&local_84);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_84);
  return;
}


/* FUN_006948f0 @ 006948f0  kind=lib  attributed-by=lib-island  size=213 */

void FUN_006948f0(undefined4 param_1,int param_2,undefined4 param_3,int param_4,int param_5,
                 int *param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_30;
  code *local_24 [4];
  code *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  undefined1 *local_8;
  undefined1 *local_4;
  
  iVar2 = param_4 - (int)param_6;
  local_24[0] = FUN_00693750;
  local_24[1] = (code *)&LAB_00693780;
  local_24[2] = (code *)&LAB_006944a0;
  local_24[3] = FUN_00693840;
  local_14 = FUN_006937b0;
  local_10 = &LAB_00694500;
  local_c = &LAB_00694540;
  local_8 = &LAB_00694580;
  local_4 = &LAB_006945e0;
  local_30 = 9;
  do {
    puVar1 = (undefined4 *)(iVar2 + (int)param_6);
    *puVar1 = 0;
    if (param_2 == 0) {
      *param_6 = 0;
LAB_00694992:
      iVar3 = (param_5 - param_4) + (int)puVar1;
      iVar3 = (**(code **)((int)local_24 + (iVar3 - param_5)))(param_1,param_2,param_3,puVar1,iVar3)
      ;
      *param_6 = iVar3;
    }
    else {
      iVar3 = FUN_006908c0(param_2,0);
      *param_6 = iVar3;
      if (iVar3 == 0) goto LAB_00694992;
    }
    param_6 = param_6 + 1;
    local_30 = local_30 + -1;
    if (local_30 == 0) {
      return;
    }
  } while( true );
}


/* FUN_006949d0 @ 006949d0  kind=lib  attributed-by=lib-island  size=296 */

void FUN_006949d0(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *in_EDX;
  int iVar3;
  undefined4 local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 local_90;
  int local_84;
  int local_70 [9];
  int local_4c [9];
  undefined4 local_28 [9];
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_a0;
  local_9c = *in_EDX;
  iVar3 = 0;
  local_98 = param_3;
  local_a0 = 0;
  FUN_006948f0();
  do {
    if (*(int *)((int)local_4c + iVar3) == 0) {
      local_84 = *(int *)((int)local_70 + iVar3);
      local_90 = 4;
      if (local_84 == 0) {
        local_84 = *(int *)(param_3 + 0xc);
      }
      iVar2 = FUN_006923d0();
      uVar1 = local_a0;
      if (iVar2 == 0) {
        iVar2 = FUN_006946d0(*(undefined4 *)((int)local_28 + iVar3),param_2,local_94);
        FUN_006915d0(uVar1,0);
        param_3 = local_98;
        if (iVar2 == 0) break;
      }
    }
    iVar3 = iVar3 + 4;
  } while (iVar3 < 0x24);
  iVar3 = 0;
  do {
    if (local_70[iVar3] != 0) {
      FUN_00691290(local_9c,local_70[iVar3]);
      local_70[iVar3] = 0;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  __security_check_cookie(local_4 ^ (uint)&local_a0);
  return;
}


/* FUN_00694b00 @ 00694b00  kind=lib  attributed-by=lib-island  size=88 */

void FUN_00694b00(undefined4 param_1,byte *param_2)

{
  char cVar1;
  
  cVar1 = FUN_006947e0(param_1);
  if (cVar1 == '\x02') {
    cVar1 = FUN_006946d0(0,param_1);
  }
  if (((cVar1 == '\x02') || (cVar1 == 'U')) && ((*param_2 & 4) != 0)) {
    FUN_006949d0();
  }
  return;
}


/* FUN_00694b60 @ 00694b60  kind=lib  attributed-by=lib-island  size=926 */

uint FUN_00694b60(undefined4 *param_1,uint *param_2,int param_3,int *param_4)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  short *psVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  bool bVar13;
  char local_19;
  int local_18;
  undefined4 local_14;
  undefined4 *local_10;
  uint local_c;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar10 = 0;
  local_14 = 0;
  local_18 = 0;
  if (((param_4 == (int *)0x0) && (-1 < param_3)) || (param_2 == (uint *)0x0)) {
    return 6;
  }
  if (((*param_2 & 2) == 0) || (local_19 = '\x01', param_2[4] == 0)) {
    local_19 = '\0';
  }
  uVar3 = FUN_006923d0(param_1,param_2,&local_14);
  uVar11 = local_14;
  if (uVar3 == 0) {
    local_4 = *param_1;
    if (((*param_2 & 8) == 0) || ((undefined4 *)param_2[5] == (undefined4 *)0x0)) {
      local_10 = param_1 + 7;
      puVar9 = local_10 + param_1[6];
      local_8 = puVar9;
      if (local_10 < puVar9) {
        do {
          uVar11 = local_14;
          if ((**(byte **)*local_10 & 1) != 0) {
            uVar3 = 0;
            uVar8 = 0;
            if ((*param_2 & 0x10) != 0) {
              uVar3 = param_2[6];
              uVar8 = param_2[7];
            }
            uVar3 = FUN_00692aa0(local_14,param_3,uVar3,uVar8,&local_18);
            local_c = uVar3;
            if (uVar3 == 0) goto LAB_00694d90;
            pbVar4 = *(byte **)(*(int *)*local_10 + 8);
            pcVar7 = "truetype";
            do {
              bVar1 = *pbVar4;
              bVar13 = bVar1 < (byte)*pcVar7;
              if (bVar1 != *pcVar7) {
LAB_00694cd0:
                iVar10 = (1 - (uint)bVar13) - (uint)(bVar13 != 0);
                goto LAB_00694cd5;
              }
              if (bVar1 == 0) break;
              bVar1 = pbVar4[1];
              bVar13 = bVar1 < (byte)pcVar7[1];
              if (bVar1 != pcVar7[1]) goto LAB_00694cd0;
              pbVar4 = pbVar4 + 2;
              pcVar7 = pcVar7 + 2;
            } while (bVar1 != 0);
            iVar10 = 0;
LAB_00694cd5:
            if ((iVar10 == 0) && ((char)uVar3 == -0x72)) {
              iVar5 = FUN_006908c0(uVar11,0);
              iVar10 = local_18;
              if (iVar5 != 0) break;
              uVar3 = FUN_00692d00(param_1,param_3,param_4);
              if (uVar3 == 0) {
                FUN_006915d0(uVar11,local_19);
                return 0;
              }
            }
            puVar9 = local_8;
            iVar10 = local_18;
            if ((char)uVar3 != '\x02') break;
          }
          local_10 = local_10 + 1;
          iVar10 = local_18;
          uVar11 = local_14;
        } while (local_10 < puVar9);
      }
      goto LAB_00694d3b;
    }
    if ((**(byte **)param_2[5] & 1) == 0) {
      uVar3 = 0x20;
    }
    else {
      uVar3 = 0;
      uVar8 = 0;
      if ((*param_2 & 0x10) != 0) {
        uVar3 = param_2[6];
        uVar8 = param_2[7];
      }
      uVar3 = FUN_00692aa0(local_14,param_3,uVar3,uVar8,&local_18);
      iVar10 = local_18;
      local_c = uVar3;
      if (uVar3 == 0) {
LAB_00694d90:
        iVar10 = local_18;
        if (local_19 != '\0') {
          *(uint *)(local_18 + 8) = *(uint *)(local_18 + 8) | 0x400;
        }
        iVar5 = FUN_00692230(local_4,0xc,&local_c);
        uVar3 = local_c;
        iVar12 = 0;
        if (local_c == 0) {
          *(int *)(iVar5 + 8) = iVar10;
          FUN_006913b0(*(int *)(iVar10 + 0x60) + 0x18,iVar5);
          if (-1 < param_3) {
            uVar3 = FUN_00692580(iVar10,0);
            if ((uVar3 != 0) || (uVar3 = FUN_006931e0(iVar10,&local_4), uVar3 != 0))
            goto LAB_00694eeb;
            *(undefined4 *)(iVar10 + 0x58) = local_4;
          }
          if ((*(byte *)(iVar10 + 8) & 1) != 0) {
            if (*(short *)(iVar10 + 0x4a) < 0) {
              *(short *)(iVar10 + 0x4a) = -*(short *)(iVar10 + 0x4a);
            }
            if ((*(byte *)(iVar10 + 8) & 0x20) == 0) {
              *(undefined2 *)(iVar10 + 0x4e) = *(undefined2 *)(iVar10 + 0x4a);
            }
          }
          if (((*(byte *)(iVar10 + 8) & 2) != 0) && (0 < *(int *)(iVar10 + 0x1c))) {
            iVar5 = 0;
            do {
              sVar2 = *(short *)(*(int *)(iVar10 + 0x20) + iVar5);
              psVar6 = (short *)(*(int *)(iVar10 + 0x20) + iVar5);
              if (sVar2 < 0) {
                *psVar6 = -sVar2;
              }
              if (*(int *)(psVar6 + 4) < 0) {
                *(int *)(psVar6 + 4) = (int)-psVar6[4];
              }
              if (*(int *)(psVar6 + 6) < 0) {
                *(int *)(psVar6 + 6) = -*(int *)(psVar6 + 6);
              }
              iVar12 = iVar12 + 1;
              iVar5 = iVar5 + 0x10;
            } while (iVar12 < *(int *)(iVar10 + 0x1c));
          }
          iVar5 = *(int *)(iVar10 + 0x80);
          *(undefined4 *)(iVar5 + 4) = 0x10000;
          *(undefined4 *)(iVar5 + 8) = 0;
          *(undefined4 *)(iVar5 + 0xc) = 0;
          *(undefined4 *)(iVar5 + 0x10) = 0x10000;
          *(undefined4 *)(iVar5 + 0x14) = 0;
          *(undefined4 *)(iVar5 + 0x18) = 0;
          if (param_4 != (int *)0x0) {
            *param_4 = iVar10;
            return uVar3;
          }
        }
        goto LAB_00694eeb;
      }
    }
  }
  else {
LAB_00694d3b:
    uVar8 = uVar3 & 0xff;
    if (((uVar8 == 0x51) || (uVar8 == 2)) || (uVar8 == 0x55)) {
      uVar3 = FUN_00694b00(param_3,param_2);
      if (uVar3 == 0) {
        FUN_006915d0(uVar11,local_19);
        return 0;
      }
      if ((char)uVar3 == '\x02') {
        uVar3 = 2;
      }
    }
  }
  FUN_006915d0(uVar11,local_19);
LAB_00694eeb:
  FUN_00693180(iVar10);
  return uVar3;
}


/* FUN_00694f00 @ 00694f00  kind=lib  attributed-by=lib-island  size=72 */

undefined4 FUN_00694f00(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 local_20 [3];
  int local_14;
  undefined4 local_10;
  
  if (param_2 == 0) {
    return 6;
  }
  local_14 = param_2;
  local_20[0] = 4;
  local_10 = 0;
  uVar1 = FUN_00694b60(param_1,local_20,param_3,param_4);
  return uVar1;
}


/* FUN_00694fa0 @ 00694fa0  kind=lib  attributed-by=lib-island  size=132 */

undefined4 FUN_00694fa0(undefined4 *param_1,int param_2)

{
  uint *puVar1;
  undefined4 uVar2;
  
  uVar2 = *param_1;
  if (*(int *)(param_2 + 0x48) != 0x62697473) {
    return 0x12;
  }
  param_1[5] = *(undefined4 *)(param_2 + 100);
  param_1[6] = *(undefined4 *)(param_2 + 0x68);
  if ((*(byte *)(*(int *)(param_2 + 0x9c) + 4) & 1) != 0) {
    param_1[7] = *(undefined4 *)(param_2 + 0x4c);
    param_1[8] = *(undefined4 *)(param_2 + 0x50);
    param_1[9] = *(undefined4 *)(param_2 + 0x54);
    param_1[10] = *(undefined4 *)(param_2 + 0x58);
    param_1[0xb] = *(undefined4 *)(param_2 + 0x5c);
    param_1[0xc] = *(undefined4 *)(param_2 + 0x60);
    puVar1 = (uint *)(*(int *)(param_2 + 0x9c) + 4);
    *puVar1 = *puVar1 & 0xfffffffe;
    return 0;
  }
  FUN_006cc6c0(param_1 + 7);
  uVar2 = FUN_006cc700(uVar2,param_2 + 0x4c,param_1 + 7);
  return uVar2;
}


/* FUN_00695200 @ 00695200  kind=lib  attributed-by=lib-island  size=55 */

int FUN_00695200(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined4 *unaff_EBX;
  undefined4 *unaff_ESI;
  undefined4 *unaff_EDI;
  int local_4;
  
  uVar1 = *unaff_EBX;
  *unaff_EDI = 0;
  puVar2 = (undefined4 *)FUN_00692230(uVar1,*unaff_ESI,&local_4);
  if (local_4 == 0) {
    *puVar2 = unaff_EBX;
    puVar2[1] = unaff_ESI;
    puVar2[2] = unaff_ESI[1];
    *unaff_EDI = puVar2;
    return 0;
  }
  return local_4;
}


/* FUN_00695240 @ 00695240  kind=lib  attributed-by=lib-island  size=82 */

undefined4 FUN_00695240(int param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    pcVar1 = *(code **)(*(int *)(param_1 + 4) + 0x14);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(param_1,param_2,param_3);
      if (param_2 != 0) {
        FUN_00690500(param_1 + 0xc,param_2);
      }
      return 0;
    }
    return 0x12;
  }
  return 6;
}


/* FUN_006952a0 @ 006952a0  kind=lib  attributed-by=lib-island  size=43 */

void FUN_006952a0(undefined4 *param_1)

{
  undefined4 uVar1;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = *(undefined4 *)*param_1;
    if (*(code **)(param_1[1] + 0xc) != (code *)0x0) {
      (**(code **)(param_1[1] + 0xc))(param_1);
    }
    FUN_00691290(uVar1,param_1);
  }
  return;
}


/* FUN_006952d0 @ 006952d0  kind=lib  attributed-by=lib-island  size=141 */

int FUN_006952d0(int param_1,int *param_2)

{
  code *pcVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  
  if (param_2 == (int *)0x0) {
    return 6;
  }
  *param_2 = 0;
  if ((param_1 == 0) || (iVar3 = *(int *)(param_1 + 4), iVar3 == 0)) {
    return 6;
  }
  iVar2 = FUN_00695200();
  if (iVar2 != 0) {
    return iVar2;
  }
  *(undefined4 *)(in_ECX + 0xc) = *(undefined4 *)(param_1 + 0xc);
  *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)(param_1 + 0x10);
  *(undefined4 *)(in_ECX + 8) = *(undefined4 *)(param_1 + 8);
  pcVar1 = *(code **)(iVar3 + 0x10);
  if ((pcVar1 != (code *)0x0) && (iVar3 = (*pcVar1)(param_1,in_ECX), iVar3 != 0)) {
    FUN_006952a0(in_ECX);
    return iVar3;
  }
  *param_2 = in_ECX;
  return 0;
}


/* FUN_00695360 @ 00695360  kind=lib  attributed-by=lib-island  size=181 */

int FUN_00695360(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined *puVar2;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x25;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 6;
  }
  iVar1 = param_1[0x12];
  if (iVar1 == 0x62697473) {
    puVar2 = &DAT_007227d0;
  }
  else if (iVar1 == 0x6f75746c) {
    puVar2 = &DAT_007227f0;
  }
  else {
    iVar1 = FUN_0068fce0(*param_1,iVar1,0);
    if ((iVar1 == 0) || (puVar2 = (undefined *)(iVar1 + 0x1c), puVar2 == (undefined *)0x0)) {
      return 0x12;
    }
  }
  iVar1 = FUN_00695200();
  if (iVar1 == 0) {
    param_1[3] = param_1[0x10] << 10;
    param_1[4] = param_1[0x11] << 10;
    iVar1 = (**(code **)(puVar2 + 8))(param_1,param_1);
    if (iVar1 != 0) {
      FUN_006952a0(param_1);
      return iVar1;
    }
    *param_2 = param_1;
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00695420 @ 00695420  kind=lib  attributed-by=lib-island  size=505 */

void FUN_00695420(int *param_1,undefined4 param_2,int *param_3,char param_4)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int local_e0;
  undefined *local_dc;
  int iStack_d8;
  int *local_d4;
  int *local_d0;
  undefined4 local_cc [18];
  undefined4 local_84;
  undefined4 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_e0;
  local_d0 = param_3;
  local_d4 = param_1;
  local_e0 = 0;
  if ((param_1 != (int *)0x0) && (puVar1 = (undefined4 *)*param_1, puVar1 != (undefined4 *)0x0)) {
    puVar2 = (undefined *)puVar1[1];
    local_dc = puVar2;
    if (puVar2 != &DAT_007227d0) {
      if ((puVar2 == (undefined *)0x0) || (*(int *)(puVar2 + 0x1c) == 0)) goto LAB_006955d5;
      memset(local_cc,0,0xa0);
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      local_c = 0;
      local_8 = 0;
      local_30 = &local_2c;
      local_cc[0] = *puVar1;
      local_84 = *(undefined4 *)(puVar2 + 4);
      iVar5 = FUN_00695200();
      piVar4 = local_d0;
      iVar3 = local_e0;
      if (iVar5 == 0) {
        if (local_d0 != (int *)0x0) {
          FUN_00695240(puVar1,0,local_d0);
        }
        iVar5 = (**(code **)(local_dc + 0x1c))(puVar1,local_cc);
        if (iVar5 == 0) {
          iVar5 = FUN_00691c20(*puVar1,local_cc,param_2);
        }
        if ((param_4 == '\0') && (piVar4 != (int *)0x0)) {
          local_dc = (undefined *)-*piVar4;
          iStack_d8 = -piVar4[1];
          FUN_00695240(puVar1,0,&local_dc);
        }
        if ((iVar5 == 0) && (iVar5 = FUN_00694fa0(iVar3,local_cc), iVar5 == 0)) {
          *(undefined4 *)(iVar3 + 0xc) = puVar1[3];
          *(undefined4 *)(iVar3 + 0x10) = puVar1[4];
          if (param_4 != '\0') {
            FUN_006952a0(puVar1);
          }
          *local_d4 = iVar3;
          goto LAB_00695602;
        }
      }
      if (iVar3 != 0) {
        FUN_006952a0(iVar3);
      }
    }
LAB_00695602:
    __security_check_cookie(local_4 ^ (uint)&local_e0);
    return;
  }
LAB_006955d5:
  __security_check_cookie(local_4 ^ (uint)&local_e0);
  return;
}


/* FUN_00695620 @ 00695620  kind=lib  attributed-by=lib-island  size=6 */

int FUN_00695620(void)

{
  uint in_EAX;
  
  return (in_EAX ^ (int)in_EAX >> 0x1f) - ((int)in_EAX >> 0x1f);
}


/* FUN_00695630 @ 00695630  kind=lib  attributed-by=lib-island  size=217 */

bool FUN_00695630(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  bool bVar2;
  int *in_EAX;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar4 = in_EAX[2] - in_EAX[4];
  iVar6 = *in_EAX - in_EAX[2];
  iVar5 = in_EAX[3] - in_EAX[5];
  iVar7 = in_EAX[1] - in_EAX[3];
  if ((iVar4 + 1U < 3) && (iVar5 + 1U < 3)) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  if ((iVar6 + 1U < 3) && (iVar7 + 1U < 3)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (bVar1) {
    if (bVar2) {
      *param_2 = 0;
      *param_1 = 0;
    }
    else {
      uVar3 = FUN_00691090(iVar6,iVar7);
      *param_2 = uVar3;
      *param_1 = uVar3;
    }
  }
  else if (bVar2) {
    uVar3 = FUN_00691090(iVar4,iVar5);
    *param_2 = uVar3;
    *param_1 = uVar3;
  }
  else {
    uVar3 = FUN_00691090(iVar4,iVar5);
    *param_1 = uVar3;
    uVar3 = FUN_00691090(iVar6,iVar7);
    *param_2 = uVar3;
  }
  FUN_00691200(*param_1,*param_2);
  iVar4 = FUN_00695620();
  return iVar4 < 0x1e0000;
}


/* FUN_00695710 @ 00695710  kind=lib  attributed-by=lib-island  size=176 */

void FUN_00695710(void)

{
  int iVar1;
  int *in_ECX;
  int iVar2;
  int iVar3;
  int iVar4;
  
  in_ECX[0xc] = in_ECX[6];
  iVar3 = (*in_ECX + in_ECX[2]) / 2;
  iVar2 = (in_ECX[2] + in_ECX[4]) / 2;
  iVar4 = (in_ECX[6] + in_ECX[4]) / 2;
  in_ECX[2] = iVar3;
  iVar1 = (iVar4 + iVar2) / 2;
  in_ECX[8] = iVar1;
  iVar2 = (iVar3 + iVar2) / 2;
  in_ECX[6] = (iVar1 + iVar2) / 2;
  in_ECX[10] = iVar4;
  in_ECX[4] = iVar2;
  in_ECX[0xd] = in_ECX[7];
  iVar3 = (in_ECX[1] + in_ECX[3]) / 2;
  iVar2 = (in_ECX[3] + in_ECX[5]) / 2;
  iVar4 = (in_ECX[7] + in_ECX[5]) / 2;
  in_ECX[3] = iVar3;
  iVar1 = (iVar4 + iVar2) / 2;
  iVar2 = (iVar3 + iVar2) / 2;
  in_ECX[9] = iVar1;
  in_ECX[0xb] = iVar4;
  in_ECX[5] = iVar2;
  in_ECX[7] = (iVar1 + iVar2) / 2;
  return;
}


/* FUN_006957c0 @ 006957c0  kind=lib  attributed-by=lib-island  size=428 */

undefined4 FUN_006957c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int *in_EAX;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar5 = in_EAX[4] - in_EAX[6];
  iVar9 = in_EAX[2] - in_EAX[4];
  iVar6 = in_EAX[5] - in_EAX[7];
  iVar10 = in_EAX[3] - in_EAX[5];
  iVar7 = *in_EAX - in_EAX[2];
  iVar8 = in_EAX[1] - in_EAX[3];
  if ((2 < iVar5 + 1U) || (bVar1 = true, 2 < iVar6 + 1U)) {
    bVar1 = false;
  }
  if ((2 < iVar9 + 1U) || (bVar3 = true, 2 < iVar10 + 1U)) {
    bVar3 = false;
  }
  if ((2 < iVar7 + 1U) || (bVar2 = true, 2 < iVar8 + 1U)) {
    bVar2 = false;
  }
  if ((bVar1) || (bVar2)) {
    if (bVar3) {
      *param_2 = 0;
      *param_3 = 0;
      *param_1 = 0;
    }
    else if (bVar1) {
      uVar4 = FUN_00691090(iVar9,iVar10);
      *param_2 = uVar4;
      *param_1 = uVar4;
      uVar4 = FUN_00691090(iVar7,iVar8);
      *param_3 = uVar4;
    }
    else {
      uVar4 = FUN_00691090(iVar5,iVar6);
      *param_1 = uVar4;
      uVar4 = FUN_00691090(iVar9,iVar10);
      *param_3 = uVar4;
      *param_2 = uVar4;
    }
  }
  else {
    uVar4 = FUN_00691090(iVar5,iVar6);
    if (bVar3) {
      *param_2 = uVar4;
      *param_1 = uVar4;
      uVar4 = FUN_00691090(iVar7,iVar8);
      *param_3 = uVar4;
    }
    else {
      *param_1 = uVar4;
      uVar4 = FUN_00691090(iVar9,iVar10);
      *param_2 = uVar4;
      uVar4 = FUN_00691090(iVar7,iVar8);
      *param_3 = uVar4;
    }
  }
  FUN_00691200(*param_1,*param_2);
  iVar5 = FUN_00695620();
  FUN_00691200(*param_2,*param_3);
  iVar6 = FUN_00695620();
  if ((iVar5 < 0x1e0000) && (iVar6 < 0x1e0000)) {
    return 1;
  }
  return 0;
}


/* FUN_00695970 @ 00695970  kind=lib  attributed-by=lib-island  size=114 */

void FUN_00695970(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *unaff_ESI;
  uint uVar5;
  
  uVar4 = *unaff_ESI + param_1;
  uVar1 = unaff_ESI[1];
  param_1 = 0;
  if (uVar1 < uVar4) {
    iVar3 = unaff_ESI[6];
    uVar5 = uVar1;
    do {
      uVar5 = uVar5 + 0x10 + (uVar5 >> 1);
    } while (uVar5 < uVar4);
    iVar2 = FUN_00693a60(iVar3,8,uVar1,uVar5,unaff_ESI[2],&param_1);
    unaff_ESI[2] = iVar2;
    if (param_1 == 0) {
      iVar3 = FUN_00693a60(iVar3,1,uVar1,uVar5,unaff_ESI[3],&param_1);
      unaff_ESI[3] = iVar3;
      if (param_1 == 0) {
        unaff_ESI[1] = uVar5;
      }
    }
  }
  return;
}


/* FUN_006959f0 @ 006959f0  kind=lib  attributed-by=lib-island  size=185 */

uint FUN_006959f0(char param_1)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined1 *puVar9;
  undefined4 *puVar10;
  uint *in_EDX;
  uint uVar11;
  undefined1 *puVar12;
  
  uVar3 = in_EDX[5];
  uVar4 = *in_EDX;
  if (uVar3 + 1 < uVar4) {
    uVar5 = in_EDX[2];
    uVar11 = uVar4 - 1;
    *in_EDX = uVar11;
    *(undefined4 *)(uVar5 + uVar3 * 8) = *(undefined4 *)(uVar5 + uVar11 * 8);
    *(undefined4 *)(uVar5 + 4 + uVar3 * 8) = *(undefined4 *)(uVar5 + 4 + uVar11 * 8);
    if (param_1 != '\0') {
      puVar8 = (undefined4 *)(in_EDX[2] + 8 + uVar3 * 8);
      puVar10 = (undefined4 *)((in_EDX[2] - 8) + uVar11 * 8);
      if (puVar8 < puVar10) {
        do {
          uVar6 = puVar8[1];
          uVar7 = *puVar8;
          *puVar8 = *puVar10;
          puVar8[1] = puVar10[1];
          *puVar10 = uVar7;
          puVar10[1] = uVar6;
          puVar8 = puVar8 + 2;
          puVar10 = puVar10 + -2;
        } while (puVar8 < puVar10);
      }
      puVar9 = (undefined1 *)(in_EDX[3] + 1 + uVar3);
      puVar12 = (undefined1 *)((in_EDX[3] - 1) + uVar11);
      if (puVar9 < puVar12) {
        do {
          uVar2 = *puVar9;
          *puVar9 = *puVar12;
          *puVar12 = uVar2;
          puVar9 = puVar9 + 1;
          puVar12 = puVar12 + -1;
        } while (puVar9 < puVar12);
      }
    }
    *(byte *)(in_EDX[3] + uVar3) = *(byte *)(in_EDX[3] + uVar3) | 4;
    uVar3 = in_EDX[3];
    pbVar1 = (byte *)((uVar4 - 2) + uVar3);
    *pbVar1 = *pbVar1 | 8;
    *(undefined1 *)(in_EDX + 4) = 0;
    in_EDX[5] = 0xffffffff;
    return (uVar4 - 2) + uVar3;
  }
  *in_EDX = uVar3;
  *(undefined1 *)(in_EDX + 4) = 0;
  in_EDX[5] = 0xffffffff;
  return uVar3 + 1;
}


/* FUN_00695ab0 @ 00695ab0  kind=lib  attributed-by=lib-island  size=98 */

void FUN_00695ab0(undefined1 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *in_EAX;
  int iVar3;
  int *in_ECX;
  
  if ((char)in_ECX[4] == '\0') {
    iVar3 = FUN_00695970(1);
    if (iVar3 == 0) {
      iVar3 = *in_ECX;
      iVar1 = in_ECX[2];
      iVar2 = in_ECX[3];
      *(undefined4 *)(iVar1 + iVar3 * 8) = *in_EAX;
      *(undefined4 *)(iVar1 + 4 + iVar3 * 8) = in_EAX[1];
      *(undefined1 *)(iVar2 + iVar3) = 1;
      *in_ECX = *in_ECX + 1;
      *(undefined1 *)(in_ECX + 4) = param_1;
      return;
    }
  }
  else {
    iVar3 = in_ECX[2];
    iVar1 = *in_ECX;
    *(undefined4 *)(iVar3 + -8 + iVar1 * 8) = *in_EAX;
    *(undefined4 *)(iVar3 + -4 + iVar1 * 8) = in_EAX[1];
  }
  *(undefined1 *)(in_ECX + 4) = param_1;
  return;
}


/* FUN_00695b20 @ 00695b20  kind=lib  attributed-by=lib-island  size=74 */

void FUN_00695b20(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int *in_EAX;
  int iVar3;
  undefined4 *unaff_EBX;
  
  iVar3 = FUN_00695970(2);
  if (iVar3 == 0) {
    iVar3 = in_EAX[3];
    iVar2 = *in_EAX;
    puVar1 = (undefined4 *)(in_EAX[2] + iVar2 * 8);
    *puVar1 = *unaff_EBX;
    puVar1[1] = unaff_EBX[1];
    puVar1[2] = *param_1;
    puVar1[3] = param_1[1];
    *(undefined2 *)(iVar3 + iVar2) = 0x100;
    *in_EAX = *in_EAX + 2;
  }
  *(undefined1 *)(in_EAX + 4) = 0;
  return;
}


/* FUN_00695b70 @ 00695b70  kind=lib  attributed-by=lib-island  size=97 */

void FUN_00695b70(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *in_EAX;
  int iVar2;
  undefined2 *puVar3;
  undefined4 *unaff_EBX;
  
  iVar2 = FUN_00695970(3);
  if (iVar2 == 0) {
    puVar1 = (undefined4 *)(in_EAX[2] + *in_EAX * 8);
    puVar3 = (undefined2 *)(in_EAX[3] + *in_EAX);
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = *unaff_EBX;
    puVar1[3] = unaff_EBX[1];
    puVar1[4] = *param_2;
    puVar1[5] = param_2[1];
    *puVar3 = 0x202;
    *(undefined1 *)(puVar3 + 1) = 1;
    *in_EAX = *in_EAX + 3;
  }
  *(undefined1 *)(in_EAX + 4) = 0;
  return;
}


/* FUN_00695be0 @ 00695be0  kind=lib  attributed-by=lib-island  size=374 */

int FUN_00695be0(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int in_ECX;
  int iVar5;
  int local_38;
  int local_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  FUN_006911e0(&local_20,param_3);
  local_20 = local_20 + *param_2;
  local_1c = local_1c + param_2[1];
  iVar5 = ((in_EAX < 0) - 1 & 0xb40000) - 0x5a0000;
  local_30 = in_ECX;
  if (in_EAX == 0) {
    iVar2 = 0;
  }
  else {
    while( true ) {
      if (in_EAX < 0x5a0001) {
        local_38 = in_EAX;
        if (in_EAX < -0x5a0000) {
          local_38 = -0x5a0000;
        }
      }
      else {
        local_38 = 0x5a0000;
      }
      iVar1 = local_38 + local_30;
      iVar2 = local_38;
      if (local_38 < 0) {
        iVar2 = -local_38;
      }
      FUN_006911e0(&local_28,param_3,iVar1);
      local_28 = local_28 + *param_2;
      local_24 = local_24 + param_2[1];
      iVar3 = FUN_00691030(iVar2 >> 1);
      iVar2 = FUN_00691070(iVar2 >> 1,iVar3 * 3 + 0x30000);
      uVar4 = FUN_0068ea60(param_3,iVar2 * 4);
      FUN_006911e0(&local_18,uVar4,iVar5 + local_30);
      local_18 = local_18 + local_20;
      local_14 = local_14 + local_1c;
      FUN_006911e0(&local_10,uVar4,iVar1 - iVar5);
      local_10 = local_10 + local_28;
      local_c = local_c + local_24;
      iVar2 = FUN_00695b70(&local_18,&local_28);
      if (iVar2 != 0) break;
      local_20 = local_28;
      in_EAX = in_EAX - local_38;
      local_1c = local_24;
      local_30 = iVar1;
      if (in_EAX == 0) {
        return 0;
      }
    }
  }
  return iVar2;
}


/* FUN_00695d60 @ 00695d60  kind=lib  attributed-by=lib-island  size=42 */

void FUN_00695d60(void)

{
  undefined4 *in_EDX;
  undefined4 *extraout_EDX;
  
  if (-1 < (int)in_EDX[5]) {
    FUN_006959f0(0);
    in_EDX = extraout_EDX;
  }
  in_EDX[5] = *in_EDX;
  *(undefined1 *)(in_EDX + 4) = 0;
  FUN_00695ab0(0);
  return;
}


/* FUN_00695db0 @ 00695db0  kind=lib  attributed-by=lib-island  size=18 */

void FUN_00695db0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[5] = 0xffffffff;
  *(undefined1 *)(in_EAX + 7) = 0;
  return;
}


/* FUN_00695e10 @ 00695e10  kind=lib  attributed-by=lib-island  size=109 */

undefined4 FUN_00695e10(int *param_1,int *param_2,int *param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  
  iVar2 = *param_1;
  pbVar4 = (byte *)param_1[3];
  iVar5 = 0;
  iVar3 = 0;
  bVar1 = false;
  if (iVar2 != 0) {
    do {
      if ((*pbVar4 & 4) == 0) {
        if (!bVar1) goto LAB_00695e4f;
      }
      else {
        if (bVar1) goto LAB_00695e4f;
        bVar1 = true;
      }
      if ((*pbVar4 & 8) != 0) {
        bVar1 = false;
        iVar3 = iVar3 + 1;
      }
      iVar5 = iVar5 + 1;
      pbVar4 = pbVar4 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if (bVar1) {
LAB_00695e4f:
      *param_2 = 0;
      *param_3 = 0;
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 7) = 1;
  *param_2 = iVar5;
  *param_3 = iVar3;
  return 0;
}


/* FUN_00695e80 @ 00695e80  kind=lib  attributed-by=lib-island  size=130 */

void FUN_00695e80(void)

{
  byte *pbVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  byte *pbVar5;
  short *unaff_ESI;
  int *unaff_EDI;
  
  memcpy((void *)(*(int *)(unaff_ESI + 2) + unaff_ESI[1] * 8),(void *)unaff_EDI[2],*unaff_EDI * 8);
  pbVar1 = (byte *)((int)unaff_ESI[1] + *(int *)(unaff_ESI + 4));
  pbVar5 = (byte *)unaff_EDI[3];
  for (iVar3 = *unaff_EDI; iVar3 != 0; iVar3 = iVar3 + -1) {
    if ((*pbVar5 & 1) == 0) {
      *pbVar1 = *pbVar5 & 2;
    }
    else {
      *pbVar1 = 1;
    }
    pbVar5 = pbVar5 + 1;
    pbVar1 = pbVar1 + 1;
  }
  iVar3 = *unaff_EDI;
  pbVar5 = (byte *)unaff_EDI[3];
  psVar4 = (short *)(*(int *)(unaff_ESI + 6) + *unaff_ESI * 2);
  sVar2 = unaff_ESI[1];
  if (iVar3 != 0) {
    do {
      if ((*pbVar5 & 8) != 0) {
        *psVar4 = sVar2;
        psVar4 = psVar4 + 1;
        *unaff_ESI = *unaff_ESI + 1;
      }
      pbVar5 = pbVar5 + 1;
      sVar2 = sVar2 + 1;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
    unaff_ESI[1] = unaff_ESI[1] + (short)*unaff_EDI;
    return;
  }
  unaff_ESI[1] = unaff_ESI[1];
  return;
}


/* FUN_00695f60 @ 00695f60  kind=lib  attributed-by=lib-island  size=25 */

void FUN_00695f60(int param_1)

{
  if (param_1 != 0) {
    FUN_00695db0();
    FUN_00695db0();
    return;
  }
  return;
}


/* FUN_00695fc0 @ 00695fc0  kind=lib  attributed-by=lib-island  size=86 */

void FUN_00695fc0(void)

{
  undefined4 uVar1;
  int in_EAX;
  undefined4 *in_ECX;
  
  uVar1 = in_ECX[0xb];
  FUN_00691200(*in_ECX,in_ECX[1]);
  FUN_00695be0(in_ECX + in_EAX * 8 + 0xd,in_ECX + 2,uVar1);
  *(undefined1 *)(in_ECX + in_EAX * 8 + 0xd + 4) = 0;
  return;
}


/* FUN_00696020 @ 00696020  kind=lib  attributed-by=lib-island  size=378 */

int FUN_00696020(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int in_ECX;
  int iVar3;
  int *unaff_ESI;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = unaff_ESI[8];
  if (iVar2 == 1) {
    *unaff_ESI = in_ECX;
    unaff_ESI[1] = in_ECX + 0xb40000;
    iVar2 = FUN_00695fc0();
    return iVar2;
  }
  if (iVar2 == 2) {
    iVar1 = unaff_ESI[0xb];
    iVar3 = in_EAX * -0xb40000 + 0x5a0000;
    FUN_006911e0(&local_8,iVar1,iVar3 + in_ECX);
    FUN_006911e0(&local_10,iVar1);
    local_10 = local_10 + unaff_ESI[2] + local_8;
    local_c = local_c + unaff_ESI[3] + local_4;
    iVar2 = FUN_00695ab0(0);
    if (iVar2 == 0) {
      FUN_006911e0(&local_8,iVar1,in_ECX - iVar3);
      FUN_006911e0(&local_10,iVar1);
      local_c = local_c + unaff_ESI[3] + local_4;
      local_10 = local_10 + unaff_ESI[2] + local_8;
      iVar2 = FUN_00695ab0(0);
      return iVar2;
    }
  }
  else if (iVar2 == 0) {
    iVar1 = unaff_ESI[0xb];
    iVar3 = in_EAX * -0xb40000 + 0x5a0000;
    FUN_006911e0(&local_10,iVar1,iVar3 + in_ECX);
    local_c = local_c + unaff_ESI[3];
    local_10 = local_10 + unaff_ESI[2];
    iVar2 = FUN_00695ab0(0);
    if (iVar2 == 0) {
      FUN_006911e0(&local_10,iVar1,in_ECX - iVar3);
      local_c = local_c + unaff_ESI[3];
      local_10 = local_10 + unaff_ESI[2];
      iVar2 = FUN_00695ab0(0);
      return iVar2;
    }
  }
  else {
    iVar2 = 0;
  }
  return iVar2;
}


/* FUN_006961a0 @ 006961a0  kind=lib  attributed-by=lib-island  size=208 */

void FUN_006961a0(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *unaff_ESI;
  int iVar5;
  int local_8;
  int local_4;
  
  iVar5 = in_EAX * -0xb40000 + 0x5a0000;
  iVar1 = FUN_00691200(*unaff_ESI,unaff_ESI[1]);
  iVar2 = iVar5;
  if (iVar1 != 0xb40000) {
    iVar2 = iVar1 / 2;
  }
  iVar1 = *unaff_ESI;
  uVar3 = FUN_00691030(iVar2);
  iVar4 = FUN_0068ebc0(unaff_ESI[10],uVar3);
  if (iVar4 < 0x10000) {
    FUN_006911e0(&local_8,unaff_ESI[0xb],unaff_ESI[1] + iVar5);
    local_8 = local_8 + unaff_ESI[2];
    local_4 = local_4 + unaff_ESI[3];
    *(undefined1 *)(unaff_ESI + in_EAX * 8 + 0x11) = 0;
  }
  else {
    uVar3 = FUN_0068ec40(unaff_ESI[0xb],uVar3);
    FUN_006911e0(&local_8,uVar3,iVar1 + iVar2 + iVar5);
    local_8 = local_8 + unaff_ESI[2];
    local_4 = local_4 + unaff_ESI[3];
  }
  FUN_00695ab0(0);
  return;
}


/* FUN_00696270 @ 00696270  kind=lib  attributed-by=lib-island  size=524 */

void FUN_00696270(void)

{
  int iVar1;
  int in_EAX;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *unaff_ESI;
  int iVar8;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  iVar5 = unaff_ESI[9];
  if (iVar5 == 0) {
    FUN_00695fc0();
    return;
  }
  iVar1 = unaff_ESI[0xb];
  iVar7 = in_EAX * -0xb40000 + 0x5a0000;
  iVar2 = FUN_00691200(*unaff_ESI,unaff_ESI[1]);
  iVar8 = *unaff_ESI;
  iVar6 = iVar7;
  if (iVar2 != 0xb40000) {
    iVar8 = iVar8 + iVar2 / 2 + iVar7;
    iVar6 = iVar2 / 2;
  }
  local_10 = FUN_00691030(iVar6);
  iVar2 = FUN_0068ebc0(unaff_ESI[10],local_10);
  if (((iVar2 < 0x10000) && (iVar3 = FUN_00695620(), 0x39 < iVar3)) && (iVar5 == 2)) {
    uVar4 = FUN_0068ebc0(iVar1,unaff_ESI[10],iVar8);
    FUN_006911e0(&local_8,uVar4);
    local_8 = local_8 + unaff_ESI[2];
    local_4 = local_4 + unaff_ESI[3];
    FUN_00691070(iVar6);
    uVar4 = FUN_00695620();
    uVar4 = FUN_0068ec40(0x10000 - iVar2,uVar4);
    uVar4 = FUN_0068ebc0(iVar1,uVar4);
    FUN_006911e0(&local_10,uVar4,iVar8 + iVar7);
    local_10 = local_10 + local_8;
    local_c = local_c + local_4;
    iVar5 = FUN_00695ab0(0);
    if (iVar5 != 0) {
      return;
    }
    FUN_006911e0(&local_10,uVar4,iVar8 - iVar7);
    local_10 = local_10 + local_8;
    local_c = local_c + local_4;
    iVar5 = FUN_00695ab0(0);
    if (iVar5 != 0) {
      return;
    }
    FUN_006911e0(&local_10,iVar1,unaff_ESI[1] + iVar7);
    local_10 = local_10 + unaff_ESI[2];
    local_c = local_c + unaff_ESI[3];
  }
  else {
    uVar4 = FUN_0068ec40(unaff_ESI[0xb],local_10);
    FUN_006911e0(&local_10,uVar4,iVar8);
    local_10 = local_10 + unaff_ESI[2];
    local_c = local_c + unaff_ESI[3];
    iVar5 = FUN_00695ab0(0);
    if (iVar5 != 0) {
      return;
    }
    FUN_006911e0(&local_10,unaff_ESI[0xb],unaff_ESI[1] + iVar7);
    local_10 = local_10 + unaff_ESI[2];
    local_c = local_c + unaff_ESI[3];
  }
  FUN_00695ab0(1);
  return;
}


/* FUN_00696480 @ 00696480  kind=lib  attributed-by=lib-island  size=65 */

int FUN_00696480(void)

{
  undefined4 *in_EAX;
  int iVar1;
  
  iVar1 = FUN_00691200(*in_EAX,in_EAX[1]);
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_006961a0();
    if (iVar1 == 0) {
      iVar1 = FUN_00696270();
      return iVar1;
    }
  }
  return iVar1;
}


/* FUN_006964d0 @ 006964d0  kind=lib  attributed-by=lib-island  size=117 */

void FUN_006964d0(void)

{
  int iVar1;
  int unaff_EBX;
  int unaff_ESI;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  FUN_006911e0(&local_8,*(undefined4 *)(unaff_ESI + 0x2c),unaff_EBX + 0x5a0000);
  local_10 = *(int *)(unaff_ESI + 8) + local_8;
  local_c = *(int *)(unaff_ESI + 0xc) + local_4;
  iVar1 = FUN_00695d60(&local_10);
  if (iVar1 == 0) {
    local_10 = *(int *)(unaff_ESI + 8) - local_8;
    local_c = *(int *)(unaff_ESI + 0xc) - local_4;
    FUN_00695d60(&local_10);
    *(int *)(unaff_ESI + 0x14) = unaff_EBX;
    *(undefined1 *)(unaff_ESI + 0x10) = 0;
  }
  return;
}


/* FUN_00696550 @ 00696550  kind=lib  attributed-by=lib-island  size=200 */

void FUN_00696550(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_c = param_2[1] - param_1[3];
  local_10 = *param_2 - param_1[2];
  iVar1 = FUN_00691090(local_10,local_c);
  FUN_006911e0(&local_10,param_1[0xb],iVar1 + 0x5a0000);
  if ((char)param_1[4] == '\0') {
    param_1[1] = iVar1;
    iVar2 = FUN_00696480();
  }
  else {
    iVar2 = FUN_006964d0();
  }
  if (iVar2 == 0) {
    iVar2 = 1;
    do {
      local_8 = *param_2 + local_10;
      local_4 = param_2[1] + local_c;
      iVar3 = FUN_00695ab0(1);
      if (iVar3 != 0) {
        return;
      }
      local_10 = -local_10;
      local_c = -local_c;
      iVar2 = iVar2 + -1;
    } while (-1 < iVar2);
    *param_1 = iVar1;
    param_1[2] = *param_2;
    param_1[3] = param_2[1];
  }
  return;
}


/* FUN_00696620 @ 00696620  kind=lib  attributed-by=lib-island  size=522 */

void FUN_00696620(int *param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined1 auStack_15c [3];
  char local_159;
  int *local_158;
  int *local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  int local_11c;
  undefined4 local_118;
  undefined4 local_114;
  int local_110;
  int local_10c;
  int local_30 [9];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_15c;
  local_120 = *param_3;
  local_11c = param_3[1];
  local_118 = *param_2;
  local_114 = param_2[1];
  local_110 = param_1[2];
  local_10c = param_1[3];
  local_154 = &local_120;
  local_159 = '\x01';
LAB_00696680:
  do {
    piVar6 = local_154;
    local_150 = 0;
    local_158 = (int *)0x0;
    if ((local_154 < local_30) && (cVar2 = FUN_00695630(&local_158,&local_150), cVar2 == '\0')) {
      FUN_0069ad50();
      local_154 = piVar6 + 4;
    }
    else {
      if (local_159 != '\0') {
        local_159 = '\0';
        if ((char)param_1[4] == '\0') {
          param_1[1] = (int)local_158;
          FUN_00696480();
        }
        else {
          FUN_006964d0();
          piVar6 = local_154;
        }
      }
      iVar3 = FUN_00691200(local_158,local_150);
      piVar1 = local_158;
      uVar4 = FUN_00691030(iVar3 / 2);
      local_138 = FUN_0068ec40(param_1[0xb],uVar4);
      local_128 = piVar6[2];
      local_124 = piVar6[3];
      local_12c = *piVar6;
      local_134 = piVar6[1];
      local_158 = param_1 + 0xd;
      local_130 = (int)piVar1 + (iVar3 / 2 - local_150);
      local_144 = 0;
      iVar3 = local_150 + 0x5a0000;
      do {
        FUN_006911e0(&local_14c,local_138,local_130 + iVar3);
        local_14c = local_14c + local_128;
        local_148 = local_148 + local_124;
        FUN_006911e0(&local_140,param_1[0xb],iVar3);
        local_140 = local_140 + local_12c;
        local_13c = local_13c + local_134;
        iVar5 = FUN_00695b20(&local_140);
        if (iVar5 != 0) goto LAB_00696813;
        local_158 = local_158 + 8;
        local_144 = local_144 + 1;
        iVar3 = iVar3 + -0xb40000;
      } while (local_144 < 2);
      local_154 = local_154 + -4;
      if (&local_120 <= local_154) goto LAB_00696680;
      *param_1 = local_150;
    }
    if (local_154 < &local_120) {
      param_1[2] = *param_3;
      param_1[3] = param_3[1];
LAB_00696813:
      __security_check_cookie(local_c ^ (uint)auStack_15c);
      return;
    }
  } while( true );
}


/* FUN_00696830 @ 00696830  kind=lib  attributed-by=lib-island  size=690 */

void FUN_00696830(int *param_1,undefined4 *param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined1 auStack_18c [3];
  char local_189;
  int *local_188;
  int local_184;
  int *local_180;
  int local_17c;
  int local_178;
  int local_174;
  int local_170;
  int local_16c;
  int local_168;
  int local_164;
  int local_160;
  undefined4 local_15c;
  int local_158;
  int local_154;
  int local_150;
  int local_14c;
  int local_148;
  int local_144;
  undefined4 local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  int local_120;
  int local_11c;
  int local_38 [11];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_18c;
  local_138 = *param_4;
  local_134 = param_4[1];
  local_130 = *param_3;
  local_12c = param_3[1];
  local_128 = *param_2;
  local_124 = param_2[1];
  local_120 = param_1[2];
  local_11c = param_1[3];
  local_180 = &local_138;
  local_189 = '\x01';
LAB_006968a0:
  do {
    piVar5 = local_180;
    local_188 = (int *)0x0;
    local_17c = 0;
    local_184 = 0;
    if ((local_180 < local_38) &&
       (cVar1 = FUN_006957c0(&local_184,&local_188,&local_17c), cVar1 == '\0')) {
      FUN_00695710();
      local_180 = piVar5 + 6;
    }
    else {
      if (local_189 != '\0') {
        local_189 = '\0';
        if ((char)param_1[4] == '\0') {
          param_1[1] = local_184;
          iVar2 = FUN_00696480();
        }
        else {
          iVar2 = FUN_006964d0();
          piVar5 = local_180;
        }
        if (iVar2 != 0) goto LAB_00696ad6;
      }
      local_178 = (local_184 + (int)local_188) / 2;
      iVar2 = (local_17c + (int)local_188) / 2;
      iVar3 = FUN_00695620();
      uVar4 = FUN_00691030(iVar3 / 2);
      local_140 = FUN_0068ec40(param_1[0xb],uVar4);
      iVar3 = FUN_00695620();
      uVar4 = FUN_00691030(iVar3 / 2);
      local_15c = FUN_0068ec40(param_1[0xb],uVar4);
      local_148 = piVar5[5];
      local_154 = piVar5[2];
      local_150 = piVar5[4];
      local_144 = piVar5[3];
      local_13c = *piVar5;
      local_188 = param_1 + 0xd;
      local_178 = local_178 - iVar2;
      local_158 = piVar5[1];
      local_14c = local_17c - iVar2;
      local_184 = 0;
      iVar2 = iVar2 + 0x5a0000;
      do {
        FUN_006911e0(&local_164,local_140,local_178 + iVar2);
        local_164 = local_164 + local_150;
        local_160 = local_160 + local_148;
        FUN_006911e0(&local_16c,local_15c,iVar2);
        local_16c = local_16c + local_154;
        local_168 = local_168 + local_144;
        FUN_006911e0(&local_174,param_1[0xb],local_14c + iVar2);
        local_174 = local_174 + local_13c;
        local_170 = local_170 + local_158;
        iVar3 = FUN_00695b70(&local_164,&local_174);
        if (iVar3 != 0) goto LAB_00696ad6;
        local_188 = local_188 + 8;
        local_184 = local_184 + 1;
        iVar2 = iVar2 + -0xb40000;
      } while (local_184 < 2);
      local_180 = local_180 + -6;
      if (&local_138 <= local_180) goto LAB_006968a0;
      *param_1 = local_17c;
    }
    if (local_180 < &local_138) {
      param_1[2] = *param_4;
      param_1[3] = param_4[1];
LAB_00696ad6:
      __security_check_cookie(local_c ^ (uint)auStack_18c);
      return;
    }
  } while( true );
}


/* FUN_00696af0 @ 00696af0  kind=lib  attributed-by=lib-island  size=44 */

undefined4 FUN_00696af0(int param_1,undefined4 *param_2,undefined1 param_3)

{
  *(undefined1 *)(param_1 + 0x10) = 1;
  *(undefined4 *)(param_1 + 8) = *param_2;
  *(undefined4 *)(param_1 + 0xc) = param_2[1];
  *(undefined1 *)(param_1 + 0x11) = param_3;
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_2[1];
  return 0;
}


/* FUN_00696b20 @ 00696b20  kind=lib  attributed-by=lib-island  size=191 */

int FUN_00696b20(char param_1)

{
  int iVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x54) - *(int *)(unaff_EDI + 0x68);
  iVar1 = 0;
  if ((0 < iVar3) && (iVar1 = FUN_00695970(iVar3), iVar1 == 0)) {
    puVar7 = (undefined4 *)(*(int *)(unaff_EDI + 0x3c) + *(int *)(unaff_EDI + 0x34) * 8);
    pbVar6 = (byte *)(*(int *)(unaff_EDI + 0x40) + *(int *)(unaff_EDI + 0x34));
    puVar4 = (undefined4 *)(*(int *)(unaff_EDI + 0x5c) + -8 + *(int *)(unaff_EDI + 0x54) * 8);
    pbVar5 = (byte *)(*(int *)(unaff_EDI + 0x60) + -1 + *(int *)(unaff_EDI + 0x54));
    if ((undefined4 *)(*(int *)(unaff_EDI + 0x5c) + *(int *)(unaff_EDI + 0x68) * 8) <= puVar4) {
      do {
        *puVar7 = *puVar4;
        puVar7[1] = puVar4[1];
        bVar2 = *pbVar5;
        *pbVar6 = bVar2;
        if (param_1 == '\0') {
          if (((bVar2 & 0xc) == 4) || ((bVar2 & 0xc) == 8)) {
            bVar2 = bVar2 ^ 0xc;
            goto LAB_00696baa;
          }
        }
        else {
          bVar2 = bVar2 & 0xf3;
LAB_00696baa:
          *pbVar6 = bVar2;
        }
        puVar4 = puVar4 + -2;
        pbVar5 = pbVar5 + -1;
        puVar7 = puVar7 + 2;
        pbVar6 = pbVar6 + 1;
      } while ((undefined4 *)(*(int *)(unaff_EDI + 0x5c) + *(int *)(unaff_EDI + 0x68) * 8) <= puVar4
              );
    }
    *(undefined4 *)(unaff_EDI + 0x54) = *(undefined4 *)(unaff_EDI + 0x68);
    *(int *)(unaff_EDI + 0x34) = *(int *)(unaff_EDI + 0x34) + iVar3;
    *(undefined1 *)(unaff_EDI + 0x44) = 0;
    *(undefined1 *)(unaff_EDI + 100) = 0;
  }
  return iVar1;
}


/* FUN_00696bf0 @ 00696bf0  kind=lib  attributed-by=lib-island  size=231 */

int FUN_00696bf0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(char *)((int)param_1 + 0x11) == '\0') {
    if (((param_1[2] == param_1[6]) && (param_1[3] == param_1[7])) ||
       (iVar2 = FUN_00696550(param_1,param_1 + 6), iVar2 == 0)) {
      param_1[1] = param_1[5];
      iVar1 = FUN_00691200(*param_1,param_1[5]);
      if ((iVar1 == 0) ||
         ((iVar2 = FUN_006961a0(), iVar2 == 0 && (iVar2 = FUN_00696270(), iVar2 == 0)))) {
        FUN_006959f0(1);
        FUN_006959f0(0);
      }
    }
  }
  else {
    iVar2 = FUN_00696020();
    if ((iVar2 == 0) && (iVar2 = FUN_00696b20(1), iVar2 == 0)) {
      param_1[3] = param_1[7];
      param_1[2] = param_1[6];
      iVar2 = FUN_00696020();
      if (iVar2 == 0) {
        FUN_006959f0(0);
        return 0;
      }
    }
  }
  return iVar2;
}


/* FUN_00696ce0 @ 00696ce0  kind=lib  attributed-by=lib-island  size=101 */

void FUN_00696ce0(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_c;
  int local_8;
  int local_4;
  
  iVar2 = param_1;
  iVar3 = 0;
  iVar4 = 0;
  iVar1 = FUN_00695e10(param_1 + 0x34,&param_1,&local_8);
  if (iVar1 == 0) {
    iVar2 = FUN_00695e10(iVar2 + 0x54,&local_c,&local_4);
    if (iVar2 == 0) {
      iVar3 = local_c + param_1;
      iVar4 = local_4 + local_8;
    }
  }
  *param_2 = iVar3;
  *param_3 = iVar4;
  return;
}


/* FUN_00696d50 @ 00696d50  kind=lib  attributed-by=lib-island  size=45 */

void FUN_00696d50(int param_1,int param_2)

{
  if (((param_2 == 0) || (param_2 == 1)) && (*(char *)(param_2 * 0x20 + 0x50 + param_1) != '\0')) {
    FUN_00695e80();
  }
  return;
}


/* FUN_00696d80 @ 00696d80  kind=lib  attributed-by=lib-island  size=34 */

void FUN_00696d80(undefined4 param_1,undefined4 param_2)

{
  FUN_00696d50(param_1,0,param_2);
  FUN_00696d50(param_1,1,param_2);
  return;
}


/* FUN_00696db0 @ 00696db0  kind=lib  attributed-by=lib-island  size=763 */

int FUN_00696db0(int param_1,short *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short *extraout_EDX;
  short *psVar5;
  int *piVar6;
  int *piVar7;
  byte *pbVar8;
  byte *pbVar9;
  int *local_54;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if ((param_2 == (short *)0x0) || (param_1 == 0)) {
    return 6;
  }
  FUN_00695f60(param_1);
  uVar1 = 0;
  local_4c = 0;
  psVar5 = extraout_EDX;
  if (0 < *extraout_EDX) {
    do {
      uVar4 = (uint)*(short *)(*(int *)(psVar5 + 6) + local_4c * 2);
      iVar2 = *(int *)(psVar5 + 2);
      local_54 = (int *)(iVar2 + uVar4 * 8);
      if (uVar1 < uVar4) {
        local_44 = *(int *)(iVar2 + 4 + uVar1 * 8);
        local_40 = *(int *)(iVar2 + uVar1 * 8);
        piVar6 = (int *)(iVar2 + uVar1 * 8);
        local_3c = piVar6[1];
        pbVar8 = (byte *)(*(int *)(psVar5 + 4) + uVar1);
        if ((*pbVar8 & 3) == 2) {
          return 0x14;
        }
        local_48 = local_40;
        if ((*pbVar8 & 3) == 0) {
          local_48 = *local_54;
          if ((*(byte *)(*(int *)(psVar5 + 4) + uVar4) & 3) == 1) {
            local_44 = local_54[1];
            local_54 = local_54 + -2;
          }
          else {
            local_48 = (local_48 + local_40) / 2;
            local_44 = (local_54[1] + local_44) / 2;
          }
          piVar6 = piVar6 + -2;
          pbVar8 = pbVar8 + -1;
        }
        iVar2 = FUN_00696af0(param_1,&local_48,param_3);
        if (iVar2 != 0) {
          return iVar2;
        }
        if (piVar6 < local_54) {
          do {
            pbVar9 = pbVar8 + 1;
            piVar7 = piVar6 + 2;
            if ((pbVar8[1] & 3) == 0) {
              local_3c = piVar6[3];
              local_40 = *piVar7;
              while( true ) {
                if (local_54 <= piVar7) {
                  iVar2 = FUN_00696620(param_1,&local_40,&local_48);
                  goto LAB_0069705a;
                }
                pbVar8 = pbVar9 + 1;
                iVar2 = piVar7[2];
                local_34 = piVar7[3];
                pbVar9 = pbVar9 + 1;
                piVar7 = piVar7 + 2;
                local_38 = iVar2;
                if ((*pbVar8 & 3) == 1) break;
                if ((*pbVar8 & 3) != 0) {
                  return 0x14;
                }
                local_10 = (iVar2 + local_40) / 2;
                local_c = (local_34 + local_3c) / 2;
                iVar3 = FUN_00696620(param_1,&local_40,&local_10);
                if (iVar3 != 0) {
                  return iVar3;
                }
                local_3c = local_34;
                local_40 = iVar2;
              }
              iVar2 = FUN_00696620(param_1,&local_40,&local_38);
              pbVar8 = pbVar9;
              piVar6 = piVar7;
            }
            else if ((pbVar8[1] & 3) == 1) {
              local_18 = *piVar7;
              local_14 = piVar6[3];
              iVar2 = FUN_00696550(param_1,&local_18);
              pbVar8 = pbVar9;
              piVar6 = piVar7;
            }
            else {
              if (local_54 < piVar6 + 4) {
                return 0x14;
              }
              if ((pbVar8[2] & 3) != 2) {
                return 0x14;
              }
              local_28 = *piVar7;
              local_24 = piVar6[3];
              local_30 = piVar6[4];
              piVar7 = piVar6 + 6;
              local_2c = piVar6[5];
              if (local_54 < piVar7) {
                iVar2 = FUN_00696830(param_1,&local_28,&local_30,&local_48);
                break;
              }
              local_20 = *piVar7;
              local_1c = piVar6[7];
              iVar2 = FUN_00696830(param_1,&local_28,&local_30,&local_20);
              pbVar8 = pbVar8 + 3;
              piVar6 = piVar7;
            }
            if (iVar2 != 0) {
              return iVar2;
            }
            iVar2 = 0;
          } while (piVar6 < local_54);
LAB_0069705a:
          if (iVar2 != 0) {
            return iVar2;
          }
        }
        iVar2 = FUN_00696bf0(param_1);
        psVar5 = param_2;
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      uVar1 = uVar4 + 1;
      local_4c = local_4c + 1;
    } while (local_4c < *psVar5);
  }
  return 0;
}


/* FUN_006970b0 @ 006970b0  kind=lib  attributed-by=lib-island  size=237 */

int FUN_006970b0(int *param_1,undefined4 param_2,char param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *local_8;
  undefined4 local_4;
  
  iVar4 = 6;
  if ((((param_1 != (int *)0x0) && (iVar2 = *param_1, iVar2 != 0)) &&
      (*(undefined **)(iVar2 + 4) == &DAT_007227f0)) &&
     (iVar4 = FUN_006952d0(iVar2,&local_8), uVar3 = param_2, iVar4 == 0)) {
    puVar1 = local_8 + 5;
    iVar4 = FUN_00696db0(param_2,puVar1,0);
    if (iVar4 == 0) {
      FUN_00696ce0(uVar3,&local_4,&param_2);
      FUN_00691da0(*local_8,puVar1);
      iVar4 = FUN_00694250(*local_8,local_4,param_2,puVar1);
      if (iVar4 == 0) {
        *puVar1 = 0;
        FUN_00696d80(uVar3,puVar1);
        if (param_3 != '\0') {
          FUN_006952a0(*param_1);
        }
        *param_1 = (int)local_8;
        return 0;
      }
    }
    FUN_006952a0(local_8);
    if (param_3 == '\0') {
      *param_1 = 0;
      return iVar4;
    }
  }
  return iVar4;
}


/* FUN_006971a0 @ 006971a0  kind=lib  attributed-by=lib-island  size=40 */

void FUN_006971a0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x2c) = param_2;
  *(undefined4 *)(param_1 + 0x20) = param_3;
  *(undefined4 *)(param_1 + 0x24) = param_4;
  *(undefined4 *)(param_1 + 0x28) = param_5;
  FUN_00695f60(param_1);
  return;
}


