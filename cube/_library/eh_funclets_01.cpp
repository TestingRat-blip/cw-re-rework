// eh_funclets_01 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_01.h"

/* Catch_All@0064b441 @ 0064b441  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0064b441(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@0064bb48 @ 0064bb48  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0064bb48(void)

{
  int unaff_EBP;
  
  FUN_0044b7f0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0064bc78 @ 0064bc78  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0064bc78(void)

{
  int unaff_EBP;
  
  FUN_0044b7f0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0064bdc4 @ 0064bdc4  kind=lib  attributed-by=eh  size=9 */

void Catch_All_0064bdc4(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0064e67d @ 0064e67d  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0064e67d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x34));
}


/* Catch_All@0065a0c2 @ 0065a0c2  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0065a0c2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@0065a601 @ 0065a601  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0065a601(void)

{
  int unaff_EBP;
  
  FUN_0065aeb0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0065a83f @ 0065a83f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0065a83f(void)

{
  int unaff_EBP;
  
  FUN_0065aeb0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0066145d @ 0066145d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0066145d(void)

{
  int unaff_EBP;
  
  FUN_005947a0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0066311a @ 0066311a  kind=lib  attributed-by=eh  size=35 */

void Catch_All_0066311a(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 8);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_00457900(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00663953 @ 00663953  kind=lib  attributed-by=eh  size=71 */

void Catch_All_00663953(void)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int unaff_EBP;
  
  iVar3 = *(int *)(unaff_EBP + -0x5c);
  iVar1 = *(int *)(unaff_EBP + -0x50);
  pvVar2 = *(void **)(unaff_EBP + -0x6c);
  if (1 < iVar3) {
    FUN_0046daf0(pvVar2,(void *)((int)pvVar2 + iVar1 * 0x18));
    iVar3 = *(int *)(unaff_EBP + -0x5c);
  }
  if (0 < iVar3) {
    FUN_0046daf0((void *)((int)pvVar2 + iVar1 * 0x18),
                 (void *)((int)pvVar2 + (*(int *)(unaff_EBP + -0x68) + iVar1) * 0x18));
  }
                    /* WARNING: Subroutine does not return */
  operator_delete(pvVar2);
}


/* Catch_All@00663a79 @ 00663a79  kind=lib  attributed-by=eh  size=38 */

void Catch_All_00663a79(void)

{
  int iVar1;
  int unaff_EBP;
  
  iVar1 = *(int *)(unaff_EBP + -0x68) * 0x18;
  FUN_0046daf0(*(int *)(unaff_EBP + 0xc) + iVar1,*(int *)(*(int *)(unaff_EBP + -100) + 4) + iVar1);
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00665c71 @ 00665c71  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00665c71(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00666069 @ 00666069  kind=lib  attributed-by=eh  size=9 */

void Catch_All_00666069(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0066826a @ 0066826a  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0066826a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@006684b8 @ 006684b8  kind=lib  attributed-by=eh  size=8 */

void Catch_All_006684b8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x18));
}


/* Catch_All@0066874c @ 0066874c  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0066874c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x34));
}


/* Catch_All@0066892c @ 0066892c  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0066892c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00668a1f @ 00668a1f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00668a1f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00672f4f @ 00672f4f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00672f4f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0067795a @ 0067795a  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0067795a(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00677b82 @ 00677b82  kind=lib  attributed-by=eh  size=39 */

