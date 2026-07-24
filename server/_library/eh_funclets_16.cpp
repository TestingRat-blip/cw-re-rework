// eh_funclets_16 (_library) -- server. 188 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_16.h"

/* Unwind@00555a6e @ 00555a6e  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555a6e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x134));
  return;
}


/* Unwind@00555a7c @ 00555a7c  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555a7c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x134));
  return;
}


/* Unwind@00555ac0 @ 00555ac0  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ac0(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0xc0));
  return;
}


/* Unwind@00555acb @ 00555acb  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555acb(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0xb8));
  return;
}


/* Unwind@00555ad6 @ 00555ad6  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ad6(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0xa4));
  return;
}


/* Unwind@00555ae1 @ 00555ae1  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555ae1(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x80));
  return;
}


/* Unwind@00555b20 @ 00555b20  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555b20(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x300));
  return;
}


/* Unwind@00555b2e @ 00555b2e  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555b2e(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -700));
  return;
}


/* Unwind@00555b39 @ 00555b39  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555b39(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2b0));
  return;
}


/* Unwind@00555b44 @ 00555b44  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555b44(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x290));
  return;
}


/* Unwind@00555b4f @ 00555b4f  kind=lib  attributed-by=eh  size=35 */

void Unwind_00555b4f(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x270) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x270) = *(uint *)(unaff_EBP + -0x270) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00555b6b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0xf8));
    return;
  }
  return;
}


/* Unwind@00555b72 @ 00555b72  kind=lib  attributed-by=eh  size=12 */

void Unwind_00555b72(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00555b78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0x140));
  return;
}


/* Unwind@00555b7e @ 00555b7e  kind=lib  attributed-by=eh  size=12 */

void Unwind_00555b7e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00555b84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0x314));
  return;
}


/* Unwind@00555b8a @ 00555b8a  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555b8a(void)

{
  int unaff_EBP;
  
  FUN_004ce3e0((void *)(unaff_EBP + -0x160));
  return;
}


/* Unwind@00555b95 @ 00555b95  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555b95(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x248));
  return;
}


/* Unwind@00555ba0 @ 00555ba0  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555ba0(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x44));
  return;
}


/* Unwind@00555ba8 @ 00555ba8  kind=lib  attributed-by=eh  size=35 */

void Unwind_00555ba8(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x270) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x270) = *(uint *)(unaff_EBP + -0x270) & 0xfffffffd;
                    /* WARNING: Could not recover jumptable at 0x00555bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x1a8));
    return;
  }
  return;
}


/* Unwind@00555bcb @ 00555bcb  kind=lib  attributed-by=eh  size=12 */

void Unwind_00555bcb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00555bd1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0x1f0));
  return;
}


/* Unwind@00555bd7 @ 00555bd7  kind=lib  attributed-by=eh  size=12 */

void Unwind_00555bd7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00555bdd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0x318));
  return;
}


/* Unwind@00555be3 @ 00555be3  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555be3(void)

{
  int unaff_EBP;
  
  FUN_004ce3e0((void *)(unaff_EBP + -0x210));
  return;
}


/* Unwind@00555bee @ 00555bee  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555bee(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -600));
  return;
}


/* Unwind@00555bf9 @ 00555bf9  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555bf9(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x2c));
  return;
}


/* Unwind@00555c30 @ 00555c30  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c30(void)

{
  int unaff_EBP;
  
  FUN_004f7740((undefined4 *)(unaff_EBP + -0x42c));
  return;
}


/* Unwind@00555c3b @ 00555c3b  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c3b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x41c));
  return;
}


/* Unwind@00555c46 @ 00555c46  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c46(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x468));
  return;
}


/* Unwind@00555c51 @ 00555c51  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c51(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x498));
  return;
}


/* Unwind@00555c5c @ 00555c5c  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c5c(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x4b0));
  return;
}


/* Unwind@00555c67 @ 00555c67  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c67(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x510));
  return;
}


/* Unwind@00555c72 @ 00555c72  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c72(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x528));
  return;
}


/* Unwind@00555c7d @ 00555c7d  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c7d(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x558));
  return;
}


/* Unwind@00555c88 @ 00555c88  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c88(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x570));
  return;
}


/* Unwind@00555c93 @ 00555c93  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c93(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x540));
  return;
}


/* Unwind@00555c9e @ 00555c9e  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555c9e(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x4f8));
  return;
}


/* Unwind@00555ca9 @ 00555ca9  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ca9(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x790));
  return;
}


/* Unwind@00555cb4 @ 00555cb4  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555cb4(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x4e0));
  return;
}


/* Unwind@00555cbf @ 00555cbf  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555cbf(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x4c8));
  return;
}


/* Unwind@00555cca @ 00555cca  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555cca(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x454));
  return;
}


/* Unwind@00555cd5 @ 00555cd5  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555cd5(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x240);
  return;
}


/* Unwind@00555ce0 @ 00555ce0  kind=lib  attributed-by=eh  size=23 */

