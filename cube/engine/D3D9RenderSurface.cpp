// D3D9RenderSurface (engine) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "D3D9RenderSurface.h"

/* plasma::D3D9RenderSurface::D3D9RenderSurface @ 0068bf70  kind=game  attributed-by=rtti  size=75 */

D3D9RenderSurface * __thiscall
plasma::D3D9RenderSurface::D3D9RenderSurface
          (D3D9RenderSurface *this,undefined4 param_1,undefined1 param_2)

{
  RenderSurface::RenderSurface((RenderSurface *)this,param_2);
  *(undefined4 *)&this[1].RenderSurface_data = param_1;
  this->vftablePtr = &vftable;
  this->field2_0x2c = (int *)0x0;
  this[1].vftablePtr = (D3D9RenderSurface_vftable *)0x0;
  this[1].RenderSurface_data.offset_0x4 = 0;
  this[1].RenderSurface_data.offset_0x8 = 0;
  this[1].RenderSurface_data.offset_0xc = 0;
  this[1].RenderSurface_data.offset_0x10 = 0;
  return this;
}


/* plasma::D3D9RenderSurface::deleting_destructor @ 0068bfc0  kind=game  attributed-by=rtti  size=139 */

D3D9RenderSurface * __thiscall
plasma::D3D9RenderSurface::deleting_destructor(D3D9RenderSurface *this,byte param_1)

{
  int *piVar1;
  uint uVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006f93b8;
  local_10 = ExceptionList;
  uVar2 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
                    /* inlined destructor: plasma::D3D9RenderSurface::~D3D9RenderSurface */
  this->vftablePtr = &vftable;
  piVar1 = (int *)this[1].RenderSurface_data.offset_0xc;
  local_8 = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1,uVar2);
  }
  piVar1 = (int *)this[1].RenderSurface_data.offset_0x8;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  piVar1 = (int *)this[1].RenderSurface_data.offset_0x4;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  local_8 = 0xffffffff;
  RenderSurface::~RenderSurface((RenderSurface *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  ExceptionList = local_10;
  return this;
}


/* plasma::D3D9RenderSurface::vfunction5 @ 0068c050  kind=game  attributed-by=rtti  size=100 */

void __thiscall plasma::D3D9RenderSurface::vfunction5(D3D9RenderSurface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x104))(piVar1,0,this[1].RenderSurface_data.offset_0x4);
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x114))(piVar1,0,6,1);
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x114))(piVar1,0,5,1);
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x114))(piVar1,0,7,0);
  return;
}


/* plasma::D3D9RenderSurface::vfunction9 @ 0068c0c0  kind=game  attributed-by=rtti  size=1556 */

void __thiscall
plasma::D3D9RenderSurface::vfunction9
          (D3D9RenderSurface *this,float *param_1,float *param_2,char param_3)

