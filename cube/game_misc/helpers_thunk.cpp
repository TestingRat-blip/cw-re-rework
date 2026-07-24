// helpers_thunk (game_misc) -- cube. 84 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "helpers_thunk.h"

/* fwd_0040da70_405100 @ 00405100  kind=gamemisc  attributed-by=role:thunk  size=18 */

undefined4 FUN_00405100(undefined4 param_1,undefined4 param_2)

{
  FUN_0040da70(param_2);
  return 0;
}


/* fwd_0040da70_4051b0 @ 004051b0  kind=gamemisc  attributed-by=role:thunk  size=33 */

undefined4 FUN_004051b0(undefined4 param_1,int param_2)

{
  if (param_2 == 0) {
    FUN_0040da70(0);
    return 0;
  }
  FUN_0040da70(param_2);
  return 0;
}


/* fwd_0040da70_4051e0 @ 004051e0  kind=gamemisc  attributed-by=role:thunk  size=46 */

undefined4 FUN_004051e0(undefined4 param_1,int param_2)

{
  FUN_0040da70(param_2 - (DAT_0076af00 * param_2) / 3);
  return 0;
}


/* fwd_0040c390_405290 @ 00405290  kind=gamemisc  attributed-by=role:thunk  size=18 */

undefined4 FUN_00405290(undefined4 param_1,undefined4 param_2)

{
  FUN_0040c390(param_2);
  return 0;
}


/* fwd_0040c390_4052b0 @ 004052b0  kind=gamemisc  attributed-by=role:thunk  size=45 */

undefined4 FUN_004052b0(undefined4 param_1,int param_2)

{
  DAT_0076af44 = param_2;
  if (param_2 != 0) {
    DAT_0076af48 = DAT_0076af48 + param_2 * 10;
  }
  FUN_0040c390(param_2);
  return 0;
}


/* fwd_0040b9f0_4069c0 @ 004069c0  kind=gamemisc  attributed-by=role:thunk  size=26 */

int FUN_004069c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_0040b9f0(param_1,param_2);
  return (iVar1 * 2) / 2;
}


/* fwd_0040aa50_40aaf0 @ 0040aaf0  kind=gamemisc  attributed-by=role:thunk  size=31 */

int FUN_0040aaf0(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_0040aa50(param_1,param_2);
  return (uVar1 & 0xf7) * DAT_0076af04;
}


/* fwd_0040bbc0_40b0a0 @ 0040b0a0  kind=gamemisc  attributed-by=role:thunk  size=28 */

void FUN_0040b0a0(undefined4 param_1,int param_2)

{
  FUN_0040bbc0(param_1,param_2 + DAT_0076af0c,DAT_0076af0c);
  return;
}


/* fwd_0040bd50_40b380 @ 0040b380  kind=gamemisc  attributed-by=role:thunk  size=16 */

void FUN_0040b380(undefined4 param_1)

{
  FUN_0040bd50(param_1);
  return;
}


/* fwd_00411ad0_411bc0 @ 00411bc0  kind=gamemisc  attributed-by=role:thunk  size=31 */

undefined4 FUN_00411bc0(undefined4 param_1)

{
  FUN_00411ad0(param_1);
  return param_1;
}


/* fwd_0068d946_42c580 @ 0042c580  kind=gamemisc  attributed-by=role:thunk  size=44 */

void FUN_0042c580(void)

{
  undefined8 *in_ECX;
  undefined8 uVar1;
  
  uVar1 = FUN_0068d946();
  *in_ECX = uVar1;
  return;
}


/* fwd_0042c900_42c6e0 @ 0042c6e0  kind=gamemisc  attributed-by=role:thunk  size=63 */

undefined4 * FUN_0042c6e0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  param_1[1] = in_ECX[1];
  param_1[2] = in_ECX[2];
  param_1[3] = in_ECX[3];
  param_1[4] = in_ECX[4];
  param_1[5] = in_ECX[5];
  FUN_0042c900(param_2,param_3);
  return param_1;
}


