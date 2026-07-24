// indirect_dispatch_target_00 (game_misc) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "indirect_dispatch_target_00.h"

/* FUN_00412810 @ 00412810  kind=gamemisc  attributed-by=role:dispatch-target  size=63 */

void FUN_00412810(float param_1)

{
  float *in_ECX;
  
  *in_ECX = *in_ECX * param_1;
  in_ECX[1] = param_1 * in_ECX[1];
  in_ECX[2] = in_ECX[2] * param_1;
  in_ECX[3] = param_1 * in_ECX[3];
  return;
}


/* FUN_0046b8be @ 0046b8be  kind=gamemisc  attributed-by=role:dispatch-target  size=566 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0046b8be(void *this)

{
  longlong lVar1;
  undefined4 *puVar2;
  _Container_base0 *p_Var3;
  bool bVar4;
  int *piVar5;
  char cVar6;
  DWORD DVar7;
  int iVar8;
  basic_ostream<char,std::char_traits<char>_> *this_00;
  int *piVar9;
  void *pvVar10;
  undefined4 *puVar11;
  SOCKET SVar12;
  int *piVar13;
  undefined4 uVar14;
  int iVar15;
  int *unaff_EBX;
  Creature *pCVar16;
  _Container_base0 *this_01;
  int unaff_EBP;
  int iVar17;
  char *pcVar18;
  Creature *pCVar19;
  
code_r0x0046b8be:
  iVar17 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x120c) = 0;
  SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
  iVar17 = 4;
  pcVar18 = (char *)(unaff_EBP + -0x120c);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  do {
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) {
        cVar6 = '\x01';
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        goto LAB_0046d0e3;
      }
      break;
    }
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
  } while (0 < iVar17);
  *(basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_vbtable **)
   (unaff_EBP + -0x1424) =
       &std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::vbtable
  ;
  *(undefined **)(unaff_EBP + -0x1414) = &DAT_006fcd08;
  std::basic_ios<char,std::char_traits<char>_>::basic_ios<char,std::char_traits<char>_>
            ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x13bc));
  *(uint *)(unaff_EBP + -0x1260) = *(uint *)(unaff_EBP + -0x1260) | 1;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  std::basic_iostream<char,std::char_traits<char>_>::basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0x1424),
             (basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP + -0x140c));
  *(undefined4 *)(unaff_EBP + -4) = 3;
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (unaff_EBP + -0x1424 + *(int *)(*(int *)(unaff_EBP + -0x1424) + 4)) =
       &std::basic_stringstream<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  iVar17 = *(int *)(*(int *)(unaff_EBP + -0x1424) + 4);
  *(int *)(unaff_EBP + -0x1428 + iVar17) = iVar17 + -0x68;
  std::basic_streambuf<char,std::char_traits<char>_>::basic_streambuf<char,std::char_traits<char>_>
            ((basic_streambuf<char,std::char_traits<char>_> *)(unaff_EBP + -0x140c));
                    /* inlined constructor or destructor (approx location) for
                       std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_> */
  *(basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>_vftable **)
   (unaff_EBP + -0x140c) =
       &std::basic_stringbuf<char,std::char_traits<char>,std::allocator<char>_>::vftable;
  *(undefined4 *)(unaff_EBP + -0x13d4) = 0;
  *(undefined4 *)(unaff_EBP + -0x13d0) = 0;
  iVar17 = *(int *)(unaff_EBP + -0x120c);
  *(undefined1 *)(unaff_EBP + -4) = 5;
  this_00 = (basic_ostream<char,std::char_traits<char>_> *)
            FUN_00449150(unaff_EBP + -0x1414,"online_");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<(this_00,iVar17);
  FUN_0040e140(unaff_EBP + -0x68);
  iVar17 = *unaff_EBX;
  iVar8 = *(int *)(unaff_EBP + -0x120c);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  if (iVar8 == *(int *)(iVar17 + 0x800a50)) {
    cVar6 = FUN_004514b0(iVar17 + 0x800a54,unaff_EBP + -0x68);
    if (cVar6 == '\0') goto LAB_0046ba7b;
    iVar8 = *(int *)(unaff_EBP + -0x120c);
  }
  FUN_0046f620(iVar8,unaff_EBP + -0x68);
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x800884) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 1;
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x800880) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 0;
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x800888) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 0;
  iVar17 = *(int *)(*(int *)(*unaff_EBX + 0x80088c) + 0x3c);
  *(undefined4 *)(*(int *)(iVar17 + 0x94) + *(int *)(iVar17 + 0x68) * 4) = 0;
LAB_0046ba7b:
  FUN_00403eb0();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00404420(unaff_EBP + -0x1424);
LAB_0046d0dd:
  cVar6 = *(char *)(unaff_EBP + -0x11d1);
LAB_0046d0e3:
  if ((*(char *)(*unaff_EBX + 0x800585) == '\0') || (cVar6 != '\0')) {
LAB_0046d0f2:
    timeEndPeriod(1);
    uVar14 = **(undefined4 **)(unaff_EBP + -0x11f4);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0067eb10(unaff_EBP + -0x1318,uVar14,*(undefined4 **)(unaff_EBP + -0x11f4));
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(unaff_EBP + -0x11f4));
  }
  iVar17 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x1220) = 0;
  SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
  iVar17 = 4;
  pcVar18 = (char *)(unaff_EBP + -0x1220);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  do {
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto LAB_0046d0f2;
      break;
    }
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
  } while (0 < iVar17);
  iVar17 = *(int *)(unaff_EBP + -0x1220);
  if (iVar17 == 2) {
    DVar7 = timeGetTime();
    FUN_00601cb0();
    if (*(int *)(unaff_EBP + -0x125c) != 0) {
      _DAT_0076b048 = DVar7 - *(int *)(unaff_EBP + -0x125c);
    }
    FUN_00601e90();
    iVar17 = *(int *)(unaff_EBP + -0x1220);
    *(DWORD *)(unaff_EBP + -0x125c) = DVar7;
  }
  switch(iVar17) {
  case 0:
    *(undefined4 *)(unaff_EBP + -0x1240) = 0;
    *(undefined4 *)(unaff_EBP + -0x123c) = 0;
    *(undefined4 *)(unaff_EBP + -0x1238) = 0;
    *(undefined4 *)(unaff_EBP + -0x1234) = 0;
    iVar17 = *unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x1228) = 0;
    SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
    *(undefined1 *)(unaff_EBP + -4) = 7;
    iVar17 = 4;
    pcVar18 = (char *)(unaff_EBP + -0x1228);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    goto code_r0x0046bb00;
  case 1:
    goto DAT_0046c296;
  case 2:
    *(undefined4 *)(unaff_EBP + -0x1270) = 0;
    puVar11 = (undefined4 *)FUN_0046d550(0,0);
    *(undefined4 **)(unaff_EBP + -0x1274) = puVar11;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00601cb0();
    iVar17 = *unaff_EBX;
    iVar8 = **(int **)(iVar17 + 0x2e8);
    *(int *)(unaff_EBP + -0x1230) = iVar8;
    if (iVar8 != *(int *)(iVar17 + 0x2e8)) {
      do {
        if (((*(int *)(iVar8 + 0x18) != 0) &&
            (*(int *)(iVar8 + 0x18) != *(int *)(iVar17 + 0x8006d0))) &&
           (piVar9 = (int *)FUN_00477d90(unaff_EBP + -0x132c,iVar8 + 0x10),
           *piVar9 == *(int *)(unaff_EBP + -0x11f4))) {
          FUN_004860b0(unaff_EBP + -0x1230);
        }
        FUN_005c3ea0();
        iVar17 = *unaff_EBX;
        iVar8 = *(int *)(unaff_EBP + -0x1230);
      } while (iVar8 != *(int *)(iVar17 + 0x2e8));
      puVar11 = *(undefined4 **)(unaff_EBP + -0x1274);
    }
    for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined4 *)*puVar2) {
      if (*(undefined4 **)(puVar2[2] + 0x18) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(puVar2[2] + 0x18))(1);
      }
      FUN_0043ede0(unaff_EBP + -0x1320,puVar2[2]);
    }
    FUN_00601e90();
    iVar17 = *(int *)(unaff_EBP + -0x11f4);
    pvVar10 = *(void **)(iVar17 + 4);
    if (*(char *)((int)pvVar10 + 0xd) != '\0') {
      *(int *)(iVar17 + 4) = iVar17;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      *(undefined4 *)*(undefined4 *)(unaff_EBP + -0x11f4) = *(undefined4 *)(unaff_EBP + -0x11f4);
      *(undefined4 *)(unaff_EBP + -0x1270) = 0;
      *(int *)(*(int *)(unaff_EBP + -0x11f4) + 8) = *(int *)(unaff_EBP + -0x11f4);
      *(undefined4 *)(unaff_EBP + -0x11f0) = 0;
      puVar2 = (undefined4 *)*puVar11;
      *puVar11 = puVar11;
      puVar11[1] = puVar11;
      if (puVar2 == puVar11) {
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar11);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar2);
    }
    FUN_0042ca80(*(undefined4 *)((int)pvVar10 + 8));
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar10);
  case 3:
    iVar17 = *unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x1224) = 0;
    SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
    iVar17 = 4;
    pcVar18 = (char *)(unaff_EBP + -0x1224);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      if (iVar17 < 1) goto code_r0x0046bfef;
    }
    if (iVar8 != -1) {
code_r0x0046bfef:
      if (0 < *(int *)(unaff_EBP + -0x1224)) {
        FUN_004593b0(*(int *)(unaff_EBP + -0x1224));
        iVar17 = *(int *)(unaff_EBP + -0x1258);
        uVar14 = *(undefined4 *)(*unaff_EBX + 0x8006cc);
        *(undefined1 *)(unaff_EBP + -4) = 10;
        iVar8 = FUN_00486b60(uVar14,iVar17,
                             (*(int *)(unaff_EBP + -0x1224) * 0x10 - *(int *)(unaff_EBP + -0x1224))
                             * 8,0);
        if (iVar8 != -1) {
          FUN_00601cb0();
          iVar8 = *unaff_EBX;
          iVar15 = **(int **)(iVar8 + 0x2f0);
          *(int *)(unaff_EBP + -0x1284) = iVar15;
          if (iVar15 != *(int *)(iVar8 + 0x2f0)) {
            do {
              puVar11 = *(undefined4 **)(iVar15 + 0x18);
              *puVar11 = 0;
              puVar11[1] = 0;
              FUN_005c3ea0();
              iVar15 = *(int *)(unaff_EBP + -0x1284);
            } while (iVar15 != *(int *)(*unaff_EBX + 0x2f0));
          }
          if (iVar17 != *(int *)(unaff_EBP + -0x1254)) {
            do {
              piVar9 = (int *)FUN_00468ad0(iVar17);
              if (*piVar9 == 0) {
                pvVar10 = operator_new(0xa0);
                *(void **)(unaff_EBP + -0x11d8) = pvVar10;
                *(undefined1 *)(unaff_EBP + -4) = 0xb;
                if (pvVar10 == (void *)0x0) {
                  uVar14 = 0;
                }
                else {
                  uVar14 = FUN_00466510();
                }
                *(undefined1 *)(unaff_EBP + -4) = 10;
                puVar11 = (undefined4 *)FUN_00468ad0(iVar17);
                *puVar11 = uVar14;
              }
              FUN_00468790(iVar17);
              iVar17 = iVar17 + 0x78;
            } while (iVar17 != *(int *)(unaff_EBP + -0x1254));
          }
          iVar15 = 0;
          *(undefined4 *)(unaff_EBP + -0x1244) = 0;
          puVar11 = (undefined4 *)FUN_0046d550(0,0);
          *(undefined4 **)(unaff_EBP + -0x1248) = puVar11;
          iVar17 = *unaff_EBX;
          *(undefined1 *)(unaff_EBP + -4) = 0xc;
          iVar8 = **(int **)(iVar17 + 0x2f0);
          *(int *)(unaff_EBP + -0x121c) = iVar8;
          if (iVar8 != *(int *)(iVar17 + 0x2f0)) {
            do {
              if (**(int **)(iVar8 + 0x18) == 0 && (*(int **)(iVar8 + 0x18))[1] == 0) {
                iVar17 = FUN_00583cb0(puVar11,puVar11[1],unaff_EBP + -0x121c);
                if (iVar15 == 0x15555554) goto code_r0x0046d173;
                puVar11[1] = iVar17;
                piVar9 = *(int **)(iVar17 + 4);
                iVar15 = iVar15 + 1;
                *(int *)(unaff_EBP + -0x1244) = iVar15;
                *piVar9 = iVar17;
              }
              FUN_005c3ea0();
              iVar8 = *(int *)(unaff_EBP + -0x121c);
            } while (iVar8 != *(int *)(*unaff_EBX + 0x2f0));
          }
          for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined4 *)*puVar2) {
            iVar17 = *(int *)(puVar2[2] + 0x18);
            *(int *)(unaff_EBP + -0x11d8) = iVar17;
            if (iVar17 != 0) {
              puVar11 = *(undefined4 **)(iVar17 + 0x78);
              FUN_0067eb10(unaff_EBP + -0x1340,*puVar11,puVar11);
                    /* WARNING: Subroutine does not return */
              operator_delete(*(void **)(iVar17 + 0x78));
            }
            FUN_0043ede0(unaff_EBP + -0x1328,puVar2[2]);
          }
          FUN_00601e90();
          puVar2 = (undefined4 *)*puVar11;
          *puVar11 = puVar11;
          puVar11[1] = puVar11;
          *(undefined4 *)(unaff_EBP + -0x1244) = 0;
          if (puVar2 == puVar11) {
                    /* WARNING: Subroutine does not return */
            operator_delete(puVar11);
          }
                    /* WARNING: Subroutine does not return */
          operator_delete(puVar2);
        }
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
      goto LAB_0046d0dd;
    }
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  case 4:
    iVar17 = *unaff_EBX;
    *(undefined4 *)(unaff_EBP + -0x122c) = 0;
    SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
    iVar17 = 4;
    pcVar18 = (char *)(unaff_EBP + -0x122c);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      if (iVar17 < 1) goto code_r0x0046cc4d;
    }
    if (iVar8 != -1) {
code_r0x0046cc4d:
      FUN_00459a90();
      *(undefined1 *)(unaff_EBP + -4) = 0x11;
      FUN_005870c0(*(undefined4 *)(unaff_EBP + -0x122c));
      iVar17 = *(int *)(unaff_EBP + -0x11ec);
      if (iVar17 == *(int *)(unaff_EBP + -0x11e8)) {
        iVar17 = 0;
      }
      iVar17 = FUN_00486b60(*(undefined4 *)(*unaff_EBX + 0x8006cc),iVar17,
                            *(undefined4 *)(unaff_EBP + -0x122c),0);
      if (iVar17 == -1) {
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
      else {
        FUN_004494b0();
        FUN_00466880();
        *(undefined1 *)(unaff_EBP + -4) = 0x12;
        FUN_00458310(unaff_EBP + -0x11ec,unaff_EBP + -0x12e8);
        FUN_004583f0(unaff_EBP + -0x11ec,unaff_EBP + -0x1300);
        FUN_00458860(unaff_EBP + -0x11ec,unaff_EBP + -0x12f0);
        FUN_00458940(unaff_EBP + -0x11ec,unaff_EBP + -0x12f8);
        FUN_004581d0(unaff_EBP + -0x11ec,unaff_EBP + -0x12e0);
        FUN_00458780(unaff_EBP + -0x11ec,unaff_EBP + -0x12d0);
        *(undefined4 *)(unaff_EBP + -0x126c) = 0;
        FUN_0044d620(unaff_EBP + -0x126c,4);
        iVar17 = *(int *)(unaff_EBP + -0x126c);
        if (0 < iVar17) {
          do {
            FUN_00465b30();
            *(undefined1 *)(unaff_EBP + -4) = 0x13;
            FUN_0044d620(unaff_EBP + -0x50,8);
            FUN_00458a20(unaff_EBP + -0x11ec,unaff_EBP + -0x48);
            FUN_00486330(unaff_EBP + -0x50);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00467a70();
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        *(undefined4 *)(unaff_EBP + -0x124c) = 0;
        FUN_0044d620(unaff_EBP + -0x124c,4);
        iVar17 = *(int *)(unaff_EBP + -0x124c);
        if (0 < iVar17) {
          do {
            *(undefined4 *)(unaff_EBP + -0x14) = 0;
            uVar14 = FUN_0046d590(0,0);
            *(undefined4 *)(unaff_EBP + -0x18) = uVar14;
            iVar15 = *(int *)(unaff_EBP + -0x11e8) - *(int *)(unaff_EBP + -0x11ec);
            iVar8 = *(int *)(unaff_EBP + -0x11e0) + 8;
            *(undefined1 *)(unaff_EBP + -4) = 0x14;
            if (iVar15 < iVar8) {
              *(int *)(unaff_EBP + -0x11e0) = iVar15;
            }
            else {
              puVar11 = (undefined4 *)
                        (*(int *)(unaff_EBP + -0x11e0) + *(int *)(unaff_EBP + -0x11ec));
              uVar14 = puVar11[1];
              *(undefined4 *)(unaff_EBP + -0x20) = *puVar11;
              *(undefined4 *)(unaff_EBP + -0x1c) = uVar14;
              *(int *)(unaff_EBP + -0x11e0) = iVar8;
            }
            FUN_00458100(unaff_EBP + -0x11ec,unaff_EBP + -0x18);
            FUN_0060aa70(unaff_EBP + -0x20);
            *(undefined1 *)(unaff_EBP + -4) = 0x12;
            FUN_00467a70();
            iVar17 = iVar17 + -1;
          } while (iVar17 != 0);
        }
        FUN_00458500(unaff_EBP + -0x11ec,unaff_EBP + -0x12c0);
        FUN_00457f70(unaff_EBP + -0x11ec,unaff_EBP + -0x12b8);
        FUN_00457f70(unaff_EBP + -0x11ec,unaff_EBP + -0x12b0);
        FUN_00458030(unaff_EBP + -0x11ec,unaff_EBP + -0x12a8);
        FUN_00458650(unaff_EBP + -0x11ec,unaff_EBP + -0x12a0);
        FUN_00601cb0();
        FUN_00457b30(unaff_EBP + -0x1308,*(undefined4 *)(*unaff_EBX + 0x800648),
                     **(undefined4 **)(unaff_EBP + -0x12e8),*(undefined4 **)(unaff_EBP + -0x12e8));
        FUN_00457b80(unaff_EBP + -0x1324,*(undefined4 *)(*unaff_EBX + 0x800630),
                     **(undefined4 **)(unaff_EBP + -0x1300),*(undefined4 **)(unaff_EBP + -0x1300));
        FUN_00457d10(unaff_EBP + -0x1304,*(undefined4 *)(*unaff_EBX + 0x800640),
                     **(undefined4 **)(unaff_EBP + -0x12f0),*(undefined4 **)(unaff_EBP + -0x12f0));
        FUN_00457d60(unaff_EBP + -0x1334,*(undefined4 *)(*unaff_EBX + 0x800638),
                     **(undefined4 **)(unaff_EBP + -0x12f8),*(undefined4 **)(unaff_EBP + -0x12f8));
        FUN_00457ae0(unaff_EBP + -0x133c,*(undefined4 *)(*unaff_EBX + 0x800650),
                     **(undefined4 **)(unaff_EBP + -0x12e0),*(undefined4 **)(unaff_EBP + -0x12e0));
        FUN_00457bd0(unaff_EBP + -0x1344,*(undefined4 *)(*unaff_EBX + 0x800658),
                     **(undefined4 **)(unaff_EBP + -0x12d8),*(undefined4 **)(unaff_EBP + -0x12d8));
        FUN_00457cc0(unaff_EBP + -0x134c,*(undefined4 *)(*unaff_EBX + 0x800660),
                     **(undefined4 **)(unaff_EBP + -0x12d0),*(undefined4 **)(unaff_EBP + -0x12d0));
        FUN_00457a90(unaff_EBP + -0x1354,*(undefined4 *)(*unaff_EBX + 0x800668),
                     **(undefined4 **)(unaff_EBP + -0x12c8),*(undefined4 **)(unaff_EBP + -0x12c8));
        FUN_00457c20(unaff_EBP + -0x135c,*(undefined4 *)(*unaff_EBX + 0x800670),
                     **(undefined4 **)(unaff_EBP + -0x12c0),*(undefined4 **)(unaff_EBP + -0x12c0));
        FUN_004579c0(unaff_EBP + -0x1310,*(undefined4 *)(*unaff_EBX + 0x800678),
                     **(undefined4 **)(unaff_EBP + -0x12b8),*(undefined4 **)(unaff_EBP + -0x12b8));
        FUN_004579c0(unaff_EBP + -0x1314,*(undefined4 *)(*unaff_EBX + 0x800680),
                     **(undefined4 **)(unaff_EBP + -0x12b0),*(undefined4 **)(unaff_EBP + -0x12b0));
        FUN_00457a10(unaff_EBP + -0x131c,*(undefined4 *)(*unaff_EBX + 0x800688),
                     **(undefined4 **)(unaff_EBP + -0x12a8),*(undefined4 **)(unaff_EBP + -0x12a8));
        FUN_00457c70(unaff_EBP + -0x1338,*(undefined4 *)(*unaff_EBX + 0x800690),
                     **(undefined4 **)(unaff_EBP + -0x12a0),*(undefined4 **)(unaff_EBP + -0x12a0));
        FUN_00601e90();
        FUN_00467c70();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        if (*(int *)(unaff_EBP + -0x11ec) != 0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)(unaff_EBP + -0x11ec));
                    /* WARNING: Subroutine does not return */
          operator_delete(*(void **)(unaff_EBP + -0x11ec));
        }
      }
      goto LAB_0046d0dd;
    }
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  case 5:
    iVar17 = 4;
    SVar12 = *(SOCKET *)(*unaff_EBX + 0x8006cc);
    pcVar18 = (char *)(unaff_EBP + -0x1298);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    do {
      iVar8 = recv(SVar12,pcVar18,iVar17,0);
      if (iVar8 < 1) {
        if (iVar8 == -1) {
          cVar6 = '\x01';
          *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
          goto LAB_0046d0e3;
        }
        break;
      }
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    } while (0 < iVar17);
    iVar17 = 4;
    SVar12 = *(SOCKET *)(*unaff_EBX + 0x8006cc);
    pcVar18 = (char *)(unaff_EBP + -0x1294);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
      iVar17 = iVar17 - iVar8;
      pcVar18 = pcVar18 + iVar8;
      SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      if (iVar17 < 1) goto code_r0x0046cbb1;
    }
    if (iVar8 != -1) goto code_r0x0046cbb1;
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  default:
    goto LAB_0046d0dd;
  case 10:
    *(undefined4 *)(unaff_EBP + -0x24) = 7;
    *(undefined4 *)(unaff_EBP + -0x28) = 0;
    *(undefined2 *)(unaff_EBP + -0x38) = 0;
    iVar17 = 8;
    iVar8 = *unaff_EBX;
    *(undefined1 *)(unaff_EBP + -4) = 0x10;
    SVar12 = *(SOCKET *)(iVar8 + 0x8006cc);
    pcVar18 = (char *)(unaff_EBP + -0x40);
    *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
    break;
  case 0xf:
    goto code_r0x0046b8be;
  }
  while( true ) {
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    if (iVar17 < 1) break;
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto code_r0x0046caa8;
      break;
    }
  }
  iVar17 = 4;
  SVar12 = *(SOCKET *)(*unaff_EBX + 0x8006cc);
  pcVar18 = (char *)(unaff_EBP + -0x1264);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  do {
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto code_r0x0046caa8;
      break;
    }
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
  } while (0 < iVar17);
  if (0 < *(int *)(unaff_EBP + -0x1264)) {
    FUN_004870c0(*(int *)(unaff_EBP + -0x1264),0);
    iVar17 = unaff_EBP + -0x38;
    if (7 < *(uint *)(unaff_EBP + -0x24)) {
      iVar17 = *(int *)(unaff_EBP + -0x38);
    }
    iVar17 = FUN_00486b60(*(undefined4 *)(*unaff_EBX + 0x8006cc),iVar17,
                          *(int *)(unaff_EBP + -0x1264) * 2,0);
    if (iVar17 != -1) {
      FUN_00601cb0();
      FUN_004861f0(unaff_EBP + -0x40);
      FUN_00601e90();
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00593e20();
      goto LAB_0046d0dd;
    }
code_r0x0046caa8:
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
  }
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00593e20();
  goto LAB_0046d0dd;
code_r0x0046cbb1:
  FUN_00601cb0();
  iVar17 = *unaff_EBX;
  uVar14 = *(undefined4 *)(unaff_EBP + -0x1294);
  *(undefined4 *)(iVar17 + 0x800444) = *(undefined4 *)(unaff_EBP + -0x1298);
  *(undefined4 *)(iVar17 + 0x800440) = uVar14;
  FUN_00601e90();
  goto LAB_0046d0dd;
DAT_0046c296:
  iVar17 = *unaff_EBX;
  *(undefined4 *)(unaff_EBP + -0x1218) = 0;
  SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
  iVar17 = 4;
  pcVar18 = (char *)(unaff_EBP + -0x1218);
  *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
  while (iVar8 = recv(SVar12,pcVar18,iVar17,0), 0 < iVar8) {
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    if (iVar17 < 1) goto code_r0x0046c2e0;
  }
  if (iVar8 == -1) {
    cVar6 = '\x01';
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    goto LAB_0046d0e3;
  }
code_r0x0046c2e0:
  FUN_00601cb0();
  FUN_0067e480();
  iVar17 = *unaff_EBX;
  iVar8 = **(int **)(iVar17 + 0x2e8);
  *(int *)(unaff_EBP + -0x1280) = iVar8;
  if (iVar8 != *(int *)(iVar17 + 0x2e8)) {
    do {
      if (*(int *)(iVar8 + 0x18) != 0) {
        iVar17 = *(int *)(iVar8 + 0x18) + 0x10;
        FUN_00468b70(*(int *)(iVar8 + 0x18) + 8);
        FUN_0044b040(iVar17);
      }
      FUN_005c3ea0();
      iVar8 = *(int *)(unaff_EBP + -0x1280);
    } while (iVar8 != *(int *)(*unaff_EBX + 0x2e8));
  }
  FUN_00601e90();
  *(undefined4 *)(unaff_EBP + -0x11fc) = 0;
  *(undefined4 *)(unaff_EBP + -0x11f8) = 0;
  uVar14 = FUN_0043c870();
  *(undefined4 *)(unaff_EBP + -0x11fc) = uVar14;
  *(undefined1 *)(unaff_EBP + -4) = 0xd;
  *(undefined4 *)(unaff_EBP + -0x1208) = 0;
  if (0 < *(int *)(unaff_EBP + -0x1218)) {
    do {
      iVar17 = *unaff_EBX;
      *(undefined8 *)(unaff_EBP + -0x1290) = 0;
      SVar12 = *(SOCKET *)(iVar17 + 0x8006cc);
      iVar17 = 8;
      pcVar18 = (char *)(unaff_EBP + -0x1290);
      *(SOCKET *)(unaff_EBP + -0x11d8) = SVar12;
      do {
        iVar8 = recv(SVar12,pcVar18,iVar17,0);
        if (iVar8 < 1) {
          if (iVar8 == -1) goto code_r0x0046c56c;
          break;
        }
        iVar17 = iVar17 - iVar8;
        pcVar18 = pcVar18 + iVar8;
        SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
      } while (0 < iVar17);
      uVar14 = FUN_00468b70(unaff_EBP + -0x1290);
      iVar17 = FUN_004cd3e0(*(undefined4 *)(*unaff_EBX + 0x8006cc),uVar14);
      if (iVar17 == -1) {
code_r0x0046c56c:
        uVar14 = **(undefined4 **)(unaff_EBP + -0x11fc);
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_0067eb10(unaff_EBP + -0x1350,uVar14,*(undefined4 **)(unaff_EBP + -0x11fc));
                    /* WARNING: Subroutine does not return */
        operator_delete(*(void **)(unaff_EBP + -0x11fc));
      }
      FUN_00453de0(unaff_EBP + -0x136c,0,unaff_EBP + -0x1290,DAT_0076b060);
      iVar17 = *(int *)(unaff_EBP + -0x1208) + 1;
      *(int *)(unaff_EBP + -0x1208) = iVar17;
    } while (iVar17 < *(int *)(unaff_EBP + -0x1218));
  }
  FUN_00453de0(unaff_EBP + -0x1374,0,*(int *)(*unaff_EBX + 0x8006d0) + 8,DAT_0076b060);
  *(undefined4 *)(unaff_EBP + -0x1210) = 0;
  puVar11 = (undefined4 *)FUN_0046d550(0,0);
  *(undefined4 **)(unaff_EBP + -0x1214) = puVar11;
  *(undefined1 *)(unaff_EBP + -4) = 0xe;
  FUN_00601cb0();
  iVar17 = *unaff_EBX;
  piVar9 = (int *)**(int **)(iVar17 + 0x2e8);
  *(int **)(unaff_EBP + -0x1208) = piVar9;
  if (piVar9 != *(int **)(iVar17 + 0x2e8)) {
    do {
      if ((piVar9[6] != 0) &&
         (piVar13 = (int *)FUN_00477d90(unaff_EBP + -0x1330,piVar9 + 4),
         *piVar13 == *(int *)(unaff_EBP + -0x11fc))) {
        iVar8 = FUN_00583cb0(puVar11,puVar11[1],unaff_EBP + -0x1208);
        iVar17 = *(int *)(unaff_EBP + -0x1210);
        if (iVar17 == 0x15555554) {
code_r0x0046d173:
                    /* WARNING: Subroutine does not return */
          std::_Xlength_error("list<T> too long");
        }
        puVar11[1] = iVar8;
        piVar13 = *(int **)(iVar8 + 4);
        *(int *)(unaff_EBP + -0x1210) = iVar17 + 1;
        *piVar13 = iVar8;
      }
      if (*(char *)((int)piVar9 + 0xd) == '\0') {
        piVar13 = (int *)piVar9[2];
        if (*(char *)((int)piVar13 + 0xd) == '\0') {
          cVar6 = *(char *)(*piVar13 + 0xd);
          piVar9 = piVar13;
          piVar13 = (int *)*piVar13;
          while (cVar6 == '\0') {
            cVar6 = *(char *)(*piVar13 + 0xd);
            piVar9 = piVar13;
            piVar13 = (int *)*piVar13;
          }
        }
        else {
          cVar6 = *(char *)(piVar9[1] + 0xd);
          piVar5 = (int *)piVar9[1];
          piVar13 = piVar9;
          while ((piVar9 = piVar5, cVar6 == '\0' && (piVar13 == (int *)piVar9[2]))) {
            cVar6 = *(char *)(piVar9[1] + 0xd);
            piVar5 = (int *)piVar9[1];
            piVar13 = piVar9;
          }
        }
        *(int **)(unaff_EBP + -0x1208) = piVar9;
      }
    } while (piVar9 != *(int **)(*unaff_EBX + 0x2e8));
  }
  for (puVar2 = (undefined4 *)*puVar11; puVar2 != puVar11; puVar2 = (undefined4 *)*puVar2) {
    if (*(undefined4 **)(puVar2[2] + 0x18) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)(puVar2[2] + 0x18))(1);
    }
    FUN_0043ede0(unaff_EBP + -0x1348,puVar2[2]);
  }
  piVar9 = (int *)**(int **)(unaff_EBP + -0x11fc);
  if (piVar9 == *(int **)(unaff_EBP + -0x11fc)) goto code_r0x0046c9c9;
  do {
    iVar17 = *unaff_EBX;
    FUN_00477d90(unaff_EBP + -0x1288,piVar9 + 4);
    if (*(int *)(unaff_EBP + -0x1288) == *(int *)(iVar17 + 0x2e8)) {
      pCVar19 = (Creature *)0x0;
    }
    else {
      pCVar19 = *(Creature **)(*(int *)(unaff_EBP + -0x1288) + 0x18);
    }
    bVar4 = false;
    if (pCVar19 == (Creature *)0x0) {
      pCVar19 = operator_new(0x1e60);
      *(Creature **)(unaff_EBP + -0x11d8) = pCVar19;
      *(undefined1 *)(unaff_EBP + -4) = 0xf;
      if (pCVar19 == (Creature *)0x0) {
        pCVar19 = (Creature *)0x0;
      }
      else {
        pCVar19 = cube::Creature::Creature(pCVar19,piVar9 + 4);
      }
      *(undefined1 *)(unaff_EBP + -4) = 0xe;
      puVar11 = (undefined4 *)FUN_00468ad0(piVar9 + 4);
      *puVar11 = pCVar19;
      bVar4 = true;
    }
    if (pCVar19 != *(Creature **)(*unaff_EBX + 0x8006d0)) {
      if (bVar4) {
code_r0x0046c7ab:
        pCVar19[0x139].Creature_data.offset_0x4 = 0;
        std::_Container_base0::_Orphan_all
                  ((_Container_base0 *)&pCVar19[0x11d].Creature_data.offset_0x8);
        p_Var3 = (_Container_base0 *)pCVar19[0x11e].vftablePtr;
        this_01 = (_Container_base0 *)pCVar19[0x11d].Creature_data.offset_0x8;
        *(_Container_base0 **)(unaff_EBP + -0x11d8) = p_Var3;
        for (; this_01 != p_Var3; this_01 = this_01 + 0xc) {
          if (*(int *)this_01 != 0) {
            std::_Container_base0::_Orphan_all(this_01);
                    /* WARNING: Subroutine does not return */
            operator_delete(*(void **)this_01);
          }
        }
        pCVar19[0x11e].vftablePtr = (Creature_vftable *)pCVar19[0x11d].Creature_data.offset_0x8;
        puVar11 = (undefined4 *)FUN_00468b70(piVar9 + 4);
        pCVar19[0x135].vftablePtr = (Creature_vftable *)*puVar11;
        *(undefined4 *)&pCVar19[0x135].Creature_data = puVar11[1];
        pCVar19[0x135].Creature_data.offset_0x4 = puVar11[2];
        pCVar19[0x135].Creature_data.offset_0x8 = puVar11[3];
        pCVar19[0x136].vftablePtr = (Creature_vftable *)puVar11[4];
        *(undefined4 *)&pCVar19[0x136].Creature_data = puVar11[5];
        iVar17 = FUN_00468b70(piVar9 + 4);
        *(undefined4 *)&pCVar19[0x137].Creature_data = *(undefined4 *)(iVar17 + 0x18);
        pCVar19[0x137].Creature_data.offset_0x4 = *(undefined4 *)(iVar17 + 0x1c);
        pCVar19[0x137].Creature_data.offset_0x8 = *(undefined4 *)(iVar17 + 0x20);
        pCVar19[0x133].Creature_data.offset_0x4 = pCVar19[0x135].vftablePtr;
        pCVar19[0x133].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x135].Creature_data;
        pCVar19[0x134].vftablePtr = (Creature_vftable *)pCVar19[0x135].Creature_data.offset_0x4;
        *(undefined4 *)&pCVar19[0x134].Creature_data = pCVar19[0x135].Creature_data.offset_0x8;
        pCVar19[0x134].Creature_data.offset_0x4 = pCVar19[0x136].vftablePtr;
        pCVar19[0x134].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x136].Creature_data;
        *(float *)(unaff_EBP + -0x11d8) = (float)*(longlong *)(pCVar19 + 0x135);
        *(undefined4 *)(unaff_EBP + -0x11d8) = *(undefined4 *)(unaff_EBP + -0x11d8);
        pCVar19[0x136].Creature_data.offset_0x4 = *(float *)(unaff_EBP + -0x11d8) * 1.5258789e-05;
        lVar1._0_4_ = pCVar19[0x135].Creature_data.offset_0x4;
        lVar1._4_4_ = pCVar19[0x135].Creature_data.offset_0x8;
        *(float *)(unaff_EBP + -0x11d8) = (float)lVar1;
        *(undefined4 *)(unaff_EBP + -0x11d8) = *(undefined4 *)(unaff_EBP + -0x11d8);
        pCVar19[0x136].Creature_data.offset_0x8 = *(float *)(unaff_EBP + -0x11d8) * 1.5258789e-05;
        *(float *)(unaff_EBP + -0x11d8) = (float)*(longlong *)(pCVar19 + 0x136);
        *(undefined4 *)(unaff_EBP + -0x11d8) = *(undefined4 *)(unaff_EBP + -0x11d8);
        pCVar19[0x137].vftablePtr =
             (Creature_vftable *)(*(float *)(unaff_EBP + -0x11d8) * 1.5258789e-05);
      }
      else {
        iVar17 = FUN_00468b70(piVar9 + 4);
        iVar17 = iVar17 + 0x1b0;
        *(int *)(unaff_EBP + -0x11d8) = iVar17;
        iVar8 = 0;
        pCVar16 = pCVar19 + 0x1c;
        do {
          if ((pCVar16->vftablePtr != *(Creature_vftable **)(iVar17 + iVar8 * 8)) ||
             (iVar17 = *(int *)(unaff_EBP + -0x11d8),
             *(int *)&pCVar16->Creature_data != *(int *)(iVar17 + 4 + iVar8 * 8)))
          goto code_r0x0046c7ab;
          iVar8 = iVar8 + 1;
          pCVar16 = (Creature *)&(pCVar16->Creature_data).offset_0x4;
        } while (iVar8 < 3);
        if ((float)pCVar19[0x16].Creature_data.offset_0x8 <= 0.0) goto code_r0x0046c7ab;
        pCVar19[0x139].Creature_data.offset_0x4 = 0x3c;
        pCVar19[0x133].Creature_data.offset_0x4 = pCVar19[0x135].vftablePtr;
        pCVar19[0x133].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x135].Creature_data;
        pCVar19[0x134].vftablePtr = (Creature_vftable *)pCVar19[0x135].Creature_data.offset_0x4;
        *(undefined4 *)&pCVar19[0x134].Creature_data = pCVar19[0x135].Creature_data.offset_0x8;
        pCVar19[0x134].Creature_data.offset_0x4 = pCVar19[0x136].vftablePtr;
        pCVar19[0x134].Creature_data.offset_0x8 = *(undefined4 *)&pCVar19[0x136].Creature_data;
        pCVar19[0x136].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x137].Creature_data;
        pCVar19[0x136].Creature_data.offset_0x8 = pCVar19[0x137].Creature_data.offset_0x4;
        pCVar19[0x137].vftablePtr = (Creature_vftable *)pCVar19[0x137].Creature_data.offset_0x8;
        pCVar19[0x138].vftablePtr = (Creature_vftable *)pCVar19[0x138].Creature_data.offset_0x8;
        *(Creature_vftable **)&pCVar19[0x138].Creature_data = pCVar19[0x139].vftablePtr;
        pCVar19[0x138].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x139].Creature_data;
      }
      uVar14 = FUN_00468b70(piVar9 + 4);
      FUN_0044b040(uVar14);
      unaff_EBX = *(int **)(unaff_EBP + -0x1268);
    }
    if (*(char *)((int)piVar9 + 0xd) == '\0') {
      piVar13 = (int *)piVar9[2];
      if (*(char *)((int)piVar13 + 0xd) == '\0') {
        cVar6 = *(char *)(*piVar13 + 0xd);
        piVar9 = piVar13;
        piVar13 = (int *)*piVar13;
        while (cVar6 == '\0') {
          cVar6 = *(char *)(*piVar13 + 0xd);
          piVar9 = piVar13;
          piVar13 = (int *)*piVar13;
        }
      }
      else {
        cVar6 = *(char *)(piVar9[1] + 0xd);
        piVar5 = (int *)piVar9[1];
        piVar13 = piVar9;
        while ((piVar9 = piVar5, cVar6 == '\0' && (piVar13 == (int *)piVar9[2]))) {
          cVar6 = *(char *)(piVar9[1] + 0xd);
          piVar5 = (int *)piVar9[1];
          piVar13 = piVar9;
        }
      }
    }
    if (piVar9 == *(int **)(unaff_EBP + -0x11fc)) {
      puVar11 = *(undefined4 **)(unaff_EBP + -0x1214);
code_r0x0046c9c9:
      FUN_00601e90();
      puVar2 = (undefined4 *)*puVar11;
      *puVar11 = puVar11;
      puVar11[1] = puVar11;
      *(undefined4 *)(unaff_EBP + -0x1210) = 0;
      if (puVar2 == puVar11) {
                    /* WARNING: Subroutine does not return */
        operator_delete(puVar11);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar2);
    }
  } while( true );
  while( true ) {
    iVar17 = iVar17 - iVar8;
    pcVar18 = pcVar18 + iVar8;
    SVar12 = *(SOCKET *)(unaff_EBP + -0x11d8);
    if (iVar17 < 1) break;
code_r0x0046bb00:
    iVar8 = recv(SVar12,pcVar18,iVar17,0);
    if (iVar8 < 1) {
      if (iVar8 == -1) goto code_r0x0046bb46;
      break;
    }
  }
  if (*(int *)(unaff_EBP + -0x1228) == 0) {
    *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_005fb860();
  }
  else {
    FUN_005870c0(*(int *)(unaff_EBP + -0x1228));
    iVar17 = *(int *)(unaff_EBP + -0x1240);
    if (iVar17 == *(int *)(unaff_EBP + -0x123c)) {
      iVar17 = 0;
    }
    iVar17 = FUN_00486b60(*(undefined4 *)(*unaff_EBX + 0x8006cc),iVar17,
                          *(undefined4 *)(unaff_EBP + -0x1228),0);
    if (iVar17 == -1) {
      *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_005fb860();
    }
    else {
      FUN_004494b0();
      *(undefined8 *)(unaff_EBP + -0x127c) = 0;
      FUN_0044d620(unaff_EBP + -0x127c,8);
      FUN_00601cb0();
      pCVar19 = (Creature *)FUN_0042f000(unaff_EBP + -0x127c);
      *(undefined1 *)(unaff_EBP + -0x11d9) = 0;
      if (pCVar19 == (Creature *)0x0) {
        pCVar19 = operator_new(0x1e60);
        *(Creature **)(unaff_EBP + -0x11d8) = pCVar19;
        *(undefined1 *)(unaff_EBP + -4) = 8;
        if (pCVar19 == (Creature *)0x0) {
          pCVar19 = (Creature *)0x0;
        }
        else {
          pCVar19 = cube::Creature::Creature(pCVar19,(undefined4 *)(unaff_EBP + -0x127c));
        }
        *(undefined1 *)(unaff_EBP + -4) = 7;
        puVar11 = (undefined4 *)FUN_00468ad0(unaff_EBP + -0x127c);
        *puVar11 = pCVar19;
        *(undefined1 *)(unaff_EBP + -0x11d9) = 1;
      }
      *(Creature **)(unaff_EBP + -0x11d8) = pCVar19 + 1;
      FUN_00466050(pCVar19 + 1);
      FUN_00601e90();
      iVar17 = FUN_004ccfa0(unaff_EBP + -0x1240,unaff_EBP + -0x11d0);
      if (iVar17 == -1) {
code_r0x0046bb46:
        *(undefined1 *)(unaff_EBP + -0x11d1) = 1;
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
      else {
        FUN_00453de0(unaff_EBP + -0x1364,0,unaff_EBP + -0x127c,DAT_0076b060);
        FUN_00601cb0();
        if (pCVar19 != *(Creature **)(*unaff_EBX + 0x8006d0)) {
          if (((*(char *)(unaff_EBP + -0x11d9) != '\0') ||
              (cVar6 = FUN_0042c680(unaff_EBP + -0x1020), cVar6 != '\0')) ||
             ((float)pCVar19[0x16].Creature_data.offset_0x8 <= 0.0)) {
            pCVar19[0x139].Creature_data.offset_0x4 = 0;
            FUN_0043e630();
            FUN_0042c5b0(unaff_EBP + -0x11d0);
            *(undefined4 *)&pCVar19[0x137].Creature_data = *(undefined4 *)(unaff_EBP + -0x11b8);
            pCVar19[0x137].Creature_data.offset_0x4 = *(undefined4 *)(unaff_EBP + -0x11b4);
            pCVar19[0x137].Creature_data.offset_0x8 = *(undefined4 *)(unaff_EBP + -0x11b0);
            FUN_0042c5b0(pCVar19 + 0x135);
            pCVar19[0x136].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x137].Creature_data;
            pCVar19[0x136].Creature_data.offset_0x8 = pCVar19[0x137].Creature_data.offset_0x4;
            pCVar19[0x137].vftablePtr = (Creature_vftable *)pCVar19[0x137].Creature_data.offset_0x8;
          }
          else {
            pCVar19[0x139].Creature_data.offset_0x4 = 0x3c;
            FUN_0042c5b0(pCVar19 + 0x135);
            pCVar19[0x136].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x137].Creature_data;
            pCVar19[0x136].Creature_data.offset_0x8 = pCVar19[0x137].Creature_data.offset_0x4;
            pCVar19[0x137].vftablePtr = (Creature_vftable *)pCVar19[0x137].Creature_data.offset_0x8;
            pCVar19[0x138].vftablePtr = (Creature_vftable *)pCVar19[0x138].Creature_data.offset_0x8;
            *(Creature_vftable **)&pCVar19[0x138].Creature_data = pCVar19[0x139].vftablePtr;
            pCVar19[0x138].Creature_data.offset_0x4 = *(undefined4 *)&pCVar19[0x139].Creature_data;
          }
          FUN_0044b040(unaff_EBP + -0x11d0);
        }
        FUN_00601e90();
        *(undefined1 *)(unaff_EBP + -4) = 1;
        FUN_005fb860();
      }
    }
  }
  goto LAB_0046d0dd;
}


/* FUN_00488d00 @ 00488d00  kind=gamemisc  attributed-by=role:dispatch-target  size=89 */

void FUN_00488d00(void)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800910) + 0x3c);
  iVar2 = *(int *)(iVar1 + 0x68);
  iVar1 = *(int *)(iVar1 + 0x94);
  *(uint *)(iVar1 + iVar2 * 4) = (uint)(*(int *)(iVar1 + iVar2 * 4) == 0);
  iVar1 = *(int *)(*(int *)(in_ECX + 0x800910) + 0x3c);
  if (*(int *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) != 0) {
    iVar1 = *(int *)(*(int *)(in_ECX + 0x8008bc) + 0x3c);
    *(undefined4 *)(*(int *)(iVar1 + 0x94) + *(int *)(iVar1 + 0x68) * 4) = 0;
  }
  return;
}


/* FUN_0049be00 @ 0049be00  kind=gamemisc  attributed-by=role:dispatch-target  size=59 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0049be00(void)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  CRefTime *pCVar10;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack00000008;
  int in_stack_00000010;
  char in_stack_00000017;
  float in_stack_00000018;
  int in_stack_0000001c;
  CRefTime *pCStack00000020;
  int in_stack_00000028;
  float in_stack_00000048;
  int iStack00000054;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  int in_stack_00000070;
  CRefTime *pCStack00000074;
  float fStack00000084;
  float fStack00000088;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000d8;
  float in_stack_000001c0;
  undefined4 uStack000001cc;
  uint in_stack_00004758;
  void *in_stack_00004760;
  
code_r0x0049be00:
  iVar7 = *(int *)(unaff_EDI + 0x8006d0);
  if (*(char *)(iVar7 + 0x141) != '\x01') {
    *(undefined1 *)(iVar7 + 0x68) = 0x3c;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  }
  *(undefined1 *)(iVar7 + 0x68) = 0x3d;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  goto LAB_0049bf4d;
code_r0x0049bdd8:
  puVar2 = (undefined4 *)FUN_00468c60();
  switch(*puVar2) {
  case 8:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x68;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  default:
LAB_0049bf4d:
    do {
      do {
        do {
          iVar9 = unaff_ESI;
          unaff_ESI = iVar9 + 1;
          in_stack_00000070 = unaff_ESI;
          iVar7 = FUN_00487f50();
          if (iVar7 + -1 <= iVar9) {
            if ((((in_stack_00000017 == '\0') &&
                 (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '0')) &&
                (*(char *)(unaff_EDI + 4) != '\0')) &&
               (FUN_00445410(), *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14')) {
              FUN_0046ebe0();
              FUN_0042f3e0();
              FUN_0042c5e0();
            }
            if (((*(char *)(unaff_EDI + 5) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1c)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1c')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (((*(char *)(unaff_EDI + 4) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1d)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1d')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (in_stack_00000017 != '\0') {
              FUN_0042f160();
            }
            if (*(int *)(unaff_EDI + 0x8006cc) != 0) {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_00486290();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004460a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004861a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
            }
            if (*(int *)(unaff_EDI + 0x8006c8) != 0) {
              FUN_004dc8e0();
            }
            iVar7 = *(int *)(unaff_EDI + 0x8006d0);
            cVar1 = *(char *)(iVar7 + 0x68);
            if ((((((cVar1 != 'S') && (cVar1 != 'j')) && (cVar1 != 'k')) &&
                 (((cVar1 != 'R' && (cVar1 != 'T')) &&
                  ((cVar1 != '\b' && ((cVar1 != '#' && (cVar1 != 'O')))))))) && (cVar1 != '\x1c'))
               && (((cVar1 != '\x1d' && (cVar1 != '$')) && (*(char *)(unaff_EDI + 5) == '\0')))) {
              if (*(char *)(iVar7 + 0x1020) == '\x14') {
                iVar9 = FUN_0043d1a0();
                iVar7 = *(int *)(unaff_EDI + 0x8006d0);
                if (iVar9 + 500 < *(int *)(iVar7 + 0x6c)) {
                  *(undefined1 *)(iVar7 + 0x68) = 0x52;
                  goto LAB_0049c2e6;
                }
              }
              if (10000 < *(int *)(iVar7 + 0x6c)) {
                *(undefined1 *)(iVar7 + 0x68) = 0;
              }
            }
LAB_0049c2e6:
            FUN_00423e70();
            uStack0000006c = FUN_00428970();
            FUN_00424610();
            uStack00000064 = FUN_00428970();
            FUN_004244f0();
            uStack00000060 = FUN_00428970();
            FUN_004243d0();
            FUN_0042c7a0();
            FUN_0042c4a0();
            fVar11 = (float10)FUN_00424860();
            in_stack_000000ac = (float)fVar11;
            if (2500.0 < in_stack_000000ac) {
              FUN_0042c5b0();
            }
            cVar1 = FUN_0047fa10();
            if (((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
               ((cVar1 = FUN_0047fa10(), cVar1 == '\0' && (cVar1 = FUN_0047fa10(), cVar1 == '\0'))))
            {
              in_stack_000000d8 = 0;
              fStack00000084 = 1.0;
              FUN_004aba20();
              pCStack00000074 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              cVar1 = FUN_0047fa10();
              if ((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
                cVar1 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
                if ((cVar1 == 'T') || (cVar1 == 'S')) {
                  FUN_00428970();
                  FUN_004120b0();
                  FUN_00412220();
                }
                else {
                  if ((cVar1 == 'j') || (cVar1 == 'k')) {
                    FUN_00428970();
                  }
                  else {
                    FUN_00428970();
                  }
                  FUN_004120b0();
                  FUN_00412220();
                  FUN_004122e0();
                }
                FUN_004122e0();
              }
              else {
                FUN_004120b0();
                FUN_00412220();
              }
              FUN_004120b0();
              FUN_004573d0();
            }
            else {
              FUN_00487fe0();
              FUN_0042c460();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              pCVar10 = (CRefTime *)FUN_004120b0();
              pCStack00000074 = pCVar10;
              CRefTime::Millisecs(pCStack00000020);
              CRefTime::Millisecs(pCVar10);
              fStack00000084 = (float)FUN_004347a0();
              if (fStack00000084 != 0.0) {
                FUN_004348b0();
                FUN_00434b70();
                FUN_004120b0();
                FUN_00412080();
              }
              FUN_00412080();
              FUN_004120b0();
              FUN_0042c9b0();
            }
            iStack00000054 = unaff_EDI + 0x140;
            FUN_0042c5b0();
            FUN_0040ea90();
            FUN_00488e50();
            pfVar3 = in_stack_000000a8;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c9d0();
            fStack00000088 = *pfVar3;
            in_stack_0000001c = 0;
            FUN_004120b0();
            fStack00000084 = (float)FUN_004120b0();
            in_stack_000000ac = (float)FUN_004120b0();
            do {
              in_stack_00000048 = 0.0;
              do {
                iVar7 = 0;
                do {
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_0043b610();
                  FUN_0042c6e0();
                  FUN_0042c800();
                  FUN_0042f860();
                  cVar1 = FUN_0043b480();
                  if (cVar1 != '\0') {
                    fVar11 = (float10)FUN_005a35d0();
                    in_stack_000001c0 = (float)fVar11;
                    if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
                      fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 2);
                in_stack_00000048 = (float)((int)in_stack_00000048 + 1);
              } while ((int)in_stack_00000048 < 2);
              in_stack_0000001c = in_stack_0000001c + 1;
            } while (in_stack_0000001c < 2);
            *in_stack_000000a8 = fStack00000088;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c7a0();
            FUN_0042c5b0();
            iVar7 = in_stack_00000010;
            *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
            FUN_0042c5b0();
            in_stack_000000d8 = FUN_004120b0();
            fStack00000088 = (float)FUN_004120b0();
            FUN_004120b0();
            FUN_0042f860();
            cVar1 = FUN_0043b480();
            if (cVar1 != '\0') {
              FUN_0042c7a0();
              FUN_0042c4a0();
              fVar11 = (float10)FUN_00424860();
              fStack00000084 = (float)fVar11;
              if (0.0 < fStack00000084) {
                FUN_004240f0();
                fVar11 = (float10)FUN_005a35d0();
                fStack00000084 = (float)fVar11;
                if (0.0 <= fStack00000084) {
                  FUN_00451510();
                  FUN_0042c460();
                  FUN_0042c800();
                  FUN_0042c5b0();
                }
              }
            }
            FUN_00423e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00424610();
            FUN_004244f0();
            FUN_004243d0();
            FUN_00423e70();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00468e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00412260();
            FUN_00411df0();
            FUN_00412260();
            FUN_00411df0();
            FUN_00423e70();
            in_stack_00000048 = *(float *)(iVar7 + 0x1e8) * 0.5;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00434b80();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00412080();
            FUN_0043b610();
            FUN_00468e70();
            FUN_0042c7a0();
            FUN_0042c4a0();
            FUN_00424990();
            uStack000001cc = 0;
            FUN_004aba20();
            EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            FUN_004120f0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            in_stack_00000048 = (float)(iVar7 + 0x2c4);
            FUN_0046f870();
            if (*(int *)(iVar7 + 0x8006c8) == 0) {
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              FUN_0040ea30();
              FUN_00469000();
              FUN_00486560();
            }
            else {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                iVar7 = FUN_00468c90();
                if ((*(int *)(iVar7 + 8) != 0) && (*(char *)(*(int *)(iVar7 + 8) + 0x60) == '\0')) {
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  FUN_0040ea30();
                  FUN_00469000();
                  FUN_00486560();
                }
                FUN_00468d70();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
                iVar7 = in_stack_00000010;
              }
            }
            in_stack_0000001c = iVar7 + 0x2cc;
            FUN_0046f870();
            fStack00000084 = (float)(iVar7 + 0x2d4);
            FUN_0046f870();
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              FUN_0042c6c0();
              in_stack_00000048 = (float)FUN_00428970();
              uStack000001cc = FUN_00428970();
              iVar7 = FUN_00434d10();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 0x74) != '\0')) {
                FUN_00486560();
              }
              iVar7 = FUN_00434a90();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 8) != '\0')) {
                FUN_00469000();
                FUN_00486560();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              iVar7 = in_stack_00000010;
            }
            FUN_00469060();
            FUN_004120f0();
            FUN_00469060();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            if (*(int *)(iVar7 + 0x8006cc) == 0) {
              FUN_0046f870();
              FUN_0046f870();
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00601e90();
            FUN_00659fb0();
            FUN_004da480();
            FUN_004da480();
            FUN_004da480();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000e2c);
            FUN_00593e50();
            FUN_00593e50();
            FUN_005fb860();
            FUN_005fb860();
            FUN_00467c70();
            uStack00000008 = 0x49d389;
            ExceptionList = in_stack_00004760;
            __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
            return;
          }
          piVar8 = (int *)FUN_00468c60();
        } while (*piVar8 == 0);
        if (*(char *)(unaff_EDI + 4 + unaff_ESI) == '\0') {
          puVar6 = (uint *)FUN_00468c60();
          if (*puVar6 == (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68))
          goto code_r0x0049bdd8;
          goto LAB_0049bf4d;
        }
        in_stack_00000017 = '\x01';
        cVar1 = FUN_0043e350();
      } while ((cVar1 == '\0') && (iVar9 < 1));
      FUN_00468c60();
      cVar1 = FUN_0043e5a0();
    } while (cVar1 == '\0');
    if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14') {
      FUN_0046ebe0();
      FUN_0042f3e0();
      FUN_0042c5e0();
    }
    puVar2 = (undefined4 *)FUN_00468c60();
    switch(*puVar2) {
    case 3:
    case 4:
    case 0x17:
    case 0x1f:
    case 0x21:
    case 0x25:
    case 0x2d:
    case 0x2e:
    case 0x41:
    case 0x42:
    case 0x5e:
    case 0x5f:
      FUN_004456a0();
      goto LAB_0049bf4d;
    case 5:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 5;
      break;
    default:
      FUN_00468c60();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00444ae0();
      in_stack_000000ac = (float)fVar11;
      if (in_stack_000000ac <= *(float *)((int)in_stack_00000048 + 0x170)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        iVar7 = (int)in_stack_00000048;
        goto code_r0x0049bd93;
      }
      goto LAB_0049bf4d;
    case 8:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x3b:
    case 0x3f:
    case 0x40:
      puVar6 = (uint *)FUN_00468c60();
      if ((uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == *puVar6) goto LAB_0049bf4d;
      puVar5 = (undefined1 *)FUN_00468c60();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
code_r0x0049bd93:
      *(undefined1 *)(iVar7 + 0x68) = *puVar5;
      break;
    case 10:
      if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\n') goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 10;
      break;
    case 0xb:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
      break;
    case 0x11:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x11;
      break;
    case 0x14:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x14;
      break;
    case 0x1c:
      if ((0.0 < *(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170)) &&
         (puVar6 = (uint *)FUN_00468c60(),
         (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != *puVar6)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
      }
      goto LAB_0049bf4d;
    case 0x22:
      in_stack_00000018 = *(float *)(unaff_EDI + 0x8006d0);
      iVar7 = FUN_0043d1a0();
      if (iVar7 <= *(int *)((int)in_stack_00000018 + 0x6c)) {
        *(undefined1 *)((int)in_stack_00000018 + 0x68) = 0x22;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(iVar7 + 0xc);
      }
      goto LAB_0049bf4d;
    case 0x30:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000028 = iVar7 + 0x34;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        pfVar3 = (float *)FUN_00428970();
        if (5.0 < *pfVar3) {
          *pfVar3 = 5.0;
        }
      }
      goto code_r0x0049b8d5;
    case 0x32:
      FUN_00468e20();
      FUN_00411e30();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11;
        FUN_00412780();
        in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11 * 12.0 + 5.0;
        pfVar3 = (float *)FUN_00428970();
        *pfVar3 = in_stack_00000018;
      }
      in_stack_000001c0 = 7.00649e-44;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = in_stack_00000070;
      goto LAB_0049bf4d;
    case 0x36:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_004252f0();
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (2500.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
      }
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0x41700000;
code_r0x0049b8d5:
      *(undefined4 *)(iVar7 + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
      unaff_ESI = in_stack_00000070;
      goto LAB_0049bf4d;
    case 0x60:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x60;
      FUN_00468e20();
      FUN_00411e30();
      in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000048 = (float)(in_stack_0000001c + 0x34);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_000000ac = (float)fVar11;
      if (0.0 < in_stack_000000ac) {
        FUN_004240f0();
        FUN_00412780();
        in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
        puVar2 = (undefined4 *)FUN_00428970();
        *puVar2 = 0x41a00000;
      }
      *(undefined4 *)(in_stack_0000001c + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 600;
      goto LAB_0049bf4d;
    case 0x61:
      goto code_r0x0049b794;
    case 99:
      FUN_0042f160();
      in_stack_000000ac = 1.38729e-43;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = in_stack_00000070;
      goto LAB_0049bf4d;
    case 100:
      goto code_r0x0049b794;
    case 0x65:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    case 0x66:
code_r0x0049b794:
      FUN_00595850();
      goto LAB_0049bf4d;
    case 0x67:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    }
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
    goto LAB_0049bf4d;
  case 10:
    in_stack_000000ac = *(float *)(unaff_EDI + 0x8006d0);
    iVar7 = FUN_0043d1a0();
    if (iVar7 < *(int *)((int)in_stack_000000ac + 0x6c)) {
      *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
      uVar4 = FUN_0043d1a0();
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = uVar4;
    }
    goto LAB_0049bf4d;
  case 0x18:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x17;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x19:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x37;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x1b:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x1a;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x23:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x24:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x25;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x3b:
    goto code_r0x0049be00;
  case 0x3f:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  case 0x40:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  }
}


/* FUN_0049be73 @ 0049be73  kind=gamemisc  attributed-by=role:dispatch-target  size=28 */

/* WARNING (jumptable): Unable to track spacebase fully for stack */

void FUN_0049be73(void)

{
  char cVar1;
  undefined4 *puVar2;
  float *pfVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  CRefTime *pCVar10;
  int unaff_ESI;
  int unaff_EDI;
  float10 fVar11;
  undefined4 uStack00000008;
  int in_stack_00000010;
  char in_stack_00000017;
  float in_stack_00000018;
  int in_stack_0000001c;
  CRefTime *pCStack00000020;
  int in_stack_00000028;
  float in_stack_00000048;
  int iStack00000054;
  undefined4 uStack00000060;
  undefined4 uStack00000064;
  undefined4 uStack0000006c;
  int iStack00000070;
  CRefTime *pCStack00000074;
  float fStack00000084;
  float fStack00000088;
  float *in_stack_000000a8;
  float in_stack_000000ac;
  undefined4 in_stack_000000d8;
  float in_stack_000001c0;
  undefined4 uStack000001cc;
  uint in_stack_00004758;
  void *in_stack_00004760;
  
code_r0x0049be73:
  *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x17;
  *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  goto LAB_0049bf4d;
code_r0x0049bdd8:
  puVar2 = (undefined4 *)FUN_00468c60();
  switch(*puVar2) {
  case 8:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x68;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
  default:
LAB_0049bf4d:
    do {
      do {
        do {
          iVar9 = unaff_ESI;
          unaff_ESI = iVar9 + 1;
          iStack00000070 = unaff_ESI;
          iVar7 = FUN_00487f50();
          if (iVar7 + -1 <= iVar9) {
            if ((((in_stack_00000017 == '\0') &&
                 (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != '0')) &&
                (*(char *)(unaff_EDI + 4) != '\0')) &&
               (FUN_00445410(), *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14')) {
              FUN_0046ebe0();
              FUN_0042f3e0();
              FUN_0042c5e0();
            }
            if (((*(char *)(unaff_EDI + 5) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1c)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1c')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (((*(char *)(unaff_EDI + 4) == '\0') &&
                (piVar8 = (int *)FUN_00468c60(), *piVar8 == 0x1d)) &&
               (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\x1d')) {
              *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
            }
            if (in_stack_00000017 != '\0') {
              FUN_0042f160();
            }
            if (*(int *)(unaff_EDI + 0x8006cc) != 0) {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_00486290();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004460a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                piVar8 = (int *)FUN_0042c6c0();
                if ((*piVar8 == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 8)) &&
                   (piVar8[1] == *(int *)(*(int *)(unaff_EDI + 0x8006d0) + 0xc))) {
                  FUN_0042c6c0();
                  FUN_004861a0();
                }
                FUN_00468d30();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
              }
            }
            if (*(int *)(unaff_EDI + 0x8006c8) != 0) {
              FUN_004dc8e0();
            }
            iVar7 = *(int *)(unaff_EDI + 0x8006d0);
            cVar1 = *(char *)(iVar7 + 0x68);
            if ((((((cVar1 != 'S') && (cVar1 != 'j')) && (cVar1 != 'k')) &&
                 (((cVar1 != 'R' && (cVar1 != 'T')) &&
                  ((cVar1 != '\b' && ((cVar1 != '#' && (cVar1 != 'O')))))))) && (cVar1 != '\x1c'))
               && (((cVar1 != '\x1d' && (cVar1 != '$')) && (*(char *)(unaff_EDI + 5) == '\0')))) {
              if (*(char *)(iVar7 + 0x1020) == '\x14') {
                iVar9 = FUN_0043d1a0();
                iVar7 = *(int *)(unaff_EDI + 0x8006d0);
                if (iVar9 + 500 < *(int *)(iVar7 + 0x6c)) {
                  *(undefined1 *)(iVar7 + 0x68) = 0x52;
                  goto LAB_0049c2e6;
                }
              }
              if (10000 < *(int *)(iVar7 + 0x6c)) {
                *(undefined1 *)(iVar7 + 0x68) = 0;
              }
            }
LAB_0049c2e6:
            FUN_00423e70();
            uStack0000006c = FUN_00428970();
            FUN_00424610();
            uStack00000064 = FUN_00428970();
            FUN_004244f0();
            uStack00000060 = FUN_00428970();
            FUN_004243d0();
            FUN_0042c7a0();
            FUN_0042c4a0();
            fVar11 = (float10)FUN_00424860();
            in_stack_000000ac = (float)fVar11;
            if (2500.0 < in_stack_000000ac) {
              FUN_0042c5b0();
            }
            cVar1 = FUN_0047fa10();
            if (((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) &&
               ((cVar1 = FUN_0047fa10(), cVar1 == '\0' && (cVar1 = FUN_0047fa10(), cVar1 == '\0'))))
            {
              in_stack_000000d8 = 0;
              fStack00000084 = 1.0;
              FUN_004aba20();
              pCStack00000074 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              FUN_004120b0();
              FUN_00412200();
              FUN_00468ca0();
              FUN_0042c9b0();
              cVar1 = FUN_0047fa10();
              if ((cVar1 == '\0') && (cVar1 = FUN_0047fa10(), cVar1 == '\0')) {
                cVar1 = *(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68);
                if ((cVar1 == 'T') || (cVar1 == 'S')) {
                  FUN_00428970();
                  FUN_004120b0();
                  FUN_00412220();
                }
                else {
                  if ((cVar1 == 'j') || (cVar1 == 'k')) {
                    FUN_00428970();
                  }
                  else {
                    FUN_00428970();
                  }
                  FUN_004120b0();
                  FUN_00412220();
                  FUN_004122e0();
                }
                FUN_004122e0();
              }
              else {
                FUN_004120b0();
                FUN_00412220();
              }
              FUN_004120b0();
              FUN_004573d0();
            }
            else {
              FUN_00487fe0();
              FUN_0042c460();
              pCStack00000020 = (CRefTime *)FUN_004120b0();
              pCVar10 = (CRefTime *)FUN_004120b0();
              pCStack00000074 = pCVar10;
              CRefTime::Millisecs(pCStack00000020);
              CRefTime::Millisecs(pCVar10);
              fStack00000084 = (float)FUN_004347a0();
              if (fStack00000084 != 0.0) {
                FUN_004348b0();
                FUN_00434b70();
                FUN_004120b0();
                FUN_00412080();
              }
              FUN_00412080();
              FUN_004120b0();
              FUN_0042c9b0();
            }
            iStack00000054 = unaff_EDI + 0x140;
            FUN_0042c5b0();
            FUN_0040ea90();
            FUN_00488e50();
            pfVar3 = in_stack_000000a8;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c9d0();
            fStack00000088 = *pfVar3;
            in_stack_0000001c = 0;
            FUN_004120b0();
            fStack00000084 = (float)FUN_004120b0();
            in_stack_000000ac = (float)FUN_004120b0();
            do {
              in_stack_00000048 = 0.0;
              do {
                iVar7 = 0;
                do {
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_00459c00();
                  FUN_0043b610();
                  FUN_0042c6e0();
                  FUN_0042c800();
                  FUN_0042f860();
                  cVar1 = FUN_0043b480();
                  if (cVar1 != '\0') {
                    fVar11 = (float10)FUN_005a35d0();
                    in_stack_000001c0 = (float)fVar11;
                    if (*in_stack_000000a8 - in_stack_000001c0 < fStack00000088) {
                      fStack00000088 = *in_stack_000000a8 - in_stack_000001c0;
                    }
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < 2);
                in_stack_00000048 = (float)((int)in_stack_00000048 + 1);
              } while ((int)in_stack_00000048 < 2);
              in_stack_0000001c = in_stack_0000001c + 1;
            } while (in_stack_0000001c < 2);
            *in_stack_000000a8 = fStack00000088;
            FUN_00451510();
            FUN_0042c460();
            FUN_0042c7a0();
            FUN_0042c5b0();
            iVar7 = in_stack_00000010;
            *(float *)(in_stack_00000010 + 0x1cc) = *in_stack_000000a8;
            FUN_0042c5b0();
            in_stack_000000d8 = FUN_004120b0();
            fStack00000088 = (float)FUN_004120b0();
            FUN_004120b0();
            FUN_0042f860();
            cVar1 = FUN_0043b480();
            if (cVar1 != '\0') {
              FUN_0042c7a0();
              FUN_0042c4a0();
              fVar11 = (float10)FUN_00424860();
              fStack00000084 = (float)fVar11;
              if (0.0 < fStack00000084) {
                FUN_004240f0();
                fVar11 = (float10)FUN_005a35d0();
                fStack00000084 = (float)fVar11;
                if (0.0 <= fStack00000084) {
                  FUN_00451510();
                  FUN_0042c460();
                  FUN_0042c800();
                  FUN_0042c5b0();
                }
              }
            }
            FUN_00423e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00424610();
            FUN_004244f0();
            FUN_004243d0();
            FUN_00423e70();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00468e70();
            FUN_0042c4a0();
            FUN_00424990();
            FUN_00412260();
            FUN_00411df0();
            FUN_00412260();
            FUN_00411df0();
            FUN_00423e70();
            in_stack_00000048 = *(float *)(iVar7 + 0x1e8) * 0.5;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00488b80();
            fVar11 = (float10)FUN_0040e420();
            fStack00000084 = (float)fVar11;
            FUN_00434b80();
            FUN_004243d0();
            FUN_004244f0();
            FUN_00424610();
            FUN_00412080();
            FUN_0043b610();
            FUN_00468e70();
            FUN_0042c7a0();
            FUN_0042c4a0();
            FUN_00424990();
            uStack000001cc = 0;
            FUN_004aba20();
            EnterCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_00469060();
            FUN_0043abc0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            FUN_004120f0();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            in_stack_00000048 = (float)(iVar7 + 0x2c4);
            FUN_0046f870();
            if (*(int *)(iVar7 + 0x8006c8) == 0) {
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              pCVar10 = (CRefTime *)FUN_004120b0();
              CRefTime::Millisecs(pCVar10);
              FUN_0040ea30();
              FUN_00469000();
              FUN_00486560();
            }
            else {
              FUN_0046f440();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              while (cVar1 != '\0') {
                iVar7 = FUN_00468c90();
                if ((*(int *)(iVar7 + 8) != 0) && (*(char *)(*(int *)(iVar7 + 8) + 0x60) == '\0')) {
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  pCVar10 = (CRefTime *)FUN_004120b0();
                  CRefTime::Millisecs(pCVar10);
                  FUN_0040ea30();
                  FUN_00469000();
                  FUN_00486560();
                }
                FUN_00468d70();
                FUN_0060a9f0();
                cVar1 = FUN_004688d0();
                iVar7 = in_stack_00000010;
              }
            }
            in_stack_0000001c = iVar7 + 0x2cc;
            FUN_0046f870();
            fStack00000084 = (float)(iVar7 + 0x2d4);
            FUN_0046f870();
            FUN_0046f440();
            FUN_0060a9f0();
            cVar1 = FUN_004688d0();
            while (cVar1 != '\0') {
              FUN_0042c6c0();
              in_stack_00000048 = (float)FUN_00428970();
              uStack000001cc = FUN_00428970();
              iVar7 = FUN_00434d10();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 0x74) != '\0')) {
                FUN_00486560();
              }
              iVar7 = FUN_00434a90();
              if ((iVar7 != 0) && (*(char *)(iVar7 + 8) != '\0')) {
                FUN_00469000();
                FUN_00486560();
              }
              FUN_00468d30();
              FUN_0060a9f0();
              cVar1 = FUN_004688d0();
              iVar7 = in_stack_00000010;
            }
            FUN_00469060();
            FUN_004120f0();
            FUN_00469060();
            FUN_004120f0();
            FUN_0040ea50();
            FUN_0062f720();
            if (*(int *)(iVar7 + 0x8006cc) == 0) {
              FUN_0046f870();
              FUN_0046f870();
            }
            LeaveCriticalSection((LPCRITICAL_SECTION)(iVar7 + 0x8005d0));
            FUN_00601e90();
            FUN_00659fb0();
            FUN_004da480();
            FUN_004da480();
            FUN_004da480();
            std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
            basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
                      ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>
                        *)&stack0x00000e2c);
            FUN_00593e50();
            FUN_00593e50();
            FUN_005fb860();
            FUN_005fb860();
            FUN_00467c70();
            uStack00000008 = 0x49d389;
            ExceptionList = in_stack_00004760;
            __security_check_cookie(in_stack_00004758 ^ (uint)&stack0x0000000c);
            return;
          }
          piVar8 = (int *)FUN_00468c60();
        } while (*piVar8 == 0);
        if (*(char *)(unaff_EDI + 4 + unaff_ESI) == '\0') {
          puVar6 = (uint *)FUN_00468c60();
          if (*puVar6 == (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68))
          goto code_r0x0049bdd8;
          goto LAB_0049bf4d;
        }
        in_stack_00000017 = '\x01';
        cVar1 = FUN_0043e350();
      } while ((cVar1 == '\0') && (iVar9 < 1));
      FUN_00468c60();
      cVar1 = FUN_0043e5a0();
    } while (cVar1 == '\0');
    if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x1020) == '\x14') {
      FUN_0046ebe0();
      FUN_0042f3e0();
      FUN_0042c5e0();
    }
    puVar2 = (undefined4 *)FUN_00468c60();
    switch(*puVar2) {
    case 3:
    case 4:
    case 0x17:
    case 0x1f:
    case 0x21:
    case 0x25:
    case 0x2d:
    case 0x2e:
    case 0x41:
    case 0x42:
    case 0x5e:
    case 0x5f:
      FUN_004456a0();
      goto LAB_0049bf4d;
    case 5:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 5;
      break;
    default:
      FUN_00468c60();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00444ae0();
      in_stack_000000ac = (float)fVar11;
      if (in_stack_000000ac <= *(float *)((int)in_stack_00000048 + 0x170)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        iVar7 = (int)in_stack_00000048;
        goto code_r0x0049bd93;
      }
      goto LAB_0049bf4d;
    case 8:
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x3b:
    case 0x3f:
    case 0x40:
      puVar6 = (uint *)FUN_00468c60();
      if ((uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == *puVar6) goto LAB_0049bf4d;
      puVar5 = (undefined1 *)FUN_00468c60();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
code_r0x0049bd93:
      *(undefined1 *)(iVar7 + 0x68) = *puVar5;
      break;
    case 10:
      if (*(char *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) == '\n') goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 10;
      break;
    case 0xb:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
      break;
    case 0x11:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x11;
      break;
    case 0x14:
      if (*(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170) <= 0.0) goto LAB_0049bf4d;
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x14;
      break;
    case 0x1c:
      if ((0.0 < *(float *)(*(int *)(unaff_EDI + 0x8006d0) + 0x170)) &&
         (puVar6 = (uint *)FUN_00468c60(),
         (uint)*(byte *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) != *puVar6)) {
        puVar5 = (undefined1 *)FUN_00468c60();
        *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
      }
      goto LAB_0049bf4d;
    case 0x22:
      in_stack_00000018 = *(float *)(unaff_EDI + 0x8006d0);
      iVar7 = FUN_0043d1a0();
      if (iVar7 <= *(int *)((int)in_stack_00000018 + 0x6c)) {
        *(undefined1 *)((int)in_stack_00000018 + 0x68) = 0x22;
        *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        *(undefined4 *)(iVar7 + 0x1a0) = *(undefined4 *)(iVar7 + 8);
        *(undefined4 *)(iVar7 + 0x1a4) = *(undefined4 *)(iVar7 + 0xc);
      }
      goto LAB_0049bf4d;
    case 0x30:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000028 = iVar7 + 0x34;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
        iVar7 = *(int *)(unaff_EDI + 0x8006d0);
        pfVar3 = (float *)FUN_00428970();
        if (5.0 < *pfVar3) {
          *pfVar3 = 5.0;
        }
      }
      goto code_r0x0049b8d5;
    case 0x32:
      FUN_00468e20();
      FUN_00411e30();
      in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (0.0 < in_stack_00000018) {
        FUN_004240f0();
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11;
        FUN_00412780();
        in_stack_00000048 = *(float *)(unaff_EDI + 0x8006d0);
        fVar11 = (float10)FUN_0043ed60();
        in_stack_00000018 = (float)fVar11 * 12.0 + 5.0;
        pfVar3 = (float *)FUN_00428970();
        *pfVar3 = in_stack_00000018;
      }
      in_stack_000001c0 = 7.00649e-44;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = iStack00000070;
      goto LAB_0049bf4d;
    case 0x36:
      puVar5 = (undefined1 *)FUN_00468c60();
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = *puVar5;
      FUN_004252f0();
      FUN_00411e30();
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      fVar11 = (float10)FUN_00423f20();
      in_stack_00000018 = (float)fVar11;
      *(int *)(iVar7 + 0x11d8) = (int)((in_stack_00000018 / 50.0) * 1000.0);
      fVar11 = (float10)FUN_00424860();
      in_stack_00000018 = (float)fVar11;
      if (2500.0 < in_stack_00000018) {
        FUN_004240f0();
        FUN_00412780();
      }
      iVar7 = *(int *)(unaff_EDI + 0x8006d0);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0x41700000;
code_r0x0049b8d5:
      *(undefined4 *)(iVar7 + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
      unaff_ESI = iStack00000070;
      goto LAB_0049bf4d;
    case 0x60:
      *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x60;
      FUN_00468e20();
      FUN_00411e30();
      in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
      in_stack_00000048 = (float)(in_stack_0000001c + 0x34);
      puVar2 = (undefined4 *)FUN_00428970();
      *puVar2 = 0;
      fVar11 = (float10)FUN_00424860();
      in_stack_000000ac = (float)fVar11;
      if (0.0 < in_stack_000000ac) {
        FUN_004240f0();
        FUN_00412780();
        in_stack_0000001c = *(int *)(unaff_EDI + 0x8006d0);
        puVar2 = (undefined4 *)FUN_00428970();
        *puVar2 = 0x41a00000;
      }
      *(undefined4 *)(in_stack_0000001c + 0x6c) = 0;
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 600;
      goto LAB_0049bf4d;
    case 0x61:
      goto code_r0x0049b794;
    case 99:
      FUN_0042f160();
      in_stack_000000ac = 1.38729e-43;
      puVar2 = (undefined4 *)FUN_00468910();
      uVar4 = FUN_0043e6a0();
      *puVar2 = uVar4;
      unaff_ESI = iStack00000070;
      goto LAB_0049bf4d;
    case 100:
      goto code_r0x0049b794;
    case 0x65:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    case 0x66:
code_r0x0049b794:
      FUN_00595850();
      goto LAB_0049bf4d;
    case 0x67:
      FUN_00595850();
      FUN_00484350();
      goto LAB_0049bf4d;
    }
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x128) = 0;
    goto LAB_0049bf4d;
  case 10:
    in_stack_000000ac = *(float *)(unaff_EDI + 0x8006d0);
    iVar7 = FUN_0043d1a0();
    if (iVar7 < *(int *)((int)in_stack_000000ac + 0x6c)) {
      *(undefined1 *)((int)in_stack_000000ac + 0x68) = 3;
      uVar4 = FUN_0043d1a0();
      *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = uVar4;
    }
    goto LAB_0049bf4d;
  case 0x18:
    goto code_r0x0049be73;
  case 0x19:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x37;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x1b:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x1a;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x23:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x24:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x25;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x3b:
    iVar7 = *(int *)(unaff_EDI + 0x8006d0);
    if (*(char *)(iVar7 + 0x141) != '\x01') {
      *(undefined1 *)(iVar7 + 0x68) = 0x3c;
      FUN_0043caa0();
      FUN_0049bf44();
      return;
    }
    *(undefined1 *)(iVar7 + 0x68) = 0x3d;
    *(undefined4 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x6c) = 0;
    goto LAB_0049bf4d;
  case 0x3f:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0xb;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  case 0x40:
    *(undefined1 *)(*(int *)(unaff_EDI + 0x8006d0) + 0x68) = 0x10;
    FUN_0043caa0();
    FUN_0049bf44();
    return;
  }
}


/* FUN_0051ce10 @ 0051ce10  kind=gamemisc  attributed-by=role:dispatch-target  size=123 */

undefined4 FUN_0051ce10(undefined4 *param_1,size_t param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_1[0xc];
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) != 0) {
    return *(undefined4 *)(iVar1 + 4);
  }
  if ((int)param_2 < 1) {
    FUN_00574d80(iVar1);
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  else {
    FUN_005748c0(iVar1,param_2,0);
    *(undefined2 *)(iVar1 + 0x1c) = 0x2000;
    *(undefined4 *)(iVar1 + 0x10) = *param_1;
    uVar2 = 0;
    if (*(void **)(iVar1 + 4) != (void *)0x0) {
      memset(*(void **)(iVar1 + 4),0,param_2);
      return *(undefined4 *)(iVar1 + 4);
    }
  }
  return uVar2;
}


/* FUN_0051d400 @ 0051d400  kind=gamemisc  attributed-by=role:dispatch-target  size=198 */

undefined4 FUN_0051d400(undefined4 param_1,byte *param_2,undefined *param_3)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  bool bVar7;
  
  if (param_2 == (byte *)0x0) {
    uVar2 = 0;
    do {
      if (*(int *)((int)&DAT_00767088 + uVar2) != 0) {
        *(int *)((int)&PTR_AreFileApisANSI_00767084 + uVar2) = *(int *)((int)&DAT_00767088 + uVar2);
      }
      if (*(int *)((int)&DAT_00767094 + uVar2) != 0) {
        *(int *)((int)&DAT_00767090 + uVar2) = *(int *)((int)&DAT_00767094 + uVar2);
      }
      uVar2 = uVar2 + 0x18;
    } while (uVar2 < 0x378);
    return 0;
  }
  iVar6 = 0;
  uVar2 = 0;
  do {
    pbVar3 = *(byte **)((int)&PTR_s_AreFileApisANSI_00767080 + uVar2);
    pbVar5 = param_2;
    do {
      bVar1 = *pbVar5;
      bVar7 = bVar1 < *pbVar3;
      if (bVar1 != *pbVar3) {
LAB_0051d470:
        uVar4 = -(uint)bVar7 | 1;
        goto LAB_0051d475;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar5[1];
      bVar7 = bVar1 < pbVar3[1];
      if (bVar1 != pbVar3[1]) goto LAB_0051d470;
      pbVar5 = pbVar5 + 2;
      pbVar3 = pbVar3 + 2;
    } while (bVar1 != 0);
    uVar4 = 0;
LAB_0051d475:
    if (uVar4 == 0) {
      if ((&DAT_00767088)[iVar6 * 3] == 0) {
        (&DAT_00767088)[iVar6 * 3] = (&PTR_AreFileApisANSI_00767084)[iVar6 * 3];
      }
      if (param_3 == (undefined *)0x0) {
        param_3 = (undefined *)(&DAT_00767088)[iVar6 * 3];
      }
      (&PTR_AreFileApisANSI_00767084)[iVar6 * 3] = param_3;
      return 0;
    }
    uVar2 = uVar2 + 0xc;
    iVar6 = iVar6 + 1;
    if (0x377 < uVar2) {
      return 0xc;
    }
  } while( true );
}


/* FUN_0051d5e0 @ 0051d5e0  kind=gamemisc  attributed-by=role:dispatch-target  size=99 */

undefined * FUN_0051d5e0(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  
  iVar6 = 0;
  uVar5 = 0;
  do {
    pbVar2 = *(byte **)((int)&PTR_s_AreFileApisANSI_00767080 + uVar5);
    pbVar4 = param_2;
    do {
      bVar1 = *pbVar4;
      bVar7 = bVar1 < *pbVar2;
      if (bVar1 != *pbVar2) {
LAB_0051d618:
        uVar3 = -(uint)bVar7 | 1;
        goto LAB_0051d61d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar4[1];
      bVar7 = bVar1 < pbVar2[1];
      if (bVar1 != pbVar2[1]) goto LAB_0051d618;
      pbVar4 = pbVar4 + 2;
      pbVar2 = pbVar2 + 2;
    } while (bVar1 != 0);
    uVar3 = 0;
LAB_0051d61d:
    if (uVar3 == 0) {
      return (&PTR_AreFileApisANSI_00767084)[iVar6 * 3];
    }
    uVar5 = uVar5 + 0xc;
    iVar6 = iVar6 + 1;
    if (0x377 < uVar5) {
      return (undefined *)0x0;
    }
  } while( true );
}


/* FUN_0051da30 @ 0051da30  kind=gamemisc  attributed-by=role:dispatch-target  size=135 */

undefined * FUN_0051da30(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  undefined **ppuVar6;
  bool bVar7;
  
  iVar5 = -1;
  if (param_2 != (byte *)0x0) {
    iVar5 = 0;
    ppuVar6 = &PTR_s_AreFileApisANSI_00767080;
    do {
      pbVar2 = *ppuVar6;
      pbVar4 = param_2;
      do {
        bVar1 = *pbVar4;
        bVar7 = bVar1 < *pbVar2;
        if (bVar1 != *pbVar2) {
LAB_0051da70:
          uVar3 = -(uint)bVar7 | 1;
          goto LAB_0051da75;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar4[1];
        bVar7 = bVar1 < pbVar2[1];
        if (bVar1 != pbVar2[1]) goto LAB_0051da70;
        pbVar4 = pbVar4 + 2;
        pbVar2 = pbVar2 + 2;
      } while (bVar1 != 0);
      uVar3 = 0;
LAB_0051da75:
      if (uVar3 == 0) break;
      ppuVar6 = ppuVar6 + 3;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0x7673ec);
  }
  iVar5 = iVar5 + 1;
  if (iVar5 < 0x4a) {
    ppuVar6 = &PTR_AreFileApisANSI_00767084 + iVar5 * 3;
    do {
      if (*ppuVar6 != (undefined *)0x0) {
        return (&PTR_s_AreFileApisANSI_00767080)[iVar5 * 3];
      }
      ppuVar6 = ppuVar6 + 3;
      iVar5 = iVar5 + 1;
    } while ((int)ppuVar6 < 0x7673fc);
  }
  return (undefined *)0x0;
}


/* FUN_005201b0 @ 005201b0  kind=gamemisc  attributed-by=role:dispatch-target  size=505 */

void FUN_005201b0(undefined4 param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 local_c0 [4];
  int local_b0;
  undefined8 local_2c;
  undefined8 local_24;
  undefined8 local_1c;
  undefined8 local_14;
  int local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  uVar4 = 0;
  iVar1 = FUN_00533710(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_c0[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_c0);
    DAT_0076b480 = (local_b0 == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    iVar5 = 0;
    local_2c = 0;
    local_24 = 0;
    local_1c = 0;
    local_14 = 0;
    local_c = 0;
    while( true ) {
      uVar4 = (*(code *)PTR_GetFileAttributesExW_0076718c)(iVar1,0,&local_2c);
      if (uVar4 != 0) break;
      iVar2 = (*(code *)PTR_GetLastError_007671bc)();
      if ((DAT_007666d4 <= iVar5) || (((iVar2 != 5 && (iVar2 != 0x21)) && (iVar2 != 0x20)))) {
        if (iVar5 != 0) {
          FUN_00525a30(10,"delayed %dms for lock/sharing conflict",
                       ((iVar5 + 1) * DAT_007666d8 * iVar5) / 2);
        }
        if ((iVar2 != 2) && (iVar2 != 3)) {
          FUN_0057fa50(0xd0a,iVar2,"winAccess",param_2,0x8547);
          FUN_00524410(iVar1);
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
        goto LAB_00520331;
      }
      iVar5 = iVar5 + 1;
      (*(code *)PTR_Sleep_00767300)(iVar5 * DAT_007666d8);
    }
    if (((param_3 == 0) && (local_14._4_4_ == 0)) && (local_c == 0)) {
LAB_00520331:
      uVar3 = 0xffffffff;
    }
    else {
      uVar3 = (uint)local_2c;
    }
  }
  else {
    uVar3 = (*(code *)PTR_GetFileAttributesA_00767174)(iVar1);
  }
  FUN_00524410(iVar1);
  if (param_3 != 0) {
    if (param_3 == 1) {
      if ((uVar3 == 0xffffffff) || ((uVar3 & 1) != 0)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      goto LAB_0052037a;
    }
    if (param_3 != 2) goto LAB_0052037a;
  }
  uVar4 = (uint)(uVar3 != 0xffffffff);
LAB_0052037a:
  *param_4 = uVar4;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00520640 @ 00520640  kind=gamemisc  attributed-by=role:dispatch-target  size=286 */

void FUN_00520640(undefined4 *param_1,undefined4 param_2,int *param_3)

{
  double *pdVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  undefined8 *puVar5;
  double *pdVar6;
  int iVar7;
  float10 fVar8;
  longlong lVar9;
  
  iVar7 = param_1[0xc];
  if ((*(ushort *)(iVar7 + 0x1c) & 0x2000) == 0) {
    FUN_005748c0(iVar7,0x20,0);
    *(undefined2 *)(iVar7 + 0x1c) = 0x2000;
    *(undefined4 *)(iVar7 + 0x10) = *param_1;
    puVar5 = *(undefined8 **)(iVar7 + 4);
    if (puVar5 != (undefined8 *)0x0) {
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5[2] = 0;
      puVar5[3] = 0;
    }
  }
  pdVar6 = *(double **)(iVar7 + 4);
  iVar7 = *param_3;
  if (*(char *)(iVar7 + 0x1e) == '\x03') {
    FUN_0052b630(iVar7);
    uVar4 = *(ushort *)(iVar7 + 0x1c);
    if ((uVar4 & 1) == 0) {
      if ((uVar4 & 4) == 0) {
        if ((uVar4 & 8) == 0) {
          *(char *)(iVar7 + 0x1e) = '\x04' - ((uVar4 & 2) != 0);
        }
        else {
          *(undefined1 *)(iVar7 + 0x1e) = 2;
        }
      }
      else {
        *(undefined1 *)(iVar7 + 0x1e) = 1;
      }
    }
    else {
      *(undefined1 *)(iVar7 + 0x1e) = 5;
    }
  }
  cVar3 = *(char *)(iVar7 + 0x1e);
  if ((pdVar6 != (double *)0x0) && (cVar3 != '\x05')) {
    pdVar1 = pdVar6 + 2;
    uVar2 = *(uint *)pdVar1;
    *(uint *)pdVar1 = *(uint *)pdVar1 + 1;
    *(int *)((int)pdVar6 + 0x14) = *(int *)((int)pdVar6 + 0x14) + (uint)(0xfffffffe < uVar2);
    if (cVar3 == '\x01') {
      lVar9 = FUN_0051c890();
      *pdVar6 = (double)lVar9 + *pdVar6;
      if (*(char *)((int)pdVar6 + 0x19) == '\0' && *(char *)(pdVar6 + 3) == '\0') {
        iVar7 = FUN_00549380(pdVar6 + 1,lVar9);
        if (iVar7 != 0) {
          *(undefined1 *)(pdVar6 + 3) = 1;
          return;
        }
      }
    }
    else {
      fVar8 = (float10)FUN_0051c7a0(*param_3);
      *(undefined1 *)((int)pdVar6 + 0x19) = 1;
      *pdVar6 = (double)fVar8 + *pdVar6;
    }
  }
  return;
}


/* FUN_00520e20 @ 00520e20  kind=gamemisc  attributed-by=role:dispatch-target  size=126 */

void FUN_00520e20(int param_1)

{
  int iVar1;
  double *pdVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80();
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  pdVar2 = *(double **)(iVar1 + 4);
  if (pdVar2 != (double *)0x0) {
    if ((-1 < *(int *)((int)pdVar2 + 0x14)) &&
       ((0 < *(int *)((int)pdVar2 + 0x14) || (*(int *)(pdVar2 + 2) != 0)))) {
      FUN_00574df0(param_1 + 8,*pdVar2 / (double)(longlong)pdVar2[2]);
    }
  }
  return;
}


/* FUN_00520ea0 @ 00520ea0  kind=gamemisc  attributed-by=role:dispatch-target  size=764 */

void FUN_00520ea0(int param_1,byte *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  void *_Dst;
  size_t _Size;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  if (((*param_2 == 0x2f) && (((&DAT_007121d8)[param_2[1]] & 2) != 0)) && (param_2[2] == 0x3a)) {
    param_2 = param_2 + 1;
  }
  if (((DAT_0076b35c != 0) && (bVar1 = *param_2, bVar1 != 0x2f)) &&
     ((bVar1 != 0x5c && ((((&DAT_007121d8)[bVar1] & 2) == 0 || (param_2[1] != 0x3a)))))) {
    iVar2 = *(int *)(param_1 + 8);
    if (param_3 < *(int *)(param_1 + 8)) {
      iVar2 = param_3;
    }
    FUN_005240c0(iVar2,param_4,"%s\\%s",DAT_0076b35c,param_2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar2 = FUN_00533710(param_2);
  if (iVar2 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    iVar3 = (*(code *)PTR_GetFullPathNameW_007671b0)();
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameW1",iVar2,0x85ec);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar3 = iVar3 + 3;
    _Dst = (void *)FUN_0055da00(iVar3 * 2);
    if (_Dst == (void *)0x0) {
LAB_0052117d:
      FUN_00524410(iVar2);
      goto LAB_00521186;
    }
    memset(_Dst,0,iVar3 * 2);
    iVar3 = (*(code *)PTR_GetFullPathNameW_007671b0)(iVar2,iVar3,_Dst,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameW2",iVar2,0x85f9);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      FUN_00524410(_Dst);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00524410(iVar2);
    iVar2 = FUN_0057b270(_Dst);
  }
  else {
    iVar3 = (*(code *)PTR_GetFullPathNameA_007671a4)(iVar2,0,0,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameA1",iVar2,0x8608);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    _Size = iVar3 + 3;
    _Dst = (void *)FUN_0055da00(_Size);
    if (_Dst == (void *)0x0) goto LAB_0052117d;
    memset(_Dst,0,_Size);
    iVar3 = (*(code *)PTR_GetFullPathNameA_007671a4)(iVar2,_Size,_Dst,0);
    if (iVar3 == 0) {
      uVar4 = (*(code *)PTR_GetLastError_007671bc)("GetFullPathNameA2",iVar2,0x8615);
      FUN_0057fa50(1,uVar4);
      FUN_00524410(iVar2);
      FUN_00524410(_Dst);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_00524410(iVar2);
    iVar2 = FUN_0057a3c0(_Dst);
  }
  FUN_00524410(_Dst);
  if (iVar2 != 0) {
    iVar3 = *(int *)(param_1 + 8);
    if (param_3 < *(int *)(param_1 + 8)) {
      iVar3 = param_3;
    }
    FUN_005240c0(iVar3,param_4,&DAT_00716900,iVar2);
    FUN_00524410(iVar2);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
LAB_00521186:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_005211c0 @ 005211c0  kind=gamemisc  attributed-by=role:dispatch-target  size=87 */

void FUN_005211c0(int param_1)

{
  int iVar1;
  undefined8 uVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80();
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  if (*(undefined8 **)(iVar1 + 4) == (undefined8 *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = **(undefined8 **)(iVar1 + 4);
  }
  FUN_00574df0(param_1 + 8,uVar2);
  return;
}


/* FUN_005212c0 @ 005212c0  kind=gamemisc  attributed-by=role:dispatch-target  size=95 */

void FUN_005212c0(undefined4 *param_1,int param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  
  iVar2 = param_1[0xc];
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_005748c0(iVar2,8,0);
    *(undefined2 *)(iVar2 + 0x1c) = 0x2000;
    *(undefined4 *)(iVar2 + 0x10) = *param_1;
    if (*(undefined8 **)(iVar2 + 4) != (undefined8 *)0x0) {
      **(undefined8 **)(iVar2 + 4) = 0;
    }
  }
  puVar3 = *(uint **)(iVar2 + 4);
  if (((param_2 == 0) || (*(char *)(*param_3 + 0x1e) != '\x05')) && (puVar3 != (uint *)0x0)) {
    uVar1 = *puVar3;
    *puVar3 = *puVar3 + 1;
    puVar3[1] = puVar3[1] + (uint)(0xfffffffe < uVar1);
  }
  return;
}


/* FUN_00521390 @ 00521390  kind=gamemisc  attributed-by=role:dispatch-target  size=168 */

void FUN_00521390(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 local_c;
  undefined4 uStack_8;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80(iVar1);
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 == (undefined4 *)0x0) {
    uStack_8 = 0;
    local_c = 0;
  }
  else {
    local_c = *puVar2;
    uStack_8 = puVar2[1];
  }
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_00574d80((undefined4 *)(param_1 + 8));
  }
  FUN_005521a0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x2c));
  *(undefined4 *)(param_1 + 0x1c) = uStack_8;
  *(undefined4 *)(param_1 + 0x18) = local_c;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined2 *)(param_1 + 0x24) = 4;
  *(undefined1 *)(param_1 + 0x26) = 1;
  return;
}


/* FUN_005214d0 @ 005214d0  kind=gamemisc  attributed-by=role:dispatch-target  size=215 */

void FUN_005214d0(int *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar1 = *param_3;
  iVar2 = param_1[0xc];
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_005748c0(iVar2,0x28,0);
    *(undefined2 *)(iVar2 + 0x1c) = 0x2000;
    *(int *)(iVar2 + 0x10) = *param_1;
    puVar3 = *(undefined8 **)(iVar2 + 4);
    if (puVar3 != (undefined8 *)0x0) {
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
      puVar3[4] = 0;
    }
  }
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    if (*(char *)(*param_3 + 0x1e) == '\x05') {
      if (*(short *)(iVar2 + 0x1c) != 0) {
LAB_00521545:
        param_1[0xf] = 1;
        return;
      }
    }
    else {
      if (*(short *)(iVar2 + 0x1c) != 0) {
        iVar4 = *(int *)(*param_1 + 4);
        iVar5 = FUN_0055ddd0(iVar2,iVar1,param_1[0xd]);
        if (iVar4 == 0) {
          if (iVar5 < 1) goto LAB_00521545;
        }
        else if (-1 < iVar5) {
          param_1[0xf] = 1;
          return;
        }
        FUN_00574570(iVar2,iVar1);
        return;
      }
      FUN_00574570(iVar2,iVar1);
    }
  }
  return;
}


/* FUN_00521820 @ 00521820  kind=gamemisc  attributed-by=role:dispatch-target  size=132 */

void FUN_00521820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar1 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80(iVar1);
    *(undefined2 *)(iVar1 + 0x1c) = 1;
    *(undefined4 *)(iVar1 + 4) = 0;
  }
  puVar2 = *(undefined4 **)(iVar1 + 4);
  if (puVar2 != (undefined4 *)0x0) {
    if (*(short *)(puVar2 + 7) != 0) {
      FUN_00574570(param_1 + 8,puVar2);
    }
    if ((*(ushort *)(puVar2 + 7) & 0x2460) != 0) {
      FUN_00574d80(puVar2);
    }
    FUN_005521a0(*puVar2,puVar2[9]);
    puVar2[1] = 0;
    puVar2[9] = 0;
    puVar2[8] = 0;
  }
  return;
}


/* FUN_005218b0 @ 005218b0  kind=gamemisc  attributed-by=role:dispatch-target  size=153 */

void FUN_005218b0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_00533710(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_0076b480 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_0076721c)(local_9c);
    DAT_0076b480 = (local_8c == 2) + 1;
  }
  if (DAT_0076b480 == 2) {
    (*(code *)PTR_LoadLibraryW_00767288)();
  }
  else {
    (*(code *)PTR_LoadLibraryA_0076727c)(iVar1);
  }
  FUN_00524410(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00521950 @ 00521950  kind=gamemisc  attributed-by=role:dispatch-target  size=270 */

void FUN_00521950(undefined4 *param_1,int param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  undefined8 *puVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (*(char *)(*param_3 + 0x1e) != '\x05') {
    iVar2 = param_1[0xc];
    if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
      FUN_005748c0(iVar2,0x1c,0);
      *(undefined2 *)(iVar2 + 0x1c) = 0x2000;
      *(undefined4 *)(iVar2 + 0x10) = *param_1;
      puVar3 = *(undefined8 **)(iVar2 + 4);
      if (puVar3 != (undefined8 *)0x0) {
        *puVar3 = 0;
        puVar3[1] = 0;
        puVar3[2] = 0;
        *(undefined4 *)(puVar3 + 3) = 0;
      }
    }
    iVar2 = *(int *)(iVar2 + 4);
    if (iVar2 != 0) {
      iVar4 = param_1[2];
      cVar1 = *(char *)(iVar2 + 0x19);
      *(undefined1 *)(iVar2 + 0x19) = 2;
      *(undefined4 *)(iVar2 + 0x14) = *(undefined4 *)(iVar4 + 0x50);
      if (cVar1 != '\0') {
        if (param_2 == 2) {
          puVar5 = (undefined *)FUN_0056bce0(param_3[1],1);
          uVar6 = FUN_005288e0(param_3[1]);
        }
        else {
          puVar5 = &DAT_00718150;
          uVar6 = 1;
        }
        FUN_00567e70(iVar2,puVar5,uVar6);
      }
      uVar6 = FUN_0056bce0(*param_3,1);
      iVar4 = *param_3;
      if (((*(byte *)(iVar4 + 0x1c) & 0x10) == 0) && (iVar7 = FUN_0056bce0(iVar4,1), iVar7 == 0)) {
        FUN_00567e70(iVar2,uVar6,0);
        return;
      }
      iVar7 = *(int *)(iVar4 + 0x18);
      if ((*(ushort *)(iVar4 + 0x1c) & 0x4000) != 0) {
        iVar7 = iVar7 + *(int *)(iVar4 + 0x10);
      }
      FUN_00567e70(iVar2,uVar6,iVar7);
    }
  }
  return;
}


/* FUN_005223b0 @ 005223b0  kind=gamemisc  attributed-by=role:dispatch-target  size=173 */

void FUN_005223b0(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if ((*(ushort *)(iVar2 + 0x1c) & 0x2000) == 0) {
    FUN_00574d80(iVar2);
    *(undefined2 *)(iVar2 + 0x1c) = 1;
    *(undefined4 *)(iVar2 + 4) = 0;
  }
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    if (*(char *)(iVar2 + 0x1a) != '\0') {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
      return;
    }
    if (*(char *)(iVar2 + 0x18) != '\0') {
      FUN_0051d110(param_1);
      return;
    }
    uVar1 = FUN_00567fb0(iVar2);
    iVar2 = FUN_00575040(param_1 + 8,uVar1,0xffffffff,1,FUN_00524410);
    if (iVar2 == 0x12) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
    }
  }
  return;
}


/* FUN_00522760 @ 00522760  kind=gamemisc  attributed-by=role:dispatch-target  size=177 */

void FUN_00522760(undefined4 param_1,uint param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 local_18;
  undefined4 local_10;
  undefined4 uStack_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = 0;
  if (0xf < param_2) {
    (*(code *)PTR_GetSystemTime_007671e0)(&local_18);
    *param_3 = local_18;
    param_3[1] = CONCAT44(uStack_c,local_10);
    iVar2 = 0x10;
  }
  if (3 < param_2 - iVar2) {
    uVar1 = (*(code *)PTR_GetCurrentProcessId_00767150)();
    *(undefined4 *)((int)param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  }
  if (3 < param_2 - iVar2) {
    uVar1 = (*(code *)PTR_GetTickCount_00767210)();
    *(undefined4 *)((int)param_3 + iVar2) = uVar1;
    iVar2 = iVar2 + 4;
  }
  if (7 < param_2 - iVar2) {
    (*(code *)PTR_QueryPerformanceCounter_007672d0)(&local_10);
    *(undefined4 *)((int)param_3 + iVar2) = local_10;
    *(undefined4 *)((int)param_3 + iVar2 + 4) = uStack_c;
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00522ddd @ 00522ddd  kind=gamemisc  attributed-by=role:dispatch-target  size=85 */

void FUN_00522ddd(void)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int unaff_ESI;
  int iVar3;
  
  iVar2 = 0;
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_0054d340();
  iVar3 = 0;
  if (0 < *(int *)(unaff_ESI + 0x14)) {
    do {
      iVar1 = *(int *)(iVar2 + 4 + *(int *)(unaff_ESI + 0x10));
      if (iVar1 != 0) {
        iVar1 = FUN_0055f340(**(undefined4 **)(iVar1 + 4));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar1;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 0x10;
    } while (iVar3 < *(int *)(unaff_ESI + 0x14));
    iVar2 = *(int *)(unaff_EBP + 8);
  }
  FUN_0054de20();
  **(int **)(unaff_EBP + 0x10) = iVar2;
  **(undefined4 **)(unaff_EBP + 0x14) = 0;
  FUN_00522dc1();
  return;
}


/* FUN_00522e32 @ 00522e32  kind=gamemisc  attributed-by=role:dispatch-target  size=322 */

void FUN_00522e32(void)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int unaff_EBP;
  int unaff_ESI;
  
  *(undefined4 *)(unaff_EBP + 8) = 0;
  FUN_0054d340();
  iVar3 = *(int *)(unaff_ESI + 0x14);
  *(int *)(unaff_ESI + 0x1f0) = unaff_EBP + 8;
  *(undefined4 *)(unaff_EBP + 0xc) = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    *(undefined4 *)(unaff_EBP + -4) = 0;
    do {
      iVar3 = *(int *)(iVar3 + 0xc + *(int *)(unaff_ESI + 0x10));
      *(int *)(unaff_EBP + -8) = iVar3;
      if (iVar3 != 0) {
        iVar2 = (*DAT_00766610)(0x14);
        *(int *)(unaff_EBP + 8) =
             *(int *)(unaff_EBP + 8) +
             iVar2 * (*(int *)(iVar3 + 0x3c) + *(int *)(iVar3 + 0x2c) + *(int *)(iVar3 + 0x1c) +
                     *(int *)(iVar3 + 0xc));
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x14));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x34));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x24));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        iVar2 = (*DAT_00766608._4_4_)(*(undefined4 *)(iVar3 + 0x44));
        *(int *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) + iVar2;
        for (puVar1 = *(undefined4 **)(iVar3 + 0x30); puVar1 != (undefined4 *)0x0;
            puVar1 = (undefined4 *)*puVar1) {
          if (puVar1[2] != 0) {
            FUN_00552b20();
            FUN_005521a0();
            FUN_005521a0();
            FUN_00555e30();
            FUN_0055afc0();
            FUN_005521a0();
          }
        }
        for (puVar1 = *(undefined4 **)(*(int *)(unaff_EBP + -8) + 0x10); puVar1 != (undefined4 *)0x0
            ; puVar1 = (undefined4 *)*puVar1) {
          FUN_005529a0();
        }
      }
      iVar2 = *(int *)(unaff_EBP + 0xc) + 1;
      iVar3 = *(int *)(unaff_EBP + -4) + 0x10;
      *(int *)(unaff_EBP + 0xc) = iVar2;
      *(int *)(unaff_EBP + -4) = iVar3;
    } while (iVar2 < *(int *)(unaff_ESI + 0x14));
  }
  *(undefined4 *)(unaff_ESI + 0x1f0) = 0;
  FUN_0054de20();
  puVar1 = *(undefined4 **)(unaff_EBP + 0x10);
  **(undefined4 **)(unaff_EBP + 0x14) = 0;
  *puVar1 = *(undefined4 *)(unaff_EBP + 8);
  FUN_00522dc1();
  return;
}


/* FUN_00528350 @ 00528350  kind=gamemisc  attributed-by=role:dispatch-target  size=85 */

LPCRITICAL_SECTION FUN_00528350(uint param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (param_1 < 2) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_0055da00(0x1c);
    if (lpCriticalSection != (LPCRITICAL_SECTION)0x0) {
      lpCriticalSection->DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      lpCriticalSection->LockCount = 0;
      lpCriticalSection->RecursionCount = 0;
      lpCriticalSection->OwningThread = (HANDLE)0x0;
      lpCriticalSection->LockSemaphore = (HANDLE)0x0;
      lpCriticalSection->SpinCount = 0;
      lpCriticalSection[1].DebugInfo = (PRTL_CRITICAL_SECTION_DEBUG)0x0;
      InitializeCriticalSection(lpCriticalSection);
    }
    return lpCriticalSection;
  }
  return (LPCRITICAL_SECTION)(&DAT_0076b3d0 + (param_1 - 2) * 0x1c);
}


/* FUN_0054bd10 @ 0054bd10  kind=gamemisc  attributed-by=role:dispatch-target  size=584 */

int FUN_0054bd10(int param_1,uint *param_2)

{
  void *pvVar1;
  undefined1 uVar2;
  byte bVar3;
  int *_Dst;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar7;
  size_t _Size;
  uint *puVar8;
  int iVar9;
  int local_24;
  int local_1c;
  int local_18;
  uint local_10;
  int local_c;
  void *local_8;
  
  local_18 = -1;
  _Dst = (int *)FUN_0055da00(0x200);
  if (_Dst != (int *)0x0) {
    memset(_Dst,0,0x200);
    *_Dst = param_1;
  }
  _Size = ((int)((param_1 + 7 >> 0x1f & 7U) + param_1 + 7) >> 3) + 1;
  local_8 = (void *)FUN_0055da00(_Size);
  if (local_8 != (void *)0x0) {
    memset(local_8,0,_Size);
  }
  iVar4 = FUN_00579f80();
  if (iVar4 == 0) {
    iVar4 = FUN_0055da00(0x200);
  }
  else {
    iVar4 = 0;
  }
  if (((_Dst != (int *)0x0) && (local_8 != (void *)0x0)) && (iVar4 != 0)) {
    uVar6 = *param_2;
    local_c = 0;
    while (uVar6 != 0) {
      if (((int)uVar6 < 1) || ((2 < (int)uVar6 && (uVar6 != 5)))) {
        local_24 = 2;
        iVar5 = 4;
        puVar8 = &local_10;
        if (DAT_007665e4 == 0) {
          local_1c = 0;
        }
        else {
          local_1c = (*DAT_00766628)(5);
          if (local_1c != 0) {
            (*DAT_00766630)(local_1c);
          }
        }
        do {
          uVar2 = FUN_00544c20();
          *(undefined1 *)puVar8 = uVar2;
          puVar8 = (uint *)((int)puVar8 + 1);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (local_1c != 0) {
          (*DAT_00766638)(local_1c);
        }
      }
      else {
        local_10 = param_2[local_c + 2] - 1;
        local_24 = 4;
        param_2[local_c + 2] = param_2[local_c + 3] + param_2[local_c + 2];
      }
      param_2[local_c + 1] = param_2[local_c + 1] - 1;
      if (0 < (int)param_2[local_c + 1]) {
        local_24 = 0;
      }
      local_c = local_c + local_24;
      local_10 = (uint)((longlong)(ulonglong)(local_10 & 0x7fffffff) % (longlong)param_1);
      iVar5 = local_10 + 1;
      pbVar7 = (byte *)((iVar5 >> 3) + (int)local_8);
      bVar3 = '\x01' << ((byte)iVar5 & 7);
      if ((uVar6 & 1) == 0) {
        *pbVar7 = *pbVar7 & ~bVar3;
        FUN_0054bf60(_Dst,iVar5,iVar4);
      }
      else {
        *pbVar7 = *pbVar7 | bVar3;
        if ((uVar6 != 5) && (iVar5 = FUN_0054c100(_Dst,iVar5), iVar5 != 0)) goto LAB_0054bf36;
      }
      uVar6 = param_2[local_c];
    }
    iVar5 = FUN_0054c2e0(_Dst,param_1 + 1);
    pvVar1 = local_8;
    iVar5 = iVar5 + (*_Dst - param_1);
    iVar9 = 1;
    local_18 = iVar5;
    if (0 < param_1) {
      do {
        uVar6 = FUN_0054c2e0(_Dst,iVar9);
        local_18 = iVar9;
        if (((*(byte *)((iVar9 >> 3) + (int)pvVar1) & (byte)(1 << ((byte)iVar9 & 7))) != 0) != uVar6
           ) break;
        iVar9 = iVar9 + 1;
        local_18 = iVar5;
      } while (iVar9 <= param_1);
    }
  }
LAB_0054bf36:
  FUN_00524410(iVar4);
  FUN_00524410(local_8);
  FUN_0054c040(_Dst);
  return local_18;
}


/* FUN_0063d930 @ 0063d930  kind=gamemisc  attributed-by=role:dispatch-target  size=47 */

void * FUN_0063d930(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  void *extraout_EAX;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_2 < 0x40000000) && (pvVar1 = operator_new(param_2 << 2), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063d955. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  std::_Xbad_alloc();
  return extraout_EAX;
}


/* FUN_0063d960 @ 0063d960  kind=gamemisc  attributed-by=role:dispatch-target  size=47 */

void * FUN_0063d960(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  void *extraout_EAX;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_2 < 0x35e50d8) && (pvVar1 = operator_new(param_2 * 0x4c), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063d985. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  std::_Xbad_alloc();
  return extraout_EAX;
}


/* FUN_0063d990 @ 0063d990  kind=gamemisc  attributed-by=role:dispatch-target  size=47 */

void * FUN_0063d990(undefined4 param_1,uint param_2)

{
  void *pvVar1;
  void *extraout_EAX;
  
  if (param_2 == 0) {
    return (void *)0x0;
  }
  if ((param_2 < 0x2108422) && (pvVar1 = operator_new(param_2 * 0x7c), pvVar1 != (void *)0x0)) {
    return pvVar1;
  }
                    /* WARNING: Could not recover jumptable at 0x0063d9b5. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
  std::_Xbad_alloc();
  return extraout_EAX;
}


/* FUN_0068e195 @ 0068e195  kind=gamemisc  attributed-by=role:dispatch-target  size=75 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0068e195(void)

{
  _atexit(FUN_0068e85e);
  _DAT_0076e29c = DAT_0076e2b0;
  _DAT_0076e294 =
       __getmainargs((int *)&DAT_0076e288,(char ***)&DAT_0076e28c,(char ***)&DAT_0076e290,
                     DAT_0076e2ac,(_startupinfo *)&DAT_0076e29c);
  if (_DAT_0076e294 < 0) {
    _amsg_exit(8);
  }
  return;
}


/* entry @ 0068e1e0  kind=gamemisc  attributed-by=role:dispatch-target  size=396 */

/* WARNING: Function: __SEH_prolog4 replaced with injection: SEH_prolog4 */
/* WARNING: Function: __SEH_epilog4 replaced with injection: EH_epilog3 */

int entry(void)

{
  byte bVar1;
  bool bVar2;
  void *pvVar3;
  WORD WVar4;
  void *pvVar5;
  BOOL BVar6;
  int iVar7;
  byte *pbVar8;
  
  ___security_init_cookie();
  WVar4 = __crtGetShowWindowMode();
  bVar2 = false;
  do {
    pvVar5 = (void *)0x0;
    LOCK();
    pvVar3 = StackBase;
    if (DAT_0076e2e4 != (void *)0x0) {
      pvVar5 = DAT_0076e2e4;
      pvVar3 = DAT_0076e2e4;
    }
    DAT_0076e2e4 = pvVar3;
    UNLOCK();
    if (pvVar5 == (void *)0x0) goto LAB_0068e231;
  } while (pvVar5 != StackBase);
  bVar2 = true;
LAB_0068e231:
  if (DAT_0076e2e8 == 1) {
    _amsg_exit(0x1f);
  }
  else if (DAT_0076e2e8 == 0) {
    DAT_0076e2e8 = 1;
    iVar7 = initterm_e(&DAT_006fc8c8,&DAT_006fc8dc);
    if (iVar7 != 0) {
      return 0xff;
    }
  }
  else {
    DAT_0076e284 = 1;
  }
  if (DAT_0076e2e8 == 1) {
    initterm(&DAT_006fc62c,&DAT_006fc8c4);
    DAT_0076e2e8 = 2;
  }
  if (!bVar2) {
    LOCK();
    DAT_0076e2e4 = (void *)0x0;
    UNLOCK();
  }
  if ((DAT_0076e2ec != (code *)0x0) &&
     (BVar6 = __IsNonwritableInCurrentImage((PBYTE)&DAT_0076e2ec), BVar6 != 0)) {
    (*DAT_0076e2ec)(0,2,0);
  }
  pbVar8 = *(byte **)_acmdln_exref;
  bVar2 = false;
  while ((bVar1 = *pbVar8, 0x20 < bVar1 || ((bVar1 != 0 && (bVar2))))) {
    if (bVar1 == 0x22) {
      bVar2 = !bVar2;
    }
    iVar7 = _ismbblead((uint)bVar1);
    if (iVar7 != 0) {
      pbVar8 = pbVar8 + 1;
    }
    pbVar8 = pbVar8 + 1;
  }
  for (; (*pbVar8 != 0 && (*pbVar8 < 0x21)); pbVar8 = pbVar8 + 1) {
  }
  DAT_0076e280 = FUN_004c8ae0(0x400000,0,pbVar8,WVar4);
  if (DAT_0076e298 != 0) {
    if (DAT_0076e284 == 0) {
      _cexit();
    }
    return DAT_0076e280;
  }
                    /* WARNING: Subroutine does not return */
  exit(DAT_0076e280);
}


/* FUN_0068eb30 @ 0068eb30  kind=gamemisc  attributed-by=role:dispatch-target  size=141 */

uint FUN_0068eb30(uint param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 local_8 [8];
  
  if (param_1 == 0) {
    return 0;
  }
  if (param_2 == param_3) {
    return param_1;
  }
  iVar3 = (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
  iVar2 = (param_2 ^ (int)param_2 >> 0x1f) - ((int)param_2 >> 0x1f);
  iVar4 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f);
  if ((iVar3 < 0xb505) && (iVar2 < 0xb505)) {
    if (0 < iVar4) {
      uVar1 = (iVar3 * iVar2) / iVar4;
      goto LAB_0068ebb0;
    }
  }
  else if (0 < iVar4) {
    FUN_0068e9a0(local_8);
    uVar1 = FUN_0068ea00();
    goto LAB_0068ebb0;
  }
  uVar1 = 0x7fffffff;
LAB_0068ebb0:
  if ((int)(param_1 ^ param_2 ^ param_3) < 0) {
    uVar1 = -uVar1;
  }
  return uVar1;
}


/* FUN_0068ed60 @ 0068ed60  kind=gamemisc  attributed-by=role:dispatch-target  size=236 */

void FUN_0068ed60(undefined4 *param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  param_3 = param_3 << 0x10;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (int *)0x0)) {
    uVar1 = param_1[1];
    uVar2 = *param_1;
    iVar5 = FUN_0068ea60(uVar2,param_2[1],param_3);
    iVar6 = FUN_0068ea60(uVar1,param_2[3],param_3);
    uVar3 = param_1[3];
    uVar4 = param_1[2];
    iVar7 = FUN_0068ea60(uVar4,*param_2,param_3);
    iVar8 = FUN_0068ea60(uVar3,param_2[2],param_3);
    iVar9 = FUN_0068ea60(uVar4,param_2[1],param_3);
    iVar10 = FUN_0068ea60(uVar3,param_2[3],param_3);
    iVar11 = FUN_0068ea60(uVar2,*param_2,param_3);
    iVar12 = FUN_0068ea60(uVar1,param_2[2],param_3);
    *param_2 = iVar11 + iVar12;
    param_2[1] = iVar5 + iVar6;
    param_2[2] = iVar7 + iVar8;
    param_2[3] = iVar9 + iVar10;
  }
  return;
}


/* FUN_006903a0 @ 006903a0  kind=gamemisc  attributed-by=role:dispatch-target  size=133 */

undefined4 FUN_006903a0(short *param_1,short *param_2)

{
  if ((((param_1 != (short *)0x0) && (param_2 != (short *)0x0)) && (param_1[1] == param_2[1])) &&
     (*param_1 == *param_2)) {
    if (param_1 != param_2) {
      memcpy(*(void **)(param_2 + 2),*(void **)(param_1 + 2),param_1[1] * 8);
      memcpy(*(void **)(param_2 + 4),*(void **)(param_1 + 4),(int)param_1[1]);
      memcpy(*(void **)(param_2 + 6),*(void **)(param_1 + 6),*param_1 * 2);
      *(uint *)(param_2 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe | *(uint *)(param_2 + 8) & 1;
    }
    return 0;
  }
  return 6;
}


/* FUN_006938e0 @ 006938e0  kind=gamemisc  attributed-by=role:dispatch-target  size=87 */

int FUN_006938e0(void)

{
  int iVar1;
  undefined4 local_24;
  
  iVar1 = FUN_006923d0();
  if (iVar1 == 0) {
    iVar1 = FUN_00693750();
    FUN_006915d0(local_24,0);
  }
  return iVar1;
}


/* FUN_00693940 @ 00693940  kind=gamemisc  attributed-by=role:dispatch-target  size=235 */

char * FUN_00693940(undefined4 param_1,char *param_2)

{
  char cVar1;
  char *in_EAX;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  int local_4;
  
  local_4 = 0;
  pcVar2 = in_EAX;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar2 = (char *)FUN_00692230(param_1,pcVar2 + (int)(pcVar3 + ((1 - (int)(param_2 + 1)) -
                                                                (int)(in_EAX + 1))),&local_4);
  if (local_4 == 0) {
    pcVar4 = strrchr(in_EAX,0x2f);
    pcVar3 = param_2;
    if (pcVar4 == (char *)0x0) {
      *pcVar2 = '\0';
    }
    else {
      strncpy(pcVar2,in_EAX,(size_t)(pcVar4 + (1 - (int)in_EAX)));
      pcVar2[(int)(pcVar4 + (1 - (int)in_EAX))] = '\0';
      in_EAX = pcVar4 + 1;
    }
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar3 - (int)param_2;
    pcVar3 = pcVar2 + -1;
    do {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; pcVar4 = in_EAX, uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *param_2;
      param_2 = param_2 + 1;
      pcVar3 = pcVar3 + 1;
    }
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)in_EAX;
    pcVar3 = pcVar2 + -1;
    do {
      pcVar4 = pcVar3 + 1;
      pcVar3 = pcVar3 + 1;
    } while (*pcVar4 != '\0');
    for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined4 *)pcVar3 = *(undefined4 *)in_EAX;
      in_EAX = in_EAX + 4;
      pcVar3 = pcVar3 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pcVar3 = *in_EAX;
      in_EAX = in_EAX + 1;
      pcVar3 = pcVar3 + 1;
    }
    return pcVar2;
  }
  return (char *)0x0;
}


/* FUN_00698060 @ 00698060  kind=gamemisc  attributed-by=role:dispatch-target  size=195 */

undefined4 FUN_00698060(char *param_1,int param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 *in_EAX;
  int iVar3;
  char cVar4;
  char *pcVar5;
  
  *in_EAX = param_1;
  cVar2 = *param_1;
  pcVar5 = param_1;
  while (((cVar2 != '\0' && (*pcVar5 != ' ')) && (*pcVar5 != '\t'))) {
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar5;
  }
  cVar2 = *pcVar5;
  cVar4 = -1;
  if (cVar2 != '\0') {
    *pcVar5 = '\0';
    cVar4 = cVar2;
  }
  iVar3 = FUN_00697df0();
  if (cVar4 != -1) {
    *pcVar5 = cVar4;
  }
  if ((iVar3 != 0) && (*(int *)(iVar3 + 4) != 1)) {
    return 0;
  }
  *pcVar5 = '\0';
  pcVar5 = pcVar5 + 1;
  param_1 = param_1 + param_2;
  cVar2 = *pcVar5;
  while ((cVar2 != '\0' && ((cVar2 == ' ' || (cVar2 == '\t'))))) {
    pcVar1 = pcVar5 + 1;
    pcVar5 = pcVar5 + 1;
    cVar2 = *pcVar1;
  }
  if (*pcVar5 == '\"') {
    pcVar5 = pcVar5 + 1;
  }
  *param_3 = pcVar5;
  if (pcVar5 < param_1) {
    while ((param_1[-1] == ' ' || (param_1[-1] == '\t'))) {
      param_1 = param_1 + -1;
      *param_1 = '\0';
      if (param_1 <= pcVar5) {
        return 1;
      }
    }
    if ((pcVar5 < param_1) && (param_1[-1] == '\"')) {
      param_1[-1] = '\0';
    }
  }
  return 1;
}


/* FUN_00698500 @ 00698500  kind=gamemisc  attributed-by=role:dispatch-target  size=2300 */

int FUN_00698500(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint *param_5
                )

{
  uint *puVar1;
  uint *puVar2;
  undefined2 uVar3;
  short sVar4;
  uint uVar5;
  undefined4 uVar6;
  void *_Src;
  void *_Dst;
  int iVar7;
  short sVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  char *pcVar12;
  uint uVar13;
  int *piVar14;
  int *piVar15;
  int local_c;
  int *local_8;
  int *local_4;
  
  puVar2 = param_5;
  piVar14 = param_1;
  uVar11 = param_5[8];
  iVar9 = *param_1;
  local_c = 0;
  uVar6 = *(undefined4 *)(uVar11 + 0x4088);
  if ((((iVar9 == 0x4d4d4f43) && ((char)param_1[1] == 'E')) && (*(char *)((int)param_1 + 5) == 'N'))
     && (*(char *)((int)param_1 + 6) == 'T')) {
    piVar14 = (int *)((int)param_1 + 7);
    if (*(char *)piVar14 != '\0') {
      piVar14 = param_1 + 2;
    }
    param_5 = (uint *)uVar6;
    local_c = FUN_00697e30(piVar14);
  }
  else {
    local_8 = (int *)*param_5;
    if (((uint)local_8 & 0x20) == 0) {
      if ((iVar9 == 0x52414843) && ((char)param_1[1] == 'S')) {
        param_5 = (uint *)uVar6;
        local_c = FUN_006975c0(param_1,param_2);
        if (local_c == 0) {
          uVar5 = FUN_00697a40(0);
          *(uint *)(uVar11 + 0x30) = uVar5;
          puVar2[1] = uVar5;
          if (uVar5 == 0) {
            *(undefined4 *)(uVar11 + 0x30) = 0x40;
          }
          if (puVar2[1] < 0x110000) {
            uVar6 = FUN_00693a60(param_5,0x24,0,*(undefined4 *)(uVar11 + 0x30),0,&local_c);
            *(undefined4 *)(uVar11 + 0x38) = uVar6;
            if (local_c == 0) {
              *puVar2 = *puVar2 | 0x20;
              return 0;
            }
          }
          else {
            local_c = 6;
          }
        }
      }
      else {
        local_c = 0xb4;
        param_5 = (uint *)uVar6;
      }
      goto LAB_00698dd5;
    }
    if (((iVar9 == 0x46444e45) && ((char)param_1[1] == 'O')) &&
       ((*(char *)((int)param_1 + 5) == 'N' && (*(char *)((int)param_1 + 6) == 'T')))) {
      param_5 = (uint *)uVar6;
      qsort(*(void **)(uVar11 + 0x38),*(size_t *)(uVar11 + 0x34),0x24,
            (_PtFuncCompare *)&LAB_00697cc0);
      *puVar2 = *puVar2 & 0xfffffffe;
    }
    else {
      if (((iVar9 == 0x43444e45) && ((char)param_1[1] == 'H')) &&
         ((*(char *)((int)param_1 + 5) == 'A' && (*(char *)((int)param_1 + 6) == 'R')))) {
        param_5[7] = 0;
        *param_5 = (uint)local_8 & 0xfffff03f;
        return 0;
      }
      local_4 = (int *)((uint)local_8 & 0x40);
      if (((local_4 != (int *)0x0) && (param_5[7] == 0xffffffff)) && (*(int *)(param_5[9] + 4) == 0)
         ) {
        return 0;
      }
      uVar5 = 9;
      pcVar12 = "STARTCHAR";
      piVar15 = param_1;
      do {
        if (*piVar15 != *(int *)pcVar12) goto LAB_006987a9;
        uVar5 = uVar5 - 4;
        piVar15 = piVar15 + 1;
        pcVar12 = (char *)((int)pcVar12 + 4);
      } while (3 < uVar5);
      if ((char)*(int *)pcVar12 == (char)*piVar15) {
        puVar1 = param_5 + 6;
        param_1 = piVar15;
        param_5 = (uint *)uVar6;
        FUN_00691290(uVar6,*puVar1);
        puVar2[6] = 0;
        local_c = FUN_006975c0(piVar14,param_2);
        if (local_c != 0) goto LAB_00698dd5;
        FUN_00697500();
        _Src = (void *)FUN_00697540(puVar2 + 0x80a,0x20,&param_1);
        piVar15 = param_1;
        if (_Src == (void *)0x0) {
LAB_00698758:
          param_1 = piVar15;
          local_c = 3;
          goto LAB_00698dd5;
        }
        pcVar12 = (char *)((int)param_1 + 1);
        _Dst = (void *)FUN_00693a60(param_5,1,0,pcVar12,0,&local_c);
        puVar2[6] = (uint)_Dst;
        if (local_c != 0) goto LAB_00698dd5;
        memcpy(_Dst,_Src,(size_t)pcVar12);
        *puVar2 = *puVar2 | 0x40;
      }
      else {
LAB_006987a9:
        pcVar12 = "ENCODING";
        piVar15 = param_1 + -0x1c8d12;
        uVar5 = 8;
        do {
          if (*(int *)((int)pcVar12 + (int)piVar15) != *(int *)pcVar12) {
            if (param_5[7] == 0xffffffff) {
              iVar9 = *(int *)(uVar11 + 0x40);
              iVar7 = *(int *)(uVar11 + 0x44);
            }
            else {
              iVar9 = *(int *)(uVar11 + 0x34);
              iVar7 = *(int *)(uVar11 + 0x38);
            }
            iVar9 = iVar7 + -0x24 + iVar9 * 0x24;
            if (((uint)local_8 & 0x800) != 0) {
              if (param_5[2] < (uint)*(ushort *)(iVar9 + 0xe)) {
                pbVar10 = (byte *)(param_5[2] * *(int *)(iVar9 + 0x1c) + *(int *)(iVar9 + 0x18));
                local_8 = (int *)(*(int *)(iVar9 + 0x1c) * 2);
                param_1 = (int *)0x0;
                if (local_8 != (int *)0x0) {
                  do {
                    local_4 = (int *)((int)param_1 + 1);
                    *pbVar10 = *pbVar10 * '\x10' +
                               (&DAT_007232b0)[((char *)((int)piVar14 + -1))[(int)local_4]];
                    if ((local_4 < local_8) && (((uint)param_1 & 1) != 0)) {
                      pbVar10 = pbVar10 + 1;
                      *pbVar10 = 0;
                    }
                    param_1 = local_4;
                  } while (local_4 < local_8);
                }
                if (*(ushort *)(iVar9 + 0xc) != 0) {
                  *pbVar10 = *pbVar10 &
                             (&DAT_00723390)
                             [(uint)*(ushort *)(param_5[8] + 0x4086) *
                              (uint)*(ushort *)(iVar9 + 0xc) & 7];
                }
                if (((*(char *)((int)local_8 + (int)piVar14) == '0') ||
                    ((&DAT_007232b0)[*(char *)((int)local_8 + (int)piVar14)] != '\0')) &&
                   ((*param_5 & 0x40000000) == 0)) {
                  *param_5 = *param_5 | 0x40000000;
                  *(undefined2 *)(uVar11 + 0x4084) = 1;
                }
                param_5[2] = param_5[2] + 1;
                param_5 = (uint *)uVar6;
              }
              else {
                if ((int)local_8 < 0) {
                  return 0;
                }
                *param_5 = (uint)local_8 | 0x80000000;
                *(undefined2 *)(uVar11 + 0x4084) = 1;
                param_1 = piVar15;
                param_5 = (uint *)uVar6;
              }
              goto LAB_00698dd1;
            }
            iVar7 = *param_1;
            if (((iVar7 == 0x44495753) && ((char)param_1[1] == 'T')) &&
               (*(char *)((int)param_1 + 5) == 'H')) {
              if (-1 < (char)local_8) {
                local_c = 0xb6;
                param_1 = piVar15;
                param_5 = (uint *)uVar6;
                goto LAB_00698dd5;
              }
              param_1 = piVar15;
              param_5 = (uint *)uVar6;
              local_c = FUN_006975c0(piVar14,param_2);
              if (local_c != 0) goto LAB_00698dd5;
              uVar3 = FUN_00697a40(0);
              *(undefined2 *)(iVar9 + 8) = uVar3;
              *puVar2 = *puVar2 | 0x100;
              goto LAB_00698dd1;
            }
            if (((iVar7 == 0x44495744) && ((char)param_1[1] == 'T')) &&
               (*(char *)((int)param_1 + 5) == 'H')) {
              param_1 = piVar15;
              param_5 = (uint *)uVar6;
              local_c = FUN_006975c0(piVar14,param_2);
              if (local_c != 0) goto LAB_00698dd5;
              uVar3 = FUN_00697a40(0);
              *(undefined2 *)(iVar9 + 10) = uVar3;
              if ((*puVar2 & 0x100) == 0) {
                uVar3 = FUN_0068ea60(uVar3,72000,*(int *)(uVar11 + 0x14) * *(int *)(uVar11 + 0x10));
                *(undefined2 *)(iVar9 + 8) = uVar3;
              }
              *puVar2 = *puVar2 | 0x200;
              goto LAB_00698dd1;
            }
            if ((((char)iVar7 != 'B') || (*(char *)((int)param_1 + 1) != 'B')) ||
               (*(char *)((int)param_1 + 2) != 'X')) {
              param_5 = (uint *)uVar6;
              if (((iVar7 != 0x4d544942) || ((char)param_1[1] != 'A')) ||
                 (*(char *)((int)param_1 + 5) != 'P')) goto LAB_00698758;
              if (((uint)local_8 & 0x400) == 0) {
                local_c = 0xb7;
                param_1 = piVar15;
              }
              else {
                iVar7 = (int)((uint)*(ushort *)(uVar11 + 0x4086) * (uint)*(ushort *)(iVar9 + 0xc) +
                             7) >> 3;
                uVar11 = (uint)*(ushort *)(iVar9 + 0xe) * iVar7;
                *(int *)(iVar9 + 0x1c) = iVar7;
                if (uVar11 < 0x10000) {
                  *(short *)(iVar9 + 0x20) = (short)uVar11;
                  param_1 = piVar15;
                  uVar6 = FUN_00693a60(uVar6,1,0,uVar11 & 0xffff,0,&local_c);
                  *(undefined4 *)(iVar9 + 0x18) = uVar6;
                  if (local_c == 0) {
                    *puVar2 = *puVar2 | 0x800;
                    puVar2[2] = 0;
                    return 0;
                  }
                }
                else {
                  local_c = 0xb8;
                  param_1 = piVar15;
                }
              }
              goto LAB_00698dd5;
            }
            param_1 = piVar15;
            param_5 = (uint *)uVar6;
            local_c = FUN_006975c0(piVar14,param_2);
            if (local_c != 0) goto LAB_00698dd5;
            uVar3 = FUN_00697be0(0);
            *(undefined2 *)(iVar9 + 0xc) = uVar3;
            uVar3 = FUN_00697be0(0);
            *(undefined2 *)(iVar9 + 0xe) = uVar3;
            uVar3 = FUN_00697be0(0);
            *(undefined2 *)(iVar9 + 0x10) = uVar3;
            sVar4 = FUN_00697be0(0);
            sVar8 = *(short *)(iVar9 + 0xe) + sVar4;
            *(short *)(iVar9 + 0x12) = sVar4;
            *(short *)(iVar9 + 0x14) = sVar8;
            *(short *)(iVar9 + 0x16) = -sVar4;
            sVar4 = *(short *)((int)puVar2 + 0x12);
            if (sVar4 < sVar8) {
              sVar4 = sVar8;
            }
            *(short *)((int)puVar2 + 0x12) = sVar4;
            sVar4 = *(short *)(iVar9 + 0x16);
            if (*(short *)(iVar9 + 0x16) <= (short)puVar2[5]) {
              sVar4 = (short)puVar2[5];
            }
            *(short *)(puVar2 + 5) = sVar4;
            sVar4 = *(short *)(iVar9 + 0xc) + *(short *)(iVar9 + 0x10);
            *(short *)((int)puVar2 + 0x16) = sVar4;
            if (sVar4 <= (short)puVar2[4]) {
              sVar4 = (short)puVar2[4];
            }
            *(short *)(puVar2 + 4) = sVar4;
            sVar4 = *(short *)(iVar9 + 0x10);
            if ((short)puVar2[3] <= *(short *)(iVar9 + 0x10)) {
              sVar4 = (short)puVar2[3];
            }
            *(short *)(puVar2 + 3) = sVar4;
            sVar4 = *(short *)(iVar9 + 0x10);
            if (*(short *)(iVar9 + 0x10) <= *(short *)((int)puVar2 + 0xe)) {
              sVar4 = *(short *)((int)puVar2 + 0xe);
            }
            *(short *)((int)puVar2 + 0xe) = sVar4;
            if ((*puVar2 & 0x200) == 0) {
              *(undefined2 *)(iVar9 + 10) = *(undefined2 *)(iVar9 + 0xc);
            }
            if ((*(int *)puVar2[9] != 0) &&
               (sVar4 = FUN_0068ea60(*(undefined2 *)(iVar9 + 10),72000,
                                     *(int *)(uVar11 + 0x14) * *(int *)(uVar11 + 0x10)),
               sVar4 != *(short *)(iVar9 + 8))) {
              *(short *)(iVar9 + 8) = sVar4;
              if (puVar2[7] == 0xffffffff) {
                puVar1 = (uint *)(uVar11 + 0x2084 + (*(int *)(uVar11 + 0x40) - 1U >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((char)*(int *)(uVar11 + 0x40) - 1U & 0x1f);
              }
              else {
                puVar1 = (uint *)(uVar11 + 0x84 + (*(int *)(iVar9 + 4) >> 5) * 4);
                *puVar1 = *puVar1 | 1 << ((byte)*(int *)(iVar9 + 4) & 0x1f);
              }
              *puVar2 = *puVar2 | 0x1000;
              *(undefined2 *)(uVar11 + 0x4084) = 1;
            }
            *puVar2 = *puVar2 | 0x400;
            goto LAB_00698dd1;
          }
          uVar5 = uVar5 - 4;
          pcVar12 = (char *)((int)pcVar12 + 4);
        } while (3 < uVar5);
        if (local_4 == (int *)0x0) {
          local_c = 0xb5;
          param_1 = piVar15;
          param_5 = (uint *)uVar6;
          goto LAB_00698dd5;
        }
        param_1 = piVar15;
        param_5 = (uint *)uVar6;
        local_c = FUN_006975c0(piVar14,param_2);
        if (local_c != 0) goto LAB_00698dd5;
        uVar5 = FUN_00697b00(0);
        puVar2[7] = uVar5;
        if (0xffff < uVar5) {
          local_c = 3;
          goto LAB_00698dd5;
        }
        if (-1 < (int)uVar5) {
          uVar13 = 1 << ((byte)uVar5 & 0x1f);
          puVar1 = puVar2 + ((int)uVar5 >> 5) + 10;
          if ((*puVar1 & uVar13) == 0) {
            *puVar1 = *puVar1 | uVar13;
          }
          else {
            puVar2[7] = 0xffffffff;
            *(undefined2 *)(uVar11 + 0x4084) = 1;
          }
        }
        if ((int)puVar2[7] < 0) {
          if (*(int *)(puVar2[9] + 4) == 0) {
            FUN_00691290(param_5,puVar2[6]);
            puVar2[6] = 0;
          }
          else {
            iVar9 = *(int *)(uVar11 + 0x3c);
            if (*(int *)(uVar11 + 0x40) == iVar9) {
              uVar6 = FUN_00693a60(param_5,0x24,iVar9,iVar9 + 4,*(undefined4 *)(uVar11 + 0x44),
                                   &local_c);
              *(undefined4 *)(uVar11 + 0x44) = uVar6;
              if (local_c != 0) goto LAB_00698dd5;
              *(int *)(uVar11 + 0x3c) = *(int *)(uVar11 + 0x3c) + 4;
            }
            puVar1 = (uint *)(*(int *)(uVar11 + 0x44) + *(int *)(uVar11 + 0x40) * 0x24);
            *puVar1 = puVar2[6];
            puVar1[1] = *(uint *)(uVar11 + 0x40);
            *(int *)(uVar11 + 0x40) = *(int *)(uVar11 + 0x40) + 1;
          }
        }
        else {
          iVar9 = *(int *)(uVar11 + 0x30);
          if (*(int *)(uVar11 + 0x34) == iVar9) {
            uVar6 = FUN_00693a60(param_5,0x24,iVar9,iVar9 + 0x40,*(undefined4 *)(uVar11 + 0x38),
                                 &local_c);
            *(undefined4 *)(uVar11 + 0x38) = uVar6;
            if (local_c != 0) goto LAB_00698dd5;
            *(int *)(uVar11 + 0x30) = *(int *)(uVar11 + 0x30) + 0x40;
          }
          iVar9 = *(int *)(uVar11 + 0x34);
          *(int *)(uVar11 + 0x34) = iVar9 + 1;
          puVar1 = (uint *)(*(int *)(uVar11 + 0x38) + iVar9 * 0x24);
          *puVar1 = puVar2[6];
          puVar1[1] = puVar2[7];
        }
        puVar2[6] = 0;
        *puVar2 = *puVar2 & 0x3fffff7f | 0x80;
      }
    }
  }
LAB_00698dd1:
  if (local_c == 0) {
    return 0;
  }
LAB_00698dd5:
  if ((*puVar2 & 0x40) != 0) {
    FUN_00691290(param_5,puVar2[6]);
    puVar2[6] = 0;
  }
  return local_c;
}


/* FUN_0069a900 @ 0069a900  kind=gamemisc  attributed-by=role:dispatch-target  size=71 */

void FUN_0069a900(void)

{
  int iVar1;
  int in_EAX;
  int in_ECX;
  int *in_EDX;
  
  if (in_EDX[3] < in_ECX) {
    in_ECX = in_EDX[3];
  }
  iVar1 = in_EDX[2];
  if (in_ECX < iVar1) {
    in_ECX = iVar1 + -1;
  }
  *in_EDX = in_ECX - iVar1;
  in_EDX[1] = in_EAX - in_EDX[4];
  in_EDX[0x12] = in_EAX << 8;
  in_EDX[8] = 0;
  in_EDX[9] = 0;
  in_EDX[10] = 0;
  FUN_0069a890();
  return;
}


/* FUN_0069adb0 @ 0069adb0  kind=gamemisc  attributed-by=role:dispatch-target  size=426 */

void FUN_0069adb0(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar1 = (*(int *)(unaff_EDI + 0x40) >> 2) + *param_1 * -2 + *param_2;
  if (iVar1 < 0) {
    iVar1 = -iVar1;
  }
  iVar4 = (*(int *)(unaff_EDI + 0x44) >> 2) + param_1[1] * -2 + param_2[1];
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar1 < iVar4) {
    iVar1 = iVar4;
  }
  iVar1 = iVar1 / *(int *)(unaff_EDI + 0x4e8);
  iVar4 = 1;
  if (0 < iVar1) {
    do {
      iVar1 = iVar1 >> 2;
      iVar4 = iVar4 + 1;
    } while (0 < iVar1);
    if (1 < iVar4) {
      *(int *)(unaff_EDI + 0x354) = iVar4;
      piVar5 = (int *)(unaff_EDI + 0x4c);
      *piVar5 = *param_2 * 4;
      *(int *)(unaff_EDI + 0x50) = param_2[1] * 4;
      *(int *)(unaff_EDI + 0x54) = *param_1 * 4;
      *(int *)(unaff_EDI + 0x58) = param_1[1] * 4;
      *(undefined4 *)(unaff_EDI + 0x5c) = *(undefined4 *)(unaff_EDI + 0x40);
      param_2 = (int *)0x0;
      *(undefined4 *)(unaff_EDI + 0x60) = *(undefined4 *)(unaff_EDI + 0x44);
      do {
        iVar1 = *(int *)(unaff_EDI + 0x354 + (int)param_2 * 4);
        if (iVar1 < 2) {
LAB_0069af02:
          iVar1 = piVar5[1];
          iVar4 = *piVar5;
          iVar2 = *(int *)(unaff_EDI + 0x44) + piVar5[3] * 2 + iVar1;
          iVar3 = iVar4 + piVar5[2] * 2 + *(int *)(unaff_EDI + 0x40);
          FUN_0069aac0((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2,
                       (int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
          FUN_0069aac0(iVar4,iVar1);
          param_2 = (int *)((int)param_2 + -1);
          piVar5 = piVar5 + -4;
        }
        else {
          iVar4 = piVar5[1];
          iVar2 = piVar5[3];
          iVar3 = iVar4;
          if (iVar2 < iVar4) {
            iVar3 = iVar2;
          }
          if (iVar4 < iVar2) {
            iVar4 = iVar2;
          }
          iVar2 = piVar5[5];
          if (iVar2 < iVar3) {
            iVar3 = iVar2;
          }
          if (iVar4 < iVar2) {
            iVar4 = iVar2;
          }
          if ((*(int *)(unaff_EDI + 0x14) <= iVar3 >> 8) ||
             (iVar4 >> 8 < *(int *)(unaff_EDI + 0x10))) goto LAB_0069af02;
          FUN_0069ad50();
          piVar5 = piVar5 + 4;
          param_2 = (int *)((int)param_2 + 1);
          iVar1 = iVar1 + -1;
          *(int *)(unaff_EDI + 0x350 + (int)param_2 * 4) = iVar1;
          *(int *)(unaff_EDI + 0x354 + (int)param_2 * 4) = iVar1;
        }
        if ((int)param_2 < 0) {
          return;
        }
      } while( true );
    }
  }
  iVar1 = param_2[1] * 4;
  iVar2 = *(int *)(unaff_EDI + 0x44) + param_1[1] * 8 + iVar1;
  iVar4 = *param_2 * 4;
  iVar3 = *(int *)(unaff_EDI + 0x40) + *param_1 * 8 + iVar4;
  FUN_0069aac0((int)(iVar3 + (iVar3 >> 0x1f & 3U)) >> 2,(int)(iVar2 + (iVar2 >> 0x1f & 3U)) >> 2);
  FUN_0069aac0(iVar4,iVar1);
  return;
}


/* FUN_0069af60 @ 0069af60  kind=gamemisc  attributed-by=role:dispatch-target  size=553 */

void FUN_0069af60(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int unaff_EDI;
  
  iVar3 = *(int *)(unaff_EDI + 0x40) >> 2;
  iVar1 = *param_3;
  iVar2 = iVar1 + (*param_2 + *param_1) * 3 + iVar3;
  iVar3 = iVar1 + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * -2 + iVar3;
  iVar4 = *(int *)(unaff_EDI + 0x44) >> 2;
  iVar2 = param_3[1] + (param_1[1] + param_2[1]) * 3 + iVar4;
  iVar4 = param_3[1] + ((int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3) * -2 + iVar4;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  if (iVar4 < 0) {
    iVar4 = -iVar4;
  }
  if (iVar3 < iVar4) {
    iVar3 = iVar4;
  }
  iVar3 = iVar3 / *(int *)(unaff_EDI + 0x4ec);
  iVar2 = 1;
  if (0 < iVar3) {
    do {
      iVar3 = iVar3 >> 2;
      iVar2 = iVar2 + 1;
    } while (0 < iVar3);
    if (1 < iVar2) {
      piVar5 = (int *)(unaff_EDI + 0x4c);
      *piVar5 = iVar1 * 4;
      *(int *)(unaff_EDI + 0x50) = param_3[1] * 4;
      *(int *)(unaff_EDI + 0x54) = *param_2 * 4;
      *(int *)(unaff_EDI + 0x58) = param_2[1] * 4;
      *(int *)(unaff_EDI + 0x5c) = *param_1 * 4;
      *(int *)(unaff_EDI + 0x60) = param_1[1] * 4;
      *(undefined4 *)(unaff_EDI + 100) = *(undefined4 *)(unaff_EDI + 0x40);
      *(undefined4 *)(unaff_EDI + 0x68) = *(undefined4 *)(unaff_EDI + 0x44);
      param_3 = (int *)0x0;
      *(int *)(unaff_EDI + 0x354) = iVar2;
      do {
        iVar1 = *(int *)(unaff_EDI + 0x354 + (int)param_3 * 4);
        if (iVar1 < 2) {
LAB_0069b12d:
          iVar1 = piVar5[1];
          iVar3 = *piVar5;
          iVar2 = (piVar5[5] + piVar5[3]) * 3 + *(int *)(unaff_EDI + 0x44) + iVar1;
          iVar4 = (piVar5[4] + piVar5[2]) * 3 + *(int *)(unaff_EDI + 0x40) + iVar3;
          FUN_0069aac0((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,
                       (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
          FUN_0069aac0(iVar3,iVar1);
          param_3 = (int *)((int)param_3 + -1);
          piVar5 = piVar5 + -6;
        }
        else {
          iVar3 = piVar5[1];
          iVar2 = piVar5[3];
          iVar4 = iVar3;
          if (iVar2 < iVar3) {
            iVar4 = iVar2;
          }
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          iVar2 = piVar5[5];
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          iVar2 = piVar5[7];
          if (iVar2 < iVar4) {
            iVar4 = iVar2;
          }
          if (iVar3 < iVar2) {
            iVar3 = iVar2;
          }
          if ((*(int *)(unaff_EDI + 0x14) <= iVar4 >> 8) || (iVar3 < 0)) goto LAB_0069b12d;
          FUN_00695710();
          piVar5 = piVar5 + 6;
          param_3 = (int *)((int)param_3 + 1);
          iVar1 = iVar1 + -1;
          *(int *)(unaff_EDI + 0x350 + (int)param_3 * 4) = iVar1;
          *(int *)(unaff_EDI + 0x354 + (int)param_3 * 4) = iVar1;
        }
        if ((int)param_3 < 0) {
          return;
        }
      } while( true );
    }
  }
  iVar3 = param_3[1];
  iVar2 = *(int *)(unaff_EDI + 0x44) + (param_1[1] + param_2[1]) * 0xc + iVar3 * 4;
  iVar4 = *(int *)(unaff_EDI + 0x40) + (*param_2 + *param_1) * 0xc + iVar1 * 4;
  FUN_0069aac0((int)(iVar4 + (iVar4 >> 0x1f & 7U)) >> 3,(int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3);
  FUN_0069aac0(iVar1 * 4,iVar3 * 4);
  return;
}


/* FUN_0069bc10 @ 0069bc10  kind=gamemisc  attributed-by=role:dispatch-target  size=887 */

/* WARNING: Removing unreachable block (ram,0x0069bf54) */

void FUN_0069bc10(int param_1,int param_2,int param_3)

{
  uint *puVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int *in_ECX;
  int in_EDX;
  size_t sVar6;
  int iVar7;
  void *pvVar8;
  uint uVar9;
  void *_Src;
  size_t _Size;
  size_t local_7c;
  uint local_78;
  int local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  undefined4 local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  int *local_50;
  int local_4c;
  size_t local_48;
  uint *local_44;
  int local_40;
  undefined4 local_3c;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_7c;
  local_78 = (uint)(param_2 == 3);
  local_6c = param_1;
  local_68 = (uint)(param_2 == 4);
  if (*(int *)(param_1 + 0x48) != *(int *)(in_EDX + 0x18)) {
    __security_check_cookie(local_4 ^ (uint)&local_7c);
    return;
  }
  if (param_2 == param_3) {
    local_60 = in_EDX;
    local_50 = in_ECX;
    if (in_ECX != (int *)0x0) {
      FUN_006904c0(param_1 + 0x6c,*in_ECX,in_ECX[1]);
    }
    FUN_00690430(param_1 + 0x6c,&local_14);
    local_c = local_c + 0x3f & 0xffffffc0;
    local_14 = local_14 & 0xffffffc0;
    local_7c = (int)(local_c - local_14) >> 6;
    local_64 = *(undefined4 *)(local_60 + 8);
    local_8 = local_8 + 0x3f & 0xffffffc0;
    local_10 = local_10 & 0xffffffc0;
    uVar9 = (int)(local_8 - local_10) >> 6;
    local_70 = uVar9;
    local_48 = local_7c;
    if ((*(byte *)(*(int *)(param_1 + 0x9c) + 4) & 1) != 0) {
      FUN_00691290(local_64,*(undefined4 *)(param_1 + 0x58));
      *(undefined4 *)(param_1 + 0x58) = 0;
      puVar1 = (uint *)(*(int *)(param_1 + 0x9c) + 4);
      *puVar1 = *puVar1 & 0xfffffffe;
    }
    _Size = local_7c;
    if (local_78 != 0) {
      local_7c = local_7c * 3;
      _Size = local_7c + 3 & 0xfffffffc;
    }
    if (local_68 != 0) {
      uVar9 = uVar9 * 3;
    }
    local_4c = (int)local_14 >> 6;
    local_58 = (int)local_8 >> 6;
    local_5c = local_14;
    local_54 = local_10;
    if ((local_7c < 0x8000) && (uVar9 < 0x8000)) {
      iVar7 = local_6c + 0x6c;
      *(undefined1 *)(param_1 + 0x5e) = 2;
      *(undefined2 *)(param_1 + 0x5c) = 0x100;
      *(size_t *)(param_1 + 0x50) = local_7c;
      *(uint *)(param_1 + 0x4c) = uVar9;
      *(size_t *)(param_1 + 0x54) = _Size;
      FUN_006904c0(iVar7,-local_14,-local_10);
      uVar4 = FUN_00692230(local_64,_Size * uVar9,&local_74);
      *(undefined4 *)(param_1 + 0x58) = uVar4;
      if (local_74 == 0) {
        puVar1 = (uint *)(*(int *)(local_6c + 0x9c) + 4);
        *puVar1 = *puVar1 | 1;
        local_3c = 1;
        local_44 = (uint *)(param_1 + 0x4c);
        local_40 = iVar7;
        local_74 = (**(code **)(local_60 + 0x40))(*(undefined4 *)(local_60 + 0x3c),&local_44);
        if (local_78 != 0) {
          local_78 = local_70;
          if (local_70 != 0) {
            iVar7 = *(int *)(param_1 + 0x58) + -1;
            do {
              if (local_48 != 0) {
                puVar5 = (undefined1 *)((local_7c - 1) + iVar7);
                sVar6 = local_48;
                do {
                  uVar2 = *(undefined1 *)(iVar7 + sVar6);
                  puVar5[-1] = uVar2;
                  *puVar5 = uVar2;
                  puVar5[1] = uVar2;
                  puVar5 = puVar5 + -3;
                  sVar6 = sVar6 - 1;
                } while (sVar6 != 0);
              }
              local_78 = local_78 - 1;
              iVar7 = iVar7 + _Size;
            } while (local_78 != 0);
          }
        }
        if (local_68 != 0) {
          pvVar8 = *(void **)(param_1 + 0x58);
          _Src = (void *)((uVar9 - local_70) * _Size + (int)pvVar8);
          for (uVar9 = local_70; uVar9 != 0; uVar9 = uVar9 - 1) {
            memcpy(pvVar8,_Src,_Size);
            memcpy((void *)((int)pvVar8 + _Size),_Src,_Size);
            pvVar8 = (void *)((int)((int)pvVar8 + _Size) + _Size);
            memcpy(pvVar8,_Src,_Size);
            pvVar8 = (void *)((int)pvVar8 + _Size);
            _Src = (void *)((int)_Src + _Size);
          }
        }
        iVar3 = local_6c;
        iVar7 = local_6c + 0x6c;
        FUN_006904c0(iVar7,local_5c,local_54);
        if (local_74 == 0) {
          *(undefined4 *)(iVar3 + 0x48) = 0x62697473;
          *(int *)(iVar3 + 100) = local_4c;
          *(int *)(iVar3 + 0x68) = local_58;
        }
      }
      if ((iVar7 != 0) && (local_50 != (int *)0x0)) {
        FUN_006904c0(iVar7,-*local_50,-local_50[1]);
        __security_check_cookie(local_4 ^ (uint)&local_7c);
        return;
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_7c);
    return;
  }
  __security_check_cookie(local_4 ^ (uint)&local_7c);
  return;
}


/* FUN_0069fb90 @ 0069fb90  kind=gamemisc  attributed-by=role:dispatch-target  size=105 */

undefined1 * FUN_0069fb90(uint param_1)

{
  undefined1 *puVar1;
  undefined1 *in_EAX;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  uVar3 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  if (uVar3 != 0) {
    do {
      uVar5 = uVar3 + uVar4 >> 1;
      puVar1 = in_EAX + uVar5 * 0xb + 7;
      uVar2 = (uint)CONCAT21(CONCAT11(puVar1[-3],in_EAX[uVar5 * 0xb + 5]),puVar1[-1]);
      if (uVar2 <= param_1) {
        if (param_1 <= uVar2) {
          return puVar1;
        }
        uVar4 = uVar5 + 1;
        uVar5 = uVar3;
      }
      uVar3 = uVar5;
    } while (uVar4 < uVar5);
  }
  return (undefined1 *)0x0;
}


/* FUN_0069ff50 @ 0069ff50  kind=gamemisc  attributed-by=role:dispatch-target  size=138 */

undefined4 FUN_0069ff50(void)

{
  undefined1 *in_EAX;
  int iVar1;
  uint uVar2;
  int in_ECX;
  uint *puVar3;
  int iVar4;
  
  FUN_0069ff10();
  iVar4 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,in_EAX[1]),in_EAX[2]),in_EAX[3]);
  iVar1 = FUN_0069f6a0();
  if (iVar1 != 0) {
    return 0;
  }
  puVar3 = *(uint **)(in_ECX + 0x20);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    uVar2 = (uint)CONCAT21(CONCAT11(in_EAX[4],in_EAX[5]),in_EAX[6]);
    iVar1 = (byte)in_EAX[7] + 1;
    do {
      *puVar3 = uVar2;
      uVar2 = uVar2 + 1;
      puVar3 = puVar3 + 1;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
    in_EAX = in_EAX + 4;
  }
  *puVar3 = 0;
  return *(undefined4 *)(in_ECX + 0x20);
}


/* FUN_0069ffe0 @ 0069ffe0  kind=gamemisc  attributed-by=role:dispatch-target  size=163 */

int FUN_0069ffe0(void)

{
  undefined1 *in_EAX;
  int iVar1;
  int in_ECX;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  
  puVar5 = in_EAX + 3;
  puVar3 = in_EAX + 2;
  puVar2 = in_EAX + 1;
  uVar4 = CONCAT31(CONCAT21(CONCAT11(*in_EAX,*puVar2),*puVar3),*puVar5);
  iVar1 = FUN_0069f6a0();
  if (iVar1 == 0) {
    iVar1 = *(int *)(in_ECX + 0x20);
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        *(uint *)(iVar1 + uVar6 * 4) = (uint)CONCAT21(CONCAT11(puVar2[3],puVar3[3]),puVar5[3]);
        uVar6 = uVar6 + 1;
        puVar2 = puVar2 + 5;
        puVar3 = puVar3 + 5;
        puVar5 = puVar5 + 5;
      } while (uVar6 < uVar4);
    }
    *(undefined4 *)(iVar1 + uVar6 * 4) = 0;
    return iVar1;
  }
  return 0;
}


/* FUN_006a0dd0 @ 006a0dd0  kind=gamemisc  attributed-by=role:dispatch-target  size=372 */

int FUN_006a0dd0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int unaff_ESI;
  int unaff_EDI;
  int local_8;
  undefined4 local_4;
  
  uVar2 = *(undefined4 *)(unaff_EDI + 0x1c);
  *(undefined4 *)(unaff_ESI + 0x84) = 0;
  *(undefined4 *)(unaff_ESI + 0x88) = 0;
  *(undefined4 *)(unaff_ESI + 0x8c) = 0;
  local_4 = FUN_00690930();
  iVar1 = FUN_00690cd0();
  if (local_8 != 0) {
    return local_8;
  }
  if (((((iVar1 != 0x10000) && (iVar1 != 0x74746366)) && (iVar1 != 0x4f54544f)) &&
      ((iVar1 != 0x74727565 && (iVar1 != 0x74797031)))) && (iVar1 != 0x20000)) {
    return 2;
  }
  *(undefined4 *)(unaff_ESI + 0x84) = 0x74746366;
  if (iVar1 == 0x74746366) {
    local_8 = FUN_00692010();
    if (local_8 == 0) {
      uVar2 = FUN_00693a60(uVar2,4,0,*(undefined4 *)(unaff_ESI + 0x8c),0,&local_8);
      *(undefined4 *)(unaff_ESI + 0x90) = uVar2;
      if ((local_8 == 0) && (local_8 = FUN_00691f30(), local_8 == 0)) {
        local_8 = 0;
        if (0 < *(int *)(unaff_ESI + 0x8c)) {
          iVar1 = 0;
          do {
            uVar2 = FUN_00690aa0();
            *(undefined4 *)(*(int *)(unaff_ESI + 0x90) + iVar1 * 4) = uVar2;
            iVar1 = iVar1 + 1;
          } while (iVar1 < *(int *)(unaff_ESI + 0x8c));
        }
        FUN_00691fe0();
        return local_8;
      }
    }
  }
  else {
    *(undefined4 *)(unaff_ESI + 0x88) = 0x10000;
    *(undefined4 *)(unaff_ESI + 0x8c) = 1;
    puVar3 = (undefined4 *)FUN_00692230(uVar2,4,&local_8);
    *(undefined4 **)(unaff_ESI + 0x90) = puVar3;
    if (local_8 != 0) {
      return local_8;
    }
    *puVar3 = local_4;
    local_8 = 0;
  }
  return local_8;
}


/* FUN_006a1820 @ 006a1820  kind=gamemisc  attributed-by=role:dispatch-target  size=604 */

void FUN_006a1820(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  byte *pbVar8;
  int iVar9;
  uint uVar10;
  byte *local_10;
  int local_c;
  int local_8;
  byte *local_4;
  
  iVar5 = 0;
  local_10 = (byte *)0x0;
  if (*(int *)(param_1 + 700) != 0) {
    return;
  }
  iVar9 = -1;
  iVar7 = -1;
  if (*(short *)(param_1 + 0x158) == 0) goto LAB_006a1a6c;
  psVar4 = *(short **)(param_1 + 0x168);
  do {
    if ((psVar4[3] == 6) && (psVar4[4] != 0)) {
      if ((*psVar4 == 3) && ((psVar4[1] == 1 && (psVar4[2] == 0x409)))) {
        iVar9 = iVar5;
      }
      if (((*psVar4 == 1) && (psVar4[1] == 0)) && (psVar4[2] == 0)) {
        iVar7 = iVar5;
      }
    }
    iVar5 = iVar5 + 1;
    psVar4 = psVar4 + 10;
  } while (iVar5 < (int)(uint)*(ushort *)(param_1 + 0x158));
  if (iVar9 == -1) {
    if (iVar7 == -1) goto LAB_006a1a6c;
    uVar2 = *(undefined4 *)(param_1 + 100);
    uVar10 = (uint)*(ushort *)(*(int *)(param_1 + 0x168) + 8 + iVar7 * 0x14);
    iVar5 = *(int *)(param_1 + 0x168) + iVar7 * 0x14;
    local_c = 0;
    local_10 = (byte *)FUN_00692230(uVar2,uVar10 + 1,&local_c);
    if (local_c != 0) goto LAB_006a1a6c;
    uVar3 = *(undefined4 *)(param_1 + 0x16c);
    local_c = FUN_006908c0(uVar3,*(undefined4 *)(iVar5 + 0xc));
    if ((local_c == 0) && (local_c = FUN_00691ec0(uVar3,local_10,uVar10), local_c == 0)) {
      local_10[uVar10] = 0;
      *(byte **)(param_1 + 700) = local_10;
      return;
    }
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined2 *)(iVar5 + 8) = 0;
    FUN_00691290(uVar2,*(undefined4 *)(iVar5 + 0x10));
    *(undefined4 *)(iVar5 + 0x10) = 0;
    FUN_00691290(uVar2,local_10);
  }
  else {
    uVar2 = *(undefined4 *)(param_1 + 100);
    iVar5 = *(int *)(param_1 + 0x168) + iVar9 * 0x14;
    local_c = 0;
    uVar10 = (uint)(*(ushort *)(*(int *)(param_1 + 0x168) + 8 + iVar9 * 0x14) >> 1);
    local_10 = (byte *)FUN_00692230(uVar2,*(ushort *)(iVar5 + 8) + 1,&local_c);
    if (local_c != 0) goto LAB_006a1a6c;
    local_8 = *(int *)(param_1 + 0x16c);
    local_4 = local_10;
    local_c = FUN_006908c0(local_8,*(undefined4 *)(iVar5 + 0xc));
    if ((local_c == 0) && (local_c = FUN_00691f30(local_8,*(undefined2 *)(iVar5 + 8)), local_c == 0)
       ) {
      pcVar6 = *(char **)(local_8 + 0x20);
      pbVar8 = local_10;
      for (; uVar10 != 0; uVar10 = uVar10 - 1) {
        if (((*pcVar6 == '\0') && (bVar1 = pcVar6[1], 0x1f < bVar1)) && (bVar1 < 0x80)) {
          *pbVar8 = bVar1;
          pbVar8 = pbVar8 + 1;
        }
        pcVar6 = pcVar6 + 2;
      }
      *pbVar8 = 0;
      FUN_00691fe0(local_8);
      *(byte **)(param_1 + 700) = local_10;
      return;
    }
    FUN_00691290(uVar2,local_10);
    *(undefined2 *)(iVar5 + 8) = 0;
    *(undefined4 *)(iVar5 + 0xc) = 0;
    FUN_00691290(uVar2,*(undefined4 *)(iVar5 + 0x10));
    *(undefined4 *)(iVar5 + 0x10) = 0;
  }
  local_10 = (byte *)0x0;
LAB_006a1a6c:
  *(byte **)(param_1 + 700) = local_10;
  return;
}


/* FUN_006a31d0 @ 006a31d0  kind=gamemisc  attributed-by=role:dispatch-target  size=57 */

void FUN_006a31d0(void)

{
  int in_EAX;
  
  if (*(char *)(in_EAX + 0x32c) != '\0') {
    if (*(int *)(in_EAX + 0x318) != 0) {
      FUN_00691ee0(*(undefined4 *)(in_EAX + 0x68),(int *)(in_EAX + 0x318));
    }
    *(undefined4 *)(in_EAX + 0x31c) = 0;
    *(undefined4 *)(in_EAX + 800) = 0;
    *(undefined4 *)(in_EAX + 0x324) = 0;
  }
  return;
}


/* FUN_006a3840 @ 006a3840  kind=gamemisc  attributed-by=role:dispatch-target  size=106 */

int FUN_006a3840(undefined4 param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  int local_10;
  undefined4 local_c;
  int local_8;
  undefined4 local_4;
  
  iVar1 = FUN_006a33d0(param_1,"CHARSET_REGISTRY",&local_8);
  if (iVar1 == 0) {
    iVar1 = FUN_006a33d0(param_1,"CHARSET_ENCODING",&local_10);
    if (iVar1 == 0) {
      if ((local_8 == 1) && (local_10 == 1)) {
        *param_2 = local_c;
        *param_3 = local_4;
        return 0;
      }
      iVar1 = 6;
    }
  }
  return iVar1;
}


/* FUN_006a66a0 @ 006a66a0  kind=gamemisc  attributed-by=role:dispatch-target  size=310 */

void FUN_006a66a0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint *in_EDX;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  int local_8;
  
  if (param_4 == 0) {
    puVar7 = in_EDX + 0x81;
  }
  else {
    puVar7 = in_EDX + 0x183;
    in_EDX = in_EDX + 0x102;
  }
  *in_EDX = 0;
  *puVar7 = 0;
  FUN_006a6560(0);
  FUN_006a6560(1,param_2,in_EDX,puVar7);
  uVar4 = *in_EDX;
  uVar1 = *puVar7;
  if (0 < (int)uVar4) {
    puVar2 = in_EDX + 1;
    uVar5 = uVar4;
    do {
      if ((1 < uVar5) && ((int)(puVar2[8] - *puVar2) < (int)puVar2[1])) {
        puVar2[1] = puVar2[8] - *puVar2;
      }
      puVar2[3] = *puVar2;
      puVar2[2] = puVar2[1] + *puVar2;
      puVar2 = puVar2 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  if (0 < (int)uVar1) {
    puVar2 = puVar7 + 1;
    uVar5 = uVar1;
    do {
      if ((1 < uVar5) && ((int)puVar2[1] < (int)(*puVar2 - puVar2[8]))) {
        puVar2[1] = *puVar2 - puVar2[8];
      }
      puVar2[2] = *puVar2;
      puVar2[3] = puVar2[1] + *puVar2;
      puVar2 = puVar2 + 8;
      uVar5 = uVar5 - 1;
    } while (uVar5 != 0);
  }
  local_8 = 1;
  do {
    puVar2 = in_EDX + 1;
    if (uVar4 != 0) {
      in_EDX[4] = in_EDX[4] - param_3;
      iVar6 = uVar4 - 1;
      uVar4 = in_EDX[3];
      if (iVar6 != 0) {
        do {
          iVar3 = puVar2[0xb] - uVar4;
          if (iVar3 < param_3 * 2) {
            uVar4 = iVar3 / 2 + uVar4;
            puVar2[0xb] = uVar4;
            puVar2[2] = uVar4;
          }
          else {
            puVar2[2] = uVar4 + param_3;
            puVar2[0xb] = puVar2[0xb] - param_3;
          }
          uVar4 = puVar2[10];
          puVar2 = puVar2 + 8;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      puVar2[2] = uVar4 + param_3;
    }
    local_8 = local_8 + -1;
    uVar4 = uVar1;
    in_EDX = puVar7;
  } while (-1 < local_8);
  return;
}


/* FUN_006a6c10 @ 006a6c10  kind=gamemisc  attributed-by=role:dispatch-target  size=124 */

undefined4 FUN_006a6c10(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  if ((param_2 != *(int *)(param_1 + 200)) || (param_4 != *(int *)(param_1 + 0xcc))) {
    *(int *)(param_1 + 200) = param_2;
    *(int *)(param_1 + 0xcc) = param_4;
    FUN_006a64e0();
  }
  if ((param_3 != *(int *)(param_1 + 0x194)) || (param_5 != *(int *)(param_1 + 0x198))) {
    *(int *)(param_1 + 0x194) = param_3;
    *(int *)(param_1 + 0x198) = param_5;
    FUN_006a64e0();
    FUN_006a67e0(param_1 + 0x19c,param_3);
  }
  return 0;
}


/* FUN_006a6c90 @ 006a6c90  kind=gamemisc  attributed-by=role:dispatch-target  size=21 */

void FUN_006a6c90(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = &LAB_006a6ae0;
  in_EAX[1] = FUN_006a6c10;
  in_EAX[2] = &LAB_006a6aa0;
  return;
}


/* FUN_006a75c0 @ 006a75c0  kind=gamemisc  attributed-by=role:dispatch-target  size=73 */

void FUN_006a75c0(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  int in_EDX;
  uint *unaff_ESI;
  
  iVar2 = *(int *)(unaff_ESI[5] + 4);
  iVar3 = *(int *)(unaff_ESI[5] + 8);
  uVar4 = 0;
  if (*unaff_ESI != 0) {
    puVar5 = (undefined4 *)(unaff_ESI[2] + 0x2c);
    do {
      if (in_EDX == 0) {
        *(undefined4 *)(iVar2 + uVar4 * 8) = *puVar5;
      }
      else {
        *(undefined4 *)(iVar2 + 4 + uVar4 * 8) = *puVar5;
      }
      if ((*(byte *)(puVar5 + -7) & 0x10) != 0) {
        pbVar1 = (byte *)(uVar4 + iVar3);
        *pbVar1 = *pbVar1 | (-(in_EDX != 0) & 0x20U) + 0x20;
      }
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 0xc;
    } while (uVar4 < *unaff_ESI);
  }
  return;
}


/* FUN_006a7610 @ 006a7610  kind=gamemisc  attributed-by=role:dispatch-target  size=627 */

int FUN_006a7610(uint *param_1,short *param_2,int param_3,uint *param_4)

{
  short sVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint local_20;
  int local_1c;
  uint local_18;
  int *local_14;
  undefined4 local_10;
  int local_c;
  int local_8;
  uint local_4;
  
  memset(param_1,0,0x80);
  uVar2 = *param_4;
  param_1[4] = uVar2;
  local_4 = uVar2;
  uVar7 = FUN_00693a60(uVar2,0x30,0,(int)param_2[1],0,&local_1c);
  param_1[2] = uVar7;
  if (local_1c == 0) {
    puVar8 = (undefined4 *)FUN_00693a60(uVar2,8,0,(int)*param_2,0,&local_1c);
    param_1[3] = (uint)puVar8;
    if (local_1c != 0) {
      return local_1c;
    }
    *param_1 = (int)param_2[1];
    sVar1 = *param_2;
    uVar2 = param_1[2];
    param_1[1] = (int)sVar1;
    local_18 = 0;
    if ((int)sVar1 != 0) {
      iVar12 = 0;
      do {
        iVar11 = (int)*(short *)(*(int *)(param_2 + 6) + local_18 * 2);
        local_14 = (int *)(iVar12 * 0x30 + uVar2);
        iVar12 = (iVar11 + 1) - iVar12;
        *puVar8 = local_14;
        puVar8[1] = iVar12;
        if (0 < iVar12) {
          *local_14 = (uVar2 - 0x30) + (iVar11 * 3 + 3) * 0x10;
          local_14[2] = (int)puVar8;
          piVar10 = local_14;
          if (1 < iVar12) {
            iVar12 = iVar12 + -1;
            piVar9 = local_14;
            do {
              iVar12 = iVar12 + -1;
              piVar10 = piVar9 + 0xc;
              piVar9[1] = (int)piVar10;
              *piVar10 = (int)piVar9;
              piVar9[0xe] = (int)puVar8;
              piVar9 = piVar10;
            } while (iVar12 != 0);
          }
          piVar10[1] = (int)local_14;
        }
        local_18 = local_18 + 1;
        puVar8 = puVar8 + 2;
        iVar12 = iVar11 + 1;
      } while (local_18 < param_1[1]);
    }
    local_18 = param_1[2];
    iVar12 = *(int *)(param_2 + 2);
    local_20 = 0;
    if (*param_1 != 0) {
      puVar13 = (uint *)(local_18 + 0xc);
      do {
        iVar11 = (int)(puVar13[-3] - local_18) / 0x30;
        local_14 = (int *)((int)(puVar13[-2] - local_18) / 0x30);
        if ((*(byte *)(local_20 + *(int *)(param_2 + 4)) & 1) == 0) {
          *puVar13 = 1;
        }
        local_8 = *(int *)(iVar12 + local_20 * 8) - *(int *)(iVar12 + iVar11 * 8);
        local_c = *(int *)(iVar12 + 4 + local_20 * 8) - *(int *)(iVar12 + 4 + iVar11 * 8);
        local_10 = FUN_006a7520();
        *(char *)(puVar13 + 2) = (char)local_10;
        iVar11 = *(int *)(iVar12 + (int)local_14 * 8);
        iVar3 = *(int *)(iVar12 + 4 + (int)local_14 * 8);
        iVar4 = *(int *)(iVar12 + local_20 * 8);
        iVar5 = *(int *)(iVar12 + 4 + local_20 * 8);
        cVar6 = FUN_006a7520();
        *(char *)((int)puVar13 + 9) = cVar6;
        if ((*puVar13 & 1) == 0) {
          if (((char)local_10 == cVar6) &&
             ((cVar6 != '\x04' ||
              (iVar11 = FUN_0068efc0(local_8,local_c,iVar11 - iVar4,iVar3 - iVar5), iVar11 != 0))))
          {
            *puVar13 = *puVar13 | 2;
          }
        }
        else {
          *puVar13 = *puVar13 | 2;
        }
        local_20 = local_20 + 1;
        puVar13 = puVar13 + 0xc;
      } while (local_20 < *param_1);
    }
    param_1[5] = (uint)param_2;
    param_1[6] = (uint)param_4;
    FUN_006a7570();
    FUN_006a7340(param_1);
    local_1c = FUN_006a6e00(param_3 + 0x10,param_3 + 0x1c);
    if (local_1c == 0) {
      local_1c = FUN_006a6e00(param_3 + 0x34,param_3 + 0x40);
    }
  }
  return local_1c;
}


/* FUN_006a7890 @ 006a7890  kind=gamemisc  attributed-by=role:dispatch-target  size=244 */

void FUN_006a7890(void)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint *unaff_EBX;
  uint uVar7;
  
  uVar7 = 0;
  if (unaff_EBX[1] != 0) {
    do {
      piVar5 = *(int **)(unaff_EBX[3] + uVar7 * 8);
      piVar6 = piVar5;
      if (*(int *)(unaff_EBX[3] + 4 + uVar7 * 8) != 0) {
        do {
          piVar6 = (int *)*piVar6;
          if (piVar6 == piVar5) goto LAB_006a797d;
        } while (piVar6[9] == piVar5[9]);
        piVar5 = (int *)piVar6[1];
        piVar4 = piVar5;
        piVar3 = piVar5;
LAB_006a78d2:
        do {
          piVar4 = (int *)piVar4[1];
          if (piVar4 == piVar5) break;
          if (piVar4[9] != piVar3[9]) {
            iVar1 = piVar3[9];
            if (*(int *)((int)piVar6 + 0x24) < iVar1) {
              if (iVar1 <= piVar4[9]) {
                piVar6 = (int *)*piVar4;
                piVar3 = piVar4;
                goto LAB_006a78d2;
              }
LAB_006a7900:
              do {
                piVar3[4] = piVar3[4] | 0x40;
                piVar3 = (int *)piVar3[1];
              } while (piVar3 != piVar4);
            }
            else if (iVar1 < piVar4[9]) goto LAB_006a7900;
            piVar6 = (int *)*piVar4;
            piVar3 = piVar4;
          }
        } while( true );
      }
      uVar7 = uVar7 + 1;
    } while (uVar7 < unaff_EBX[1]);
  }
  uVar7 = 0;
  do {
    if (*unaff_EBX <= uVar7) {
      return;
    }
    piVar4 = (int *)(uVar7 * 0x30 + unaff_EBX[2]);
    uVar2 = piVar4[4];
    piVar5 = piVar4;
    piVar6 = piVar4;
    if ((uVar2 & 0x40) != 0) {
      do {
        piVar5 = (int *)*piVar5;
        if (piVar5 == piVar4) goto LAB_006a797d;
      } while (piVar5[10] == piVar4[10]);
      do {
        piVar6 = (int *)piVar6[1];
        if (piVar6 == piVar4) goto LAB_006a797d;
      } while (piVar6[10] == piVar4[10]);
    }
    iVar1 = piVar4[10];
    if ((piVar5[10] < iVar1) && (iVar1 < piVar6[10])) {
      piVar4[4] = uVar2 | 0x80;
      uVar7 = uVar7 + 1;
    }
    else {
      if ((iVar1 < piVar5[10]) && (piVar6[10] < iVar1)) {
        piVar4[4] = uVar2 | 0x100;
      }
LAB_006a797d:
      uVar7 = uVar7 + 1;
    }
  } while( true );
}


/* FUN_006a7b70 @ 006a7b70  kind=gamemisc  attributed-by=role:dispatch-target  size=327 */

void FUN_006a7b70(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  int in_EAX;
  uint uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  int local_8;
  
  puVar4 = param_1;
  uVar6 = *(uint *)param_1[in_EAX * 10 + 0xf];
  uVar1 = ((uint *)param_1[in_EAX * 10 + 0xf])[2];
  cVar5 = (in_EAX != 0) + '\x01';
  FUN_0068ec40(0x20,*(undefined4 *)(in_EAX * 0xcc + 200 + param_1[6]));
  if ((1 < uVar6) && (uVar3 = *param_1, uVar3 != 0)) {
    uVar2 = *(uint *)(uVar1 + 0xc);
    if (uVar2 <= uVar3) {
      uVar3 = uVar2;
    }
    local_8 = uVar6 - 1;
    do {
      param_1 = (uint *)*puVar4;
      if (*(uint *)(uVar1 + 0x1c) <= *puVar4) {
        param_1 = (uint *)*(uint *)(uVar1 + 0x1c);
      }
      if (0 < (int)((int)param_1 - uVar3)) {
        uVar2 = puVar4[2];
        FUN_006a6f10();
        FUN_006a7990(uVar3 * 0x30 + uVar2,(int)param_1 - uVar3,cVar5);
      }
      uVar6 = uVar6 - 1;
      local_8 = local_8 + -1;
      uVar3 = (uint)param_1;
      uVar1 = uVar1 + 0x10;
    } while (local_8 != 0);
  }
  if (uVar6 == 1) {
    uVar6 = *puVar4;
    uVar1 = puVar4[2];
    FUN_006a6f10();
    FUN_006a7990(uVar1,uVar6,cVar5);
  }
  uVar6 = *puVar4;
  if (uVar6 != 0) {
    puVar4 = (uint *)(puVar4[2] + 0x10);
    do {
      if ((puVar4[4] != 0) && ((*puVar4 & 0x10) == 0)) {
        *puVar4 = *puVar4 | 0x10;
      }
      puVar4 = puVar4 + 0xc;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return;
}


/* FUN_006a7cc0 @ 006a7cc0  kind=gamemisc  attributed-by=role:dispatch-target  size=247 */

void FUN_006a7cc0(void)

{
  uint uVar1;
  int *in_EAX;
  int iVar2;
  int *piVar3;
  uint uVar4;
  uint *puVar5;
  int *unaff_ESI;
  int iVar6;
  int local_4;
  
  local_4 = *in_EAX;
  if (local_4 != 0) {
    puVar5 = (uint *)(in_EAX[2] + 0x10);
    do {
      if ((((((char)puVar5[1] == '\x02') || ((char)puVar5[1] == -2)) ||
           (*(char *)((int)puVar5 + 5) == '\x02')) || (*(char *)((int)puVar5 + 5) == -2)) &&
         ((*puVar5 & 0x10) == 0)) {
        iVar6 = *unaff_ESI;
        uVar4 = puVar5[5];
        if (iVar6 != 0) {
          piVar3 = unaff_ESI + 3;
          do {
            iVar2 = uVar4 - piVar3[1];
            if (iVar2 < -unaff_ESI[0x207]) break;
            uVar4 = puVar5[5];
            if (((int)uVar4 <= *piVar3 + unaff_ESI[0x207]) &&
               (((char)unaff_ESI[0x208] != '\0' || (iVar2 <= unaff_ESI[0x206])))) {
              uVar1 = piVar3[4];
              *puVar5 = *puVar5 | 0x30;
              puVar5[7] = uVar1;
            }
            piVar3 = piVar3 + 8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
        iVar6 = unaff_ESI[0x81];
        if (iVar6 != 0) {
          piVar3 = unaff_ESI + iVar6 * 8 + 0x7d;
          do {
            if ((int)(piVar3[-1] - puVar5[5]) < -unaff_ESI[0x207]) break;
            if ((*piVar3 - unaff_ESI[0x207] <= (int)puVar5[5]) &&
               (((char)unaff_ESI[0x208] != '\0' ||
                ((int)(piVar3[-1] - puVar5[5]) < unaff_ESI[0x206])))) {
              uVar4 = piVar3[4];
              *puVar5 = *puVar5 | 0x30;
              puVar5[7] = uVar4;
            }
            piVar3 = piVar3 + -8;
            iVar6 = iVar6 + -1;
          } while (iVar6 != 0);
        }
      }
      local_4 = local_4 + -1;
      puVar5 = puVar5 + 0xc;
    } while (local_4 != 0);
  }
  return;
}


/* FUN_006a7dd0 @ 006a7dd0  kind=gamemisc  attributed-by=role:dispatch-target  size=164 */

void FUN_006a7dd0(void)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int in_EAX;
  int iVar4;
  int *in_ECX;
  int iVar5;
  int *piVar6;
  
  iVar5 = *in_ECX;
  uVar1 = *(undefined4 *)(in_EAX * 0xcc + 200 + in_ECX[6]);
  if (iVar5 != 0) {
    piVar6 = (int *)(in_ECX[2] + 0x2c);
    do {
      piVar2 = (int *)piVar6[-3];
      if (piVar2 != (int *)0x0) {
        if ((piVar6[-7] & 0x200U) == 0) {
          if ((piVar6[-7] & 0x400U) == 0) {
            iVar4 = piVar6[-2] - *piVar2;
            if (iVar4 < 1) {
              iVar4 = FUN_0068ebc0(iVar4,uVar1);
              iVar4 = iVar4 + piVar2[2];
            }
            else {
              iVar3 = piVar2[1];
              if (iVar4 < iVar3) {
                if (iVar3 < 1) goto LAB_006a7e60;
                iVar4 = FUN_0068ea60(iVar4,piVar2[3],iVar3);
                iVar4 = iVar4 + piVar2[2];
              }
              else {
                iVar4 = FUN_0068ebc0(iVar4 - iVar3,uVar1);
                iVar4 = iVar4 + piVar2[3] + piVar2[2];
              }
            }
            goto LAB_006a7e63;
          }
          *piVar6 = piVar2[3] + piVar2[2];
        }
        else {
LAB_006a7e60:
          iVar4 = piVar2[2];
LAB_006a7e63:
          *piVar6 = iVar4;
        }
        piVar6[-7] = piVar6[-7] | 0x20;
      }
      piVar6 = piVar6 + 0xc;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  return;
}


/* FUN_006a7e80 @ 006a7e80  kind=gamemisc  attributed-by=role:dispatch-target  size=520 */

uint * FUN_006a7e80(void)

{
  undefined4 uVar1;
  uint *puVar2;
  int *in_EAX;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int in_ECX;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint local_54;
  int local_48;
  int local_44;
  uint local_40 [16];
  
  uVar1 = *(undefined4 *)(in_ECX * 0xcc + 200 + in_EAX[6]);
  puVar10 = (uint *)in_EAX[2];
  puVar8 = puVar10 + *in_EAX * 0xc;
  uVar6 = 0;
  local_44 = in_EAX[4];
  puVar5 = puVar10;
  if (puVar10 < puVar8) {
    do {
      if ((puVar5[4] & 0x10) != 0) {
        uVar6 = uVar6 + 1;
      }
      puVar5 = puVar5 + 0xc;
    } while (puVar5 < puVar8);
    if (uVar6 != 0) {
      if (uVar6 < 0x11) {
        puVar3 = local_40;
      }
      else {
        puVar3 = (uint *)FUN_00693a60(in_EAX[4],4,0,uVar6,0,&local_48);
        if (local_48 != 0) {
          return puVar3;
        }
      }
      local_54 = 0;
      puVar5 = puVar10;
      puVar9 = puVar3;
      do {
        puVar2 = puVar9;
        if ((puVar5[4] & 0x10) != 0) {
          while ((puVar3 < puVar2 && ((int)puVar5[9] < *(int *)(puVar2[-1] + 0x24)))) {
            *puVar2 = puVar2[-1];
            puVar2 = puVar2 + -1;
          }
          local_54 = local_54 + 1;
          *puVar2 = (uint)puVar5;
          puVar9 = puVar9 + 1;
        }
        puVar5 = puVar5 + 0xc;
      } while (puVar5 < puVar8);
      uVar6 = (int)puVar8 + (-1 - (int)puVar10);
      puVar5 = (uint *)(uVar6 * -0x55555555);
      iVar11 = uVar6 / 0x30 + 1;
      puVar10 = puVar10 + 3;
      do {
        if ((puVar10[1] & 0x10) == 0) {
          puVar5 = (uint *)*puVar10;
          if (((uint)puVar5 & 2) != 0) {
            if ((((char)puVar10[2] == '\x04') || ((char)puVar10[2] != *(char *)((int)puVar10 + 9)))
               || (((puVar10[1] & 0x40) == 0 && (((uint)puVar5 & 4) == 0)))) goto LAB_006a805c;
            *puVar10 = (uint)puVar5 & 0xfffffffd;
          }
          uVar6 = 0;
          if (local_54 == 0) {
LAB_006a7fc7:
            uVar6 = *puVar3;
            iVar4 = FUN_0068ebc0(puVar10[6] - *(int *)(uVar6 + 0x24),uVar1);
LAB_006a804e:
            puVar5 = (uint *)(iVar4 + *(int *)(uVar6 + 0x2c));
LAB_006a8051:
            puVar10[8] = (uint)puVar5;
          }
          else {
            puVar5 = (uint *)puVar10[6];
            do {
              if ((int)puVar5 < *(int *)(puVar3[uVar6] + 0x24)) break;
              uVar6 = uVar6 + 1;
            } while (uVar6 < local_54);
            if (uVar6 == 0) goto LAB_006a7fc7;
            uVar6 = puVar3[uVar6 - 1];
            uVar7 = local_54;
            if (local_54 == 0) {
LAB_006a8003:
              uVar6 = puVar3[uVar7 - 1];
              iVar4 = FUN_0068ebc0((int)puVar5 - *(int *)(uVar6 + 0x24),uVar1);
              goto LAB_006a804e;
            }
            puVar8 = puVar3 + (local_54 - 1);
            do {
              if (*(int *)(*puVar8 + 0x24) < (int)puVar5) break;
              puVar8 = puVar8 + -1;
              uVar7 = uVar7 - 1;
            } while (uVar7 != 0);
            if (uVar7 == local_54) goto LAB_006a8003;
            uVar7 = puVar3[uVar7];
            if (puVar5 != *(uint **)(uVar6 + 0x24)) {
              if (puVar5 != *(uint **)(uVar7 + 0x24)) {
                iVar4 = FUN_0068ea60((int)puVar5 - *(int *)(uVar6 + 0x24),
                                     *(int *)(uVar7 + 0x2c) - *(int *)(uVar6 + 0x2c),
                                     (int)*(uint **)(uVar7 + 0x24) - *(int *)(uVar6 + 0x24));
                goto LAB_006a804e;
              }
              puVar5 = *(uint **)(uVar7 + 0x2c);
              goto LAB_006a8051;
            }
            puVar10[8] = *(uint *)(uVar6 + 0x2c);
          }
          puVar10[1] = puVar10[1] | 0x20;
        }
LAB_006a805c:
        puVar10 = puVar10 + 0xc;
        iVar11 = iVar11 + -1;
      } while (iVar11 != 0);
      if (puVar3 != local_40) {
        puVar5 = (uint *)FUN_00691290(local_44,puVar3);
      }
    }
  }
  return puVar5;
}


/* FUN_006a8090 @ 006a8090  kind=gamemisc  attributed-by=role:dispatch-target  size=438 */

void FUN_006a8090(void)

{
  undefined4 uVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int in_ECX;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int local_18;
  int local_14;
  undefined4 local_10;
  
  iVar8 = in_EAX * 0xcc + 4 + *(int *)(in_ECX + 0x18);
  uVar1 = *(undefined4 *)(iVar8 + 0xc4);
  local_18 = *(int *)(iVar8 + 200);
  puVar4 = *(uint **)(in_ECX + 0xc);
  iVar8 = *(int *)(in_ECX + 4);
  do {
    if (iVar8 == 0) {
      return;
    }
    uVar12 = *puVar4;
    uVar10 = puVar4[1] * 0x30 + uVar12;
    uVar5 = 0;
    uVar9 = 0;
    uVar2 = uVar12;
    if (uVar12 < uVar10) {
      do {
        if ((*(byte *)(uVar2 + 0x10) & 0x20) != 0) {
          if (uVar9 == 0) {
            uVar9 = uVar2;
          }
          uVar5 = uVar5 + 1;
        }
        uVar2 = uVar2 + 0x30;
      } while (uVar2 < uVar10);
      uVar2 = uVar9;
      if (uVar5 < 2) {
        if (uVar5 == 1) {
          local_18 = FUN_0068ebc0(*(undefined4 *)(uVar9 + 0x24),uVar1);
          local_18 = *(int *)(uVar9 + 0x2c) - local_18;
        }
        for (; uVar12 < uVar10; uVar12 = uVar12 + 0x30) {
          if (uVar12 != uVar9) {
            iVar3 = FUN_0068ebc0(*(undefined4 *)(uVar12 + 0x24),uVar1);
            *(int *)(uVar12 + 0x2c) = iVar3 + local_18;
          }
        }
      }
      else {
        do {
          do {
            uVar12 = uVar2;
            uVar2 = *(uint *)(uVar12 + 4);
            if (uVar2 == uVar9) goto LAB_006a8234;
          } while ((*(byte *)(uVar2 + 0x10) & 0x20) != 0);
          do {
            uVar2 = *(uint *)(uVar2 + 4);
          } while ((*(byte *)(uVar2 + 0x10) & 0x20) == 0);
          iVar3 = *(int *)(uVar12 + 0x24);
          local_14 = *(int *)(uVar2 + 0x24);
          if (local_14 < iVar3) {
            iVar11 = *(int *)(uVar2 + 0x2c);
            iVar13 = *(int *)(uVar12 + 0x2c);
            iVar6 = iVar3 - local_14;
          }
          else {
            iVar11 = *(int *)(uVar12 + 0x2c);
            iVar13 = *(int *)(uVar2 + 0x2c);
            iVar6 = local_14 - iVar3;
            local_14 = iVar3;
          }
          local_10 = 0x10000;
          if (0 < iVar6) {
            local_10 = FUN_0068ec40(iVar13 - iVar11,iVar6);
          }
          uVar12 = *(uint *)(uVar12 + 4);
          do {
            iVar3 = *(int *)(uVar12 + 0x24) - local_14;
            uVar7 = uVar1;
            if ((iVar3 < 1) || (uVar7 = local_10, iVar3 < iVar6)) {
              iVar3 = FUN_0068ebc0(iVar3,uVar7);
            }
            else {
              iVar3 = FUN_0068ebc0(iVar3 - iVar6,uVar1);
              iVar3 = iVar3 + (iVar13 - iVar11);
            }
            *(int *)(uVar12 + 0x2c) = iVar3 + iVar11;
            uVar12 = *(uint *)(uVar12 + 4);
          } while (uVar12 != uVar2);
        } while (uVar2 != uVar9);
      }
    }
LAB_006a8234:
    iVar8 = iVar8 + -1;
    puVar4 = puVar4 + 2;
  } while( true );
}


/* FUN_006a84c0 @ 006a84c0  kind=gamemisc  attributed-by=role:dispatch-target  size=47 */

void FUN_006a84c0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = &LAB_006a6360;
  in_EAX[2] = &LAB_006a6320;
  in_EAX[3] = FUN_006a6370;
  in_EAX[4] = FUN_006a6100;
  in_EAX[5] = FUN_006a61f0;
  in_EAX[6] = &LAB_006a8260;
  return;
}


/* FUN_006a84f0 @ 006a84f0  kind=gamemisc  attributed-by=role:dispatch-target  size=47 */

void FUN_006a84f0(void)

{
  undefined4 *in_EAX;
  
  *in_EAX = 0;
  in_EAX[1] = &LAB_006a63c0;
  in_EAX[2] = &LAB_006a6320;
  in_EAX[3] = &LAB_006a63d0;
  in_EAX[4] = FUN_006a6250;
  in_EAX[5] = &LAB_006a62c0;
  in_EAX[6] = &LAB_006a8260;
  return;
}


/* FUN_006a8c20 @ 006a8c20  kind=gamemisc  attributed-by=role:dispatch-target  size=166 */

int FUN_006a8c20(undefined4 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = param_3;
  param_1[8] = param_3;
  uVar2 = FUN_00693a60(param_3,4,0,param_2,0,&param_3);
  param_1[6] = uVar2;
  if (param_3 == 0) {
    uVar2 = FUN_00693a60(iVar1,4,0,param_2,0,&param_3);
    param_1[7] = uVar2;
    if (param_3 == 0) {
      param_1[4] = param_2;
      param_1[5] = 0;
      *param_1 = 0;
      param_1[2] = 0;
      param_1[1] = 0;
      param_1[3] = 0xdeadbeef;
      param_1[9] = FUN_006a8c20;
      param_1[10] = &LAB_006a8e20;
      param_1[0xb] = &LAB_006a8d60;
      param_1[0xc] = FUN_006a8e80;
      return 0;
    }
  }
  FUN_00691290(iVar1,param_1[6]);
  param_1[6] = 0;
  return param_3;
}


/* FUN_006a8d00 @ 006a8d00  kind=gamemisc  attributed-by=role:dispatch-target  size=90 */

int FUN_006a8d00(undefined4 param_1)

{
  undefined4 uVar1;
  void *_Src;
  void *_Dst;
  undefined4 *unaff_ESI;
  int local_4;
  
  uVar1 = unaff_ESI[8];
  _Src = (void *)*unaff_ESI;
  _Dst = (void *)FUN_00692230(uVar1,param_1,&local_4);
  *unaff_ESI = _Dst;
  if (local_4 != 0) {
    *unaff_ESI = _Src;
    return local_4;
  }
  if (_Src != (void *)0x0) {
    memcpy(_Dst,_Src,unaff_ESI[2]);
    FUN_006a8cd0(_Src);
    FUN_00691290(uVar1,_Src);
  }
  unaff_ESI[2] = param_1;
  return 0;
}


/* FUN_006a94c0 @ 006a94c0  kind=gamemisc  attributed-by=role:dispatch-target  size=91 */

undefined4 FUN_006a94c0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *unaff_EBX;
  char *unaff_ESI;
  
  pcVar2 = (char *)*unaff_EBX;
  pcVar1 = pcVar2 + 3;
  if ((((pcVar1 < unaff_ESI) && (*pcVar2 == 't')) && (pcVar2[1] == 'r')) &&
     ((pcVar2[2] == 'u' && (*pcVar1 == 'e')))) {
    *unaff_EBX = pcVar2 + 5;
    return 1;
  }
  if ((((pcVar2 + 4 < unaff_ESI) && ((*pcVar2 == 'f' && (pcVar2[1] == 'a')))) && (pcVar2[2] == 'l'))
     && ((*pcVar1 == 's' && (pcVar2[4] == 'e')))) {
    pcVar2 = pcVar2 + 6;
  }
  *unaff_EBX = pcVar2;
  return 0;
}


/* FUN_006a95f0 @ 006a95f0  kind=gamemisc  attributed-by=role:dispatch-target  size=46 */

void FUN_006a95f0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    puVar2 = *(undefined4 **)(param_1 + 0x10);
    *(undefined4 *)(iVar1 + 0x6c) = *puVar2;
    *(undefined4 *)(iVar1 + 0x70) = puVar2[1];
    *(undefined4 *)(iVar1 + 0x74) = puVar2[2];
    *(undefined4 *)(iVar1 + 0x78) = puVar2[3];
    *(undefined4 *)(iVar1 + 0x7c) = puVar2[4];
  }
  return;
}


/* FUN_006a98e0 @ 006a98e0  kind=gamemisc  attributed-by=role:dispatch-target  size=172 */

undefined4
FUN_006a98e0(void *param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  memset(param_1,0,0x5dc);
  iVar1 = FUN_0068fe10(*(undefined4 *)(param_2 + 0x60),"postscript-cmaps");
  if (iVar1 == 0) {
    return 7;
  }
  *(int *)((int)param_1 + 0x544) = iVar1;
  FUN_006a9560(param_1,param_2,param_3,param_4,param_7);
  *(undefined4 *)((int)param_1 + 0x548) = *(undefined4 *)(param_2 + 0x10);
  *(undefined4 *)((int)param_1 + 0x54c) = param_5;
  *(undefined4 *)((int)param_1 + 0x5b8) = param_6;
  *(undefined4 *)((int)param_1 + 0x5bc) = param_8;
  *(undefined4 *)((int)param_1 + 0x5c0) = param_9;
  *(code **)((int)param_1 + 0x5c4) = FUN_006a98e0;
  *(undefined1 **)((int)param_1 + 0x5c8) = &LAB_006a9990;
  *(code **)((int)param_1 + 0x5cc) = FUN_006aabd0;
  return 0;
}


/* FUN_006a99a0 @ 006a99a0  kind=gamemisc  attributed-by=role:dispatch-target  size=55 */

void FUN_006a99a0(int param_1)

{
  int iVar1;
  int iVar2;
  int *in_EAX;
  
  iVar1 = *in_EAX;
  iVar2 = *(int *)(iVar1 + 0x1e4);
  in_EAX[6] = *(int *)(iVar1 + 0x1a0);
  in_EAX[7] = *(int *)(iVar1 + 0x1a4);
  in_EAX[5] = *(int *)(iVar2 + 0x14);
  if (param_1 != 0) {
    in_EAX[4] = *(int *)(iVar2 + 0x1c);
    return;
  }
  in_EAX[4] = *(int *)(iVar2 + 0x18);
  return;
}


/* FUN_006a9f00 @ 006a9f00  kind=gamemisc  attributed-by=role:dispatch-target  size=126 */

undefined4 FUN_006a9f00(undefined4 param_1,int param_2)

{
  int in_EAX;
  int iVar1;
  undefined1 local_4 [4];
  
  while (in_EAX != 0) {
    in_EAX = in_EAX + -1;
    iVar1 = FUN_006a9d80(1,0);
    if (iVar1 == 0) {
      return 0xa0;
    }
  }
  iVar1 = FUN_006a9d80(1,local_4);
  while( true ) {
    if (iVar1 == 0) {
      return 0xa0;
    }
    iVar1 = FUN_006a9e10();
    if ((iVar1 == param_2) || (iVar1 == 0x14)) break;
    iVar1 = FUN_006a9d80(1,local_4);
  }
  return 0;
}


/* FUN_006aa260 @ 006aa260  kind=gamemisc  attributed-by=role:dispatch-target  size=119 */

uint FUN_006aa260(int *param_1,int param_2,uint param_3,ushort *param_4)

{
  int iVar1;
  byte *in_EAX;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  iVar1 = *param_1;
  uVar3 = *param_4;
  uVar4 = (uint)uVar3;
  if ((uint)(param_2 - iVar1) < param_3) {
    param_3 = param_2 - iVar1;
  }
  uVar5 = 0;
  if (param_3 != 0) {
    iVar6 = iVar1 - (int)in_EAX;
    uVar2 = param_3;
    do {
      uVar5 = (in_EAX[iVar6] + uVar4) * -0x3193 + 0x58bf;
      *in_EAX = (byte)(uVar4 >> 8) ^ in_EAX[iVar6];
      uVar4 = uVar5 & 0xffff;
      uVar3 = (ushort)uVar5;
      in_EAX = in_EAX + 1;
      uVar2 = uVar2 - 1;
      uVar5 = param_3;
    } while (uVar2 != 0);
  }
  *param_1 = iVar1 + param_3;
  *param_4 = uVar3;
  return uVar5;
}


/* FUN_006aa9f0 @ 006aa9f0  kind=gamemisc  attributed-by=role:dispatch-target  size=468 */

int FUN_006aa9f0(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int in_EAX;
  int iVar8;
  int in_ECX;
  int in_EDX;
  int local_10;
  int local_4;
  
  if ((*(char *)(in_EDX + 0x5d8) != '\0') ||
     ((param_2 = param_2 + *(int *)(in_EDX + 0x20), *(int *)(in_EDX + 0x54c) == 0 &&
      (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0)))) {
    return 0xa0;
  }
  local_10 = in_EAX;
  if (*(int *)(*(int *)(*(int *)(in_EDX + 4) + 0x80) + 0x34) == 0) {
    in_ECX = FUN_006a9840();
    local_10 = FUN_006a9840();
  }
  if ((-1 < in_ECX) && (-1 < local_10)) {
    if (*(char *)(in_EDX + 0x45) == '\0') {
      FUN_0068f0a0(*(undefined4 *)(in_EDX + 0xc));
      *(undefined1 *)(in_EDX + 0x5d8) = 1;
      local_4 = FUN_006a98d0();
      *(undefined1 *)(in_EDX + 0x5d8) = 0;
      if (local_4 == 0) {
        uVar4 = *(undefined4 *)(in_EDX + 0x28);
        uVar5 = *(undefined4 *)(in_EDX + 0x2c);
        uVar6 = *(undefined4 *)(in_EDX + 0x20);
        uVar7 = *(undefined4 *)(in_EDX + 0x24);
        *(undefined4 *)(in_EDX + 0x20) = 0;
        *(undefined4 *)(in_EDX + 0x24) = 0;
        *(int *)(in_EDX + 0x18) = param_2 - param_1;
        *(undefined4 *)(in_EDX + 0x1c) = param_3;
        *(undefined1 *)(in_EDX + 0x5d8) = 1;
        local_4 = FUN_006a98d0();
        *(undefined1 *)(in_EDX + 0x5d8) = 0;
        if (local_4 == 0) {
          *(undefined4 *)(in_EDX + 0x20) = uVar6;
          *(undefined4 *)(in_EDX + 0x24) = uVar7;
          *(undefined4 *)(in_EDX + 0x28) = uVar4;
          *(undefined4 *)(in_EDX + 0x2c) = uVar5;
          *(undefined4 *)(in_EDX + 0x18) = 0;
          *(undefined4 *)(in_EDX + 0x1c) = 0;
        }
      }
    }
    else {
      iVar1 = *(int *)(in_EDX + 8);
      iVar2 = **(int **)(iVar1 + 0x9c);
      local_4 = FUN_00693db0(iVar2,2);
      if (local_4 == 0) {
        piVar3 = *(int **)(iVar2 + 0x58);
        *(undefined2 *)(piVar3 + 1) = 0x202;
        *piVar3 = in_ECX;
        piVar3[2] = 0;
        piVar3[3] = 0;
        piVar3[8] = local_10;
        *(undefined2 *)(piVar3 + 9) = 2;
        iVar8 = FUN_0068e970(param_2 - param_1);
        piVar3[10] = iVar8 >> 0x10;
        iVar8 = FUN_0068e970(param_3);
        piVar3[0xb] = iVar8 >> 0x10;
        *(undefined4 *)(iVar1 + 0x80) = 2;
        *(undefined4 *)(iVar1 + 0x84) = *(undefined4 *)(iVar2 + 0x34);
        *(undefined4 *)(iVar1 + 0x48) = 0x636f6d70;
        *(undefined4 *)(iVar2 + 0x54) = 2;
        return 0;
      }
    }
    return local_4;
  }
  return 0xa0;
}


/* FUN_006aabd0 @ 006aabd0  kind=gamemisc  attributed-by=role:dispatch-target  size=742 */

undefined4 FUN_006aabd0(int param_1,byte *param_2,uint param_3)

{
  uint *puVar1;
  byte bVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint *puVar12;
  byte *pbVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint *local_38;
  byte *pbStack_28;
  int local_24;
  uint local_1c;
  uint *puStack_18;
  undefined4 *local_14;
  uint local_10;
  byte *pbStack_c;
  byte *pbStack_8;
  int local_4;
  
  iVar9 = param_1;
  uVar6 = (uint)&local_1c ^ (uint)&param_1 ^ (uint)&param_2;
  local_1c = ((int)((int)uVar6 >> 10 ^ uVar6) >> 10 ^ uVar6) & 0xffff;
  local_4 = param_1;
  local_24 = 0;
  if (local_1c == 0) {
    local_1c = 0x7384;
  }
  *(int *)(param_1 + 0x470) = param_1 + 0x70;
  *(int *)(param_1 + 0x540) = param_1 + 0x474;
  puVar3 = *(undefined4 **)(param_1 + 0x48);
  *(undefined4 *)(param_1 + 0x40) = 0;
  puVar15 = (undefined4 *)(param_1 + 0x474);
  local_14 = puVar15;
  if (*(int *)(param_1 + 0x5d4) != 0) {
    memset(*(void **)(param_1 + 0x5d0),0,*(int *)(param_1 + 0x5d4) * 4);
  }
  pbStack_28 = param_2;
  *(byte **)(iVar9 + 0x478) = param_2;
  pbVar7 = param_2 + param_3;
  *(byte **)(iVar9 + 0x47c) = pbVar7;
  *puVar15 = param_2;
  uVar6 = *(uint *)(iVar9 + 0x18);
  uVar4 = *(uint *)(iVar9 + 0x1c);
  local_10 = uVar6;
  if (puVar3 != (undefined4 *)0x0) {
    (*(code *)puVar3[1])(*puVar3);
  }
  param_3 = param_3 & 0xffffff00;
  if (pbVar7 <= pbStack_28) {
    return 0;
  }
  do {
    puStack_18 = *(uint **)(param_1 + 0x470);
    pbVar13 = pbStack_28 + 1;
    uVar8 = 0;
    iVar11 = 0;
    switch(*pbStack_28) {
    case 1:
      uVar8 = 0x10;
      pbStack_28 = pbVar13;
      break;
    default:
      bVar2 = *pbStack_28;
      if (bVar2 < 0x20) {
        return 0xa0;
      }
      if (bVar2 < 0xf7) {
        iVar11 = bVar2 - 0x8b;
        pbStack_28 = pbVar13;
      }
      else {
        pbVar13 = pbStack_28 + 2;
        if (pbVar7 < pbVar13) {
          return 0xa0;
        }
        bVar2 = *pbStack_28;
        if (bVar2 < 0xfb) {
          iVar11 = (uint)bVar2 * 0x100 + -0xf694 + (uint)pbStack_28[1];
          pbStack_28 = pbVar13;
        }
        else {
          iVar11 = ((uint)bVar2 * -0x100 + 0xfa94) - (uint)pbStack_28[1];
          pbStack_28 = pbVar13;
        }
      }
LAB_006aaee1:
      if ((char)param_3 == '\0') {
        iVar11 = iVar11 << 0x10;
      }
      break;
    case 3:
      uVar8 = 0x12;
      pbStack_28 = pbVar13;
      break;
    case 4:
      uVar8 = 0xe;
      pbStack_28 = pbVar13;
      break;
    case 5:
      uVar8 = 9;
      pbStack_28 = pbVar13;
      break;
    case 6:
      uVar8 = 6;
      pbStack_28 = pbVar13;
      break;
    case 7:
      uVar8 = 0xd;
      pbStack_28 = pbVar13;
      break;
    case 8:
      uVar8 = 0xb;
      pbStack_28 = pbVar13;
      break;
    case 9:
      uVar8 = 5;
      pbStack_28 = pbVar13;
      break;
    case 10:
      uVar8 = 0x16;
      pbStack_28 = pbVar13;
      break;
    case 0xb:
      uVar8 = 0x18;
      pbStack_28 = pbVar13;
      break;
    case 0xc:
      if (pbVar7 < pbVar13) {
        return 0xa0;
      }
      pbStack_28 = pbStack_28 + 2;
      switch(*pbVar13) {
      case 0:
        uVar8 = 0xf;
        break;
      case 1:
        uVar8 = 0x13;
        break;
      case 2:
        uVar8 = 0x11;
        break;
      default:
        goto switchD_006aadd5_caseD_3;
      case 6:
        uVar8 = 3;
        break;
      case 7:
        uVar8 = 4;
        break;
      case 0xc:
        uVar8 = 0x14;
        break;
      case 0x10:
        uVar8 = 0x15;
        break;
      case 0x11:
        uVar8 = 0x17;
        break;
      case 0x21:
        uVar8 = 0x19;
      }
      break;
    case 0xd:
      uVar8 = 2;
      pbStack_28 = pbVar13;
      break;
    case 0xe:
      uVar8 = 1;
      pbStack_28 = pbVar13;
      break;
    case 0xf:
      uVar8 = 0x1a;
      pbStack_28 = pbVar13;
      break;
    case 0x15:
      uVar8 = 10;
      pbStack_28 = pbVar13;
      break;
    case 0x16:
      uVar8 = 7;
      pbStack_28 = pbVar13;
      break;
    case 0x1e:
      uVar8 = 0xc;
      pbStack_28 = pbVar13;
      break;
    case 0x1f:
      uVar8 = 8;
      pbStack_28 = pbVar13;
      break;
    case 0xff:
      pbStack_8 = pbStack_28 + 5;
      if (pbVar7 < pbStack_8) {
        return 0xa0;
      }
      iVar11 = CONCAT31(CONCAT21(CONCAT11(*pbVar13,pbStack_28[2]),pbStack_28[3]),pbStack_28[4]);
      pbStack_28 = pbStack_8;
      if (iVar11 + 32000U < 0xfa01) goto LAB_006aaee1;
      if ((char)param_3 == '\0') {
        param_3 = CONCAT31(param_3._1_3_,1);
      }
    }
    if (((0 < local_24) && (uVar8 != 0)) && ((uVar8 < 0x16 || (0x18 < uVar8)))) {
      local_24 = 0;
    }
    if ((char)param_3 != '\0') {
      if (uVar8 != 0) {
        if (uVar8 != 0x14) {
          param_3 = param_3 & 0xffffff00;
        }
        goto LAB_006aaf1c;
      }
LAB_006aaf20:
      if (0x3ff < (int)((int)puStack_18 + (-0x70 - param_1) & 0xfffffffcU)) {
switchD_006aadd5_caseD_3:
        return 0xa0;
      }
      *puStack_18 = iVar11;
      *(uint **)(param_1 + 0x470) = puStack_18 + 1;
      goto LAB_006ab89c;
    }
LAB_006aaf1c:
    if (uVar8 == 0) goto LAB_006aaf20;
    if (uVar8 != 0x15) {
      if ((int)puStack_18 + (-0x70 - param_1) >> 2 < (int)(&DAT_00732f88)[uVar8]) {
        return 0xa1;
      }
      if (0x19 < uVar8 - 1) {
        return 0xa0;
      }
      uVar10 = (*(code *)(&PTR_LAB_006abb50)[uVar8 - 1])();
      return uVar10;
    }
    if ((int)((int)puStack_18 + (-0x70 - param_1) & 0xfffffffcU) < 8) {
      return 0xa1;
    }
    pbStack_c = (byte *)(int)*(short *)((int)puStack_18 + -2);
    iVar11 = (int)*(short *)((int)puStack_18 + -6);
    if ((int)puStack_18 + (-0x78 - param_1) >> 2 < iVar11) {
      return 0xa1;
    }
    puVar1 = puStack_18 + (-2 - iVar11);
    local_38 = (uint *)0x0;
    local_24 = 0;
    puStack_18 = puVar1;
    switch(pbStack_c) {
    case (byte *)0x0:
      if (iVar11 != 3) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x578) == 0) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x57c) != 7) {
        return 0xa0;
      }
      *puVar1 = uVar6;
      puVar1[1] = uVar4;
      *(uint **)(param_1 + 0x470) = puVar1 + 2;
      break;
    case (byte *)0x1:
      if (iVar11 != 0) {
        return 0xa0;
      }
      *(undefined4 *)(param_1 + 0x578) = 1;
      *(undefined4 *)(param_1 + 0x57c) = 0;
      iVar11 = FUN_006a9770(iVar9,uVar6,uVar4);
      if (iVar11 != 0) {
        return 0;
      }
      iVar11 = FUN_006a9620(iVar9,6);
      if (iVar11 != 0) {
        return 0;
      }
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x2:
      if (iVar11 != 0) {
        return 0xa0;
      }
      uVar8 = *(uint *)(param_1 + 0x57c);
      *(uint *)(param_1 + 0x57c) = uVar8 + 1;
      if (uVar8 - 1 < 6) {
        if ((uVar8 == 3) || (uVar8 == 6)) {
          FUN_006a9660(iVar9,uVar6,uVar4,1);
          *(uint **)(param_1 + 0x470) = puVar1;
        }
        else {
          FUN_006a9660(iVar9,uVar6,uVar4,uVar8 & 0xffffff00);
          *(uint **)(param_1 + 0x470) = puVar1;
        }
        break;
      }
      goto LAB_006ab2a8;
    case (byte *)0x3:
      if (iVar11 != 1) {
        return 0xa0;
      }
      local_38 = (uint *)0x1;
      if (puVar3 == (undefined4 *)0x0) goto LAB_006ab2a8;
      (*(code *)puVar3[5])(*puVar3,(int)*(short *)(*(int *)(iVar9 + 0x14) + 2));
      *(uint **)(param_1 + 0x470) = puVar1 + 1;
      break;
    default:
      *(uint **)(param_1 + 0x470) = puVar1;
      local_24 = iVar11;
      break;
    case (byte *)0xc:
    case (byte *)0xd:
      *(int *)(param_1 + 0x470) = param_1 + 0x70;
      break;
    case (byte *)0xe:
    case (byte *)0xf:
    case (byte *)0x10:
    case (byte *)0x11:
    case (byte *)0x12:
      puVar5 = *(uint **)(param_1 + 0x5b8);
      if (puVar5 == (uint *)0x0) {
        return 0xa0;
      }
      pbStack_8 = (byte *)(((pbStack_c == (byte *)0x12) - 0xd) + (int)pbStack_c);
      if (iVar11 != *puVar5 * (int)pbStack_8) {
        return 0xa0;
      }
      puVar12 = puVar1 + (int)pbStack_8;
      local_38 = puVar1;
      pbVar13 = pbStack_8;
      if (pbStack_8 != (byte *)0x0) {
        do {
          pbStack_c = pbVar13;
          uVar8 = *local_38;
          uVar14 = 1;
          if (1 < *puVar5) {
            do {
              iVar9 = FUN_0068ebc0(*puVar12,*(undefined4 *)(puVar5[0x22] + uVar14 * 4));
              uVar14 = uVar14 + 1;
              uVar8 = uVar8 + iVar9;
              puVar12 = puVar12 + 1;
            } while (uVar14 < *puVar5);
          }
          *local_38 = uVar8;
          local_38 = local_38 + 1;
          pbVar13 = pbStack_c + -1;
        } while (pbStack_c + -1 != (byte *)0x0);
        pbStack_c = (byte *)0x0;
      }
      *(uint **)(param_1 + 0x470) = puStack_18 + (int)pbStack_8;
      iVar9 = local_4;
      break;
    case (byte *)0x13:
      if (iVar11 != 1) {
        return 0xa0;
      }
      if (*(uint **)(param_1 + 0x5b8) == (uint *)0x0) {
        return 0xa0;
      }
      iVar11 = (int)*(short *)((int)puVar1 + 2);
      if (iVar11 < 0) {
        return 0xa0;
      }
      pbStack_8 = (byte *)**(uint **)(param_1 + 0x5b8);
      if (*(byte **)(param_1 + 0x5d4) < pbStack_8 + iVar11) {
        return 0xa0;
      }
      memcpy((void *)(*(int *)(param_1 + 0x5d0) + iVar11 * 4),
             *(void **)(*(int *)(param_1 + 0x5b8) + 0x88),(int)pbStack_8 * 4);
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x14:
      if (iVar11 != 2) {
        return 0xa0;
      }
      *puVar1 = *puVar1 + puVar1[1];
      goto LAB_006ab29c;
    case (byte *)0x15:
      if (iVar11 != 2) {
        return 0xa0;
      }
      *puVar1 = *puVar1 - puVar1[1];
      goto LAB_006ab29c;
    case (byte *)0x16:
      if (iVar11 != 2) {
        return 0xa0;
      }
      uVar8 = FUN_0068ebc0(*puVar1,puVar1[1]);
      goto LAB_006ab29a;
    case (byte *)0x17:
      if (iVar11 != 2) {
        return 0xa0;
      }
      if (puVar1[1] == 0) {
        return 0xa0;
      }
      uVar8 = FUN_0068ec40(*puVar1,puVar1[1]);
      goto LAB_006ab29a;
    case (byte *)0x18:
      if (iVar11 != 2) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x5b8) == 0) {
        return 0xa0;
      }
      uVar8 = (uint)*(short *)((int)puVar1 + 6);
      if ((int)uVar8 < 0) {
        return 0xa0;
      }
      if (*(uint *)(param_1 + 0x5d4) <= uVar8) {
        return 0xa0;
      }
      *(uint *)(*(int *)(param_1 + 0x5d0) + uVar8 * 4) = *puVar1;
      *(uint **)(param_1 + 0x470) = puVar1;
      break;
    case (byte *)0x19:
      if (iVar11 != 1) {
        return 0xa0;
      }
      if (*(int *)(param_1 + 0x5b8) == 0) {
        return 0xa0;
      }
      uVar8 = (uint)*(short *)((int)puVar1 + 2);
      if ((int)uVar8 < 0) {
        return 0xa0;
      }
      if (*(uint *)(param_1 + 0x5d4) <= uVar8) {
        return 0xa0;
      }
      uVar8 = *(uint *)(*(int *)(param_1 + 0x5d0) + uVar8 * 4);
LAB_006ab29a:
      *puVar1 = uVar8;
      goto LAB_006ab29c;
    case (byte *)0x1b:
      if (iVar11 != 4) {
        return 0xa0;
      }
      if ((int)puVar1[3] < (int)puVar1[2]) {
        *puVar1 = puVar1[1];
      }
      *(uint **)(param_1 + 0x470) = puVar1 + 1;
      break;
    case (byte *)0x1c:
      if (iVar11 != 0) {
        return 0xa0;
      }
      uVar8 = local_1c;
      if (0x7fff < (int)local_1c) {
        uVar8 = local_1c + 1;
      }
      *puVar1 = uVar8;
      local_1c = FUN_0068ebc0(local_1c,0x10000 - local_1c);
      if (local_1c == 0) {
        local_1c = 0x2873;
      }
LAB_006ab29c:
      local_38 = (uint *)0x1;
LAB_006ab2a8:
      *(uint **)(param_1 + 0x470) = puVar1 + (int)local_38;
    }
LAB_006ab89c:
    if (pbVar7 <= pbStack_28) {
      return 0;
    }
  } while( true );
}


/* FUN_006ac110 @ 006ac110  kind=gamemisc  attributed-by=role:dispatch-target  size=116 */

int FUN_006ac110(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_4 [4];
  
  iVar1 = FUN_006a9d80(1,local_4);
  while (iVar1 != 0) {
    uVar2 = FUN_006a9e10();
    switch(uVar2) {
    case 0x14:
    case 0x15:
      return 0;
    default:
      goto LAB_006ac180;
    case 0x32:
    case 0x33:
      iVar1 = FUN_006abf20();
      break;
    case 0x35:
      iVar1 = FUN_006abd50();
      break;
    case 0x4b:
      goto switchD_006ac14a_caseD_4b;
    }
    if (iVar1 != 0) {
      return iVar1;
    }
switchD_006ac14a_caseD_4b:
    iVar1 = FUN_006a9d80(1,local_4);
  }
LAB_006ac180:
  return 0xa0;
}


/* FUN_006ac4e0 @ 006ac4e0  kind=gamemisc  attributed-by=role:dispatch-target  size=61 */

void FUN_006ac4e0(void)

{
  int in_EAX;
  uint uVar1;
  byte *in_EDX;
  
  for (; in_EAX != 0; in_EAX = in_EAX + -1) {
    uVar1 = *in_EDX >> 1 & 0x55 | (*in_EDX & 0x55) * 2;
    uVar1 = uVar1 >> 2 & 0x33 | (uVar1 & 0x33) * 4;
    *in_EDX = (byte)(uVar1 >> 4) | (char)uVar1 << 4;
    in_EDX = in_EDX + 1;
  }
  return;
}


/* FUN_006ac520 @ 006ac520  kind=gamemisc  attributed-by=role:dispatch-target  size=34 */

void FUN_006ac520(void)

{
  undefined1 uVar1;
  undefined1 *in_EAX;
  uint in_ECX;
  uint uVar2;
  
  if (1 < in_ECX) {
    uVar2 = in_ECX >> 1;
    do {
      uVar1 = *in_EAX;
      *in_EAX = in_EAX[1];
      in_EAX[1] = uVar1;
      in_EAX = in_EAX + 2;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  return;
}


/* FUN_006ac550 @ 006ac550  kind=gamemisc  attributed-by=role:dispatch-target  size=48 */

void FUN_006ac550(void)

{
  undefined1 uVar1;
  int in_EAX;
  undefined1 *puVar2;
  uint in_ECX;
  uint uVar3;
  
  if (3 < in_ECX) {
    puVar2 = (undefined1 *)(in_EAX + 1);
    uVar3 = in_ECX >> 2;
    do {
      uVar1 = puVar2[-1];
      puVar2[-1] = puVar2[2];
      puVar2[2] = uVar1;
      uVar1 = *puVar2;
      *puVar2 = puVar2[1];
      puVar2[1] = uVar1;
      puVar2 = puVar2 + 4;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}


/* FUN_006b4ba0 @ 006b4ba0  kind=gamemisc  attributed-by=role:dispatch-target  size=28 */

undefined4 FUN_006b4ba0(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0xa4);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006b4c60 @ 006b4c60  kind=gamemisc  attributed-by=role:dispatch-target  size=921 */

void FUN_006b4c60(int param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  size_t _Size;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_30;
  uint local_2c;
  void *local_28;
  undefined4 local_24;
  int local_20;
  int *local_1c;
  int local_18;
  uint local_14;
  int iStack_10;
  int iStack_c;
  int iStack_8;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_30;
  iVar6 = *(int *)(param_1 + 4);
  iVar4 = *(int *)(iVar6 + 0x148);
  _Size = 0;
  local_30 = 0;
  local_24 = *(undefined4 *)(iVar6 + 100);
  local_18 = *(int *)(iVar6 + 0x88);
  local_1c = *(int **)(*(int *)(iVar6 + 0x80) + 0x34);
  local_28 = (void *)0x0;
  local_20 = iVar4;
  if (local_1c == (int *)0x0) {
    iVar5 = *(int *)(iVar6 + 0x124) + *(int *)(iVar6 + 0x120);
    local_30 = FUN_006908c0(iVar4,iVar5 * param_2 + *(int *)(iVar6 + 0x11c) +
                                  *(int *)(iVar6 + 0x134));
    if ((local_30 != 0) || (local_30 = FUN_00691f30(iVar4,iVar5 * 2), local_30 != 0))
    goto LAB_006b4fe6;
    local_2c = *(int *)(iVar4 + 0x20);
    local_14 = FUN_006b3c60();
    local_28 = (void *)FUN_006b3c60();
    local_2c = local_2c + *(int *)(iVar6 + 0x120);
    iVar4 = FUN_006b3c60();
    pvVar1 = local_28;
    _Size = iVar4 - (int)local_28;
    FUN_00691fe0(local_20);
    if (*(uint *)(iVar6 + 300) <= local_14) {
      __security_check_cookie(local_4 ^ (uint)&local_30);
      return;
    }
    if (((_Size == 0) || (local_28 = (void *)FUN_00692230(local_24,_Size,&local_30), local_30 != 0))
       || (local_30 = FUN_00690940(local_20,*(int *)(iVar6 + 0x134) + (int)pvVar1,local_28,_Size),
          local_30 != 0)) goto LAB_006b4fe6;
    local_30 = 0;
    uVar3 = local_14;
  }
  else {
    local_30 = (**(code **)*local_1c)(local_1c[1],param_2,&local_14);
    if (local_30 != 0) goto LAB_006b4fe6;
    local_2c = local_14;
    uVar3 = FUN_006b3c60();
    if (iStack_10 != 0) {
      _Size = iStack_10 - *(int *)(iVar6 + 0x120);
      local_28 = (void *)FUN_00692230(local_24,_Size,&local_30);
      if (local_30 == 0) {
        memcpy(local_28,(void *)(*(int *)(iVar6 + 0x120) + local_14),_Size);
      }
    }
    (**(code **)(*local_1c + 4))(local_1c[1],&local_14);
    if (local_30 != 0) goto LAB_006b4fe6;
  }
  pvVar1 = local_28;
  iVar4 = *(int *)(iVar6 + 0x13c);
  *(undefined4 *)(param_1 + 0x554) = *(undefined4 *)(iVar4 + uVar3 * 8);
  *(undefined4 *)(param_1 + 0x558) = *(undefined4 *)(iVar4 + uVar3 * 8 + 4);
  *(undefined4 *)(param_1 + 0x55c) = 0;
  iVar6 = uVar3 * 0xfc + *(int *)(iVar6 + 0x130);
  *(undefined4 *)(param_1 + 0x560) = *(undefined4 *)(iVar6 + 0xd8);
  *(undefined4 *)(param_1 + 0x564) = *(undefined4 *)(iVar6 + 0xdc);
  *(undefined4 *)(param_1 + 0x568) = *(undefined4 *)(iVar6 + 0xe0);
  *(undefined4 *)(param_1 + 0x56c) = *(undefined4 *)(iVar6 + 0xe4);
  *(undefined4 *)(param_1 + 0x570) = *(undefined4 *)(iVar6 + 0xe8);
  *(undefined4 *)(param_1 + 0x574) = *(undefined4 *)(iVar6 + 0xec);
  uVar3 = *(uint *)(iVar6 + 4);
  *(uint *)(param_1 + 0x550) = uVar3;
  uVar7 = ((int)uVar3 < 0) - 1 & uVar3;
  if (-1 < (int)uVar3) {
    (**(code **)(local_18 + 0x10))(local_28,_Size,0x10ea);
  }
  local_30 = (**(code **)(param_1 + 0x5cc))(param_1,uVar7 + (int)pvVar1,_Size - uVar7);
  FUN_00691290(local_24,pvVar1);
  piVar2 = local_1c;
  if (((local_30 == 0) && (local_1c != (int *)0x0)) && (*(int *)(*local_1c + 8) != 0)) {
    iVar6 = FUN_0068e970(*(undefined4 *)(param_1 + 0x20));
    local_14 = iVar6 >> 0x10;
    iStack_10 = 0;
    iStack_c = FUN_0068e970(*(undefined4 *)(param_1 + 0x28));
    iStack_c = iStack_c >> 0x10;
    iStack_8 = FUN_0068e970(*(undefined4 *)(param_1 + 0x2c));
    iStack_8 = iStack_8 >> 0x10;
    (**(code **)(*piVar2 + 8))(piVar2[1],param_2,0,&local_14);
    *(uint *)(param_1 + 0x20) = local_14 << 0x10;
    *(int *)(param_1 + 0x28) = iStack_c << 0x10;
    *(int *)(param_1 + 0x2c) = iStack_8 << 0x10;
    __security_check_cookie(local_4 ^ (uint)&local_30);
    return;
  }
LAB_006b4fe6:
  __security_check_cookie(local_4 ^ (uint)&local_30);
  return;
}


/* FUN_006b7030 @ 006b7030  kind=gamemisc  attributed-by=role:dispatch-target  size=999 */

int FUN_006b7030(undefined4 param_1,int param_2,int *param_3,undefined1 param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int unaff_EBX;
  undefined4 local_40;
  undefined4 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20 [8];
  uint local_18;
  
  piVar1 = param_3;
  iVar2 = *(int *)(unaff_EBX + 0x1c);
  memset(param_3,0,0x818);
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  *piVar1 = unaff_EBX;
  piVar1[1] = iVar2;
  FUN_00690930();
  param_3 = (int *)FUN_00692010();
  if (param_3 != (int *)0x0) goto LAB_006b7403;
  if ((((char)piVar1[4] == '\x01') && (3 < *(byte *)((int)piVar1 + 0x12))) &&
     (*(byte *)((int)piVar1 + 0x13) < 5)) {
    param_3 = (int *)FUN_00690900();
    if ((((param_3 != (int *)0x0) || (param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0)) ||
        ((param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0 ||
         ((param_3 = (int *)FUN_006b5ec0(1), param_3 != (int *)0x0 ||
          (param_3 = (int *)FUN_006b5ec0(1), param_3 != (int *)0x0)))))) ||
       (param_3 = (int *)FUN_006b61b0(&local_40,piVar1 + 0x149,piVar1 + 0x14a),
       param_3 != (int *)0x0)) goto LAB_006b7403;
    piVar1[0x148] = local_38;
    piVar1[2] = piVar1[7];
    if (piVar1[7] <= param_2) {
      param_3 = (int *)0x6;
    }
    if ((((param_2 < 0) ||
         (param_3 = (int *)FUN_006b6dd0(piVar1 + 0x12e,param_2), param_3 != (int *)0x0)) ||
        (param_3 = (int *)FUN_006908c0(), param_3 != (int *)0x0)) ||
       (param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0)) goto LAB_006b7403;
    if (piVar1[0x16b] == 0xffff) {
      piVar1[0x1d9] = 0;
      param_3 = (int *)0x0;
    }
    else {
      param_3 = (int *)FUN_006908c0();
      if ((param_3 != (int *)0x0) || (param_3 = (int *)FUN_006b5ec0(0), param_3 != (int *)0x0))
      goto LAB_006b7403;
      if (local_18 < 0x21) {
        piVar1[0x1d9] = local_18;
        iVar2 = FUN_00693a60(iVar2,0x238,0,local_18,0,&param_3);
        if (param_3 == (int *)0x0) {
          if (local_18 != 0) {
            piVar3 = piVar1 + 0x1da;
            uVar4 = local_18;
            do {
              *piVar3 = iVar2;
              piVar3 = piVar3 + 1;
              iVar2 = iVar2 + 0x238;
              uVar4 = uVar4 - 1;
            } while (uVar4 != 0);
          }
          uVar4 = 0;
          iVar2 = (int)param_3;
          if (local_18 != 0) {
            do {
              param_3 = (int *)iVar2;
              param_3 = (int *)FUN_006b6dd0(local_20,uVar4);
              if (param_3 != (int *)0x0) goto LAB_006b7302;
              uVar4 = uVar4 + 1;
              param_3 = (int *)0x0;
              iVar2 = 0;
            } while (uVar4 < local_18);
          }
          param_3 = (int *)FUN_006b6560(piVar1[0x128]);
        }
      }
LAB_006b7302:
      FUN_006b5fe0();
      if (param_3 != (int *)0x0) goto LAB_006b7403;
    }
    if (piVar1[0x166] != 0) {
      piVar1[3] = piVar1[0x128];
      param_3 = (int *)FUN_006b61b0(piVar1 + 0x15,piVar1 + 0x147,0);
      if (param_3 == (int *)0x0) {
        iVar2 = 0;
        if (piVar1[3] != 0) {
          param_3 = (int *)FUN_006b6750(piVar1 + 0x120);
          if ((param_3 != (int *)0x0) ||
             ((iVar2 = 0, piVar1[0x16b] == 0xffff &&
              (param_3 = (int *)FUN_006b6a80(piVar1 + 0x1d,piVar1 + 0x120,piVar1[3]),
              iVar2 = (int)param_3, param_3 != (int *)0x0)))) goto LAB_006b7403;
        }
        param_3 = (int *)iVar2;
        iVar2 = FUN_006b6450(param_2);
        piVar1[0x146] = iVar2;
        FUN_006b5fe0();
        return (int)param_3;
      }
      goto LAB_006b7403;
    }
  }
  param_3 = (int *)0x2;
LAB_006b7403:
  FUN_006b5fe0();
  return (int)param_3;
}


/* FUN_006b75d0 @ 006b75d0  kind=gamemisc  attributed-by=role:dispatch-target  size=362 */

void FUN_006b75d0(void)

{
  byte bVar1;
  undefined2 *puVar2;
  undefined2 *puVar3;
  uint uVar4;
  void *unaff_ESI;
  int unaff_EDI;
  
  memset(unaff_ESI,0,0xc4);
  bVar1 = *(byte *)(unaff_EDI + 0xac);
  *(byte *)((int)unaff_ESI + 8) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0xc);
    puVar3 = (undefined2 *)(unaff_EDI + 0xb0);
    do {
      *puVar2 = *puVar3;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 2;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0xad);
  *(byte *)((int)unaff_ESI + 9) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x28);
    puVar3 = (undefined2 *)(unaff_EDI + 0xe8);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0xae);
  *(byte *)((int)unaff_ESI + 10) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x3c);
    puVar3 = (undefined2 *)(unaff_EDI + 0x110);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0xaf);
  *(byte *)((int)unaff_ESI + 0xb) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x58);
    puVar3 = (undefined2 *)(unaff_EDI + 0x148);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined4 *)((int)unaff_ESI + 0x6c) = *(undefined4 *)(unaff_EDI + 0x170);
  *(undefined4 *)((int)unaff_ESI + 0x70) = *(undefined4 *)(unaff_EDI + 0x174);
  *(undefined4 *)((int)unaff_ESI + 0x74) = *(undefined4 *)(unaff_EDI + 0x178);
  *(undefined2 *)((int)unaff_ESI + 0x78) = *(undefined2 *)(unaff_EDI + 0x17c);
  *(undefined2 *)((int)unaff_ESI + 0x7a) = *(undefined2 *)(unaff_EDI + 0x180);
  bVar1 = *(byte *)(unaff_EDI + 0x184);
  *(byte *)((int)unaff_ESI + 0x7c) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x80);
    puVar3 = (undefined2 *)(unaff_EDI + 0x188);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  bVar1 = *(byte *)(unaff_EDI + 0x185);
  *(byte *)((int)unaff_ESI + 0x7d) = bVar1;
  uVar4 = (uint)bVar1;
  if (bVar1 != 0) {
    puVar2 = (undefined2 *)((int)unaff_ESI + 0x9a);
    puVar3 = (undefined2 *)(unaff_EDI + 0x1bc);
    do {
      *puVar2 = *puVar3;
      puVar3 = puVar3 + 2;
      puVar2 = puVar2 + 1;
      uVar4 = uVar4 - 1;
    } while (uVar4 != 0);
  }
  *(undefined1 *)((int)unaff_ESI + 0x7e) = *(undefined1 *)(unaff_EDI + 0x1f0);
  *(undefined4 *)((int)unaff_ESI + 0xb8) = *(undefined4 *)(unaff_EDI + 0x1fc);
  *(undefined4 *)((int)unaff_ESI + 4) = *(undefined4 *)(unaff_EDI + 0x1f8);
  return;
}


/* FUN_006b7b10 @ 006b7b10  kind=gamemisc  attributed-by=role:dispatch-target  size=144 */

void FUN_006b7b10(void)

{
  char cVar1;
  bool bVar2;
  char *pcVar3;
  char *pcVar4;
  char *in_EDX;
  char *pcVar5;
  char *pcVar6;
  
  pcVar3 = in_EDX;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  bVar2 = true;
  while( true ) {
    if (((int)(pcVar3 + (1 - (int)(in_EDX + 1))) < 7) || (in_EDX[6] != '+')) {
      return;
    }
    if ((*in_EDX < 'A') || ('Z' < *in_EDX)) {
      bVar2 = false;
    }
    if ((in_EDX[1] < 'A') || ('Z' < in_EDX[1])) {
      bVar2 = false;
    }
    if ((in_EDX[2] < 'A') || ('Z' < in_EDX[2])) {
      bVar2 = false;
    }
    if ((in_EDX[3] < 'A') || ('Z' < in_EDX[3])) {
      bVar2 = false;
    }
    if ((in_EDX[4] < 'A') || ('Z' < in_EDX[4])) {
      bVar2 = false;
    }
    if (in_EDX[5] < 'A') break;
    if ('Z' < in_EDX[5]) {
      return;
    }
    if (!bVar2) {
      return;
    }
    if (7 < (int)(pcVar3 + (1 - (int)(in_EDX + 1)))) {
      pcVar5 = in_EDX + 7;
      pcVar6 = in_EDX;
      for (pcVar4 = pcVar3 + (-6 - (int)(in_EDX + 1)); pcVar4 != (char *)0x0; pcVar4 = pcVar4 + -1)
      {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
    }
  }
  return;
}


/* FUN_006bdf90 @ 006bdf90  kind=gamemisc  attributed-by=role:dispatch-target  size=28 */

undefined4 FUN_006bdf90(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)(param_1 + 0x84);
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *param_2 = *puVar2;
    puVar2 = puVar2 + 1;
    param_2 = param_2 + 1;
  }
  return 0;
}


/* FUN_006bed90 @ 006bed90  kind=gamemisc  attributed-by=role:dispatch-target  size=113 */

void FUN_006bed90(uint param_1,undefined4 *param_2)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  param_1 = in_EAX << 0x10 | param_1;
  uVar4 = *(uint *)(in_ECX + 0x24);
  uVar5 = (uVar4 - 0x10) + *(int *)(in_ECX + 0x28) * 0x10;
  if (uVar4 <= uVar5) {
    do {
      iVar1 = (((int)(uVar5 - uVar4) >> 4) - ((int)(uVar5 - uVar4) >> 0x1f) >> 1) * 0x10;
      iVar2 = iVar1 + uVar4;
      uVar3 = *(int *)(iVar1 + uVar4) << 0x10 | *(uint *)(iVar2 + 4);
      if (uVar3 == param_1) {
        *param_2 = *(undefined4 *)(iVar2 + 8);
        param_2[1] = *(undefined4 *)(iVar2 + 0xc);
        return;
      }
      if (uVar3 < param_1) {
        uVar4 = iVar2 + 0x10;
      }
      else {
        uVar5 = iVar2 - 0x10;
      }
    } while (uVar4 <= uVar5);
  }
  *param_2 = 0;
  param_2[1] = 0;
  return;
}


/* FUN_006bee10 @ 006bee10  kind=gamemisc  attributed-by=role:dispatch-target  size=149 */

undefined4 FUN_006bee10(int param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int local_4;
  
  iVar1 = *(int *)(param_1 + 0x1ec);
  if (iVar1 != 0) {
    local_4 = 0;
    if (0 < *(int *)(iVar1 + 0x20)) {
      param_1 = 0;
      do {
        piVar3 = (int *)(*(int *)(iVar1 + 0x1c) + param_1);
        if (*piVar3 == param_3) {
          if (param_2 < piVar3[1]) {
            *param_4 = piVar3[2];
          }
          else {
            if (piVar3[3] < param_2) {
              iVar2 = piVar3[4];
            }
            else {
              iVar2 = FUN_0068ea60(param_2 - piVar3[1],piVar3[4] - piVar3[2],piVar3[3] - piVar3[1]);
              iVar2 = iVar2 + piVar3[2];
            }
            *param_4 = iVar2;
          }
        }
        param_1 = param_1 + 0x14;
        local_4 = local_4 + 1;
      } while (local_4 < *(int *)(iVar1 + 0x20));
    }
    return 0;
  }
  return 6;
}


/* FUN_006c1070 @ 006c1070  kind=gamemisc  attributed-by=role:dispatch-target  size=73 */

undefined4 FUN_006c1070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = param_1;
  if (*(int *)(param_1 + 0x28) != 0) {
LAB_006c10b2:
    return *(undefined4 *)(iVar1 + 0x28);
  }
  uVar2 = FUN_00692230(*(undefined4 *)(param_1 + 8),0x260,&param_1);
  if (param_1 == 0) {
    iVar3 = FUN_006c0c90();
    if (iVar3 == 0) {
      *(undefined4 *)(iVar1 + 0x28) = uVar2;
      goto LAB_006c10b2;
    }
  }
  return 0;
}


/* FUN_006c1110 @ 006c1110  kind=gamemisc  attributed-by=role:dispatch-target  size=138 */

uint FUN_006c1110(int param_1)

{
  uint uVar1;
  int in_EAX;
  uint uVar2;
  uint uVar3;
  uint in_ECX;
  uint uVar4;
  uint in_EDX;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  uVar2 = (in_ECX & 0xffff) * param_1;
  param_1 = ((int)in_ECX >> 0x10) * param_1;
  uVar4 = param_1 * 0x10000 + uVar2;
  uVar3 = (in_EDX & 0xffff) * in_EAX;
  iVar5 = ((int)in_EDX >> 0x10) * in_EAX;
  uVar7 = iVar5 * 0x10000 + uVar3;
  uVar1 = uVar7 + uVar4;
  iVar6 = (iVar5 >> 0x10) + (uint)(uVar4 < uVar2) + (param_1 >> 0x10) + ((int)uVar2 >> 0x1f) +
          (uint)(uVar1 < uVar4) + (uint)(uVar7 < uVar3) + ((int)uVar3 >> 0x1f);
  iVar5 = iVar6 >> 0x1f;
  uVar2 = iVar5 + uVar1;
  return ((uint)(uVar2 + 0x2000 < uVar2) + iVar6 + (uint)(uVar2 < uVar1) + iVar5) * 0x40000 |
         uVar2 + 0x2000 >> 0xe;
}


/* FUN_006c1780 @ 006c1780  kind=gamemisc  attributed-by=role:dispatch-target  size=103 */

void FUN_006c1780(void)

{
  int in_EAX;
  undefined1 in_CL;
  
  switch(in_CL) {
  case 0:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c15f0;
    return;
  case 1:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c15c0;
    return;
  case 2:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1690;
    return;
  case 3:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1630;
    return;
  case 4:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1660;
    return;
  case 5:
    *(code **)(in_EAX + 0x238) = FUN_006c1590;
    return;
  case 6:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c16c0;
    return;
  case 7:
    *(undefined1 **)(in_EAX + 0x238) = &LAB_006c1720;
  }
  return;
}


/* FUN_006c1810 @ 006c1810  kind=gamemisc  attributed-by=role:dispatch-target  size=236 */

void FUN_006c1810(void)

{
  int in_EAX;
  int iVar1;
  int iVar2;
  int in_ECX;
  uint in_EDX;
  
  switch(in_EDX & 0xc0) {
  case 0:
    in_EAX = in_EAX / 2;
    break;
  case 0x40:
  case 0xc0:
    break;
  case 0x80:
    in_EAX = in_EAX * 2;
    break;
  default:
    goto switchD_006c1828_default;
  }
  *(int *)(in_ECX + 0x1dc) = in_EAX;
switchD_006c1828_default:
  switch(in_EDX & 0x30) {
  case 0:
    *(undefined4 *)(in_ECX + 0x1e0) = 0;
    goto switchD_006c184f_default;
  case 0x10:
    iVar1 = *(int *)(in_ECX + 0x1dc);
    break;
  case 0x20:
    iVar1 = *(int *)(in_ECX + 0x1dc) / 2;
    goto LAB_006c1889;
  case 0x30:
    iVar1 = *(int *)(in_ECX + 0x1dc) * 3;
    break;
  default:
    goto switchD_006c184f_default;
  }
  iVar1 = (int)(iVar1 + (iVar1 >> 0x1f & 3U)) >> 2;
LAB_006c1889:
  *(int *)(in_ECX + 0x1e0) = iVar1;
switchD_006c184f_default:
  iVar1 = *(int *)(in_ECX + 0x1dc);
  if ((in_EDX & 0xf) == 0) {
    iVar2 = iVar1 + -1;
  }
  else {
    iVar2 = ((in_EDX & 0xf) - 4) * iVar1;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
  }
  *(int *)(in_ECX + 0x1e4) = iVar2;
  *(int *)(in_ECX + 0x1dc) = (int)(iVar1 + (iVar1 >> 0x1f & 0xffU)) >> 8;
  *(int *)(in_ECX + 0x1e0) =
       (int)(*(int *)(in_ECX + 0x1e0) + (*(int *)(in_ECX + 0x1e0) >> 0x1f & 0xffU)) >> 8;
  *(int *)(in_ECX + 0x1e4) =
       (int)(*(int *)(in_ECX + 0x1e4) + (*(int *)(in_ECX + 0x1e4) >> 0x1f & 0xffU)) >> 8;
  return;
}


/* FUN_006c1d20 @ 006c1d20  kind=gamemisc  attributed-by=role:dispatch-target  size=92 */

undefined4 FUN_006c1d20(undefined4 param_1,undefined4 param_2)

{
  int in_EAX;
  ushort in_CX;
  ushort in_DX;
  
  if ((in_CX < *(ushort *)(in_EAX + 0x74)) && (in_DX < *(ushort *)(in_EAX + 0x50))) {
    FUN_006c1c00(param_2);
    return 0;
  }
  if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
  }
  return 1;
}


/* FUN_006c1dd0 @ 006c1dd0  kind=gamemisc  attributed-by=role:dispatch-target  size=19 */

void FUN_006c1dd0(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *in_EAX;
  
  uVar1 = in_EAX[2];
  uVar2 = in_EAX[1];
  in_EAX[2] = *in_EAX;
  in_EAX[1] = uVar1;
  *in_EAX = uVar2;
  return;
}


/* FUN_006c1e80 @ 006c1e80  kind=gamemisc  attributed-by=role:dispatch-target  size=62 */

void FUN_006c1e80(void)

{
  char cVar1;
  int *in_EAX;
  int iVar2;
  int unaff_EDI;
  bool bVar3;
  
  if (*in_EAX == 0) {
    iVar2 = 1;
LAB_006c1e90:
    do {
      cVar1 = FUN_006c1df0();
      if (cVar1 == '\x01') {
        return;
      }
      cVar1 = *(char *)(unaff_EDI + 0x170);
      if (cVar1 == '\x1b') {
        bVar3 = iVar2 == 1;
      }
      else {
        if (cVar1 == 'X') {
          iVar2 = iVar2 + 1;
          goto LAB_006c1e90;
        }
        if (cVar1 != 'Y') goto LAB_006c1e90;
        iVar2 = iVar2 + -1;
        bVar3 = iVar2 == 0;
      }
    } while (!bVar3);
  }
  return;
}


/* FUN_006c1ed0 @ 006c1ed0  kind=gamemisc  attributed-by=role:dispatch-target  size=42 */

void FUN_006c1ed0(void)

{
  char cVar1;
  int iVar2;
  int unaff_EDI;
  
  iVar2 = 1;
  do {
    cVar1 = FUN_006c1df0();
    if (cVar1 == '\x01') {
      return;
    }
    if (*(char *)(unaff_EDI + 0x170) == 'X') {
      iVar2 = iVar2 + 1;
    }
    else if (*(char *)(unaff_EDI + 0x170) == 'Y') {
      iVar2 = iVar2 + -1;
    }
  } while (iVar2 != 0);
  return;
}


/* FUN_006c1f00 @ 006c1f00  kind=gamemisc  attributed-by=role:dispatch-target  size=177 */

void FUN_006c1f00(void)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint *in_EDX;
  int unaff_ESI;
  
  puVar4 = *(undefined4 **)(unaff_ESI + 0x194);
  uVar1 = *in_EDX;
  uVar2 = *(uint *)(unaff_ESI + 0x18c);
  puVar5 = puVar4 + uVar2 * 4;
  for (; (puVar4 < puVar5 && (puVar4[2] != uVar1)); puVar4 = puVar4 + 4) {
  }
  if (puVar4 == puVar5) {
    if (*(uint *)(unaff_ESI + 400) <= uVar2) goto LAB_006c1f38;
    *(uint *)(unaff_ESI + 0x18c) = uVar2 + 1;
  }
  if (uVar1 < 0x10000) {
    *puVar4 = *(undefined4 *)(unaff_ESI + 0x160);
    puVar4[2] = uVar1 & 0xffff;
    puVar4[1] = *(int *)(unaff_ESI + 0x168) + 1;
    *(undefined1 *)(puVar4 + 3) = 1;
    if (*(uint *)(unaff_ESI + 0x1a4) < uVar1) {
      *(uint *)(unaff_ESI + 0x1a4) = uVar1 & 0xffff;
    }
    cVar3 = FUN_006c1df0();
    if (cVar3 == '\0') {
      while (cVar3 = *(char *)(unaff_ESI + 0x170), cVar3 != ',') {
        if (cVar3 == '-') {
          return;
        }
        if (cVar3 == -0x77) break;
        cVar3 = FUN_006c1df0();
        if (cVar3 != '\0') {
          return;
        }
      }
      *(undefined4 *)(unaff_ESI + 0xc) = 0x89;
    }
    return;
  }
LAB_006c1f38:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x8c;
  return;
}


/* FUN_006c1fc0 @ 006c1fc0  kind=gamemisc  attributed-by=role:dispatch-target  size=79 */

void FUN_006c1fc0(void)

{
  int in_EAX;
  int iVar1;
  
  if (*(int *)(in_EAX + 0x1ac) < 1) {
    *(undefined4 *)(in_EAX + 0xc) = 0x88;
    return;
  }
  iVar1 = *(int *)(in_EAX + 0x1ac) + -1;
  *(int *)(in_EAX + 0x1ac) = iVar1;
  iVar1 = iVar1 * 0x10 + *(int *)(in_EAX + 0x1b4);
  *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + -1;
  *(undefined1 *)(in_EAX + 0x178) = 0;
  if (0 < *(int *)(iVar1 + 8)) {
    *(int *)(in_EAX + 0x1ac) = *(int *)(in_EAX + 0x1ac) + 1;
    *(undefined4 *)(in_EAX + 0x168) = *(undefined4 *)(iVar1 + 0xc);
    return;
  }
  FUN_006c1390();
  return;
}


/* FUN_006c2010 @ 006c2010  kind=gamemisc  attributed-by=role:dispatch-target  size=180 */

void FUN_006c2010(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EAX;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar1 = *in_EAX;
  uVar5 = *(int *)(unaff_EDI + 0x1a4) + 1;
  if (uVar1 < uVar5) {
    uVar2 = *(uint *)(unaff_EDI + 0x194);
    uVar3 = uVar1 * 0x10 + uVar2;
    if ((uVar5 != *(uint *)(unaff_EDI + 0x18c)) || (*(uint *)(uVar3 + 8) != uVar1)) {
      uVar5 = *(uint *)(unaff_EDI + 0x18c) * 0x10 + uVar2;
      for (uVar3 = uVar2; (uVar3 < uVar5 && (*(uint *)(uVar3 + 8) != uVar1)); uVar3 = uVar3 + 0x10)
      {
      }
      if (uVar3 == uVar5) goto LAB_006c205c;
    }
    if (*(char *)(uVar3 + 0xc) != '\0') {
      if (*(int *)(unaff_EDI + 0x1b0) <= *(int *)(unaff_EDI + 0x1ac)) {
        *(undefined4 *)(unaff_EDI + 0xc) = 0x82;
        return;
      }
      puVar4 = (undefined4 *)(*(int *)(unaff_EDI + 0x1ac) * 0x10 + *(int *)(unaff_EDI + 0x1b4));
      *puVar4 = *(undefined4 *)(unaff_EDI + 0x160);
      puVar4[1] = *(int *)(unaff_EDI + 0x168) + 1;
      puVar4[2] = 1;
      puVar4[3] = *(undefined4 *)(uVar3 + 4);
      *(int *)(unaff_EDI + 0x1ac) = *(int *)(unaff_EDI + 0x1ac) + 1;
      FUN_006c1390();
      *(undefined1 *)(unaff_EDI + 0x178) = 0;
      return;
    }
  }
LAB_006c205c:
  *(undefined4 *)(unaff_EDI + 0xc) = 0x86;
  return;
}


/* FUN_006c20d0 @ 006c20d0  kind=gamemisc  attributed-by=role:dispatch-target  size=196 */

void FUN_006c20d0(int *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int unaff_EDI;
  
  uVar1 = param_1[1];
  uVar5 = *(int *)(unaff_EDI + 0x1a4) + 1;
  if (uVar1 < uVar5) {
    uVar2 = *(uint *)(unaff_EDI + 0x194);
    uVar3 = uVar1 * 0x10 + uVar2;
    if ((uVar5 != *(uint *)(unaff_EDI + 0x18c)) || (*(uint *)(uVar3 + 8) != uVar1)) {
      uVar5 = *(uint *)(unaff_EDI + 0x18c) * 0x10 + uVar2;
      for (uVar3 = uVar2; (uVar3 < uVar5 && (*(uint *)(uVar3 + 8) != uVar1)); uVar3 = uVar3 + 0x10)
      {
      }
      if (uVar3 == uVar5) goto LAB_006c2126;
    }
    if (*(char *)(uVar3 + 0xc) != '\0') {
      if (*(int *)(unaff_EDI + 0x1b0) <= *(int *)(unaff_EDI + 0x1ac)) {
        *(undefined4 *)(unaff_EDI + 0xc) = 0x82;
        return;
      }
      if (0 < *param_1) {
        puVar4 = (undefined4 *)(*(int *)(unaff_EDI + 0x1ac) * 0x10 + *(int *)(unaff_EDI + 0x1b4));
        *puVar4 = *(undefined4 *)(unaff_EDI + 0x160);
        puVar4[1] = *(int *)(unaff_EDI + 0x168) + 1;
        puVar4[2] = *param_1;
        puVar4[3] = *(undefined4 *)(uVar3 + 4);
        *(int *)(unaff_EDI + 0x1ac) = *(int *)(unaff_EDI + 0x1ac) + 1;
        FUN_006c1390();
        *(undefined1 *)(unaff_EDI + 0x178) = 0;
      }
      return;
    }
  }
LAB_006c2126:
  *(undefined4 *)(unaff_EDI + 0xc) = 0x86;
  return;
}


/* FUN_006c21a0 @ 006c21a0  kind=gamemisc  attributed-by=role:dispatch-target  size=186 */

void FUN_006c21a0(void)

{
  uint uVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int unaff_ESI;
  uint *unaff_EDI;
  
  uVar1 = *(uint *)(unaff_ESI + 0x198);
  puVar3 = *(undefined4 **)(unaff_ESI + 0x1a0);
  puVar4 = puVar3 + uVar1 * 4;
  if (puVar3 < puVar4) {
    do {
      if (puVar3[2] == *unaff_EDI) break;
      puVar3 = puVar3 + 4;
    } while (puVar3 < puVar4);
  }
  if (puVar3 == puVar4) {
    if (*(uint *)(unaff_ESI + 0x19c) <= uVar1) goto LAB_006c2258;
    *(uint *)(unaff_ESI + 0x198) = uVar1 + 1;
  }
  uVar1 = *unaff_EDI;
  if ((-1 < (int)uVar1) && ((int)uVar1 < 0x100)) {
    puVar3[2] = uVar1 & 0xff;
    puVar3[1] = *(int *)(unaff_ESI + 0x168) + 1;
    *puVar3 = *(undefined4 *)(unaff_ESI + 0x160);
    *(undefined1 *)(puVar3 + 3) = 1;
    if (*(uint *)(unaff_ESI + 0x1a8) < *unaff_EDI) {
      *(uint *)(unaff_ESI + 0x1a8) = *unaff_EDI & 0xff;
    }
    cVar2 = FUN_006c1df0();
    if (cVar2 != '\0') {
      return;
    }
    while (cVar2 = *(char *)(unaff_ESI + 0x170), cVar2 != ',') {
      if (cVar2 == '-') {
        return;
      }
      if (cVar2 == -0x77) break;
      cVar2 = FUN_006c1df0();
      if (cVar2 != '\0') {
        return;
      }
    }
    *(undefined4 *)(unaff_ESI + 0xc) = 0x89;
    return;
  }
LAB_006c2258:
  *(undefined4 *)(unaff_ESI + 0xc) = 0x8d;
  return;
}


/* FUN_006c2260 @ 006c2260  kind=gamemisc  attributed-by=role:dispatch-target  size=100 */

void FUN_006c2260(uint *param_1)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(*(int *)(in_EAX + 0x164) + 1 + *(int *)(in_EAX + 0x168));
  uVar2 = (uint)bVar1;
  if (uVar2 < (*(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10)) + 1U) {
    if (bVar1 != 0) {
      iVar3 = 1;
      uVar4 = uVar2;
      do {
        *param_1 = (uint)*(byte *)(*(int *)(in_EAX + 0x164) + iVar3 + 1 + *(int *)(in_EAX + 0x168));
        iVar3 = iVar3 + 1;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
      } while (uVar4 != 0);
    }
    *(int *)(in_EAX + 0x20) = *(int *)(in_EAX + 0x20) + uVar2;
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0x82;
  return;
}


/* FUN_006c22d0 @ 006c22d0  kind=gamemisc  attributed-by=role:dispatch-target  size=97 */

void FUN_006c22d0(int *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int in_EDX;
  int extraout_EDX;
  uint uVar4;
  
  bVar1 = *(byte *)(*(int *)(in_EDX + 0x164) + 1 + *(int *)(in_EDX + 0x168));
  uVar3 = (uint)bVar1;
  if (uVar3 < (*(int *)(in_EDX + 0x14) - *(int *)(in_EDX + 0x10)) + 1U) {
    *(int *)(in_EDX + 0x168) = *(int *)(in_EDX + 0x168) + 2;
    uVar4 = uVar3;
    if (bVar1 != 0) {
      do {
        sVar2 = FUN_006c1360();
        *param_1 = (int)sVar2;
        param_1 = param_1 + 1;
        uVar4 = uVar4 - 1;
        in_EDX = extraout_EDX;
      } while (uVar4 != 0);
    }
    *(int *)(in_EDX + 0x20) = *(int *)(in_EDX + 0x20) + uVar3;
    *(undefined1 *)(in_EDX + 0x178) = 0;
    return;
  }
  *(undefined4 *)(in_EDX + 0xc) = 0x82;
  return;
}


/* FUN_006c2340 @ 006c2340  kind=gamemisc  attributed-by=role:dispatch-target  size=93 */

void FUN_006c2340(uint *param_1)

{
  int in_EAX;
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = *(byte *)(in_EAX + 0x170) - 0xaf;
  uVar2 = (uint)uVar1;
  if (uVar2 < (*(int *)(in_EAX + 0x14) - *(int *)(in_EAX + 0x10)) + 1U) {
    if (uVar1 != 0) {
      iVar3 = 1;
      do {
        iVar3 = iVar3 + 1;
        *param_1 = (uint)*(byte *)(*(int *)(in_EAX + 0x164) + *(int *)(in_EAX + 0x168) + -1 + iVar3)
        ;
        param_1 = param_1 + 1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    return;
  }
  *(undefined4 *)(in_EAX + 0xc) = 0x82;
  return;
}


/* FUN_006c23a0 @ 006c23a0  kind=gamemisc  attributed-by=role:dispatch-target  size=87 */

void FUN_006c23a0(int *param_1)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  int in_EDX;
  int extraout_EDX;
  
  uVar1 = *(byte *)(in_EDX + 0x170) - 0xb7;
  uVar3 = (uint)uVar1;
  if (uVar3 < (*(int *)(in_EDX + 0x14) - *(int *)(in_EDX + 0x10)) + 1U) {
    *(int *)(in_EDX + 0x168) = *(int *)(in_EDX + 0x168) + 1;
    if (uVar1 != 0) {
      do {
        sVar2 = FUN_006c1360();
        *param_1 = (int)sVar2;
        param_1 = param_1 + 1;
        uVar3 = uVar3 - 1;
        in_EDX = extraout_EDX;
      } while (uVar3 != 0);
    }
    *(undefined1 *)(in_EDX + 0x178) = 0;
    return;
  }
  *(undefined4 *)(in_EDX + 0xc) = 0x82;
  return;
}


/* FUN_006c2400 @ 006c2400  kind=gamemisc  attributed-by=role:dispatch-target  size=97 */

void FUN_006c2400(void)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_ESI;
  
  if (*unaff_ESI < (uint)*(ushort *)(in_EAX + 0x74)) {
    if ((*(byte *)(in_EAX + 0x170) & 1) != 0) {
      uVar1 = (**(code **)(in_EAX + 0x240))();
      *unaff_ESI = uVar1;
      return;
    }
    uVar1 = (**(code **)(in_EAX + 0x23c))();
    *unaff_ESI = uVar1;
    return;
  }
  if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
  }
  *unaff_ESI = 0;
  return;
}


/* FUN_006c2470 @ 006c2470  kind=gamemisc  attributed-by=role:dispatch-target  size=127 */

void FUN_006c2470(ushort *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_EAX;
  
  if (*param_1 < *(ushort *)(in_EAX + 0x74)) {
    iVar3 = (uint)*param_1 * 8;
    (**(code **)(in_EAX + 0x23c))();
    (**(code **)(in_EAX + 0x248))();
    if (*(short *)(in_EAX + 0x15c) == 0) {
      iVar1 = *(int *)(in_EAX + 0x7c);
      iVar2 = *(int *)(in_EAX + 0x78);
      *(undefined4 *)(iVar2 + iVar3) = *(undefined4 *)(iVar1 + iVar3);
      *(undefined4 *)(iVar2 + 4 + iVar3) = *(undefined4 *)(iVar1 + 4 + iVar3);
    }
  }
  else if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c24f0 @ 006c24f0  kind=gamemisc  attributed-by=role:dispatch-target  size=245 */

void FUN_006c24f0(ushort *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int unaff_ESI;
  
  if ((*(ushort *)(unaff_ESI + 0x2c) <= *param_1) || (*(ushort *)(unaff_ESI + 0x50) <= param_1[2]))
  {
    if (*(char *)(unaff_ESI + 0x231) != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      return;
    }
    param_1[0] = 0;
    param_1[1] = 0;
    return;
  }
  if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
    uVar3 = (**(code **)(unaff_ESI + 0x23c))();
    *(undefined4 *)param_1 = uVar3;
    return;
  }
  piVar1 = (int *)(*(int *)(unaff_ESI + 0x38) + (uint)*param_1 * 8);
  piVar2 = (int *)(*(int *)(unaff_ESI + 0x5c) + (uint)param_1[2] * 8);
  if (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) {
    uVar3 = (**(code **)(unaff_ESI + 0x240))();
    uVar3 = FUN_0068ebc0(uVar3,*(undefined4 *)(unaff_ESI + 0xdc));
    *(undefined4 *)param_1 = uVar3;
    return;
  }
  FUN_0068ebc0(*piVar1 - *piVar2,*(int *)(unaff_ESI + 0xdc));
  FUN_0068ebc0(piVar1[1] - piVar2[1],*(undefined4 *)(unaff_ESI + 0xe0));
  uVar3 = (**(code **)(unaff_ESI + 0x240))();
  *(undefined4 *)param_1 = uVar3;
  return;
}


/* FUN_006c25f0 @ 006c25f0  kind=gamemisc  attributed-by=role:dispatch-target  size=175 */

void FUN_006c25f0(void)

{
  ushort *in_EAX;
  int unaff_ESI;
  
  if ((*in_EAX < *(ushort *)(unaff_ESI + 0x50)) && (in_EAX[2] < *(ushort *)(unaff_ESI + 0x74))) {
    FUN_006c1c00(unaff_ESI + 0x122);
    FUN_006c1c00(unaff_ESI + 0x126);
    FUN_006c1aa0();
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c26a0 @ 006c26a0  kind=gamemisc  attributed-by=role:dispatch-target  size=68 */

void FUN_006c26a0(void)

{
  int iVar1;
  int in_EDX;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EDX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EDX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EDX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EDX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EDX + 0x24);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(short *)(in_EDX + 0x158) = (short)*unaff_EBX;
  return;
}


/* FUN_006c26f0 @ 006c26f0  kind=gamemisc  attributed-by=role:dispatch-target  size=68 */

void FUN_006c26f0(void)

{
  int iVar1;
  int in_EDX;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EDX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EDX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EDX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EDX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EDX + 0x48);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(short *)(in_EDX + 0x15a) = (short)*unaff_EBX;
  return;
}


/* FUN_006c2740 @ 006c2740  kind=gamemisc  attributed-by=role:dispatch-target  size=68 */

void FUN_006c2740(void)

{
  int iVar1;
  int in_EDX;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EDX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EDX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EDX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EDX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EDX + 0x6c);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(short *)(in_EDX + 0x15c) = (short)*unaff_EBX;
  return;
}


/* FUN_006c2790 @ 006c2790  kind=gamemisc  attributed-by=role:dispatch-target  size=114 */

void FUN_006c2790(void)

{
  int in_EAX;
  int iVar1;
  int *unaff_EBX;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  if (*unaff_EBX == 0) {
    puVar2 = (undefined4 *)(in_EAX + 0xb4);
  }
  else {
    if (*unaff_EBX != 1) {
      if (*(char *)(in_EAX + 0x231) == '\0') {
        return;
      }
      *(undefined4 *)(in_EAX + 0xc) = 0x86;
      return;
    }
    puVar2 = (undefined4 *)(in_EAX + 0x90);
  }
  puVar3 = (undefined4 *)(in_EAX + 0x24);
  puVar4 = puVar3;
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = puVar3;
  puVar4 = (undefined4 *)(in_EAX + 0x48);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  puVar2 = (undefined4 *)(in_EAX + 0x6c);
  for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar2 = puVar2 + 1;
  }
  *(short *)(in_EAX + 0x158) = (short)*unaff_EBX;
  *(short *)(in_EAX + 0x15a) = (short)*unaff_EBX;
  *(short *)(in_EAX + 0x15c) = (short)*unaff_EBX;
  return;
}


/* FUN_006c2850 @ 006c2850  kind=gamemisc  attributed-by=role:dispatch-target  size=183 */

void FUN_006c2850(void)

{
  int in_EAX;
  uint uVar1;
  uint *unaff_ESI;
  
  uVar1 = *unaff_ESI & 0xff;
  if (uVar1 == 0xff) {
    *(undefined1 *)(in_EAX + 0x151) = 1;
    return;
  }
  if (uVar1 != 0) {
    if (((*unaff_ESI & 0x100) != 0) && (*(ushort *)(in_EAX + 0xfc) <= uVar1)) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_ESI & 0x200) != 0) && (*(char *)(in_EAX + 0x119) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_ESI & 0x400) != 0) && (*(char *)(in_EAX + 0x11a) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 1;
    }
    if (((*unaff_ESI & 0x800) != 0) && (uVar1 < *(ushort *)(in_EAX + 0xfc))) {
      *(undefined1 *)(in_EAX + 0x151) = 0;
    }
    if (((*unaff_ESI & 0x1000) != 0) && (*(char *)(in_EAX + 0x119) != '\0')) {
      *(undefined1 *)(in_EAX + 0x151) = 0;
    }
    if ((*unaff_ESI & 0x2000) == 0) {
      return;
    }
    if (*(char *)(in_EAX + 0x11a) == '\0') {
      return;
    }
  }
  *(undefined1 *)(in_EAX + 0x151) = 0;
  return;
}


/* FUN_006c2910 @ 006c2910  kind=gamemisc  attributed-by=role:dispatch-target  size=13 */

void FUN_006c2910(void)

{
  int *in_EAX;
  int in_ECX;
  
  if (-1 < *in_EAX) {
    *(int *)(in_ECX + 0x154) = *in_EAX;
  }
  return;
}


/* FUN_006c2920 @ 006c2920  kind=gamemisc  attributed-by=role:dispatch-target  size=112 */

void FUN_006c2920(void)

{
  byte *pbVar1;
  ushort uVar2;
  int iVar3;
  int in_EAX;
  
  iVar3 = *(int *)(in_EAX + 0x130);
  if (*(int *)(in_EAX + 0x10) < iVar3) {
    *(undefined4 *)(in_EAX + 0xc) = 0x81;
    return;
  }
  do {
    if (iVar3 < 1) {
      *(undefined4 *)(in_EAX + 0x130) = 1;
      *(undefined4 *)(in_EAX + 0x20) = *(undefined4 *)(in_EAX + 0x1c);
      return;
    }
    *(int *)(in_EAX + 0x1c) = *(int *)(in_EAX + 0x1c) + -1;
    uVar2 = *(ushort *)(*(int *)(in_EAX + 0x18) + *(int *)(in_EAX + 0x1c) * 4);
    if (uVar2 < *(ushort *)(in_EAX + 0x98)) {
      pbVar1 = (byte *)((uint)uVar2 + *(int *)(in_EAX + 0xa8));
      *pbVar1 = *pbVar1 ^ 1;
    }
    else if (*(char *)(in_EAX + 0x231) != '\0') {
      *(undefined4 *)(in_EAX + 0xc) = 0x86;
      return;
    }
    *(int *)(in_EAX + 0x130) = *(int *)(in_EAX + 0x130) + -1;
    iVar3 = *(int *)(in_EAX + 0x130);
  } while( true );
}


/* FUN_006c29a0 @ 006c29a0  kind=gamemisc  attributed-by=role:dispatch-target  size=69 */

void FUN_006c29a0(void)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *in_ECX;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  
  uVar2 = in_ECX[2];
  uVar3 = *in_ECX;
  uVar4 = (uint)uVar3;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x98)) && (uVar3 < *(ushort *)(unaff_ESI + 0x98))) {
    if (uVar3 <= uVar2) {
      uVar5 = (uVar2 - uVar4) + 1 & 0xffff;
      do {
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0xa8) + uVar4);
        *pbVar1 = *pbVar1 | 1;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c29f0 @ 006c29f0  kind=gamemisc  attributed-by=role:dispatch-target  size=69 */

void FUN_006c29f0(void)

{
  byte *pbVar1;
  ushort uVar2;
  ushort uVar3;
  ushort *in_ECX;
  uint uVar4;
  uint uVar5;
  int unaff_ESI;
  
  uVar2 = in_ECX[2];
  uVar3 = *in_ECX;
  uVar4 = (uint)uVar3;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x98)) && (uVar3 < *(ushort *)(unaff_ESI + 0x98))) {
    if (uVar3 <= uVar2) {
      uVar5 = (uVar2 - uVar4) + 1 & 0xffff;
      do {
        pbVar1 = (byte *)(*(int *)(unaff_ESI + 0xa8) + uVar4);
        *pbVar1 = *pbVar1 & 0xfe;
        uVar4 = uVar4 + 1;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      return;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c2b80 @ 006c2b80  kind=gamemisc  attributed-by=role:dispatch-target  size=173 */

void FUN_006c2b80(void)

{
  int iVar1;
  char cVar2;
  int unaff_ESI;
  undefined4 local_2c;
  undefined1 local_28 [4];
  undefined1 local_24 [36];
  
  if (*(int *)(unaff_ESI + 0x10) < *(int *)(unaff_ESI + 0x130)) {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  cVar2 = FUN_006c2a40(local_28,&local_2c,local_24);
  if (cVar2 == '\0') {
    iVar1 = *(int *)(unaff_ESI + 0x130);
    while (0 < iVar1) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
          *(ushort *)(unaff_ESI + 0x74)) {
        FUN_006c2b20(local_2c);
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar1 = *(int *)(unaff_ESI + 0x130);
    }
    *(undefined4 *)(unaff_ESI + 0x130) = 1;
    *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  return;
}


/* FUN_006c2c30 @ 006c2c30  kind=gamemisc  attributed-by=role:dispatch-target  size=242 */

void FUN_006c2c30(void)

{
  short sVar1;
  ushort uVar2;
  char cVar3;
  ushort uVar4;
  ushort uVar5;
  short *in_EAX;
  int unaff_ESI;
  uint uVar6;
  ushort local_34;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_24 [16];
  int local_14;
  
  sVar1 = *in_EAX;
  uVar6 = (uint)sVar1;
  if (uVar6 < (uint)(int)*(short *)(unaff_ESI + 0x9a)) {
    cVar3 = FUN_006c2a40(local_2c,&local_28,local_24);
    if (cVar3 == '\0') {
      if (sVar1 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = (*(short *)(*(int *)(unaff_ESI + 0xac) + -2 + uVar6 * 2) -
                *(short *)(unaff_ESI + 0xb0)) + 1;
      }
      uVar5 = *(short *)(*(int *)(unaff_ESI + 0xac) + uVar6 * 2) - *(short *)(unaff_ESI + 0xb0);
      uVar2 = *(ushort *)(unaff_ESI + 0x74);
      if (uVar2 <= uVar5) {
        if (uVar2 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = uVar2 - 1;
        }
      }
      for (; uVar4 <= uVar5; uVar4 = uVar4 + 1) {
        if ((local_14 != *(int *)(unaff_ESI + 0x7c)) || (local_34 != uVar4)) {
          FUN_006c2b20(local_28);
        }
      }
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c2d30 @ 006c2d30  kind=gamemisc  attributed-by=role:dispatch-target  size=200 */

void FUN_006c2d30(int param_1)

{
  char cVar1;
  uint *in_EAX;
  ushort uVar2;
  ushort uVar3;
  ushort local_34;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 local_24 [16];
  int local_14;
  
  if (*in_EAX < 2) {
    cVar1 = FUN_006c2a40(local_2c,&local_28,local_24);
    if (cVar1 == '\0') {
      uVar3 = 0;
      if ((*(short *)(param_1 + 0x15c) == 0) && (*(short *)(param_1 + 0x74) != 0)) {
        uVar2 = *(short *)(param_1 + 0x74) - 1;
      }
      else if ((*(short *)(param_1 + 0x15c) == 1) && (0 < *(short *)(param_1 + 0x76))) {
        uVar2 = *(ushort *)(*(int *)(param_1 + 0x88) + -2 + *(short *)(param_1 + 0x76) * 2);
      }
      else {
        uVar2 = 0;
      }
      do {
        if ((local_14 != *(int *)(param_1 + 0x7c)) || (local_34 != uVar3)) {
          FUN_006c2b20(local_28);
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 <= uVar2);
    }
  }
  else if (*(char *)(param_1 + 0x231) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c2e00 @ 006c2e00  kind=gamemisc  attributed-by=role:dispatch-target  size=169 */

void FUN_006c2e00(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x130);
  if (*(int *)(unaff_ESI + 0x10) < iVar1 + 1) {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  FUN_006c10c0();
  uVar2 = FUN_006c10c0();
  do {
    if (iVar1 < 1) {
      *(undefined4 *)(unaff_ESI + 0x130) = 1;
      *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
      return;
    }
    *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
    if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
        *(ushort *)(unaff_ESI + 0x74)) {
      FUN_006c2b20(uVar2);
    }
    else if (*(char *)(unaff_ESI + 0x231) != '\0') {
      *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      return;
    }
    *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
    iVar1 = *(int *)(unaff_ESI + 0x130);
  } while( true );
}


/* FUN_006c2eb0 @ 006c2eb0  kind=gamemisc  attributed-by=role:dispatch-target  size=248 */

void FUN_006c2eb0(ushort *param_1)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  
  uVar1 = *param_1;
  if ((uVar1 < *(ushort *)(unaff_ESI + 0x50)) &&
     (uVar2 = *(ushort *)(unaff_ESI + 0x11c), uVar2 < *(ushort *)(unaff_ESI + 0x2c))) {
    if (*(short *)(unaff_ESI + 0x15a) == 0) {
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar4 = *(int *)(unaff_ESI + 0x30);
      iVar5 = (uint)uVar1 * 8;
      *(undefined4 *)(iVar3 + iVar5) = *(undefined4 *)(iVar4 + (uint)uVar2 * 8);
      *(undefined4 *)(iVar3 + 4 + iVar5) = *(undefined4 *)(iVar4 + 4 + (uint)uVar2 * 8);
      (**(code **)(unaff_ESI + 0x24c))();
      iVar3 = *(int *)(unaff_ESI + 0x54);
      iVar4 = *(int *)(unaff_ESI + 0x58);
      *(undefined4 *)(iVar4 + iVar5) = *(undefined4 *)(iVar3 + iVar5);
      *(undefined4 *)(iVar4 + 4 + iVar5) = *(undefined4 *)(iVar3 + 4 + iVar5);
    }
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    *(ushort *)(unaff_ESI + 0x120) = uVar1;
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar1;
      return;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c2fb0 @ 006c2fb0  kind=gamemisc  attributed-by=role:dispatch-target  size=125 */

void FUN_006c2fb0(void)

{
  ushort uVar1;
  ushort *in_EAX;
  int unaff_ESI;
  
  uVar1 = *in_EAX;
  if (uVar1 < *(ushort *)(unaff_ESI + 0x2c)) {
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      (**(code **)(unaff_ESI + 0x23c))();
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
    *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    *(ushort *)(unaff_ESI + 0x11e) = uVar1;
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3030 @ 006c3030  kind=gamemisc  attributed-by=role:dispatch-target  size=260 */

void FUN_006c3030(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  ushort *in_ECX;
  int unaff_ESI;
  
  uVar1 = *in_ECX;
  if ((uVar1 < *(ushort *)(unaff_ESI + 0x2c)) &&
     (*(uint *)(in_ECX + 2) < *(uint *)(unaff_ESI + 0x17c))) {
    (**(code **)(unaff_ESI + 0x250))();
    if (*(short *)(unaff_ESI + 0x158) == 0) {
      iVar4 = (uint)uVar1 * 8;
      uVar5 = FUN_006c10c0();
      *(undefined4 *)(iVar4 + *(int *)(unaff_ESI + 0x30)) = uVar5;
      uVar5 = FUN_006c10c0();
      *(undefined4 *)(*(int *)(unaff_ESI + 0x30) + 4 + iVar4) = uVar5;
      iVar2 = *(int *)(unaff_ESI + 0x30);
      iVar3 = *(int *)(unaff_ESI + 0x34);
      *(undefined4 *)(iVar3 + iVar4) = *(undefined4 *)(iVar2 + iVar4);
      *(undefined4 *)(iVar3 + 4 + iVar4) = *(undefined4 *)(iVar2 + 4 + iVar4);
    }
    (**(code **)(unaff_ESI + 0x23c))();
    if ((*(byte *)(unaff_ESI + 0x170) & 1) != 0) {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
    *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    *(ushort *)(unaff_ESI + 0x11e) = uVar1;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c3140 @ 006c3140  kind=gamemisc  attributed-by=role:dispatch-target  size=475 */

void FUN_006c3140(void)

{
  int *piVar1;
  ushort uVar2;
  ushort *in_EAX;
  undefined4 uVar3;
  int unaff_ESI;
  int *piVar4;
  
  uVar2 = *in_EAX;
  if ((uVar2 < *(ushort *)(unaff_ESI + 0x50)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    if ((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) {
      (**(code **)(unaff_ESI + 0x240))();
    }
    else {
      piVar4 = (int *)(*(int *)(unaff_ESI + 0x5c) + (uint)uVar2 * 8);
      piVar1 = (int *)(*(int *)(unaff_ESI + 0x38) + (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      if (*(int *)(unaff_ESI + 0xdc) == *(int *)(unaff_ESI + 0xe0)) {
        uVar3 = (**(code **)(unaff_ESI + 0x240))();
        FUN_0068ebc0(uVar3,*(undefined4 *)(unaff_ESI + 0xdc));
      }
      else {
        FUN_0068ebc0(*piVar4 - *piVar1,*(int *)(unaff_ESI + 0xdc));
        FUN_0068ebc0(piVar4[1] - piVar1[1],*(undefined4 *)(unaff_ESI + 0xe0));
        (**(code **)(unaff_ESI + 0x240))();
      }
    }
    if ((*(byte *)(unaff_ESI + 0x170) & 4) == 0) {
      FUN_006c1590();
    }
    else {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    *(ushort *)(unaff_ESI + 0x120) = uVar2;
    if ((*(byte *)(unaff_ESI + 0x170) & 0x10) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar2;
    }
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3320 @ 006c3320  kind=gamemisc  attributed-by=role:dispatch-target  size=545 */

void FUN_006c3320(void)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  ushort *in_EAX;
  int iVar4;
  int unaff_ESI;
  
  uVar1 = *in_EAX;
  if (((uVar1 < *(ushort *)(unaff_ESI + 0x50)) &&
      (*(int *)(in_EAX + 2) + 1U < *(int *)(unaff_ESI + 0x17c) + 1U)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    if (*(int *)(in_EAX + 2) != -1) {
      (**(code **)(unaff_ESI + 0x250))();
    }
    if (*(short *)(unaff_ESI + 0x15a) == 0) {
      iVar3 = (uint)uVar1 * 8;
      iVar4 = FUN_006c10c0();
      *(int *)(iVar3 + *(int *)(unaff_ESI + 0x54)) =
           iVar4 + *(int *)(*(int *)(unaff_ESI + 0x30) + (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      iVar4 = FUN_006c10c0();
      *(int *)(*(int *)(unaff_ESI + 0x54) + 4 + iVar3) =
           iVar4 + *(int *)(*(int *)(unaff_ESI + 0x30) + 4 +
                           (uint)*(ushort *)(unaff_ESI + 0x11c) * 8);
      iVar4 = *(int *)(unaff_ESI + 0x34);
      iVar2 = *(int *)(unaff_ESI + 0x58);
      *(undefined4 *)(iVar2 + iVar3) = *(undefined4 *)(iVar4 + iVar3);
      *(undefined4 *)(iVar2 + 4 + iVar3) = *(undefined4 *)(iVar4 + 4 + iVar3);
    }
    (**(code **)(unaff_ESI + 0x240))();
    (**(code **)(unaff_ESI + 0x23c))();
    if ((*(byte *)(unaff_ESI + 0x170) & 4) == 0) {
      FUN_006c1590();
    }
    else {
      (**(code **)(unaff_ESI + 0x238))();
    }
    (**(code **)(unaff_ESI + 0x248))();
    *(undefined2 *)(unaff_ESI + 0x11e) = *(undefined2 *)(unaff_ESI + 0x11c);
    if ((*(byte *)(unaff_ESI + 0x170) & 0x10) != 0) {
      *(ushort *)(unaff_ESI + 0x11c) = uVar1;
    }
    *(ushort *)(unaff_ESI + 0x120) = uVar1;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c3550 @ 006c3550  kind=gamemisc  attributed-by=role:dispatch-target  size=199 */

void FUN_006c3550(void)

{
  int iVar1;
  int unaff_ESI;
  
  iVar1 = *(int *)(unaff_ESI + 0x130);
  if ((iVar1 <= *(int *)(unaff_ESI + 0x10)) &&
     (*(ushort *)(unaff_ESI + 0x11c) < *(ushort *)(unaff_ESI + 0x2c))) {
    do {
      if (iVar1 < 1) {
        *(undefined4 *)(unaff_ESI + 0x130) = 1;
        *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
        return;
      }
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
          *(ushort *)(unaff_ESI + 0x50)) {
        (**(code **)(unaff_ESI + 0x23c))();
        (**(code **)(unaff_ESI + 0x248))();
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar1 = *(int *)(unaff_ESI + 0x130);
    } while( true );
  }
  if (*(char *)(unaff_ESI + 0x231) == '\0') {
    return;
  }
  *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  return;
}


/* FUN_006c3620 @ 006c3620  kind=gamemisc  attributed-by=role:dispatch-target  size=548 */

void FUN_006c3620(void)

{
  byte *pbVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ushort *in_EAX;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int unaff_ESI;
  
  if ((((in_EAX[6] < *(ushort *)(unaff_ESI + 0x2c)) && (in_EAX[8] < *(ushort *)(unaff_ESI + 0x2c)))
      && (in_EAX[2] < *(ushort *)(unaff_ESI + 0x50))) &&
     ((in_EAX[4] < *(ushort *)(unaff_ESI + 0x50) && (*in_EAX < *(ushort *)(unaff_ESI + 0x74))))) {
    iVar11 = *(int *)(unaff_ESI + 0x34);
    iVar4 = (uint)in_EAX[8] * 8;
    iVar5 = (uint)in_EAX[6] * 8;
    iVar14 = *(int *)(iVar11 + iVar5);
    iVar17 = *(int *)(iVar11 + iVar4) - iVar14;
    iVar15 = *(int *)(iVar11 + 4 + iVar5);
    iVar11 = *(int *)(iVar11 + 4 + iVar4);
    iVar6 = (uint)in_EAX[4] * 8;
    iVar7 = (uint)in_EAX[2] * 8;
    iVar2 = *(int *)(iVar7 + *(int *)(unaff_ESI + 0x58));
    iVar9 = *(int *)(unaff_ESI + 0x58);
    iVar8 = *(int *)(iVar9 + iVar6) - iVar2;
    iVar3 = *(int *)(iVar7 + 4 + iVar9);
    iVar9 = *(int *)(iVar9 + 4 + iVar6) - iVar3;
    uVar10 = (uint)*in_EAX;
    pbVar1 = (byte *)(uVar10 + *(int *)(unaff_ESI + 0x84));
    *pbVar1 = *pbVar1 | 0x18;
    iVar11 = -(iVar11 - iVar15);
    iVar12 = FUN_0068ea60(iVar8,iVar11,0x40);
    iVar13 = FUN_0068ea60(iVar9,iVar17,0x40);
    uVar16 = iVar12 + iVar13;
    if (0x3f < (int)((uVar16 ^ (int)uVar16 >> 0x1f) - ((int)uVar16 >> 0x1f))) {
      iVar11 = FUN_0068ea60(iVar14 - iVar2,iVar11,0x40);
      iVar14 = FUN_0068ea60(iVar15 - iVar3,iVar17,0x40);
      iVar15 = FUN_0068ea60(iVar11 + iVar14,iVar8,uVar16);
      iVar11 = FUN_0068ea60(iVar11 + iVar14,iVar9,uVar16);
      *(int *)(*(int *)(unaff_ESI + 0x7c) + uVar10 * 8) =
           *(int *)(*(int *)(unaff_ESI + 0x58) + iVar7) + iVar15;
      *(int *)(*(int *)(unaff_ESI + 0x7c) + 4 + uVar10 * 8) =
           *(int *)(*(int *)(unaff_ESI + 0x58) + 4 + iVar7) + iVar11;
      return;
    }
    iVar11 = *(int *)(iVar7 + *(int *)(unaff_ESI + 0x58)) +
             *(int *)(*(int *)(unaff_ESI + 0x58) + iVar6) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + iVar5) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + iVar4);
    *(int *)(*(int *)(unaff_ESI + 0x7c) + uVar10 * 8) = (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
    iVar11 = *(int *)(iVar7 + 4 + *(int *)(unaff_ESI + 0x58)) +
             *(int *)(*(int *)(unaff_ESI + 0x58) + 4 + iVar6) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + 4 + iVar5) +
             *(int *)(*(int *)(unaff_ESI + 0x34) + 4 + iVar4);
    *(int *)(*(int *)(unaff_ESI + 0x7c) + 4 + uVar10 * 8) =
         (int)(iVar11 + (iVar11 >> 0x1f & 3U)) >> 2;
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c3850 @ 006c3850  kind=gamemisc  attributed-by=role:dispatch-target  size=129 */

void FUN_006c3850(void)

{
  uint *in_EAX;
  int unaff_ESI;
  
  if ((*in_EAX < (uint)*(ushort *)(unaff_ESI + 0x50)) &&
     (in_EAX[1] < (uint)*(ushort *)(unaff_ESI + 0x2c))) {
    (**(code **)(unaff_ESI + 0x23c))();
    (**(code **)(unaff_ESI + 0x248))();
    (**(code **)(unaff_ESI + 0x248))();
    return;
  }
  if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
  }
  return;
}


/* FUN_006c38e0 @ 006c38e0  kind=gamemisc  attributed-by=role:dispatch-target  size=535 */

void FUN_006c38e0(void)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  int unaff_ESI;
  int local_14;
  undefined4 local_c;
  
  if (*(int *)(unaff_ESI + 0x10) < *(int *)(unaff_ESI + 0x130)) {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  if (((*(short *)(unaff_ESI + 0x158) == 0) || (*(short *)(unaff_ESI + 0x15a) == 0)) ||
     (*(short *)(unaff_ESI + 0x15c) == 0)) {
    bVar2 = true;
    bVar1 = true;
  }
  else {
    bVar1 = false;
    bVar2 = false;
  }
  if (*(ushort *)(unaff_ESI + 0x11e) < *(ushort *)(unaff_ESI + 0x2c)) {
    if (*(ushort *)(unaff_ESI + 0x120) < *(ushort *)(unaff_ESI + 0x50)) {
      local_14 = (**(code **)(unaff_ESI + 0x240))();
      local_c = (**(code **)(unaff_ESI + 0x23c))();
    }
    else {
      local_14 = 0;
      local_c = 0;
    }
    iVar3 = *(int *)(unaff_ESI + 0x130);
    while (0 < iVar3) {
      *(int *)(unaff_ESI + 0x1c) = *(int *)(unaff_ESI + 0x1c) + -1;
      if (*(uint *)(*(int *)(unaff_ESI + 0x18) + *(int *)(unaff_ESI + 0x1c) * 4) <
          (uint)*(ushort *)(unaff_ESI + 0x74)) {
        if (bVar1) {
          iVar3 = (**(code **)(unaff_ESI + 0x240))();
        }
        else {
          iVar3 = (**(code **)(unaff_ESI + 0x240))();
        }
        (**(code **)(unaff_ESI + 0x23c))();
        if ((iVar3 != 0) && (local_14 != 0)) {
          FUN_0068ea60(iVar3,local_c,local_14);
        }
        (**(code **)(unaff_ESI + 0x248))();
        bVar1 = bVar2;
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return;
      }
      *(int *)(unaff_ESI + 0x130) = *(int *)(unaff_ESI + 0x130) + -1;
      iVar3 = *(int *)(unaff_ESI + 0x130);
    }
    *(undefined4 *)(unaff_ESI + 0x130) = 1;
    *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  }
  else if (*(char *)(unaff_ESI + 0x231) != '\0') {
    *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3b00 @ 006c3b00  kind=gamemisc  attributed-by=role:dispatch-target  size=61 */

void FUN_006c3b00(void)

{
  byte *pbVar1;
  int in_EAX;
  byte bVar2;
  ushort *in_ECX;
  
  if (*in_ECX < *(ushort *)(in_EAX + 0x2c)) {
    bVar2 = 0xff;
    if (*(short *)(in_EAX + 0x12a) != 0) {
      bVar2 = 0xf7;
    }
    if (*(short *)(in_EAX + 300) != 0) {
      bVar2 = bVar2 & 0xef;
    }
    pbVar1 = (byte *)(*(int *)(in_EAX + 0x3c) + (uint)*in_ECX);
    *pbVar1 = *pbVar1 & bVar2;
  }
  else if (*(char *)(in_EAX + 0x231) != '\0') {
    *(undefined4 *)(in_EAX + 0xc) = 0x86;
    return;
  }
  return;
}


/* FUN_006c3cc0 @ 006c3cc0  kind=gamemisc  attributed-by=role:dispatch-target  size=398 */

void FUN_006c3cc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  byte local_1d;
  
  if (*(short *)(param_1 + 0x9a) != 0) {
    if ((*(byte *)(param_1 + 0x170) & 1) == 0) {
      local_1d = 0x10;
    }
    else {
      local_1d = 8;
    }
    sVar4 = 0;
    uVar6 = 0;
    do {
      uVar5 = (uint)*(ushort *)(*(int *)(param_1 + 0xac) + sVar4 * 2) -
              (uint)*(ushort *)(param_1 + 0xb0);
      if (*(ushort *)(param_1 + 0x98) <= uVar5) {
        uVar5 = *(ushort *)(param_1 + 0x98) - 1;
      }
      uVar8 = uVar6;
      if (uVar6 <= uVar5) {
        uVar7 = uVar6;
        do {
          if ((*(byte *)(*(int *)(param_1 + 0xa8) + uVar7) & local_1d) != 0) {
            uVar8 = uVar7;
            uVar3 = uVar7;
            if (uVar7 <= uVar5) {
              while (uVar2 = uVar8, uVar1 = uVar3, uVar8 = uVar2 + 1, uVar8 <= uVar5) {
                uVar3 = uVar1;
                if (((*(byte *)(*(int *)(param_1 + 0xa8) + uVar8) & local_1d) != 0) &&
                   (uVar3 = uVar8, uVar8 != 0)) {
                  FUN_006c3b80(uVar1 + 1,uVar2);
                }
              }
              if (uVar1 == uVar7) {
                FUN_006c3b40();
              }
              else {
                FUN_006c3b80(uVar1 + 1 & 0xffff,uVar5);
                if (uVar7 != 0) {
                  FUN_006c3b80(uVar6,uVar7 - 1);
                }
              }
            }
            break;
          }
          uVar8 = uVar7 + 1;
          uVar7 = uVar8;
        } while (uVar8 <= uVar5);
      }
      sVar4 = sVar4 + 1;
      uVar6 = uVar8;
    } while (sVar4 < *(short *)(param_1 + 0x9a));
  }
  return;
}


/* FUN_006c3e60 @ 006c3e60  kind=gamemisc  attributed-by=role:dispatch-target  size=233 */

void FUN_006c3e60(void)

{
  short sVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  int unaff_ESI;
  uint uVar4;
  uint local_8;
  
  uVar2 = *in_EAX;
  local_8 = 1;
  if (uVar2 != 0) {
    do {
      if (*(int *)(unaff_ESI + 0x1c) < 2) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x81;
        return;
      }
      iVar3 = *(int *)(unaff_ESI + 0x1c) + -2;
      *(int *)(unaff_ESI + 0x1c) = iVar3;
      if (*(ushort *)(*(int *)(unaff_ESI + 0x18) + 4 + iVar3 * 4) < *(ushort *)(unaff_ESI + 0x2c)) {
        uVar4 = *(uint *)(*(int *)(unaff_ESI + 0x18) + iVar3 * 4) >> 4 & 0xf;
        if (*(char *)(unaff_ESI + 0x170) == 'q') {
          uVar4 = uVar4 + 0x10;
        }
        else if (*(char *)(unaff_ESI + 0x170) == 'r') {
          uVar4 = uVar4 + 0x20;
        }
        sVar1 = *(short *)(unaff_ESI + 0x14c);
        iVar3 = FUN_006c1250();
        if (iVar3 == uVar4 + (int)sVar1) {
          (**(code **)(unaff_ESI + 0x248))();
        }
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
      }
      local_8 = local_8 + 1;
    } while (local_8 <= uVar2);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return;
}


/* FUN_006c3f50 @ 006c3f50  kind=gamemisc  attributed-by=role:dispatch-target  size=235 */

uint FUN_006c3f50(void)

{
  short sVar1;
  uint uVar2;
  uint *in_EAX;
  int iVar3;
  int iVar4;
  uint uVar5;
  int unaff_ESI;
  uint local_8;
  
  uVar2 = *in_EAX;
  local_8 = 1;
  uVar5 = 0;
  if (uVar2 != 0) {
    do {
      uVar5 = *(uint *)(unaff_ESI + 0x1c);
      if ((int)uVar5 < 2) {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x81;
        return uVar5;
      }
      iVar4 = *(int *)(unaff_ESI + 0x18);
      iVar3 = uVar5 - 2;
      *(int *)(unaff_ESI + 0x1c) = iVar3;
      if (*(uint *)(iVar4 + 4 + iVar3 * 4) < *(uint *)(unaff_ESI + 0x17c)) {
        uVar5 = *(uint *)(iVar4 + iVar3 * 4) >> 4 & 0xf;
        if (*(char *)(unaff_ESI + 0x170) == 't') {
          uVar5 = uVar5 + 0x10;
        }
        else if (*(char *)(unaff_ESI + 0x170) == 'u') {
          uVar5 = uVar5 + 0x20;
        }
        sVar1 = *(short *)(unaff_ESI + 0x14c);
        iVar4 = FUN_006c1250();
        if (iVar4 == uVar5 + (int)sVar1) {
          (**(code **)(unaff_ESI + 600))();
        }
      }
      else if (*(char *)(unaff_ESI + 0x231) != '\0') {
        *(undefined4 *)(unaff_ESI + 0xc) = 0x86;
        return iVar4 + iVar3 * 4;
      }
      uVar5 = local_8 + 1;
      local_8 = uVar5;
    } while (uVar5 <= uVar2);
  }
  *(undefined4 *)(unaff_ESI + 0x20) = *(undefined4 *)(unaff_ESI + 0x1c);
  return uVar5;
}


/* FUN_006c4040 @ 006c4040  kind=gamemisc  attributed-by=role:dispatch-target  size=74 */

void FUN_006c4040(void)

{
  uint uVar1;
  uint uVar2;
  uint *in_EDX;
  int unaff_ESI;
  
  uVar1 = *in_EDX;
  uVar2 = 0;
  if ((uVar1 & 1) != 0) {
    uVar2 = 0x23;
  }
  if (((uVar1 & 2) != 0) && (*(char *)(unaff_ESI + 0x119) != '\0')) {
    uVar2 = uVar2 | 0x80;
  }
  if (((uVar1 & 4) != 0) && (*(char *)(unaff_ESI + 0x11a) != '\0')) {
    uVar2 = uVar2 | 0x100;
  }
  if (((uVar1 & 0x20) != 0) && (*(char *)(unaff_ESI + 0x25c) != '\0')) {
    uVar2 = uVar2 | 0x1000;
  }
  *in_EDX = uVar2;
  return;
}


/* FUN_006c4090 @ 006c4090  kind=gamemisc  attributed-by=role:dispatch-target  size=148 */

void FUN_006c4090(void)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  int unaff_EDI;
  
  uVar4 = *(uint *)(unaff_EDI + 0x1a0);
  uVar2 = *(int *)(unaff_EDI + 0x198) * 0x10 + uVar4;
  if (uVar4 < uVar2) {
    do {
      if ((*(char *)(uVar4 + 8) == *(char *)(unaff_EDI + 0x170)) && (*(char *)(uVar4 + 0xc) != '\0')
         ) {
        iVar1 = *(int *)(unaff_EDI + 0x1ac);
        if (*(int *)(unaff_EDI + 0x1b0) <= iVar1) {
          *(undefined4 *)(unaff_EDI + 0xc) = 0x82;
          return;
        }
        *(int *)(unaff_EDI + 0x1ac) = iVar1 + 1;
        puVar3 = (undefined4 *)(iVar1 * 0x10 + *(int *)(unaff_EDI + 0x1b4));
        *puVar3 = *(undefined4 *)(unaff_EDI + 0x160);
        puVar3[1] = *(int *)(unaff_EDI + 0x168) + 1;
        puVar3[2] = 1;
        puVar3[3] = *(undefined4 *)(uVar4 + 4);
        FUN_006c1390();
        *(undefined1 *)(unaff_EDI + 0x178) = 0;
        return;
      }
      uVar4 = uVar4 + 0x10;
    } while (uVar4 < uVar2);
  }
  *(undefined4 *)(unaff_EDI + 0xc) = 0x80;
  return;
}


/* FUN_006c8020 @ 006c8020  kind=gamemisc  attributed-by=role:dispatch-target  size=579 */

void FUN_006c8020(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int in_ECX;
  uint unaff_EBX;
  int unaff_EDI;
  uint local_dc;
  int local_d8;
  undefined1 local_d4 [12];
  int local_c8;
  int local_a4;
  undefined4 local_98;
  int local_90;
  int local_34;
  int local_24;
  int local_20;
  uint local_4;
  
  local_4 = DAT_0076aa78 ^ (uint)&local_dc;
  iVar2 = *(int *)(in_ECX + 4);
  if (((*(int *)(unaff_EDI + 0x70) != -1) && ((unaff_EBX & 8) == 0)) &&
     (iVar1 = FUN_006c06f0(), iVar1 == 0)) {
    if ((*(byte *)(iVar2 + 8) & 1) != 0) {
      FUN_006c7e30(local_d4);
      FUN_006c6ce0(local_d4,param_1,0,1);
      *(undefined4 *)(in_ECX + 0x38) = local_98;
      *(int *)(in_ECX + 0x3c) = (local_a4 - local_20) + local_24;
      if ((*(int *)(iVar2 + 0x1e0) != 0) && ((unaff_EBX & 0x200) == 0)) {
        *(uint *)(in_ECX + 0x38) = (uint)*(ushort *)(iVar2 + 0xe2);
      }
    }
    __security_check_cookie(local_4 ^ (uint)&local_dc);
    return;
  }
  local_dc = unaff_EBX & 1;
  if ((local_dc == 0) && (*(char *)(unaff_EDI + 0x6c) == '\0')) {
    __security_check_cookie(local_4 ^ (uint)&local_dc);
    return;
  }
  if ((unaff_EBX & 0x4000) != 0) {
    __security_check_cookie(local_4 ^ (uint)&local_dc);
    return;
  }
  iVar2 = FUN_006c7e30(local_d4);
  if (iVar2 != 0) goto LAB_006c824c;
  *(undefined4 *)(in_ECX + 0x48) = 0x6f75746c;
  *(undefined4 *)(in_ECX + 0x80) = 0;
  *(undefined4 *)(in_ECX + 0x7c) = 0;
  local_d8 = FUN_006c6ce0(local_d4,param_1,0,0);
  if (local_d8 == 0) {
    if (*(int *)(in_ECX + 0x48) == 0x636f6d70) {
      *(undefined4 *)(in_ECX + 0x80) = *(undefined4 *)(local_c8 + 0x30);
      *(undefined4 *)(in_ECX + 0x84) = *(undefined4 *)(local_c8 + 0x34);
    }
    else {
      *(undefined4 *)(in_ECX + 0x6c) = *(undefined4 *)(local_c8 + 0x14);
      *(undefined4 *)(in_ECX + 0x70) = *(undefined4 *)(local_c8 + 0x18);
      *(undefined4 *)(in_ECX + 0x74) = *(undefined4 *)(local_c8 + 0x1c);
      *(undefined4 *)(in_ECX + 0x78) = *(undefined4 *)(local_c8 + 0x20);
      *(undefined4 *)(in_ECX + 0x7c) = *(undefined4 *)(local_c8 + 0x24);
      *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) & 0xfffffdff;
      if (local_90 != 0) {
        FUN_006904c0(in_ECX + 0x6c,-local_90,0);
      }
    }
    if ((unaff_EBX & 2) != 0) goto switchD_006c8203_caseD_1;
    if (*(char *)(local_34 + 0x151) == '\0') {
switchD_006c8203_caseD_2:
      *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 8;
    }
    else {
      switch(*(undefined4 *)(local_34 + 0x154)) {
      case 0:
        *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x20;
        break;
      case 1:
        break;
      default:
        goto switchD_006c8203_caseD_2;
      case 4:
        *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x30;
        break;
      case 5:
        *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x10;
      }
    }
switchD_006c8203_caseD_1:
    FUN_006c04a0(param_1);
  }
  if ((local_dc == 0) && (*(ushort *)(unaff_EDI + 0xe) < 0x18)) {
    *(uint *)(in_ECX + 0x7c) = *(uint *)(in_ECX + 0x7c) | 0x100;
  }
LAB_006c824c:
  __security_check_cookie(local_4 ^ (uint)&local_dc);
  return;
}


/* FUN_006cb7b0 @ 006cb7b0  kind=gamemisc  attributed-by=role:dispatch-target  size=42 */

void FUN_006cb7b0(void)

{
  void *in_EAX;
  
  memset(in_EAX,0,0xb8);
  FUN_006c8850();
  FUN_006923a0();
  return;
}


/* FUN_006cc7e0 @ 006cc7e0  kind=gamemisc  attributed-by=role:dispatch-target  size=105 */

undefined4 FUN_006cc7e0(undefined4 *param_1,undefined4 *param_2)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0x21;
  }
  if (param_2 == (undefined4 *)0x0) {
    return 6;
  }
  FUN_00691290(*param_1,param_2[3]);
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  return 0;
}


/* FUN_006ccf70 @ 006ccf70  kind=gamemisc  attributed-by=role:dispatch-target  size=177 */

int FUN_006ccf70(int param_1,uint param_2)

{
  uint in_EAX;
  int iVar1;
  int in_ECX;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(in_ECX + 0x10b8);
  iVar3 = 0;
  if (in_EAX < uVar2) {
    if ((*(int *)(in_ECX + 0x10bc) - in_ECX) - 0xb8U < uVar2 - in_EAX) {
      iVar1 = FUN_006cce80();
      if (iVar1 != 0) {
        return 0;
      }
    }
    else {
      *(uint *)(in_ECX + 0x10bc) = (*(int *)(in_ECX + 0x10bc) - uVar2) + in_EAX;
      *(uint *)(in_ECX + 0x10b8) = in_EAX;
    }
  }
  if (((in_EAX <= *(uint *)(in_ECX + 0x10b8)) || (iVar1 = FUN_006ccf00(), iVar1 == 0)) &&
     (param_2 != 0)) {
    do {
      uVar2 = *(int *)(in_ECX + 0x10c0) - (int)*(void **)(in_ECX + 0x10bc);
      if (param_2 <= uVar2) {
        uVar2 = param_2;
      }
      memcpy((void *)(param_1 + iVar3),*(void **)(in_ECX + 0x10bc),uVar2);
      *(int *)(in_ECX + 0x10bc) = *(int *)(in_ECX + 0x10bc) + uVar2;
      *(int *)(in_ECX + 0x10b8) = *(int *)(in_ECX + 0x10b8) + uVar2;
      iVar3 = iVar3 + uVar2;
      param_2 = param_2 - uVar2;
    } while ((param_2 != 0) && (iVar1 = FUN_006ccec0(), iVar1 == 0));
  }
  return iVar3;
}


/* FUN_006cd620 @ 006cd620  kind=gamemisc  attributed-by=role:dispatch-target  size=158 */

int FUN_006cd620(undefined4 param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(unaff_EBX + 0x20))(*(undefined4 *)(unaff_EBX + 0x28),0x13,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_006cd130(0x13,0x13,0,0,param_3,param_2,&local_4,iVar1);
  if (iVar2 == -3) {
    *(char **)(unaff_EBX + 0x18) = "oversubscribed dynamic bit lengths tree";
    (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
    return -3;
  }
  if ((iVar2 == -5) || (*param_2 == 0)) {
    *(char **)(unaff_EBX + 0x18) = "incomplete dynamic bit lengths tree";
    iVar2 = -3;
  }
  (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
  return iVar2;
}


/* FUN_006cd6c0 @ 006cd6c0  kind=gamemisc  attributed-by=role:dispatch-target  size=386 */

int FUN_006cd6c0(uint param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5,
                undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  int iVar2;
  int unaff_EBX;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = (**(code **)(unaff_EBX + 0x20))(*(undefined4 *)(unaff_EBX + 0x28),0x120,4);
  if (iVar1 == 0) {
    return -4;
  }
  iVar2 = FUN_006cd130(param_1,0x101,&DAT_00736380,&DAT_00736400,param_6,param_4,&local_4,iVar1);
  if (iVar2 == 0) {
    if (*param_4 != 0) {
      iVar2 = FUN_006cd130(param_2,0,&DAT_00736480,&DAT_007364f8,param_7,param_5,&local_4,iVar1);
      if (iVar2 == 0) {
        if ((*param_5 != 0) || (param_1 < 0x102)) {
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return 0;
        }
      }
      else {
        if (iVar2 == -3) {
          *(char **)(unaff_EBX + 0x18) = "oversubscribed distance tree";
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -5) {
          *(char **)(unaff_EBX + 0x18) = "incomplete distance tree";
          (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
          return -3;
        }
        if (iVar2 == -4) goto LAB_006cd7e9;
      }
      *(char **)(unaff_EBX + 0x18) = "empty distance tree with lengths";
      iVar2 = -3;
LAB_006cd7e9:
      (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
      return iVar2;
    }
  }
  else {
    if (iVar2 == -3) {
      *(char **)(unaff_EBX + 0x18) = "oversubscribed literal/length tree";
      (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
      return -3;
    }
    if (iVar2 == -4) goto LAB_006cd82e;
  }
  *(char **)(unaff_EBX + 0x18) = "incomplete literal/length tree";
  iVar2 = -3;
LAB_006cd82e:
  (**(code **)(unaff_EBX + 0x24))(*(undefined4 *)(unaff_EBX + 0x28),iVar1);
  return iVar2;
}


/* FUN_006cd850 @ 006cd850  kind=gamemisc  attributed-by=role:dispatch-target  size=31 */

undefined4 FUN_006cd850(undefined4 *param_1)

{
  undefined4 *in_EAX;
  undefined4 *in_ECX;
  undefined4 *in_EDX;
  
  *in_EAX = 9;
  *in_ECX = 5;
  *in_EDX = &DAT_00736570;
  *param_1 = &DAT_00737570;
  return 0;
}


/* FUN_006cd9a0 @ 006cd9a0  kind=gamemisc  attributed-by=role:dispatch-target  size=126 */

void FUN_006cd9a0(undefined4 param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  int *in_EAX;
  int in_ECX;
  uint uVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint local_18;
  int local_10;
  undefined1 *local_c;
  byte *pbStack_8;
  
  local_18 = *(uint *)(in_ECX + 0x20);
  uVar10 = *(uint *)(in_ECX + 0x1c);
  local_10 = in_EAX[1];
  puVar3 = *(undefined4 **)(in_ECX + 4);
  pbVar11 = (byte *)*in_EAX;
  puVar9 = *(undefined1 **)(in_ECX + 0x34);
  if (puVar9 < *(undefined1 **)(in_ECX + 0x30)) {
    local_c = *(undefined1 **)(in_ECX + 0x30) + (-1 - (int)puVar9);
  }
  else {
    local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar9);
  }
  uVar4 = *puVar3;
  do {
    puVar8 = puVar9;
    switch(uVar4) {
    case 0:
      puVar3[3] = (uint)*(byte *)(puVar3 + 4);
      puVar3[2] = puVar3[5];
      *puVar3 = 1;
    case 1:
      for (; uVar10 < (uint)puVar3[3]; uVar10 = uVar10 + 8) {
        if (local_10 == 0) {
LAB_006cde2d:
          *(uint *)(in_ECX + 0x20) = local_18;
          *(uint *)(in_ECX + 0x1c) = uVar10;
          in_EAX[1] = 0;
          in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
          *in_EAX = (int)pbVar11;
          *(undefined1 **)(in_ECX + 0x34) = puVar9;
          FUN_006cd870(param_1);
          return;
        }
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      pbStack_8 = (byte *)(puVar3[2] + (*(uint *)(&DAT_00737670 + puVar3[3] * 4) & local_18) * 8);
      local_18 = local_18 >> (pbStack_8[1] & 0x1f);
      uVar10 = uVar10 - pbStack_8[1];
      bVar1 = *pbStack_8;
      uVar7 = (uint)bVar1;
      if (uVar7 == 0) {
        puVar3[2] = *(undefined4 *)(pbStack_8 + 4);
        *puVar3 = 6;
      }
      else if ((bVar1 & 0x10) == 0) {
        if ((bVar1 & 0x40) == 0) {
LAB_006cdaab:
          puVar3[3] = uVar7;
          puVar3[2] = pbStack_8 + *(int *)(pbStack_8 + 4) * 8;
        }
        else {
          if ((bVar1 & 0x20) == 0) {
            *puVar3 = 9;
            in_EAX[6] = (int)"invalid literal/length code";
            param_1 = 0xfffffffd;
            goto LAB_006cde00;
          }
          *puVar3 = 7;
        }
      }
      else {
        puVar3[2] = uVar7 & 0xf;
        puVar3[1] = *(undefined4 *)(pbStack_8 + 4);
        *puVar3 = 2;
      }
LAB_006cddf3:
      uVar4 = *puVar3;
      break;
    case 2:
      uVar7 = puVar3[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (local_10 == 0) goto LAB_006cde2d;
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      puVar3[1] = puVar3[1] + (*(uint *)(&DAT_00737670 + uVar7 * 4) & local_18);
      local_18 = local_18 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      puVar3[3] = (uint)*(byte *)((int)puVar3 + 0x11);
      puVar3[2] = puVar3[6];
      *puVar3 = 3;
    case 3:
      for (; uVar10 < (uint)puVar3[3]; uVar10 = uVar10 + 8) {
        if (local_10 == 0) goto LAB_006cde2d;
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      pbStack_8 = (byte *)(puVar3[2] + (*(uint *)(&DAT_00737670 + puVar3[3] * 4) & local_18) * 8);
      local_18 = local_18 >> (pbStack_8[1] & 0x1f);
      uVar10 = uVar10 - pbStack_8[1];
      bVar1 = *pbStack_8;
      uVar7 = (uint)bVar1;
      if ((bVar1 & 0x10) != 0) {
        puVar3[2] = uVar7 & 0xf;
        puVar3[3] = *(undefined4 *)(pbStack_8 + 4);
        *puVar3 = 4;
        goto LAB_006cddf3;
      }
      if ((bVar1 & 0x40) == 0) goto LAB_006cdaab;
      *puVar3 = 9;
      in_EAX[6] = (int)"invalid distance code";
      param_1 = 0xfffffffd;
      goto LAB_006cde00;
    case 4:
      uVar7 = puVar3[2];
      for (; uVar10 < uVar7; uVar10 = uVar10 + 8) {
        if (local_10 == 0) goto LAB_006cde2d;
        bVar1 = *pbVar11;
        local_10 = local_10 + -1;
        pbVar11 = pbVar11 + 1;
        param_1 = 0;
        local_18 = local_18 | (uint)bVar1 << ((byte)uVar10 & 0x1f);
      }
      puVar3[3] = puVar3[3] + (*(uint *)(&DAT_00737670 + uVar7 * 4) & local_18);
      local_18 = local_18 >> ((byte)uVar7 & 0x1f);
      uVar10 = uVar10 - uVar7;
      *puVar3 = 5;
    case 5:
      pbStack_8 = puVar9 + -puVar3[3];
      if (pbStack_8 < *(undefined1 **)(in_ECX + 0x28)) {
        do {
          pbStack_8 = pbStack_8 + (*(int *)(in_ECX + 0x2c) - (int)*(undefined1 **)(in_ECX + 0x28));
        } while (pbStack_8 < *(undefined1 **)(in_ECX + 0x28));
      }
      iVar5 = puVar3[1];
      while (iVar5 != 0) {
        puVar8 = puVar9;
        if (local_c == (undefined1 *)0x0) {
          if (puVar9 == *(undefined1 **)(in_ECX + 0x2c)) {
            local_c = *(undefined1 **)(in_ECX + 0x30);
            puVar8 = *(undefined1 **)(in_ECX + 0x28);
            if (local_c != puVar8) {
              if (puVar8 < local_c) {
                local_c = local_c + (-1 - (int)puVar8);
              }
              else {
                local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
              }
              puVar9 = puVar8;
              if (local_c != (undefined1 *)0x0) goto LAB_006cdd11;
            }
          }
          *(undefined1 **)(in_ECX + 0x34) = puVar9;
          param_1 = FUN_006cd870(param_1);
          puVar8 = *(undefined1 **)(in_ECX + 0x34);
          puVar9 = *(undefined1 **)(in_ECX + 0x30);
          if (puVar8 < puVar9) {
            local_c = puVar9 + (-1 - (int)puVar8);
          }
          else {
            local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
          }
          if ((puVar8 == *(undefined1 **)(in_ECX + 0x2c)) &&
             (puVar6 = *(undefined1 **)(in_ECX + 0x28), puVar9 != puVar6)) {
            puVar8 = puVar6;
            if (puVar6 < puVar9) {
              local_c = puVar9 + (-1 - (int)puVar6);
            }
            else {
              local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
            }
          }
          if (local_c == (undefined1 *)0x0) goto LAB_006cde70;
        }
LAB_006cdd11:
        uVar2 = *pbStack_8;
        pbStack_8 = pbStack_8 + 1;
        local_c = local_c + -1;
        *puVar8 = uVar2;
        puVar9 = puVar8 + 1;
        param_1 = 0;
        if (pbStack_8 == *(undefined1 **)(in_ECX + 0x2c)) {
          pbStack_8 = *(byte **)(in_ECX + 0x28);
        }
        puVar3[1] = puVar3[1] + -1;
        iVar5 = puVar3[1];
      }
LAB_006cdded:
      *puVar3 = 0;
      goto LAB_006cddf3;
    case 6:
      if (local_c == (undefined1 *)0x0) {
        if (puVar9 == *(undefined1 **)(in_ECX + 0x2c)) {
          local_c = *(undefined1 **)(in_ECX + 0x30);
          puVar8 = *(undefined1 **)(in_ECX + 0x28);
          if (local_c != puVar8) {
            if (puVar8 < local_c) {
              local_c = local_c + (-1 - (int)puVar8);
            }
            else {
              local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
            }
            puVar9 = puVar8;
            if (local_c != (undefined1 *)0x0) goto LAB_006cdddb;
          }
        }
        *(undefined1 **)(in_ECX + 0x34) = puVar9;
        param_1 = FUN_006cd870(param_1);
        puVar8 = *(undefined1 **)(in_ECX + 0x34);
        puVar9 = *(undefined1 **)(in_ECX + 0x30);
        if (puVar8 < puVar9) {
          local_c = puVar9 + (-1 - (int)puVar8);
        }
        else {
          local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar8);
        }
        if ((puVar8 == *(undefined1 **)(in_ECX + 0x2c)) &&
           (puVar6 = *(undefined1 **)(in_ECX + 0x28), puVar9 != puVar6)) {
          puVar8 = puVar6;
          if (puVar6 < puVar9) {
            local_c = puVar9 + (-1 - (int)puVar6);
          }
          else {
            local_c = (undefined1 *)(*(int *)(in_ECX + 0x2c) - (int)puVar6);
          }
        }
        if (local_c == (undefined1 *)0x0) {
LAB_006cde70:
          *(uint *)(in_ECX + 0x20) = local_18;
          *(uint *)(in_ECX + 0x1c) = uVar10;
          in_EAX[1] = local_10;
          in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
          goto LAB_006cde18;
        }
      }
LAB_006cdddb:
      *puVar8 = *(undefined1 *)(puVar3 + 2);
      puVar9 = puVar8 + 1;
      local_c = local_c + -1;
      param_1 = 0;
      goto LAB_006cdded;
    case 7:
      if (7 < uVar10) {
        local_10 = local_10 + 1;
        uVar10 = uVar10 - 8;
        pbVar11 = pbVar11 + -1;
      }
      *(undefined1 **)(in_ECX + 0x34) = puVar9;
      param_1 = FUN_006cd870(param_1);
      puVar9 = *(undefined1 **)(in_ECX + 0x34);
      if (*(undefined1 **)(in_ECX + 0x30) == puVar9) {
        *puVar3 = 8;
LAB_006cded5:
        param_1 = 1;
LAB_006cde00:
        *(uint *)(in_ECX + 0x20) = local_18;
        *(uint *)(in_ECX + 0x1c) = uVar10;
        in_EAX[1] = local_10;
      }
      else {
        *(uint *)(in_ECX + 0x20) = local_18;
        *(uint *)(in_ECX + 0x1c) = uVar10;
        in_EAX[1] = local_10;
      }
      in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
      puVar8 = puVar9;
LAB_006cde18:
      *in_EAX = (int)pbVar11;
      *(undefined1 **)(in_ECX + 0x34) = puVar8;
      FUN_006cd870(param_1);
      return;
    case 8:
      goto LAB_006cded5;
    case 9:
      *(uint *)(in_ECX + 0x20) = local_18;
      *(uint *)(in_ECX + 0x1c) = uVar10;
      in_EAX[1] = local_10;
      in_EAX[2] = (int)(pbVar11 + (in_EAX[2] - *in_EAX));
      param_1 = 0xfffffffd;
      goto LAB_006cde18;
    default:
      param_1 = 0xfffffffe;
      goto LAB_006cde00;
    }
  } while( true );
}


/* FUN_006dc0f0 @ 006dc0f0  kind=gamemisc  attributed-by=role:dispatch-target  size=234 */

void FUN_006dc0f0(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int local_8;
  
  iVar4 = 0;
  FUN_00401c40(param_2,*param_1,0x18);
  FUN_00401c40(param_2,param_1[1],0x18);
  FUN_00401c40(param_2,param_1[2] + -1,0x18);
  FUN_00401c40(param_2,param_1[3] + -1,6);
  FUN_00401c40(param_2,param_1[5],8);
  local_8 = 0;
  if (0 < (int)param_1[3]) {
    puVar5 = param_1 + 6;
    do {
      uVar2 = *puVar5;
      iVar3 = 0;
      uVar1 = uVar2;
      if (uVar2 == 0) {
LAB_006dc181:
        FUN_00401c40(param_2,uVar2,4);
      }
      else {
        do {
          iVar3 = iVar3 + 1;
          uVar1 = uVar1 >> 1;
        } while (uVar1 != 0);
        if (iVar3 < 4) goto LAB_006dc181;
        FUN_00401c40(param_2,uVar2,3);
        FUN_00401c40(param_2,1,1);
        FUN_00401c40(param_2,(int)*puVar5 >> 3,5);
      }
      iVar3 = 0;
      for (uVar2 = *puVar5; uVar2 != 0; uVar2 = uVar2 >> 1) {
        iVar3 = iVar3 + (uVar2 & 1);
      }
      local_8 = local_8 + 1;
      iVar4 = iVar4 + iVar3;
      puVar5 = puVar5 + 1;
    } while (local_8 < (int)param_1[3]);
  }
  if (0 < iVar4) {
    param_1 = param_1 + 0x46;
    do {
      FUN_00401c40(param_2,*param_1,8);
      param_1 = param_1 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  return;
}


/* FUN_006dd730 @ 006dd730  kind=gamemisc  attributed-by=role:dispatch-target  size=345 */

void FUN_006dd730(int param_1,int *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int local_8;
  
  if (*param_2 < 2) {
    FUN_00401c40(param_3,0,1);
  }
  else {
    FUN_00401c40(param_3,1,1);
    FUN_00401c40(param_3,*param_2 + -1,4);
  }
  if (param_2[0x121] < 1) {
    FUN_00401c40(param_3,0,1);
  }
  else {
    FUN_00401c40(param_3,1,1);
    FUN_00401c40(param_3,param_2[0x121] + -1,8);
    local_8 = 0;
    if (0 < param_2[0x121]) {
      piVar3 = param_2 + 0x222;
      do {
        iVar2 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          for (uVar1 = *(int *)(param_1 + 4) - 1; uVar1 != 0; uVar1 = uVar1 >> 1) {
            iVar2 = iVar2 + 1;
          }
        }
        FUN_00401c40(param_3,piVar3[-0x100],iVar2);
        iVar2 = 0;
        if (*(int *)(param_1 + 4) != 0) {
          for (uVar1 = *(int *)(param_1 + 4) - 1; uVar1 != 0; uVar1 = uVar1 >> 1) {
            iVar2 = iVar2 + 1;
          }
        }
        FUN_00401c40(param_3,*piVar3,iVar2);
        local_8 = local_8 + 1;
        piVar3 = piVar3 + 1;
      } while (local_8 < param_2[0x121]);
    }
  }
  FUN_00401c40(param_3,0,2);
  if ((1 < *param_2) && (iVar2 = 0, piVar3 = param_2, 0 < *(int *)(param_1 + 4))) {
    do {
      FUN_00401c40(param_3,piVar3[1],4);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  iVar2 = 0;
  if (0 < *param_2) {
    piVar3 = param_2 + 0x111;
    do {
      FUN_00401c40(param_3,0,8);
      FUN_00401c40(param_3,piVar3[-0x10],8);
      FUN_00401c40(param_3,*piVar3,8);
      iVar2 = iVar2 + 1;
      piVar3 = piVar3 + 1;
    } while (iVar2 < *param_2);
  }
  return;
}


/* FUN_006f9450 @ 006f9450  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9450(void)

{
  _DAT_0076af6c = 0xffff;
  DAT_0076af6e = 0xff;
  DAT_0076af6f = 0;
  return;
}


/* FUN_006f9480 @ 006f9480  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9480(void)

{
  _DAT_0076af70 = 0xc8c8;
  _DAT_0076af72 = 0x1c8;
  return;
}


/* FUN_006f94b0 @ 006f94b0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f94b0(void)

{
  _DAT_0076af68 = 0xffff;
  DAT_0076af6a = 0xff;
  DAT_0076af6b = 0x82;
  return;
}


/* FUN_006f94e0 @ 006f94e0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f94e0(void)

{
  _DAT_0076af80 = 0xffff;
  DAT_0076af82 = 0xff;
  DAT_0076af83 = 0;
  return;
}


/* FUN_006f9510 @ 006f9510  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9510(void)

{
  _DAT_0076af84 = 0xc8c8;
  _DAT_0076af86 = 0x1c8;
  return;
}


/* FUN_006f9540 @ 006f9540  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9540(void)

{
  _DAT_0076af7c = 0xffff;
  DAT_0076af7e = 0xff;
  DAT_0076af7f = 0x82;
  return;
}


/* FUN_006f9570 @ 006f9570  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9570(void)

{
  _DAT_0076af90 = 0xffff;
  DAT_0076af92 = 0xff;
  DAT_0076af93 = 0;
  return;
}


/* FUN_006f95a0 @ 006f95a0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f95a0(void)

{
  _DAT_0076af94 = 0xc8c8;
  _DAT_0076af96 = 0x1c8;
  return;
}


/* FUN_006f95d0 @ 006f95d0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f95d0(void)

{
  _DAT_0076af8c = 0xffff;
  DAT_0076af8e = 0xff;
  DAT_0076af8f = 0x82;
  return;
}


/* FUN_006f9600 @ 006f9600  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9600(void)

{
  _DAT_0076afa0 = 0xffff;
  DAT_0076afa2 = 0xff;
  DAT_0076afa3 = 0;
  return;
}


/* FUN_006f9630 @ 006f9630  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9630(void)

{
  _DAT_0076afa4 = 0xc8c8;
  _DAT_0076afa6 = 0x1c8;
  return;
}


/* FUN_006f9660 @ 006f9660  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9660(void)

{
  _DAT_0076af9c = 0xffff;
  DAT_0076af9e = 0xff;
  DAT_0076af9f = 0x82;
  return;
}


/* FUN_006f9690 @ 006f9690  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9690(void)

{
  _DAT_0076afb0 = 0xffff;
  DAT_0076afb2 = 0xff;
  DAT_0076afb3 = 0;
  return;
}


/* FUN_006f96c0 @ 006f96c0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f96c0(void)

{
  _DAT_0076afb4 = 0xc8c8;
  _DAT_0076afb6 = 0x1c8;
  return;
}


/* FUN_006f96f0 @ 006f96f0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f96f0(void)

{
  _DAT_0076afac = 0xffff;
  DAT_0076afae = 0xff;
  DAT_0076afaf = 0x82;
  return;
}


/* FUN_006f9720 @ 006f9720  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9720(void)

{
  _DAT_0076afc0 = 0xffff;
  DAT_0076afc2 = 0xff;
  DAT_0076afc3 = 0;
  return;
}


/* FUN_006f9750 @ 006f9750  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9750(void)

{
  _DAT_0076afc4 = 0xc8c8;
  _DAT_0076afc6 = 0x1c8;
  return;
}


/* FUN_006f9780 @ 006f9780  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9780(void)

{
  _DAT_0076afbc = 0xffff;
  DAT_0076afbe = 0xff;
  DAT_0076afbf = 0x82;
  return;
}


/* FUN_006f97b0 @ 006f97b0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f97b0(void)

{
  _DAT_0076afdc = 0xffff;
  DAT_0076afde = 0xff;
  DAT_0076afdf = 0;
  return;
}


/* FUN_006f97e0 @ 006f97e0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f97e0(void)

{
  _DAT_0076afe0 = 0xc8c8;
  _DAT_0076afe2 = 0x1c8;
  return;
}


/* FUN_006f9810 @ 006f9810  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9810(void)

{
  _DAT_0076afd8 = 0xffff;
  DAT_0076afda = 0xff;
  DAT_0076afdb = 0x82;
  return;
}


/* FUN_006f9840 @ 006f9840  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9840(void)

{
  _DAT_0076aff0 = 0xffff;
  DAT_0076aff2 = 0xff;
  DAT_0076aff3 = 0;
  return;
}


/* FUN_006f9870 @ 006f9870  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9870(void)

{
  _DAT_0076aff4 = 0xc8c8;
  _DAT_0076aff6 = 0x1c8;
  return;
}


/* FUN_006f98a0 @ 006f98a0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f98a0(void)

{
  _DAT_0076afec = 0xffff;
  DAT_0076afee = 0xff;
  DAT_0076afef = 0x82;
  return;
}


/* FUN_006f98d0 @ 006f98d0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f98d0(void)

{
  _DAT_0076b000 = 0xffff;
  DAT_0076b002 = 0xff;
  DAT_0076b003 = 0;
  return;
}


/* FUN_006f9900 @ 006f9900  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9900(void)

{
  _DAT_0076b004 = 0xc8c8;
  _DAT_0076b006 = 0x1c8;
  return;
}


/* FUN_006f9930 @ 006f9930  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9930(void)

{
  _DAT_0076affc = 0xffff;
  DAT_0076affe = 0xff;
  DAT_0076afff = 0x82;
  return;
}


/* FUN_006f9960 @ 006f9960  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9960(void)

{
  _DAT_0076b014 = 0xffff;
  DAT_0076b016 = 0xff;
  DAT_0076b017 = 0;
  return;
}


/* FUN_006f9990 @ 006f9990  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9990(void)

{
  _DAT_0076b018 = 0xc8c8;
  _DAT_0076b01a = 0x1c8;
  return;
}


/* FUN_006f99c0 @ 006f99c0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f99c0(void)

{
  _DAT_0076b010 = 0xffff;
  DAT_0076b012 = 0xff;
  DAT_0076b013 = 0x82;
  return;
}


/* FUN_006f99f0 @ 006f99f0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f99f0(void)

{
  _DAT_0076b024 = 0xffff;
  DAT_0076b026 = 0xff;
  DAT_0076b027 = 0;
  return;
}


/* FUN_006f9a20 @ 006f9a20  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9a20(void)

{
  _DAT_0076b028 = 0xc8c8;
  _DAT_0076b02a = 0x1c8;
  return;
}


/* FUN_006f9a50 @ 006f9a50  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9a50(void)

{
  _DAT_0076b020 = 0xffff;
  DAT_0076b022 = 0xff;
  DAT_0076b023 = 0x82;
  return;
}


/* FUN_006f9a80 @ 006f9a80  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9a80(void)

{
  _DAT_0076b034 = 0xffff;
  DAT_0076b036 = 0xff;
  DAT_0076b037 = 0;
  return;
}


/* FUN_006f9ab0 @ 006f9ab0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ab0(void)

{
  _DAT_0076b038 = 0xc8c8;
  _DAT_0076b03a = 0x1c8;
  return;
}


/* FUN_006f9ae0 @ 006f9ae0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ae0(void)

{
  _DAT_0076b030 = 0xffff;
  DAT_0076b032 = 0xff;
  DAT_0076b033 = 0x82;
  return;
}


/* FUN_006f9b10 @ 006f9b10  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9b10(void)

{
  _DAT_0076b058 = 0xffff;
  DAT_0076b05a = 0xff;
  DAT_0076b05b = 0;
  return;
}


/* FUN_006f9b40 @ 006f9b40  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9b40(void)

{
  _DAT_0076b05c = 0xc8c8;
  _DAT_0076b05e = 0x1c8;
  return;
}


/* FUN_006f9b70 @ 006f9b70  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9b70(void)

{
  _DAT_0076b054 = 0xffff;
  DAT_0076b056 = 0xff;
  DAT_0076b057 = 0x82;
  return;
}


/* FUN_006f9ba0 @ 006f9ba0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ba0(void)

{
  _DAT_0076b158 = 0xffff;
  DAT_0076b15a = 0xff;
  DAT_0076b15b = 0;
  return;
}


/* FUN_006f9bd0 @ 006f9bd0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9bd0(void)

{
  _DAT_0076b15c = 0xc8c8;
  _DAT_0076b15e = 0x1c8;
  return;
}


/* FUN_006f9c00 @ 006f9c00  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c00(void)

{
  _DAT_0076b154 = 0xffff;
  DAT_0076b156 = 0xff;
  DAT_0076b157 = 0x82;
  return;
}


/* FUN_006f9c30 @ 006f9c30  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c30(void)

{
  _DAT_0076b174 = 0xffff;
  DAT_0076b176 = 0xff;
  DAT_0076b177 = 0;
  return;
}


/* FUN_006f9c60 @ 006f9c60  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c60(void)

{
  _DAT_0076b178 = 0xc8c8;
  _DAT_0076b17a = 0x1c8;
  return;
}


/* FUN_006f9c90 @ 006f9c90  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9c90(void)

{
  _DAT_0076b170 = 0xffff;
  DAT_0076b172 = 0xff;
  DAT_0076b173 = 0x82;
  return;
}


/* FUN_006f9cc0 @ 006f9cc0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9cc0(void)

{
  _DAT_0076b188 = 0xffff;
  DAT_0076b18a = 0xff;
  DAT_0076b18b = 0;
  return;
}


/* FUN_006f9cf0 @ 006f9cf0  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9cf0(void)

{
  _DAT_0076b18c = 0xc8c8;
  _DAT_0076b18e = 0x1c8;
  return;
}


/* FUN_006f9d20 @ 006f9d20  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9d20(void)

{
  _DAT_0076b184 = 0xffff;
  DAT_0076b186 = 0xff;
  DAT_0076b187 = 0x82;
  return;
}


/* FUN_006f9d50 @ 006f9d50  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9d50(void)

{
  _DAT_0076b198 = 0xffff;
  DAT_0076b19a = 0xff;
  DAT_0076b19b = 0;
  return;
}


/* FUN_006f9d80 @ 006f9d80  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9d80(void)

{
  _DAT_0076b19c = 0xc8c8;
  _DAT_0076b19e = 0x1c8;
  return;
}


/* FUN_006f9db0 @ 006f9db0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9db0(void)

{
  _DAT_0076b194 = 0xffff;
  DAT_0076b196 = 0xff;
  DAT_0076b197 = 0x82;
  return;
}


/* FUN_006f9de0 @ 006f9de0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9de0(void)

{
  _DAT_0076b1ac = 0xffff;
  DAT_0076b1ae = 0xff;
  DAT_0076b1af = 0;
  return;
}


/* FUN_006f9e10 @ 006f9e10  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9e10(void)

{
  _DAT_0076b1b0 = 0xc8c8;
  _DAT_0076b1b2 = 0x1c8;
  return;
}


/* FUN_006f9e40 @ 006f9e40  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9e40(void)

{
  _DAT_0076b1a8 = 0xffff;
  DAT_0076b1aa = 0xff;
  DAT_0076b1ab = 0x82;
  return;
}


/* FUN_006f9ee0 @ 006f9ee0  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9ee0(void)

{
  _DAT_0076b20c = 0xffff;
  DAT_0076b20e = 0xff;
  DAT_0076b20f = 0;
  return;
}


/* FUN_006f9f20 @ 006f9f20  kind=gamemisc  attributed-by=role:dispatch-target  size=33 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9f20(void)

{
  _DAT_0076b210 = 0xc8c8;
  _DAT_0076b212 = 0x1c8;
  return;
}


/* FUN_006f9f50 @ 006f9f50  kind=gamemisc  attributed-by=role:dispatch-target  size=40 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_006f9f50(void)

{
  _DAT_0076b208 = 0xffff;
  DAT_0076b20a = 0xff;
  DAT_0076b20b = 0x82;
  return;
}


