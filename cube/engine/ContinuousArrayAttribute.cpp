// ContinuousArrayAttribute (engine) -- cube. 23 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ContinuousArrayAttribute.h"

/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::~ContinuousArrayAttribute<plasma::Vector<4,float>_> @ 0063c5e0  kind=game  attributed-by=rtti  size=97 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::
~ContinuousArrayAttribute<plasma::Vector<4,float>_>
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  this->vftablePtr = &vftable;
  if (0 < (int)((this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
                (int)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 &
               0xfffffffcU)) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)
               (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0[iVar2];
      if (puVar1 != (undefined4 *)0x0) {
        if ((void *)*puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar1);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
                     (int)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0
                     >> 2);
  }
  puVar1 = (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0;
  if (puVar1 == (undefined4 *)0x0) {
    Attribute::~Attribute((Attribute *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::deleting_destructor @ 0063d7f0  kind=game  attributed-by=rtti  size=30 */

ContinuousArrayAttribute<plasma::Vector<4,float>_> * __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::deleting_destructor
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this,byte param_1)

{
  ~ContinuousArrayAttribute<plasma::Vector<4,float>_>(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction3 @ 0063df60  kind=game  attributed-by=rtti  size=178 */

int __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction3
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this)

{
  ContinuousArrayAttribute<plasma::Vector<4,float>_> *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  if ((this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 ==
      (undefined4 *)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4) {
    local_14 = operator_new(0xc);
    if (local_14 == (ContinuousArrayAttribute<plasma::Vector<4,float>_> *)0x0) {
      local_14 = (ContinuousArrayAttribute<plasma::Vector<4,float>_> *)0x0;
    }
    else {
      local_14->vftablePtr = (ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *)0x0;
      (local_14->Attribute_data).offset_0x0 = (void *)0x0;
      (local_14->Attribute_data).offset_0x4 = 0;
    }
  }
  else {
    local_14 = operator_new(0xc);
    local_8 = 0;
    if (local_14 == (ContinuousArrayAttribute<plasma::Vector<4,float>_> *)0x0) {
      local_14 = (ContinuousArrayAttribute<plasma::Vector<4,float>_> *)0x0;
    }
    else {
      local_14 = (ContinuousArrayAttribute<plasma::Vector<4,float>_> *)
                 FUN_0063c160((this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).
                              offset_0x0[(this->Attribute_data).offset_0x1c]);
    }
    local_8 = 0xffffffff;
  }
  FUN_0066add0(&local_14);
  ExceptionList = local_10;
  return ((this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
          (int)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 >> 2) + -1
  ;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction5 @ 00641440  kind=game  attributed-by=rtti  size=101 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction5
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this,int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((-1 < param_1) &&
     (puVar2 = (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
               (int)puVar2 >> 2)) {
    puVar2 = (undefined4 *)puVar2[param_1];
    if (puVar2 != (undefined4 *)0x0) {
      if ((void *)*puVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar2);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar2);
    }
    puVar2 = (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 + param_1;
    memmove(puVar2,puVar2 + 1,
            (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
            (int)(puVar2 + 1) & 0xfffffffc);
    piVar1 = &(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4;
    *piVar1 = *piVar1 + -4;
  }
  return;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction4 @ 00641b30  kind=game  attributed-by=rtti  size=41 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction4
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) &&
     (puVar1 = (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
               (int)puVar1 >> 2)) {
    FUN_0063d400(puVar1[param_1]);
  }
  return;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction7 @ 00641b70  kind=game  attributed-by=rtti  size=2167 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction7
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this,int param_1,int param_2,
          int param_3,int param_4,float param_5,float param_6,undefined4 param_7,float param_8,
          float param_9,float param_10,float param_11)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  undefined8 *puVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  int local_160;
  int local_15c;
  float local_158;
  float fStack_154;
  float local_150;
  float fStack_14c;
  float local_d8;
  float fStack_d4;
  float local_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float local_c0;
  float fStack_bc;
  undefined8 local_a8;
  undefined8 local_a0;
  float local_78;
  float fStack_74;
  float local_70;
  float fStack_6c;
  float local_58;
  float fStack_54;
  float local_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  float local_38;
  float fStack_34;
  float local_30;
  float fStack_2c;
  
  uVar6 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_160 = 0;
  piVar3 = (int *)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0
                  [param_2];
  if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffff0U)) {
    fVar15 = 1.0 - param_5;
    fVar10 = 1.0 - param_6;
    local_15c = 0;
    do {
      puVar4 = (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0;
      pfVar7 = (float *)(*(int *)puVar4[param_1] + local_15c);
      pfVar8 = (float *)(*(int *)puVar4[param_2] + local_15c);
      puVar9 = (undefined8 *)(*(int *)puVar4[param_3] + local_15c);
      local_58 = (float)*puVar9;
      fStack_54 = (float)((ulonglong)*puVar9 >> 0x20);
      local_50 = (float)puVar9[1];
      fStack_4c = (float)((ulonglong)puVar9[1] >> 0x20);
      uVar1 = *(undefined8 *)(*(int *)puVar4[param_4] + local_15c);
      uVar2 = ((undefined8 *)(*(int *)puVar4[param_4] + local_15c))[1];
      local_c8 = (float)uVar1;
      fStack_c4 = (float)((ulonglong)uVar1 >> 0x20);
      local_c0 = (float)uVar2;
      fStack_bc = (float)((ulonglong)uVar2 >> 0x20);
      local_78 = (float)*puVar9;
      fStack_74 = (float)((ulonglong)*puVar9 >> 0x20);
      local_70 = (float)puVar9[1];
      fStack_6c = (float)((ulonglong)puVar9[1] >> 0x20);
      fVar11 = (local_78 - *pfVar8) * 0.25;
      fVar12 = (fStack_74 - pfVar8[1]) * 0.25;
      fVar13 = (local_70 - pfVar8[2]) * 0.25;
      fVar14 = (fStack_6c - pfVar8[3]) * 0.25;
      local_38 = (float)*(undefined8 *)pfVar8;
      fStack_34 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
      local_30 = (float)*(undefined8 *)(pfVar8 + 2);
      fStack_2c = (float)((ulonglong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
      local_d8 = (float)*puVar9;
      fStack_d4 = (float)((ulonglong)*puVar9 >> 0x20);
      local_d0 = (float)puVar9[1];
      fStack_cc = (float)((ulonglong)puVar9[1] >> 0x20);
      local_158 = (float)*puVar9;
      fStack_154 = (float)((ulonglong)*puVar9 >> 0x20);
      local_150 = (float)puVar9[1];
      fStack_14c = (float)((ulonglong)puVar9[1] >> 0x20);
      local_48 = (float)*(undefined8 *)pfVar8;
      fStack_44 = (float)((ulonglong)*(undefined8 *)pfVar8 >> 0x20);
      local_40 = (float)*(undefined8 *)(pfVar8 + 2);
      fStack_3c = (float)((ulonglong)*(undefined8 *)(pfVar8 + 2) >> 0x20);
      iVar5 = *(int *)puVar4[(this->Attribute_data).offset_0x1c];
      local_a8 = CONCAT44(fStack_44 * param_8 +
                          (fStack_34 + (fStack_54 - pfVar7[1]) * 0.25 * param_5 + fVar15 * fVar12) *
                          param_9 + (fStack_d4 -
                                    ((fStack_c4 - pfVar8[1]) * 0.25 * param_6 + fVar10 * fVar12)) *
                                    param_10 + fStack_154 * param_11,
                          local_48 * param_8 +
                          (local_38 + (local_58 - *pfVar7) * 0.25 * param_5 + fVar15 * fVar11) *
                          param_9 + (local_d8 -
                                    ((local_c8 - *pfVar8) * 0.25 * param_6 + fVar10 * fVar11)) *
                                    param_10 + local_158 * param_11);
      local_160 = local_160 + 1;
      local_15c = local_15c + 0x10;
      local_a0 = CONCAT44(fStack_3c * param_8 +
                          (fStack_2c + (fStack_4c - pfVar7[3]) * 0.25 * param_5 + fVar15 * fVar14) *
                          param_9 + (fStack_cc -
                                    ((fStack_bc - pfVar8[3]) * 0.25 * param_6 + fVar10 * fVar14)) *
                                    param_10 + fStack_14c * param_11,
                          local_40 * param_8 +
                          (local_30 + (local_50 - pfVar7[2]) * 0.25 * param_5 + fVar15 * fVar13) *
                          param_9 + (local_d0 -
                                    ((local_c0 - pfVar8[2]) * 0.25 * param_6 + fVar10 * fVar13)) *
                                    param_10 + local_150 * param_11);
      *(undefined8 *)(iVar5 + -0x10 + local_15c) = local_a8;
      *(undefined8 *)(iVar5 + -8 + local_15c) = local_a0;
      piVar3 = (int *)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0
                      [param_2];
    } while (local_160 < piVar3[1] - *piVar3 >> 4);
  }
  __security_check_cookie(uVar6 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction2 @ 00642580  kind=game  attributed-by=rtti  size=10 */

int __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction2
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this)

{
  return (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
         (int)(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 >> 2;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction6 @ 00642870  kind=game  attributed-by=rtti  size=47 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::vfunction6
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) &&
     (puVar1 = (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 -
               (int)puVar1 >> 2)) {
    FUN_0063d400(puVar1[(this->Attribute_data).offset_0x1c]);
  }
  return;
}


/* plasma::ContinuousArrayAttribute<float>::ContinuousArrayAttribute<float> @ 006661b0  kind=game  attributed-by=rtti  size=208 */

ContinuousArrayAttribute<float> * __thiscall
plasma::ContinuousArrayAttribute<float>::ContinuousArrayAttribute<float>
          (ContinuousArrayAttribute<float> *this,undefined4 param_1,undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7779;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->ContinuousArrayAttribute<float>_data).offset_0x0 = (undefined4 *)0x0;
  (this->ContinuousArrayAttribute<float>_data).offset_0x4 = 0;
  (this->ContinuousArrayAttribute<float>_data).offset_0x8 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0040d9d0(2);
  pvVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063c000(param_2);
  }
  local_8._0_1_ = 1;
  *(this->ContinuousArrayAttribute<float>_data).offset_0x0 = uVar2;
  pvVar1 = operator_new(0xc);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063c000(param_2);
  }
  (this->ContinuousArrayAttribute<float>_data).offset_0x0[1] = uVar2;
  ExceptionList = local_10;
  return this;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::ContinuousArrayAttribute<plasma::Vector<2,float>_> @ 00666280  kind=game  attributed-by=rtti  size=208 */

ContinuousArrayAttribute<plasma::Vector<2,float>_> * __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::
ContinuousArrayAttribute<plasma::Vector<2,float>_>
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this,undefined4 param_1,
          undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7779;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0 = (undefined4 *)0x0;
  (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4 = 0;
  (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x8 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0040d9d0(2);
  pvVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063c0b0(param_2);
  }
  local_8._0_1_ = 1;
  *(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0 = uVar2;
  pvVar1 = operator_new(0xc);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063c0b0(param_2);
  }
  (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0[1] = uVar2;
  ExceptionList = local_10;
  return this;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::ContinuousArrayAttribute<plasma::Vector<4,float>_> @ 00666350  kind=game  attributed-by=rtti  size=208 */

ContinuousArrayAttribute<plasma::Vector<4,float>_> * __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<4,float>_>::
ContinuousArrayAttribute<plasma::Vector<4,float>_>
          (ContinuousArrayAttribute<plasma::Vector<4,float>_> *this,undefined4 param_1,
          undefined4 param_2)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7779;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Attribute::Attribute((Attribute *)this,param_1);
  this->vftablePtr = &vftable;
  (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 = (undefined4 *)0x0;
  (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x4 = 0;
  (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x8 = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  FUN_0040d9d0(2);
  pvVar1 = operator_new(0xc);
  local_8._0_1_ = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063c160(param_2);
  }
  local_8._0_1_ = 1;
  *(this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0 = uVar2;
  pvVar1 = operator_new(0xc);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_0063c160(param_2);
  }
  (this->ContinuousArrayAttribute<plasma::Vector<4,float>_>_data).offset_0x0[1] = uVar2;
  ExceptionList = local_10;
  return this;
}


/* plasma::ContinuousArrayAttribute<float>::~ContinuousArrayAttribute<float> @ 00667370  kind=game  attributed-by=rtti  size=97 */

void __thiscall
plasma::ContinuousArrayAttribute<float>::~ContinuousArrayAttribute<float>
          (ContinuousArrayAttribute<float> *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  this->vftablePtr = &vftable;
  if (0 < (int)((this->ContinuousArrayAttribute<float>_data).offset_0x4 -
                (int)(this->ContinuousArrayAttribute<float>_data).offset_0x0 & 0xfffffffcU)) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)(this->ContinuousArrayAttribute<float>_data).offset_0x0[iVar2];
      if (puVar1 != (undefined4 *)0x0) {
        if ((void *)*puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar1);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (this->ContinuousArrayAttribute<float>_data).offset_0x4 -
                     (int)(this->ContinuousArrayAttribute<float>_data).offset_0x0 >> 2);
  }
  puVar1 = (this->ContinuousArrayAttribute<float>_data).offset_0x0;
  if (puVar1 == (undefined4 *)0x0) {
    Attribute::~Attribute((Attribute *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::~ContinuousArrayAttribute<plasma::Vector<2,float>_> @ 00667410  kind=game  attributed-by=rtti  size=97 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::
~ContinuousArrayAttribute<plasma::Vector<2,float>_>
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this)

{
  undefined4 *puVar1;
  int iVar2;
  
  this->vftablePtr = &vftable;
  if (0 < (int)((this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4 -
                (int)(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0 &
               0xfffffffcU)) {
    iVar2 = 0;
    do {
      puVar1 = (undefined4 *)
               (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0[iVar2];
      if (puVar1 != (undefined4 *)0x0) {
        if ((void *)*puVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar1);
        }
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*puVar1);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4 -
                     (int)(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0
                     >> 2);
  }
  puVar1 = (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0;
  if (puVar1 == (undefined4 *)0x0) {
    Attribute::~Attribute((Attribute *)this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar1);
}


/* plasma::ContinuousArrayAttribute<float>::deleting_destructor @ 00667d40  kind=game  attributed-by=rtti  size=30 */

ContinuousArrayAttribute<float> * __thiscall
plasma::ContinuousArrayAttribute<float>::deleting_destructor
          (ContinuousArrayAttribute<float> *this,byte param_1)

{
  ~ContinuousArrayAttribute<float>(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::deleting_destructor @ 00667d70  kind=game  attributed-by=rtti  size=30 */

ContinuousArrayAttribute<plasma::Vector<2,float>_> * __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::deleting_destructor
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this,byte param_1)

{
  ~ContinuousArrayAttribute<plasma::Vector<2,float>_>(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::ContinuousArrayAttribute<float>::vfunction3 @ 00668d20  kind=game  attributed-by=rtti  size=178 */

int __thiscall
plasma::ContinuousArrayAttribute<float>::vfunction3(ContinuousArrayAttribute<float> *this)

{
  ContinuousArrayAttribute<float> *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  if ((this->ContinuousArrayAttribute<float>_data).offset_0x0 ==
      (undefined4 *)(this->ContinuousArrayAttribute<float>_data).offset_0x4) {
    local_14 = operator_new(0xc);
    if (local_14 == (ContinuousArrayAttribute<float> *)0x0) {
      local_14 = (ContinuousArrayAttribute<float> *)0x0;
    }
    else {
      local_14->vftablePtr = (ContinuousArrayAttribute<float>_vftable *)0x0;
      (local_14->Attribute_data).offset_0x0 = (void *)0x0;
      (local_14->Attribute_data).offset_0x4 = 0;
    }
  }
  else {
    local_14 = operator_new(0xc);
    local_8 = 0;
    if (local_14 == (ContinuousArrayAttribute<float> *)0x0) {
      local_14 = (ContinuousArrayAttribute<float> *)0x0;
    }
    else {
      local_14 = (ContinuousArrayAttribute<float> *)
                 FUN_0063c000((this->ContinuousArrayAttribute<float>_data).offset_0x0
                              [(this->Attribute_data).offset_0x1c]);
    }
    local_8 = 0xffffffff;
  }
  FUN_0066add0(&local_14);
  ExceptionList = local_10;
  return ((this->ContinuousArrayAttribute<float>_data).offset_0x4 -
          (int)(this->ContinuousArrayAttribute<float>_data).offset_0x0 >> 2) + -1;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction3 @ 00668de0  kind=game  attributed-by=rtti  size=178 */

int __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction3
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this)

{
  ContinuousArrayAttribute<plasma::Vector<2,float>_> *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7dcb;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_14 = this;
  if ((this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0 ==
      (undefined4 *)(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4) {
    local_14 = operator_new(0xc);
    if (local_14 == (ContinuousArrayAttribute<plasma::Vector<2,float>_> *)0x0) {
      local_14 = (ContinuousArrayAttribute<plasma::Vector<2,float>_> *)0x0;
    }
    else {
      local_14->vftablePtr = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_vftable *)0x0;
      (local_14->Attribute_data).offset_0x0 = (void *)0x0;
      (local_14->Attribute_data).offset_0x4 = 0;
    }
  }
  else {
    local_14 = operator_new(0xc);
    local_8 = 0;
    if (local_14 == (ContinuousArrayAttribute<plasma::Vector<2,float>_> *)0x0) {
      local_14 = (ContinuousArrayAttribute<plasma::Vector<2,float>_> *)0x0;
    }
    else {
      local_14 = (ContinuousArrayAttribute<plasma::Vector<2,float>_> *)
                 FUN_0063c0b0((this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).
                              offset_0x0[(this->Attribute_data).offset_0x1c]);
    }
    local_8 = 0xffffffff;
  }
  FUN_0066add0(&local_14);
  ExceptionList = local_10;
  return ((this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4 -
          (int)(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0 >> 2) + -1
  ;
}


/* plasma::ContinuousArrayAttribute<float>::vfunction4 @ 006695d0  kind=game  attributed-by=rtti  size=41 */

void __thiscall
plasma::ContinuousArrayAttribute<float>::vfunction4
          (ContinuousArrayAttribute<float> *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) &&
     (puVar1 = (this->ContinuousArrayAttribute<float>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<float>_data).offset_0x4 - (int)puVar1 >> 2)) {
    FUN_0067a7b0(puVar1[param_1]);
  }
  return;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction4 @ 00669600  kind=game  attributed-by=rtti  size=41 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction4
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) &&
     (puVar1 = (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4 -
               (int)puVar1 >> 2)) {
    FUN_0063d170(puVar1[param_1]);
  }
  return;
}


/* plasma::ContinuousArrayAttribute<float>::vfunction7 @ 00669720  kind=game  attributed-by=rtti  size=300 */

void __thiscall
plasma::ContinuousArrayAttribute<float>::vfunction7
          (ContinuousArrayAttribute<float> *this,int param_1,int param_2,int param_3,int param_4,
          float param_5,float param_6,undefined4 param_7,float param_8,float param_9,float param_10,
          float param_11)

{
  float fVar1;
  float fVar2;
  int *piVar3;
  undefined4 *puVar4;
  float fVar5;
  int local_8;
  
  local_8 = 0;
  piVar3 = (int *)(this->ContinuousArrayAttribute<float>_data).offset_0x0[param_2];
  if (0 < (int)(piVar3[1] - *piVar3 & 0xfffffffcU)) {
    do {
      puVar4 = (this->ContinuousArrayAttribute<float>_data).offset_0x0;
      fVar1 = *(float *)(*(int *)puVar4[param_2] + local_8 * 4);
      fVar2 = *(float *)(*(int *)puVar4[param_3] + local_8 * 4);
      fVar5 = (fVar2 - fVar1) * 0.25;
      *(float *)(*(int *)puVar4[(this->Attribute_data).offset_0x1c] + local_8 * 4) =
           (fVar2 - ((*(float *)(*(int *)puVar4[param_4] + local_8 * 4) - fVar1) * 0.25 * param_6 +
                    (1.0 - param_6) * fVar5)) * param_10 +
           ((fVar2 - *(float *)(*(int *)puVar4[param_1] + local_8 * 4)) * 0.25 * param_5 +
            (1.0 - param_5) * fVar5 + fVar1) * param_9 + fVar1 * param_8 + fVar2 * param_11;
      piVar3 = (int *)(this->ContinuousArrayAttribute<float>_data).offset_0x0[param_2];
      local_8 = local_8 + 1;
    } while (local_8 < piVar3[1] - *piVar3 >> 2);
  }
  return;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction7 @ 00669850  kind=game  attributed-by=rtti  size=1041 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction7
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this,int param_1,int param_2,
          int param_3,int param_4,float param_5,float param_6,undefined4 param_7,float param_8,
          float param_9,float param_10,float param_11)

{
  int *piVar1;
  undefined4 *puVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  int local_b4;
  float local_a0;
  float fStack_9c;
  float local_60;
  float fStack_5c;
  undefined8 local_50;
  float local_38;
  float fStack_34;
  float local_28;
  float fStack_24;
  float local_18;
  float fStack_14;
  float local_10;
  float fStack_c;
  
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar1 = (int *)(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0
                  [param_2];
  local_b4 = 0;
  if (0 < (int)(piVar1[1] - *piVar1 & 0xfffffff8U)) {
    do {
      puVar2 = (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0;
      iVar5 = local_b4 * 8;
      pfVar4 = (float *)(*(int *)puVar2[param_2] + iVar5);
      puVar6 = (undefined8 *)(*(int *)puVar2[param_3] + iVar5);
      local_28 = (float)*puVar6;
      fStack_24 = (float)((ulonglong)*puVar6 >> 0x20);
      local_60 = (float)*(undefined8 *)(*(int *)puVar2[param_4] + iVar5);
      fStack_5c = (float)((ulonglong)*(undefined8 *)(*(int *)puVar2[param_4] + iVar5) >> 0x20);
      local_38 = (float)*puVar6;
      fStack_34 = (float)((ulonglong)*puVar6 >> 0x20);
      fVar7 = (local_38 - *pfVar4) * 0.25;
      fVar8 = (fStack_34 - pfVar4[1]) * 0.25;
      local_18 = (float)*(undefined8 *)pfVar4;
      fStack_14 = (float)((ulonglong)*(undefined8 *)pfVar4 >> 0x20);
      local_10 = (float)*puVar6;
      fStack_c = (float)((ulonglong)*puVar6 >> 0x20);
      local_a0 = (float)*puVar6;
      fStack_9c = (float)((ulonglong)*puVar6 >> 0x20);
      local_50 = CONCAT44(fStack_14 * param_8 +
                          (fStack_14 +
                          (fStack_24 - *(float *)(*(int *)puVar2[param_1] + 4 + iVar5)) * 0.25 *
                          param_5 + fVar8 * (1.0 - param_5)) * param_9 +
                          (fStack_c -
                          ((fStack_5c - pfVar4[1]) * 0.25 * param_6 + fVar8 * (1.0 - param_6))) *
                          param_10 + fStack_9c * param_11,
                          local_18 * param_8 +
                          (local_18 +
                          (local_28 - *(float *)(*(int *)puVar2[param_1] + iVar5)) * 0.25 * param_5
                          + fVar7 * (1.0 - param_5)) * param_9 +
                          (local_10 -
                          ((local_60 - *pfVar4) * 0.25 * param_6 + fVar7 * (1.0 - param_6))) *
                          param_10 + local_a0 * param_11);
      *(undefined8 *)(*(int *)puVar2[(this->Attribute_data).offset_0x1c] + iVar5) = local_50;
      piVar1 = (int *)(this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0
                      [param_2];
      local_b4 = local_b4 + 1;
    } while (local_b4 < piVar1[1] - *piVar1 >> 3);
  }
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::ContinuousArrayAttribute<float>::vfunction6 @ 0066afc0  kind=game  attributed-by=rtti  size=47 */

void __thiscall
plasma::ContinuousArrayAttribute<float>::vfunction6
          (ContinuousArrayAttribute<float> *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) &&
     (puVar1 = (this->ContinuousArrayAttribute<float>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<float>_data).offset_0x4 - (int)puVar1 >> 2)) {
    FUN_0067a7b0(puVar1[(this->Attribute_data).offset_0x1c]);
  }
  return;
}


/* plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction6 @ 0066aff0  kind=game  attributed-by=rtti  size=47 */

void __thiscall
plasma::ContinuousArrayAttribute<plasma::Vector<2,float>_>::vfunction6
          (ContinuousArrayAttribute<plasma::Vector<2,float>_> *this,int param_1)

{
  undefined4 *puVar1;
  
  if ((-1 < param_1) &&
     (puVar1 = (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x0,
     param_1 < (this->ContinuousArrayAttribute<plasma::Vector<2,float>_>_data).offset_0x4 -
               (int)puVar1 >> 2)) {
    FUN_0063d170(puVar1[(this->Attribute_data).offset_0x1c]);
  }
  return;
}