{
  int *piVar1;
  D3D9RenderSurface_vftable *pDVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float local_b8 [4];
  float local_a8;
  float local_a4;
  float local_9c;
  float local_88;
  float local_84;
  float local_7c;
  float local_78;
  float local_74;
  float local_6c;
  float local_68;
  float local_64;
  float local_5c;
  float local_48;
  float local_44;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  float local_28 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  piVar1 = *(int **)&this[1].RenderSurface_data;
  pfVar4 = (float *)(piVar1 + 0x99);
  pfVar5 = local_b8;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *pfVar5 = *pfVar4;
    pfVar4 = pfVar4 + 1;
    pfVar5 = pfVar5 + 1;
  }
  if (param_3 == '\0') {
    (**(code **)(*piVar1 + 0x38))(&local_78);
    fVar11 = param_1[1];
    fVar10 = *param_1;
    local_28[0] = 1.0 / (local_5c * fVar11 + local_6c * fVar10 + local_3c);
    fVar6 = fVar10 + *param_2;
    local_28[1] = local_28[0] * (local_64 * fVar11 + local_74 * fVar10 + local_44);
    local_28[0] = local_28[0] * (local_68 * fVar11 + local_78 * fVar10 + local_48);
    fVar10 = 1.0 / (fVar11 * local_5c + fVar6 * local_6c + local_3c);
    fVar8 = param_2[1] + fVar11;
    local_28[2] = fVar10 * (fVar11 * local_68 + fVar6 * local_78 + local_48);
    local_28[3] = fVar10 * (fVar11 * local_64 + fVar6 * local_74 + local_44);
    fVar11 = 1.0 / (fVar8 * local_5c + fVar6 * local_6c + local_3c);
    local_28[4] = fVar11 * (fVar8 * local_68 + fVar6 * local_78 + local_48);
    local_28[5] = fVar11 * (fVar8 * local_64 + fVar6 * local_74 + local_44);
    fVar11 = *param_1;
    fVar10 = 1.0 / (fVar8 * local_5c + fVar11 * local_6c + local_3c);
    iVar3 = 1;
    local_28[7] = fVar10 * (fVar8 * local_64 + fVar11 * local_74 + local_44);
    local_28[6] = fVar10 * (fVar8 * local_68 + fVar11 * local_78 + local_48);
    fVar11 = local_28[1];
    fVar10 = local_28[1];
    fVar6 = local_28[0];
    fVar8 = local_28[0];
    do {
      fVar7 = local_28[iVar3 * 2];
      if (fVar7 <= fVar6) {
        fVar6 = fVar7;
      }
      fVar12 = local_28[iVar3 * 2 + 1];
      if (fVar12 <= fVar11) {
        fVar11 = fVar12;
      }
      if (fVar8 <= fVar7) {
        fVar8 = fVar7;
      }
      if (fVar10 <= fVar12) {
        fVar10 = fVar12;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    fVar9 = 1.0 / (local_9c * fVar11 + local_b8[3] * fVar6 + local_7c);
    fVar7 = fVar9 * (fVar11 * local_a4 + fVar6 * local_b8[1] + local_84);
    fVar14 = 1.0 / (local_9c * fVar10 + local_b8[3] * fVar8 + local_7c);
    pDVar2 = this[1].vftablePtr;
    fVar12 = (float)(int)this->field2_0x2c;
    fVar13 = fVar14 * (local_a8 * fVar10 + local_b8[0] * fVar8 + local_88);
    fVar14 = fVar14 * (fVar8 * local_b8[1] + fVar10 * local_a4 + local_84);
    local_38 = (int)((fVar9 * (local_a8 * fVar11 + local_b8[0] * fVar6 + local_88) + 1.0) * 0.5 *
                    fVar12) + -1;
  }
  else {
    fVar11 = param_1[1];
    fVar10 = *param_1;
    pDVar2 = this[1].vftablePtr;
    fVar6 = 1.0 / (local_b8[3] * fVar10 + local_9c * fVar11 + local_7c);
    fVar7 = fVar6 * (fVar10 * local_b8[1] + fVar11 * local_a4 + local_84);
    fVar9 = *param_2 + fVar10;
    fVar8 = param_2[1] + fVar11;
    fVar14 = 1.0 / (local_b8[3] * fVar9 + local_9c * fVar8 + local_7c);
    fVar12 = (float)(int)this->field2_0x2c;
    fVar13 = fVar14 * (local_a8 * fVar8 + local_b8[0] * fVar9 + local_88);
    fVar14 = fVar14 * (fVar9 * local_b8[1] + fVar8 * local_a4 + local_84);
    local_38 = (int)(((local_b8[0] * fVar10 + local_a8 * fVar11 + local_88) * fVar6 + 1.0) * 0.5 *
                    fVar12);
  }
  local_34 = (int)((fVar7 - 1.0) * 0.5 * (float)-(int)pDVar2);
  local_30 = (int)((fVar13 + 1.0) * 0.5 * fVar12) + 2;
  local_2c = (int)((fVar14 - 1.0) * 0.5 * (float)-(int)pDVar2) + 2;
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0xac))(piVar1,1,&local_38,7,0,0,0);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9RenderSurface::vfunction10 @ 0068c6e0  kind=game  attributed-by=rtti  size=133 */

void __thiscall plasma::D3D9RenderSurface::vfunction10(D3D9RenderSurface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0xac))
            (piVar1,0,0,7,
             (((int)((float)(this->RenderSurface_data).offset_0x14 * 255.0) & 0xffU |
              (int)((float)(this->RenderSurface_data).offset_0x20 * 255.0) << 8) << 8 |
             (int)((float)(this->RenderSurface_data).offset_0x18 * 255.0) & 0xffU) << 8 |
             (int)((float)(this->RenderSurface_data).offset_0x1c * 255.0) & 0xffU,0,0);
  return;
}


/* plasma::D3D9RenderSurface::vfunction4 @ 0068c770  kind=game  attributed-by=rtti  size=67 */

void __thiscall plasma::D3D9RenderSurface::vfunction4(D3D9RenderSurface *this)