void Unwind_00555ce0(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00555cf7 @ 00555cf7  kind=lib  attributed-by=eh  size=23 */

void Unwind_00555cf7(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00555d0e @ 00555d0e  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555d0e(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x3c8);
  return;
}


/* Unwind@00555d19 @ 00555d19  kind=lib  attributed-by=eh  size=23 */

void Unwind_00555d19(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00555d30 @ 00555d30  kind=lib  attributed-by=eh  size=23 */

void Unwind_00555d30(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00555d47 @ 00555d47  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d47(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555d55 @ 00555d55  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d55(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555d63 @ 00555d63  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d63(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555d71 @ 00555d71  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d71(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555d7f @ 00555d7f  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d7f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555d8d @ 00555d8d  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d8d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555d9b @ 00555d9b  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555d9b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555da9 @ 00555da9  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555da9(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555db7 @ 00555db7  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555db7(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555dc5 @ 00555dc5  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555dc5(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555dd3 @ 00555dd3  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555dd3(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555de1 @ 00555de1  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555de1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555def @ 00555def  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555def(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x40c));
  return;
}


/* Unwind@00555e30 @ 00555e30  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555e30(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x13ac));
  return;
}


/* Unwind@00555e3e @ 00555e3e  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e3e(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x13c4));
  return;
}


/* Unwind@00555e49 @ 00555e49  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e49(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x1378));
  return;
}


/* Unwind@00555e54 @ 00555e54  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e54(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x13a8));
  return;
}


/* Unwind@00555e5f @ 00555e5f  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e5f(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x6f8);
  return;
}


/* Unwind@00555e6a @ 00555e6a  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e6a(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x984);
  return;
}


/* Unwind@00555e75 @ 00555e75  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e75(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x1444));
  return;
}


/* Unwind@00555e80 @ 00555e80  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e80(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x140c));
  return;
}


/* Unwind@00555e8b @ 00555e8b  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e8b(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1044);
  return;
}


/* Unwind@00555e96 @ 00555e96  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555e96(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(unaff_EBP + -0x144c));
  return;
}


/* Unwind@00555ea1 @ 00555ea1  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ea1(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(unaff_EBP + -0x1454));
  return;
}


/* Unwind@00555eac @ 00555eac  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555eac(void)

{
  int unaff_EBP;
  
  FUN_004ce3e0((void *)(unaff_EBP + -0x182c));
  return;
}


/* Unwind@00555eb7 @ 00555eb7  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555eb7(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x1574));
  return;
}


/* Unwind@00555ec2 @ 00555ec2  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ec2(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x7c4));
  return;
}


/* Unwind@00555f00 @ 00555f00  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f00(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@00555f0b @ 00555f0b  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f0b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@00555f16 @ 00555f16  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f16(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@00555f40 @ 00555f40  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f40(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x48c);
  return;
}


/* Unwind@00555f4b @ 00555f4b  kind=lib  attributed-by=eh  size=23 */

void Unwind_00555f4b(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00555f62 @ 00555f62  kind=lib  attributed-by=eh  size=23 */

void Unwind_00555f62(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00555f79 @ 00555f79  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f79(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555f84 @ 00555f84  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f84(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555f8f @ 00555f8f  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f8f(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x614);
  return;
}


/* Unwind@00555f9a @ 00555f9a  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555f9a(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555fa5 @ 00555fa5  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fa5(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555fb0 @ 00555fb0  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fb0(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x614);
  return;
}


/* Unwind@00555fbb @ 00555fbb  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fbb(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555fc6 @ 00555fc6  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fc6(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555fd1 @ 00555fd1  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fd1(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555fdc @ 00555fdc  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fdc(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555fe7 @ 00555fe7  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555fe7(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555ff2 @ 00555ff2  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ff2(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00555ffd @ 00555ffd  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555ffd(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00556008 @ 00556008  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556008(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@00556013 @ 00556013  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556013(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x304);
  return;
}


/* Unwind@0055601e @ 0055601e  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055601e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x6bc));
  return;
}


/* Unwind@0055602c @ 0055602c  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055602c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x6bc));
  return;
}


/* Unwind@0055603a @ 0055603a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055603a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x6bc));
  return;
}


/* Unwind@00556048 @ 00556048  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556048(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x6bc));
  return;
}


/* Unwind@00556080 @ 00556080  kind=lib  attributed-by=eh  size=17 */

void Unwind_00556080(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00556091 @ 00556091  kind=lib  attributed-by=eh  size=8 */

void Unwind_00556091(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@00556099 @ 00556099  kind=lib  attributed-by=eh  size=17 */

void Unwind_00556099(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@005560aa @ 005560aa  kind=lib  attributed-by=eh  size=8 */

void Unwind_005560aa(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@005560d0 @ 005560d0  kind=lib  attributed-by=eh  size=11 */

void Unwind_005560d0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x134));
  return;
}


/* Unwind@00556110 @ 00556110  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556110(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x8c));
  return;
}


/* Unwind@00556140 @ 00556140  kind=lib  attributed-by=eh  size=8 */

void Unwind_00556140(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x38));
  return;
}


/* Unwind@00556170 @ 00556170  kind=lib  attributed-by=eh  size=8 */

void Unwind_00556170(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x18));
  return;
}


/* Unwind@005561a0 @ 005561a0  kind=lib  attributed-by=eh  size=11 */

void Unwind_005561a0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x134));
  return;
}


/* Unwind@005561e0 @ 005561e0  kind=lib  attributed-by=eh  size=11 */

void Unwind_005561e0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x134));
  return;
}


/* Unwind@005562a0 @ 005562a0  kind=lib  attributed-by=eh  size=8 */

void Unwind_005562a0(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + -0x18));
  return;
}


/* Unwind@005562d0 @ 005562d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_005562d0(void)

{
  int unaff_EBP;
  
  FUN_00423700(*(undefined4 **)(unaff_EBP + 8));
  return;
}


/* Unwind@00556340 @ 00556340  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556340(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2cb4));
  return;
}


/* Unwind@0055634b @ 0055634b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055634b(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x3fc));
  return;
}


/* Unwind@00556356 @ 00556356  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556356(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2bd4));
  return;
}


/* Unwind@00556361 @ 00556361  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556361(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(unaff_EBP + -0x2bf0));
  return;
}


/* Unwind@0055636c @ 0055636c  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055636c(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(unaff_EBP + -0x2be8));
  return;
}


/* Unwind@00556377 @ 00556377  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556377(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(unaff_EBP + -0x2cd4));
  return;
}


/* Unwind@00556382 @ 00556382  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556382(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2bf8));
  return;
}


/* Unwind@0055638d @ 0055638d  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055638d(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2bc4));
  return;
}


/* Unwind@00556398 @ 00556398  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556398(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2bcc));
  return;
}


/* Unwind@005563a6 @ 005563a6  kind=lib  attributed-by=eh  size=11 */

void Unwind_005563a6(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2c48));
  return;
}


