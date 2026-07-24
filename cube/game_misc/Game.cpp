// Game (game_misc) -- cube. 17 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Game.h"

/* powf_f @ 00411d10  kind=game  attributed-by=ledger  size=38 */

float10 FUN_00411d10(float param_1)

{
  double dVar1;
  
  dVar1 = (double)param_1;
  libm_sse2_pow_precise();
  return (float10)(float)dVar1;
}


/* math_round_to_tenth @ 00439110  kind=gamemisc  attributed-by=ledger  size=127 */

float10 FUN_00439110(float param_1)

{
  float10 fVar1;
  
  if (param_1 < 0.0) {
    fVar1 = (float10)FUN_00439110(-param_1);
    param_1 = -(float)fVar1;
    if (param_1 == 0.0) {
      param_1 = 0.0;
    }
    return (float10)param_1;
  }
  return (float10)((float)(int)(param_1 * 10.0 + 0.5) * 0.1);
}


/* curve_diminishing01 @ 0043c980  kind=gamemisc  attributed-by=ledger  size=63 */

float10 FUN_0043c980(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)(1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0));
}


/* combat_getAttackWindup @ 0043caa0  kind=game  attributed-by=ledger  size=898 */

int FUN_0043caa0(uint param_1)

{
  int in_ECX;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)(in_ECX + 0x68);
  }
  switch(param_1) {
  case 0:
  case 8:
  case 0xb:
  case 0x1c:
  case 0x32:
  case 0x37:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x60:
  case 0x62:
  case 0x68:
    return 0;
  case 1:
  case 9:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 2:
  case 3:
  case 4:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 5:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 6:
  case 7:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 10:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xc:
  case 0x10:
  case 0x43:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0xd:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0xe:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0xf:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x16:
    fVar1 = (float10)FUN_00447700();
    goto LAB_0043ce05;
  case 0x17:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x18:
  case 0x19:
  case 0x1b:
  case 0x24:
  case 0x3b:
  case 0x3f:
  case 0x40:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x1a:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  default:
    fVar1 = (float10)FUN_00447700();
LAB_0043ce05:
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x1e:
  case 0x20:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x1f:
  case 0x21:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1600.0;
    break;
  case 0x22:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1600.0;
    break;
  case 0x25:
  case 0x2b:
  case 0x59:
    if (*(char *)(in_ECX + 0xaa9) == '\f') {
      fVar1 = (float10)FUN_00447700();
      fVar3 = (float)fVar1;
      fVar2 = 600.0;
    }
    else {
      fVar1 = (float10)FUN_00447700();
      fVar3 = (float)fVar1;
      fVar2 = 1200.0;
    }
    break;
  case 0x26:
  case 0x2c:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x2d:
  case 0x2e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1200.0;
    break;
  case 0x30:
  case 0x65:
    return 100;
  case 0x36:
    return 400;
  case 0x39:
  case 0x3a:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x41:
  case 0x42:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4c:
  case 0x4d:
  case 0x4e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 300.0;
    break;
  case 0x47:
  case 0x48:
    return 200;
  case 0x57:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 5000.0;
    break;
  case 0x5b:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1000.0;
    break;
  case 0x5d:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 800.0;
    break;
  case 0x5e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x5f:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1000.0;
    break;
  case 0x69:
    return 5000;
  }
  return (int)(fVar2 / (fVar3 * *(float *)(in_ECX + 0x17c)));
}


/* ability_getManaCost @ 0043e6a0  kind=game  attributed-by=ledger  size=669 */

int FUN_0043e6a0(undefined4 param_1,undefined4 param_2)

{
  float10 fVar1;
  
  switch(param_1) {
  case 0x15:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(8000.0 - (float)fVar1 * 8000.0);
  default:
    return 0;
  case 0x30:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 12000.0);
  case 0x31:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(16000.0 - (float)fVar1 * 10000.0);
  case 0x32:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(16000.0 - (float)fVar1 * 10000.0);
  case 0x36:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 14000.0);
  case 0x48:
    return 15000;
  case 0x56:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 40000.0);
  case 0x58:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(8000.0 - (float)fVar1 * 8000.0);
  case 0x60:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 14000.0);
  case 0x61:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 99:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(12000.0 - (float)fVar1 * 10000.0);
  case 100:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 0x65:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 0x66:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(60000.0 - (float)fVar1 * 30000.0);
  case 0x67:
    fVar1 = (float10)FUN_0043ed60(param_1,param_2);
    return (int)(20000.0 - (float)fVar1 * 10000.0);
  }
}


/* combat_rollElementProc @ 004444a0  kind=gamemisc  attributed-by=ledger  size=128 */

bool FUN_004444a0(void)

{
  undefined4 *puVar1;
  int iVar2;
  int in_ECX;
  float10 fVar3;
  float local_8;
  
  puVar1 = (undefined4 *)**(undefined4 **)(in_ECX + 0x1178);
  do {
    if (puVar1 == *(undefined4 **)(in_ECX + 0x1178)) {
LAB_004444bf:
      fVar3 = (float10)FUN_0043ea40();
      local_8 = (float)fVar3 + *(float *)(in_ECX + 0x1190) * 0.15;
LAB_004444e5:
      iVar2 = rand();
      return (float)iVar2 / 32767.0 < local_8;
    }
    if (*(char *)(puVar1 + 2) == '\v') {
      if (puVar1 != (undefined4 *)0xfffffff8) {
        local_8 = 1.0;
        goto LAB_004444e5;
      }
      goto LAB_004444bf;
    }
    puVar1 = (undefined4 *)*puVar1;
  } while( true );
}


/* stat_calcAttackDamage @ 00444db0  kind=gamemisc  attributed-by=ledger  size=559 */

float10 FUN_00444db0(void)

