// eh_funclets_15 (_library) -- server. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_15.h"

/* Unwind@00554b7d @ 00554b7d  kind=lib  attributed-by=eh  size=12 */

void Unwind_00554b7d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00554b83. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0xcc));
  return;
}


/* Unwind@00554b89 @ 00554b89  kind=lib  attributed-by=eh  size=12 */

void Unwind_00554b89(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00554b8f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0xf0));
  return;
}


/* Unwind@00554b95 @ 00554b95  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554b95(void)

{
  int unaff_EBP;
  
  FUN_004ce3e0((void *)(unaff_EBP + -0xec));
  return;
}


/* Unwind@00554ba0 @ 00554ba0  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554ba0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x38));
  return;
}


/* Unwind@00554ba8 @ 00554ba8  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554ba8(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@00554be0 @ 00554be0  kind=lib  attributed-by=eh  size=29 */

void Unwind_00554be0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x30) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x30) = *(uint *)(unaff_EBP + -0x30) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x00554bf6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x90));
    return;
  }
  return;
}


/* Unwind@00554bfd @ 00554bfd  kind=lib  attributed-by=eh  size=12 */

void Unwind_00554bfd(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00554c03. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<char,std::char_traits<char>_>::~basic_iostream<char,std::char_traits<char>_>
            ((basic_iostream<char,std::char_traits<char>_> *)(unaff_EBP + -0xd8));
  return;
}


/* Unwind@00554c09 @ 00554c09  kind=lib  attributed-by=eh  size=12 */

void Unwind_00554c09(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x00554c0f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0xfc));
  return;
}


/* Unwind@00554c15 @ 00554c15  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554c15(void)

{
  int unaff_EBP;
  
  FUN_004ce3e0((void *)(unaff_EBP + -0xf8));
  return;
}


/* Unwind@00554c20 @ 00554c20  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554c20(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@00554c28 @ 00554c28  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554c28(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x40));
  return;
}


/* Unwind@00554c30 @ 00554c30  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554c30(void)

{
  int unaff_EBP;
  
  FUN_004013a0((undefined4 *)(unaff_EBP + -0x28));
  return;
}


/* Unwind@00554c60 @ 00554c60  kind=lib  attributed-by=eh  size=17 */

void Unwind_00554c60(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00554c90 @ 00554c90  kind=lib  attributed-by=eh  size=17 */

void Unwind_00554c90(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00554da0 @ 00554da0  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554da0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00554dd0 @ 00554dd0  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554dd0(void)

{
  int unaff_EBP;
  
  FUN_004072a0((undefined4 *)(unaff_EBP + -0x370));
  return;
}


/* Unwind@00554ddb @ 00554ddb  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554ddb(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x394));
  return;
}


/* Unwind@00554de6 @ 00554de6  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554de6(void)

{
  int unaff_EBP;
  
  FUN_004072a0((undefined4 *)(unaff_EBP + -0x380));
  return;
}


/* Unwind@00554df1 @ 00554df1  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554df1(void)

{
  int unaff_EBP;
  
  FUN_004072a0((undefined4 *)(unaff_EBP + -0x38c));
  return;
}


/* Unwind@00554dfc @ 00554dfc  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554dfc(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x35c));
  return;
}


/* Unwind@00554e07 @ 00554e07  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554e07(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x32c));
  return;
}


/* Unwind@00554e40 @ 00554e40  kind=lib  attributed-by=eh  size=8 */

void Unwind_00554e40(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x24));
  return;
}


/* Unwind@00554e70 @ 00554e70  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554e70(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x350);
  return;
}


/* Unwind@00554e7b @ 00554e7b  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554e7b(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1c8);
  return;
}


/* Unwind@00554e86 @ 00554e86  kind=lib  attributed-by=eh  size=23 */

void Unwind_00554e86(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00554e9d @ 00554e9d  kind=lib  attributed-by=eh  size=23 */

void Unwind_00554e9d(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@00554f20 @ 00554f20  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554f20(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x24));
  return;
}


