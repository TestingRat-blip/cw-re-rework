// TextShape (engine) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "TextShape.h"

/* plasma::TextShape::TextShape @ 00663240  kind=game  attributed-by=rtti  size=702 */

void __thiscall
plasma::TextShape::TextShape(TextShape *this,int param_1,undefined4 param_2,undefined4 param_3)

{
  int **this_00;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f73fb;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  Shape::Shape((Shape *)this,param_1,param_3);
  local_8 = 0;
  this->vftablePtr = &vftable;
  local_18 = 0xf;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffffff00);
  FUN_0040c280("string",6);
  local_8._0_1_ = 1;
  DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
  ::
  DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
            ((DiscreteAttribute<std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_>
              *)&this[4].field2_0xc,local_2c,param_2);
  local_8._0_1_ = 3;
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
  FUN_0040c280("colors",6);
  local_8._0_1_ = 4;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_>
            ((ContinuousAttribute<plasma::Vector<4,float>_> *)(this + 9),local_44,&local_24);
  local_8._0_1_ = 6;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  FUN_0040c280("strokeColors",0xc);
  this_00 = &this[0xd].Object_data.offset_0x4;
  local_8._0_1_ = 7;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_>
            ((ContinuousAttribute<plasma::Vector<4,float>_> *)this_00,local_5c,&local_24);
  local_8._0_1_ = 9;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_5c[0]);
  }
  local_48 = 0xf;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffffff00);
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffffff00);
  FUN_0040c280("extrusionColors",0xf);
  local_8._0_1_ = 10;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0x3f800000;
  ContinuousAttribute<plasma::Vector<4,float>_>::ContinuousAttribute<plasma::Vector<4,float>_>
            ((ContinuousAttribute<plasma::Vector<4,float>_> *)&this[0x11].field3_0x10,local_44,
             &local_24);
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  this[0x16].Object_data.offset_0x0 = 0;
  this[0x16].Object_data.offset_0x4 = (int *)0x0;
  this[0x16].field2_0xc = 0;
  this[0x16].field3_0x10 = 0;
  this[0x18].vftablePtr = (TextShape_vftable *)0x7;
  this[0x17].field3_0x10 = 0;
  *(undefined2 *)&this[0x17].vftablePtr = 0;
  this[0x18].Object_data.offset_0x0 = 0;
  this[0x18].Object_data.offset_0x4 = (int *)0x0;
  this[0x18].field2_0xc = 0;
  this[0x18].field3_0x10 = 0;
  local_8 = CONCAT31(local_8._1_3_,0xd);
  this[3].field2_0xc = 3;
  FUN_00664ba0(&this[4].field2_0xc);
  FUN_00664ba0((ContinuousAttribute<plasma::Vector<4,float>_> *)(this + 9));
  FUN_00664ba0(this_00);
  FUN_00664ba0(&this[0x11].field3_0x10);
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this[0x19].field3_0x10,0x80000400);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::TextShape::~TextShape @ 00663560  kind=game  attributed-by=rtti  size=291 */

void __thiscall plasma::TextShape::~TextShape(TextShape *this)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &LAB_006f744f;
  local_10 = ExceptionList;
  uVar3 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  local_8 = 3;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  if ((TextShape_vftable *)0x7 < this[0x18].vftablePtr) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this[0x17].vftablePtr);
  }
  this[0x18].vftablePtr = (TextShape_vftable *)0x7;
  this[0x17].field3_0x10 = 0;
  *(undefined2 *)&this[0x17].vftablePtr = 0;
  if ((void *)this[0x15].field2_0xc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[0x15].field2_0xc);
  }
  Attribute::~Attribute((Attribute *)&this[0x11].field3_0x10);
  pvVar1 = (void *)this[0x11].Object_data.offset_0x0;
  local_8._0_1_ = 2;
  if (pvVar1 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
  Attribute::~Attribute((Attribute *)&this[0xd].Object_data.offset_0x4);
  local_8._0_1_ = 1;
  if ((void *)this[0xc].field3_0x10 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[0xc].field3_0x10);
  }
  Attribute::~Attribute((Attribute *)(this + 9));
  piVar2 = this[8].Object_data.offset_0x4;
  local_8 = (uint)local_8._1_3_ << 8;
  if (piVar2 != (int *)0x0) {
    FUN_00452650(piVar2,this[8].field2_0xc,&local_11,this,uVar3);
                    /* WARNING: Subroutine does not return */
    operator_delete(this[8].Object_data.offset_0x4);
  }
  Attribute::~Attribute((Attribute *)&this[4].field2_0xc);
  local_8 = 0xffffffff;
  Shape::~Shape((Shape *)this);
  ExceptionList = local_10;
  return;
}