void Catch_All_00677b82(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x1c) {
    FUN_00457900(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00677e05 @ 00677e05  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00677e05(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0067e0a5 @ 0067e0a5  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0067e0a5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0067e1cf @ 0067e1cf  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0067e1cf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0067fc38 @ 0067fc38  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0067fc38(void)

{
  int unaff_EBP;
  
  FUN_00681a20(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0067fd6d @ 0067fd6d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0067fd6d(void)

{
  int unaff_EBP;
  
  FUN_00681a20(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@006812ef @ 006812ef  kind=lib  attributed-by=eh  size=17 */

void Catch_All_006812ef(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Unwind@006e11d0 @ 006e11d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e11d0(void)

{
  FUN_004ce6c0();
  return;
}


/* Unwind@006e11d8 @ 006e11d8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e11d8(void)

{
  FUN_00404060();
  return;
}


/* Unwind@006e12c0 @ 006e12c0  kind=lib  attributed-by=eh  size=29 */

void Unwind_006e12c0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e12d6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 0x68));
    return;
  }
  return;
}


/* Unwind@006e12dd @ 006e12dd  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e12dd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e12e3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 0x20));
  return;
}


/* Unwind@006e12e9 @ 006e12e9  kind=lib  attributed-by=eh  size=9 */

void Unwind_006e12e9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e12ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0x18));
  return;
}


/* Unwind@006e1330 @ 006e1330  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1330(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006e133b @ 006e133b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e133b(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1346 @ 006e1346  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1346(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1351 @ 006e1351  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1351(void)

{
  FUN_00403ee0();
  return;
}


/* Unwind@006e135c @ 006e135c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e135c(void)

{
  FUN_0063de60();
  return;
}


/* Unwind@006e1367 @ 006e1367  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1367(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006e1372 @ 006e1372  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1372(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e13a0 @ 006e13a0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e13a0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e13d0 @ 006e13d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e13d0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e1400 @ 006e1400  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1400(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e1450 @ 006e1450  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1450(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e1480 @ 006e1480  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1480(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e14b0 @ 006e14b0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e14b0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e14e0 @ 006e14e0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e14e0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1510 @ 006e1510  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1510(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1540 @ 006e1540  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1540(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1548 @ 006e1548  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e1548(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e1559 @ 006e1559  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e1559(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e1590 @ 006e1590  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1590(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e15c0 @ 006e15c0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e15c0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e15f0 @ 006e15f0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e15f0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e15f8 @ 006e15f8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e15f8(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1620 @ 006e1620  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1620(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1628 @ 006e1628  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1628(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1650 @ 006e1650  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1650(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1680 @ 006e1680  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1680(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e16b0 @ 006e16b0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e16b0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e16b8 @ 006e16b8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e16b8(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e16e0 @ 006e16e0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e16e0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e16e8 @ 006e16e8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e16e8(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1710 @ 006e1710  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1710(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1718 @ 006e1718  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1718(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1720 @ 006e1720  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1720(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1728 @ 006e1728  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e1728(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e1739 @ 006e1739  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e1739(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e1770 @ 006e1770  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1770(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1778 @ 006e1778  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1778(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1780 @ 006e1780  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e1780(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e1791 @ 006e1791  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e1791(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e17c0 @ 006e17c0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e17c0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e17f0 @ 006e17f0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e17f0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e17f8 @ 006e17f8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e17f8(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e1830 @ 006e1830  kind=lib  attributed-by=eh  size=26 */

void Unwind_006e1830(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x2c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x2c) = *(uint *)(unaff_EBP + -0x2c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e1843. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x74));
    return;
  }
  return;
}


/* Unwind@006e184a @ 006e184a  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e184a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1850. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0xbc));
  return;
}


/* Unwind@006e1856 @ 006e1856  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1856(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e185c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0xe0));
  return;
}


/* Unwind@006e1862 @ 006e1862  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1862(void)

{
  int unaff_EBP;
  
  FUN_00404420(unaff_EBP + -0xdc);
  return;
}


/* Unwind@006e18a0 @ 006e18a0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e18a0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e18a8 @ 006e18a8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e18a8(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e18b0 @ 006e18b0  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e18b0(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e18c1 @ 006e18c1  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e18c1(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006e18f0 @ 006e18f0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e18f0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e18fb @ 006e18fb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e18fb(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e1930 @ 006e1930  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1930(void)

{
  FUN_004043f0();
  return;
}


/* Unwind@006e1960 @ 006e1960  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1960(void)

{
  FUN_00404040();
  return;
}


/* Unwind@006e1990 @ 006e1990  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1990(void)

{
  FUN_004ce6c0();
  return;
}


/* Unwind@006e1998 @ 006e1998  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1998(void)

{
  FUN_0040ef20();
  return;
}


/* Unwind@006e19a0 @ 006e19a0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e19a0(void)

{
  FUN_00404040();
  return;
}


/* Unwind@006e19d0 @ 006e19d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e19d0(void)

{
  FUN_004ce6c0();
  return;
}


/* Unwind@006e19d8 @ 006e19d8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e19d8(void)

{
  FUN_0040ef20();
  return;
}


/* Unwind@006e1a00 @ 006e1a00  kind=lib  attributed-by=eh  size=9 */