/* Unwind@00554f2b @ 00554f2b  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554f2b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x30));
  return;
}


/* Unwind@00554f36 @ 00554f36  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554f36(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x3c));
  return;
}


/* Unwind@00554f41 @ 00554f41  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554f41(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x48));
  return;
}


/* Unwind@00554f4c @ 00554f4c  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554f4c(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x54));
  return;
}


/* Unwind@00554fe0 @ 00554fe0  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554fe0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d70));
  return;
}


/* Unwind@00554feb @ 00554feb  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554feb(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d28));
  return;
}


/* Unwind@00554ff6 @ 00554ff6  kind=lib  attributed-by=eh  size=11 */

void Unwind_00554ff6(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d1c));
  return;
}


/* Unwind@00555001 @ 00555001  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555001(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5db4));
  return;
}


/* Unwind@0055500c @ 0055500c  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055500c(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d80));
  return;
}


/* Unwind@00555017 @ 00555017  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555017(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d64));
  return;
}


/* Unwind@00555022 @ 00555022  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555022(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x8b0);
  return;
}


/* Unwind@0055502d @ 0055502d  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055502d(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1a40);
  return;
}


/* Unwind@00555038 @ 00555038  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555038(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1730);
  return;
}


/* Unwind@00555043 @ 00555043  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555043(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x18b8);
  return;
}


/* Unwind@0055504e @ 0055504e  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055504e(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4008);
  return;
}


/* Unwind@00555059 @ 00555059  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555059(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x5888);
  return;
}


/* Unwind@00555064 @ 00555064  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555064(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4318);
  return;
}


/* Unwind@0055506f @ 0055506f  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055506f(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4f58);
  return;
}


/* Unwind@0055507a @ 0055507a  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055507a(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x36d8);
  return;
}


/* Unwind@00555085 @ 00555085  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555085(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4628);
  return;
}


/* Unwind@00555090 @ 00555090  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555090(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x5578);
  return;
}


/* Unwind@0055509b @ 0055509b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055509b(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4938);
  return;
}


/* Unwind@005550a6 @ 005550a6  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550a6(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x3860);
  return;
}


/* Unwind@005550b1 @ 005550b1  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550b1(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x3b70);
  return;
}


/* Unwind@005550bc @ 005550bc  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550bc(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -16000);
  return;
}


/* Unwind@005550c7 @ 005550c7  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550c7(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4190);
  return;
}


/* Unwind@005550d2 @ 005550d2  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550d2(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x44a0);
  return;
}


/* Unwind@005550dd @ 005550dd  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550dd(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x47b0);
  return;
}


/* Unwind@005550e8 @ 005550e8  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550e8(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4ac0);
  return;
}


/* Unwind@005550f3 @ 005550f3  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550f3(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4dd0);
  return;
}


/* Unwind@005550fe @ 005550fe  kind=lib  attributed-by=eh  size=11 */

void Unwind_005550fe(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x50e0);
  return;
}


/* Unwind@00555109 @ 00555109  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555109(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x27c8);
  return;
}


/* Unwind@00555114 @ 00555114  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555114(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2640);
  return;
}


/* Unwind@0055511f @ 0055511f  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055511f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5cdc));
  return;
}


/* Unwind@0055512d @ 0055512d  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055512d(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d58));
  return;
}


/* Unwind@00555138 @ 00555138  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555138(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2c60);
  return;
}


/* Unwind@00555143 @ 00555143  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555143(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2950);
  return;
}


/* Unwind@0055514e @ 0055514e  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055514e(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2ad8);
  return;
}


/* Unwind@00555159 @ 00555159  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555159(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2f70);
  return;
}


/* Unwind@00555164 @ 00555164  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555164(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x3280);
  return;
}


/* Unwind@0055516f @ 0055516f  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055516f(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2de8);
  return;
}


/* Unwind@0055517a @ 0055517a  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055517a(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x30f8);
  return;
}


/* Unwind@00555185 @ 00555185  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555185(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1e98);
  return;
}


/* Unwind@00555190 @ 00555190  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555190(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0xbc0);
  return;
}


/* Unwind@0055519b @ 0055519b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055519b(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1d10);
  return;
}


/* Unwind@005551a6 @ 005551a6  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551a6(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0xd48);
  return;
}


/* Unwind@005551b1 @ 005551b1  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551b1(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0xa38);
  return;
}


/* Unwind@005551bc @ 005551bc  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551bc(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x53f0);
  return;
}


/* Unwind@005551c7 @ 005551c7  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551c7(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x5700);
  return;
}


/* Unwind@005551d2 @ 005551d2  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551d2(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x5a10);
  return;
}


/* Unwind@005551dd @ 005551dd  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551dd(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x39e8);
  return;
}


/* Unwind@005551e8 @ 005551e8  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551e8(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x3550);
  return;
}


/* Unwind@005551f3 @ 005551f3  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551f3(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x3cf8);
  return;
}


/* Unwind@005551fe @ 005551fe  kind=lib  attributed-by=eh  size=11 */