{
  int *piVar1;
  
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x94))(piVar1,0,this[1].RenderSurface_data.offset_0x10);
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x9c))(piVar1,this[1].RenderSurface_data.offset_0x14);
  piVar1 = (int *)this[1].RenderSurface_data.offset_0x10;
  (**(code **)(*piVar1 + 8))(piVar1);
  piVar1 = (int *)this[1].RenderSurface_data.offset_0x14;
  (**(code **)(*piVar1 + 8))(piVar1);
  return;
}


/* plasma::D3D9RenderSurface::vfunction6 @ 0068c7c0  kind=game  attributed-by=rtti  size=763 */

void __thiscall
plasma::D3D9RenderSurface::vfunction6
          (D3D9RenderSurface *this,int *param_1,float *param_2,float *param_3,float param_4)

{
  float fVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float local_b4;
  undefined1 local_b0 [64];
  undefined1 local_70 [48];
  float local_40;
  float local_3c;
  float local_30 [4];
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10 [3];
  
  local_10[2] = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x38))(local_70);
  local_30[0] = local_40 * param_4;
  local_30[1] = local_3c * param_4;
  iVar3 = 0;
  do {
    iVar4 = iVar3 + 4;
    *(int *)((int)local_10 + iVar3) = (int)*(float *)((int)local_30 + iVar3);
    iVar3 = iVar4;
  } while (iVar4 < 8);
  local_b4 = local_40 * param_4 - (float)local_10[0];
  local_14 = local_3c * param_4 - (float)local_10[1];
  if (param_4 == 1.0) {
    local_b4 = 0.0;
    local_14 = 0.0;
  }
  FUN_00423e70();
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x3c))(local_b0);
  local_10[1] = *param_1;
  local_30[1] = (float)param_1[1];
  fVar1 = *param_2;
  fVar7 = param_2[1];
  local_30[2] = fVar1;
  if (fVar1 < 0.0) {
    local_30[2] = (float)(int)this->field2_0x2c;
  }
  if (fVar7 < 0.0) {
    fVar7 = (float)(int)this[1].vftablePtr;
  }
  fVar8 = (float)(int)this->field2_0x2c;
  fVar5 = (1.0 - param_4) * 0.5;
  fVar6 = fVar5 * (float)(int)this[1].vftablePtr;
  fVar5 = fVar5 * fVar8;
  if (param_4 < 0.0) {
    param_4 = fVar8 / fVar1;
    local_b4 = 0.0;
    fVar6 = 0.0;
    local_14 = 0.0;
    fVar5 = 0.0;
  }
  fVar1 = *param_3;
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  local_30[3] = (param_3[1] * param_4 + (fVar6 - local_14)) / (float)(int)this[1].vftablePtr;
  local_1c = (local_30[2] * param_4) / fVar8;
  local_14 = (fVar7 * param_4) / (float)(int)this[1].vftablePtr;
  (**(code **)(*piVar2 + 0x104))(piVar2,0,this[1].RenderSurface_data.offset_0x4);
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar2 + 0x15c))
            (piVar2,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x19c));
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar2 + 0x170))
            (piVar2,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1a0));
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar2 + 0x1ac))
            (piVar2,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1a4));
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar2 + 0x114))(piVar2,0,6,2);
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar2 + 0x114))(piVar2,0,5,2);
  local_20 = local_1c;
  local_1c = local_14;
  local_14 = local_30[3];
  local_10[0] = local_10[1];
  local_10[1] = (int)local_30[1];
  local_30[3] = fVar7;
  local_18 = (fVar1 * param_4 + (fVar5 - local_b4)) / fVar8;
  FUN_00689f30(local_10,local_30 + 2,&local_18,&local_20,&(this->RenderSurface_data).offset_0x4);
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x3c))(local_70);
  __security_check_cookie(local_10[2] ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9RenderSurface::vfunction7 @ 0068cad0  kind=game  attributed-by=rtti  size=1068 */

void __thiscall
plasma::D3D9RenderSurface::vfunction7
          (D3D9RenderSurface *this,float *param_1,float *param_2,float param_3,char param_4,
          float param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  float local_bc;
  undefined1 local_b8 [64];
  undefined1 local_78 [48];
  float local_48;
  float local_44;
  float local_38;
  float local_34;
  float local_30 [10];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x38))(local_78);
  local_30[4] = local_48 * param_5;
  local_30[5] = local_44 * param_5;
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 4;
    *(int *)((int)local_30 + iVar5 + 0x18) = (int)*(float *)((int)local_30 + iVar5 + 0x10);
    iVar5 = iVar6;
  } while (iVar6 < 8);
  local_bc = local_48 * param_5 - (float)(int)local_30[6];
  local_30[9] = local_44 * param_5 - (float)(int)local_30[7];
  if (param_5 == 1.0) {
    local_bc = 0.0;
    local_30[9] = 0.0;
  }
  FUN_00423e70();
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x3c))(local_b8);
  local_30[5] = *param_1;
  fVar1 = param_1[1];
  fVar2 = *param_2;
  fVar3 = param_2[1];
  fVar8 = (float)(int)this->field2_0x2c;
  fVar10 = (1.0 - param_5) * 0.5;
  fVar9 = (float)(int)this[1].vftablePtr;
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  local_34 = (local_30[5] * param_5 + (fVar8 * fVar10 - local_bc) + 0.5) / fVar8;
  local_30[7] = (fVar1 * param_5 + (fVar9 * fVar10 - local_30[9]) + 0.5) / fVar9;
  local_30[9] = (fVar2 * param_5) / fVar8;
  (**(code **)(*piVar7 + 0x104))(piVar7,0,this[1].RenderSurface_data.offset_0x4);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x15c))
            (piVar7,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x19c));
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x170))
            (piVar7,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1a0));
  iVar5 = *(int *)&this[1].RenderSurface_data;
  piVar7 = *(int **)(iVar5 + 0x2c0);
  if (param_4 == '\0') {
    (**(code **)(*piVar7 + 0x1ac))(piVar7,*(undefined4 *)(iVar5 + 0x1b8));
    piVar4 = this->field2_0x2c;
    piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    uVar11 = *(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x220);
  }
  else {
    (**(code **)(*piVar7 + 0x1ac))(piVar7,*(undefined4 *)(iVar5 + 0x1b4));
    piVar4 = this->field2_0x2c;
    piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    uVar11 = *(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x21c);
  }
  local_30[0] = (param_3 * 0.25) / (float)(int)piVar4;
  local_30[3] = 0.0;
  local_30[2] = 0.0;
  local_30[1] = 0.0;
  (**(code **)(*piVar7 + 0x1b4))(piVar7,uVar11,local_30,1);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x1b,0);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0xce,0);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,6,2);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,5,2);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,1,3);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,2,3);
  local_30[8] = local_30[9];
  local_38 = local_34;
  local_34 = local_30[7];
  local_30[4] = local_30[5];
  local_30[0] = 1.0;
  local_30[1] = 1.0;
  local_30[2] = 1.0;
  local_30[3] = 1.0;
  local_30[5] = fVar1;
  local_30[6] = fVar2;
  local_30[7] = fVar3;
  local_30[9] = (fVar3 * param_5) / fVar9;
  FUN_00689f30(local_30 + 4,local_30 + 6,&local_38,local_30 + 8,local_30);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0x1b,1);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0xe4))(piVar7,0xce,1);
  piVar7 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar7 + 0x114))(piVar7,0,6,1);
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x3c))(local_78);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9RenderSurface::vfunction8 @ 0068cf10  kind=game  attributed-by=rtti  size=516 */