/* Unwind@005563b1 @ 005563b1  kind=lib  attributed-by=eh  size=14 */

void Unwind_005563b1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b44));
  return;
}


/* Unwind@005563bf @ 005563bf  kind=lib  attributed-by=eh  size=14 */

void Unwind_005563bf(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b44));
  return;
}


/* Unwind@005563cd @ 005563cd  kind=lib  attributed-by=eh  size=14 */

void Unwind_005563cd(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b44));
  return;
}


/* Unwind@005563db @ 005563db  kind=lib  attributed-by=eh  size=14 */

void Unwind_005563db(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b44));
  return;
}


/* Unwind@005563e9 @ 005563e9  kind=lib  attributed-by=eh  size=14 */

void Unwind_005563e9(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b44));
  return;
}


/* Unwind@005563f7 @ 005563f7  kind=lib  attributed-by=eh  size=14 */

void Unwind_005563f7(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b44));
  return;
}


/* Unwind@00556405 @ 00556405  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556405(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@00556413 @ 00556413  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556413(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2bf8));
  return;
}


/* Unwind@0055641e @ 0055641e  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055641e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@0055642c @ 0055642c  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055642c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@0055643a @ 0055643a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055643a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@00556448 @ 00556448  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556448(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@00556456 @ 00556456  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556456(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@00556464 @ 00556464  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556464(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2cdc));
  return;
}


/* Unwind@0055646f @ 0055646f  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055646f(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2ccc));
  return;
}


/* Unwind@0055647a @ 0055647a  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055647a(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2bf8));
  return;
}


/* Unwind@00556485 @ 00556485  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556485(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2c20));
  return;
}


/* Unwind@00556490 @ 00556490  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556490(void)

{
  int unaff_EBP;
  
  FUN_00423770(unaff_EBP + -0xe88);
  return;
}


/* Unwind@0055649b @ 0055649b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055649b(void)

{
  int unaff_EBP;
  
  FUN_00423770(unaff_EBP + -0xe50);
  return;
}


/* Unwind@005564d0 @ 005564d0  kind=lib  attributed-by=eh  size=11 */