/* fwd_00639cf0_43e630 @ 0043e630  kind=gamemisc  attributed-by=role:thunk  size=39 */

void FUN_0043e630(void)

{
  undefined4 *in_ECX;
  undefined1 local_5;
  
  FUN_00639cf0(*in_ECX,in_ECX[1],&local_5);
  in_ECX[1] = *in_ECX;
  return;
}


/* fwd_004499f0_4499c0 @ 004499c0  kind=gamemisc  attributed-by=role:thunk  size=40 */

void FUN_004499c0(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *param_2;
  iVar1 = param_2[1] - iVar2;
  if (iVar2 == param_2[1]) {
    iVar2 = 0;
  }
  FUN_004499f0(param_1,iVar2,iVar1);
  return;
}


/* fwd_0040f680_452500 @ 00452500  kind=gamemisc  attributed-by=role:thunk  size=52 */

int FUN_00452500(int param_1,int param_2,int param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 0x18) {
    if (param_3 != param_1) {
      FUN_0040f680(param_1,0,0xffffffff);
    }
    param_3 = param_3 + 0x18;
  }
  return param_3;
}


/* fwd_00466590_456d30 @ 00456d30  kind=gamemisc  attributed-by=role:thunk  size=37 */

void FUN_00456d30(int param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != 0) {
      FUN_00466590();
    }
    param_1 = param_1 + 0x78;
  }
  return;
}


/* fwd_00487250_4593b0 @ 004593b0  kind=gamemisc  attributed-by=role:thunk  size=41 */

void FUN_004593b0(undefined4 param_1)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  FUN_00487250(param_1);
  return;
}


/* fwd_0068d946_459c00 @ 00459c00  kind=gamemisc  attributed-by=role:thunk  size=44 */

void FUN_00459c00(void)

{
  undefined8 *in_ECX;
  undefined8 uVar1;
  
  uVar1 = FUN_0068d946();
  *in_ECX = uVar1;
  return;
}


/* fwd_0068d66e_466aa0 @ 00466aa0  kind=gamemisc  attributed-by=role:thunk  size=7 */

void FUN_00466aa0(void)

{
  undefined4 *in_ECX;
  
                    /* WARNING: Subroutine does not return */
  operator_delete((void *)*in_ECX);
}


/* fwd_005c3ea0_468d70 @ 00468d70  kind=gamemisc  attributed-by=role:thunk  size=23 */

undefined4 * FUN_00468d70(undefined4 *param_1)

{
  undefined4 *in_ECX;
  
  *param_1 = *in_ECX;
  FUN_005c3ea0();
  return param_1;
}


/* fwd_00452650_46daf0 @ 0046daf0  kind=gamemisc  attributed-by=role:thunk  size=31 */

void FUN_0046daf0(undefined4 param_1,undefined4 param_2)

{
  undefined1 local_5;
  
  FUN_00452650(param_1,param_2,&local_5,param_2);
  return;
}


/* fwd_004aa350_4aba90 @ 004aba90  kind=gamemisc  attributed-by=role:thunk  size=45 */

void FUN_004aba90(int param_1,int param_2,undefined4 param_3)

{
  FUN_004aa350(param_1,param_2,(param_2 - param_1) / 0xc,param_3);
  return;
}


/* fwd_004aa490_4abac0 @ 004abac0  kind=gamemisc  attributed-by=role:thunk  size=32 */

void FUN_004abac0(int param_1,int param_2,undefined4 param_3)

{
  FUN_004aa490(param_1,param_2,param_2 - param_1 >> 4,param_3);
  return;
}


/* fwd_004d72f0_4d6d10 @ 004d6d10  kind=gamemisc  attributed-by=role:thunk  size=25 */

void FUN_004d6d10(void)

{
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  FUN_004d72f0();
  return;
}


