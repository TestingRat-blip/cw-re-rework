// Proven (entity) -- cube. 11 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Proven.h"

/* Creature_drawModel @ 004128f0  kind=game  attributed-by=ledger  size=26870 */
// (decompilation unavailable)
undefined FUN_004128f0(void) { }

/* GameController_onItemPickup @ 004709c0  kind=game  attributed-by=ledger  size=954 */

void FUN_004709c0(void)

{
  int iVar1;
  char cVar2;
  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_> *in_ECX;
  int *piVar3;
  int *piVar4;
  short sVar5;
  int iVar6;
  int local_27c;
  int local_278;
  int local_270;
  undefined2 local_26c [2];
  undefined4 local_268;
  undefined4 local_264;
  undefined2 local_260;
  undefined1 local_25e;
  undefined2 local_25c;
  undefined1 local_258 [256];
  undefined4 local_158;
  char local_154;
  char local_153;
  byte local_146;
  short local_144;
  void *local_3c [5];
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006e5928;
  local_10 = ExceptionList;
  local_14 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  FUN_0040ee70(&in_ECX[0x25ef2].
                basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data.
                field_0x50);
  cVar2 = FUN_0043e4a0(&local_154);
  if (cVar2 == '\0') {
    FUN_0040eb60(L"You can\'t carry more of these items.\n");
    local_8 = 0;
    local_24 = 0x3f800000;
    local_20 = 0x3e4ccccd;
    local_1c = 0x3e4ccccd;
    local_18 = 0x3f800000;
    FUN_0043ab30(local_3c,&local_24);
    local_8 = 0xffffffff;
    if (7 < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c[0]);
    }
    FUN_00484350(0x31,*(int *)&in_ECX[0x12f78].
                               basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                               .field_0x1c + 0x10,0x3f800000,0x3f800000);
  }
  else {
    iVar6 = *(int *)&in_ECX[0x25ef5].
                     basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                     .field_0x28;
    if (iVar6 != *(int *)&in_ECX[0x25ef5].
                          basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                          .field_0x2c) {
      do {
        iVar1 = *(int *)&in_ECX[0x12f78].
                         basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                         .field_0x1c;
        local_27c = *(int *)(iVar6 + 0x118);
        piVar3 = (int *)(iVar1 + 0x11dc);
        local_278 = 0;
        if (0 < (*(int *)(iVar1 + 0x11e0) - *piVar3) / 0xc) {
          local_270 = 0;
          do {
            piVar4 = *(int **)(local_270 + *piVar3);
            if (piVar4 != *(int **)(local_270 + 4 + *piVar3)) {
              do {
                cVar2 = FUN_0042f4a0(iVar6);
                if (cVar2 != '\0') {
                  if (local_27c < *piVar4) {
                    *piVar4 = *piVar4 - local_27c;
                    break;
                  }
                  local_25c = 1;
                  *piVar4 = 0;
                  local_26c[0] = 0;
                  local_268 = 0;
                  local_264 = 0;
                  local_260 = 0;
                  local_25e = 0;
                  local_158 = 0;
                  memset(local_258,0,0x100);
                  FUN_0042c5e0(local_26c);
                  local_27c = local_27c - *piVar4;
                  if (local_27c == 0) break;
                }
                piVar4 = piVar4 + 0x47;
              } while (piVar4 != *(int **)(*(int *)(*(int *)&in_ECX[0x12f78].
                                                                                                                          
                                                  basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                                  .field_0x1c + 0x11dc) + 4 + local_270));
            }
            iVar1 = *(int *)&in_ECX[0x12f78].
                             basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                             .field_0x1c;
            local_278 = local_278 + 1;
            piVar3 = (int *)(iVar1 + 0x11dc);
            local_270 = local_270 + 0xc;
          } while (local_278 < (*(int *)(iVar1 + 0x11e0) - *(int *)(iVar1 + 0x11dc)) / 0xc);
        }
        iVar6 = iVar6 + 0x11c;
      } while (iVar6 != *(int *)&in_ECX[0x25ef5].
                                 basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                                 .field_0x2c);
    }
    if (((((local_154 == '\x03') || (local_154 == '\x04')) || (local_154 == '\a')) ||
        ((local_154 == '\x06' || (local_154 == '\x05')))) ||
       ((local_154 == '\b' || (local_154 == '\t')))) {
      local_146 = local_146 | 1;
    }
    FUN_00484350(0x59,&in_ECX[2].vftablePtr,0x3f800000,0x3f800000);
    if (((local_154 == '\v') && (local_153 != '\x1a')) && (iVar6 = rand(), iVar6 % 5 == 0)) {
      sVar5 = 1;
      iVar6 = rand();
      if (iVar6 % 5 == 0) {
        sVar5 = 2;
        iVar6 = rand();
        if (iVar6 % 5 == 0) {
          sVar5 = 3;
        }
      }
      local_144 = local_144 + sVar5;
      FUN_00484350(0x5a,&in_ECX[2].vftablePtr,0x3f800000,0x3f800000);
    }
    FUN_0046ebe0(&local_154,0xffffffff);
    FUN_004c6350();
    FUN_004c64c0();
    std::basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>::
    basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_Constructor_or_Destructor
              (in_ECX,&local_154,
               *(int *)&in_ECX[0x12f78].
                        basic_stringstream<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t>_>_data
                        .field_0x1c);
    FUN_004a14c0();
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* findNearestEntityInGrid @ 00477e10  kind=game  attributed-by=ledger  size=380 */

void FUN_00477e10(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int in_ECX;
  int iVar7;
  int iVar8;
  float10 fVar9;
  int local_24;
  int local_20;
  float local_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  iVar3 = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (int)((param_1 + 0x4000 >> 0x1f & 0x3fffU) + param_1 + 0x4000) >> 0xe;
  FUN_005eefa0(&local_10,param_1,param_2);
  local_24 = 0;
  local_20 = 0;
  uVar5 = (uint)((float)param_1 + local_10);
  uVar6 = (uint)((float)param_2 + local_c);
  if (iVar3 <= iVar7) {
    iVar8 = iVar3 * 0x400 + 0x10002f;
    iVar2 = iVar4;
    do {
      for (; iVar2 <= (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar2 = iVar2 + 1) {
        if ((((-1 < iVar3) && (-1 < iVar2)) && (iVar8 < 0x20002f)) &&
           ((iVar2 < 0x400 && (iVar1 = *(int *)(in_ECX + (iVar8 + iVar2) * 4), iVar1 != 0)))) {
          fVar9 = (float10)FUN_005eeee0(iVar1,uVar5 << 0x10,
                                        ((int)uVar5 >> 0x1f) << 0x10 | uVar5 >> 0x10,uVar6 << 0x10,
                                        ((int)uVar6 >> 0x1f) << 0x10 | uVar6 >> 0x10);
          if ((local_24 == 0) || ((int)fVar9 < local_20)) {
            local_24 = iVar1;
            local_20 = (int)fVar9;
          }
        }
      }
      iVar3 = iVar3 + 1;
      iVar8 = iVar8 + 0x400;
      iVar2 = iVar4;
    } while (iVar3 <= iVar7);
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* GameController_updateSelectedEntity @ 004889e0  kind=game  attributed-by=ledger  size=412 */

void FUN_004889e0(void)

{
  char cVar1;
  int iVar2;
  int in_ECX;
  int iVar3;
  int local_8;
  
  local_8 = in_ECX;
  FUN_00477d90(&local_8,in_ECX + 0x800a70);
  if (local_8 == *(int *)(in_ECX + 0x2e8)) {
    iVar3 = 0;
  }
  else {
    iVar3 = *(int *)(local_8 + 0x18);
  }
  *(int *)(in_ECX + 0x8008d8) = iVar3;
  local_8 = iVar3;
  if (iVar3 == 0) {
    iVar3 = FUN_0046fac0();
    if ((iVar3 != 0) && ((*(uint *)(iVar3 + 0x198) & *(uint *)(iVar3 + 0x19c)) == 0xffffffff)) {
      iVar2 = *(int *)(in_ECX + 0x8006d0);
      *(undefined4 *)(iVar2 + 0x198) = *(undefined4 *)(iVar3 + 8);
      *(undefined4 *)(iVar2 + 0x19c) = *(undefined4 *)(iVar3 + 0xc);
      return;
    }
  }
  else {
    cVar1 = *(char *)(iVar3 + 0x140);
    if (cVar1 == -0x7d) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x8008f8) + 0x3c);
      *(undefined4 *)(*(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x68) * 4) = 1;
      iVar3 = *(int *)(in_ECX + 0x8008fc);
      *(undefined4 *)(iVar3 + 0x160) = 0xffffffff;
      *(undefined4 *)(iVar3 + 0x164) = 0xffffffff;
      *(undefined4 *)(*(int *)(in_ECX + 0x8008fc) + 0x168) = 1;
      return;
    }
    if (((cVar1 == -0x80) || (cVar1 == -0x7f)) || (cVar1 == -0x7e)) {
      FUN_004a2300();
      iVar2 = *(int *)(*(int *)(in_ECX + 0x8008c4) + 0x3c);
      *(undefined4 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0x68) * 4) = 1;
      iVar2 = *(int *)(*(int *)(in_ECX + 0x8008bc) + 0x3c);
      *(undefined4 *)(*(int *)(iVar2 + 0x94) + *(int *)(iVar2 + 0x68) * 4) = 1;
      *(undefined4 *)(*(int *)(in_ECX + 0x80095c) + 0x1b4) = 0;
      FUN_0044ad30(iVar3 + 0x11dc);
      *(undefined4 *)(in_ECX + 0x800c18) = *(undefined4 *)(iVar3 + 0x11e8);
      FUN_0042c5e0(iVar3 + 0x11ec);
      *(undefined4 *)(in_ECX + 0x800d34) = *(undefined4 *)(iVar3 + 0x1304);
      *(undefined4 *)(in_ECX + 0x800d38) = *(undefined4 *)(iVar3 + 0x1308);
    }
    if (*(char *)(local_8 + 0x140) == -0x77) {
      iVar3 = *(int *)(*(int *)(in_ECX + 0x800900) + 0x3c);
      *(undefined4 *)(*(int *)(iVar3 + 0x94) + *(int *)(iVar3 + 0x68) * 4) = 1;
    }
  }
  return;
}


