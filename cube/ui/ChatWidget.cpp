// ChatWidget (ui) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "ChatWidget.h"

/* cube::ChatWidget::~ChatWidget @ 00439530  kind=game  attributed-by=rtti  size=75 */

void __thiscall cube::ChatWidget::~ChatWidget(ChatWidget *this)

{
  if (7 < *(uint *)&this->field_0x17c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&this->field_0x168);
  }
  *(undefined4 *)&this->field_0x17c = 7;
  *(undefined4 *)&this->field_0x178 = 0;
  *(undefined2 *)&this->field_0x168 = 0;
  FUN_00439680();
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)&this->field_0x160);
}


/* cube::ChatWidget::deleting_destructor_for_NamedObject @ 00439590  kind=game  attributed-by=rtti  size=30 */

ChatWidget * __thiscall
cube::ChatWidget::deleting_destructor_for_NamedObject(ChatWidget *this,byte param_1)

{
  ~ChatWidget(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::ChatWidget::vfunction4_for_NamedObject @ 00439660  kind=game  attributed-by=rtti  size=18 */

undefined4 __thiscall
cube::ChatWidget::vfunction4_for_NamedObject(ChatWidget *this,undefined4 param_1)

{
  FUN_0062de60(param_1);
  return param_1;
}


/* cube::ChatWidget::vfunction2_for_NamedObject @ 00439730  kind=game  attributed-by=rtti  size=2163 */

void __thiscall cube::ChatWidget::vfunction2_for_NamedObject(ChatWidget *this)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  float10 fVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int local_e8;
  undefined1 local_e4 [8];
  float local_dc [2];
  float local_d4 [2];
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_8c;
  uint local_88;
  float local_84;
  float fStack_80;
  float local_7c;
  undefined4 uStack_78;
  void *local_74 [2];
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  uint local_60;
  float local_5c;
  float fStack_58;
  float local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  float local_1c;
  float local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2a03;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar4 = *(uint *)&this->field_0x164;
  local_e8 = 0x13;
  while (10 < uVar4) {
    piVar6 = (int *)**(int **)&this->field_0x160;
    if (piVar6 != *(int **)&this->field_0x160) {
      *(int *)piVar6[1] = *piVar6;
      *(int *)(*piVar6 + 4) = piVar6[1];
      FUN_0046f990();
                    /* WARNING: Subroutine does not return */
      operator_delete((void *)piVar6[2]);
    }
    uVar4 = *(uint *)&this->field_0x164;
  }
  (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x40))(this->offset_0x13c,local_14);
  piVar6 = (int *)**(int **)&this->field_0x160;
  if (piVar6 != *(int **)&this->field_0x160) {
    do {
      local_18 = 3.0;
      piVar5 = *(int **)piVar6[2];
      if (piVar5 != (int *)piVar6[2]) {
        do {
          iVar3 = FUN_00428db0(0,piVar5[6],&DAT_006fd844,1);
          if (iVar3 == 0) {
            local_18 = local_18 + 5.0;
          }
          else {
            local_84 = (float)*(byte *)(piVar5 + 8) / 255.0;
            fStack_80 = (float)*(byte *)((int)piVar5 + 0x21) / 255.0;
            local_7c = (float)*(byte *)((int)piVar5 + 0x22) / 255.0;
            uStack_78 = 0x3f800000;
            FUN_0065e720(piVar5 + 2,this->offset_0x13c + 0x48,0x41200000,0x40000000,0,0,0,local_dc,
                         local_d4,0,1,0xffffffff,0);
            _local_5c = CONCAT44(fStack_80 * 0.0,local_84 * 0.0);
            _local_54 = CONCAT44(uStack_78,local_7c * 0.0);
            local_6c = 0;
            local_68 = 0;
            local_64 = 0;
            local_60 = 0;
            local_3c = 0;
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            FUN_0065bc70(piVar5 + 2,local_18,(float)local_e8,0x41200000,0x40000000,0,0,0,&local_3c,
                         &local_5c,&local_6c,0,1);
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_40 = 0;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            local_20 = 0;
            FUN_0065bc70(piVar5 + 2,local_18,(float)local_e8,0x41200000,0x40000000,0,0,0,&local_84,
                         &local_2c,&local_4c,0,1);
            local_18 = (local_d4[0] - local_dc[0]) + local_18;
          }
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)piVar6[2]);
      }
      piVar6 = (int *)*piVar6;
      local_e8 = local_e8 + 0x12;
    } while (piVar6 != (int *)*(int *)&this->field_0x160);
  }
  uVar18 = 1;
  uVar17 = 0;
  puVar16 = &local_2c;
  puVar15 = &local_4c;
  puVar14 = &local_3c;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0x40000000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0x3f800000;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  puVar1 = &this->field_0x168;
  uVar9 = 0x41200000;
  fVar8 = (float10)FUN_00627ce0(0x41200000,0x40000000,0,0,0,puVar14,puVar15,puVar16,0,1);
  FUN_0065bc70(puVar1,0x40400000,(float)fVar8 - 12.0,uVar9,uVar10,uVar11,uVar12,uVar13,puVar14,
               puVar15,puVar16,uVar17,uVar18);
  uVar18 = 1;
  uVar17 = 0;
  puVar16 = &local_2c;
  puVar15 = &local_4c;
  puVar14 = &local_3c;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0x40000000;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0x3f800000;
  local_38 = 0x3f800000;
  local_34 = 0x3f800000;
  local_30 = 0x3f800000;
  uVar9 = 0x41200000;
  fVar8 = (float10)FUN_00627ce0(0x41200000,0x40000000,0,0,0,puVar14,puVar15,puVar16,0,1);
  FUN_0065bc70(puVar1,0x40400000,(float)fVar8 - 12.0,uVar9,uVar10,uVar11,uVar12,uVar13,puVar14,
               puVar15,puVar16,uVar17,uVar18);
  if (this->field_0x180 != '\0') {
    uVar4 = *(int *)((this->Object_data).offset_0x0 + 0xe8) / 500 & 0x80000001;
    bVar7 = uVar4 == 0;
    if ((int)uVar4 < 0) {
      bVar7 = (uVar4 - 1 | 0xfffffffe) == 0xffffffff;
    }
    if (!bVar7) {
      if (this->field242_0x188 < 0) {
        this->field242_0x188 = 0;
      }
      iVar3 = *(int *)&this->field_0x178;
      if (iVar3 < this->field242_0x188) {
        this->field242_0x188 = iVar3;
      }
      iVar2 = this->field242_0x188;
      if (this->field243_0x18c + iVar2 < 0) {
        this->field243_0x18c = -iVar2;
      }
      if (iVar3 < this->field243_0x18c + iVar2) {
        this->field242_0x188 = iVar3 - this->field243_0x18c;
      }
      FUN_0065e8d0(puVar1,this->field242_0x188,this->offset_0x13c + 0x48,0x41200000,0x40000000,0,0,0
                   ,&local_1c,local_e4,0,1);
      local_60 = 7;
      local_64 = 0;
      local_74[0] = (void *)((uint)local_74[0] & 0xffff0000);
      FUN_0040f7a0(&DAT_006fd848,1);
      uVar18 = 1;
      uVar17 = 0;
      puVar16 = &local_2c;
      puVar15 = &local_4c;
      puVar14 = &local_3c;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0x40000000;
      local_8 = 0;
      local_2c = 0;
      local_28 = 0;
      local_24 = 0;
      local_20 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0x3f800000;
      local_3c = 0;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      uVar9 = 0x41200000;
      fVar8 = (float10)FUN_00627ce0(0x41200000,0x40000000,0,0,0,puVar14,puVar15,puVar16,0,1);
      FUN_0065bc70(local_74,local_1c + 3.0,(float)fVar8 - 12.0,uVar9,uVar10,uVar11,uVar12,uVar13,
                   puVar14,puVar15,puVar16,uVar17,uVar18);
      local_8 = 0xffffffff;
      if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_74[0]);
      }
      local_88 = 7;
      local_8c = 0;
      local_9c = (void *)((uint)local_9c._2_2_ << 0x10);
      FUN_0040f7a0(&DAT_006fd848,1);
      uVar18 = 1;
      uVar17 = 0;
      puVar16 = &local_cc;
      puVar15 = &local_bc;
      puVar14 = &local_ac;
      uVar13 = 0;
      uVar12 = 0;
      uVar11 = 0;
      uVar10 = 0x40000000;
      local_8 = 1;
      local_cc = 0;
      local_c8 = 0;
      local_c4 = 0;
      local_c0 = 0;
      local_bc = 0;
      local_b8 = 0;
      local_b4 = 0;
      local_b0 = 0;
      local_ac = 0x3f800000;
      local_a8 = 0x3f800000;
      local_a4 = 0x3f800000;
      local_a0 = 0x3f800000;
      uVar9 = 0x41200000;
      fVar8 = (float10)FUN_00627ce0(0x41200000,0x40000000,0,0,0,puVar14,puVar15,puVar16,0,1);
      FUN_0065bc70(&local_9c,local_1c + 3.0,(float)fVar8 - 12.0,uVar9,uVar10,uVar11,uVar12,uVar13,
                   puVar14,puVar15,puVar16,uVar17,uVar18);
      local_8 = 0xffffffff;
      if (7 < local_88) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_9c);
      }
      local_88 = 7;
      local_8c = 0;
      local_9c = (void *)((uint)local_9c & 0xffff0000);
    }
  }
  (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x44))(this->offset_0x13c);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


