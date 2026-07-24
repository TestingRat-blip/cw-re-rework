// SmoothMeshShape (engine) -- cube. 12 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SmoothMeshShape.h"

/* plasma::SmoothMeshShape::SmoothMeshShape @ 0063c2b0  kind=game  attributed-by=rtti  size=805 */

SmoothMeshShape * __thiscall
plasma::SmoothMeshShape::SmoothMeshShape(SmoothMeshShape *this,int param_1,undefined4 param_2)

{
  uint uVar1;
  double dVar2;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_006f5c78;
  local_14 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_14;
  MeshShape::MeshShape((MeshShape *)this,param_1,param_2);
  local_c = 0;
  this->vftablePtr = &vftable;
  _eh_vector_constructor_iterator_
            (&this[2].SmoothMeshShape_data.field_0x5c,0x60,6,(_func_void_void_ptr *)&LAB_0063c210,
             FUN_0063c700);
  this[2].SmoothMeshShape_data.offset_0x29c = 3;
  this[2].SmoothMeshShape_data.offset_0x2a0 = (void *)0x14;
  *(undefined2 *)&this[2].SmoothMeshShape_data.offset_0x2a4 = 0;
  this[2].SmoothMeshShape_data.offset_0x2a8 = 0;
  this[2].SmoothMeshShape_data.offset_0x2ac = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2b0 = 0;
  this[2].SmoothMeshShape_data.offset_0x2b4 = 0;
  this[2].SmoothMeshShape_data.offset_0x2b8 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2bc = 0;
  this[2].SmoothMeshShape_data.offset_0x2c0 = 0;
  this[2].SmoothMeshShape_data.offset_0x2c4 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2c8 = 0;
  this[2].SmoothMeshShape_data.offset_0x2cc = 0;
  this[2].SmoothMeshShape_data.offset_0x2d0 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2d4 = 0;
  this[2].SmoothMeshShape_data.offset_0x2d8 = 0;
  this[2].SmoothMeshShape_data.offset_0x2dc = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2e0 = 0;
  this[2].SmoothMeshShape_data.offset_0x2e4 = 0;
  this[2].SmoothMeshShape_data.offset_0x2e8 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2ec = 0;
  this[2].SmoothMeshShape_data.offset_0x2f0 = 0;
  this[2].SmoothMeshShape_data.offset_0x2f4 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x2f8 = 0;
  this[2].SmoothMeshShape_data.offset_0x2fc = 0;
  this[2].SmoothMeshShape_data.offset_0x300 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x304 = 0;
  this[2].SmoothMeshShape_data.offset_0x308 = 0;
  this[2].SmoothMeshShape_data.offset_0x30c = 0;
  this[2].SmoothMeshShape_data.offset_0x310 = 0;
  dVar2 = 2.0;
  this[2].SmoothMeshShape_data.offset_0x314 = 0;
  this[2].SmoothMeshShape_data.offset_0x318 = (void *)0x0;
  this[2].SmoothMeshShape_data.offset_0x31c = 0;
  this[2].SmoothMeshShape_data.offset_0x320 = 0;
  this[2].SmoothMeshShape_data.offset_0x324 = 0.0;
  this[2].SmoothMeshShape_data.offset_0x328 = 0;
  this[2].SmoothMeshShape_data.offset_0x32c = 0;
  this[2].SmoothMeshShape_data.offset_0x330 = 0;
  this[2].SmoothMeshShape_data.offset_0x334 = 0;
  *(undefined4 *)&this[2].SmoothMeshShape_data.field_0x338 = 0;
  this[3].vftablePtr = (SmoothMeshShape_vftable *)0x0;
  this[3].Object_data.offset_0x0 = 0;
  this[3].Object_data.offset_0x4 = (int *)0x0;
  this[3].field2_0xc.vftablePtr = (ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *)0x0;
  this[3].field2_0xc.Attribute_data.offset_0x0 = (void *)0x0;
  this[3].field2_0xc.Attribute_data.offset_0x4 = 0;
  this[3].field2_0xc.Attribute_data.offset_0x8 = (void *)0x0;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0xc = 0;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x10 = 0;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x14 = 0;
  this[3].field2_0xc.Attribute_data.offset_0x18 = 0;
  this[3].field2_0xc.Attribute_data.offset_0x1c = 0x3f800000;
  this[3].field2_0xc.Attribute_data.offset_0x20 = (void *)0x3f800000;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x24 = 0;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x28 = 0;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x2c = 0;
  this[3].field2_0xc.Attribute_data.offset_0x30 = 0;
  libm_sse2_sqrt_precise(uVar1);
  this[3].field2_0xc.Attribute_data.offset_0x38 = 0xf;
  this[3].field2_0xc.Attribute_data.offset_0x3c = 0;
  this[3].field2_0xc.Attribute_data.offset_0x34 =
       (uint)(((float)dVar2 - 1.0) / ((float)dVar2 * 0.5));
  this[3].field2_0xc.Attribute_data.offset_0x40 = 0;
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.offset_0x44 = 0;
  (this->field2_0xc).Attribute_data.offset_0x38 = 2;
  InitializeCriticalSectionAndSpinCount
            ((LPCRITICAL_SECTION)
             &this[3].field2_0xc.ContinuousArrayAttribute<plasma::Vector<4,float>_>_data,0x80000400)
  ;
  ExceptionList = local_14;
  return this;
}


/* plasma::SmoothMeshShape::~SmoothMeshShape @ 0063c7f0  kind=game  attributed-by=rtti  size=765 */

void __thiscall plasma::SmoothMeshShape::~SmoothMeshShape(SmoothMeshShape *this)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  undefined1 local_11;
  void *local_10;
  undefined1 *puStack_c;
  uint local_8;
  
  puStack_c = &LAB_006f5e3e;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  iVar1 = this[3].field2_0xc.Attribute_data.offset_0x3c;
  local_8 = 0x12;
  if (iVar1 != 0) {
    FUN_006504c0(iVar1);
  }
  iVar1 = this[3].field2_0xc.Attribute_data.offset_0x40;
  if (iVar1 != 0) {
    FUN_006504c0(iVar1);
  }
  iVar1 = *(int *)&this[3].field2_0xc.Attribute_data.offset_0x44;
  if (iVar1 != 0) {
    FUN_006504c0(iVar1);
  }
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &this[3].field2_0xc.ContinuousArrayAttribute<plasma::Vector<4,float>_>_data);
  iVar1 = *(int *)&this[3].field2_0xc.Attribute_data.field_0x28;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,*(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x2c,&local_11,this,
                 uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&this[3].field2_0xc.Attribute_data.field_0x28);
  }
  iVar1 = *(int *)&this[3].field2_0xc.Attribute_data.field_0x10;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,*(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x14,&local_11,this,
                 uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&this[3].field2_0xc.Attribute_data.field_0x10);
  }
  iVar1 = this[3].field2_0xc.Attribute_data.offset_0x4;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[3].field2_0xc.Attribute_data.offset_0x8,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[3].field2_0xc.Attribute_data.offset_0x4);
  }
  piVar2 = this[3].Object_data.offset_0x4;
  if (piVar2 != (int *)0x0) {
    FUN_00639cf0(piVar2,this[3].field2_0xc.vftablePtr,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete(this[3].Object_data.offset_0x4);
  }
  iVar1 = *(int *)&this[2].SmoothMeshShape_data.field_0x338;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[3].vftablePtr,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&this[2].SmoothMeshShape_data.field_0x338);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x32c;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x330,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x32c);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x320;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x324,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x320);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x314;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x318,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x314);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x308;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x30c,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x308);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x2fc;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x300,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x2fc);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x2f0;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x2f4,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x2f0);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x2e4;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x2e8,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x2e4);
  }
  pvVar3 = (void *)this[2].SmoothMeshShape_data.offset_0x2d8;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  iVar1 = this[2].SmoothMeshShape_data.offset_0x2cc;
  if (iVar1 != 0) {
    FUN_00639cf0(iVar1,this[2].SmoothMeshShape_data.offset_0x2d0,&local_11,this,uVar4);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this[2].SmoothMeshShape_data.offset_0x2cc);
  }
  pvVar3 = (void *)this[2].SmoothMeshShape_data.offset_0x2c0;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)this[2].SmoothMeshShape_data.offset_0x2b4;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  pvVar3 = (void *)this[2].SmoothMeshShape_data.offset_0x2a8;
  if (pvVar3 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar3);
  }
  local_8 = local_8 & 0xffffff00;
  _eh_vector_destructor_iterator_(&this[2].SmoothMeshShape_data.field_0x5c,0x60,6,FUN_0063c700);
  local_8 = 0xffffffff;
  MeshShape::~MeshShape((MeshShape *)this);
  ExceptionList = local_10;
  return;
}


/* plasma::SmoothMeshShape::deleting_destructor @ 0063d820  kind=game  attributed-by=rtti  size=30 */

SmoothMeshShape * __thiscall
plasma::SmoothMeshShape::deleting_destructor(SmoothMeshShape *this,byte param_1)

{
  ~SmoothMeshShape(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::SmoothMeshShape::vfunction14 @ 00640e20  kind=game  attributed-by=rtti  size=856 */

int * __thiscall plasma::SmoothMeshShape::vfunction14(SmoothMeshShape *this)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00650260(&this->field2_0xc);
  FUN_0063ce30(&(this->field2_0xc).ContinuousArrayAttribute<plasma::Vector<4,float>_>_data.
                offset_0x4);
  FUN_0063cf40(&(this->SmoothMeshShape_data).field_0x5c);
  FUN_0063ce30(&(this->SmoothMeshShape_data).field_0x4);
  FUN_0063cf40(&(this->SmoothMeshShape_data).field_0xb4);
  FUN_0063cf40(&(this->SmoothMeshShape_data).field_0x164);
  FUN_0063cf40(&(this->SmoothMeshShape_data).field_0x10c);
  FUN_0063cd20(&(this->SmoothMeshShape_data).field_0x1bc);
  FUN_00661680(&this[1].SmoothMeshShape_data.offset_0x310);
  FUN_0067a7b0(&this[2].field2_0xc.Attribute_data.field_0x10);
  FUN_00661680(&this[2].field2_0xc.Attribute_data.offset_0x1c);
  FUN_0067a7b0(&this[2].field3_0x64.Attribute_data.field_0x10);
  FUN_00661680(&(this->SmoothMeshShape_data).field_0x22c);
  FUN_0063d170(&(this->SmoothMeshShape_data).offset_0x278);
  FUN_00661680(&(this->SmoothMeshShape_data).offset_0x2dc);
  FUN_0063d290(&(this->SmoothMeshShape_data).offset_0x328);
  FUN_00661680(&(this->SmoothMeshShape_data).offset_0x284);
  FUN_0063d170(&(this->SmoothMeshShape_data).offset_0x2d0);
  FUN_00661680(&(this->SmoothMeshShape_data).offset_0x334);
  FUN_0063d050(&this[1].field2_0xc.Attribute_data.offset_0x34);
  FUN_00661680(&this[1].field2_0xc.Attribute_data.offset_0x40);
  FUN_0067a7b0(&this[1].field3_0x64.Attribute_data.offset_0x34);
  FUN_00661680(&this[1].field3_0x64.Attribute_data.offset_0x40);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.field_0x44);
  FUN_00661680(&this[1].SmoothMeshShape_data.field_0x50);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.field_0x9c);
  FUN_00661680(&this[1].SmoothMeshShape_data.field_0xa8);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.field_0xf4);
  FUN_00661680(&this[1].SmoothMeshShape_data.field_0x100);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.field_0x14c);
  FUN_00661680(&this[1].SmoothMeshShape_data.field_0x158);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.field_0x1a4);
  FUN_00661680(&this[1].SmoothMeshShape_data.field_0x1b0);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.field_0x1fc);
  FUN_00661680(&this[1].SmoothMeshShape_data.field_0x208);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.offset_0x254);
  FUN_00661680(&this[1].SmoothMeshShape_data.offset_0x260);
  FUN_0067a7b0(&this[1].SmoothMeshShape_data.offset_0x2ac);
  FUN_00661680(&this[1].SmoothMeshShape_data.offset_0x2b8);
  FUN_0063d050(&this[1].SmoothMeshShape_data.offset_0x304);
  piVar1[0x2c9] = this[2].SmoothMeshShape_data.offset_0x29c;
  piVar1[0x2fe] = *(int *)&this[3].field2_0xc.Attribute_data.field_0x24;
  piVar1[0x2fc] = this[3].field2_0xc.Attribute_data.offset_0x1c;
  piVar1[0x2fd] = (int)this[3].field2_0xc.Attribute_data.offset_0x20;
  FUN_0067a7b0(&(this->SmoothMeshShape_data).field_0x214);
  FUN_0067a7b0(&(this->SmoothMeshShape_data).field_0x220);
  piVar1[0x217] = this[2].field3_0x64.Attribute_data.offset_0x1c;
  piVar1[0x219] = *(int *)&this[2].field3_0x64.Attribute_data.field_0x24;
  piVar1[0x218] = (int)this[2].field3_0x64.Attribute_data.offset_0x20;
  piVar1[0x21a] = *(int *)&this[2].field3_0x64.Attribute_data.field_0x28;
  piVar1[0x302] = this[3].field2_0xc.Attribute_data.offset_0x34;
  FUN_0066b200(&this[2].field3_0x64.Attribute_data.field_0x2c);
  FUN_0063fec0();
  (**(code **)(*piVar1 + 4))(1);
  return piVar1;
}


/* plasma::SmoothMeshShape::vfunction3 @ 00641280  kind=game  attributed-by=rtti  size=153 */

void __thiscall plasma::SmoothMeshShape::vfunction3(SmoothMeshShape *this,undefined4 param_1)

