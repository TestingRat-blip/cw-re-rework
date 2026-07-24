// Unsorted_001 (game_misc) -- server. 150 functions. Bodies = Ghidra pseudo-C.
// Attribution: see ../attribution.tsv. Toolchain of the original: MSVC 11.0 (VS2012).
#include "Unsorted_001.h"

/* FUN_00418410 @ 00418410  kind=gamemisc  attributed-by=none  size=1415 */

void __thiscall
FUN_00418410(void *this,ushort *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  byte bVar2;
  char cVar3;
  ushort uVar4;
  code *pcVar5;
  uint *puVar6;
  int *piVar7;
  ushort *puVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  uint *puVar12;
  code *local_c;
  uint *local_8;
  
  uVar9 = param_3;
  pcVar5 = (code *)FUN_00418000(param_3);
  switch(uVar9 >> 4 & 3) {
  case 0:
    local_c = FUN_00418180;
    break;
  case 1:
    local_c = FUN_004181d0;
    break;
  case 2:
    local_c = FUN_00418360;
    break;
  case 3:
    local_c = FUN_00418280;
    break;
  default:
    local_c = (code *)0x0;
  }
  uVar4 = *param_1;
  local_8 = param_2;
  puVar11 = param_1;
  puVar6 = param_2;
  if (uVar4 != 0) {
    do {
      puVar8 = puVar11;
      if (uVar4 == 0x3c) {
LAB_00418556:
        puVar11 = puVar11 + 1;
LAB_0041855c:
        uVar9 = (uint)*puVar11;
        if (*puVar11 < 0x80) {
          cVar3 = (&DAT_0055ac88)[uVar9];
        }
        else {
          cVar3 = -0x40;
        }
        param_1 = puVar11;
        if (cVar3 < '\0') {
          local_8 = FUN_004172b0((uint)puVar6,this,2);
          if (local_8 == (uint *)0x0) {
LAB_00418957:
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),3);
          }
          local_8[2] = (uint)puVar11;
          while( true ) {
            if (*puVar11 < 0x80) {
              bVar2 = (&DAT_0055ac88)[*puVar11];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            puVar11 = puVar11 + 1;
          }
          uVar4 = *puVar11;
          uVar9 = (uint)uVar4;
          *puVar11 = 0;
          puVar8 = puVar11 + 1;
          puVar6 = local_8;
          if (uVar9 != 0x3e) {
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_0055ac88)[uVar9];
            }
            else {
              bVar2 = 0;
            }
            puVar12 = local_8;
            if ((bVar2 & 8) == 0) {
              if (uVar9 == 0x2f) {
                uVar4 = *puVar8;
                if ((uVar4 != 0x3e) && ((puVar10 = puVar8, uVar4 != 0 || ((ushort)param_4 != 0x3e)))
                   ) goto LAB_0041862c;
                puVar8 = puVar8 + (uVar4 == 0x3e);
                puVar6 = (uint *)local_8[1];
                local_8 = (uint *)local_8[1];
              }
              else {
joined_r0x004188ab:
                puVar10 = puVar8;
                if ((uVar4 != 0) ||
                   (puVar8 = puVar11, puVar10 = puVar11, puVar6 = puVar12, (ushort)param_4 != 0x3e))
                {
LAB_0041862c:
                  *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)((int)this + 8),0xb);
                }
              }
            }
            else {
LAB_00418720:
              while( true ) {
                while( true ) {
                  if (*puVar8 < 0x80) {
                    bVar2 = (&DAT_0055ac88)[*puVar8];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar8 = puVar8 + 1;
                }
                if (*puVar8 < 0x80) {
                  cVar3 = (&DAT_0055ac88)[*puVar8];
                }
                else {
                  cVar3 = -0x40;
                }
                if (-1 < cVar3) break;
                piVar7 = FUN_00417230((int)puVar12,this);
                if (piVar7 == (int *)0x0) {
                  *(undefined4 *)((int)this + 0x48) = 0;
                  goto LAB_00418957;
                }
                piVar7[1] = (int)puVar8;
                while( true ) {
                  if (*puVar8 < 0x80) {
                    bVar2 = (&DAT_0055ac88)[*puVar8];
                  }
                  else {
                    bVar2 = 0xc0;
                  }
                  if ((bVar2 & 0x40) == 0) break;
                  puVar8 = puVar8 + 1;
                }
                uVar4 = *puVar8;
                if (uVar4 == 0) goto LAB_0041892f;
                *puVar8 = 0;
                puVar8 = puVar8 + 1;
                if (*puVar8 == 0) goto LAB_0041892f;
                if (uVar4 < 0x80) {
                  bVar2 = (&DAT_0055ac88)[uVar4];
                }
                else {
                  bVar2 = 0;
                }
                if ((bVar2 & 8) != 0) {
                  while( true ) {
                    if (*puVar8 < 0x80) {
                      bVar2 = (&DAT_0055ac88)[*puVar8];
                    }
                    else {
                      bVar2 = 0;
                    }
                    if ((bVar2 & 8) == 0) break;
                    puVar8 = puVar8 + 1;
                  }
                  uVar4 = *puVar8;
                  if (uVar4 == 0) goto LAB_0041892f;
                  puVar8 = puVar8 + 1;
                }
                if (uVar4 != 0x3d) goto LAB_0041892f;
                while( true ) {
                  if (*puVar8 < 0x80) {
                    bVar2 = (&DAT_0055ac88)[*puVar8];
                  }
                  else {
                    bVar2 = 0;
                  }
                  if ((bVar2 & 8) == 0) break;
                  puVar8 = puVar8 + 1;
                }
                uVar4 = *puVar8;
                if ((uVar4 != 0x22) && (uVar4 != 0x27)) goto LAB_0041892f;
                piVar7[2] = (int)(puVar8 + 1);
                puVar8 = (ushort *)(*pcVar5)(puVar8 + 1,uVar4);
                if (puVar8 == (ushort *)0x0) {
                  *(int *)((int)this + 0x48) = piVar7[2];
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)((int)this + 8),0xc);
                }
                if (*puVar8 < 0x80) {
                  cVar3 = (&DAT_0055ac88)[*puVar8];
                }
                else {
                  cVar3 = -0x40;
                }
                puVar12 = local_8;
                if (cVar3 < '\0') {
LAB_0041892f:
                  *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
                  longjmp((int *)((int)this + 8),0xc);
                }
              }
              uVar4 = *puVar8;
              if (uVar4 == 0x2f) {
                puVar10 = puVar8 + 1;
                if (puVar8[1] == 0x3e) {
                  puVar8 = puVar8 + 2;
                  puVar6 = (uint *)puVar12[1];
                  local_8 = (uint *)puVar12[1];
                }
                else {
                  if ((puVar8[1] != 0) || ((ushort)param_4 != 0x3e)) goto LAB_0041862c;
                  puVar8 = puVar10;
                  puVar6 = (uint *)puVar12[1];
                  local_8 = (uint *)puVar12[1];
                }
              }
              else {
                puVar11 = puVar8;
                if (uVar4 != 0x3e) goto joined_r0x004188ab;
                puVar8 = puVar8 + 1;
                puVar6 = puVar12;
              }
            }
          }
        }
        else if (uVar9 == 0x2f) {
          puVar10 = (ushort *)puVar6[2];
          puVar8 = puVar11 + 1;
          if (puVar10 == (ushort *)0x0) {
LAB_0041867b:
            *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),0xe);
          }
          while( true ) {
            uVar4 = *puVar8;
            if (uVar4 < 0x80) {
              bVar2 = (&DAT_0055ac88)[uVar4];
            }
            else {
              bVar2 = 0xc0;
            }
            if ((bVar2 & 0x40) == 0) break;
            uVar1 = *puVar10;
            puVar10 = puVar10 + 1;
            puVar8 = puVar8 + 1;
            if (uVar4 != uVar1) goto LAB_0041867b;
          }
          if (*puVar10 != 0) {
            if (((*puVar8 == 0) && (*puVar10 == (ushort)param_4)) && (puVar10[1] == 0))
            goto LAB_00418920;
            goto LAB_0041867b;
          }
          puVar6 = (uint *)puVar6[1];
          while( true ) {
            if (*puVar8 < 0x80) {
              bVar2 = (&DAT_0055ac88)[*puVar8];
            }
            else {
              bVar2 = 0;
            }
            if ((bVar2 & 8) == 0) break;
            puVar8 = puVar8 + 1;
          }
          local_8 = puVar6;
          if (*puVar8 == 0) {
            if ((ushort)param_4 != 0x3e) {
LAB_00418920:
              *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)((int)this + 8),0xd);
            }
          }
          else {
            if (*puVar8 != 0x3e) goto LAB_00418920;
            puVar8 = puVar8 + 1;
          }
        }
        else if (uVar9 == 0x3f) {
          FUN_00419210(this,(int *)&param_1,(uint *)&local_8,param_3,(ushort)param_4);
          puVar8 = param_1;
          puVar6 = local_8;
          if ((local_8 != (uint *)0x0) && (puVar12 = local_8, ((byte)*local_8 & 7) == 7))
          goto LAB_00418720;
        }
        else {
          if (uVar9 != 0x21) {
            if ((*puVar11 == 0) && ((ushort)param_4 == 0x3f)) {
              *(ushort **)((int)this + 0x48) = puVar11;
                    /* WARNING: Subroutine does not return */
              longjmp((int *)((int)this + 8),6);
            }
            *(ushort **)((int)this + 0x48) = puVar11;
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),5);
          }
          FUN_00418ea0(this,(int *)&param_1,puVar6,param_3,param_4);
          puVar8 = param_1;
        }
      }
      else {
        while( true ) {
          if (*puVar8 < 0x80) {
            bVar2 = (&DAT_0055ac88)[*puVar8];
          }
          else {
            bVar2 = 0;
          }
          if ((bVar2 & 8) == 0) break;
          puVar8 = puVar8 + 1;
        }
        if (((param_3 & 8) != 0) && (puVar11 != puVar8)) {
LAB_004184ce:
          if (puVar6[1] == 0) {
            uVar4 = *puVar11;
            puVar8 = puVar11;
            if (uVar4 != 0) {
              while (puVar8 = puVar11, uVar4 != 0x3c) {
                uVar4 = puVar11[1];
                puVar8 = puVar11 + 1;
                puVar11 = puVar8;
                if (uVar4 == 0) goto LAB_00418532;
              }
            }
            puVar11 = puVar8;
            if (*puVar8 != 0) goto LAB_00418556;
          }
          else {
            puVar6 = FUN_004172b0((uint)puVar6,this,3);
            if (puVar6 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
              longjmp((int *)((int)this + 8),3);
            }
            puVar6[3] = (uint)puVar11;
            puVar8 = (ushort *)(*local_c)(puVar11);
            puVar6 = (uint *)puVar6[1];
            puVar11 = puVar8;
            param_1 = puVar8;
            local_8 = puVar6;
            if (*puVar8 != 0) goto LAB_0041855c;
          }
          break;
        }
        if (*puVar8 != 0x3c) {
          if (*puVar8 != 0) goto LAB_004184ce;
          break;
        }
      }
      uVar4 = *puVar8;
      puVar11 = puVar8;
    } while (uVar4 != 0);
LAB_00418532:
    if (puVar6 != param_2) {
      *(ushort **)((int)this + 0x48) = puVar8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),0xe);
    }
  }
  return;
}


/* FUN_004189b0 @ 004189b0  kind=gamemisc  attributed-by=none  size=241 */

void __cdecl
FUN_004189b0(undefined8 *param_1,ushort *param_2,int param_3,uint *param_4,uint param_5)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  uint local_54;
  uint local_50;
  undefined1 local_4c [64];
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  param_4[10] = (uint)param_2;
  if (param_3 == 0) {
    uVar4 = 0;
  }
  else {
    local_54 = param_4[8];
    local_50 = param_4[9];
    local_c = 0;
    uVar1 = param_2[param_3 + -1];
    param_2[param_3 + -1] = 0;
    iVar2 = setjmp3(local_4c,0);
    if (iVar2 == 0) {
      FUN_00418410(&local_54,param_2,param_4,param_5,(uint)uVar1);
    }
    if (local_c == 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = local_c - (int)param_2 >> 1;
    }
    param_4[8] = local_54;
    param_4[9] = local_50;
    if ((iVar2 == 0) && (uVar1 == 0x3c)) {
      uVar4 = CONCAT44(param_3,5);
    }
    else {
      uVar4 = CONCAT44(iVar3,iVar2);
    }
  }
  *param_1 = uVar4;
  *(undefined4 *)(param_1 + 1) = 0;
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00418ab0 @ 00418ab0  kind=gamemisc  attributed-by=none  size=166 */

void __thiscall FUN_00418ab0(void *this,int *param_1,undefined4 param_2,char param_3)

{
  short sVar1;
  short *psVar2;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      if ((param_3 != '\0') && ((short)param_2 == 0x3e)) {
        return;
      }
      *(int *)((int)this + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),9);
    }
    psVar2 = (short *)*param_1;
    sVar1 = *psVar2;
    if (sVar1 == 0x3c) {
      if ((psVar2[1] == 0x21) && (psVar2[2] != 0x2d)) {
        if (psVar2[2] == 0x5b) {
          FUN_00418b60(this,param_1);
        }
        else {
          FUN_00418ab0(this,param_1,param_2,'\0');
        }
      }
      else {
LAB_00418b1f:
        FUN_00418bd0(this,param_1);
      }
    }
    else {
      if ((sVar1 == 0x22) || (sVar1 == 0x27)) goto LAB_00418b1f;
      if (sVar1 == 0x3e) {
        *param_1 = *param_1 + 2;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_00418b60 @ 00418b60  kind=gamemisc  attributed-by=none  size=112 */

void __thiscall FUN_00418b60(void *this,int *param_1)

{
  short sVar1;
  short *psVar2;
  
  *param_1 = *param_1 + 2;
  sVar1 = *(short *)*param_1;
  do {
    if (sVar1 == 0) {
      *(int *)((int)this + 0x48) = *param_1;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),9);
    }
    psVar2 = (short *)*param_1;
    if (((*psVar2 == 0x3c) && (psVar2[1] == 0x21)) && (psVar2[2] == 0x5b)) {
      FUN_00418b60(this,param_1);
    }
    else {
      if (((*psVar2 == 0x5d) && (psVar2[1] == 0x5d)) && (psVar2[2] == 0x3e)) {
        *param_1 = *param_1 + 6;
        return;
      }
      *param_1 = (int)(psVar2 + 1);
    }
    sVar1 = *(short *)*param_1;
  } while( true );
}


/* FUN_00418bd0 @ 00418bd0  kind=gamemisc  attributed-by=none  size=275 */

void __thiscall FUN_00418bd0(void *this,undefined4 *param_1)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  
  psVar3 = (short *)*param_1;
  sVar1 = *psVar3;
  if ((sVar1 == 0x22) || (sVar1 == 0x27)) {
    psVar3 = psVar3 + 1;
    *param_1 = psVar3;
    sVar2 = *psVar3;
    while ((sVar2 != 0 && (*psVar3 != sVar1))) {
      psVar3 = psVar3 + 1;
      *param_1 = psVar3;
      sVar2 = *psVar3;
    }
    psVar3 = (short *)*param_1;
    if (*psVar3 != 0) {
      *param_1 = psVar3 + 1;
      return;
    }
    *(short **)((int)this + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)((int)this + 8),9);
  }
  if (sVar1 == 0x3c) {
    if (psVar3[1] == 0x3f) {
      *param_1 = psVar3 + 2;
      sVar1 = psVar3[2];
      while ((sVar1 != 0 && ((psVar3 = (short *)*param_1, *psVar3 != 0x3f || (psVar3[1] != 0x3e)))))
      {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 2;
        return;
      }
    }
    else if (((psVar3[1] == 0x21) && (psVar3[2] == 0x2d)) && (psVar3[3] == 0x2d)) {
      *param_1 = psVar3 + 4;
      sVar1 = psVar3[4];
      while ((sVar1 != 0 &&
             (((psVar3 = (short *)*param_1, *psVar3 != 0x2d || (psVar3[1] != 0x2d)) ||
              (psVar3[2] != 0x3e))))) {
        *param_1 = psVar3 + 1;
        sVar1 = psVar3[1];
      }
      psVar3 = (short *)*param_1;
      if (*psVar3 != 0) {
        *param_1 = psVar3 + 4;
        return;
      }
      *(short **)((int)this + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),9);
    }
  }
  *(short **)((int)this + 0x48) = psVar3;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)this + 8),9);
}


/* FUN_00418ea0 @ 00418ea0  kind=gamemisc  attributed-by=none  size=869 */

void __thiscall FUN_00418ea0(void *this,int *param_1,uint *param_2,uint param_3,undefined4 param_4)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  ushort *puVar5;
  short sVar6;
  ushort *local_8;
  
  iVar2 = *param_1;
  local_8 = (ushort *)(iVar2 + 2);
  uVar1 = *local_8;
  sVar6 = (short)param_4;
  if (uVar1 != 0x2d) {
    if (uVar1 == 0x5b) {
      local_8 = (ushort *)(iVar2 + 4);
      if (((((*(ushort *)(iVar2 + 4) == 0x43) &&
            (local_8 = (ushort *)(iVar2 + 6), *(ushort *)(iVar2 + 6) == 0x44)) &&
           (local_8 = (ushort *)(iVar2 + 8), *(ushort *)(iVar2 + 8) == 0x41)) &&
          ((local_8 = (ushort *)(iVar2 + 10), *(ushort *)(iVar2 + 10) == 0x54 &&
           (local_8 = (ushort *)(iVar2 + 0xc), *(ushort *)(iVar2 + 0xc) == 0x41)))) &&
         (local_8 = (ushort *)(iVar2 + 0xe), *(ushort *)(iVar2 + 0xe) == 0x5b)) {
        local_8 = (ushort *)(iVar2 + 0x10);
        if ((param_3 & 4) != 0) {
          puVar4 = FUN_004172b0((uint)param_2,this,4);
          if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            longjmp((int *)((int)this + 8),3);
          }
          puVar4[3] = (uint)local_8;
          if ((param_3 & 0x20) == 0) {
            uVar1 = *local_8;
            puVar5 = local_8;
            while (local_8 = puVar5, uVar1 != 0) {
              if (((uVar1 == 0x5d) && (puVar5[1] == 0x5d)) &&
                 ((puVar5[2] == 0x3e || ((puVar5[2] == 0 && (sVar6 == 0x3e)))))) {
                if (*puVar5 != 0) {
                  *puVar5 = 0;
                  goto LAB_0041912d;
                }
                break;
              }
              puVar5 = puVar5 + 1;
              uVar1 = *puVar5;
            }
          }
          else {
            puVar5 = FUN_00419ac0(local_8,sVar6);
            if (puVar5 != (ushort *)0x0) goto LAB_00419133;
            puVar5 = (ushort *)puVar4[3];
            local_8 = (ushort *)0x0;
          }
          *(ushort **)((int)this + 0x48) = puVar5;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),8);
        }
        uVar1 = *local_8;
        puVar5 = local_8;
        while (local_8 = puVar5, uVar1 != 0) {
          if (((uVar1 == 0x5d) && (puVar5[1] == 0x5d)) &&
             ((puVar5[2] == 0x3e || ((puVar5[2] == 0 && (sVar6 == 0x3e)))))) {
            if (*puVar5 != 0) goto LAB_0041912d;
            break;
          }
          puVar5 = puVar5 + 1;
          uVar1 = *puVar5;
        }
      }
LAB_004191e7:
      *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),8);
    }
    if (((((uVar1 == 0x44) && (*(short *)(iVar2 + 4) == 0x4f)) && (*(short *)(iVar2 + 6) == 0x43))
        && ((*(short *)(iVar2 + 8) == 0x54 && (*(short *)(iVar2 + 10) == 0x59)))) &&
       (*(short *)(iVar2 + 0xc) == 0x50)) {
      if (*(short *)(iVar2 + 0xe) == 0x45) {
        local_8 = (ushort *)(iVar2 + -2);
        FUN_00418ab0(this,(int *)&local_8,param_4,'\x01');
        goto LAB_004191b9;
      }
      if ((*(short *)(iVar2 + 0xe) == 0) && (sVar6 == 0x45)) {
        *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),9);
      }
    }
    if (uVar1 == 0) {
      if (sVar6 == 0x2d) goto LAB_004191d2;
      if (sVar6 == 0x5b) goto LAB_004191e7;
    }
    *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
    longjmp((int *)((int)this + 8),5);
  }
  local_8 = (ushort *)(iVar2 + 4);
  if (*local_8 == 0x2d) {
    local_8 = (ushort *)(iVar2 + 6);
    uVar3 = param_3 & 2;
    if (uVar3 != 0) {
      param_2 = FUN_004172b0((uint)param_2,this,5);
      if (param_2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),3);
      }
      param_2[3] = (uint)local_8;
    }
    if (((param_3 & 0x20) != 0) && (uVar3 != 0)) {
      local_8 = FUN_00419ba0(local_8,sVar6);
      if (local_8 == (ushort *)0x0) {
        *(uint *)((int)this + 0x48) = param_2[3];
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),7);
      }
LAB_004191b9:
      *param_1 = (int)local_8;
      return;
    }
    uVar1 = *local_8;
    while (uVar1 != 0) {
      if (((uVar1 == 0x2d) && (local_8[1] == 0x2d)) &&
         ((local_8[2] == 0x3e || ((local_8[2] == 0 && (sVar6 == 0x3e)))))) {
        if (*local_8 != 0) {
          if (uVar3 != 0) {
            *local_8 = 0;
          }
          *param_1 = (int)(local_8 + (local_8[2] == 0x3e) + 2);
          return;
        }
        break;
      }
      local_8 = local_8 + 1;
      uVar1 = *local_8;
    }
  }
LAB_004191d2:
  *(ushort **)((int)this + 0x48) = local_8;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)this + 8),7);
LAB_0041912d:
  puVar5 = puVar5 + 1;
LAB_00419133:
  *param_1 = (int)(puVar5 + (puVar5[1] == 0x3e) + 1);
  return;
}


/* FUN_00419210 @ 00419210  kind=gamemisc  attributed-by=none  size=631 */

void __thiscall FUN_00419210(void *this,int *param_1,uint *param_2,uint param_3,short param_4)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  
  puVar8 = (undefined4 *)*param_2;
  iVar1 = *param_1;
  puVar9 = (ushort *)(iVar1 + 2);
  if (*puVar9 < 0x80) {
    cVar3 = (&DAT_0055ac88)[*puVar9];
  }
  else {
    cVar3 = -0x40;
  }
  puVar10 = puVar9;
  if (cVar3 < '\0') {
    while( true ) {
      if (*puVar10 < 0x80) {
        bVar4 = (&DAT_0055ac88)[*puVar10];
      }
      else {
        bVar4 = 0xc0;
      }
      if ((bVar4 & 0x40) == 0) break;
      puVar10 = puVar10 + 1;
    }
    if (*puVar10 == 0) {
      *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
      longjmp((int *)((int)this + 8),6);
    }
    if (((((*puVar9 | 0x20) == 0x78) && ((*(ushort *)(iVar1 + 4) | 0x20) == 0x6d)) &&
        ((*(ushort *)(iVar1 + 6) | 0x20) == 0x6c)) && ((ushort *)(iVar1 + 8) == puVar10)) {
      bVar2 = true;
      uVar6 = param_3 & 0x100;
    }
    else {
      bVar2 = false;
      uVar6 = param_3 & 1;
    }
    if (uVar6 == 0) {
      uVar5 = *puVar10;
      do {
        if ((uVar5 == 0x3f) && ((puVar10[1] == 0x3e || ((puVar10[1] == 0 && (param_4 == 0x3e)))))) {
          if (*puVar10 != 0) {
            uVar6 = (puVar10[1] == 0x3e) + 1;
            goto LAB_00419471;
          }
          break;
        }
        uVar5 = puVar10[1];
        puVar10 = puVar10 + 1;
      } while (uVar5 != 0);
    }
    else {
      if (bVar2) {
        if (((byte)*puVar8 & 7) != 1) {
          *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),6);
        }
        puVar7 = FUN_004172b0((uint)puVar8,this,7);
        if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),3);
        }
      }
      else {
        puVar7 = FUN_004172b0((uint)puVar8,this,6);
        if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),3);
        }
      }
      puVar7[2] = (uint)puVar9;
      uVar5 = *puVar10;
      *puVar10 = 0;
      puVar10 = puVar10 + 1;
      if (uVar5 == 0x3f) {
        uVar5 = *puVar10;
        if ((uVar5 != 0x3e) && ((uVar5 != 0 || (param_4 != 0x3e)))) {
          *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
          longjmp((int *)((int)this + 8),6);
        }
        puVar8 = (undefined4 *)puVar7[1];
        uVar6 = (uint)(uVar5 == 0x3e);
LAB_00419471:
        *param_1 = (int)(puVar10 + uVar6);
        *param_2 = (uint)puVar8;
        return;
      }
      if (uVar5 < 0x80) {
        bVar4 = (&DAT_0055ac88)[uVar5];
      }
      else {
        bVar4 = 0;
      }
      if ((bVar4 & 8) != 0) {
        while( true ) {
          if (*puVar10 < 0x80) {
            bVar4 = (&DAT_0055ac88)[*puVar10];
          }
          else {
            bVar4 = 0;
          }
          if ((bVar4 & 8) == 0) break;
          puVar10 = puVar10 + 1;
        }
        puVar9 = puVar10;
        if (*puVar10 != 0) {
          do {
            if ((*puVar9 == 0x3f) &&
               ((puVar9[1] == 0x3e || ((puVar9[1] == 0 && (param_4 == 0x3e)))))) break;
            puVar9 = puVar9 + 1;
          } while (*puVar9 != 0);
          if (*puVar9 != 0) {
            if (bVar2) {
              *puVar9 = 0x2f;
              *param_1 = (int)puVar10;
              *param_2 = (uint)puVar7;
              return;
            }
            puVar7[3] = (uint)puVar10;
            puVar8 = (undefined4 *)puVar7[1];
            *puVar9 = 0;
            puVar10 = puVar9 + 1;
            uVar6 = (uint)(*puVar10 == 0x3e);
            goto LAB_00419471;
          }
        }
        *(ushort **)((int)this + 0x48) = puVar9;
                    /* WARNING: Subroutine does not return */
        longjmp((int *)((int)this + 8),6);
      }
    }
  }
  *(ushort **)((int)this + 0x48) = puVar10;
                    /* WARNING: Subroutine does not return */
  longjmp((int *)((int)this + 8),6);
}


/* FUN_00419ac0 @ 00419ac0  kind=gamemisc  attributed-by=none  size=219 */