void Unwind_006e1a00(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1a03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::_Lockit::~_Lockit((_Lockit *)(unaff_EBP + -0x14));
  return;
}


/* Unwind@006e1a30 @ 006e1a30  kind=lib  attributed-by=eh  size=29 */

void Unwind_006e1a30(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e1a46. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(*(int *)(unaff_EBP + -0x14) + 0x68)
              );
    return;
  }
  return;
}


/* Unwind@006e1a4d @ 006e1a4d  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1a4d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1a53. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(unaff_EBP + -0x14) + 0x20));
  return;
}


/* Unwind@006e1a59 @ 006e1a59  kind=lib  attributed-by=eh  size=9 */

void Unwind_006e1a59(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1a5c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x18));
  return;
}


/* Unwind@006e1a80 @ 006e1a80  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1a80(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1a88 @ 006e1a88  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1a88(void)

{
  int unaff_EBP;
  
  plasma::Widget::~Widget(*(Widget **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@006e1ad0 @ 006e1ad0  kind=lib  attributed-by=eh  size=35 */

void Unwind_006e1ad0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x38c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x38c) = *(uint *)(unaff_EBP + -0x38c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e1aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x3e4));
    return;
  }
  return;
}


/* Unwind@006e1af3 @ 006e1af3  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1af3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1af9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x42c));
  return;
}


/* Unwind@006e1aff @ 006e1aff  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1aff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1b05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x450));
  return;
}


/* Unwind@006e1b0b @ 006e1b0b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b0b(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x44c));
  return;
}


/* Unwind@006e1b16 @ 006e1b16  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b16(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b21 @ 006e1b21  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b21(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b2c @ 006e1b2c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b2c(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b37 @ 006e1b37  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b37(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b42 @ 006e1b42  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b42(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b4d @ 006e1b4d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b4d(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b58 @ 006e1b58  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b58(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b63 @ 006e1b63  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b63(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b6e @ 006e1b6e  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b6e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b79 @ 006e1b79  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b79(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b84 @ 006e1b84  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b84(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b8f @ 006e1b8f  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b8f(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1b9a @ 006e1b9a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1b9a(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ba5 @ 006e1ba5  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1ba5(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bb0 @ 006e1bb0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bb0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bbb @ 006e1bbb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bbb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bc6 @ 006e1bc6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bc6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bd1 @ 006e1bd1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bd1(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bdc @ 006e1bdc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bdc(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1be7 @ 006e1be7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1be7(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bf2 @ 006e1bf2  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bf2(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1bfd @ 006e1bfd  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1bfd(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1c08 @ 006e1c08  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1c08(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1c13 @ 006e1c13  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1c13(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1c50 @ 006e1c50  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1c50(void)

{
  FUN_004ce6c0();
  return;
}


/* Unwind@006e1c58 @ 006e1c58  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1c58(void)

{
  FUN_0040ef20();
  return;
}


/* Unwind@006e1ca0 @ 006e1ca0  kind=lib  attributed-by=eh  size=35 */

void Unwind_006e1ca0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x89c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x89c) = *(uint *)(unaff_EBP + -0x89c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e1cbc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x760));
    return;
  }
  return;
}


/* Unwind@006e1cc3 @ 006e1cc3  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1cc3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1cc9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x7a8));
  return;
}


/* Unwind@006e1ccf @ 006e1ccf  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1ccf(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1cd5. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x8b4));
  return;
}


/* Unwind@006e1cdb @ 006e1cdb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1cdb(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x7c8));
  return;
}


/* Unwind@006e1ce6 @ 006e1ce6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1ce6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1cf1 @ 006e1cf1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1cf1(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1cfc @ 006e1cfc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1cfc(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d07 @ 006e1d07  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d07(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d12 @ 006e1d12  kind=lib  attributed-by=eh  size=35 */

