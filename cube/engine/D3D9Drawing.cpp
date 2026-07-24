// D3D9Drawing (engine) -- cube. 5 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "D3D9Drawing.h"

/* plasma::D3D9Drawing::D3D9Drawing @ 0068a970  kind=game  attributed-by=rtti  size=198 */

D3D9Drawing * __thiscall plasma::D3D9Drawing::D3D9Drawing(D3D9Drawing *this,D3D9Drawing *param_1)

{
  int iVar1;
  int iVar2;
  D3D9Drawing *pDVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f92f8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  Drawing::Drawing((Drawing *)this);
  pDVar3 = param_1;
  this->field2_0x124 = param_1;
  this->vftablePtr = &vftable;
  this[1].vftablePtr = (D3D9Drawing_vftable *)0x0;
  this[1].Drawing_data.offset_0x0 = (void *)0x0;
  this[1].Drawing_data.offset_0x4 = 0;
  this[1].Drawing_data.offset_0x8 = 0;
  iVar1 = param_1[2].Drawing_data.offset_0x64;
  local_8 = 0;
  param_1 = this;
  iVar4 = FUN_00583cb0(iVar1,*(undefined4 *)(iVar1 + 4),&param_1);
  iVar2 = *(int *)&pDVar3[2].Drawing_data.field_0x68;
  if (iVar2 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)&pDVar3[2].Drawing_data.field_0x68 = iVar2 + 1;
  *(int *)(iVar1 + 4) = iVar4;
  **(int **)(iVar4 + 4) = iVar4;
  ExceptionList = local_10;
  return this;
}


/* plasma::D3D9Drawing::~D3D9Drawing @ 0068aa40  kind=game  attributed-by=rtti  size=185 */

void __thiscall plasma::D3D9Drawing::~D3D9Drawing(D3D9Drawing *this)

{
  D3D9Drawing_vftable *pDVar1;
  int *piVar2;
  void *pvVar3;
  uint uVar4;
  D3D9Drawing *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f9328;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  this->vftablePtr = &vftable;
  pDVar1 = this[1].vftablePtr;
  local_8 = 0;
  local_14 = this;
  if (pDVar1 != (D3D9Drawing_vftable *)0x0) {
    (**(code **)(pDVar1->deleting_destructor + 8))(pDVar1,uVar4);
  }
  piVar2 = this[1].Drawing_data.offset_0x0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  pvVar3 = (void *)this[1].Drawing_data.offset_0x4;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  pvVar3 = (void *)this[1].Drawing_data.offset_0x8;
  if (pvVar3 != (void *)0x0) {
    operator_delete__(pvVar3);
  }
  if (*(char *)((int)this->field2_0x124 + 4) == '\0') {
    local_14 = this;
    FUN_00587070(&local_14);
  }
  local_8 = 0xffffffff;
  Drawing::~Drawing((Drawing *)this);
  ExceptionList = local_10;
  return;
}


/* plasma::D3D9Drawing::deleting_destructor @ 0068ab00  kind=game  attributed-by=rtti  size=30 */

D3D9Drawing * __thiscall plasma::D3D9Drawing::deleting_destructor(D3D9Drawing *this,byte param_1)