ushort * __cdecl FUN_00419ac0(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_0055ac88)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x10) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    if (((uVar1 == 0x5d) && (puVar4[1] == 0x5d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + 1;
}


/* FUN_00419ba0 @ 00419ba0  kind=gamemisc  attributed-by=none  size=232 */

ushort * __cdecl FUN_00419ba0(ushort *param_1,short param_2)

{
  ushort uVar1;
  byte bVar2;
  ushort *puVar3;
  ushort *_Src;
  ushort *puVar4;
  int iVar5;
  
  if (*param_1 == 0) {
    return (ushort *)0x0;
  }
  _Src = (ushort *)0x0;
  iVar5 = 0;
  while( true ) {
    while( true ) {
      while( true ) {
        puVar4 = param_1;
        if (*puVar4 < 0x80) {
          bVar2 = (&DAT_0055ac88)[*puVar4];
        }
        else {
          bVar2 = 0;
        }
        if ((bVar2 & 0x20) != 0) break;
        param_1 = puVar4 + 1;
      }
      uVar1 = *puVar4;
      if (uVar1 != 0xd) break;
      *puVar4 = 10;
      param_1 = puVar4 + 1;
      if (*param_1 == 10) {
        if (_Src != (ushort *)0x0) {
          memmove(_Src + -iVar5,_Src,(int)param_1 - (int)_Src);
        }
        _Src = puVar4 + 2;
        iVar5 = iVar5 + 1;
        param_1 = _Src;
      }
    }
    if (((uVar1 == 0x2d) && (puVar4[1] == 0x2d)) &&
       ((puVar4[2] == 0x3e || ((puVar4[2] == 0 && (param_2 == 0x3e)))))) break;
    if (uVar1 == 0) {
      return (ushort *)0x0;
    }
    param_1 = puVar4 + 1;
  }
  puVar3 = puVar4;
  if (_Src != (ushort *)0x0) {
    memmove(_Src + -iVar5,_Src,(int)puVar4 - (int)_Src);
    puVar3 = puVar4 + -iVar5;
  }
  *puVar3 = 0;
  return puVar4 + (puVar4[2] == 0x3e) + 2;
}


/* FUN_00419c90 @ 00419c90  kind=gamemisc  attributed-by=none  size=489 */

ushort * __cdecl FUN_00419c90(ushort *param_1,void *param_2)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  ushort *puVar4;
  ushort uVar5;
  uint uVar6;
  
  puVar1 = param_1 + 1;
  puVar4 = puVar1;
  switch(*puVar1) {
  case 0x23:
    uVar2 = 0;
    if (param_1[2] == 0x78) {
      uVar6 = (uint)param_1[3];
      puVar4 = param_1 + 3;
      if (uVar6 == 0x3b) {
        return puVar4;
      }
      while( true ) {
        while (uVar6 - 0x30 < 10) {
          puVar1 = puVar4 + 1;
          uVar2 = uVar2 * 0x10 + -0x30 + uVar6;
          puVar4 = puVar4 + 1;
          uVar6 = (uint)*puVar1;
        }
        uVar3 = uVar6 | 0x20;
        if (5 < uVar3 - 0x61) break;
        uVar6 = (uint)puVar4[1];
        uVar2 = uVar2 * 0x10 + -0x57 + uVar3;
        puVar4 = puVar4 + 1;
      }
      uVar5 = (ushort)uVar6;
    }
    else {
      uVar5 = param_1[2];
      uVar6 = (uint)uVar5;
      puVar4 = param_1 + 2;
      if (uVar6 == 0x3b) {
        return puVar4;
      }
      while (uVar6 - 0x30 < 10) {
        uVar5 = puVar4[1];
        puVar4 = puVar4 + 1;
        uVar2 = uVar6 + uVar2 * 10 + -0x30;
        uVar6 = (uint)uVar5;
      }
    }
    if (uVar5 == 0x3b) {
      param_1 = FUN_00417070(param_1,uVar2);
      FUN_00419a80(param_2,(int *)&param_1,(int)(puVar4 + 1) - (int)param_1 >> 1);
      return puVar4 + 1;
    }
    break;
  case 0x61:
    puVar4 = param_1 + 2;
    if (param_1[2] == 0x6d) {
      puVar4 = param_1 + 3;
      if ((*puVar4 == 0x70) && (puVar4 = param_1 + 4, *puVar4 == 0x3b)) {
        uVar5 = 0x26;
        goto LAB_00419da1;
      }
    }
    else if ((((param_1[2] == 0x70) && (puVar4 = param_1 + 3, *puVar4 == 0x6f)) &&
             (puVar4 = param_1 + 4, *puVar4 == 0x73)) && (puVar4 = param_1 + 5, *puVar4 == 0x3b)) {
      uVar5 = 0x27;
      goto LAB_00419da1;
    }
    break;
  case 0x67:
    puVar4 = param_1 + 2;
    if ((*puVar4 == 0x74) && (puVar4 = param_1 + 3, *puVar4 == 0x3b)) {
      uVar5 = 0x3e;
LAB_00419da1:
      *param_1 = uVar5;
      param_1 = puVar1;
      FUN_00419a80(param_2,(int *)&param_1,(int)puVar4 + (2 - (int)puVar1) >> 1);
      return puVar4 + 1;
    }
    break;
  case 0x6c:
    puVar4 = param_1 + 2;
    if ((*puVar4 == 0x74) && (puVar4 = param_1 + 3, *puVar4 == 0x3b)) {
      uVar5 = 0x3c;
      goto LAB_00419da1;
    }
    break;
  case 0x71:
    puVar4 = param_1 + 2;
    if ((((*puVar4 == 0x75) && (puVar4 = param_1 + 3, *puVar4 == 0x6f)) &&
        (puVar4 = param_1 + 4, *puVar4 == 0x74)) && (puVar4 = param_1 + 5, *puVar4 == 0x3b)) {
      uVar5 = 0x22;
      goto LAB_00419da1;
    }
  }
  return puVar4;
}


/* FUN_0041a030 @ 0041a030  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0041a030(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x40);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0041a03e. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0041a5d0 @ 0041a5d0  kind=gamemisc  attributed-by=none  size=135 */

undefined4 * __thiscall FUN_0041a5d0(void *this,int *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bc21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0041af30(this);
  this_00 = puVar1 + 4;
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8 = 1;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[9] = 7;
    puVar1[8] = 0;
    *(undefined2 *)this_00 = 0;
    FUN_004172f0(this_00,param_1,0,0xffffffff);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_0041a670 @ 0041a670  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_0041a670(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_0041a6f0(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_0041a6f0 @ 0041a6f0  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_0041a6f0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bc40;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_0041a5d0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_0041a6f0(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_0041a6f0(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0041a7b0 @ 0041a7b0  kind=gamemisc  attributed-by=none  size=511 */

void __thiscall
FUN_0041a7b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,int *param_4)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  
  if (0x6666664 < *(uint *)((int)this + 4)) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  piVar3 = FUN_0041a5d0(this,param_4);
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  piVar3[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = piVar3;
    **(undefined4 **)this = piVar3;
    iVar4 = *(int *)this;
  }
  else {
    if (param_2 != '\0') {
      *param_3 = piVar3;
      if (param_3 == (undefined4 *)**(int **)this) {
        **(int **)this = (int)piVar3;
      }
      goto LAB_0041a80e;
    }
    param_3[2] = piVar3;
    iVar4 = *(int *)this;
    if (param_3 != *(undefined4 **)(iVar4 + 8)) goto LAB_0041a80e;
  }
  *(int **)(iVar4 + 8) = piVar3;
LAB_0041a80e:
  cVar1 = *(char *)(piVar3[1] + 0xc);
  piVar5 = piVar3;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = piVar3;
      return;
    }
    piVar7 = (int *)piVar5[1];
    piVar6 = *(int **)piVar7[1];
    if (piVar7 == piVar6) {
      piVar6 = (int *)((undefined4 *)piVar7[1])[2];
      if ((char)piVar6[3] != '\0') {
        if (piVar5 == (int *)piVar7[2]) {
          piVar5 = (int *)piVar7[2];
          piVar7[2] = *piVar5;
          if (*(char *)(*piVar5 + 0xd) == '\0') {
            *(int **)(*piVar5 + 4) = piVar7;
          }
          piVar5[1] = piVar7[1];
          if (piVar7 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar5;
          }
          else {
            piVar6 = (int *)piVar7[1];
            if (piVar7 == (int *)*piVar6) {
              *piVar6 = (int)piVar5;
            }
            else {
              piVar6[2] = (int)piVar5;
            }
          }
          *piVar5 = (int)piVar7;
          piVar7[1] = (int)piVar5;
          piVar5 = piVar7;
        }
        *(undefined1 *)(piVar5[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
        piVar7 = *(int **)(piVar5[1] + 4);
        piVar6 = (int *)*piVar7;
        *piVar7 = piVar6[2];
        if (*(char *)(piVar6[2] + 0xd) == '\0') {
          *(int **)(piVar6[2] + 4) = piVar7;
        }
        piVar6[1] = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar6;
          piVar6[2] = (int)piVar7;
        }
        else {
          piVar2 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
          else {
            *piVar2 = (int)piVar6;
            piVar6[2] = (int)piVar7;
          }
        }
        goto LAB_0041a98a;
      }
LAB_0041a8e1:
      *(undefined1 *)(piVar7 + 3) = 1;
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar5 = *(int **)(piVar5[1] + 4);
    }
    else {
      if ((char)piVar6[3] == '\0') goto LAB_0041a8e1;
      if (piVar5 == (int *)*piVar7) {
        iVar4 = *piVar7;
        *piVar7 = *(int *)(iVar4 + 8);
        if (*(char *)(*(int *)(iVar4 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar4 + 8) + 4) = piVar7;
        }
        *(int *)(iVar4 + 4) = piVar7[1];
        if (piVar7 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar4;
        }
        else {
          piVar5 = (int *)piVar7[1];
          if (piVar7 == (int *)piVar5[2]) {
            piVar5[2] = iVar4;
          }
          else {
            *piVar5 = iVar4;
          }
        }
        *(int **)(iVar4 + 8) = piVar7;
        piVar7[1] = iVar4;
        piVar5 = piVar7;
      }
      *(undefined1 *)(piVar5[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar5[1] + 4) + 0xc) = 0;
      piVar7 = *(int **)(piVar5[1] + 4);
      piVar6 = (int *)piVar7[2];
      piVar7[2] = *piVar6;
      if (*(char *)(*piVar6 + 0xd) == '\0') {
        *(int **)(*piVar6 + 4) = piVar7;
      }
      piVar6[1] = piVar7[1];
      if (piVar7 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar6;
      }
      else {
        piVar2 = (int *)piVar7[1];
        if (piVar7 == (int *)*piVar2) {
          *piVar2 = (int)piVar6;
        }
        else {
          piVar2[2] = (int)piVar6;
        }
      }
      *piVar6 = (int)piVar7;
LAB_0041a98a:
      piVar7[1] = (int)piVar6;
    }
    cVar1 = *(char *)(piVar5[1] + 0xc);
  } while( true );
}


/* FUN_0041a9b0 @ 0041a9b0  kind=gamemisc  attributed-by=none  size=319 */

void __thiscall
FUN_0041a9b0(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,undefined4 param_4)

{
  ushort *this_00;
  uint uVar1;
  ushort **ppuVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054bc60;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar1 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_18 = (int)uVar1 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar1 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_18 = -1 < (int)uVar1;
    }
    puVar3 = puVar5;
    if (local_18 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      ppuVar2 = (ushort **)&param_2;
      local_18 = true;
      goto LAB_0041aa71;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar1 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  if (-1 < (int)uVar1) {
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppuVar2 = &param_3;
LAB_0041aa71:
  puVar3 = (undefined4 *)FUN_0041a7b0(this,ppuVar2,local_18,puVar3,(int *)this_00);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0041ab00 @ 0041ab00  kind=gamemisc  attributed-by=none  size=129 */

void __thiscall FUN_0041ab00(void *this,int *param_1,int *param_2)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  undefined4 local_c [2];
  
  do {
    do {
      while( true ) {
        do {
          piVar3 = param_1;
          if (piVar3 == param_2) {
            return;
          }
          FUN_0041a9b0(this,local_c,(undefined4 *)0x0,(ushort *)(piVar3 + 4),(uint)DAT_00583d7a);
          param_1 = piVar3;
        } while (*(char *)((int)piVar3 + 0xd) != '\0');
        param_1 = (int *)piVar3[2];
        if (*(char *)((int)param_1 + 0xd) != '\0') break;
        cVar1 = *(char *)(*param_1 + 0xd);
        piVar3 = (int *)*param_1;
        while (cVar1 == '\0') {
          cVar1 = *(char *)(*piVar3 + 0xd);
          param_1 = piVar3;
          piVar3 = (int *)*piVar3;
        }
      }
      param_1 = (int *)piVar3[1];
    } while (*(char *)((int)param_1 + 0xd) != '\0');
    do {
      if (piVar3 != (int *)param_1[2]) break;
      piVar2 = (int *)param_1[1];
      piVar3 = param_1;
      param_1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  } while( true );
}


/* FUN_0041af30 @ 0041af30  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_0041af30(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_0041af70 @ 0041af70  kind=gamemisc  attributed-by=none  size=141 */

void __thiscall FUN_0041af70(void *this,uint param_1)

{
  int *this_00;
  uint uVar1;
  int *piVar2;
  
  uVar1 = param_1;
  if (param_1 != 0) {
    piVar2 = (int *)(param_1 + 4);
    FUN_0041ab00((void *)((int)this + 8),(int *)**(int **)(param_1 + 4),*(int **)(param_1 + 4));
    this_00 = (int *)(param_1 + 0xc);
    if (this_00 != piVar2) {
      FUN_0041a120(*(int **)(*this_00 + 4));
      param_1 = param_1 & 0xffffff00;
      *(int *)(*this_00 + 4) = *this_00;
      *(int *)*this_00 = *this_00;
      *(int *)(*this_00 + 8) = *this_00;
      *(undefined4 *)(uVar1 + 0x10) = 0;
      FUN_0041a670(this_00,piVar2,param_1);
    }
    piVar2 = (int *)**(int **)(uVar1 + 0x38);
    if (piVar2 != *(int **)(uVar1 + 0x38)) {
      do {
        FUN_0041af70(this,piVar2[2]);
        FUN_0041ab00(this_00,(int *)**(int **)(piVar2[2] + 0xc),*(int **)(piVar2[2] + 0xc));
        piVar2 = (int *)*piVar2;
      } while (piVar2 != (int *)*(int *)(uVar1 + 0x38));
    }
  }
  return;
}


/* FUN_0041b000 @ 0041b000  kind=gamemisc  attributed-by=none  size=75 */

short __cdecl FUN_0041b000(short param_1)

{
  byte bVar1;
  
  bVar1 = (byte)((ushort)param_1 >> 8);
  if ((((((param_1 != 0x2e) && (param_1 != 0x3a)) && (param_1 != 0x2d)) &&
       ((param_1 != 0x2c && (param_1 != 0x3b)))) &&
      ((param_1 != 0x21 && ((param_1 != 0x3f && (param_1 != 0x2f)))))) &&
     ((param_1 != 0x28 && (param_1 != 0x29)))) {
    return (ushort)bVar1 << 8;
  }
  return CONCAT11(bVar1,1);
}


/* FUN_0041b050 @ 0041b050  kind=gamemisc  attributed-by=none  size=2218 */

void __thiscall FUN_0041b050(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void **this_00;
  short sVar2;
  int *piVar3;
  int *piVar4;
  undefined2 uVar5;
  QuestTextNode *pQVar6;
  int *piVar7;
  int iVar8;
  undefined4 **ppuVar9;
  void *pvVar10;
  short *****pppppsVar11;
  undefined4 **ppuVar12;
  deleting_destructor *pdVar13;
  uint extraout_ECX;
  uint uVar14;
  short *psVar15;
  undefined4 **extraout_EDX;
  uint uVar16;
  int in_stack_00000014;
  uint in_stack_00000018;
  undefined4 local_68 [2];
  undefined4 local_60 [2];
  void *local_58;
  QuestTextNode *local_54;
  int local_50;
  undefined4 local_4c;
  QuestTextNode_vftable *local_48;
  int *local_44;
  uint local_40;
  QuestTextNode *local_3c;
  QuestTextNode *local_38;
  int local_34;
  QuestTextNode *local_30;
  short ****local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054bdf5;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (undefined4 *)((int)this + 4);
  local_8 = 0;
  local_58 = this;
  if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 4))(1,local_14);
    *puVar1 = 0;
  }
  local_54 = operator_new(0x44);
  local_8._0_1_ = 1;
  if (local_54 == (QuestTextNode *)0x0) {
    pQVar6 = (QuestTextNode *)0x0;
  }
  else {
    pQVar6 = cube::QuestTextNode::QuestTextNode(local_54);
  }
  *puVar1 = pQVar6;
  local_8._0_1_ = 0;
  FUN_0041a120(*(int **)(*(int *)((int)this + 8) + 4));
  *(int *)(*(int *)((int)this + 8) + 4) = *(int *)((int)this + 8);
  *(undefined4 *)*(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 8);
  *(int *)(*(int *)((int)this + 8) + 8) = *(int *)((int)this + 8);
  *(undefined4 *)((int)this + 0xc) = 0;
  local_40 = 0;
  piVar7 = (int *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
  local_8._0_1_ = 2;
  local_44 = piVar7;
  iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],puVar1);
  piVar7[1] = iVar8;
  **(int **)(iVar8 + 4) = iVar8;
  uVar16 = 1;
  local_40 = 1;
  local_54 = (QuestTextNode *)in_stack_00000014;
  local_50 = -1;
  local_34 = 0;
  uVar14 = in_stack_00000018;
  ppuVar12 = (undefined4 **)param_1;
  if (-1 < in_stack_00000014) {
    do {
      iVar8 = local_34;
      ppuVar9 = &param_1;
      if (7 < uVar14) {
        ppuVar9 = ppuVar12;
      }
      if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x20) {
LAB_0041b1f8:
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 3;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar6 = (QuestTextNode *)0x0;
          }
          else {
            pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar6->QuestTextNode_data).offset_0x3c = 2;
          local_38 = (QuestTextNode *)(*(int *)(piVar7[1] + 8) + 0x38);
          local_48 = local_38->vftablePtr;
          local_8._0_1_ = 2;
          local_3c = pQVar6;
          local_30 = (QuestTextNode *)
                     FUN_0052dfb0(local_48,(undefined4 *)local_48[1].deleting_destructor,&local_3c);
          pvVar10 = (local_38->QuestTextNode_data).offset_0x0;
          if (pvVar10 == (void *)0x15555554) goto LAB_0041b8eb;
          (local_38->QuestTextNode_data).offset_0x0 = (void *)((int)pvVar10 + 1);
          local_48[1].deleting_destructor = (deleting_destructor *)local_30;
          *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
          (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_3c);
          if (uVar16 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16 + 1;
          local_30 = operator_new(0x44);
          local_8._0_1_ = 4;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar8 = *(int *)(piVar7[1] + 8);
          local_30 = *(QuestTextNode **)(iVar8 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          pvVar10 = (void *)FUN_0052dfb0(&local_30->vftablePtr,
                                         (local_30->QuestTextNode_data).offset_0x0,&local_38);
          if (*(int *)(iVar8 + 0x3c) == 0x15555554) goto LAB_0041b8eb;
          *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = pvVar10;
          **(int **)((int)pvVar10 + 4) = (int)pvVar10;
          (local_3c->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_38);
          if (uVar16 + 1 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          uVar16 = uVar16 + 2;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16;
          uVar14 = in_stack_00000018;
          ppuVar12 = (undefined4 **)param_1;
          iVar8 = local_34;
        }
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x5b) {
          local_30 = operator_new(0x44);
          local_8._0_1_ = 5;
          if (local_30 == (QuestTextNode *)0x0) {
            pQVar6 = (QuestTextNode *)0x0;
          }
          else {
            pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
          }
          (pQVar6->QuestTextNode_data).offset_0x3c = 3;
          local_30 = (QuestTextNode *)(*(int *)(piVar7[1] + 8) + 0x38);
          local_48 = local_30->vftablePtr;
          local_8._0_1_ = 2;
          local_38 = pQVar6;
          local_3c = (QuestTextNode *)
                     FUN_0052dfb0(local_48,(undefined4 *)local_48[1].deleting_destructor,&local_38);
          pvVar10 = (local_30->QuestTextNode_data).offset_0x0;
          if (pvVar10 == (void *)0x15555554) goto LAB_0041b8eb;
          (local_30->QuestTextNode_data).offset_0x0 = (void *)((int)pvVar10 + 1);
          local_48[1].deleting_destructor = (deleting_destructor *)local_3c;
          *(QuestTextNode **)(local_3c->QuestTextNode_data).offset_0x0 = local_3c;
          (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_38);
          if (uVar16 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          uVar16 = uVar16 + 1;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16;
          uVar14 = in_stack_00000018;
          ppuVar12 = (undefined4 **)param_1;
        }
        if ((int)(local_50 + 1U) < local_34) {
LAB_0041b489:
          FUN_00419f90(&param_1,(undefined2 *)local_2c,local_50 + 1U,(local_34 - local_50) - 1);
          pppppsVar11 = local_2c;
          if (7 < local_18) {
            pppppsVar11 = (short *****)local_2c[0];
          }
          local_8._0_1_ = 6;
          if (*(short *)pppppsVar11 == 0x23) {
            FUN_0041a9b0((void *)(*(int *)(piVar7[1] + 8) + 4),local_68,(undefined4 *)0x0,
                         (ushort *)local_2c,(uint)DAT_00583d7a);
          }
          else {
            pppppsVar11 = local_2c;
            if (7 < local_18) {
              pppppsVar11 = (short *****)local_2c[0];
            }
            if (*(short *)pppppsVar11 == 0x24) {
              FUN_0041a9b0((void *)(*(int *)(piVar7[1] + 8) + 0x14),local_60,(undefined4 *)0x0,
                           (ushort *)local_2c,(uint)DAT_00583d7a);
            }
            else {
              local_30 = operator_new(0x44);
              local_8._0_1_ = 7;
              if (local_30 == (QuestTextNode *)0x0) {
                pQVar6 = (QuestTextNode *)0x0;
              }
              else {
                pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
              }
              this_00 = &(pQVar6->QuestTextNode_data).offset_0x18;
              local_8._0_1_ = 6;
              local_30 = pQVar6;
              if (this_00 != local_2c) {
                FUN_004172f0(this_00,(int *)local_2c,0,0xffffffff);
              }
              local_48 = (QuestTextNode_vftable *)(*(int *)(piVar7[1] + 8) + 0x38);
              local_38 = (QuestTextNode *)local_48->deleting_destructor;
              local_30 = (QuestTextNode *)
                         FUN_0052dfb0((undefined4 *)local_38,
                                      (local_38->QuestTextNode_data).offset_0x0,&local_30);
              if (local_48[1].deleting_destructor == (deleting_destructor *)0x15555554)
              goto LAB_0041b8eb;
              local_48[1].deleting_destructor = local_48[1].deleting_destructor + 1;
              (local_38->QuestTextNode_data).offset_0x0 = local_30;
              *(QuestTextNode **)(local_30->QuestTextNode_data).offset_0x0 = local_30;
              (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
              ppuVar12 = &param_1;
              if (7 < in_stack_00000018) {
                ppuVar12 = (undefined4 **)param_1;
              }
              sVar2 = *(short *)((int)ppuVar12 + local_34 * 2);
              if (((((sVar2 == 0x2e) || (sVar2 == 0x3a)) || (sVar2 == 0x2d)) ||
                  (((sVar2 == 0x2c || (sVar2 == 0x3b)) ||
                   ((sVar2 == 0x21 || ((sVar2 == 0x3f || (sVar2 == 0x2f)))))))) ||
                 ((sVar2 == 0x28 || (sVar2 == 0x29)))) {
                ppuVar12 = &param_1;
                if (7 < in_stack_00000018) {
                  ppuVar12 = (undefined4 **)param_1;
                }
                local_4c._0_2_ = *(short *)((int)ppuVar12 + local_34 * 2);
                local_4c._2_2_ = 0;
                local_30 = operator_new(0x44);
                local_8._0_1_ = 8;
                if (local_30 == (QuestTextNode *)0x0) {
                  pQVar6 = (QuestTextNode *)0x0;
                }
                else {
                  pQVar6 = cube::QuestTextNode::QuestTextNode(local_30);
                }
                local_8._0_1_ = 6;
                local_30 = pQVar6;
                if ((short)local_4c == 0) {
                  uVar14 = 0;
                }
                else {
                  psVar15 = (short *)&local_4c;
                  do {
                    sVar2 = *psVar15;
                    psVar15 = psVar15 + 1;
                  } while (sVar2 != 0);
                  uVar14 = (int)psVar15 - ((int)&local_4c + 2) >> 1;
                }
                FUN_00417410(&(pQVar6->QuestTextNode_data).offset_0x18,&local_4c,uVar14);
                (pQVar6->QuestTextNode_data).offset_0x3c = 1;
                (pQVar6->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
                iVar8 = *(int *)(piVar7[1] + 8);
                local_48 = *(QuestTextNode_vftable **)(iVar8 + 0x38);
                pdVar13 = (deleting_destructor *)
                          FUN_0052dfb0(local_48,(undefined4 *)local_48[1].deleting_destructor,
                                       &local_30);
                if (*(int *)(iVar8 + 0x3c) == 0x15555554) goto LAB_0041b8eb;
                *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + 1;
                local_48[1].deleting_destructor = pdVar13;
                **(undefined4 **)(pdVar13 + 4) = pdVar13;
              }
            }
          }
          local_8._0_1_ = 2;
          ppuVar12 = (undefined4 **)param_1;
          if (7 < local_18) {
            operator_delete(local_2c[0]);
            ppuVar12 = (undefined4 **)param_1;
          }
        }
        else {
          ppuVar9 = &param_1;
          if (7 < uVar14) {
            ppuVar9 = ppuVar12;
          }
          sVar2 = *(short *)((int)ppuVar9 + local_34 * 2);
          if (((((((sVar2 == 0x2e) || (sVar2 == 0x3a)) || (sVar2 == 0x2d)) ||
                ((sVar2 == 0x2c || (sVar2 == 0x3b)))) ||
               ((sVar2 == 0x21 || ((sVar2 == 0x3f || (sVar2 == 0x2f)))))) || (sVar2 == 0x28)) ||
             (sVar2 == 0x29)) goto LAB_0041b489;
        }
        ppuVar9 = &param_1;
        if (7 < in_stack_00000018) {
          ppuVar9 = ppuVar12;
        }
        local_50 = local_34;
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x7c) {
          if (uVar16 < 2) goto LAB_0041b894;
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
          }
          local_30 = operator_new(0x44);
          local_8._0_1_ = 9;
          if (local_30 == (QuestTextNode *)0x0) {
            local_3c = (QuestTextNode *)0x0;
          }
          else {
            local_3c = cube::QuestTextNode::QuestTextNode(local_30);
          }
          iVar8 = *(int *)(piVar7[1] + 8);
          local_30 = *(QuestTextNode **)(iVar8 + 0x38);
          local_8._0_1_ = 2;
          local_38 = local_3c;
          pvVar10 = (void *)FUN_0052dfb0(&local_30->vftablePtr,
                                         (local_30->QuestTextNode_data).offset_0x0,&local_3c);
          if (*(int *)(iVar8 + 0x3c) == 0x15555554) {
LAB_0041b8eb:
                    /* WARNING: Subroutine does not return */
            std::_Xlength_error("list<T> too long");
          }
          *(int *)(iVar8 + 0x3c) = *(int *)(iVar8 + 0x3c) + 1;
          (local_30->QuestTextNode_data).offset_0x0 = pvVar10;
          **(undefined4 **)((int)pvVar10 + 4) = pvVar10;
          (local_38->QuestTextNode_data).offset_0x30 = *(undefined4 *)(piVar7[1] + 8);
          iVar8 = FUN_0052dfb0(piVar7,(undefined4 *)piVar7[1],&local_3c);
          if (uVar16 == 0x15555554) goto LAB_0041b8eb;
          piVar7[1] = iVar8;
          uVar16 = uVar16 + 1;
          **(int **)(iVar8 + 4) = iVar8;
          local_40 = uVar16;
          ppuVar12 = (undefined4 **)param_1;
        }
        ppuVar9 = &param_1;
        if (7 < in_stack_00000018) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x7d) {
          if (uVar16 < 3) goto LAB_0041b894;
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
            ppuVar12 = (undefined4 **)param_1;
          }
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
            ppuVar12 = (undefined4 **)param_1;
          }
        }
        ppuVar9 = &param_1;
        if (7 < in_stack_00000018) {
          ppuVar9 = ppuVar12;
        }
        uVar14 = in_stack_00000018;
        iVar8 = local_34;
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0x5d) {
          if (uVar16 < 2) goto LAB_0041b894;
          piVar3 = (int *)piVar7[1];
          if (piVar3 != piVar7) {
            *(int *)piVar3[1] = *piVar3;
            *(int *)(*piVar3 + 4) = piVar3[1];
            operator_delete(piVar3);
            uVar16 = uVar16 - 1;
            local_40 = uVar16;
            uVar14 = in_stack_00000018;
            ppuVar12 = (undefined4 **)param_1;
            iVar8 = local_34;
          }
        }
      }
      else {
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 10) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 9) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        if (*(short *)((int)ppuVar9 + local_34 * 2) == 0) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < uVar14) {
          ppuVar9 = ppuVar12;
        }
        uVar5 = FUN_0041b000(*(short *)((int)ppuVar9 + local_34 * 2));
        uVar14 = extraout_ECX;
        ppuVar12 = extraout_EDX;
        if ((char)uVar5 != '\0') goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7b) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7d) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x5b) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x5d) goto LAB_0041b1f8;
        ppuVar9 = &param_1;
        if (7 < extraout_ECX) {
          ppuVar9 = extraout_EDX;
        }
        if (*(short *)((int)ppuVar9 + iVar8 * 2) == 0x7c) goto LAB_0041b1f8;
      }
      local_34 = iVar8 + 1;
    } while (iVar8 + 1 <= (int)local_54);
  }
  FUN_0041af70(local_58,*(uint *)((int)local_58 + 4));
LAB_0041b894:
  piVar3 = (int *)*piVar7;
  *piVar7 = (int)piVar7;
  piVar7[1] = (int)piVar7;
  while (piVar3 != piVar7) {
    piVar4 = (int *)*piVar3;
    operator_delete(piVar3);
    piVar3 = piVar4;
  }
  operator_delete(piVar7);
  if (7 < in_stack_00000018) {
    operator_delete(param_1);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0041b930 @ 0041b930  kind=gamemisc  attributed-by=none  size=60 */

undefined4 * __cdecl FUN_0041b930(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      param_3[1] = param_1[1];
      param_3[2] = param_1[2];
    }
    param_1 = param_1 + 3;
    param_3 = param_3 + 3;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041bb80 @ 0041bb80  kind=gamemisc  attributed-by=none  size=159 */

void __thiscall FUN_0041bb80(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (0x15555555U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  uVar3 = iVar1 + param_1;
  if (0x15555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041ba90(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041ba90(this,uVar2);
  return;
}


/* FUN_0041c9e0 @ 0041c9e0  kind=gamemisc  attributed-by=none  size=213 */

int __thiscall FUN_0041c9e0(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (((((int)param_1 < 0) || ((int)param_2 < 0)) || (0x1fffff < (int)param_1)) ||
     (0x1fffff < (int)param_2)) {
    return 0;
  }
  if (param_3 == 0) {
    param_3 = FUN_00406290(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x1fU)) >> 5,
                           (int)(param_2 + ((int)param_2 >> 0x1f & 0x1fU)) >> 5);
  }
  else {
    iVar1 = *(int *)(param_3 + 0x60) * 0x100;
    iVar1 = (int)((iVar1 >> 0x1f & 7U) + iVar1) >> 3;
    if ((int)param_1 < iVar1) {
      return 0;
    }
    iVar2 = *(int *)(param_3 + 100) * 0x100;
    iVar2 = (int)(iVar2 + (iVar2 >> 0x1f & 7U)) >> 3;
    if ((int)param_2 < iVar2) {
      return 0;
    }
    if (iVar1 + 0x20 <= (int)param_1) {
      return 0;
    }
    if (iVar2 + 0x20 <= (int)param_2) {
      return 0;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  uVar3 = param_2 & 0x8000001f;
  if ((int)uVar3 < 0) {
    uVar3 = (uVar3 - 1 | 0xffffffe0) + 1;
  }
  uVar4 = param_1 & 0x8000001f;
  if ((int)uVar4 < 0) {
    uVar4 = (uVar4 - 1 | 0xffffffe0) + 1;
  }
  return *(int *)(param_3 + 0xac) + (uVar3 * 0x20 + uVar4) * 8;
}


/* FUN_0041d160 @ 0041d160  kind=gamemisc  attributed-by=none  size=38 */

int __thiscall FUN_0041d160(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  do {
    iVar2 = iVar1 + 1;
    *(char *)(iVar1 + (int)this) = (char)(int)*(float *)(param_1 + iVar1 * 4);
    iVar1 = iVar2;
  } while (iVar2 < 3);
  return (int)this;
}


/* FUN_0041d190 @ 0041d190  kind=gamemisc  attributed-by=none  size=174 */

void * __cdecl FUN_0041d190(int param_1,int param_2,void *param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined4 *)(param_1 + 0x120);
    puVar2 = (undefined4 *)((int)param_3 + 0x128);
    iVar1 = param_1 - (int)param_3;
    do {
      FUN_00402a70(param_3,(undefined1 *)(iVar1 + -0x128 + (int)puVar2));
      puVar2[-4] = puVar3[-2];
      puVar2[-3] = puVar3[-1];
      puVar2[-2] = *puVar3;
      puVar2[-1] = puVar3[1];
      *puVar2 = puVar3[2];
      puVar2[1] = puVar3[3];
      puVar2[2] = puVar3[4];
      puVar2[3] = puVar3[5];
      *(undefined1 *)(puVar2 + 4) = *(undefined1 *)(puVar3 + 6);
      puVar2[5] = puVar3[7];
      puVar2[6] = puVar3[8];
      puVar2[7] = puVar3[9];
      puVar2 = puVar2 + 0x52;
      param_3 = (void *)((int)param_3 + 0x148);
      puVar3 = puVar3 + 0x52;
    } while (iVar1 + -0x128 + (int)puVar2 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0041d240 @ 0041d240  kind=gamemisc  attributed-by=none  size=44 */

void * __cdecl FUN_0041d240(int *param_1,int *param_2,void *param_3)

{
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    FUN_0041d950(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0xc);
  }
  return param_3;
}


/* FUN_0041d270 @ 0041d270  kind=gamemisc  attributed-by=none  size=197 */

undefined4 __cdecl FUN_0041d270(void *param_1,void *param_2,char *param_3)

{
  float *pfVar1;
  float fVar2;
  uint3 uVar3;
  uint in_EAX;
  undefined2 uVar4;
  uint *puVar5;
  int iVar6;
  
  while( true ) {
    if (param_1 == param_2) {
      return CONCAT31((int3)(in_EAX >> 8),1);
    }
    in_EAX = FUN_004078f0(param_1,param_3);
    if ((char)in_EAX == '\0') break;
    iVar6 = 0;
    puVar5 = (uint *)(param_3 + 0x118);
    do {
      in_EAX = *(uint *)(((int)param_1 - (int)param_3) + (int)puVar5);
      if ((in_EAX != *puVar5) ||
         (in_EAX = *(uint *)(((int)param_1 - (int)param_3) + 4 + (int)puVar5), in_EAX != puVar5[1]))
      goto LAB_0041d32e;
      iVar6 = iVar6 + 1;
      puVar5 = puVar5 + 2;
    } while (iVar6 < 3);
    fVar2 = *(float *)((int)param_1 + 0x130);
    pfVar1 = (float *)(param_3 + 0x130);
    uVar4 = (undefined2)(in_EAX >> 0x10);
    in_EAX = (uint)CONCAT21(uVar4,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                                  fVar2 < *pfVar1) << 8;
    if (fVar2 != *pfVar1) break;
    fVar2 = *(float *)((int)param_1 + 0x134);
    pfVar1 = (float *)(param_3 + 0x134);
    uVar3 = CONCAT21(uVar4,(fVar2 == *pfVar1) << 6 | (NAN(fVar2) || NAN(*pfVar1)) << 2 | 2U |
                           fVar2 < *pfVar1);
    in_EAX = (uint)uVar3 << 8;
    if ((((fVar2 != *pfVar1) ||
         (in_EAX = CONCAT31(uVar3,*(char *)((int)param_1 + 0x138)),
         *(char *)((int)param_1 + 0x138) != param_3[0x138])) ||
        (in_EAX = *(uint *)((int)param_1 + 0x13c), in_EAX != *(uint *)(param_3 + 0x13c))) ||
       (in_EAX = *(uint *)((int)param_1 + 0x140), in_EAX != *(uint *)(param_3 + 0x140))) break;
    param_1 = (void *)((int)param_1 + 0x148);
    param_3 = param_3 + 0x148;
  }
LAB_0041d32e:
  return in_EAX & 0xffffff00;
}


/* FUN_0041d340 @ 0041d340  kind=gamemisc  attributed-by=none  size=65 */

undefined4 * __cdecl FUN_0041d340(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    *param_3 = *param_1;
    FUN_00402a70(param_3 + 1,(undefined1 *)(param_1 + 1));
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d410 @ 0041d410  kind=gamemisc  attributed-by=none  size=69 */

undefined4 * __cdecl FUN_0041d410(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00413710(param_3 + 1,(undefined1 *)(param_1 + 1));
    }
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d460 @ 0041d460  kind=gamemisc  attributed-by=none  size=122 */

void * __cdecl FUN_0041d460(int *param_1,int *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined1 local_8;
  undefined3 uStack_7;
  
  puStack_c = &LAB_0054bef1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  uStack_7 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 3) {
    local_8 = 1;
    if (param_3 != (void *)0x0) {
      FUN_0041d720(param_3,param_1);
    }
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}


/* FUN_0041d500 @ 0041d500  kind=gamemisc  attributed-by=none  size=71 */

undefined4 * __cdecl FUN_0041d500(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (undefined4 *)0x0) {
      *param_3 = *param_1;
      FUN_00413710(param_3 + 1,(undefined1 *)(param_1 + 1));
    }
    param_1 = param_1 + 0x47;
    param_3 = param_3 + 0x47;
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d550 @ 0041d550  kind=gamemisc  attributed-by=none  size=114 */

void __cdecl FUN_0041d550(int param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)(param_1 + 8);
    do {
      if (puVar1 != (undefined4 *)0x8) {
        puVar1[-2] = 0;
        *(undefined2 *)(puVar1 + -1) = 0;
        *puVar1 = 0;
        puVar1[1] = 0;
        *(undefined2 *)(puVar1 + 2) = 0;
        *(undefined1 *)((int)puVar1 + 10) = 0;
        *(undefined2 *)(puVar1 + 3) = 1;
        puVar1[0x44] = 0;
        memset(puVar1 + 4,0,0x100);
      }
      puVar1 = puVar1 + 0x47;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}


/* FUN_0041d5d0 @ 0041d5d0  kind=gamemisc  attributed-by=none  size=48 */

void __cdecl FUN_0041d5d0(undefined4 *param_1,int param_2)

{
  for (; param_2 != 0; param_2 = param_2 + -1) {
    if (param_1 != (undefined4 *)0x0) {
      *param_1 = 0;
      param_1[1] = 0;
      param_1[2] = 0;
    }
    param_1 = param_1 + 3;
  }
  return;
}


/* FUN_0041d600 @ 0041d600  kind=gamemisc  attributed-by=none  size=114 */

undefined4 * __cdecl FUN_0041d600(undefined1 *param_1,undefined1 *param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  if (param_1 != param_2) {
    puVar3 = (undefined1 *)((int)param_3 + 0xe);
    puVar2 = param_1 + 0xe;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = *(undefined4 *)(puVar2 + -0xe);
        *(undefined4 *)(puVar3 + -10) = *(undefined4 *)(puVar2 + -10);
        *(undefined4 *)(puVar3 + -6) = *(undefined4 *)(puVar2 + -6);
        puVar3[-2] = puVar2[-2];
        puVar3[-1] = puVar2[-1];
        *puVar3 = *puVar2;
        puVar3[1] = puVar2[1];
        *(undefined4 *)(puVar3 + 2) = *(undefined4 *)(puVar2 + 2);
      }
      param_3 = param_3 + 5;
      puVar1 = puVar2 + 6;
      puVar3 = puVar3 + 0x14;
      puVar2 = puVar2 + 0x14;
    } while (puVar1 != param_2);
    return param_3;
  }
  return param_3;
}


/* FUN_0041d680 @ 0041d680  kind=gamemisc  attributed-by=none  size=61 */

void * __cdecl FUN_0041d680(undefined1 *param_1,undefined1 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_0041d820(param_3,param_1);
    }
    param_1 = param_1 + 0x148;
    param_3 = (void *)((int)param_3 + 0x148);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_0041d6c0 @ 0041d6c0  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_0041d6c0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  if (param_1 != param_2) {
    puVar2 = param_1 + 2;
    do {
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = 0;
        param_3[1] = 0;
        param_3[2] = 0;
        *param_3 = puVar2[-2];
        param_3[1] = puVar2[-1];
        param_3[2] = *puVar2;
        puVar2[-2] = 0;
        puVar2[-1] = 0;
        *puVar2 = 0;
      }
      param_3 = param_3 + 3;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 3;
    } while (puVar1 != param_2);
  }
  return;
}


/* FUN_0041d950 @ 0041d950  kind=gamemisc  attributed-by=none  size=368 */

int * __thiscall FUN_0041d950(void *this,int *param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf30;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      puVar2 = *(undefined4 **)this;
    }
    else {
      uVar3 = (param_1[1] - *param_1) / 0x11c;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
      if (uVar1 < uVar3) {
        if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x11c) < uVar3) {
          if (*(void **)this != (void *)0x0) {
            operator_delete(*(void **)this);
          }
          uVar3 = FUN_0041e320(this,(param_1[1] - *param_1) / 0x11c);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          puVar2 = FUN_0041d410((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this
                               );
        }
        else {
          puVar2 = (undefined4 *)*param_1 + uVar1 * 0x47;
          FUN_0041d340((undefined4 *)*param_1,puVar2,*(undefined4 **)this);
          puVar2 = FUN_0041d410(puVar2,(undefined4 *)param_1[1],*(undefined4 **)((int)this + 4));
        }
      }
      else {
        FUN_0041d340((undefined4 *)*param_1,(undefined4 *)param_1[1],*(undefined4 **)this);
        puVar2 = (undefined4 *)(((param_1[1] - *param_1) / 0x11c) * 0x11c + *(int *)this);
      }
    }
    *(undefined4 **)((int)this + 4) = puVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041dae0 @ 0041dae0  kind=gamemisc  attributed-by=none  size=355 */