{
  ContinuousArrayAttribute<plasma::Vector<4,float>_>_data *lpCriticalSection;
  int *piVar1;
  
  lpCriticalSection = &this[3].field2_0xc.ContinuousArrayAttribute<plasma::Vector<4,float>_>_data;
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  piVar1 = *(int **)&this[3].field2_0xc.Attribute_data.offset_0x44;
  if ((piVar1 != (int *)0x0) &&
     (((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 4 & 1) != 0)) {
    (**(code **)(*piVar1 + 8))(param_1,(this->Object_data).offset_0x0 + 0x17c);
  }
  piVar1 = (int *)this[3].field2_0xc.Attribute_data.offset_0x3c;
  if ((piVar1 != (int *)0x0) &&
     ((~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 2) & 1) != 0)) {
    (**(code **)(*piVar1 + 8))(param_1,(this->Object_data).offset_0x0 + 0x15c);
  }
  piVar1 = (int *)this[3].field2_0xc.Attribute_data.offset_0x40;
  if ((piVar1 != (int *)0x0) &&
     (((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) != 0)) {
    (**(code **)(*piVar1 + 8))(param_1,(this->Object_data).offset_0x0 + 0x16c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}


/* plasma::SmoothMeshShape::vfunction16 @ 00641320  kind=game  attributed-by=rtti  size=136 */

void __thiscall plasma::SmoothMeshShape::vfunction16(SmoothMeshShape *this,char param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  
  if (param_1 == '\0') {
    if (this[3].field2_0xc.Attribute_data.offset_0x3c != 0) {
      piVar1 = (int *)(this->field2_0xc).Attribute_data.offset_0x40;
      piVar2 = (int *)*piVar1;
      while ((piVar2 != piVar1 && ((~(byte)(*(uint *)(piVar2[4] + 200) >> 2) & 1) == 0))) {
        FUN_005c3ea0();
      }
    }
  }
  else if (this[3].field2_0xc.Attribute_data.offset_0x3c == 0) {
    uVar3 = (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x30))();
    piVar1 = (int *)(this->Object_data).offset_0x0;
    this[3].field2_0xc.Attribute_data.offset_0x3c = uVar3;
    uVar3 = (**(code **)(*piVar1 + 0x30))();
    piVar1 = (int *)(this->Object_data).offset_0x0;
    this[3].field2_0xc.Attribute_data.offset_0x40 = uVar3;
    uVar3 = (**(code **)(*piVar1 + 0x30))();
    *(undefined4 *)&this[3].field2_0xc.Attribute_data.offset_0x44 = uVar3;
    (*this->vftablePtr->vfunction2)(this);
    return;
  }
  return;
}


/* plasma::SmoothMeshShape::vfunction17 @ 00641660  kind=game  attributed-by=rtti  size=796 */

void __thiscall plasma::SmoothMeshShape::vfunction17(SmoothMeshShape *this)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  SmoothMeshShape_vftable *pSVar5;
  ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *pCVar6;
  
  iVar3 = 6;
  do {
    FUN_00671420();
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  this[2].SmoothMeshShape_data.offset_0x2ac = (void *)this[2].SmoothMeshShape_data.offset_0x2a8;
  this[2].SmoothMeshShape_data.offset_0x2b8 = (void *)this[2].SmoothMeshShape_data.offset_0x2b4;
  this[2].SmoothMeshShape_data.offset_0x2c4 = (void *)this[2].SmoothMeshShape_data.offset_0x2c0;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x2cc;
      puVar4 != this[2].SmoothMeshShape_data.offset_0x2d0; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x2d0 = (void *)this[2].SmoothMeshShape_data.offset_0x2cc;
  this[2].SmoothMeshShape_data.offset_0x2dc = (void *)this[2].SmoothMeshShape_data.offset_0x2d8;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x2e4;
      puVar4 != this[2].SmoothMeshShape_data.offset_0x2e8; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x2e8 = (void *)this[2].SmoothMeshShape_data.offset_0x2e4;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x2f0;
      puVar4 != this[2].SmoothMeshShape_data.offset_0x2f4; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x2f4 = (void *)this[2].SmoothMeshShape_data.offset_0x2f0;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x2fc;
      puVar4 != this[2].SmoothMeshShape_data.offset_0x300; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x300 = (void *)this[2].SmoothMeshShape_data.offset_0x2fc;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x308;
      puVar4 != (undefined4 *)this[2].SmoothMeshShape_data.offset_0x30c; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x30c = this[2].SmoothMeshShape_data.offset_0x308;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x314;
      puVar4 != this[2].SmoothMeshShape_data.offset_0x318; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x318 = (void *)this[2].SmoothMeshShape_data.offset_0x314;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x320;
      puVar4 != (undefined4 *)this[2].SmoothMeshShape_data.offset_0x324; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x324 = (float)this[2].SmoothMeshShape_data.offset_0x320;
  for (puVar4 = (undefined4 *)this[2].SmoothMeshShape_data.offset_0x32c;
      puVar4 != (undefined4 *)this[2].SmoothMeshShape_data.offset_0x330; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[2].SmoothMeshShape_data.offset_0x330 = this[2].SmoothMeshShape_data.offset_0x32c;
  for (pSVar5 = *(SmoothMeshShape_vftable **)&this[2].SmoothMeshShape_data.field_0x338;
      pSVar5 != this[3].vftablePtr; pSVar5 = (SmoothMeshShape_vftable *)&pSVar5->vfunction4) {
    if (pSVar5->deleting_destructor != (deleting_destructor *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pSVar5->deleting_destructor);
    }
  }
  this[3].vftablePtr = *(SmoothMeshShape_vftable **)&this[2].SmoothMeshShape_data.field_0x338;
  for (pCVar6 = (ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *)
                this[3].Object_data.offset_0x4; pCVar6 != this[3].field2_0xc.vftablePtr;
      pCVar6 = (ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *)&pCVar6->vfunction4) {
    if (pCVar6->deleting_destructor != (deleting_destructor *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete(pCVar6->deleting_destructor);
    }
  }
  this[3].field2_0xc.vftablePtr =
       (ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *)this[3].Object_data.offset_0x4;
  for (puVar4 = (undefined4 *)this[3].field2_0xc.Attribute_data.offset_0x4;
      puVar4 != this[3].field2_0xc.Attribute_data.offset_0x8; puVar4 = puVar4 + 3) {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  this[3].field2_0xc.Attribute_data.offset_0x8 =
       (void *)this[3].field2_0xc.Attribute_data.offset_0x4;
  for (puVar4 = *(undefined4 **)&this[3].field2_0xc.Attribute_data.field_0x10;
      puVar4 != *(undefined4 **)&this[3].field2_0xc.Attribute_data.field_0x14; puVar4 = puVar4 + 3)
  {
    if ((void *)*puVar4 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)*puVar4);
    }
  }
  *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x14 =
       *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x10;
  puVar1 = &this[2].SmoothMeshShape_data.field_0x48;
  pvVar2 = *(void **)(*(int *)&this[2].SmoothMeshShape_data.field_0x48 + 4);
  if (*(char *)((int)pvVar2 + 0xd) != '\0') {
    *(int *)(*(int *)puVar1 + 4) = *(int *)puVar1;
    *(undefined4 *)*(undefined4 *)puVar1 = *(undefined4 *)puVar1;
    *(int *)(*(int *)puVar1 + 8) = *(int *)puVar1;
    *(undefined4 *)&this[2].SmoothMeshShape_data.field_0x4c = 0;
    if (this[3].field2_0xc.Attribute_data.offset_0x3c != 0) {
      cube::Controller::vfunction12();
    }
    if (this[3].field2_0xc.Attribute_data.offset_0x40 != 0) {
      cube::Controller::vfunction12();
    }
    if (*(int *)&this[3].field2_0xc.Attribute_data.offset_0x44 != 0) {
      cube::Controller::vfunction12();
    }
    return;
  }
  FUN_0042ca80(*(undefined4 *)((int)pvVar2 + 8));
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* plasma::SmoothMeshShape::vfunction9 @ 00641aa0  kind=game  attributed-by=rtti  size=134 */

undefined4 __thiscall
plasma::SmoothMeshShape::vfunction9
          (SmoothMeshShape *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  uint uVar1;
  
  if (((~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 2) & 1) != 0) &&
     (this[3].field2_0xc.Attribute_data.offset_0x3c != 0)) {
    FUN_00674690(param_1,param_2,param_3,param_4);
  }
  if ((((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) != 0) &&
     (this[3].field2_0xc.Attribute_data.offset_0x40 != 0)) {
    FUN_00674690(param_1,param_2,param_3,param_4);
  }
  uVar1 = (uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 4;
  if (((uVar1 & 1) != 0) && (*(int *)&this[3].field2_0xc.Attribute_data.offset_0x44 != 0)) {
    uVar1 = FUN_00674690(param_1,param_2,param_3,param_4);
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* plasma::SmoothMeshShape::vfunction18 @ 00642410  kind=game  attributed-by=rtti  size=18 */

bool __thiscall plasma::SmoothMeshShape::vfunction18(SmoothMeshShape *this)

{
  return (void *)this[2].SmoothMeshShape_data.offset_0x2a8 ==
         this[2].SmoothMeshShape_data.offset_0x2ac;
}


/* plasma::SmoothMeshShape::vfunction5 @ 00642430  kind=game  attributed-by=rtti  size=126 */

undefined4 __thiscall plasma::SmoothMeshShape::vfunction5(SmoothMeshShape *this,undefined4 param_1)

{
  uint uVar1;
  
  if (((~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 2) & 1) != 0) &&
     (this[3].field2_0xc.Attribute_data.offset_0x3c != 0)) {
    uVar1 = FUN_006747f0(param_1);
    if ((char)uVar1 != '\0') goto LAB_0064245d;
  }
  if ((((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) != 0) &&
     (this[3].field2_0xc.Attribute_data.offset_0x40 != 0)) {
    uVar1 = FUN_006747f0(param_1);
    if ((char)uVar1 != '\0') goto LAB_0064245d;
  }
  uVar1 = (uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 4;
  if (((uVar1 & 1) != 0) && (*(int *)&this[3].field2_0xc.Attribute_data.offset_0x44 != 0)) {
    uVar1 = FUN_006747f0(param_1);
    if ((char)uVar1 != '\0') {
LAB_0064245d:
      return CONCAT31((int3)(uVar1 >> 8),1);
    }
  }
  return uVar1 & 0xffffff00;
}


/* plasma::SmoothMeshShape::vfunction4 @ 006424b0  kind=game  attributed-by=rtti  size=179 */

undefined4 __thiscall
plasma::SmoothMeshShape::vfunction4
          (SmoothMeshShape *this,undefined4 param_1,undefined4 param_2,undefined4 param_3,
          undefined4 param_4)

{
  uint uVar1;
  
  if ((((((~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 2) & 1) == 0) ||
        (this[3].field2_0xc.Attribute_data.offset_0x3c == 0)) ||
       (uVar1 = FUN_00674970(param_1,param_2,param_3,param_4), (char)uVar1 == '\0')) &&
      (((((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) == 0 ||
        (this[3].field2_0xc.Attribute_data.offset_0x40 == 0)) ||
       (uVar1 = FUN_00674970(param_1,param_2,param_3,param_4), (char)uVar1 == '\0')))) &&
     (((uVar1 = (uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 4, (uVar1 & 1) == 0 ||
       (*(int *)&this[3].field2_0xc.Attribute_data.offset_0x44 == 0)) ||
      (uVar1 = FUN_00674970(param_1,param_2,param_3,param_4), (char)uVar1 == '\0')))) {
    return uVar1 & 0xffffff00;
  }
  return CONCAT31((int3)(uVar1 >> 8),1);
}


/* plasma::SmoothMeshShape::vfunction2 @ 00644fa0  kind=game  attributed-by=rtti  size=15765 */

void __thiscall plasma::SmoothMeshShape::vfunction2(SmoothMeshShape *this,char param_1)

{
  void *_Dst;
  undefined8 uVar1;
  undefined8 uVar2;
  int *piVar3;
  undefined8 *puVar4;
  float *pfVar5;
  SmoothMeshShape *pSVar6;
  byte bVar7;
  char cVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  float **ppfVar13;
  int iVar14;
  int *piVar15;
  undefined4 *puVar16;
  float *pfVar17;
  undefined4 *puVar18;
  float *pfVar19;
  uint *puVar20;
  float *pfVar21;
  float10 fVar22;
  float fVar23;
  double dVar24;
  float fVar25;
  double dVar26;
  undefined1 *puVar27;
  undefined1 *puVar28;
  undefined8 *puVar29;
  undefined4 uVar30;
  void *pvVar31;
  undefined1 auStack_3e0 [7];
  bool bStack_3d9;
  int *piStack_3d8;
  undefined4 *puStack_3d4;
  uint *puStack_3d0;
  float *pfStack_3cc;
  int *piStack_3c8;
  uint uStack_3c4;
  int *piStack_3c0;
  float *pfStack_3bc;
  float *pfStack_3b8;
  void *pvStack_3b4;
  float fStack_3b0;
  float fStack_3ac;
  int *piStack_3a8;
  int *piStack_3a4;
  int **ppiStack_3a0;
  int iStack_39c;
  undefined1 *puStack_398;
  float *pfStack_394;
  int *piStack_390;
  int *piStack_38c;
  SmoothMeshShape *local_388;
  uint uStack_384;
  uint *puStack_380;
  undefined4 *puStack_37c;
  uint uStack_378;
  int *piStack_374;
  float *pfStack_370;
  float fStack_36c;
  float *pfStack_368;
  int *piStack_364;
  float fStack_360;
  float fStack_35c;
  int *piStack_358;
  uint uStack_354;
  float *pfStack_350;
  float fStack_34c;
  float fStack_348;
  float fStack_344;
  float fStack_340;
  float fStack_33c;
  float fStack_338;
  float fStack_334;
  undefined8 uStack_330;
  uint *puStack_328;
  int *piStack_324;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined1 auStack_310 [8];
  float fStack_308;
  float fStack_304;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  float fStack_2f0;
  float fStack_2ec;
  float fStack_2e8;
  float fStack_2e4;
  float fStack_2e0;
  float fStack_2dc;
  float fStack_2d8;
  float fStack_2d4;
  float fStack_2d0;
  float fStack_2cc;
  float fStack_2c8;
  float fStack_2c4;
  float fStack_2c0;
  float fStack_2bc;
  float fStack_2b8;
  float fStack_2b4;
  undefined8 uStack_2b0;
  float fStack_2a8;
  float fStack_2a4;
  undefined8 uStack_2a0;
  float fStack_298;
  float fStack_294;
  float fStack_290;
  float fStack_28c;
  float fStack_288;
  float fStack_284;
  float fStack_280;
  float fStack_27c;
  float fStack_278;
  float fStack_274;
  float fStack_270;
  float fStack_26c;
  undefined8 uStack_268;
  undefined8 uStack_260;
  float fStack_258;
  float fStack_254;
  undefined8 uStack_250;
  undefined8 uStack_248;
  float fStack_240;
  float fStack_23c;
  float fStack_238;
  float fStack_234;
  float fStack_230;
  float fStack_22c;
  float fStack_228;
  float fStack_224;
  undefined8 uStack_220;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  undefined8 uStack_200;
  float fStack_1f8;
  float fStack_1f4;
  undefined8 uStack_1f0;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  undefined8 uStack_1d8;
  float fStack_1d0;
  float fStack_1cc;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  float fStack_1b8;
  float fStack_1b4;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  int *piStack_190;
  undefined4 *puStack_18c;
  float fStack_188;
  float fStack_184;
  float afStack_180 [2];
  undefined8 uStack_178;
  float fStack_170;
  float fStack_16c;
  undefined8 uStack_168;
  float afStack_160 [3];
  undefined4 uStack_154;
  float afStack_150 [3];
  undefined4 uStack_144;
  float afStack_140 [2];
  undefined4 *puStack_138;
  int *piStack_134;
  float afStack_130 [5];
  undefined4 uStack_11c;
  float afStack_118 [3];
  undefined4 uStack_10c;
  float afStack_108 [3];
  undefined4 uStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_dc;
  float fStack_c8;
  float fStack_c4;
  float fStack_bc;
  undefined1 auStack_ac [16];
  undefined1 auStack_9c [16];
  undefined1 auStack_8c [8];
  undefined1 auStack_84 [16];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [24];
  undefined1 auStack_3c [16];
  undefined1 auStack_2c [16];
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  uint local_c;
  
  local_c = DAT_0076aa78 ^ (uint)auStack_3e0;
  local_388 = this;
  EnterCriticalSection
            ((LPCRITICAL_SECTION)
             &this[3].field2_0xc.ContinuousArrayAttribute<plasma::Vector<4,float>_>_data);
  bVar7 = ~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 2) & 1;
  if ((bVar7 == 0) || (this[3].field2_0xc.Attribute_data.offset_0x3c != 0)) {
    if ((bVar7 == 0) && (iVar11 = this[3].field2_0xc.Attribute_data.offset_0x3c, iVar11 != 0)) {
      FUN_006504c0(iVar11);
      this[3].field2_0xc.Attribute_data.offset_0x3c = 0;
    }
  }
  else {
    uVar9 = (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x30))();
    this[3].field2_0xc.Attribute_data.offset_0x3c = uVar9;
  }
  uVar10 = (uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1;
  if (((uVar10 & 1) == 0) || (this[3].field2_0xc.Attribute_data.offset_0x40 != 0)) {
    if (((uVar10 & 1) == 0) && (iVar11 = this[3].field2_0xc.Attribute_data.offset_0x40, iVar11 != 0)
       ) {
      FUN_006504c0(iVar11);
      this[3].field2_0xc.Attribute_data.offset_0x40 = 0;
    }
  }
  else {
    uVar9 = (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x30))();
    this[3].field2_0xc.Attribute_data.offset_0x40 = uVar9;
  }
  uVar10 = (uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 4;
  if (((uVar10 & 1) == 0) || (*(int *)&this[3].field2_0xc.Attribute_data.offset_0x44 != 0)) {
    if (((uVar10 & 1) == 0) &&
       (iVar11 = *(int *)&this[3].field2_0xc.Attribute_data.offset_0x44, iVar11 != 0)) {
      FUN_006504c0(iVar11);
      *(undefined4 *)&this[3].field2_0xc.Attribute_data.offset_0x44 = 0;
    }
  }
  else {
    uVar9 = (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x30))();
    *(undefined4 *)&this[3].field2_0xc.Attribute_data.offset_0x44 = uVar9;
  }
  if (param_1 == '\0') {
    if (*(char *)&(this->field3_0x64).Attribute_data.offset_0x3c != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 1;
      *(undefined1 *)&(this->field3_0x64).Attribute_data.offset_0x3c = 0;
    }
    if ((this->SmoothMeshShape_data).field_0xa4 != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 4;
      (this->SmoothMeshShape_data).field_0xa4 = 0;
    }
    if ((this->SmoothMeshShape_data).field_0x4c != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 2;
      (this->SmoothMeshShape_data).field_0x4c = 0;
    }
    if ((this->SmoothMeshShape_data).field_0x204 != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 1;
      (this->SmoothMeshShape_data).field_0x204 = 0;
    }
    if ((this->SmoothMeshShape_data).field_0xfc != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 4;
      (this->SmoothMeshShape_data).field_0xfc = 0;
    }
    if ((this->SmoothMeshShape_data).field_0x1ac != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 4;
      (this->SmoothMeshShape_data).field_0x1ac = 0;
    }
    if ((this->SmoothMeshShape_data).field_0x154 != '\0') {
      puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
      *puVar16 = *puVar16 | 4;
      (this->SmoothMeshShape_data).field_0x154 = 0;
    }
  }
  else {
    this[3].field2_0xc.Attribute_data.offset_0x38 = 0xf;
  }
  piVar15 = (int *)**(int **)&(this->SmoothMeshShape_data).field_0x1b0;
  piVar3 = *(int **)(this->field3_0x64).Attribute_data.offset_0x40;
  if (((piVar15[1] - *piVar15 >> 1 ^ piVar3[1] - *piVar3) & 0xfffffff8U) != 0) {
    FUN_0042be50(piVar3[1] - *piVar3 >> 3);
  }
  piVar15 = (int *)**(int **)&(this->SmoothMeshShape_data).field_0x158;
  piVar3 = *(int **)(this->field3_0x64).Attribute_data.offset_0x40;
  if (((piVar15[1] - *piVar15 >> 1 ^ piVar3[1] - *piVar3) & 0xfffffff8U) != 0) {
    FUN_0042be50(piVar3[1] - *piVar3 >> 3);
  }
  iVar11 = FUN_0063deb0();
  puVar16 = &this[3].field2_0xc.Attribute_data.offset_0x38;
  *puVar16 = *puVar16 | 1;
  pfVar21 = (float *)(iVar11 + -1);
  pfStack_3b8 = pfVar21;
  if (*puVar16 != 0) {
    FUN_0066b9c0();
  }
  if ((int)pfVar21 < 0) {
    MeshShape::vfunction20((MeshShape *)this);
  }
  else {
    FUN_0066c050();
    if (*(int *)(*(int *)&this[2].field2_0xc.Attribute_data.field_0x10 +
                this[1].SmoothMeshShape_data.offset_0x330 * 4) == -1) {
      *(undefined4 *)&this[2].SmoothMeshShape_data = 0;
    }
    else if ((*(int *)&this[2].SmoothMeshShape_data == 0) ||
            (*(int *)(*(int *)&this[2].SmoothMeshShape_data + 0x4c) !=
             *(int *)(*(int *)&this[2].field2_0xc.Attribute_data.field_0x10 +
                     this[1].SmoothMeshShape_data.offset_0x330 * 4))) {
      uVar9 = FUN_00659ef0(*(undefined4 *)
                            (*(int *)&this[2].field2_0xc.Attribute_data.field_0x10 +
                            this[1].SmoothMeshShape_data.offset_0x330 * 4));
      *(undefined4 *)&this[2].SmoothMeshShape_data = uVar9;
    }
    if (*(int *)(*(int *)&this[2].field3_0x64.Attribute_data.field_0x10 +
                this[2].field2_0xc.Attribute_data.offset_0x3c * 4) == -1) {
      *(undefined4 *)&this[2].SmoothMeshShape_data.field_0x4 = 0;
    }
    else {
      iVar11 = *(int *)&this[2].SmoothMeshShape_data.field_0x4;
      if ((iVar11 == 0) ||
         (*(int *)(iVar11 + 0x4c) !=
          *(int *)(*(int *)&this[2].field3_0x64.Attribute_data.field_0x10 +
                  this[2].field2_0xc.Attribute_data.offset_0x3c * 4))) {
        uVar9 = FUN_00659ef0(*(undefined4 *)
                              (*(int *)&this[2].field3_0x64.Attribute_data.field_0x10 +
                              this[2].field2_0xc.Attribute_data.offset_0x3c * 4));
        *(undefined4 *)&this[2].SmoothMeshShape_data.field_0x4 = uVar9;
      }
    }
    if (((~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 2) & 1) != 0) &&
       ((*(byte *)&this[2].field3_0x64.Attribute_data.offset_0x1c & 1) == 0)) {
      FUN_00642ad0(*(undefined4 *)&(this->field3_0x64).Attribute_data.field_0x14,
                   *(undefined4 *)&(this->SmoothMeshShape_data).field_0x7c,
                   *(undefined4 *)&(this->SmoothMeshShape_data).field_0x24);
    }
  }
  piStack_38c = &this[2].SmoothMeshShape_data.offset_0x320;
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  piStack_3a4 = &this[2].SmoothMeshShape_data.offset_0x2f0;
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  piStack_390 = &this[2].SmoothMeshShape_data.offset_0x314;
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  piStack_364 = &this[2].SmoothMeshShape_data.offset_0x32c;
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  piStack_358 = (int *)&this[3].field2_0xc.Attribute_data.field_0x28;
  FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
               *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  ppiStack_3a0 = &this[3].Object_data.offset_0x4;
  if (((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) == 0) {
    FUN_00639cf0(*ppiStack_3a0,this[3].field2_0xc.vftablePtr,&bStack_3d9,pfStack_3b8);
    this[3].field2_0xc.vftablePtr =
         (ContinuousArrayAttribute<plasma::Vector<4,float>_>_vftable *)
         this[3].Object_data.offset_0x4;
    piStack_3a8 = &this[3].field2_0xc.Attribute_data.offset_0x4;
    FUN_00639cf0(*piStack_3a8,this[3].field2_0xc.Attribute_data.offset_0x8,&bStack_3d9,pfStack_3b8);
    this[3].field2_0xc.Attribute_data.offset_0x8 =
         (void *)this[3].field2_0xc.Attribute_data.offset_0x4;
    puStack_398 = &this[3].field2_0xc.Attribute_data.field_0x10;
    FUN_00639cf0(*(undefined4 *)puStack_398,
                 *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x14,&bStack_3d9,
                 pfStack_3b8);
    *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x14 =
         *(undefined4 *)&this[3].field2_0xc.Attribute_data.field_0x10;
    FUN_00639cf0(*(undefined4 *)&this[2].SmoothMeshShape_data.field_0x338,this[3].vftablePtr,
                 &bStack_3d9,pfStack_3b8);
    this[3].vftablePtr = *(SmoothMeshShape_vftable **)&this[2].SmoothMeshShape_data.field_0x338;
  }
  else {
    FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
                 *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
    piStack_3a8 = &this[3].field2_0xc.Attribute_data.offset_0x4;
    FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
                 *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
    puStack_398 = &this[3].field2_0xc.Attribute_data.field_0x10;
    FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
                 *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
    FUN_00487380((*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
                 *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  }
  puStack_37c = (undefined4 *)
                (CONCAT31(puStack_37c._1_3_,
                          ~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 3)) &
                0xffffff01);
  uStack_354 = FUN_0063deb0();
  dVar26 = 2.0;
  uVar10 = uStack_354;
  if ((int)uStack_354 < 0) {
    uVar10 = -uStack_354;
  }
  dVar24 = 1.0;
  while( true ) {
    if ((uVar10 & 1) != 0) {
      dVar24 = dVar24 * dVar26;
    }
    uVar10 = uVar10 >> 1;
    if (uVar10 == 0) break;
    dVar26 = dVar26 * dVar26;
  }
  if ((int)uStack_354 < 0) {
    dVar24 = 1.0 / dVar24;
  }
  uStack_378 = (uint)dVar24;
  puStack_3d0 = (uint *)0x0;
  if (0 < (*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
          *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc) {
    pfStack_3cc = (float *)0x0;
    uStack_3c4 = 0;
    do {
      piVar15 = (int *)(*(int *)&this[2].SmoothMeshShape_data.field_0x50 + uStack_3c4);
      if ((~(byte)((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 3) & 1) == 0) {
        piStack_3c0 = (int *)(((piVar15[1] - *piVar15 >> 2) + -1) * uStack_378 + 1);
      }
      else {
        piStack_3c0 = (int *)((piVar15[1] - *piVar15 >> 2) * uStack_378);
      }
      FUN_0042bea0(piStack_3c0);
      FUN_0042bf80(piStack_3c0);
      FUN_0042bf80(piStack_3c0);
      FUN_0042bf80(piStack_3c0);
      FUN_0042bf80(piStack_3c0);
      FUN_0040d9d0(piStack_3c0);
      FUN_0042bea0(piStack_3c0);
      uVar10 = this[2].field3_0x64.Attribute_data.offset_0x1c;
      if ((uVar10 >> 1 & 1) != 0) {
        piVar15 = piStack_3c0;
        if ((~(byte)(uVar10 >> 3) & 1) != 0) {
          piVar15 = (int *)((int)piStack_3c0 + 1);
        }
        FUN_0040d9d0(piVar15);
        piVar15 = this[3].Object_data.offset_0x4;
        *(undefined4 *)((int)piVar15 + uStack_3c4 + 4) = *(undefined4 *)((int)piVar15 + uStack_3c4);
        iVar11 = this[3].field2_0xc.Attribute_data.offset_0x4;
        *(undefined4 *)(iVar11 + 4 + uStack_3c4) = *(undefined4 *)(iVar11 + uStack_3c4);
        iVar11 = *(int *)&this[3].field2_0xc.Attribute_data.field_0x10;
        *(undefined4 *)(iVar11 + 4 + uStack_3c4) = *(undefined4 *)(iVar11 + uStack_3c4);
      }
      puStack_3d4 = (undefined4 *)
                    (*(int *)&this[3].field2_0xc.Attribute_data.field_0x28 + uStack_3c4);
      pvVar31 = (void *)puStack_3d4[1];
      pvStack_3b4 = (void *)*puStack_3d4;
      piStack_3d8 = (int *)((int)pvVar31 - (int)pvStack_3b4 >> 2);
      if (piStack_3c0 < piStack_3d8) {
        _Dst = (void *)((int)pvStack_3b4 + (int)piStack_3c0 * 4);
        this = local_388;
        if (_Dst == pvStack_3b4) {
          puStack_3d4[1] = *puStack_3d4;
        }
        else if (_Dst != pvVar31) {
          memmove(_Dst,pvVar31,0);
          puStack_3d4[1] = _Dst;
          this = local_388;
        }
      }
      else if (piStack_3d8 < piStack_3c0) {
        FUN_0046de30(&pfStack_394,pvVar31,(int)piStack_3c0 - (int)piStack_3d8,&pfStack_3cc);
      }
      puStack_3d0 = (uint *)((int)puStack_3d0 + 1);
      uStack_3c4 = uStack_3c4 + 0xc;
    } while ((int)puStack_3d0 <
             (*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
             *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  }
  iStack_39c = 0;
  if (0 < (*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
          *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc) {
    do {
      pfVar21 = (float *)(iStack_39c * 0xc);
      puStack_3d0 = (uint *)(*(int *)&this[2].SmoothMeshShape_data.field_0x50 + (int)pfVar21);
      uStack_384 = *puStack_3d0;
      piStack_3c8 = (int *)0x0;
      if (0 < (int)(puStack_3d0[1] - uStack_384 & 0xfffffffc)) {
        fStack_36c = (float)(uStack_378 * 0x10);
        pfStack_3bc = (float *)(uStack_378 * 4);
        pfStack_3cc = (float *)(uStack_378 * 8);
        puStack_3d4 = (undefined4 *)0x0;
        piStack_3c0 = (int *)0x0;
        piStack_3d8 = (int *)0x0;
        do {
          iVar11 = *(int *)(uStack_384 + (int)piStack_3c8 * 4);
          iVar14 = **(int **)((this->field3_0x64).Attribute_data.offset_0x40 +
                             *(int *)&(this->field3_0x64).Attribute_data.field_0x14 * 4);
          puVar16 = (undefined4 *)(*(int *)((int)pfVar21 + *piStack_38c) + (int)piStack_3d8);
          *puVar16 = *(undefined4 *)(iVar14 + iVar11 * 8);
          puVar16[1] = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
          puVar18 = (undefined4 *)
                    (*(int *)(*puStack_3d0 + (int)piStack_3c8 * 4) * 0x10 +
                    **(int **)(*(int *)&(local_388->SmoothMeshShape_data).field_0xa8 +
                              *(int *)&(local_388->SmoothMeshShape_data).field_0x7c * 4));
          puVar16 = (undefined4 *)
                    (*(int *)((int)pfVar21 + local_388[2].SmoothMeshShape_data.offset_0x2e4) +
                    (int)puStack_3d4);
          *puVar16 = *puVar18;
          puVar16[1] = puVar18[1];
          puVar16[2] = puVar18[2];
          puVar16[3] = puVar18[3];
          iVar11 = *(int *)(*puStack_3d0 + (int)piStack_3c8 * 4);
          iVar14 = **(int **)(*(int *)&(local_388->SmoothMeshShape_data).field_0x50 +
                             *(int *)&(local_388->SmoothMeshShape_data).field_0x24 * 4);
          puVar16 = (undefined4 *)(*(int *)((int)pfVar21 + *piStack_364) + (int)piStack_3d8);
          *puVar16 = *(undefined4 *)(iVar14 + iVar11 * 8);
          puVar16[1] = *(undefined4 *)(iVar14 + 4 + iVar11 * 8);
          *(undefined4 *)((int)piStack_3c0 + *(int *)((int)pfVar21 + *piStack_358)) =
               *(undefined4 *)
                (*(int *)&(local_388->SmoothMeshShape_data).field_0x214 +
                *(int *)(*puStack_3d0 + (int)piStack_3c8 * 4) * 4);
          if (((uint)local_388[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) != 0) {
            puVar18 = (undefined4 *)
                      (*(int *)(*puStack_3d0 + (int)piStack_3c8 * 4) * 0x10 +
                      **(int **)(*(int *)&(local_388->SmoothMeshShape_data).field_0x100 +
                                *(int *)&(local_388->SmoothMeshShape_data).field_0xd4 * 4));
            puVar16 = (undefined4 *)
                      (*(int *)((int)pfVar21 + local_388[2].SmoothMeshShape_data.offset_0x2f0) +
                      (int)puStack_3d4);
            *puVar16 = *puVar18;
            puVar16[1] = puVar18[1];
            puVar16[2] = puVar18[2];
            puVar16[3] = puVar18[3];
            *(undefined4 *)((int)piStack_3c0 + *(int *)((int)pfVar21 + *piStack_390)) =
                 *(undefined4 *)
                  (**(int **)(*(int *)&(local_388->SmoothMeshShape_data).field_0x208 +
                             *(int *)&(local_388->SmoothMeshShape_data).field_0x1dc * 4) +
                  *(int *)(*puStack_3d0 + (int)piStack_3c8 * 4) * 4);
            pfVar19 = (float *)(*(int *)((int)pfVar21 + *piStack_390) + (int)piStack_3c0);
            if (*pfVar19 <= 0.1 && *pfVar19 != 0.1) {
              *(undefined4 *)(*(int *)((int)pfVar21 + *piStack_390) + (int)piStack_3c0) = 0x3dcccccd
              ;
            }
          }
          if (((uint)local_388[2].field3_0x64.Attribute_data.offset_0x1c >> 4 & 1) != 0) {
            puVar18 = (undefined4 *)
                      (*(int *)(*puStack_3d0 + (int)piStack_3c8 * 4) * 0x10 +
                      **(int **)(*(int *)&(local_388->SmoothMeshShape_data).field_0x1b0 +
                                *(int *)&(local_388->SmoothMeshShape_data).field_0x184 * 4));
            puVar16 = (undefined4 *)
                      (*(int *)((int)pfVar21 + local_388[2].SmoothMeshShape_data.offset_0x2fc) +
                      (int)puStack_3d4);
            *puVar16 = *puVar18;
            puVar16[1] = puVar18[1];
            puVar16[2] = puVar18[2];
            puVar16[3] = puVar18[3];
            puVar18 = (undefined4 *)
                      (*(int *)(*puStack_3d0 + (int)piStack_3c8 * 4) * 0x10 +
                      **(int **)(*(int *)&(local_388->SmoothMeshShape_data).field_0x158 +
                                *(int *)&(local_388->SmoothMeshShape_data).field_0x12c * 4));
            puVar16 = (undefined4 *)
                      (*(int *)((int)pfVar21 + local_388[2].SmoothMeshShape_data.offset_0x308) +
                      (int)puStack_3d4);
            *puVar16 = *puVar18;
            puVar16[1] = puVar18[1];
            puVar16[2] = puVar18[2];
            puVar16[3] = puVar18[3];
          }
          piStack_3d8 = piStack_3d8 + uStack_378 * 2;
          piStack_3c0 = piStack_3c0 + uStack_378;
          puStack_3d4 = (undefined4 *)((int)puStack_3d4 + (int)fStack_36c);
          uStack_384 = *puStack_3d0;
          piStack_3c8 = (int *)((int)piStack_3c8 + 1);
          this = local_388;
        } while ((int)piStack_3c8 < (int)(puStack_3d0[1] - uStack_384) >> 2);
      }
      puStack_3d4 = (undefined4 *)0x0;
      uVar10 = uStack_354;
      pfStack_394 = pfVar21;
      if (0 < (int)uStack_354) {
        do {
          dVar26 = 2.0;
          uVar12 = uVar10;
          if ((int)uVar10 < 0) {
            uVar12 = -uVar10;
          }
          dVar24 = 1.0;
          while( true ) {
            if ((uVar12 & 1) != 0) {
              dVar24 = dVar24 * dVar26;
            }
            uVar12 = uVar12 >> 1;
            if (uVar12 == 0) break;
            dVar26 = dVar26 * dVar26;
          }
          if ((int)uVar10 < 0) {
            dVar24 = 1.0 / dVar24;
          }
          piStack_3c8 = (int *)(int)dVar24;
          iVar11 = *piStack_38c;
          puStack_3d0 = (uint *)((uint)(*(int *)(iVar11 + 4 + (int)pfVar21) -
                                        *(int *)(iVar11 + (int)pfVar21) >> 3) / (uint)piStack_3c8);
          uStack_384 = uVar10;
          FUN_0063ad70(iVar11 + (int)pfVar21,*piStack_358 + (int)pfVar21,piStack_3c8,puStack_3d0,
                       puStack_37c,local_388[3].field2_0xc.Attribute_data.offset_0x34,puStack_3d4);
          this = local_388;
          FUN_0063ad70(local_388[2].SmoothMeshShape_data.offset_0x32c + (int)pfVar21,
                       *(int *)&local_388[3].field2_0xc.Attribute_data.field_0x28 + (int)pfVar21,
                       piStack_3c8,puStack_3d0,puStack_37c,
                       local_388[3].field2_0xc.Attribute_data.offset_0x34,puStack_3d4);
          FUN_0063b360(this[2].SmoothMeshShape_data.offset_0x2e4 + (int)pfVar21,
                       *(int *)&this[3].field2_0xc.Attribute_data.field_0x28 + (int)pfVar21,
                       piStack_3c8,puStack_3d0,puStack_37c,
                       this[3].field2_0xc.Attribute_data.offset_0x34,puStack_3d4);
          if (((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 1 & 1) != 0) {
            FUN_0063b360(this[2].SmoothMeshShape_data.offset_0x2f0 + (int)pfVar21,
                         *(int *)&this[3].field2_0xc.Attribute_data.field_0x28 + (int)pfVar21,
                         piStack_3c8,puStack_3d0,puStack_37c,
                         this[3].field2_0xc.Attribute_data.offset_0x34,puStack_3d4);
            FUN_0063a980(this[2].SmoothMeshShape_data.offset_0x314 + (int)pfVar21,
                         *(int *)&this[3].field2_0xc.Attribute_data.field_0x28 + (int)pfVar21,
                         piStack_3c8,puStack_3d0,puStack_37c,
                         this[3].field2_0xc.Attribute_data.offset_0x34,puStack_3d4);
          }
          if (((uint)this[2].field3_0x64.Attribute_data.offset_0x1c >> 4 & 1) != 0) {
            FUN_0063bba0(this[2].SmoothMeshShape_data.offset_0x2fc + (int)pfVar21,piStack_3c8,
                         puStack_3d0,puStack_37c,this[3].field2_0xc.Attribute_data.offset_0x34);
            FUN_0063bba0(this[2].SmoothMeshShape_data.offset_0x308 + (int)pfVar21,piStack_3c8,
                         puStack_3d0,puStack_37c,this[3].field2_0xc.Attribute_data.offset_0x34);
          }
          puStack_3d4 = (undefined4 *)((int)puStack_3d4 + 1);
          uStack_384 = uStack_384 - 1;
          uVar10 = uStack_384;
        } while ((int)puStack_3d4 < (int)uStack_354);
      }
      uVar10 = this[2].field3_0x64.Attribute_data.offset_0x1c;
      if ((uVar10 >> 1 & 1) != 0) {
        piStack_3d8 = (int *)this[2].SmoothMeshShape_data.offset_0x320;
        pvStack_3b4 = (void *)(*(int *)((int)(pfVar21 + 1) + (int)piStack_3d8) -
                               *(int *)((int)pfVar21 + (int)piStack_3d8) >> 3);
        fStack_3b0 = 0.0;
        if ((~(byte)(uVar10 >> 3) & 1) != 0) {
          pvStack_3b4 = (void *)((int)pvStack_3b4 + 1);
        }
        iVar11 = 0;
        if (0 < (int)(*(int *)((int)(pfVar21 + 1) + (int)piStack_3d8) -
                      *(int *)((int)pfVar21 + (int)piStack_3d8) & 0xfffffff8U)) {
          do {
            iVar11 = iVar11 + 1;
          } while (iVar11 < *(int *)((int)(pfVar21 + 1) + (int)piStack_3d8) -
                            *(int *)((int)pfVar21 + (int)piStack_3d8) >> 3);
        }
        fStack_35c = (float)*(int *)&local_388[2].field3_0x64.Attribute_data.field_0x28;
        uStack_384 = 0;
        this = local_388;
        if (0 < (int)pvStack_3b4) {
          do {
            pSVar6 = local_388;
            iVar11 = local_388[2].SmoothMeshShape_data.offset_0x320;
            uStack_3c4 = uStack_384 %
                         (uint)(*(int *)(iVar11 + 4 + (int)pfVar21) -
                                *(int *)(iVar11 + (int)pfVar21) >> 3);
            piVar15 = local_388[3].Object_data.offset_0x4;
            *(int *)(*(int *)((int)pfVar21 + *(int *)&local_388[2].SmoothMeshShape_data.field_0x338)
                    + uStack_384 * 4) =
                 *(int *)((int)(piVar15 + 1) + (int)pfVar21) - *(int *)((int)piVar15 + (int)pfVar21)
                 >> 3;
            bVar7 = ~(byte)((uint)local_388[2].field3_0x64.Attribute_data.offset_0x1c >> 3) & 1;
            if ((bVar7 == 0) && (uStack_3c4 == 0)) {
              pfStack_3cc = (float *)*piStack_38c;
              puVar29 = *(undefined8 **)((int)pfVar21 + (int)pfStack_3cc);
              uVar1 = *puVar29;
              uStack_1d8._0_4_ = (float)uVar1;
              puStack_3d4 = (undefined4 *)((float)uStack_1d8 - *(float *)(puVar29 + 1));
              uStack_1d8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              fVar25 = uStack_1d8._4_4_ - *(float *)((int)puVar29 + 0xc);
              uStack_1d8 = uVar1;
              if (fVar25 * fVar25 + (float)puStack_3d4 * (float)puStack_3d4 == 0.0) {
                uStack_260._0_4_ = (float)*puVar29;
                uVar10 = (((int)(uStack_378 + 1) / (int)uStack_378) * uStack_378) %
                         (uint)(*(int *)((int)(pfVar21 + 1) + (int)pfStack_3cc) -
                                *(int *)((int)pfVar21 + (int)pfStack_3cc) >> 3);
                puStack_3d4 = (undefined4 *)((float)uStack_260 - *(float *)(puVar29 + uVar10));
                uStack_260._4_4_ = (float)((ulonglong)*puVar29 >> 0x20);
                fVar25 = uStack_260._4_4_ - *(float *)((int)puVar29 + uVar10 * 8 + 4);
                uStack_260 = CONCAT44(fVar25,puStack_3d4);
                uStack_1d8 = uStack_260;
              }
              piStack_3d8 = (int *)-fVar25;
              dVar26 = (double)((float)piStack_3d8 * (float)piStack_3d8 +
                               (float)puStack_3d4 * (float)puStack_3d4);
              libm_sse2_sqrt_precise();
              fVar25 = **(float **)((int)pfVar21 + *piStack_390) * 0.5;
              piStack_3d8 = (int *)((float)piStack_3d8 * (1.0 / (float)dVar26) * fVar25);
              puStack_3d4 = (undefined4 *)((float)puStack_3d4 * (1.0 / (float)dVar26) * fVar25);
              uStack_178 = CONCAT44(puStack_3d4,piStack_3d8);
              fStack_3ac = (float)piStack_3d8 * fStack_35c;
              fStack_2e8 = (float)*puVar29;
              piStack_3c8 = (int *)((float)puStack_3d4 * fStack_35c);
              fStack_2e8 = fStack_2e8 + (float)piStack_3d8;
              puVar20 = (uint *)((int)*ppiStack_3a0 + (int)pfVar21);
              puVar4 = (undefined8 *)puVar20[1];
              fStack_2e4 = (float)((ulonglong)*puVar29 >> 0x20);
              fStack_2e4 = fStack_2e4 + (float)puStack_3d4;
              uStack_318 = CONCAT44(fStack_2e4 + (float)piStack_3c8,fStack_2e8 + fStack_3ac);
              piStack_190 = piStack_3d8;
              puStack_18c = puStack_3d4;
              if ((&uStack_318 < puVar4) && ((undefined8 *)*puVar20 <= &uStack_318)) {
                puVar29 = (undefined8 *)puVar20[2];
                puStack_3d0 = (uint *)((int)&uStack_318 - (int)*puVar20 >> 3);
                if ((puVar4 == puVar29) && ((int)puVar29 - (int)puVar4 >> 3 == 0)) {
                  iVar11 = (int)((int)puVar4 - *puVar20) >> 3;
                  if (iVar11 == 0x1fffffff) goto LAB_006485b3;
                  pfStack_3cc = (float *)(iVar11 + 1);
                  uVar10 = (int)((int)puVar29 - *puVar20) >> 3;
                  if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                    pfVar19 = (float *)0x0;
                  }
                  else {
                    pfVar19 = (float *)(uVar10 + (uVar10 >> 1));
                  }
                  if (pfVar19 < pfStack_3cc) {
                    pfVar19 = pfStack_3cc;
                  }
                  FUN_00428ac0(pfVar19);
                }
                puVar16 = (undefined4 *)puVar20[1];
                uVar10 = *puVar20;
                if (puVar16 != (undefined4 *)0x0) {
                  *puVar16 = *(undefined4 *)(uVar10 + (int)puStack_3d0 * 8);
                  puVar16[1] = *(undefined4 *)(uVar10 + 4 + (int)puStack_3d0 * 8);
                }
              }
              else {
                puVar29 = (undefined8 *)puVar20[2];
                if ((puVar4 == puVar29) && ((int)puVar29 - (int)puVar4 >> 3 == 0)) {
                  iVar11 = (int)((int)puVar4 - *puVar20) >> 3;
                  if (iVar11 == 0x1fffffff) goto LAB_006485b3;
                  pfStack_3cc = (float *)(iVar11 + 1);
                  uVar10 = (int)((int)puVar29 - *puVar20) >> 3;
                  if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                    pfVar19 = (float *)0x0;
                  }
                  else {
                    pfVar19 = (float *)(uVar10 + (uVar10 >> 1));
                  }
                  if (pfVar19 < pfStack_3cc) {
                    pfVar19 = pfStack_3cc;
                  }
                  FUN_00428ac0(pfVar19);
                }
                if ((undefined8 *)puVar20[1] != (undefined8 *)0x0) {
                  *(undefined8 *)puVar20[1] = uStack_318;
                }
              }
              puVar20[1] = puVar20[1] + 8;
              fStack_1b8 = (float)**(undefined8 **)((int)pfVar21 + *piStack_38c);
              fStack_1b8 = fStack_1b8 - (float)piStack_3d8;
              puVar20 = (uint *)((int)*ppiStack_3a0 + (int)pfVar21);
              puVar29 = (undefined8 *)puVar20[1];
              fStack_1b4 = (float)((ulonglong)**(undefined8 **)((int)pfVar21 + *piStack_38c) >> 0x20
                                  );
              fStack_1b4 = fStack_1b4 - (float)puStack_3d4;
              uStack_320 = CONCAT44(fStack_1b4 + (float)piStack_3c8,fStack_1b8 + fStack_3ac);
              if ((&uStack_320 < puVar29) && ((undefined8 *)*puVar20 <= &uStack_320)) {
                puVar4 = (undefined8 *)puVar20[2];
                piStack_3d8 = (int *)((int)&uStack_320 - (int)*puVar20 >> 3);
                if ((puVar29 == puVar4) && ((int)puVar4 - (int)puVar29 >> 3 == 0)) {
                  iVar11 = (int)((int)puVar29 - *puVar20) >> 3;
                  if (iVar11 == 0x1fffffff) goto LAB_006485b3;
                  pfStack_3cc = (float *)(iVar11 + 1);
                  uVar10 = (int)((int)puVar4 - *puVar20) >> 3;
                  if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                    pfVar19 = (float *)0x0;
                  }
                  else {
                    pfVar19 = (float *)(uVar10 + (uVar10 >> 1));
                  }
                  if (pfVar19 < pfStack_3cc) {
                    pfVar19 = pfStack_3cc;
                  }
                  FUN_00428ac0(pfVar19);
                }
                puVar16 = (undefined4 *)puVar20[1];
                uVar10 = *puVar20;
                if (puVar16 != (undefined4 *)0x0) {
                  *puVar16 = *(undefined4 *)(uVar10 + (int)piStack_3d8 * 8);
                  puVar16[1] = *(undefined4 *)(uVar10 + 4 + (int)piStack_3d8 * 8);
                }
              }
              else {
                puVar4 = (undefined8 *)puVar20[2];
                if ((puVar29 == puVar4) && ((int)puVar4 - (int)puVar29 >> 3 == 0)) {
                  iVar11 = (int)((int)puVar29 - *puVar20) >> 3;
                  if (iVar11 == 0x1fffffff) goto LAB_006485b3;
                  pfStack_3cc = (float *)(iVar11 + 1);
                  uVar10 = (int)((int)puVar4 - *puVar20) >> 3;
                  if (0x1fffffff - (uVar10 >> 1) < uVar10) {
                    pfVar19 = (float *)0x0;
                  }
                  else {
                    pfVar19 = (float *)(uVar10 + (uVar10 >> 1));
                  }
                  if (pfVar19 < pfStack_3cc) {
                    pfVar19 = pfStack_3cc;
                  }
                  FUN_00428ac0(pfVar19);
                }
                if ((undefined8 *)puVar20[1] != (undefined8 *)0x0) {
                  *(undefined8 *)puVar20[1] = uStack_320;
                }
              }
              puVar20[1] = puVar20[1] + 8;
              pfVar19 = *(float **)((int)pfVar21 + *piStack_3a4);
              piStack_3d8 = (int *)(*piStack_3a8 + (int)pfVar21);
              pfVar17 = (float *)piStack_3d8[1];
              if ((pfVar19 < pfVar17) && (pfVar5 = (float *)*piStack_3d8, pfVar5 <= pfVar19)) {
                pfStack_3cc = (float *)piStack_3d8[2];
                if ((pfVar17 == pfStack_3cc) && ((int)pfStack_3cc - (int)pfVar17 >> 4 == 0)) {
                  iVar11 = (int)pfVar17 - *piStack_3d8 >> 4;
                  if (iVar11 == 0xfffffff) goto LAB_006485b3;
                  pfStack_3bc = (float *)(iVar11 + 1);
                  uVar10 = (int)pfStack_3cc - *piStack_3d8 >> 4;
                  fStack_3ac = (float)(uVar10 >> 1);
                  if (0xfffffffU - (int)fStack_3ac < uVar10) {
                    pfVar17 = (float *)0x0;
                  }
                  else {
                    pfVar17 = (float *)(uVar10 + (int)fStack_3ac);
                  }
                  if (pfVar17 < pfStack_3bc) {
                    pfVar17 = pfStack_3bc;
                  }
                  FUN_00428ba0(pfVar17);
                }
                pfVar19 = (float *)(((int)pfVar19 - (int)pfVar5 & 0xfffffff0U) + *piStack_3d8);
              }
              else {
                pfStack_3cc = (float *)piStack_3d8[2];
                if ((pfVar17 == pfStack_3cc) && ((int)pfStack_3cc - (int)pfVar17 >> 4 == 0)) {
                  iVar11 = (int)pfVar17 - *piStack_3d8 >> 4;
                  if (iVar11 == 0xfffffff) goto LAB_006485b3;
                  pfStack_3bc = (float *)(iVar11 + 1);
                  uVar10 = (int)pfStack_3cc - *piStack_3d8 >> 4;
                  fStack_3ac = (float)(uVar10 >> 1);
                  if (0xfffffffU - (int)fStack_3ac < uVar10) {
                    pfVar17 = (float *)0x0;
                  }
                  else {
                    pfVar17 = (float *)(uVar10 + (int)fStack_3ac);
                  }
                  if (pfVar17 < pfStack_3bc) {
                    pfVar17 = pfStack_3bc;
                  }
                  FUN_00428ba0(pfVar17);
                }
              }
              pfVar17 = (float *)piStack_3d8[1];
              if (pfVar17 != (float *)0x0) {
                *pfVar17 = *pfVar19;
                pfVar17[1] = pfVar19[1];
                pfVar17[2] = pfVar19[2];
                pfVar17[3] = pfVar19[3];
              }
              piStack_3d8[1] = piStack_3d8[1] + 0x10;
              pfVar19 = *(float **)((int)pfVar21 + *piStack_3a4);
              piStack_3d8 = (int *)(*piStack_3a8 + (int)pfVar21);
              pfVar21 = (float *)piStack_3d8[1];
              if ((pfVar19 < pfVar21) && (pfVar17 = (float *)*piStack_3d8, pfVar17 <= pfVar19)) {
                pfStack_3cc = (float *)piStack_3d8[2];
                if ((pfVar21 == pfStack_3cc) && ((int)pfStack_3cc - (int)pfVar21 >> 4 == 0)) {
                  iVar11 = (int)pfVar21 - *piStack_3d8 >> 4;
                  if (iVar11 == 0xfffffff) {
LAB_006485b3:
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  pfStack_3bc = (float *)(iVar11 + 1);
                  uVar10 = (int)pfStack_3cc - *piStack_3d8 >> 4;
                  fStack_3ac = (float)(uVar10 >> 1);
                  if (0xfffffffU - (int)fStack_3ac < uVar10) {
                    pfVar21 = (float *)0x0;
                  }
                  else {
                    pfVar21 = (float *)(uVar10 + (int)fStack_3ac);
                  }
                  if (pfVar21 < pfStack_3bc) {
                    pfVar21 = pfStack_3bc;
                  }
                  FUN_00428ba0(pfVar21);
                }
                pfVar19 = (float *)(((int)pfVar19 - (int)pfVar17 & 0xfffffff0U) + *piStack_3d8);
              }
              else {
                pfStack_3cc = (float *)piStack_3d8[2];
                if ((pfVar21 == pfStack_3cc) && ((int)pfStack_3cc - (int)pfVar21 >> 4 == 0)) {
                  iVar11 = (int)pfVar21 - *piStack_3d8 >> 4;
                  if (iVar11 == 0xfffffff) goto LAB_006485b3;
                  pfStack_3bc = (float *)(iVar11 + 1);
                  uVar10 = (int)pfStack_3cc - *piStack_3d8 >> 4;
                  fStack_3ac = (float)(uVar10 >> 1);
                  if (0xfffffffU - (int)fStack_3ac < uVar10) {
                    pfVar21 = (float *)0x0;
                  }
                  else {
                    pfVar21 = (float *)(uVar10 + (int)fStack_3ac);
                  }
                  if (pfVar21 < pfStack_3bc) {
                    pfVar21 = pfStack_3bc;
                  }
                  FUN_00428ba0(pfVar21);
                }
              }
              pfVar21 = (float *)piStack_3d8[1];
              if (pfVar21 != (float *)0x0) {
                *pfVar21 = *pfVar19;
                pfVar21[1] = pfVar19[1];
                pfVar21[2] = pfVar19[2];
                pfVar21[3] = pfVar19[3];
              }
              piStack_3d8[1] = piStack_3d8[1] + 0x10;
              afStack_108[2] = fStack_3b0;
              uStack_fc = 0;
              FUN_00642590(afStack_108 + 2);
              afStack_180[0] = fStack_3b0;
              afStack_180[1] = 1.0;
              FUN_00642590(afStack_180);
              uVar10 = uStack_3c4;
            }
            else if ((bVar7 == 0) &&
                    (pfStack_3cc = (float *)local_388[2].SmoothMeshShape_data.offset_0x320,
                    uStack_3c4 ==
                    (*(int *)((int)(pfVar21 + 1) + (int)pfStack_3cc) -
                     *(int *)((int)pfVar21 + (int)pfStack_3cc) >> 3) - 1U)) {
              fStack_36c = *(float *)((int)pfVar21 + (int)pfStack_3cc);
              pfStack_3bc = (float *)(uStack_3c4 * 8);
              uVar1 = *(undefined8 *)((int)pfStack_3bc + -8 + (int)fStack_36c);
              uStack_1c0._0_4_ = (float)uVar1;
              piStack_3d8 = (int *)((float)uStack_1c0 -
                                   *(float *)((int)pfStack_3bc + (int)fStack_36c));
              uStack_1c0._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              fVar25 = uStack_1c0._4_4_ - *(float *)((int)pfStack_3bc + 4 + (int)fStack_36c);
              uStack_1c0 = uVar1;
              if (fVar25 * fVar25 + (float)piStack_3d8 * (float)piStack_3d8 == 0.0) {
                uVar1 = *(undefined8 *)
                         ((int)fStack_36c +
                         ((((((*(int *)((int)(pfVar21 + 1) + (int)pfStack_3cc) - (int)fStack_36c >>
                              3) - uStack_378) + -1 + uStack_3c4) / uStack_378) * uStack_378) %
                         (uint)(*(int *)((int)(pfVar21 + 1) + (int)pfStack_3cc) -
                                *(int *)((int)pfVar21 + (int)pfStack_3cc) >> 3)) * 8);
                uStack_1a8._0_4_ = (float)uVar1;
                piStack_3d8 = (int *)((float)uStack_1a8 -
                                     *(float *)((int)pfStack_3bc + (int)fStack_36c));
                uStack_1a8._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
                fVar25 = uStack_1a8._4_4_ - *(float *)((int)pfStack_3bc + 4 + (int)fStack_36c);
                uStack_1a8 = CONCAT44(fVar25,piStack_3d8);
                uStack_1c0 = uStack_1a8;
              }
              puStack_3d4 = (undefined4 *)-fVar25;
              dVar26 = (double)((float)puStack_3d4 * (float)puStack_3d4 +
                               (float)piStack_3d8 * (float)piStack_3d8);
              libm_sse2_sqrt_precise();
              uVar10 = uStack_3c4;
              fVar25 = *(float *)(*(int *)((int)pfVar21 + *piStack_390) + uStack_3c4 * 4) * 0.5;
              puStack_3d4 = (undefined4 *)((float)puStack_3d4 * (1.0 / (float)dVar26) * fVar25);
              piStack_3d8 = (int *)((float)piStack_3d8 * (1.0 / (float)dVar26) * fVar25);
              uStack_168 = CONCAT44(piStack_3d8,puStack_3d4);
              uVar1 = *(undefined8 *)((int)fStack_36c + uStack_3c4 * 8);
              pfStack_3cc = (float *)((float)puStack_3d4 * fStack_35c);
              fStack_2d0 = (float)uVar1;
              pfStack_3bc = (float *)((float)piStack_3d8 * fStack_35c);
              fStack_2d0 = fStack_2d0 + (float)puStack_3d4;
              fStack_2cc = (float)((ulonglong)uVar1 >> 0x20);
              fStack_2cc = fStack_2cc + (float)piStack_3d8;
              _fStack_230 = CONCAT44(fStack_2cc + (float)pfStack_3bc,fStack_2d0 + (float)pfStack_3cc
                                    );
              puStack_138 = puStack_3d4;
              piStack_134 = piStack_3d8;
              FUN_00642590(&fStack_230);
              uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piStack_38c) + uVar10 * 8);
              fStack_2c0 = (float)uVar1;
              fStack_2c0 = fStack_2c0 - (float)puStack_3d4;
              fStack_2bc = (float)((ulonglong)uVar1 >> 0x20);
              fStack_2bc = fStack_2bc - (float)piStack_3d8;
              _fStack_1e0 = CONCAT44((float)pfStack_3bc + fStack_2bc,(float)pfStack_3cc + fStack_2c0
                                    );
              FUN_00642590(&fStack_1e0);
              iVar11 = uVar10 * 0x10;
              FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + iVar11);
              FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + iVar11);
              afStack_118[0] = fStack_3b0;
              afStack_118[1] = 0.0;
              FUN_00642590(afStack_118);
              afStack_160[2] = fStack_3b0;
              uStack_154 = 0x3f800000;
              FUN_00642590(afStack_160 + 2);
              uVar10 = uStack_3c4;
            }
            else {
              iVar11 = local_388[2].SmoothMeshShape_data.offset_0x320;
              puStack_3d4 = *(undefined4 **)((int)pfVar21 + iVar11);
              piStack_3c0 = (int *)(uStack_3c4 * 8);
              uVar1 = *(undefined8 *)
                       (puStack_3d4 +
                       (((*(int *)((int)pfVar21 + iVar11 + 4) - *(int *)((int)pfVar21 + iVar11) >> 3
                         ) + (uStack_3c4 - 1)) %
                       (uint)(*(int *)((int)pfVar21 + iVar11 + 4) -
                              *(int *)((int)pfVar21 + local_388[2].SmoothMeshShape_data.offset_0x320
                                      ) >> 3)) * 2);
              uStack_220._0_4_ = (float)uVar1;
              uStack_220._4_4_ = (float)((ulonglong)uVar1 >> 0x20);
              piStack_3c8 = (int *)((float)uStack_220 -
                                   *(float *)((int)piStack_3c0 + (int)puStack_3d4));
              fVar25 = uStack_220._4_4_ - *(float *)((int)(piStack_3c0 + 1) + (int)puStack_3d4);
              iVar11 = local_388[2].SmoothMeshShape_data.offset_0x320;
              uVar2 = *(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4);
              uStack_1b0._0_4_ = (float)uVar2;
              uStack_1b0._4_4_ = (float)((ulonglong)uVar2 >> 0x20);
              piStack_3d8 = (int *)((float)uStack_1b0 -
                                   (float)puStack_3d4
                                          [((uStack_3c4 + 1) %
                                           (uint)(*(int *)((int)pfVar21 + iVar11 + 4) -
                                                  *(int *)((int)pfVar21 + iVar11) >> 3)) * 2]);
              fStack_3ac = uStack_1b0._4_4_ -
                           (float)(puStack_3d4 +
                                  ((uStack_3c4 + 1) %
                                  (uint)(*(int *)((int)pfVar21 + iVar11 + 4) -
                                         *(int *)((int)pfVar21 + iVar11) >> 3)) * 2)[1];
              uStack_220 = uVar1;
              if (fVar25 * fVar25 + (float)piStack_3c8 * (float)piStack_3c8 == 0.0) {
                iVar11 = local_388[2].SmoothMeshShape_data.offset_0x320;
                iVar14 = local_388[2].SmoothMeshShape_data.offset_0x320;
                uStack_2b0._0_4_ =
                     (float)*(undefined8 *)
                             (puStack_3d4 +
                             ((((((*(int *)((int)pfVar21 + iVar11 + 4) -
                                   *(int *)((int)pfVar21 + iVar11) >> 3) - uStack_378) +
                                (uStack_3c4 - 1)) / uStack_378) * uStack_378) %
                             (uint)(*(int *)((int)pfVar21 + iVar14 + 4) -
                                    *(int *)((int)pfVar21 + iVar14) >> 3)) * 2);
                piStack_3c8 = (int *)((float)uStack_2b0 -
                                     *(float *)((int)piStack_3c0 + (int)puStack_3d4));
                uStack_2b0._4_4_ =
                     (float)((ulonglong)
                             *(undefined8 *)
                              (puStack_3d4 +
                              ((((((*(int *)((int)pfVar21 + iVar11 + 4) -
                                    *(int *)((int)pfVar21 + iVar11) >> 3) - uStack_378) +
                                 (uStack_3c4 - 1)) / uStack_378) * uStack_378) %
                              (uint)(*(int *)((int)pfVar21 + iVar14 + 4) -
                                     *(int *)((int)pfVar21 + iVar14) >> 3)) * 2) >> 0x20);
                fVar25 = uStack_2b0._4_4_ - *(float *)((int)(piStack_3c0 + 1) + (int)puStack_3d4);
                uStack_2b0 = CONCAT44(fVar25,piStack_3c8);
                uStack_220 = uStack_2b0;
              }
              uStack_1b0 = uVar2;
              if (fStack_3ac * fStack_3ac + (float)piStack_3d8 * (float)piStack_3d8 == 0.0) {
                iVar11 = local_388[2].SmoothMeshShape_data.offset_0x320;
                uStack_2a0._0_4_ = (float)*(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4);
                piStack_3d8 = (int *)((float)uStack_2a0 -
                                     (float)puStack_3d4
                                            [((((int)(uStack_3c4 + 1 + uStack_378) / (int)uStack_378
                                               ) * uStack_378) %
                                             (uint)(*(int *)((int)pfVar21 + iVar11 + 4) -
                                                    *(int *)((int)pfVar21 + iVar11) >> 3)) * 2]);
                uStack_2a0._4_4_ =
                     (float)((ulonglong)*(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4) >> 0x20
                            );
                fStack_3ac = uStack_2a0._4_4_ -
                             (float)(puStack_3d4 +
                                    ((((int)(uStack_3c4 + 1 + uStack_378) / (int)uStack_378) *
                                     uStack_378) %
                                    (uint)(*(int *)((int)pfVar21 + iVar11 + 4) -
                                           *(int *)((int)pfVar21 + iVar11) >> 3)) * 2)[1];
                uStack_2a0 = CONCAT44(fStack_3ac,piStack_3d8);
                uStack_1b0 = uStack_2a0;
              }
              puStack_3d0 = (uint *)-fVar25;
              puStack_380 = (uint *)((uint)fStack_3ac ^ 0x80000000);
              fVar25 = (float)puStack_3d0 * (float)puStack_3d0 +
                       (float)piStack_3c8 * (float)piStack_3c8;
              bStack_3d9 = true;
              piStack_374 = piStack_3d8;
              puStack_328 = puStack_3d0;
              if (0.0 < fVar25) {
                dVar26 = (double)fVar25;
                piStack_324 = piStack_3c8;
                libm_sse2_sqrt_precise();
                puStack_328 = (uint *)((float)puStack_3d0 * (1.0 / (float)dVar26));
                piStack_3c8 = (int *)((float)piStack_3c8 * (1.0 / (float)dVar26));
              }
              bStack_3d9 = 0.0 >= fVar25;
              fVar25 = (float)puStack_380 * (float)puStack_380 +
                       (float)piStack_3d8 * (float)piStack_3d8;
              puStack_3d0 = puStack_328;
              piStack_324 = piStack_3c8;
              if (0.0 < fVar25) {
                dVar26 = (double)fVar25;
                libm_sse2_sqrt_precise();
                puStack_380 = (uint *)((float)puStack_380 * (1.0 / (float)dVar26));
                piStack_374 = (int *)((float)piStack_3d8 * (1.0 / (float)dVar26));
              }
              uStack_330 = CONCAT44(piStack_324,puStack_328);
              pfStack_3bc = (float *)((float)piStack_374 + (float)piStack_324);
              pfStack_3cc = (float *)((float)puStack_380 + (float)puStack_328);
              fVar25 = (float)pfStack_3bc * (float)pfStack_3bc +
                       (float)pfStack_3cc * (float)pfStack_3cc;
              if (fVar25 <= 0.0) {
                afStack_130[2] = 0.0;
                afStack_130[3] = 0.0;
                uStack_330._4_4_ = 0.0;
                uStack_330._0_4_ = 0.0;
              }
              else {
                dVar26 = (double)fVar25;
                libm_sse2_sqrt_precise();
                uStack_330._0_4_ = (float)pfStack_3cc * (1.0 / (float)dVar26);
                uStack_330._4_4_ = (float)pfStack_3bc * (1.0 / (float)dVar26);
                if (((int)uStack_3c4 % (int)uStack_378 == 0) &&
                   (*(short *)(*(int *)((int)pfVar21 +
                                       *(int *)&pSVar6[3].field2_0xc.Attribute_data.field_0x28) +
                              uStack_3c4 * 4) == 1)) {
                  piVar15 = piStack_3c8;
                  puVar20 = puStack_3d0;
                  if (bStack_3d9 != false) {
                    piVar15 = piStack_374;
                    puVar20 = puStack_380;
                  }
                  pfStack_350 = (float *)((float)piVar15 * uStack_330._4_4_ +
                                         (float)puVar20 * (float)uStack_330);
                  pfStack_368 = (float *)0x3e99999a;
                  ppfVar13 = &pfStack_350;
                  if ((float)pfStack_350 <= 0.3) {
                    ppfVar13 = &pfStack_368;
                  }
                  uStack_330._0_4_ = (float)uStack_330 / (float)*ppfVar13;
                  uStack_330._4_4_ = uStack_330._4_4_ / (float)*ppfVar13;
                }
              }
              piVar15 = piStack_3c0;
              uVar10 = uStack_3c4;
              pfStack_3cc = (float *)(*(float *)(*(int *)((int)pfVar21 +
                                                         pSVar6[2].SmoothMeshShape_data.offset_0x314
                                                         ) + uStack_3c4 * 4) * 0.5);
              fStack_36c = (float)pfStack_3cc * uStack_330._4_4_;
              pfStack_3bc = (float *)((float)pfStack_3cc * (float)uStack_330);
              uStack_330 = CONCAT44(fStack_36c,pfStack_3bc);
              _fStack_340 = CONCAT44(fStack_36c * fStack_35c,(float)pfStack_3bc * fStack_35c);
              if (((int)uStack_3c4 % (int)uStack_378 == 0) &&
                 (*(short *)(*(int *)((int)pfVar21 +
                                     *(int *)&pSVar6[3].field2_0xc.Attribute_data.field_0x28) +
                            uStack_3c4 * 4) == 1)) {
                fStack_360 = (float)puStack_380 * (float)puStack_3d0;
                if (0.95 <= (float)piStack_374 * (float)piStack_3c8 + fStack_360) {
                  pfVar21 = &fStack_340;
                  puVar28 = auStack_2c;
                  puVar29 = &uStack_330;
                  puVar27 = auStack_6c;
                  uVar12 = uStack_3c4;
                  FUN_004db110(iStack_39c);
                  FUN_00468c70(uVar12);
                  FUN_00468f20(puVar27,puVar29);
                  uVar9 = FUN_00468f20(puVar28,pfVar21);
                  FUN_004db110(iStack_39c);
                  FUN_00642590(uVar9);
                  pfVar21 = &fStack_340;
                  puVar28 = auStack_3c;
                  puVar29 = &uStack_330;
                  puVar27 = auStack_ac;
                  uVar12 = uVar10;
                  FUN_004db110(iStack_39c);
                  FUN_00468c70(uVar12);
                  FUN_00468df0(puVar27,puVar29);
                  uVar9 = FUN_00468f20(puVar28,pfVar21);
                  iVar11 = iStack_39c;
                  FUN_004db110(iStack_39c);
                  FUN_00642590(uVar9);
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  uVar9 = FUN_00428980(uVar12);
                  FUN_004db110(iVar11);
                  FUN_0042bd20(uVar9);
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  uVar9 = FUN_00428980(uVar12);
                  FUN_004db110(iVar11);
                  FUN_0042bd20(uVar9);
                  uVar9 = FUN_0040ea50(fStack_3b0,0);
                  FUN_004db110(iVar11);
                  FUN_00642590(uVar9);
                  goto LAB_00648432;
                }
                if (pSVar6[2].field3_0x64.Attribute_data.offset_0x20 != (void *)0x1) {
                  puStack_3d0 = (uint *)((float)puStack_3d0 * (float)pfStack_3cc);
                  piStack_3c8 = (int *)((float)piStack_3c8 * (float)pfStack_3cc);
                  fStack_308 = (float)puStack_380 * (float)pfStack_3cc;
                  fStack_304 = (float)piStack_374 * (float)pfStack_3cc;
                  if (0.0 <= fStack_3ac * fStack_36c + (float)piStack_3d8 * (float)pfStack_3bc) {
                    uStack_1a0 = uStack_330;
                    _fStack_258 = CONCAT44(fStack_304 + (float)piStack_3c8,
                                           fStack_308 + (float)puStack_3d0);
                    uStack_248 = CONCAT44((fStack_304 + (float)piStack_3c8) * 0.5,
                                          (fStack_308 + (float)puStack_3d0) * 0.5);
                    uStack_198 = uStack_248;
                  }
                  else {
                    _fStack_278 = CONCAT44(fStack_304 + (float)piStack_3c8,
                                           fStack_308 + (float)puStack_3d0);
                    uStack_268 = CONCAT44((fStack_304 + (float)piStack_3c8) * 0.5,
                                          (fStack_308 + (float)puStack_3d0) * 0.5);
                    uStack_1a0 = uStack_268;
                    uStack_198 = uStack_330;
                  }
                  fStack_238 = (float)*(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4);
                  fStack_238 = (float)puStack_3d0 + fStack_238;
                  fStack_234 = (float)((ulonglong)
                                       *(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4) >> 0x20)
                  ;
                  fStack_234 = (float)piStack_3c8 + fStack_234;
                  _fStack_228 = CONCAT44(fStack_234 + fStack_36c * fStack_35c,
                                         fStack_238 + (float)pfStack_3bc * fStack_35c);
                  puStack_328 = puStack_3d0;
                  piStack_324 = piStack_3c8;
                  FUN_00642590(&fStack_228);
                  uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piStack_38c) + (int)piVar15);
                  fStack_218 = (float)uVar1;
                  fStack_218 = fStack_218 - (float)puStack_3d0;
                  fStack_214 = (float)((ulonglong)uVar1 >> 0x20);
                  fStack_214 = fStack_214 - (float)piStack_3c8;
                  _fStack_208 = CONCAT44(fStack_214 + fStack_33c,fStack_218 + fStack_340);
                  FUN_00642590(&fStack_208);
                  iVar11 = uStack_3c4 * 0x10;
                  FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + iVar11);
                  FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + iVar11);
                  afStack_130[4] = fStack_3b0;
                  uStack_11c = 0;
                  FUN_00642590(afStack_130 + 4);
                  afStack_118[2] = fStack_3b0;
                  uStack_10c = 0x3f800000;
                  FUN_00642590(afStack_118 + 2);
                  piVar15 = piStack_38c;
                  uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piStack_38c) + (int)piStack_3c0);
                  fStack_1f8 = (float)uVar1;
                  fStack_1f8 = (float)uStack_1a0 + fStack_1f8;
                  fStack_1f4 = (float)((ulonglong)uVar1 >> 0x20);
                  fStack_1f4 = fStack_1f4 + uStack_1a0._4_4_;
                  _fStack_1e8 = CONCAT44(fStack_1f4 + fStack_33c,fStack_1f8 + fStack_340);
                  FUN_00642590(&fStack_1e8);
                  uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piVar15) + (int)piStack_3c0);
                  fStack_338 = (float)uVar1;
                  fStack_334 = (float)((ulonglong)uVar1 >> 0x20);
                  _fStack_338 = CONCAT44(fStack_334 - uStack_198._4_4_,
                                         fStack_338 - (float)uStack_198);
                  uVar9 = FUN_00468f20(auStack_14,&fStack_340);
                  iVar11 = iStack_39c;
                  FUN_004db110(iStack_39c);
                  FUN_00642590(uVar9);
                  uVar10 = uStack_3c4;
                  uVar12 = uStack_3c4;
                  FUN_004db110(iVar11);
                  uVar9 = FUN_00428980(uVar12);
                  FUN_004db110(iVar11);
                  FUN_0042bd20(uVar9);
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  uVar9 = FUN_00428980(uVar12);
                  FUN_004db110(iVar11);
                  FUN_0042bd20(uVar9);
                  uVar9 = FUN_0040ea50(fStack_3b0,0);
                  FUN_004db110(iVar11);
                  FUN_00642590(uVar9);
                  uVar9 = FUN_0040ea50(fStack_3b0,0x3f800000);
                  FUN_004db110(iVar11);
                  FUN_00642590(uVar9);
                  pfVar21 = &fStack_340;
                  puVar28 = auStack_5c;
                  pfVar19 = &fStack_308;
                  puVar27 = auStack_9c;
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  FUN_00468c70(uVar12);
                  FUN_00468f20(puVar27,pfVar19);
                  uVar9 = FUN_00468f20(puVar28,pfVar21);
                  FUN_004db110(iVar11);
                  FUN_00642590(uVar9);
                  pfVar21 = &fStack_340;
                  puVar28 = auStack_1c;
                  pfVar19 = &fStack_308;
                  puVar27 = auStack_8c;
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  FUN_00468c70(uVar12);
                  FUN_00468df0(puVar27,pfVar19);
                  uVar9 = FUN_00468f20(puVar28,pfVar21);
                  FUN_004db110(iVar11);
                  FUN_00642590(uVar9);
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  uVar9 = FUN_00428980(uVar12);
                  FUN_004db110(iVar11);
                  FUN_0042bd20(uVar9);
                  uVar12 = uVar10;
                  FUN_004db110(iVar11);
                  uVar9 = FUN_00428980(uVar12);
                  FUN_004db110(iVar11);
                  FUN_0042bd20(uVar9);
                  uVar9 = FUN_0040ea50(fStack_3b0,0);
                  FUN_004db110(iVar11);
                  FUN_00642590(uVar9);
                  goto LAB_00648432;
                }
                dVar26 = (double)((float)piStack_374 * (float)piStack_3c8 + fStack_360);
                libm_sse2_acos_precise();
                fVar25 = (float)dVar26 * 57.29578;
                pfStack_370 = (float *)(int)((ABS(fVar25) / 180.0) * 20.0);
                fVar23 = fStack_3ac * fStack_36c + (float)piStack_3d8 * (float)pfStack_3bc;
                bStack_3d9 = fVar23 < 0.0;
                if (fVar23 < 0.0) {
                  fVar25 = -fVar25;
                }
                piStack_3d8 = (int *)(fVar25 / (float)(int)pfStack_370);
                puStack_380 = (uint *)((float)puStack_380 * (float)pfStack_3cc);
                puStack_3d0 = (uint *)((float)puStack_3d0 * (float)pfStack_3cc);
                piStack_374 = (int *)((float)piStack_374 * (float)pfStack_3cc);
                fStack_290 = (float)*(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4);
                fStack_290 = (float)puStack_3d0 + fStack_290;
                piStack_3c8 = (int *)((float)piStack_3c8 * (float)pfStack_3cc);
                fStack_28c = (float)((ulonglong)*(undefined8 *)((int)piStack_3c0 + (int)puStack_3d4)
                                    >> 0x20);
                fStack_28c = (float)piStack_3c8 + fStack_28c;
                _fStack_210 = CONCAT44(fStack_28c + fStack_33c,fStack_290 + fStack_340);
                puStack_328 = puStack_3d0;
                piStack_324 = piStack_3c8;
                FUN_00642590(&fStack_210);
                uVar1 = *(undefined8 *)
                         (*(int *)((int)pfVar21 + pSVar6[2].SmoothMeshShape_data.offset_0x320) +
                         (int)piStack_3c0);
                fStack_280 = (float)uVar1;
                fStack_280 = fStack_280 - (float)puStack_3d0;
                fStack_27c = (float)((ulonglong)uVar1 >> 0x20);
                fStack_27c = fStack_27c - (float)piStack_3c8;
                _fStack_1d0 = CONCAT44(fStack_27c + fStack_33c,fStack_280 + fStack_340);
                FUN_00642590(&fStack_1d0);
                uVar10 = uStack_3c4;
                puStack_3d4 = (undefined4 *)(uStack_3c4 * 0x10);
                FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + (int)puStack_3d4);
                FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + (int)puStack_3d4);
                afStack_150[2] = fStack_3b0;
                uStack_144 = 0;
                FUN_00642590(afStack_150 + 2);
                afStack_108[0] = fStack_3b0;
                afStack_108[1] = 1.0;
                FUN_00642590(afStack_108);
                FUN_00423e70();
                piStack_3d8 = (int *)((float)piStack_3d8 * 0.017453292);
                dVar26 = (double)(float)piStack_3d8;
                libm_sse2_cos_precise();
                piStack_3c8 = (int *)(float)dVar26;
                dVar26 = (double)(float)piStack_3d8;
                libm_sse2_sin_precise();
                piVar15 = piStack_38c;
                fVar25 = (float)dVar26;
                fStack_348 = fVar25 * fStack_e8 + (float)piStack_3c8 * fStack_f8;
                fStack_3ac = (float)piStack_3c8 * fStack_e8 - fVar25 * fStack_f8;
                fStack_344 = fVar25 * fStack_e4 + (float)piStack_3c8 * fStack_f4;
                fStack_34c = (float)piStack_3c8 * fStack_e4 - fVar25 * fStack_f4;
                fStack_360 = fVar25 * fStack_dc + (float)piStack_3c8 * fStack_ec;
                piStack_3c8 = (int *)((float)piStack_3c8 * fStack_dc - fVar25 * fStack_ec);
                if (bStack_3d9 == false) {
                  _fStack_2f0 = CONCAT44((float)piStack_374 + (float)piStack_324,
                                         (float)puStack_380 + (float)puStack_328);
                  uStack_1c8 = CONCAT44(((float)piStack_374 + (float)piStack_324) * 0.5,
                                        ((float)puStack_380 + (float)puStack_328) * 0.5);
                  uStack_2f8 = uStack_1c8;
                  uStack_300 = CONCAT44(piStack_324,puStack_328);
                }
                else {
                  _fStack_270 = CONCAT44((float)piStack_374 + (float)piStack_324,
                                         (float)puStack_380 + (float)puStack_328);
                  uStack_200 = CONCAT44(((float)piStack_374 + (float)piStack_324) * 0.5,
                                        ((float)puStack_380 + (float)puStack_328) * 0.5);
                  uStack_300 = uStack_200;
                  uStack_2f8 = CONCAT44(piStack_324,puStack_328);
                }
                if (1 < (int)pfStack_370) {
                  fStack_36c = (float)((int)pfStack_370 + -1);
                  pfStack_3bc = uStack_300._4_4_;
                  pfStack_3cc = (float *)uStack_300;
                  piStack_3d8 = uStack_2f8._4_4_;
                  puStack_3d0 = (uint *)uStack_2f8;
                  do {
                    if (bStack_3d9 == false) {
                      fStack_170 = (float)pfStack_3bc * fStack_3ac + (float)pfStack_3cc * fStack_348
                                   + fStack_c8;
                      fStack_16c = (float)pfStack_3bc * fStack_34c + (float)pfStack_3cc * fStack_344
                                   + fStack_c4;
                      fVar25 = 1.0 / ((float)pfStack_3bc * (float)piStack_3c8 +
                                      (float)pfStack_3cc * fStack_360 + fStack_bc);
                      pfStack_3cc = (float *)(fStack_170 * fVar25);
                      pfStack_3bc = (float *)(fStack_16c * fVar25);
                      uStack_1f0 = CONCAT44(pfStack_3bc,pfStack_3cc);
                      uStack_300 = uStack_1f0;
                    }
                    else {
                      fStack_188 = (float)piStack_3d8 * fStack_3ac + (float)puStack_3d0 * fStack_348
                                   + fStack_c8;
                      fStack_184 = (float)piStack_3d8 * fStack_34c + (float)puStack_3d0 * fStack_344
                                   + fStack_c4;
                      fVar25 = 1.0 / ((float)piStack_3d8 * (float)piStack_3c8 +
                                      (float)puStack_3d0 * fStack_360 + fStack_bc);
                      puStack_3d0 = (uint *)(fStack_188 * fVar25);
                      piStack_3d8 = (int *)(fStack_184 * fVar25);
                      uStack_250 = CONCAT44(piStack_3d8,puStack_3d0);
                      uStack_2f8 = uStack_250;
                    }
                    uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piVar15) + (int)piStack_3c0);
                    fStack_240 = (float)uVar1;
                    fStack_240 = fStack_240 + (float)pfStack_3cc;
                    fStack_23c = (float)((ulonglong)uVar1 >> 0x20);
                    fStack_23c = fStack_23c + (float)pfStack_3bc;
                    _fStack_2e0 = CONCAT44(fStack_23c + fStack_33c,fStack_240 + fStack_340);
                    FUN_00642590(&fStack_2e0);
                    uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piVar15) + (int)piStack_3c0);
                    fStack_2d8 = (float)uVar1;
                    fStack_2d8 = fStack_2d8 - (float)puStack_3d0;
                    fStack_2d4 = (float)((ulonglong)uVar1 >> 0x20);
                    fStack_2d4 = fStack_2d4 - (float)piStack_3d8;
                    _fStack_2c8 = CONCAT44(fStack_2d4 + fStack_33c,fStack_2d8 + fStack_340);
                    FUN_00642590(&fStack_2c8);
                    FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + (int)puStack_3d4);
                    FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + (int)puStack_3d4);
                    afStack_160[0] = fStack_3b0;
                    afStack_160[1] = 0.0;
                    FUN_00642590(afStack_160);
                    afStack_150[0] = fStack_3b0;
                    afStack_150[1] = 1.0;
                    FUN_00642590(afStack_150);
                    fStack_36c = (float)((int)fStack_36c + -1);
                  } while (fStack_36c != 0.0);
                  fStack_36c = 0.0;
                  uVar10 = uStack_3c4;
                }
                uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piStack_38c) + uVar10 * 8);
                fStack_2b8 = (float)uVar1;
                fStack_2b8 = (float)puStack_380 + fStack_2b8;
                fStack_2b4 = (float)((ulonglong)uVar1 >> 0x20);
                fStack_2b4 = (float)piStack_374 + fStack_2b4;
                _fStack_2a8 = CONCAT44(fStack_2b4 + fStack_33c,fStack_2b8 + fStack_340);
                FUN_00642590(&fStack_2a8);
                uVar1 = *(undefined8 *)(*(int *)((int)pfVar21 + *piStack_38c) + uVar10 * 8);
                fStack_298 = (float)uVar1;
                fStack_298 = fStack_298 - (float)puStack_380;
                fStack_294 = (float)((ulonglong)uVar1 >> 0x20);
                fStack_294 = fStack_294 - (float)piStack_374;
                _fStack_288 = CONCAT44(fStack_294 + fStack_33c,fStack_298 + fStack_340);
                FUN_00642590(&fStack_288);
                FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + (int)puStack_3d4);
                FUN_0042bd20(*(int *)((int)pfVar21 + *piStack_3a4) + (int)puStack_3d4);
                afStack_140[0] = fStack_3b0;
                afStack_140[1] = 0.0;
                FUN_00642590(afStack_140);
                afStack_130[0] = fStack_3b0;
                pfVar21 = afStack_130;
                afStack_130[1] = 1.0;
              }
              else {
                pfVar21 = &fStack_340;
                puVar28 = auStack_84;
                puVar29 = &uStack_330;
                puVar27 = auStack_74;
                uVar12 = uStack_3c4;
                FUN_004db110(iStack_39c);
                FUN_00468c70(uVar12);
                FUN_00468f20(puVar27,puVar29);
                uVar9 = FUN_00468f20(puVar28,pfVar21);
                FUN_004db110(iStack_39c);
                FUN_00642590(uVar9);
                pfVar21 = &fStack_340;
                puVar28 = auStack_64;
                puVar29 = &uStack_330;
                puVar27 = auStack_54;
                uVar12 = uVar10;
                FUN_004db110(iStack_39c);
                FUN_00468c70(uVar12);
                FUN_00468df0(puVar27,puVar29);
                uVar9 = FUN_00468f20(puVar28,pfVar21);
                iVar11 = iStack_39c;
                FUN_004db110(iStack_39c);
                FUN_00642590(uVar9);
                uVar12 = uVar10;
                FUN_004db110(iVar11);
                uVar9 = FUN_00428980(uVar12);
                FUN_004db110(iVar11);
                FUN_0042bd20(uVar9);
                uVar12 = uVar10;
                FUN_004db110(iVar11);
                uVar9 = FUN_00428980(uVar12);
                FUN_004db110(iVar11);
                FUN_0042bd20(uVar9);
                uVar9 = FUN_0040ea50(fStack_3b0,0);
                FUN_004db110(iVar11);
                FUN_00642590(uVar9);
LAB_00648432:
                pfVar21 = (float *)FUN_0040ea50(fStack_3b0,0x3f800000);
                FUN_004db110(iVar11);
              }
              FUN_00642590(pfVar21);
            }
            iVar11 = iStack_39c;
            FUN_004db110(iStack_39c);
            uVar12 = FUN_00487f50();
            uVar12 = (uVar10 + 1) % uVar12;
            FUN_004db110(iVar11);
            puVar16 = (undefined4 *)FUN_00468c60(uVar12);
            uVar12 = uStack_3c4;
            FUN_004db110(iStack_39c);
            puVar18 = (undefined4 *)FUN_00468c60(uVar12);
            uVar9 = *puVar16;
            uVar30 = *puVar18;
            FUN_004db110(iStack_39c);
            uVar12 = FUN_00487f60(uVar30,uVar9);
            iVar11 = iStack_39c;
            uVar12 = (uVar10 + 1) % uVar12;
            FUN_004db110(iStack_39c);
            uVar9 = FUN_00468c70(uVar12);
            puVar28 = auStack_310;
            uVar10 = uStack_3c4;
            FUN_004db110(iVar11);
            FUN_00468c70(uVar10);
            FUN_00468df0(puVar28,uVar9);
            fVar22 = (float10)FUN_00423ee0();
            fVar22 = (float10)FUN_006426d0((float)fVar22);
            pfStack_370 = (float *)(float)fVar22;
            fStack_3b0 = (float)pfStack_370 + fStack_3b0;
            uStack_384 = uStack_384 + 1;
            this = local_388;
            pfVar21 = pfStack_394;
          } while ((int)uStack_384 < (int)pvStack_3b4);
        }
      }
      iStack_39c = iStack_39c + 1;
    } while (iStack_39c <
             (*(int *)&this[2].SmoothMeshShape_data.field_0x54 -
             *(int *)&this[2].SmoothMeshShape_data.field_0x50) / 0xc);
  }
  cVar8 = FUN_00641b60();
  if (cVar8 == '\0') {
    cVar8 = FUN_006423f0();
    if ((cVar8 == '\0') && (-1 < (int)pfStack_3b8)) {
      pvStack_3b4 = &this[2].SmoothMeshShape_data.field_0x7c + (int)pfStack_3b8 * 0x60;
      iVar11 = FUN_00642a90();
      puVar16 = &this[2].field3_0x64.Attribute_data.offset_0x38;
      if (iVar11 == 0) {
        uVar9 = FUN_0040ea50(0,0);
        FUN_00411df0(uVar9);
        uVar9 = FUN_0040ea50(0,0);
        FUN_00411df0(uVar9);
        goto LAB_006487d2;
      }
      iVar11 = FUN_0063d6f0(0);
      FUN_00411df0(**(undefined4 **)(iVar11 + 8));
      FUN_00411df0(puVar16);
      uStack_384 = 0;
      iVar11 = FUN_00642a90();
      if (iVar11 < 1) goto LAB_006487d2;
      pfStack_3b8 = (float *)FUN_00428970(0);
      pfStack_370 = (float *)FUN_00428970(1);
      piStack_364 = (int *)FUN_00428970(0);
      pfVar21 = (float *)FUN_00428970(1);
      do {
        iVar11 = 8;
        do {
          iVar14 = FUN_0063d6f0(uStack_384);
          pfStack_394 = (float *)**(undefined4 **)(iVar14 + iVar11);
          pfStack_368 = (float *)FUN_00428970(0);
          if (*pfStack_368 < *pfStack_3b8) {
            *pfStack_3b8 = *pfStack_368;
          }
          pfVar19 = (float *)FUN_00428970(1);
          if (*pfVar19 < *pfStack_370) {
            *pfStack_370 = *pfVar19;
          }
          fVar25 = *pfStack_368;
          if ((float)*piStack_364 <= fVar25 && fVar25 != (float)*piStack_364) {
            *piStack_364 = (int)fVar25;
          }
          fVar25 = *pfVar19;
          if (*pfVar21 <= fVar25 && fVar25 != *pfVar21) {
            *pfVar21 = fVar25;
          }
          iVar11 = iVar11 + 4;
        } while (iVar11 < 0x10);
        uVar10 = uStack_384 + 1;
        uStack_384 = uVar10;
        iVar11 = FUN_00642a90();
        this = local_388;
      } while ((int)uVar10 < iVar11);
    }
    else {
      puStack_37c = &this[2].field3_0x64.Attribute_data.offset_0x38;
      uVar9 = FUN_0040ea50(0,0);
      FUN_00411df0(uVar9);
      piStack_390 = &this[2].field3_0x64.Attribute_data.offset_0x40;
      uVar9 = FUN_0040ea50(0,0);
      FUN_00411df0(uVar9);
      bStack_3d9 = true;
      piStack_3d8 = (int *)0x0;
      iVar11 = FUN_00642ab0();
      if (0 < iVar11) {
        piVar15 = (int *)0x0;
        do {
          pvStack_3b4 = (void *)0x0;
          FUN_004db110(piVar15);
          iVar11 = FUN_00487f60();
          if (0 < iVar11) {
            do {
              pvVar31 = pvStack_3b4;
              FUN_004db110(piStack_3d8);
              uVar9 = FUN_00468c70(pvVar31);
              FUN_00411df0(uVar9);
              if (bStack_3d9 == false) {
                pfStack_394 = (float *)FUN_00428970(0);
                pfStack_3b8 = (float *)*pfStack_394;
                pfVar21 = (float *)FUN_00428970(0);
                if ((float)pfStack_3b8 < *pfVar21) {
                  *pfVar21 = (float)pfStack_3b8;
                }
                pfStack_370 = (float *)FUN_00428970(1);
                pfStack_3b8 = (float *)*pfStack_370;
                pfVar21 = (float *)FUN_00428970(1);
                if ((float)pfStack_3b8 < *pfVar21) {
                  *pfVar21 = (float)pfStack_3b8;
                }
                pfStack_3b8 = (float *)*pfStack_394;
                pfVar21 = (float *)FUN_00428970(0);
                if (*pfVar21 <= (float)pfStack_3b8 && (float)pfStack_3b8 != *pfVar21) {
                  *pfVar21 = (float)pfStack_3b8;
                }
                pfStack_3b8 = (float *)*pfStack_370;
                pfVar21 = (float *)FUN_00428970(1);
                if (*pfVar21 <= (float)pfStack_3b8 && (float)pfStack_3b8 != *pfVar21) {
                  *pfVar21 = (float)pfStack_3b8;
                }
              }
              else {
                FUN_00411df0(&fStack_338);
                FUN_00411df0(&fStack_338);
                bStack_3d9 = false;
              }
              pvStack_3b4 = (void *)((int)pvStack_3b4 + 1);
              FUN_004db110(piStack_3d8);
              iVar11 = FUN_00487f60();
            } while ((int)pvStack_3b4 < iVar11);
          }
          piStack_3d8 = (int *)((int)piStack_3d8 + 1);
          iVar11 = FUN_00642ab0();
          piVar15 = piStack_3d8;
          this = local_388;
          puVar16 = puStack_37c;
        } while ((int)piStack_3d8 < iVar11);
        goto LAB_006487d2;
      }
    }
  }
  else {
    puStack_37c = &this[2].field3_0x64.Attribute_data.offset_0x38;
    uVar9 = FUN_0040ea50(0,0);
    FUN_00411df0(uVar9);
    piStack_390 = &this[2].field3_0x64.Attribute_data.offset_0x40;
    uVar9 = FUN_0040ea50(0,0);
    FUN_00411df0(uVar9);
    bStack_3d9 = true;
    piStack_3d8 = (int *)0x0;
    iVar11 = FUN_00642ab0();
    if (0 < iVar11) {
      piVar15 = (int *)0x0;
      do {
        pvStack_3b4 = (void *)0x0;
        FUN_004db110(piVar15);
        iVar11 = FUN_00487f60();
        if (0 < iVar11) {
          do {
            pvVar31 = pvStack_3b4;
            FUN_004db110(piStack_3d8);
            uVar9 = FUN_00468c70(pvVar31);
            FUN_00411df0(uVar9);
            if (bStack_3d9 == false) {
              pfStack_370 = (float *)FUN_00428970(0);
              pfStack_394 = (float *)*pfStack_370;
              pfVar21 = (float *)FUN_00428970(0);
              if ((float)pfStack_394 < *pfVar21) {
                *pfVar21 = (float)pfStack_394;
              }
              pfStack_368 = (float *)FUN_00428970(1);
              pfStack_394 = (float *)*pfStack_368;
              pfVar21 = (float *)FUN_00428970(1);
              if ((float)pfStack_394 < *pfVar21) {
                *pfVar21 = (float)pfStack_394;
              }
              pfStack_394 = (float *)*pfStack_370;
              pfVar21 = (float *)FUN_00428970(0);
              if (*pfVar21 <= (float)pfStack_394 && (float)pfStack_394 != *pfVar21) {
                *pfVar21 = (float)pfStack_394;
              }
              pfStack_394 = (float *)*pfStack_368;
              pfVar21 = (float *)FUN_00428970(1);
              if (*pfVar21 <= (float)pfStack_394 && (float)pfStack_394 != *pfVar21) {
                *pfVar21 = (float)pfStack_394;
              }
            }
            else {
              FUN_00411df0(&fStack_338);
              FUN_00411df0(&fStack_338);
              bStack_3d9 = false;
            }
            pvStack_3b4 = (void *)((int)pvStack_3b4 + 1);
            FUN_004db110(piStack_3d8);
            iVar11 = FUN_00487f60();
          } while ((int)pvStack_3b4 < iVar11);
        }
        piStack_3d8 = (int *)((int)piStack_3d8 + 1);
        iVar11 = FUN_00642ab0();
        piVar15 = piStack_3d8;
        this = local_388;
      } while ((int)piStack_3d8 < iVar11);
    }
  }
  puVar16 = &this[2].field3_0x64.Attribute_data.offset_0x38;