/* fwd_00575040_51d0e0 @ 0051d0e0  kind=gamemisc  attributed-by=role:thunk  size=38 */

void FUN_0051d0e0(int param_1)

{
  *(undefined4 *)(param_1 + 0x38) = 0x12;
  FUN_00575040(param_1 + 8,"string or blob too big",0xffffffff,1,0);
  return;
}


/* fwd_0051f3c0_5211a0 @ 005211a0  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_005211a0(void)

{
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0;
  uStack00000008 = 0;
  FUN_0051f3c0();
  return;
}


/* fwd_0051f790_5212a0 @ 005212a0  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_005212a0(void)

{
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0;
  uStack00000008 = 0;
  FUN_0051f790();
  return;
}


/* fwd_0051f1f0_521320 @ 00521320  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_00521320(void)

{
  undefined4 uStack00000008;
  undefined4 uStack0000000c;
  
  uStack0000000c = 0;
  uStack00000008 = 0;
  FUN_0051f1f0();
  return;
}


/* fwd_0068d494_522480 @ 00522480  kind=gamemisc  attributed-by=role:thunk  size=17 */

void FUN_00522480(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  (*(code *)PTR_GetProcAddress_007671c8)(param_2,param_3);
  return;
}


/* fwd_0068d53c_522680 @ 00522680  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_00522680(undefined4 param_1,undefined4 param_2)

{
  (*(code *)PTR_FreeLibrary_00767144)(param_2);
  return;
}


/* fwd_00540b70_525590 @ 00525590  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_00525590(undefined4 param_1,undefined4 param_2)

{
  FUN_00540b70(param_1,param_2,6,0);
  return;
}


/* fwd_0052e070_5267a0 @ 005267a0  kind=gamemisc  attributed-by=role:thunk  size=30 */

void FUN_005267a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  FUN_0052e070(param_1,param_2,param_3,param_4,param_5,0);
  return;
}


/* fwd_005259c0_540b00 @ 00540b00  kind=gamemisc  attributed-by=role:thunk  size=45 */

int FUN_00540b00(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  
  iVar1 = param_4;
  if (param_2 < param_4) {
    iVar1 = param_2;
  }
  iVar1 = FUN_005259c0(param_3,param_5,iVar1);
  if (iVar1 == 0) {
    iVar1 = param_2 - param_4;
  }
  return iVar1;
}


/* fwd_0068e8ca_586bc0 @ 00586bc0  kind=gamemisc  attributed-by=role:thunk  size=31 */

void FUN_00586bc0(void)

{
  int in_ECX;
  undefined4 local_8;
  
  local_8 = 0x5100;
  GetAdaptersInfo(in_ECX + 0xa0,&local_8);
  return;
}


/* fwd_external:0000005b_586c00 @ 00586c00  kind=gamemisc  attributed-by=role:thunk  size=32 */

DWORD FUN_00586c00(HANDLE param_1)

{
  _FILETIME local_c;
  
  GetFileTime(param_1,&local_c,(LPFILETIME)0x0,(LPFILETIME)0x0);
  return local_c.dwHighDateTime;
}


/* fwd_external:0000005b_586c20 @ 00586c20  kind=gamemisc  attributed-by=role:thunk  size=32 */

DWORD FUN_00586c20(HANDLE param_1)

{
  _FILETIME local_c;
  
  GetFileTime(param_1,&local_c,(LPFILETIME)0x0,(LPFILETIME)0x0);
  return local_c.dwLowDateTime;
}


/* fwd_external:0000005b_586c40 @ 00586c40  kind=gamemisc  attributed-by=role:thunk  size=32 */

DWORD FUN_00586c40(HANDLE param_1)

{
  _FILETIME local_c;
  
  GetFileTime(param_1,(LPFILETIME)0x0,&local_c,(LPFILETIME)0x0);
  return local_c.dwHighDateTime;
}