{
  int in_ECX;
  float10 fVar1;
  double dVar2;
  double dVar3;
  float local_c;
  float local_8;
  
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  dVar3 = 2.0;
  libm_sse2_pow_precise();
  local_8 = (float)dVar3 * (float)dVar2 * *(float *)(in_ECX + 0x178);
  if (*(char *)(in_ECX + 0x60) == '\0') {
    dVar3 = 2.0;
    libm_sse2_pow_precise();
    local_8 = (float)dVar3 * (float)dVar2 * *(float *)(in_ECX + 0x178);
  }
  switch(*(char *)(in_ECX + 0x140)) {
  case '\x01':
    local_8 = local_8 * 1.3;
    break;
  case '\x02':
    local_8 = local_8 * 1.1;
    break;
  case '\x04':
    local_8 = local_8 * 1.2;
  }
  if ((*(char *)(in_ECX + 0x140) == '\x01') && (*(char *)(in_ECX + 0x141) == '\x01')) {
    local_8 = local_8 * 1.25;
  }
  if (*(char *)(in_ECX + 0x990) == '\x03') {
    fVar1 = (float10)FUN_004c70b0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    fVar1 = (float10)FUN_004c70b0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x530) == '\x04') {
    fVar1 = (float10)FUN_004c70b0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x648) == '\x06') {
    fVar1 = (float10)FUN_004c70b0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x760) == '\x05') {
    fVar1 = (float10)FUN_004c70b0();
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(in_ECX + 0x878) == '\a') {
    fVar1 = (float10)FUN_004c70b0();
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* math_pow2Mul @ 00445f60  kind=gamemisc  attributed-by=ledger  size=134 */

float10 FUN_00445f60(void)

{
  double dVar1;
  double dVar2;
  
  dVar1 = 2.0;
  libm_sse2_pow_precise();
  dVar2 = 2.0;
  libm_sse2_pow_precise();
  return (float10)((float)dVar1 * (float)dVar2);
}


/* Equipment_sum_slot_values @ 00446150  kind=game  attributed-by=ledger  size=414 */

float10 FUN_00446150(void)

{
  int in_ECX;
  float10 fVar1;
  undefined4 local_c;
  undefined4 local_8;
  
  local_8 = 0.0;
  if (*(char *)(in_ECX + 0x990) == '\x03') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + 0.0;
  }
  if (*(char *)(in_ECX + 0xaa8) == '\x03') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x530) == '\x04') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x648) == '\x06') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x760) == '\x05') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x878) == '\a') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0x418) == '\b') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  if (*(char *)(in_ECX + 0xbc0) == '\t') {
    fVar1 = (float10)FUN_004c78c0();
    local_8 = (float)fVar1 + local_8;
  }
  local_c = local_8;
  if (*(char *)(in_ECX + 0xcd8) == '\t') {
    fVar1 = (float10)FUN_004c78c0();
    local_c = (float)fVar1 + local_8;
  }
  return (float10)local_c;
}


/* curve_diminishingP1 @ 00446aa0  kind=gamemisc  attributed-by=ledger  size=70 */

float10 FUN_00446aa0(int param_1)

{
  if (param_1 < 1) {
    return (float10)0;
  }
  return (float10)((1.0 - 1.0 / ((float)param_1 * 0.1 + 1.0)) + 1.0);
}


/* combat_getReloadFrames @ 00447310  kind=gamemisc  attributed-by=ledger  size=662 */

int FUN_00447310(uint param_1)

{
  int in_ECX;
  float10 fVar1;
  float fVar2;
  float fVar3;
  
  if ((int)param_1 < 0) {
    param_1 = (uint)*(byte *)(in_ECX + 0x68);
  }
  switch(param_1) {
  case 0:
  case 0x31:
    return 0;
  case 1:
  case 2:
  case 9:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 3:
  case 4:
  case 0x3e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 5:
  case 0xc:
  case 0x10:
  case 0x11:
  case 0x41:
  case 0x42:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 6:
  case 7:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 150.0;
    break;
  default:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    goto LAB_00447589;
  case 10:
    return 200;
  case 0xb:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    goto LAB_00447589;
  case 0xd:
  case 0xe:
  case 0xf:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x12:
  case 0x13:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 150.0;
    break;
  case 0x14:
  case 0x15:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 400.0;
    break;
  case 0x16:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x17:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 50.0;
    break;
  case 0x1a:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1200.0;
    break;
  case 0x1e:
  case 0x20:
  case 0x49:
  case 0x5d:
    return 600;
  case 0x1f:
  case 0x21:
    return 0x4b0;
  case 0x22:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 1200.0;
    break;
  case 0x25:
  case 0x2b:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 100.0;
    break;
  case 0x26:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2a:
  case 0x2c:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    goto LAB_00447589;
  case 0x2d:
  case 0x2e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x32:
  case 0x4c:
  case 0x4d:
  case 0x4e:
  case 0x60:
    return 500;
  case 0x36:
    return 100;
  case 0x37:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x43:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 200.0;
    break;
  case 0x44:
  case 0x45:
    return 1000;
  case 0x47:
    return 3000;
  case 0x48:
  case 0x56:
    return 5000;
  case 0x4b:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    goto LAB_00447589;
  case 0x5b:
    return 6000;
  case 0x5e:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
    fVar2 = 500.0;
    break;
  case 0x5f:
    return 2000;
  case 0x68:
    fVar1 = (float10)FUN_00447700();
    fVar3 = (float)fVar1;
LAB_00447589:
    fVar2 = 300.0;
  }
  return (int)(fVar2 / (fVar3 * *(float *)(in_ECX + 0x17c)));
}


/* blob_deobfuscate @ 004496a0  kind=game  attributed-by=ledger  size=122 */

void FUN_004496a0(void)

{
  char *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int *in_ECX;
  uint uVar4;
  int iVar5;
  
  iVar5 = (in_ECX[1] - *in_ECX) + -1;
  while (-1 < iVar5) {
    iVar3 = *in_ECX;
    uVar4 = (uint)(*(int *)(&DAT_006ffa68 + (iVar5 % 0x2c) * 4) + iVar5) % (uint)(in_ECX[1] - iVar3)
    ;
    iVar5 = iVar5 + -1;
    uVar2 = *(undefined1 *)(iVar3 + 1 + iVar5);
    *(undefined1 *)(iVar3 + 1 + iVar5) = *(undefined1 *)(uVar4 + iVar3);
    *(undefined1 *)(uVar4 + iVar3) = uVar2;
  }
  iVar5 = 0;
  if (in_ECX[1] != *in_ECX && -1 < in_ECX[1] - *in_ECX) {
    do {
      pcVar1 = (char *)(*in_ECX + iVar5);
      iVar5 = iVar5 + 1;
      *pcVar1 = -1 - *pcVar1;
    } while (iVar5 < in_ECX[1] - *in_ECX);
  }
  return;
}


/* App_reset_device @ 004c8940  kind=game  attributed-by=ledger  size=401 */

void FUN_004c8940(void)

