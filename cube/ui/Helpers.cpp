// Helpers (ui) -- cube. 42 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_0040e940 @ 0040e940  kind=gamemisc  attributed-by=caller-vote  size=239 */

facet * FUN_0040e940(locale *param_1)

{
  int iVar1;
  uint uVar2;
  _Locimp *p_Var3;
  facet *pfVar4;
  bad_cast local_24 [12];
  _Lockit local_18 [4];
  facet *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e1a09;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  std::_Lockit::_Lockit(local_18,0);
  local_8 = 0;
  local_14 = (facet *)DAT_0076af74;
  uVar2 = std::locale::id::operator_unsigned_int((id *)id_exref);
  iVar1 = *(int *)param_1;
  if (uVar2 < *(uint *)(iVar1 + 0xc)) {
    pfVar4 = *(facet **)(*(int *)(iVar1 + 8) + uVar2 * 4);
    if (pfVar4 != (facet *)0x0) goto LAB_0040ea12;
  }
  else {
    pfVar4 = (facet *)0x0;
  }
  if (*(char *)(iVar1 + 0x14) == '\0') {
LAB_0040e9bf:
    if (pfVar4 != (facet *)0x0) goto LAB_0040ea12;
  }
  else {
    p_Var3 = std::locale::_Getgloballocale();
    if (uVar2 < *(uint *)(p_Var3 + 0xc)) {
      pfVar4 = *(facet **)(*(int *)(p_Var3 + 8) + uVar2 * 4);
      goto LAB_0040e9bf;
    }
  }
  pfVar4 = local_14;
  if (local_14 == (facet *)0x0) {
    uVar2 = std::ctype<wchar_t>::_Getcat(&local_14,param_1);
    pfVar4 = local_14;
    if (uVar2 == 0xffffffff) {
      std::bad_cast::bad_cast(local_24,"bad cast");
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(local_24,(ThrowInfo *)&DAT_0074aee8);
    }
    DAT_0076af74 = (int *)local_14;
    (**(code **)(*(int *)local_14 + 4))();
    Facet_Register(pfVar4);
  }
LAB_0040ea12:
  std::_Lockit::~_Lockit(local_18);
  ExceptionList = local_10;
  return pfVar4;
}


/* FUN_0040f2d0 @ 0040f2d0  kind=gamemisc  attributed-by=caller-vote  size=37 */

void FUN_0040f2d0(int param_1)

{
  int *in_ECX;
  
  in_ECX[4] = param_1;
  if (7 < (uint)in_ECX[5]) {
    *(undefined2 *)(*in_ECX + param_1 * 2) = 0;
    return;
  }
  *(undefined2 *)((int)in_ECX + param_1 * 2) = 0;
  return;
}


/* FUN_0040f4a0 @ 0040f4a0  kind=gamemisc  attributed-by=caller-vote  size=71 */

void FUN_0040f4a0(char param_1,int param_2)

{
  void *_Src;
  undefined4 *in_ECX;
  
  if ((param_1 != '\0') && (7 < (uint)in_ECX[5])) {
    _Src = (void *)*in_ECX;
    if (param_2 != 0) {
      memcpy(in_ECX,_Src,param_2 * 2);
    }
                    /* WARNING: Subroutine does not return */
    operator_delete(_Src);
  }
  in_ECX[4] = param_2;
  in_ECX[5] = 7;
  *(undefined2 *)((int)in_ECX + param_2 * 2) = 0;
  return;
}


/* FUN_0040f8a0 @ 0040f8a0  kind=gamemisc  attributed-by=caller-vote  size=17 */

void FUN_0040f8a0(undefined2 *param_1,undefined2 *param_2)

{
  *param_1 = *param_2;
  return;
}


/* FUN_0040f8c0 @ 0040f8c0  kind=gamemisc  attributed-by=caller-vote  size=11 */

void FUN_0040f8c0(void *param_1)

{
                    /* WARNING: Subroutine does not return */
  operator_delete(param_1);
}


/* FUN_00411740 @ 00411740  kind=gamemisc  attributed-by=caller-vote  size=7 */

undefined4 FUN_00411740(void)

{
  int in_ECX;
  
  return *(undefined4 *)(in_ECX + 0x8006d0);
}


/* FUN_00411750 @ 00411750  kind=gamemisc  attributed-by=caller-vote  size=7 */

int FUN_00411750(void)

{
  int in_ECX;
  
  return in_ECX + 0x800a1c;
}


/* FUN_00428990 @ 00428990  kind=gamemisc  attributed-by=caller-vote  size=70 */

void FUN_00428990(float *param_1,float *param_2)

{
  float *in_ECX;
  
  *param_1 = *in_ECX - *param_2;
  param_1[1] = in_ECX[1] - param_2[1];
  param_1[2] = in_ECX[2] - param_2[2];
  param_1[3] = in_ECX[3] - param_2[3];
  return;
}


/* FUN_004289e0 @ 004289e0  kind=gamemisc  attributed-by=caller-vote  size=69 */

void FUN_004289e0(float *param_1)

{
  float *in_ECX;
  
  *in_ECX = *param_1 + *in_ECX;
  in_ECX[1] = param_1[1] + in_ECX[1];
  in_ECX[2] = param_1[2] + in_ECX[2];
  in_ECX[3] = param_1[3] + in_ECX[3];
  return;
}


/* FUN_0042c070 @ 0042c070  kind=gamemisc  attributed-by=caller-vote  size=9 */

int FUN_0042c070(void)

{
  int *in_ECX;
  
  return in_ECX[1] - *in_ECX >> 4;
}


/* FUN_0042f720 @ 0042f720  kind=gamemisc  attributed-by=caller-vote  size=7 */

float10 FUN_0042f720(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0x1000e78);
}


/* FUN_004348d0 @ 004348d0  kind=gamemisc  attributed-by=caller-vote  size=7 */

float10 FUN_004348d0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0xd4);
}


/* FUN_004348e0 @ 004348e0  kind=gamemisc  attributed-by=caller-vote  size=7 */

float10 FUN_004348e0(void)

{
  int in_ECX;
  
  return (float10)*(float *)(in_ECX + 0xd8);
}


/* FUN_00439680 @ 00439680  kind=gamemisc  attributed-by=caller-vote  size=55 */

void FUN_00439680(void)

{
  int *piVar1;
  int iVar2;
  int *in_ECX;
  
  piVar1 = (int *)*in_ECX;
  iVar2 = *piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*in_ECX + 4) = *in_ECX;
  in_ECX[1] = 0;
  if (iVar2 != *in_ECX) {
    FUN_0046f990();
                    /* WARNING: Subroutine does not return */
    operator_delete(*(void **)(iVar2 + 8));
  }
  return;
}