LAB_006487d2:
  cVar8 = FUN_00642400();
  if (cVar8 != '\0') {
    pfVar21 = &fStack_308;
    FUN_0042f590(pfVar21,puVar16);
    FUN_00411be0(pfVar21,puVar16);
    pfStack_3cc = (float *)FUN_00428970(0);
    pfStack_3b8 = (float *)*pfStack_3cc;
    pfStack_394 = (float *)FUN_00428970(0);
    if ((float)pfStack_3b8 < *pfStack_394) {
      *pfStack_394 = (float)pfStack_3b8;
    }
    pfStack_3bc = (float *)FUN_00428970(1);
    pfStack_3b8 = (float *)*pfStack_3bc;
    pfStack_370 = (float *)FUN_00428970(1);
    if ((float)pfStack_3b8 < *pfStack_370) {
      *pfStack_370 = (float)pfStack_3b8;
    }
    puVar16 = &this[2].field3_0x64.Attribute_data.offset_0x40;
    pfStack_3b8 = (float *)*pfStack_3cc;
    pfStack_368 = (float *)FUN_00428970(0);
    if (*pfStack_368 <= (float)pfStack_3b8 && (float)pfStack_3b8 != *pfStack_368) {
      *pfStack_368 = (float)pfStack_3b8;
    }
    pfStack_3b8 = (float *)*pfStack_3bc;
    piStack_364 = (int *)FUN_00428970(1);
    if ((float)*piStack_364 <= (float)pfStack_3b8 && (float)pfStack_3b8 != (float)*piStack_364) {
      *piStack_364 = (int)pfStack_3b8;
    }
    puVar28 = auStack_310;
    FUN_0042f590(puVar28,puVar16);
    uVar9 = FUN_00411be0(puVar28,puVar16);
    FUN_00411df0(uVar9);
    if (*pfStack_3cc < *pfStack_394) {
      *pfStack_394 = *pfStack_3cc;
    }
    if (*pfStack_3bc < *pfStack_370) {
      *pfStack_370 = *pfStack_3bc;
    }
    fVar25 = *pfStack_3cc;
    if (*pfStack_368 <= fVar25 && fVar25 != *pfStack_368) {
      *pfStack_368 = fVar25;
    }
    fVar25 = *pfStack_3bc;
    if ((float)*piStack_364 <= fVar25 && fVar25 != (float)*piStack_364) {
      *piStack_364 = (int)fVar25;
    }
  }
  FUN_00642570();
  FUN_0062de10(1);
  FUN_00648d60();
  __security_check_cookie(local_c ^ (uint)auStack_3e0);
  return;
}