void Unwind_005551fe(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x5268);
  return;
}


/* Unwind@00555209 @ 00555209  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555209(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x4c48);
  return;
}


/* Unwind@00555214 @ 00555214  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555214(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -100));
  return;
}


/* Unwind@0055521c @ 0055521c  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055521c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055522a @ 0055522a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055522a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555238 @ 00555238  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555238(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555246 @ 00555246  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555246(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x21a8);
  return;
}


/* Unwind@00555251 @ 00555251  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555251(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x24b8);
  return;
}


/* Unwind@0055525c @ 0055525c  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055525c(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2020);
  return;
}


/* Unwind@00555267 @ 00555267  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555267(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x2330);
  return;
}


/* Unwind@00555272 @ 00555272  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555272(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d58));
  return;
}


/* Unwind@0055527d @ 0055527d  kind=lib  attributed-by=eh  size=8 */

void Unwind_0055527d(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x4c));
  return;
}


/* Unwind@00555285 @ 00555285  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555285(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x40));
  return;
}


/* Unwind@0055528d @ 0055528d  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055528d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055529b @ 0055529b  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055529b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552a9 @ 005552a9  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552a9(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552b7 @ 005552b7  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552b7(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552c5 @ 005552c5  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552c5(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552d3 @ 005552d3  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552d3(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552e1 @ 005552e1  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552e1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552ef @ 005552ef  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552ef(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005552fd @ 005552fd  kind=lib  attributed-by=eh  size=14 */