/* FUN_0043cff0 @ 0043cff0  kind=gamemisc  attributed-by=caller-vote  size=419 */

float10 FUN_0043cff0(void)

{
  int in_ECX;
  float10 fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  fVar4 = (float)dVar3 * (float)dVar2;
  local_8 = *(float *)(in_ECX + 0x184) * fVar4;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    dVar3 = 2.0;
    libm_sse2_pow_precise();
    local_8 = (float)dVar3 * (float)dVar2 * *(float *)(in_ECX + 0x184);
  }
  if ((*(byte *)(in_ECX + 0x7e) & 0x20) != 0) {
    local_8 = local_8 + fVar4;
  }
  if (*(char *)(in_ECX + 0x530) == '\x04') {
    fVar1 = (float10)FUN_004c6a90();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x648) == '\x06') {
    fVar1 = (float10)FUN_004c6a90();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x760) == '\x05') {
    fVar1 = (float10)FUN_004c6a90();
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(in_ECX + 0x878) == '\a') {
    fVar1 = (float10)FUN_004c6a90();
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_0043e9e0 @ 0043e9e0  kind=gamemisc  attributed-by=caller-vote  size=89 */

float10 FUN_0043e9e0(void)

{
  undefined4 *puVar1;
  int in_ECX;
  float10 fVar2;
  
  puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x1178);
  do {
    if (puVar1 == *(undefined4 **)(in_ECX + 0x1178)) {
LAB_0043e9ff:
      fVar2 = (float10)FUN_0043ea40();
      return (float10)((float)fVar2 + *(float *)(in_ECX + 0x1190) * 0.15);
    }
    if (*(char *)(puVar1 + 2) == '\v') {
      if (puVar1 != (undefined4 *)0xfffffff8) {
        return (float10)1;
      }
      goto LAB_0043e9ff;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* FUN_0043ea40 @ 0043ea40  kind=gamemisc  attributed-by=caller-vote  size=586 */

float10 FUN_0043ea40(void)

{
  int in_ECX;
  float10 fVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  dVar4 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (((float)dVar2 * (float)dVar3) / (float)dVar4) * 0.1;
  if (*(char *)(in_ECX + 0x990) == '\x03') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x530) == '\x04') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x648) == '\x06') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x760) == '\x05') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x878) == '\a') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x418) == '\b') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0xbc0) == '\t') {
    fVar1 = (float10)FUN_004c6ba0();
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(in_ECX + 0xcd8) == '\t') {
    fVar1 = (float10)FUN_004c6ba0();
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_00445f10 @ 00445f10  kind=gamemisc  attributed-by=caller-vote  size=66 */

int FUN_00445f10(void)

{
  int in_ECX;
  
  return (int)((1.0 - 1.0 / (((float)*(int *)(in_ECX + 400) - 1.0) * 0.05 + 1.0)) * 100.0 + 1.0);
}


/* FUN_004467a0 @ 004467a0  kind=gamemisc  attributed-by=caller-vote  size=419 */

float10 FUN_004467a0(void)

{
  int in_ECX;
  float10 fVar1;
  double dVar2;
  double dVar3;
  float fVar4;
  undefined4 local_c;
  undefined4 local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  fVar4 = (float)dVar3 * (float)dVar2;
  local_8 = *(float *)(in_ECX + 0x188) * fVar4;
  if (*(char *)(in_ECX + 0x60) == '\0') {
    dVar3 = 2.0;
    libm_sse2_pow_precise();
    local_8 = (float)dVar3 * (float)dVar2 * *(float *)(in_ECX + 0x188);
  }
  if ((*(byte *)(in_ECX + 0x7e) & 0x20) != 0) {
    local_8 = local_8 + fVar4;
  }
  if (*(char *)(in_ECX + 0x530) == '\x04') {
    fVar1 = (float10)FUN_004c7af0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x648) == '\x06') {
    fVar1 = (float10)FUN_004c7af0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x760) == '\x05') {
    fVar1 = (float10)FUN_004c7af0();
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(in_ECX + 0x878) == '\a') {
    fVar1 = (float10)FUN_004c7af0();
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* FUN_004521c0 @ 004521c0  kind=gamemisc  attributed-by=caller-vote  size=135 */

int FUN_004521c0(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e32b1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00439600(param_1,param_2);
  local_8 = 1;
  if ((undefined2 *)(iVar1 + 8) != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 7;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined2 *)(iVar1 + 8) = 0;
    FUN_0040f680(param_3,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_0047f030 @ 0047f030  kind=gamemisc  attributed-by=caller-vote  size=389 */

void FUN_0047f030(void)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int in_ECX;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  puVar2 = (undefined4 *)**(undefined4 **)(in_ECX + 0x2e8);
  do {
    if (puVar2 == *(undefined4 **)(in_ECX + 0x2e8)) {
      __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
      return;
    }
    iVar3 = puVar2[6];
    if (((iVar3 != 0) && ((*(byte *)(iVar3 + 0x7e) & 0x40) != 0)) &&
       (iVar4 = *(int *)(in_ECX + 0x8006d0), *(char *)(iVar3 + 0x140) == *(char *)(iVar4 + 0x140)))
    {
      local_20._0_4_ = (uint)*(undefined8 *)(iVar4 + 0x10);
      local_20._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar4 + 0x10) >> 0x20);
      local_20 = CONCAT44((local_20._4_4_ - *(int *)(iVar3 + 0x14)) -
                          (uint)((uint)local_20 < *(uint *)(iVar3 + 0x10)),
                          (uint)local_20 - *(uint *)(iVar3 + 0x10));
      local_18._0_4_ = (uint)*(undefined8 *)(iVar4 + 0x18);
      local_18._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar4 + 0x18) >> 0x20);
      local_18 = CONCAT44((local_18._4_4_ - *(int *)(iVar3 + 0x1c)) -
                          (uint)((uint)local_18 < *(uint *)(iVar3 + 0x18)),
                          (uint)local_18 - *(uint *)(iVar3 + 0x18));
      local_10._0_4_ = (uint)*(undefined8 *)(iVar4 + 0x20);
      local_10._4_4_ = (int)((ulonglong)*(undefined8 *)(iVar4 + 0x20) >> 0x20);
      local_10 = CONCAT44((local_10._4_4_ - *(int *)(iVar3 + 0x24)) -
                          (uint)((uint)local_10 < *(uint *)(iVar3 + 0x20)),
                          (uint)local_10 - *(uint *)(iVar3 + 0x20));
      if ((float)local_20 * 1.5258789e-05 * (float)local_20 * 1.5258789e-05 +
          (float)local_18 * 1.5258789e-05 * (float)local_18 * 1.5258789e-05 +
          (float)local_10 * 1.5258789e-05 * (float)local_10 * 1.5258789e-05 < 16.0) {
        __security_check_cookie(DAT_0076aa78 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
        return;
      }
    }
    if (*(char *)((int)puVar2 + 0xd) == '\0') {
      puVar5 = (undefined4 *)puVar2[2];
      if (*(char *)((int)puVar5 + 0xd) == '\0') {
        cVar1 = *(char *)((int)*puVar5 + 0xd);
        puVar2 = puVar5;
        puVar5 = (undefined4 *)*puVar5;
        while (cVar1 == '\0') {
          cVar1 = *(char *)((int)*puVar5 + 0xd);
          puVar2 = puVar5;
          puVar5 = (undefined4 *)*puVar5;
        }
      }
      else {
        cVar1 = *(char *)((int)puVar2[1] + 0xd);
        puVar6 = (undefined4 *)puVar2[1];
        puVar5 = puVar2;
        while ((puVar2 = puVar6, cVar1 == '\0' && (puVar5 == (undefined4 *)puVar2[2]))) {
          cVar1 = *(char *)((int)puVar2[1] + 0xd);
          puVar6 = (undefined4 *)puVar2[1];
          puVar5 = puVar2;
        }
      }
    }
  } while( true );
}