int * __thiscall FUN_0041dae0(void *this,int *param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf50;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  if (this != param_1) {
    if (*param_1 == param_1[1]) {
      pvVar2 = *(void **)this;
    }
    else {
      uVar3 = (param_1[1] - *param_1) / 0x148;
      uVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x148;
      if (uVar1 < uVar3) {
        if ((uint)((*(int *)((int)this + 8) - *(int *)this) / 0x148) < uVar3) {
          if (*(void **)this != (void *)0x0) {
            operator_delete(*(void **)this);
          }
          uVar3 = FUN_0041e390(this,(param_1[1] - *param_1) / 0x148);
          if ((char)uVar3 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          pvVar2 = FUN_0041d680((undefined1 *)*param_1,(undefined1 *)param_1[1],*(void **)this);
        }
        else {
          puVar4 = (undefined1 *)(uVar1 * 0x148 + *param_1);
          FUN_0041d190(*param_1,(int)puVar4,*(void **)this);
          pvVar2 = FUN_0041d680(puVar4,(undefined1 *)param_1[1],*(void **)((int)this + 4));
        }
      }
      else {
        FUN_0041d190(*param_1,param_1[1],*(void **)this);
        pvVar2 = (void *)(((param_1[1] - *param_1) / 0x148) * 0x148 + *(int *)this);
      }
    }
    *(void **)((int)this + 4) = pvVar2;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041dc60 @ 0041dc60  kind=gamemisc  attributed-by=none  size=435 */

int * __thiscall FUN_0041dc60(void *this,int *param_1)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  void **ppvVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 *this_00;
  int *piVar7;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054bf70;
  local_10 = ExceptionList;
  if (this != param_1) {
    piVar7 = (int *)*param_1;
    piVar1 = (int *)param_1[1];
    if (piVar7 == piVar1) {
      ExceptionList = &local_10;
      FUN_00406310(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
      pvVar5 = *(void **)this;
    }
    else {
      this_00 = *(undefined4 **)this;
      uVar2 = ((int)piVar1 - (int)piVar7) / 0xc;
      uVar3 = (*(int *)((int)this + 4) - (int)this_00) / 0xc;
      ppvVar4 = &local_10;
      if (uVar3 < uVar2) {
        if ((uint)((*(int *)((int)this + 8) - (int)this_00) / 0xc) < uVar2) {
          ExceptionList = &local_10;
          if (this_00 != (undefined4 *)0x0) {
            FUN_00406310(this_00,*(undefined4 **)((int)this + 4));
            operator_delete(*(void **)this);
          }
          uVar6 = FUN_004ce580(this,(param_1[1] - *param_1) / 0xc);
          if ((char)uVar6 == '\0') {
            ExceptionList = local_10;
            return this;
          }
          local_8 = 0;
          pvVar5 = FUN_0041d460((int *)*param_1,(int *)param_1[1],*(void **)this);
        }
        else {
          ExceptionList = &local_10;
          FUN_0041d240(piVar7,piVar7 + uVar3 * 3,this_00);
          pvVar5 = FUN_0041d460(piVar7 + uVar3 * 3,(int *)param_1[1],*(void **)((int)this + 4));
        }
      }
      else {
        for (; ExceptionList = ppvVar4, piVar7 != piVar1; piVar7 = piVar7 + 3) {
          FUN_0041d950(this_00,piVar7);
          this_00 = this_00 + 3;
          ppvVar4 = ExceptionList;
        }
        FUN_00406310(this_00,*(undefined4 **)((int)this + 4));
        pvVar5 = (void *)(*(int *)this + ((param_1[1] - *param_1) / 0xc) * 0xc);
      }
    }
    *(void **)((int)this + 4) = pvVar5;
  }
  ExceptionList = local_10;
  return this;
}


/* FUN_0041de30 @ 0041de30  kind=gamemisc  attributed-by=none  size=240 */

void * __thiscall FUN_0041de30(void *this,undefined1 *param_1)

{
  FUN_00402a70(this,param_1);
  FUN_00402a70((void *)((int)this + 0x118),param_1 + 0x118);
  FUN_00402a70((void *)((int)this + 0x230),param_1 + 0x230);
  FUN_00402a70((void *)((int)this + 0x348),param_1 + 0x348);
  FUN_00402a70((void *)((int)this + 0x460),param_1 + 0x460);
  FUN_00402a70((void *)((int)this + 0x578),param_1 + 0x578);
  FUN_00402a70((void *)((int)this + 0x690),param_1 + 0x690);
  FUN_00402a70((void *)((int)this + 0x7a8),param_1 + 0x7a8);
  FUN_00402a70((void *)((int)this + 0x8c0),param_1 + 0x8c0);
  FUN_00402a70((void *)((int)this + 0x9d8),param_1 + 0x9d8);
  FUN_00402a70((void *)((int)this + 0xaf0),param_1 + 0xaf0);
  FUN_00402a70((void *)((int)this + 0xc08),param_1 + 0xc08);
  FUN_00402a70((void *)((int)this + 0xd20),param_1 + 0xd20);
  return this;
}


/* FUN_0041df70 @ 0041df70  kind=gamemisc  attributed-by=none  size=876 */

undefined4 * __thiscall FUN_0041df70(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined1 *)((int)this + 0x50) = *(undefined1 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  FUN_00407730((void *)((int)this + 0x68),(undefined1 *)(param_1 + 0x1a));
  *(undefined2 *)((int)this + 0x114) = *(undefined2 *)(param_1 + 0x45);
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined1 *)((int)this + 0x130) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)((int)this + 0x131) = *(undefined1 *)((int)param_1 + 0x131);
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  *(undefined4 *)((int)this + 0x140) = param_1[0x50];
  *(undefined4 *)((int)this + 0x144) = param_1[0x51];
  *(undefined4 *)((int)this + 0x148) = param_1[0x52];
  *(undefined4 *)((int)this + 0x14c) = param_1[0x53];
  *(undefined4 *)((int)this + 0x150) = param_1[0x54];
  *(undefined4 *)((int)this + 0x154) = param_1[0x55];
  *(undefined4 *)((int)this + 0x158) = param_1[0x56];
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  *(undefined8 *)((int)this + 0x168) = *(undefined8 *)(param_1 + 0x5a);
  *(undefined8 *)((int)this + 0x170) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x178) = param_1[0x5e];
  *(undefined1 *)((int)this + 0x17c) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((int)this + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
  *(undefined4 *)((int)this + 0x180) = param_1[0x60];
  *(undefined4 *)((int)this + 0x184) = param_1[0x61];
  *(undefined4 *)((int)this + 0x188) = param_1[0x62];
  *(undefined4 *)((int)this + 0x18c) = param_1[99];
  *(undefined4 *)((int)this + 400) = param_1[100];
  *(undefined4 *)((int)this + 0x194) = param_1[0x65];
  *(undefined1 *)((int)this + 0x198) = *(undefined1 *)(param_1 + 0x66);
  *(undefined4 *)((int)this + 0x19c) = param_1[0x67];
  *(undefined4 *)((int)this + 0x1a0) = param_1[0x68];
  *(undefined4 *)((int)this + 0x1a4) = param_1[0x69];
  *(undefined4 *)((int)this + 0x1a8) = param_1[0x6a];
  *(undefined4 *)((int)this + 0x1b0) = param_1[0x6c];
  *(undefined4 *)((int)this + 0x1b4) = param_1[0x6d];
  *(undefined4 *)((int)this + 0x1b8) = param_1[0x6e];
  *(undefined4 *)((int)this + 0x1bc) = param_1[0x6f];
  *(undefined4 *)((int)this + 0x1c0) = param_1[0x70];
  *(undefined4 *)((int)this + 0x1c4) = param_1[0x71];
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x72);
  *(undefined4 *)((int)this + 0x1cc) = param_1[0x73];
  *(undefined4 *)((int)this + 0x1d0) = param_1[0x74];
  *(undefined4 *)((int)this + 0x1d4) = param_1[0x75];
  FUN_00402a70((void *)((int)this + 0x1d8),(undefined1 *)(param_1 + 0x76));
  FUN_0041de30((void *)((int)this + 0x2f0),(undefined1 *)(param_1 + 0xbc));
  puVar1 = (undefined4 *)((int)this + 0x1128);
  iVar3 = 0xb;
  do {
    *puVar1 = *(undefined4 *)(((int)param_1 - (int)this) + (int)puVar1);
    puVar1 = puVar1 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  *(undefined4 *)((int)this + 0x1154) = param_1[0x455];
  puVar2 = (undefined1 *)((int)this + 0x1158);
  iVar3 = 0x10;
  do {
    *puVar2 = puVar2[(int)param_1 - (int)this];
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  return this;
}


/* FUN_0041e300 @ 0041e300  kind=gamemisc  attributed-by=none  size=22 */

void __thiscall FUN_0041e300(void *this,int *param_1)

{
  int iVar1;
  
  iVar1 = *(int *)this;
  *param_1 = iVar1;
  *(int *)this = iVar1 + 0x148;
  return;
}


/* FUN_0041e320 @ 0041e320  kind=gamemisc  attributed-by=none  size=104 */

uint __thiscall FUN_0041e320(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xe6c2b4 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x11c);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x11c);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0041e390 @ 0041e390  kind=gamemisc  attributed-by=none  size=104 */

uint __thiscall FUN_0041e390(void *this,uint param_1)

{
  uint in_EAX;
  void *pvVar1;
  
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  if (param_1 == 0) {
    return in_EAX & 0xffffff00;
  }
  if (0xc7ce0c < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  pvVar1 = operator_new(param_1 * 0x148);
  if (pvVar1 != (void *)0x0) {
    *(void **)this = pvVar1;
    *(void **)((int)this + 4) = pvVar1;
    pvVar1 = (void *)((int)pvVar1 + param_1 * 0x148);
    *(void **)((int)this + 8) = pvVar1;
    return CONCAT31((int3)((uint)pvVar1 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  std::_Xbad_alloc();
}


/* FUN_0041e400 @ 0041e400  kind=gamemisc  attributed-by=none  size=75 */

uint __thiscall FUN_0041e400(void *this,uint param_1)

{
  uint uVar1;
  
  uVar1 = (*(int *)((int)this + 8) - *(int *)this) / 0x11c;
  if (0xe6c2b4 - (uVar1 >> 1) < uVar1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = param_1;
    }
    return uVar1;
  }
  uVar1 = uVar1 + (uVar1 >> 1);
  if (uVar1 < param_1) {
    uVar1 = param_1;
  }
  return uVar1;
}


/* FUN_0041e840 @ 0041e840  kind=gamemisc  attributed-by=none  size=162 */

void __thiscall FUN_0041e840(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x14)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x14;
  if (0xcccccccU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x14;
  uVar3 = iVar1 + param_1;
  if (0xccccccc - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041e450(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e450(this,uVar2);
  return;
}


/* FUN_0041e8f0 @ 0041e8f0  kind=gamemisc  attributed-by=none  size=111 */

int __thiscall FUN_0041e8f0(void *this,uint param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)((int)this + 8) - *(int *)((int)this + 4);
  iVar2 = iVar3 * -0x193d4bb7;
  if ((uint)(iVar3 / 0x11c) < param_1) {
    iVar2 = (*(int *)((int)this + 4) - *(int *)this) / 0x11c;
    if (0xe6c2b4U - iVar2 < param_1) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("vector<T> too long");
    }
    uVar1 = FUN_0041e400(this,iVar2 + param_1);
    iVar2 = FUN_0041e540(this,uVar1);
  }
  return iVar2;
}


/* FUN_0041e960 @ 0041e960  kind=gamemisc  attributed-by=none  size=162 */

void __thiscall FUN_0041e960(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0x148)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0x148;
  if (0xc7ce0cU - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0x148;
  uVar3 = iVar1 + param_1;
  if (0xc7ce0c - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041e640(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e640(this,uVar2);
  return;
}


/* FUN_0041ea10 @ 0041ea10  kind=gamemisc  attributed-by=none  size=159 */

void __thiscall FUN_0041ea10(void *this,uint param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_1 <= (uint)((*(int *)((int)this + 8) - *(int *)((int)this + 4)) / 0xc)) {
    return;
  }
  iVar1 = (*(int *)((int)this + 4) - *(int *)this) / 0xc;
  if (0x15555555U - iVar1 < param_1) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("vector<T> too long");
  }
  uVar2 = (*(int *)((int)this + 8) - *(int *)this) / 0xc;
  uVar3 = iVar1 + param_1;
  if (0x15555555 - (uVar2 >> 1) < uVar2) {
    uVar2 = 0;
    if (uVar3 != 0) {
      uVar2 = uVar3;
    }
    FUN_0041e740(this,uVar2);
    return;
  }
  uVar2 = uVar2 + (uVar2 >> 1);
  if (uVar2 < uVar3) {
    uVar2 = uVar3;
  }
  FUN_0041e740(this,uVar2);
  return;
}


/* FUN_0041eab0 @ 0041eab0  kind=gamemisc  attributed-by=none  size=112 */

uint __cdecl FUN_0041eab0(byte *param_1,byte *param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  if (param_3 == 0) {
    return 0;
  }
  while (uVar1 = param_3 - 4, 3 < param_3) {
    if (*(int *)param_1 != *(int *)param_2) goto LAB_0041eae6;
    param_1 = param_1 + 4;
    param_2 = param_2 + 4;
    param_3 = uVar1;
  }
  if (uVar1 != 0xfffffffc) {
LAB_0041eae6:
    bVar2 = *param_1 < *param_2;
    if ((*param_1 != *param_2) ||
       ((uVar1 != 0xfffffffd &&
        ((bVar2 = param_1[1] < param_2[1], param_1[1] != param_2[1] ||
         ((uVar1 != 0xfffffffe &&
          ((bVar2 = param_1[2] < param_2[2], param_1[2] != param_2[2] ||
           ((uVar1 != 0xffffffff && (bVar2 = param_1[3] < param_2[3], param_1[3] != param_2[3]))))))
         )))))) {
      return -(uint)bVar2 | 1;
    }
  }
  return 0;
}


/* FUN_0041eb20 @ 0041eb20  kind=gamemisc  attributed-by=none  size=137 */

undefined4 * __thiscall
FUN_0041eb20(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  
  if ((param_2 == *(undefined4 **)this) && (param_3 == *(undefined4 **)((int)this + 4))) {
    FUN_00406310(*(undefined4 **)this,*(undefined4 **)((int)this + 4));
    *(undefined4 *)((int)this + 4) = *(undefined4 *)this;
    *param_1 = param_2;
    return param_1;
  }
  if (param_2 != param_3) {
    puVar1 = FUN_0041d390(param_3,*(undefined4 **)((int)this + 4),param_2);
    FUN_00406310(puVar1,*(undefined4 **)((int)this + 4));
    *(undefined4 **)((int)this + 4) = puVar1;
    *param_1 = param_2;
    return param_1;
  }
  *param_1 = param_2;
  return param_1;
}


/* FUN_0041ee20 @ 0041ee20  kind=gamemisc  attributed-by=none  size=1708 */

void __thiscall FUN_0041ee20(void *this,void *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  void *local_190;
  void *local_18c;
  undefined4 local_188;
  undefined4 *local_184;
  int *local_180;
  int *local_17c;
  void *local_178;
  int local_174;
  undefined2 local_170 [2];
  undefined4 local_16c;
  undefined4 local_168;
  undefined2 local_164;
  undefined1 local_162;
  undefined2 local_160;
  undefined1 local_15c [256];
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  int local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c026;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  piVar8 = *(int **)this;
  local_178 = param_1;
  iVar7 = piVar8[1] - *piVar8;
  local_174 = param_2;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    *(undefined4 *)((int)this + 8) = *(undefined4 *)(*piVar8 + piVar8[3]);
    piVar8[3] = piVar8[3] + 4;
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_180 = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_180 = *(int **)(*piVar8 + piVar8[3]);
    piVar8[3] = piVar8[3] + 4;
  }
  local_190 = (void *)0x0;
  local_18c = (void *)0x0;
  local_188 = 0;
  local_8 = 0;
  if (0 < (int)local_180) {
    do {
      local_160 = 1;
      local_170[0] = 0;
      local_16c = 0;
      local_168 = 0;
      local_164 = 0;
      local_162 = 0;
      local_5c = 0;
      memset(local_15c,0,0x100);
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      local_3c = 0x3d924925;
      local_38 = 0;
      local_34 = 0;
      local_30 = 0;
      local_2c = -1;
      if (iVar6 + 0x118 <= iVar7) {
        memcpy(local_170,(void *)(*piVar8 + iVar6),0x118);
        iVar7 = iVar6 + 0x118;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar7 = *piVar8;
      if (piVar8[1] - iVar7 < piVar8[3] + 0x18) {
        piVar8[3] = piVar8[1] - iVar7;
      }
      else {
        iVar6 = piVar8[3];
        local_58 = *(undefined8 *)(iVar7 + iVar6);
        local_50 = *(undefined8 *)(iVar7 + 8 + iVar6);
        local_48 = *(undefined8 *)(iVar7 + 0x10 + iVar6);
        piVar8[3] = piVar8[3] + 0x18;
      }
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_40 = *(undefined4 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_3c = *(undefined4 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 1 <= iVar7) {
        local_38 = *(undefined1 *)(*piVar8 + iVar6);
        iVar7 = iVar6 + 1;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_34 = *(undefined4 *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_30 = *(undefined4 *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      piVar8 = *(int **)this;
      iVar6 = piVar8[3];
      iVar7 = piVar8[1] - *piVar8;
      if (iVar6 + 4 <= iVar7) {
        local_2c = *(int *)(iVar6 + *piVar8);
        iVar7 = iVar6 + 4;
      }
      piVar8[3] = iVar7;
      if ((*(int *)((int)local_178 + 0x800160) + -3 <= local_2c) || (local_2c < 0)) {
        FUN_0041f5b0(&local_190,(undefined1 *)local_170);
      }
      local_180 = (int *)((int)local_180 + -1);
    } while (local_180 != (int *)0x0);
    local_180 = (int *)0x0;
  }
  iVar7 = local_174;
  if ((((int)local_18c - (int)local_190) / 0x148 !=
       (*(int *)(local_174 + 0x34) - (int)*(char **)(local_174 + 0x30)) / 0x148) ||
     (uVar4 = FUN_0041d270(local_190,local_18c,*(char **)(local_174 + 0x30)), (char)uVar4 == '\0'))
  {
    *(undefined1 *)(iVar7 + 0x75) = 1;
    FUN_0041dae0((void *)(iVar7 + 0x30),(int *)&local_190);
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_17c = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_17c = *(int **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  piVar8 = local_17c;
  if (0 < (int)local_17c) {
    do {
      local_180 = piVar8;
      iVar6 = local_174;
      piVar8 = *(int **)this;
      iVar7 = *piVar8;
      local_20 = local_20 & 0xffffffff;
      local_18 = 0;
      if (piVar8[1] - iVar7 < piVar8[3] + 0x14) {
        piVar8[3] = piVar8[1] - iVar7;
      }
      else {
        iVar1 = piVar8[3];
        local_28 = *(undefined8 *)(iVar1 + iVar7);
        local_20 = *(ulonglong *)(iVar1 + 8 + iVar7);
        local_18 = *(int *)(iVar1 + 0x10 + iVar7);
        piVar8[3] = piVar8[3] + 0x14;
      }
      if ((*(int *)((int)local_178 + 0x800160) + -3 <= local_18) || (local_18 < 0)) {
        FUN_0041ff00(local_178,(float)local_28,local_28._4_4_,(int)local_20,
                     (undefined1 *)((int)&local_20 + 4),local_174);
        FUN_0041f4d0((void *)(iVar6 + 0x68),(undefined4 *)&local_28);
      }
      piVar8 = (int *)((int)local_180 + -1);
    } while ((int *)((int)local_180 + -1) != (int *)0x0);
    local_180 = (int *)0x0;
    if (0 < (int)local_17c) {
      local_180 = (int *)0x0;
      puVar5 = (undefined4 *)FUN_004ce660((undefined4 *)0x0,(undefined4 *)0x0);
      local_8 = CONCAT31(local_8._1_3_,1);
      piVar8 = (int *)**(int **)(local_174 + 4);
      iVar7 = local_174;
      local_184 = puVar5;
      local_17c = piVar8;
      if (piVar8 != *(int **)(local_174 + 4)) {
        do {
          if (((*(byte *)(piVar8 + 0x10) & 2) != 0) &&
             (local_17c = piVar8,
             iVar6 = FUN_00406050(local_178,piVar8[4],piVar8[5],piVar8[6],piVar8[7],
                                  piVar8[8] - 0x10000,piVar8[9] - (uint)((uint)piVar8[8] < 0x10000),
                                  local_174), iVar7 = local_174, (*(byte *)(iVar6 + 3) & 0x1f) == 0)
             ) {
            iVar7 = FUN_0052dfb0(puVar5,(undefined4 *)puVar5[1],&local_17c);
            if (local_180 == (int *)0x15555554) {
                    /* WARNING: Subroutine does not return */
              std::_Xlength_error("list<T> too long");
            }
            puVar5[1] = iVar7;
            local_180 = (int *)((int)local_180 + 1);
            **(int **)(iVar7 + 4) = iVar7;
            iVar7 = local_174;
          }
          piVar8 = (int *)*piVar8;
          local_17c = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar7 + 4));
      }
      for (puVar2 = (undefined4 *)*puVar5; puVar2 != puVar5; puVar2 = (undefined4 *)*puVar2) {
        piVar8 = (int *)puVar2[2];
        if (piVar8 != *(int **)(iVar7 + 4)) {
          *(int *)piVar8[1] = *piVar8;
          *(int *)(*piVar8 + 4) = piVar8[1];
          operator_delete(piVar8);
          *(int *)(local_174 + 8) = *(int *)(local_174 + 8) + -1;
          iVar7 = local_174;
        }
      }
      puVar2 = (undefined4 *)*puVar5;
      *puVar5 = puVar5;
      puVar5[1] = puVar5;
      while (puVar2 != puVar5) {
        puVar3 = (undefined4 *)*puVar2;
        operator_delete(puVar2);
        puVar2 = puVar3;
      }
      operator_delete(puVar5);
    }
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_17c = (int *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_17c = *(int **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  if ((local_17c == (int *)(*(int *)(local_174 + 0x1c) - *(int *)(local_174 + 0x18) >> 2)) &&
     (iVar7 = 0, 0 < (int)local_17c)) {
    do {
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 4) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar7 * 4) + 0x38) =
             *(undefined4 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 4;
      }
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 4) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined4 *)(*(int *)(*(int *)(local_174 + 0x18) + iVar7 * 4) + 0x3c) =
             *(undefined4 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 4;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < (int)local_17c);
  }
  piVar8 = *(int **)this;
  iVar7 = piVar8[1] - *piVar8;
  local_178 = (void *)0x0;
  if (iVar7 < piVar8[3] + 4) {
    piVar8[3] = iVar7;
  }
  else {
    local_178 = *(void **)(piVar8[3] + *piVar8);
    piVar8[3] = piVar8[3] + 4;
  }
  if ((local_178 == (void *)((*(int *)(local_174 + 0x10) - *(int *)(local_174 + 0xc)) / 0x188)) &&
     (0 < (int)local_178)) {
    iVar7 = 0;
    do {
      piVar8 = *(int **)this;
      if (piVar8[1] - *piVar8 < piVar8[3] + 1) {
        piVar8[3] = piVar8[1] - *piVar8;
      }
      else {
        *(undefined1 *)(*(int *)(local_174 + 0xc) + 0x30 + iVar7) =
             *(undefined1 *)(piVar8[3] + *piVar8);
        piVar8[3] = piVar8[3] + 1;
      }
      iVar7 = iVar7 + 0x188;
      local_178 = (void *)((int)local_178 + -1);
    } while (local_178 != (void *)0x0);
  }
  if (local_190 != (void *)0x0) {
    operator_delete(local_190);
  }
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0041f4d0 @ 0041f4d0  kind=gamemisc  attributed-by=none  size=216 */

void __thiscall FUN_0041f4d0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e840(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0x14) * 0x14);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar1 + 3);
      *(undefined1 *)((int)puVar2 + 0xd) = *(undefined1 *)((int)puVar1 + 0xd);
      *(undefined1 *)((int)puVar2 + 0xe) = *(undefined1 *)((int)puVar1 + 0xe);
      *(undefined1 *)((int)puVar2 + 0xf) = *(undefined1 *)((int)puVar1 + 0xf);
      puVar2[4] = puVar1[4];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e840(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
      *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
      *(undefined1 *)((int)puVar1 + 0xd) = *(undefined1 *)((int)param_1 + 0xd);
      *(undefined1 *)((int)puVar1 + 0xe) = *(undefined1 *)((int)param_1 + 0xe);
      *(undefined1 *)((int)puVar1 + 0xf) = *(undefined1 *)((int)param_1 + 0xf);
      puVar1[4] = param_1[4];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x14;
  return;
}


/* FUN_0041f5b0 @ 0041f5b0  kind=gamemisc  attributed-by=none  size=130 */

void __thiscall FUN_0041f5b0(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  
  puVar1 = *(undefined1 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined1 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_0041e960(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_0041d820(*(void **)((int)this + 4),
                   (undefined1 *)((((int)param_1 - (int)puVar2) / 0x148) * 0x148 + *(int *)this));
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x148;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined1 **)((int)this + 8)) {
      FUN_0041e960(this,1);
    }
    if (*(void **)((int)this + 4) != (void *)0x0) {
      FUN_0041d820(*(void **)((int)this + 4),param_1);
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x148;
  return;
}


/* FUN_0041f640 @ 0041f640  kind=gamemisc  attributed-by=none  size=285 */

undefined4 * __thiscall FUN_0041f640(void *this,uint param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c050;
  local_10 = ExceptionList;
  puVar3 = *(undefined4 **)this;
  iVar4 = *(int *)((int)this + 4) - (int)puVar3;
  puVar2 = (undefined4 *)(iVar4 * -0x193d4bb7);
  uVar1 = iVar4 / 0x11c;
  if (param_1 < uVar1) {
    puVar5 = puVar3 + param_1 * 0x47;
    if (puVar5 == puVar3) {
      *(undefined4 **)((int)this + 4) = puVar3;
    }
    else {
      puVar2 = *(undefined4 **)((int)this + 4);
      if (puVar5 != puVar2) {
        ExceptionList = &local_10;
        puVar3 = FUN_0041d340(puVar2,puVar2,puVar5);
        *(undefined4 **)((int)this + 4) = puVar3;
        ExceptionList = local_10;
        return puVar3;
      }
    }
  }
  else if (uVar1 < param_1) {
    ExceptionList = &local_10;
    FUN_0041e8f0(this,param_1 - uVar1);
    local_8 = 0;
    FUN_0041d550(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x11c)
    ;
    puVar3 = (undefined4 *)((*(int *)((int)this + 4) - *(int *)this) / 0x11c);
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + (param_1 - (int)puVar3) * 0x11c;
    ExceptionList = local_10;
    return puVar3;
  }
  return puVar2;
}


/* FUN_0041f770 @ 0041f770  kind=gamemisc  attributed-by=none  size=240 */

undefined4 * __thiscall FUN_0041f770(void *this,uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  uVar2 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c070;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar4 = (int)*(undefined4 **)((int)this + 4) - *(int *)this;
  puVar3 = (undefined4 *)(iVar4 * 0x2aaaaaab);
  uVar1 = iVar4 / 0xc;
  if (param_1 < uVar1) {
    puVar3 = FUN_0041eb20(this,&param_1,(undefined4 *)(*(int *)this + param_1 * 0xc),
                          *(undefined4 **)((int)this + 4));
  }
  else if (uVar1 < param_1) {
    FUN_0041ea10(this,param_1 - uVar1);
    local_8 = 0;
    FUN_0041d5d0(*(undefined4 **)((int)this + 4),
                 uVar2 - ((int)*(undefined4 **)((int)this + 4) - *(int *)this) / 0xc);
    puVar3 = (undefined4 *)
             (*(int *)((int)this + 4) +
             (uVar2 - (*(int *)((int)this + 4) - *(int *)this) / 0xc) * 0xc);
    *(undefined4 **)((int)this + 4) = puVar3;
    ExceptionList = local_10;
    return puVar3;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_0041faa0 @ 0041faa0  kind=gamemisc  attributed-by=none  size=953 */

void __thiscall FUN_0041faa0(void *this,int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  int iVar6;
  int iVar7;
  size_t _Size;
  void *pvVar8;
  int local_c;
  
  iVar4 = param_1;
  piVar2 = *(int **)this;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)this + 4);
  piVar2[3] = piVar2[3] + 4;
  if (*(char *)(param_1 + 0x75) == '\0') {
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
    *(undefined4 *)(piVar2[3] + *piVar2) = 0;
    piVar2[3] = piVar2[3] + 4;
  }
  else {
    iVar6 = *(int *)(param_1 + 0x34);
    iVar3 = *(int *)(param_1 + 0x30);
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
    *(int *)(*piVar2 + piVar2[3]) = (iVar6 - iVar3) / 0x148;
    piVar2[3] = piVar2[3] + 4;
    pvVar8 = *(void **)(param_1 + 0x30);
    if (pvVar8 != *(void **)(param_1 + 0x34)) {
      do {
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 0x118);
        memcpy((void *)(piVar2[3] + *piVar2),pvVar8,0x118);
        piVar2[3] = piVar2[3] + 0x118;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 0x18);
        puVar5 = (undefined8 *)(piVar2[3] + *piVar2);
        *puVar5 = *(undefined8 *)((int)pvVar8 + 0x118);
        puVar5[1] = *(undefined8 *)((int)pvVar8 + 0x120);
        puVar5[2] = *(undefined8 *)((int)pvVar8 + 0x128);
        piVar2[3] = piVar2[3] + 0x18;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x130);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)((int)pvVar8 + 0x134);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 1);
        *(undefined1 *)(*piVar2 + piVar2[3]) = *(undefined1 *)((int)pvVar8 + 0x138);
        piVar2[3] = piVar2[3] + 1;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x13c);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        *(undefined4 *)(piVar2[3] + *piVar2) = *(undefined4 *)((int)pvVar8 + 0x140);
        piVar2[3] = piVar2[3] + 4;
        piVar2 = *(int **)this;
        FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
        puVar1 = (undefined4 *)((int)pvVar8 + 0x144);
        pvVar8 = (void *)((int)pvVar8 + 0x148);
        *(undefined4 *)(*piVar2 + piVar2[3]) = *puVar1;
        piVar2[3] = piVar2[3] + 4;
      } while (pvVar8 != *(void **)(param_1 + 0x34));
    }
  }
  piVar2 = *(int **)this;
  iVar6 = (*(int *)(param_1 + 0x6c) - *(int *)(param_1 + 0x68)) / 0x14;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  pvVar8 = *(void **)(param_1 + 0x68);
  iVar7 = *(int *)(param_1 + 0x6c) - (int)pvVar8;
  iVar3 = iVar7 >> 0x1f;
  if (iVar7 / 0x14 + iVar3 != iVar3) {
    _Size = iVar6 * 0x14;
    piVar2 = *(int **)this;
    FUN_00413180(piVar2,(piVar2[1] - *piVar2) + _Size);
    memcpy((void *)(*piVar2 + piVar2[3]),pvVar8,_Size);
    piVar2[3] = piVar2[3] + _Size;
  }
  piVar2 = *(int **)this;
  iVar6 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18) >> 2;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(*piVar2 + piVar2[3]) = iVar6;
  piVar2[3] = piVar2[3] + 4;
  param_1 = 0;
  if (0 < iVar6) {
    do {
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = *(int **)this;
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x38);
      piVar2[3] = piVar2[3] + 4;
      iVar3 = *(int *)(*(int *)(iVar4 + 0x18) + param_1 * 4);
      piVar2 = *(int **)this;
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
      *(undefined4 *)(*piVar2 + piVar2[3]) = *(undefined4 *)(iVar3 + 0x3c);
      piVar2[3] = piVar2[3] + 4;
      param_1 = param_1 + 1;
    } while (param_1 < iVar6);
  }
  piVar2 = *(int **)this;
  param_1 = (*(int *)(iVar4 + 0x10) - *(int *)(iVar4 + 0xc)) / 0x188;
  FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 4);
  *(int *)(piVar2[3] + *piVar2) = param_1;
  piVar2[3] = piVar2[3] + 4;
  if (0 < param_1) {
    local_c = 0;
    do {
      piVar2 = *(int **)this;
      iVar6 = *(int *)(iVar4 + 0xc);
      FUN_00413180(piVar2,(piVar2[1] - *piVar2) + 1);
      *(undefined1 *)(piVar2[3] + *piVar2) = *(undefined1 *)(iVar6 + local_c + 0x30);
      piVar2[3] = piVar2[3] + 1;
      local_c = local_c + 0x188;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  return;
}


/* FUN_00420200 @ 00420200  kind=gamemisc  attributed-by=none  size=153 */

int FUN_00420200(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c0d1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_00426830(param_1,param_2);
  local_8 = 1;
  if ((undefined4 *)(iVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)(iVar1 + 8) = *param_3;
    *(undefined4 *)(iVar1 + 0xc) = param_3[1];
    *(undefined4 *)(iVar1 + 0x24) = 7;
    *(undefined4 *)(iVar1 + 0x20) = 0;
    *(undefined2 *)(iVar1 + 0x10) = 0;
    FUN_004172f0((undefined2 *)(iVar1 + 0x10),param_3 + 2,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00420540 @ 00420540  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_00420540(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c140;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_00420040(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_00420540(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_00420540(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_00420600 @ 00420600  kind=gamemisc  attributed-by=none  size=518 */

void __thiscall
FUN_00420600(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0xea0e8 < *(uint *)((int)this + 4)) {
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_004207e1;
      }
LAB_00420738:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00420738;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_004207e1:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00420810 @ 00420810  kind=gamemisc  attributed-by=none  size=565 */

undefined4 * __thiscall
FUN_00420810(void *this,undefined4 *param_1,int *param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uStack_3c;
  undefined4 local_2c;
  uint local_28;
  uint local_24;
  void *local_20;
  int *local_1c [2];
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c160;
  local_10 = ExceptionList;
  uStack_3c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_3c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_20 = this;
  if (*(int *)((int)this + 4) == 0) {
    local_14 = (undefined1 *)&uStack_3c;
    FUN_00420600(this,param_1,'\x01',*(undefined4 **)this,param_3,param_4);
    ExceptionList = local_10;
    return param_1;
  }
  piVar1 = *(int **)this;
  if (param_2 == (int *)*piVar1) {
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)param_3[1] <= param_2[5]) &&
       ((puVar3 = &uStack_3c, (int)param_3[1] < param_2[5] ||
        (local_14 = (undefined1 *)&uStack_3c, puVar3 = &uStack_3c, *param_3 < (uint)param_2[4])))) {
LAB_0042089d:
      local_14 = (undefined1 *)puVar3;
      FUN_00420600(local_20,param_1,'\x01',param_2,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else if (param_2 == piVar1) {
    puVar5 = (undefined4 *)piVar1[2];
    local_14 = (undefined1 *)&uStack_3c;
    if (((int)puVar5[5] <= (int)param_3[1]) &&
       (((int)puVar5[5] < (int)param_3[1] ||
        (local_14 = (undefined1 *)&uStack_3c, (uint)puVar5[4] < *param_3)))) {
      local_14 = (undefined1 *)&uStack_3c;
      FUN_00420600(this,param_1,'\0',puVar5,param_3,param_4);
      ExceptionList = local_10;
      return param_1;
    }
  }
  else {
    local_28 = param_3[1];
    local_24 = *param_3;
    uVar4 = param_2[4];
    puVar3 = &uStack_3c;
    if (((int)local_28 <= param_2[5]) &&
       (((int)local_28 < param_2[5] || (puVar3 = &uStack_3c, local_24 < uVar4)))) {
      local_1c[0] = param_2;
      FUN_004dad80((int *)local_1c);
      piVar2 = local_1c[0];
      uVar4 = FUN_00402d80((uint *)(local_1c[0] + 4),param_3);
      if ((char)uVar4 != '\0') {
        puVar3 = (uint *)local_14;
        if (*(char *)(piVar2[2] + 0xd) != '\0') {
          FUN_00420600(local_20,param_1,'\0',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        goto LAB_0042089d;
      }
      uVar4 = param_2[4];
      puVar3 = (uint *)local_14;
    }
    local_14 = (undefined1 *)puVar3;
    if ((param_2[5] <= (int)local_28) && ((param_2[5] < (int)local_28 || (uVar4 < local_24)))) {
      local_1c[0] = param_2;
      FUN_00407a50((int *)local_1c);
      piVar2 = local_1c[0];
      if ((local_1c[0] == piVar1) ||
         (uVar4 = FUN_00402d80(param_3,(uint *)(local_1c[0] + 4)), (char)uVar4 != '\0')) {
        if (*(char *)(param_2[2] + 0xd) == '\0') {
          FUN_00420600(local_20,param_1,'\x01',piVar2,param_3,param_4);
          ExceptionList = local_10;
          return param_1;
        }
        FUN_00420600(local_20,param_1,'\0',param_2,param_3,param_4);
        ExceptionList = local_10;
        return param_1;
      }
    }
  }
  local_8 = 0xffffffff;
  puVar5 = (undefined4 *)FUN_00420a60(local_20,&local_2c,'\0',param_3,param_4);
  *param_1 = *puVar5;
  ExceptionList = local_10;
  return param_1;
}


/* FUN_00420a60 @ 00420a60  kind=gamemisc  attributed-by=none  size=316 */

void __thiscall FUN_00420a60(void *this,undefined4 *param_1,char param_2,uint *param_3,int *param_4)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *unaff_FS_OFFSET;
  bool local_18;
  int local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c180;
  local_10 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = (int)&local_10;
  piVar1 = *(int **)this;
  local_8 = 0;
  local_18 = true;
  piVar5 = piVar1;
  if (*(char *)(piVar1[1] + 0xd) == '\0') {
    uVar2 = param_3[1];
    piVar3 = (int *)piVar1[1];
    do {
      piVar5 = piVar3;
      if (param_2 == '\0') {
        if ((piVar5[5] < (int)uVar2) || ((piVar5[5] <= (int)uVar2 && ((uint)piVar5[4] <= *param_3)))
           ) {
          local_18 = false;
          goto LAB_00420afc;
        }
        piVar3 = (int *)*piVar5;
        local_18 = true;
      }
      else {
        if (((int)uVar2 < piVar5[5]) || (((int)uVar2 <= piVar5[5] && (*param_3 <= (uint)piVar5[4])))
           ) {
          local_18 = false;
        }
        else {
          local_18 = true;
        }
        local_18 = !local_18;
        if (local_18) {
          piVar3 = (int *)*piVar5;
        }
        else {
LAB_00420afc:
          piVar3 = (int *)piVar5[2];
        }
      }
    } while (*(char *)((int)piVar3 + 0xd) == '\0');
  }
  _param_2 = piVar5;
  if (local_18) {
    if (piVar5 == (int *)*piVar1) {
      local_18 = true;
      goto LAB_00420b21;
    }
    FUN_004dad80((int *)&param_2);
  }
  piVar1 = _param_2;
  if (((int)param_3[1] < _param_2[5]) ||
     (((int)param_3[1] <= _param_2[5] && (*param_3 <= (uint)_param_2[4])))) {
    operator_delete(param_4);
    *param_1 = piVar1;
    *(undefined1 *)(param_1 + 1) = 0;
    *unaff_FS_OFFSET = local_10;
    return;
  }
LAB_00420b21:
  puVar4 = (undefined4 *)FUN_00420600(this,(undefined4 *)&param_2,local_18,piVar5,param_3,param_4);
  *param_1 = *puVar4;
  *(undefined1 *)(param_1 + 1) = 1;
  *unaff_FS_OFFSET = local_10;
  return;
}


/* FUN_004213d0 @ 004213d0  kind=gamemisc  attributed-by=none  size=157 */

void __thiscall FUN_004213d0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c2e0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_00420470(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x3333332) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_004214a0 @ 004214a0  kind=gamemisc  attributed-by=none  size=157 */

void __thiscall FUN_004214a0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054c300;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004f3ba0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x7fffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_00421980 @ 00421980  kind=gamemisc  attributed-by=none  size=55 */

void * __cdecl FUN_00421980(undefined4 *param_1,undefined4 *param_2,void *param_3)

{
  if (param_1 == param_2) {
    return param_3;
  }
  do {
    if (param_3 != (void *)0x0) {
      FUN_00423350(param_3,param_1);
    }
    param_1 = param_1 + 0x1e;
    param_3 = (void *)((int)param_3 + 0x78);
  } while (param_1 != param_2);
  return param_3;
}


/* FUN_004219c0 @ 004219c0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_004219c0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x28);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x28);
      param_1[3] = param_1[3] + 0x28;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421a30 @ 00421a30  kind=gamemisc  attributed-by=none  size=105 */

void __cdecl FUN_00421a30(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar3 = *(int **)*param_2;
  if (piVar3 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x10);
      iVar1 = param_1[3];
      iVar2 = *param_1;
      *(undefined8 *)(iVar1 + iVar2) = *(undefined8 *)(piVar3 + 2);
      ((undefined8 *)(iVar1 + iVar2))[1] = *(undefined8 *)(piVar3 + 4);
      param_1[3] = param_1[3] + 0x10;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*param_2);
  }
  return;
}


/* FUN_00421aa0 @ 00421aa0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421aa0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x70);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x70);
      param_1[3] = param_1[3] + 0x70;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421b10 @ 00421b10  kind=gamemisc  attributed-by=none  size=111 */

void __cdecl FUN_00421b10(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar3 = *(int **)*param_2;
  if (piVar3 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x14);
      puVar2 = (undefined8 *)(param_1[3] + *param_1);
      *puVar2 = *(undefined8 *)(piVar3 + 2);
      puVar2[1] = *(undefined8 *)(piVar3 + 4);
      *(int *)(puVar2 + 2) = piVar3[6];
      param_1[3] = param_1[3] + 0x14;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*param_2);
  }
  return;
}


/* FUN_00421b80 @ 00421b80  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421b80(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x48);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x48);
      param_1[3] = param_1[3] + 0x48;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421bf0 @ 00421bf0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_00421bf0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x120);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x120);
      param_1[3] = param_1[3] + 0x120;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421c60 @ 00421c60  kind=gamemisc  attributed-by=none  size=115 */

void __cdecl FUN_00421c60(int *param_1,int *param_2)

{
  int iVar1;
  undefined8 *puVar2;
  int *piVar3;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar3 = *(int **)*param_2;
  if (piVar3 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x18);
      puVar2 = (undefined8 *)(param_1[3] + *param_1);
      *puVar2 = *(undefined8 *)(piVar3 + 2);
      puVar2[1] = *(undefined8 *)(piVar3 + 4);
      puVar2[2] = *(undefined8 *)(piVar3 + 6);
      param_1[3] = param_1[3] + 0x18;
      piVar3 = (int *)*piVar3;
    } while (piVar3 != (int *)*param_2);
  }
  return;
}


/* FUN_00421ce0 @ 00421ce0  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421ce0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x38);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x38);
      param_1[3] = param_1[3] + 0x38;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421d50 @ 00421d50  kind=gamemisc  attributed-by=none  size=101 */

void __cdecl FUN_00421d50(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x58);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x58);
      param_1[3] = param_1[3] + 0x58;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00421dc0 @ 00421dc0  kind=gamemisc  attributed-by=none  size=109 */

void __cdecl FUN_00421dc0(int *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_2[1];
  FUN_00413180(param_1,(param_1[1] - *param_1) + 4);
  *(int *)(param_1[3] + *param_1) = iVar1;
  param_1[3] = param_1[3] + 4;
  piVar2 = *(int **)*param_2;
  if (piVar2 != (int *)*param_2) {
    do {
      FUN_00413180(param_1,(param_1[1] - *param_1) + 0x148);
      memcpy((void *)(param_1[3] + *param_1),piVar2 + 2,0x148);
      param_1[3] = param_1[3] + 0x148;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)*param_2);
  }
  return;
}


/* FUN_00422b10 @ 00422b10  kind=gamemisc  attributed-by=none  size=240 */

void * __thiscall FUN_00422b10(void *this,undefined1 *param_1)

{
  FUN_00413710(this,param_1);
  FUN_00413710((void *)((int)this + 0x118),param_1 + 0x118);
  FUN_00413710((void *)((int)this + 0x230),param_1 + 0x230);
  FUN_00413710((void *)((int)this + 0x348),param_1 + 0x348);
  FUN_00413710((void *)((int)this + 0x460),param_1 + 0x460);
  FUN_00413710((void *)((int)this + 0x578),param_1 + 0x578);
  FUN_00413710((void *)((int)this + 0x690),param_1 + 0x690);
  FUN_00413710((void *)((int)this + 0x7a8),param_1 + 0x7a8);
  FUN_00413710((void *)((int)this + 0x8c0),param_1 + 0x8c0);
  FUN_00413710((void *)((int)this + 0x9d8),param_1 + 0x9d8);
  FUN_00413710((void *)((int)this + 0xaf0),param_1 + 0xaf0);
  FUN_00413710((void *)((int)this + 0xc08),param_1 + 0xc08);
  FUN_00413710((void *)((int)this + 0xd20),param_1 + 0xd20);
  return this;
}


/* FUN_00422c00 @ 00422c00  kind=gamemisc  attributed-by=none  size=132 */

undefined4 * __thiscall FUN_00422c00(void *this,int param_1)

{
  undefined4 *this_00;
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_005562d8;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  this_00 = (undefined4 *)((int)this + 8);
  *(undefined4 *)this = *(undefined4 *)(param_1 + 0x60);
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 100);
  puVar1 = *(undefined1 **)(param_1 + 0x34);
  puVar2 = *(undefined1 **)(param_1 + 0x30);
  *this_00 = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  uVar3 = FUN_004269f0((undefined4 *)0x0,(undefined4 *)0x0);
  *this_00 = uVar3;
  local_8 = 0;
  FUN_004204d0(this_00,puVar2,puVar1);
  ExceptionList = local_10;
  return this;
}


