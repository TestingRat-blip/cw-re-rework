// InventoryWidget (ui) -- cube. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "InventoryWidget.h"

/* cube::InventoryWidget::~InventoryWidget @ 004c1f80  kind=game  attributed-by=rtti  size=82 */

void __thiscall cube::InventoryWidget::~InventoryWidget(InventoryWidget *this)

{
  undefined4 *puVar1;
  void *pvVar2;
  
  if ((void *)this->field225_0x198 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)this->field225_0x198);
  }
  puVar1 = *(undefined4 **)&this->field_0x17c;
  pvVar2 = (void *)*puVar1;
  *puVar1 = puVar1;
  *(int *)(*(int *)&this->field_0x17c + 4) = *(int *)&this->field_0x17c;
  *(undefined4 *)&this->field_0x180 = 0;
  if (pvVar2 != *(void **)&this->field_0x17c) {
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)&this->field_0x17c);
}


/* cube::InventoryWidget::deleting_destructor_for_NamedObject @ 004c2010  kind=game  attributed-by=rtti  size=30 */

InventoryWidget * __thiscall
cube::InventoryWidget::deleting_destructor_for_NamedObject(InventoryWidget *this,byte param_1)

{
  ~InventoryWidget(this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return this;
}


/* cube::InventoryWidget::deleting_destructor_for_NamedObject @ 004c2050  kind=game  attributed-by=rtti  size=14295 */

void __thiscall cube::InventoryWidget::deleting_destructor_for_NamedObject(InventoryWidget *this)

{
  char cVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined4 uVar4;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar5;
  undefined4 *puVar6;
  undefined4 extraout_EAX;
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> *pbVar7;
  undefined4 uVar8;
  undefined4 extraout_EAX_00;
  undefined4 *****pppppuVar9;
  pair<unsigned___int64,unsigned___int64> *ppVar10;
  undefined8 *puVar11;
  int iVar12;
  int iVar13;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *pbVar14;
  float10 fVar15;
  int *piVar16;
  float fVar17;
  float fVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  wchar_t *pwVar27;
  undefined4 uVar28;
  _func_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr_basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_>_ptr
  *p_Var29;
  undefined *puVar30;
  char *pcVar31;
  undefined4 uVar32;
  undefined4 uVar33;
  int iStack_7bc;
  undefined1 local_7b8 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_7a8 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_7a0 [14];
  undefined4 local_768;
  undefined4 local_764;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_750 [5];
  int iStack_70c;
  undefined1 local_708 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_6f8 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_6f0 [14];
  undefined4 local_6b8;
  undefined4 local_6b4;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_6a0 [5];
  int iStack_65c;
  undefined1 local_658 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_648 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_640 [20];
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_5f0 [5];
  int iStack_5ac;
  undefined1 local_5a8 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_598 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_590 [3];
  undefined4 *local_584;
  undefined4 local_558;
  uint local_554;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_540 [6];
  int local_4f8;
  InventoryWidget *local_4f4;
  float local_4f0;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_4ec;
  pair<unsigned___int64,unsigned___int64> *local_4e8;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_4e4;
  int local_4e0;
  int *local_4dc;
  char *local_4d8;
  undefined1 local_4a4 [64];
  undefined1 local_464 [32];
  pair<unsigned___int64,unsigned___int64> local_444 [48];
  undefined4 local_414;
  undefined4 local_410;
  undefined4 local_40c;
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  undefined4 local_3f4;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e8;
  undefined4 local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  undefined4 local_3d8;
  undefined4 local_3d4;
  undefined4 local_3d0;
  undefined4 local_3cc;
  undefined4 local_3c8;
  undefined4 local_3c4;
  undefined4 local_3c0;
  undefined4 local_3bc;
  undefined4 local_3b8;
  undefined4 local_3b4;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined4 local_3a0;
  undefined4 local_39c;
  undefined4 local_398;
  undefined4 local_394;
  undefined4 local_390;
  undefined4 local_38c;
  undefined4 local_388;
  undefined4 local_384;
  undefined4 local_380;
  undefined4 local_37c;
  undefined4 local_378;
  undefined4 local_374;
  undefined4 local_370;
  undefined4 local_36c;
  undefined4 local_368;
  undefined4 local_364;
  undefined4 local_360;
  undefined4 local_35c;
  undefined4 local_358;
  undefined4 local_354;
  undefined4 local_350;
  undefined4 local_34c;
  undefined4 local_348;
  undefined4 local_344;
  undefined4 local_340;
  undefined4 local_33c;
  undefined4 local_338;
  undefined4 local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  undefined4 local_318;
  undefined4 local_314;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_300;
  undefined4 local_2fc;
  undefined4 local_2f8;
  undefined4 local_2f4;
  undefined4 local_2f0;
  undefined4 local_2ec;
  undefined4 local_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  undefined4 local_2c8;
  undefined4 local_2c4;
  undefined4 local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  undefined4 local_2ac;
  undefined4 local_2a8;
  undefined4 local_2a4;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  float local_284;
  float local_280;
  undefined1 local_27c [24];
  void *local_264 [4];
  undefined4 local_254;
  uint local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  undefined4 local_240;
  int *local_23c [4];
  undefined4 local_22c;
  uint local_228;
  undefined4 local_224;
  undefined4 local_220;
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 ****local_214 [2];
  undefined4 local_20c;
  undefined4 local_208;
  int iStack_204;
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *local_200;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 local_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 local_1dc;
  uint local_1d8;
  undefined8 local_1d4 [32];
  undefined8 local_d4 [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e8391;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
  local_4f4 = this;
  if (this->InventoryWidget_data == (int *)0x0) goto LAB_004c595f;
  FUN_004c6350(local_14);
  this->field217_0x184 = 0xffffffff;
  this->field218_0x188 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0xffffffff;
  FUN_0062dc20(&local_284);
  if (this->field238_0x1b4 < (this->InventoryWidget_data[1] - *this->InventoryWidget_data) / 0xc) {
    piVar16 = *(int **)(this->field203_0x164 + 0x134);
    (**(code **)(*piVar16 + 0xe4))(piVar16,7,1);
    local_1fc = 0;
    uStack_1f8 = 0;
    local_1f4 = 0;
    uStack_1f0 = 0;
    local_208 = 0;
    iStack_204 = 0;
    local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
    puVar2 = local_d4;
    puVar11 = local_1d4;
    iVar12 = 0x10;
    do {
      *puVar11 = 0;
      *puVar2 = 0;
      puVar11[1] = 0;
      *(undefined4 *)(puVar2 + 1) = 0;
      puVar11 = puVar11 + 2;
      puVar2 = (undefined8 *)((int)puVar2 + 0xc);
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    FUN_00447d10();
    FUN_00448f10(local_1d4,local_d4);
    fVar15 = (float10)FUN_0062f600();
    local_4e4 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(float)fVar15;
    local_4f8 = (int)(((float)local_4e4 - 10.0) / (float)(this->field235_0x1a8 + 5));
    fVar15 = (float10)FUN_006291d0();
    iVar12 = this->field238_0x1b4;
    local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
                (*(int *)(this->field225_0x198 + iVar12 * 4) * local_4f8);
    local_4dc = this->InventoryWidget_data;
    local_4e8 = (pair<unsigned___int64,unsigned___int64> *)
                (&local_4ec->field_0x0 +
                (int)(((float)fVar15 - 40.0) / (float)(this->field236_0x1ac + 5)) * local_4f8);
    if ((iVar12 < (local_4dc[1] - *local_4dc) / 0xc) &&
       ((*(int *)(*local_4dc + 4 + iVar12 * 0xc) - *(int *)(*local_4dc + iVar12 * 0xc)) / 0x11c <
        (int)local_4e8)) {
      local_4e8 = (pair<unsigned___int64,unsigned___int64> *)
                  ((*(int *)(*this->InventoryWidget_data + 4 + iVar12 * 0xc) -
                   *(int *)(*this->InventoryWidget_data + iVar12 * 0xc)) / 0x11c);
    }
    local_4e4 = local_4ec;
    if ((int)local_4ec < (int)local_4e8) {
      iVar12 = (int)local_4ec * 0x11c;
      do {
        iVar3 = (int)local_4ec -
                *(int *)(this->field225_0x198 + this->field238_0x1b4 * 4) * local_4f8;
        iVar13 = (this->Object_data).offset_0x0;
        local_4f0 = (float)(int)((float)((this->field235_0x1a8 + 5) * (iVar3 % local_4f8)) +
                                local_284 + 10.0);
        local_4dc = (int *)0x3cf5c28f;
        local_4e0 = (int)((float)((this->field236_0x1ac + 5) * (iVar3 / local_4f8)) +
                         local_280 + 40.0);
        fVar17 = *(float *)(iVar13 + 0xd4);
        if (((((float)(int)local_4f0 <= fVar17) &&
             (fVar17 < (float)(this->field235_0x1a8 + (int)local_4f0))) &&
            (fVar17 = *(float *)(iVar13 + 0xd8), (float)local_4e0 <= fVar17)) &&
           (fVar17 < (float)(this->field236_0x1ac + local_4e0))) {
          iStack_204 = this->field238_0x1b4;
          this->field217_0x184 = iStack_204;
          this->field218_0x188 = local_4ec;
          local_4dc = (int *)0x3d3851eb;
          local_200 = local_4ec;
        }
        iVar13 = this->field238_0x1b4;
        if (((iVar13 < (this->InventoryWidget_data[1] - *this->InventoryWidget_data) / 0xc) &&
            (*(int *)(iVar12 + *(int *)(*this->InventoryWidget_data + iVar13 * 0xc)) != 0)) ||
           ((this->field224_0x194 == 2 || (this->field224_0x194 == 3)))) {
          if (*(int *)(iVar12 + *(int *)(*this->InventoryWidget_data + iVar13 * 0xc)) < 0) {
            local_224 = 0;
            local_220 = 0;
            local_21c = 0;
            local_218 = 0x3f800000;
            puVar6 = &local_224;
          }
          else {
            local_1fc = 0x3f800000;
            uStack_1f8 = 0x3f800000;
            local_1f4 = 0x3f800000;
            uStack_1f0 = 0x3f800000;
            puVar6 = &local_1fc;
          }
          FUN_00448280(puVar6);
          local_4d8 = (char *)(*(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc) +
                               4 + iVar12);
          piVar16 = local_4dc;
          if (*local_4d8 == '\t') {
            piVar16 = (int *)((float)local_4dc * 0.75);
          }
          iVar13 = this->field236_0x1ac / 2;
          FUN_004758c0((float)((int)local_4f0 + iVar13),(float)(local_4e0 + iVar13),
                       this->field203_0x164 + 0x800a1c,piVar16,local_4d8,0);
        }
        local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_4ec->field_0x1;
        iVar12 = iVar12 + 0x11c;
      } while ((int)local_4ec < (int)local_4e8);
    }
    pbVar14 = local_4e4;
    piVar16 = *(int **)(this->field203_0x164 + 0x134);
    (**(code **)(*piVar16 + 0xe4))(piVar16,7,0);
    local_5a8._0_4_ =
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vbtable;
    local_598[0].vbtablePtr =
         (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_540);
    local_8 = 0;
    local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x1;
    std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
    basic_iostream<wchar_t,std::char_traits<wchar_t>_>
              ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_5a8,
               (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_590);
    local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
    *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
     (local_5a8 + *(int *)(local_5a8._0_4_ + 4)) =
         &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          vftable;
    *(int *)((int)&iStack_5ac + *(int *)(local_5a8._0_4_ + 4)) =
         *(int *)(local_5a8._0_4_ + 4) + -0x68;
    std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
    basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_590);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
    local_590[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                   &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                    ::vftable;
    local_558 = 0;
    local_554 = 0;
    local_8 = 3;
    switch(this->field224_0x194) {
    case 0:
      iVar12 = this->field238_0x1b4;
      if (iVar12 == 0) goto DAT_004c26af;
      if (iVar12 == 1) {
        pwVar27 = L"Items";
      }
      else {
        if (iVar12 != 2) goto LAB_004c273e;
        pwVar27 = L"Ingredients";
      }
      break;
    case 1:
DAT_004c26af:
      pwVar27 = L"Equipment";
      break;
    case 2:
      switch(this->field238_0x1b4) {
      case 0:
        pwVar27 = L"Weapons";
        break;
      case 1:
        pwVar27 = L"Armor";
        break;
      case 2:
        pwVar27 = L"Amulets";
        break;
      case 3:
        pwVar27 = L"Cooking";
        break;
      case 4:
        pwVar27 = L"Alchemy";
        break;
      default:
        pwVar27 = L"Formulas";
      }
      break;
    case 3:
      pwVar27 = L"Vendor";
      break;
    default:
      goto LAB_004c273e;
    }
    p_Var29 = endl_exref;
    pbVar7 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)FUN_0040e6f0(local_598,pwVar27);
    std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar7,p_Var29);
LAB_004c273e:
    local_1d8 = 7;
    local_1dc = 0;
    local_1ec = (undefined4 *)((uint)local_1ec._2_2_ << 0x10);
    FUN_0040f7a0(L"resource1.dat",0xd);
    local_8._0_1_ = 4;
    uVar4 = FUN_00411bc0(local_264);
    local_224 = 0;
    local_220 = 0;
    local_21c = 0;
    local_218 = 0;
    local_1fc = 0;
    uStack_1f8 = 0;
    local_1f4 = 0;
    uStack_1f0 = 0x3f800000;
    local_20c = 0x3f800000;
    local_208 = 0x3f800000;
    iStack_204 = 0x3f800000;
    local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x3f800000;
    local_8._0_1_ = 5;
    FUN_00639b30(&local_1ec,uVar4,0,0,0x41700000,0x41c80000,0x41400000,0x40400000,&local_20c,
                 &local_1fc,&local_224,0,0xbf800000,1);
    if (7 < local_250) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_264[0]);
    }
    local_250 = 7;
    local_254 = 0;
    local_264[0] = (void *)((uint)local_264[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    local_1d8 = 7;
    local_1dc = 0;
    local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
    FUN_0040f7a0(L"resource1.dat",0xd);
    local_8._0_1_ = 6;
    uVar4 = FUN_00411bc0(local_264);
    local_224 = 0;
    local_220 = 0;
    local_21c = 0;
    local_218 = 0;
    local_1fc = 0;
    uStack_1f8 = 0;
    local_1f4 = 0;
    uStack_1f0 = 0;
    local_20c = 0x3f800000;
    local_208 = 0x3f800000;
    iStack_204 = 0x3f800000;
    local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x3f800000;
    local_8._0_1_ = 7;
    FUN_00639b30(&local_1ec,uVar4,0,0,0x41700000,0x41c80000,0x41400000,0,&local_20c,&local_1fc,
                 &local_224,0,0xbf800000,1);
    if (7 < local_250) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_264[0]);
    }
    local_250 = 7;
    local_254 = 0;
    local_264[0] = (void *)((uint)local_264[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    if (this->field224_0x194 == 0) {
      local_4e0 = this->InventoryWidget_data[0x4a] / 100;
      local_4d8 = (char *)(this->InventoryWidget_data[0x4a] % 100);
      local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(local_4e0 / 100);
      local_4e0 = local_4e0 % 100;
      fVar15 = (float10)FUN_00627d50();
      local_4f0 = (float)fVar15;
      iVar12 = (int)(local_4f0 - 30.0);
      fVar15 = (float10)FUN_00627ce0();
      local_4f0 = (float)fVar15;
      local_1d8 = 7;
      local_1dc = 0;
      local_4dc = (int *)(int)(local_4f0 - 10.0);
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      FUN_0040f7a0(&PTR_006fccac,0);
      local_8._0_1_ = 8;
      if ((local_554 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*local_584);
      }
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                (local_590,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
                (local_590,(wchar_t *)0x0,(wchar_t *)0x0);
      local_554 = local_554 & 0xfffffffe;
      puVar6 = &local_1ec;
      if (7 < local_1d8) {
        puVar6 = local_1ec;
      }
      local_558 = 0;
      FUN_0040f3c0(puVar6,local_1dc,local_554);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      puVar30 = &DAT_006ffd80;
      pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                         (local_598,(int)local_4d8);
      FUN_0040e440(pbVar5,puVar30);
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      FUN_0040f7a0(L"resource1.dat",0xd);
      local_8._0_1_ = 9;
      uVar4 = FUN_00411bc0(local_264);
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0;
      local_1fc = 0;
      uStack_1f8 = 0;
      local_1f4 = 0;
      uStack_1f0 = 0x3f800000;
      local_24c = 0x3f800000;
      local_248 = 0x3f800000;
      local_244 = 0x3f800000;
      local_240 = 0x3f800000;
      local_8._0_1_ = 10;
      FUN_00639b30(&local_1ec,uVar4,0,0,(float)iVar12,(float)(int)local_4dc,0x41200000,0x40000000,
                   &local_24c,&local_1fc,&local_224,2,0xbf800000,1);
      if (7 < local_250) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_264[0]);
      }
      local_250 = 7;
      local_254 = 0;
      local_264[0] = (void *)((uint)local_264[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      FUN_0040f7a0(L"resource1.dat",0xd);
      local_8._0_1_ = 0xb;
      uVar4 = FUN_00411bc0(local_264);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0;
      local_1fc = 0x3f4ccccd;
      uStack_1f8 = 0x3f000000;
      local_1f4 = 0;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0xc;
      FUN_00639b30(&local_1ec,uVar4,0,0,(float)iVar12,(float)(int)local_4dc,0x41200000,0,&local_1fc,
                   &local_224,&local_24c,2,0xbf800000,1);
      if (7 < local_250) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_264[0]);
      }
      local_250 = 7;
      local_254 = 0;
      local_264[0] = (void *)((uint)local_264[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      FUN_0040f7a0(&PTR_006fccac,0);
      local_8._0_1_ = 0xd;
      if ((local_554 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        operator_delete((void *)*local_584);
      }
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
                (local_590,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
      std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
                (local_590,(wchar_t *)0x0,(wchar_t *)0x0);
      local_554 = local_554 & 0xfffffffe;
      puVar6 = &local_1ec;
      if (7 < local_1d8) {
        puVar6 = local_1ec;
      }
      local_558 = 0;
      FUN_0040f3c0(puVar6,local_1dc,local_554);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      puVar30 = &DAT_006ffd84;
      pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                         (local_598,local_4e0);
      FUN_0040e440(pbVar5,puVar30);
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      FUN_0040f7a0(L"resource1.dat",0xd);
      local_8._0_1_ = 0xe;
      uVar4 = FUN_00411bc0(local_264);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0x3f800000;
      local_1fc = 0x3f800000;
      uStack_1f8 = 0x3f800000;
      local_1f4 = 0x3f800000;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0xf;
      FUN_00639b30(&local_1ec,uVar4,0,0,(float)(iVar12 + -0x28),(float)(int)local_4dc,0x41200000,
                   0x40000000,&local_1fc,&local_224,&local_24c,2,0xbf800000,1);
      if (7 < local_250) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_264[0]);
      }
      local_250 = 7;
      local_254 = 0;
      local_264[0] = (void *)((uint)local_264[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      FUN_0040f7a0(L"resource1.dat",0xd);
      local_8._0_1_ = 0x10;
      uVar4 = FUN_00411bc0(local_264);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0;
      local_1fc = 0x3f333333;
      uStack_1f8 = 0x3f333333;
      local_1f4 = 0x3f333333;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0x11;
      FUN_00639b30(&local_1ec,uVar4,0,0,(float)(iVar12 + -0x28),(float)(int)local_4dc,0x41200000,0,
                   &local_1fc,&local_224,&local_24c,2,0xbf800000,1);
      if (7 < local_250) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_264[0]);
      }
      local_250 = 7;
      local_254 = 0;
      local_264[0] = (void *)((uint)local_264[0] & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      FUN_0040eb60(&PTR_006fccac);
      local_8._0_1_ = 0x12;
      FUN_0040b4e0();
      puVar6 = &local_1ec;
      if (7 < local_1d8) {
        puVar6 = local_1ec;
      }
      FUN_0040f3c0(puVar6,local_1dc,local_554);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      puVar30 = &DAT_006ffd88;
      pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                         (local_598,(int)local_200);
      FUN_0040e440(pbVar5,puVar30);
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x13;
      uVar4 = FUN_00411bc0(&local_1ec);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0x3f800000;
      local_1fc = 0x3f800000;
      uStack_1f8 = 0x3f800000;
      local_1f4 = 0x3f800000;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0x14;
      FUN_00639b30(local_23c,uVar4,0,0,(float)(iVar12 + -0x50),(float)(int)local_4dc,0x41200000,
                   0x40000000,&local_1fc,&local_224,&local_24c,2,0xbf800000,1);
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_23c[0]);
      }
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x15;
      uVar4 = FUN_00411bc0(&local_1ec);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0;
      local_1fc = 0x3f800000;
      uStack_1f8 = 0x3f666666;
      local_1f4 = 0;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0x16;
      FUN_00639b30(local_23c,uVar4,0,0,(float)(iVar12 + -0x50),(float)(int)local_4dc,0x41200000,0,
                   &local_1fc,&local_224,&local_24c,2,0xbf800000,1);
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_23c[0]);
      }
      fVar15 = (float10)FUN_00627ce0();
      local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)(float)fVar15;
      fVar17 = (float)local_200 - 10.0;
      FUN_0040eb60(&PTR_006fccac);
      local_8._0_1_ = 0x17;
      FUN_0040b4e0();
      puVar6 = &local_1ec;
      if (7 < local_1d8) {
        puVar6 = local_1ec;
      }
      FUN_0040f3c0(puVar6,local_1dc,local_554);
      local_8._0_1_ = 3;
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      pcVar31 = "  Platinum Coins ";
      pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                         (local_598,this->InventoryWidget_data[0x4b]);
      FUN_0040e440(pbVar5,pcVar31);
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x18;
      uVar4 = FUN_00411bc0(&local_1ec);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0x3f800000;
      local_1fc = 0x3f800000;
      uStack_1f8 = 0x3f800000;
      local_1f4 = 0x3f800000;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0x19;
      FUN_00639b30(local_23c,uVar4,0,0,0x41700000,(float)(int)fVar17,0x41200000,0x40000000,
                   &local_1fc,&local_224,&local_24c,0,0xbf800000,1);
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_23c[0]);
      }
      FUN_0040eb60(L"resource1.dat");
      local_8._0_1_ = 0x1a;
      uVar4 = FUN_00411bc0(&local_1ec);
      local_24c = 0;
      local_248 = 0;
      local_244 = 0;
      local_240 = 0;
      local_224 = 0;
      local_220 = 0;
      local_21c = 0;
      local_218 = 0;
      local_1fc = 0x3f000000;
      uStack_1f8 = 0x3e4ccccd;
      local_1f4 = 0x3f800000;
      uStack_1f0 = 0x3f800000;
      local_8._0_1_ = 0x1b;
      FUN_00639b30(local_23c,uVar4,0,0,0x41700000,(float)(int)fVar17,0x41200000,0,&local_1fc,
                   &local_224,&local_24c,0,0xbf800000,1);
      if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_1ec);
      }
      local_1d8 = 7;
      local_1dc = 0;
      local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
      local_8._0_1_ = 3;
      if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_23c[0]);
      }
    }
    local_8._0_1_ = 3;
    if ((int)pbVar14 < (int)local_4e8) {
      do {
        piVar16 = (int *)((int)pbVar14 * 0x11c);
        iVar12 = (int)pbVar14 -
                 *(int *)(this->field225_0x198 + this->field238_0x1b4 * 4) * local_4f8;
        local_4e0 = iVar12 / local_4f8;
        local_4d8 = (char *)(iVar12 % local_4f8);
        iVar12 = *(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc);
        local_4dc = piVar16;
        if ((*(char *)(iVar12 + 4 + (int)piVar16) != '\0') &&
           ((((cVar1 = *(char *)(iVar12 + 4 + (int)piVar16), cVar1 == '\x01' || (cVar1 == '\n')) ||
             ((cVar1 == '\f' || (((cVar1 == '\r' || (cVar1 == '\v')) || (cVar1 == '\x15')))))) &&
            (0 < *(int *)(iVar12 + (int)piVar16))))) {
          local_7b8._0_4_ =
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vbtable;
          local_7a8[0].vbtablePtr =
               (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
          std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
          basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_750);
          local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)((uint)local_4ec | 2);
          local_8 = CONCAT31(local_8._1_3_,0x1c);
          std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
          basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                    ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_7b8,
                     (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_7a0);
          local_8 = 0x1d;
          *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
            **)(local_7b8 + *(int *)(local_7b8._0_4_ + 4)) =
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vftable;
          *(int *)((int)&iStack_7bc + *(int *)(local_7b8._0_4_ + 4)) =
               *(int *)(local_7b8._0_4_ + 4) + -0x68;
          std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
          basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_7a0);
          local_7a0[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                         &std::
                          basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          ::vftable;
          local_768 = 0;
          local_764 = 0;
          local_8._0_1_ = 0x1f;
          p_Var29 = endl_exref;
          pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                             (local_7a8,
                              *(int *)(*(int *)(*this->InventoryWidget_data +
                                               this->field238_0x1b4 * 0xc) + (int)piVar16));
          std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                    ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)pbVar5,p_Var29);
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x20;
          uVar4 = FUN_00411bc0(local_214);
          local_24c = 0;
          local_248 = 0;
          local_244 = 0;
          local_240 = 0;
          local_224 = 0;
          local_220 = 0;
          local_21c = 0;
          local_218 = 0x3f800000;
          local_1fc = 0x3f800000;
          uStack_1f8 = 0x3f800000;
          local_1f4 = 0x3f800000;
          uStack_1f0 = 0x3f800000;
          local_8._0_1_ = 0x21;
          FUN_00639b30(local_23c,uVar4,0,0,
                       (float)((this->field235_0x1a8 + 5) * (int)local_4d8 + 6 +
                              this->field235_0x1a8),
                       (float)((this->field236_0x1ac + 5) * local_4e0 + this->field236_0x1ac + 0x25)
                       ,0x41200000,0x40000000,&local_1fc,&local_224,&local_24c,2,0xbf800000,1);
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
          iStack_204 = 0;
          local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
          local_8._0_1_ = 0x1f;
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x22;
          uVar4 = FUN_00411bc0(local_214);
          local_2d4 = 0;
          local_2d0 = 0;
          local_2cc = 0;
          local_2c8 = 0;
          local_304 = 0;
          local_300 = 0;
          local_2fc = 0;
          local_2f8 = 0;
          local_2f4 = 0x3f800000;
          local_2f0 = 0x3f800000;
          local_2ec = 0x3f800000;
          local_2e8 = 0x3f800000;
          local_8._0_1_ = 0x23;
          FUN_00639b30(local_23c,uVar4,0,0,
                       (float)((this->field235_0x1a8 + 5) * (int)local_4d8 + 6 +
                              this->field235_0x1a8),
                       (float)((this->field236_0x1ac + 5) * local_4e0 + this->field236_0x1ac + 0x25)
                       ,0x41200000,0,&local_2f4,&local_304,&local_2d4,2,0xbf800000,1);
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
          iStack_204 = 0;
          local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          local_8._0_1_ = 3;
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)local_7b8);
        }
        piVar16 = local_4dc;
        if ((*(char *)(*(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc) + 4 +
                      (int)local_4dc) != '\0') && (this->field224_0x194 == 2)) {
          local_708._0_4_ =
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vbtable;
          local_6f8[0].vbtablePtr =
               (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
          std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
          basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_6a0);
          local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)((uint)local_4ec | 4);
          local_8 = CONCAT31(local_8._1_3_,0x24);
          std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
          basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                    ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_708,
                     (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_6f0);
          local_8 = 0x25;
          *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
            **)(local_708 + *(int *)(local_708._0_4_ + 4)) =
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vftable;
          *(int *)((int)&iStack_70c + *(int *)(local_708._0_4_ + 4)) =
               *(int *)(local_708._0_4_ + 4) + -0x68;
          std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
          basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_6f0);
          local_6f0[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                         &std::
                          basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          ::vftable;
          local_6b8 = 0;
          local_6b4 = 0;
          local_8._0_1_ = 0x27;
          iVar12 = *(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc);
          if (0 < *(int *)((int)piVar16 + iVar12)) {
            p_Var29 = endl_exref;
            pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                               (local_6f8,*(int *)(iVar12 + (int)piVar16));
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                      ((basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)pbVar5,p_Var29);
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x28;
            uVar4 = FUN_00411bc0(local_214);
            local_314 = 0;
            local_310 = 0;
            local_30c = 0;
            local_308 = 0;
            local_334 = 0;
            local_330 = 0;
            local_32c = 0;
            local_328 = 0x3f800000;
            local_324 = 0x3f800000;
            local_320 = 0x3f800000;
            local_31c = 0x3f800000;
            local_318 = 0x3f800000;
            local_8._0_1_ = 0x29;
            FUN_00639b30(local_23c,uVar4,0,0,
                         (float)((this->field235_0x1a8 + 5) * (int)local_4d8 + 6 +
                                this->field235_0x1a8),
                         (float)((this->field236_0x1ac + 5) * local_4e0 +
                                this->field236_0x1ac + 0x25),0x41200000,0x40000000,&local_324,
                         &local_334,&local_314,2,0xbf800000,1);
            if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_214[0]);
            }
            local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
            iStack_204 = 0;
            local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
            local_8._0_1_ = 0x27;
            if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_23c[0]);
            }
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x2a;
            uVar4 = FUN_00411bc0(local_214);
            local_3b4 = 0;
            local_3b0 = 0;
            local_3ac = 0;
            local_3a8 = 0;
            local_344 = 0;
            local_340 = 0;
            local_33c = 0;
            local_338 = 0;
            local_394 = 0x3f800000;
            local_390 = 0x3f800000;
            local_38c = 0x3f800000;
            local_388 = 0x3f800000;
            local_8._0_1_ = 0x2b;
            FUN_00639b30(local_23c,uVar4,0,0,
                         (float)((this->field235_0x1a8 + 5) * (int)local_4d8 + 6 +
                                this->field235_0x1a8),
                         (float)((this->field236_0x1ac + 5) * local_4e0 +
                                this->field236_0x1ac + 0x25),0x41200000,0,&local_394,&local_344,
                         &local_3b4,2,0xbf800000,1);
            if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_214[0]);
            }
            local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
            iStack_204 = 0;
            local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
            local_8._0_1_ = 0x27;
            piVar16 = local_4dc;
            if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_23c[0]);
            }
          }
          local_8._0_1_ = 0x27;
          FUN_0040eb60(&PTR_006fccac);
          local_8._0_1_ = 0x2c;
          FUN_0040b4e0();
          pppppuVar9 = local_214;
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
            pppppuVar9 = (undefined4 *****)local_214[0];
          }
          FUN_0040f3c0(pppppuVar9,iStack_204,local_6b4);
          local_8._0_1_ = 0x27;
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)(this->field203_0x164 + 0x2e4),local_23c,
                     (char *)(*(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc) + 4
                             + (int)piVar16));
          local_8._0_1_ = 0x2d;
          FUN_00424ba0(local_6f8,extraout_EAX);
          local_8._0_1_ = 0x27;
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          iVar12 = *(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc);
          cVar1 = *(char *)((int)piVar16 + iVar12 + 4);
          if (((((cVar1 != '\f') && (cVar1 != '\r')) &&
               ((cVar1 != '\x15' &&
                (((cVar1 != '\v' || (*(char *)((int)piVar16 + iVar12 + 5) == '\x0e')) &&
                 (cVar1 != '\0')))))) && ((cVar1 != '\x19' && (cVar1 != '\x14')))) &&
             ((cVar1 != '\x18' && (cVar1 != '\x17')))) {
            iVar12 = FUN_004c76a0();
            pbVar7 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
                     FUN_0040e440(local_6f8,&DAT_0070182c);
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar7,iVar12);
          }
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x2e;
          uVar4 = FUN_00411bc0(local_214);
          iVar12 = this->field236_0x1ac;
          local_364 = 0;
          local_360 = 0;
          local_35c = 0;
          local_358 = 0;
          local_3f4 = 0;
          local_3f0 = 0;
          local_3ec = 0;
          local_3e8 = 0x3f800000;
          local_384 = 0x3f800000;
          local_380 = 0x3f800000;
          local_37c = 0x3f800000;
          local_378 = 0x3f800000;
          local_8._0_1_ = 0x2f;
          FUN_00639b30(local_23c,uVar4,0,0,
                       (float)((this->field235_0x1a8 + 5) * (int)local_4d8 + 0x14 + iVar12),
                       (float)((iVar12 + 5) * local_4e0 + 0x32),0x41200000,0x40000000,&local_384,
                       &local_3f4,&local_364,0x10,(float)((this->field235_0x1a8 - iVar12) + -0x14),1
                      );
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
          iStack_204 = 0;
          local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
          local_8._0_1_ = 0x27;
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x30;
          uVar4 = FUN_00411bc0(local_214);
          local_414 = 0;
          iVar12 = local_4f4->field236_0x1ac;
          local_410 = 0;
          local_40c = 0;
          local_408 = 0;
          local_3e4 = 0;
          local_3e0 = 0;
          local_3dc = 0;
          local_3d8 = 0;
          uVar32 = 1;
          fVar17 = (float)((local_4f4->field235_0x1a8 - iVar12) + -0x14);
          puVar6 = &local_414;
          uVar25 = 0x10;
          puVar24 = &local_3e4;
          local_8._0_1_ = 0x31;
          uVar8 = FUN_004c7d20(local_464);
          FUN_00639b30(local_23c,uVar4,0,0,
                       (float)((local_4f4->field235_0x1a8 + 5) * (int)local_4d8 + 0x14 + iVar12),
                       (float)((iVar12 + 5) * local_4e0 + 0x32),0x41200000,0,uVar8,puVar24,puVar6,
                       uVar25,fVar17,uVar32);
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
          iStack_204 = 0;
          local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          local_8._0_1_ = 3;
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)local_708);
          this = local_4f4;
        }
        piVar16 = local_4dc;
        if ((*(char *)(*(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc) + 4 +
                      (int)local_4dc) != '\0') && (this->field224_0x194 == 3)) {
          local_658._0_4_ =
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vbtable;
          local_648[0].vbtablePtr =
               (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
          std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
          basic_ios<wchar_t,std::char_traits<wchar_t>_>(local_5f0);
          local_4ec = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)((uint)local_4ec | 8);
          local_8 = CONCAT31(local_8._1_3_,0x32);
          std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
          basic_iostream<wchar_t,std::char_traits<wchar_t>_>
                    ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_658,
                     (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_640);
          local_8 = 0x33;
          *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable
            **)(local_658 + *(int *)(local_658._0_4_ + 4)) =
               &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                ::vftable;
          *(int *)((int)&iStack_65c + *(int *)(local_658._0_4_ + 4)) =
               *(int *)(local_658._0_4_ + 4) + -0x68;
          local_200 = local_640;
          std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
          basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_200);
          local_8._0_1_ = 0x34;
          local_640[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                         &std::
                          basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                          ::vftable;
          FUN_0040f3c0(0,0,0);
          local_8._0_1_ = 0x35;
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)(this->field203_0x164 + 0x2e4),local_23c,
                     (char *)(*(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc) + 4
                             + (int)piVar16));
          local_8._0_1_ = 0x36;
          FUN_00424ba0(local_648,extraout_EAX_00);
          local_8._0_1_ = 0x35;
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          iVar12 = *(int *)(*this->InventoryWidget_data + this->field238_0x1b4 * 0xc);
          cVar1 = *(char *)((int)piVar16 + iVar12 + 4);
          if ((((((cVar1 != '\f') && (cVar1 != '\r')) && (cVar1 != '\x15')) &&
               ((cVar1 != '\v' || (*(char *)((int)piVar16 + iVar12 + 5) == '\x0e')))) &&
              ((cVar1 != '\0' && ((cVar1 != '\x19' && (cVar1 != '\x14')))))) &&
             ((cVar1 != '\x18' && (cVar1 != '\x17')))) {
            iVar12 = FUN_004c76a0();
            pbVar7 = (basic_ostream<wchar_t,std::char_traits<wchar_t>_> *)
                     FUN_0040e440(local_648,&DAT_0070182c);
            std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(pbVar7,iVar12);
          }
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x37;
          uVar4 = FUN_00411bc0(local_214);
          iVar12 = this->field236_0x1ac;
          local_3d4 = 0;
          local_3d0 = 0;
          local_3cc = 0;
          local_3c8 = 0;
          local_3c4 = 0;
          local_3c0 = 0;
          local_3bc = 0;
          local_3b8 = 0x3f800000;
          local_294 = 0x3f800000;
          local_290 = 0x3f800000;
          local_28c = 0x3f800000;
          local_288 = 0x3f800000;
          local_8._0_1_ = 0x38;
          FUN_00639b30(local_23c,uVar4,0,0,
                       (float)((this->field235_0x1a8 + 5) * (int)local_4d8 + 0x14 + iVar12),
                       (float)((iVar12 + 5) * local_4e0 + 0x32),0x41200000,0x40000000,&local_294,
                       &local_3c4,&local_3d4,0x10,(float)((this->field235_0x1a8 - iVar12) + -0x14),1
                      );
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
          iStack_204 = 0;
          local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
          local_8._0_1_ = 0x35;
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          FUN_0040eb60(L"resource1.dat");
          local_8._0_1_ = 0x39;
          uVar4 = FUN_00411bc0(local_214);
          local_404 = 0;
          iVar12 = local_4f4->field236_0x1ac;
          local_400 = 0;
          local_3fc = 0;
          local_3f8 = 0;
          local_3a4 = 0;
          local_3a0 = 0;
          local_39c = 0;
          local_398 = 0;
          uVar32 = 1;
          fVar17 = (float)((local_4f4->field235_0x1a8 - iVar12) + -0x14);
          puVar6 = &local_404;
          uVar25 = 0x10;
          puVar24 = &local_3a4;
          local_8._0_1_ = 0x3a;
          uVar8 = FUN_004c7d20(local_4a4);
          FUN_00639b30(local_23c,uVar4,0,0,
                       (float)((local_4f4->field235_0x1a8 + 5) * (int)local_4d8 + 0x14 + iVar12),
                       (float)((iVar12 + 5) * local_4e0 + 0x32),0x41200000,0,uVar8,puVar24,puVar6,
                       uVar25,fVar17,uVar32);
          this = local_4f4;
          if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_214[0]);
          }
          local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
          iStack_204 = 0;
          local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
          local_8._0_1_ = 0x35;
          if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_23c[0]);
          }
          iVar12 = FUN_004c76e0();
          local_4dc = (int *)((iVar12 / 100) / 100);
          local_4f0 = (float)((iVar12 / 100) % 100);
          local_4d8 = (char *)(this->field235_0x1a8 + 10 +
                              (this->field235_0x1a8 + 5) * (int)local_4d8);
          if (iVar12 % 100 != 0) {
            FUN_0040eb60(&PTR_006fccac);
            local_8._0_1_ = 0x3b;
            FUN_0040b4e0();
            pppppuVar9 = local_214;
            if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
              pppppuVar9 = (undefined4 *****)local_214[0];
            }
            FUN_0040f3c0(pppppuVar9,iStack_204,local_640[0xf]);
            local_8._0_1_ = 0x35;
            if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_214[0]);
            }
            puVar30 = &DAT_006ffd80;
            pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                               (local_648,iVar12 % 100);
            FUN_0040e440(pbVar5,puVar30);
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x3c;
            uVar4 = FUN_00411bc0(local_214);
            iVar12 = local_4e0;
            local_2b4 = 0;
            local_2b0 = 0;
            local_2ac = 0;
            local_2a8 = 0;
            local_2c4 = 0;
            local_2c0 = 0;
            local_2bc = 0;
            local_2b8 = 0x3f800000;
            local_2e4 = 0x3f800000;
            local_2e0 = 0x3f800000;
            local_2dc = 0x3f800000;
            local_2d8 = 0x3f800000;
            local_8._0_1_ = 0x3d;
            FUN_00639b30(local_23c,uVar4,0,0,(float)(int)local_4d8,
                         (float)((this->field236_0x1ac + 5) * local_4e0 +
                                this->field236_0x1ac + 0x25),0x41200000,0x40000000,&local_2e4,
                         &local_2c4,&local_2b4,2,0xbf800000,1);
            if ((basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7 < local_200) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_214[0]);
            }
            local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x7;
            iStack_204 = 0;
            local_214[0] = (undefined4 ****)((uint)local_214[0] & 0xffff0000);
            local_8._0_1_ = 0x35;
            if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_23c[0]);
            }
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x3e;
            uVar4 = FUN_00411bc0(local_23c);
            local_2a4 = 0;
            local_2a0 = 0;
            local_29c = 0;
            local_298 = 0;
            local_354 = 0;
            local_350 = 0;
            local_34c = 0;
            local_348 = 0;
            local_374 = 0x3f4ccccd;
            local_370 = 0x3f000000;
            local_36c = 0;
            local_368 = 0x3f800000;
            local_8._0_1_ = 0x3f;
            FUN_00639b30(local_27c,uVar4,0,0,(float)(int)local_4d8,
                         (float)((this->field236_0x1ac + 5) * iVar12 + this->field236_0x1ac + 0x25),
                         0x41200000,0,&local_374,&local_354,&local_2a4,2,0xbf800000,1);
            if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_23c[0]);
            }
            local_228 = 7;
            local_200 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)0x0;
            local_22c = 0;
            FUN_0040f8a0(local_23c,&local_200);
            local_8._0_1_ = 0x35;
            FUN_00593e50();
            local_4d8 = local_4d8 + -0x28;
          }
          fVar17 = local_4f0;
          if (local_4f0 != 0.0) {
            FUN_0040eb60(&PTR_006fccac);
            local_8._0_1_ = 0x40;
            FUN_00411b90(local_27c);
            local_8._0_1_ = 0x35;
            FUN_00593e50();
            puVar30 = &DAT_006ffd84;
            pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                               (local_648,(int)fVar17);
            FUN_0040e440(pbVar5,puVar30);
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x41;
            uVar4 = FUN_00411bc0(local_23c);
            iVar12 = this->field236_0x1ac;
            uVar33 = 1;
            uVar28 = 0xbf800000;
            uVar26 = 2;
            local_8._0_1_ = 0x42;
            uVar8 = FUN_0040eac0(0,0,0,0);
            uVar25 = FUN_0040eac0(0,0,0,0x3f800000);
            uVar32 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
            fVar17 = (float)((iVar12 + 5) * local_4e0 + 0x25 + iVar12);
            uVar23 = 0x40000000;
            uVar22 = 0x41200000;
            fVar18 = (float)(int)local_4d8;
            puVar19 = local_27c;
            uVar21 = 0;
            uVar20 = 0;
            FUN_00411320(puVar19,uVar4,0,0,fVar18,fVar17,0x41200000,0x40000000,uVar32,uVar25,uVar8,
                         uVar26,uVar28,uVar33);
            FUN_00639b30(puVar19,uVar4,uVar20,uVar21,fVar18,fVar17,uVar22,uVar23,uVar32,uVar25,uVar8
                         ,uVar26,uVar28,uVar33);
            FUN_00593e50();
            local_8._0_1_ = 0x35;
            FUN_00593e50();
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x43;
            uVar4 = FUN_00411bc0(local_23c);
            iVar12 = this->field236_0x1ac;
            uVar33 = 1;
            uVar28 = 0xbf800000;
            uVar26 = 2;
            local_8._0_1_ = 0x44;
            uVar8 = FUN_0040eac0(0,0,0,0);
            uVar25 = FUN_0040eac0(0,0,0,0);
            uVar32 = FUN_0040eac0(0x3f333333,0x3f333333,0x3f333333,0x3f800000);
            pcVar31 = local_4d8;
            fVar17 = (float)((iVar12 + 5) * local_4e0 + iVar12 + 0x25);
            uVar23 = 0;
            uVar22 = 0x41200000;
            fVar18 = (float)(int)local_4d8;
            puVar19 = local_27c;
            uVar21 = 0;
            uVar20 = 0;
            FUN_00411320(puVar19,uVar4,0,0,fVar18,fVar17,0x41200000,0,uVar32,uVar25,uVar8,uVar26,
                         uVar28,uVar33);
            FUN_00639b30(puVar19,uVar4,uVar20,uVar21,fVar18,fVar17,uVar22,uVar23,uVar32,uVar25,uVar8
                         ,uVar26,uVar28,uVar33);
            FUN_00593e50();
            local_8._0_1_ = 0x35;
            FUN_00593e50();
            local_4d8 = pcVar31 + -0x28;
          }
          piVar16 = local_4dc;
          if (local_4dc != (int *)0x0) {
            FUN_0040eb60(&PTR_006fccac);
            local_8._0_1_ = 0x45;
            FUN_00411b90(local_27c);
            local_8._0_1_ = 0x35;
            FUN_00593e50();
            puVar30 = &DAT_006ffd88;
            pbVar5 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                               (local_648,(int)piVar16);
            FUN_0040e440(pbVar5,puVar30);
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x46;
            uVar4 = FUN_00411bc0(local_23c);
            iVar12 = this->field236_0x1ac;
            uVar33 = 1;
            uVar28 = 0xbf800000;
            uVar26 = 2;
            local_8._0_1_ = 0x47;
            uVar8 = FUN_0040eac0(0,0,0,0);
            uVar25 = FUN_0040eac0(0,0,0,0x3f800000);
            uVar32 = FUN_0040eac0(0x3f800000,0x3f800000,0x3f800000,0x3f800000);
            fVar17 = (float)((iVar12 + 5) * local_4e0 + 0x25 + iVar12);
            uVar23 = 0x40000000;
            uVar22 = 0x41200000;
            fVar18 = (float)(int)local_4d8;
            puVar19 = local_27c;
            uVar21 = 0;
            uVar20 = 0;
            FUN_00411320(puVar19,uVar4,0,0,fVar18,fVar17,0x41200000,0x40000000,uVar32,uVar25,uVar8,
                         uVar26,uVar28,uVar33);
            FUN_00639b30(puVar19,uVar4,uVar20,uVar21,fVar18,fVar17,uVar22,uVar23,uVar32,uVar25,uVar8
                         ,uVar26,uVar28,uVar33);
            FUN_00593e50();
            local_8._0_1_ = 0x35;
            FUN_00593e50();
            FUN_0040eb60(L"resource1.dat");
            local_8._0_1_ = 0x48;
            uVar4 = FUN_00411bc0(local_23c);
            iVar12 = this->field236_0x1ac;
            uVar33 = 1;
            uVar28 = 0xbf800000;
            uVar26 = 2;
            local_8._0_1_ = 0x49;
            uVar8 = FUN_0040eac0(0,0,0,0);
            uVar25 = FUN_0040eac0(0,0,0,0);
            uVar32 = FUN_0040eac0(0x3f800000,0x3f666666,0,0x3f800000);
            fVar17 = (float)((iVar12 + 5) * local_4e0 + 0x25 + iVar12);
            uVar23 = 0;
            uVar22 = 0x41200000;
            fVar18 = (float)(int)local_4d8;
            puVar19 = local_27c;
            uVar21 = 0;
            uVar20 = 0;
            FUN_00411320(puVar19,uVar4,0,0,fVar18,fVar17,0x41200000,0,uVar32,uVar25,uVar8,uVar26,
                         uVar28,uVar33);
            FUN_00639b30(puVar19,uVar4,uVar20,uVar21,fVar18,fVar17,uVar22,uVar23,uVar32,uVar25,uVar8
                         ,uVar26,uVar28,uVar33);
            FUN_00593e50();
            FUN_00593e50();
          }
          local_8._0_1_ = 3;
          std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                    ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                      *)local_658);
        }
        pbVar14 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)&local_4e4->field_0x1;
        local_4e4 = pbVar14;
      } while ((int)pbVar14 < (int)local_4e8);
    }
    if (this->field206_0x170 != 0) {
      FUN_00411cf0();
      cVar1 = FUN_006294c0();
      if (cVar1 == '\0') {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
      FUN_0040f8e0(uVar4);
      FUN_004288e0(uVar4);
    }
    if (this->field207_0x174 != 0) {
      FUN_00411cf0();
      cVar1 = FUN_006294c0();
      if (cVar1 == '\0') {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
      FUN_0040f8e0(uVar4);
      FUN_004288e0(uVar4);
    }
    if (this->field208_0x178 != 0) {
      FUN_00411cf0();
      cVar1 = FUN_006294c0();
      if (cVar1 == '\0') {
        uVar4 = 0x3f800000;
      }
      else {
        uVar4 = 0;
      }
      uVar4 = FUN_0040eac0(uVar4,0x3f800000,0x3f800000,0x3f800000);
      FUN_0040f8e0(uVar4);
      FUN_004288e0(uVar4);
    }
    local_8 = 0xffffffff;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
               local_5a8);
  }
  iVar12 = 0;
  FUN_0046f440(&local_4e8);
  uVar4 = FUN_0060a9f0(&local_200);
  cVar1 = FUN_004688d0(uVar4);
  while (cVar1 != '\0') {
    if (iVar12 == this->field238_0x1b4) {
LAB_004c576f:
      uVar25 = 0x3f800000;
      uVar8 = 0x3f800000;
      uVar4 = 0x3f800000;
    }
    else {
      FUN_0042c6c0();
      FUN_00411cf0();
      cVar1 = FUN_006294c0();
      if (cVar1 != '\0') goto LAB_004c576f;
      uVar25 = 0x3f4ccccd;
      uVar8 = 0x3f4ccccd;
      uVar4 = 0x3f4ccccd;
    }
    local_4e4 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
                FUN_0040eac0(uVar4,uVar8,uVar25,0x3f800000);
    FUN_0042c6c0();
    pbVar14 = local_4e4;
    FUN_0040f8e0(local_4e4);
    FUN_004288e0(pbVar14);
    FUN_00411cf0();
    cVar1 = FUN_006294c0();
    if (cVar1 == '\0') {
      if (iVar12 == this->field238_0x1b4) {
        uVar8 = 0;
        uVar4 = 0;
      }
      else {
        uVar8 = 0x3f800000;
        uVar4 = 0x3f800000;
      }
      ppVar10 = (pair<unsigned___int64,unsigned___int64> *)
                FUN_0040eac0(uVar4,0x3f800000,uVar8,0x3f800000);
      local_4e4 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
                  std::pair<unsigned___int64,unsigned___int64>::
                  operator=<std::pair<unsigned___int64,unsigned___int64>,0>(local_444,ppVar10);
    }
    else {
      local_4e4 = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)
                  FUN_0040eac0(0,0x3f800000,0x3f800000,0x3f800000);
    }
    FUN_0040eb60(L"frame");
    local_8 = 0x4a;
    pbVar14 = local_4e4;
    FUN_00633d70(local_27c);
    FUN_0040f8e0(pbVar14);
    FUN_004288e0(pbVar14);
    local_8 = 0xffffffff;
    FUN_00593e50();
    FUN_00411cf0();
    cVar1 = FUN_006294c0();
    if (cVar1 != '\0') {
      this->field237_0x1b0 = iVar12;
    }
    iVar12 = iVar12 + 1;
    FUN_00468d30(&local_4f0,0);
    uVar4 = FUN_0060a9f0(&local_200);
    cVar1 = FUN_004688d0(uVar4);
  }
  iVar12 = FUN_00411740();
  if (*(int *)(iVar12 + 0x11e8) != 0) {
    uVar25 = 0;
    iVar12 = FUN_00411740(0);
    iVar12 = iVar12 + 0x11ec;
    uVar8 = 0x3d4ccccd;
    uVar4 = FUN_00411750(0x3d4ccccd,iVar12);
    fVar15 = (float10)FUN_004348e0(uVar4);
    fVar17 = (float)fVar15;
    fVar15 = (float10)FUN_004348d0(fVar17);
    FUN_004758c0((float)fVar15,fVar17,uVar4,uVar8,iVar12,uVar25);
  }