/* FUN_0047f940 @ 0047f940  kind=gamemisc  attributed-by=caller-vote  size=169 */

void FUN_0047f940(void)

{
  int *piVar1;
  int iVar2;
  int in_ECX;
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [8];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar2 = *(int *)(*(int *)(in_ECX + 0x8008c4) + 0x3c);
  if (*(int *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0x68) * 4) != 0) {
    piVar1 = (int *)FUN_0047b450(local_20);
    if (-1 < *piVar1) {
      iVar2 = FUN_0047b450(local_10);
      if (-1 < *(int *)(iVar2 + 4)) {
        iVar2 = FUN_0047b450(local_18);
        piVar1 = (int *)FUN_0047b450(local_28);
        if (*(int *)(*(int *)(iVar2 + 4) * 0x11c +
                    *(int *)(*(int *)(*(int *)(in_ECX + 0x8006d0) + 0x11dc) + *piVar1 * 0xc)) != 0)
        {
          __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
          return;
        }
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004c6ba0 @ 004c6ba0  kind=gamemisc  attributed-by=caller-vote  size=286 */

float10 FUN_004c6ba0(void)

{
  char cVar1;
  char cVar2;
  char *in_ECX;
  float10 fVar3;
  float local_c;
  float local_8;
  
  cVar1 = *in_ECX;
  if ((((cVar1 == '\b') || (cVar1 == '\t')) || (cVar1 == '\x03')) ||
     (((cVar1 == '\x04' || (cVar1 == '\a')) || ((cVar1 == '\x05' || (cVar1 == '\x06')))))) {
    local_8 = 0.05;
    if (((cVar1 == '\x03') &&
        ((((cVar2 = in_ECX[1], cVar2 == '\x0f' || (cVar2 == '\x10')) ||
          ((cVar2 == '\x11' ||
           ((((cVar2 == '\x05' || (cVar2 == '\n')) || (cVar2 == '\v')) ||
            ((cVar2 == '\x12' || (cVar2 == '\b')))))))) || ((cVar2 == '\x06' || (cVar2 == '\a'))))))
       || (cVar1 == '\x04')) {
      local_8 = 0.1;
    }
    local_c = 1.0 - ((float)(int)((ulonglong)*(uint *)(in_ECX + 4) % 0x15) + 0.0) / 20.0;
    if (in_ECX[0xd] == '\v') {
      local_c = local_c + 1.0;
    }
    fVar3 = (float10)FUN_00445ff0((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
    local_c = (float)fVar3 * local_8 * local_c;
    if (0.001 <= local_c) {
      return (float10)local_c;
    }
  }
  return (float10)0;
}


/* FUN_004c7660 @ 004c7660  kind=gamemisc  attributed-by=caller-vote  size=60 */

undefined4 FUN_004c7660(void)

{
  char cVar1;
  char *in_ECX;
  
  if ((*in_ECX == '\x03') &&
     ((((((cVar1 = in_ECX[1], cVar1 == '\x0f' || (cVar1 == '\x10')) || (cVar1 == '\x11')) ||
        ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    return 0x20;
  }
  return 0x10;
}


/* FUN_004c7d20 @ 004c7d20  kind=gamemisc  attributed-by=caller-vote  size=321 */

void FUN_004c7d20(undefined4 *param_1)

{
  char cVar1;
  char *in_ECX;
  
  cVar1 = *in_ECX;
  if (cVar1 == '\x15') {
    *param_1 = 0x3f000000;
    param_1[1] = 0x3f000000;
    param_1[2] = 0x3f000000;
    param_1[3] = 0x3f800000;
    return;
  }
  if (cVar1 != '\r') {
    if (cVar1 != '\x19') {
      switch(in_ECX[0xc]) {
      case '\0':
        param_1[1] = 0x3f800000;
        param_1[2] = 0x3f800000;
        *param_1 = 0x3f800000;
        param_1[3] = 0x3f800000;
        return;
      case '\x01':
        *param_1 = 0;
        param_1[1] = 0x3f800000;
        param_1[2] = 0;
        param_1[3] = 0x3f800000;
        return;
      case '\x02':
        *param_1 = 0x3e800000;
        param_1[1] = 0x3e800000;
        param_1[2] = 0x3f800000;
        param_1[3] = 0x3f800000;
        return;
      case '\x03':
        *param_1 = 0x3f000000;
        param_1[1] = 0;
        param_1[2] = 0x3f800000;
        param_1[3] = 0x3f800000;
        return;
      case '\x04':
        param_1[1] = 0x3f800000;
        break;
      default:
        param_1[1] = 0;
      }
      param_1[2] = 0;
      *param_1 = 0x3f800000;
      param_1[3] = 0x3f800000;
      return;
    }
    *param_1 = 0x3e4ccccd;
    param_1[1] = 0x3f000000;
    param_1[2] = 0x3f800000;
    param_1[3] = 0x3f800000;
    return;
  }
  *param_1 = 0x3f000000;
  param_1[1] = 0x3dcccccd;
  param_1[2] = 0x3f800000;
  param_1[3] = 0x3f800000;
  return;
}


/* FUN_004e0190 @ 004e0190  kind=gamemisc  attributed-by=caller-vote  size=157 */

int FUN_004e0190(int param_1)

{
  int iVar1;
  int iVar2;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9451;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar2 = FUN_004e34b0();
  iVar1 = param_1;
  *(undefined2 *)(iVar2 + 0xc) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (iVar2 != -0x10) {
    FUN_0040eaf0(param_1);
    local_8._0_1_ = 2;
    FUN_004e1790(iVar1 + 0x18,(int)&param_1 + 3);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_004e18d0(iVar1 + 0x20);
  }
  ExceptionList = local_10;
  return iVar2;
}


/* FUN_004e0df0 @ 004e0df0  kind=gamemisc  attributed-by=caller-vote  size=468 */

undefined4 * FUN_004e0df0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *in_ECX;
  undefined4 uVar5;
  uint uStack_2c;
  undefined1 local_1c [4];
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_006e9550;
  local_10 = ExceptionList;
  uStack_2c = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  if (in_ECX[1] == 0) {
    param_2 = (int *)*in_ECX;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    piVar3 = (int *)*in_ECX;
    if (param_2 != (int *)*piVar3) {
      if (param_2 == piVar3) {
        puVar4 = param_3;
        if (7 < (uint)param_3[5]) {
          puVar4 = (undefined4 *)*param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        iVar2 = FUN_00428db0(0,*(undefined4 *)(piVar3[2] + 0x20),puVar4,param_3[4]);
        if (-1 < iVar2) goto LAB_004e0f91;
        param_2 = *(int **)(*in_ECX + 8);
        uVar5 = 0;
        goto LAB_004e0e39;
      }
      piVar3 = param_2 + 4;
      if (7 < (uint)param_2[9]) {
        piVar3 = (int *)*piVar3;
      }
      local_18 = in_ECX;
      iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
      if (iVar2 < 0) {
        FUN_0042c740();
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if (cVar1 == '\0') goto LAB_004e0f36;
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e0e39;
        }
      }
      else {
LAB_004e0f36:
        cVar1 = FUN_0046d1f0(param_2 + 4,param_3);
        if ((cVar1 == '\0') ||
           ((FUN_005c3ea0(), param_2 != (int *)*local_18 &&
            (cVar1 = FUN_0046d1f0(param_3,param_2 + 4), cVar1 == '\0')))) {
LAB_004e0f91:
          local_8 = 0xffffffff;
          puVar4 = (undefined4 *)FUN_004e1310(local_1c,0,param_3,param_4);
          *param_1 = *puVar4;
          ExceptionList = local_10;
          return param_1;
        }
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          uVar5 = 1;
          goto LAB_004e0e39;
        }
      }
      uVar5 = 0;
      goto LAB_004e0e39;
    }
    piVar3 = param_2 + 4;
    if (7 < (uint)param_2[9]) {
      piVar3 = (int *)*piVar3;
    }
    local_14 = (undefined1 *)&uStack_2c;
    iVar2 = FUN_00428db0(0,param_3[4],piVar3,param_2[8]);
    if (-1 < iVar2) goto LAB_004e0f91;
  }
  uVar5 = 1;
LAB_004e0e39:
  FUN_004e0730(param_1,uVar5,param_2,param_3,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_004e1310 @ 004e1310  kind=gamemisc  attributed-by=caller-vote  size=304 */

void FUN_004e1310(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,void *param_4)

{
  void *pvVar1;
  undefined4 *puVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int *in_ECX;
  bool bVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar5 = param_3;
  puStack_c = &LAB_006e95b0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  bVar7 = true;
  local_8 = 0;
  puVar2 = (undefined4 *)*in_ECX;
  puVar6 = (undefined4 *)((undefined4 *)*in_ECX)[1];
  while (*(char *)((int)puVar6 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      piVar4 = puVar6 + 4;
      if (7 < (uint)puVar6[9]) {
        piVar4 = (int *)*piVar4;
      }
      iVar3 = FUN_00428db0(0,puVar5[4],piVar4,puVar6[8]);
      bVar7 = iVar3 < 0;
    }
    else {
      puVar2 = puVar5;
      if (7 < (uint)puVar5[5]) {
        puVar2 = (undefined4 *)*puVar5;
      }
      iVar3 = FUN_00428db0(0,puVar6[8],puVar2,puVar5[4]);
      bVar7 = -1 < iVar3;
    }
    puVar2 = puVar6;
    if (bVar7 == false) {
      puVar6 = (undefined4 *)puVar6[2];
    }
    else {
      puVar6 = (undefined4 *)*puVar6;
    }
  }
  param_2 = puVar2;
  if (bVar7 != false) {
    if (puVar2 == *(undefined4 **)*in_ECX) {
      bVar7 = true;
      goto LAB_004e13ce;
    }
    FUN_0042c740();
  }
  puVar6 = puVar5;
  if (7 < (uint)puVar5[5]) {
    puVar6 = (undefined4 *)*puVar5;
  }
  iVar3 = FUN_00428db0(0,param_2[8],puVar6,puVar5[4]);
  pvVar1 = param_4;
  if (-1 < iVar3) {
    FUN_004e2a00();
                    /* WARNING: Subroutine does not return */
    operator_delete(pvVar1);
  }
LAB_004e13ce:
  puVar5 = (undefined4 *)FUN_004e0730(&param_2,bVar7,puVar2,puVar5,param_4);
  *param_1 = *puVar5;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_004e1790 @ 004e1790  kind=gamemisc  attributed-by=caller-vote  size=118 */

void FUN_004e1790(undefined4 param_1)

{
  undefined4 uVar1;
  undefined4 *in_ECX;
  uint local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9638;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  uVar1 = FUN_00630a10();
  *in_ECX = uVar1;
  local_18 = local_18 & 0xffffff00;
  local_8 = 1;
  FUN_004e03c0(param_1,local_18);
  ExceptionList = local_10;
  return;
}


/* FUN_004e18d0 @ 004e18d0  kind=gamemisc  attributed-by=caller-vote  size=127 */

void FUN_004e18d0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *in_ECX;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9698;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  *in_ECX = 0;
  in_ECX[1] = 0;
  puVar1 = (undefined4 *)FUN_00439600(0,0);
  *in_ECX = puVar1;
  local_8 = 1;
  FUN_004e15e0(*puVar1,*(undefined4 *)*param_1,(undefined4 *)*param_1,param_1);
  ExceptionList = local_10;
  return;
}


/* FUN_004e2a00 @ 004e2a00  kind=gamemisc  attributed-by=caller-vote  size=25 */

void FUN_004e2a00(void)

{
  int in_ECX;
  
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(*(void **)(in_ECX + 0x20));
}


/* FUN_004e3060 @ 004e3060  kind=gamemisc  attributed-by=caller-vote  size=337 */

void FUN_004e3060(int param_1)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *in_ECX;
  undefined4 local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 local_41;
  undefined1 *local_40;
  undefined2 local_3c [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [16];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9998;
  local_10 = ExceptionList;
  uVar1 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_14 = uVar1;
  iVar2 = FUN_004e3790(param_1);
  if (iVar2 != *in_ECX) {
    piVar3 = (int *)(iVar2 + 0x10);
    if (7 < *(uint *)(iVar2 + 0x24)) {
      piVar3 = (int *)*piVar3;
    }
    iVar4 = FUN_00428db0(0,*(undefined4 *)(param_1 + 0x10),piVar3,*(undefined4 *)(iVar2 + 0x20));
    if (-1 < iVar4) {
      ExceptionList = local_10;
      __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  local_54 = 0;
  local_50 = 0;
  local_54 = FUN_00630a10(uVar1);
  local_8 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_4c = (void *)FUN_00439600(0,0);
  local_8 = 1;
  local_28 = 7;
  local_2c = 0;
  local_3c[0] = 0;
  FUN_0040f680(param_1,0,0xffffffff);
  local_40 = local_24;
  local_8._0_1_ = 2;
  FUN_004e1790(&local_54,&local_41);
  local_8._0_1_ = 3;
  FUN_004e18d0(&local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  iVar4 = FUN_004e0190(local_3c);
  FUN_004e0df0(&local_40,iVar2,iVar4 + 0x10,iVar4);
  FUN_004e2a00();
  local_8 = 0xffffffff;
  FUN_0046f990();
                    /* WARNING: Subroutine does not return */
  operator_delete(local_4c);
}


/* FUN_004e5a20 @ 004e5a20  kind=gamemisc  attributed-by=caller-vote  size=479 */

void FUN_004e5a20(undefined4 param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  void **ppvVar3;
  undefined4 uVar4;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  void *local_74 [5];
  uint local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  int local_34;
  uint local_30;
  undefined4 local_2c;
  int local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e9dc8;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_7c = param_4;
  local_80 = param_5;
  local_78 = param_2;
  uVar4 = 0;
  FUN_0059fe70(local_44,param_3);
  local_8._0_1_ = 0;
  local_8._1_3_ = 0;
  if (local_34 == 0) {
    FUN_0040eb60(&PTR_006fccac);
    uVar1 = extraout_EDX;
  }
  else {
    FUN_0040eb60(L"singular");
    ppvVar3 = local_5c;
    local_8._0_1_ = 1;
    FUN_004e3060(local_44);
    uVar1 = FUN_004689a0(ppvVar3);
    local_2c = (void *)((uint)local_2c._2_2_ << 0x10);
    local_18 = 7;
    local_1c = 0;
    FUN_0040f680(uVar1,0,0xffffffff);
    local_8._0_1_ = 3;
    if (7 < local_48) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_5c[0]);
    }
    local_48 = 7;
    local_4c = 0;
    local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
    if (local_1c == 0) {
      FUN_0040eb60(&PTR_006fccac);
      uVar1 = extraout_EDX_00;
    }
    else {
      local_84 = 0x40;
      iVar2 = FUN_004d9950(&local_84,0,1);
      if (iVar2 != -1) {
        if ((*(int *)(param_3 + 4) == 0) || (*param_3 == '\0')) {
          uVar1 = FUN_005a6550(local_74,local_7c,local_80);
          local_8._0_1_ = 5;
          FUN_00486d00(iVar2,1,uVar1,0,0xffffffff);
          if (7 < local_60) {
                    /* WARNING: Subroutine does not return */
            operator_delete(local_74[0]);
          }
        }
        else {
          uVar1 = FUN_005a0ed0(local_74,*(int *)(param_3 + 4),0xffffffff);
          local_8._0_1_ = 4;
          FUN_00486d00(iVar2,1,uVar1,0,0xffffffff);
          FUN_00593e50();
        }
      }
      FUN_0040eaf0(&local_2c);
      uVar1 = extraout_EDX_01;
    }
    if (7 < local_18) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_2c);
    }
    local_2c = (void *)((uint)local_2c & 0xffff0000);
    local_1c = 0;
    local_18 = 7;
  }
  if (7 < local_30) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_44[0]);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar1,uVar4);
  return;
}


/* FUN_0058d6c0 @ 0058d6c0  kind=gamemisc  attributed-by=caller-vote  size=38 */

void FUN_0058d6c0(int param_1)

{
  int iVar1;
  int in_ECX;
  int iVar2;
  
  iVar2 = 0;
  do {
    iVar1 = iVar2 * 8;
    iVar2 = iVar2 + 1;
    *(int *)(in_ECX + -4 + iVar2 * 4) = (int)*(double *)(param_1 + iVar1);
  } while (iVar2 < 2);
  return;
}


/* FUN_0059fe70 @ 0059fe70  kind=gamemisc  attributed-by=caller-vote  size=40 */

undefined4 FUN_0059fe70(undefined4 param_1,undefined1 *param_2)

{
  FUN_005a64b0(param_1,*param_2,param_2[1]);
  return param_1;
}


/* FUN_005a64b0 @ 005a64b0  kind=gamemisc  attributed-by=caller-vote  size=156 */

undefined2 * FUN_005a64b0(undefined2 *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_ECX;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  local_8 = 0;
  local_10 = param_2;
  local_c = param_3;
  iVar3 = FUN_00594890(&local_10);
  iVar1 = *(int *)(in_ECX + 0x80012c);
  iVar2 = iVar1;
  if (((iVar3 != iVar1) && (*(int *)(iVar3 + 0x10) <= param_2)) &&
     ((*(int *)(iVar3 + 0x10) < param_2 || (*(int *)(iVar3 + 0x14) <= param_3)))) {
    iVar2 = iVar3;
  }
  param_2 = iVar2;
  if (param_2 != iVar1) {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f680(param_2 + 0x18,0,0xffffffff);
    return param_1;
  }
  FUN_0040eb60(&PTR_006fccac);
  return param_1;
}


/* FUN_005a6550 @ 005a6550  kind=gamemisc  attributed-by=caller-vote  size=1195 */

void FUN_005a6550(undefined2 *param_1,uint param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  int in_ECX;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 uVar3;
  undefined1 local_44 [16];
  undefined2 local_34 [8];
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f33d0;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  uVar3 = 0;
  if ((param_2 < 0x1000000) && (param_3 < 0x1000000)) {
    if ((DAT_0076dbb8 & 1) == 0) {
      DAT_0076dbb8 = DAT_0076dbb8 | 1;
      local_8 = 0;
      FUN_0040eb60(&DAT_0071d15c);
      local_8._0_1_ = 1;
      FUN_0040eb60(&DAT_0071d164);
      local_8._0_1_ = 2;
      FUN_0040eb60(&DAT_0071d16c);
      local_8._0_1_ = 3;
      FUN_0040eb60(&DAT_0071c794);
      local_8._0_1_ = 4;
      FUN_0040eb60(&DAT_0071cb8c);
      local_8._0_1_ = 5;
      FUN_0040eb60(&DAT_0071cad0);
      local_8._0_1_ = 6;
      FUN_0040eb60(&DAT_0071d174);
      local_8._0_1_ = 7;
      FUN_0040eb60(&DAT_0071d17c);
      local_8._0_1_ = 8;
      FUN_0040eb60(&DAT_0071d184);
      local_8._0_1_ = 9;
      FUN_0040eb60(&DAT_0071d18c);
      local_8._0_1_ = 10;
      FUN_0040eb60(&DAT_0071cbf0);
      local_8._0_1_ = 0xb;
      FUN_0040eb60(&DAT_0071d194);
      local_8._0_1_ = 0xc;
      FUN_0040eb60(&DAT_0071d19c);
      local_8._0_1_ = 0xd;
      FUN_0040eb60(&DAT_0071d18c);
      local_8._0_1_ = 0xe;
      FUN_0040eb60(&DAT_0071c970);
      local_8._0_1_ = 0xf;
      FUN_0040eb60(&DAT_0071ce10);
      local_8._0_1_ = 0x10;
      FUN_0040eb60(&DAT_0071d1a4);
      local_8._0_1_ = 0x11;
      FUN_0040eb60(&DAT_0071cf6c);
      local_8._0_1_ = 0x12;
      FUN_0040eb60(&DAT_0071d1ac);
      local_8 = CONCAT31(local_8._1_3_,0x13);
      FUN_0040eb60(&DAT_0071d1b4);
      _atexit((_func_4879 *)&LAB_006fb6b0);
    }
    if ((DAT_0076dbb8 & 2) == 0) {
      DAT_0076dbb8 = DAT_0076dbb8 | 2;
      local_8 = 0x14;
      FUN_0040eb60(&DAT_0071cc2c);
      local_8._0_1_ = 0x15;
      FUN_0040eb60(L"mala");
      local_8._0_1_ = 0x16;
      FUN_0040eb60(&DAT_0071d1c8);
      local_8._0_1_ = 0x17;
      FUN_0040eb60(&DAT_0071d1d0);
      local_8._0_1_ = 0x18;
      FUN_0040eb60(&DAT_0071d1d8);
      local_8._0_1_ = 0x19;
      FUN_0040eb60(&DAT_0071d1e0);
      local_8._0_1_ = 0x1a;
      FUN_0040eb60(&DAT_0071ca64);
      local_8._0_1_ = 0x1b;
      FUN_0040eb60(&DAT_0071c7e8);
      local_8._0_1_ = 0x1c;
      FUN_0040eb60(&DAT_0071d1e8);
      local_8._0_1_ = 0x1d;
      FUN_0040eb60(&DAT_0071d1f0);
      local_8._0_1_ = 0x1e;
      FUN_0040eb60(&DAT_0071c7e8);
      local_8._0_1_ = 0x1f;
      FUN_0040eb60(&DAT_0071cce8);
      local_8._0_1_ = 0x20;
      FUN_0040eb60(&DAT_0071c7f0);
      local_8._0_1_ = 0x21;
      FUN_0040eb60(L"rion");
      local_8._0_1_ = 0x22;
      FUN_0040eb60(L"remo");
      local_8._0_1_ = 0x23;
      FUN_0040eb60(L"antis");
      local_8._0_1_ = 0x24;
      FUN_0040eb60(&DAT_0071d21c);
      local_8._0_1_ = 0x25;
      FUN_0040eb60(&DAT_0071d224);
      local_8._0_1_ = 0x26;
      FUN_0040eb60(L"reon");
      local_8 = CONCAT31(local_8._1_3_,0x27);
      FUN_0040eb60(L"tuma");
      _atexit((_func_4879 *)&LAB_006fb950);
    }
    local_8 = 0xffffffff;
    uVar2 = FUN_0059fc90(local_44,param_2,param_3);
    FUN_0058d6c0(uVar2);
    iVar1 = *(int *)(in_ECX + 0x800290);
    local_34[0] = 0;
    local_20 = 7;
    local_24 = 0;
    FUN_0040f680(&DAT_0076d9d8 +
                 ((local_18 * 3 + *(int *)(in_ECX + 0x80028c) + local_1c) % 0x14) * 0x18,0,
                 0xffffffff);
    local_8 = 0x28;
    FUN_0046f170(&DAT_0076dbc0 + ((local_1c * 3 + iVar1 + local_18) % 0x14) * 0x18,0,0xffffffff);
    FUN_0040eaf0(local_34);
    FUN_00593e50();
    uVar2 = extraout_EDX;
  }
  else {
    *(undefined4 *)(param_1 + 10) = 7;
    *(undefined4 *)(param_1 + 8) = 0;
    *param_1 = 0;
    FUN_0040f7a0(&PTR_006fccac,0);
    uVar2 = extraout_EDX_00;
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc,uVar2,uVar3);
  return;
}


/* FUN_006023b0 @ 006023b0  kind=gamemisc  attributed-by=caller-vote  size=143 */

int FUN_006023b0(uint param_1,uint param_2)

{
  int iVar1;
  int in_ECX;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x2000)) &&
     (((int)param_2 < 0x2000 &&
      (iVar1 = *(int *)(in_ECX + 0xb0 +
                       (((int)(((int)(param_1 * 8) >> 0x1f & 0x3fU) + param_1 * 8) >> 6) * 0x400 +
                       ((int)(param_2 * 8 + ((int)(param_2 * 8) >> 0x1f & 0x3fU)) >> 6)) * 4),
      iVar1 != 0)))) {
    param_1 = param_1 & 0x80000007;
    if ((int)param_1 < 0) {
      param_1 = (param_1 - 1 | 0xfffffff8) + 1;
    }
    param_2 = param_2 & 0x80000007;
    if ((int)param_2 < 0) {
      param_2 = (param_2 - 1 | 0xfffffff8) + 1;
    }
    return (param_2 + (param_1 + 0x100) * 8) * 0x68 + iVar1;
  }
  return 0;
}


/* FUN_0062dc20 @ 0062dc20  kind=gamemisc  attributed-by=caller-vote  size=163 */

void FUN_0062dc20(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  undefined1 local_48 [64];
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  pfVar4 = (float *)FUN_0062d7f0(local_48);
  fVar1 = pfVar4[5];
  fVar2 = pfVar4[1];
  fVar5 = 1.0 / (pfVar4[7] * 0.0 + pfVar4[3] * 0.0 + pfVar4[0xf]);
  fVar3 = pfVar4[0xd];
  *param_1 = fVar5 * (pfVar4[4] * 0.0 + *pfVar4 * 0.0 + pfVar4[0xc]);
  param_1[1] = fVar5 * (fVar1 * 0.0 + fVar2 * 0.0 + fVar3);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00635760 @ 00635760  kind=gamemisc  attributed-by=caller-vote  size=2168 */

void FUN_00635760(float param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int iVar12;
  float *pfVar13;
  int in_ECX;
  int iVar14;
  float *pfVar15;
  float *pfVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float local_4c;
  float local_48 [4];
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_4c = param_1;
  if (*(int *)((int)param_1 + 0x28) != 0) {
    FUN_00636870(param_1);
  }
  iVar12 = FUN_00583cb0(param_2,*(undefined4 *)(param_2 + 4),&local_4c);
  if (*(int *)(in_ECX + 0x30) == 0x15555554) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)(in_ECX + 0x30) = *(int *)(in_ECX + 0x30) + 1;
  *(int *)(param_2 + 4) = iVar12;
  **(int **)(iVar12 + 4) = iVar12;
  *(int *)((int)param_1 + 0x28) = in_ECX;
  iVar12 = *(int *)((int)param_1 + 0x38);
  pfVar13 = (float *)(iVar12 + 0x1b0);
  pfVar15 = (float *)(in_ECX + 0x48);
  pfVar16 = local_48;
  for (iVar14 = 0x10; fVar9 = local_20, fVar8 = local_24, fVar7 = local_28, fVar6 = local_30,
      fVar5 = local_34, fVar4 = local_38, fVar18 = local_48[2], fVar19 = local_48[1],
      fVar3 = local_48[0], iVar14 != 0; iVar14 = iVar14 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  fVar1 = *(float *)(iVar12 + 0x1e0);
  fVar2 = *(float *)(iVar12 + 0x1ec);
  local_48[0] = local_48[0] * *pfVar13 + local_38 * *(float *)(iVar12 + 0x1b4) +
                local_28 * *(float *)(iVar12 + 0x1b8) + local_18 * *(float *)(iVar12 + 0x1bc);
  local_38 = *(float *)(iVar12 + 0x1c0) * fVar3 + local_38 * *(float *)(iVar12 + 0x1c4) +
             local_28 * *(float *)(iVar12 + 0x1c8) + local_18 * *(float *)(iVar12 + 0x1cc);
  local_28 = *(float *)(iVar12 + 0x1d4) * fVar4 + *(float *)(iVar12 + 0x1d0) * fVar3 +
             local_28 * *(float *)(iVar12 + 0x1d8) + local_18 * *(float *)(iVar12 + 0x1dc);
  local_18 = *(float *)(iVar12 + 0x1e4) * fVar4 + fVar1 * fVar3 + *(float *)(iVar12 + 0x1e8) * fVar7
             + local_18 * fVar2;
  local_48[1] = local_48[1] * *pfVar13 + local_34 * *(float *)(iVar12 + 0x1b4) +
                local_24 * *(float *)(iVar12 + 0x1b8) + local_14 * *(float *)(iVar12 + 0x1bc);
  local_34 = *(float *)(iVar12 + 0x1c0) * fVar19 + local_34 * *(float *)(iVar12 + 0x1c4) +
             local_24 * *(float *)(iVar12 + 0x1c8) + local_14 * *(float *)(iVar12 + 0x1cc);
  local_24 = *(float *)(iVar12 + 0x1d4) * fVar5 + *(float *)(iVar12 + 0x1d0) * fVar19 +
             local_24 * *(float *)(iVar12 + 0x1d8) + local_14 * *(float *)(iVar12 + 0x1dc);
  local_14 = *(float *)(iVar12 + 0x1e4) * fVar5 + fVar1 * fVar19 +
             *(float *)(iVar12 + 0x1e8) * fVar8 + local_14 * fVar2;
  local_48[2] = local_48[2] * *pfVar13 + local_30 * *(float *)(iVar12 + 0x1b4) +
                local_20 * *(float *)(iVar12 + 0x1b8) + local_10 * *(float *)(iVar12 + 0x1bc);
  local_30 = *(float *)(iVar12 + 0x1c0) * fVar18 + local_30 * *(float *)(iVar12 + 0x1c4) +
             local_20 * *(float *)(iVar12 + 0x1c8) + local_10 * *(float *)(iVar12 + 0x1cc);
  local_20 = *(float *)(iVar12 + 0x1d4) * fVar6 + *(float *)(iVar12 + 0x1d0) * fVar18 +
             local_20 * *(float *)(iVar12 + 0x1d8) + local_10 * *(float *)(iVar12 + 0x1dc);
  local_10 = *(float *)(iVar12 + 0x1e4) * fVar6 + fVar1 * fVar18 +
             *(float *)(iVar12 + 0x1e8) * fVar9 + local_10 * fVar2;
  local_48[3] = local_48[3] * *pfVar13 + local_2c * *(float *)(iVar12 + 0x1b4) +
                local_1c * *(float *)(iVar12 + 0x1b8) + local_c * *(float *)(iVar12 + 0x1bc);
  local_2c = *(float *)(iVar12 + 0x1c0) * local_48[3] + local_2c * *(float *)(iVar12 + 0x1c4) +
             local_1c * *(float *)(iVar12 + 0x1c8) + local_c * *(float *)(iVar12 + 0x1cc);
  local_1c = *(float *)(iVar12 + 0x1d4) * local_2c + *(float *)(iVar12 + 0x1d0) * local_48[3] +
             local_1c * *(float *)(iVar12 + 0x1d8) + local_c * *(float *)(iVar12 + 0x1dc);
  local_c = *(float *)(iVar12 + 0x1e4) * local_2c + fVar1 * local_48[3] +
            *(float *)(iVar12 + 0x1e8) * local_1c + local_c * fVar2;
  pfVar15 = local_48;
  pfVar16 = (float *)((int)param_1 + 0x48);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  fVar3 = *(float *)(in_ECX + 0x8c);
  fVar19 = *(float *)(in_ECX + 0x88);
  pfVar15 = (float *)(*(int *)((int)param_1 + 0x38) + 0x1f0);
  pfVar16 = local_48;
  for (iVar12 = 0x10; fVar11 = local_20, fVar10 = local_24, fVar2 = local_28, fVar1 = local_2c,
      fVar9 = local_30, fVar8 = local_34, fVar7 = local_38, fVar6 = local_48[3], fVar5 = local_48[2]
      , fVar4 = local_48[1], fVar18 = local_48[0], iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  local_48[0] = fVar19 * local_48[0] + fVar3 * local_38 + *(float *)(in_ECX + 0x90) * local_28 +
                *(float *)(in_ECX + 0x94) * local_18;
  fVar3 = *(float *)(in_ECX + 0xbc);
  fVar19 = *(float *)(in_ECX + 0xc0);
  fVar17 = *(float *)(in_ECX + 0xac) * local_38;
  local_38 = *(float *)(in_ECX + 0x98) * fVar18 + *(float *)(in_ECX + 0x9c) * local_38 +
             *(float *)(in_ECX + 0xa0) * local_28 + *(float *)(in_ECX + 0xa4) * local_18;
  local_28 = *(float *)(in_ECX + 0xa8) * fVar18 + fVar17 + *(float *)(in_ECX + 0xb0) * local_28 +
             *(float *)(in_ECX + 0xb4) * local_18;
  local_18 = *(float *)(in_ECX + 0xb8) * fVar18 + fVar3 * fVar7 + fVar19 * fVar2 +
             *(float *)(in_ECX + 0xc4) * local_18;
  local_48[1] = *(float *)(in_ECX + 0x88) * local_48[1] + *(float *)(in_ECX + 0x8c) * local_34 +
                *(float *)(in_ECX + 0x90) * local_24 + *(float *)(in_ECX + 0x94) * local_14;
  fVar18 = *(float *)(in_ECX + 0xac) * local_34;
  local_34 = *(float *)(in_ECX + 0x98) * fVar4 + *(float *)(in_ECX + 0x9c) * local_34 +
             *(float *)(in_ECX + 0xa0) * local_24 + *(float *)(in_ECX + 0xa4) * local_14;
  local_24 = *(float *)(in_ECX + 0xa8) * fVar4 + fVar18 + *(float *)(in_ECX + 0xb0) * local_24 +
             *(float *)(in_ECX + 0xb4) * local_14;
  local_14 = *(float *)(in_ECX + 0xb8) * fVar4 + fVar3 * fVar8 + fVar19 * fVar10 +
             *(float *)(in_ECX + 0xc4) * local_14;
  local_48[2] = *(float *)(in_ECX + 0x8c) * local_30 + *(float *)(in_ECX + 0x88) * local_48[2] +
                *(float *)(in_ECX + 0x90) * local_20 + *(float *)(in_ECX + 0x94) * local_10;
  fVar18 = *(float *)(in_ECX + 0xac) * local_30;
  local_30 = *(float *)(in_ECX + 0x98) * fVar5 + *(float *)(in_ECX + 0x9c) * local_30 +
             *(float *)(in_ECX + 0xa0) * local_20 + *(float *)(in_ECX + 0xa4) * local_10;
  local_20 = *(float *)(in_ECX + 0xa8) * fVar5 + fVar18 + *(float *)(in_ECX + 0xb0) * local_20 +
             *(float *)(in_ECX + 0xb4) * local_10;
  local_10 = *(float *)(in_ECX + 0xb8) * fVar5 + fVar3 * fVar9 + fVar19 * fVar11 +
             *(float *)(in_ECX + 0xc4) * local_10;
  local_48[3] = *(float *)(in_ECX + 0x8c) * local_2c + *(float *)(in_ECX + 0x88) * local_48[3] +
                *(float *)(in_ECX + 0x90) * local_1c + *(float *)(in_ECX + 0x94) * local_c;
  fVar19 = fVar19 * local_1c;
  local_4c = *(float *)(in_ECX + 0xa8) * fVar6;
  local_2c = *(float *)(in_ECX + 0x9c) * local_2c + *(float *)(in_ECX + 0x98) * fVar6 +
             *(float *)(in_ECX + 0xa0) * local_1c + *(float *)(in_ECX + 0xa4) * local_c;
  local_1c = local_4c + *(float *)(in_ECX + 0xac) * fVar1 + *(float *)(in_ECX + 0xb0) * local_1c +
             *(float *)(in_ECX + 0xb4) * local_c;
  local_c = *(float *)(in_ECX + 0xb8) * fVar6 + *(float *)(in_ECX + 0xbc) * fVar1 + fVar19 +
            *(float *)(in_ECX + 0xc4) * local_c;
  pfVar15 = local_48;
  pfVar16 = (float *)((int)param_1 + 0x88);
  for (iVar12 = 0x10; iVar12 != 0; iVar12 = iVar12 + -1) {
    *pfVar16 = *pfVar15;
    pfVar15 = pfVar15 + 1;
    pfVar16 = pfVar16 + 1;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00635fe0 @ 00635fe0  kind=gamemisc  attributed-by=caller-vote  size=94 */

undefined4 FUN_00635fe0(int param_1,int param_2)

{
  undefined4 *puVar1;
  int in_ECX;
  
  if (param_2 == 0) {
    FUN_00630be0(param_1);
    return 1;
  }
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00636870(param_1);
  }
  puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x2c);
  while( true ) {
    if (puVar1 == *(undefined4 **)(in_ECX + 0x2c)) {
      return 0;
    }
    if (puVar1[2] == param_2) break;
    puVar1 = (undefined4 *)*puVar1;
  }
  FUN_00635760(param_1,puVar1);
  return 1;
}


/* Facet_Register @ 0068d5b7  kind=gamemisc  attributed-by=caller-vote  size=40 */

/* Library Function - Multiple Matches With Same Base Name
    private: static void __cdecl std::locale::facet::_Facet_Register(class std::locale::facet *)
    void __cdecl std::_Facet_Register(class std::_Facet_base *)
   
   Libraries: Visual Studio 2010 Release, Visual Studio 2012 Release */

void Facet_Register(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(8);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    *puVar1 = DAT_0076df54;
    puVar1[1] = param_1;
  }
  DAT_0076df54 = puVar1;
  return;
}