/* FUN_00422f90 @ 00422f90  kind=gamemisc  attributed-by=none  size=950 */

undefined4 * __thiscall FUN_00422f90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined1 *)((int)this + 0x50) = *(undefined1 *)(param_1 + 0x14);
  *(undefined4 *)((int)this + 0x54) = param_1[0x15];
  *(undefined1 *)((int)this + 0x58) = *(undefined1 *)(param_1 + 0x16);
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  FUN_00407730((void *)((int)this + 0x68),(undefined1 *)(param_1 + 0x1a));
  *(undefined2 *)((int)this + 0x114) = *(undefined2 *)(param_1 + 0x45);
  *(undefined4 *)((int)this + 0x118) = param_1[0x46];
  *(undefined4 *)((int)this + 0x11c) = param_1[0x47];
  *(undefined4 *)((int)this + 0x120) = param_1[0x48];
  *(undefined4 *)((int)this + 0x124) = param_1[0x49];
  *(undefined4 *)((int)this + 0x128) = param_1[0x4a];
  *(undefined4 *)((int)this + 300) = param_1[0x4b];
  *(undefined1 *)((int)this + 0x130) = *(undefined1 *)(param_1 + 0x4c);
  *(undefined1 *)((int)this + 0x131) = *(undefined1 *)((int)param_1 + 0x131);
  *(undefined4 *)((int)this + 0x134) = param_1[0x4d];
  *(undefined4 *)((int)this + 0x138) = param_1[0x4e];
  *(undefined4 *)((int)this + 0x13c) = param_1[0x4f];
  *(undefined4 *)((int)this + 0x140) = param_1[0x50];
  *(undefined4 *)((int)this + 0x144) = param_1[0x51];
  *(undefined4 *)((int)this + 0x148) = param_1[0x52];
  *(undefined4 *)((int)this + 0x14c) = param_1[0x53];
  *(undefined4 *)((int)this + 0x150) = param_1[0x54];
  *(undefined4 *)((int)this + 0x154) = param_1[0x55];
  *(undefined4 *)((int)this + 0x158) = param_1[0x56];
  *(undefined4 *)((int)this + 0x15c) = param_1[0x57];
  *(undefined4 *)((int)this + 0x160) = param_1[0x58];
  *(undefined4 *)((int)this + 0x164) = param_1[0x59];
  *(undefined8 *)((int)this + 0x168) = *(undefined8 *)(param_1 + 0x5a);
  *(undefined8 *)((int)this + 0x170) = *(undefined8 *)(param_1 + 0x5c);
  *(undefined4 *)((int)this + 0x178) = param_1[0x5e];
  *(undefined1 *)((int)this + 0x17c) = *(undefined1 *)(param_1 + 0x5f);
  *(undefined1 *)((int)this + 0x17d) = *(undefined1 *)((int)param_1 + 0x17d);
  *(undefined4 *)((int)this + 0x180) = param_1[0x60];
  *(undefined4 *)((int)this + 0x184) = param_1[0x61];
  *(undefined4 *)((int)this + 0x188) = param_1[0x62];
  *(undefined4 *)((int)this + 0x18c) = param_1[99];
  *(undefined4 *)((int)this + 400) = param_1[100];
  *(undefined4 *)((int)this + 0x194) = param_1[0x65];
  *(undefined1 *)((int)this + 0x198) = *(undefined1 *)(param_1 + 0x66);
  *(undefined4 *)((int)this + 0x19c) = param_1[0x67];
  *(undefined4 *)((int)this + 0x1a0) = param_1[0x68];
  *(undefined4 *)((int)this + 0x1a4) = param_1[0x69];
  *(undefined4 *)((int)this + 0x1a8) = param_1[0x6a];
  *(undefined4 *)((int)this + 0x1b0) = param_1[0x6c];
  *(undefined4 *)((int)this + 0x1b4) = param_1[0x6d];
  *(undefined4 *)((int)this + 0x1b8) = param_1[0x6e];
  *(undefined4 *)((int)this + 0x1bc) = param_1[0x6f];
  *(undefined4 *)((int)this + 0x1c0) = param_1[0x70];
  *(undefined4 *)((int)this + 0x1c4) = param_1[0x71];
  *(undefined1 *)((int)this + 0x1c8) = *(undefined1 *)(param_1 + 0x72);
  *(undefined4 *)((int)this + 0x1cc) = param_1[0x73];
  *(undefined4 *)((int)this + 0x1d0) = param_1[0x74];
  *(undefined4 *)((int)this + 0x1d4) = param_1[0x75];
  FUN_00413710((void *)((int)this + 0x1d8),(undefined1 *)(param_1 + 0x76));
  FUN_00422b10((void *)((int)this + 0x2f0),(undefined1 *)(param_1 + 0xbc));
  *(undefined8 *)((int)this + 0x1128) = *(undefined8 *)(param_1 + 0x44a);
  *(undefined8 *)((int)this + 0x1130) = *(undefined8 *)(param_1 + 0x44c);
  *(undefined8 *)((int)this + 0x1138) = *(undefined8 *)(param_1 + 0x44e);
  *(undefined8 *)((int)this + 0x1140) = *(undefined8 *)(param_1 + 0x450);
  *(undefined8 *)((int)this + 0x1148) = *(undefined8 *)(param_1 + 0x452);
  *(undefined4 *)((int)this + 0x1150) = param_1[0x454];
  *(undefined4 *)((int)this + 0x1154) = param_1[0x455];
  *(undefined8 *)((int)this + 0x1158) = *(undefined8 *)(param_1 + 0x456);
  *(undefined8 *)((int)this + 0x1160) = *(undefined8 *)(param_1 + 0x458);
  return this;
}


/* FUN_00423350 @ 00423350  kind=gamemisc  attributed-by=none  size=174 */

undefined4 * __thiscall FUN_00423350(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined1 *)((int)this + 8) = *(undefined1 *)(param_1 + 2);
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  *(undefined4 *)((int)this + 0x28) = param_1[10];
  *(undefined4 *)((int)this + 0x2c) = param_1[0xb];
  *(undefined4 *)((int)this + 0x30) = param_1[0xc];
  *(undefined4 *)((int)this + 0x34) = param_1[0xd];
  *(undefined4 *)((int)this + 0x38) = param_1[0xe];
  *(undefined4 *)((int)this + 0x3c) = param_1[0xf];
  *(undefined4 *)((int)this + 0x40) = param_1[0x10];
  *(undefined4 *)((int)this + 0x44) = param_1[0x11];
  *(undefined4 *)((int)this + 0x48) = param_1[0x12];
  *(undefined4 *)((int)this + 0x4c) = param_1[0x13];
  *(undefined4 *)((int)this + 0x50) = param_1[0x14];
  *(undefined4 *)((int)this + 0x58) = param_1[0x16];
  *(undefined4 *)((int)this + 0x5c) = param_1[0x17];
  *(undefined4 *)((int)this + 0x60) = param_1[0x18];
  *(undefined4 *)((int)this + 100) = param_1[0x19];
  *(undefined4 *)((int)this + 0x68) = param_1[0x1a];
  *(undefined4 *)((int)this + 0x6c) = param_1[0x1b];
  *(undefined1 *)((int)this + 0x70) = *(undefined1 *)(param_1 + 0x1c);
  return this;
}


/* FUN_00423400 @ 00423400  kind=gamemisc  attributed-by=none  size=267 */

void * __thiscall FUN_00423400(void *this,undefined4 *param_1)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c7c1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  FUN_004221a0(this,param_1);
  local_8 = 0;
  FUN_00422600((void *)((int)this + 8),param_1 + 2);
  local_8._0_1_ = 1;
  FUN_00422560((void *)((int)this + 0x10),param_1 + 4);
  local_8._0_1_ = 2;
  FUN_00422100((void *)((int)this + 0x18),param_1 + 6);
  local_8._0_1_ = 3;
  FUN_00422060((void *)((int)this + 0x20),param_1 + 8);
  local_8._0_1_ = 4;
  FUN_00422240((void *)((int)this + 0x28),param_1 + 10);
  local_8._0_1_ = 5;
  FUN_004224c0((void *)((int)this + 0x30),param_1 + 0xc);
  local_8._0_1_ = 6;
  FUN_00421fc0((void *)((int)this + 0x38),param_1 + 0xe);
  local_8._0_1_ = 7;
  FUN_004222e0((void *)((int)this + 0x40),param_1 + 0x10);
  local_8._0_1_ = 8;
  FUN_00422380((void *)((int)this + 0x48),param_1 + 0x12);
  local_8._0_1_ = 9;
  FUN_00422380((void *)((int)this + 0x50),param_1 + 0x14);
  local_8._0_1_ = 10;
  FUN_00421e80((void *)((int)this + 0x58),param_1 + 0x16);
  local_8 = CONCAT31(local_8._1_3_,0xb);
  FUN_00422420((void *)((int)this + 0x60),param_1 + 0x18);
  ExceptionList = local_10;
  return this;
}


/* FUN_004239f0 @ 004239f0  kind=gamemisc  attributed-by=none  size=670 */

void __fastcall FUN_004239f0(int *param_1)

{
  int *piVar1;
  int *piVar2;
  
  piVar1 = (int *)param_1[0x18];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x18] + 4) = param_1[0x18];
  param_1[0x19] = 0;
  if (piVar2 != (int *)param_1[0x18]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x18]);
  }
  operator_delete((void *)param_1[0x18]);
  piVar1 = (int *)param_1[0x16];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x16] + 4) = param_1[0x16];
  param_1[0x17] = 0;
  if (piVar2 != (int *)param_1[0x16]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x16]);
  }
  operator_delete((void *)param_1[0x16]);
  piVar1 = (int *)param_1[0x14];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x14] + 4) = param_1[0x14];
  param_1[0x15] = 0;
  if (piVar2 != (int *)param_1[0x14]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x14]);
  }
  operator_delete((void *)param_1[0x14]);
  piVar1 = (int *)param_1[0x12];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x12] + 4) = param_1[0x12];
  param_1[0x13] = 0;
  if (piVar2 != (int *)param_1[0x12]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x12]);
  }
  operator_delete((void *)param_1[0x12]);
  piVar1 = (int *)param_1[0x10];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0x10] + 4) = param_1[0x10];
  param_1[0x11] = 0;
  if (piVar2 != (int *)param_1[0x10]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0x10]);
  }
  operator_delete((void *)param_1[0x10]);
  FUN_00428080(param_1 + 0xe);
  operator_delete((void *)param_1[0xe]);
  piVar1 = (int *)param_1[0xc];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[0xc] + 4) = param_1[0xc];
  param_1[0xd] = 0;
  if (piVar2 != (int *)param_1[0xc]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[0xc]);
  }
  operator_delete((void *)param_1[0xc]);
  FUN_00428080(param_1 + 10);
  operator_delete((void *)param_1[10]);
  piVar1 = (int *)param_1[8];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[8] + 4) = param_1[8];
  param_1[9] = 0;
  if (piVar2 != (int *)param_1[8]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[8]);
  }
  operator_delete((void *)param_1[8]);
  piVar1 = (int *)param_1[6];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[6] + 4) = param_1[6];
  param_1[7] = 0;
  if (piVar2 != (int *)param_1[6]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[6]);
  }
  operator_delete((void *)param_1[6]);
  piVar1 = (int *)param_1[4];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[4] + 4) = param_1[4];
  param_1[5] = 0;
  if (piVar2 != (int *)param_1[4]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[4]);
  }
  operator_delete((void *)param_1[4]);
  piVar1 = (int *)param_1[2];
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(param_1[2] + 4) = param_1[2];
  param_1[3] = 0;
  if (piVar2 != (int *)param_1[2]) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)param_1[2]);
  }
  operator_delete((void *)param_1[2]);
  piVar1 = (int *)*param_1;
  piVar2 = (int *)*piVar1;
  *piVar1 = (int)piVar1;
  *(int *)(*param_1 + 4) = *param_1;
  param_1[1] = 0;
  if (piVar2 != (int *)*param_1) {
    do {
      piVar1 = (int *)*piVar2;
      operator_delete(piVar2);
      piVar2 = piVar1;
    } while (piVar1 != (int *)*param_1);
  }
  operator_delete((void *)*param_1);
  return;
}


/* FUN_00423c90 @ 00423c90  kind=gamemisc  attributed-by=none  size=78 */

undefined4 * __thiscall FUN_00423c90(void *this,undefined4 *param_1)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined1 *)((int)this + 0x14) = *(undefined1 *)(param_1 + 5);
  *(undefined1 *)((int)this + 0x15) = *(undefined1 *)((int)param_1 + 0x15);
  *(undefined4 *)((int)this + 0x18) = param_1[6];
  *(undefined4 *)((int)this + 0x1c) = param_1[7];
  *(undefined4 *)((int)this + 0x20) = param_1[8];
  *(undefined4 *)((int)this + 0x24) = param_1[9];
  return this;
}


/* FUN_00423ce0 @ 00423ce0  kind=gamemisc  attributed-by=none  size=235 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_00423ce0(void *this,uint *param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  void *local_22e4;
  uint local_22e0;
  uint local_22dc;
  undefined1 local_22d8 [4456];
  undefined4 local_1170 [1114];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  piVar4 = *(int **)this;
  piVar5 = piVar4;
  if (*(char *)(piVar4[1] + 0xd) == '\0') {
    piVar1 = (int *)piVar4[1];
    do {
      if (((int)param_1[1] < piVar1[5]) ||
         (((int)param_1[1] <= piVar1[5] && (*param_1 <= (uint)piVar1[4])))) {
        piVar2 = (int *)*piVar1;
        piVar5 = piVar1;
      }
      else {
        piVar2 = (int *)piVar1[2];
      }
      piVar1 = piVar2;
    } while (*(char *)((int)piVar2 + 0xd) == '\0');
  }
  local_22e4 = this;
  if (piVar5 != piVar4) {
    if ((piVar5[5] < (int)param_1[1]) ||
       ((piVar5[5] <= (int)param_1[1] && ((uint)piVar5[4] <= *param_1)))) {
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
  }
  puVar3 = FUN_00407020(local_1170);
  local_22e0 = *param_1;
  local_22dc = param_1[1];
  FUN_00422f90(local_22d8,puVar3);
  piVar4 = FUN_00420040(local_22e4,&local_22e0);
  FUN_00420810(local_22e4,&local_22e4,piVar5,(uint *)(piVar4 + 4),piVar4);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00423dd0 @ 00423dd0  kind=gamemisc  attributed-by=none  size=794 */

