// eh_funclets_32 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_32.h"

/* Unwind@006f6548 @ 006f6548  kind=lib  attributed-by=eh  size=35 */

void Unwind_006f6548(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0xcc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0xcc) = *(uint *)(unaff_EBP + -0xcc) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006f6564. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x138));
    return;
  }
  return;
}


/* Unwind@006f656b @ 006f656b  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f656b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006f6571. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x180));
  return;
}


/* Unwind@006f6577 @ 006f6577  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f6577(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006f657d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x1a4));
  return;
}


/* Unwind@006f6583 @ 006f6583  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6583(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x1a0));
  return;
}


/* Unwind@006f658e @ 006f658e  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f658e(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0xec));
}


/* Unwind@006f65d0 @ 006f65d0  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f65d0(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x6c));
}


/* Unwind@006f65db @ 006f65db  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f65db(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6610 @ 006f6610  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6610(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x10));
}


/* Unwind@006f6640 @ 006f6640  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6640(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6648 @ 006f6648  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6648(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6650 @ 006f6650  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6650(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6658 @ 006f6658  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6658(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6690 @ 006f6690  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6690(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6698 @ 006f6698  kind=lib  attributed-by=eh  size=35 */

void Unwind_006f6698(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c4) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1c4) = *(uint *)(unaff_EBP + -0x1c4) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006f66b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<char,std::char_traits<char>_>::~basic_ios<char,std::char_traits<char>_>
              ((basic_ios<char,std::char_traits<char>_> *)(unaff_EBP + -0x264));
    return;
  }
  return;
}


/* Unwind@006f66bb @ 006f66bb  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f66bb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006f66c1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_istream<char,std::char_traits<char>_>::~basic_istream<char,std::char_traits<char>_>
            ((basic_istream<char,std::char_traits<char>_> *)(unaff_EBP + -700));
  return;
}


/* Unwind@006f66c7 @ 006f66c7  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f66c7(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006f66cd. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<char,std::char_traits<char>_>::~basic_streambuf<char,std::char_traits<char>_>
            (*(basic_streambuf<char,std::char_traits<char>_> **)(unaff_EBP + -0x1b0));
  return;
}


/* Unwind@006f66d3 @ 006f66d3  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f66d3(void)

{
  FUN_004043f0();
  return;
}


/* Unwind@006f66de @ 006f66de  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f66de(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f66e9 @ 006f66e9  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f66e9(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f66f4 @ 006f66f4  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f66f4(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f66fc @ 006f66fc  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f66fc(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x1b0));
}


/* Unwind@006f670a @ 006f670a  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f670a(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6712 @ 006f6712  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6712(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f671d @ 006f671d  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f671d(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6725 @ 006f6725  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6725(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6730 @ 006f6730  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6730(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f673b @ 006f673b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f673b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6743 @ 006f6743  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f6743(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x1b0));
}


/* Unwind@006f6751 @ 006f6751  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6751(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f675c @ 006f675c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f675c(void)

{
  FUN_0063de60();
  return;
}


/* Unwind@006f6767 @ 006f6767  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6767(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f676f @ 006f676f  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f676f(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x1b0));
}


/* Unwind@006f677d @ 006f677d  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f677d(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6785 @ 006f6785  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6785(void)

{
  FUN_0063de60();
  return;
}


/* Unwind@006f6790 @ 006f6790  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6790(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f679b @ 006f679b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f679b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f67d0 @ 006f67d0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f67d0(void)

{
  FUN_004043f0();
  return;
}


/* Unwind@006f67db @ 006f67db  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f67db(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f67e3 @ 006f67e3  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f67e3(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f67eb @ 006f67eb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f67eb(void)

{
  FUN_0064de80();
  return;
}


/* Unwind@006f6820 @ 006f6820  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6820(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6828 @ 006f6828  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6828(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6830 @ 006f6830  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6830(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6860 @ 006f6860  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6860(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6868 @ 006f6868  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6868(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 8));
}


/* Unwind@006f68a0 @ 006f68a0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f68a0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f68ab @ 006f68ab  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f68ab(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x58));
}


/* Unwind@006f68b6 @ 006f68b6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f68b6(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f68be @ 006f68be  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f68be(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f68c6 @ 006f68c6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f68c6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6900 @ 006f6900  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6900(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6908 @ 006f6908  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6908(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 8));
}


/* Unwind@006f6940 @ 006f6940  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6940(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f694b @ 006f694b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f694b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6956 @ 006f6956  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f6956(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x94));
}


/* Unwind@006f6964 @ 006f6964  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6964(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f696c @ 006f696c  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f696c(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6974 @ 006f6974  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6974(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f697c @ 006f697c  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f697c(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f69b0 @ 006f69b0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f69b0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f69b8 @ 006f69b8  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f69b8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f69c3 @ 006f69c3  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f69c3(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f69cb @ 006f69cb  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f69cb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6a00 @ 006f6a00  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a00(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6a0b @ 006f6a0b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a0b(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6a16 @ 006f6a16  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a16(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6a21 @ 006f6a21  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a21(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6a2c @ 006f6a2c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a2c(void)

{
  FUN_0043c380();
  return;
}


/* Unwind@006f6a37 @ 006f6a37  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a37(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6a42 @ 006f6a42  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a42(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6a4d @ 006f6a4d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a4d(void)

{
  FUN_00681820();
  return;
}


/* Unwind@006f6a58 @ 006f6a58  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a58(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f6a63 @ 006f6a63  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6a63(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6a6b @ 006f6a6b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6a6b(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6a73 @ 006f6a73  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a73(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f6a7e @ 006f6a7e  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a7e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6a89 @ 006f6a89  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a89(void)

{
  FUN_0064dd90();
  return;
}


/* Unwind@006f6a94 @ 006f6a94  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6a94(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6a9c @ 006f6a9c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6a9c(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f6aa7 @ 006f6aa7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6aa7(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6ab2 @ 006f6ab2  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ab2(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f6abd @ 006f6abd  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6abd(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6ac8 @ 006f6ac8  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ac8(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f6ad3 @ 006f6ad3  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ad3(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6ade @ 006f6ade  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ade(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f6ae9 @ 006f6ae9  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ae9(void)

{
  FUN_00681820();
  return;
}


/* Unwind@006f6af4 @ 006f6af4  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6af4(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6aff @ 006f6aff  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6aff(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6b0a @ 006f6b0a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6b0a(void)

{
  FUN_0064dd90();
  return;
}


/* Unwind@006f6b15 @ 006f6b15  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6b15(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6b20 @ 006f6b20  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6b20(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6b50 @ 006f6b50  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6b50(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6b58 @ 006f6b58  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6b58(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6b60 @ 006f6b60  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6b60(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x78));
}


/* Unwind@006f6b6b @ 006f6b6b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6b6b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6b73 @ 006f6b73  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6b73(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6b7b @ 006f6b7b  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6b7b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x7c));
}


/* Unwind@006f6b86 @ 006f6b86  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6b86(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6bc0 @ 006f6bc0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6bc0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6bc8 @ 006f6bc8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6bc8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6bd0 @ 006f6bd0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6bd0(void)

{
  FUN_004043f0();
  return;
}


/* Unwind@006f6bdb @ 006f6bdb  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6bdb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6be3 @ 006f6be3  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6be3(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6beb @ 006f6beb  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6beb(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x78));
}


/* Unwind@006f6bf6 @ 006f6bf6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6bf6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6bfe @ 006f6bfe  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6bfe(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f6c30 @ 006f6c30  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6c30(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6c3b @ 006f6c3b  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6c3b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x54));
}


/* Unwind@006f6c46 @ 006f6c46  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6c46(void)

{
  FUN_0063de60();
  return;
}


/* Unwind@006f6c4e @ 006f6c4e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6c4e(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6c56 @ 006f6c56  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6c56(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6c5e @ 006f6c5e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6c5e(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f6c90 @ 006f6c90  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6c90(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6c9b @ 006f6c9b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6c9b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6ca3 @ 006f6ca3  kind=lib  attributed-by=eh  size=12 */