/* fwd_external:0000005b_586c60 @ 00586c60  kind=gamemisc  attributed-by=role:thunk  size=32 */

DWORD FUN_00586c60(HANDLE param_1)

{
  _FILETIME local_c;
  
  GetFileTime(param_1,(LPFILETIME)0x0,&local_c,(LPFILETIME)0x0);
  return local_c.dwLowDateTime;
}


/* fwd_external:0000005b_586c80 @ 00586c80  kind=gamemisc  attributed-by=role:thunk  size=32 */

DWORD FUN_00586c80(HANDLE param_1)

{
  _FILETIME local_c;
  
  GetFileTime(param_1,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_c);
  return local_c.dwHighDateTime;
}


/* fwd_external:0000005b_586ca0 @ 00586ca0  kind=gamemisc  attributed-by=role:thunk  size=32 */

DWORD FUN_00586ca0(HANDLE param_1)

{
  _FILETIME local_c;
  
  GetFileTime(param_1,(LPFILETIME)0x0,(LPFILETIME)0x0,&local_c);
  return local_c.dwLowDateTime;
}


/* fwd_005870c0_587140 @ 00587140  kind=gamemisc  attributed-by=role:thunk  size=18 */

void FUN_00587140(undefined4 param_1,undefined4 param_2)

{
  FUN_005870c0(param_2);
  return;
}


/* fwd_external:00000018_59c480 @ 0059c480  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_0059c480(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
  return;
}


/* fwd_external:00000018_601cb0 @ 00601cb0  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_00601cb0(void)

{
  int in_ECX;
  
  EnterCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
  return;
}


/* fwd_external:00000019_601e90 @ 00601e90  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_00601e90(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000c0));
  return;
}


/* fwd_external:00000019_601ea0 @ 00601ea0  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_00601ea0(void)

{
  int in_ECX;
  
  LeaveCriticalSection((LPCRITICAL_SECTION)(in_ECX + 0x8000d8));
  return;
}


/* fwd_0046d590_6240d0 @ 006240d0  kind=gamemisc  attributed-by=role:thunk  size=31 */

void FUN_006240d0(void)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_0046d590(0,0);
  *in_ECX = uVar1;
  return;
}


/* fwd_external:0000013a_625a30 @ 00625a30  kind=gamemisc  attributed-by=role:thunk  size=35 */

int FUN_00625a30(FILE *param_1,long param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  if (param_1 == (FILE *)0x0) {
    return -1;
  }
  iVar1 = fseek(param_1,param_2,param_4);
  return iVar1;
}


/* fwd_00629300_6294c0 @ 006294c0  kind=gamemisc  attributed-by=role:thunk  size=12 */

void FUN_006294c0(void)

{
  int in_ECX;
  
  FUN_00629300(*(undefined4 *)(in_ECX + 0x148));
  return;
}


/* fwd_0066add0_675670 @ 00675670  kind=gamemisc  attributed-by=role:thunk  size=28 */

void FUN_00675670(undefined4 param_1)

{
  FUN_0066add0(&param_1);
  return;
}


/* fwd_0068d668_68d652 @ 0068d652  kind=gamemisc  attributed-by=role:thunk  size=9 */

void FUN_0068d652(uint param_1)

{
  operator_new(param_1);
  return;
}


/* fwd_0068e8b2_68e489 @ 0068e489  kind=gamemisc  attributed-by=role:thunk  size=35 */

void FUN_0068e489(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  except_handler4_common(&DAT_0076aa78,__security_check_cookie,param_1,param_2,param_3,param_4);
  return;
}


/* fwd_0068fce0_68fd60 @ 0068fd60  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_0068fd60(void)

{
  undefined4 uVar1;
  int unaff_ESI;
  
  uVar1 = FUN_0068fce0();
  *(undefined4 *)(unaff_ESI + 0xa4) = uVar1;
  return;
}


/* fwd_00691600_691650 @ 00691650  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_00691650(int param_1,undefined4 param_2)

{
  FUN_00691600(param_1);
  *(undefined4 *)(param_1 + 0x58) = param_2;
  return;
}


/* fwd_00691290_691820 @ 00691820  kind=gamemisc  attributed-by=role:thunk  size=32 */

