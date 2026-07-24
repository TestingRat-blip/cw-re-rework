// SpeechWidget (entity) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "SpeechWidget.h"

/* cube::SpeechWidget::~SpeechWidget @ 004e5ec0  kind=game  attributed-by=rtti  size=121 */

void __thiscall cube::SpeechWidget::~SpeechWidget(SpeechWidget *this)

{
  int iVar1;
  undefined1 local_5;
  
  if (7 < (uint)(this->SpeechWidget_data).offset_0x5c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)&(this->SpeechWidget_data).offset_0x48);
  }
  (this->SpeechWidget_data).offset_0x5c = 7;
  (this->SpeechWidget_data).offset_0x58 = 0;
  (this->SpeechWidget_data).offset_0x48 = 0;
  iVar1 = (this->SpeechWidget_data).offset_0x18;
  if (iVar1 != 0) {
    FUN_00452650(iVar1,(this->SpeechWidget_data).offset_0x1c,&local_5);
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)(this->SpeechWidget_data).offset_0x18);
  }
  FUN_0046ea70();
  plasma::Widget::~Widget((Widget *)this);
  return;
}


/* cube::SpeechWidget::deleting_destructor_for_NamedObject @ 004e5f60  kind=game  attributed-by=rtti  size=30 */

SpeechWidget * __thiscall
cube::SpeechWidget::deleting_destructor_for_NamedObject(SpeechWidget *this,byte param_1)