void Unwind_005552fd(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055530b @ 0055530b  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055530b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555319 @ 00555319  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555319(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555327 @ 00555327  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555327(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555335 @ 00555335  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555335(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555343 @ 00555343  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555343(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555351 @ 00555351  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555351(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055535f @ 0055535f  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055535f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055536d @ 0055536d  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055536d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055537b @ 0055537b  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055537b(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555389 @ 00555389  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555389(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555397 @ 00555397  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555397(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005553a5 @ 005553a5  kind=lib  attributed-by=eh  size=14 */

void Unwind_005553a5(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005553b3 @ 005553b3  kind=lib  attributed-by=eh  size=14 */

void Unwind_005553b3(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005553c1 @ 005553c1  kind=lib  attributed-by=eh  size=14 */

void Unwind_005553c1(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005553cf @ 005553cf  kind=lib  attributed-by=eh  size=14 */

void Unwind_005553cf(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005553dd @ 005553dd  kind=lib  attributed-by=eh  size=14 */

void Unwind_005553dd(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005553eb @ 005553eb  kind=lib  attributed-by=eh  size=11 */

void Unwind_005553eb(void)

{
  int unaff_EBP;
  
  FUN_004f7740((undefined4 *)(unaff_EBP + -0x5d34));
  return;
}


/* Unwind@005553f6 @ 005553f6  kind=lib  attributed-by=eh  size=11 */

void Unwind_005553f6(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x5d10));
  return;
}


/* Unwind@00555401 @ 00555401  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555401(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555409 @ 00555409  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555409(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555411 @ 00555411  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555411(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555419 @ 00555419  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555419(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555421 @ 00555421  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555421(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555429 @ 00555429  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555429(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555431 @ 00555431  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555431(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555439 @ 00555439  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555439(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555441 @ 00555441  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555441(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555449 @ 00555449  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555449(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x34));
  return;
}


/* Unwind@00555451 @ 00555451  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555451(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055545f @ 0055545f  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055545f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055546d @ 0055546d  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055546d(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055547b @ 0055547b  kind=lib  attributed-by=eh  size=8 */

void Unwind_0055547b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x40));
  return;
}


/* Unwind@00555483 @ 00555483  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555483(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555491 @ 00555491  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555491(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@0055549f @ 0055549f  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055549f(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005554ad @ 005554ad  kind=lib  attributed-by=eh  size=14 */

void Unwind_005554ad(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005554bb @ 005554bb  kind=lib  attributed-by=eh  size=14 */

void Unwind_005554bb(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@005554c9 @ 005554c9  kind=lib  attributed-by=eh  size=14 */

void Unwind_005554c9(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x5c48));
  return;
}


/* Unwind@00555500 @ 00555500  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555500(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x198);
  return;
}


/* Unwind@005555e0 @ 005555e0  kind=lib  attributed-by=eh  size=17 */

void Unwind_005555e0(void)

{
  FUN_0046b250();
  return;
}


/* Unwind@005555f1 @ 005555f1  kind=lib  attributed-by=eh  size=8 */

void Unwind_005555f1(void)

{
  int unaff_EBP;
  
  FUN_0042f440(*(undefined4 **)(unaff_EBP + 0xc));
  return;
}


/* Unwind@00555620 @ 00555620  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555620(void)

{
  int unaff_EBP;
  
  FUN_004f7710((undefined4 *)(*(int *)(unaff_EBP + -0x10) + 0x15a1c));
  return;
}


/* Unwind@005556d0 @ 005556d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_005556d0(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x18));
  return;
}


/* Unwind@00555700 @ 00555700  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555700(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x138));
  return;
}


/* Unwind@00555740 @ 00555740  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555740(void)

{
  int unaff_EBP;
  
  FUN_004f7740((undefined4 *)(unaff_EBP + -0x2bf4));
  return;
}


/* Unwind@0055574b @ 0055574b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055574b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x2be8));
  return;
}


/* Unwind@00555756 @ 00555756  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555756(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x37c));
  return;
}


/* Unwind@00555761 @ 00555761  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555761(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x37c));
  return;
}


/* Unwind@0055576c @ 0055576c  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055576c(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x37c));
  return;
}


/* Unwind@00555777 @ 00555777  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555777(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x37c));
  return;
}


/* Unwind@00555782 @ 00555782  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555782(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x37c));
  return;
}


/* Unwind@0055578d @ 0055578d  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055578d(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x37c));
  return;
}


/* Unwind@00555798 @ 00555798  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555798(void)

{
  int unaff_EBP;
  
  FUN_004f77a0((undefined4 *)(unaff_EBP + -0x2c20));
  return;
}


/* Unwind@005557a3 @ 005557a3  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557a3(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x2b7c));
  return;
}


/* Unwind@005557ae @ 005557ae  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557ae(void)

{
  int unaff_EBP;
  
  cube::Dungeon::~Dungeon((Dungeon *)(unaff_EBP + -0x2bcc));
  return;
}


/* Unwind@005557b9 @ 005557b9  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557b9(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x33c));
  return;
}


/* Unwind@005557c4 @ 005557c4  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557c4(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x23f4);
  return;
}


/* Unwind@005557cf @ 005557cf  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557cf(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x19c4);
  return;
}


/* Unwind@005557da @ 005557da  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557da(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1cd4);
  return;
}


/* Unwind@005557e5 @ 005557e5  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557e5(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1b4c);
  return;
}


/* Unwind@005557f0 @ 005557f0  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557f0(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x183c);
  return;
}


/* Unwind@005557fb @ 005557fb  kind=lib  attributed-by=eh  size=11 */

void Unwind_005557fb(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x16b4);
  return;
}


/* Unwind@00555806 @ 00555806  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555806(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x226c);
  return;
}


/* Unwind@00555811 @ 00555811  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555811(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x1f5c);
  return;
}


/* Unwind@0055581c @ 0055581c  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055581c(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x20e4);
  return;
}


/* Unwind@00555827 @ 00555827  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555827(void)

{
  int unaff_EBP;
  
  FUN_004cd8f0(unaff_EBP + -0x257c);
  return;
}


/* Unwind@00555832 @ 00555832  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555832(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b28));
  return;
}


/* Unwind@00555840 @ 00555840  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555840(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@0055584e @ 0055584e  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055584e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@0055585c @ 0055585c  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055585c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@0055586a @ 0055586a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055586a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@00555878 @ 00555878  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555878(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@00555886 @ 00555886  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555886(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@00555894 @ 00555894  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555894(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b24));
  return;
}


/* Unwind@005558a2 @ 005558a2  kind=lib  attributed-by=eh  size=14 */

void Unwind_005558a2(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b2c));
  return;
}


/* Unwind@005558b0 @ 005558b0  kind=lib  attributed-by=eh  size=14 */

void Unwind_005558b0(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@005558be @ 005558be  kind=lib  attributed-by=eh  size=14 */

void Unwind_005558be(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b30));
  return;
}


/* Unwind@005558cc @ 005558cc  kind=lib  attributed-by=eh  size=14 */

void Unwind_005558cc(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b2c));
  return;
}


/* Unwind@005558da @ 005558da  kind=lib  attributed-by=eh  size=14 */

void Unwind_005558da(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b20));
  return;
}


/* Unwind@005558e8 @ 005558e8  kind=lib  attributed-by=eh  size=14 */

void Unwind_005558e8(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x2b20));
  return;
}


