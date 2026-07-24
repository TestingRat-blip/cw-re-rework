// ContinuousAttribute (engine) -- cube. 31 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ContinuousAttribute.h"

/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_> @ 0064cd90  kind=game  attributed-by=rtti  size=188 */

ContinuousAttribute<plasma::Vector<4,float>_> * __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_>
          (ContinuousAttribute<plasma::Vector<4,float>_> *this,undefined4 param_1,undefined4 param_2
          )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f77b3;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0 = 0;
  (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4 = 0;
  (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x8 = 0;
  iVar4 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4;
  iVar2 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0;
  uVar5 = iVar4 - iVar2 >> 4;
  local_8 = 1;
  if (uVar5 < 3) {
    if (uVar5 < 2) {
      FUN_0064e520(&param_1,iVar4,2 - uVar5,param_2);
    }
  }
  else {
    iVar1 = iVar2 + 0x20;
    if (iVar1 == iVar2) {
      (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4 = iVar2;
    }
    else if (iVar1 != iVar4) {
      iVar4 = FUN_00427a30(iVar4,iVar4,iVar1,param_1,uVar3);
      (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4 = iVar4;
    }
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction3 @ 0064ea80  kind=game  attributed-by=rtti  size=81 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction3
          (ContinuousAttribute<plasma::Vector<4,float>_> *this)

{
  int iVar1;
  undefined1 local_18 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0;
  if (iVar1 == (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4) {
    FUN_0042bd20(local_18);
  }
  else {
    FUN_0042bd20((this->Attribute_data).offset_0x1c * 0x10 + iVar1);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction5 @ 00650aa0  kind=game  attributed-by=rtti  size=60 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction5
          (ContinuousAttribute<plasma::Vector<4,float>_> *this,int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if ((-1 < param_1) &&
     (iVar2 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4,
     param_1 < iVar2 - (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0 >> 4))
  {
    iVar3 = param_1 * 0x10 + (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0;
    FUN_00427a30(iVar3 + 0x10,iVar2,iVar3,param_1);
    piVar1 = &(this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4;
    *piVar1 = *piVar1 + -0x10;
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction4 @ 00650e30  kind=game  attributed-by=rtti  size=66 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction4
          (ContinuousAttribute<plasma::Vector<4,float>_> *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((-1 < param_1) &&
     (iVar1 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4 - iVar1 >> 4))
  {
    puVar3 = (undefined4 *)(param_1 * 0x10 + iVar1);
    puVar2 = (undefined4 *)((this->Attribute_data).offset_0x1c * 0x10 + iVar1);
    *puVar2 = *puVar3;
    puVar2[1] = puVar3[1];
    puVar2[2] = puVar3[2];
    puVar2[3] = puVar3[3];
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction7 @ 00652de0  kind=game  attributed-by=rtti  size=956 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction7
          (ContinuousAttribute<plasma::Vector<4,float>_> *this,int param_1,int param_2,int param_3,
          int param_4,float param_5,float param_6,undefined4 param_7,float param_8,float param_9,
          float param_10,float param_11)

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
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  float *pfVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  
  iVar18 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0;
  pfVar19 = (float *)(param_3 * 0x10 + iVar18);
  iVar21 = param_1 * 0x10;
  fVar1 = pfVar19[1];
  fVar2 = *(float *)(iVar21 + 4 + iVar18);
  fVar3 = pfVar19[3];
  fVar4 = *(float *)(iVar21 + 0xc + iVar18);
  fVar5 = pfVar19[2];
  fVar6 = *(float *)(iVar21 + 8 + iVar18);
  pfVar22 = (float *)(param_2 * 0x10 + iVar18);
  fVar7 = *pfVar22;
  fVar8 = pfVar22[3];
  pfVar20 = (float *)(param_4 * 0x10 + iVar18);
  fVar9 = pfVar20[1];
  fVar10 = pfVar22[1];
  fVar11 = pfVar20[3];
  fVar12 = pfVar20[2];
  fVar13 = pfVar22[2];
  fVar28 = (*pfVar19 - fVar7) * 0.25;
  fVar24 = (pfVar19[1] - fVar10) * 0.25;
  fVar25 = (pfVar19[2] - fVar13) * 0.25;
  fVar26 = (pfVar19[3] - fVar8) * 0.25;
  fVar23 = 1.0 - param_5;
  fVar27 = 1.0 - param_6;
  fVar14 = pfVar19[2];
  fVar15 = pfVar19[1];
  fVar16 = pfVar19[3];
  fVar17 = pfVar19[1];
  pfVar22 = (float *)((this->Attribute_data).offset_0x1c * 0x10 + iVar18);
  *pfVar22 = fVar7 * param_8 +
             (fVar7 + (*pfVar19 - *(float *)(iVar21 + iVar18)) * 0.25 * param_5 + fVar28 * fVar23) *
             param_9 + (*pfVar19 - ((*pfVar20 - fVar7) * 0.25 * param_6 + fVar28 * fVar27)) *
                       param_10 + *pfVar19 * param_11;
  pfVar22[2] = fVar13 * param_8 +
               (fVar13 + (fVar5 - fVar6) * 0.25 * param_5 + fVar25 * fVar23) * param_9 +
               (fVar14 - ((fVar12 - fVar13) * 0.25 * param_6 + fVar25 * fVar27)) * param_10 +
               fVar14 * param_11;
  pfVar22[1] = fVar10 * param_8 +
               (fVar10 + (fVar1 - fVar2) * 0.25 * param_5 + fVar24 * fVar23) * param_9 +
               (fVar15 - ((fVar9 - fVar10) * 0.25 * param_6 + fVar24 * fVar27)) * param_10 +
               fVar17 * param_11;
  pfVar22[3] = fVar8 * param_8 +
               (fVar8 + (fVar3 - fVar4) * 0.25 * param_5 + fVar26 * fVar23) * param_9 +
               (fVar16 - ((fVar11 - fVar8) * 0.25 * param_6 + fVar26 * fVar27)) * param_10 +
               fVar16 * param_11;
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction2 @ 00653200  kind=game  attributed-by=rtti  size=10 */

int __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction2
          (ContinuousAttribute<plasma::Vector<4,float>_> *this)

{
  return (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
         (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0 >> 4;
}


/* plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction6 @ 00659d20  kind=game  attributed-by=rtti  size=66 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<4,float>_>::vfunction6
          (ContinuousAttribute<plasma::Vector<4,float>_> *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((-1 < param_1) &&
     (iVar1 = (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousAttribute<plasma::Vector<4,float>_>_data).offset_0x4 - iVar1 >> 4))
  {
    puVar2 = (undefined4 *)((this->Attribute_data).offset_0x1c * 0x10 + iVar1);
    puVar3 = (undefined4 *)(param_1 * 0x10 + iVar1);
    *puVar3 = *puVar2;
    puVar3[1] = puVar2[1];
    puVar3[2] = puVar2[2];
    puVar3[3] = puVar2[3];
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::ContinuousAttribute<plasma::Matrix<float>_> @ 00666420  kind=game  attributed-by=rtti  size=167 */

ContinuousAttribute<plasma::Matrix<float>_> * __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::ContinuousAttribute<plasma::Matrix<float>_>
          (ContinuousAttribute<plasma::Matrix<float>_> *this,undefined4 param_1,undefined4 param_2)

{
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f77b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  this->field2_0x4c = (undefined4 *)0x0;
  this[1].vftablePtr = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)0x0;
  this[1].Attribute_data.offset_0x0 = (void *)0x0;
  pCVar1 = this[1].vftablePtr;
  puVar2 = this->field2_0x4c;
  uVar3 = (int)pCVar1 - (int)puVar2 >> 6;
  local_8 = 1;
  if (uVar3 < 3) {
    if (uVar3 < 2) {
      FUN_00668110(&param_1,pCVar1,2 - uVar3,param_2);
    }
  }
  else {
    FUN_00669250(&param_1,puVar2 + 0x20,pCVar1);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_> @ 006664d0  kind=game  attributed-by=rtti  size=167 */

ContinuousAttribute<plasma::Vector<2,float>_> * __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
          (ContinuousAttribute<plasma::Vector<2,float>_> *this,undefined4 param_1,undefined4 param_2
          )

{
  int iVar1;
  int iVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f77b3;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0 = 0;
  (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4 = 0;
  (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x8 = 0;
  iVar1 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4;
  iVar2 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0;
  uVar3 = iVar1 - iVar2 >> 3;
  local_8 = 1;
  if (uVar3 < 3) {
    if (uVar3 < 2) {
      FUN_00668360(&param_1,iVar1,2 - uVar3,param_2);
    }
  }
  else {
    FUN_0042b7a0(&param_1,iVar2 + 0x10,iVar1);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction3 @ 00668ef0  kind=game  attributed-by=rtti  size=191 */

void __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction3
          (ContinuousAttribute<plasma::Matrix<float>_> *this)

{
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar1;
  int iVar2;
  uint uVar3;
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar4;
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar5;
  ContinuousAttribute<plasma::Matrix<float>_>_vftable local_48 [2];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pCVar5 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)this->field2_0x4c;
  pCVar1 = this[1].vftablePtr;
  if (pCVar5 == pCVar1) {
    if ((local_48 < pCVar1) && (pCVar5 <= local_48)) {
      uVar3 = (int)local_48 - (int)pCVar5;
      if (pCVar1 == this[1].Attribute_data.offset_0x0) {
        FUN_00668a40(1);
      }
LAB_00668f2d:
      pCVar4 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)
               ((uVar3 & 0xffffffc0) + (int)this->field2_0x4c);
      goto LAB_00668f83;
    }
    if (pCVar1 == this[1].Attribute_data.offset_0x0) {
      FUN_00668a40(1);
    }
    pCVar5 = this[1].vftablePtr;
    if (pCVar5 == (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)0x0) goto LAB_00668f91;
    pCVar4 = local_48;
  }
  else {
    pCVar4 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)
             ((int)pCVar5 + (this->Attribute_data).offset_0x1c * 0x40);
    if ((pCVar4 < pCVar1) && (pCVar5 <= pCVar4)) {
      uVar3 = (int)pCVar4 - (int)pCVar5;
      if (pCVar1 != this[1].Attribute_data.offset_0x0) goto LAB_00668f2d;
      FUN_00668a40(1);
      pCVar4 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)
               ((uVar3 & 0xffffffc0) + (int)this->field2_0x4c);
    }
    else if (pCVar1 == this[1].Attribute_data.offset_0x0) {
      FUN_00668a40(1);
    }
LAB_00668f83:
    pCVar5 = this[1].vftablePtr;
    if (pCVar5 == (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)0x0) goto LAB_00668f91;
  }
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    pCVar5->vfunction1 = pCVar4->vfunction1;
    pCVar4 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&pCVar4->vfunction2;
    pCVar5 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&pCVar5->vfunction2;
  }
LAB_00668f91:
  this[1].vftablePtr =
       (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&this[1].vftablePtr[2].vfunction3;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction3 @ 00668fb0  kind=game  attributed-by=rtti  size=79 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction3
          (ContinuousAttribute<plasma::Vector<2,float>_> *this)

{
  int iVar1;
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0;
  if (iVar1 == (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4) {
    FUN_00642590(local_10);
  }
  else {
    FUN_00642590(iVar1 + (this->Attribute_data).offset_0x1c * 8);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction3 @ 00669000  kind=game  attributed-by=rtti  size=95 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction3
          (ContinuousAttribute<plasma::Vector<3,float>_> *this)

{
  int iVar1;
  undefined1 local_14 [12];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (*(ContinuousAttribute<plasma::Vector<3,float>_>_vftable **)&this[9].field1_0x4 ==
      this[10].vftablePtr) {
    FUN_0066ae40(local_14);
  }
  else {
    FUN_0066ae40(&(*(ContinuousAttribute<plasma::Vector<3,float>_>_vftable **)&this[9].field1_0x4)->
                  vfunction1 + (int)this[4].vftablePtr * 3);
  }
  iVar1 = (int)this[10].vftablePtr - *(int *)&this[9].field1_0x4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc,iVar1 / 0xc + (iVar1 >> 0x1f));
  return;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction5 @ 00669350  kind=game  attributed-by=rtti  size=101 */

void __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction5
          (ContinuousAttribute<plasma::Matrix<float>_> *this,int param_1)

{
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar1;
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar2;
  ContinuousAttribute<plasma::Matrix<float>_>_vftable *pCVar3;
  int iVar4;
  vfunction7 **ppvVar5;
  vfunction7 **ppvVar6;
  
  if (-1 < param_1) {
    pCVar1 = this[1].vftablePtr;
    if (param_1 < (int)pCVar1 - (int)this->field2_0x4c >> 6) {
      pCVar3 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)
               (this->field2_0x4c + param_1 * 0x10 + 0x10);
      if (pCVar3 != pCVar1) {
        ppvVar5 = (vfunction7 **)&pCVar3[-3].vfunction6;
        do {
          pCVar2 = pCVar3 + 2;
          ppvVar6 = ppvVar5;
          for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
            *ppvVar6 = (vfunction7 *)pCVar3->vfunction1;
            pCVar3 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&pCVar3->vfunction2;
            ppvVar6 = ppvVar6 + 1;
          }
          pCVar3 = (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&pCVar2->vfunction3;
          ppvVar5 = ppvVar5 + 0x10;
        } while ((ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&pCVar2->vfunction3 !=
                 pCVar1);
      }
      this[1].vftablePtr =
           (ContinuousAttribute<plasma::Matrix<float>_>_vftable *)&this[1].vftablePtr[-3].vfunction6
      ;
    }
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction5 @ 006693c0  kind=game  attributed-by=rtti  size=67 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction5
          (ContinuousAttribute<plasma::Vector<2,float>_> *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (-1 < param_1) {
    puVar2 = (undefined4 *)(this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4;
    iVar3 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0;
    if (param_1 < (int)puVar2 - iVar3 >> 3) {
      for (puVar4 = (undefined4 *)(iVar3 + (param_1 + 1) * 8); puVar4 != puVar2; puVar4 = puVar4 + 2
          ) {
        puVar4[-2] = *puVar4;
        puVar4[-1] = puVar4[1];
      }
      piVar1 = &(this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4;
      *piVar1 = *piVar1 + -8;
    }
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction5 @ 00669410  kind=game  attributed-by=rtti  size=69 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction5
          (ContinuousAttribute<plasma::Vector<3,float>_> *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < ((int)this[10].vftablePtr - *(int *)&this[9].field1_0x4) / 0xc))
  {
    FUN_006692c0(&param_1,*(int *)&this[9].field1_0x4 + param_1 * 0xc);
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction4 @ 00669660  kind=game  attributed-by=rtti  size=53 */

void __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction4
          (ContinuousAttribute<plasma::Matrix<float>_> *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((-1 < param_1) &&
     (puVar3 = this->field2_0x4c, param_1 < (int)this[1].vftablePtr - (int)puVar3 >> 6)) {
    puVar2 = puVar3 + param_1 * 0x10;
    puVar3 = puVar3 + (this->Attribute_data).offset_0x1c * 0x10;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction4 @ 006696a0  kind=game  attributed-by=rtti  size=48 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction4
          (ContinuousAttribute<plasma::Vector<2,float>_> *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) &&
     (iVar1 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4 - iVar1 >> 3))
  {
    iVar2 = (this->Attribute_data).offset_0x1c;
    *(undefined4 *)(iVar1 + iVar2 * 8) = *(undefined4 *)(iVar1 + param_1 * 8);
    *(undefined4 *)(iVar1 + 4 + iVar2 * 8) = *(undefined4 *)(iVar1 + 4 + param_1 * 8);
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction4 @ 006696d0  kind=game  attributed-by=rtti  size=77 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction4
          (ContinuousAttribute<plasma::Vector<3,float>_> *this,int param_1)

{
  int iVar1;
  ContinuousAttribute<plasma::Vector<3,float>_>_vftable *pCVar2;
  
  if ((-1 < param_1) &&
     (iVar1 = *(int *)&this[9].field1_0x4, param_1 < ((int)this[10].vftablePtr - iVar1) / 0xc)) {
    pCVar2 = this[4].vftablePtr;
    *(undefined4 *)(iVar1 + (int)pCVar2 * 0xc) = *(undefined4 *)(iVar1 + param_1 * 0xc);
    *(undefined4 *)(iVar1 + 4 + (int)pCVar2 * 0xc) = *(undefined4 *)(iVar1 + 4 + param_1 * 0xc);
    *(undefined4 *)(iVar1 + 8 + (int)pCVar2 * 0xc) = *(undefined4 *)(iVar1 + 8 + param_1 * 0xc);
  }
  return;
}


/* plasma::ContinuousAttribute<float>::vfunction7 @ 00669c70  kind=game  attributed-by=rtti  size=178 */

void __thiscall
plasma::ContinuousAttribute<float>::vfunction7
          (ContinuousAttribute<float> *this,int param_1,int param_2,int param_3,int param_4,
          float param_5,float param_6,undefined4 param_7,float param_8,float param_9,float param_10,
          float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  
  iVar4 = *(int *)&this[9].field1_0x4;
  fVar1 = *(float *)(iVar4 + param_2 * 4);
  fVar2 = *(float *)(iVar4 + param_3 * 4);
  fVar5 = (fVar2 - fVar1) * 0.25;
  fVar3 = *(float *)(iVar4 + param_3 * 4);
  *(float *)(iVar4 + (int)this[4].vftablePtr * 4) =
       (fVar2 - ((*(float *)(iVar4 + param_4 * 4) - fVar1) * 0.25 * param_6 +
                (1.0 - param_6) * fVar5)) * param_10 +
       ((fVar3 - *(float *)(iVar4 + param_1 * 4)) * 0.25 * param_5 + (1.0 - param_5) * fVar5 + fVar1
       ) * param_9 + fVar1 * param_8 + fVar3 * param_11;
  return;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction7 @ 00669d30  kind=game  attributed-by=rtti  size=2662 */

void __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction7
          (ContinuousAttribute<plasma::Matrix<float>_> *this,int param_1,int param_2,int param_3,
          int param_4,float param_5,float param_6,undefined4 param_7,float param_8,float param_9,
          float param_10,float param_11)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float fVar8;
  float local_188 [8];
  float afStack_168 [8];
  float local_148 [8];
  float afStack_128 [8];
  float local_108 [8];
  float afStack_e8 [8];
  float local_c8 [8];
  float afStack_a8 [8];
  float local_88 [8];
  float afStack_68 [8];
  float local_48 [16];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  puVar1 = this->field2_0x4c;
  pfVar6 = (float *)(puVar1 + param_2 * 0x10);
  pfVar5 = (float *)(puVar1 + param_3 * 0x10);
  pfVar4 = pfVar5;
  pfVar7 = afStack_e8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667c90(this->field2_0x4c + param_1 * 0x10);
  pfVar4 = afStack_e8 + 8;
  pfVar7 = afStack_128 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_128[iVar2] = afStack_128[iVar3 + 8] * 0.25;
    afStack_128[iVar3 + 9] = afStack_128[iVar3 + 9] * 0.25;
    afStack_128[iVar3 + 10] = afStack_128[iVar3 + 10] * 0.25;
    afStack_128[iVar3 + 0xb] = afStack_128[iVar3 + 0xb] * 0.25;
    afStack_128[iVar3 + 0xc] = afStack_128[iVar3 + 0xc] * 0.25;
    afStack_128[iVar3 + 0xd] = afStack_128[iVar3 + 0xd] * 0.25;
    afStack_128[iVar3 + 0xe] = afStack_128[iVar3 + 0xe] * 0.25;
    afStack_128[iVar3 + 0xf] = afStack_128[iVar3 + 0xf] * 0.25;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = (float *)(puVar1 + param_4 * 0x10);
  pfVar7 = afStack_68 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667c90(pfVar6);
  pfVar4 = afStack_68 + 8;
  pfVar7 = afStack_e8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_e8[iVar2] = afStack_e8[iVar3 + 8] * 0.25;
    afStack_e8[iVar3 + 9] = afStack_e8[iVar3 + 9] * 0.25;
    afStack_e8[iVar3 + 10] = afStack_e8[iVar3 + 10] * 0.25;
    afStack_e8[iVar3 + 0xb] = afStack_e8[iVar3 + 0xb] * 0.25;
    afStack_e8[iVar3 + 0xc] = afStack_e8[iVar3 + 0xc] * 0.25;
    afStack_e8[iVar3 + 0xd] = afStack_e8[iVar3 + 0xd] * 0.25;
    afStack_e8[iVar3 + 0xe] = afStack_e8[iVar3 + 0xe] * 0.25;
    afStack_e8[iVar3 + 0xf] = afStack_e8[iVar3 + 0xf] * 0.25;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = pfVar5;
  pfVar7 = afStack_68 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667c90(pfVar6);
  pfVar4 = afStack_68 + 8;
  pfVar7 = afStack_168 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_168[iVar2] = afStack_168[iVar3 + 8] * 0.25;
    afStack_168[iVar3 + 9] = afStack_168[iVar3 + 9] * 0.25;
    afStack_168[iVar3 + 10] = afStack_168[iVar3 + 10] * 0.25;
    afStack_168[iVar3 + 0xb] = afStack_168[iVar3 + 0xb] * 0.25;
    afStack_168[iVar3 + 0xc] = afStack_168[iVar3 + 0xc] * 0.25;
    afStack_168[iVar3 + 0xd] = afStack_168[iVar3 + 0xd] * 0.25;
    afStack_168[iVar3 + 0xe] = afStack_168[iVar3 + 0xe] * 0.25;
    afStack_168[iVar3 + 0xf] = afStack_168[iVar3 + 0xf] * 0.25;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = afStack_168 + 8;
  pfVar7 = afStack_68 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  fVar8 = 1.0 - param_5;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_68[iVar2] = fVar8 * afStack_68[iVar3 + 8];
    afStack_68[iVar3 + 9] = fVar8 * afStack_68[iVar3 + 9];
    afStack_68[iVar3 + 10] = fVar8 * afStack_68[iVar3 + 10];
    afStack_68[iVar3 + 0xb] = fVar8 * afStack_68[iVar3 + 0xb];
    afStack_68[iVar3 + 0xc] = fVar8 * afStack_68[iVar3 + 0xc];
    afStack_68[iVar3 + 0xd] = afStack_68[iVar3 + 0xd] * fVar8;
    afStack_68[iVar3 + 0xe] = fVar8 * afStack_68[iVar3 + 0xe];
    afStack_68[iVar3 + 0xf] = fVar8 * afStack_68[iVar3 + 0xf];
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = afStack_128 + 8;
  pfVar7 = afStack_a8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_a8[iVar2] = afStack_a8[iVar3 + 8] * param_5;
    afStack_a8[iVar3 + 9] = afStack_a8[iVar3 + 9] * param_5;
    afStack_a8[iVar3 + 10] = afStack_a8[iVar3 + 10] * param_5;
    afStack_a8[iVar3 + 0xb] = afStack_a8[iVar3 + 0xb] * param_5;
    afStack_a8[iVar3 + 0xc] = param_5 * afStack_a8[iVar3 + 0xc];
    afStack_a8[iVar3 + 0xd] = afStack_a8[iVar3 + 0xd] * param_5;
    afStack_a8[iVar3 + 0xe] = afStack_a8[iVar3 + 0xe] * param_5;
    afStack_a8[iVar3 + 0xf] = afStack_a8[iVar3 + 0xf] * param_5;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = afStack_a8 + 8;
  pfVar7 = afStack_128 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667be0(afStack_68 + 8);
  pfVar4 = pfVar6;
  pfVar7 = local_188;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667be0(afStack_128 + 8);
  pfVar4 = afStack_168 + 8;
  pfVar7 = afStack_a8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  fVar8 = 1.0 - param_6;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_a8[iVar2] = fVar8 * afStack_a8[iVar3 + 8];
    afStack_a8[iVar3 + 9] = fVar8 * afStack_a8[iVar3 + 9];
    afStack_a8[iVar3 + 10] = fVar8 * afStack_a8[iVar3 + 10];
    afStack_a8[iVar3 + 0xb] = fVar8 * afStack_a8[iVar3 + 0xb];
    afStack_a8[iVar3 + 0xc] = fVar8 * afStack_a8[iVar3 + 0xc];
    afStack_a8[iVar3 + 0xd] = afStack_a8[iVar3 + 0xd] * fVar8;
    afStack_a8[iVar3 + 0xe] = fVar8 * afStack_a8[iVar3 + 0xe];
    afStack_a8[iVar3 + 0xf] = fVar8 * afStack_a8[iVar3 + 0xf];
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = afStack_e8 + 8;
  pfVar7 = afStack_68 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_68[iVar2] = afStack_68[iVar3 + 8] * param_6;
    afStack_68[iVar3 + 9] = param_6 * afStack_68[iVar3 + 9];
    afStack_68[iVar3 + 10] = afStack_68[iVar3 + 10] * param_6;
    afStack_68[iVar3 + 0xb] = afStack_68[iVar3 + 0xb] * param_6;
    afStack_68[iVar3 + 0xc] = param_6 * afStack_68[iVar3 + 0xc];
    afStack_68[iVar3 + 0xd] = afStack_68[iVar3 + 0xd] * param_6;
    afStack_68[iVar3 + 0xe] = afStack_68[iVar3 + 0xe] * param_6;
    afStack_68[iVar3 + 0xf] = afStack_68[iVar3 + 0xf] * param_6;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar4 = afStack_68 + 8;
  pfVar7 = afStack_e8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667be0(afStack_a8 + 8);
  pfVar4 = pfVar5;
  pfVar7 = afStack_68 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar7 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar7 = pfVar7 + 1;
  }
  FUN_00667c90(afStack_e8 + 8);
  pfVar4 = afStack_128 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_128[iVar2] = afStack_128[iVar3 + 8] * param_11;
    afStack_128[iVar3 + 9] = param_11 * afStack_128[iVar3 + 9];
    afStack_128[iVar3 + 10] = param_11 * afStack_128[iVar3 + 10];
    afStack_128[iVar3 + 0xb] = afStack_128[iVar3 + 0xb] * param_11;
    afStack_128[iVar3 + 0xc] = afStack_128[iVar3 + 0xc] * param_11;
    afStack_128[iVar3 + 0xd] = afStack_128[iVar3 + 0xd] * param_11;
    afStack_128[iVar3 + 0xe] = param_11 * afStack_128[iVar3 + 0xe];
    afStack_128[iVar3 + 0xf] = afStack_128[iVar3 + 0xf] * param_11;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar5 = afStack_68 + 8;
  pfVar4 = afStack_a8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_a8[iVar2] = afStack_a8[iVar3 + 8] * param_10;
    afStack_a8[iVar3 + 9] = param_10 * afStack_a8[iVar3 + 9];
    afStack_a8[iVar3 + 10] = afStack_a8[iVar3 + 10] * param_10;
    afStack_a8[iVar3 + 0xb] = afStack_a8[iVar3 + 0xb] * param_10;
    afStack_a8[iVar3 + 0xc] = param_10 * afStack_a8[iVar3 + 0xc];
    afStack_a8[iVar3 + 0xd] = afStack_a8[iVar3 + 0xd] * param_10;
    afStack_a8[iVar3 + 0xe] = afStack_a8[iVar3 + 0xe] * param_10;
    afStack_a8[iVar3 + 0xf] = afStack_a8[iVar3 + 0xf] * param_10;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar5 = local_188;
  pfVar4 = afStack_68 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar4 = *pfVar5;
    pfVar5 = pfVar5 + 1;
    pfVar4 = pfVar4 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_68[iVar2] = afStack_68[iVar3 + 8] * param_9;
    afStack_68[iVar3 + 9] = param_9 * afStack_68[iVar3 + 9];
    afStack_68[iVar3 + 10] = param_9 * afStack_68[iVar3 + 10];
    afStack_68[iVar3 + 0xb] = afStack_68[iVar3 + 0xb] * param_9;
    afStack_68[iVar3 + 0xc] = afStack_68[iVar3 + 0xc] * param_9;
    afStack_68[iVar3 + 0xd] = afStack_68[iVar3 + 0xd] * param_9;
    afStack_68[iVar3 + 0xe] = param_9 * afStack_68[iVar3 + 0xe];
    afStack_68[iVar3 + 0xf] = afStack_68[iVar3 + 0xf] * param_9;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar5 = afStack_e8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 8;
    afStack_e8[iVar2] = afStack_e8[iVar3 + 8] * param_8;
    afStack_e8[iVar3 + 9] = param_8 * afStack_e8[iVar3 + 9];
    afStack_e8[iVar3 + 10] = afStack_e8[iVar3 + 10] * param_8;
    afStack_e8[iVar3 + 0xb] = afStack_e8[iVar3 + 0xb] * param_8;
    afStack_e8[iVar3 + 0xc] = param_8 * afStack_e8[iVar3 + 0xc];
    afStack_e8[iVar3 + 0xd] = afStack_e8[iVar3 + 0xd] * param_8;
    afStack_e8[iVar3 + 0xe] = afStack_e8[iVar3 + 0xe] * param_8;
    afStack_e8[iVar3 + 0xf] = afStack_e8[iVar3 + 0xf] * param_8;
    iVar3 = iVar2;
  } while (iVar2 < 0x10);
  pfVar6 = afStack_e8 + 8;
  pfVar5 = local_188;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_00667be0(afStack_68 + 8);
  pfVar6 = local_188;
  pfVar5 = afStack_e8 + 8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_00667be0(afStack_a8 + 8);
  pfVar6 = afStack_e8 + 8;
  pfVar5 = local_188;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
  }
  FUN_00667be0(afStack_128 + 8);
  pfVar6 = local_188;
  pfVar5 = (float *)(this->field2_0x4c + (this->Attribute_data).offset_0x1c * 0x10);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar6;
    pfVar6 = pfVar6 + 1;
    pfVar5 = pfVar5 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction7 @ 0066a7c0  kind=game  attributed-by=rtti  size=396 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction7
          (ContinuousAttribute<plasma::Vector<2,float>_> *this,int param_1,int param_2,int param_3,
          int param_4,float param_5,float param_6,undefined4 param_7,float param_8,float param_9,
          float param_10,float param_11)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int iVar9;
  int iVar10;
  float fVar11;
  float fVar12;
  
  iVar9 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0;
  fVar1 = *(float *)(iVar9 + 4 + param_3 * 8);
  fVar2 = *(float *)(iVar9 + param_3 * 8);
  fVar3 = *(float *)(iVar9 + param_2 * 8);
  fVar4 = *(float *)(iVar9 + 4 + param_2 * 8);
  fVar5 = *(float *)(iVar9 + 4 + param_4 * 8);
  fVar6 = *(float *)(iVar9 + 4 + param_1 * 8);
  fVar11 = (fVar2 - fVar3) * 0.25;
  fVar12 = (fVar1 - fVar4) * 0.25;
  fVar7 = *(float *)(iVar9 + 4 + param_3 * 8);
  fVar8 = *(float *)(iVar9 + param_3 * 8);
  iVar10 = (this->Attribute_data).offset_0x1c;
  *(float *)(iVar9 + iVar10 * 8) =
       fVar3 * param_8 +
       (fVar3 + (fVar2 - *(float *)(iVar9 + param_1 * 8)) * 0.25 * param_5 +
                fVar11 * (1.0 - param_5)) * param_9 +
       (fVar8 - ((*(float *)(iVar9 + param_4 * 8) - fVar3) * 0.25 * param_6 +
                (1.0 - param_6) * fVar11)) * param_10 + fVar8 * param_11;
  *(float *)(iVar9 + 4 + iVar10 * 8) =
       fVar4 * param_8 +
       (fVar4 + (fVar1 - fVar6) * 0.25 * param_5 + fVar12 * (1.0 - param_5)) * param_9 +
       (fVar7 - ((fVar5 - fVar4) * 0.25 * param_6 + (1.0 - param_6) * fVar12)) * param_10 +
       fVar7 * param_11;
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction7 @ 0066a950  kind=game  attributed-by=rtti  size=714 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction7
          (ContinuousAttribute<plasma::Vector<3,float>_> *this,int param_1,int param_2,int param_3,
          int param_4,float param_5,float param_6,undefined4 param_7,float param_8,float param_9,
          float param_10,float param_11)

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
  float fVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  ContinuousAttribute<plasma::Vector<3,float>_>_vftable *pCVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  
  iVar14 = *(int *)&this[9].field1_0x4;
  fVar1 = *(float *)(iVar14 + param_3 * 0xc);
  fVar2 = *(float *)(iVar14 + param_2 * 0xc);
  fVar3 = *(float *)(iVar14 + 8 + param_3 * 0xc);
  fVar4 = *(float *)(iVar14 + 8 + param_1 * 0xc);
  fVar5 = *(float *)(iVar14 + 4 + param_3 * 0xc);
  fVar6 = *(float *)(iVar14 + 4 + param_1 * 0xc);
  fVar7 = *(float *)(iVar14 + 8 + param_2 * 0xc);
  fVar8 = *(float *)(iVar14 + 4 + param_2 * 0xc);
  fVar9 = *(float *)(iVar14 + 8 + param_4 * 0xc);
  fVar10 = *(float *)(iVar14 + 4 + param_4 * 0xc);
  fVar18 = (fVar1 - fVar2) * 0.25;
  fVar19 = (*(float *)(iVar14 + 4 + param_3 * 0xc) - fVar8) * 0.25;
  fVar20 = (*(float *)(iVar14 + 8 + param_3 * 0xc) - fVar7) * 0.25;
  fVar16 = 1.0 - param_5;
  pCVar15 = this[4].vftablePtr;
  fVar17 = 1.0 - param_6;
  fVar11 = *(float *)(iVar14 + 8 + param_3 * 0xc);
  fVar12 = *(float *)(iVar14 + param_3 * 0xc);
  fVar13 = *(float *)(iVar14 + 4 + param_3 * 0xc);
  *(float *)(iVar14 + (int)pCVar15 * 0xc) =
       fVar2 * param_8 +
       (fVar2 + (fVar1 - *(float *)(iVar14 + param_1 * 0xc)) * 0.25 * param_5 + fVar16 * fVar18) *
       param_9 + (fVar12 - ((*(float *)(iVar14 + param_4 * 0xc) - fVar2) * 0.25 * param_6 +
                           fVar18 * fVar17)) * param_10 + fVar12 * param_11;
  *(float *)(iVar14 + 8 + (int)pCVar15 * 0xc) =
       fVar7 * param_8 + (fVar7 + (fVar3 - fVar4) * 0.25 * param_5 + fVar16 * fVar20) * param_9 +
       (fVar11 - ((fVar9 - fVar7) * 0.25 * param_6 + fVar20 * fVar17)) * param_10 +
       fVar11 * param_11;
  *(float *)(iVar14 + 4 + (int)pCVar15 * 0xc) =
       fVar8 * param_8 + (fVar8 + (fVar5 - fVar6) * 0.25 * param_5 + fVar16 * fVar19) * param_9 +
       (fVar13 - ((fVar10 - fVar8) * 0.25 * param_6 + fVar19 * fVar17)) * param_10 +
       fVar13 * param_11;
  return;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction2 @ 0066ad90  kind=game  attributed-by=rtti  size=10 */

int __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction2
          (ContinuousAttribute<plasma::Matrix<float>_> *this)

{
  return (int)this[1].vftablePtr - (int)this->field2_0x4c >> 6;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction2 @ 0066ada0  kind=game  attributed-by=rtti  size=10 */

int __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction2
          (ContinuousAttribute<plasma::Vector<2,float>_> *this)

{
  return (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4 -
         (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0 >> 3;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction2 @ 0066adb0  kind=game  attributed-by=rtti  size=23 */

int __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction2
          (ContinuousAttribute<plasma::Vector<3,float>_> *this)

{
  return ((int)this[10].vftablePtr - *(int *)&this[9].field1_0x4) / 0xc;
}


/* plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction6 @ 0066b050  kind=game  attributed-by=rtti  size=53 */

void __thiscall
plasma::ContinuousAttribute<plasma::Matrix<float>_>::vfunction6
          (ContinuousAttribute<plasma::Matrix<float>_> *this,int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if ((-1 < param_1) &&
     (puVar3 = this->field2_0x4c, param_1 < (int)this[1].vftablePtr - (int)puVar3 >> 6)) {
    puVar2 = puVar3 + (this->Attribute_data).offset_0x1c * 0x10;
    puVar3 = puVar3 + param_1 * 0x10;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction6 @ 0066b090  kind=game  attributed-by=rtti  size=48 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<2,float>_>::vfunction6
          (ContinuousAttribute<plasma::Vector<2,float>_> *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((-1 < param_1) &&
     (iVar1 = (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousAttribute<plasma::Vector<2,float>_>_data).offset_0x4 - iVar1 >> 3))
  {
    iVar2 = (this->Attribute_data).offset_0x1c;
    *(undefined4 *)(iVar1 + param_1 * 8) = *(undefined4 *)(iVar1 + iVar2 * 8);
    *(undefined4 *)(iVar1 + 4 + param_1 * 8) = *(undefined4 *)(iVar1 + 4 + iVar2 * 8);
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction6 @ 0066b0c0  kind=game  attributed-by=rtti  size=77 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::vfunction6
          (ContinuousAttribute<plasma::Vector<3,float>_> *this,int param_1)

{
  int iVar1;
  ContinuousAttribute<plasma::Vector<3,float>_>_vftable *pCVar2;
  
  if ((-1 < param_1) &&
     (iVar1 = *(int *)&this[9].field1_0x4, param_1 < ((int)this[10].vftablePtr - iVar1) / 0xc)) {
    pCVar2 = this[4].vftablePtr;
    *(undefined4 *)(iVar1 + param_1 * 0xc) = *(undefined4 *)(iVar1 + (int)pCVar2 * 0xc);
    *(undefined4 *)(iVar1 + 4 + param_1 * 0xc) = *(undefined4 *)(iVar1 + 4 + (int)pCVar2 * 0xc);
    *(undefined4 *)(iVar1 + 8 + param_1 * 0xc) = *(undefined4 *)(iVar1 + 8 + (int)pCVar2 * 0xc);
  }
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::ContinuousAttribute<plasma::Vector<3,float>_> @ 00678080  kind=game  attributed-by=rtti  size=731 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::ContinuousAttribute<plasma::Vector<3,float>_>
          (ContinuousAttribute<plasma::Vector<3,float>_> *this,int param_1,undefined4 param_2)

{
  Attribute *this_00;
  ContinuousAttribute<plasma::Vector<3,float>_>_vftable *pCVar1;
  undefined4 *puVar2;
  undefined1 local_ac [64];
  ContinuousAttribute<plasma::Vector<3,float>_> *local_6c;
  int local_68;
  void *local_64 [4];
  undefined4 local_54;
  uint local_50;
  void *local_4c [3];
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  void *local_34 [4];
  undefined4 local_24;
  uint local_20;
  undefined4 local_1c;
  Attribute *local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f850e;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_68 = param_1;
  local_6c = this;
                    /* inlined constructor: plasma::Transformation::Transformation */
  Keyable::Keyable((Keyable *)this,param_1,param_2);
  local_8 = 0;
  this->vftablePtr =
       (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)&Transformation::vftable;
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (void *)((uint)local_4c[0] & 0xffffff00);
  FUN_0040c280("translation",0xb);
  local_8._0_1_ = 1;
  local_1c = 0;
  local_18 = (Attribute *)0x0;
  ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
            ((ContinuousAttribute<plasma::Vector<2,float>_> *)(this + 9),local_4c,&local_1c);
  local_8._0_1_ = 3;
  if (0xf < local_38) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_4c[0]);
  }
  local_38 = 0xf;
  local_3c = 0;
  local_4c[0] = (void *)((uint)local_4c[0] & 0xffffff00);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  FUN_0040c280("deformation",0xb);
  local_8._0_1_ = 4;
  ContinuousAttribute<plasma::Matrix<float>_>::ContinuousAttribute<plasma::Matrix<float>_>
            ((ContinuousAttribute<plasma::Matrix<float>_> *)(this + 0x14),local_34,local_ac);
  local_8._0_1_ = 6;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (void *)((uint)local_64[0] & 0xffffff00);
  FUN_0040c280("rotation",8);
  this_00 = (Attribute *)(this + 0x1f);
  local_8._0_1_ = 7;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_18 = this_00;
  Attribute::Attribute(this_00,local_64);
  this_00->vftablePtr = (Attribute_vftable *)&vftable;
  *(undefined4 *)&this[0x28].field1_0x4 = 0;
  this[0x29].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x29].field1_0x4 = 0;
  local_8._0_1_ = 9;
  FUN_0066b180(2,&local_40);
  local_8._0_1_ = 0xb;
  if (0xf < local_50) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_64[0]);
  }
  local_50 = 0xf;
  local_54 = 0;
  local_64[0] = (void *)((uint)local_64[0] & 0xffffff00);
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  FUN_0040c280("pivot",5);
  local_8._0_1_ = 0xc;
  local_1c = 0;
  local_18 = (Attribute *)0x0;
  ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
            ((ContinuousAttribute<plasma::Vector<2,float>_> *)(this + 0x2a),local_34,&local_1c);
  local_8._0_1_ = 0xe;
  if (0xf < local_20) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_34[0]);
  }
  local_20 = 0xf;
  local_24 = 0;
  local_34[0] = (void *)((uint)local_34[0] & 0xffffff00);
  this[0x35].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x35].field1_0x4 = 0;
  pCVar1 = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)FUN_00678520();
  this[0x35].vftablePtr = pCVar1;
  local_8 = CONCAT31(local_8._1_3_,0xf);
  this[0x46].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  puVar2 = (undefined4 *)FUN_0064ecc0(&local_18,this);
  this[0x46].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)*puVar2;
  FUN_00664ba0(this + 9);
  FUN_00664ba0(this + 0x14);
  FUN_00664ba0(this_00);
  FUN_00664ba0(this + 0x2a);
  FUN_00423e70();
  FUN_00423e70();
  FUN_00423e70();
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousAttribute<float>::ContinuousAttribute<float> @ 00678ef0  kind=game  attributed-by=rtti  size=923 */

void __thiscall
plasma::ContinuousAttribute<float>::ContinuousAttribute<float>
          (ContinuousAttribute<float> *this,int param_1,undefined4 param_2)

{
  Attribute *pAVar1;
  Attribute *this_00;
  undefined4 uVar2;
  undefined4 *puVar3;
  Attribute *local_64;
  undefined4 local_60;
  void *local_5c [2];
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
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
  puStack_c = &LAB_006f864a;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined constructor: plasma::Display::Display */
  Keyable::Keyable((Keyable *)this,param_1,param_2);
  local_8 = 0;
  this->vftablePtr = (ContinuousAttribute<float>_vftable *)&Display::vftable;
  local_60 = 1;
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_0040c280("visibility",10);
  pAVar1 = (Attribute *)(this + 9);
  local_8._0_1_ = 1;
  local_64 = pAVar1;
                    /* inlined constructor: plasma::DiscreteAttribute<int>::DiscreteAttribute<int>
                        */
  Attribute::Attribute(pAVar1,local_5c);
  pAVar1->vftablePtr = (Attribute_vftable *)&DiscreteAttribute<int>::vftable;
  *(undefined4 *)&this[0x12].field1_0x4 = 0;
  this[0x13].vftablePtr = (ContinuousAttribute<float>_vftable *)0x0;
  *(undefined4 *)&this[0x13].field1_0x4 = 0;
  local_8._0_1_ = 3;
  FUN_004871e0(2,&local_60);
  local_8._0_1_ = 5;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_60 = 0;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("clipping",8);
  pAVar1 = (Attribute *)(this + 0x14);
  local_8._0_1_ = 6;
  local_64 = pAVar1;
  Attribute::Attribute(pAVar1,local_44);
  pAVar1->vftablePtr = (Attribute_vftable *)&DiscreteAttribute<int>::vftable;
  *(undefined4 *)&this[0x1d].field1_0x4 = 0;
  this[0x1e].vftablePtr = (ContinuousAttribute<float>_vftable *)0x0;
  *(undefined4 *)&this[0x1e].field1_0x4 = 0;
  local_8._0_1_ = 8;
  FUN_004871e0(2,&local_60);
  local_8._0_1_ = 10;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280(&DAT_0071f3a4,4);
  local_8._0_1_ = 0xb;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_4c = 0x3f800000;
  local_48 = 0x3f800000;
  ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_>
            ((ContinuousAttribute<plasma::Vector<4,float>_> *)(this + 0x1f),local_2c,&local_54);
  local_8._0_1_ = 0xd;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("stroke",6);
  local_8._0_1_ = 0xe;
  local_54 = 0x3f800000;
  local_50 = 0x3f800000;
  local_4c = 0x3f800000;
  local_48 = 0x3f800000;
  ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_>
            ((ContinuousAttribute<plasma::Vector<4,float>_> *)(this + 0x2a),local_44,&local_54);
  local_8._0_1_ = 0x10;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_60 = 0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("blurRadius",10);
  this_00 = (Attribute *)(this + 0x35);
  local_8._0_1_ = 0x11;
  local_64 = this_00;
  Attribute::Attribute(this_00,local_2c);
  this_00->vftablePtr = (Attribute_vftable *)&vftable;
  *(undefined4 *)&this[0x3e].field1_0x4 = 0;
  this[0x3f].vftablePtr = (ContinuousAttribute<float>_vftable *)0x0;
  *(undefined4 *)&this[0x3f].field1_0x4 = 0;
  local_8._0_1_ = 0x13;
  FUN_0066b110(2,&local_60);
  local_8._0_1_ = 0x15;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  this[0x40].vftablePtr = (ContinuousAttribute<float>_vftable *)0x0;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  *(undefined4 *)&this[0x40].field1_0x4 = 0;
  this[0x41].vftablePtr = (ContinuousAttribute<float>_vftable *)0x0;
  uVar2 = FUN_00678520();
  *(undefined4 *)&this[0x40].field1_0x4 = uVar2;
  local_8 = CONCAT31(local_8._1_3_,0x16);
  *(undefined4 *)&this[0x41].field1_0x4 = 0;
  puVar3 = (undefined4 *)FUN_0064e7d0(&local_64,this);
  *(undefined4 *)&this[0x41].field1_0x4 = *puVar3;
  FUN_00664ba0(this + 9);
  FUN_00664ba0(pAVar1);
  FUN_00664ba0(this + 0x1f);
  FUN_00664ba0(this + 0x2a);
  FUN_00664ba0(this + 0x35);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousAttribute<plasma::Vector<3,float>_>::ContinuousAttribute<plasma::Vector<3,float>_> @ 00679e80  kind=game  attributed-by=rtti  size=1492 */

void __thiscall
plasma::ContinuousAttribute<plasma::Vector<3,float>_>::ContinuousAttribute<plasma::Vector<3,float>_>
          (ContinuousAttribute<plasma::Vector<3,float>_> *this,int *param_1,undefined4 param_2)

{
  undefined2 *this_00;
  undefined4 uVar1;
  undefined1 local_b0 [64];
  ContinuousAttribute<plasma::Vector<3,float>_> *local_70;
  int *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 *local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [3];
  undefined1 local_38 [4];
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
  puStack_c = &LAB_006f8846;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_6c = param_1;
  local_70 = this;
                    /* inlined constructor: plasma::CurveShape::CurveShape */
  Shape::Shape((Shape *)this,(int)param_1,param_2);
  local_8 = 0;
  this->vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)&CurveShape::vftable;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("vertexPositions",0xf);
  local_68 = 0;
  local_64 = 0;
  local_60 = (undefined2 *)0x0;
  local_8._0_1_ = 2;
  ContinuousArrayAttribute<plasma::Vector<2,float>_>::
  ContinuousArrayAttribute<plasma::Vector<2,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<2,float>_> *)&this[0xb].field1_0x4,local_44,
             &local_68);
  local_8._0_1_ = 5;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("vertexWidths",0xc);
  local_68 = 0;
  local_64 = 0;
  local_60 = (undefined2 *)0x0;
  local_8._0_1_ = 7;
  ContinuousArrayAttribute<float>::ContinuousArrayAttribute<float>
            ((ContinuousArrayAttribute<float> *)&this[0x16].field1_0x4,local_2c,&local_68);
  local_8._0_1_ = 10;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("vertexTexCoords",0xf);
  local_68 = 0;
  local_64 = 0;
  local_60 = (undefined2 *)0x0;
  local_8._0_1_ = 0xc;
  ContinuousArrayAttribute<plasma::Vector<2,float>_>::
  ContinuousArrayAttribute<plasma::Vector<2,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<2,float>_> *)&this[0x21].field1_0x4,local_44,
             &local_68);
  local_8._0_1_ = 0xf;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("vertexColors",0xc);
  local_68 = 0;
  local_64 = 0;
  local_60 = (undefined2 *)0x0;
  local_8._0_1_ = 0x11;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>::
  ContinuousArrayAttribute<plasma::Vector<4,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<4,float>_> *)&this[0x2c].field1_0x4,local_2c,
             &local_68);
  local_8._0_1_ = 0x14;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("textureTranslation",0x12);
  local_8._0_1_ = 0x15;
  ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
            ((ContinuousAttribute<plasma::Vector<2,float>_> *)&this[0x37].field1_0x4,local_44,
             &local_64);
  local_8._0_1_ = 0x17;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("texturePivot",0xc);
  local_8._0_1_ = 0x18;
  ContinuousAttribute<plasma::Vector<2,float>_>::ContinuousAttribute<plasma::Vector<2,float>_>
            ((ContinuousAttribute<plasma::Vector<2,float>_> *)&this[0x42].field1_0x4,local_2c,
             &local_64);
  local_8._0_1_ = 0x1a;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_0040c280("textureRotation",0xf);
  this_00 = &this[0x4d].field1_0x4;
  local_8._0_1_ = 0x1b;
  local_60 = this_00;
  Attribute::Attribute((Attribute *)this_00,local_5c);
  *(ContinuousAttribute<plasma::Vector<3,float>_>_vftable **)this_00 = &vftable;
  this[0x57].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x57].field1_0x4 = 0;
  this[0x58].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  local_8._0_1_ = 0x1d;
  FUN_0066b180(2,local_38);
  local_8._0_1_ = 0x1f;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("textureDeformation",0x12);
  local_8._0_1_ = 0x20;
  ContinuousAttribute<plasma::Matrix<float>_>::ContinuousAttribute<plasma::Matrix<float>_>
            ((ContinuousAttribute<plasma::Matrix<float>_> *)&this[0x58].field1_0x4,local_2c,local_b0
            );
  local_8._0_1_ = 0x22;
  if (0xf < local_18) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_2c[0]);
  }
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_0040c280("textureWeights",0xe);
  local_68 = 0;
  local_64 = 0;
  local_60 = (undefined2 *)0x0;
  local_8._0_1_ = 0x24;
  ContinuousArrayAttribute<float>::ContinuousArrayAttribute<float>
            ((ContinuousArrayAttribute<float> *)&this[99].field1_0x4,local_5c,&local_68);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  *(undefined4 *)&this[0x6e].field1_0x4 = 0;
  this[0x6f].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x6f].field1_0x4 = 0;
  *(undefined1 *)&this[0x70].vftablePtr = 0;
  *(undefined4 *)&this[0x70].field1_0x4 = 1;
  this[0x71].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x4;
  *(undefined4 *)&this[0x71].field1_0x4 = 0x14;
  this[0x72].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x72].field1_0x4 = 0;
  this[0x73].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x75].field1_0x4 = 0;
  this[0x76].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x76].field1_0x4 = 0;
  this[0x77].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x77].field1_0x4 = 0;
  this[0x78].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x78].field1_0x4 = 0;
  this[0x79].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x79].field1_0x4 = 0;
  this[0x7a].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x7a].field1_0x4 = 0;
  this[0x7b].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x7b].field1_0x4 = 0;
  this[0x7c].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x7c].field1_0x4 = 0;
  this[0x7d].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  *(undefined4 *)&this[0x7d].field1_0x4 = 0;
  this[0x7e].vftablePtr = (ContinuousAttribute<plasma::Vector<3,float>_>_vftable *)0x0;
  local_8 = CONCAT31(local_8._1_3_,0x2f);
  FUN_00664ba0(&this[0xb].field1_0x4);
  FUN_00664ba0(&this[0x21].field1_0x4);
  FUN_00664ba0(&this[0x2c].field1_0x4);
  FUN_00664ba0(&this[0x16].field1_0x4);
  FUN_00664ba0(&this[0x37].field1_0x4);
  FUN_00664ba0(&this[0x42].field1_0x4);
  FUN_00664ba0(this_00);
  FUN_00664ba0(&this[0x58].field1_0x4);
  FUN_00664ba0(&this[99].field1_0x4);
  FUN_00423e70();
  uVar1 = (**(code **)(*local_6c + 0x30))();
  *(undefined4 *)&this[0x7e].field1_0x4 = uVar1;
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