/* plasma::TextShape::deleting_destructor @ 00663770  kind=game  attributed-by=rtti  size=30 */

TextShape * __thiscall plasma::TextShape::deleting_destructor(TextShape *this,byte param_1)

{
  ~TextShape(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::TextShape::vfunction8 @ 00663c20  kind=game  attributed-by=rtti  size=27 */

void __thiscall plasma::TextShape::vfunction8(TextShape *this,undefined4 *param_1)

{
  undefined4 uVar1;
  
  uVar1 = this[0x19].field2_0xc;
  *param_1 = this[0x19].Object_data.offset_0x4;
  param_1[1] = uVar1;
  return;
}


/* plasma::TextShape::vfunction7 @ 00663c40  kind=game  attributed-by=rtti  size=27 */

void __thiscall plasma::TextShape::vfunction7(TextShape *this,undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = this[0x19].Object_data.offset_0x0;
  *param_1 = this[0x19].vftablePtr;
  param_1[1] = iVar1;
  return;
}


/* plasma::TextShape::vfunction14 @ 00663c60  kind=game  attributed-by=rtti  size=308 */

int * __thiscall plasma::TextShape::vfunction14(TextShape *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_006502e0(this[8].Object_data.offset_0x4 + this[6].Object_data.offset_0x0 * 6,
                               &this->field2_0xc);
  FUN_00661680(&this[4].field2_0xc);
  FUN_00468430(&this[8].Object_data.offset_0x4);
  FUN_00661680(this + 9);
  FUN_0063d400(&this[0xc].field3_0x10);
  FUN_00661680(&this[0xd].Object_data.offset_0x4);
  FUN_0063d400(&this[0x11].Object_data);
  FUN_00661680(&this[0x11].field3_0x10);
  FUN_0063d400(&this[0x15].field2_0xc);
  if ((TextShape *)(piVar1 + 0x73) != this + 0x17) {
    FUN_0040f680(this + 0x17,0,0xffffffff);
  }
  piVar1[0x6f] = this[0x16].Object_data.offset_0x0;
  piVar1[0x70] = (int)this[0x16].Object_data.offset_0x4;
  piVar1[0x71] = this[0x16].field2_0xc;
  piVar1[0x72] = this[0x16].field3_0x10;
  piVar1[0x79] = this[0x18].Object_data.offset_0x0;
  piVar1[0x7b] = this[0x18].field2_0xc;
  piVar1[0x7c] = this[0x18].field3_0x10;
  (**(code **)(*piVar1 + 4))(1);
  return piVar1;
}


/* plasma::TextShape::vfunction3 @ 00663da0  kind=game  attributed-by=rtti  size=271 */

void __thiscall plasma::TextShape::vfunction3(TextShape *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  if (this[0x18].Object_data.offset_0x4 != (int *)0x0) {
    FUN_00639460();
    (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x40))(param_1);
    FUN_0065bc70(this[8].Object_data.offset_0x4 + this[6].Object_data.offset_0x0 * 6,0,0,
                 this[0x16].Object_data.offset_0x0,this[0x16].Object_data.offset_0x4,
                 this[0x16].field2_0xc,this[0x16].field3_0x10,this[0x18].Object_data.offset_0x0,
                 this[10].field2_0xc * 0x10 + this[0xc].field3_0x10,
                 (int)this[0xf].vftablePtr * 0x10 + this[0x11].Object_data.offset_0x0,
                 (int)this[0x13].Object_data.offset_0x4 * 0x10 + this[0x15].field2_0xc,
                 this[0x18].field2_0xc,(byte)this[0x18].field3_0x10 & 1);
    (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x44))(param_1);
    FUN_00639a60();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  return;
}


/* plasma::TextShape::vfunction5 @ 00664210  kind=game  attributed-by=rtti  size=71 */

undefined4 __thiscall plasma::TextShape::vfunction5(TextShape *this,float *param_1)

{
  uint3 uVar1;
  
  uVar1 = (uint3)((uint)param_1 >> 8);
  if (((((float)this[0x19].vftablePtr <= *param_1) &&
       ((float)this[0x19].Object_data.offset_0x0 <= param_1[1])) &&
      (*param_1 <= (float)this[0x19].Object_data.offset_0x4)) &&
     (param_1[1] <= (float)this[0x19].field2_0xc)) {
    return CONCAT31(uVar1,1);
  }
  return (uint)uVar1 << 8;
}


/* plasma::TextShape::vfunction4 @ 00664260  kind=game  attributed-by=rtti  size=1046 */

void __thiscall
plasma::TextShape::vfunction4
          (TextShape *this,float *param_1,float param_2,float *param_3,float *param_4)

{
  uint uVar1;
  float fVar2;
  TextShape_vftable *pTVar3;
  int *piVar4;
  char cVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float local_40;
  float fStack_3c;
  float local_38 [4];
  float local_28 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  fVar11 = *param_1;
  fVar2 = param_1[1];
  fVar9 = 1.0 / (param_4[3] * fVar11 + param_4[7] * fVar2 + param_4[0xf]);
  local_38[3] = fVar9 * (param_4[1] * fVar11 + param_4[5] * fVar2 + param_4[0xd]);
  local_38[2] = fVar9 * (param_4[4] * fVar2 + fVar11 * *param_4 + param_4[0xc]);
  cVar5 = (*this->vftablePtr->vfunction5)(this,local_38 + 2);
  if (cVar5 == '\0') {
    fVar11 = (float)this[0x19].Object_data.offset_0x0;
    pTVar3 = this[0x19].vftablePtr;
    piVar4 = this[0x19].Object_data.offset_0x4;
    fVar2 = param_3[0xd];
    fVar9 = 1.0 / (param_3[3] * (float)pTVar3 + param_3[7] * fVar11 + param_3[0xf]);
    local_28[0] = fVar9 * (*param_3 * (float)pTVar3 + param_3[4] * fVar11 + param_3[0xc]);
    local_28[1] = fVar9 * (param_3[1] * (float)pTVar3 + param_3[5] * fVar11 + fVar2);
    fVar10 = 1.0 / (fVar11 * param_3[7] + param_3[3] * (float)piVar4 + param_3[0xf]);
    fVar9 = (float)this[0x19].field2_0xc;
    local_28[2] = fVar10 * (fVar11 * param_3[4] + *param_3 * (float)piVar4 + param_3[0xc]);
    local_28[3] = fVar10 * (param_3[5] * fVar11 + param_3[1] * (float)piVar4 + fVar2);
    fVar11 = 1.0 / ((float)piVar4 * param_3[3] + fVar9 * param_3[7] + param_3[0xf]);
    local_28[4] = fVar11 * ((float)piVar4 * *param_3 + fVar9 * param_3[4] + param_3[0xc]);
    local_28[5] = fVar11 * (param_3[1] * (float)piVar4 + param_3[5] * fVar9 + fVar2);
    pTVar3 = this[0x19].vftablePtr;
    fVar11 = 1.0 / ((float)pTVar3 * param_3[3] + fVar9 * param_3[7] + param_3[0xf]);
    local_28[7] = fVar11 * (param_3[1] * (float)pTVar3 + param_3[5] * fVar9 + fVar2);
    local_28[6] = fVar11 * ((float)pTVar3 * *param_3 + fVar9 * param_3[4] + param_3[0xc]);
    uVar7 = 0;
    while( true ) {
      uVar1 = uVar7 + 1;
      uVar6 = uVar1 & 0x80000003;
      if ((int)uVar6 < 0) {
        uVar6 = (uVar6 - 1 | 0xfffffffc) + 1;
      }
      fVar11 = local_28[uVar7 * 2 + 1];
      fVar2 = local_28[uVar7 * 2];
      local_38[2] = (float)*(undefined8 *)param_1;
      local_38[3] = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      local_38[2] = local_38[2] - fVar2;
      local_38[3] = local_38[3] - fVar11;
      iVar8 = 0;
      do {
        *(undefined4 *)((int)local_38 + iVar8) =
             *(undefined4 *)((int)(local_28 + uVar6 * 2) + iVar8);
        iVar8 = iVar8 + 4;
      } while (iVar8 < 8);
      local_38[0] = local_38[0] - fVar2;
      local_38[1] = local_38[1] - fVar11;
      fVar11 = local_38[1] * local_38[1] + local_38[0] * local_38[0];
      if (1e-20 <= fVar11) {
        fVar11 = (local_38[3] * local_38[1] + local_38[2] * local_38[0]) / fVar11;
        if (0.0 < fVar11) {
          if (fVar11 < 1.0) {
            local_40 = local_38[2] - local_38[0] * fVar11;
            fStack_3c = local_38[3] - local_38[1] * fVar11;
          }
          else {
            local_40 = (float)*(undefined8 *)param_1;
            fStack_3c = (float)((ulonglong)*(undefined8 *)param_1 >> 0x20);
            local_40 = local_40 - local_28[uVar6 * 2];
            fStack_3c = fStack_3c - local_28[uVar6 * 2 + 1];
          }
          fVar11 = fStack_3c * fStack_3c + local_40 * local_40;
        }
        else {
          fVar11 = local_38[3] * local_38[3] + local_38[2] * local_38[2];
        }
      }
      else {
        fVar11 = local_38[3] * local_38[3] + local_38[2] * local_38[2];
      }
      if (fVar11 <= param_2 * param_2) break;
      uVar7 = uVar1;
      if (3 < (int)uVar1) {
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::TextShape::vfunction2 @ 00664770  kind=game  attributed-by=rtti  size=423 */

void __thiscall plasma::TextShape::vfunction2(TextShape *this)

{
  uint uVar1;
  int *piVar2;
  undefined1 local_6c [64];
  void *local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f7538;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  *(undefined1 *)((int)&this[2].Object_data.offset_0x0 + 1) = 1;
  piVar2 = (int *)FUN_00639800(this + 0x17);
  this[0x18].Object_data.offset_0x4 = piVar2;
  if (piVar2 == (int *)0x0) {
    FUN_0040eb60(L"arial.ttf");
    local_8 = 0;
    piVar2 = (int *)FUN_00639800(local_2c);
    this[0x18].Object_data.offset_0x4 = piVar2;
    local_8 = 0xffffffff;
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c[0]);
    }
  }
  if (this[0x18].Object_data.offset_0x4 == (int *)0x0) {
    this[0x19].vftablePtr = (TextShape_vftable *)0x0;
    this[0x19].Object_data.offset_0x0 = 0;
    this[0x19].Object_data.offset_0x4 = (int *)0x0;
    this[0x19].field2_0xc = 0;
  }
  else {
    if ((this[0x18].field3_0x10 & 1) == 0) {
      FUN_00423e70(uVar1);
      FUN_00639460();
      FUN_0065e720(this[8].Object_data.offset_0x4 + this[6].Object_data.offset_0x0 * 6,local_6c,
                   this[0x16].Object_data.offset_0x0,this[0x16].Object_data.offset_0x4,
                   this[0x16].field2_0xc,this[0x16].field3_0x10,this[0x18].Object_data.offset_0x0,
                   this + 0x19,&this[0x19].Object_data.offset_0x4,this[0x18].field2_0xc,
                   (byte)this[0x18].field3_0x10 & 1,0xffffffff,0);
      FUN_00639a60();
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::TextShape::vfunction15 @ 00664920  kind=game  attributed-by=rtti  size=219 */

void __thiscall plasma::TextShape::vfunction15(TextShape *this,undefined4 param_1)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  if ((this[0x18].Object_data.offset_0x4 != (int *)0x0) && ((this[0x18].field3_0x10 & 1) != 0)) {
    FUN_00639460();
    FUN_0065e720(this[8].Object_data.offset_0x4 + this[6].Object_data.offset_0x0 * 6,param_1,
                 this[0x16].Object_data.offset_0x0,this[0x16].Object_data.offset_0x4,
                 this[0x16].field2_0xc,this[0x16].field3_0x10,this[0x18].Object_data.offset_0x0,
                 this + 0x19,&this[0x19].Object_data.offset_0x4,this[0x18].field2_0xc,
                 (byte)this[0x18].field3_0x10 & 1,0xffffffff,0);
    FUN_00639a60();
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this[0x19].field3_0x10);
  return;
}


