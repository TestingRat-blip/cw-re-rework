// eh_funclets_12 (_library) -- cube. 200 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "eh_funclets_12.h"

/* Unwind@006e96ea @ 006e96ea  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e96ea(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e96f8 @ 006e96f8  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e96f8(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9706 @ 006e9706  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e9706(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9714 @ 006e9714  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e9714(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9722 @ 006e9722  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e9722(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e9730 @ 006e9730  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e9730(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e973e @ 006e973e  kind=lib  attributed-by=eh  size=14 */

void Unwind_006e973e(void)

{
  FUN_004e29a0();
  return;
}


/* Unwind@006e974c @ 006e974c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e974c(void)

{
  thunk_FUN_004d77d0();
  return;
}


/* Unwind@006e9757 @ 006e9757  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9757(void)

{
  int unaff_EBP;
  
  cube::Database::Database((Database *)(unaff_EBP + -400));
  return;
}


/* Unwind@006e9762 @ 006e9762  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9762(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e976a @ 006e976a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e976a(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e9775 @ 006e9775  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9775(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006e977d @ 006e977d  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e977d(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9785 @ 006e9785  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9785(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e978d @ 006e978d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e978d(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9798 @ 006e9798  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9798(void)

{
  FUN_00467ab0();
  return;
}


/* Unwind@006e97a3 @ 006e97a3  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e97a3(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e97ab @ 006e97ab  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e97ab(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e97b3 @ 006e97b3  kind=lib  attributed-by=eh  size=35 */

void Unwind_006e97b3(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x17c) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x17c) = *(uint *)(unaff_EBP + -0x17c) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e97cf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x21c));
    return;
  }
  return;
}


/* Unwind@006e97d6 @ 006e97d6  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e97d6(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e97dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x264));
  return;
}


/* Unwind@006e97e2 @ 006e97e2  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e97e2(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e97e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x154));
  return;
}


/* Unwind@006e97ee @ 006e97ee  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e97ee(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x284));
  return;
}


/* Unwind@006e97f9 @ 006e97f9  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e97f9(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9801 @ 006e9801  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e9801(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x154));
}


/* Unwind@006e980f @ 006e980f  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e980f(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9817 @ 006e9817  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9817(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9822 @ 006e9822  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e9822(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0x154));
}


/* Unwind@006e9830 @ 006e9830  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9830(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9870 @ 006e9870  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9870(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e98a0 @ 006e98a0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98a0(void)

{
  FUN_004e29d0();
  return;
}


/* Unwind@006e98ab @ 006e98ab  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98ab(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e98b6 @ 006e98b6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98b6(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e98c1 @ 006e98c1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98c1(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e98cc @ 006e98cc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98cc(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e98d7 @ 006e98d7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98d7(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e98e2 @ 006e98e2  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98e2(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e98ed @ 006e98ed  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98ed(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e98f8 @ 006e98f8  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e98f8(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e9903 @ 006e9903  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9903(void)

{
  FUN_004e29a0();
  return;
}


/* Unwind@006e9930 @ 006e9930  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9930(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9938 @ 006e9938  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9938(void)

{
  FUN_004e2a70();
  return;
}


/* Unwind@006e9970 @ 006e9970  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9970(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9978 @ 006e9978  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9978(void)

{
  FUN_00467ab0();
  return;
}


/* Unwind@006e9980 @ 006e9980  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9980(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9988 @ 006e9988  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9988(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9990 @ 006e9990  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9990(void)

{
  FUN_004e2a00();
  return;
}


/* Unwind@006e99c0 @ 006e99c0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e99c0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e99c8 @ 006e99c8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e99c8(void)

{
  FUN_00466b40();
  return;
}


/* Unwind@006e9a00 @ 006e9a00  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9a00(void)

{
  int unaff_EBP;
  
  cube::QuestText::~QuestText((QuestText *)(unaff_EBP + -0x50));
  return;
}


/* Unwind@006e9a08 @ 006e9a08  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9a08(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9a10 @ 006e9a10  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9a10(void)

{
  FUN_004e2aa0();
  return;
}


/* Unwind@006e9a18 @ 006e9a18  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9a18(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9a50 @ 006e9a50  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9a50(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9a80 @ 006e9a80  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9a80(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9ab0 @ 006e9ab0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9ab0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9ae0 @ 006e9ae0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9ae0(void)

{
  FUN_00467b40();
  return;
}


/* Unwind@006e9b20 @ 006e9b20  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b20(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e9b28 @ 006e9b28  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b28(void)

{
  FUN_00466b10();
  return;
}


/* Unwind@006e9b30 @ 006e9b30  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b30(void)

{
  FUN_00467b40();
  return;
}


/* Unwind@006e9b60 @ 006e9b60  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b60(void)

{
  FUN_00467af0();
  return;
}


/* Unwind@006e9b68 @ 006e9b68  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b68(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9b70 @ 006e9b70  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b70(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9b78 @ 006e9b78  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b78(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e9b80 @ 006e9b80  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b80(void)

{
  FUN_00467af0();
  return;
}


/* Unwind@006e9b88 @ 006e9b88  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b88(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9b90 @ 006e9b90  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b90(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9b98 @ 006e9b98  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9b98(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9ba0 @ 006e9ba0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9ba0(void)

{
  FUN_00661540();
  return;
}


/* Unwind@006e9ba8 @ 006e9ba8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9ba8(void)

{
  FUN_00467af0();
  return;
}


/* Unwind@006e9bb0 @ 006e9bb0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9bb0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9bb8 @ 006e9bb8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9bb8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9bc0 @ 006e9bc0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9bc0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9bcb @ 006e9bcb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9bcb(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9bd6 @ 006e9bd6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9bd6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9bde @ 006e9bde  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9bde(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9be6 @ 006e9be6  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9be6(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9bee @ 006e9bee  kind=lib  attributed-by=eh  size=35 */