{
  ~D3D9Drawing(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* plasma::D3D9Drawing::vfunction3 @ 0068ab70  kind=game  attributed-by=rtti  size=2840 */

void __thiscall plasma::D3D9Drawing::vfunction3(D3D9Drawing *this,int param_1,float *param_2)

{
  int *piVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  char cVar5;
  int iVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  float fVar12;
  float fVar13;
  undefined1 *puVar14;
  uint local_180;
  int local_17c;
  undefined1 local_178 [64];
  undefined1 local_138 [64];
  undefined1 local_f8 [64];
  undefined4 local_b8 [16];
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  undefined1 local_38 [4];
  int local_34;
  undefined1 local_30 [4];
  float *local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_17c = param_1;
  local_2c = param_2;
  if (this[1].vftablePtr == (D3D9Drawing_vftable *)0x0) goto LAB_0068b67f;
  piVar1 = *(int **)((int)this->field2_0x124 + 0x4c);
  if ((piVar1 == (int *)0x0) ||
     (((param_1 != 0 && (iVar6 = *(int *)(param_1 + 0x3c), (*(byte *)(iVar6 + 0x200) & 1) != 0)) &&
      (*(int *)(*(int *)(iVar6 + 0xec) + *(int *)(iVar6 + 0xc0) * 4) == 0)))) {
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0x104))(piVar1,0,0);
  }
  else {
    (**(code **)(*piVar1 + 0x10))();
  }
  pvVar2 = this->field2_0x124;
  local_34 = *(int *)((int)pvVar2 + 0x2b0);
  iVar6 = FUN_00688770(local_34,*(undefined4 *)(local_34 + 4),(int)pvVar2 + 0x224);
  if (*(int *)((int)pvVar2 + 0x2b4) == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)pvVar2 + 0x2b4) = *(int *)((int)pvVar2 + 0x2b4) + 1;
  *(int *)(local_34 + 4) = iVar6;
  **(int **)(iVar6 + 4) = iVar6;
  if ((param_1 == 0) ||
     (pvVar2 = this->field2_0x124, (*(uint *)((int)pvVar2 + 0x18c) >> 3 & 1) == 0)) {
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,7,0);
  }
  else {
    fVar12 = (float)DAT_0076df44 * -2.0;
    *(float *)((int)pvVar2 + 0x254) =
         *(float *)((int)pvVar2 + 0x234) * 0.0 + *(float *)((int)pvVar2 + 0x224) * 0.0 +
         *(float *)((int)pvVar2 + 0x244) * fVar12 + *(float *)((int)pvVar2 + 0x254);
    *(float *)((int)pvVar2 + 600) =
         *(float *)((int)pvVar2 + 0x238) * 0.0 + *(float *)((int)pvVar2 + 0x228) * 0.0 +
         *(float *)((int)pvVar2 + 0x248) * fVar12 + *(float *)((int)pvVar2 + 600);
    *(float *)((int)pvVar2 + 0x25c) =
         *(float *)((int)pvVar2 + 0x23c) * 0.0 + *(float *)((int)pvVar2 + 0x22c) * 0.0 +
         *(float *)((int)pvVar2 + 0x24c) * fVar12 + *(float *)((int)pvVar2 + 0x25c);
    *(float *)((int)pvVar2 + 0x260) =
         *(float *)((int)pvVar2 + 0x240) * 0.0 + *(float *)((int)pvVar2 + 0x230) * 0.0 +
         *(float *)((int)pvVar2 + 0x250) * fVar12 + *(float *)((int)pvVar2 + 0x260);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,7,1);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0x17,5);
    DAT_0076df44 = DAT_0076df44 + 1;
  }
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 400))(piVar1,0,this[1].vftablePtr,0,0x30);
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 0x15c))(piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x19c));
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 0x170))(piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x194));
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 0x1ac))(piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x198));
  FUN_0068a910(*(undefined4 *)((int)this->field2_0x124 + 0x1c0),(int)this->field2_0x124 + 0x264,4);
  FUN_0068a910(*(undefined4 *)((int)this->field2_0x124 + 0x1c4),(int)this->field2_0x124 + 0x224,4);
  puVar10 = (undefined4 *)((int)this->field2_0x124 + 0x224);
  puVar11 = local_b8;
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  FUN_0058c440();
  FUN_004490f0();
  FUN_0068a910(*(undefined4 *)((int)this->field2_0x124 + 0x1d8),local_b8,2);
  pvVar2 = this->field2_0x124;
  if ((*(byte *)((int)pvVar2 + 0x18c) & 1) == 0) {
    local_28 = 0.0;
  }
  else {
    local_28 = *(float *)((int)pvVar2 + 0x2a4);
  }
  local_24 = 0.0;
  local_20 = 0.0;
  local_1c = 0.0;
  (**(code **)(**(int **)((int)pvVar2 + 0x2c0) + 0x178))
            (*(int **)((int)pvVar2 + 0x2c0),*(undefined4 *)((int)pvVar2 + 0x1ec),&local_28,1);
  iVar6 = local_17c;
  if (local_17c == 0) {
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1f0),local_2c,1);
LAB_0068b27c:
    local_34 = 0;
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0x188))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1bc),&local_34,1);
  }
  else {
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    pfVar8 = (float *)(*(int *)(*(int *)(local_17c + 0x3c) + 0x118) * 0x10 +
                      *(int *)(*(int *)(local_17c + 0x3c) + 0x144));
    local_28 = *pfVar8 * *local_2c;
    local_24 = local_2c[1] * pfVar8[1];
    local_20 = local_2c[2] * pfVar8[2];
    local_1c = local_2c[3] * pfVar8[3];
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1f0),&local_28);
    if ((*(int *)(iVar6 + 0x44) == 0) || (*(int **)(iVar6 + 0x34) == (int *)0x0)) goto LAB_0068b27c;
    cVar5 = (**(code **)(**(int **)(iVar6 + 0x34) + 0x14))();
    if (cVar5 == '\0') goto LAB_0068b27c;
    uVar7 = FUN_00629220(local_38);
    FUN_00629280(local_30);
    cVar5 = FUN_00627810(uVar7);
    if (cVar5 == '\0') goto LAB_0068b27c;
    iVar3 = *(int *)(iVar6 + 0x44);
    iVar6 = iVar6 + 0x48;
    puVar14 = local_f8;
    FUN_00424f30(local_138,*(int *)(iVar3 + 0x148) + 0x88);
    FUN_00424f30(puVar14,iVar6);
    iVar6 = iVar3 + 0xe8;
    puVar14 = local_178;
    FUN_00424f30(local_138,*(int *)(iVar3 + 0x148) + 0x48);
    FUN_00424f30(puVar14,iVar6);
    FUN_0068a910(*(undefined4 *)((int)this->field2_0x124 + 0x1c8),local_f8,4);
    FUN_0068a910(*(undefined4 *)((int)this->field2_0x124 + 0x1cc),local_178,4);
    local_34 = 1;
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0x188))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1bc),&local_34,1);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    iVar6 = FUN_00629200(local_30);
    pfVar8 = (float *)FUN_00629200(&local_20);
    local_18 = *pfVar8;
    local_14 = *(undefined4 *)(iVar6 + 4);
    local_10 = 0;
    local_c = 0;
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1dc),&local_18,1);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    iVar6 = FUN_00629220(&local_20);
    pfVar8 = (float *)FUN_00629220(local_30);
    local_18 = *pfVar8;
    local_14 = *(undefined4 *)(iVar6 + 4);
    local_10 = 0;
    local_c = 0;
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1e0),&local_18,1);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    iVar6 = FUN_00629240(&local_20);
    pfVar8 = (float *)FUN_00629240(local_30);
    local_18 = *pfVar8;
    local_14 = *(undefined4 *)(iVar6 + 4);
    local_10 = 0;
    local_c = 0;
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1e4),&local_18,1);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    iVar6 = FUN_00629280(&local_20);
    pfVar8 = (float *)FUN_00629280(local_30);
    local_18 = *pfVar8;
    local_14 = *(undefined4 *)(iVar6 + 4);
    local_10 = 0;
    local_c = 0;
    (**(code **)(*piVar1 + 0x178))
              (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1e8),&local_18,1);
    iVar6 = local_17c;
  }
  piVar1 = (int *)(this->Drawing_data).offset_0x64;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
    FUN_0068a910(*(undefined4 *)((int)this->field2_0x124 + 0x1d4),&(this->Drawing_data).field_0x68,2
                );
  }
  local_180 = (uint)((this->Drawing_data).offset_0x64 != 0);
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 0x1c4))(piVar1,*(undefined4 *)((int)this->field2_0x124 + 500),&local_180,1)
  ;
  uVar9 = 0;
  if ((iVar6 != 0) &&
     (iVar6 = *(int *)(iVar6 + 0x3c),
     *(int *)(*(int *)(iVar6 + 0xec) + *(int *)(iVar6 + 0xc0) * 4) != 0)) {
    if ((*(uint *)(iVar6 + 0x200) & 2) == 0) {
      uVar9 = ((int)(char)*(uint *)(iVar6 + 0x200) & 4U | 2) >> 1;
    }
    else {
      uVar9 = 2;
    }
  }
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  local_18 = (float)uVar9;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*piVar1 + 0x1b4))
            (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1f8),&local_18,1);
  local_18 = *(float *)&(this->Drawing_data).field_0xa8;
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*piVar1 + 0x1b4))
            (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x1fc),&local_18,1);
  local_18 = *(float *)&(this->Drawing_data).field_0xac;
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*piVar1 + 0x1b4))
            (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x200),&local_18,1);
  local_18 = *(float *)&(this->Drawing_data).field_0xb0;
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*piVar1 + 0x1b4))
            (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x204),&local_18,1);
  local_18 = *(float *)&(this->Drawing_data).field_0xb4;
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  (**(code **)(*piVar1 + 0x1b4))
            (piVar1,*(undefined4 *)((int)this->field2_0x124 + 0x208),&local_18,1);
  FUN_00423e70();
  pvVar2 = this->field2_0x124;
  fVar13 = 1.0 / (float)*(int *)((int)pvVar2 + 0x10c);
  fVar12 = 1.0 / (float)*(int *)((int)pvVar2 + 0x110);
  if (fVar13 != 1.0) {
    local_78 = local_78 * fVar13;
    local_74 = local_74 * fVar13;
    local_70 = local_70 * fVar13;
    local_6c = local_6c * fVar13;
  }
  if (fVar12 != 1.0) {
    local_68 = fVar12 * local_68;
    local_64 = fVar12 * local_64;
    local_60 = fVar12 * local_60;
    local_5c = fVar12 * local_5c;
  }
  FUN_00412400((int)pvVar2 + 0x224);
  FUN_0068a910(*(undefined4 *)((int)pvVar2 + 0x1d0),&local_78,2);
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 0xe4))(piVar1,7,0);
  if (this[1].Drawing_data.offset_0x0 != (void *)0x0) {
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xa1,0);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0x1a0))(piVar1,this[1].Drawing_data.offset_0x0);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0x148))
              (piVar1,4,0,0,
               (this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >> 3,0,
               (uint)((this->Drawing_data).offset_0xf4 - (int)(this->Drawing_data).offset_0xf0 >> 2)
               / 3);
    piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
    (**(code **)(*piVar1 + 0xe4))(piVar1,0xa1,1);
  }
  puVar10 = (undefined4 *)(*(int *)(*(int *)((int)this->field2_0x124 + 0x2b0) + 4) + 8);
  puVar11 = (undefined4 *)((int)this->field2_0x124 + 0x224);
  for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar10;
    puVar10 = puVar10 + 1;
    puVar11 = puVar11 + 1;
  }
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2b0);
  piVar4 = (int *)piVar1[1];
  if (piVar4 != piVar1) {
    *(int *)piVar4[1] = *piVar4;
    *(int *)(*piVar4 + 4) = piVar4[1];
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar4);
  }
  piVar1 = *(int **)((int)this->field2_0x124 + 0x2c0);
  (**(code **)(*piVar1 + 0xe4))(piVar1,7,0);