void FUN_00691820(undefined4 *param_1)

{
  FUN_00691290(param_1[7],*param_1);
  param_1[1] = 0;
  *param_1 = 0;
  param_1[6] = 0;
  return;
}


/* fwd_00691dc0_693750 @ 00693750  kind=gamemisc  attributed-by=role:thunk  size=44 */

undefined4
FUN_00693750(undefined4 param_1,int param_2,undefined4 param_3,undefined4 *param_4,
            undefined4 param_5)

{
  undefined4 uVar1;
  
  *param_4 = 0;
  if (param_2 == 0) {
    return 0x51;
  }
  uVar1 = FUN_00691dc0(0x51607,param_5);
  return uVar1;
}


/* fwd_00693a60_697310 @ 00697310  kind=gamemisc  attributed-by=role:thunk  size=53 */

undefined4 FUN_00697310(void)

{
  undefined4 uVar1;
  undefined4 *unaff_ESI;
  
  unaff_ESI[1] = 0xf1;
  *unaff_ESI = 0x50;
  unaff_ESI[2] = 0;
  uVar1 = FUN_00693a60();
  unaff_ESI[3] = uVar1;
  return 0;
}


/* fwd_006971d0_697430 @ 00697430  kind=gamemisc  attributed-by=role:thunk  size=8 */

undefined4 FUN_00697430(void)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_006971d0();
  return *puVar1;
}


/* fwd_00691290_697460 @ 00697460  kind=gamemisc  attributed-by=role:thunk  size=39 */

void FUN_00697460(void)

{
  undefined4 *unaff_ESI;
  
  if (unaff_ESI[3] != 0) {
    FUN_00691290(unaff_ESI[3],*unaff_ESI);
    *unaff_ESI = 0;
    *unaff_ESI = 0;
    unaff_ESI[1] = 0;
    unaff_ESI[2] = 0;
    unaff_ESI[3] = 0;
  }
  return;
}


/* fwd_0068f3b0_6a2240 @ 006a2240  kind=gamemisc  attributed-by=role:thunk  size=26 */

void FUN_006a2240(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  FUN_0068f3b0(param_1,param_2,0,param_3);
  return;
}


/* fwd_00691290_6a58a0 @ 006a58a0  kind=gamemisc  attributed-by=role:thunk  size=24 */

void FUN_006a58a0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691290();
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}


/* fwd_00691290_6a5950 @ 006a5950  kind=gamemisc  attributed-by=role:thunk  size=27 */

void FUN_006a5950(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691290();
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  unaff_ESI[3] = 0;
  return;
}


/* fwd_006a5ae0_6a5b30 @ 006a5b30  kind=gamemisc  attributed-by=role:thunk  size=49 */

undefined4 FUN_006a5b30(undefined4 param_1)

{
  int *in_EAX;
  undefined4 uVar1;
  int *unaff_ESI;
  int local_4;
  
  if (*in_EAX == 0) {
    uVar1 = FUN_006a5ae0(param_1,&local_4);
    *unaff_ESI = local_4;
    return uVar1;
  }
  *unaff_ESI = in_EAX[2] + -0x10 + *in_EAX * 0x10;
  return 0;
}


/* fwd_006a5de0_6a6020 @ 006a6020  kind=gamemisc  attributed-by=role:thunk  size=34 */

void FUN_006a6020(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006a5de0();
  FUN_006a5de0();
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  return;
}


/* fwd_0068d7b0_6a6050 @ 006a6050  kind=gamemisc  attributed-by=role:thunk  size=22 */