void Unwind_006e9bee(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1bc) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x1bc) = *(uint *)(unaff_EBP + -0x1bc) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e9c0a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x20c));
    return;
  }
  return;
}


/* Unwind@006e9c11 @ 006e9c11  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e9c11(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e9c17. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x254));
  return;
}


/* Unwind@006e9c1d @ 006e9c1d  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e9c1d(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e9c23. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x278));
  return;
}


/* Unwind@006e9c29 @ 006e9c29  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9c29(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x274));
  return;
}


/* Unwind@006e9c34 @ 006e9c34  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9c34(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9c70 @ 006e9c70  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9c70(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9c78 @ 006e9c78  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9c78(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9c80 @ 006e9c80  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9c80(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9c88 @ 006e9c88  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9c88(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9cc0 @ 006e9cc0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9cc0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9cc8 @ 006e9cc8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9cc8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9cd0 @ 006e9cd0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9cd0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9cd8 @ 006e9cd8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9cd8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9d10 @ 006e9d10  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9d10(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9d18 @ 006e9d18  kind=lib  attributed-by=eh  size=29 */

void Unwind_006e9d18(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x54) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x54) = *(uint *)(unaff_EBP + -0x54) & 0xfffffffe;
                    /* WARNING: Could not recover jumptable at 0x006e9d2e. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::
    ~basic_ios<wchar_t,std::char_traits<wchar_t>_>
              ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0xc0));
    return;
  }
  return;
}


/* Unwind@006e9d35 @ 006e9d35  kind=lib  attributed-by=eh  size=12 */

void Unwind_006e9d35(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e9d3b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_iostream<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_iostream<wchar_t,std::char_traits<wchar_t>_>
            ((basic_iostream<wchar_t,std::char_traits<wchar_t>_> *)(unaff_EBP + -0x108));
  return;
}


/* Unwind@006e9d41 @ 006e9d41  kind=lib  attributed-by=eh  size=9 */

void Unwind_006e9d41(void)

{
  int unaff_EBP;
  
                    /* WARNING: Could not recover jumptable at 0x006e9d44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  std::basic_streambuf<wchar_t,std::char_traits<wchar_t>_>::
  ~basic_streambuf<wchar_t,std::char_traits<wchar_t>_>
            (*(basic_streambuf<wchar_t,std::char_traits<wchar_t>_> **)(unaff_EBP + -0x74));
  return;
}


/* Unwind@006e9d4a @ 006e9d4a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9d4a(void)

{
  int unaff_EBP;
  
  std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
            ((basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *)
             (unaff_EBP + -0x128));
  return;
}


/* Unwind@006e9d55 @ 006e9d55  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9d55(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9d5d @ 006e9d5d  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9d5d(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9d65 @ 006e9d65  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9d65(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9da0 @ 006e9da0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9da0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9da8 @ 006e9da8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9da8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9db0 @ 006e9db0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9db0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9db8 @ 006e9db8  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9db8(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9dc0 @ 006e9dc0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9dc0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9df0 @ 006e9df0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9df0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9dfb @ 006e9dfb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9dfb(void)

{
  int unaff_EBP;
  
  plasma::Widget::~Widget(*(Widget **)(unaff_EBP + -0x8c));
  return;
}


/* Unwind@006e9e06 @ 006e9e06  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e9e06(void)

{
  thunk_FUN_0046ea70();
  return;
}


/* Unwind@006e9e17 @ 006e9e17  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e9e17(void)

{
  FUN_004e5e70();
  return;
}


/* Unwind@006e9e28 @ 006e9e28  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e9e28(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9e70 @ 006e9e70  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9e70(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9ea0 @ 006e9ea0  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9ea0(void)

{
  FUN_00593e50();
  return;
}


/* Unwind@006e9ed0 @ 006e9ed0  kind=lib  attributed-by=eh  size=22 */

void Unwind_006e9ed0(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 4),0xc,3,FUN_005fb860);
  return;
}


/* Unwind@006e9f10 @ 006e9f10  kind=lib  attributed-by=eh  size=22 */

void Unwind_006e9f10(void)

{
  int unaff_EBP;
  
  _eh_vector_destructor_iterator_((void *)(*(int *)(unaff_EBP + -0x10) + 4),0xc,3,FUN_005fb860);
  return;
}