void __fastcall FUN_00423dd0(int *param_1)

{
  uint uVar1;
  undefined4 uVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  void *pvVar7;
  int *piVar8;
  DWORD DVar9;
  uint *puVar10;
  uint uVar11;
  char *pcVar12;
  code *pcVar13;
  int *piVar14;
  char cVar15;
  int iVar16;
  undefined4 local_1ac;
  int local_1a8;
  undefined4 local_1a4;
  int local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  int local_188;
  int local_184 [2];
  int local_17c [2];
  int local_174 [2];
  int local_16c [2];
  int local_164 [2];
  int *local_15c;
  undefined4 local_158;
  int local_154 [2];
  undefined1 local_14c [8];
  int local_144 [2];
  int local_13c [2];
  int local_134 [2];
  int local_12c [2];
  int local_124 [2];
  undefined4 local_11c;
  uint local_118;
  undefined4 local_114;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  uint local_fc;
  int local_f8;
  DWORD local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  int *local_e0;
  int local_dc;
  int *local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  char *local_cc;
  char *local_c8;
  undefined4 local_c4;
  int local_c0;
  byte local_b9;
  int local_b8;
  undefined4 *local_b4;
  undefined4 *local_b0;
  undefined4 *local_ac;
  undefined4 *local_a8;
  void *local_a4;
  int local_a0;
  undefined4 local_9c;
  int local_98;
  int *local_94;
  undefined4 local_90;
  char local_89;
  int *local_88;
  undefined4 local_84;
  undefined4 *local_80;
  int local_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int local_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int local_54;
  int iStack_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  undefined4 local_34;
  undefined4 local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c895;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_88 = (int *)0x0;
  local_84 = 0;
  local_e0 = param_1;
  local_88 = (int *)FUN_004267b0();
  local_8 = 0;
  local_d8 = (int *)0x0;
  local_d4 = 0;
  local_d8 = (int *)FUN_004267b0();
  local_8 = CONCAT31(local_8._1_3_,1);
  local_89 = '\0';
  timeBeginPeriod(1);
  pcVar13 = timeGetTime_exref;
  local_f4 = timeGetTime();
  if (*(char *)param_1[6] != '\0') {
    while (DVar9 = local_f4, *(int *)(*(int *)param_1[1] + param_1[2] * 4) != 0) {
      FUN_004f8520((int *)&local_d8);
      local_b0 = (undefined4 *)0x0;
      local_ac = (undefined4 *)0x0;
      local_a8 = (undefined4 *)0x0;
      local_8 = CONCAT31(local_8._1_3_,2);
      FUN_004d3df0(*param_1);
      local_b9 = 0;
      iVar4 = (*pcVar13)();
      local_b4 = (undefined4 *)(uint)local_b9;
      if (500 < (int)(iVar4 - DVar9)) {
        local_b4 = (undefined4 *)0x1;
      }
      iVar4 = *param_1;
      piVar8 = (int *)**(int **)(iVar4 + 4);
      if (piVar8 != *(int **)(iVar4 + 4)) {
        do {
          if ((piVar8[6] != 0) && ((piVar8[4] != param_1[4] || (piVar8[5] != param_1[5])))) {
            if (*(char *)(piVar8[6] + 0x60) != '\0') {
              FUN_00530600((int *)(iVar4 + 4),&local_108,(uint *)(param_1 + 4));
              if (local_108 == *(int *)(iVar4 + 4)) {
                local_b8 = 0;
              }
              else {
                local_b8 = *(int *)(local_108 + 0x18);
              }
              iVar4 = piVar8[6];
              local_e4 = *(uint *)(iVar4 + 0x20);
              local_7c = *(uint *)(iVar4 + 0x10) - *(uint *)(local_b8 + 0x10);
              iStack_78 = (*(int *)(iVar4 + 0x14) - *(int *)(local_b8 + 0x14)) -
                          (uint)(*(uint *)(iVar4 + 0x10) < *(uint *)(local_b8 + 0x10));
              local_74 = *(uint *)(iVar4 + 0x18) - *(uint *)(local_b8 + 0x18);
              iStack_70 = (*(int *)(iVar4 + 0x1c) - *(int *)(local_b8 + 0x1c)) -
                          (uint)(*(uint *)(iVar4 + 0x18) < *(uint *)(local_b8 + 0x18));
              local_6c = local_e4 - *(uint *)(local_b8 + 0x20);
              iStack_68 = (*(int *)(iVar4 + 0x24) - *(int *)(local_b8 + 0x24)) -
                          (uint)(local_e4 < *(uint *)(local_b8 + 0x20));
              local_40 = (float)CONCAT44(iStack_78,local_7c) * 1.5258789e-05;
              local_80 = (undefined4 *)(float)CONCAT44(iStack_68,local_6c);
              local_3c = (float)CONCAT44(iStack_70,local_74) * 1.5258789e-05;
              local_38 = (float)local_80 * 1.5258789e-05;
              if (40000.0 < local_3c * local_3c + local_40 * local_40 + local_38 * local_38)
              goto LAB_00424084;
            }
            piVar5 = (int *)FUN_00530600(&local_88,&local_1a8,(uint *)(piVar8[6] + 8));
            if ((int *)*piVar5 == local_88) {
              if ((char)local_b4 == '\0') goto LAB_00424084;
              local_b4 = (undefined4 *)((uint)local_b4 & 0xffffff00);
            }
            puVar6 = (undefined4 *)(piVar8[6] + 0x10);
            pvVar7 = (void *)FUN_00423ce0(&local_d8,(uint *)(piVar8[6] + 8));
            FUN_0041df70(pvVar7,puVar6);
          }
LAB_00424084:
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
          iVar4 = *local_e0;
          param_1 = local_e0;
        } while (piVar8 != *(int **)(iVar4 + 4));
      }
      iVar4 = *param_1;
      piVar8 = (int *)**(int **)(iVar4 + 0xc);
      if (piVar8 != *(int **)(iVar4 + 0xc)) {
        do {
          local_b4 = (undefined4 *)piVar8[6];
          if (local_b4 != (undefined4 *)0x0) {
            FUN_00530600((int *)(iVar4 + 4),&local_f8,(uint *)(param_1 + 4));
            if (local_f8 == *(int *)(iVar4 + 4)) {
              local_b8 = 0;
            }
            else {
              local_b8 = *(int *)(local_f8 + 0x18);
            }
            iVar4 = piVar8[6];
            local_e4 = *(uint *)(iVar4 + 0x24);
            local_64 = *(uint *)(iVar4 + 0x10) - *(uint *)(local_b8 + 0x10);
            iStack_60 = (*(int *)(iVar4 + 0x14) - *(int *)(local_b8 + 0x14)) -
                        (uint)(*(uint *)(iVar4 + 0x10) < *(uint *)(local_b8 + 0x10));
            local_5c = *(uint *)(iVar4 + 0x18) - *(uint *)(local_b8 + 0x18);
            iStack_58 = (*(int *)(iVar4 + 0x1c) - *(int *)(local_b8 + 0x1c)) -
                        (uint)(*(uint *)(iVar4 + 0x18) < *(uint *)(local_b8 + 0x18));
            local_54 = *(uint *)(iVar4 + 0x20) - *(uint *)(local_b8 + 0x20);
            iStack_50 = (local_e4 - *(int *)(local_b8 + 0x24)) -
                        (uint)(*(uint *)(iVar4 + 0x20) < *(uint *)(local_b8 + 0x20));
            local_4c = (float)CONCAT44(iStack_60,local_64) * 1.5258789e-05;
            local_80 = (undefined4 *)(float)CONCAT44(iStack_50,local_54);
            local_48 = (float)CONCAT44(iStack_58,local_5c) * 1.5258789e-05;
            local_44 = (float)local_80 * 1.5258789e-05;
            param_1 = local_e0;
            if (local_48 * local_48 + local_4c * local_4c + local_44 * local_44 <= 262144.0) {
              if ((local_b4 < local_ac) && (local_b0 <= local_b4)) {
                local_b4 = (undefined4 *)(((int)local_b4 - (int)local_b0) / 0x78);
                local_80 = local_a8;
                if ((local_ac == local_a8) &&
                   (iVar4 = (int)local_a8 - (int)local_ac >> 0x1f,
                   ((int)local_a8 - (int)local_ac) / 0x78 + iVar4 == iVar4)) {
                  iVar4 = ((int)local_ac - (int)local_b0) / 0x78;
                  if (iVar4 == 0x2222222) {
LAB_00425173:
                    local_80 = local_a8;
                    /* WARNING: Subroutine does not return */
                    std::_Xlength_error("vector<T> too long");
                  }
                  uVar1 = iVar4 + 1;
                  uVar11 = ((int)local_a8 - (int)local_b0) / 0x78;
                  if (0x2222222 - (uVar11 >> 1) < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar1) {
                    uVar11 = uVar1;
                  }
                  FUN_00426db0(&local_b0,uVar11);
                }
                puVar6 = local_b0 + (int)local_b4 * 0x1e;
              }
              else {
                local_80 = local_a8;
                puVar6 = local_b4;
                if ((local_ac == local_a8) &&
                   (iVar4 = (int)local_a8 - (int)local_ac >> 0x1f,
                   ((int)local_a8 - (int)local_ac) / 0x78 + iVar4 == iVar4)) {
                  iVar4 = ((int)local_ac - (int)local_b0) / 0x78;
                  if (iVar4 == 0x2222222) goto LAB_00425173;
                  uVar1 = iVar4 + 1;
                  uVar11 = ((int)local_a8 - (int)local_b0) / 0x78;
                  if (0x2222222 - (uVar11 >> 1) < uVar11) {
                    uVar11 = 0;
                  }
                  else {
                    uVar11 = uVar11 + (uVar11 >> 1);
                  }
                  if (uVar11 < uVar1) {
                    uVar11 = uVar1;
                  }
                  FUN_00426db0(&local_b0,uVar11);
                  puVar6 = local_b4;
                }
              }
              if (local_ac != (undefined4 *)0x0) {
                FUN_00423350(local_ac,puVar6);
              }
              local_ac = local_ac + 0x1e;
              param_1 = local_e0;
            }
          }
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
          iVar4 = *param_1;
        } while (piVar8 != *(int **)(iVar4 + 0xc));
      }
      local_94 = (int *)0x0;
      local_90 = 0;
      local_94 = (int *)FUN_004267b0();
      local_8 = CONCAT31(local_8._1_3_,3);
      piVar8 = (int *)*local_88;
      if (piVar8 != local_88) {
        do {
          iVar4 = *(int *)(*param_1 + 4);
          piVar5 = (int *)FUN_00530600((void *)(*param_1 + 4),&local_1a0,(uint *)(piVar8 + 4));
          if (*piVar5 != iVar4) {
            piVar5 = piVar8 + 6;
            pvVar7 = (void *)FUN_00423ce0(&local_94,(uint *)(piVar8 + 4));
            FUN_0041df70(pvVar7,piVar5);
          }
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
        } while (piVar8 != local_88);
      }
      FUN_004d5c60(*param_1);
      cVar15 = *(char *)(local_88[1] + 0xd);
      piVar8 = (int *)local_88[1];
      piVar5 = local_88;
      while (local_88 = piVar5, cVar15 == '\0') {
        FUN_004f7c20((int *)piVar8[2]);
        piVar5 = (int *)*piVar8;
        operator_delete(piVar8);
        cVar15 = *(char *)((int)piVar5 + 0xd);
        piVar8 = piVar5;
        piVar5 = local_88;
      }
      piVar5[1] = (int)piVar5;
      local_fc = local_fc & 0xffffff00;
      *piVar5 = (int)piVar5;
      piVar5[2] = (int)piVar5;
      local_84 = 0;
      puVar6 = FUN_00420540(&local_88,(undefined4 *)local_94[1],piVar5,local_fc);
      piVar5[1] = (int)puVar6;
      local_84 = local_90;
      piVar8 = (int *)local_88[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar15 = *(char *)(*piVar8 + 0xd);
        piVar5 = (int *)*piVar8;
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
        }
        *local_88 = (int)piVar8;
        iVar4 = *(int *)(local_88[1] + 8);
        cVar15 = *(char *)(iVar4 + 0xd);
        iVar16 = local_88[1];
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
          iVar16 = iVar4;
          iVar4 = *(int *)(iVar4 + 8);
        }
        local_88[2] = iVar16;
      }
      else {
        *local_88 = (int)local_88;
        local_88[2] = (int)local_88;
      }
      piVar8 = (int *)*local_d8;
      if (piVar8 != local_d8) {
        do {
          local_104 = 0;
          send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_104,4,0
              );
          local_cc = (char *)0x0;
          local_c8 = (char *)0x0;
          local_c4 = 0;
          local_c0 = 0;
          local_8 = CONCAT31(local_8._1_3_,4);
          puVar10 = (uint *)(piVar8 + 4);
          FUN_00413180(&local_cc,8);
          uVar1 = piVar8[5];
          *(uint *)(local_cc + local_c0) = *puVar10;
          *(uint *)((int)(local_cc + local_c0) + 4) = uVar1;
          local_c0 = local_c0 + 8;
          puVar6 = (undefined4 *)FUN_00530600(&local_88,&local_188,puVar10);
          if ((int *)*puVar6 == local_88) {
            piVar5 = piVar8 + 6;
            cVar15 = '\x01';
            piVar14 = piVar5;
          }
          else {
            cVar15 = '\0';
            piVar14 = piVar8 + 6;
            piVar5 = (int *)FUN_00423ce0(&local_88,puVar10);
          }
          FUN_00416210((int *)&local_cc,(int)piVar5,piVar14,cVar15);
          FUN_00412c70((int *)&local_cc);
          local_f0 = (int)local_c8 - (int)local_cc;
          iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),
                       (char *)&local_f0,4,0);
          if (iVar4 == -1) {
            local_8 = CONCAT31(local_8._1_3_,3);
LAB_0042479f:
            local_89 = '\x01';
            if (local_cc != (char *)0x0) {
              operator_delete(local_cc);
              local_c4 = 0;
              local_c8 = (char *)0x0;
              local_cc = (char *)0x0;
            }
            break;
          }
          pcVar12 = local_cc;
          if (local_cc == local_c8) {
            pcVar12 = (char *)0x0;
          }
          iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),pcVar12,
                       local_f0,0);
          local_8 = CONCAT31(local_8._1_3_,3);
          if (iVar4 == -1) goto LAB_0042479f;
          if (local_cc != (char *)0x0) {
            operator_delete(local_cc);
            local_cc = (char *)0x0;
            local_c8 = (char *)0x0;
            local_c4 = 0;
          }
          if (*(char *)((int)piVar8 + 0xd) == '\0') {
            piVar5 = (int *)piVar8[2];
            if (*(char *)((int)piVar5 + 0xd) == '\0') {
              cVar15 = *(char *)(*piVar5 + 0xd);
              piVar8 = piVar5;
              piVar5 = (int *)*piVar5;
              while (cVar15 == '\0') {
                cVar15 = *(char *)(*piVar5 + 0xd);
                piVar8 = piVar5;
                piVar5 = (int *)*piVar5;
              }
            }
            else {
              cVar15 = *(char *)(piVar8[1] + 0xd);
              piVar14 = (int *)piVar8[1];
              piVar5 = piVar8;
              while ((piVar8 = piVar14, cVar15 == '\0' && (piVar5 == (int *)piVar8[2]))) {
                cVar15 = *(char *)(piVar8[1] + 0xd);
                piVar14 = (int *)piVar8[1];
                piVar5 = piVar8;
              }
            }
          }
        } while (piVar8 != local_d8);
      }
      local_d0 = 2;
      send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_d0,4,0);
      cVar15 = *(char *)(local_88[1] + 0xd);
      piVar8 = (int *)local_88[1];
      piVar5 = local_88;
      while (local_88 = piVar5, cVar15 == '\0') {
        FUN_004f7c20((int *)piVar8[2]);
        piVar5 = (int *)*piVar8;
        operator_delete(piVar8);
        cVar15 = *(char *)((int)piVar5 + 0xd);
        piVar8 = piVar5;
        piVar5 = local_88;
      }
      piVar5[1] = (int)piVar5;
      local_118 = local_118 & 0xffffff00;
      *piVar5 = (int)piVar5;
      piVar5[2] = (int)piVar5;
      local_84 = 0;
      puVar6 = FUN_00420540(&local_88,(undefined4 *)local_d8[1],piVar5,local_118);
      piVar5[1] = (int)puVar6;
      local_84 = local_d4;
      piVar8 = (int *)local_88[1];
      if (*(char *)((int)piVar8 + 0xd) == '\0') {
        cVar15 = *(char *)(*piVar8 + 0xd);
        piVar5 = (int *)*piVar8;
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*piVar5 + 0xd);
          piVar8 = piVar5;
          piVar5 = (int *)*piVar5;
        }
        *local_88 = (int)piVar8;
        iVar4 = *(int *)(local_88[1] + 8);
        cVar15 = *(char *)(iVar4 + 0xd);
        iVar16 = local_88[1];
        while (cVar15 == '\0') {
          cVar15 = *(char *)(*(int *)(iVar4 + 8) + 0xd);
          iVar16 = iVar4;
          iVar4 = *(int *)(iVar4 + 8);
        }
        local_88[2] = iVar16;
      }
      else {
        *local_88 = (int)local_88;
        local_88[2] = (int)local_88;
      }
      FUN_004d3df0(*param_1);
      local_100 = *(undefined4 *)(*param_1 + 0x80015c);
      local_110 = *(undefined4 *)(*param_1 + 0x800160);
      FUN_00423400(local_184,(undefined4 *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x18));
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x30);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x30) + 4) = *(int *)(iVar4 + 0x30);
      *(undefined4 *)(iVar4 + 0x34) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x30)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x30));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x18);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x18) + 4) = *(int *)(iVar4 + 0x18);
      *(undefined4 *)(iVar4 + 0x1c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x18)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x18));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x28);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x28) + 4) = *(int *)(iVar4 + 0x28);
      *(undefined4 *)(iVar4 + 0x2c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x28)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x28));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x20);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x20) + 4) = *(int *)(iVar4 + 0x20);
      *(undefined4 *)(iVar4 + 0x24) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x20)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x20));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x38);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x38) + 4) = *(int *)(iVar4 + 0x38);
      *(undefined4 *)(iVar4 + 0x3c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x38)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x38));
      }
      FUN_00428080((int *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x40));
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x48);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x48) + 4) = *(int *)(iVar4 + 0x48);
      *(undefined4 *)(iVar4 + 0x4c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x48)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x48));
      }
      FUN_00428080((int *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x50));
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x58);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x58) + 4) = *(int *)(iVar4 + 0x58);
      *(undefined4 *)(iVar4 + 0x5c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x58)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x58));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x60);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x60) + 4) = *(int *)(iVar4 + 0x60);
      *(undefined4 *)(iVar4 + 100) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x60)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x60));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x68);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x68) + 4) = *(int *)(iVar4 + 0x68);
      *(undefined4 *)(iVar4 + 0x6c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x68)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x68));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x70);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x70) + 4) = *(int *)(iVar4 + 0x70);
      *(undefined4 *)(iVar4 + 0x74) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x70)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x70));
      }
      iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
      piVar8 = *(int **)(iVar4 + 0x78);
      piVar5 = (int *)*piVar8;
      *piVar8 = (int)piVar8;
      *(int *)(*(int *)(iVar4 + 0x78) + 4) = *(int *)(iVar4 + 0x78);
      *(undefined4 *)(iVar4 + 0x7c) = 0;
      if (piVar5 != *(int **)(iVar4 + 0x78)) {
        do {
          piVar8 = (int *)*piVar5;
          operator_delete(piVar5);
          piVar5 = piVar8;
        } while (piVar8 != (int *)*(int *)(iVar4 + 0x78));
      }
      local_18 = 7;
      local_1c = 0;
      local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
      local_8._0_1_ = 6;
      if (*(int *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x94) != 0) {
        iVar4 = **(int **)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x90);
        local_34 = *(undefined4 *)(iVar4 + 8);
        local_30 = *(undefined4 *)(iVar4 + 0xc);
        if (local_2c != (void **)(iVar4 + 0x10)) {
          FUN_004172f0(local_2c,(int *)(iVar4 + 0x10),0,0xffffffff);
        }
        iVar4 = *(int *)(*(int *)param_1[1] + param_1[2] * 4);
        piVar8 = *(int **)(iVar4 + 0x90);
        piVar5 = (int *)*piVar8;
        if (piVar5 != piVar8) {
          *(int *)piVar5[1] = *piVar5;
          *(int *)(*piVar5 + 4) = piVar5[1];
          if (7 < (uint)piVar5[9]) {
            operator_delete((void *)piVar5[4]);
          }
          piVar5[9] = 7;
          piVar5[8] = 0;
          *(undefined2 *)(piVar5 + 4) = 0;
          operator_delete(piVar5);
          piVar8 = (int *)(iVar4 + 0x94);
          *piVar8 = *piVar8 + -1;
        }
      }
      FUN_004d5c60(*param_1);
      local_d0 = 5;
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_d0,
                   4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_198;
LAB_00425387:
        local_8._0_1_ = 2;
        FUN_004fc060(&local_94,puVar6,piVar8,local_94);
        operator_delete(local_94);
        local_8 = CONCAT31(local_8._1_3_,1);
        if (local_b0 != (undefined4 *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_b0);
          operator_delete(local_b0);
        }
        break;
      }
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_110
                   ,4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_190;
        goto LAB_00425387;
      }
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_100
                   ,4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_18c;
        goto LAB_00425387;
      }
      local_d0 = 4;
      iVar4 = send(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),(char *)&local_d0,
                   4,0);
      if (iVar4 == -1) {
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        piVar8 = (int *)*local_94;
        puVar6 = &local_19c;
        goto LAB_00425387;
      }
      local_a4 = (void *)0x0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_8 = CONCAT31(local_8._1_3_,7);
      FUN_00421b10((int *)&local_a4,local_16c);
      FUN_00421b80((int *)&local_a4,local_184);
      FUN_00421b80((int *)&local_a4,local_174);
      FUN_00421c60((int *)&local_a4,local_17c);
      FUN_00421aa0((int *)&local_a4,local_164);
      FUN_00421d50((int *)&local_a4,local_154);
      uVar2 = local_158;
      FUN_00413180(&local_a4,(local_a0 - (int)local_a4) + 4);
      *(undefined4 *)((int)local_a4 + local_98) = uVar2;
      local_98 = local_98 + 4;
      piVar8 = (int *)*local_15c;
      if (piVar8 != local_15c) {
        do {
          FUN_00413180(&local_a4,(local_a0 - (int)local_a4) + 8);
          iVar4 = piVar8[3];
          *(int *)((int)local_a4 + local_98) = piVar8[2];
          ((int *)((int)local_a4 + local_98))[1] = iVar4;
          local_98 = local_98 + 8;
          FUN_00421dc0((int *)&local_a4,piVar8 + 4);
          piVar8 = (int *)*piVar8;
        } while (piVar8 != local_15c);
      }
      if (local_89 != '\0') {
        local_8 = CONCAT31(local_8._1_3_,6);
        if (local_a4 != (void *)0x0) {
          std::_Container_base0::_Orphan_all((_Container_base0 *)&local_a4);
          operator_delete(local_a4);
          local_a4 = (void *)0x0;
          local_a0 = 0;
          local_9c = 0;
        }
        if (7 < local_18) {
          operator_delete(local_2c[0]);
        }
        local_18 = 7;
        local_1c = 0;
        local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
        FUN_004239f0(local_184);
        local_8._0_1_ = 2;
        puVar6 = (undefined4 *)FUN_00428070(&local_94,&local_194);
        FUN_004fc060(&local_94,&local_1a4,(int *)*puVar6,local_94);
        FUN_00423700(&local_94);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042f440(&local_b0);
        break;
      }
      local_10c = FUN_00428780((int)local_14c);
      FUN_004168f0(&local_a4,&local_10c,4);
      FUN_00428070(local_14c,&local_dc);
      piVar8 = (int *)FUN_00530550(local_14c,&local_114);
      bVar3 = FUN_0042c6f0(&local_dc,piVar8);
      if (bVar3) {
        do {
          pvVar7 = (void *)FUN_0052eb90(&local_dc);
          FUN_004168f0(&local_a4,pvVar7,8);
          FUN_00421a30((int *)&local_a4,(int *)((int)pvVar7 + 8));
          FUN_0052ebf0(&local_dc,&local_1ac);
          piVar8 = (int *)FUN_00530550(local_14c,&local_114);
          bVar3 = FUN_0042c6f0(&local_dc,piVar8);
        } while (bVar3);
      }
      FUN_00421bf0((int *)&local_a4,local_144);
      FUN_00421c60((int *)&local_a4,local_13c);
      FUN_00421c60((int *)&local_a4,local_134);
      FUN_004219c0((int *)&local_a4,local_12c);
      FUN_00421ce0((int *)&local_a4,local_124);
      FUN_00412c70((int *)&local_a4);
      local_e8 = FUN_00413200((int *)&local_a4);
      piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
      iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_e8,4,0);
      if (iVar4 == -1) {
LAB_0042517e:
        FUN_0042f440(&local_a4);
        FUN_004cd890((int)&local_34);
        FUN_004239f0(local_184);
        FUN_004f7710(&local_94);
        local_8 = CONCAT31(local_8._1_3_,1);
        FUN_0042f440(&local_b0);
        break;
      }
      piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
      iVar16 = 0;
      iVar4 = local_e8;
      pcVar12 = (char *)FUN_00428160((int *)&local_a4);
      iVar4 = send(*(SOCKET *)(*piVar8 + 8),pcVar12,iVar4,iVar16);
      if (iVar4 == -1) goto LAB_0042517e;
      bVar3 = FUN_00419f80((int)local_2c);
      if (!bVar3) {
        local_11c = 10;
        piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
        iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_11c,4,0);
        if (iVar4 != -1) {
          piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
          iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_34,8,0);
          if (iVar4 != -1) {
            local_ec = FUN_004061d0((int)local_2c);
            piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
            iVar4 = send(*(SOCKET *)(*piVar8 + 8),(char *)&local_ec,4,0);
            if (iVar4 != -1) {
              piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
              iVar16 = 0;
              iVar4 = local_ec * 2;
              pcVar12 = (char *)FUN_00416c00(local_2c,0);
              iVar4 = send(*(SOCKET *)(*piVar8 + 8),pcVar12,iVar4,iVar16);
              if (iVar4 != -1) goto LAB_004250f5;
            }
          }
        }
        goto LAB_0042517e;
      }
LAB_004250f5:
      DVar9 = timeGetTime();
      if ((int)(DVar9 - DAT_00583dcc) < 0x14) {
        Sleep((DAT_00583dcc - DVar9) + 0x14);
      }
      DAT_00583dcc = DVar9;
      FUN_0042f440(&local_a4);
      FUN_004cd890((int)&local_34);
      FUN_004239f0(local_184);
      FUN_004f7710(&local_94);
      local_8 = CONCAT31(local_8._1_3_,1);
      FUN_0042f440(&local_b0);
      pcVar13 = timeGetTime_exref;
      if (*(char *)param_1[6] == '\0') break;
    }
  }
  timeEndPeriod(1);
  WaitForSingleObject((HANDLE)param_1[8],0xffffffff);
  FUN_004d3df0(*param_1);
  iVar4 = param_1[2];
  pvVar7 = (void *)param_1[1];
  piVar8 = (int *)FUN_00402bb0(pvVar7,iVar4);
  if (*piVar8 != 0) {
    piVar8 = (int *)FUN_00402bb0(pvVar7,iVar4);
    closesocket(*(SOCKET *)(*piVar8 + 8));
    puVar10 = FUN_00402b10((void *)(*param_1 + 4),(uint *)(param_1 + 4));
    if ((undefined4 *)*puVar10 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*puVar10)(1);
    }
    FUN_00530560((void *)(*param_1 + 4),(uint *)(param_1 + 4));
    piVar8 = (int *)FUN_00402bb0((void *)param_1[1],param_1[2]);
    if ((undefined4 *)*piVar8 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar8)(1);
    }
    puVar6 = (undefined4 *)FUN_00402bb0((void *)param_1[1],param_1[2]);
    *puVar6 = 0;
  }
  FUN_004d5c60(*param_1);
  FUN_004f7710(&local_d8);
  FUN_004f7710(&local_88);
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004254a0 @ 004254a0  kind=gamemisc  attributed-by=none  size=2935 */

void __thiscall FUN_004254a0(void *this)

{
  char cVar1;
  Connection_vftable *pCVar2;
  Connection **ppCVar3;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var4;
  Connection *pCVar5;
  void **ppvVar6;
  basic_ostream<char,std::char_traits<char>_> *pbVar7;
  int iVar8;
  int iVar9;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar10;
  uint *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  Connection *pCVar14;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *unaff_EBX;
  Connection *pCVar15;
  Connection *unaff_EDI;
  HANDLE hThread;
  Connection *pCVar16;
  int *piVar17;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *p_Var18;
  float10 fVar19;
  ulonglong uVar20;
  char *pcVar21;
  Connection *in_stack_fffffde8;
  code *pcVar22;
  Connection *local_20c;
  int local_200;
  int local_1fc;
  undefined4 local_1f8;
  Connection_vftable *local_1f4;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1f0;
  undefined1 *puStack_1ec;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1e8;
  undefined1 *puStack_1e4;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1e0;
  undefined4 uStack_1dc;
  undefined1 *local_1d8;
  undefined1 *puStack_1d4;
  undefined1 *local_1d0;
  Connection *pCStack_1cc;
  Connection *local_1c8;
  int iStack_1c4;
  int local_1c0;
  Connection *local_1bc;
  Connection *local_1b8;
  Connection *local_1b4;
  undefined8 local_1b0;
  int *local_1a8;
  _func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
  *local_1a4;
  HANDLE local_1a0;
  Connection *local_19c;
  Connection *local_198;
  int local_194;
  Connection *local_190;
  undefined2 local_18c [2];
  undefined4 local_188;
  undefined4 local_184;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 local_17e;
  undefined2 local_17c;
  undefined1 local_178 [256];
  undefined4 local_78;
  undefined4 local_74 [4];
  int *local_64;
  int local_5c [4];
  int *local_4c;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined8 local_20;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054c90a;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  hThread = (HANDLE)0x0;
  cVar1 = *(char *)(*(int *)this + 0x4c);
  local_1a0 = (HANDLE)0x0;
  local_1b8 = (Connection *)0x0;
  ppvVar6 = &local_10;
  local_10 = ExceptionList;
joined_r0x004254ec:
  ExceptionList = ppvVar6;
  local_1a8 = this;
  if (cVar1 == '\0') {
    WaitForSingleObject(local_1b8,0xffffffff);
    WaitForSingleObject(hThread,0xffffffff);
    ExceptionList = local_10;
    __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
    return;
  }
  Sleep(200);
  pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                        "Waiting for connection.");
  std::basic_ostream<char,std::char_traits<char>_>::operator<<
            ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
             (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
              *)unaff_EDI);
  unaff_EDI = (Connection *)accept(*(SOCKET *)(*(int *)this + 0x24),(sockaddr *)0x0,(int *)0x0);
  piVar17 = local_1a8;
  local_1b4 = unaff_EDI;
  if (unaff_EDI == (Connection *)0xffffffff) {
    unaff_EDI = (Connection *)endl_exref;
    pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                          "Connection failed.");
    std::basic_ostream<char,std::char_traits<char>_>::operator<<
              ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,unaff_EBX);
  }
  else {
    FUN_004d3df0(*(int *)(*local_1a8 + 4));
    local_198 = (Connection *)0x0;
    local_1a4 = *(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                  **)(*piVar17 + 4);
    pCVar16 = (Connection *)0x1;
    do {
      p_Var18 = local_1a4;
      pCVar14 = (Connection *)((int)pCVar16 >> 0x1f);
      local_20c = pCVar16;
      local_19c = pCVar16;
      local_190 = pCVar14;
      FUN_00530600(local_1a4 + 4,&local_200,(uint *)&local_20c);
      p_Var4 = local_1a4;
      if ((local_200 != *(int *)(p_Var18 + 4)) && (*(int *)(local_200 + 0x18) != 0)) {
        in_stack_fffffde8 = local_190;
        FUN_00530600(local_1a4 + 4,&local_1fc,(uint *)&stack0xfffffde4);
        if (local_1fc == *(int *)(p_Var4 + 4)) {
          iVar8 = 0;
        }
        else {
          iVar8 = *(int *)(local_1fc + 0x18);
        }
        if (*(char *)(iVar8 + 0x60) == '\0') {
          local_198 = (Connection *)0x1;
          break;
        }
      }
      pCVar16 = (Connection *)((int)&pCVar16->vftablePtr + 1);
    } while ((int)pCVar16 < 0xb);
    FUN_004d5c60((int)local_1a4);
    local_194 = 0;
    iVar8 = 4;
    piVar17 = &local_194;
    do {
      iVar9 = recv((SOCKET)unaff_EDI,(char *)piVar17,iVar8,0);
      if (iVar9 < 1) {
        if (iVar9 == -1) {
          closesocket((SOCKET)unaff_EDI);
          hThread = local_1a0;
          goto LAB_00425fd3;
        }
        break;
      }
      iVar8 = iVar8 - iVar9;
      piVar17 = (int *)((int)piVar17 + iVar9);
    } while (0 < iVar8);
    if (local_194 == 0x11) {
      local_1c0 = 0;
      iVar8 = 4;
      piVar17 = &local_1c0;
      do {
        iVar9 = recv((SOCKET)unaff_EDI,(char *)piVar17,iVar8,0);
        if (iVar9 < 1) {
          if (iVar9 == -1) {
            closesocket((SOCKET)unaff_EDI);
            hThread = local_1a0;
            goto LAB_00425fd3;
          }
          break;
        }
        iVar8 = iVar8 - iVar9;
        piVar17 = (int *)((int)piVar17 + iVar9);
      } while (0 < iVar8);
      iVar8 = local_1c0;
      pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                            "Client version: ");
      pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                          ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,iVar8);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)pbVar10,unaff_EBX);
      if ((int)local_198 < 4) {
        if (local_1c0 == 3) {
          local_194 = 0x10;
          send((SOCKET)unaff_EDI,(char *)&local_194,(int)unaff_EDI,0);
          pCVar16 = (Connection *)cout_exref;
          pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                                (char *)0x4257e9);
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
                     (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                      *)in_stack_fffffde8);
          iVar8 = 1;
          local_1a4 = *(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                        **)(*local_1a8 + 4);
          local_1b0 = 0;
          local_190 = (Connection *)(*(int *)(*local_1a8 + 4) + 4);
          pCVar2 = local_190->vftablePtr;
