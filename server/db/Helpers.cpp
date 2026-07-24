// Helpers (db) -- server. 4 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Helpers.h"

/* FUN_00462fe0 @ 00462fe0  kind=gamemisc  attributed-by=caller-vote  size=18 */

void __cdecl FUN_00462fe0(int *param_1)

{
  FUN_00492580(param_1,0);
  return;
}


/* FUN_004719f0 @ 004719f0  kind=gamemisc  attributed-by=caller-vote  size=163 */

void __cdecl FUN_004719f0(int param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x138) != 0) {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x120)) {
      do {
        piVar1 = *(int **)(*(int *)(param_1 + 0x138) + iVar4 * 4);
        piVar2 = (int *)piVar1[2];
        if ((piVar2 != (int *)0x0) && (*(code **)(param_2 + *piVar2) != (code *)0x0)) {
          (**(code **)(param_2 + *piVar2))(piVar2);
        }
        piVar2 = piVar1 + 3;
        *piVar2 = *piVar2 + -1;
        iVar3 = *piVar1;
        piVar1[5] = 0;
        if (*piVar2 == 0) {
          piVar2 = (int *)piVar1[2];
          if (piVar2 != (int *)0x0) {
            (**(code **)(*piVar2 + 0x10))(piVar2);
          }
          FUN_00494b00(iVar3,piVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < *(int *)(param_1 + 0x120));
    }
    FUN_00494b00(param_1,*(undefined4 **)(param_1 + 0x138));
    *(undefined4 *)(param_1 + 0x120) = 0;
    *(undefined4 *)(param_1 + 0x138) = 0;
  }
  return;
}


/* FUN_00476c60 @ 00476c60  kind=gamemisc  attributed-by=caller-vote  size=42 */

void __cdecl FUN_00476c60(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int local_8;
  
  iVar4 = param_1;
  FUN_0048fca0(param_1);
  param_1 = 0;
  if (0 < *(int *)(iVar4 + 0x14)) {
    local_8 = 0;
    do {
      iVar1 = *(int *)(local_8 + 0xc + *(int *)(iVar4 + 0x10));
      if (iVar1 != 0) {
        for (puVar2 = *(undefined4 **)(iVar1 + 0x10); puVar2 != (undefined4 *)0x0;
            puVar2 = (undefined4 *)*puVar2) {
          if ((*(byte *)(puVar2[2] + 0x2a) & 0x10) != 0) {
            piVar5 = (int *)(puVar2[2] + 0x38);
            iVar1 = *piVar5;
            while (iVar1 != 0) {
              piVar3 = (int *)*piVar5;
              if (*piVar3 == iVar4) {
                *piVar5 = piVar3[6];
                piVar5 = piVar3 + 3;
                *piVar5 = *piVar5 + -1;
                iVar1 = *piVar3;
                if (*piVar5 == 0) {
                  piVar5 = (int *)piVar3[2];
                  if (piVar5 != (int *)0x0) {
                    (**(code **)(*piVar5 + 0x10))(piVar5);
                  }
                  FUN_00494b00(iVar1,piVar3);
                }
                break;
              }
              piVar5 = piVar3 + 6;
              iVar1 = piVar3[6];
            }
          }
        }
      }
      param_1 = param_1 + 1;
      local_8 = local_8 + 0x10;
    } while (param_1 < *(int *)(iVar4 + 0x14));
  }
  FUN_00490780(iVar4);
  return;
}


/* FUN_00492580 @ 00492580  kind=gamemisc  attributed-by=caller-vote  size=204 */

undefined4 __cdecl FUN_00492580(int *param_1,int param_2)

{
  int iVar1;
  
  if (param_1 != (int *)0x0) {
    iVar1 = param_1[0x11];
    if (((iVar1 != 0x4b771290) && (iVar1 != -0x5fd65969)) && (iVar1 != -0xfc486fa)) {
      FUN_004683f0(0x15,"API call with %s database connection pointer");
      FUN_004683f0(0x15,"misuse at line %d of [%.10s]");
      return 0x15;
    }
    if (param_1[3] != 0) {
      (*DAT_00582b18)(param_1[3]);
    }
    FUN_00476c60((int)param_1);
    FUN_004719f0((int)param_1,0x44);
    if (param_2 == 0) {
      iVar1 = FUN_004757a0((int)param_1);
      if (iVar1 != 0) {
        FUN_004961f0((int)param_1,5,
                     (byte *)"unable to close due to unfinalized statements or unfinished backups");
        if (param_1[3] != 0) {
          (*DAT_00582b20)(param_1[3]);
        }
        return 5;
      }
    }
    param_1[0x11] = 0x64cffc7f;
    FUN_0049fad0(param_1);
  }
  return 0;
}