LAB_004c595f:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::InventoryWidget::vfunction11_for_NamedObject @ 004c5d50  kind=game  attributed-by=rtti  size=909 */

void __thiscall cube::InventoryWidget::vfunction11_for_NamedObject(InventoryWidget *this)

{
  int *piVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  float10 fVar10;
  float fVar11;
  undefined4 uVar12;
  int local_20;
  int local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e2bd8;
  local_10 = ExceptionList;
  if (this->field204_0x168 == 0) {
    return;
  }
  ExceptionList = &local_10;
  FUN_004c6350(DAT_0076aa78 ^ (uint)&stack0xfffffffc);
  fVar10 = (float10)FUN_0062f600();
  iVar3 = (int)(((float)fVar10 - 10.0) / (float)(this->field235_0x1a8 + 5));
  fVar10 = (float10)FUN_006291d0();
  iVar4 = (int)(((float)fVar10 - 40.0) / (float)(this->field236_0x1ac + 5));
  local_20 = 0;
  puVar5 = (undefined4 *)FUN_0046d550(0,0);
  local_8 = 0;
  piVar1 = *(int **)(*(int *)(this->offset_0x13c + 0x28) + 0x2c);
  piVar9 = (int *)*piVar1;
  if (piVar9 != piVar1) {
    do {
      if (*(int *)(piVar9[2] + 0x34) == *(int *)(this->field204_0x168 + 0x34)) {
        iVar6 = FUN_00583cb0(puVar5,puVar5[1],piVar9 + 2);
        if (local_20 == 0x15555554) {
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar5[1] = iVar6;
        local_20 = local_20 + 1;
        **(int **)(iVar6 + 4) = iVar6;
      }
      piVar9 = (int *)*piVar9;
    } while (piVar9 != (int *)*(int *)(*(int *)(this->offset_0x13c + 0x28) + 0x2c));
  }
  for (puVar2 = (undefined4 *)*puVar5; puVar2 != puVar5; puVar2 = (undefined4 *)*puVar2) {
    FUN_006504e0(puVar2[2]);
  }
  local_18 = 0;
  if (0 < iVar3) {
    do {
      iVar6 = 0;
      if (0 < iVar4) {
        do {
          iVar7 = FUN_00636040(0);
          uVar8 = (**(code **)(**(int **)(iVar7 + 0x38) + 8))();
          FUN_00636b70(uVar8);
          FUN_00635fe0(iVar7,this->offset_0x13c);
          FUN_0062a650((float)((this->field235_0x1a8 + 5) * local_18 + 10),
                       (float)((this->field236_0x1ac + 5) * iVar6 + 0x28),1);
          iVar6 = iVar6 + 1;
        } while (iVar6 < iVar4);
      }
      local_18 = local_18 + 1;
    } while (local_18 < iVar3);
  }
  if (this->field205_0x16c != 0) {
    if (this->field238_0x1b4 < this->field226_0x19c - this->field225_0x198 >> 2) {
      FUN_0062a650(0x41200000,0x41200000,1);
      iVar4 = *(int *)(this->field205_0x16c + 0x3c);
      *(undefined4 *)(*(int *)(iVar4 + 0x94) + *(int *)(iVar4 + 0x68) * 4) = 1;
      iVar4 = this->field223_0x190 -
              *(int *)(this->field225_0x198 + this->field238_0x1b4 * 4) * iVar3;
      FUN_0062a650((float)((this->field235_0x1a8 + 5) * (iVar4 % iVar3) + 10),
                   (float)((this->field236_0x1ac + 5) * (iVar4 / iVar3) + 0x28),1);
    }
    else {
      iVar3 = *(int *)(this->field205_0x16c + 0x3c);
      *(undefined4 *)(*(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x68) * 4) = 0;
    }
  }
  if (this->field206_0x170 != 0) {
    uVar12 = 1;
    uVar8 = 0x41200000;
    fVar10 = (float10)FUN_0062f600(0x41200000,1);
    FUN_0062a650((float)fVar10 - 30.0,uVar8,uVar12);
  }
  if (this->field207_0x174 != 0) {
    uVar8 = 1;
    fVar10 = (float10)FUN_006291d0(1);
    fVar11 = (float)fVar10 - 30.0;
    fVar10 = (float10)FUN_0062f600(fVar11);
    FUN_0062a650((float)fVar10 - 30.0,fVar11,uVar8);
  }
  FUN_004c64c0();
  puVar2 = (undefined4 *)*puVar5;
  *puVar5 = puVar5;
  puVar5[1] = puVar5;
  if (puVar2 != puVar5) {
                    /* WARNING: Subroutine does not return */
    operator_delete(puVar2);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(puVar5);
}