/* Unwind@006e9f26 @ 006e9f26  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9f26(void)

{
  FUN_004e6af0();
  return;
}


/* Unwind@006e9f50 @ 006e9f50  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9f50(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e9f58 @ 006e9f58  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9f58(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e9f60 @ 006e9f60  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9f60(void)

{
  FUN_004043f0();
  return;
}


/* Unwind@006e9f6b @ 006e9f6b  kind=lib  attributed-by=eh  size=8 */

void Unwind_006e9f6b(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e9fa0 @ 006e9fa0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9fa0(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e9fab @ 006e9fab  kind=lib  attributed-by=eh  size=11 */

void Unwind_006e9fab(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006e9fe0 @ 006e9fe0  kind=lib  attributed-by=eh  size=17 */

void Unwind_006e9fe0(void)

{
  cube::Controller::vfunction12();
  return;
}


/* Unwind@006ea050 @ 006ea050  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea050(void)

{
  FUN_005fb860();
  return;
}


/* Unwind@006ea080 @ 006ea080  kind=lib  attributed-by=eh  size=12 */

void Unwind_006ea080(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0xf02c));
}


/* Unwind@006ea08e @ 006ea08e  kind=lib  attributed-by=eh  size=8 */

void Unwind_006ea08e(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea096 @ 006ea096  kind=lib  attributed-by=eh  size=12 */

void Unwind_006ea096(void)

{
  int unaff_EBP;
  
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(unaff_EBP + -0xf02c));
}


/* Unwind@006ea0a4 @ 006ea0a4  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0a4(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0af @ 006ea0af  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0af(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0ba @ 006ea0ba  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0ba(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0c5 @ 006ea0c5  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0c5(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0d0 @ 006ea0d0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0d0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0db @ 006ea0db  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0db(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0e6 @ 006ea0e6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0e6(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0f1 @ 006ea0f1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0f1(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea0fc @ 006ea0fc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea0fc(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea107 @ 006ea107  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea107(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea112 @ 006ea112  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea112(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea11d @ 006ea11d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea11d(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea128 @ 006ea128  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea128(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea133 @ 006ea133  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea133(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea13e @ 006ea13e  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea13e(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea149 @ 006ea149  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea149(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea154 @ 006ea154  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea154(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea15f @ 006ea15f  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea15f(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea16a @ 006ea16a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea16a(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea175 @ 006ea175  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea175(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea180 @ 006ea180  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea180(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea18b @ 006ea18b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea18b(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea196 @ 006ea196  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea196(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1a1 @ 006ea1a1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1a1(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1ac @ 006ea1ac  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1ac(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1b7 @ 006ea1b7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1b7(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1c2 @ 006ea1c2  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1c2(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1cd @ 006ea1cd  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1cd(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1d8 @ 006ea1d8  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1d8(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1e3 @ 006ea1e3  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1e3(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1ee @ 006ea1ee  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1ee(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea1f9 @ 006ea1f9  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea1f9(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea204 @ 006ea204  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea204(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea20f @ 006ea20f  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea20f(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea21a @ 006ea21a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea21a(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea225 @ 006ea225  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea225(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea230 @ 006ea230  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea230(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea23b @ 006ea23b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea23b(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea246 @ 006ea246  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea246(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea251 @ 006ea251  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea251(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea25c @ 006ea25c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea25c(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea267 @ 006ea267  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea267(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea272 @ 006ea272  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea272(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea27d @ 006ea27d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea27d(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea288 @ 006ea288  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea288(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea293 @ 006ea293  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea293(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea29e @ 006ea29e  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea29e(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2a9 @ 006ea2a9  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2a9(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2b4 @ 006ea2b4  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2b4(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2bf @ 006ea2bf  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2bf(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2ca @ 006ea2ca  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2ca(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2d5 @ 006ea2d5  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2d5(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2e0 @ 006ea2e0  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2e0(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2eb @ 006ea2eb  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2eb(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea2f6 @ 006ea2f6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea2f6(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea301 @ 006ea301  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea301(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea30c @ 006ea30c  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea30c(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea317 @ 006ea317  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea317(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea322 @ 006ea322  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea322(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea32d @ 006ea32d  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea32d(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea338 @ 006ea338  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea338(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea343 @ 006ea343  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea343(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea34e @ 006ea34e  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea34e(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea359 @ 006ea359  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea359(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea364 @ 006ea364  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea364(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea36f @ 006ea36f  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea36f(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea37a @ 006ea37a  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea37a(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea385 @ 006ea385  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea385(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea390 @ 006ea390  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea390(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea39b @ 006ea39b  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea39b(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3a6 @ 006ea3a6  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3a6(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3b1 @ 006ea3b1  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3b1(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3bc @ 006ea3bc  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3bc(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3c7 @ 006ea3c7  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3c7(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3d2 @ 006ea3d2  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3d2(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3dd @ 006ea3dd  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3dd(void)

{
  FUN_00403eb0();
  return;
}


/* Unwind@006ea3e8 @ 006ea3e8  kind=lib  attributed-by=eh  size=11 */

void Unwind_006ea3e8(void)

{
  FUN_00403eb0();
  return;
}