LAB_0068b67f:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9Drawing::vfunction2 @ 0068b7f0  kind=game  attributed-by=rtti  size=911 */

void __thiscall plasma::D3D9Drawing::vfunction2(D3D9Drawing *this)

{
  D3D9Drawing *pDVar1;
  int iVar2;
  uint uVar3;
  D3D9Drawing_vftable *pDVar4;
  int *piVar5;
  void *pvVar6;
  void *pvVar7;
  undefined4 *puVar8;
  int iVar9;
  Drawing_data *pDVar10;
  int local_24;
  void *local_20;
  void *local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  Drawing::vfunction2((Drawing *)this);
  uVar3 = (this->Drawing_data).offset_0xb8;
  if ((uVar3 & 9) != 0) {
    (this->Drawing_data).offset_0xb8 = uVar3 | 0xf;
  }
  if ((this->Drawing_data).offset_0x0 != (void *)(this->Drawing_data).offset_0x4) {
    FUN_006758f0();
    pDVar4 = this[1].vftablePtr;
    pDVar1 = this + 1;
    if ((pDVar4 != (D3D9Drawing_vftable *)0x0) &&
       (this[1].Drawing_data.offset_0xc !=
        (void *)((this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >> 3))) {
      (**(code **)(pDVar4->deleting_destructor + 8))(pDVar4);
      pDVar1->vftablePtr = (D3D9Drawing_vftable *)0x0;
    }
    piVar5 = this[1].Drawing_data.offset_0x0;
    if ((piVar5 != (int *)0x0) &&
       (this[1].Drawing_data.offset_0x10 !=
        (this->Drawing_data).offset_0xf4 - (int)(this->Drawing_data).offset_0xf0 >> 2)) {
      (**(code **)(*piVar5 + 8))(piVar5);
      this[1].Drawing_data.offset_0x0 = (void *)0x0;
    }
    if (pDVar1->vftablePtr == (D3D9Drawing_vftable *)0x0) {
      this[1].Drawing_data.offset_0xc =
           (void *)((this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >> 3);
      piVar5 = *(int **)((int)this->field2_0x124 + 0x2c0);
      (**(code **)(*piVar5 + 0x68))
                (piVar5,((this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >>
                        3) * 0x30,0x208,0,0,pDVar1,0);
    }
    pvVar7 = (void *)this[1].Drawing_data.offset_0x4;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      this[1].Drawing_data.offset_0x4 = 0;
    }
    pvVar7 = (void *)this[1].Drawing_data.offset_0x8;
    if (pvVar7 != (void *)0x0) {
      operator_delete__(pvVar7);
      this[1].Drawing_data.offset_0x8 = 0;
    }
    (**(code **)(pDVar1->vftablePtr->deleting_destructor + 0x2c))
              (pDVar1->vftablePtr,0,
               ((this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >> 3) *
               0x30,&local_1c,0x2000);
    local_20 = (void *)0x0;
    if (0 < (int)((this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 &
                 0xfffffff8U)) {
      local_24 = 0;
      iVar9 = 0;
      do {
        pvVar7 = (this->Drawing_data).offset_0xc0;
        iVar2 = (int)local_20 * 8;
        *(undefined4 *)(iVar9 + (int)local_1c) = *(undefined4 *)((int)pvVar7 + iVar2);
        *(undefined4 *)(iVar9 + 4 + (int)local_1c) = *(undefined4 *)((int)pvVar7 + iVar2 + 4);
        puVar8 = (undefined4 *)((int)(this->Drawing_data).offset_0xd8 + local_24);
        *(undefined4 *)(iVar9 + 8 + (int)local_1c) = *puVar8;
        *(undefined4 *)(iVar9 + 0xc + (int)local_1c) = puVar8[1];
        *(undefined4 *)(iVar9 + 0x10 + (int)local_1c) = puVar8[2];
        *(undefined4 *)(iVar9 + 0x14 + (int)local_1c) = puVar8[3];
        pvVar7 = (this->Drawing_data).offset_0xe4;
        local_10 = *(undefined4 *)((int)pvVar7 + local_24);
        uStack_c = *(undefined4 *)((int)pvVar7 + local_24 + 4);
        *(ulonglong *)(iVar9 + 0x18 + (int)local_1c) = CONCAT44(uStack_c,local_10);
        pvVar7 = (this->Drawing_data).offset_0xe4;
        local_18 = *(undefined4 *)((int)pvVar7 + local_24 + 8);
        uStack_14 = *(undefined4 *)((int)pvVar7 + local_24 + 0xc);
        *(ulonglong *)(iVar9 + 0x20 + (int)local_1c) = CONCAT44(uStack_14,local_18);
        pvVar7 = (this->Drawing_data).offset_0xcc;
        *(undefined4 *)(iVar9 + 0x28 + (int)local_1c) = *(undefined4 *)((int)pvVar7 + iVar2);
        *(undefined4 *)(iVar9 + 0x2c + (int)local_1c) = *(undefined4 *)((int)pvVar7 + iVar2 + 4);
        local_20 = (void *)((int)local_20 + 1);
        iVar9 = iVar9 + 0x30;
        local_24 = local_24 + 0x10;
      } while ((int)local_20 <
               (this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >> 3);
    }
    pDVar10 = &this[1].Drawing_data;
    pvVar7 = (void *)FUN_0068d652(((this->Drawing_data).offset_0xc4 -
                                   (int)(this->Drawing_data).offset_0xc0 >> 3) * 0x30);
    this[1].Drawing_data.offset_0x4 = pvVar7;
    memcpy(pvVar7,local_1c,
           ((this->Drawing_data).offset_0xc4 - (int)(this->Drawing_data).offset_0xc0 >> 3) * 0x30);
    (**(code **)((this[1].vftablePtr)->deleting_destructor + 0x30))(this[1].vftablePtr);
    pvVar7 = (void *)(this->Drawing_data).offset_0xf4;
    pvVar6 = (this->Drawing_data).offset_0xf0;
    if (pvVar6 != pvVar7) {
      if (pDVar10->offset_0x0 == (void *)0x0) {
        piVar5 = *(int **)((int)this->field2_0x124 + 0x2c0);
        (**(code **)(*piVar5 + 0x6c))
                  (piVar5,(int)pvVar7 - (int)pvVar6 & 0xfffffffc,0x208,0x66,0,pDVar10,0);
        this[1].Drawing_data.offset_0x10 =
             (this->Drawing_data).offset_0xf4 - (int)(this->Drawing_data).offset_0xf0 >> 2;
      }
      (**(code **)(*(int *)pDVar10->offset_0x0 + 0x2c))
                (pDVar10->offset_0x0,0,
                 (this->Drawing_data).offset_0xf4 - (int)(this->Drawing_data).offset_0xf0 &
                 0xfffffffc,&local_20,0x2000);
      memcpy(local_20,(this->Drawing_data).offset_0xf0,
             (this->Drawing_data).offset_0xf4 - (int)(this->Drawing_data).offset_0xf0 & 0xfffffffc);
      pvVar7 = (void *)FUN_0068d652((this->Drawing_data).offset_0xf4 -
                                    (int)(this->Drawing_data).offset_0xf0 & 0xfffffffc);
      this[1].Drawing_data.offset_0x8 = pvVar7;
      memcpy(pvVar7,(this->Drawing_data).offset_0xf0,
             (this->Drawing_data).offset_0xf4 - (int)(this->Drawing_data).offset_0xf0 & 0xfffffffc);
      (**(code **)(*(int *)pDVar10->offset_0x0 + 0x30))(pDVar10->offset_0x0);
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


