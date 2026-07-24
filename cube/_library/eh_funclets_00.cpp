// eh_funclets_00 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_00.h"

/* Catch_All@0040215e @ 0040215e  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_0040215e(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_00402178;
}


/* Catch_All@00402269 @ 00402269  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00402269(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004022d9 @ 004022d9  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004022d9(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0040249e @ 0040249e  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0040249e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x18));
}


/* Catch_All@00402633 @ 00402633  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00402633(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x18));
}


/* Catch_All@00402aa4 @ 00402aa4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00402aa4(void)

{
  int unaff_EBP;
  
  FUN_00405810(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00402d3b @ 00402d3b  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00402d3b(void)

{
  int unaff_EBP;
  
  FUN_00405810(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0040354c @ 0040354c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0040354c(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00405586 @ 00405586  kind=lib  attributed-by=eh  size=32 */

undefined * Catch_All_00405586(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040bfc0(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  return &DAT_004055a6;
}


/* Catch_All@004055c3 @ 004055c3  kind=lib  attributed-by=eh  size=42 */

void Catch_All_004055c3(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0040e676 @ 0040e676  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_0040e676(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_0040e690;
}


/* Catch_All@0040e8b6 @ 0040e8b6  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_0040e8b6(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_0040e8d0;
}


/* Catch_All@0040f20f @ 0040f20f  kind=lib  attributed-by=eh  size=32 */

undefined * Catch_All_0040f20f(void)

{
  undefined4 uVar1;
  int unaff_EBP;
  
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + 8);
  *(BADSPACEBASE **)(unaff_EBP + -0x10) = register0x00000010;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  uVar1 = FUN_0040f650(*(int *)(unaff_EBP + 8) + 1);
  *(undefined4 *)(unaff_EBP + 8) = uVar1;
  return &DAT_0040f22f;
}


/* Catch_All@0040f24c @ 0040f24c  kind=lib  attributed-by=eh  size=42 */

void Catch_All_0040f24c(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x18);
  if (7 < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 7;
  puVar1[4] = 0;
  *(undefined2 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00424d20 @ 00424d20  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_00424d20(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_00424d3a;
}


/* Catch_All@00424e30 @ 00424e30  kind=lib  attributed-by=eh  size=42 */

void Catch_All_00424e30(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (7 < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 7;
  puVar1[4] = 0;
  *(undefined2 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00428b7d @ 00428b7d  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00428b7d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00428c5c @ 00428c5c  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00428c5c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0042bf63 @ 0042bf63  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042bf63(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0042c04f @ 0042c04f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0042c04f(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004392af @ 004392af  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004392af(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@00439398 @ 00439398  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00439398(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@004492fa @ 004492fa  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_004492fa(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_00449314;
}


/* Catch_All@0044a17d @ 0044a17d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0044a17d(void)

{
  int unaff_EBP;
  
  FUN_0044b7f0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044a39e @ 0044a39e  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0044a39e(void)

{
  int unaff_EBP;
  
  FUN_0044b7f0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044a476 @ 0044a476  kind=lib  attributed-by=eh  size=35 */

void Catch_All_0044a476(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    FUN_0043b5e0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044a79f @ 0044a79f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0044a79f(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044ab90 @ 0044ab90  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0044ab90(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044ad13 @ 0044ad13  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0044ad13(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044aee3 @ 0044aee3  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0044aee3(void)

{
  FUN_0063de60();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0044b9f0 @ 0044b9f0  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0044b9f0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0044baee @ 0044baee  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0044baee(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0044bbec @ 0044bbec  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0044bbec(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0044d77d @ 0044d77d  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0044d77d(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00451360 @ 00451360  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_00451360(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_0045137a;
}


/* Catch_All@00451c57 @ 00451c57  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00451c57(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00451e69 @ 00451e69  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00451e69(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@00451fd2 @ 00451fd2  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00451fd2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@00452171 @ 00452171  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00452171(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@00452247 @ 00452247  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00452247(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@004523ae @ 004523ae  kind=lib  attributed-by=eh  size=42 */

void Catch_All_004523ae(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004525df @ 004525df  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004525df(void)

{
  int unaff_EBP;
  
  FUN_0043c920(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004527d4 @ 004527d4  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004527d4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x18));
}


/* Catch_All@0045299d @ 0045299d  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0045299d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x18));
}


/* Catch_All@004531e7 @ 004531e7  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004531e7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@00453404 @ 00453404  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00453404(void)

{
  int unaff_EBP;
  
  FUN_0046db10(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0045361f @ 0045361f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0045361f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0045386f @ 0045386f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0045386f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0045399a @ 0045399a  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0045399a(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@00453b24 @ 00453b24  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00453b24(void)

{
  int unaff_EBP;
  
  FUN_0046db10(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00453c54 @ 00453c54  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00453c54(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@00453da4 @ 00453da4  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00453da4(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@00453ef7 @ 00453ef7  kind=lib  attributed-by=eh  size=9 */

void Catch_All_00453ef7(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00453fa9 @ 00453fa9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00453fa9(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454079 @ 00454079  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454079(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454149 @ 00454149  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454149(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454219 @ 00454219  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454219(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004542e9 @ 004542e9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004542e9(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eb20(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004543b9 @ 004543b9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004543b9(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454489 @ 00454489  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454489(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454559 @ 00454559  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454559(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454629 @ 00454629  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454629(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004546f9 @ 004546f9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004546f9(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eac0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004547c9 @ 004547c9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004547c9(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454899 @ 00454899  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454899(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454969 @ 00454969  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454969(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454a39 @ 00454a39  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454a39(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00454b09 @ 00454b09  kind=lib  attributed-by=eh  size=40 */

void Catch_All_00454b09(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00456aa6 @ 00456aa6  kind=lib  attributed-by=eh  size=35 */

void Catch_All_00456aa6(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 8) {
    FUN_004578e0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00456b5c @ 00456b5c  kind=lib  attributed-by=eh  size=35 */

void Catch_All_00456b5c(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_00457900(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00456ced @ 00456ced  kind=lib  attributed-by=eh  size=35 */

void Catch_All_00456ced(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    FUN_0043b5e0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00456e4a @ 00456e4a  kind=lib  attributed-by=eh  size=38 */

void Catch_All_00456e4a(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x128) {
    FUN_004578a0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004571be @ 004571be  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004571be(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004572a2 @ 004572a2  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004572a2(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00457392 @ 00457392  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00457392(void)

{
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00458db6 @ 00458db6  kind=lib  attributed-by=eh  size=26 */

void Catch_All_00458db6(void)

{
  int unaff_EBP;
  
  FUN_0043f040(unaff_EBP + 8,*(undefined4 *)**(undefined4 **)(unaff_EBP + -0x18),
               (undefined4 *)**(undefined4 **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00458e6f @ 00458e6f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00458e6f(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00458f0f @ 00458f0f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00458f0f(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00458faf @ 00458faf  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00458faf(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0045904f @ 0045904f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0045904f(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004590ef @ 004590ef  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004590ef(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0045918f @ 0045918f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0045918f(void)

{
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0045922f @ 0045922f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0045922f(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004592cf @ 004592cf  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004592cf(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0045938f @ 0045938f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0045938f(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0045947c @ 0045947c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0045947c(void)

{
  FUN_0063de60();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004681c0 @ 004681c0  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004681c0(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004682fe @ 004682fe  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004682fe(void)

{
  FUN_0046ea70();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00468419 @ 00468419  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00468419(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004685c8 @ 004685c8  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004685c8(void)

{
  FUN_004e5e70();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0046e239 @ 0046e239  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0046e239(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0046e30c @ 0046e30c  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0046e30c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0046e40e @ 0046e40e  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0046e40e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x18));
}


/* Catch_All@0046e50e @ 0046e50e  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0046e50e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0046e5ed @ 0046e5ed  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0046e5ed(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0046e6f1 @ 0046e6f1  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0046e6f1(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00487179 @ 00487179  kind=lib  attributed-by=eh  size=29 */

void Catch_All_00487179(void)

{
  int unaff_EBP;
  int iVar1;
  
  for (iVar1 = *(int *)(unaff_EBP + 8); iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_00486050();
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00487363 @ 00487363  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00487363(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00487470 @ 00487470  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00487470(void)

{
  FUN_0063de60();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004aba0c @ 004aba0c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004aba0c(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004abd8f @ 004abd8f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004abd8f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004abe6c @ 004abe6c  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004abe6c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004abf64 @ 004abf64  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004abf64(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004c691e @ 004c691e  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004c691e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004cb3d8 @ 004cb3d8  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004cb3d8(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004cb583 @ 004cb583  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004cb583(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004ce3d9 @ 004ce3d9  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_004ce3d9(void)

{
  int unaff_EBP;
  
  std::basic_ios<char,std::char_traits<char>_>::setstate
            ((basic_ios<char,std::char_traits<char>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_004ce3f3;
}


/* Catch_All@004d9ac7 @ 004d9ac7  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004d9ac7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004d9c2f @ 004d9c2f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004d9c2f(void)

{
  int unaff_EBP;
  
  FUN_00661940(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004da18f @ 004da18f  kind=lib  attributed-by=eh  size=9 */

void Catch_All_004da18f(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004da2df @ 004da2df  kind=lib  attributed-by=eh  size=9 */

void Catch_All_004da2df(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004dc4cc @ 004dc4cc  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004dc4cc(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004dc569 @ 004dc569  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004dc569(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eac0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004dc639 @ 004dc639  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004dc639(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004dc707 @ 004dc707  kind=lib  attributed-by=eh  size=41 */

void Catch_All_004dc707(void)

{
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      iVar1 = iVar1 + 0x14;
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004dc7d9 @ 004dc7d9  kind=lib  attributed-by=eh  size=44 */

void Catch_All_004dc7d9(void)

{
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      iVar1 = iVar1 + 0x148;
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e0130 @ 004e0130  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004e0130(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004e022d @ 004e022d  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004e022d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004e02e5 @ 004e02e5  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004e02e5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004e03a2 @ 004e03a2  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004e03a2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@004e04df @ 004e04df  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e04df(void)

{
  int unaff_EBP;
  
  FUN_0046dbc0(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e0d98 @ 004e0d98  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e0d98(void)

{
  int unaff_EBP;
  
  FUN_004e34f0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e0fc4 @ 004e0fc4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e0fc4(void)

{
  int unaff_EBP;
  
  FUN_004e3530(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e11b4 @ 004e11b4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e11b4(void)

{
  int unaff_EBP;
  
  FUN_004e3550(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e12a8 @ 004e12a8  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e12a8(void)

{
  int unaff_EBP;
  
  FUN_004e34f0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e1460 @ 004e1460  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e1460(void)

{
  int unaff_EBP;
  
  FUN_004e3530(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e15c4 @ 004e15c4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004e15c4(void)

{
  int unaff_EBP;
  
  FUN_004e3550(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e1669 @ 004e1669  kind=lib  attributed-by=eh  size=40 */

void Catch_All_004e1669(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eb20(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e175d @ 004e175d  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004e175d(void)

{
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e1806 @ 004e1806  kind=lib  attributed-by=eh  size=26 */

void Catch_All_004e1806(void)

{
  int unaff_EBP;
  
  FUN_004777f0(unaff_EBP + 8,*(undefined4 *)**(undefined4 **)(unaff_EBP + -0x18),
               (undefined4 *)**(undefined4 **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e18a6 @ 004e18a6  kind=lib  attributed-by=eh  size=26 */

void Catch_All_004e18a6(void)

{
  int unaff_EBP;
  
  FUN_00661a20(unaff_EBP + 8,*(undefined4 *)**(undefined4 **)(unaff_EBP + -0x18),
               (undefined4 *)**(undefined4 **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004e194f @ 004e194f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_004e194f(void)

{
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004ebb21 @ 004ebb21  kind=lib  attributed-by=eh  size=8 */

void Catch_All_004ebb21(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@004ebf28 @ 004ebf28  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004ebf28(void)

{
  int unaff_EBP;
  
  FUN_00681a20(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@004ec05d @ 004ec05d  kind=lib  attributed-by=eh  size=20 */

void Catch_All_004ec05d(void)

{
  int unaff_EBP;
  
  FUN_00681a20(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00583d5b @ 00583d5b  kind=lib  attributed-by=eh  size=42 */

void Catch_All_00583d5b(void)

{
  undefined4 *puVar1;
  int unaff_EBP;
  
  puVar1 = *(undefined4 **)(unaff_EBP + -0x14);
  if (0xf < (uint)puVar1[5]) {
                    /* WARNING: Subroutine does not return */
    operator_delete((void *)*puVar1);
  }
  puVar1[5] = 0xf;
  puVar1[4] = 0;
  *(undefined1 *)puVar1 = 0;
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058cf4d @ 0058cf4d  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0058cf4d(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058e27f @ 0058e27f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0058e27f(void)

{
  int unaff_EBP;
  
  FUN_00594760(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058e4a4 @ 0058e4a4  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0058e4a4(void)

{
  int unaff_EBP;
  
  FUN_005947a0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058e628 @ 0058e628  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0058e628(void)

{
  int unaff_EBP;
  
  FUN_00594760(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058e7ad @ 0058e7ad  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0058e7ad(void)

{
  int unaff_EBP;
  
  FUN_005947a0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058e8af @ 0058e8af  kind=lib  attributed-by=eh  size=9 */

void Catch_All_0058e8af(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0058e94c @ 0058e94c  kind=lib  attributed-by=eh  size=38 */

void Catch_All_0058e94c(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x188) {
    FUN_0058e990(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005949ae @ 005949ae  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005949ae(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00594ab7 @ 00594ab7  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00594ab7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005a6b48 @ 005a6b48  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005a6b48(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005a6c11 @ 005a6c11  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005a6c11(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005a6d7f @ 005a6d7f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_005a6d7f(void)

{
  int unaff_EBP;
  
  FUN_0042ca20(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005a6e3f @ 005a6e3f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_005a6e3f(void)

{
  int unaff_EBP;
  
  FUN_0042ca20(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005a74cc @ 005a74cc  kind=lib  attributed-by=eh  size=20 */

void Catch_All_005a74cc(void)

{
  int unaff_EBP;
  
  FUN_005a7bd0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005a7691 @ 005a7691  kind=lib  attributed-by=eh  size=20 */

void Catch_All_005a7691(void)

{
  int unaff_EBP;
  
  FUN_005a7bd0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005a7876 @ 005a7876  kind=lib  attributed-by=eh  size=9 */

void Catch_All_005a7876(void)

{
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005a7a1f @ 005a7a1f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_005a7a1f(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005adf30 @ 005adf30  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005adf30(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005aeb2c @ 005aeb2c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_005aeb2c(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005aef74 @ 005aef74  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005aef74(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005af04c @ 005af04c  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005af04c(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005c00e3 @ 005c00e3  kind=lib  attributed-by=eh  size=17 */

void Catch_All_005c00e3(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005c082f @ 005c082f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c082f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@005c0ab5 @ 005c0ab5  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c0ab5(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@005c0c4e @ 005c0c4e  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c0c4e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@005c0dee @ 005c0dee  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c0dee(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@005c3756 @ 005c3756  kind=lib  attributed-by=eh  size=35 */

void Catch_All_005c3756(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0x18) {
    FUN_005ae9f0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@005c4114 @ 005c4114  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c4114(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005c4211 @ 005c4211  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c4211(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005c42ff @ 005c42ff  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005c42ff(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@005fbbed @ 005fbbed  kind=lib  attributed-by=eh  size=8 */

void Catch_All_005fbbed(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00608b12 @ 00608b12  kind=lib  attributed-by=eh  size=8 */

void Catch_All_00608b12(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@00608b8c @ 00608b8c  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00608b8c(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00608d1f @ 00608d1f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00608d1f(void)

{
  int unaff_EBP;
  
  FUN_0042ca80(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00608e37 @ 00608e37  kind=lib  attributed-by=eh  size=41 */

void Catch_All_00608e37(void)

{
  int unaff_EBP;
  int iVar1;
  
  iVar1 = *(int *)(unaff_EBP + -0x14);
  if (iVar1 != *(int *)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      iVar1 = iVar1 + 0x10;
    } while (iVar1 != *(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00608ef6 @ 00608ef6  kind=lib  attributed-by=eh  size=26 */

void Catch_All_00608ef6(void)

{
  int unaff_EBP;
  
  FUN_0067eb10(unaff_EBP + 8,*(undefined4 *)**(undefined4 **)(unaff_EBP + -0x18),
               (undefined4 *)**(undefined4 **)(unaff_EBP + -0x18));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00609189 @ 00609189  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00609189(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@006093dc @ 006093dc  kind=lib  attributed-by=eh  size=8 */

void Catch_All_006093dc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0062f7fe @ 0062f7fe  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0062f7fe(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0062f8a6 @ 0062f8a6  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0062f8a6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Catch_All@0062f98f @ 0062f98f  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0062f98f(void)

{
  int unaff_EBP;
  
  FUN_00630b60(*(undefined4 *)(unaff_EBP + 0xc));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0062ff94 @ 0062ff94  kind=lib  attributed-by=eh  size=20 */

void Catch_All_0062ff94(void)

{
  int unaff_EBP;
  
  FUN_00630a80(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00630207 @ 00630207  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00630207(void)

{
  int unaff_EBP;
  
  FUN_00630a80(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@006302a9 @ 006302a9  kind=lib  attributed-by=eh  size=40 */

void Catch_All_006302a9(void)

{
  int unaff_EBP;
  int *piVar1;
  
  piVar1 = *(int **)(unaff_EBP + -0x14);
  if (piVar1 != *(int **)(unaff_EBP + 0xc)) {
    do {
      FUN_0046eaf0(*(undefined4 *)(*(int *)(unaff_EBP + 8) + 4));
      piVar1 = (int *)*piVar1;
    } while (piVar1 != (int *)*(int *)(unaff_EBP + 0xc));
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063039d @ 0063039d  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063039d(void)

{
  FUN_00632640();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063044f @ 0063044f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063044f(void)

{
  FUN_0046f870();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@00638f84 @ 00638f84  kind=lib  attributed-by=eh  size=20 */

void Catch_All_00638f84(void)

{
  int unaff_EBP;
  
  FUN_005947a0(*(undefined4 *)(unaff_EBP + 0x14));
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063a13f @ 0063a13f  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0063a13f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0063a337 @ 0063a337  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0063a337(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0063a4be @ 0063a4be  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0063a4be(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0063a5ba @ 0063a5ba  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0063a5ba(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x14));
}


/* Catch_All@0063a7e6 @ 0063a7e6  kind=lib  attributed-by=eh  size=35 */

void Catch_All_0063a7e6(void)

{
  int iVar1;
  int unaff_EBP;
  int iVar2;
  
  iVar1 = *(int *)(unaff_EBP + 0x10);
  for (iVar2 = *(int *)(unaff_EBP + -0x14); iVar2 != iVar1; iVar2 = iVar2 + 0xc) {
    FUN_0043b5e0(iVar2);
  }
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063c08f @ 0063c08f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063c08f(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063c13f @ 0063c13f  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063c13f(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063c1ef @ 0063c1ef  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063c1ef(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063d153 @ 0063d153  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063d153(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063d279 @ 0063d279  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063d279(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063d3ea @ 0063d3ea  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063d3ea(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063d509 @ 0063d509  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063d509(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063d6d3 @ 0063d6d3  kind=lib  attributed-by=eh  size=17 */

void Catch_All_0063d6d3(void)

{
  FUN_0063de60();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0063db73 @ 0063db73  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0063db73(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@0063dc70 @ 0063dc70  kind=lib  attributed-by=eh  size=8 */

void Catch_All_0063dc70(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x14));
}


/* Catch_All@00642a01 @ 00642a01  kind=lib  attributed-by=eh  size=17 */

void Catch_All_00642a01(void)

{
  FUN_005fb860();
                    /* WARNING: Subroutine does not return */
  _CxxThrowException((void *)0x0,(ThrowInfo *)0x0);
}


/* Catch_All@0064b251 @ 0064b251  kind=lib  attributed-by=eh  size=26 */

undefined * Catch_All_0064b251(void)

{
  int unaff_EBP;
  
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(**(int **)(unaff_EBP + 8) + 4) + (int)*(int **)(unaff_EBP + 8)),4,true);
  return &DAT_0064b26b;
}