LAB_00425823:
          unaff_EBX = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)0x425845;
          FUN_00530600(local_190,(int *)&local_1f4,(uint *)&stack0xfffffdec);
          if ((local_1f4 != pCVar2) &&
             (local_1f4[6].deleting_destructor != (deleting_destructor *)0x0))
          goto code_r0x00425855;
          local_1b0 = (longlong)iVar8;
          if (iVar8 == 0) goto LAB_00425876;
          FUN_004d3df0((int)local_1a4);
          local_190 = operator_new(0x1e60);
          local_8 = 0;
          if (local_190 == (Connection *)0x0) {
            local_198 = (Connection *)0x0;
          }
          else {
            local_198 = (Connection *)
                        cube::Creature::Creature((Creature *)local_190,(undefined4 *)&local_1b0);
          }
          pCVar16 = local_198;
          local_8 = 0xffffffff;
          puVar11 = FUN_00402b10((void *)(*(int *)(*local_1a8 + 4) + 4),(uint *)&local_1b0);
          *puVar11 = (uint)pCVar16;
          FUN_004110d0((int)pCVar16);
          puVar13 = (undefined4 *)&(pCVar16->Connection_data).field_0xc;
          iVar8 = 0;
          local_19c = (Connection *)puVar13;
          do {
            uVar20 = FUN_0054a946();
            pCVar5 = local_198;
            pCVar15 = local_1b4;
            puVar13[iVar8 * 2] = (int)uVar20;
            *(int *)(&(pCVar16->Connection_data).field_0x10 + iVar8 * 8) = (int)(uVar20 >> 0x20);
            iVar8 = iVar8 + 1;
          } while (iVar8 < 3);
          local_2c = 0x3f4ccccd;
          uStack_28 = 0x3f4ccccd;
          local_24 = 0x3fe66666;
          local_44 = 0;
          local_20 = 0x3f99999a3f99999a;
          local_18 = 0x402ccccc;
          uStack_40 = 0;
          local_3c = 0;
          (local_198->Connection_data).offset_0x7c = (void *)0x3f99999a;
          (local_198->Connection_data).offset_0x80 = 0x3f99999a;
          (local_198->Connection_data).offset_0x84 = (void *)0x402ccccc;
          *(undefined8 *)&(local_198->Connection_data).field_0x24 = 0;
          *(undefined4 *)&(local_198->Connection_data).field_0x2c = 0;
          local_38 = 0;
          uStack_34 = 0;
          *(undefined8 *)&(local_198->Connection_data).field_0x30 = 0;
          local_30 = 0;
          *(undefined4 *)&(local_198->Connection_data).field_0x38 = 0;
          *(undefined4 *)&(local_198->Connection_data).field_0x58 = 0;
          *(undefined4 *)&local_198[2].Connection_data.field_0x54 = 1;
          fVar19 = FUN_0040fda0((int)local_198);
          (pCVar5->Connection_data).field_0x5c = 0;
          *(float *)&pCVar5[2].Connection_data.field_0x30 = (float)fVar19;
          *(undefined4 *)&(pCVar5->Connection_data).field_0x60 = 0x2c;
          pCVar5[2].Connection_data.offset_0x84 = *(void **)&(pCVar5->Connection_data).field_0xc;
          pCVar5[2].Connection_data.offset_0x88 =
               *(undefined4 *)&(pCVar5->Connection_data).field_0x10;
          pCVar5[2].Connection_data.offset_0x8c = (void *)(pCVar5->Connection_data).offset_0x14;
          pCVar5[2].Connection_data.offset_0x90 =
               *(undefined4 *)&(pCVar5->Connection_data).field_0x18;
          *(undefined4 *)&pCVar5[2].Connection_data.field_0x94 =
               *(undefined4 *)&(pCVar5->Connection_data).field_0x1c;
          pCVar5[3].vftablePtr = *(Connection_vftable **)&(pCVar5->Connection_data).field_0x20;
          pCVar5[0x11].Connection_data.field_0x55 = 1;
          *(undefined2 *)&pCVar5[0x11].Connection_data.field_0x48 = 0x203;
          pCVar5[0xf].Connection_data.field_0x75 = 1;
          *(undefined2 *)&pCVar5[0xf].Connection_data.field_0x68 = 0x203;
          pCVar5[2].Connection_data.field_0x4 = 1;
          FUN_0040a840((uint *)&(pCVar5->Connection_data).field_0x60,
                       (int)&(pCVar5->Connection_data).field_0x74,(undefined4 *)0x0);
          FUN_004d5c60((int)local_1a4);
          local_188 = 0;
          local_184 = 0;
          local_180 = 0;
          local_17e = 0;
          local_78 = 0;
          memset(local_178,0,0x100);
          local_18c[0] = 1;
          local_17f = 0;
          local_17c = 1;
          iVar8 = 0x32;
          do {
            FUN_00427000(&pCVar5[0x1d].Connection_data.field_0x2c,(char *)local_18c,-1);
            iVar8 = iVar8 + -1;
          } while (iVar8 != 0);
          local_17c = 1;
          local_18c[0] = 0x603;
          local_17f = 2;
          FUN_00427000(&pCVar5[0x1d].Connection_data.field_0x2c,(char *)local_18c,-1);
          piVar17 = local_1a8;
          FUN_004d3df0(*(int *)(*local_1a8 + 4));
          iVar8 = *piVar17;
          p_Var18 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                     *)0x0;
          if (0 < (int)(*(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x28) & 0xfffffffcU)) {
            piVar12 = *(int **)(iVar8 + 0x28);
            do {
              if (*piVar12 == 0) {
                local_190 = operator_new(0xb0);
                local_8 = 1;
                if (local_190 == (Connection *)0x0) {
                  pCVar16 = (Connection *)0x0;
                }
                else {
                  pCVar16 = cube::Connection::Connection(local_190);
                }
                local_8 = 0xffffffff;
                *(Connection **)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) = pCVar16;
                break;
              }
              p_Var18 = p_Var18 + 1;
              piVar12 = piVar12 + 1;
            } while ((int)p_Var18 < *(int *)(iVar8 + 0x2c) - *(int *)(iVar8 + 0x28) >> 2);
          }
          if (p_Var18 ==
              (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
               *)(*(int *)(*piVar17 + 0x2c) - *(int *)(*piVar17 + 0x28) >> 2)) {
            local_190 = operator_new(0xb0);
            local_8 = 2;
            if (local_190 == (Connection *)0x0) {
              local_1bc = (Connection *)0x0;
            }
            else {
              local_1bc = cube::Connection::Connection(local_190);
            }
            pCVar16 = local_1b4;
            iVar8 = *piVar17;
            ppCVar3 = *(Connection ***)(iVar8 + 0x2c);
            local_8 = 0xffffffff;
            local_198 = local_1bc;
            if ((&local_1bc < ppCVar3) &&
               (pCVar15 = local_1b4, *(Connection ***)(iVar8 + 0x28) <= &local_1bc)) {
              local_190 = (Connection *)
                          ((int)&local_1bc - (int)*(Connection ***)(iVar8 + 0x28) >> 2);
              if (ppCVar3 == *(Connection ***)(iVar8 + 0x30)) {
                FUN_00426eb0((void *)(iVar8 + 0x28),1);
              }
              puVar13 = *(undefined4 **)(iVar8 + 0x2c);
              pCVar15 = pCVar16;
              if (puVar13 != (undefined4 *)0x0) {
                pCVar16 = *(Connection **)(*(int *)(iVar8 + 0x28) + (int)local_190 * 4);
LAB_00425c84:
                *puVar13 = pCVar16;
              }
            }
            else {
              if (ppCVar3 == *(Connection ***)(iVar8 + 0x30)) {
                FUN_00426eb0((void *)(iVar8 + 0x28),1);
              }
              puVar13 = *(undefined4 **)(iVar8 + 0x2c);
              pCVar16 = local_198;
              if (puVar13 != (undefined4 *)0x0) goto LAB_00425c84;
            }
            *(int *)(iVar8 + 0x2c) = *(int *)(iVar8 + 0x2c) + 4;
            piVar17 = local_1a8;
          }
          *(Connection **)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8) = pCVar15;
          iVar8 = *(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4);
          *(_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
            **)(iVar8 + 0x10) =
               (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                *)local_1b0;
          *(undefined1 **)(iVar8 + 0x14) = local_1b0._4_4_;
          FUN_004d5c60(*(int *)(*piVar17 + 4));
          pcVar21 = (char *)0x425cdb;
          unaff_EDI = (Connection *)cout_exref;
          unaff_EBX = p_Var18;
          pcVar22 = endl_exref;
          pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,"Player ")
          ;
          pbVar10 = std::basic_ostream<char,std::char_traits<char>_>::operator<<
                              ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,(int)pcVar22);
          pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)pbVar10,pcVar21);
          local_20c = (Connection *)0x425cf7;
          std::basic_ostream<char,std::char_traits<char>_>::operator<<
                    ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
                     (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                      *)pCVar14);
          local_20c = (Connection *)0x4;
          local_194 = 0;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_194,4,0);
          local_20c = (Connection *)0x8;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_1b0,8,0);
          local_20c = (Connection *)0x1168;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)local_19c,0x1168,0);
          local_194 = 0xf;
          local_1f8 = *(undefined4 *)(*piVar17 + 8);
          local_20c = (Connection *)0x4;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_194,4,0);
          local_20c = (Connection *)0x4;
          in_stack_fffffde8 = (Connection *)0x425d9d;
          send(*(SOCKET *)(*(int *)(*(int *)(*piVar17 + 0x28) + (int)p_Var18 * 4) + 8),
               (char *)&local_1f8,4,0);
          p_Var4 = local_1a4;
          pCVar16 = (Connection *)*piVar17;
          puStack_1ec = &(pCVar16->Connection_data).field_0x24;
          local_1d8 = &(pCVar16->Connection_data).field_0x30;
          puStack_1d4 = &(pCVar16->Connection_data).field_0x38;
          local_1d0 = &(pCVar16->Connection_data).field_0x40;
          pCStack_1cc = (Connection *)&(pCVar16->Connection_data).field_0x48;
          local_1e0 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)local_1b0;
          uStack_1dc = local_1b0._4_4_;
          local_1f0 = local_1a4;
          local_8 = 3;
          local_20c = (Connection *)0x425e2e;
          local_1e8 = p_Var18;
          local_1c8 = pCVar16;
          local_1b4 = pCVar16;
          local_19c = pCStack_1cc;
          local_190 = (Connection *)puStack_1ec;
          piVar17 = operator_new(0x40);
          if (piVar17 == (int *)0x0) {
LAB_00426017:
                    /* WARNING: Subroutine does not return */
            std::_Xbad_alloc();
          }
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
          *piVar17 = (int)&std::
                           _Func_impl<std::_Callable_obj<<lambda_ab9fa502c78db4b4288c2bfaac953e1a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                           ::vftable;
          *(ulonglong *)(piVar17 + 2) = CONCAT44(puStack_1ec,local_1f0);
          *(ulonglong *)(piVar17 + 4) = CONCAT44(puStack_1e4,local_1e8);
          *(ulonglong *)(piVar17 + 6) = CONCAT44(uStack_1dc,local_1e0);
          *(ulonglong *)(piVar17 + 8) = CONCAT44(puStack_1d4,local_1d8);
          *(ulonglong *)(piVar17 + 10) = CONCAT44(pCStack_1cc,local_1d0);
          *(ulonglong *)(piVar17 + 0xc) = CONCAT44(iStack_1c4,local_1c8);
          local_8 = 4;
          local_20c = (Connection *)0x425ea0;
          local_64 = piVar17;
          local_1b8 = (Connection *)FUN_00413640(local_74);
          local_8 = 0xffffffff;
          if (local_64 != (int *)0x0) {
            local_20c = (Connection *)0x425ec8;
            (**(code **)(*local_64 + 0x10))();
            local_64 = (int *)0x0;
          }
          SetThreadPriority(local_1b8,-1);
          puStack_1e4 = &(pCVar16->Connection_data).field_0x24;
          local_1d8 = (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                       *)local_1b0;
          puStack_1d4 = local_1b0._4_4_;
          local_1d0 = &(pCVar16->Connection_data).field_0x48;
          local_1e8 = p_Var4;
          local_1c8 = local_1b8;
          local_8 = 5;
          local_1e0 = p_Var18;
          pCStack_1cc = pCVar16;
          piVar17 = operator_new(0x38);
          if (piVar17 == (int *)0x0) goto LAB_00426017;
                    /* inlined constructor or destructor (approx location) for
                       std::_Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                        */
          *piVar17 = (int)&std::
                           _Func_impl<std::_Callable_obj<<lambda_38361316b522edf94308fdf9d1a2954a>,0>,std::allocator<std::_Func_class<void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>_>,void,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil,std::_Nil>
                           ::vftable;
          *(ulonglong *)(piVar17 + 2) = CONCAT44(puStack_1e4,local_1e8);
          *(ulonglong *)(piVar17 + 4) = CONCAT44(uStack_1dc,local_1e0);
          *(ulonglong *)(piVar17 + 6) = CONCAT44(puStack_1d4,local_1d8);
          *(ulonglong *)(piVar17 + 8) = CONCAT44(pCStack_1cc,local_1d0);
          piVar17[10] = (int)local_1c8;
          piVar17[0xb] = iStack_1c4;
          local_8 = 6;
          local_4c = piVar17;
          hThread = (HANDLE)FUN_00413640(local_5c);
          local_8 = 0xffffffff;
          local_1a0 = hThread;
          if (local_4c != (int *)0x0) {
            (**(code **)(*local_4c + 0x10))(local_4c != local_5c);
            local_4c = (int *)0x0;
          }
          SetThreadPriority(hThread,-1);
          goto LAB_00425fd3;
        }
        local_19c = (Connection *)0x3;
        send((SOCKET)unaff_EDI,(char *)&local_19c,(int)unaff_EDI,0);
        Sleep(500);
        closesocket((SOCKET)unaff_EDI);
      }
      else {
        local_190 = (Connection *)0x12;
        send((SOCKET)unaff_EDI,(char *)&local_190,(int)unaff_EDI,0);
        Sleep(500);
        closesocket((SOCKET)unaff_EDI);
      }
      unaff_EDI = (Connection *)cout_exref;
      unaff_EBX = endl_exref;
      pbVar7 = FUN_00412710((basic_ostream<char,std::char_traits<char>_> *)cout_exref,
                            (char *)0x4257a6);
      std::basic_ostream<char,std::char_traits<char>_>::operator<<
                ((basic_ostream<char,std::char_traits<char>_> *)pbVar7,
                 (_func_basic_ostream<char,struct_std::char_traits<char>_>_ptr_basic_ostream<char,struct_std::char_traits<char>_>_ptr
                  *)in_stack_fffffde8);
      hThread = local_1a0;
    }
    else {
      closesocket((SOCKET)unaff_EDI);
      hThread = local_1a0;
    }
  }
  goto LAB_00425fd3;
code_r0x00425855:
  iVar8 = iVar8 + 1;
  if (10 < iVar8) goto LAB_00425876;
  goto LAB_00425823;
LAB_00425876:
  in_stack_fffffde8 = unaff_EDI;
  closesocket((SOCKET)unaff_EDI);
  hThread = local_1a0;
  unaff_EDI = pCVar16;
LAB_00425fd3:
  cVar1 = *(char *)(*local_1a8 + 0x4c);
  ppvVar6 = ExceptionList;
  this = local_1a8;
  goto joined_r0x004254ec;
}


/* FUN_00426020 @ 00426020  kind=gamemisc  attributed-by=none  size=1774 */

/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __fastcall FUN_00426020(int *param_1)

{
  char cVar1;
  void **ppvVar2;
  int iVar3;
  uint uVar4;
  void *this;
  char ****ppppcVar5;
  char cVar6;
  char *pcVar7;
  SOCKET *buf;
  uint *buf_00;
  int iVar8;
  undefined8 *puVar9;
  char local_13fc [40];
  undefined8 local_13d4;
  undefined4 local_13cc;
  uint local_13c8;
  char *local_13c4;
  char *local_13c0;
  undefined4 local_13bc;
  undefined4 local_13b8;
  SOCKET local_13b4;
  SOCKET local_13b0;
  char local_13a9;
  undefined8 local_13a8 [557];
  char local_240 [300];
  char local_114 [112];
  char local_a4 [72];
  int local_5c;
  int local_58;
  undefined2 local_54 [8];
  undefined4 local_44;
  undefined4 local_40;
  char local_3c [8];
  char local_34 [8];
  char ***local_2c [5];
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  int local_8;
  
  local_8 = -1;
  puStack_c = &LAB_0054c95b;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  cVar6 = '\0';
  local_13a9 = '\0';
  cVar1 = *(char *)param_1[9];
  ppvVar2 = &local_10;
  local_10 = ExceptionList;
  while (ExceptionList = ppvVar2, cVar1 != '\0') {
    if ((*(int *)(*(int *)param_1[1] + param_1[2] * 4) == 0) || (cVar6 != '\0')) break;
    local_13cc = 0;
    iVar8 = 4;
    local_13b4 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
    pcVar7 = (char *)&local_13cc;
    do {
      iVar3 = recv(local_13b4,pcVar7,iVar8,0);
      if (iVar3 < 1) {
        if (iVar3 == -1) goto LAB_004266ef;
        break;
      }
      iVar8 = iVar8 - iVar3;
      pcVar7 = pcVar7 + iVar3;
    } while (0 < iVar8);
    switch(local_13cc) {
    case 0:
      local_13c4 = (char *)0x0;
      local_13c0 = (char *)0x0;
      local_13bc = 0;
      local_13b8 = 0;
      local_13b4 = 0;
      local_8 = 0;
      iVar8 = 4;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      buf = &local_13b4;
      do {
        iVar3 = recv(local_13b0,(char *)buf,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            local_8 = iVar3;
            FUN_0042f440(&local_13c4);
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        buf = (SOCKET *)((int)buf + iVar3);
      } while (0 < iVar8);
      if (local_13b4 != 0) {
        FUN_00413180(&local_13c4,local_13b4);
        pcVar7 = local_13c4;
        if (local_13c4 == local_13c0) {
          pcVar7 = (char *)0x0;
        }
        iVar8 = FUN_004286b0(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),pcVar7,
                             local_13b4,0);
        if (iVar8 != -1) {
          FUN_00412d90((int *)&local_13c4);
          local_13d4 = 0;
          FUN_00415c90(&local_13c4,&local_13d4,8);
          FUN_004d3df0(*param_1);
          uVar4 = FUN_00405420((void *)*param_1,(uint *)(param_1 + 4));
          FUN_00422f90(local_13a8,(undefined4 *)(uVar4 + 0x10));
          FUN_004d5c60(*param_1);
          FUN_00415dd0((int *)&local_13c4,local_13a8);
          FUN_004d3df0(*param_1);
          puVar9 = local_13a8;
          uVar4 = FUN_00405420((void *)*param_1,(uint *)(param_1 + 4));
          FUN_0041df70((void *)(uVar4 + 0x10),(undefined4 *)puVar9);
          FUN_004d5c60(*param_1);
          local_8 = -1;
          FUN_0042f440(&local_13c4);
          break;
        }
      }
      cVar6 = '\x01';
      local_13a9 = '\x01';
      local_8 = -1;
      FUN_0042f440(&local_13c4);
      goto LAB_004266e3;
    case 6:
      FUN_0041b9e0((undefined2 *)local_240);
      iVar8 = 300;
      pcVar7 = local_240;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      pcVar7 = local_240;
      uVar4 = FUN_00405420((void *)*param_1,(uint *)(param_1 + 4));
      FUN_0041caf0((void *)(uVar4 + 0x130c),pcVar7);
      FUN_004d5c60(*param_1);
      break;
    case 7:
      FUN_00422a90((int)local_a4);
      iVar8 = 0x48;
      pcVar7 = local_a4;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      FUN_00428400((void *)param_1[6],(undefined4 *)local_a4);
      FUN_004d5c60(*param_1);
      break;
    case 8:
      FUN_004063d0((int)local_13fc);
      iVar8 = 0x28;
      pcVar7 = local_13fc;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      FUN_00411040((void *)param_1[7],(undefined8 *)local_13fc);
      FUN_004d5c60(*param_1);
      break;
    case 9:
      FUN_00422890((undefined4 *)local_114);
      iVar8 = 0x70;
      pcVar7 = local_114;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      FUN_004d3df0(*param_1);
      FUN_00428360((void *)param_1[8],(undefined4 *)local_114);
      FUN_004d5c60(*param_1);
      break;
    case 10:
      iVar8 = 4;
      buf_00 = &local_13c8;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,(char *)buf_00,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        buf_00 = (uint *)((int)buf_00 + iVar3);
      } while (0 < iVar8);
      if (0 < (int)local_13c8) {
        FUN_00421e50(local_2c,local_13c8,0);
        ppppcVar5 = local_2c;
        if (7 < local_18) {
          ppppcVar5 = (char ****)local_2c[0];
        }
        local_8 = 1;
        iVar8 = FUN_004286b0(*(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8),
                             (char *)ppppcVar5,local_13c8 * 2,0);
        if (iVar8 == -1) {
          cVar6 = '\x01';
          local_13a9 = '\x01';
          local_8 = iVar8;
          FUN_004cd8c0(local_2c);
          goto LAB_004266e3;
        }
        FUN_004d3df0(*param_1);
        iVar8 = 0;
        if (0 < (int)(((int *)param_1[1])[1] - *(int *)param_1[1] & 0xfffffffcU)) {
          do {
            local_40 = 7;
            local_44 = 0;
            local_54[0] = 0;
            local_8._0_1_ = 2;
            FUN_004172f0(local_54,(int *)local_2c,0,0xffffffff);
            local_5c = param_1[4];
            local_58 = param_1[5];
            FUN_004283b0((void *)(*(int *)(*(int *)param_1[1] + iVar8 * 4) + 0x90),&local_5c);
            local_8 = CONCAT31(local_8._1_3_,1);
            FUN_004cd890((int)&local_5c);
            iVar8 = iVar8 + 1;
          } while (iVar8 < ((int *)param_1[1])[1] - *(int *)param_1[1] >> 2);
        }
        FUN_004d5c60(*param_1);
        local_8 = -1;
        FUN_004cd8c0(local_2c);
      }
      break;
    case 0xb:
      iVar8 = 8;
      pcVar7 = local_3c;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      EnterCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
      pcVar7 = local_3c;
      this = (void *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x80);
      goto LAB_004266c1;
    case 0xc:
      iVar8 = 8;
      pcVar7 = local_34;
      local_13b0 = *(SOCKET *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 8);
      do {
        iVar3 = recv(local_13b0,pcVar7,iVar8,0);
        if (iVar3 < 1) {
          if (iVar3 == -1) {
            cVar6 = '\x01';
            local_13a9 = '\x01';
            goto LAB_004266e3;
          }
          break;
        }
        iVar8 = iVar8 - iVar3;
        pcVar7 = pcVar7 + iVar3;
      } while (0 < iVar8);
      EnterCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
      pcVar7 = local_34;
      this = (void *)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x88);
LAB_004266c1:
      FUN_004285e0(this,(undefined4 *)pcVar7);
      LeaveCriticalSection
                ((LPCRITICAL_SECTION)(*(int *)(*(int *)param_1[1] + param_1[2] * 4) + 0x98));
    }
    cVar6 = local_13a9;
LAB_004266e3:
    ppvVar2 = ExceptionList;
    cVar1 = *(char *)param_1[9];
  }
LAB_004266ef:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_004267b0 @ 004267b0  kind=gamemisc  attributed-by=none  size=50 */

void FUN_004267b0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x1180);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x004267c1. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_00426a70 @ 00426a70  kind=gamemisc  attributed-by=none  size=58 */

undefined4 * __fastcall FUN_00426a70(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x1180);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_00426b80 @ 00426b80  kind=gamemisc  attributed-by=none  size=155 */

void __thiscall FUN_00426b80(void *this,int *param_1,uint *param_2)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar7 = *(undefined4 **)this;
  puVar4 = (undefined4 *)puVar7[1];
  cVar1 = *(char *)((int)puVar4 + 0xd);
  puVar3 = puVar7;
  puVar5 = puVar4;
  while (cVar1 == '\0') {
    iVar2 = puVar5[5];
    if (((int)param_2[1] < iVar2) || (((int)param_2[1] <= iVar2 && (*param_2 <= (uint)puVar5[4]))))
    {
      if ((*(char *)((int)puVar7 + 0xd) != '\0') &&
         (((int)param_2[1] <= iVar2 && (((int)param_2[1] < iVar2 || (*param_2 < (uint)puVar5[4])))))
         ) {
        puVar7 = puVar5;
      }
      puVar6 = (undefined4 *)*puVar5;
    }
    else {
      puVar6 = (undefined4 *)puVar5[2];
      puVar5 = puVar3;
    }
    puVar3 = puVar5;
    puVar5 = puVar6;
    cVar1 = *(char *)((int)puVar6 + 0xd);
  }
  if (*(char *)((int)puVar7 + 0xd) == '\0') {
    puVar4 = (undefined4 *)*puVar7;
  }
  if (*(char *)((int)puVar4 + 0xd) == '\0') {
    do {
      if (((int)puVar4[5] < (int)param_2[1]) ||
         (((int)puVar4[5] <= (int)param_2[1] && ((uint)puVar4[4] <= *param_2)))) {
        puVar5 = (undefined4 *)puVar4[2];
      }
      else {
        puVar5 = (undefined4 *)*puVar4;
        puVar7 = puVar4;
      }
      puVar4 = puVar5;
    } while (*(char *)((int)puVar5 + 0xd) == '\0');
  }
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar7;
  return;
}


/* FUN_00428160 @ 00428160  kind=gamemisc  attributed-by=none  size=11 */

int __fastcall FUN_00428160(int *param_1)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar1 = 0;
  }
  return iVar1;
}


/* FUN_00428290 @ 00428290  kind=gamemisc  attributed-by=none  size=50 */

undefined1 __fastcall FUN_00428290(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((((((cVar1 != '\f') && (cVar1 != '\r')) && (cVar1 != '\x15')) &&
       ((cVar1 != '\v' || (param_1[1] == '\x0e')))) &&
      ((cVar1 != '\0' && ((cVar1 != '\x19' && (cVar1 != '\x14')))))) &&
     ((cVar1 != '\x18' && (cVar1 != '\x17')))) {
    return 1;
  }
  return 0;
}


/* FUN_004282d0 @ 004282d0  kind=gamemisc  attributed-by=none  size=32 */

undefined1 __fastcall FUN_004282d0(char *param_1)

{
  char cVar1;
  
  cVar1 = *param_1;
  if ((((cVar1 != '\x01') && (cVar1 != '\n')) && (cVar1 != '\f')) &&
     (((cVar1 != '\r' && (cVar1 != '\v')) && (cVar1 != '\x15')))) {
    return 0;
  }
  return 1;
}


/* FUN_004282f0 @ 004282f0  kind=gamemisc  attributed-by=none  size=64 */

undefined4 FUN_004282f0(undefined1 *param_1)

{
  switch(*param_1) {
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 0x17:
  case 0x18:
    return 0;
  default:
    return 1;
  case 0xb:
    return 2;
  case 0x13:
  case 0x14:
    return 3;
  }
}


/* FUN_00428630 @ 00428630  kind=gamemisc  attributed-by=none  size=118 */

void __thiscall FUN_00428630(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041e8f0(this,1);
    }
    param_1 = (undefined4 *)((((int)param_1 - (int)puVar2) / 0x11c) * 0x11c + *(int *)this);
  }
  else if (puVar1 == *(undefined4 **)((int)this + 8)) {
    FUN_0041e8f0(this,1);
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    FUN_00413710(puVar1 + 1,(undefined1 *)(param_1 + 1));
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x11c;
  return;
}


/* FUN_004286b0 @ 004286b0  kind=gamemisc  attributed-by=none  size=55 */

int __cdecl FUN_004286b0(SOCKET param_1,char *param_2,int param_3,int param_4)

{
  int iVar1;
  int len;
  
  len = param_3;
  while ((iVar1 = param_3, 0 < len && (iVar1 = recv(param_1,param_2,len,param_4), 0 < iVar1))) {
    len = len - iVar1;
    param_2 = param_2 + iVar1;
  }
  return iVar1;
}


/* FUN_00429060 @ 00429060  kind=gamemisc  attributed-by=none  size=101 */

