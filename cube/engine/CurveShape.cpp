// CurveShape (engine) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "CurveShape.h"

/* plasma::CurveShape::vfunction12 @ 0066b1f0  kind=game  attributed-by=rtti  size=12 */

void __thiscall plasma::CurveShape::vfunction12(CurveShape *this)

{
  (*(code *)this[3].Object_data.offset_0x4[3])(1);
  return;
}


/* plasma::CurveShape::vfunction11 @ 0066be80  kind=game  attributed-by=rtti  size=12 */

void __thiscall plasma::CurveShape::vfunction11(CurveShape *this)

{
  (*(code *)this[3].Object_data.offset_0x4[5])(1);
  return;
}


/* plasma::CurveShape::~CurveShape @ 0067a470  kind=game  attributed-by=rtti  size=424 */

void __thiscall plasma::CurveShape::~CurveShape(CurveShape *this)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006f8963;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 0x11;
  FUN_006504c0(this[0x24].Object_data.offset_0x0);
  pvVar1 = (void *)this[0x23].field3_0x10.offset_0x4;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  piVar2 = this[0x23].Object_data.offset_0x4;
  if (piVar2 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
  pvVar1 = (void *)this[0x22].field3_0x10.offset_0x8;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  if (this[0x22].field2_0xc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this[0x22].field2_0xc);
  }
  if (this[0x22].vftablePtr != (CurveShape_vftable *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this[0x22].vftablePtr);
  }
  puVar3 = this[0x21].field3_0x10.offset_0x0;
  if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar3);
  }
  puVar3 = this[0x20].field3_0x10.offset_0x0;
  if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar3);
  }
  puVar3 = this[0x1f].field3_0x10.offset_0x0;
  if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar3);
  }
  local_8._0_1_ = 8;
  ContinuousArrayAttribute<float>::~ContinuousArrayAttribute<float>
            ((ContinuousArrayAttribute<float> *)&this[0x1c].field2_0xc);
  local_8._0_1_ = 7;
  if (this[0x1c].vftablePtr != (CurveShape_vftable *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this[0x1c].vftablePtr);
  }
  Attribute::~Attribute((Attribute *)&this[0x19].Object_data.offset_0x4);
  pvVar1 = (void *)this[0x18].field3_0x10.offset_0x8;
  local_8._0_1_ = 6;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  Attribute::~Attribute((Attribute *)&this[0x16].Object_data);
  pvVar1 = (void *)this[0x15].field3_0x10.offset_0x4;
  local_8._0_1_ = 5;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  Attribute::~Attribute((Attribute *)(this + 0x13));
  puVar3 = this[0x12].field3_0x10.offset_0x0;
  local_8._0_1_ = 4;
  if (puVar3 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar3);
  }
  Attribute::~Attribute((Attribute *)&this[0xf].field3_0x10.offset_0x8);
  local_8._0_1_ = 3;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>::
  ~ContinuousArrayAttribute<plasma::Vector<4,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<4,float>_> *)&this[0xc].field3_0x10.offset_0x4
            );
  local_8._0_1_ = 2;
  ContinuousArrayAttribute<plasma::Vector<2,float>_>::
  ~ContinuousArrayAttribute<plasma::Vector<2,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<2,float>_> *)&this[9].field3_0x10);
  local_8._0_1_ = 1;
  ContinuousArrayAttribute<float>::~ContinuousArrayAttribute<float>
            ((ContinuousArrayAttribute<float> *)&this[6].field2_0xc);
  local_8 = (uint)local_8._1_3_ << 8;
  ContinuousArrayAttribute<plasma::Vector<2,float>_>::
  ~ContinuousArrayAttribute<plasma::Vector<2,float>_>
            ((ContinuousArrayAttribute<plasma::Vector<2,float>_> *)&this[3].Object_data.offset_0x4);
  local_8 = 0xffffffff;
  Shape::~Shape((Shape *)this);
  ExceptionList = local_10;
  return;
}


/* plasma::CurveShape::deleting_destructor @ 0067a8c0  kind=game  attributed-by=rtti  size=30 */

CurveShape * __thiscall plasma::CurveShape::deleting_destructor(CurveShape *this,byte param_1)