{
  LONG LVar1;
  LONG LVar2;
  int iVar3;
  int *piVar4;
  int local_54;
  int local_50;
  undefined4 local_4c;
  int local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_20;
  char local_19;
  tagRECT local_18;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_19 = DAT_0076b1d8 != 0;
  if ((bool)local_19) {
    local_18.right = DAT_0076b1dc;
    local_18.bottom = DAT_0076b1e0;
  }
  else {
    GetClientRect(DAT_0076b1c0,&local_18);
  }
  if ((0 < local_18.right) && (0 < local_18.bottom)) {
    if (DAT_0076b1b4 != (int *)0x0) {
      if (DAT_0076b1cc != 0) {
        FUN_0068a710();
        FUN_00659d70(0,0,local_18.right,local_18.bottom,1);
      }
      LVar2 = local_18.bottom;
      LVar1 = local_18.right;
      piVar4 = DAT_0076b1b4;
      memset(&local_54,0,0x38);
      if (DAT_0076b1e4 == 0) {
        local_44 = DAT_0076b1e4;
      }
      else {
        local_44 = DAT_0076b1e4 * 2;
      }
      local_40 = 0;
      local_34 = (uint)(local_19 == '\0');
      local_4c = 0x15;
      local_3c = 1;
      local_20 = 0x80000000;
      local_30 = 1;
      local_2c = 0x4b;
      local_54 = LVar1;
      local_50 = LVar2;
      if (DAT_0076b1c8 != (int *)0x0) {
        FUN_0046f450();
        piVar4 = DAT_0076b1b4;
      }
      iVar3 = (**(code **)(*piVar4 + 0x40))(piVar4,&local_54);
      while (iVar3 != 0) {
        Sleep(100);
        iVar3 = (**(code **)(*DAT_0076b1b4 + 0x40))(DAT_0076b1b4,&local_54);
      }
      if (DAT_0076b1c8 != (int *)0x0) {
        FUN_00477280();
        piVar4 = DAT_0076b1c8;
        iVar3 = *DAT_0076b1c8;
        DAT_0076b1c8[0x47] = local_18.right;
        piVar4[0x48] = local_18.bottom;
        (**(code **)(iVar3 + 0x10))(local_18.right,local_18.bottom);
      }
      if (DAT_0076b1cc != 0) {
        FUN_0068a6b0();
      }
    }
    DAT_0076b1d1 = 0;
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* WinMain @ 004c8ae0  kind=game  attributed-by=ledger  size=2647 */

void FUN_004c8ae0(HINSTANCE param_1)

{
  uint uVar1;
  char cVar2;
  ATOM AVar3;
  int *piVar4;
  int iVar5;
  LPWSTR lpCmdLine;
  LPWSTR *hMem;
  undefined4 uVar6;
  GameController *pGVar7;
  BOOL BVar8;
  HWND pHVar9;
  DWORD DVar10;
  int *piVar11;
  int iVar12;
  wchar_t *pwVar13;
  XAudio2Engine local_3a8;
  tagMSG local_374;
  WNDCLASSW local_358;
  int local_330;
  tagPOINT local_32c;
  HINSTANCE local_324;
  int *local_320;
  tagPOINT local_31c;
  int *local_314;
  tagPOINT local_310;
  int *local_308;
  int *local_304;
  int *local_300;
  int *local_2fc;
  WSADATA local_2f8;
  undefined1 local_168 [8];
  tagRECT local_160;
  undefined4 local_150;
  undefined4 uStack_14c;
  void *local_148 [4];
  undefined4 local_138;
  uint local_134;
  undefined1 local_130 [8];
  int local_128;
  uint local_124;
  char local_11c;
  char local_11b;
  char local_11a;
  int local_118 [2];
  int local_110;
  uint uStack_10c;
  undefined1 local_108 [2];
  char local_106;
  char local_105;
  char local_104;
  char local_103;
  char local_f8;
  char local_f7;
  char local_f6;
  char local_f5;
  char local_f4;
  char local_eb;
  char local_ea;
  char local_e9;
  char local_e8;
  char local_de;
  char local_cf;
  uint local_8;
  
  local_8 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  local_324 = param_1;
  DAT_0076b1c4 = param_1;
  WSAStartup(0x202,&local_2f8);
  local_358.style = 0;
  local_358.lpfnWndProc = FUN_004c83f0;
  local_358.cbClsExtra = 0;
  local_358.cbWndExtra = 0;
  local_358.hInstance = DAT_0076b1c4;
  local_358.hIcon = LoadIconW(DAT_0076b1c4,L"Cube");
  local_358.hCursor = (HCURSOR)0x0;
  local_358.hbrBackground = (HBRUSH)0x6;
  local_358.lpszMenuName = L"Cube";
  local_358.lpszClassName = L"Cube";
  AVar3 = RegisterClassW(&local_358);
  if ((AVar3 == 0) ||
     (DAT_0076b1c0 = CreateWindowExW(0,L"Cube",L"Cube",0x6cf0000,200,200,800,600,(HWND)0x0,
                                     (HMENU)0x0,DAT_0076b1c4,(LPVOID)0x0), DAT_0076b1c0 == (HWND)0x0
     )) goto LAB_004c9534;
  cVar2 = FUN_004c8720();
  if (cVar2 == '\0') {
    MessageBoxA(DAT_0076b1c0,
                "Could not initialize Direct3D. Please make sure the latest DirectX End-User Runtime is installed: http://www.microsoft.com/en-us/download/details.aspx?id=35"
                ,"Cube World",0);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  local_31c.y = (**(code **)(*DAT_0076b1b8 + 0x18))(DAT_0076b1b8,0,0x16);
  local_304 = (int *)0x0;
  local_300 = (int *)0x0;
  local_2fc = (int *)0x0;
  local_310.y = 0;
  if (local_31c.y != 0) {
    do {
      (**(code **)(*DAT_0076b1b8 + 0x1c))(DAT_0076b1b8,0,0x16,local_310.y,&local_128);
      local_32c.y = (LONG)local_304;
      if (local_304 != local_300) {
        local_110 = local_128;
        uStack_10c = local_124;
        iVar5 = (int)&local_110 - (int)local_304;
        piVar4 = local_304;
        do {
          iVar12 = 0;
          piVar11 = piVar4;
          while (*piVar11 == *(int *)(iVar5 + (int)piVar11)) {
            iVar12 = iVar12 + 1;
            piVar11 = piVar11 + 1;
            if (1 < iVar12) goto LAB_004c8d73;
          }
          piVar4 = piVar4 + 2;
          iVar5 = iVar5 + -8;
        } while (piVar4 != local_300);
      }
      local_118[0] = local_128;
      local_118[1] = local_124;
      if ((local_118 < local_300) && (local_304 <= local_118)) {
        iVar5 = (int)local_118 - (int)local_304 >> 3;
        if (local_300 == local_2fc) {
          FUN_005fbc10(1);
        }
        if (local_300 != (int *)0x0) {
          *local_300 = local_304[iVar5 * 2];
          local_300[1] = local_304[iVar5 * 2 + 1];
        }
      }
      else {
        if (local_300 == local_2fc) {
          FUN_005fbc10(1);
        }
        if (local_300 != (int *)0x0) {
          *(ulonglong *)local_300 = CONCAT44(local_118[1],local_118[0]);
        }
      }
      local_300 = local_300 + 2;
LAB_004c8d73:
      local_310.y = local_310.y + 1;
      param_1 = local_324;
    } while ((uint)local_310.y < (uint)local_31c.y);
  }
  DAT_0076b1dc = GetSystemMetrics(0);
  DAT_0076b1e0 = GetSystemMetrics(1);
  FUN_004ce6e0();
  cube::XAudio2Engine::XAudio2Engine(&local_3a8);
  cVar2 = FUN_00623530();
  if (cVar2 == '\0') {
    MessageBoxA(DAT_0076b1c0,
                "Could not initialize XAudio2. Please make sure the latest DirectX End-User Runtime is installed: http://www.microsoft.com/en-us/download/details.aspx?id=35"
                ,"Cube World",0);
  }
  else {
    cube::XAudio2Engine::vfunction6(&local_3a8,(float)DAT_0076b1f0 * 0.01,0);
    iVar5 = DirectInput8Create(param_1,0x800,&DAT_0071e290,&local_320,0);
    if (iVar5 == 0) {
      (**(code **)(*local_320 + 0xc))(local_320,&DAT_0071e2f0,&local_314);
      (**(code **)(*local_314 + 0x2c))(local_314,&DAT_0071e6f4);
      (**(code **)(*local_314 + 0x1c))(local_314);
      (**(code **)(*local_320 + 0xc))(local_320,&DAT_0071e2e0,&local_308,0);
      (**(code **)(*local_308 + 0x2c))(local_308,&DAT_0071e4ec);
      (**(code **)(*local_308 + 0x34))(local_308,DAT_0076b1c0,10);
      (**(code **)(*local_308 + 0x1c))(local_308);
      piVar4 = &local_330;
      local_330 = 0;
      local_310.y = local_310.y & 0xffffff00;
      local_134 = 0xf;
      local_138 = 0;
      local_148[0] = (void *)((uint)local_148[0] & 0xffffff00);
      lpCmdLine = GetCommandLineW();
      hMem = CommandLineToArgvW(lpCmdLine,piVar4);
      if (hMem != (LPWSTR *)0x0) {
        if (1 < local_330) {
          pwVar13 = L"server";
          uVar6 = FUN_0040eb60(hMem[1]);
          cVar2 = FUN_00439190(uVar6,pwVar13);
          FUN_00593e50();
          if (cVar2 == '\0') {
            FUN_0040eb60(hMem[1]);
            uVar6 = FUN_00659f50(local_130,local_168);
            FUN_00404090(uVar6);
            FUN_00403eb0();
            FUN_00593e50();
          }
          else {
            local_310.y = CONCAT31(local_310.y._1_3_,1);
          }
        }
        LocalFree(hMem);
      }
      _mkdir("Save");
      pGVar7 = operator_new(0x1001018);
      if (pGVar7 == (GameController *)0x0) {
        DAT_0076b1c8 = (int *)0x0;
      }
      else {
        DAT_0076b1c8 = (int *)cube::GameController::GameController
                                        (pGVar7,DAT_0076b1b4,DAT_0076b1bc,DAT_0076b1cc,&local_3a8,
                                         &DAT_0076b1d8,&local_304,local_310.y,local_148);
      }
      ShowWindow(DAT_0076b1c0,3);
      SetCursor((HCURSOR)0x0);
      ShowCursor(0);
      UpdateWindow(DAT_0076b1c0);
      SetFocus(DAT_0076b1c0);
      timeBeginPeriod(1);
LAB_004c9057:
      local_324 = (HINSTANCE)timeGetTime();
      BVar8 = PeekMessageW(&local_374,(HWND)0x0,0,0,0);
      if (BVar8 == 1) {
        BVar8 = GetMessageW(&local_374,(HWND)0x0,0,0);
        if (BVar8 == 0) goto LAB_004c9461;
        TranslateMessage(&local_374);
        DispatchMessageW(&local_374);
      }
      if ((char)DAT_0076b1c8[0x68] != '\0') {
        PostQuitMessage(0);
      }
      if (DAT_00766218 != '\0') {
        GetClientRect(DAT_0076b1c0,&local_160);
        GetCursorPos(&local_31c);
        ScreenToClient(DAT_0076b1c0,&local_31c);
        cVar2 = (**(code **)(*DAT_0076b1c8 + 4))();
        if (cVar2 == '\0') {
          pHVar9 = GetFocus();
          if (pHVar9 == DAT_0076b1c0) {
            local_31c.x = local_160.right / 2;
            local_31c.y = local_160.bottom / 2;
            DAT_0076b1d0 = '\0';
            ClientToScreen(DAT_0076b1c0,&local_31c);
            SetCursorPos(local_31c.x,local_31c.y);
          }
        }
        else {
          if (DAT_0076b1d0 == '\0') {
            local_32c.x = (LONG)(float)DAT_0076b1cc[0x35];
            local_32c.y = (LONG)(float)DAT_0076b1cc[0x36];
            ClientToScreen(DAT_0076b1c0,&local_32c);
            SetCursorPos(local_32c.x,local_32c.y);
          }
          DAT_0076b1d0 = '\x01';
        }
        if ((DAT_00766218 != '\0') && (pHVar9 = GetFocus(), pHVar9 == DAT_0076b1c0)) {
          (**(code **)(*local_314 + 0x24))(local_314,0x100,local_108);
          *(bool *)((int)DAT_0076b1c8 + 0xb) = local_f7 != '\0';
          *(bool *)(DAT_0076b1c8 + 3) = local_e9 != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0xd) = local_ea != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0xe) = local_e8 != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0x11) = local_f6 != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0xf) = local_f5 != '\0';
          *(bool *)(DAT_0076b1c8 + 4) = local_f4 != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0x12) = local_cf != '\0';
          *(bool *)(DAT_0076b1c8 + 5) = local_de != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0x13) = local_eb != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0x17) = local_f8 != '\0';
          (**(code **)(*local_308 + 0x24))(local_308,0x10,&local_128);
          cVar2 = (**(code **)(*DAT_0076b1c8 + 4))();
          iVar5 = local_128;
          uVar1 = local_124;
          if ((cVar2 != '\0') &&
             (GetCursorPos(&local_310), iVar5 = local_310.x, uVar1 = local_310.y, DAT_0076b1d8 == 0)
             ) {
            ScreenToClient(DAT_0076b1c0,&local_310);
            iVar5 = local_310.x;
            uVar1 = local_310.y;
          }
          (**(code **)(*DAT_0076b1c8 + 0x18))((float)iVar5,(float)(int)uVar1);
          *(bool *)(DAT_0076b1c8 + 1) = local_11c != '\0';
          *(bool *)((int)DAT_0076b1c8 + 0x15) = local_de != '\0';
          *(bool *)((int)DAT_0076b1c8 + 10) = local_11a != '\0';
          *(bool *)((int)DAT_0076b1c8 + 5) = local_11b != '\0';
          *(bool *)((int)DAT_0076b1c8 + 6) = local_106 != '\0';
          *(bool *)((int)DAT_0076b1c8 + 7) = local_105 != '\0';
          *(bool *)(DAT_0076b1c8 + 2) = local_104 != '\0';
          *(bool *)((int)DAT_0076b1c8 + 9) = local_103 != '\0';
          local_110 = 0;
          uStack_10c = 0;
          piVar4 = DAT_0076b1c8;
          piVar4[0x49] = 0;
          piVar4[0x4a] = 0;
          local_150 = 0;
          uStack_14c = 0;
          piVar4 = DAT_0076b1c8;
          piVar4[0x4b] = 0;
          piVar4[0x4c] = 0;
        }
      }
      FUN_004c85f0();
      DVar10 = timeGetTime();
      if ((int)(DVar10 - (int)local_324) < DAT_0076b1c8[0x67]) {
        Sleep(DAT_0076b1c8[0x67] - (DVar10 - (int)local_324));
      }
      goto LAB_004c9057;
    }
    MessageBoxA(DAT_0076b1c0,
                "Could not initialize DirectInput8. Please make sure the latest DirectX End-User Runtime is installed: http://www.microsoft.com/en-us/download/details.aspx?id=35"
                ,"Cube World",0);
  }
  goto LAB_004c9514;