void Unwind_006e1d12(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x89c) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x89c) = *(uint *)(unaff_EBP + -0x89c) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x006e1d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x810));
    return;
  }
  return;
}


/* Unwind@006e1d35 @ 006e1d35  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1d35(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x858));
  return;
}


/* Unwind@006e1d41 @ 006e1d41  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1d41(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1d47. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x8b8));
  return;
}


/* Unwind@006e1d4d @ 006e1d4d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d4d(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x878));
  return;
}


/* Unwind@006e1d58 @ 006e1d58  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d58(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e1d63 @ 006e1d63  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d63(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d6e @ 006e1d6e  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d6e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d79 @ 006e1d79  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d79(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d84 @ 006e1d84  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d84(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d8f @ 006e1d8f  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d8f(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1d9a @ 006e1d9a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1d9a(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1da5 @ 006e1da5  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1da5(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1db0 @ 006e1db0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1db0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1dbb @ 006e1dbb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1dbb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1dc6 @ 006e1dc6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1dc6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1dd1 @ 006e1dd1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1dd1(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ddc @ 006e1ddc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1ddc(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1de7 @ 006e1de7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1de7(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1df2 @ 006e1df2  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1df2(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1dfd @ 006e1dfd  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1dfd(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1e40 @ 006e1e40  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e40(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006e1e70 @ 006e1e70  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e70(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1e78 @ 006e1e78  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e78(void)

{
  int unaff_EBP;
  
  plasma::Widget::~Widget(*(Widget **)(unaff_EBP + -0x60));
  return;
}


/* Unwind@006e1e80 @ 006e1e80  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e80(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1e88 @ 006e1e88  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e88(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1e90 @ 006e1e90  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e90(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1e98 @ 006e1e98  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1e98(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ea0 @ 006e1ea0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ea0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ea8 @ 006e1ea8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ea8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1eb0 @ 006e1eb0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1eb0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1eb8 @ 006e1eb8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1eb8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ec0 @ 006e1ec0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ec0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ec8 @ 006e1ec8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ec8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ed0 @ 006e1ed0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ed0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ed8 @ 006e1ed8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ed8(void)

{
  FUN_0063de60();
  return;
}


/* Unwind@006e1ee0 @ 006e1ee0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ee0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ee8 @ 006e1ee8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ee8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1f60 @ 006e1f60  kind=lib  attributed-by=eh  size=35 */

void Unwind_006e1f60(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xbc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xbc) = *(uint *)(unaff_EBP + -0xbc) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e1f7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -300));
    return;
  }
  return;
}


/* Unwind@006e1f83 @ 006e1f83  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1f83(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1f89. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x174));
  return;
}


/* Unwind@006e1f8f @ 006e1f8f  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e1f8f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e1f95. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x198));
  return;
}


/* Unwind@006e1f9b @ 006e1f9b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e1f9b(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x194));
  return;
}


/* Unwind@006e1fa6 @ 006e1fa6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fa6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fae @ 006e1fae  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fae(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fb6 @ 006e1fb6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fb6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fbe @ 006e1fbe  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fbe(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fc6 @ 006e1fc6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fc6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fce @ 006e1fce  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fce(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fd6 @ 006e1fd6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fd6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fde @ 006e1fde  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fde(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fe6 @ 006e1fe6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fe6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1fee @ 006e1fee  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1fee(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ff6 @ 006e1ff6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ff6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e1ffe @ 006e1ffe  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e1ffe(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e2006 @ 006e2006  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e2006(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e200e @ 006e200e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e200e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e2016 @ 006e2016  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e2016(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e201e @ 006e201e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e201e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e2026 @ 006e2026  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e2026(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e202e @ 006e202e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e202e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e2036 @ 006e2036  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e2036(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e203e @ 006e203e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e203e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e2046 @ 006e2046  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e2046(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e204e @ 006e204e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e204e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e2056 @ 006e2056  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e2056(void)

{
  FUN_00593e50();
  return;
}