undefined4 FUN_006a6050(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  memset(unaff_ESI,0,0x58);
  *unaff_ESI = param_1;
  return 0;
}


/* fwd_00691290_6a6cd0 @ 006a6cd0  kind=gamemisc  attributed-by=role:thunk  size=61 */

void FUN_006a6cd0(void)

{
  undefined4 *unaff_ESI;
  
  FUN_00691290();
  unaff_ESI[6] = 0;
  unaff_ESI[5] = 0;
  unaff_ESI[7] = 0;
  FUN_00691290();
  unaff_ESI[3] = 0;
  FUN_00691290();
  unaff_ESI[2] = 0;
  unaff_ESI[1] = 0;
  *unaff_ESI = 0;
  unaff_ESI[4] = 0;
  return;
}


/* fwd_006a7070_6a7310 @ 006a7310  kind=gamemisc  attributed-by=role:thunk  size=42 */

void FUN_006a7310(undefined4 param_1,undefined4 param_2)

{
  int *in_EAX;
  int iVar1;
  int iVar2;
  
  iVar2 = in_EAX[2];
  for (iVar1 = *in_EAX; iVar1 != 0; iVar1 = iVar1 + -1) {
    FUN_006a7070(iVar2,param_1,param_2);
    iVar2 = iVar2 + 0x1c;
  }
  return;
}


/* fwd_006a8ef0_6a92c0 @ 006a92c0  kind=gamemisc  attributed-by=role:thunk  size=15 */

void FUN_006a92c0(void)

{
  FUN_006a8ef0();
  return;
}


/* fwd_006abbc0_6abd10 @ 006abd10  kind=gamemisc  attributed-by=role:thunk  size=56 */

undefined4 FUN_006abd10(undefined4 *param_1)

{
  int iVar1;
  undefined4 local_4;
  
  iVar1 = FUN_006abbc0();
  if (iVar1 == 1) {
    *param_1 = local_4;
    return 0;
  }
  return 0xa0;
}


/* fwd_0068f020_6b1650 @ 006b1650  kind=gamemisc  attributed-by=role:thunk  size=39 */

void FUN_006b1650(void)

{
  undefined4 *in_EAX;
  undefined4 in_EDX;
  
  *in_EAX = 0;
  in_EAX[1] = 0;
  in_EAX[2] = 0;
  in_EAX[3] = 0;
  in_EAX[4] = 0;
  in_EAX[5] = 0;
  in_EAX[6] = 0;
  in_EAX[8] = 0;
  in_EAX[7] = in_EDX;
  *(undefined1 *)(in_EAX + 8) = 0;
  FUN_0068f020();
  return;
}


/* fwd_006b0a80_6b27b0 @ 006b27b0  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_006b27b0(void)

{
  FUN_006b0a80();
  return;
}


/* fwd_0068d7b0_6b43d0 @ 006b43d0  kind=gamemisc  attributed-by=role:thunk  size=14 */

void FUN_006b43d0(void)

{
  void *in_EAX;
  
  memset(in_EAX,0,0x68);
  return;
}


/* fwd_0068d7b0_6b5570 @ 006b5570  kind=gamemisc  attributed-by=role:thunk  size=52 */

void FUN_006b5570(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *unaff_ESI;
  
  memset(unaff_ESI,0,0x1a0);
  unaff_ESI[0x65] = unaff_ESI + 4;
  unaff_ESI[0x66] = param_1;
  unaff_ESI[0x67] = param_2;
  *unaff_ESI = param_3;
  return;
}


/* fwd_00691ee0_6b6430 @ 006b6430  kind=gamemisc  attributed-by=role:thunk  size=19 */

void FUN_006b6430(void)

{
  undefined4 *in_EAX;
  
  if (in_EAX[7] == 0) {
    FUN_00691ee0(*in_EAX);
  }
  return;
}


/* fwd_00691310_6b7b00 @ 006b7b00  kind=gamemisc  attributed-by=role:thunk  size=16 */