LAB_004c9461:
  timeEndPeriod(1);
  if (DAT_0076b1c8 != (int *)0x0) {
    (**(code **)*DAT_0076b1c8)(1);
  }
  if (DAT_0076b1cc != (undefined4 *)0x0) {
    (**(code **)*DAT_0076b1cc)(1);
  }
  (**(code **)(*local_314 + 8))(local_314);
  (**(code **)(*local_308 + 8))(local_308);
  (**(code **)(*local_320 + 8))(local_320);
  if (DAT_0076b1bc != (undefined4 *)0x0) {
    (**(code **)*DAT_0076b1bc)(1);
  }
  if (DAT_0076b1b4 != (int *)0x0) {
    (**(code **)(*DAT_0076b1b4 + 8))(DAT_0076b1b4);
  }
  if (DAT_0076b1b8 != (int *)0x0) {
    (**(code **)(*DAT_0076b1b8 + 8))(DAT_0076b1b8);
  }
  WSACleanup();
  if (0xf < local_134) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_148[0]);
  }
  local_134 = 0xf;
  local_138 = 0;
  local_148[0] = (void *)((uint)local_148[0] & 0xffffff00);
LAB_004c9514:
  cube::XAudio2Engine::~XAudio2Engine(&local_3a8);
  if (local_304 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    operator_delete(local_304);
  }