void __thiscall
plasma::D3D9RenderSurface::vfunction8
          (D3D9RenderSurface *this,float *param_1,float *param_2,float *param_3,float param_4,
          undefined4 param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  D3D9RenderSurface_vftable *pDVar4;
  int *piVar5;
  float fVar6;
  undefined4 uVar7;
  float *pfVar8;
  undefined1 local_d8 [64];
  undefined1 local_98 [64];
  float fStack_58;
  float fStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_48;
  float fStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  float fStack_38;
  float fStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
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
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x38))(local_98);
  FUN_00423e70();
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x3c))(local_d8);
  fVar1 = *param_1;
  local_1c = param_1[1];
  fVar2 = *param_2;
  local_14 = param_2[1];
  local_c = *param_3 / (float)(int)this->field2_0x2c;
  pDVar4 = this[1].vftablePtr;
  local_24 = (fVar2 * param_4) / (float)(int)this->field2_0x2c;
  fVar6 = local_14 * param_4;
  fVar3 = param_3[1];
  piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar5 + 0x104))(piVar5,0,this[1].RenderSurface_data.offset_0x4);
  piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar5 + 0x114))(piVar5,0,6,1);
  piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar5 + 0x114))(piVar5,0,5,1);
  piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar5 + 0x15c))
            (piVar5,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x19c));
  piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar5 + 0x170))
            (piVar5,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1a0));
  switch(param_5) {
  case 1:
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar5 + 0x1ac))
              (piVar5,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1a4));
    goto LAB_0068d1c6;
  case 2:
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar5 + 0x1ac))
              (piVar5,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1a8));
    fStack_38 = 1.0 / (float)(int)this->field2_0x2c;
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    fStack_34 = 1.0 / (float)(int)this[1].vftablePtr;
    pfVar8 = &fStack_38;
    uStack_30 = 0;
    uStack_2c = 0;
    uVar7 = *(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x210);
    break;
  case 3:
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar5 + 0x1ac))
              (piVar5,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1ac));
    fStack_48 = 1.0 / (float)(int)this->field2_0x2c;
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    fStack_44 = 1.0 / (float)(int)this[1].vftablePtr;
    pfVar8 = &fStack_48;
    uStack_40 = 0;
    uStack_3c = 0;
    uVar7 = *(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x214);
    break;
  case 4:
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar5 + 0x1ac))
              (piVar5,*(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x1b0));
    fStack_58 = 1.0 / (float)(int)this->field2_0x2c;
    piVar5 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    fStack_54 = 1.0 / (float)(int)this[1].vftablePtr;
    pfVar8 = &fStack_58;
    uStack_50 = 0;
    uStack_4c = 0;
    uVar7 = *(undefined4 *)(*(int *)&this[1].RenderSurface_data + 0x218);
    break;
  default:
    goto LAB_0068d1c6;
  }
  (**(code **)(*piVar5 + 0x1b8))(piVar5,uVar7,pfVar8,1);