void Unwind_005564d0(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x10) + 4));
  return;
}


/* Unwind@005564db @ 005564db  kind=lib  attributed-by=eh  size=11 */

void Unwind_005564db(void)

{
  int unaff_EBP;
  
  FUN_00548db0((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}


/* Unwind@005564e6 @ 005564e6  kind=lib  attributed-by=eh  size=11 */

void Unwind_005564e6(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x18));
  return;
}


/* Unwind@005564f1 @ 005564f1  kind=lib  attributed-by=eh  size=11 */

void Unwind_005564f1(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


/* Unwind@005564fc @ 005564fc  kind=lib  attributed-by=eh  size=11 */

void Unwind_005564fc(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


/* Unwind@00556507 @ 00556507  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556507(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


/* Unwind@00556512 @ 00556512  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556512(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


/* Unwind@0055651d @ 0055651d  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055651d(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


/* Unwind@00556528 @ 00556528  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556528(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x68));
  return;
}


/* Unwind@00556533 @ 00556533  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556533(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x88));
  return;
}


/* Unwind@00556541 @ 00556541  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556541(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x94));
  return;
}


/* Unwind@0055654f @ 0055654f  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055654f(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@0055655a @ 0055655a  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055655a(void)

{
  int unaff_EBP;
  
  operator_delete__(*(void **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@00556580 @ 00556580  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556580(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(*(int *)(unaff_EBP + -0x18) + 4));
  return;
}


/* Unwind@0055658b @ 0055658b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055658b(void)

{
  int unaff_EBP;
  
  FUN_00548db0((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0xc));
  return;
}


/* Unwind@00556596 @ 00556596  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556596(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x18));
  return;
}


/* Unwind@005565a1 @ 005565a1  kind=lib  attributed-by=eh  size=11 */

void Unwind_005565a1(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x24));
  return;
}


/* Unwind@005565ac @ 005565ac  kind=lib  attributed-by=eh  size=11 */

void Unwind_005565ac(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x30));
  return;
}


/* Unwind@005565b7 @ 005565b7  kind=lib  attributed-by=eh  size=11 */

void Unwind_005565b7(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x3c));
  return;
}


/* Unwind@005565c2 @ 005565c2  kind=lib  attributed-by=eh  size=11 */

void Unwind_005565c2(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x48));
  return;
}


/* Unwind@005565cd @ 005565cd  kind=lib  attributed-by=eh  size=11 */

void Unwind_005565cd(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x54));
  return;
}


/* Unwind@005565d8 @ 005565d8  kind=lib  attributed-by=eh  size=11 */

void Unwind_005565d8(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x68));
  return;
}


/* Unwind@005565e3 @ 005565e3  kind=lib  attributed-by=eh  size=14 */

void Unwind_005565e3(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x88));
  return;
}


/* Unwind@005565f1 @ 005565f1  kind=lib  attributed-by=eh  size=14 */

void Unwind_005565f1(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x18) + 0x94));
  return;
}


/* Unwind@00556620 @ 00556620  kind=lib  attributed-by=eh  size=8 */

void Unwind_00556620(void)

{
  int unaff_EBP;
  
  FUN_00412980((int *)(unaff_EBP + -0x1c));
  return;
}


/* Unwind@00556628 @ 00556628  kind=lib  attributed-by=eh  size=8 */

void Unwind_00556628(void)

{
  int unaff_EBP;
  
  FUN_00412980((int *)(unaff_EBP + -0x1c));
  return;
}


/* Unwind@00556650 @ 00556650  kind=lib  attributed-by=eh  size=29 */

void Unwind_00556650(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00556666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 0x70));
    return;
  }
  return;
}


/* Unwind@0055666d @ 0055666d  kind=lib  attributed-by=eh  size=12 */

void Unwind_0055666d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00556673. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 0x18));
  return;
}


/* Unwind@00556679 @ 00556679  kind=lib  attributed-by=eh  size=9 */

void Unwind_00556679(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0055667c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + 0x14));
  return;
}


/* Unwind@00556682 @ 00556682  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556682(void)

{
  int unaff_EBP;
  
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}


/* Unwind@005566b0 @ 005566b0  kind=lib  attributed-by=eh  size=29 */