/* item_computeBlockValue @ 004c6a90  kind=gamemisc  attributed-by=ledger  size=197 */

float10 FUN_004c6a90(void)

{
  char cVar1;
  char *in_ECX;
  float10 fVar2;
  float fVar3;
  float local_8;
  
  cVar1 = *in_ECX;
  if ((((cVar1 != '\x04') && (cVar1 != '\a')) && (cVar1 != '\x05')) && (cVar1 != '\x06')) {
    return (float10)0;
  }
  fVar3 = 0.5;
  local_8 = 0.5;
  if (cVar1 == '\x04') {
    fVar3 = 1.0;
    local_8 = 1.0;
  }
  switch(in_ECX[0xd]) {
  case '\x12':
    local_8 = fVar3 * 0.8;
    break;
  case '\x13':
  case '\x1a':
  case '\x1b':
    local_8 = fVar3 * 0.85;
    break;
  case '\x17':
  case '\x19':
    local_8 = fVar3 * 0.75;
  }
  fVar2 = (float10)FUN_00445f60((float)*(int *)(in_ECX + 0x114) * 0.1 +
                                (float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
  return (float10)((float)fVar2 * local_8);
}


/* item_computeValue @ 004c6e10  kind=gamemisc  attributed-by=ledger  size=221 */

float10 FUN_004c6e10(void)

{
  char *in_ECX;
  float10 fVar1;
  
  if (*in_ECX == '\x01') {
    switch(in_ECX[1]) {
    case '\x01':
    case '\x02':
      fVar1 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
      return (float10)((float)fVar1 * 200.0);
    case '\x04':
    case '\x05':
    case '\x06':
      fVar1 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
      return (float10)((float)fVar1 * 200.0);
    case '\b':
    case '\t':
      fVar1 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
      return (float10)((float)fVar1 * 100.0);
    }
  }
  return (float10)0;
}


/* item_computeStat_armor @ 004c70b0  kind=gamemisc  attributed-by=ledger  size=260 */

float10 FUN_004c70b0(void)

{
  char cVar1;
  char *in_ECX;
  float10 fVar2;
  float local_c;
  float local_8;
  
  cVar1 = *in_ECX;
  if ((((cVar1 != '\x03') && (cVar1 != '\x04')) && (cVar1 != '\a')) &&
     ((cVar1 != '\x05' && (cVar1 != '\x06')))) {
    return (float10)0;
  }
  local_c = 0.5;
  if (cVar1 == '\x04') {
    local_c = 1.0;
  }
  cVar1 = in_ECX[0xd];
  local_8 = (1.0 - ((float)(int)((ulonglong)(uint)(*(int *)(in_ECX + 4) << 3) % 0x15) + 0.0) / 20.0)
            + 1.0;
  if (cVar1 == '\x01') {
    local_8 = local_8 + 1.0;
  }
  else if (cVar1 == '\x1a') {
    local_8 = local_8 + 0.5;
  }
  else if (cVar1 == '\x1b') {
    local_8 = local_8 + 0.75;
  }
  fVar2 = (float10)FUN_00445f60((float)*(int *)(in_ECX + 0x114) * 0.1 +
                                (float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
  return (float10)((float)fVar2 * 5.0 * local_c * local_8);
}


/* item_valueByType @ 004c76e0  kind=game  attributed-by=ledger  size=282 */

int FUN_004c76e0(void)

{
  char cVar1;
  char *in_ECX;
  float10 fVar2;
  float local_8;
  
  local_8 = 0.2;
  switch(*in_ECX) {
  case '\x03':
  case '\x04':
    local_8 = 2.0;
    break;
  case '\x05':
  case '\x06':
  case '\t':
    local_8 = 1.0;
    break;
  case '\a':
  case '\b':
    local_8 = 1.5;
    break;
  case '\x17':
    local_8 = 100.0;
  }
  if ((*in_ECX == '\x03') &&
     ((((((cVar1 = in_ECX[1], cVar1 == '\x0f' || (cVar1 == '\x10')) || (cVar1 == '\x11')) ||
        ((cVar1 == '\x05' || (cVar1 == '\n')))) ||
       ((cVar1 == '\v' || ((cVar1 == '\x12' || (cVar1 == '\b')))))) ||
      ((cVar1 == '\x06' || (cVar1 == '\a')))))) {
    local_8 = local_8 * 2.0;
  }
  fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
  if ((int)((float)fVar2 * 10.0 * local_8) < 1) {
    return 1;
  }
  fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
  return (int)((float)fVar2 * 10.0 * local_8);
}


/* Item_compute_value @ 004c78c0  kind=game  attributed-by=ledger  size=232 */

float10 FUN_004c78c0(void)

{
  char cVar1;
  char *in_ECX;
  float10 fVar2;
  float local_c;
  float local_8;
  
  cVar1 = *in_ECX;
  if ((((cVar1 != '\x03') && (cVar1 != '\x04')) && (cVar1 != '\a')) &&
     ((cVar1 != '\x05' && (cVar1 != '\x06')))) {
    return (float10)0;
  }
  local_c = 0.1;
  if (cVar1 == '\x04') {
    local_c = 0.2;
  }
  local_8 = ((float)(int)((ulonglong)(uint)(*(int *)(in_ECX + 4) << 3) % 0x15) + 0.0) / 20.0;
  if (in_ECX[0xd] == '\x1a') {
    local_8 = local_8 + 0.5;
  }
  else if (in_ECX[0xd] == '\x1b') {
    local_8 = local_8 + 1.0;
  }
  fVar2 = (float10)FUN_00445f60((float)*(int *)(in_ECX + 0x114) * 0.1 +
                                (float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
  return (float10)((float)fVar2 * local_c * local_8);
}


/* item_computeStat_variant2 @ 004c7af0  kind=gamemisc  attributed-by=ledger  size=185 */

float10 FUN_004c7af0(void)

{
  char cVar1;
  char *in_ECX;
  float10 fVar2;
  float fVar3;
  float local_8;
  
  cVar1 = *in_ECX;
  if ((((cVar1 != '\x04') && (cVar1 != '\a')) && (cVar1 != '\x05')) && (cVar1 != '\x06')) {
    return (float10)0;
  }
  fVar3 = 0.5;
  local_8 = 0.5;
  if (cVar1 == '\x04') {
    fVar3 = 1.0;
    local_8 = 1.0;
  }
  switch(in_ECX[0xd]) {
  case '\x01':
  case '\x13':
    local_8 = fVar3 * 0.85;
    break;
  case '\x1a':
  case '\x1b':
    local_8 = fVar3 * 0.75;
  }
  fVar2 = (float10)FUN_00445f60((float)*(int *)(in_ECX + 0x114) * 0.1 +
                                (float)(int)*(short *)(in_ECX + 0x10),in_ECX[0xc]);
  return (float10)((float)fVar2 * local_8);
}


/* item_weaponDamage @ 004c7f60  kind=game  attributed-by=ledger  size=428 */

float10 FUN_004c7f60(void)

{
  char cVar1;
  char *in_ECX;
  float10 fVar2;
  float fVar3;
  
  if (*in_ECX != '\x03') {
    return (float10)0;
  }
  cVar1 = in_ECX[1];
  fVar3 = (float)*(int *)(in_ECX + 0x114) * 0.1;
  switch(cVar1) {
  case '\x03':
  case '\x04':
    fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10) + fVar3,in_ECX[0xc]);
    return (float10)((float)fVar2 * 2.0);
  case '\x05':
    fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10) + fVar3,in_ECX[0xc]);
    return (float10)((float)fVar2 * 4.0);
  case '\r':
    fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10) + fVar3,in_ECX[0xc]);
    return (float10)((float)fVar2 * 2.0);
  }
  if ((((((cVar1 != '\x0f') && (cVar1 != '\x10')) && (cVar1 != '\x11')) &&
       ((cVar1 != '\x05' && (cVar1 != '\n')))) &&
      ((cVar1 != '\v' && ((cVar1 != '\x12' && (cVar1 != '\b')))))) &&
     ((cVar1 != '\x06' && (cVar1 != '\a')))) {
    fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10) + fVar3,in_ECX[0xc]);
    return (float10)((float)fVar2 * 4.0);
  }
  fVar2 = (float10)FUN_00445f60((float)(int)*(short *)(in_ECX + 0x10) + fVar3,in_ECX[0xc]);
  return (float10)((float)fVar2 * 8.0);
}