void FUN_00429060(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  uint unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  
  piVar2 = *(int **)(unaff_EBP + -0x2c);
  *(undefined4 *)(unaff_EBP + -4) = 1;
  cVar1 = *(char *)(unaff_EBP + -0x11);
  iVar3 = *(int *)(*unaff_ESI + 4);
  *(undefined4 *)(iVar3 + 0x20 + (int)unaff_ESI) = 0;
  *(undefined4 *)(iVar3 + 0x24 + (int)unaff_ESI) = 0;
  if (cVar1 == '\0') {
    unaff_EBX = unaff_EBX | 2;
  }
  std::basic_ios<wchar_t,std::char_traits<wchar_t>_>::setstate
            ((basic_ios<wchar_t,std::char_traits<wchar_t>_> *)
             (*(int *)(*unaff_ESI + 4) + (int)unaff_ESI),unaff_EBX,false);
  iVar3 = *piVar2;
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  piVar2 = *(int **)(*(int *)(iVar3 + 4) + 0x38 + (int)piVar2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


/* FUN_004290d0 @ 004290d0  kind=gamemisc  attributed-by=none  size=176 */

undefined4 * __thiscall FUN_004290d0(void *this,int *param_1)

{
  undefined4 *this_00;
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054caa9;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0042cf80(this);
  this_00 = puVar1 + 4;
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (this_00 != (undefined4 *)0x0) {
    puVar1[9] = 7;
    puVar1[8] = 0;
    *(undefined2 *)this_00 = 0;
    FUN_004172f0(this_00,param_1,0,0xffffffff);
    puVar1[0xf] = 7;
    puVar1[0xe] = 0;
    *(undefined2 *)(puVar1 + 10) = 0;
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_004172f0(puVar1 + 10,param_1 + 6,0,0xffffffff);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_004291a0 @ 004291a0  kind=gamemisc  attributed-by=none  size=135 */

int FUN_004291a0(undefined4 *param_1,undefined4 *param_2,int *param_3)

{
  undefined2 *this;
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cae1;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  iVar1 = FUN_004f7b60(param_1,param_2);
  this = (undefined2 *)(iVar1 + 8);
  local_8 = 1;
  if (this != (undefined2 *)0x0) {
    *(undefined4 *)(iVar1 + 0x1c) = 7;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *this = 0;
    FUN_004172f0(this,param_3,0,0xffffffff);
  }
  ExceptionList = local_10;
  return iVar1;
}


/* FUN_00429280 @ 00429280  kind=gamemisc  attributed-by=none  size=157 */

undefined4 * __thiscall FUN_00429280(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cb21;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0042cf40(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
    local_8._0_1_ = 2;
    FUN_0042b040(puVar1 + 10,param_1 + 6);
    local_8 = CONCAT31(local_8._1_3_,3);
    FUN_0042b180(puVar1 + 0xc,param_1 + 8);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_00429380 @ 00429380  kind=gamemisc  attributed-by=none  size=149 */

undefined4 * __thiscall FUN_00429380(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cb59;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar1 = FUN_0042cf40(this);
  *(undefined2 *)(puVar1 + 3) = 0;
  local_8._0_1_ = 1;
  local_8._1_3_ = 0;
  if (puVar1 + 4 != (undefined4 *)0x0) {
    FUN_00416a90(puVar1 + 4,param_1);
                    /* inlined constructor: cube::QuestText::QuestText */
    puVar1[10] = &cube::QuestText::vftable;
    puVar1[0xb] = param_1[7];
    local_8 = CONCAT31(local_8._1_3_,2);
    FUN_0042b0e0(puVar1 + 0xc,param_1 + 8);
  }
  ExceptionList = local_10;
  return puVar1;
}


/* FUN_00429430 @ 00429430  kind=gamemisc  attributed-by=none  size=116 */

void __thiscall FUN_00429430(void *this,int *param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar2 = *(int *)this;
  puVar7 = FUN_004294b0(this,*(undefined4 **)(*param_1 + 4),iVar2,param_2);
  *(undefined4 **)(iVar2 + 4) = puVar7;
  piVar3 = *(int **)this;
  *(int *)((int)this + 4) = param_1[1];
  piVar4 = (int *)piVar3[1];
  if (*(char *)((int)piVar4 + 0xd) != '\0') {
    *piVar3 = (int)piVar3;
    *(int *)(*(int *)this + 8) = *(int *)this;
    return;
  }
  cVar1 = *(char *)(*piVar4 + 0xd);
  piVar6 = (int *)*piVar4;
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*piVar6 + 0xd);
    piVar4 = piVar6;
    piVar6 = (int *)*piVar6;
  }
  *piVar3 = (int)piVar4;
  iVar2 = *(int *)(*(int *)this + 4);
  iVar5 = *(int *)(iVar2 + 8);
  cVar1 = *(char *)(iVar5 + 0xd);
  while (cVar1 == '\0') {
    cVar1 = *(char *)(*(int *)(iVar5 + 8) + 0xd);
    iVar2 = iVar5;
    iVar5 = *(int *)(iVar5 + 8);
  }
  *(int *)(*(int *)this + 8) = iVar2;
  return;
}


/* FUN_004294b0 @ 004294b0  kind=gamemisc  attributed-by=none  size=159 */

undefined4 * __thiscall
FUN_004294b0(void *this,undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054cb80;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  puVar3 = *(undefined4 **)this;
  if (*(char *)((int)param_1 + 0xd) == '\0') {
    puVar1 = FUN_004290d0(this,param_1 + 4);
    puVar1[1] = param_2;
    *(undefined1 *)(puVar1 + 3) = *(undefined1 *)(param_1 + 3);
    if (*(char *)((int)puVar3 + 0xd) != '\0') {
      puVar3 = puVar1;
    }
    local_8 = 0;
    puVar2 = FUN_004294b0(this,(undefined4 *)*param_1,puVar1,param_3);
    *puVar1 = puVar2;
    puVar2 = FUN_004294b0(this,(undefined4 *)param_1[2],puVar1,param_3);
    puVar1[2] = puVar2;
  }
  ExceptionList = local_10;
  return puVar3;
}


/* FUN_004297a0 @ 004297a0  kind=gamemisc  attributed-by=none  size=527 */

void __thiscall
FUN_004297a0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x4924922 < *(uint *)((int)this + 4)) {
    FUN_0042c2e0(param_5 + 4);
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] == '\0') goto LAB_004298e1;
      if (piVar4 == (int *)piVar6[2]) {
        piVar4 = (int *)piVar6[2];
        piVar6[2] = *piVar4;
        if (*(char *)(*piVar4 + 0xd) == '\0') {
          *(int **)(*piVar4 + 4) = piVar6;
        }
        piVar4[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar4;
        }
        else {
          piVar5 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar5) {
            *piVar5 = (int)piVar4;
          }
          else {
            piVar5[2] = (int)piVar4;
          }
        }
        *piVar4 = (int)piVar6;
        piVar6[1] = (int)piVar4;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)*piVar6;
      *piVar6 = piVar5[2];
      if (*(char *)(piVar5[2] + 0xd) == '\0') {
        *(int **)(piVar5[2] + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
        piVar5[2] = (int)piVar6;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          *piVar2 = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
      }
LAB_0042998a:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int *)(*(int *)this + 4) = iVar3;
          }
          else {
            piVar4 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar4[2]) {
              piVar4[2] = iVar3;
            }
            else {
              *piVar4 = iVar3;
            }
          }
          *(int **)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)piVar6[2];
        piVar6[2] = *piVar5;
        if (*(char *)(*piVar5 + 0xd) == '\0') {
          *(int **)(*piVar5 + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar2) {
            *piVar2 = (int)piVar5;
          }
          else {
            piVar2[2] = (int)piVar5;
          }
        }
        *piVar5 = (int)piVar6;
        goto LAB_0042998a;
      }
LAB_004298e1:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_004299b0 @ 004299b0  kind=gamemisc  attributed-by=none  size=515 */

void __thiscall
FUN_004299b0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  
  if (0x3fffffd < *(uint *)((int)this + 4)) {
    FUN_0042d060(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)piVar6[2]) {
          piVar4 = (int *)piVar6[2];
          piVar6[2] = *piVar4;
          if (*(char *)(*piVar4 + 0xd) == '\0') {
            *(int **)(*piVar4 + 4) = piVar6;
          }
          piVar4[1] = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int **)(*(int *)this + 4) = piVar4;
          }
          else {
            piVar5 = (int *)piVar6[1];
            if (piVar6 == (int *)*piVar5) {
              *piVar5 = (int)piVar4;
            }
            else {
              piVar5[2] = (int)piVar4;
            }
          }
          *piVar4 = (int)piVar6;
          piVar6[1] = (int)piVar4;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)*piVar6;
        *piVar6 = piVar5[2];
        if (*(char *)(piVar5[2] + 0xd) == '\0') {
          *(int **)(piVar5[2] + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar2[2]) {
            piVar2[2] = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
          else {
            *piVar2 = (int)piVar5;
            piVar5[2] = (int)piVar6;
          }
        }
        goto LAB_00429b8e;
      }
LAB_00429ae5:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    else {
      if ((char)piVar5[3] == '\0') goto LAB_00429ae5;
      if (piVar4 == (int *)*piVar6) {
        iVar3 = *piVar6;
        *piVar6 = *(int *)(iVar3 + 8);
        if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
          *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
        }
        *(int *)(iVar3 + 4) = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int *)(*(int *)this + 4) = iVar3;
        }
        else {
          piVar4 = (int *)piVar6[1];
          if (piVar6 == (int *)piVar4[2]) {
            piVar4[2] = iVar3;
          }
          else {
            *piVar4 = iVar3;
          }
        }
        *(int **)(iVar3 + 8) = piVar6;
        piVar6[1] = iVar3;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)piVar6[2];
      piVar6[2] = *piVar5;
      if (*(char *)(*piVar5 + 0xd) == '\0') {
        *(int **)(*piVar5 + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)*piVar2) {
          *piVar2 = (int)piVar5;
        }
        else {
          piVar2[2] = (int)piVar5;
        }
      }
      *piVar5 = (int)piVar6;
LAB_00429b8e:
      piVar6[1] = (int)piVar5;
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_00429bc0 @ 00429bc0  kind=gamemisc  attributed-by=none  size=626 */

void __thiscall
FUN_00429bc0(void *this,undefined4 *param_1,char param_2,undefined4 *param_3,undefined4 param_4,
            int *param_5)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054cba8;
  local_10 = ExceptionList;
  if (0x4924922 < *(uint *)((int)this + 4)) {
    local_8 = 0;
    ExceptionList = &local_10;
    cube::QuestText::~QuestText((QuestText *)(param_5 + 10));
    local_8 = 0xffffffff;
    if (7 < (uint)param_5[9]) {
      operator_delete((void *)param_5[4]);
    }
    param_5[9] = 7;
    param_5[8] = 0;
    *(undefined2 *)(param_5 + 4) = 0;
    operator_delete(param_5);
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("map/set<T> too long");
  }
  *(uint *)((int)this + 4) = *(uint *)((int)this + 4) + 1;
  param_5[1] = (int)param_3;
  if (param_3 == *(undefined4 **)this) {
    (*(undefined4 **)this)[1] = param_5;
    **(undefined4 **)this = param_5;
    *(int **)(*(int *)this + 8) = param_5;
  }
  else if (param_2 == '\0') {
    param_3[2] = param_5;
    if (param_3 == *(undefined4 **)(*(int *)this + 8)) {
      *(int **)(*(int *)this + 8) = param_5;
    }
  }
  else {
    *param_3 = param_5;
    if (param_3 == (undefined4 *)**(int **)this) {
      **(int **)this = (int)param_5;
    }
  }
  cVar1 = *(char *)(param_5[1] + 0xc);
  piVar4 = param_5;
  do {
    if (cVar1 != '\0') {
      *(undefined1 *)(*(int *)(*(int *)this + 4) + 0xc) = 1;
      *param_1 = param_5;
      return;
    }
    piVar6 = (int *)piVar4[1];
    piVar5 = *(int **)piVar6[1];
    if (piVar6 == piVar5) {
      piVar5 = (int *)((undefined4 *)piVar6[1])[2];
      if ((char)piVar5[3] == '\0') goto LAB_00429d57;
      if (piVar4 == (int *)piVar6[2]) {
        piVar4 = (int *)piVar6[2];
        piVar6[2] = *piVar4;
        if (*(char *)(*piVar4 + 0xd) == '\0') {
          *(int **)(*piVar4 + 4) = piVar6;
        }
        piVar4[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar4;
        }
        else {
          piVar5 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar5) {
            *piVar5 = (int)piVar4;
          }
          else {
            piVar5[2] = (int)piVar4;
          }
        }
        *piVar4 = (int)piVar6;
        piVar6[1] = (int)piVar4;
        piVar4 = piVar6;
      }
      *(undefined1 *)(piVar4[1] + 0xc) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar6 = *(int **)(piVar4[1] + 4);
      piVar5 = (int *)*piVar6;
      *piVar6 = piVar5[2];
      if (*(char *)(piVar5[2] + 0xd) == '\0') {
        *(int **)(piVar5[2] + 4) = piVar6;
      }
      piVar5[1] = piVar6[1];
      if (piVar6 == *(int **)(*(int *)this + 4)) {
        *(int **)(*(int *)this + 4) = piVar5;
        piVar5[2] = (int)piVar6;
      }
      else {
        piVar2 = (int *)piVar6[1];
        if (piVar6 == (int *)piVar2[2]) {
          piVar2[2] = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
        else {
          *piVar2 = (int)piVar5;
          piVar5[2] = (int)piVar6;
        }
      }
LAB_00429e00:
      piVar6[1] = (int)piVar5;
    }
    else {
      if ((char)piVar5[3] != '\0') {
        if (piVar4 == (int *)*piVar6) {
          iVar3 = *piVar6;
          *piVar6 = *(int *)(iVar3 + 8);
          if (*(char *)(*(int *)(iVar3 + 8) + 0xd) == '\0') {
            *(int **)(*(int *)(iVar3 + 8) + 4) = piVar6;
          }
          *(int *)(iVar3 + 4) = piVar6[1];
          if (piVar6 == *(int **)(*(int *)this + 4)) {
            *(int *)(*(int *)this + 4) = iVar3;
          }
          else {
            piVar4 = (int *)piVar6[1];
            if (piVar6 == (int *)piVar4[2]) {
              piVar4[2] = iVar3;
            }
            else {
              *piVar4 = iVar3;
            }
          }
          *(int **)(iVar3 + 8) = piVar6;
          piVar6[1] = iVar3;
          piVar4 = piVar6;
        }
        *(undefined1 *)(piVar4[1] + 0xc) = 1;
        *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
        piVar6 = *(int **)(piVar4[1] + 4);
        piVar5 = (int *)piVar6[2];
        piVar6[2] = *piVar5;
        if (*(char *)(*piVar5 + 0xd) == '\0') {
          *(int **)(*piVar5 + 4) = piVar6;
        }
        piVar5[1] = piVar6[1];
        if (piVar6 == *(int **)(*(int *)this + 4)) {
          *(int **)(*(int *)this + 4) = piVar5;
        }
        else {
          piVar2 = (int *)piVar6[1];
          if (piVar6 == (int *)*piVar2) {
            *piVar2 = (int)piVar5;
          }
          else {
            piVar2[2] = (int)piVar5;
          }
        }
        *piVar5 = (int)piVar6;
        goto LAB_00429e00;
      }
LAB_00429d57:
      *(undefined1 *)(piVar6 + 3) = 1;
      *(undefined1 *)(piVar5 + 3) = 1;
      *(undefined1 *)(*(int *)(piVar4[1] + 4) + 0xc) = 0;
      piVar4 = *(int **)(piVar4[1] + 4);
    }
    cVar1 = *(char *)(piVar4[1] + 0xc);
  } while( true );
}


/* FUN_0042a260 @ 0042a260  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * __thiscall
FUN_0042a260(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cc10;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a401;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a2a9;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a3a6;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a2a9;
        }
      }
      else {
LAB_0042a3a6:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a401:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_0042a970(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a401;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a2a9;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a2a9;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a401;
  }
  cVar7 = '\x01';
LAB_0042a2a9:
  FUN_004297a0(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a450 @ 0042a450  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * __thiscall
FUN_0042a450(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cc30;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a5f1;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a499;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a596;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a499;
        }
      }
      else {
LAB_0042a596:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a5f1:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_0042aae0(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a5f1;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a499;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a499;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a5f1;
  }
  cVar7 = '\x01';
LAB_0042a499:
  FUN_004299b0(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a640 @ 0042a640  kind=gamemisc  attributed-by=none  size=468 */

undefined4 * __thiscall
FUN_0042a640(void *this,undefined4 *param_1,ushort *param_2,ushort *param_3,int *param_4)