void Unwind_005566b0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x005566c6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 0x60));
    return;
  }
  return;
}


/* Unwind@005566cd @ 005566cd  kind=lib  attributed-by=eh  size=12 */

void Unwind_005566cd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x005566d3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_ostream<char,std::char_traits<char>_>::~basic_ostream<char,std::char_traits<char>_>
            ((basic_ostream<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 8));
  return;
}


/* Unwind@005566d9 @ 005566d9  kind=lib  attributed-by=eh  size=9 */

void Unwind_005566d9(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x005566dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + 0x14));
  return;
}


/* Unwind@005566e2 @ 005566e2  kind=lib  attributed-by=eh  size=11 */

void Unwind_005566e2(void)

{
  int unaff_EBP;
  
  std::basic_filebuf<char,std::char_traits<char>_>::~basic_filebuf<char,std::char_traits<char>_>
            ((basic_filebuf<char,std::char_traits<char>_> *)(*(int *)(unaff_EBP + -0x14) + 4));
  return;
}


/* Unwind@00556710 @ 00556710  kind=lib  attributed-by=eh  size=8 */

void Unwind_00556710(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x54));
  return;
}


/* Unwind@00556740 @ 00556740  kind=lib  attributed-by=eh  size=14 */

void Unwind_00556740(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1f0));
  return;
}


/* Unwind@0055674e @ 0055674e  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055674e(void)

{
  int unaff_EBP;
  
  FUN_0042ee10(unaff_EBP + -0x380);
  return;
}


/* Unwind@00556759 @ 00556759  kind=lib  attributed-by=eh  size=11 */

void Unwind_00556759(void)

{
  int unaff_EBP;
  
  FUN_0042ee40(unaff_EBP + -0x428);
  return;
}


/* Unwind@00556764 @ 00556764  kind=lib  attributed-by=eh  size=35 */

void Unwind_00556764(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1f0) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1f0) = *(uint *)(unaff_EBP + -0x1f0) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00556780. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x260));
    return;
  }
  return;
}


/* Unwind@00556787 @ 00556787  kind=lib  attributed-by=eh  size=12 */

void Unwind_00556787(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x0055678d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0x2a8));
  return;
}


/* Unwind@00556793 @ 00556793  kind=lib  attributed-by=eh  size=12 */

void Unwind_00556793(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00556799. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0x494));
  return;
}


/* Unwind@0055679f @ 0055679f  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055679f(void)

{
  int unaff_EBP;
  
  FUN_004ce3e0((void *)(unaff_EBP + -0x2c8));
  return;
}


/* Unwind@005567aa @ 005567aa  kind=lib  attributed-by=eh  size=8 */

void Unwind_005567aa(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x50));
  return;
}


/* Unwind@005567b2 @ 005567b2  kind=lib  attributed-by=eh  size=8 */

void Unwind_005567b2(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@005567ba @ 005567ba  kind=lib  attributed-by=eh  size=14 */

void Unwind_005567ba(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1f0));
  return;
}


/* Unwind@005567c8 @ 005567c8  kind=lib  attributed-by=eh  size=11 */

void Unwind_005567c8(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x1ec));
  return;
}


/* Unwind@005567d3 @ 005567d3  kind=lib  attributed-by=eh  size=8 */

void Unwind_005567d3(void)

{
  int unaff_EBP;
  
  FUN_00413560((int *)(unaff_EBP + -0x50));
  return;
}


/* Unwind@005567db @ 005567db  kind=lib  attributed-by=eh  size=8 */

void Unwind_005567db(void)

{
  int unaff_EBP;
  
  FUN_00413590((int *)(unaff_EBP + -0x50));
  return;
}


/* Unwind@005567e3 @ 005567e3  kind=lib  attributed-by=eh  size=8 */

void Unwind_005567e3(void)

{
  int unaff_EBP;
  
  FUN_00413560((int *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@005567eb @ 005567eb  kind=lib  attributed-by=eh  size=8 */

void Unwind_005567eb(void)

{
  int unaff_EBP;
  
  FUN_00413590((int *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@005567f3 @ 005567f3  kind=lib  attributed-by=eh  size=11 */

void Unwind_005567f3(void)

{
  int unaff_EBP;
  
  FUN_004239f0((int *)(unaff_EBP + -1000));
  return;
}


/* Unwind@005567fe @ 005567fe  kind=lib  attributed-by=eh  size=11 */

void Unwind_005567fe(void)

{
  int unaff_EBP;
  
  FUN_004239f0((int *)(unaff_EBP + -0x490));
  return;
}