void Unwind_006f6ca3(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x84));
}


/* Unwind@006f6cb1 @ 006f6cb1  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6cb1(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6cb9 @ 006f6cb9  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6cb9(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6cf0 @ 006f6cf0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6cf0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6cf8 @ 006f6cf8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6cf8(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f6d00 @ 006f6d00  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6d00(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6d30 @ 006f6d30  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6d30(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6d3b @ 006f6d3b  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f6d3b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x58));
}


/* Unwind@006f6d46 @ 006f6d46  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6d46(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6d4e @ 006f6d4e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6d4e(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6d80 @ 006f6d80  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6d80(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f6d8b @ 006f6d8b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6d8b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6d93 @ 006f6d93  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6d93(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6dd0 @ 006f6dd0  kind=lib  attributed-by=eh  size=17 */

void Unwind_006f6dd0(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006f6e40 @ 006f6e40  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6e40(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6e4b @ 006f6e4b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6e4b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6e56 @ 006f6e56  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6e56(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6e61 @ 006f6e61  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6e61(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6e6c @ 006f6e6c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6e6c(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6e77 @ 006f6e77  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6e77(void)

{
  FUN_0065aab0();
  return;
}


/* Unwind@006f6ea0 @ 006f6ea0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ea0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6eab @ 006f6eab  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6eab(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6eb6 @ 006f6eb6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6eb6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6ec1 @ 006f6ec1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ec1(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6ecc @ 006f6ecc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ecc(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6ed7 @ 006f6ed7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6ed7(void)

{
  FUN_0065aab0();
  return;
}


/* Unwind@006f6ee2 @ 006f6ee2  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f6ee2(void)

{
  FUN_0043c3e0();
  return;
}


/* Unwind@006f6f10 @ 006f6f10  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6f10(void)

{
  FUN_0065aae0();
  return;
}


/* Unwind@006f6f40 @ 006f6f40  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6f40(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f6f48 @ 006f6f48  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6f48(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f6f50 @ 006f6f50  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6f50(void)

{
  FUN_0065aa90();
  return;
}


/* Unwind@006f6f58 @ 006f6f58  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6f58(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f6f80 @ 006f6f80  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6f80(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6fb0 @ 006f6fb0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f6fb0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f6fbb @ 006f6fbb  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6fbb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f6fc3 @ 006f6fc3  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f6fc3(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7000 @ 006f7000  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7000(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7030 @ 006f7030  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f7030(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f703b @ 006f703b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f703b(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7043 @ 006f7043  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f7043(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7080 @ 006f7080  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7080(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f70b0 @ 006f70b0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f70b0(void)

{
  FUN_004043f0();
  return;
}


/* Unwind@006f70bb @ 006f70bb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f70bb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f70c6 @ 006f70c6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f70c6(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f70ce @ 006f70ce  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f70ce(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7100 @ 006f7100  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7100(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f7108 @ 006f7108  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7108(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f7110 @ 006f7110  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7110(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f7140 @ 006f7140  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f7140(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0xc));
}


/* Unwind@006f714b @ 006f714b  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f714b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + 0x10));
}


/* Unwind@006f7180 @ 006f7180  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7180(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f7188 @ 006f7188  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f7188(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x48));
}


/* Unwind@006f7193 @ 006f7193  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7193(void)

{
  FUN_0065aae0();
  return;
}


/* Unwind@006f719b @ 006f719b  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f719b(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x3c));
}


/* Unwind@006f71a6 @ 006f71a6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f71a6(void)

{
  FUN_0065aae0();
  return;
}


/* Unwind@006f71d0 @ 006f71d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f71d0(void)

{
  int unaff_EBP;
  
  plasma::Object::~Object(*(Object **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@006f71d8 @ 006f71d8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f71d8(void)

{
  FUN_00627670();
  return;
}


/* Unwind@006f71e0 @ 006f71e0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f71e0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f7230 @ 006f7230  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f7230(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006f723b @ 006f723b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f723b(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006f7270 @ 006f7270  kind=lib  attributed-by=eh  size=9 */

void Unwind_006f7270(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x10));
}


/* Unwind@006f72a0 @ 006f72a0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f72a0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f72d0 @ 006f72d0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f72d0(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f7300 @ 006f7300  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7300(void)

{
  FUN_004da480();
  return;
}


/* Unwind@006f7330 @ 006f7330  kind=lib  attributed-by=eh  size=17 */

void Unwind_006f7330(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006f7360 @ 006f7360  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7360(void)

{
  int unaff_EBP;
  
  plasma::Attribute::~Attribute(*(Attribute **)(unaff_EBP + -0x10));
  return;
}


/* Unwind@006f7368 @ 006f7368  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f7368(void)

{
  FUN_004e5e70();
  return;
}


/* Unwind@006f7390 @ 006f7390  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7390(void)

{
  int unaff_EBP;
  
  plasma::Shape::~Shape(*(Shape **)(unaff_EBP + -0x5c));
  return;
}


/* Unwind@006f7398 @ 006f7398  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7398(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f73a0 @ 006f73a0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f73a0(void)

{
  FUN_00663510();
  return;
}


/* Unwind@006f73ab @ 006f73ab  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f73ab(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f73b3 @ 006f73b3  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f73b3(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f73c1 @ 006f73c1  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f73c1(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f73c9 @ 006f73c9  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f73c9(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f73d7 @ 006f73d7  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f73d7(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006f73df @ 006f73df  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f73df(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f73ed @ 006f73ed  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f73ed(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7420 @ 006f7420  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7420(void)

{
  int unaff_EBP;
  
  plasma::Shape::~Shape(*(Shape **)(unaff_EBP + -0x14));
  return;
}


/* Unwind@006f7428 @ 006f7428  kind=lib  attributed-by=eh  size=11 */

void Unwind_006f7428(void)

{
  FUN_00663510();
  return;
}


/* Unwind@006f7433 @ 006f7433  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f7433(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f7441 @ 006f7441  kind=lib  attributed-by=eh  size=14 */

void Unwind_006f7441(void)

{
  FUN_0064d810();
  return;
}


/* Unwind@006f7470 @ 006f7470  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7470(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f7478 @ 006f7478  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f7478(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f74b0 @ 006f74b0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f74b0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f74b8 @ 006f74b8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006f74b8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006f74f0 @ 006f74f0  kind=lib  attributed-by=eh  size=25 */

void Unwind_006f74f0(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x44) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x44) = *(uint *)(unaff_EBP + -0x44) & 0xfffffffe;
    FUN_00593e50();
    return;
  }
  return;
}


