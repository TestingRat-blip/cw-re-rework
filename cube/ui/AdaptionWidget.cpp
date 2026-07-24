// AdaptionWidget (ui) -- cube. 3 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "AdaptionWidget.h"

/* cube::AdaptionWidget::deleting_destructor_for_NamedObject @ 0040f8f0  kind=game  attributed-by=rtti  size=6438 */

void __thiscall cube::AdaptionWidget::deleting_destructor_for_NamedObject(AdaptionWidget *this)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  char cVar4;
  char *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  basic_ostream<wchar_t,struct_std::char_traits<wchar_t>_> *pbVar8;
  undefined4 *puVar9;
  undefined8 *puVar10;
  float10 fVar11;
  double dVar12;
  float fVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  AdaptionWidget *pAVar16;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined4 uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  char cVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  int iStack_454;
  undefined1 local_450 [16];
  basic_ostream<wchar_t,std::char_traits<wchar_t>_> local_440 [2];
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_> local_438 [3];
  undefined4 *local_42c;
  undefined4 local_400;
  uint local_3fc;
  basic_ios<wchar_t,std::char_traits<wchar_t>_> local_3e8 [6];
  char *local_3a0;
  undefined1 *local_39c;
  float local_398;
  AdaptionWidget *local_394;
  float *local_390;
  char local_38c [16];
  undefined2 local_37c;
  void *local_274 [5];
  uint local_260;
  void *local_25c [4];
  undefined4 local_24c;
  uint local_248;
  undefined4 local_244;
  undefined4 local_240;
  float local_23c;
  float local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  undefined4 local_228;
  void *local_224 [2];
  undefined4 local_21c;
  undefined4 local_218;
  undefined4 local_214;
  uint local_210;
  undefined4 local_20c;
  undefined4 uStack_208;
  undefined4 local_204;
  undefined4 uStack_200;
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
  puStack_c = &LAB_006e1c1e;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_390 = (float *)0x0;
  local_394 = this;
  pcVar5 = (char *)FUN_0040f570(local_14);
  local_3a0 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    iVar6 = *(int *)(this->field216_0x174 + 0x3c);
    *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 0;
  }
  else {
    iVar6 = this->offset_0x13c;
    iVar20 = *(int *)(*(int *)(iVar6 + 0x38) + 0x170);
    iVar2 = *(int *)(*(int *)(iVar6 + 0x38) + 0x19c);
    fVar13 = *(float *)(iVar2 + 4 + iVar20 * 8);
    fVar1 = *(float *)(iVar2 + iVar20 * 8);
    local_398 = 1.0 / (fVar1 * *(float *)(iVar6 + 0x54) + fVar13 * *(float *)(iVar6 + 100) +
                      *(float *)(iVar6 + 0x84));
    local_238 = local_398 *
                (fVar1 * *(float *)(iVar6 + 0x48) + fVar13 * *(float *)(iVar6 + 0x58) +
                *(float *)(iVar6 + 0x78));
    local_398 = local_398 *
                (fVar13 * *(float *)(iVar6 + 0x5c) + fVar1 * *(float *)(iVar6 + 0x4c) +
                *(float *)(iVar6 + 0x7c));
    iVar6 = FUN_004ec400(pcVar5);
    if (iVar6 != 0) {
      piVar3 = *(int **)&this->field214_0x16c[2].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                         .field_0x48;
      (**(code **)(*piVar3 + 0xe4))(piVar3,7,1);
      local_20c = 0;
      uStack_208 = 0;
      local_204 = 0;
      uStack_200 = 0;
      local_1f8 = 0;
      uStack_1f4 = 0;
      local_1f0 = 0;
      puVar7 = local_d4;
      puVar10 = local_1d4;
      iVar6 = 0x10;
      do {
        *puVar10 = 0;
        *puVar7 = 0;
        puVar10[1] = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        puVar10 = puVar10 + 2;
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
      local_39c = &this->field214_0x16c[0x12f80].
                   basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                   .field_0x8;
      iVar6 = FUN_0062b510(&local_204);
      local_390 = (float *)FUN_0062b510(&uStack_1f4);
      uVar24 = 0;
      uVar19 = 0x3d75c28f;
      pcVar5 = local_3a0;
      fVar11 = (float10)FUN_006291d0(local_39c,0x3d75c28f,local_3a0,0);
      fVar13 = (float)fVar11 * 0.5 + *(float *)(iVar6 + 4) + local_398;
      puVar18 = local_39c;
      local_39c = (undefined1 *)(float)fVar11;
      fVar11 = (float10)FUN_0062f600(fVar13);
      this = local_394;
      local_398 = (float)fVar11;
      FUN_004758c0(local_398 * 0.5 + local_238 + *local_390,fVar13,puVar18,uVar19,pcVar5,uVar24);
      pcVar5 = local_3a0;
    }
    piVar3 = *(int **)&this->field214_0x16c[2].
                       basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                       .field_0x48;
    (**(code **)(*piVar3 + 0xe4))(piVar3,7,0);
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (this->field214_0x16c,pcVar5,0xf,0xb4,1.0,300,'\x01','\0');
    FUN_0040ee70(pcVar5);
    cVar23 = '\0';
    local_37c = *(undefined2 *)
                 (*(int *)&this->field214_0x16c[0x12f78].
                           basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                           .field_0x1c + 400);
    cVar4 = '\0';
    iVar20 = 300;
    fVar13 = 1.0;
    iVar6 = 0xb4;
    fVar11 = (float10)FUN_00627d50();
    local_390 = (float *)(float)fVar11;
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (this->field214_0x16c,local_38c,(int)((float)local_390 * 0.5 + 50.0),iVar6,fVar13,
               iVar20,cVar4,cVar23);
    iVar6 = *(int *)(this->field216_0x174 + 0x3c);
    *(undefined4 *)(*(int *)(iVar6 + 0x94) + *(int *)(iVar6 + 0x68) * 4) = 1;
  }
  local_450._0_4_ =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  local_440[0].vbtablePtr =
       (basic_ostream<wchar_t,std::char_traits<wchar_t>_>_vbtable *)&DAT_006fcd08;
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::basic_ios<wchar_t,std::char_traits<wchar_t>_>
            (local_3e8);
  local_8 = 0;
  local_390 = (float *)0x1;
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)local_450,
             (basic_streambuf<wchar_t,std::char_traits<wchar_t>_> *)local_438);
  local_8 = 1;
                    /* inlined destructor:
                       std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vftable **)
   (local_450 + *(int *)(local_450._0_4_ + 4)) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vftable
  ;
  *(int *)((int)&iStack_454 + *(int *)(local_450._0_4_ + 4)) = *(int *)(local_450._0_4_ + 4) + -0x68
  ;
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  basic_streambuf<wchar_t,std::char_traits<wchar_t>_>(local_438);
                    /* inlined destructor:
                       std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::~basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        */
  local_438[0] = (basic_streambuf<wchar_t,std::char_traits<wchar_t>_>)
                 &std::basic_stringbuf<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
                  vftable;
  local_400 = 0;
  local_3fc = 0;
  local_8 = 3;
  FUN_0040e6f0(local_440,L"Adaption");
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec._2_2_ << 0x10);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 4;
  uVar19 = FUN_00411bc0(local_224);
  local_8._0_1_ = 5;
  local_1fc = 0;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  uStack_200 = 0x3f800000;
  local_244 = 0x3f800000;
  local_240 = 0x3f800000;
  local_23c = 1.0;
  local_238 = 1.0;
  FUN_00639b30(&local_1ec,uVar19,0,0,0x41700000,0x41c80000,0x41400000,0x40400000,&local_244,
               &local_20c,&local_1fc,0,0xbf800000,1);
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
  uVar19 = FUN_00411bc0(local_224);
  local_1fc = 0;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  uStack_200 = 0;
  local_244 = 0x3f800000;
  local_240 = 0x3f800000;
  local_23c = 1.0;
  local_238 = 1.0;
  local_8._0_1_ = 7;
  FUN_00639b30(&local_1ec,uVar19,0,0,0x41700000,0x41c80000,0x41400000,0,&local_244,&local_20c,
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
  if ((local_3fc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*local_42c);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (local_438,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            (local_438,(wchar_t *)0x0,(wchar_t *)0x0);
  local_3fc = local_3fc & 0xfffffffe;
  puVar9 = &local_1ec;
  if (7 < local_1d8) {
    puVar9 = local_1ec;
  }
  local_400 = 0;
  FUN_0040f3c0(puVar9,local_1dc,local_3fc);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040e440(local_440,"Adapt");
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 9;
  uVar19 = FUN_00411bc0(local_224);
  uVar25 = 1;
  local_1fc = 0;
  uVar22 = 0xbf800000;
  uVar21 = 1;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  uStack_200 = 0x3f800000;
  local_244 = 0x3f800000;
  local_240 = 0x3f800000;
  local_23c = 1.0;
  local_238 = 1.0;
  puVar9 = &local_1fc;
  puVar17 = &local_20c;
  puVar15 = &local_244;
  uVar14 = 0x40400000;
  local_8._0_1_ = 10;
  uVar24 = 0x41400000;
  fVar11 = (float10)FUN_00627ce0(0x41400000,0x40400000,puVar15,puVar17,puVar9,1,0xbf800000,1);
  local_390 = (float *)(float)fVar11;
  fVar13 = (float)local_390 - 20.0;
  fVar11 = (float10)FUN_00627d50(fVar13);
  local_390 = (float *)(float)fVar11;
  FUN_00639b30(&local_1ec,uVar19,0,0,(float)local_390 / 3.0,fVar13,uVar24,uVar14,puVar15,puVar17,
               puVar9,uVar21,uVar22,uVar25);
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
  if (local_3a0 == (char *)0x0) {
    local_1fc = 0x3f333333;
    local_1f8 = 0x3f333333;
    uStack_1f4 = 0x3f333333;
    local_1f0 = 0x3f800000;
    local_394 = (AdaptionWidget *)&local_1fc;
  }
  else {
    cVar4 = FUN_00411340();
    uStack_208 = 0x3f800000;
    local_204 = 0x3f800000;
    uStack_200 = 0x3f800000;
    local_20c = 0;
    if (cVar4 == '\0') {
      local_20c = 0x3f800000;
    }
    local_244 = local_20c;
    local_240 = 0x3f800000;
    local_23c = 1.0;
    local_238 = 1.0;
    local_394 = (AdaptionWidget *)&local_244;
  }
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xb;
  uVar19 = FUN_00411bc0(local_25c);
  uVar25 = 1;
  local_234 = 0;
  uVar22 = 0xbf800000;
  uVar21 = 1;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  puVar9 = &local_234;
  puVar17 = &local_21c;
  local_8._0_1_ = 0xc;
  uVar14 = 0;
  uVar24 = 0x41400000;
  pAVar16 = local_394;
  fVar11 = (float10)FUN_00627ce0(0x41400000,0,local_394,puVar17,puVar9,1,0xbf800000,1);
  local_390 = (float *)(float)fVar11;
  fVar13 = (float)local_390 - 20.0;
  fVar11 = (float10)FUN_00627d50(fVar13);
  local_390 = (float *)(float)fVar11;
  FUN_00639b30(&local_1ec,uVar19,0,0,(float)local_390 / 3.0,fVar13,uVar24,uVar14,pAVar16,puVar17,
               puVar9,uVar21,uVar22,uVar25);
  if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_25c[0]);
  }
  local_248 = 7;
  local_24c = 0;
  local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
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
  if ((local_3fc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*local_42c);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (local_438,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            (local_438,(wchar_t *)0x0,(wchar_t *)0x0);
  local_3fc = local_3fc & 0xfffffffe;
  puVar9 = &local_1ec;
  if (7 < local_1d8) {
    puVar9 = local_1ec;
  }
  local_400 = 0;
  FUN_0040f3c0(puVar9,local_1dc,local_3fc);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040e440(local_440,"Goodbye!");
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0xe;
  uVar19 = FUN_00411bc0(local_25c);
  uVar25 = 1;
  local_21c = 0;
  uVar22 = 0xbf800000;
  uVar21 = 1;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0x3f800000;
  local_1fc = 0x3f800000;
  local_1f8 = 0x3f800000;
  uStack_1f4 = 0x3f800000;
  local_1f0 = 0x3f800000;
  puVar9 = &local_21c;
  puVar17 = &local_234;
  puVar15 = &local_1fc;
  uVar14 = 0x40400000;
  local_8._0_1_ = 0xf;
  uVar24 = 0x41400000;
  fVar11 = (float10)FUN_00627ce0(0x41400000,0x40400000,puVar15,puVar17,puVar9,1,0xbf800000,1);
  local_390 = (float *)(float)fVar11;
  fVar13 = (float)local_390 - 20.0;
  fVar11 = (float10)FUN_00627d50(fVar13);
  local_390 = (float *)(float)fVar11;
  FUN_00639b30(&local_1ec,uVar19,0,0,((float)local_390 * 2.0) / 3.0,fVar13,uVar24,uVar14,puVar15,
               puVar17,puVar9,uVar21,uVar22,uVar25);
  if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_25c[0]);
  }
  local_248 = 7;
  local_24c = 0;
  local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_006294d0(&local_23c);
  fVar11 = (float10)FUN_00627ce0();
  local_390 = (float *)(float)fVar11;
  if ((float)local_390 - 30.0 < local_238) {
    fVar11 = (float10)FUN_00627ce0();
    local_390 = (float *)(float)fVar11;
    if (local_238 < (float)local_390) {
      fVar11 = (float10)FUN_00627d50();
      local_390 = (float *)(float)fVar11;
      if ((float)local_390 * 0.5 < local_23c) {
        fVar11 = (float10)FUN_00627d50();
        local_390 = (float *)(float)fVar11;
        if (local_23c < (float)local_390) {
          local_21c = 0;
          local_218 = 0x3f800000;
          local_214 = 0x3f800000;
          local_210 = 0x3f800000;
          local_394 = (AdaptionWidget *)&local_21c;
          goto LAB_00410902;
        }
      }
    }
  }
  local_234 = 0x3f800000;
  local_230 = 0x3f800000;
  local_22c = 0x3f800000;
  local_228 = 0x3f800000;
  local_394 = (AdaptionWidget *)&local_234;
LAB_00410902:
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0x10;
  uVar19 = FUN_00411bc0(local_25c);
  uVar25 = 1;
  local_1fc = 0;
  uVar22 = 0xbf800000;
  uVar21 = 1;
  local_1f8 = 0;
  uStack_1f4 = 0;
  local_1f0 = 0;
  local_20c = 0;
  uStack_208 = 0;
  local_204 = 0;
  uStack_200 = 0;
  puVar9 = &local_1fc;
  puVar17 = &local_20c;
  local_8._0_1_ = 0x11;
  uVar14 = 0;
  uVar24 = 0x41400000;
  pAVar16 = local_394;
  fVar11 = (float10)FUN_00627ce0(0x41400000,0,local_394,puVar17,puVar9,1,0xbf800000,1);
  local_390 = (float *)(float)fVar11;
  fVar13 = (float)local_390 - 20.0;
  fVar11 = (float10)FUN_00627d50(fVar13);
  local_390 = (float *)(float)fVar11;
  FUN_00639b30(&local_1ec,uVar19,0,0,((float)local_390 * 2.0) / 3.0,fVar13,uVar24,uVar14,pAVar16,
               puVar17,puVar9,uVar21,uVar22,uVar25);
  if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_25c[0]);
  }
  local_248 = 7;
  local_24c = 0;
  local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  fVar11 = (float10)FUN_00627ce0();
  local_390 = (float *)(float)fVar11;
  fVar13 = (float)local_390 - 50.0;
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  local_238 = (float)(int)fVar13;
  FUN_0040f7a0(&PTR_006fccac,0);
  local_8._0_1_ = 0x12;
  if ((local_3fc & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*local_42c);
  }
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setg
            (local_438,(wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0);
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::setp
            (local_438,(wchar_t *)0x0,(wchar_t *)0x0);
  local_3fc = local_3fc & 0xfffffffe;
  puVar9 = &local_1ec;
  if (7 < local_1d8) {
    puVar9 = local_1ec;
  }
  local_400 = 0;
  FUN_0040f3c0(puVar9,local_1dc,local_3fc);
  local_8 = CONCAT31(local_8._1_3_,3);
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  iVar6 = FUN_0040f570();
  iVar20 = 0;
  fVar13 = (float)(int)fVar13;
  if (iVar6 != 0) {
    iVar6 = (int)*(short *)(iVar6 + 0x10);
    local_390 = *(float **)
                 &this->field214_0x16c[0x12f78].
                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                  .field_0x1c;
    fVar13 = local_238;
    if (iVar6 < *(int *)((int)local_390 + 400)) {
      dVar12 = 2.0;
      libm_sse2_pow_precise();
      do {
        iVar6 = iVar6 + 1;
        iVar20 = (int)((float)iVar20 + (float)dVar12 * 2.0);
        fVar13 = local_238;
      } while (iVar6 < *(int *)((int)local_390 + 400));
    }
  }
  pcVar5 = " Platinum Coins ";
  pbVar8 = std::basic_ostream<wchar_t,std::char_traits<wchar_t>_>::operator<<(local_440,iVar20);
  FUN_0040e440(pbVar8,pcVar5);
  local_1d8 = 7;
  local_1dc = 0;
  local_1ec = (undefined4 *)((uint)local_1ec & 0xffff0000);
  FUN_0040f7a0(L"resource1.dat",0xd);
  local_8._0_1_ = 0x13;
  uVar19 = FUN_00411bc0(local_25c);
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0x3f800000;
  local_1fc = 0x3f800000;
  local_1f8 = 0x3f800000;
  uStack_1f4 = 0x3f800000;
  local_1f0 = 0x3f800000;
  local_8._0_1_ = 0x14;
  FUN_00639b30(&local_1ec,uVar19,0,0,0x435c0000,(float)(int)fVar13,0x41200000,0x40200000,&local_1fc,
               &local_234,&local_21c,2,0xbf800000,1);
  if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_25c[0]);
  }
  local_248 = 7;
  local_24c = 0;
  local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x15;
  uVar19 = FUN_00411bc0(local_25c);
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0;
  local_1fc = 0x3f000000;
  local_1f8 = 0x3e4ccccd;
  uStack_1f4 = 0x3f800000;
  local_1f0 = 0x3f800000;
  local_8._0_1_ = 0x16;
  FUN_00639b30(&local_1ec,uVar19,0,0,0x435c0000,(float)(int)fVar13,0x41200000,0,&local_1fc,
               &local_234,&local_21c,2,0xbf800000,1);
  if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_25c[0]);
  }
  local_248 = 7;
  local_24c = 0;
  local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040eb60(&PTR_006fccac);
  local_8._0_1_ = 0x17;
  FUN_0040b4e0();
  puVar9 = &local_1ec;
  if (7 < local_1d8) {
    puVar9 = local_1ec;
  }
  FUN_0040f3c0(puVar9,local_1dc,local_3fc);
  local_8._0_1_ = 3;
  if (7 < local_1d8) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_1ec);
  }
  FUN_0040e440(local_440,"COST:");
  FUN_0040eb60(L"resource1.dat");
  local_8._0_1_ = 0x18;
  uVar19 = FUN_00411bc0(local_25c);
  local_21c = 0;
  local_218 = 0;
  local_214 = 0;
  local_210 = 0;
  local_234 = 0;
  local_230 = 0;
  local_22c = 0;
  local_228 = 0x3f800000;
  local_1fc = 0x3f800000;
  local_1f8 = 0x3f800000;
  uStack_1f4 = 0x3f800000;
  local_1f0 = 0x3f800000;
  local_8._0_1_ = 0x19;
  FUN_00639b30(&local_1ec,uVar19,0,0,0x41700000,(float)(int)fVar13,0x41200000,0x40000000,&local_1fc,
               &local_234,&local_21c,0,0xbf800000,1);
  if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_25c[0]);
  }
  local_248 = 7;
  local_24c = 0;
  local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
  local_8._0_1_ = 3;
  if (local_1d8 < 8) {
    FUN_0040eb60(L"resource1.dat");
    local_8._0_1_ = 0x1a;
    uVar19 = FUN_00411bc0(local_25c);
    local_21c = 0;
    local_218 = 0;
    local_214 = 0;
    local_210 = 0;
    local_234 = 0;
    local_230 = 0;
    local_22c = 0;
    local_228 = 0;
    local_1e4 = 0x3f800000;
    local_1e0 = 0x3f800000;
    local_1dc = 0x3f800000;
    local_1d8 = 0x3f800000;
    local_8 = CONCAT31(local_8._1_3_,0x1b);
    FUN_00639b30(local_274,uVar19,0,0,0x41700000,(float)(int)fVar13,0x41200000,0,&local_1e4,
                 &local_234,&local_21c,0,0xbf800000,1);
    if (7 < local_248) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_25c[0]);
    }
    local_248 = 7;
    local_24c = 0;
    local_25c[0] = (void *)((uint)local_25c[0] & 0xffff0000);
    if (local_260 < 8) {
      std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
      basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
                 local_450);
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(local_274[0]);
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(local_1ec);
}