{
  ~SpeechWidget(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::SpeechWidget::vfunction2_for_NamedObject @ 004e5f90  kind=game  attributed-by=rtti  size=1424 */

void __thiscall cube::SpeechWidget::vfunction2_for_NamedObject(SpeechWidget *this)

{
  float fVar1;
  char cVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  float10 fVar8;
  float fVar9;
  float fVar10;
  int local_f8;
  undefined1 local_ed;
  undefined1 local_ec [64];
  float local_ac [2];
  float local_a4 [2];
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9e78;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  iVar5 = (this->SpeechWidget_data).offset_0x10;
  if ((-1 < iVar5) &&
     (iVar5 < (int)((this->SpeechWidget_data).offset_0x4 - (this->SpeechWidget_data).offset_0x0) >>
              3)) {
    *(undefined4 *)&(this->SpeechWidget_data).field_0x68 = 0;
    *(undefined4 *)&(this->SpeechWidget_data).field_0x6c = 0;
    piVar4 = (int *)(this->Object_data).offset_0x0;
    iVar5 = this->offset_0x13c;
    *(undefined4 *)&(this->SpeechWidget_data).field_0x70 = 0;
    (**(code **)(*piVar4 + 0x40))(iVar5,local_14);
    iVar5 = (this->SpeechWidget_data).offset_0x10;
    iVar3 = (this->SpeechWidget_data).offset_0x0;
    local_ed = 1;
    piVar4 = (int *)**(int **)(iVar3 + iVar5 * 8);
    if (piVar4 != *(int **)(iVar3 + iVar5 * 8)) {
      do {
        cVar2 = FUN_004e65a0(piVar4 + 2,piVar4 + 8,&local_ed);
        if (cVar2 == '\0') break;
        piVar4 = (int *)*piVar4;
      } while (piVar4 != (int *)*(int *)((this->SpeechWidget_data).offset_0x0 +
                                        (this->SpeechWidget_data).offset_0x10 * 8));
    }
    if (*(int *)&(this->SpeechWidget_data).field_0x14 / 3 !=
        *(int *)&(this->SpeechWidget_data).field_0x70 / 3) {
      iVar5 = *(int *)((this->SpeechWidget_data).offset_0x78 + 0x8006d0);
      iVar3 = rand();
      FUN_00484350(0x32,iVar5 + 0x10,0x3f800000,((float)iVar3 * 0.5) / 32767.0 + 1.0);
    }
    iVar5 = (this->SpeechWidget_data).offset_0x10;
    *(undefined4 *)&(this->SpeechWidget_data).field_0x14 =
         *(undefined4 *)&(this->SpeechWidget_data).field_0x70;
    if ((iVar5 < 0) ||
       (iVar3 = (this->SpeechWidget_data).offset_0x0,
       (this->SpeechWidget_data).offset_0x4 - iVar3 >> 3 <= iVar5)) {
      iVar7 = 0;
    }
    else {
      iVar7 = 0;
      piVar4 = (int *)**(int **)(iVar3 + iVar5 * 8);
      if (piVar4 != *(int **)(iVar3 + iVar5 * 8)) {
        do {
          iVar7 = iVar7 + 1 + piVar4[6];
          piVar4 = (int *)*piVar4;
        } while (piVar4 != (int *)*(int *)(iVar3 + iVar5 * 8));
      }
      iVar7 = (this->SpeechWidget_data).offset_0x74 * iVar7;
    }
    if ((iVar7 <= (int)(this->SpeechWidget_data).offset_0xc) &&
       ((this->SpeechWidget_data).offset_0x18 != (this->SpeechWidget_data).offset_0x1c)) {
      fVar8 = (float10)FUN_00627ce0();
      local_f8 = 0xf;
      iVar5 = FUN_00639800(&(this->SpeechWidget_data).offset_0x48);
      if (iVar5 != 0) {
        (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x38))(local_ec);
        iVar5 = *(int *)(this->offset_0x13c + 0x38);
        iVar3 = *(int *)(iVar5 + 0x170);
        iVar5 = *(int *)(iVar5 + 0x19c);
        fVar1 = *(float *)(iVar5 + iVar3 * 8);
        iVar7 = 0;
        if (0 < (int)((this->SpeechWidget_data).offset_0x1c - (this->SpeechWidget_data).offset_0x18)
                / 0x18) {
          fVar9 = (float)(int)((float)fVar8 - 75.0) + *(float *)(iVar5 + 4 + iVar3 * 8);
          iVar5 = 0;
          do {
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
            local_18 = 7;
            local_1c = 0;
            FUN_0040f680((this->SpeechWidget_data).offset_0x18 + iVar5,0,0xffffffff);
            fVar10 = (float)local_f8 + fVar1;
            local_8 = 0;
            local_3c = 0;
            local_38 = 0;
            local_34 = 0;
            local_30 = 0;
            local_4c = 0;
            local_48 = 0;
            local_44 = 0;
            local_40 = 0x3f800000;
            local_7c = 0x3f800000;
            local_78 = 0x3f800000;
            local_74 = 0x3f800000;
            local_70 = 0x3f800000;
            FUN_0065bc70(local_2c,fVar10,fVar9,(float)(int)(this->SpeechWidget_data).offset_0x60,
                         (float)(int)(this->SpeechWidget_data).offset_0x64,0,0,0,&local_7c,&local_4c
                         ,&local_3c,0,1);
            if (iVar7 == (this->SpeechWidget_data).offset_0x24) {
              local_9c = 0;
              local_98 = 0x3f800000;
              local_94 = 0x3f800000;
              local_90 = 0x3f800000;
              puVar6 = &local_9c;
            }
            else {
              local_8c = 0x3f800000;
              local_88 = 0x3f800000;
              local_84 = 0x3f800000;
              local_80 = 0x3f800000;
              puVar6 = &local_8c;
            }
            local_6c = 0;
            local_68 = 0;
            local_64 = 0;
            local_60 = 0;
            local_5c = 0;
            local_58 = 0;
            local_54 = 0;
            local_50 = 0x3f800000;
            FUN_0065bc70(local_2c,fVar10,fVar9,(float)(int)(this->SpeechWidget_data).offset_0x60,0,0
                         ,0,0,puVar6,&local_5c,&local_6c,0,1);
            FUN_0065e720(local_2c,local_ec,(float)(int)(this->SpeechWidget_data).offset_0x60,0,0,0,0
                         ,local_a4,local_ac,0,1,0xffffffff,0);
            local_8 = 0xffffffff;
            local_f8 = local_f8 + 0x14 + (int)(local_ac[0] - local_a4[0]);
            if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_2c[0]);
            }
            local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
            iVar7 = iVar7 + 1;
            iVar5 = iVar5 + 0x18;
            local_18 = 7;
            local_1c = 0;
          } while (iVar7 < (int)((this->SpeechWidget_data).offset_0x1c -
                                (this->SpeechWidget_data).offset_0x18) / 0x18);
        }
      }
    }
    (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x44))(this->offset_0x13c);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