LAB_0068d1c6:
  local_18 = (float)(int)fVar2;
  local_14 = (float)(int)local_14;
  local_20 = (float)(int)fVar1;
  local_1c = (float)(int)local_1c;
  local_28 = local_24;
  local_10 = local_c;
  local_24 = fVar6 / (float)(int)pDVar4;
  local_c = fVar3 / (float)(int)pDVar4;
  FUN_00689f30(&local_20,&local_18,&local_10,&local_28,&(this->RenderSurface_data).offset_0x4);
  (**(code **)(**(int **)&this[1].RenderSurface_data + 0x3c))(local_98);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* plasma::D3D9RenderSurface::vfunction3 @ 0068d290  kind=game  attributed-by=rtti  size=102 */

void __thiscall plasma::D3D9RenderSurface::vfunction3(D3D9RenderSurface *this)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0x98))(piVar1,0,&this[1].RenderSurface_data.offset_0x10);
  piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  (**(code **)(*piVar1 + 0xa0))(piVar1,&this[1].RenderSurface_data.offset_0x14);
  iVar2 = this[1].RenderSurface_data.offset_0x8;
  if (iVar2 != 0) {
    piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar1 + 0x94))(piVar1,0,iVar2);
    piVar1 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar1 + 0x9c))(piVar1,this[1].RenderSurface_data.offset_0xc);
  }
  return;
}


/* plasma::D3D9RenderSurface::vfunction2 @ 0068d350  kind=game  attributed-by=rtti  size=198 */

uint __thiscall
plasma::D3D9RenderSurface::vfunction2(D3D9RenderSurface *this,int param_1,int param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  
  puVar1 = &this[1].RenderSurface_data.offset_0x4;
  if (((this[1].RenderSurface_data.offset_0x4 != 0) && ((int *)param_1 == this->field2_0x2c)) &&
     ((D3D9RenderSurface_vftable *)param_2 == this[1].vftablePtr)) {
    return param_1 & 0xffffff00;
  }
  piVar2 = (int *)this[1].RenderSurface_data.offset_0x8;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    this[1].RenderSurface_data.offset_0x8 = 0;
  }
  piVar2 = (int *)*puVar1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *puVar1 = 0;
  }
  piVar2 = (int *)this[1].RenderSurface_data.offset_0xc;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    this[1].RenderSurface_data.offset_0xc = 0;
  }
  if (*puVar1 == 0) {
    piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
    (**(code **)(*piVar2 + 0x5c))(piVar2,param_1,param_2,1,1,0x15,0,puVar1,0);
  }
  (**(code **)(*(int *)*puVar1 + 0x48))((int *)*puVar1,0,&this[1].RenderSurface_data.offset_0x8);
  piVar2 = *(int **)(*(int *)&this[1].RenderSurface_data + 0x2c0);
  uVar3 = (**(code **)(*piVar2 + 0x74))
                    (piVar2,param_1,param_2,0x4b,0,0,1,&this[1].RenderSurface_data.offset_0xc,0);
  this->field2_0x2c = (int *)param_1;
  this[1].vftablePtr = (D3D9RenderSurface_vftable *)param_2;
  return CONCAT31((int3)((uint)uVar3 >> 8),1);
}