{
  ushort *puVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  undefined4 *puVar6;
  char cVar7;
  uint uStack_2c;
  undefined4 local_1c;
  int *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puVar1 = param_3;
  puStack_c = &LAB_0054cc50;
  local_10 = ExceptionList;
  uStack_2c = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_2c;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = this;
  if (*(int *)((int)this + 4) == 0) {
    puVar4 = *(ushort **)this;
    local_14 = (undefined1 *)&uStack_2c;
  }
  else {
    puVar5 = *(ushort **)this;
    puVar4 = param_2;
    if (param_2 != *(ushort **)puVar5) {
      if (param_2 == puVar5) {
        puVar4 = param_3;
        if (7 < *(uint *)(param_3 + 10)) {
          puVar4 = *(ushort **)param_3;
        }
        local_14 = (undefined1 *)&uStack_2c;
        uVar3 = FUN_00419ef0((void *)(*(int *)(puVar5 + 4) + 0x10),0,
                             *(uint *)(*(int *)(puVar5 + 4) + 0x20),puVar4,*(uint *)(param_3 + 8));
        if (-1 < (int)uVar3) goto LAB_0042a7e1;
        puVar4 = *(ushort **)(*(int *)this + 8);
        cVar7 = '\0';
        goto LAB_0042a689;
      }
      puVar5 = param_2 + 8;
      if (7 < *(uint *)(param_2 + 0x12)) {
        puVar5 = *(ushort **)puVar5;
      }
      uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
      if ((int)uVar3 < 0) {
        param_3 = param_2;
        FUN_004dad80((int *)&param_3);
        puVar5 = param_3;
        bVar2 = FUN_0041ae40(param_3 + 8,puVar1);
        if (!bVar2) goto LAB_0042a786;
        if (*(char *)(*(int *)(puVar5 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a689;
        }
      }
      else {
LAB_0042a786:
        bVar2 = FUN_0041ae40(param_2 + 8,puVar1);
        if (!bVar2) {
LAB_0042a7e1:
          local_8 = 0xffffffff;
          puVar6 = (undefined4 *)FUN_0042ac40(this,&local_1c,(undefined4 *)0x0,puVar1,param_4);
          *param_1 = *puVar6;
          ExceptionList = local_10;
          return param_1;
        }
        param_3 = param_2;
        FUN_00407a50((int *)&param_3);
        puVar4 = param_3;
        if ((param_3 != (ushort *)*local_18) &&
           (bVar2 = FUN_0041ae40(puVar1,param_3 + 8), this = local_18, !bVar2)) goto LAB_0042a7e1;
        this = local_18;
        puVar5 = param_2;
        if (*(char *)(*(int *)(param_2 + 4) + 0xd) == '\0') {
          cVar7 = '\x01';
          goto LAB_0042a689;
        }
      }
      cVar7 = '\0';
      puVar4 = puVar5;
      goto LAB_0042a689;
    }
    puVar5 = param_2 + 8;
    if (7 < *(uint *)(param_2 + 0x12)) {
      puVar5 = *(ushort **)puVar5;
    }
    local_14 = (undefined1 *)&uStack_2c;
    uVar3 = FUN_00419ef0(param_3,0,*(uint *)(param_3 + 8),puVar5,*(uint *)(param_2 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042a7e1;
  }
  cVar7 = '\x01';
LAB_0042a689:
  FUN_00429bc0(this,param_1,cVar7,(undefined4 *)puVar4,puVar1,param_4);
  ExceptionList = local_10;
  return param_1;
}


/* FUN_0042a970 @ 0042a970  kind=gamemisc  attributed-by=none  size=336 */

void __thiscall
FUN_0042a970(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_18;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054cc90;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_18 = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar2 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_18 = (int)uVar2 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar2 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_18 = -1 < (int)uVar2;
    }
    puVar3 = puVar5;
    if (local_18 == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_18 != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      local_18 = true;
      goto LAB_0042aa2e;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar2 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  piVar1 = param_4;
  if (-1 < (int)uVar2) {
    FUN_0042c2e0(param_4 + 4);
    operator_delete(piVar1);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
LAB_0042aa2e:
  puVar3 = (undefined4 *)FUN_004297a0(this,&param_2,local_18,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042aae0 @ 0042aae0  kind=gamemisc  attributed-by=none  size=324 */

void __thiscall
FUN_0042aae0(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  uint uVar1;
  ushort **ppuVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054ccb0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar1 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_1c = (int)uVar1 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar1 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_1c = -1 < (int)uVar1;
    }
    puVar3 = puVar5;
    if (local_1c == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_1c != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      ppuVar2 = (ushort **)&param_2;
      local_1c = true;
      goto LAB_0042aba1;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar1 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  if (-1 < (int)uVar1) {
    FUN_0042d060(param_4);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppuVar2 = &param_3;
LAB_0042aba1:
  puVar3 = (undefined4 *)FUN_004299b0(this,ppuVar2,local_1c,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042ac40 @ 0042ac40  kind=gamemisc  attributed-by=none  size=324 */

void __thiscall
FUN_0042ac40(void *this,undefined4 *param_1,undefined4 *param_2,ushort *param_3,int *param_4)

{
  ushort *this_00;
  uint uVar1;
  ushort **ppuVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  undefined4 *puVar5;
  bool local_1c;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  this_00 = param_3;
  puStack_c = &LAB_0054ccd0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  local_1c = true;
  puVar3 = *(undefined4 **)this;
  puVar5 = (undefined4 *)(*(undefined4 **)this)[1];
  while (*(char *)((int)puVar5 + 0xd) == '\0') {
    if ((char)param_2 == '\0') {
      puVar4 = (ushort *)(puVar5 + 4);
      if (7 < (uint)puVar5[9]) {
        puVar4 = *(ushort **)puVar4;
      }
      uVar1 = FUN_00419ef0(this_00,0,*(uint *)(this_00 + 8),puVar4,puVar5[8]);
      local_1c = (int)uVar1 < 0;
    }
    else {
      puVar4 = this_00;
      if (7 < *(uint *)(this_00 + 10)) {
        puVar4 = *(ushort **)this_00;
      }
      uVar1 = FUN_00419ef0(puVar5 + 4,0,puVar5[8],puVar4,*(uint *)(this_00 + 8));
      local_1c = -1 < (int)uVar1;
    }
    puVar3 = puVar5;
    if (local_1c == false) {
      puVar5 = (undefined4 *)puVar5[2];
    }
    else {
      puVar5 = (undefined4 *)*puVar5;
    }
  }
  param_2 = puVar3;
  if (local_1c != false) {
    if (puVar3 == (undefined4 *)**(int **)this) {
      ppuVar2 = (ushort **)&param_2;
      local_1c = true;
      goto LAB_0042ad01;
    }
    FUN_004dad80((int *)&param_2);
  }
  puVar5 = param_2;
  puVar4 = this_00;
  if (7 < *(uint *)(this_00 + 10)) {
    puVar4 = *(ushort **)this_00;
  }
  uVar1 = FUN_00419ef0(param_2 + 4,0,param_2[8],puVar4,*(uint *)(this_00 + 8));
  if (-1 < (int)uVar1) {
    FUN_0042d0c0(param_4);
    *param_1 = puVar5;
    *(undefined1 *)(param_1 + 1) = 0;
    ExceptionList = local_10;
    return;
  }
  ppuVar2 = &param_3;
LAB_0042ad01:
  puVar3 = (undefined4 *)FUN_00429bc0(this,ppuVar2,local_1c,puVar3,this_00,param_4);
  *param_1 = *puVar3;
  *(undefined1 *)(param_1 + 1) = 1;
  ExceptionList = local_10;
  return;
}


/* FUN_0042ada0 @ 0042ada0  kind=gamemisc  attributed-by=none  size=157 */

void __thiscall FUN_0042ada0(void *this,undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054ccf0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  while( true ) {
    if (param_2 == param_3) {
      ExceptionList = local_10;
      return;
    }
    iVar1 = FUN_004291a0(param_1,(undefined4 *)param_1[1],param_2 + 2);
    if (*(int *)((int)this + 4) == 0x7fffffe) break;
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    param_1[1] = iVar1;
    **(int **)(iVar1 + 4) = iVar1;
    param_2 = (undefined4 *)*param_2;
  }
                    /* WARNING: Subroutine does not return */
  std::_Xlength_error("list<T> too long");
}


/* FUN_0042ae70 @ 0042ae70  kind=gamemisc  attributed-by=none  size=207 */

void __thiscall FUN_0042ae70(void *this,undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int *piVar3;
  uint uStack_28;
  void *local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_0054cd10;
  local_10 = ExceptionList;
  uStack_28 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_28;
  ExceptionList = &local_10;
  piVar3 = *(int **)this;
  local_8 = 0;
  local_18 = this;
  for (; piVar3 = (int *)*piVar3, param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    if (piVar3 == *(int **)this) goto LAB_0042aed5;
    if (piVar3 + 2 != param_1 + 2) {
      FUN_004172f0(piVar3 + 2,param_1 + 2,0,0xffffffff);
    }
  }
LAB_0042af2e:
  FUN_0042e000(this,(int *)&local_18,piVar3,*(int **)this);
  ExceptionList = local_10;
  return;
LAB_0042aed5:
  for (; param_1 != param_2; param_1 = (undefined4 *)*param_1) {
    puVar1 = *(undefined4 **)this;
    iVar2 = FUN_004291a0(puVar1,(undefined4 *)puVar1[1],param_1 + 2);
    if (*(int *)((int)this + 4) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
      std::_Xlength_error("list<T> too long");
    }
    *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
    puVar1[1] = iVar2;
    **(int **)(iVar2 + 4) = iVar2;
  }
  goto LAB_0042af2e;
}


/* FUN_0042c820 @ 0042c820  kind=gamemisc  attributed-by=none  size=369 */

void __thiscall FUN_0042c820(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  int *local_54;
  undefined4 local_50;
  void *local_4c;
  undefined4 local_48;
  undefined1 *local_40;
  undefined2 local_3c [8];
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 local_24 [8];
  undefined1 local_1c [8];
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d0c8;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042c970;
  }
  local_54 = (int *)0x0;
  local_50 = 0;
  local_54 = (int *)FUN_0041a030();
  local_8 = 0;
  local_4c = (void *)0x0;
  local_48 = 0;
  local_4c = (void *)FUN_004f7b60((undefined4 *)0x0,(undefined4 *)0x0);
  local_8 = 1;
  local_28 = 7;
  local_2c = 0;
  local_3c[0] = 0;
  FUN_004172f0(local_3c,(int *)param_1,0,0xffffffff);
  local_40 = local_24;
  local_8._0_1_ = 2;
  FUN_0042b040(local_24,(int *)&local_54);
  local_8._0_1_ = 3;
  FUN_0042b180(local_1c,&local_4c);
  local_8 = CONCAT31(local_8._1_3_,4);
  piVar4 = FUN_00429280(this,(undefined4 *)local_3c);
  FUN_0042a260(this,&local_40,puVar1,(ushort *)(piVar4 + 4),piVar4);
  FUN_0042c2e0((undefined4 *)local_3c);
  local_8 = 0xffffffff;
  FUN_0042d520((int *)&local_4c);
  operator_delete(local_4c);
  FUN_0041a180(&local_54,&local_40,(int *)*local_54,local_54);
  operator_delete(local_54);
LAB_0042c970:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042c9a0 @ 0042c9a0  kind=gamemisc  attributed-by=none  size=299 */

void __thiscall FUN_0042c9a0(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d100;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042caaa;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  FUN_00416a90(local_44,(undefined4 *)param_1);
  FUN_00416a90(local_2c,local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = FUN_00429340(this,local_44);
  FUN_0042a450(this,&local_60,puVar1,(ushort *)(piVar4 + 4),piVar4);
  if (7 < local_18) {
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (7 < local_30) {
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
    operator_delete(local_5c[0]);
  }
LAB_0042caaa:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042cad0 @ 0042cad0  kind=gamemisc  attributed-by=none  size=316 */

void __thiscall FUN_0042cad0(void *this,ushort *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  int *piVar4;
  undefined4 local_60;
  void *local_5c [4];
  undefined4 local_4c;
  uint local_48;
  void *local_44 [4];
  undefined4 local_34;
  uint local_30;
  void *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0054d100;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  puVar1 = (ushort *)FUN_0042d3d0(this,param_1);
  if (puVar1 != *(ushort **)this) {
    puVar2 = puVar1 + 8;
    if (7 < *(uint *)(puVar1 + 0x12)) {
      puVar2 = *(ushort **)puVar2;
    }
    uVar3 = FUN_00419ef0(param_1,0,*(uint *)(param_1 + 8),puVar2,*(uint *)(puVar1 + 0x10));
    if (-1 < (int)uVar3) goto LAB_0042cbeb;
  }
  local_48 = 7;
  local_4c = 0;
  local_5c[0] = (void *)((uint)local_5c[0] & 0xffff0000);
  local_8 = 0;
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  FUN_004172f0(local_44,(int *)param_1,0,0xffffffff);
  FUN_00416a90(local_2c,local_5c);
  local_8 = CONCAT31(local_8._1_3_,1);
  piVar4 = FUN_00429340(this,local_44);
  FUN_0042a450(this,&local_60,puVar1,(ushort *)(piVar4 + 4),piVar4);
  if (7 < local_18) {
    operator_delete(local_2c[0]);
  }
  local_18 = 7;
  local_1c = 0;
  local_2c[0] = (void *)((uint)local_2c[0] & 0xffff0000);
  if (7 < local_30) {
    operator_delete(local_44[0]);
  }
  local_30 = 7;
  local_34 = 0;
  local_44[0] = (void *)((uint)local_44[0] & 0xffff0000);
  if (7 < local_48) {
    operator_delete(local_5c[0]);
  }
LAB_0042cbeb:
  ExceptionList = local_10;
  __security_check_cookie(local_14 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0042ced0 @ 0042ced0  kind=gamemisc  attributed-by=none  size=47 */

void FUN_0042ced0(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(0x38);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0042cede. Too many branches */
                    /* WARNING: Subroutine does not return */
                    /* WARNING: Treating indirect jump as call */
    std::_Xbad_alloc();
    return;
  }
  *(void **)pvVar1 = pvVar1;
  if ((undefined4 *)((int)pvVar1 + 4) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 4) = pvVar1;
  }
  if ((undefined4 *)((int)pvVar1 + 8) != (undefined4 *)0x0) {
    *(undefined4 *)((int)pvVar1 + 8) = pvVar1;
  }
  *(undefined2 *)((int)pvVar1 + 0xc) = 0x101;
  return;
}


/* FUN_0042cf40 @ 0042cf40  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_0042cf40(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x38);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_0042cf80 @ 0042cf80  kind=gamemisc  attributed-by=none  size=55 */

undefined4 * __fastcall FUN_0042cf80(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = operator_new(0x40);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  *puVar1 = *param_1;
  if (puVar1 + 1 != (undefined4 *)0x0) {
    puVar1[1] = *param_1;
  }
  if (puVar1 + 2 != (undefined4 *)0x0) {
    puVar1[2] = *param_1;
  }
  return puVar1;
}


/* FUN_0042d300 @ 0042d300  kind=gamemisc  attributed-by=none  size=197 */

void __thiscall FUN_0042d300(void *this,void *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  uint _Size;
  void *_Dst;
  void *pvVar2;
  
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x3c) = param_3;
  if ((param_2 != 0) && (((byte)param_3 & 6) != 6)) {
    if (param_2 < 0x80000000) {
      _Size = param_2 * 2;
      _Dst = operator_new(_Size);
      if (_Dst != (void *)0x0) {
        memcpy(_Dst,param_1,_Size);
        *(void **)((int)this + 0x38) = (void *)(_Size + (int)_Dst);
        if ((*(byte *)((int)this + 0x3c) & 4) == 0) {
          **(undefined4 **)((int)this + 0xc) = _Dst;
          **(undefined4 **)((int)this + 0x1c) = _Dst;
          **(int **)((int)this + 0x2c) = (int)_Size >> 1;
        }
        uVar1 = *(uint *)((int)this + 0x3c);
        if ((uVar1 & 2) == 0) {
          **(undefined4 **)((int)this + 0x10) = _Dst;
          pvVar2 = _Dst;
          if ((uVar1 & 0x10) != 0) {
            pvVar2 = (void *)(_Size + (int)_Dst);
          }
          **(undefined4 **)((int)this + 0x20) = pvVar2;
          **(int **)((int)this + 0x30) = (int)((_Size - (int)pvVar2) + (int)_Dst) >> 1;
          if (**(int **)((int)this + 0x1c) == 0) {
            **(undefined4 **)((int)this + 0xc) = _Dst;
            **(undefined4 **)((int)this + 0x1c) = 0;
            **(int **)((int)this + 0x2c) = (int)_Dst >> 1;
          }
        }
        *(uint *)((int)this + 0x3c) = *(uint *)((int)this + 0x3c) | 1;
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    std::_Xbad_alloc();
  }
  return;
}


/* FUN_0042d420 @ 0042d420  kind=gamemisc  attributed-by=none  size=31 */

int __cdecl FUN_0042d420(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(*(int *)(param_1 + 8) + 0xd);
  iVar2 = *(int *)(param_1 + 8);
  while (iVar3 = iVar2, cVar1 == '\0') {
    iVar2 = *(int *)(iVar3 + 8);
    cVar1 = *(char *)(iVar2 + 0xd);
    param_1 = iVar3;
  }
  return param_1;
}


/* FUN_0042d440 @ 0042d440  kind=gamemisc  attributed-by=none  size=30 */

int * __cdecl FUN_0042d440(int *param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  
  cVar1 = *(char *)(*param_1 + 0xd);
  piVar2 = (int *)*param_1;
  while (piVar3 = piVar2, cVar1 == '\0') {
    piVar2 = (int *)*piVar3;
    cVar1 = *(char *)((int)piVar2 + 0xd);
    param_1 = piVar3;
  }
  return param_1;
}


/* FUN_0042d460 @ 0042d460  kind=gamemisc  attributed-by=none  size=88 */

void __thiscall FUN_0042d460(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *param_1;
  *param_1 = *(int *)(iVar1 + 8);
  if (*(char *)(*(int *)(iVar1 + 8) + 0xd) == '\0') {
    *(int **)(*(int *)(iVar1 + 8) + 4) = param_1;
  }
  *(int *)(iVar1 + 4) = param_1[1];
  if (param_1 == *(int **)(*(int *)this + 4)) {
    *(int *)(*(int *)this + 4) = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  piVar2 = (int *)param_1[1];
  if (param_1 == (int *)piVar2[2]) {
    piVar2[2] = iVar1;
    *(int **)(iVar1 + 8) = param_1;
    param_1[1] = iVar1;
    return;
  }
  *piVar2 = iVar1;
  *(int **)(iVar1 + 8) = param_1;
  param_1[1] = iVar1;
  return;
}


/* FUN_0042e220 @ 0042e220  kind=gamemisc  attributed-by=none  size=54 */

undefined4 __thiscall FUN_0042e220(void *this,int param_1,int param_2)

{
  if ((((-1 < param_1) && (-1 < param_2)) && (param_1 < 0x400)) && (param_2 < 0x400)) {
    return *(undefined4 *)((int)this + (param_1 * 0x400 + param_2) * 4 + 0x4000bc);
  }
  return 0;
}


/* FUN_0042e880 @ 0042e880  kind=gamemisc  attributed-by=none  size=121 */

int __thiscall FUN_0042e880(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x10000)) &&
     ((int)param_2 < 0x10000)) {
    iVar1 = FUN_00406210(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 + ((int)param_2 >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      uVar2 = param_1 & 0x8000003f;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xffffffc0) + 1;
      }
      uVar3 = param_2 & 0x8000003f;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffffc0) + 1;
      }
      return iVar1 + 0x18 + (uVar2 * 0x40 + uVar3) * 0x10;
    }
  }
  return 0;
}


/* FUN_0042ede0 @ 0042ede0  kind=gamemisc  attributed-by=none  size=44 */

int * __thiscall FUN_0042ede0(void *this,int *param_1,int param_2)

{
  *param_1 = *(int *)this / param_2;
  param_1[1] = *(int *)((int)this + 4) / param_2;
  param_1[2] = *(int *)((int)this + 8) / param_2;
  return param_1;
}


/* FUN_0042feb0 @ 0042feb0  kind=gamemisc  attributed-by=none  size=143 */

void __thiscall FUN_0042feb0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041bb80(this,1);
    }
    puVar1 = (undefined4 *)(*(int *)this + (((int)param_1 - (int)puVar2) / 0xc) * 0xc);
    puVar2 = *(undefined4 **)((int)this + 4);
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar1;
      puVar2[1] = puVar1[1];
      puVar2[2] = puVar1[2];
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_0041bb80(this,1);
    }
    puVar1 = *(undefined4 **)((int)this + 4);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = *param_1;
      puVar1[1] = param_1[1];
      puVar1[2] = param_1[2];
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0xc;
  return;
}


/* FUN_0045f160 @ 0045f160  kind=gamemisc  attributed-by=none  size=97 */

float10 __cdecl FUN_0045f160(int param_1)

{
  ushort uVar1;
  double local_c;
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 8) != 0) {
    return (float10)*(double *)(param_1 + 8);
  }
  if ((uVar1 & 4) != 0) {
    return (float10)*(longlong *)(param_1 + 0x10);
  }
  local_c = 0.0;
  if ((uVar1 & 0x12) != 0) {
    local_c = 0.0;
    FUN_0048cc90(*(byte **)(param_1 + 4),&local_c,*(uint *)(param_1 + 0x18),
                 *(char *)(param_1 + 0x1f));
  }
  return (float10)local_c;
}


/* FUN_0045f1d0 @ 0045f1d0  kind=gamemisc  attributed-by=none  size=122 */

undefined4 __cdecl FUN_0045f1d0(int param_1)

{
  ushort uVar1;
  ulonglong uVar2;
  uint local_14 [4];
  
  uVar1 = *(ushort *)(param_1 + 0x1c);
  if ((uVar1 & 4) != 0) {
    return *(undefined4 *)(param_1 + 0x10);
  }
  if ((uVar1 & 8) != 0) {
    uVar2 = FUN_00477080(*(double *)(param_1 + 8));
    return (int)uVar2;
  }
  if ((uVar1 & 0x12) != 0) {
    local_14[0] = 0;
    local_14[1] = 0;
    FUN_0048d300(*(byte **)(param_1 + 4),local_14,*(int *)(param_1 + 0x18),*(char *)(param_1 + 0x1f)
                );
    return local_14[0];
  }
  return 0;
}


/* FUN_0045fad0 @ 0045fad0  kind=gamemisc  attributed-by=none  size=91 */

void __cdecl FUN_0045fad0(int param_1)

{
  int *piVar1;
  
  if ((*(byte *)(param_1 + 0x24) & 0x40) != 0) {
    piVar1 = *(int **)(param_1 + 0x18);
    piVar1[1] = *(int *)(*piVar1 + 0xa4);
    *(int **)(*piVar1 + 0xa4) = piVar1;
  }
  if ((*(byte *)(param_1 + 0x24) & 0x20) != 0) {
    FUN_004a6e20(*(undefined4 **)(param_1 + 0x18));
  }
  *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) & 0xbe01 | 1;
  *(undefined1 *)(param_1 + 0x26) = 5;
  *(undefined4 *)(param_1 + 0x38) = 7;
  *(undefined1 *)(*(int *)(param_1 + 8) + 0x38) = 1;
  return;
}


/* FUN_0045ff40 @ 0045ff40  kind=gamemisc  attributed-by=none  size=96 */

void __cdecl FUN_0045ff40(int param_1,int param_2)

{
  if ((*(ushort *)(param_1 + 0x24) & 0x2460) != 0) {
    FUN_004b7720((int *)(param_1 + 8));
  }
  FUN_00494b00(*(int *)(param_1 + 8),*(undefined4 **)(param_1 + 0x2c));
  if (param_2 < 0) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x1044010;
  *(undefined4 *)(param_1 + 0x20) = 0;
  return;
}


/* FUN_00461320 @ 00461320  kind=gamemisc  attributed-by=none  size=212 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 __cdecl FUN_00461320(uint param_1,int param_2)

{
  undefined8 uVar1;
  int iVar2;
  
  iVar2 = FUN_004bc920();
  if (iVar2 != 0) {
    return 0xffffffffffffffff;
  }
  if (DAT_00583f40 != 0) {
    (*DAT_00582b18)(DAT_00583f40);
  }
  uVar1 = _DAT_00583f48;
  if (DAT_00583f40 != 0) {
    (*DAT_00582b20)(DAT_00583f40);
  }
  if (0 < param_2) {
LAB_00461387:
    FUN_004a0990(FUN_0046b250,0,param_1,param_2);
    return uVar1;
  }
  if (-1 < param_2) {
    if ((-1 < param_2) && ((0 < param_2 || (param_1 != 0)))) goto LAB_00461387;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b18)(DAT_00583f40);
    }
    DAT_00583f50 = 0;
    DAT_00583f54 = 0;
    _DAT_00583f48 = 0;
    DAT_00583f64 = 0;
    if (DAT_00583f40 != 0) {
      (*DAT_00582b20)(DAT_00583f40);
    }
  }
  return uVar1;
}


/* FUN_00461bb0 @ 00461bb0  kind=gamemisc  attributed-by=none  size=283 */

void __cdecl FUN_00461bb0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00475680((uint *)local_9c);
    FUN_004752f0(local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%04d-%02d-%02d %02d:%02d:%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00461d80 @ 00461d80  kind=gamemisc  attributed-by=none  size=251 */

void __cdecl FUN_00461d80(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_004752f0(local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%02d:%02d:%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00462070 @ 00462070  kind=gamemisc  attributed-by=none  size=216 */

undefined4 __cdecl FUN_00462070(undefined8 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  puVar2 = *(undefined4 **)((int)param_1 + 4);
  while (puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (DAT_00582ac8 == 0) {
      (*DAT_00582aec)(puVar2);
      puVar2 = puVar1;
    }
    else {
      if (DAT_00583f40 != 0) {
        (*DAT_00582b18)(DAT_00583f40);
      }
      iVar3 = (*DAT_00582af0._4_4_)(puVar2);
      DAT_00583e18 = DAT_00583e18 - iVar3;
      if (DAT_00583e40 < DAT_00583e18) {
        DAT_00583e40 = DAT_00583e18;
      }
      DAT_00583e3c = DAT_00583e3c + -1;
      if (DAT_00583e64 < DAT_00583e3c) {
        DAT_00583e64 = DAT_00583e3c;
      }
      (*DAT_00582aec)(puVar2);
      puVar2 = puVar1;
      if (DAT_00583f40 != 0) {
        (*DAT_00582b20)(DAT_00583f40);
      }
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined **)param_1 = &DAT_00569a48;
  return 0;
}


/* FUN_00462150 @ 00462150  kind=gamemisc  attributed-by=none  size=254 */

void __cdecl FUN_00462150(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  ulonglong local_9c [6];
  char local_6c [100];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar1 = FUN_0047eaa0(param_1,param_2,param_3,local_9c);
  if (iVar1 == 0) {
    FUN_00475680((uint *)local_9c);
    FUN_00466a80(100,local_6c,(byte *)"%04d-%02d-%02d");
    if (*(int *)(param_1 + 8) == 0) {
      iVar1 = 1000000000;
    }
    else {
      iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x50);
    }
    iVar2 = 0;
    if (-1 < iVar1) {
      do {
        if (local_6c[iVar2] == '\0') break;
        iVar2 = iVar2 + 1;
      } while (iVar2 <= iVar1);
    }
    if (iVar1 < iVar2) {
      *(undefined4 *)(param_1 + 0x38) = 0x12;
      FUN_004b79e0((int *)(param_1 + 8),"string or blob too big",0xffffffff,'\x01',(undefined *)0x0)
      ;
    }
    else {
      iVar1 = FUN_004b7260((int *)(param_1 + 8),iVar2 + 1,0);
      if (iVar1 == 0) {
        memcpy(*(void **)(param_1 + 0xc),local_6c,iVar2 + 1);
        *(int *)(param_1 + 0x20) = iVar2;
        *(undefined4 *)(param_1 + 0x24) = 0x1030202;
        __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
        return;
      }
    }
  }
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_00464130 @ 00464130  kind=gamemisc  attributed-by=none  size=168 */

uint __cdecl FUN_00464130(int param_1,byte *param_2,int param_3)

{
  byte bVar1;
  uint uVar2;
  short *psVar3;
  uint uVar4;
  byte *pbVar5;
  size_t sVar6;
  
  sVar6 = 0;
  if (param_2 != (byte *)0x0) {
    bVar1 = *param_2;
    pbVar5 = param_2;
    while (bVar1 != 0) {
      pbVar5 = pbVar5 + 1;
      bVar1 = *pbVar5;
    }
    sVar6 = (int)pbVar5 - (int)param_2 & 0x3fffffff;
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  psVar3 = FUN_004995c0(param_1,param_2,sVar6,param_3,1,'\0');
  if (psVar3 == (short *)0x0) {
    uVar4 = FUN_00493f20(param_1,param_2,param_3,1,0,0x49f6a0,0,0,(int *)0x0);
  }
  else {
    uVar4 = 0;
  }
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar4 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar4 = 7;
  }
  uVar2 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2 & uVar4;
}


/* FUN_00465070 @ 00465070  kind=gamemisc  attributed-by=none  size=110 */

undefined4 __cdecl FUN_00465070(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(param_1 + 8));
  while (iVar1 == 0) {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) goto LAB_004650b9;
    (*(code *)PTR_Sleep_005837e8)(100);
    iVar1 = (*(code *)PTR_CloseHandle_00583590)(*(undefined4 *)(param_1 + 8));
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if (iVar1 != 0) {
    return 0;
  }
LAB_004650b9:
  uVar2 = (*(code *)PTR_GetLastError_005836a4)("winClose",*(undefined4 *)(param_1 + 0x1c),0x7dc3);
  uVar2 = FUN_004c23f0(0x100a,uVar2);
  return uVar2;
}


/* FUN_00465c90 @ 00465c90  kind=gamemisc  attributed-by=none  size=904 */

bool __cdecl FUN_00465c90(byte *param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte bVar5;
  char *pcVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte local_5;
  
  bVar1 = *param_1;
  local_5 = 0;
  bVar5 = 0;
  if (bVar1 == 0) {
LAB_00465d1d:
    return bVar5 == 1;
  }
LAB_00465ca7:
  iVar3 = (int)(char)bVar1;
  switch(iVar3) {
  case 9:
  case 10:
  case 0xc:
  case 0xd:
  case 0x20:
    goto switchD_00465cbd_caseD_9;
  default:
    if (((&DAT_00569720)[bVar1] & 0x46) != 0) {
      iVar2 = 1;
      bVar1 = (&DAT_00569720)[param_1[1]];
      while ((bVar1 & 0x46) != 0) {
        iVar4 = iVar2 + 1;
        iVar2 = iVar2 + 1;
        bVar1 = (&DAT_00569720)[param_1[iVar4]];
      }
      switch(iVar3) {
      case 0x43:
      case 99:
        if (iVar2 == 6) {
          pcVar6 = "create";
          iVar3 = 6;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
            goto LAB_00465e32;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465e32:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
            iVar3 = 4;
            param_1 = param_1 + 5;
            goto LAB_00465d5c;
          }
        }
        break;
      case 0x45:
      case 0x65:
        if (iVar2 == 3) {
          pbVar7 = &DAT_00571364;
          iVar3 = 3;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7]))
            goto LAB_00465f82;
            pbVar8 = pbVar8 + 1;
            pbVar7 = pbVar7 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465f82:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[*pbVar7])) {
            iVar3 = 7;
            param_1 = param_1 + 2;
            goto LAB_00465d5c;
          }
        }
        else if (iVar2 == 7) {
          pcVar6 = "explain";
          iVar3 = 7;
          pbVar8 = param_1;
          do {
            iVar4 = iVar3;
            iVar3 = iVar4 + -1;
            if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
            goto LAB_00465fe2;
            pbVar8 = pbVar8 + 1;
            pcVar6 = pcVar6 + 1;
          } while (0 < iVar3);
          iVar3 = iVar4 + -2;
LAB_00465fe2:
          if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
            iVar3 = 3;
            param_1 = param_1 + 6;
            goto LAB_00465d5c;
          }
        }
        break;
      case 0x54:
      case 0x74:
        if (iVar2 != 7) {
          if (iVar2 == 4) {
            pbVar7 = &DAT_00571350;
            iVar3 = 4;
            pbVar8 = param_1;
            do {
              iVar4 = iVar3;
              iVar3 = iVar4 + -1;
              if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7]))
              goto LAB_00465ef2;
              pbVar8 = pbVar8 + 1;
              pbVar7 = pbVar7 + 1;
            } while (0 < iVar3);
            iVar3 = iVar4 + -2;
LAB_00465ef2:
            if ((-1 < iVar3) && ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[*pbVar7])) break;
            iVar3 = 5;
            param_1 = param_1 + 3;
          }
          else {
            if ((iVar2 != 9) || (iVar3 = FUN_00468380(param_1,(byte *)"temporary",9), iVar3 != 0))
            break;
            iVar3 = 5;
            param_1 = param_1 + 8;
          }
          goto LAB_00465d5c;
        }
        pcVar6 = "trigger";
        iVar3 = 7;
        pbVar8 = param_1;
        do {
          iVar4 = iVar3;
          iVar3 = iVar4 + -1;
          if ((*pbVar8 == 0) || ((&DAT_00569620)[*pbVar8] != (&DAT_00569620)[(byte)*pcVar6]))
          goto LAB_00465e92;
          pbVar8 = pbVar8 + 1;
          pcVar6 = pcVar6 + 1;
        } while (0 < iVar3);
        iVar3 = iVar4 + -2;
LAB_00465e92:
        if ((iVar3 < 0) || ((&DAT_00569620)[*pbVar8] == (&DAT_00569620)[(byte)*pcVar6])) {
          iVar3 = 6;
          param_1 = param_1 + 6;
          goto LAB_00465d5c;
        }
      }
      iVar3 = 2;
      param_1 = param_1 + iVar2 + -1;
      break;
    }
    goto LAB_00465d5a;
  case 0x22:
  case 0x27:
  case 0x60:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, (char)bVar1 != iVar3) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
    goto LAB_00465d55;
  case 0x2d:
    if (param_1[1] != 0x2d) goto LAB_00465d5a;
    while (bVar5 = local_5, bVar1 != 10) {
      bVar1 = param_1[1];
      param_1 = param_1 + 1;
      if (bVar1 == 0) goto LAB_00465d1d;
    }
    if (*param_1 == 0) goto LAB_00465d1d;
    iVar3 = 1;
    break;
  case 0x2f:
    if (param_1[1] != 0x2a) goto LAB_00465d5a;
    bVar1 = param_1[2];
    pbVar8 = param_1 + 2;
    while( true ) {
      if (bVar1 == 0) {
        return false;
      }
      if ((bVar1 == 0x2a) && (pbVar8[1] == 0x2f)) break;
      bVar1 = pbVar8[1];
      pbVar8 = pbVar8 + 1;
    }
    if (*pbVar8 == 0) {
      return false;
    }
    param_1 = pbVar8 + 1;
    goto switchD_00465cbd_caseD_9;
  case 0x3b:
    iVar3 = 0;
    break;
  case 0x5b:
    bVar1 = param_1[1];
    pbVar8 = param_1;
    if (bVar1 == 0) {
      return false;
    }
    while (param_1 = pbVar8 + 1, bVar1 != 0x5d) {
      bVar1 = pbVar8[2];
      pbVar8 = param_1;
      if (bVar1 == 0) {
        return false;
      }
    }
LAB_00465d55:
    if (*param_1 == 0) {
      return false;
    }
LAB_00465d5a:
    iVar3 = 2;
  }
LAB_00465d5c:
  param_1 = param_1 + 1;
  local_5 = (&UNK_0056a5d8)[(uint)local_5 * 8 + iVar3];
  bVar1 = *param_1;
  if (bVar1 == 0) {
    return local_5 == 1;
  }
  goto LAB_00465ca7;
switchD_00465cbd_caseD_9:
  iVar3 = 1;
  goto LAB_00465d5c;
}


/* FUN_00466390 @ 00466390  kind=gamemisc  attributed-by=none  size=169 */

undefined4 __cdecl FUN_00466390(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((int)uVar1 < 1) {
    lVar6 = CONCAT44(param_3,param_2);
  }
  else {
    uVar4 = (int)uVar1 >> 0x1f;
    uVar5 = __alldiv((uVar1 + param_2) - 1,
                     (uVar4 + param_3 + (uint)CARRY4(uVar1,param_2)) - (uint)(uVar1 + param_2 == 0),
                     uVar1,uVar4);
    lVar6 = __allmul((uint)uVar5,(int)((ulonglong)uVar5 >> 0x20),uVar1,uVar4);
  }
  iVar2 = FUN_0048a010(param_1,(int)lVar6,(uint)((ulonglong)lVar6 >> 0x20));
  if (iVar2 != 0) {
    uVar3 = FUN_004c23f0(0x60a,*(undefined4 *)(param_1 + 0x14));
    return uVar3;
  }
  iVar2 = (*(code *)PTR_SetEndOfFile_005837d0)();
  if (iVar2 == 0) {
    uVar3 = (*(code *)PTR_GetLastError_005836a4)();
    *(undefined4 *)(param_1 + 0x14) = uVar3;
    uVar3 = FUN_004c23f0(0x60a,uVar3);
    return uVar3;
  }
  return 0;
}


/* FUN_004665f0 @ 004665f0  kind=gamemisc  attributed-by=none  size=217 */

void __cdecl FUN_004665f0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + -4);
    iVar4 = 1;
    iVar3 = DAT_00583f40;
    if (1 < iVar1) {
      do {
        iVar2 = *(int *)(param_1 + -4 + iVar4 * 4);
        if (iVar2 != 0) {
          if (DAT_00582ac8 == 0) {
            (*DAT_00582aec)(iVar2);
            iVar3 = DAT_00583f40;
          }
          else {
            if (iVar3 != 0) {
              (*DAT_00582b18)(iVar3);
            }
            iVar3 = (*DAT_00582af0._4_4_)(iVar2);
            DAT_00583e18 = DAT_00583e18 - iVar3;
            if (DAT_00583e40 < DAT_00583e18) {
              DAT_00583e40 = DAT_00583e18;
            }
            DAT_00583e3c = DAT_00583e3c + -1;
            if (DAT_00583e64 < DAT_00583e3c) {
              DAT_00583e64 = DAT_00583e3c;
            }
            (*DAT_00582aec)(iVar2);
            iVar3 = DAT_00583f40;
            if (DAT_00583f40 != 0) {
              (*DAT_00582b20)(DAT_00583f40);
              iVar3 = DAT_00583f40;
            }
          }
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
    FUN_00466dd0(param_1 + -4);
  }
  return;
}


/* FUN_00466f30 @ 00466f30  kind=gamemisc  attributed-by=none  size=101 */

undefined4 __cdecl FUN_00466f30(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int local_8;
  
  iVar1 = (*(code *)PTR_GetFileSize_00583680)(*(undefined4 *)(param_1 + 8),&local_8);
  *param_2 = iVar1;
  param_2[1] = local_8;
  if (iVar1 == -1) {
    iVar1 = (*(code *)PTR_GetLastError_005836a4)();
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x14) = iVar1;
      uVar2 = FUN_004c23f0(0x70a,iVar1);
      return uVar2;
    }
  }
  return 0;
}


/* FUN_00468750 @ 00468750  kind=gamemisc  attributed-by=none  size=145 */

uint __cdecl FUN_00468750(int param_1,byte *param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 10;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if ((param_2 != (byte *)0x0) && (*param_2 != 0)) {
    iVar1 = FUN_00499540(param_1,param_2);
    if (iVar1 < 0) {
      uVar2 = 1;
      FUN_004961f0(param_1,1,(byte *)"unknown database: %s");
      goto LAB_004687bd;
    }
  }
  uVar2 = FUN_00492280(param_1,iVar1,0,(undefined4 *)0x0,(undefined4 *)0x0);
  FUN_004961f0(param_1,uVar2,(byte *)0x0);
LAB_004687bd:
  uVar2 = FUN_0048ca70(param_1,uVar2);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar2;
}


/* FUN_00469290 @ 00469290  kind=gamemisc  attributed-by=none  size=81 */

int __cdecl FUN_00469290(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7860((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3,param_4);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_00469710 @ 00469710  kind=gamemisc  attributed-by=none  size=78 */

int __cdecl FUN_00469710(int *param_1,int param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_004bfc30(param_1,param_2);
  if (iVar1 == 0) {
    FUN_004b7be0((int *)(param_1[0x11] + param_2 * 0x28 + -0x28),param_3);
    if (*(int *)(*param_1 + 0xc) != 0) {
      (*DAT_00582b20)(*(int *)(*param_1 + 0xc));
    }
  }
  return iVar1;
}


/* FUN_0046a100 @ 0046a100  kind=gamemisc  attributed-by=none  size=955 */

void __cdecl
FUN_0046a100(undefined4 param_1,char *param_2,undefined8 *param_3,uint param_4,int *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  char *pcVar8;
  int iVar9;
  int local_140;
  int local_11c;
  char local_110 [264];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar2 = param_4 & 2;
  iVar9 = 0;
  *(undefined4 *)(param_3 + 1) = 0xffffffff;
  pcVar8 = param_2;
  if (param_2 == (char *)0x0) {
    iVar3 = FUN_0047db10(0x106,local_110);
    if (iVar3 != 0) goto LAB_0046a4ac;
    pcVar8 = local_110;
  }
  iVar3 = FUN_00476080(pcVar8);
  if (iVar3 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  iVar4 = FUN_004c2230(iVar3);
  if (iVar4 != 0) {
    FUN_00466dd0(iVar3);
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  uVar5 = 0x80000000;
  if (uVar2 != 0) {
    uVar5 = 0xc0000000;
  }
  if ((param_4 & 0x10) == 0) {
    cVar1 = ((param_4 & 4) != 0) + '\x03';
  }
  else {
    cVar1 = '\x01';
  }
  uVar6 = 0x80;
  if ((param_4 & 8) != 0) {
    uVar6 = 0x4000102;
  }
  iVar4 = FUN_0047f030();
  if (iVar4 == 0) {
    while (((local_11c = (*(code *)PTR_CreateFileA_0058359c)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_005836a4)(), iVar9 < DAT_00582bbc)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar9 = iVar9 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar9 * DAT_00582bc0);
    }
  }
  else {
    while (((local_11c = (*(code *)PTR_CreateFileW_005835a8)(iVar3,uVar5,3,0,cVar1,uVar6,0),
            iVar4 = local_140, local_11c == -1 &&
            (iVar4 = (*(code *)PTR_GetLastError_005836a4)(), iVar9 < DAT_00582bbc)) &&
           ((iVar4 == 5 || ((iVar4 == 0x21 || (iVar4 == 0x20))))))) {
      iVar9 = iVar9 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar9 * DAT_00582bc0);
    }
  }
  if (iVar9 != 0) {
    FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
  }
  if (local_11c == -1) {
    *(int *)((int)param_3 + 0x14) = iVar4;
    FUN_004c23f0(0xe,iVar4);
    FUN_00466dd0(iVar3);
    if ((uVar2 != 0) && ((param_4 & 0x10) == 0)) {
      FUN_0046a100(param_1,param_2,param_3,param_4 & 0xfffffff9 | 1,param_5);
      __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
      return;
    }
    FUN_004683f0(0xe,"cannot open file at line %d of [%.10s]");
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (param_5 != (int *)0x0) {
    *param_5 = (uVar2 != 0) + 1;
  }
  *param_3 = 0;
  param_3[1] = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  *(undefined4 *)(param_3 + 4) = 0;
  *(undefined4 *)((int)param_3 + 4) = param_1;
  *(undefined **)param_3 = &DAT_005695c0;
  *(int *)(param_3 + 1) = local_11c;
  *(undefined4 *)((int)param_3 + 0x14) = 0;
  *(undefined4 *)(param_3 + 3) = 0;
  *(char **)((int)param_3 + 0x1c) = param_2;
  pbVar7 = FUN_004bccb0(param_2,&DAT_0056df6c);
  if ((pbVar7 == (byte *)0x0) || (uVar2 = FUN_0047da70(pbVar7,1,1), (char)uVar2 != '\0')) {
    *(byte *)(param_3 + 2) = *(byte *)(param_3 + 2) | 0x10;
  }
  FUN_00466dd0(iVar3);
LAB_0046a4ac:
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046a520 @ 0046a520  kind=gamemisc  attributed-by=none  size=473 */

void __cdecl FUN_0046a520(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int local_a0;
  undefined4 local_9c [4];
  int local_8c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar4 = 0;
  iVar1 = FUN_00476080(param_2);
  if (iVar1 == 0) {
    __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
    return;
  }
  if (DAT_00583f38 == 0) {
    local_9c[0] = 0x94;
    (*(code *)PTR_GetVersionExA_00583704)(local_9c);
    DAT_00583f38 = (local_8c == 2) + 1;
  }
  if (DAT_00583f38 == 2) {
    uVar2 = (*(code *)PTR_GetFileAttributesW_00583668)();
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_0046a6d1;
      iVar3 = (*(code *)PTR_DeleteFileW_005835e4)(iVar1);
      if (iVar3 != 0) goto LAB_0046a619;
      iVar3 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_0046a6d1;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar4 * DAT_00582bc0);
      uVar2 = (*(code *)PTR_GetFileAttributesW_00583668)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
  }
  else {
    uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
    while (uVar2 != 0xffffffff) {
      iVar3 = local_a0;
      if ((uVar2 & 0x10) != 0) goto LAB_0046a6d1;
      iVar3 = (*(code *)PTR_DeleteFileA_005835d8)(iVar1);
      if (iVar3 != 0) goto LAB_0046a619;
      iVar3 = (*(code *)PTR_GetLastError_005836a4)();
      if ((DAT_00582bbc <= iVar4) || (((iVar3 != 5 && (iVar3 != 0x21)) && (iVar3 != 0x20))))
      goto LAB_0046a6d1;
      iVar4 = iVar4 + 1;
      (*(code *)PTR_Sleep_005837e8)(iVar4 * DAT_00582bc0);
      uVar2 = (*(code *)PTR_GetFileAttributesA_0058365c)(iVar1);
    }
    iVar3 = (*(code *)PTR_GetLastError_005836a4)();
  }
  if ((iVar3 == 2) || (iVar3 == 3)) {
LAB_0046a619:
    if (iVar4 != 0) {
      FUN_004683f0(10,"delayed %dms for lock/sharing conflict");
    }
  }
  else {
LAB_0046a6d1:
    FUN_004c23f0(0xa0a,iVar3);
  }
  FUN_00466dd0(iVar1);
  __security_check_cookie(local_8 ^ (uint)&stack0xfffffffc);
  return;
}


/* FUN_0046b0e0 @ 0046b0e0  kind=gamemisc  attributed-by=none  size=218 */

uint __cdecl
FUN_0046b0e0(int param_1,byte *param_2,int param_3,uint param_4,int param_5,int param_6,int param_7,
            int param_8,undefined *param_9)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)0x0;
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b18)(*(int *)(param_1 + 0xc));
  }
  if (param_9 != (undefined *)0x0) {
    piVar3 = FUN_00494b90(param_1,0xc);
    if (piVar3 == (int *)0x0) {
      (*(code *)param_9)(param_5);
      uVar2 = 1;
      goto LAB_0046b17a;
    }
    piVar3[0] = 0;
    piVar3[1] = 0;
    piVar3[2] = 0;
    piVar3[1] = (int)param_9;
    piVar3[2] = param_5;
  }
  uVar2 = FUN_00493f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,piVar3);
  if ((piVar3 != (int *)0x0) && (*piVar3 == 0)) {
    (*(code *)param_9)(param_5);
    FUN_00494b00(param_1,piVar3);
  }
LAB_0046b17a:
  if ((*(char *)(param_1 + 0x38) != '\0') || (uVar2 == 0xc0a)) {
    FUN_004961f0(param_1,7,(byte *)0x0);
    *(undefined1 *)(param_1 + 0x38) = 0;
    uVar2 = 7;
  }
  uVar1 = *(uint *)(param_1 + 0x30);
  if (*(int *)(param_1 + 0xc) != 0) {
    (*DAT_00582b20)(*(int *)(param_1 + 0xc));
  }
  return uVar1 & uVar2;
}


/* FUN_0046b260 @ 0046b260  kind=gamemisc  attributed-by=none  size=73 */

int __cdecl FUN_0046b260(int *param_1)

{
  int iVar1;
  
  if ((*(byte *)(param_1 + 7) & 0x12) == 0) {
    iVar1 = FUN_004ae680(param_1,1);
    return iVar1;
  }
  FUN_004b6fa0(param_1);
  *(ushort *)(param_1 + 7) = *(ushort *)(param_1 + 7) & 0xfffd | 0x10;
  if (param_1[6] != 0) {
    return param_1[1];
  }
  return 0;
}


