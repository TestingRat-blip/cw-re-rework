// PreviewWidget (ui) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "PreviewWidget.h"

/* cube::PreviewWidget::~PreviewWidget @ 004d5010  kind=game  attributed-by=rtti  size=67 */

void __thiscall cube::PreviewWidget::~PreviewWidget(PreviewWidget *this)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = this->field210_0x174;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  this->field210_0x174[1] = (int)this->field210_0x174;
  this->field211_0x178 = 0;
  if (piVar2 != this->field210_0x174) {
                    /* WARNING: Subroutine does not return */
    operator_delete(piVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(this->field210_0x174);
}


/* cube::PreviewWidget::deleting_destructor_for_NamedObject @ 004d5070  kind=game  attributed-by=rtti  size=30 */

PreviewWidget * __thiscall
cube::PreviewWidget::deleting_destructor_for_NamedObject(PreviewWidget *this,byte param_1)

{
  ~PreviewWidget(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::PreviewWidget::deleting_destructor_for_NamedObject @ 004d50a0  kind=game  attributed-by=rtti  size=5665 */

void __thiscall cube::PreviewWidget::deleting_destructor_for_NamedObject(PreviewWidget *this)

{
  float fVar1;
  char cVar2;
  int iVar3;
  undefined8 *puVar4;
  int iVar5;
  int iVar6;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar7;
  undefined4 ****ppppuVar8;
  undefined8 *puVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  float fVar13;
  float fVar14;
  undefined *puVar15;
  undefined4 uVar16;
  undefined1 auStack_3cc [24];
  undefined1 auStack_3b4 [24];
  undefined1 auStack_39c [24];
  undefined1 auStack_384 [24];
  undefined1 auStack_36c [24];
  undefined1 auStack_354 [24];
  undefined1 auStack_33c [24];
  undefined1 auStack_324 [24];
  undefined1 auStack_30c [24];
  undefined1 auStack_2f4 [24];
  undefined1 auStack_2dc [24];
  undefined1 auStack_2c4 [24];
  undefined1 auStack_2ac [24];
  undefined1 auStack_294 [24];
  undefined1 auStack_27c [24];
  undefined1 auStack_264 [24];
  void *local_24c [5];
  uint local_238;
  void *local_234 [4];
  undefined4 local_224;
  uint local_220;
  void *local_21c [2];
  undefined4 local_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  uint local_208;
  void *local_204 [2];
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  uint uStack_1f0;
  undefined4 ***local_1ec [2];
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined8 local_1d4 [32];
  undefined8 local_d4;
  int local_c8;
  undefined1 local_c4 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_b4 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_ac [14];
  undefined4 local_74;
  undefined4 local_70;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_5c [6];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8dd1;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec[0] = (undefined4 ***)((uint)local_1ec[0] & 0xffff0000);
  FUN_0040f7a0(L"star1",5);
  local_8 = 0;
  iVar3 = FUN_00633d70(local_1ec);
  local_8 = 0xffffffff;
  *(undefined4 *)
   (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec[0]);
  }
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec[0] = (undefined4 ***)((uint)local_1ec[0] & 0xffff0000);
  FUN_0040f7a0(L"star2",5);
  local_8 = 1;
  iVar3 = FUN_00633d70(local_1ec);
  local_8 = 0xffffffff;
  *(undefined4 *)
   (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec[0]);
  }
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec[0] = (undefined4 ***)((uint)local_1ec[0] & 0xffff0000);
  FUN_0040f7a0(L"star3",5);
  local_8 = 2;
  iVar3 = FUN_00633d70(local_1ec);
  local_8 = 0xffffffff;
  *(undefined4 *)
   (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec[0]);
  }
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec[0] = (undefined4 ***)((uint)local_1ec[0] & 0xffff0000);
  FUN_0040f7a0(L"star4",5);
  local_8 = 3;
  iVar3 = FUN_00633d70(local_1ec);
  local_8 = 0xffffffff;
  *(undefined4 *)
   (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec[0]);
  }
  if (this->PreviewWidget_data == (char *)0x0) {
    if (-1 < this->field209_0x170) {
      iVar3 = *(int *)(this->offset_0x13c + 0x38);
      iVar5 = *(int *)(iVar3 + 0x170);
      iVar3 = *(int *)(iVar3 + 0x19c);
      fVar14 = *(float *)(iVar3 + iVar5 * 8);
      fVar1 = *(float *)(iVar3 + 4 + iVar5 * 8);
      (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x40))(this->offset_0x13c);
      FUN_004a62c0(*(undefined1 *)
                    (*(int *)&this->field212_0x17c[0x12f78].
                              basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                              .field_0x1c + 0x140),this->field209_0x170,(int)(fVar14 + 14.0),
                   (int)(fVar1 + 25.0),0x3f800000,0x113);
      (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x44))(this->offset_0x13c);
    }
    if (-1 < this->field207_0x168) {
      iVar3 = *(int *)(this->offset_0x13c + 0x38);
      iVar5 = *(int *)(iVar3 + 0x170);
      iVar3 = *(int *)(iVar3 + 0x19c);
      fVar14 = *(float *)(iVar3 + iVar5 * 8);
      fVar1 = *(float *)(iVar3 + 4 + iVar5 * 8);
      (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x40))(this->offset_0x13c);
      FUN_004a5710(this->field207_0x168,this->field208_0x16c,(int)(fVar14 + 14.0),
                   (int)(fVar1 + 25.0),0x3f800000,0x113);
      (**(code **)(*(int *)(this->Object_data).offset_0x0 + 0x44))(this->offset_0x13c);
    }
  }
  else {
    switch(this->PreviewWidget_data[0xc]) {
    case '\x01':
      FUN_0040eb60(L"star1");
      local_8 = 4;
      iVar3 = FUN_00633d70(auStack_2ac);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 1;
      FUN_00593e50();
      FUN_0040eb60(L"star2");
      local_8 = 5;
      iVar3 = FUN_00633d70(auStack_2c4);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star3");
      local_8 = 6;
      iVar3 = FUN_00633d70(auStack_2f4);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star4");
      local_8 = 7;
      iVar3 = FUN_00633d70(auStack_264);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      break;
    case '\x02':
      FUN_0040eb60(L"star1");
      local_8 = 8;
      iVar3 = FUN_00633d70(auStack_3b4);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star2");
      local_8 = 9;
      iVar3 = FUN_00633d70(auStack_324);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 1;
      FUN_00593e50();
      FUN_0040eb60(L"star3");
      local_8 = 10;
      iVar3 = FUN_00633d70(auStack_384);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star4");
      local_8 = 0xb;
      iVar3 = FUN_00633d70(auStack_27c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      break;
    case '\x03':
      FUN_0040eb60(L"star1");
      local_8 = 0xc;
      iVar3 = FUN_00633d70(auStack_294);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star2");
      local_8 = 0xd;
      iVar3 = FUN_00633d70(auStack_2dc);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star3");
      local_8 = 0xe;
      iVar3 = FUN_00633d70(auStack_30c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 1;
      FUN_00593e50();
      FUN_0040eb60(L"star4");
      local_8 = 0xf;
      iVar3 = FUN_00633d70(auStack_33c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      break;
    case '\x04':
      FUN_0040eb60(L"star1");
      local_8 = 0x10;
      iVar3 = FUN_00633d70(auStack_36c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star2");
      local_8 = 0x11;
      iVar3 = FUN_00633d70(auStack_39c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star3");
      local_8 = 0x12;
      iVar3 = FUN_00633d70(auStack_3cc);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      FUN_00593e50();
      FUN_0040eb60(L"star4");
      local_8 = 0x13;
      iVar3 = FUN_00633d70(auStack_354);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 1;
      FUN_00593e50();
      break;
    default:
      FUN_0040eb60(L"star1");
      local_8 = 0x14;
      iVar3 = FUN_00633d70(local_1ec);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec[0]);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec[0] = (undefined4 ***)((uint)local_1ec[0] & 0xffff0000);
      FUN_0040eb60(L"star2");
      local_8 = 0x15;
      iVar3 = FUN_00633d70(local_204);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      if (7 < uStack_1f0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_204[0]);
      }
      uStack_1f0 = 7;
      local_1f4 = 0;
      local_204[0] = (void *)((uint)local_204[0] & 0xffff0000);
      FUN_0040eb60(L"star3");
      local_8 = 0x16;
      iVar3 = FUN_00633d70(local_21c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      if (7 < local_208) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_21c[0]);
      }
      local_208 = 7;
      uStack_20c = 0;
      local_21c[0] = (void *)((uint)local_21c[0] & 0xffff0000);
      FUN_0040eb60(L"star4");
      local_8 = 0x17;
      iVar3 = FUN_00633d70(local_24c);
      local_8 = 0xffffffff;
      *(undefined4 *)
       (*(int *)(*(int *)(iVar3 + 0x3c) + 0x94) + *(int *)(*(int *)(iVar3 + 0x3c) + 0x68) * 4) = 0;
      if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_24c[0]);
      }
    }
    iVar3 = FUN_004ec400(this->PreviewWidget_data);
    if (iVar3 != 0) {
      piVar12 = *(int **)&this->field212_0x17c[2].
                          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                          .field_0x48;
      (**(code **)(*piVar12 + 0xe4))(piVar12,7,1);
      piVar12 = *(int **)&this->field212_0x17c[2].
                          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                          .field_0x48;
      (**(code **)(*piVar12 + 0xe4))(piVar12,0x17,2);
      local_1fc = 0;
      uStack_1f8 = 0;
      local_1f4 = 0;
      uStack_1f0 = 0;
      local_210 = 0;
      uStack_20c = 0;
      local_208 = 0;
      puVar4 = &local_d4;
      puVar9 = local_1d4;
      iVar3 = 0x10;
      do {
        *puVar9 = 0;
        *puVar4 = 0;
        puVar9[1] = 0;
        *(undefined4 *)(puVar4 + 1) = 0;
        puVar9 = puVar9 + 2;
        puVar4 = (undefined8 *)((int)puVar4 + 0xc);
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      FUN_00447d10();
      FUN_00448f10(local_1d4,&local_d4);
      local_1fc = 0x3f800000;
      uStack_1f8 = 0x3f800000;
      local_1f4 = 0x3f800000;
      uStack_1f0 = 0x3f800000;
      FUN_00448280(&local_1fc);
      iVar3 = this->offset_0x13c;
      iVar5 = *(int *)(*(int *)(iVar3 + 0x38) + 0x170);
      iVar6 = *(int *)(*(int *)(iVar3 + 0x38) + 0x19c);
      fVar14 = *(float *)(iVar6 + 4 + iVar5 * 8);
      fVar1 = *(float *)(iVar6 + iVar5 * 8);
      fVar13 = 1.0 / (*(float *)(iVar3 + 0x54) * fVar1 + *(float *)(iVar3 + 100) * fVar14 +
                     *(float *)(iVar3 + 0x84));
      FUN_004758c0((*(float *)(iVar3 + 0x58) * fVar14 + *(float *)(iVar3 + 0x48) * fVar1 +
                   *(float *)(iVar3 + 0x78)) * fVar13 + 150.0,
                   (*(float *)(iVar3 + 0x4c) * fVar1 + *(float *)(iVar3 + 0x5c) * fVar14 +
                   *(float *)(iVar3 + 0x7c)) * fVar13 + 150.0,
                   &this->field212_0x17c[0x12f80].
                    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                    .field_0x8,0x3dcccccd,this->PreviewWidget_data,0xbd4ccccd);
    }
    piVar12 = *(int **)&this->field212_0x17c[2].
                        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                        .field_0x48;
    (**(code **)(*piVar12 + 0xe4))(piVar12,7,0);
    uVar16 = 0;
    iVar3 = *(int *)(this->offset_0x13c + 0x38);
    iVar5 = *(int *)(iVar3 + 0x170);
    iVar3 = *(int *)(iVar3 + 0x19c);
    fVar14 = *(float *)(iVar3 + 4 + iVar5 * 8);
    fVar1 = *(float *)(iVar3 + iVar5 * 8);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (this->field212_0x17c,this->PreviewWidget_data,(int)(fVar1 + 14.0),
               (int)(fVar14 + 25.0),1.0,0x118,'\x01','\x01');
    cVar2 = FUN_0047f940(uVar16);
    if (cVar2 != '\0') {
      iVar3 = FUN_004c76e0();
      iVar5 = (iVar3 / 100) / 100;
      iVar10 = (iVar3 / 100) % 100;
      local_c4._0_4_ =
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vbtable;
      local_b4[0].vbtablePtr =
           (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
      std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
      basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_5c);
      local_8 = 0x18;
      std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
      basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_c4,
                 (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_ac);
      local_8 = 0x19;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
      *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
       (local_c4 + *(int *)(local_c4._0_4_ + 4)) =
           &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            vftable;
      *(int *)((int)&local_c8 + *(int *)(local_c4._0_4_ + 4)) = *(int *)(local_c4._0_4_ + 4) + -0x68
      ;
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
      basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_ac);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
      local_ac[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                    &std::
                     basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                     vftable;
      local_74 = 0;
      local_70 = 0;
      local_8._0_1_ = 0x1b;
      local_8._1_3_ = 0;
      iVar11 = (int)(fVar1 + 290.0);
      iVar6 = (int)(fVar14 + 280.0);
      if (iVar3 % 100 != 0) {
        FUN_0040eb60(&PTR_006fccac);
        local_8._0_1_ = 0x1c;
        FUN_0040b4e0();
        ppppuVar8 = local_1ec;
        if (7 < local_1d8) {
          ppppuVar8 = (undefined4 ****)local_1ec[0];
        }
        FUN_0040f3c0(ppppuVar8,local_1dc,local_70);
        local_8._0_1_ = 0x1b;
        if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_1ec[0]);
        }
        puVar15 = &DAT_006ffd80;
        pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                           (local_b4,iVar3 % 100);
        FUN_0040e440(pbVar7,puVar15);
        FUN_0040eb60(L"resource1.dat");
        local_8._0_1_ = 0x1d;
        uVar16 = FUN_00411bc0(local_234);
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0;
        uStack_1f0 = 0;
        local_214 = 0;
        local_210 = 0;
        uStack_20c = 0;
        local_208 = 0x3f800000;
        local_1e4 = 0x3f800000;
        local_1e0 = 0x3f800000;
        local_1dc = 0x3f800000;
        local_1d8 = 0x3f800000;
        local_8._0_1_ = 0x1e;
        FUN_00639b30(local_24c,uVar16,0,0,(float)iVar11,(float)iVar6,0x41200000,0x40000000,
                     &local_1e4,&local_214,&local_1fc,2,0xbf800000,1);
        if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_234[0]);
        }
        local_220 = 7;
        local_224 = 0;
        local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
        local_8._0_1_ = 0x1b;
        if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_24c[0]);
        }
        FUN_0040eb60(L"resource1.dat");
        local_8._0_1_ = 0x1f;
        uVar16 = FUN_00411bc0(local_234);
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0;
        uStack_1f0 = 0;
        local_214 = 0x3f4ccccd;
        local_210 = 0x3f000000;
        uStack_20c = 0;
        local_208 = 0x3f800000;
        local_8._0_1_ = 0x20;
        FUN_00639b30(local_24c,uVar16,0,0,(float)iVar11,(float)iVar6,0x41200000,0,&local_214,
                     &local_1fc,&local_1e4,2,0xbf800000,1);
        if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_234[0]);
        }
        local_220 = 7;
        local_224 = 0;
        local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
        local_8._0_1_ = 0x1b;
        if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_24c[0]);
        }
        iVar11 = iVar11 + -0x28;
      }
      local_8._0_1_ = 0x1b;
      if (iVar10 != 0) {
        FUN_0040eb60(&PTR_006fccac);
        local_8._0_1_ = 0x21;
        FUN_0040b4e0();
        ppppuVar8 = local_1ec;
        if (7 < local_1d8) {
          ppppuVar8 = (undefined4 ****)local_1ec[0];
        }
        FUN_0040f3c0(ppppuVar8,local_1dc,local_70);
        local_8._0_1_ = 0x1b;
        if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_1ec[0]);
        }
        puVar15 = &DAT_006ffd84;
        pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_b4,iVar10)
        ;
        FUN_0040e440(pbVar7,puVar15);
        FUN_0040eb60(L"resource1.dat");
        local_8._0_1_ = 0x22;
        uVar16 = FUN_00411bc0(local_234);
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0;
        uStack_1f0 = 0x3f800000;
        local_214 = 0x3f800000;
        local_210 = 0x3f800000;
        uStack_20c = 0x3f800000;
        local_208 = 0x3f800000;
        local_8._0_1_ = 0x23;
        FUN_00639b30(local_24c,uVar16,0,0,(float)iVar11,(float)iVar6,0x41200000,0x40000000,
                     &local_214,&local_1fc,&local_1e4,2,0xbf800000,1);
        if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_234[0]);
        }
        local_220 = 7;
        local_224 = 0;
        local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
        local_8._0_1_ = 0x1b;
        if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_24c[0]);
        }
        FUN_0040eb60(L"resource1.dat");
        local_8._0_1_ = 0x24;
        uVar16 = FUN_00411bc0(local_234);
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0;
        uStack_1f0 = 0;
        local_214 = 0x3f333333;
        local_210 = 0x3f333333;
        uStack_20c = 0x3f333333;
        local_208 = 0x3f800000;
        local_8._0_1_ = 0x25;
        FUN_00639b30(local_24c,uVar16,0,0,(float)iVar11,(float)iVar6,0x41200000,0,&local_214,
                     &local_1fc,&local_1e4,2,0xbf800000,1);
        if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_234[0]);
        }
        local_220 = 7;
        local_224 = 0;
        local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
        local_8._0_1_ = 0x1b;
        if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_24c[0]);
        }
        iVar11 = iVar11 + -0x28;
      }
      local_8._0_1_ = 0x1b;
      if (iVar5 != 0) {
        FUN_0040eb60(&PTR_006fccac);
        local_8._0_1_ = 0x26;
        FUN_0040b4e0();
        ppppuVar8 = local_1ec;
        if (7 < local_1d8) {
          ppppuVar8 = (undefined4 ****)local_1ec[0];
        }
        FUN_0040f3c0(ppppuVar8,local_1dc,local_70);
        local_8._0_1_ = 0x1b;
        if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_1ec[0]);
        }
        puVar15 = &DAT_006ffd88;
        pbVar7 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_b4,iVar5);
        FUN_0040e440(pbVar7,puVar15);
        FUN_0040eb60(L"resource1.dat");
        local_8._0_1_ = 0x27;
        uVar16 = FUN_00411bc0(local_234);
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0;
        uStack_1f0 = 0x3f800000;
        local_214 = 0x3f800000;
        local_210 = 0x3f800000;
        uStack_20c = 0x3f800000;
        local_208 = 0x3f800000;
        local_8._0_1_ = 0x28;
        FUN_00639b30(local_24c,uVar16,0,0,(float)iVar11,(float)iVar6,0x41200000,0x40000000,
                     &local_214,&local_1fc,&local_1e4,2,0xbf800000,1);
        if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_234[0]);
        }
        local_220 = 7;
        local_224 = 0;
        local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
        local_8._0_1_ = 0x1b;
        if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_24c[0]);
        }
        FUN_0040eb60(L"resource1.dat");
        local_8._0_1_ = 0x29;
        uVar16 = FUN_00411bc0(local_234);
        local_1e4 = 0;
        local_1e0 = 0;
        local_1dc = 0;
        local_1d8 = 0;
        local_1fc = 0;
        uStack_1f8 = 0;
        local_1f4 = 0;
        uStack_1f0 = 0;
        local_214 = 0x3f800000;
        local_210 = 0x3f666666;
        uStack_20c = 0;
        local_208 = 0x3f800000;
        local_8 = CONCAT31(local_8._1_3_,0x2a);
        FUN_00639b30(local_24c,uVar16,0,0,(float)iVar11,(float)iVar6,0x41200000,0,&local_214,
                     &local_1fc,&local_1e4,2,0xbf800000,1);
        if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_234[0]);
        }
        local_220 = 7;
        local_224 = 0;
        local_234[0] = (void *)((uint)local_234[0] & 0xffff0000);
        if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_24c[0]);
        }
      }
      local_8 = 0xffffffff;
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 local_c4);
    }
    if (this->field211_0x178 != 0) {
      FUN_0040eb60(L"Currently equipped");
      local_8 = 0x2b;
      FUN_0040eb60(L"resource1.dat");
      local_1e4 = 0;
      local_1e0 = 0;
      local_1dc = 0;
      local_1d8 = 0;
      local_1fc = 0;
      uStack_1f8 = 0;
      local_1f4 = 0;
      uStack_1f0 = 0x3f800000;
      local_214 = 0x3f800000;
      local_210 = 0x3f800000;
      uStack_20c = 0x3f800000;
      local_208 = 0x3f800000;
      local_8._0_1_ = 0x2c;
      FUN_00639b30(local_24c,local_234,0,0,fVar1 - 190.0,fVar14 + 20.0,0x41000000,0x40400000,
                   &local_214,&local_1fc,&local_1e4,0,0xbf800000,1);
      local_8._0_1_ = 0x2b;
      if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_24c[0]);
      }
      FUN_0040eb60(L"resource1.dat");
      local_1e4 = 0;
      local_1e0 = 0;
      local_1dc = 0;
      local_1d8 = 0;
      local_1fc = 0;
      uStack_1f8 = 0;
      local_1f4 = 0;
      uStack_1f0 = 0;
      local_214 = 0x3f800000;
      local_210 = 0x3f800000;
      uStack_20c = 0x3f800000;
      local_208 = 0x3f800000;
      local_8._0_1_ = 0x2d;
      FUN_00639b30(local_24c,local_234,0,0,fVar1 - 190.0,fVar14 + 20.0,0x41000000,0,&local_214,
                   &local_1fc,&local_1e4,0,0xbf800000,1);
      local_8 = CONCAT31(local_8._1_3_,0x2b);
      if (7 < local_238) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_24c[0]);
      }
      fVar14 = fVar14 + 10.0;
      piVar12 = (int *)*this->field210_0x174;
      if (piVar12 != this->field210_0x174) {
        do {
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    (this->field212_0x17c,(char *)piVar12[2],(int)(fVar1 - 240.0),
                     (int)(fVar14 + 30.0),1.0,0xe6,'\x01','\x01');
          fVar14 = fVar14 + 130.0;
          piVar12 = (int *)*piVar12;
        } while (piVar12 != this->field210_0x174);
      }
      if (7 < local_220) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_234[0]);
      }
    }
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