{
  ~CurveShape(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::CurveShape::vfunction8 @ 0067a8f0  kind=game  attributed-by=rtti  size=27 */

void __thiscall plasma::CurveShape::vfunction8(CurveShape *this,undefined4 *param_1)

{
  void *pvVar1;
  
  pvVar1 = this[0x21].field2_0xc;
  *param_1 = this[0x21].Object_data.offset_0x4;
  param_1[1] = pvVar1;
  return;
}


/* plasma::CurveShape::vfunction7 @ 0067a910  kind=game  attributed-by=rtti  size=27 */

void __thiscall plasma::CurveShape::vfunction7(CurveShape *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = this[0x21].Object_data.offset_0x0;
  *param_1 = this[0x21].vftablePtr;
  param_1[1] = iVar1;
  return;
}


/* plasma::CurveShape::vfunction14 @ 0067a930  kind=game  attributed-by=rtti  size=319 */

int * __thiscall plasma::CurveShape::vfunction14(CurveShape *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0064f100(&this->field2_0xc);
  FUN_0063ce30(&this[3].Object_data.offset_0x4);
  FUN_0063cf40(&this[0xc].field3_0x10.offset_0x4);
  FUN_0063ce30(&this[9].field3_0x10);
  FUN_0063cd20(&this[6].field2_0xc);
  FUN_0067a7b0(&this[0x1f].field3_0x10);
  FUN_0063cd20(&this[0x1c].field2_0xc);
  FUN_00661680(&this[0xf].field3_0x10.offset_0x8);
  FUN_0063d170(&this[0x12].field3_0x10);
  FUN_00661680(&this[0x16].Object_data);
  FUN_0063d290(&this[0x18].field3_0x10.offset_0x8);
  FUN_00661680(this + 0x13);
  FUN_0063d170(&this[0x15].field3_0x10.offset_0x4);
  FUN_00661680(&this[0x19].Object_data.offset_0x4);
  FUN_0063d050(this + 0x1c);
  FUN_0067a7b0(&this[0x20].field3_0x10);
  piVar1[0xe2] = (int)this[0x20].Object_data.offset_0x4;
  *(undefined1 *)(piVar1 + 0xe0) = *(undefined1 *)&this[0x20].vftablePtr;
  (**(code **)(*piVar1 + 4))(1);
  return piVar1;
}


/* plasma::CurveShape::vfunction5 @ 0067ab30  kind=game  attributed-by=rtti  size=454 */

void __thiscall plasma::CurveShape::vfunction5(CurveShape *this,float *param_1)

{
  int **ppiVar1;
  float fVar2;
  float fVar3;
  undefined8 *puVar4;
  CurveShape_vftable *pCVar5;
  undefined8 *puVar6;
  char cVar7;
  uint uVar8;
  int iVar9;
  CurveShape_vftable *pCVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar2 = *param_1;
  if ((((fVar2 < (float)this[0x21].vftablePtr) ||
       (fVar3 = param_1[1], fVar3 < (float)this[0x21].Object_data.offset_0x0)) ||
      (ppiVar1 = &this[0x21].Object_data.offset_0x4,
      (float)*ppiVar1 <= fVar2 && fVar2 != (float)*ppiVar1)) ||
     ((float)this[0x21].field2_0xc <= fVar3 && fVar3 != (float)this[0x21].field2_0xc)) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar8 = this[0x21].field3_0x10.offset_0x4 - (int)this[0x21].field3_0x10.offset_0x0 >> 3;
  cVar7 = *(char *)&this[0x20].vftablePtr;
  uVar13 = uVar8 - 2;
  if (cVar7 != '\0') {
    uVar13 = uVar8;
  }
  uVar11 = 0;
  if (0 < (int)uVar13) {
    do {
      cVar7 = FUN_0067aa70(this[0x21].field3_0x10.offset_0x0 + (uVar11 % uVar8) * 2,param_1);
      if (cVar7 != '\0') goto LAB_0067acce;
      uVar11 = uVar11 + 1;
    } while ((int)uVar11 < (int)uVar13);
    cVar7 = *(char *)&this[0x20].vftablePtr;
  }
  if (cVar7 == '\0') {
    pCVar10 = this[0x22].vftablePtr;
    iVar9 = (this[0x22].Object_data.offset_0x0 - (int)pCVar10 >> 3) + -1;
    iVar12 = 1;
    pCVar5 = pCVar10;
    if (1 < iVar9) {
      do {
        local_20._0_4_ = pCVar10->deleting_destructor;
        local_20._4_4_ = pCVar10->vfunction2;
        local_18._0_4_ = pCVar5->vfunction6;
        local_18._4_4_ = pCVar5->vfunction4;
        local_10._0_4_ = pCVar5->vfunction5;
        local_10._4_4_ = pCVar5->vfunction2;
        cVar7 = FUN_0067aa70(&local_20,param_1);
        if (cVar7 != '\0') goto LAB_0067acce;
        pCVar10 = this[0x22].vftablePtr;
        iVar12 = iVar12 + 1;
        pCVar5 = (CurveShape_vftable *)&pCVar5->vfunction6;
      } while (iVar12 < iVar9);
    }
    puVar4 = this[0x22].field2_0xc;
    iVar9 = ((int)this[0x22].field3_0x10.offset_0x0 - (int)puVar4 >> 3) + -1;
    iVar12 = 1;
    puVar6 = puVar4;
    if (1 < iVar9) {
      do {
        local_20 = *puVar4;
        local_18 = puVar6[1];
        local_10 = puVar6[2];
        cVar7 = FUN_0067aa70(&local_20,param_1);
        if (cVar7 != '\0') {
LAB_0067acce:
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        iVar12 = iVar12 + 1;
        puVar6 = puVar6 + 1;
      } while (iVar12 < iVar9);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::CurveShape::vfunction20 @ 0067ad00  kind=game  attributed-by=rtti  size=4018 */

void __thiscall plasma::CurveShape::vfunction20(CurveShape *this)

{
  uint *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  uint *puVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  uint local_34 [3];
  undefined4 local_28 [2];
  undefined4 local_20 [2];
  uint local_18 [5];
  
  local_18[4] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_34[2] = 0;
  *(undefined4 *)(this[0x24].Object_data.offset_0x0 + 0x68) = 0;
  iVar12 = this[0x24].Object_data.offset_0x0;
  *(undefined4 *)(iVar12 + 8) = *(undefined4 *)(iVar12 + 4);
  iVar12 = this[0x24].Object_data.offset_0x0;
  *(undefined4 *)(iVar12 + 0x14) = *(undefined4 *)(iVar12 + 0x10);
  iVar12 = this[0x24].Object_data.offset_0x0;
  *(undefined4 *)(iVar12 + 0x20) = *(undefined4 *)(iVar12 + 0x1c);
  iVar12 = this[0x24].Object_data.offset_0x0;
  *(undefined4 *)(iVar12 + 0x38) = *(undefined4 *)(iVar12 + 0x34);
  if (0 < (int)((int)this[0x23].vftablePtr - this[0x22].field3_0x10.offset_0x8 & 0xfffffff0U)) {
    local_28[0] = 0;
    local_28[1] = 0;
    local_20[0] = 0;
    local_20[1] = 0;
    local_34[1] = 0;
    do {
      iVar12 = this[0x24].Object_data.offset_0x0;
      puVar8 = *(undefined4 **)(iVar12 + 0x14);
      if (local_28 < puVar8) {
        if (local_28 < *(undefined4 **)(iVar12 + 0x10)) goto LAB_0067addb;
        iVar11 = (int)local_28 - (int)*(undefined4 **)(iVar12 + 0x10) >> 3;
        if (puVar8 == *(undefined4 **)(iVar12 + 0x18)) {
          FUN_00428c80(1);
        }
        puVar8 = *(undefined4 **)(iVar12 + 0x14);
        iVar14 = *(int *)(iVar12 + 0x10);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(iVar14 + iVar11 * 8);
          puVar8[1] = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
        }
      }
      else {
LAB_0067addb:
        if (puVar8 == *(undefined4 **)(iVar12 + 0x18)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar12 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar12 + 0x14) = CONCAT44(local_28[1],local_28[0]);
        }
      }
      *(int *)(iVar12 + 0x14) = *(int *)(iVar12 + 0x14) + 8;
      iVar12 = this[0x24].Object_data.offset_0x0;
      puVar8 = *(undefined4 **)(iVar12 + 0x20);
      puVar13 = (undefined4 *)(this[0x22].field3_0x10.offset_0x8 + local_34[1]);
      if ((puVar13 < puVar8) && (puVar2 = *(undefined4 **)(iVar12 + 0x1c), puVar2 <= puVar13)) {
        if (puVar8 == *(undefined4 **)(iVar12 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar13 = (undefined4 *)
                  (((int)puVar13 - (int)puVar2 & 0xfffffff0U) + *(int *)(iVar12 + 0x1c));
      }
      else if (puVar8 == *(undefined4 **)(iVar12 + 0x24)) {
        FUN_00428d00(1);
      }
      puVar8 = *(undefined4 **)(iVar12 + 0x20);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar13;
        puVar8[1] = puVar13[1];
        puVar8[2] = puVar13[2];
        puVar8[3] = puVar13[3];
      }
      *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 0x10;
      iVar12 = this[0x24].Object_data.offset_0x0;
      puVar8 = *(undefined4 **)(iVar12 + 8);
      puVar13 = (undefined4 *)((int)this[0x21].field3_0x10.offset_0x0 + local_34[1]);
      if ((puVar13 < puVar8) && (*(undefined4 **)(iVar12 + 4) <= puVar13)) {
        iVar11 = (int)puVar13 - (int)*(undefined4 **)(iVar12 + 4) >> 3;
        if (puVar8 == *(undefined4 **)(iVar12 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar8 = *(undefined4 **)(iVar12 + 8);
        iVar14 = *(int *)(iVar12 + 4);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(iVar14 + iVar11 * 8);
          uVar7 = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
LAB_0067aece:
          puVar8[1] = uVar7;
        }
      }
      else {
        if (puVar8 == *(undefined4 **)(iVar12 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar8 = *(undefined4 **)(iVar12 + 8);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar13;
          uVar7 = puVar13[1];
          goto LAB_0067aece;
        }
      }
      *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 8;
      iVar12 = this[0x24].Object_data.offset_0x0;
      puVar8 = *(undefined4 **)(iVar12 + 0x14);
      if (local_20 < puVar8) {
        if (local_20 < *(undefined4 **)(iVar12 + 0x10)) goto LAB_0067af1d;
        iVar11 = (int)local_20 - (int)*(undefined4 **)(iVar12 + 0x10) >> 3;
        if (puVar8 == *(undefined4 **)(iVar12 + 0x18)) {
          FUN_00428c80(1);
        }
        puVar8 = *(undefined4 **)(iVar12 + 0x14);
        iVar14 = *(int *)(iVar12 + 0x10);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(iVar14 + iVar11 * 8);
          puVar8[1] = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
        }
      }
      else {
LAB_0067af1d:
        if (puVar8 == *(undefined4 **)(iVar12 + 0x18)) {
          FUN_00428c80(1);
        }
        if (*(undefined8 **)(iVar12 + 0x14) != (undefined8 *)0x0) {
          **(undefined8 **)(iVar12 + 0x14) = CONCAT44(local_20[1],local_20[0]);
        }
      }
      *(int *)(iVar12 + 0x14) = *(int *)(iVar12 + 0x14) + 8;
      iVar12 = this[0x24].Object_data.offset_0x0;
      puVar8 = *(undefined4 **)(iVar12 + 0x20);
      puVar13 = (undefined4 *)(this[0x22].field3_0x10.offset_0x8 + local_34[1]);
      if ((puVar13 < puVar8) && (puVar2 = *(undefined4 **)(iVar12 + 0x1c), puVar2 <= puVar13)) {
        if (puVar8 == *(undefined4 **)(iVar12 + 0x24)) {
          FUN_00428d00(1);
        }
        puVar13 = (undefined4 *)
                  (((int)puVar13 - (int)puVar2 & 0xfffffff0U) + *(int *)(iVar12 + 0x1c));
      }
      else if (puVar8 == *(undefined4 **)(iVar12 + 0x24)) {
        FUN_00428d00(1);
      }
      puVar8 = *(undefined4 **)(iVar12 + 0x20);
      if (puVar8 != (undefined4 *)0x0) {
        *puVar8 = *puVar13;
        puVar8[1] = puVar13[1];
        puVar8[2] = puVar13[2];
        puVar8[3] = puVar13[3];
      }
      *(int *)(iVar12 + 0x20) = *(int *)(iVar12 + 0x20) + 0x10;
      iVar12 = this[0x24].Object_data.offset_0x0;
      puVar8 = *(undefined4 **)(iVar12 + 8);
      puVar13 = (undefined4 *)((int)this[0x21].field3_0x10.offset_0x0 + local_34[1] + 8);
      if ((puVar13 < puVar8) && (*(undefined4 **)(iVar12 + 4) <= puVar13)) {
        iVar11 = (int)puVar13 - (int)*(undefined4 **)(iVar12 + 4) >> 3;
        if (puVar8 == *(undefined4 **)(iVar12 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar8 = *(undefined4 **)(iVar12 + 8);
        iVar14 = *(int *)(iVar12 + 4);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *(undefined4 *)(iVar14 + iVar11 * 8);
          uVar7 = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
LAB_0067b013:
          puVar8[1] = uVar7;
        }
      }
      else {
        if (puVar8 == *(undefined4 **)(iVar12 + 0xc)) {
          FUN_00428c80(1);
        }
        puVar8 = *(undefined4 **)(iVar12 + 8);
        if (puVar8 != (undefined4 *)0x0) {
          *puVar8 = *puVar13;
          uVar7 = puVar13[1];
          goto LAB_0067b013;
        }
      }
      *(int *)(iVar12 + 8) = *(int *)(iVar12 + 8) + 8;
      local_34[1] = local_34[1] + 0x10;
      local_34[2] = local_34[2] + 1;
    } while ((int)local_34[2] < (int)this[0x23].vftablePtr - this[0x22].field3_0x10.offset_0x8 >> 4)
    ;
  }
  iVar12 = this[0x24].Object_data.offset_0x0;
  iVar11 = *(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3;
  if (iVar11 != 2 && -1 < iVar11 + -2) {
    local_34[1] = 2;
    do {
      piVar3 = *(int **)(iVar12 + 0x38);
      local_48 = local_34[1] + -2;
      puVar1 = (uint *)(iVar12 + 0x34);
      if ((&local_48 < piVar3) && ((int *)*puVar1 <= &local_48)) {
        piVar4 = *(int **)(iVar12 + 0x3c);
        local_18[3] = (int)&local_48 - (int)*puVar1 >> 2;
        if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
          iVar11 = (int)((int)piVar3 - *puVar1) >> 2;
          if (iVar11 == 0x3fffffff) goto LAB_0067b3bf;
          local_34[2] = iVar11 + 1;
          uVar10 = (int)((int)piVar4 - *puVar1) >> 2;
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < local_34[2]) {
            uVar10 = local_34[2];
          }
          FUN_0063da20(uVar10);
        }
        if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar12 + 0x38) = *(undefined4 *)(*puVar1 + local_18[3] * 4);
        }
      }
      else {
        piVar4 = *(int **)(iVar12 + 0x3c);
        if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
          iVar11 = (int)((int)piVar3 - *puVar1) >> 2;
          if (iVar11 == 0x3fffffff) goto LAB_0067b3bf;
          local_18[3] = iVar11 + 1;
          uVar10 = (int)((int)piVar4 - *puVar1) >> 2;
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < local_18[3]) {
            uVar10 = local_18[3];
          }
          FUN_0063da20(uVar10);
        }
        if (*(int **)(iVar12 + 0x38) != (int *)0x0) {
          **(int **)(iVar12 + 0x38) = local_34[1] + -2;
        }
      }
      *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
      iVar12 = this[0x24].Object_data.offset_0x0;
      local_38 = local_34[1] + -1;
      piVar3 = *(int **)(iVar12 + 0x38);
      if ((&local_38 < piVar3) && (*(int **)(iVar12 + 0x34) <= &local_38)) {
        piVar4 = *(int **)(iVar12 + 0x3c);
        local_34[2] = (int)&local_38 - (int)*(int **)(iVar12 + 0x34) >> 2;
        if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
          iVar11 = (int)piVar3 - *(int *)(iVar12 + 0x34) >> 2;
          if (iVar11 == 0x3fffffff) goto LAB_0067b3bf;
          local_18[3] = iVar11 + 1;
          uVar10 = (int)piVar4 - *(int *)(iVar12 + 0x34) >> 2;
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < local_18[3]) {
            uVar10 = local_18[3];
          }
          FUN_0063da20(uVar10);
        }
        if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar12 + 0x38) =
               *(undefined4 *)(*(int *)(iVar12 + 0x34) + local_34[2] * 4);
        }
      }
      else {
        piVar4 = *(int **)(iVar12 + 0x3c);
        if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
          iVar11 = (int)piVar3 - *(int *)(iVar12 + 0x34) >> 2;
          if (iVar11 == 0x3fffffff) goto LAB_0067b3bf;
          local_18[3] = iVar11 + 1;
          uVar10 = (int)piVar4 - *(int *)(iVar12 + 0x34) >> 2;
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < local_18[3]) {
            uVar10 = local_18[3];
          }
          FUN_0063da20(uVar10);
        }
        if (*(int **)(iVar12 + 0x38) != (int *)0x0) {
          **(int **)(iVar12 + 0x38) = local_34[1] + -1;
        }
      }
      *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
      iVar12 = this[0x24].Object_data.offset_0x0;
      local_3c = local_34[1];
      piVar3 = *(int **)(iVar12 + 0x38);
      if ((&local_3c < piVar3) && (*(int **)(iVar12 + 0x34) <= &local_3c)) {
        piVar4 = *(int **)(iVar12 + 0x3c);
        local_34[2] = (int)&local_3c - (int)*(int **)(iVar12 + 0x34) >> 2;
        if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
          iVar11 = (int)piVar3 - *(int *)(iVar12 + 0x34) >> 2;
          if (iVar11 == 0x3fffffff) goto LAB_0067b3bf;
          local_18[3] = iVar11 + 1;
          uVar10 = (int)piVar4 - *(int *)(iVar12 + 0x34) >> 2;
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < local_18[3]) {
            uVar10 = local_18[3];
          }
          FUN_0063da20(uVar10);
        }
        if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
          **(undefined4 **)(iVar12 + 0x38) =
               *(undefined4 *)(*(int *)(iVar12 + 0x34) + local_34[2] * 4);
        }
      }
      else {
        piVar4 = *(int **)(iVar12 + 0x3c);
        if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
          iVar11 = (int)piVar3 - *(int *)(iVar12 + 0x34) >> 2;
          if (iVar11 == 0x3fffffff) goto LAB_0067b3bf;
          local_18[3] = iVar11 + 1;
          uVar10 = (int)piVar4 - *(int *)(iVar12 + 0x34) >> 2;
          if (0x3fffffff - (uVar10 >> 1) < uVar10) {
            uVar10 = 0;
          }
          else {
            uVar10 = uVar10 + (uVar10 >> 1);
          }
          if (uVar10 < local_18[3]) {
            uVar10 = local_18[3];
          }
          FUN_0063da20(uVar10);
        }
        if (*(int **)(iVar12 + 0x38) != (int *)0x0) {
          **(int **)(iVar12 + 0x38) = local_34[1];
        }
      }
      *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
      iVar12 = this[0x24].Object_data.offset_0x0;
      iVar14 = local_34[1] + 1;
      iVar11 = local_34[1] + -1;
      local_34[1] = iVar14;
    } while (iVar11 < (*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3) + -2);
  }
  if ((*(char *)&this[0x20].vftablePtr != '\0') &&
     (this[0x21].field3_0x10.offset_0x0 != (undefined4 *)this[0x21].field3_0x10.offset_0x4)) {
    iVar12 = this[0x24].Object_data.offset_0x0;
    puVar1 = (uint *)(iVar12 + 0x34);
    local_44 = (*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3) + -2;
    piVar3 = *(int **)(iVar12 + 0x38);
    if ((&local_44 < piVar3) && ((int *)*puVar1 <= &local_44)) {
      piVar4 = *(int **)(iVar12 + 0x3c);
      local_34[2] = (int)&local_44 - (int)*puVar1 >> 2;
      if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
        iVar11 = (int)((int)piVar3 - *puVar1) >> 2;
        if (iVar11 == 0x3fffffff) {
LAB_0067b3bf:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)((int)piVar4 - *puVar1) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) = *(undefined4 *)(*puVar1 + local_34[2] * 4);
      }
    }
    else {
      piVar4 = *(int **)(iVar12 + 0x3c);
      local_34[2] = local_44;
      if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
        iVar11 = (int)((int)piVar3 - *puVar1) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)((int)piVar4 - *puVar1) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(int **)(iVar12 + 0x38) != (int *)0x0) {
        **(int **)(iVar12 + 0x38) = local_34[2];
      }
    }
    *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
    iVar12 = this[0x24].Object_data.offset_0x0;
    puVar1 = (uint *)(iVar12 + 0x34);
    local_4c = (*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3) + -1;
    piVar3 = *(int **)(iVar12 + 0x38);
    if ((&local_4c < piVar3) && ((int *)*puVar1 <= &local_4c)) {
      piVar4 = *(int **)(iVar12 + 0x3c);
      local_34[2] = (int)&local_4c - (int)*puVar1 >> 2;
      if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
        iVar11 = (int)((int)piVar3 - *puVar1) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)((int)piVar4 - *puVar1) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) = *(undefined4 *)(*puVar1 + local_34[2] * 4);
      }
    }
    else {
      piVar4 = *(int **)(iVar12 + 0x3c);
      local_34[2] = local_4c;
      if ((piVar3 == piVar4) && ((int)piVar4 - (int)piVar3 >> 2 == 0)) {
        iVar11 = (int)((int)piVar3 - *puVar1) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)((int)piVar4 - *puVar1) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(int **)(iVar12 + 0x38) != (int *)0x0) {
        **(int **)(iVar12 + 0x38) = local_34[2];
      }
    }
    *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
    iVar12 = this[0x24].Object_data.offset_0x0;
    puVar8 = *(undefined4 **)(iVar12 + 0x38);
    local_54 = 0;
    if ((&local_54 < puVar8) && (*(undefined4 **)(iVar12 + 0x34) <= &local_54)) {
      puVar13 = *(undefined4 **)(iVar12 + 0x3c);
      local_34[2] = (int)&local_54 - (int)*(undefined4 **)(iVar12 + 0x34) >> 2;
      if ((puVar8 == puVar13) && ((int)puVar13 - (int)puVar8 >> 2 == 0)) {
        iVar11 = (int)puVar8 - *(int *)(iVar12 + 0x34) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)puVar13 - *(int *)(iVar12 + 0x34) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) =
             *(undefined4 *)(*(int *)(iVar12 + 0x34) + local_34[2] * 4);
      }
    }
    else {
      puVar13 = *(undefined4 **)(iVar12 + 0x3c);
      if ((puVar8 == puVar13) && ((int)puVar13 - (int)puVar8 >> 2 == 0)) {
        iVar11 = (int)puVar8 - *(int *)(iVar12 + 0x34) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)puVar13 - *(int *)(iVar12 + 0x34) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) = 0;
      }
    }
    *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
    iVar12 = this[0x24].Object_data.offset_0x0;
    puVar1 = (uint *)(iVar12 + 0x34);
    local_34[0] = (*(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3) - 1;
    puVar5 = *(uint **)(iVar12 + 0x38);
    if ((local_34 < puVar5) && ((uint *)*puVar1 <= local_34)) {
      puVar6 = *(uint **)(iVar12 + 0x3c);
      local_34[2] = (int)local_34 - (int)*puVar1 >> 2;
      if ((puVar5 == puVar6) && ((int)puVar6 - (int)puVar5 >> 2 == 0)) {
        iVar11 = (int)((int)puVar5 - *puVar1) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)((int)puVar6 - *puVar1) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) = *(undefined4 *)(*puVar1 + local_34[2] * 4);
      }
    }
    else {
      puVar6 = *(uint **)(iVar12 + 0x3c);
      local_34[2] = local_34[0];
      if ((puVar5 == puVar6) && ((int)puVar6 - (int)puVar5 >> 2 == 0)) {
        iVar11 = (int)((int)puVar5 - *puVar1) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)((int)puVar6 - *puVar1) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(uint **)(iVar12 + 0x38) != (uint *)0x0) {
        **(uint **)(iVar12 + 0x38) = local_34[2];
      }
    }
    *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
    iVar12 = this[0x24].Object_data.offset_0x0;
    puVar8 = *(undefined4 **)(iVar12 + 0x38);
    local_40 = 0;
    if ((&local_40 < puVar8) && (*(undefined4 **)(iVar12 + 0x34) <= &local_40)) {
      puVar13 = *(undefined4 **)(iVar12 + 0x3c);
      local_34[2] = (int)&local_40 - (int)*(undefined4 **)(iVar12 + 0x34) >> 2;
      if ((puVar8 == puVar13) && ((int)puVar13 - (int)puVar8 >> 2 == 0)) {
        iVar11 = (int)puVar8 - *(int *)(iVar12 + 0x34) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)puVar13 - *(int *)(iVar12 + 0x34) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) =
             *(undefined4 *)(*(int *)(iVar12 + 0x34) + local_34[2] * 4);
      }
    }
    else {
      puVar13 = *(undefined4 **)(iVar12 + 0x3c);
      if ((puVar8 == puVar13) && ((int)puVar13 - (int)puVar8 >> 2 == 0)) {
        iVar11 = (int)puVar8 - *(int *)(iVar12 + 0x34) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        local_18[3] = iVar11 + 1;
        uVar10 = (int)puVar13 - *(int *)(iVar12 + 0x34) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < local_18[3]) {
          uVar10 = local_18[3];
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) = 0;
      }
    }
    *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
    iVar12 = this[0x24].Object_data.offset_0x0;
    puVar8 = *(undefined4 **)(iVar12 + 0x38);
    local_50 = 1;
    if ((&local_50 < puVar8) && (*(undefined4 **)(iVar12 + 0x34) <= &local_50)) {
      puVar13 = *(undefined4 **)(iVar12 + 0x3c);
      local_18[3] = (int)&local_50 - (int)*(undefined4 **)(iVar12 + 0x34) >> 2;
      if ((puVar8 == puVar13) && ((int)puVar13 - (int)puVar8 >> 2 == 0)) {
        iVar11 = (int)puVar8 - *(int *)(iVar12 + 0x34) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar9 = iVar11 + 1;
        uVar10 = (int)puVar13 - *(int *)(iVar12 + 0x34) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) =
             *(undefined4 *)(*(int *)(iVar12 + 0x34) + local_18[3] * 4);
      }
    }
    else {
      puVar13 = *(undefined4 **)(iVar12 + 0x3c);
      if ((puVar8 == puVar13) && ((int)puVar13 - (int)puVar8 >> 2 == 0)) {
        iVar11 = (int)puVar8 - *(int *)(iVar12 + 0x34) >> 2;
        if (iVar11 == 0x3fffffff) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("vector<T> too long");
        }
        uVar9 = iVar11 + 1;
        uVar10 = (int)puVar13 - *(int *)(iVar12 + 0x34) >> 2;
        if (0x3fffffff - (uVar10 >> 1) < uVar10) {
          uVar10 = 0;
        }
        else {
          uVar10 = uVar10 + (uVar10 >> 1);
        }
        if (uVar10 < uVar9) {
          uVar10 = uVar9;
        }
        FUN_0063da20(uVar10);
      }
      if (*(undefined4 **)(iVar12 + 0x38) != (undefined4 *)0x0) {
        **(undefined4 **)(iVar12 + 0x38) = 1;
      }
    }
    *(int *)(iVar12 + 0x38) = *(int *)(iVar12 + 0x38) + 4;
  }
  if (((CurveShape_vftable *)this[0x22].field3_0x10.offset_0x8 != this[0x23].vftablePtr) &&
     (this[0x22].vftablePtr != (CurveShape_vftable *)this[0x22].Object_data.offset_0x0)) {
    iVar12 = this[0x24].Object_data.offset_0x0;
    local_34[2] = *(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3;
    local_34[1] = 0;
    if (0 < (int)(this[0x22].Object_data.offset_0x0 - (int)this[0x22].vftablePtr & 0xfffffff8U)) {
      local_18[0] = 0;
      local_18[1] = 0;
      do {
        iVar12 = this[0x24].Object_data.offset_0x0;
        puVar1 = *(uint **)(iVar12 + 0x14);
        if (local_18 < puVar1) {
          if (local_18 < *(uint **)(iVar12 + 0x10)) goto LAB_0067ba5c;
          puVar5 = *(uint **)(iVar12 + 0x18);
          iVar11 = (int)local_18 - (int)*(uint **)(iVar12 + 0x10) >> 3;
          if ((puVar1 == puVar5) && ((int)puVar5 - (int)puVar1 >> 3 == 0)) {
            iVar14 = (int)puVar1 - *(int *)(iVar12 + 0x10) >> 3;
            if (iVar14 == 0x1fffffff) goto LAB_0067b3bf;
            local_18[3] = iVar14 + 1;
            uVar10 = (int)puVar5 - *(int *)(iVar12 + 0x10) >> 3;
            if (0x1fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < local_18[3]) {
              uVar10 = local_18[3];
            }
            FUN_00428ac0(uVar10);
          }
          puVar8 = *(undefined4 **)(iVar12 + 0x14);
          iVar14 = *(int *)(iVar12 + 0x10);
          if (puVar8 != (undefined4 *)0x0) {
            *puVar8 = *(undefined4 *)(iVar14 + iVar11 * 8);
            puVar8[1] = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
          }
        }
        else {
LAB_0067ba5c:
          puVar5 = *(uint **)(iVar12 + 0x18);
          if ((puVar1 == puVar5) && ((int)puVar5 - (int)puVar1 >> 3 == 0)) {
            iVar11 = (int)puVar1 - *(int *)(iVar12 + 0x10) >> 3;
            if (iVar11 == 0x1fffffff) goto LAB_0067b3bf;
            local_18[3] = iVar11 + 1;
            uVar10 = (int)puVar5 - *(int *)(iVar12 + 0x10) >> 3;
            if (0x1fffffff - (uVar10 >> 1) < uVar10) {
              uVar10 = 0;
            }
            else {
              uVar10 = uVar10 + (uVar10 >> 1);
            }
            if (uVar10 < local_18[3]) {
              uVar10 = local_18[3];
            }
            FUN_00428ac0(uVar10);
          }
          if (*(undefined8 **)(iVar12 + 0x14) != (undefined8 *)0x0) {
            **(undefined8 **)(iVar12 + 0x14) = CONCAT44(local_18[1],local_18[0]);
          }
        }
        uVar10 = local_34[1];
        *(int *)(iVar12 + 0x14) = *(int *)(iVar12 + 0x14) + 8;
        FUN_0042bd20(this[0x22].field3_0x10.offset_0x8);
        FUN_00642590(&(this[0x22].vftablePtr)->deleting_destructor + uVar10 * 2);
        local_34[1] = uVar10 + 1;
      } while ((int)local_34[1] <
               this[0x22].Object_data.offset_0x0 - (int)this[0x22].vftablePtr >> 3);
    }
    if (1 < (this[0x22].Object_data.offset_0x0 - (int)this[0x22].vftablePtr >> 3) + -1) {
      uVar10 = local_34[2] + 2;
      iVar12 = -1 - local_34[2];
      do {
        local_18[3] = local_34[2];
        FUN_0066add0(local_18 + 3);
        local_18[3] = uVar10 - 1;
        FUN_0066add0(local_18 + 3);
        local_18[3] = uVar10;
        FUN_0066add0(local_18 + 3);
        uVar10 = uVar10 + 1;
      } while ((int)(iVar12 + uVar10) <
               (this[0x22].Object_data.offset_0x0 - (int)this[0x22].vftablePtr >> 3) + -1);
    }
    iVar12 = this[0x24].Object_data.offset_0x0;
    iVar11 = 0;
    iVar12 = *(int *)(iVar12 + 8) - *(int *)(iVar12 + 4) >> 3;
    if (0 < (int)((int)this[0x22].field3_0x10.offset_0x0 - (int)this[0x22].field2_0xc & 0xfffffff8U)
       ) {
      do {
        local_18[2] = 0;
        local_18[3] = 0;
        FUN_00642590(local_18 + 2);
        FUN_0042bd20(&this[0x23].vftablePtr[-1].vfunction12);
        FUN_00642590((void *)((int)this[0x22].field2_0xc + iVar11 * 8));
        iVar11 = iVar11 + 1;
      } while (iVar11 < (int)this[0x22].field3_0x10.offset_0x0 - (int)this[0x22].field2_0xc >> 3);
    }
    if (1 < ((int)this[0x22].field3_0x10.offset_0x0 - (int)this[0x22].field2_0xc >> 3) + -1) {
      local_34[2] = -iVar12 - 1;
      uVar10 = iVar12 + 2;
      do {
        local_18[3] = iVar12;
        FUN_0066add0(local_18 + 3);
        local_18[3] = uVar10 - 1;
        FUN_0066add0(local_18 + 3);
        local_18[3] = uVar10;
        FUN_0066add0(local_18 + 3);
        uVar10 = uVar10 + 1;
      } while ((int)(local_34[2] + uVar10) <
               ((int)this[0x22].field3_0x10.offset_0x0 - (int)this[0x22].field2_0xc >> 3) + -1);
    }
  }
  (**(code **)(*(int *)this[0x24].Object_data.offset_0x0 + 4))();
  __security_check_cookie(local_18[4] ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::CurveShape::vfunction2 @ 0067bd60  kind=game  attributed-by=rtti  size=3984 */

void __thiscall plasma::CurveShape::vfunction2(CurveShape *this)

{
  ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *pCVar1;
  int **ppiVar2;
  void *pvVar3;
  vfunction2 *pvVar4;
  undefined8 uVar5;
  longlong lVar6;
  undefined8 uVar7;
  deleting_destructor *pdVar8;
  float *pfVar9;
  longlong *plVar10;
  CurveShape_vftable *pCVar11;
  ulonglong uVar12;
  int *piVar13;
  uint uVar14;
  undefined4 *puVar15;
  int *piVar16;
  undefined4 *puVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  int iVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  float fVar27;
  undefined1 auStack_98 [4];
  ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *local_94;
  int *local_90;
  CurveShape *local_8c;
  float local_88;
  undefined8 local_84;
  float local_7c;
  float fStack_78;
  undefined8 local_74;
  undefined8 local_6c;
  int **local_64;
  float fStack_60;
  undefined8 local_5c;
  ulonglong local_54;
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  undefined8 local_34;
  undefined8 local_2c;
  undefined8 local_24;
  float local_1c;
  float fStack_18;
  float local_14;
  float fStack_10;
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_98;
  pdVar8 = (this[6].vftablePtr)->deleting_destructor;
  local_8c = this;
  if ((int)(*(int *)(pdVar8 + 4) - *(int *)pdVar8 & 0xfffffff8U) < 0x10) {
    this[0x21].field3_0x10.offset_0x4 = (int)this[0x21].field3_0x10.offset_0x0;
    this[0x23].field3_0x10.offset_0x8 = this[0x23].field3_0x10.offset_0x4;
    this[0x23].vftablePtr = (CurveShape_vftable *)this[0x22].field3_0x10.offset_0x8;
    this[0x23].field2_0xc = this[0x23].Object_data.offset_0x4;
    this[0x22].Object_data.offset_0x0 = (int)this[0x22].vftablePtr;
    this[0x22].field3_0x10.offset_0x0 = this[0x22].field2_0xc;
    __security_check_cookie(local_c ^ (uint)auStack_98);
    return;
  }
  local_4c = CONCAT44(local_4c._4_4_,&this[0x20].field3_0x10);
  if (((*(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 1 ^
       this[0x20].field3_0x10.offset_0x4 - (int)this[0x20].field3_0x10.offset_0x0) & 0xfffffffcU) !=
      0) {
    pdVar8 = (this[6].vftablePtr)->deleting_destructor;
    FUN_0040d9d0(*(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3);
  }
  iVar19 = this[0x20].Object_data.offset_0x0;
  if (((iVar19 == 0) || (*(char *)&this[0x20].vftablePtr != '\0')) ||
     ((int)this[0x20].field2_0xc < 2)) {
    this[0x22].Object_data.offset_0x0 = (int)this[0x22].vftablePtr;
    this[0x22].field3_0x10.offset_0x0 = this[0x22].field2_0xc;
  }
  else if (iVar19 == 1) {
    FUN_0042bea0(this[0x20].field2_0xc);
    FUN_0042bea0(this[0x20].field2_0xc);
    pfVar9 = *(float **)(&(this[6].vftablePtr)->deleting_destructor)[(int)this[4].field2_0xc];
    local_90 = (int *)(*pfVar9 - pfVar9[2]);
    local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)(pfVar9[1] - pfVar9[3]);
    dVar24 = (double)((float)local_94 * (float)local_94 + (float)local_90 * (float)local_90);
    libm_sse2_sqrt_precise();
    fStack_78 = *(float *)**(undefined4 **)
                            (this[9].Object_data.offset_0x0 +
                            (int)this[7].field3_0x10.offset_0x0 * 4) * 0.5;
    iVar19 = 0;
    fVar25 = fStack_78 * (float)local_94 * (1.0 / (float)dVar24);
    fStack_78 = fStack_78 * (float)local_90 * (1.0 / (float)dVar24);
    local_7c = -fVar25;
    local_6c = CONCAT44(fVar25,fStack_78);
    if (0 < (int)this[0x20].field2_0xc) {
      do {
        local_90 = (int *)(((float)iVar19 * 3.1415927) / ((float)(int)this[0x20].field2_0xc - 1.0));
        dVar24 = (double)(float)local_90;
        libm_sse2_sin_precise();
        local_74 = local_6c;
        uVar12 = local_74;
        local_74._0_4_ = (float)local_6c;
        local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)
                   ((float)local_74 * (float)dVar24);
        local_74._4_4_ = (float)(local_6c >> 0x20);
        local_88 = local_74._4_4_ * (float)dVar24;
        dVar24 = (double)(float)local_90;
        local_74 = uVar12;
        libm_sse2_cos_precise();
        local_54 = CONCAT44(fStack_78,local_7c);
        uVar5 = **(undefined8 **)
                  (&(this[6].vftablePtr)->deleting_destructor)[(int)this[4].field2_0xc];
        local_64 = (int **)uVar5;
        fVar25 = (float)local_64 + local_7c * (float)dVar24;
        iVar20 = iVar19 + 1;
        fStack_60 = (float)((ulonglong)uVar5 >> 0x20);
        fStack_60 = fStack_60 + fStack_78 * (float)dVar24;
        _local_64 = CONCAT44(fStack_60,fVar25);
        local_84 = CONCAT44(fStack_60 + local_88,fVar25 + (float)local_94);
        *(ulonglong *)(&(this[0x22].vftablePtr)->deleting_destructor + iVar19 * 2) = local_84;
        iVar19 = iVar20;
      } while (iVar20 < (int)this[0x20].field2_0xc);
    }
    pdVar8 = (this[6].vftablePtr)->deleting_destructor;
    iVar21 = *(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3;
    iVar19 = *(int *)(&(this[6].vftablePtr)->deleting_destructor)[(int)this[4].field2_0xc];
    pdVar8 = (local_8c[6].vftablePtr)->deleting_destructor;
    iVar20 = *(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3;
    local_90 = (int *)(*(float *)(iVar19 + -8 + iVar20 * 8) -
                      *(float *)(iVar19 + -0x10 + iVar21 * 8));
    local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)
               (*(float *)(iVar19 + -4 + iVar20 * 8) - *(float *)(iVar19 + -0xc + iVar21 * 8));
    dVar24 = (double)((float)local_94 * (float)local_94 + (float)local_90 * (float)local_90);
    libm_sse2_sqrt_precise();
    this = local_8c;
    pdVar8 = (local_8c[6].vftablePtr)->deleting_destructor;
    iVar19 = 0;
    fStack_78 = *(float *)(**(int **)(local_8c[9].Object_data.offset_0x0 +
                                     (int)local_8c[7].field3_0x10.offset_0x0 * 4) + -4 +
                          (*(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3) * 4) * 0.5;
    fVar25 = fStack_78 * (float)local_94 * (1.0 / (float)dVar24);
    fStack_78 = fStack_78 * (float)local_90 * (1.0 / (float)dVar24);
    local_7c = -fVar25;
    local_6c = CONCAT44(fVar25,fStack_78);
    if (0 < (int)local_8c[0x20].field2_0xc) {
      do {
        local_90 = (int *)(((float)iVar19 * 3.1415927) / ((float)(int)this[0x20].field2_0xc - 1.0));
        dVar24 = (double)(float)local_90;
        libm_sse2_sin_precise();
        local_74 = local_6c;
        uVar12 = local_74;
        local_74._0_4_ = (float)local_6c;
        local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)
                   ((float)dVar24 * (float)local_74);
        local_74._4_4_ = (float)(local_6c >> 0x20);
        local_88 = (float)dVar24 * local_74._4_4_;
        dVar24 = (double)(float)local_90;
        local_74 = uVar12;
        libm_sse2_cos_precise();
        pdVar8 = (this[6].vftablePtr)->deleting_destructor;
        local_54 = CONCAT44(fStack_78,local_7c);
        uVar5 = *(undefined8 *)
                 (*(int *)(&(this[6].vftablePtr)->deleting_destructor)[(int)this[4].field2_0xc] + -8
                 + (*(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3) * 8);
        local_64 = (int **)uVar5;
        fVar25 = (float)local_64 + (float)dVar24 * local_7c;
        iVar19 = iVar19 + 1;
        fStack_60 = (float)((ulonglong)uVar5 >> 0x20);
        fStack_60 = fStack_60 + (float)dVar24 * fStack_78;
        _local_64 = CONCAT44(fStack_60,fVar25);
        local_84 = CONCAT44(local_88 + fStack_60,(float)local_94 + fVar25);
        *(ulonglong *)((int)this[0x22].field2_0xc + iVar19 * 8 + -8) = local_84;
      } while (iVar19 < (int)this[0x20].field2_0xc);
    }
  }
  piVar16 = this[0x20].Object_data.offset_0x4;
  dVar24 = 2.0;
  piVar13 = piVar16;
  if ((int)piVar16 < 0) {
    piVar13 = (int *)-(int)piVar16;
  }
  dVar26 = 1.0;
  while( true ) {
    if (((uint)piVar13 & 1) != 0) {
      dVar26 = dVar26 * dVar24;
    }
    piVar13 = (int *)((uint)piVar13 >> 1);
    if (piVar13 == (int *)0x0) break;
    dVar24 = dVar24 * dVar24;
  }
  if ((int)piVar16 < 0) {
    dVar26 = 1.0 / dVar26;
  }
  local_88 = (float)(int)dVar26;
  pdVar8 = (this[6].vftablePtr)->deleting_destructor;
  iVar19 = *(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3;
  if (*(char *)&this[0x20].vftablePtr == '\0') {
    iVar19 = (iVar19 + -1) * (int)local_88 + 1;
  }
  else {
    iVar19 = iVar19 * (int)local_88;
  }
  local_94 = &this[0x21].field3_0x10;
  local_7c = (float)iVar19;
  FUN_0042bea0(iVar19 * 2);
  local_84 = CONCAT44(local_84._4_4_,&this[0x22].field3_0x10.offset_0x8);
  FUN_0042bf80(iVar19);
  _local_64 = CONCAT44(fStack_60,&this[0x23].Object_data.offset_0x4);
  FUN_0040d9d0(iVar19);
  local_90 = &this[0x23].field3_0x10.offset_0x4;
  FUN_0042bea0(local_7c);
  local_5c = (ulonglong)(uint)local_5c._4_4_ << 0x20;
  pdVar8 = (this[6].vftablePtr)->deleting_destructor;
  if (0 < (int)(*(int *)(pdVar8 + 4) - *(int *)pdVar8 & 0xfffffff8U)) {
    local_44 = local_44 & 0xffffffff00000000;
    local_7c = 0.0;
    local_74 = local_74 & 0xffffffff00000000;
    local_54 = local_54 & 0xffffffff00000000;
    local_6c = CONCAT44(local_6c._4_4_,(int)local_88 * 0x10);
    do {
      iVar19 = *(int *)(&(this[6].vftablePtr)->deleting_destructor)[(int)this[4].field2_0xc];
      puVar15 = (undefined4 *)(this[0x23].field3_0x10.offset_0x4 + (int)(float)local_54);
      *puVar15 = *(undefined4 *)(iVar19 + (int)(float)local_5c * 8);
      puVar15[1] = *(undefined4 *)(iVar19 + 4 + (int)(float)local_5c * 8);
      puVar15 = (undefined4 *)(this[0x22].field3_0x10.offset_0x8 + (int)(float)local_74);
      puVar17 = (undefined4 *)
                (**(int **)((int)this[0xf].field2_0xc + this[0xd].field3_0x10.offset_0x8 * 4) +
                (int)(float)local_44);
      local_44 = CONCAT44(local_44._4_4_,(int)(float)local_44 + 0x10);
      *puVar15 = *puVar17;
      puVar15[1] = puVar17[1];
      puVar15[2] = puVar17[2];
      puVar15[3] = puVar17[3];
      iVar19 = (int)(float)local_5c + 1;
      local_5c = CONCAT44(local_5c._4_4_,iVar19);
      *(undefined4 *)((int)local_7c + (int)this[0x23].Object_data.offset_0x4) =
           *(undefined4 *)
            (**(int **)(this[9].Object_data.offset_0x0 + (int)this[7].field3_0x10.offset_0x0 * 4) +
             -4 + iVar19 * 4);
      local_54 = CONCAT44(local_54._4_4_,(int)(float)local_54 + (int)local_88 * 8);
      local_74 = CONCAT44(local_74._4_4_,(int)(float)local_74 + (int)local_88 * 0x10);
      local_7c = (float)((int)local_7c + (int)local_88 * 4);
      pdVar8 = (this[6].vftablePtr)->deleting_destructor;
    } while (iVar19 < *(int *)(pdVar8 + 4) - *(int *)pdVar8 >> 3);
  }
  local_7c = 0.0;
  if (0 < (int)this[0x20].Object_data.offset_0x4) {
    do {
      uVar18 = (int)this[0x20].Object_data.offset_0x4 - (int)local_7c;
      dVar24 = 2.0;
      uVar14 = uVar18;
      if ((int)uVar18 < 0) {
        uVar14 = -uVar18;
      }
      dVar26 = 1.0;
      while( true ) {
        if ((uVar14 & 1) != 0) {
          dVar26 = dVar26 * dVar24;
        }
        uVar14 = uVar14 >> 1;
        if (uVar14 == 0) break;
        dVar24 = dVar24 * dVar24;
      }
      if ((int)uVar18 < 0) {
        dVar26 = 1.0 / dVar26;
      }
      dVar24 = 2.0;
      local_5c = CONCAT44(local_5c._4_4_,(int)dVar26);
      fVar25 = local_7c;
      if ((int)local_7c < 0) {
        fVar25 = (float)-(int)local_7c;
      }
      dVar26 = 1.0;
      while( true ) {
        if (((uint)fVar25 & 1) != 0) {
          dVar26 = dVar26 * dVar24;
        }
        fVar25 = (float)((uint)fVar25 >> 1);
        if (fVar25 == 0.0) break;
        dVar24 = dVar24 * dVar24;
      }
      if ((int)local_7c < 0) {
        dVar26 = 1.0 / dVar26;
      }
      local_6c = CONCAT44(local_6c._4_4_,(int)dVar26);
      FUN_005a7990((float)local_4c);
      FUN_00679740(local_90);
      FUN_005a7990((float)local_4c);
      FUN_00679a40((float)local_84);
      FUN_005a7990((float)local_4c);
      FUN_00679570(local_64);
      FUN_005a7990((float)local_4c);
      FUN_00679740(local_94);
      FUN_005a7990((float)local_4c);
      FUN_00679740(local_94);
      local_7c = (float)((int)local_7c + 1);
      this = local_8c;
    } while ((int)local_7c < (int)local_8c[0x20].Object_data.offset_0x4);
  }
  local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)
             this[0x23].field3_0x10.offset_0x8;
  iVar19 = this[0x23].field3_0x10.offset_0x4;
  piVar16 = &this[0x23].field3_0x10.offset_0x4;
  iVar21 = (int)local_94 - iVar19 >> 3;
  iVar20 = 0;
  if (0 < iVar21) {
    do {
      if (*(char *)&this[0x20].vftablePtr == '\0') {
        if (iVar20 != 0) {
          if (iVar20 != iVar21 + -1) goto LAB_0067c7f6;
          iVar19 = *piVar16;
          uVar5 = *(undefined8 *)(iVar19 + -8 + iVar20 * 8);
          local_2c._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
          local_2c._0_4_ = (float)uVar5;
          fStack_18 = (float)local_2c - *(float *)(iVar19 + iVar20 * 8);
          local_1c = -(local_2c._4_4_ - *(float *)(iVar19 + 4 + iVar20 * 8));
          local_84 = CONCAT44(fStack_18,local_1c);
          dVar24 = (double)(fStack_18 * fStack_18 + local_1c * local_1c);
          local_2c = uVar5;
          libm_sse2_sqrt_precise();
          fVar25 = (float)local_84 * (1.0 / (float)dVar24);
          fVar27 = local_84._4_4_ * (1.0 / (float)dVar24);
          goto LAB_0067c9f8;
        }
        plVar10 = (longlong *)*piVar16;
        lVar6 = *plVar10;
        local_5c._4_4_ = (float)((ulonglong)lVar6 >> 0x20);
        local_5c._0_4_ = (float)lVar6;
        fStack_38 = (float)local_5c - *(float *)(plVar10 + 1);
        local_3c = -(local_5c._4_4_ - *(float *)((int)plVar10 + 0xc));
        local_84 = CONCAT44(fStack_38,local_3c);
        dVar24 = (double)(fStack_38 * fStack_38 + local_3c * local_3c);
        local_5c = lVar6;
        libm_sse2_sqrt_precise();
        fVar23 = (float)*this[0x23].Object_data.offset_0x4;
        fVar25 = (float)local_84 * (1.0 / (float)dVar24);
        fVar27 = local_84._4_4_ * (1.0 / (float)dVar24);
      }
      else {
LAB_0067c7f6:
        iVar21 = *local_90;
        uVar5 = *(undefined8 *)
                 (iVar21 + ((uint)((piVar16[1] - iVar19 >> 3) + -1 + iVar20) %
                           (uint)(piVar16[1] - iVar19 >> 3)) * 8);
        uVar7 = *(undefined8 *)(iVar21 + iVar20 * 8);
        local_34._0_4_ = (float)uVar5;
        fVar25 = (float)local_34 - *(float *)(iVar21 + iVar20 * 8);
        local_34._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
        local_24._0_4_ = (float)uVar7;
        local_7c = -(local_34._4_4_ - *(float *)(iVar21 + 4 + iVar20 * 8));
        uVar14 = (iVar20 + 1U) % (uint)((int)local_94 - iVar21 >> 3);
        local_54 = CONCAT44(local_54._4_4_,(float)local_24 - *(float *)(iVar21 + uVar14 * 8));
        local_24._4_4_ = (float)((ulonglong)uVar7 >> 0x20);
        local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)
                   -(local_24._4_4_ - *(float *)(iVar21 + 4 + uVar14 * 8));
        dVar24 = (double)(fVar25 * fVar25 + local_7c * local_7c);
        local_34 = uVar5;
        local_24 = uVar7;
        local_74._0_4_ = fVar25;
        libm_sse2_sqrt_precise();
        local_7c = local_7c * (1.0 / (float)dVar24);
        fStack_10 = (float)local_74 * (1.0 / (float)dVar24);
        local_74 = CONCAT44(local_74._4_4_,fStack_10);
        dVar24 = (double)((float)local_54 * (float)local_54 + (float)local_94 * (float)local_94);
        local_14 = local_7c;
        libm_sse2_sqrt_precise();
        fVar25 = (float)local_94 * (1.0 / (float)dVar24) + local_14;
        fVar27 = (float)local_54 * (1.0 / (float)dVar24) + fStack_10;
        local_6c = CONCAT44(fVar27,fVar25);
        local_84 = local_6c;
        dVar24 = (double)(fVar27 * fVar27 + fVar25 * fVar25);
        libm_sse2_sqrt_precise();
        fVar25 = (float)local_84 * (1.0 / (float)dVar24);
        fVar27 = local_84._4_4_ * (1.0 / (float)dVar24);
        _local_64 = CONCAT44(fStack_60,iVar20 / (int)local_88);
        this = local_8c;
        if ((iVar20 % (int)local_88 == 0) &&
           ((*(byte *)(local_8c[0x20].field3_0x10.offset_0x0 + iVar20 / (int)local_88) & 2) != 0)) {
          fVar23 = (float)local_74 * fVar27 + local_7c * fVar25;
          fVar25 = fVar25 / fVar23;
          fVar27 = fVar27 / fVar23;
        }
LAB_0067c9f8:
        fVar23 = (float)this[0x23].Object_data.offset_0x4[iVar20];
      }
      fVar25 = fVar25 * fVar23 * 0.5;
      fVar27 = fVar27 * fVar23 * 0.5;
      uVar5 = *(undefined8 *)(this[0x23].field3_0x10.offset_0x4 + iVar20 * 8);
      local_44._0_4_ = (float)uVar5;
      iVar22 = iVar20 + 1;
      local_44._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      local_44 = CONCAT44(fVar27 + local_44._4_4_,fVar25 + (float)local_44);
      *(ulonglong *)(this[0x21].field3_0x10.offset_0x0 + iVar20 * 4) = local_44;
      uVar5 = *(undefined8 *)(this[0x23].field3_0x10.offset_0x4 + iVar20 * 8);
      local_4c._0_4_ = (float)uVar5;
      piVar16 = &this[0x23].field3_0x10.offset_0x4;
      local_4c._4_4_ = (float)((ulonglong)uVar5 >> 0x20);
      local_4c = CONCAT44(local_4c._4_4_ - fVar27,(float)local_4c - fVar25);
      *(undefined8 *)(this[0x21].field3_0x10.offset_0x0 + iVar20 * 4 + 2) = local_4c;
      local_94 = (ContinuousArrayAttribute<plasma::Vector<2,float>_>_data *)
                 this[0x23].field3_0x10.offset_0x8;
      iVar19 = *piVar16;
      iVar21 = (int)local_94 - iVar19 >> 3;
      iVar20 = iVar22;
    } while (iVar22 < iVar21);
  }
  pCVar1 = &this[0x21].field3_0x10;
  if ((this[0x21].field3_0x10.offset_0x4 - (int)this[0x21].field3_0x10.offset_0x0 & 0xfffffff8U) ==
      0) {
    this[0x21].vftablePtr = (CurveShape_vftable *)0x0;
    this[0x21].Object_data.offset_0x0 = 0;
    this[0x21].Object_data.offset_0x4 = (int *)0x0;
    this[0x21].field2_0xc = (void *)0x0;
  }
  else {
    puVar15 = pCVar1->offset_0x0;
    this[0x21].vftablePtr = (CurveShape_vftable *)*puVar15;
    this[0x21].Object_data.offset_0x0 = puVar15[1];
    this[0x21].Object_data.offset_0x4 = (int *)this[0x21].vftablePtr;
    this[0x21].field2_0xc = (void *)this[0x21].Object_data.offset_0x0;
    iVar19 = 1;
    if (8 < (int)(this[0x21].field3_0x10.offset_0x4 - (int)pCVar1->offset_0x0 & 0xfffffff8U)) {
      do {
        puVar15 = pCVar1->offset_0x0;
        if ((float)puVar15[iVar19 * 2] < (float)this[0x21].vftablePtr) {
          this[0x21].vftablePtr = (CurveShape_vftable *)puVar15[iVar19 * 2];
        }
        if ((float)puVar15[iVar19 * 2 + 1] < (float)this[0x21].Object_data.offset_0x0) {
          this[0x21].Object_data.offset_0x0 = puVar15[iVar19 * 2 + 1];
        }
        piVar16 = (int *)puVar15[iVar19 * 2];
        ppiVar2 = &this[0x21].Object_data.offset_0x4;
        if ((float)*ppiVar2 <= (float)piVar16 && (float)piVar16 != (float)*ppiVar2) {
          this[0x21].Object_data.offset_0x4 = piVar16;
        }
        pvVar3 = (void *)puVar15[iVar19 * 2 + 1];
        if ((float)this[0x21].field2_0xc <= (float)pvVar3 &&
            (float)pvVar3 != (float)this[0x21].field2_0xc) {
          this[0x21].field2_0xc = pvVar3;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < this[0x21].field3_0x10.offset_0x4 - (int)pCVar1->offset_0x0 >> 3);
    }
    iVar19 = 0;
    if (0 < (int)(this[0x22].Object_data.offset_0x0 - (int)this[0x22].vftablePtr & 0xfffffff8U)) {
      do {
        pCVar11 = this[0x22].vftablePtr;
        if ((float)(&pCVar11->deleting_destructor)[iVar19 * 2] < (float)this[0x21].vftablePtr) {
          this[0x21].vftablePtr = (CurveShape_vftable *)(&pCVar11->deleting_destructor)[iVar19 * 2];
        }
        if ((float)(&pCVar11->vfunction2)[iVar19 * 2] < (float)this[0x21].Object_data.offset_0x0) {
          this[0x21].Object_data.offset_0x0 = (int)(&pCVar11->vfunction2)[iVar19 * 2];
        }
        pdVar8 = (&pCVar11->deleting_destructor)[iVar19 * 2];
        ppiVar2 = &this[0x21].Object_data.offset_0x4;
        if ((float)*ppiVar2 <= (float)pdVar8 && (float)pdVar8 != (float)*ppiVar2) {
          this[0x21].Object_data.offset_0x4 = (int *)pdVar8;
        }
        pvVar4 = (&pCVar11->vfunction2)[iVar19 * 2];
        if ((float)this[0x21].field2_0xc <= (float)pvVar4 &&
            (float)pvVar4 != (float)this[0x21].field2_0xc) {
          this[0x21].field2_0xc = pvVar4;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < this[0x22].Object_data.offset_0x0 - (int)this[0x22].vftablePtr >> 3);
    }
    iVar19 = 0;
    if (0 < (int)((int)this[0x22].field3_0x10.offset_0x0 - (int)this[0x22].field2_0xc & 0xfffffff8U)
       ) {
      do {
        pvVar3 = this[0x22].field2_0xc;
        pCVar11 = *(CurveShape_vftable **)((int)pvVar3 + iVar19 * 8);
        if ((float)pCVar11 < (float)this[0x21].vftablePtr) {
          this[0x21].vftablePtr = pCVar11;
        }
        fVar25 = *(float *)((int)pvVar3 + iVar19 * 8 + 4);
        if (fVar25 < (float)this[0x21].Object_data.offset_0x0) {
          this[0x21].Object_data.offset_0x0 = (int)fVar25;
        }
        piVar16 = *(int **)((int)pvVar3 + iVar19 * 8);
        ppiVar2 = &this[0x21].Object_data.offset_0x4;
        if ((float)*ppiVar2 <= (float)piVar16 && (float)piVar16 != (float)*ppiVar2) {
          this[0x21].Object_data.offset_0x4 = piVar16;
        }
        pvVar3 = *(void **)((int)pvVar3 + iVar19 * 8 + 4);
        if ((float)this[0x21].field2_0xc <= (float)pvVar3 &&
            (float)pvVar3 != (float)this[0x21].field2_0xc) {
          this[0x21].field2_0xc = pvVar3;
        }
        iVar19 = iVar19 + 1;
      } while (iVar19 < (int)this[0x22].field3_0x10.offset_0x0 - (int)this[0x22].field2_0xc >> 3);
    }
  }
  *(undefined1 *)((int)&this[1].field3_0x10.offset_0x0 + 1) = 1;
  __security_check_cookie(local_c ^ (uint)auStack_98);
  return;
}


/* plasma::CurveShape::vfunction13 @ 0067cd10  kind=game  attributed-by=rtti  size=724 */

void __thiscall
plasma::CurveShape::vfunction13
          (CurveShape *this,float *param_1,float *param_2,float *param_3,undefined8 *param_4,
          float *param_5,float *param_6)

{
  deleting_destructor *pdVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_48;
  float fStack_44;
  undefined8 local_28;
  float local_18;
  float fStack_14;
  
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  pdVar1 = (this[6].vftablePtr)->deleting_destructor;
  if (0 < (int)(*(int *)(pdVar1 + 4) - *(int *)pdVar1 & 0xfffffff8U)) {
    do {
      iVar2 = *(int *)(&(this[6].vftablePtr)->deleting_destructor)[(int)this[4].field2_0xc];
      fVar7 = *(float *)(iVar2 + iVar4 * 8);
      fVar6 = *(float *)(iVar2 + 4 + iVar4 * 8);
      fVar8 = *param_1;
      fVar5 = 1.0 / (param_5[3] * fVar7 + param_5[7] * fVar6 + param_5[0xf]);
      fVar9 = (*param_5 * fVar7 + param_5[4] * fVar6 + param_5[0xc]) * fVar5;
      fVar5 = (param_5[1] * fVar7 + param_5[5] * fVar6 + param_5[0xd]) * fVar5;
      if (fVar8 <= fVar9) {
        if (*param_2 + fVar8 <= fVar9) {
          local_18 = 1.0;
        }
        else {
          local_18 = (fVar9 - fVar8) / *param_2;
        }
      }
      else {
        local_18 = 0.0;
      }
      fVar7 = param_1[1];
      if (fVar7 <= fVar5) {
        if (param_2[1] + fVar7 <= fVar5) {
          fStack_14 = 1.0;
        }
        else {
          fStack_14 = (fVar5 - fVar7) / param_2[1];
        }
      }
      else {
        fStack_14 = 0.0;
      }
      iVar4 = iVar4 + 1;
      local_48 = (float)*param_4;
      fStack_44 = (float)((ulonglong)*param_4 >> 0x20);
      fVar6 = *param_3 + (fVar9 - fVar8) + local_18 * (local_48 - *param_2);
      fVar7 = (fVar5 - fVar7) + param_3[1] + fStack_14 * (fStack_44 - param_2[1]);
      fVar8 = 1.0 / (fVar7 * param_6[7] + fVar6 * param_6[3] + param_6[0xf]);
      local_28 = CONCAT44((fVar7 * param_6[5] + fVar6 * param_6[1] + param_6[0xd]) * fVar8,
                          (*param_6 * fVar6 + fVar7 * param_6[4] + param_6[0xc]) * fVar8);
      *(undefined8 *)(iVar2 + -8 + iVar4 * 8) = local_28;
    } while (iVar4 < *(int *)(pdVar1 + 4) - *(int *)pdVar1 >> 3);
  }
  (*this->vftablePtr->vfunction2)(this);
  __security_check_cookie(uVar3 ^ (uint)&stack0xfffffffc);
  return;
}