LAB_004c9534:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* assign_two_dwords @ 005ee4b0  kind=gamemisc  attributed-by=ledger  size=137 */

void FUN_005ee4b0(undefined4 *param_1,undefined4 *param_2)

{
  int in_ECX;
  
  *param_1 = 1;
  *param_2 = 10;
  if (*(float *)(in_ECX + 0x10) <= 0.2 && *(float *)(in_ECX + 0x10) != 0.2) {
    *param_1 = 10;
    *param_2 = 0x14;
  }
  if ((*(float *)(in_ECX + 0xc) <= 0.2 && *(float *)(in_ECX + 0xc) != 0.2) &&
     (0.8 < *(float *)(in_ECX + 0x10))) {
    *param_1 = 0xf;
    *param_2 = 0x19;
  }
  if ((0.8 < *(float *)(in_ECX + 0xc)) && (0.8 < *(float *)(in_ECX + 0x10))) {
    *param_1 = 10;
    *param_2 = 0x14;
  }
  if (*(char *)(in_ECX + 8) == '\x01') {
    *param_1 = 0x14;
    *param_2 = 0x1e;
  }
  return;
}


/* rarityRoll @ 005f8530  kind=game  attributed-by=ledger  size=94 */

int FUN_005f8530(int param_1,char param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = rand();
  iVar1 = iVar1 % (param_1 + 1);
  iVar2 = rand();
  if (iVar2 % 100 == 0) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = rand();
  if (iVar2 % 1000 == 0) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = rand();
  if (iVar2 % 10000 == 0) {
    iVar1 = iVar1 + 1;
  }
  if (param_2 != '\0') {
    iVar1 = param_1 + 1;
  }
  if (4 < iVar1) {
    iVar1 = 4;
  }
  return iVar1;
}


/* PlasmaGraphics_loadDisplay @ 00681c70  kind=game  attributed-by=ledger  size=3394 */