/* cube::AdaptionWidget::vfunction11_for_NamedObject @ 00411410  kind=game  attributed-by=rtti  size=155 */

void __thiscall cube::AdaptionWidget::vfunction11_for_NamedObject(AdaptionWidget *this)

{
  float10 fVar1;
  float10 fVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  if (this->field215_0x170 != 0) {
    uVar4 = 1;
    uVar3 = 0x42480000;
    fVar1 = (float10)FUN_00627d50(0x42480000,1);
    fVar2 = (float10)FUN_0062f600();
    FUN_0062a650(((float)fVar1 - (float)fVar2) * 0.5,uVar3,uVar4);
  }
  if (this->field216_0x174 != 0) {
    uVar4 = 1;
    uVar3 = 0x43660000;
    fVar1 = (float10)FUN_00627d50(0x43660000,1);
    FUN_0062a650((float)fVar1 * 0.5 - 10.0,uVar3,uVar4);
  }
  return;
}


/* cube::AdaptionWidget::deleting_destructor_for_NamedObject @ 00428a30  kind=game  attributed-by=rtti  size=30 */

Widget * __thiscall
cube::AdaptionWidget::deleting_destructor_for_NamedObject(AdaptionWidget *this,byte param_1)

{
  plasma::Widget::~Widget((Widget *)this);
  if ((param_1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(this);
  }
  return (Widget *)this;
}


