// EnchantWidget (ui) -- cube. 2 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "EnchantWidget.h"

/* cube::EnchantWidget::deleting_destructor_for_NamedObject @ 0044ea30  kind=game  attributed-by=rtti  size=7793 */

void __thiscall cube::EnchantWidget::deleting_destructor_for_NamedObject(EnchantWidget *this)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  int iVar8;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar9;
  undefined4 *puVar10;
  undefined8 *puVar11;
  float10 fVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  EnchantWidget *pEVar16;
  undefined4 *puVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined *puVar23;
  int iStack_33c;
  undefined1 local_338 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_328 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_320 [3];
  undefined4 *local_314;
  undefined4 local_2e8;
  uint local_2e4;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_2d0 [6];
  float local_288;
  char *local_284;
  float local_280;
  EnchantWidget *local_27c;
  float *local_278;
  void *local_274 [5];
  uint local_260;
  undefined4 local_25c;
  undefined4 local_258;
  float local_254;
  float local_250;
  undefined4 local_24c;
  undefined4 uStack_248;
  undefined4 local_244;
  undefined4 uStack_240;
  void *local_23c [4];
  undefined4 local_22c;
  uint local_228;
  void *local_224 [2];
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1d8;
  undefined8 local_1d4 [32];
  undefined8 local_d4 [24];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e30dc;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_278 = (float *)0x0;
  local_27c = this;
  pcVar5 = (char *)FUN_00450960(local_14);
  local_284 = pcVar5;
  if (pcVar5 != (char *)0x0) {
    iVar6 = this->offset_0x13c;
    iVar8 = *(int *)(*(int *)(iVar6 + 0x38) + 0x170);
    iVar2 = *(int *)(*(int *)(iVar6 + 0x38) + 0x19c);
    fVar13 = *(float *)(iVar2 + 4 + iVar8 * 8);
    fVar1 = *(float *)(iVar2 + iVar8 * 8);
    local_280 = 1.0 / (*(float *)(iVar6 + 0x54) * fVar1 + *(float *)(iVar6 + 100) * fVar13 +
                      *(float *)(iVar6 + 0x84));
    local_250 = (*(float *)(iVar6 + 0x48) * fVar1 + *(float *)(iVar6 + 0x58) * fVar13 +
                *(float *)(iVar6 + 0x78)) * local_280;
    local_280 = (*(float *)(iVar6 + 0x4c) * fVar1 + *(float *)(iVar6 + 0x5c) * fVar13 +
                *(float *)(iVar6 + 0x7c)) * local_280;
    iVar6 = FUN_004ec400(pcVar5);
    if (iVar6 != 0) {
      piVar3 = *(int **)(*(int *)&this->field_0x16c + 0x134);
      (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
      local_24c = 0;
      uStack_248 = 0;
      local_244 = 0;
      uStack_240 = 0;
      local_1f8 = 0;
      uStack_1f4 = 0;
      local_1f0 = 0;
      puVar7 = local_d4;
      puVar11 = local_1d4;
      iVar6 = 0x10;
      do {
        *puVar11 = 0;
        *puVar7 = 0;
        puVar11[1] = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        puVar11 = puVar11 + 2;
        puVar7 = (undefined8 *)((int)puVar7 + 0xc);
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
      FUN_00447d10();
      FUN_00448f10(local_1d4,local_d4);
      local_1fc = 0x3f800000;
      local_1f8 = 0x3f800000;
      uStack_1f4 = 0x3f800000;
      local_1f0 = 0x3f800000;
      FUN_00448280(&local_1fc);
      local_288 = (float)(*(int *)&this->field_0x16c + 0x800a1c);
      iVar6 = FUN_0062b510(&local_244);
      local_278 = (float *)FUN_0062b510(&uStack_1f4);
      uVar21 = 0;
      uVar18 = 0x3d75c28f;
      pcVar5 = local_284;
      fVar12 = (float10)FUN_006291d0(local_288,0x3d75c28f,local_284,0);
      fVar13 = (float)fVar12 * 0.5 + *(float *)(iVar6 + 4) + local_280;
      iVar6 = (int)local_288;
      local_288 = (float)fVar12;
      fVar12 = (float10)FUN_0062f600(fVar13);
      this = local_27c;
      local_280 = (float)fVar12;
      FUN_004758c0(local_280 * 0.5 + local_250 + *local_278,fVar13,iVar6,uVar18,pcVar5,uVar21);
      pcVar5 = local_284;
    }
    piVar3 = *(int **)(*(int *)&this->field_0x16c + 0x134);
    (**(code **)(*piVar3 + 0xe4))(piVar3,7,0);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (*(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> **)
                &this->field_0x16c,pcVar5,0xf,0xb4,1.0,300,'\x01','\0');
  }
  local_338._0_4_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_328[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_2d0);
  local_8 = 0;
  local_278 = (float *)0x1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_338,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_320);
  local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_338 + *(int *)(local_338._0_4_ + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&iStack_33c + *(int *)(local_338._0_4_ + 4)) = *(int *)(local_338._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_320);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_320[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_2e8 = 0;
  local_2e4 = 0;
  local_8 = 3;
  FUN_0040e6f0(local_328,L"Identification");
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 4;
  uVar18 = FUN_00411bc0(local_224);
  local_8._0_1_ = 5;
  local_1fc = 0;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_24c = 0;
  uStack_248 = 0;
  local_244 = 0;
  uStack_240 = 0x3f800000;
  local_25c = 0x3f800000;
  local_258 = 0x3f800000;
  local_254 = 1.0;
  local_250 = 1.0;
  FUN_00639b30(&local_1ec,uVar18,0,0,0x41700000,0x41c80000,0x41400000,0x40400000,&local_25c,
               &local_24c,&local_1fc,0,0xbf800000,1);
  if (7 < local_210) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_224[0]);
  }
  local_210 = 7;
  local_214 = 0;
  local_224[0] = (void *)((uint)local_224[0] & 0xffff0000);
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
  uVar18 = FUN_00411bc0(local_224);
  local_1fc = 0;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_24c = 0;
  uStack_248 = 0;
  local_244 = 0;
  uStack_240 = 0;
  local_25c = 0x3f800000;
  local_258 = 0x3f800000;
  local_254 = 1.0;
  local_250 = 1.0;
  local_8._0_1_ = 7;
  FUN_00639b30(&local_1ec,uVar18,0,0,0x41700000,0x41c80000,0x41400000,0,&local_25c,&local_24c,
               &local_1fc,0,0xbf800000,1);
  if (7 < local_210) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_224[0]);
  }
  local_210 = 7;
  local_214 = 0;
  local_224[0] = (void *)((uint)local_224[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 8;
  if ((local_2e4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*local_314);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (local_320,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            (local_320,(wchar_t *)0x0,(wchar_t *)0x0);
  local_2e4 = local_2e4 & 0xfffffffe;
  puVar10 = &local_1ec;
  if (7 < local_1d8) {
    puVar10 = local_1ec;
  }
  local_2e8 = 0;
  FUN_0040f3c0(puVar10,local_1dc,local_2e4);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040e440(local_328,"Identify");
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 9;
  uVar18 = FUN_00411bc0(local_224);
  uVar22 = 1;
  local_1fc = 0;
  uVar20 = 0xbf800000;
  uVar19 = 1;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_24c = 0;
  uStack_248 = 0;
  local_244 = 0;
  uStack_240 = 0x3f800000;
  local_25c = 0x3f800000;
  local_258 = 0x3f800000;
  local_254 = 1.0;
  local_250 = 1.0;
  puVar10 = &local_1fc;
  puVar17 = &local_24c;
  puVar15 = &local_25c;
  uVar14 = 0x40400000;
  local_8._0_1_ = 10;
  uVar21 = 0x41400000;
  fVar12 = (float10)FUN_00627ce0(0x41400000,0x40400000,puVar15,puVar17,puVar10,1,0xbf800000,1);
  local_278 = (float *)(float)fVar12;
  fVar13 = (float)local_278 - 20.0;
  fVar12 = (float10)FUN_00627d50(fVar13);
  local_278 = (float *)(float)fVar12;
  FUN_00639b30(&local_1ec,uVar18,0,0,(float)local_278 / 3.0,fVar13,uVar21,uVar14,puVar15,puVar17,
               puVar10,uVar19,uVar20,uVar22);
  if (7 < local_210) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_224[0]);
  }
  local_210 = 7;
  local_214 = 0;
  local_224[0] = (void *)((uint)local_224[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  if (local_284 == (char *)0x0) {
    local_1fc = 0x3f333333;
    local_1f8 = 0x3f333333;
    uStack_1f4 = 0x3f333333;
    local_1f0 = 0x3f800000;
    local_27c = (EnchantWidget *)&local_1fc;
  }
  else {
    cVar4 = FUN_00450ab0();
    uStack_248 = 0x3f800000;
    local_244 = 0x3f800000;
    uStack_240 = 0x3f800000;
    local_24c = 0;
    if (cVar4 == '\0') {
      local_24c = 0x3f800000;
    }
    local_25c = local_24c;
    local_258 = 0x3f800000;
    local_254 = 1.0;
    local_250 = 1.0;
    local_27c = (EnchantWidget *)&local_25c;
  }
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xb;
  uVar18 = FUN_00411bc0(local_23c);
  uVar22 = 1;
  local_20c = 0;
  uVar20 = 0xbf800000;
  uVar19 = 1;
  local_208 = 0;
  local_204 = 0;
  local_200 = 0;
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  puVar10 = &local_20c;
  puVar17 = &local_21c;
  local_8._0_1_ = 0xc;
  uVar14 = 0;
  uVar21 = 0x41400000;
  pEVar16 = local_27c;
  fVar12 = (float10)FUN_00627ce0(0x41400000,0,local_27c,puVar17,puVar10,1,0xbf800000,1);
  local_278 = (float *)(float)fVar12;
  fVar13 = (float)local_278 - 20.0;
  fVar12 = (float10)FUN_00627d50(fVar13);
  local_278 = (float *)(float)fVar12;
  FUN_00639b30(&local_1ec,uVar18,0,0,(float)local_278 / 3.0,fVar13,uVar21,uVar14,pEVar16,puVar17,
               puVar10,uVar19,uVar20,uVar22);
  if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_23c[0]);
  }
  local_228 = 7;
  local_22c = 0;
  local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
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
  if ((local_2e4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*local_314);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (local_320,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            (local_320,(wchar_t *)0x0,(wchar_t *)0x0);
  local_2e4 = local_2e4 & 0xfffffffe;
  puVar10 = &local_1ec;
  if (7 < local_1d8) {
    puVar10 = local_1ec;
  }
  local_2e8 = 0;
  FUN_0040f3c0(puVar10,local_1dc,local_2e4);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040e440(local_328,"Goodbye!");
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xe;
  uVar18 = FUN_00411bc0(local_23c);
  uVar22 = 1;
  local_21c = 0;
  uVar20 = 0xbf800000;
  uVar19 = 1;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_20c = 0;
  local_208 = 0;
  local_204 = 0;
  local_200 = 0x3f800000;
  local_1fc = 0x3f800000;
  local_1f8 = 0x3f800000;
  uStack_1f4 = 0x3f800000;
  local_1f0 = 0x3f800000;
  puVar10 = &local_21c;
  puVar17 = &local_20c;
  puVar15 = &local_1fc;
  uVar14 = 0x40400000;
  local_8._0_1_ = 0xf;
  uVar21 = 0x41400000;
  fVar12 = (float10)FUN_00627ce0(0x41400000,0x40400000,puVar15,puVar17,puVar10,1,0xbf800000,1);
  local_278 = (float *)(float)fVar12;
  fVar13 = (float)local_278 - 20.0;
  fVar12 = (float10)FUN_00627d50(fVar13);
  local_278 = (float *)(float)fVar12;
  FUN_00639b30(&local_1ec,uVar18,0,0,((float)local_278 * 2.0) / 3.0,fVar13,uVar21,uVar14,puVar15,
               puVar17,puVar10,uVar19,uVar20,uVar22);
  if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_23c[0]);
  }
  local_228 = 7;
  local_22c = 0;
  local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_006294d0(&local_254);
  fVar12 = (float10)FUN_00627ce0();
  local_278 = (float *)(float)fVar12;
  if ((float)local_278 - 30.0 < local_250) {
    fVar12 = (float10)FUN_00627ce0();
    local_278 = (float *)(float)fVar12;
    if (local_250 < (float)local_278) {
      fVar12 = (float10)FUN_00627d50();
      local_278 = (float *)(float)fVar12;
      if ((float)local_278 * 0.5 < local_254) {
        fVar12 = (float10)FUN_00627d50();
        local_278 = (float *)(float)fVar12;
        if (local_254 < (float)local_278) {
          local_21c = 0;
          local_218 = 0x3f800000;
          local_214 = 0x3f800000;
          local_210 = 0x3f800000;
          local_27c = (EnchantWidget *)&local_21c;
          goto LAB_0044f99d;
        }
      }
    }
  }
  local_20c = 0x3f800000;
  local_208 = 0x3f800000;
  local_204 = 0x3f800000;
  local_200 = 0x3f800000;
  local_27c = (EnchantWidget *)&local_20c;
LAB_0044f99d:
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0x10;
  uVar18 = FUN_00411bc0(local_23c);
  uVar22 = 1;
  local_1fc = 0;
  uVar20 = 0xbf800000;
  uVar19 = 1;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_24c = 0;
  uStack_248 = 0;
  local_244 = 0;
  uStack_240 = 0;
  puVar10 = &local_1fc;
  puVar17 = &local_24c;
  local_8._0_1_ = 0x11;
  uVar14 = 0;
  uVar21 = 0x41400000;
  pEVar16 = local_27c;
  fVar12 = (float10)FUN_00627ce0(0x41400000,0,local_27c,puVar17,puVar10,1,0xbf800000,1);
  local_278 = (float *)(float)fVar12;
  fVar13 = (float)local_278 - 20.0;
  fVar12 = (float10)FUN_00627d50(fVar13);
  local_278 = (float *)(float)fVar12;
  FUN_00639b30(&local_1ec,uVar18,0,0,((float)local_278 * 2.0) / 3.0,fVar13,uVar21,uVar14,pEVar16,
               puVar17,puVar10,uVar19,uVar20,uVar22);
  if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_23c[0]);
  }
  local_228 = 7;
  local_22c = 0;
  local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  if (local_284 != (char *)0x0) {
    iVar8 = FUN_00450960();
    iVar6 = 0;
    if (iVar8 != 0) {
      iVar6 = FUN_004c76e0();
      if (iVar6 / 2 < 1) {
        iVar6 = 1;
      }
      else {
        iVar6 = FUN_004c76e0();
        iVar6 = iVar6 / 2;
      }
    }
    local_280 = (float)((iVar6 / 100) / 100);
    local_250 = (float)((iVar6 / 100) % 100);
    fVar12 = (float10)FUN_00627ce0();
    local_278 = (float *)(float)fVar12;
    iVar8 = (int)((float)local_278 - 50.0);
    local_1d8 = 7;
    local_1dc = 0;
    local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
    FUN_0040f7a0(&PTR_006fccac,0);
    local_8._0_1_ = 0x12;
    FUN_0040b4e0();
    puVar10 = &local_1ec;
    if (7 < local_1d8) {
      puVar10 = local_1ec;
    }
    FUN_0040f3c0(puVar10,local_1dc,local_2e4);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    puVar23 = &DAT_006ffd80;
    pbVar9 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_328,iVar6 % 100);
    FUN_0040e440(pbVar9,puVar23);
    local_1d8 = 7;
    local_1dc = 0;
    local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
    FUN_0040f7a0(L"resource1.dat",0xd);
    local_8._0_1_ = 0x13;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0x3f800000;
    local_1fc = 0x3f800000;
    local_1f8 = 0x3f800000;
    uStack_1f4 = 0x3f800000;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x14;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x435c0000,(float)iVar8,0x41200000,0x40000000,&local_1fc,
                 &local_20c,&local_21c,2,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x15;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0;
    local_1fc = 0x3f4ccccd;
    local_1f8 = 0x3f000000;
    uStack_1f4 = 0;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x16;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x435c0000,(float)iVar8,0x41200000,0,&local_1fc,&local_20c,
                 &local_21c,2,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x17;
    FUN_0040b4e0();
    puVar10 = &local_1ec;
    if (7 < local_1d8) {
      puVar10 = local_1ec;
    }
    FUN_0040f3c0(puVar10,local_1dc,local_2e4);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    puVar23 = &DAT_006ffd84;
    pbVar9 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_328,(int)local_250);
    FUN_0040e440(pbVar9,puVar23);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x18;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0x3f800000;
    local_1fc = 0x3f800000;
    local_1f8 = 0x3f800000;
    uStack_1f4 = 0x3f800000;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x19;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x43340000,(float)iVar8,0x41200000,0x40000000,&local_1fc,
                 &local_20c,&local_21c,2,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1a;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0;
    local_1fc = 0x3f333333;
    local_1f8 = 0x3f333333;
    uStack_1f4 = 0x3f333333;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x1b;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x43340000,(float)iVar8,0x41200000,0,&local_1fc,&local_20c,
                 &local_21c,2,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x1c;
    FUN_0040b4e0();
    puVar10 = &local_1ec;
    if (7 < local_1d8) {
      puVar10 = local_1ec;
    }
    FUN_0040f3c0(puVar10,local_1dc,local_2e4);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    puVar23 = &DAT_006ffd88;
    pbVar9 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<
                       (local_328,(int)local_280);
    FUN_0040e440(pbVar9,puVar23);
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1d;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0x3f800000;
    local_1fc = 0x3f800000;
    local_1f8 = 0x3f800000;
    uStack_1f4 = 0x3f800000;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x1e;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x430c0000,(float)iVar8,0x41200000,0x40000000,&local_1fc,
                 &local_20c,&local_21c,2,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1f;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0;
    local_1fc = 0x3f800000;
    local_1f8 = 0x3f666666;
    uStack_1f4 = 0;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x20;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x430c0000,(float)iVar8,0x41200000,0,&local_1fc,&local_20c,
                 &local_21c,2,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(&PTR_006fccac);
    local_8._0_1_ = 0x21;
    FUN_0040b4e0();
    puVar10 = &local_1ec;
    if (7 < local_1d8) {
      puVar10 = local_1ec;
    }
    FUN_0040f3c0(puVar10,local_1dc,local_2e4);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040e440(local_328,"COST:");
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x22;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0x3f800000;
    local_1fc = 0x3f800000;
    local_1f8 = 0x3f800000;
    uStack_1f4 = 0x3f800000;
    local_1f0 = 0x3f800000;
    local_8._0_1_ = 0x23;
    FUN_00639b30(&local_1ec,uVar18,0,0,0x41700000,(float)iVar8,0x41200000,0x40000000,&local_1fc,
                 &local_20c,&local_21c,0,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    local_8._0_1_ = 3;
    if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_1ec);
    }
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x24;
    uVar18 = FUN_00411bc0(local_23c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_20c = 0;
    local_208 = 0;
    local_204 = 0;
    local_200 = 0;
    local_1e4 = 0x3f800000;
    local_1e0 = 0x3f800000;
    local_1dc = 0x3f800000;
    local_1d8 = 0x3f800000;
    local_8 = CONCAT31(local_8._1_3_,0x25);
    FUN_00639b30(local_274,uVar18,0,0,0x41700000,(float)iVar8,0x41200000,0,&local_1e4,&local_20c,
                 &local_21c,0,0xbf800000,1);
    if (7 < local_228) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_23c[0]);
    }
    local_228 = 7;
    local_22c = 0;
    local_23c[0] = (void *)((uint)local_23c[0] & 0xffff0000);
    if (7 < local_260) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_274[0]);
    }
  }
  local_228 = 7;
  local_22c = 0;
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             local_338);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* cube::EnchantWidget::vfunction11_for_NamedObject @ 00450b90  kind=game  attributed-by=rtti  size=84 */

void __thiscall cube::EnchantWidget::vfunction11_for_NamedObject(EnchantWidget *this)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (this->field218_0x170 != 0) {
    uVar4 = 1;
    uVar3 = 0x42480000;
    fVar1 = (float10)FUN_00627d50(0x42480000,1);
    fVar2 = (float10)FUN_0062f600();
    FUN_0062a650(((float)fVar1 - (float)fVar2) * 0.5,uVar3,uVar4);
  }
  return;
}