void FUN_006b7b00(void)

{
  FUN_00691310();
  return;
}


/* fwd_00693a60_6c0d00 @ 006c0d00  kind=gamemisc  attributed-by=role:thunk  size=55 */

int FUN_006c0d00(undefined4 param_1)

{
  undefined4 uVar1;
  int in_ECX;
  uint *unaff_EBX;
  uint unaff_ESI;
  undefined4 *unaff_EDI;
  int local_4;
  
  if (*unaff_EBX < unaff_ESI) {
    local_4 = in_ECX;
    uVar1 = FUN_00693a60(param_1,1,*unaff_EBX * in_ECX,in_ECX * unaff_ESI,*unaff_EDI,&local_4);
    *unaff_EDI = uVar1;
    if (local_4 != 0) {
      return local_4;
    }
    *unaff_EBX = unaff_ESI;
  }
  return 0;
}


/* fwd_00691170_6c11a0 @ 006c11a0  kind=gamemisc  attributed-by=role:thunk  size=24 */

void FUN_006c11a0(void)

{
  undefined1 local_8 [8];
  
  FUN_00691170(local_8);
  return;
}


/* fwd_0068d7b0_6c8850 @ 006c8850  kind=gamemisc  attributed-by=role:thunk  size=20 */

void FUN_006c8850(undefined4 param_1)

{
  undefined4 *unaff_ESI;
  
  memset(unaff_ESI,0,0x7c);
  *unaff_ESI = param_1;
  return;
}


/* fwd_0068d770_6cc5a0 @ 006cc5a0  kind=gamemisc  attributed-by=role:thunk  size=29 */

void FUN_006cc5a0(undefined4 *param_1)

{
  fclose((FILE *)param_1[3]);
  param_1[3] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}


/* fwd_006ccb10_6cce60 @ 006cce60  kind=gamemisc  attributed-by=role:thunk  size=23 */

void FUN_006cce60(void)

{
  undefined4 *unaff_ESI;
  
  FUN_006ccb10(unaff_ESI + 3);
  unaff_ESI[2] = 0;
  *unaff_ESI = 0;
  unaff_ESI[1] = 0;
  return;
}


/* fwd_00692230_6cf090 @ 006cf090  kind=gamemisc  attributed-by=role:thunk  size=29 */

void FUN_006cf090(undefined4 param_1,int param_2,int param_3)

{
  FUN_00692230(param_1,param_2 * param_3,&param_2);
  return;
}


/* fwd_006ceb50_6cf230 @ 006cf230  kind=gamemisc  attributed-by=role:thunk  size=41 */

void FUN_006cf230(void)

{
  undefined4 *unaff_EDI;
  
  FUN_006ceb50();
  unaff_EDI[0xb] = 0;
  unaff_EDI[0xc] = 0;
  unaff_EDI[0xd] = 0;
  unaff_EDI[3] = 0;
  unaff_EDI[6] = 0;
  unaff_EDI[4] = 0;
  unaff_EDI[7] = 0;
  unaff_EDI[2] = 0;
  *unaff_EDI = 0;
  unaff_EDI[1] = 0;
  return;
}


/* fwd_006d8670_6d8650 @ 006d8650  kind=gamemisc  attributed-by=role:thunk  size=26 */

void FUN_006d8650(undefined4 param_1)

{
  int in_ECX;
  
  if (in_ECX != 1) {
    FUN_006d8670(param_1);
  }
  return;
}


/* fwd_0068d755_6fb10f @ 006fb10f  kind=gamemisc  attributed-by=role:thunk  size=12 */

void FUN_006fb10f(void)

{
  _atexit(FUN_006fbab5);
  return;
}


/* fwd_0068d593_6fbab5 @ 006fbab5  kind=gamemisc  attributed-by=role:thunk  size=10 */

void FUN_006fbab5(void)

{
  FUN_0068d593();
  return;
}