void FUN_00681c70(void)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  uint uVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  int *piVar11;
  int in_ECX;
  byte *pbVar12;
  void *pvVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  bool bVar17;
  float10 fVar18;
  undefined8 uVar19;
  undefined8 local_104;
  undefined8 local_fc;
  int local_f4;
  undefined4 *local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  int *local_e0;
  int local_dc;
  void *local_d8;
  int *local_d4;
  int local_d0;
  char *local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  void *local_c0;
  int local_bc;
  int local_b4;
  int local_b0;
  int *local_ac;
  int *local_a8;
  char local_a1;
  int *local_a0;
  int *local_9c;
  InvalidFileFormatException local_98;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  void *local_54;
  undefined4 uStack_50;
  undefined8 local_4c;
  uint local_44;
  uint uStack_40;
  void *local_3c [4];
  uint local_2c;
  uint local_28;
  undefined8 local_24;
  undefined4 local_1c;
  undefined2 local_18;
  undefined1 local_16;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_006f8cf4;
  local_10 = ExceptionList;
  uVar4 = DAT_0076aa78 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_d4 = (int *)(in_ECX + 0x30);
  local_a0 = (int *)0xffffffff;
  local_dc = in_ECX;
  local_14 = uVar4;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  *puVar5 = 0;
  local_a0 = (int *)0xffffffff;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  *puVar5 = 0;
  local_a0 = (int *)0xffffffff;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  *puVar5 = 0;
  local_a0 = (int *)0xffffffff;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  *puVar5 = 0;
  local_a0 = (int *)0xffffffff;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  *puVar5 = 0;
  local_a0 = (int *)0xffffffff;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  *puVar5 = 0xffffffff;
  local_a0 = (int *)0xffffffff;
  puVar5 = (undefined4 *)FUN_00468910(&local_a0);
  piVar15 = (int *)0x0;
  *puVar5 = 0xffffffff;
  local_ac = (int *)0x0;
  local_e0 = (int *)0x0;
  local_a0 = (int *)0x0;
  local_a8 = (int *)0x0;
  local_b0 = 0;
  local_e4 = 0;
  local_e8 = FUN_0064e3d0(0,0);
  local_8 = 0;
  local_ec = 0;
  local_f0 = (undefined4 *)FUN_0046d550(0,0);
  local_8._0_1_ = 1;
  if ((*(byte *)(in_ECX + 0x60) & 0x40) != 0) {
    std::basic_istream<char,std::char_traits<char>_>::tellg
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8));
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_9c,
               (ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_9c,
               (ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_9c,
               (ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_9c,
               (ulonglong)uVar4 << 0x20);
    local_1c = 0x20202020;
    local_18 = 0x2020;
    local_16 = 0;
    local_24 = 0x2020202020202020;
    std::basic_istream<char,std::char_traits<char>_>::read
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_24,
               (ulonglong)uVar4 << 0x20);
    std::basic_istream<char,std::char_traits<char>_>::seekg
              (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),
               CONCAT44(uStack_50,local_54),local_4c,local_44,uStack_40);
    pbVar12 = &DAT_006fcad8;
    pbVar6 = (byte *)&local_24;
    do {
      bVar1 = *pbVar6;
      bVar17 = bVar1 < *pbVar12;
      if (bVar1 != *pbVar12) {
LAB_00681ee0:
        uVar7 = -(uint)bVar17 | 1;
        goto LAB_00681ee5;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar6[1];
      bVar17 = bVar1 < pbVar12[1];
      if (bVar1 != pbVar12[1]) goto LAB_00681ee0;
      pbVar6 = pbVar6 + 2;
      pbVar12 = pbVar12 + 2;
    } while (bVar1 != 0);
    uVar7 = 0;
LAB_00681ee5:
    if (uVar7 != 0) {
      FUN_00403350(&DAT_006fc918);
      local_8 = CONCAT31(local_8._1_3_,2);
      plasma::InvalidFileFormatException::InvalidFileFormatException(&local_98,local_3c);
                    /* WARNING: Subroutine does not return */
      _CxxThrowException(&local_98,(ThrowInfo *)&DAT_00760340);
    }
  }
  *(undefined4 *)(in_ECX + 0x10) = 0;
  *(undefined4 *)(in_ECX + 0x14) = 0;
  bVar1 = *(byte *)(*(int *)(**(int **)(in_ECX + 8) + 4) + 0xc + (int)*(int **)(in_ECX + 8));
  do {
    if ((bVar1 & 1) != 0) {
LAB_0068296d:
      piVar15 = (int *)(in_ECX + 0x30);
      piVar14 = (int *)**(int **)(in_ECX + 0x30);
      if (piVar14 != *(int **)(in_ECX + 0x30)) {
        do {
          if (piVar14[5] != 0) {
            piVar11 = (int *)FUN_00681890(piVar14 + 5);
            piVar16 = *(int **)*piVar11;
            local_9c = piVar11;
            if (piVar16 == (int *)*piVar11) {
              piVar15 = (int *)(in_ECX + 0x30);
            }
            else {
              do {
                puVar5 = (undefined4 *)FUN_00468910(piVar16 + 2);
                FUN_00630be0(*puVar5);
                piVar16 = (int *)*piVar16;
                piVar15 = local_d4;
                in_ECX = local_dc;
              } while (piVar16 != (int *)*piVar11);
            }
          }
          if (*(char *)((int)piVar14 + 0xd) == '\0') {
            piVar16 = (int *)piVar14[2];
            if (*(char *)((int)piVar16 + 0xd) == '\0') {
              cVar3 = *(char *)(*piVar16 + 0xd);
              piVar14 = piVar16;
              piVar16 = (int *)*piVar16;
              while (cVar3 == '\0') {
                cVar3 = *(char *)(*piVar16 + 0xd);
                piVar14 = piVar16;
                piVar16 = (int *)*piVar16;
              }
            }
            else {
              cVar3 = *(char *)(piVar14[1] + 0xd);
              piVar11 = (int *)piVar14[1];
              piVar16 = piVar14;
              while ((piVar14 = piVar11, cVar3 == '\0' && (piVar16 == (int *)piVar14[2]))) {
                cVar3 = *(char *)(piVar14[1] + 0xd);
                piVar11 = (int *)piVar14[1];
                piVar16 = piVar14;
              }
            }
          }
        } while (piVar14 != (int *)*piVar15);
      }
      puVar5 = (undefined4 *)*local_f0;
      *local_f0 = local_f0;
      local_f0[1] = local_f0;
      if (puVar5 == local_f0) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_f0);
      }
                    /* WARNING: Subroutine does not return */
      operator_delete(puVar5);
    }
    FUN_00688220(local_3c,1);
    uVar7 = local_2c;
    local_8._0_1_ = 3;
    if ((*(byte *)(*(int *)(**(int **)(in_ECX + 8) + 4) + 0xc + (int)*(int **)(in_ECX + 8)) & 1) !=
        0) {
      local_8._0_1_ = 1;
      if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
        operator_delete(local_3c[0]);
      }
      goto LAB_0068296d;
    }
    iVar8 = FUN_0040c590();
    bVar17 = false;
    if (iVar8 == 0) {
      if (uVar7 < 0xe) {
        uVar9 = 0xffffffff;
      }
      else {
        uVar9 = (uint)(uVar7 != 0xe);
      }
      bVar17 = uVar9 == 0;
    }
    if (bVar17) {
      FUN_00688180();
      std::basic_istream<char,std::char_traits<char>_>::read
                (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_f4,
                 (ulonglong)uVar4 << 0x20);
      if (1 < local_f4) {
        uStack_40 = 0xf;
        local_44 = 0;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        FUN_0040c280(&DAT_006fc918,0);
        local_8 = CONCAT31(local_8._1_3_,4);
        plasma::InvalidVersionException::InvalidVersionException
                  ((InvalidVersionException *)&local_98,&local_54);
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_98,(ThrowInfo *)&DAT_007603b4);
      }
      FUN_00688490();
    }
    else {
      iVar8 = FUN_0040c590();
      bVar17 = false;
      if (iVar8 == 0) {
        if (uVar7 < 4) {
          uVar9 = 0xffffffff;
        }
        else {
          uVar9 = (uint)(uVar7 != 4);
        }
        bVar17 = uVar9 == 0;
      }
      if (bVar17) {
        FUN_00688180();
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),(char *)&local_d0,
                   (ulonglong)uVar4 << 0x20);
        iVar8 = local_d0;
        local_cc = (char *)0x0;
        local_c8 = 0;
        local_c4 = 0;
        FUN_005870c0(local_d0);
        local_8._0_1_ = 5;
        std::basic_istream<char,std::char_traits<char>_>::read
                  (*(basic_istream<char,std::char_traits<char>_> **)(in_ECX + 8),local_cc,
                   CONCAT44(uVar4,iVar8 >> 0x1f));
        local_a1 = '\0';
        FUN_00681260(in_ECX + 100);
        local_8._0_1_ = 6;
        local_104 = 0;
        FUN_00681bf0(&local_104);
        uStack_40 = 0xf;
        local_44 = 0;
        local_54 = (void *)((uint)local_54 & 0xffffff00);
        FUN_0040c280(&DAT_006fcad8,0xe);
        local_8._0_1_ = 7;
        uVar19 = FUN_00687b10(&local_54);
        local_fc = uVar19;
        FUN_00681bf0(&local_fc);
        local_8._0_1_ = 6;
        if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_54);
        }
        local_9c = (int *)(local_bc - (int)local_c0 >> 3);
        local_b4 = 0;
        pvVar13 = local_c0;
        if (0 < (int)local_9c) {
          do {
            local_8._0_1_ = 6;
            local_d8 = pvVar13;
            FUN_004034c0(&local_cc);
            pvVar13 = (void *)local_24;
            local_8._0_1_ = 8;
            FUN_006880c0();
            uStack_40 = 0xf;
            local_44 = 0;
            local_54 = (void *)((uint)local_54 & 0xffffff00);
            FUN_00583cd0();
            uVar7 = local_44;
            iVar8 = FUN_0040c590();
            bVar17 = false;
            if (iVar8 == 0) {
              if (uVar7 < 0xe) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)(uVar7 != 0xe);
              }
              bVar17 = uVar7 == 0;
            }
            piVar15 = local_a8;
            if (bVar17) {
              local_a1 = '\x01';
              *(undefined4 *)(in_ECX + 0x10) = *(undefined4 *)((int)local_c0 + local_b4 * 8);
              *(undefined4 *)(in_ECX + 0x14) = *(undefined4 *)((int)local_c0 + local_b4 * 8 + 4);
              if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
                operator_delete(local_54);
              }
              local_8._0_1_ = 6;
              if (pvVar13 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
                operator_delete(pvVar13);
              }
              break;
            }
            if (0xf < uStack_40) {
                    /* WARNING: Subroutine does not return */
              operator_delete(local_54);
            }
            local_8._0_1_ = 6;
            if (pvVar13 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
              operator_delete(pvVar13);
            }
            local_b4 = local_b4 + 1;
            local_d8 = (void *)((int)local_d8 + 8);
            pvVar13 = local_d8;
          } while (local_b4 < (int)local_9c);
        }
        pvVar13 = local_c0;
        local_8._0_1_ = 6;
        FUN_00688490();
        if (local_a1 == '\0') {
          uStack_40 = 0xf;
          local_44 = 0;
          local_54 = (void *)((uint)local_54 & 0xffffff00);
          FUN_0040c280(&DAT_006fc918,0);
          local_8 = CONCAT31(local_8._1_3_,10);
          plasma::InvalidDemoLicenseException::InvalidDemoLicenseException
                    ((InvalidDemoLicenseException *)&local_98,&local_54);
                    /* WARNING: Subroutine does not return */
          _CxxThrowException(&local_98,(ThrowInfo *)&DAT_007603f0);
        }
        if (pvVar13 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(pvVar13);
        }
        if (local_cc != (char *)0x0) {
                    /* WARNING: Subroutine does not return */
          operator_delete(local_cc);
        }
      }
      else {
        iVar8 = FUN_0040c590();
        bVar17 = false;
        if (iVar8 == 0) {
          if (uVar7 < 7) {
            uVar9 = 0xffffffff;
          }
          else {
            uVar9 = (uint)(uVar7 != 7);
          }
          bVar17 = uVar9 == 0;
        }
        if (bVar17) {
          FUN_00686820();
        }
        else {
          iVar8 = FUN_0040c590();
          bVar17 = false;
          if (iVar8 == 0) {
            if (uVar7 < 9) {
              uVar9 = 0xffffffff;
            }
            else {
              uVar9 = (uint)(uVar7 != 9);
            }
            bVar17 = uVar9 == 0;
          }
          if (bVar17) {
            local_9c = local_ac;
            local_ac = (int *)((int)local_ac + 1);
            puVar5 = (undefined4 *)FUN_00468910(&local_9c);
            uVar10 = FUN_00685b10();
            *puVar5 = uVar10;
          }
          else {
            iVar8 = FUN_0040c590();
            bVar17 = false;
            if (iVar8 == 0) {
              if (uVar7 < 0xf) {
                uVar7 = 0xffffffff;
              }
              else {
                uVar7 = (uint)(uVar7 != 0xf);
              }
              bVar17 = uVar7 == 0;
            }
            if (bVar17) {
              local_9c = local_ac;
              local_ac = (int *)((int)local_ac + 1);
              puVar5 = (undefined4 *)FUN_00468910(&local_9c);
              uVar10 = FUN_00684ef0();
              *puVar5 = uVar10;
            }
            else {
              cVar3 = FUN_00451470(local_3c,"GenericShape");
              if (cVar3 == '\0') {
                cVar3 = FUN_00451470(local_3c,"Transformation");
                if (cVar3 == '\0') {
                  cVar3 = FUN_00451470(local_3c,"Display");
                  if (cVar3 == '\0') {
                    cVar3 = FUN_00451470(local_3c,"Widget");
                    if (cVar3 == '\0') {
                      cVar3 = FUN_00451470(local_3c,"Button");
                      if (cVar3 == '\0') {
                        cVar3 = FUN_00451470(local_3c,"ListWidget");
                        if (cVar3 == '\0') {
                          cVar3 = FUN_00451470(local_3c,&DAT_007203d4);
                          if (cVar3 == '\0') {
                            cVar3 = FUN_00451470(local_3c,"ScrollButton");
                            if (cVar3 == '\0') {
                              cVar3 = FUN_00451470(local_3c,"ScrollSlider");
                              if (cVar3 == '\0') {
                                cVar3 = FUN_00451470(local_3c,"PopUpButton");
                                if (cVar3 == '\0') {
                                  cVar3 = FUN_00451470(local_3c,&DAT_00720408);
                                  if (cVar3 == '\0') {
                                    if ((*(byte *)(in_ECX + 0x60) & 8) == 0) {
                                      cVar3 = FUN_00451470(local_3c,"pageWidth");
                                      if (cVar3 != '\0') {
                                        FUN_00688180();
                                        fVar18 = (float10)FUN_00681240();
                                        **(float **)(in_ECX + 0x74) = (float)fVar18;
                                        FUN_00688490();
                                        goto LAB_006828a1;
                                      }
                                      if ((*(byte *)(in_ECX + 0x60) & 8) == 0) {
                                        cVar3 = FUN_00451470(local_3c,"pageHeight");
                                        if (cVar3 != '\0') {
                                          FUN_00688180();
                                          fVar18 = (float10)FUN_00681240();
                                          *(float *)(*(int *)(in_ECX + 0x74) + 4) = (float)fVar18;
                                          FUN_00688490();
                                          goto LAB_006828a1;
                                        }
                                        if ((*(byte *)(in_ECX + 0x60) & 8) == 0) {
                                          cVar3 = FUN_00451470(local_3c,&DAT_00720428);
                                          if (cVar3 != '\0') {
                                            FUN_00688180();
                                            fVar18 = (float10)FUN_00681240();
                                            *(float *)(*(int *)(in_ECX + 0x74) + 8) = (float)fVar18;
                                            FUN_00688490();
                                            goto LAB_006828a1;
                                          }
                                          if ((*(byte *)(in_ECX + 0x60) & 8) == 0) {
                                            cVar3 = FUN_00451470(local_3c,&DAT_0072042c);
                                            if (cVar3 != '\0') {
                                              FUN_00688180();
                                              uVar10 = FUN_00681220();
                                              *(undefined4 *)(*(int *)(in_ECX + 0x74) + 0xc) =
                                                   uVar10;
                                              FUN_00688490();
                                              goto LAB_006828a1;
                                            }
                                            if ((*(byte *)(in_ECX + 0x60) & 8) == 0) {
                                              cVar3 = FUN_00451470(local_3c,"pageColor");
                                              if (cVar3 != '\0') {
                                                FUN_00688180();
                                                std::basic_istream<char,std::char_traits<char>_>::
                                                read(*(basic_istream<char,std::char_traits<char>_>
                                                       **)(in_ECX + 8),(char *)&local_64,
                                                     (ulonglong)uVar4 << 0x20);
                                                iVar8 = *(int *)(in_ECX + 0x74);
                                                *(undefined4 *)(iVar8 + 0x10) = local_64;
                                                *(undefined4 *)(iVar8 + 0x14) = local_60;
                                                *(undefined4 *)(iVar8 + 0x18) = local_5c;
                                                *(undefined4 *)(iVar8 + 0x1c) = local_58;
                                                FUN_00688490();
                                                goto LAB_006828a1;
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                    FUN_006886f0();
                                  }
                                  else {
                                    puVar5 = (undefined4 *)FUN_00468910(&local_b0);
                                    uVar10 = FUN_00683f00(local_b0 == 0);
                                    local_b0 = local_b0 + 1;
                                    *puVar5 = uVar10;
                                  }
                                }
                                else {
                                  local_a8 = (int *)((int)piVar15 + 1);
                                  local_9c = piVar15;
                                  puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                                  uVar10 = FUN_00684770();
                                  *puVar5 = uVar10;
                                  piVar15 = (int *)((int)piVar15 + 1);
                                }
                              }
                              else {
                                local_a8 = (int *)((int)piVar15 + 1);
                                local_9c = piVar15;
                                puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                                uVar10 = FUN_00684c30();
                                *puVar5 = uVar10;
                                piVar15 = (int *)((int)piVar15 + 1);
                              }
                            }
                            else {
                              local_a8 = (int *)((int)piVar15 + 1);
                              local_9c = piVar15;
                              puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                              uVar10 = FUN_00684970();
                              *puVar5 = uVar10;
                              piVar15 = (int *)((int)piVar15 + 1);
                            }
                          }
                          else {
                            local_a8 = (int *)((int)piVar15 + 1);
                            local_9c = piVar15;
                            puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                            uVar10 = FUN_00683750();
                            *puVar5 = uVar10;
                            piVar15 = (int *)((int)piVar15 + 1);
                          }
                        }
                        else {
                          local_a8 = (int *)((int)piVar15 + 1);
                          local_9c = piVar15;
                          puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                          uVar10 = FUN_00683de0();
                          *puVar5 = uVar10;
                          piVar15 = (int *)((int)piVar15 + 1);
                        }
                      }
                      else {
                        local_a8 = (int *)((int)piVar15 + 1);
                        local_9c = piVar15;
                        puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                        uVar10 = FUN_00683070();
                        *puVar5 = uVar10;
                        piVar15 = (int *)((int)piVar15 + 1);
                      }
                    }
                    else {
                      local_a8 = (int *)((int)piVar15 + 1);
                      local_9c = piVar15;
                      puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                      uVar10 = FUN_00687440();
                      *puVar5 = uVar10;
                      piVar15 = (int *)((int)piVar15 + 1);
                    }
                  }
                  else {
                    local_9c = local_a0;
                    local_a0 = (int *)((int)local_a0 + 1);
                    puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                    uVar10 = FUN_00683270();
                    *puVar5 = uVar10;
                  }
                }
                else {
                  local_9c = local_e0;
                  local_e0 = (int *)((int)local_e0 + 1);
                  puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                  uVar10 = FUN_00686ff0();
                  *puVar5 = uVar10;
                }
              }
              else {
                local_9c = local_ac;
                local_ac = (int *)((int)local_ac + 1);
                puVar5 = (undefined4 *)FUN_00468910(&local_9c);
                uVar10 = FUN_00683870();
                *puVar5 = uVar10;
              }
            }
          }
        }
      }
    }
LAB_006828a1:
    local_8._0_1_ = 1;
    uVar2 = (undefined1)local_8;
    local_8._0_1_ = 1;
    if (0xf < local_28) {
                    /* WARNING: Subroutine does not return */
      operator_delete(local_3c[0]);
    }
    bVar1 = *(byte *)(*(int *)(**(int **)(in_ECX + 8) + 4) + 0xc + (int)*(int **)(in_ECX + 8));
    local_8._0_1_ = uVar2;
  } while( true );
}