/* Unwind@00555920 @ 00555920  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555920(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0x1e0));
  return;
}


/* Unwind@0055592b @ 0055592b  kind=lib  attributed-by=eh  size=11 */

void Unwind_0055592b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x198));
  return;
}


/* Unwind@00555936 @ 00555936  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555936(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c4));
  return;
}


/* Unwind@00555944 @ 00555944  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555944(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c4));
  return;
}


/* Unwind@00555952 @ 00555952  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555952(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c4));
  return;
}


/* Unwind@00555960 @ 00555960  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555960(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c4));
  return;
}


/* Unwind@0055596e @ 0055596e  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055596e(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c4));
  return;
}


/* Unwind@0055597c @ 0055597c  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055597c(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c0));
  return;
}


/* Unwind@0055598a @ 0055598a  kind=lib  attributed-by=eh  size=14 */

void Unwind_0055598a(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c0));
  return;
}


/* Unwind@00555998 @ 00555998  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555998(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c0));
  return;
}


/* Unwind@005559a6 @ 005559a6  kind=lib  attributed-by=eh  size=14 */

void Unwind_005559a6(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c0));
  return;
}


/* Unwind@005559b4 @ 005559b4  kind=lib  attributed-by=eh  size=14 */

void Unwind_005559b4(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c0));
  return;
}


/* Unwind@005559c2 @ 005559c2  kind=lib  attributed-by=eh  size=14 */

void Unwind_005559c2(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x1c0));
  return;
}


/* Unwind@00555a00 @ 00555a00  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555a00(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -200));
  return;
}


/* Unwind@00555a0b @ 00555a0b  kind=lib  attributed-by=eh  size=8 */

void Unwind_00555a0b(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0x6c));
  return;
}


/* Unwind@00555a13 @ 00555a13  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555a13(void)

{
  int unaff_EBP;
  
  FUN_00423710((int *)(unaff_EBP + -0xc0));
  return;
}


/* Unwind@00555a1e @ 00555a1e  kind=lib  attributed-by=eh  size=11 */

void Unwind_00555a1e(void)

{
  int unaff_EBP;
  
  FUN_0042f440((undefined4 *)(unaff_EBP + -0xb0));
  return;
}


/* Unwind@00555a60 @ 00555a60  kind=lib  attributed-by=eh  size=14 */

void Unwind_00555a60(void)

{
  int unaff_EBP;
  
  operator_delete(*(void **)(unaff_EBP + -0x134));
  return;
}


