# Adjudication worksheet -- 113 label conflicts

Ordered smallest first: small bodies are decisive.
**A** = `cw_callgraph.py`, **B** = `CW_CONFIDENCE_XREF.md`.

---

## 1. `0x004496a0`  (0 bytes, 0 callers, 0 callees)

- **A** `cub_decoder` (game)
- **B** `decode` (game)

```c

```

---

## 2. `0x004013d0`  (13 bytes, 20 callers, 0 callees)

- **A** `chunk_origin_lookup` (game)
- **B** `getElemPtr4` (game)

```c
int __thiscall FUN_004013d0(void *this,int param_1)

{
  return (int)(void *)((int)this + param_1 * 4);
}
```

---

## 3. `0x00402990`  (26 bytes, 14 callers, 0 callees)

- **A** `size3_write` (game)
- **B** `vec3_store` (lib)

```c
undefined4 * __thiscall
FUN_00402990(void *this,undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  *(undefined4 *)this = param_1;
  *(undefined4 *)((int)this + 4) = param_2;
  *(undefined4 *)((int)this + 8) = param_3;
  return this;
}
```

---

## 4. `0x0054a910`  (28 bytes, 1 callers, 0 callees)

- **A** `ftol_helper` (game)
- **B** `lib_fn_54a910` (lib)

```c
ulonglong __fastcall FUN_0054a910(undefined4 param_1,undefined4 param_2)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  uint uStack_20;
  float fStack_1c;
  
  if (DAT_00584640 == 0) {
    uVar1 = (ulonglong)ROUND(in_ST0);
    uStack_20 = (uint)uVar1;
    fStack_1c = (float)(uVar1 >> 0x20);
    fVar3 = (float)in_ST0;
    if ((uStack_20 != 0) || (fVar3 = fStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
      if ((int)fVar3 < 0) {
        uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
      }
      else {
        uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
        uVar1 = CONCAT44((int)fStack_1c - (uint)(uStack_20 < uVar2),uStack_20 - uVar2);
      }
    }
    return uVar1;
  }
  return CONCAT44(param_2,(int)in_ST0);
}
```

---

## 5. `0x004013f0`  (38 bytes, 5 callers, 0 callees)

- **A** `model_db_lookup` (game)
- **B** `std_vector_int_at` (lib)

```c
undefined4 __thiscall FUN_004013f0(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < *(int *)((int)this + 8) - *(int *)((int)this + 4) >> 2)) {
    return *(undefined4 *)(*(int *)((int)this + 4) + param_1 * 4);
  }
  return 0;
}
```

---

## 6. `0x0042f440`  (40 bytes, 117 callers, 1 callees)

- **A** `temp_list_free` (game)
- **B** `std_vector_free` (lib)

```c
void __fastcall FUN_0042f440(undefined4 *param_1)

{
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}
```

---

## 7. `0x00411090`  (52 bytes, 5 callers, 0 callees)

- **A** `monster_level_formula` (game)
- **B** `formula_inverse` (lib)

```c
float10 __cdecl FUN_00411090(float param_1)

{
  return (float10)((1.0 / (1.0 - param_1) - 1.0) * 20.0 + 1.0);
}
```

---

## 8. `0x004e20d0`  (52 bytes, 1 callers, 0 callees)

- **A** `npc_schedule_a` (game)
- **B** `lib_fn_4e20d0` (lib)

```c
undefined4 * __thiscall FUN_004e20d0(void *this,undefined4 *param_1,undefined4 param_2)

{
  *(undefined4 *)this = *param_1;
  *(undefined4 *)((int)this + 4) = param_1[1];
  *(undefined4 *)((int)this + 8) = param_1[2];
  *(undefined4 *)((int)this + 0xc) = param_1[3];
  *(undefined4 *)((int)this + 0x10) = param_1[4];
  *(undefined4 *)((int)this + 0x14) = param_1[5];
  *(undefined4 *)((int)this + 0x18) = param_2;
  return this;
}
```

---

## 9. `0x0052dee0`  (60 bytes, 4 callers, 1 callees)

- **A** `falloff_squared_road_probe` (game)
- **B** `World_falloffSquared` (gamemisc)

```c
float10 __thiscall FUN_0052dee0(uint *param_1,uint *param_2,uint *param_3)

{
  float10 fVar1;
  float fVar2;
  
  fVar1 = FUN_0052c820(param_1,param_2,param_3);
  fVar2 = 1.0 - (float)fVar1;
  if (fVar2 <= 0.0) {
    return (float10)0;
  }
  return (float10)(fVar2 * fVar2);
}
```

---

## 10. `0x004f79f0`  (61 bytes, 1 callers, 0 callees)

- **A** `vec_sub_type10` (game)
- **B** `lib_fn_4f79f0` (lib)

```c
uint * __thiscall FUN_004f79f0(void *this,uint *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  
  *param_1 = *(uint *)this;
  param_1[1] = *(uint *)((int)this + 4);
  param_1[2] = *(uint *)((int)this + 8);
  param_1[3] = *(uint *)((int)this + 0xc);
  uVar3 = *param_2;
  uVar2 = *param_1;
  *param_1 = *param_1 - uVar3;
  param_1[1] = (param_1[1] - param_2[1]) - (uint)(uVar2 < uVar3);
  uVar3 = param_2[2];
  puVar1 = param_1 + 2;
  uVar2 = *puVar1;
  *puVar1 = *puVar1 - uVar3;
  param_1[3] = (param_1[3] - param_2[3]) - (uint)(uVar2 < uVar3);
  return param_1;
}
```

---

## 11. `0x00428590`  (67 bytes, 20 callers, 2 callees)

- **A** `conn_edge_append` (game)
- **B** `std_list_push_back_428590` (lib)
- strings: 'list<T> too long'

```c
void __thiscall FUN_00428590(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004f3ba0(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x7fffffe) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
```

---

## 12. `0x00528450`  (67 bytes, 6 callers, 2 callees)

- **A** `prop_scatter` (game)
- **B** `lib_fn_528450` (lib)
- strings: 'list<T> too long'

```c
void __thiscall FUN_00528450(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = *(undefined4 **)this;
  iVar2 = FUN_004c6770(puVar1,(undefined4 *)puVar1[1],param_1);
  if (*(int *)((int)this + 4) == 0x38e38e2) {
                    /* WARNING: Subroutine does not return */
    std::_Xlength_error("list<T> too long");
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 1;
  puVar1[1] = iVar2;
  **(int **)(iVar2 + 4) = iVar2;
  return;
}
```

---

## 13. `0x004c84b0`  (87 bytes, 9 callers, 1 callees)

- **A** `entity_init` (game)
- **B** `lib_fn_4c84b0` (lib)

```c
int __fastcall FUN_004c84b0(int param_1)

{
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  FUN_00406ef0((undefined4 *)(param_1 + 0x48));
  *(undefined4 *)(param_1 + 0x178) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x17c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x180) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x184) = 0;
  return param_1;
}
```

---

## 14. `0x0052bf40`  (94 bytes, 3 callers, 1 callees)

- **A** `rarityRoll` (game)
- **B** `lib_fn_52bf40` (lib)

```c
int FUN_0052bf40(int param_1,char param_2)

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
```

---

## 15. `0x004f2be0`  (101 bytes, 20 callers, 1 callees)

- **A** `role_seed_vector` (game)
- **B** `std_vector_push_back_int` (lib)

```c
void __thiscall FUN_004f2be0(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_00426eb0(this,1);
    }
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 4) =
           *(undefined4 *)(*(int *)this + ((int)param_1 - (int)puVar2 >> 2) * 4);
      *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
      return;
    }
  }
  else {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_00426eb0(this,1);
    }
    if (*(undefined4 **)((int)this + 4) != (undefined4 *)0x0) {
      **(undefined4 **)((int)this + 4) = *param_1;
    }
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 4;
  return;
}
```

---

## 16. `0x004d7870`  (112 bytes, 1 callers, 1 callees)

- **A** `region_tier` (game)
- **B** `lib_fn_4d7870` (lib)

```c
int FUN_004d7870(int param_1,int param_2)

{
  double dVar1;
  
  if ((param_1 == 0x200) && (param_2 == 0x200)) {
    return 1;
  }
  dVar1 = (double)((float)(0x200 - param_2) * (float)(0x200 - param_2) +
                  (float)(0x200 - param_1) * (float)(0x200 - param_1));
  libm_sse2_sqrt_precise();
  return 2 - (int)((float)dVar1 * -0.75);
}
```

---

## 17. `0x004d19f0`  (116 bytes, 6 callers, 2 callees)

- **A** `village_road_field` (game)
- **B** `World_sampleNoiseAt` (gamemisc)

```c
float10 __thiscall FUN_004d19f0(void *param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  float10 fVar2;
  uint local_14;
  uint local_10;
  uint local_c;
  uint local_8;
  
  puVar1 = (uint *)FUN_004286f0(param_1,(int)(param_2 + ((int)param_2 >> 0x1f & 0x7ffU)) >> 0xb,
                                (int)(param_3 + ((int)param_3 >> 0x1f & 0x7ffU)) >> 0xb);
  if ((puVar1 != (uint *)0x0) && (puVar1[6] == 1)) {
    local_8 = ((int)param_3 >> 0x1f) << 0x10 | param_3 >> 0x10;
    local_c = param_3 << 0x10;
    local_10 = ((int)param_2 >> 0x1f) << 0x10 | param_2 >> 0x10;
    local_14 = param_2 << 0x10;
    fVar2 = FUN_0052dee0(puVar1,&local_14,&local_c);
    return fVar2;
  }
  return (float10)0;
}
```

---

## 18. `0x004f2c50`  (117 bytes, 1 callers, 1 callees)

- **A** `npc_schedule_b` (game)
- **B** `lib_fn_4f2c50` (lib)

```c
void __thiscall FUN_004f2c50(void *this,undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)((int)this + 4);
  if ((param_1 < puVar1) && (puVar2 = *(undefined4 **)this, puVar2 <= param_1)) {
    if (puVar1 == *(undefined4 **)((int)this + 8)) {
      FUN_004e2730(this,1);
    }
    param_1 = (undefined4 *)(((int)param_1 - (int)puVar2 & 0xffffffe0U) + *(int *)this);
  }
  else if (puVar1 == *(undefined4 **)((int)this + 8)) {
    FUN_004e2730(this,1);
  }
  puVar1 = *(undefined4 **)((int)this + 4);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = *param_1;
    puVar1[1] = param_1[1];
    puVar1[2] = param_1[2];
    puVar1[3] = param_1[3];
    puVar1[4] = param_1[4];
    puVar1[5] = param_1[5];
    puVar1[6] = param_1[6];
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x20;
  return;
}
```

---

## 19. `0x0054a946`  (117 bytes, 63 callers, 0 callees)

- **A** `ftol_trunc` (game)
- **B** `ftol2_round` (lib)

```c
ulonglong FUN_0054a946(void)

{
  ulonglong uVar1;
  uint uVar2;
  float fVar3;
  float10 in_ST0;
  undefined4 local_20;
  undefined4 uStack_1c;
  
  uVar1 = (ulonglong)ROUND(in_ST0);
  local_20 = (uint)uVar1;
  uStack_1c = (float)(uVar1 >> 0x20);
  fVar3 = (float)in_ST0;
  if ((local_20 != 0) || (fVar3 = uStack_1c, (uVar1 & 0x7fffffff00000000) != 0)) {
    if ((int)fVar3 < 0) {
      uVar1 = uVar1 + (0x80000000 < (uint)-(float)(in_ST0 - (float10)(longlong)uVar1));
    }
    else {
      uVar2 = (uint)(0x80000000 < (uint)(float)(in_ST0 - (float10)(longlong)uVar1));
      uVar1 = CONCAT44((int)uStack_1c - (uint)(local_20 < uVar2),local_20 - uVar2);
    }
  }
  return uVar1;
}
```

---

## 20. `0x00405fd0`  (119 bytes, 19 callers, 2 callees)

- **A** `occupancy_probe` (game)
- **B** `World_getBlockAt` (gamemisc)

```c
undefined * __thiscall FUN_00405fd0(void *this,uint param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  void *this_00;
  undefined *puVar2;
  
  this_00 = (void *)FUN_00406100(this,param_1,param_2,param_4);
  if (this_00 == (void *)0x0) {
    return &DAT_00583d14;
  }
  iVar1 = *(int *)((int)this_00 + 0x10);
  if (param_3 < iVar1) {
    return &DAT_00583d14;
  }
  if (*(int *)((int)this_00 + 0x1c) + iVar1 <= param_3) {
    puVar2 = &DAT_00583d0c;
    if (0 < param_3) {
      puVar2 = &DAT_00583d10;
    }
    return puVar2;
  }
  puVar2 = FUN_00405f20(this_00,param_3 - iVar1);
  if ((((puVar2[3] & 0x1f) == 0) && (param_3 < 1)) && ((puVar2[3] & 0x40) == 0)) {
    puVar2 = &DAT_00583d0c;
  }
  return puVar2;
}
```

---

## 21. `0x00406290`  (120 bytes, 23 callers, 1 callees)

- **A** `zone_built_check` (game)
- **B** `Region_getChunkCell` (gamemisc)

```c
undefined4 __thiscall FUN_00406290(void *this,uint param_1,uint param_2)

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
      return *(undefined4 *)(iVar1 + 0x10018 + (uVar2 * 0x40 + uVar3) * 4);
    }
  }
  return 0;
}
```

---

## 22. `0x004f84a0`  (127 bytes, 7 callers, 1 callees)

- **A** `grid_cell_accessor` (game)
- **B** `lib_fn_4f84a0` (lib)

```c
undefined1 * __thiscall FUN_004f84a0(void *this,int param_1,int param_2,int param_3)

{
  FUN_0052dde0(this,&param_1,&param_2);
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)((int)this + 0xc) && (param_2 < *(int *)((int)this + 0x10))) &&
      (param_3 < *(int *)((int)this + 0x14))))) {
    return (undefined1 *)
           (*(int *)((int)this + 0x18) +
           ((*(int *)((int)this + 0x10) * param_3 + param_2) * *(int *)((int)this + 0xc) + param_1)
           * 2);
  }
  if ((DAT_005842cc & 1) == 0) {
    DAT_005842cc = DAT_005842cc | 1;
    DAT_005842c9 = 0;
  }
  DAT_005842c8 = 1;
  return &DAT_005842c8;
}
```

---

## 23. `0x004286f0`  (133 bytes, 11 callers, 1 callees)

- **A** `tile_cell_lookup` (game)
- **B** `World_getTileAtCoords` (gamemisc)

```c
int __thiscall FUN_004286f0(void *this,uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x2000)) &&
     ((int)param_2 < 0x2000)) {
    iVar1 = FUN_00406210(this,(int)(param_1 * 8 + ((int)(param_1 * 8) >> 0x1f & 0x3fU)) >> 6,
                         (int)(param_2 * 8 + ((int)(param_2 * 8) >> 0x1f & 0x3fU)) >> 6);
    if (iVar1 != 0) {
      uVar3 = param_1 & 0x80000007;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffff8) + 1;
      }
      uVar2 = param_2 & 0x80000007;
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffff8) + 1;
      }
      return (uVar2 + uVar3 * 8) * 0x68 + 0x14018 + iVar1;
    }
  }
  return 0;
}
```

---

## 24. `0x00522290`  (137 bytes, 2 callers, 0 callees)

- **A** `feature_count_range` (game)
- **B** `lib_fn_522290` (lib)

```c
void __thiscall FUN_00522290(void *this,undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = 1;
  *param_2 = 10;
  if (*(float *)((int)this + 0x10) <= 0.2 && *(float *)((int)this + 0x10) != 0.2) {
    *param_1 = 10;
    *param_2 = 0x14;
  }
  if ((*(float *)((int)this + 0xc) <= 0.2 && *(float *)((int)this + 0xc) != 0.2) &&
     (0.8 < *(float *)((int)this + 0x10))) {
    *param_1 = 0xf;
    *param_2 = 0x19;
  }
  if ((0.8 < *(float *)((int)this + 0xc)) && (0.8 < *(float *)((int)this + 0x10))) {
    *param_1 = 10;
    *param_2 = 0x14;
  }
  if (*(char *)((int)this + 8) == '\x01') {
    *param_1 = 0x14;
    *param_2 = 0x1e;
  }
  return;
}
```

---

## 25. `0x0041fe60`  (151 bytes, 4 callers, 1 callees)

- **A** `voxel_low_store` (game)
- **B** `VoxelColumn_setBlock` (lib)

```c
void __thiscall FUN_0041fe60(void *this,int param_1,undefined1 *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  
  if (param_1 < 0) {
    FUN_00413420(this,*(int *)((int)this + 0x1c) - param_1,-param_1);
    puVar2 = *(undefined1 **)((int)this + 0x18);
  }
  else {
    if (*(int *)((int)this + 0x1c) <= param_1) {
      FUN_00413420(this,param_1 + 1,0);
    }
    puVar2 = (undefined1 *)(*(int *)((int)this + 0x18) + param_1 * 4);
    if ((~((byte)puVar2[3] >> 7) & 1) == 0) {
      if ((param_2[3] & 0x1f) == 0) {
        return;
      }
      *puVar2 = *param_2;
      puVar2[1] = param_2[1];
      puVar2[2] = param_2[2];
      puVar2[3] = param_2[3];
      pbVar1 = (byte *)(*(int *)((int)this + 0x18) + 3 + param_1 * 4);
      *pbVar1 = *pbVar1 | 0x80;
      return;
    }
  }
  *puVar2 = *param_2;
  puVar2[1] = param_2[1];
  puVar2[2] = param_2[2];
  puVar2[3] = param_2[3];
  return;
}
```

---

## 26. `0x0041ff00`  (154 bytes, 21 callers, 3 callees)

- **A** `voxel_writer` (game)
- **B** `writeVoxel` (game)

```c
void __thiscall
FUN_0041ff00(void *this,float param_1,uint param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  void *this_00;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  this_00 = (void *)FUN_00406100(this,(uint)param_1,param_2,param_5);
  if ((this_00 != (void *)0x0) &&
     ((param_4[3] != 0 || (param_3 < *(int *)((int)this_00 + 0x1c) + *(int *)((int)this_00 + 0x10)))
     )) {
    iVar1 = *(int *)((int)this_00 + 0x10);
    if ((param_3 < 1) && ((param_4[3] & 0x5f) == 0)) {
      param_4 = &DAT_00583db0;
    }
    FUN_0041fe60(this_00,param_3 - iVar1,param_4);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      pfVar2 = FUN_0052d030(this,local_14,param_1,param_2,param_3,param_5);
      iVar3 = 0;
      do {
        iVar4 = iVar3 + 1;
        *(char *)((int)&local_1c + iVar3) = (char)(int)pfVar2[iVar3];
        iVar3 = iVar4;
      } while (iVar4 < 3);

```

---

## 27. `0x0041ff00`  (154 bytes, 21 callers, 3 callees)

- **A** `writeVoxel` (game)
- **B** `World_fillVoxelColumn` (lib)

```c
void __thiscall
FUN_0041ff00(void *this,float param_1,uint param_2,int param_3,undefined1 *param_4,int param_5)

{
  int iVar1;
  void *this_00;
  float *pfVar2;
  int iVar3;
  int iVar4;
  undefined2 local_1c;
  undefined1 local_1a;
  undefined2 local_18;
  undefined1 local_16;
  undefined1 local_15;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  this_00 = (void *)FUN_00406100(this,(uint)param_1,param_2,param_5);
  if ((this_00 != (void *)0x0) &&
     ((param_4[3] != 0 || (param_3 < *(int *)((int)this_00 + 0x1c) + *(int *)((int)this_00 + 0x10)))
     )) {
    iVar1 = *(int *)((int)this_00 + 0x10);
    if ((param_3 < 1) && ((param_4[3] & 0x5f) == 0)) {
      param_4 = &DAT_00583db0;
    }
    FUN_0041fe60(this_00,param_3 - iVar1,param_4);
    while (param_3 = param_3 + 1, param_3 < iVar1) {
      pfVar2 = FUN_0052d030(this,local_14,param_1,param_2,param_3,param_5);
      iVar3 = 0;
      do {
        iVar4 = iVar3 + 1;
        *(char *)((int)&local_1c + iVar3) = (char)(int)pfVar2[iVar3];
        iVar3 = iVar4;
      } while (iVar4 < 3);

```

---

## 28. `0x004d1950`  (156 bytes, 3 callers, 1 callees)

- **A** `house_cell_tag` (game)
- **B** `VoxelGrid_cellAt3D` (gamemisc)

```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_004d1950(void *this,int param_1,int param_2,int param_3)

{
  FUN_004d8f90(this,&param_1,&param_2);
  if ((((-1 < param_1) && (-1 < param_2)) && (-1 < param_3)) &&
     (((param_1 < *(int *)((int)this + 100) && (param_2 < *(int *)((int)this + 0x68))) &&
      (param_3 < *(int *)((int)this + 0x6c))))) {
    return (undefined *)
           (*(int *)((int)this + 0x70) +
           ((*(int *)((int)this + 0x68) * param_3 + param_2) * *(int *)((int)this + 100) + param_1)
           * 0xc);
  }
  if ((DAT_00584264 & 1) == 0) {
    DAT_00584264 = DAT_00584264 | 1;
    _DAT_00584259 = 0;
    DAT_0058425b = 0;
    _DAT_0058425c = 0;
    DAT_00584260 = 0;
  }
  DAT_00584258 = 0;
  return &DAT_00584258;
}
```

---

## 29. `0x00522d80`  (159 bytes, 1 callers, 1 callees)

- **A** `site_query_warp` (game)
- **B** `World_terrainOffset2D` (gamemisc)

```c
float * FUN_00522d80(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  
  fVar1 = FUN_004d5d30(SUB84((double)param_3 * 0.0005,0),
                       (int)((ulonglong)((double)param_3 * 0.0005) >> 0x20),3423.0);
  *param_1 = (float)fVar1 * 3.0 * 256.0;
  fVar1 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                       (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),23421.0);
  param_1[1] = (float)fVar1 * 3.0 * 256.0;
  return param_1;
}
```

---

## 30. `0x004ff340`  (160 bytes, 1 callers, 1 callees)

- **A** `fill_box` (game)
- **B** `lib_fn_4ff340` (lib)

```c
void __thiscall
FUN_004ff340(void *this,int param_1,int param_2,int param_3,int *param_4,undefined3 *param_5,
            int param_6)

{
  undefined3 *puVar1;
  int iVar2;
  int local_10;
  int local_8;
  
  puVar1 = param_5;
  local_8 = 0;
  if (0 < *param_4) {
    do {
      local_10 = 0;
      if (0 < param_4[1]) {
        do {
          iVar2 = param_4[2] + -1;
          if (-1 < iVar2) {
            do {
              param_5 = (undefined3 *)CONCAT13(0x46,*puVar1);
              FUN_0041ff00(this,(float)(local_8 + param_1),param_2 + local_10,param_3 + iVar2,
                           (undefined1 *)&param_5,param_6);
              iVar2 = iVar2 + -1;
            } while (-1 < iVar2);
          }
          local_10 = local_10 + 1;
        } while (local_10 < param_4[1]);
      }
      local_8 = local_8 + 1;
    } while (local_8 < *param_4);
  }
  return;
}
```

---

## 31. `0x00413710`  (163 bytes, 22 callers, 0 callees)

- **A** `loot_copy` (game)
- **B** `struct_copy0x118` (gamemisc)

```c
undefined1 * __thiscall FUN_00413710(void *this,undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  
  *(undefined1 *)this = *param_1;
  *(undefined1 *)((int)this + 1) = param_1[1];
  *(undefined4 *)((int)this + 4) = *(undefined4 *)(param_1 + 4);
  *(undefined4 *)((int)this + 8) = *(undefined4 *)(param_1 + 8);
  *(undefined1 *)((int)this + 0xc) = param_1[0xc];
  *(undefined1 *)((int)this + 0xd) = param_1[0xd];
  *(undefined1 *)((int)this + 0xe) = param_1[0xe];
  *(undefined2 *)((int)this + 0x10) = *(undefined2 *)(param_1 + 0x10);
  iVar3 = 0x1f;
  puVar2 = param_1 + 0x17;
  puVar1 = (undefined1 *)((int)this + 0x16);
  do {
    iVar3 = iVar3 + -1;
    puVar1[-2] = puVar2[-3];
    puVar1[-1] = puVar2[-2];
    *puVar1 = puVar1[(int)param_1 - (int)this];
    puVar1[1] = *puVar2;
    *(undefined4 *)(puVar1 + 2) = *(undefined4 *)(puVar2 + 1);
    puVar2 = puVar2 + 8;
    puVar1 = puVar1 + 8;
  } while (-1 < iVar3);
  *(undefined4 *)((int)this + 0x114) = *(undefined4 *)(param_1 + 0x114);
  return this;
}
```

---

## 32. `0x004d23f0`  (167 bytes, 5 callers, 0 callees)

- **A** `cell_read` (game)
- **B** `lib_fn_4d23f0` (lib)

```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_004d23f0(void *this,int param_1)

{
  if (param_1 < 0) {
    if ((DAT_00584250 & 1) == 0) {
      DAT_00584250 = DAT_00584250 | 1;
    }
    _DAT_0058424c = 0;
    _DAT_0058424e = 0x100;
    return &DAT_0058424c;
  }
  if (*(int *)((int)this + 0x1c) <= param_1) {
    if ((DAT_00584250 & 2) == 0) {
      DAT_00584250 = DAT_00584250 | 2;
    }
    _DAT_00584254 = 0;
    _DAT_00584256 = 0;
    return &DAT_00584254;
  }
  return (undefined *)(*(int *)((int)this + 0x18) + param_1 * 4);
}
```

---

## 33. `0x00405f20`  (174 bytes, 19 callers, 0 callees)

- **A** `column_record_read` (game)
- **B** `Column_getBlockChecked` (gamemisc)

```c
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * __thiscall FUN_00405f20(void *this,int param_1)

{
  if (param_1 < 0) {
    if ((DAT_00583d1c & 1) == 0) {
      DAT_00583d1c = DAT_00583d1c | 1;
    }
    _DAT_00583d18 = 0;
    _DAT_00583d1a = 0x100;
    return &DAT_00583d18;
  }
  if (*(int *)((int)this + 0x1c) <= param_1) {
    if ((DAT_00583d1c & 2) == 0) {
      DAT_00583d1c = DAT_00583d1c | 2;
    }
    _DAT_00583d20 = 0xffff;
    DAT_00583d22 = 0xff;
    DAT_00583d23 = 0;
    return &DAT_00583d20;
  }
  return (undefined *)(*(int *)((int)this + 0x18) + param_1 * 4);
}
```

---

## 34. `0x00406050`  (175 bytes, 19 callers, 2 callees)

- **A** `column_walkup` (game)
- **B** `World_getBlockFloat` (gamemisc)

```c
void __thiscall
FUN_00406050(void *this,uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,
            uint param_6,int param_7)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (((int)param_2 < 1) && ((int)param_2 < 0)) {
    bVar1 = 0xffff < param_1;
    param_1 = param_1 - 0x10000;
    param_2 = (param_2 - 1) + (uint)bVar1;
  }
  if (((int)param_4 < 1) && ((int)param_4 < 0)) {
    bVar1 = 0xffff < param_3;
    param_3 = param_3 - 0x10000;
    param_4 = (param_4 - 1) + (uint)bVar1;
  }
  if (((int)param_6 < 1) && ((int)param_6 < 0)) {
    bVar1 = 0xffff < param_5;
    param_5 = param_5 - 0x10000;
    param_6 = (param_6 - 1) + (uint)bVar1;
  }
  uVar2 = __alldiv(param_5,param_6,0x10000,0);
  uVar3 = __alldiv(param_3,param_4,0x10000,0);
  uVar4 = __alldiv(param_1,param_2,0x10000,0);
  FUN_00405fd0(this,(uint)uVar4,(uint)uVar3,(int)uVar2,param_7);
  return;
}
```

---

## 35. `0x004d6670`  (180 bytes, 9 callers, 2 callees)

- **A** `model_commit` (game)
- **B** `lib_fn_4d6670` (lib)

```c
void ** __thiscall FUN_004d6670(void *this,void **param_1)

{
  void **ppvVar1;
  void **ppvVar2;
  void *this_00;
  int iVar3;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554a42;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  ppvVar1 = *(void ***)((int)this + 4);
  ppvVar2 = ExceptionList;
  if ((param_1 < ppvVar1) && (ppvVar2 = *(void ***)this, ppvVar2 <= param_1)) {
    iVar3 = (int)param_1 - (int)ppvVar2;
    ppvVar2 = (void **)(iVar3 * 0x5397829d);
    if (ppvVar1 == *(void ***)((int)this + 8)) {
      ppvVar2 = (void **)FUN_004ce8e0(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    param_1 = (void **)((iVar3 / 0x188) * 0x188 + *(int *)this);
    local_8 = 0;
  }
  else {
    if (ppvVar1 == *(void ***)((int)this + 8)) {
      ppvVar2 = (void **)FUN_004ce8e0(this,1);
    }
    this_00 = *(void **)((int)this + 4);
    local_8 = 1;
  }
  if (this_00 != (void *)0x0) {
    ppvVar2 = FUN_004c8420(this_00,param_1);
  }
  *(int *)((int)this + 4) = *(int *)((int)this + 4) + 0x188;
  ExceptionList =
```

---

## 36. `0x00522cc0`  (180 bytes, 1 callers, 1 callees)

- **A** `dist2_16_16` (game)
- **B** `stub_securityCookie` (gamemisc)

```c
void FUN_00522cc0(void)

{
  __security_check_cookie(DAT_00583cc8 ^ (uint)&stack0xfffffffc ^ (uint)&stack0xfffffffc);
  return;
}
```

---

## 37. `0x004f3630`  (186 bytes, 1 callers, 2 callees)

- **A** `prop_descriptor_a` (game)
- **B** `lib_fn_4f3630` (lib)

```c
int * __cdecl FUN_004f3630(int *param_1,int *param_2,int param_3)

{
  int iVar1;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00406ef0(param_1 + 0x12);
  param_1[0x5e] = -1;
  param_1[0x5f] = -1;
  param_1[0x60] = -1;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  iVar1 = rand();
  *param_1 = iVar1 % 3 + 0x15;
  param_1[9] = 0x40600000;
  param_1[10] = 0x40000000;
  param_1[0xb] = 0x40400000;
  return param_1;
}
```

---

## 38. `0x0052a760`  (194 bytes, 2 callers, 6 callees)

- **A** `loot_single_item` (game)
- **B** `lib_fn_52a760` (lib)

```c
void FUN_0052a760(byte *param_1,undefined2 param_2,undefined1 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 local_120 [280];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  param_1[0x10] = 1;
  param_1[0x11] = 0;
  param_1[0] = 0;
  param_1[1] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x114] = 0;
  param_1[0x115] = 0;
  param_1[0x116] = 0;
  param_1[0x117] = 0;
  memset(param_1 + 0x14,0,0x100);
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000001;
  bVar3 = uVar1 == 0;
  if ((int)uVar1 < 0) {
    bVar3 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
  }
  if (bVar3) {
    puVar2 = (undefined1 *)FUN_00528bf0(local_120,param_2,param_3,-1);
  }
  else {
    puVar2 = (undefined1 *)FUN_0052c4e0(local_120,param_2,param_3,-1);
  }
  FUN_00402a70(param_1,puVar2);
  *(uint *)(param_1 + 8) = (uint)*param_1;
  *param_1 = 2;
  __security_check_cookie(local_8 ^ (uint)&stack0xffff
```

---

## 39. `0x00406100`  (208 bytes, 37 callers, 1 callees)

- **A** `column_record_lookup` (game)
- **B** `Chunk_getColumnAt` (gamemisc)

```c
int __thiscall FUN_00406100(void *this,uint param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if ((((-1 < (int)param_1) && (-1 < (int)param_2)) && ((int)param_1 < 0x1000000)) &&
     ((int)param_2 < 0x1000000)) {
    if (param_3 == 0) {
      param_3 = FUN_00406290(this,(int)(param_1 + ((int)param_1 >> 0x1f & 0xffU)) >> 8,
                             (int)(param_2 + ((int)param_2 >> 0x1f & 0xffU)) >> 8);
    }
    else {
      iVar1 = *(int *)(param_3 + 0x60) * 0x100;
      if ((int)param_1 < iVar1) {
        return 0;
      }
      iVar2 = *(int *)(param_3 + 100) * 0x100;
      if ((int)param_2 < iVar2) {
        return 0;
      }
      if (iVar1 + 0x100 <= (int)param_1) {
        return 0;
      }
      if (iVar2 + 0x100 <= (int)param_2) {
        return 0;
      }
    }
    if (param_3 != 0) {
      uVar3 = param_2 & 0x800000ff;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xffffff00) + 1;
      }
      uVar4 = param_1 & 0x800000ff;
      if ((int)uVar4 < 0) {
        uVar4 = (uVar4 - 1 | 0xffffff00) + 1;
      }
      ret
```

---

## 40. `0x004e19f0`  (232 bytes, 2 callers, 5 callees)

- **A** `plot_sort` (game)
- **B** `lib_fn_4e19f0` (lib)

```c
void __cdecl FUN_004e19f0(int *param_1,int *param_2,int param_3,int *param_4)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint local_c [2];
  
  iVar2 = (int)param_2 - (int)param_1;
  do {
    iVar2 = iVar2 >> 2;
    if (iVar2 < 0x21) {
LAB_004e1a87:
      if (1 < iVar2) {
        FUN_004e15f0(param_1,param_2,param_4);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar2) {
        if (4 < (int)((int)param_2 - (int)param_1 & 0xfffffffcU)) {
          FUN_004e16f0((int)param_1,(int)param_2,param_4);
        }
        FUN_004e1ae0(param_1,(int)param_2,param_4);
        return;
      }
      goto LAB_004e1a87;
    }
    puVar3 = (undefined4 *)FUN_004e1b40(local_c,param_1,param_2,param_4);
    piVar4 = (int *)*puVar3;
    piVar1 = (int *)puVar3[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if ((int)((int)piVar4 - (int)param_1 & 0xfffffffcU) <
        (int)((int)param_2 - (int)piVar1 & 0xfffffffcU)) {
      FUN_004e19f0(param_1,piVar4,param_3,param_4);
      piVar4 = param_2;
      param_1 = piVar1;
    }
    else {
      FUN_004e19f
```

---

## 41. `0x004f36f0`  (275 bytes, 1 callers, 3 callees)

- **A** `plot_array_alloc` (game)
- **B** `lib_fn_4f36f0` (lib)

```c
undefined8 * __thiscall FUN_004f36f0(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined8 *puVar4;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00555540;
  local_10 = ExceptionList;
  puVar4 = *(undefined8 **)((int)this + 4);
  uVar3 = ((int)puVar4 - *(int *)this) / 0x1c;
  if (param_1 < uVar3) {
    puVar2 = *(undefined8 **)this;
    puVar1 = (undefined8 *)((int)puVar2 + param_1 * 0x1c);
    if (puVar1 == puVar2) {
      *(undefined8 **)((int)this + 4) = puVar2;
      return puVar1;
    }
    if (puVar1 == puVar4) {
      return puVar1;
    }
    ExceptionList = &local_10;
    puVar4 = (undefined8 *)FUN_004e1910(puVar4,puVar4,puVar1);
  }
  else {
    if (param_1 <= uVar3) {
      return (undefined8 *)(((int)puVar4 - *(int *)this) * -0x6db6db6d);
    }
    ExceptionList = &local_10;
    FUN_004e26c0(this,param_1 - uVar3);
    local_8 = 0;
    FUN_004e1db0(*(int *)((int)this + 4),param_1 - (*(int *)((int)this + 4) - *(int *)this) / 0x1c);
    puVar4 = (undefined8 *)
       
```

---

## 42. `0x0052d870`  (276 bytes, 4 callers, 1 callees)

- **A** `snow_color` (game)
- **B** `lib_fn_52d870` (lib)

```c
float * FUN_0052d870(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  
  fVar1 = FUN_004d5d30(SUB84((double)param_2 * 0.04,0),
                       (int)((ulonglong)((double)param_2 * 0.04) >> 0x20),(double)param_3 * 0.04);
  fVar3 = ((float)fVar1 + 1.0) * 0.5;
  fVar2 = 1.0 - fVar3;
  fVar4 = fVar3 * 190.0 + fVar2 * 100.0;
  fVar5 = fVar3 * 220.0 + fVar2 * 180.0;
  fVar2 = fVar3 * 255.0 + fVar2 * 255.0;
  *param_1 = fVar4;
  param_1[1] = fVar5;
  param_1[2] = fVar2;
  if (0.0 <= fVar4) {
    if (255.0 < fVar4) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
  if (fVar5 < 0.0) {
    param_1[1] = 0.0;
  }
  if (255.0 < param_1[1]) {
    param_1[1] = 255.0;
  }
  if (fVar2 < 0.0) {
    param_1[2] = 0.0;
  }
  if (255.0 < param_1[2]) {
    param_1[2] = 255.0;
  }
  return param_1;
}
```

---

## 43. `0x00523380`  (292 bytes, 1 callers, 0 callees)

- **A** `point_seg_dist2` (game)
- **B** `pointSegmentDistanceSq` (gamemisc)

```c
float10 __cdecl FUN_00523380(double *param_1,double *param_2,double *param_3)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  double dVar5;
  
  dVar3 = *param_3 - *param_1;
  dVar4 = *param_2 - *param_1;
  dVar5 = param_2[1] - param_1[1];
  dVar2 = param_3[1] - param_1[1];
  dVar1 = dVar4 * dVar4 + dVar5 * dVar5;
  if (dVar1 < 9.999999682655225e-21) {
    return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
  }
  dVar1 = (dVar2 * dVar5 + dVar3 * dVar4) / dVar1;
  if (dVar1 <= 0.0) {
    return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
  }
  if (1.0 <= dVar1) {
    dVar1 = param_3[1] - param_2[1];
    dVar2 = *param_3 - *param_2;
    return (float10)(float)(dVar1 * dVar1 + dVar2 * dVar2);
  }
  dVar3 = dVar3 - dVar4 * dVar1;
  dVar2 = dVar2 - dVar5 * dVar1;
  return (float10)(float)(dVar2 * dVar2 + dVar3 * dVar3);
}
```

---

## 44. `0x00413420`  (306 bytes, 2 callers, 2 callees)

- **A** `column_allocator` (game)
- **B** `resize_dword_array` (lib)

```c
void __thiscall FUN_00413420(void *this,uint param_1,int param_2)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  void *local_8;
  
  if (param_1 != *(uint *)((int)this + 0x1c)) {
    if (((int)param_1 < 0) || (param_1 == 0)) {
      if (*(void **)((int)this + 0x18) != (void *)0x0) {
        operator_delete(*(void **)((int)this + 0x18));
      }
      *(int *)((int)this + 0x10) = *(int *)((int)this + 0x10) - param_2;
      *(undefined4 *)((int)this + 0x1c) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      return;
    }
    local_8 = operator_new(-(uint)((int)((ulonglong)param_1 * 4 >> 0x20) != 0) |
                           (uint)((ulonglong)param_1 * 4));
    if (local_8 == (void *)0x0) {
      local_8 = (void *)0x0;
    }
    else {
      iVar3 = param_1 - 1;
      if (-1 < iVar3) {
        iVar1 = (int)local_8 + 2;
        do {
          iVar3 = iVar3 + -1;
          *(undefined4 *)(iVar1 + -2) = 0;
          iVar1 = iVar1 + 4;
        } while (-1 < iVar3);
      }
    }
    if ((int)param_1 < *(int *)((int)this + 0x1c)) {
      if (
```

---

## 45. `0x004f5cc0`  (310 bytes, 2 callers, 5 callees)

- **A** `connection_sort` (game)
- **B** `lib_fn_4f5cc0` (lib)

```c
void __cdecl FUN_004f5cc0(float *param_1,float *param_2,int param_3,undefined4 param_4)

{
  float *pfVar1;
  undefined4 *puVar2;
  int iVar3;
  float *pfVar4;
  undefined4 local_c [2];
  
  iVar3 = (int)param_2 - (int)param_1;
  do {
    iVar3 = iVar3 / 0xc;
    if (iVar3 < 0x21) {
LAB_004f5d98:
      if (1 < iVar3) {
        FUN_004f4860(param_1,param_2);
      }
      return;
    }
    if (param_3 < 1) {
      if (0x20 < iVar3) {
        if (1 < ((int)param_2 - (int)param_1) / 0xc) {
          FUN_004f4b50((int)param_1,(int)param_2);
        }
        FUN_004f61c0(param_1,(int)param_2);
        return;
      }
      goto LAB_004f5d98;
    }
    puVar2 = (undefined4 *)FUN_004f64a0(local_c,param_1,param_2);
    pfVar4 = (float *)*puVar2;
    pfVar1 = (float *)puVar2[1];
    param_3 = param_3 / 2 + (param_3 / 2) / 2;
    if (((int)pfVar4 - (int)param_1) / 0xc < ((int)param_2 - (int)pfVar1) / 0xc) {
      FUN_004f5cc0(param_1,pfVar4,param_3,param_4);
      param_1 = pfVar1;
      pfVar4 = param_2;
    }
    else {
      FUN_004f5cc0(pfVar1,param_2,param_3,param_4);
    }
    iVar3 = (
```

---

## 46. `0x0042e090`  (380 bytes, 4 callers, 3 callees)

- **A** `nearest_entity_in_region` (game)
- **B** `World_findNearestEntityInRegion` (gamemisc)

```c
void __thiscall FUN_0042e090(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  float10 fVar7;
  int local_24;
  int local_20;
  float local_10 [2];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar3 = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (int)((param_1 + 0x4000 >> 0x1f & 0x3fffU) + param_1 + 0x4000) >> 0xe;
  FUN_00522d80(local_10,param_1,param_2);
  local_24 = 0;
  local_20 = 0;
  if (iVar3 <= iVar5) {
    iVar6 = iVar3 * 0x400 + 0x10002f;
    iVar2 = iVar4;
    do {
      for (; iVar2 <= (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
          iVar2 = iVar2 + 1) {
        if ((((-1 < iVar3) && (-1 < iVar2)) && (iVar6 < 0x20002f)) &&
           ((iVar2 < 0x400 && (iVar1 = *(int *)((int)this + (iVar6 + iVar2) * 4), iVar1 != 0)))) {
          fVar7 = (float10)FUN_00522cc0();
          if ((local_24 == 0) || ((int)fVar7 < local_20)) {
      
```

---

## 47. `0x004f3490`  (397 bytes, 1 callers, 2 callees)

- **A** `prop_descriptor_b` (game)
- **B** `lib_fn_4f3490` (lib)

```c
undefined4 * __cdecl FUN_004f3490(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  
  *(undefined1 *)(param_1 + 0xc) = 1;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  FUN_00406ef0(param_1 + 0x12);
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0xffffffff;
  param_1[0x61] = 0;
  param_1[2] = *param_2;
  param_1[3] = param_2[1];
  param_1[4] = param_2[2];
  param_1[5] = param_2[3];
  param_1[6] = param_2[4];
  param_1[7] = param_2[5];
  param_1[8] = param_3;
  uVar1 = rand();
  uVar1 = uVar1 & 0x80000003;
  if ((int)uVar1 < 0) {
    uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
  }
  switch(uVar1) {
  case 0:
    *param_1 = 0x18;
    param_1[9] = 0x40000000;
    param_1[10] = 0x40000000;
    param_1[0xb] = 0x40000000;
    return param_1;
  case 1:
    *param_1 = 0x19;
    iVar2 = rand();
    fVar3 = (((float)iVar2 * 0.5) / 32767.0 + 1.0) * 1.5;
    param_1[9] = fVar3;
    param_1[10] = fVar3;
    param_1[0xb] = fVar3;
    return param_1;
  case 2:
    *
```

---

## 48. `0x005322d0`  (419 bytes, 1 callers, 3 callees)

- **A** `region_init_60kb_red_herring` (game)
- **B** `lib_fn_5322d0` (lib)

```c
/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */

void __thiscall FUN_005322d0(void *this,int param_1,int *param_2,void *param_3)

{
  CRefTime CVar1;
  uint uVar2;
  Creature *pCVar3;
  bool bVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  uint *puVar8;
  int *piVar9;
  int iVar10;
  uint uVar11;
  CRefTime *pCVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  void *pvVar18;
  int *piVar19;
  RandomWalkBehavior *pRVar20;
  undefined4 uVar21;
  undefined4 *puVar22;
  RandomWalkBehavior_vftable *pRVar23;
  Creature *pCVar24;
  float *pfVar25;
  int *piVar26;
  CRefTime *pCVar27;
  char *pcVar28;
  void *pvVar29;
  longlong *plVar30;
  SequentialBehavior_vftable *pSVar31;
  Creature **ppCVar32;
  uint *puVar33;
  undefined4 *puVar34;
  undefined8 *puVar35;
  float *pfVar36;
  byte *pbVar37;
  pair<unsigned___int64,unsigned___int64> *ppVar38;
  undefined1 uVar39;
  undefined1 *puVar40;
  uint extraout_ECX;
  CombatBehavior *pCVar41;
  CombatBehavior *pCVar42;
  CombatBehavior_vftable *this_00;
  float10 fVar43;
  float fVar
```

---

## 49. `0x004ff3f0`  (426 bytes, 1 callers, 2 callees)

- **A** `forestMound` (game)
- **B** `lib_fn_4ff3f0` (lib)

```c
void __thiscall
FUN_004ff3f0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  void *pvVar5;
  int iVar6;
  void *this_00;
  undefined4 *puVar7;
  int iVar8;
  float *pfVar9;
  undefined8 *puVar10;
  float fVar11;
  float fVar12;
  int iVar13;
  float fVar14;
  float10 fVar15;
  double dVar16;
  double dVar17;
  undefined8 local_a4;
  undefined4 *local_9c;
  undefined8 local_98;
  int local_90;
  undefined8 local_8c;
  void *local_84;
  int local_80;
  float local_7c;
  float local_78;
  int local_74;
  int local_70;
  int local_6c;
  float local_68;
  int local_64;
  int local_60;
  float local_5c;
  int local_58;
  float local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44 [3];
  float local_38 [3];
  undefined8 local_2c;
  float local_24;
  float local_20 [4];
  float fStack_10;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_70 = param_2;
  local_74 = param_5;
  local_90 = param
```

---

## 50. `0x004f82d0`  (456 bytes, 1 callers, 1 callees)

- **A** `rock_height_color` (game)
- **B** `lib_fn_4f82d0` (lib)

```c
float * __thiscall FUN_004f82d0(void *this,float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  
  dVar5 = (double)*(int *)((int)this + 0x800274) + (double)param_2 * 0.03;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800278) + (double)param_3 * 0.03);
  dVar5 = (double)*(int *)((int)this + 0x80027c) + (double)param_2 * 0.01;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800280) + (double)param_3 * 0.01);
  fVar6 = ((float)fVar1 + 1.0) * 0.5 * 80.0;
  fVar4 = ((float)fVar2 + 1.0) * 0.5;
  fVar7 = (1.0 - fVar4) * 240.0;
  fVar3 = fVar7 + fVar4 * 240.0 + fVar6;
  fVar7 = fVar7 + fVar4 * 180.0 + fVar6;
  fVar6 = (1.0 - fVar4) * 100.0 + fVar4 * 50.0 + fVar6;
  *param_1 = fVar3;
  param_1[1] = fVar7;
  param_1[2] = fVar6;
  if (0.0 <= fVar3) {
    if (255.0 < fVar3) {
      *param_1 = 255.0;
    }
  }
  else {
    *param_1 = 0.0;
  }
```

---

## 51. `0x00518630`  (474 bytes, 1 callers, 8 callees)

- **A** `zoneBuilder` (game)
- **B** `lib_fn_518630` (lib)

```c

```

---

## 52. `0x00518630`  (474 bytes, 1 callers, 8 callees)

- **A** `zone_builder` (game)
- **B** `zoneBuilder` (game)

```c

```

---

## 53. `0x004d5a80`  (476 bytes, 2 callers, 1 callees)

- **A** `terrain_gradient` (game)
- **B** `World_sampleTerrainGradient` (gamemisc)

```c
double * __thiscall FUN_004d5a80(void *this,double *param_1,int param_2,int param_3)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar7 = (double)param_3 * 0.01;
  dVar8 = (double)param_3 * 0.0005;
  dVar6 = (double)param_2 * 0.01;
  dVar5 = (double)param_2 * 0.0005;
  dVar4 = (double)*(int *)((int)this + 0x800204) + dVar6;
  fVar2 = FUN_004d5d30(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                       (double)*(int *)((int)this + 0x800208) + dVar7);
  dVar4 = (double)*(int *)((int)this + 0x8001fc) + dVar5;
  fVar3 = FUN_004d5d30(SUB84(dVar4,0),(int)((ulonglong)dVar4 >> 0x20),
                       (double)*(int *)((int)this + 0x800200) + dVar8);
  iVar1 = *(int *)((int)this + 0x800218);
  dVar6 = (double)*(int *)((int)this + 0x800214) + dVar6;
  *param_1 = ((double)(float)fVar2 * 0.1 + (double)(float)fVar3) * 500.0 * 6.103515625e-05 +
             (double)param_2 * 6.103515625e-05;
  fVar2 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),(double)iVar1 + dVar7);
  dVa
```

---

## 54. `0x00523b90`  (493 bytes, 4 callers, 3 callees)

- **A** `vert_gradient` (game)
- **B** `lib_fn_523b90` (lib)

```c
float10 __thiscall FUN_00523b90(void *param_1,float param_2,uint param_3,int param_4,int param_5)

{
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  
  iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_5);
  if (iVar1 == 0) {
    fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
    fVar6 = (float)fVar2;
  }
  else {
    fVar6 = *(float *)(iVar1 + 4);
  }
  dVar5 = (double)((float)(int)param_3 * 0.2 + 534.0);
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)((float)param_4 * 0.2 + 13.0));
  dVar5 = (double)(int)param_2 * 0.05 + 4343.0;
  fVar3 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_4 * 0.1 + 84734.0);
  fVar4 = ((float)fVar2 * 0.1 + (float)fVar3) * 0.7 + 0.2;
  if (fVar4 * fVar6 <= 1.0) {
    iVar1 = FUN_00406100(param_1,(uint)param_2,param_3,param_5);
    if (iVar1 == 0) {
      fVar2 = (float10)FUN_004f8570(param_1,param_2,param_3);
      fVar6 = (float)fVar2;
    }
    else {
      fVar6 = *(float *)(iVar1 + 4
```

---

## 55. `0x0052d990`  (498 bytes, 4 callers, 7 callees)

- **A** `water_depth` (game)
- **B** `World_computeClimateColor` (game)

```c
void __thiscall FUN_0052d990(void *this,uint param_1,uint param_2)

{
  uint *puVar1;
  float10 fVar2;
  double dVar3;
  float fVar4;
  float fVar5;
  uint local_2c;
  float local_28;
  uint local_24;
  float local_20;
  float local_1c;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  fVar2 = FUN_004d19f0(this,param_1,param_2);
  local_28 = (float)fVar2;
  FUN_004d5a80(this,&local_18,param_1,param_2);
  fVar2 = (float10)FUN_00522840(this,param_1,param_2);
  local_1c = (float)fVar2;
  if (0.0 < local_28) {
    fVar4 = local_28 * 3.0;
    if (1.0 < fVar4) {
      fVar4 = 1.0;
    }
    fVar4 = 1.0 - fVar4 * fVar4;
    local_20 = 1.0 - fVar4 * fVar4;
    dVar3 = local_18 * 360.0;
    libm_sse2_cos_precise();
    fVar4 = (float)(dVar3 * (double)local_20 + 1.0);
    if (fVar4 < local_1c) {
      local_1c = fVar4;
    }
    dVar3 = local_10 * 360.0;
    libm_sse2_cos_precise();
    fVar4 = (float)(dVar3 * (double)local_20 + 1.0);
    if (fVar4 < local_1c) {
      local_1c = fVar4;
    }
  }
  if (0.65 < local_28) {
    fVar4 = (0
```

---

## 56. `0x004d5d30`  (522 bytes, 37 callers, 1 callees)

- **A** `valueNoise2D` (game)
- **B** `valueNoise2D` (gamemisc)

```c
float10 __cdecl FUN_004d5d30(undefined4 param_1,undefined4 param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)(int)param_3;
  dVar6 = (double)(int)(double)CONCAT44(param_2,param_1);
  iVar1 = (int)dVar8 * 0x39;
  uVar4 = (int)dVar6 + iVar1;
  uVar2 = iVar1 + (int)(dVar6 + 1.0);
  uVar4 = uVar4 ^ uVar4 * 0x2000;
  uVar2 = uVar2 ^ uVar2 * 0x2000;
  dVar7 = ((double)CONCAT44(param_2,param_1) - dVar6) * 3.1415927;
  iVar1 = (int)(dVar8 + 1.0) * 0x39;
  uVar5 = (int)dVar6 + iVar1;
  uVar3 = iVar1 + (int)(dVar6 + 1.0);
  uVar5 = uVar5 ^ uVar5 * 0x2000;
  uVar3 = uVar3 ^ uVar3 * 0x2000;
  libm_sse2_cos_precise();
  dVar6 = (1.0 - dVar7) * 0.5;
  dVar7 = (param_3 - (double)(int)param_3) * 3.1415927;
  libm_sse2_cos_precise();
  dVar7 = (1.0 - dVar7) * 0.5;
  return (float10)(float)(((1.0 - (double)((uVar4 * uVar4 * 0xec4d + 0x131071f) * uVar4 + 0xd208dd0d
                                          & 0x7fffffff) * 9.313225746154785e-10) * (1.0 - dVar6) +
                          (
```

---

## 57. `0x004d5d30`  (522 bytes, 37 callers, 1 callees)

- **A** `value_noise2d` (game)
- **B** `valueNoise2D` (game)

```c
float10 __cdecl FUN_004d5d30(undefined4 param_1,undefined4 param_2,double param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  
  dVar8 = (double)(int)param_3;
  dVar6 = (double)(int)(double)CONCAT44(param_2,param_1);
  iVar1 = (int)dVar8 * 0x39;
  uVar4 = (int)dVar6 + iVar1;
  uVar2 = iVar1 + (int)(dVar6 + 1.0);
  uVar4 = uVar4 ^ uVar4 * 0x2000;
  uVar2 = uVar2 ^ uVar2 * 0x2000;
  dVar7 = ((double)CONCAT44(param_2,param_1) - dVar6) * 3.1415927;
  iVar1 = (int)(dVar8 + 1.0) * 0x39;
  uVar5 = (int)dVar6 + iVar1;
  uVar3 = iVar1 + (int)(dVar6 + 1.0);
  uVar5 = uVar5 ^ uVar5 * 0x2000;
  uVar3 = uVar3 ^ uVar3 * 0x2000;
  libm_sse2_cos_precise();
  dVar6 = (1.0 - dVar7) * 0.5;
  dVar7 = (param_3 - (double)(int)param_3) * 3.1415927;
  libm_sse2_cos_precise();
  dVar7 = (1.0 - dVar7) * 0.5;
  return (float10)(float)(((1.0 - (double)((uVar4 * uVar4 * 0xec4d + 0x131071f) * uVar4 + 0xd208dd0d
                                          & 0x7fffffff) * 9.313225746154785e-10) * (1.0 - dVar6) +
                          (
```

---

## 58. `0x005234b0`  (538 bytes, 1 callers, 2 callees)

- **A** `seg_carve` (game)
- **B** `lib_fn_5234b0` (lib)

```c
void __thiscall FUN_005234b0(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int local_54;
  int local_50;
  int local_14;
  int iStack_10;
  
  uVar1 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar2 = *param_2 - *param_1;
  uVar6 = param_2[1] - param_1[1];
  uVar5 = param_2[2] - param_1[2];
  iVar9 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f);
  iVar7 = (uVar6 ^ (int)uVar6 >> 0x1f) - ((int)uVar6 >> 0x1f);
  iVar10 = iVar7;
  if (iVar7 < iVar9) {
    iVar10 = iVar9;
  }
  iVar3 = (uVar5 ^ (int)uVar5 >> 0x1f) - ((int)uVar5 >> 0x1f);
  if ((iVar3 < iVar10) && (iVar3 = iVar7, iVar7 < iVar9)) {
    iVar3 = iVar9;
  }
  if ((iVar3 != 0) && (local_54 = 0, local_50 = param_1[2], -1 < iVar3)) {
    do {
      local_14 = (int)*(undefined8 *)param_1;
      local_14 = local_14 + (int)(uVar2 * local_54) / iVar3;
      iStack_10 = (int)((ulonglong)*(undefined8 *)param_1 >> 0x20);
      iStack_10 = iStack_10 + (int)(uVar6 * local_54) / iVar3;
      iV
```

---

## 59. `0x0052d5d0`  (581 bytes, 1 callers, 1 callees)

- **A** `cold_humid_color` (game)
- **B** `lib_fn_52d5d0` (lib)

```c
float * __thiscall FUN_0052d5d0(void *this,float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  dVar5 = (double)*(int *)((int)this + 0x800274) + (double)param_2 * 0.03;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800278) + (double)param_3 * 0.03);
  dVar5 = (double)*(int *)((int)this + 0x80027c) + (double)param_2 * 0.003;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)*(int *)((int)this + 0x800280) + (double)param_3 * 0.003);
  fVar4 = ((float)fVar1 + 1.0) * 0.5 * 80.0;
  fVar3 = ((float)fVar2 + 1.0) * 0.5;
  dVar5 = (double)param_2 * 0.01 + 493.0;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),(double)param_3 * 0.01 + 789.0
                      );
  fVar6 = 1.0 - fVar3;
  fVar7 = fVar6 * 255.0 + fVar3 * 255.0 + fVar4;
  fVar8 = fVar6 * ((float)fVar1 * 40.0 + 200.0) + fVar3 * 150.0 + fVar4;
  fVar4 = fVar6 * 
```

---

## 60. `0x0052db90`  (584 bytes, 1 callers, 1 callees)

- **A** `roadColor` (game)
- **B** `lib_fn_52db90` (lib)

```c
float * __thiscall FUN_0052db90(void *this,float *param_1,int param_2,int param_3,int param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  dVar6 = (double)param_3 * 0.01 + 98984.0;
  fVar1 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),(double)param_4 * 0.3 + 8437.0
                      );
  fVar2 = FUN_004d5d30(SUB84((double)param_2 * 0.01,0),
                       (int)((ulonglong)((double)param_2 * 0.01) >> 0x20),(double)param_4 * 0.3);
  dVar8 = (double)param_2 * 0.005;
  dVar7 = (double)param_3 * 0.005;
  dVar6 = (double)*(int *)((int)this + 0x800234) + dVar8;
  fVar3 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                       (double)*(int *)((int)this + 0x800238) + dVar7);
  dVar6 = (double)*(int *)((int)this + 0x80023c) + dVar8;
  fVar4 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                       (double)*(int *)((int)this + 0x800240) + dVar7);
  dVar8 = (double)*(int
```

---

## 61. `0x00522320`  (593 bytes, 1 callers, 1 callees)

- **A** `grass_base_color` (game)
- **B** `lib_fn_522320` (lib)

```c
float * FUN_00522320(float *param_1,int param_2,int param_3)

{
  float10 fVar1;
  float10 fVar2;
  float fVar3;
  float fVar4;
  double dVar5;
  float fVar6;
  float fVar7;
  float local_8;
  
  fVar1 = FUN_004d5d30(SUB84((double)param_2 * 0.04,0),
                       (int)((ulonglong)((double)param_2 * 0.04) >> 0x20),(double)param_3 * 0.04);
  fVar3 = ((float)fVar1 + 1.0) * 0.5;
  dVar5 = (double)param_2 * 0.005 + 45645.0;
  fVar1 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_3 * 0.005 + 456456.0);
  local_8 = -((float)fVar1 * 120.0);
  if (0.0 < local_8) {
    local_8 = 0.0;
  }
  dVar5 = (double)param_2 * 0.02 + 89648.0;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_3 * 0.02 + 1649.0);
  fVar4 = (float)fVar2 * 80.0 + 1.0;
  dVar5 = (double)param_2 * 0.005 + 342.0;
  fVar2 = FUN_004d5d30(SUB84(dVar5,0),(int)((ulonglong)dVar5 >> 0x20),
                       (double)param_3 * 0.005 + 23423.0);
  fVar7 = 1.0 - fVar3;
  fVar6 = fVar4 * fVar3;
  local_8 = fVar6 + fVar
```

---

## 62. `0x004d83a0`  (663 bytes, 3 callers, 2 callees)

- **A** `seed_init_cascade` (game)
- **B** `seedInit` (game)

```c
void __thiscall FUN_004d83a0(void *this,uint param_1,int *param_2)

{
  void *pvVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  basic_ostream<char,std::char_traits<char>_> *pbVar5;
  int *piVar6;
  undefined4 uVar7;
  char *unaff_EBX;
  undefined **ppuVar8;
  basic_iostream<char,std::char_traits<char>_>_vbtable *pbVar9;
  undefined **local_ec [2];
  basic_streambuf<char,std::char_traits<char>_> local_e4 [2];
  undefined1 local_dc [8];
  undefined4 *local_d4;
  undefined4 *local_c4;
  undefined4 *local_b4;
  undefined4 local_ac;
  uint local_a8;
  code *local_94 [18];
  int *local_4c;
  int local_48;
  basic_iostream<char,std::char_traits<char>_>_vbtable local_44;
  undefined4 local_3c;
  int local_38;
  int local_34;
  void *local_30;
  basic_iostream<char,std::char_traits<char>_>_vbtable *local_2c [4];
  undefined4 local_1c;
  uint local_18;
  char *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_00554c38;
  local_10 = ExceptionList;
  pcVar2 = (char *)(DAT_00583cc8 ^ (uint)&stack0xfffffffc);
  ExceptionList 
```

---

## 63. `0x00427000`  (717 bytes, 13 callers, 9 callees)

- **A** `entity_stack_push` (game)
- **B** `game_inventoryAccumulateCount` (lib)

```c
void __thiscall FUN_00427000(void *this,char *param_1,int param_2)

{
  int *piVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *local_248;
  int local_244;
  int *local_240;
  int local_23c;
  undefined1 local_238 [280];
  char local_120;
  char local_11f;
  short local_110;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  if (param_2 == -1) {
    param_2 = FUN_004282f0(param_1);
  }
  if (*param_1 == '\0') goto LAB_004272ba;
  if ((*(int *)((int)this + 4) - *(int *)this) / 0xc <= param_2) {
    FUN_0041f770(this,param_2 + 1);
  }
  FUN_00413710(&local_120,param_1);
  iVar6 = 1;
  if (((local_120 == '\f') || (local_120 == '\r')) || (local_120 == '\x15')) {
LAB_004270b0:
    iVar6 = (int)local_110;
    local_110 = 1;
  }
  else if (local_120 == '\v') {
    if (local_11f != '\x0e') goto LAB_004270b0;
  }
  else if (((local_120 == '\0') || (local_120 == '\x19')) ||
          ((local_120 == '\x14' || ((local_120 == '\x18' || (local_120 == '\x17'))))))
  goto LAB_004270b0;
  if (*param_1 == '\f') {
    cVar2 = param_1[0x
```

---

## 64. `0x0052cd50`  (731 bytes, 5 callers, 6 callees)

- **A** `climateGate` (game)
- **B** `World_sampleTerrainHeight` (game)

```c
float10 __thiscall FUN_0052cd50(void *param_1,uint param_2,float param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  float local_c;
  void *local_8;
  
  fVar1 = param_3;
  local_18 = (double)(int)param_3 * 0.001;
  local_20 = (double)(int)param_2 * 0.001;
  dVar10 = (double)*(int *)((int)param_1 + 0x800170) + (double)(int)param_2 * 0.01;
  local_8 = param_1;
  fVar7 = FUN_004d5d30(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),
                       (double)*(int *)((int)param_1 + 0x800174) + (double)(int)param_3 * 0.01);
  dVar10 = (double)*(int *)((int)local_8 + 0x800168) + local_20;
  fVar8 = FUN_004d5d30(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),
                       (double)*(int *)((int)local_8 + 0x80016c) + local_18);
  local_c = (float)fVar8;
  fVar9 = (float)fVar7 * 0.1 + local_c;
  fVar7 = FUN_004d5d30(SUB84(local_20,0),(int)((ulonglong)local_20 >> 0x20),local
```

---

## 65. `0x0052cd50`  (731 bytes, 5 callers, 6 callees)

- **A** `climate_river_gate` (game)
- **B** `climateGate` (game)

```c
float10 __thiscall FUN_0052cd50(void *param_1,uint param_2,float param_3,int param_4)

{
  float fVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  float10 fVar7;
  float10 fVar8;
  float fVar9;
  double dVar10;
  float fVar11;
  undefined8 local_20;
  undefined8 local_18;
  uint local_10;
  float local_c;
  void *local_8;
  
  fVar1 = param_3;
  local_18 = (double)(int)param_3 * 0.001;
  local_20 = (double)(int)param_2 * 0.001;
  dVar10 = (double)*(int *)((int)param_1 + 0x800170) + (double)(int)param_2 * 0.01;
  local_8 = param_1;
  fVar7 = FUN_004d5d30(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),
                       (double)*(int *)((int)param_1 + 0x800174) + (double)(int)param_3 * 0.01);
  dVar10 = (double)*(int *)((int)local_8 + 0x800168) + local_20;
  fVar8 = FUN_004d5d30(SUB84(dVar10,0),(int)((ulonglong)dVar10 >> 0x20),
                       (double)*(int *)((int)local_8 + 0x80016c) + local_18);
  local_c = (float)fVar8;
  fVar9 = (float)fVar7 * 0.1 + local_c;
  fVar7 = FUN_004d5d30(SUB84(local_20,0),(int)((ulonglong)local_20 >> 0x20),local
```

---

## 66. `0x004febd0`  (749 bytes, 2 callers, 2 callees)

- **A** `chunk_to_region_nearest` (game)
- **B** `World_findNearestFeatureCell` (gamemisc)

```c
void __thiscall FUN_004febd0(void *this,undefined8 *param_1,int param_2,int param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  uint *local_4c;
  int local_48;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar5 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar6 = (int)(param_3 + -0x4000 + (param_3 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar7 = (int)(param_2 + 0x4000 + (param_2 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar12 = (int)((param_2 + -0x4000 >> 0x1f & 0x3fffU) + param_2 + -0x4000) >> 0xe;
  fVar13 = FUN_004d5d30(SUB84((double)param_3 * 0.0005,0),
                        (int)((ulonglong)((double)param_3 * 0.0005) >> 0x20),3423.0);
  fVar14 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                        (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),23421.0);
  local_4c = (uint *)0x0;
  uVar8 = (uint)((float)param_2 + (float)fVar13 * 3.0 * 256.0);
  *(undefined4 *)param_1 = 0xffffffff;
  *(undef
```

---

## 67. `0x004d2500`  (762 bytes, 2 callers, 2 callees)

- **A** `solid_box` (game)
- **B** `lib_fn_4d2500` (lib)

```c
void __thiscall
FUN_004d2500(void *this,int param_1,int param_2,int param_3,int *param_4,int param_5,char param_6)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float10 fVar5;
  double dVar6;
  int local_40;
  undefined2 local_3c;
  undefined2 local_3a;
  undefined2 local_38;
  undefined2 local_36;
  undefined2 local_34;
  undefined2 local_32;
  undefined2 local_30;
  undefined2 local_2e;
  undefined2 local_2c;
  undefined1 local_2a;
  undefined1 local_29;
  int local_28;
  int local_24;
  void *local_20;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_14;
  undefined2 local_10;
  undefined2 local_c;
  undefined1 local_5;
  
  local_28 = 0;
  local_20 = this;
  if (0 < *param_4) {
    do {
      local_24 = 0;
      iVar3 = local_28;
      if (0 < param_4[1]) {
        do {
          local_40 = param_4[2] + -1;
          if (-1 < local_40) {
            fVar4 = (float)(param_1 + iVar3);
            uVar1 = param_2 + local_24;
            local_c = 0;
            local_5 = 0;
            iVar2 = param_3 + local_40;
            do {
              local_2c 
```

---

## 68. `0x0052c4e0`  (820 bytes, 5 callers, 6 callees)

- **A** `loot_weapon` (game)
- **B** `lib_fn_52c4e0` (lib)

```c
void FUN_0052c4e0(void *param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  void *pvVar3;
  void *local_138;
  int local_134;
  undefined4 local_130;
  undefined1 local_12c;
  char local_12b;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  char local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005561eb;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = (void *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_8 = 0;
  local_12b = 0;
  local_128 = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  local_120 = param_3;
  local_11f = 1;
  local_12c = 3;
  if ((param_4 == 1) || (pvVar3 = (void *)0x0, param_4 < 0)) {
    iVar1 = rand();
    local_12b = (char)(iVar1 % 3);
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&
```

---

## 69. `0x004d44c0`  (842 bytes, 1 callers, 5 callees)

- **A** `leaf_disk` (game)
- **B** `lib_fn_4d44c0` (lib)

```c
void __thiscall
FUN_004d44c0(void *this,int param_1,int param_2,int param_3,float param_4,byte *param_5,int param_6,
            char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  void *this_00;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  float fVar13;
  float10 fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  byte *pbVar18;
  undefined2 local_54;
  undefined1 local_52;
  undefined2 local_50;
  undefined1 local_4e;
  byte local_4d;
  float local_4c;
  byte *local_48;
  float local_44;
  void *local_40;
  int local_3c;
  float local_38 [6];
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  fVar4 = (float)param_1;
  fVar6 = (float)param_2;
  local_48 = param_5;
  local_3c = param_6;
  if (param_7 != '\0') {
    fVar4 = fVar4 + 0.5;
    fVar6 = fVar6 + 0.5;
  }
  fVar15 = (float)param_1 + param_4 + 1.0;
  fVar13 = (float)(int)(((float)param_1 - param_4) -
```

---

## 70. `0x00513400`  (864 bytes, 6 callers, 6 callees)

- **A** `textured_box` (game)
- **B** `lib_fn_513400` (lib)

```c
void __thiscall
FUN_00513400(void *this,int param_1,int param_2,int param_3,int *param_4,byte *param_5,float param_6
            ,int param_7,byte param_8)

{
  float *pfVar1;
  byte bVar2;
  int iVar3;
  void *this_00;
  int iVar4;
  undefined2 *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  int local_b4;
  undefined2 local_ac;
  undefined1 local_aa;
  byte local_a9;
  undefined2 local_a8;
  undefined1 local_a6;
  byte local_a5;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined2 local_a0;
  undefined1 local_9e;
  int local_9c;
  int local_98;
  void *local_94;
  uint local_90;
  int local_8c;
  float local_88;
  float fStack_84;
  float local_80;
  undefined8 local_7c;
  float local_74;
  undefined8 local_70;
  float local_68;
  int aiStack_64 [23];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar7 = 0;
  local_98 = param_7;
  local_94 = this;
  do {
    if ((uVar7 & 7) == 0) {
      iVar3 = rand();
      aiStack_64[uVar7] = iVar3 % 0x14;
    }
    else {
      aiStack_64[uVar7] = 0;
    }
    uVar7 = uVar7 + 1;
 
```

---

## 71. `0x004d4820`  (1013 bytes, 4 callers, 5 callees)

- **A** `tree_root_branch_sphere` (game)
- **B** `lib_fn_4d4820` (lib)

```c
void __thiscall
FUN_004d4820(void *this,int param_1,int param_2,int param_3,float param_4,byte *param_5,int param_6,
            char param_7,char param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 uVar7;
  void *this_00;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  float fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  byte *pbVar21;
  undefined2 local_4c;
  undefined1 local_4a;
  byte local_49;
  undefined2 local_48;
  undefined1 local_46;
  float local_44;
  void *local_40;
  int local_3c;
  float local_38 [6];
  undefined8 local_20;
  float local_18;
  undefined8 local_14;
  float local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  fVar4 = (float)param_1;
  fVar5 = (float)param_2;
  fVar6 = (float)param_3;
  local_3c = param_6;
  if (param_7 != '\0') {
    fVar4 = fVar4 + 0.5;
    fVar5 = fVar5 + 0.5;
    fVar6 = fVar6 + 0.5;
  }
  fVar17 = (float)param_1 + param_4 + 1.0;
  fVar15 = (flo
```

---

## 72. `0x005287b0`  (1077 bytes, 6 callers, 6 callees)

- **A** `prop_try_place` (game)
- **B** `lib_fn_5287b0` (lib)

```c
void __thiscall FUN_005287b0(void *this,int param_1,int param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  void *pvVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  int local_20;
  int local_c;
  
  uVar5 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  uVar14 = FUN_0054a946();
  iVar8 = *(int *)(param_1 + 0xc);
  uVar15 = __alldiv(*(uint *)(param_1 + 8) - (uint)uVar14,
                    (iVar8 - (int)(uVar14 >> 0x20)) - (uint)(*(uint *)(param_1 + 8) < (uint)uVar14),
                    0x10000,0);
  uVar13 = (uint)uVar15;
  lVar3 = uVar14 + CONCAT44(iVar8,*(undefined4 *)(param_1 + 8));
  uVar15 = __alldiv((uint)lVar3,(uint)((ulonglong)lVar3 >> 0x20),0x10000,0);
  iVar6 = (int)uVar15;
  uVar14 = FUN_0054a946();
  iVar8 = *(int *)(param_1 + 0x14);
  uVar15 = __alldiv(*(uint *)(param_1 + 0x10) - (uint)uVar14,
                    (iVar8 - (int)(uVar14 >> 0x20)) -
                    (uint)(*(uint *)(param_1 + 0x10) < (uint)uVar14),0x100
```

---

## 73. `0x004fd920`  (1083 bytes, 1 callers, 8 callees)

- **A** `bldg_asm_role2` (game)
- **B** `lib_fn_4fd920` (lib)

```c
void FUN_004fd920(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  void *this;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  int local_35c;
  undefined2 local_358;
  undefined1 local_350 [280];
  undefined1 local_238 [280];
  byte local_120 [4];
  undefined4 local_11c;
  uint local_118;
  undefined2 local_114;
  undefined1 local_112;
  undefined2 local_110;
  undefined1 local_10c [256];
  undefined4 local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_35c = 0;
  do {
    fVar8 = FUN_00411090((float)local_35c / 30.0);
    fVar9 = FUN_00411090(((float)local_35c + 0.99999) / 30.0);
    iVar2 = rand();
    iVar2 = (int)fVar8 + iVar2 % (((int)fVar9 - (int)fVar8) + 1);
    if (iVar2 < 1) {
      iVar2 = 1;
    }
    local_358 = (undefined2)iVar2;
    if (local_35c == 0) {
      local_358 = 1;
      local_11c = 0;
      local_118 = 0;
      local_114 = local_114 & 0xff00;
      local_112 = 0;
      local_c = 0;
      memset(local_10c,0,0x100);
      this = (void *)(param_1 + 0xf6c);
      local_
```

---

## 74. `0x004f9010`  (1085 bytes, 1 callers, 3 callees)

- **A** `corridor_connect` (game)
- **B** `lib_fn_4f9010` (lib)

```c
void __thiscall FUN_004f9010(void *this,int *param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar2 = *param_1 + *param_2;
  if ((*param_3 < iVar2) && (*param_1 < *param_4 + *param_3)) {
    iVar3 = *param_4 / 2 + *param_3;
    if (iVar3 < *param_1) {
      iVar3 = *param_1;
    }
    if (iVar2 <= iVar3) {
      iVar3 = iVar2 + -1;
    }
    local_10 = param_3[1];
    iVar2 = param_1[1];
    local_20 = iVar3;
    local_14 = iVar3;
    if (local_10 < iVar2) {
      local_10 = param_4[1] + local_10;
      local_c = param_3[2];
      local_18 = param_1[2];
      local_1c = iVar2;
      FUN_005234b0(this,&local_20,&local_14);
      uVar1 = rand();
      uVar1 = uVar1 & 0x80000001;
      bVar5 = uVar1 == 0;
      if ((int)uVar1 < 0) {
        bVar5 = (uVar1 - 1 | 0xfffffffe) == 0xffffffff;
      }
      if (((!bVar5) && (*param_1 < iVar3)) && (*param_3 < iV
```

---

## 75. `0x00522840`  (1137 bytes, 2 callers, 4 callees)

- **A** `biomeBorder` (game)
- **B** `World_computeSlopeShade` (gamemisc)

```c
void __thiscall FUN_00522840(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_48;
  double local_40;
  double local_38;
  int local_30;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  FUN_004febd0(this,(undefined8 *)&local_30,param_1,param_2);
  if ((((-1 < local_30) && (-1 < local_2c)) && (local_30 < 0x400)) && (local_2c < 0x400)) {
    iVar4 = local_30 * 0x400;
    piVar2 = *(int **)((int)this + (iVar4 + local_2c) * 4 + 0x4000bc);
    if (piVar2 != (int *)0x0) {
      local_48 = -1.0;
      local_20 = (double)param_2 * 0.01;
      dVar8 = (double)param_2 * 0.0005;
      local_10 = (double)param_1 * 0.01;
      dVar7 = (double)param_1 * 0.0005;
      dVar6 = (double)*(int *)((int)this + 0x800204) + local_10;
      fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                      
```

---

## 76. `0x00522840`  (1137 bytes, 2 callers, 4 callees)

- **A** `biome_border` (game)
- **B** `biomeBorder` (game)

```c
void __thiscall FUN_00522840(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int extraout_ECX;
  int extraout_ECX_00;
  float10 fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float local_48;
  double local_40;
  double local_38;
  int local_30;
  int local_2c;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  FUN_004febd0(this,(undefined8 *)&local_30,param_1,param_2);
  if ((((-1 < local_30) && (-1 < local_2c)) && (local_30 < 0x400)) && (local_2c < 0x400)) {
    iVar4 = local_30 * 0x400;
    piVar2 = *(int **)((int)this + (iVar4 + local_2c) * 4 + 0x4000bc);
    if (piVar2 != (int *)0x0) {
      local_48 = -1.0;
      local_20 = (double)param_2 * 0.01;
      dVar8 = (double)param_2 * 0.0005;
      local_10 = (double)param_1 * 0.01;
      dVar7 = (double)param_1 * 0.0005;
      dVar6 = (double)*(int *)((int)this + 0x800204) + local_10;
      fVar5 = FUN_004d5d30(SUB84(dVar6,0),(int)((ulonglong)dVar6 >> 0x20),
                      
```

---

## 77. `0x005236d0`  (1212 bytes, 1 callers, 1 callees)

- **A** `room_carve` (game)
- **B** `lib_fn_5236d0` (lib)

```c
void __thiscall FUN_005236d0(void *this,int *param_1,int *param_2,char param_3)

{
  uint uVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  int local_c;
  int local_8;
  
  if (((0 < *param_2) && (iVar7 = param_2[1], 0 < iVar7)) && (iVar2 = param_2[2], 0 < iVar2)) {
    iVar5 = *param_1;
    if (iVar5 < *param_2 + iVar5) {
      do {
        iVar10 = param_1[1];
        if (iVar10 < iVar10 + iVar7) {
          do {
            iVar7 = param_1[2];
            if (iVar7 < iVar7 + iVar2) {
              do {
                uVar1 = *(uint *)((int)this + 4) & 0x80000003;
                if ((int)uVar1 < 0) {
                  uVar1 = (uVar1 - 1 | 0xfffffffc) + 1;
                }
                if (uVar1 == 1) {
                  iVar9 = (*(int *)((int)this + 0xc) - iVar10) + -1;
                  iVar2 = iVar5;
                }
                else if (uVar1 == 2) {
                  iVar9 = (*(int *)((int)this + 0xc) - iVar5) + -1;
                  iVar2 = (*(int *)((int)this + 0
```

---

## 78. `0x004f8b40`  (1228 bytes, 14 callers, 2 callees)

- **A** `humidity_blend` (game)
- **B** `lib_fn_4f8b40` (lib)

```c
void __thiscall FUN_004f8b40(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float fVar18;
  uint *local_90;
  int local_84;
  undefined4 local_7c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar3 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_7c = (int)(param_1 + -0x4000 + (param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar4 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar5 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  fVar15 = FUN_004d5d30(SUB84((double)param_2 * 0.0005,0),
                        (int)((ulonglong)((double)param_2 * 0.0005) >> 0x20),3423.0);
  fVar16 = FUN_004d5d30(SUB84((double)param_1 * 0.0005,0),
                        (int)((u
```

---

## 79. `0x00528bf0`  (1240 bytes, 5 callers, 6 callees)

- **A** `loot_armor` (game)
- **B** `lib_fn_528bf0` (lib)

```c
void FUN_00528bf0(void *param_1,undefined2 param_2,undefined1 param_3,int param_4)

{
  void *pvVar1;
  uint uVar2;
  bool bVar3;
  void *local_138;
  int local_134;
  undefined4 local_130;
  undefined1 local_12c;
  undefined1 local_12b;
  int local_128;
  undefined4 local_124;
  undefined1 local_120;
  char local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005560db;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = (void *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_8 = 0;
  local_12b = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  local_120 = param_3;
  if ((param_4 == 1) || (param_4 < 0)) {
    local_11f = 1;
    local_12c = 7;
    local_128 = rand();
    local_128 = local_128 % 100;
    FUN_00528530(&local_138,&local_12c);
    local_12c = 4;
    local_128 = rand();
    local_128 = l
```

---

## 80. `0x0050b870`  (1252 bytes, 1 callers, 4 callees)

- **A** `genSite` (game)
- **B** `lib_fn_50b870` (lib)

```c
int * __thiscall FUN_0050b870(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x3ff < param_1)) || (0x3ff < param_2)) {
    return (int *)0x0;
  }
  iVar1 = param_1 * 0x400 + param_2;
  piVar2 = *(int **)((int)this + iVar1 * 4 + 0x4000bc);
  if (piVar2 != (int *)0x0) {
    return piVar2;
  }
  srand(param_1 + 0x108a + param_2 * 0x400 + *(int *)((int)this + 0x800188) * 3);
  piVar2 = operator_new(0x1c);
  piVar2[5] = param_2 * 0x400 + param_1 + *(int *)((int)this + 0x800188);
  *(undefined1 *)(piVar2 + 2) = 0;
  iVar3 = (int)*(float *)((int)this + 0x8000f0) +
          ((int)*(float *)((int)this + 0x8000f0) >> 0x1f & 0xffU);
  if ((param_1 != (int)((iVar3 >> 8) + (iVar3 >> 0x1f & 0x3fU)) >> 6) ||
     (bVar7 = true,
     iVar3 = (int)*(float *)((int)this + 0x8000f4) +
             ((int)*(float *)((int)this + 0x8000f4) >> 0x1f & 0xffU),
     param_2 != (int)((iVar3 >> 8)
```

---

## 81. `0x0050b870`  (1252 bytes, 1 callers, 4 callees)

- **A** `region_site_gen` (game)
- **B** `genSite` (game)

```c
int * __thiscall FUN_0050b870(void *this,int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  float10 fVar8;
  float10 fVar9;
  float fVar10;
  double dVar11;
  double dVar12;
  
  if ((((param_1 < 0) || (param_2 < 0)) || (0x3ff < param_1)) || (0x3ff < param_2)) {
    return (int *)0x0;
  }
  iVar1 = param_1 * 0x400 + param_2;
  piVar2 = *(int **)((int)this + iVar1 * 4 + 0x4000bc);
  if (piVar2 != (int *)0x0) {
    return piVar2;
  }
  srand(param_1 + 0x108a + param_2 * 0x400 + *(int *)((int)this + 0x800188) * 3);
  piVar2 = operator_new(0x1c);
  piVar2[5] = param_2 * 0x400 + param_1 + *(int *)((int)this + 0x800188);
  *(undefined1 *)(piVar2 + 2) = 0;
  iVar3 = (int)*(float *)((int)this + 0x8000f0) +
          ((int)*(float *)((int)this + 0x8000f0) >> 0x1f & 0xffU);
  if ((param_1 != (int)((iVar3 >> 8) + (iVar3 >> 0x1f & 0x3fU)) >> 6) ||
     (bVar7 = true,
     iVar3 = (int)*(float *)((int)this + 0x8000f4) +
             ((int)*(float *)((int)this + 0x8000f4) >> 0x1f & 0xffU),
     param_2 != (int)((iVar3 >> 8)
```

---

## 82. `0x0052c820`  (1325 bytes, 14 callers, 2 callees)

- **A** `featureFalloff` (game)
- **B** `World_objectFalloffWeight` (game)

```c
float10 __thiscall FUN_0052c820(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 local_2c;
  
  fVar1 = (float)param_1[4];
  if (fVar1 < 0.001) {
    return (float10)0;
  }
  uVar10 = param_1[6];
  if (((uVar10 != 0xb) && (uVar10 != 0xc)) && (uVar10 != 0xe)) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    if (uVar10 == 0xd) {
      uVar13 = FUN_0054a946();
      iVar11 = (int)(uVar13 >> 0x20);
      uVar7 = (uint)uVar13;
      uVar10 = *param_2;
      uVar4 = param_2[1];
      uVar13 = FUN_0054a946();
      iVar12 = (int)(uVar13 >> 0x20);
      uVar8 = (uint)uVar13;
      local_2c = CONCAT44((1 - iVar11) - (uint)(0x617d0000 < uVar7),0x617d0000 - uVar7);
      dVar5 = (double)local_2c;
      local_2c = CONCAT44((0x80 - iVar12) - (uint)(0xad580000 < uVar8),-0x52a80000 - uVar8);
      FUN_004d5d30(SUB84((double)local_2c * 1.52587890625e-05,0),
                   (int)((ulonglong)((do
```

---

## 83. `0x0052c820`  (1325 bytes, 14 callers, 2 callees)

- **A** `feature_falloff` (game)
- **B** `featureFalloff` (game)

```c
float10 __thiscall FUN_0052c820(uint *param_1,uint *param_2,uint *param_3)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  double dVar5;
  float fVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 local_2c;
  
  fVar1 = (float)param_1[4];
  if (fVar1 < 0.001) {
    return (float10)0;
  }
  uVar10 = param_1[6];
  if (((uVar10 != 0xb) && (uVar10 != 0xc)) && (uVar10 != 0xe)) {
    uVar2 = *param_3;
    uVar3 = param_3[1];
    if (uVar10 == 0xd) {
      uVar13 = FUN_0054a946();
      iVar11 = (int)(uVar13 >> 0x20);
      uVar7 = (uint)uVar13;
      uVar10 = *param_2;
      uVar4 = param_2[1];
      uVar13 = FUN_0054a946();
      iVar12 = (int)(uVar13 >> 0x20);
      uVar8 = (uint)uVar13;
      local_2c = CONCAT44((1 - iVar11) - (uint)(0x617d0000 < uVar7),0x617d0000 - uVar7);
      dVar5 = (double)local_2c;
      local_2c = CONCAT44((0x80 - iVar12) - (uint)(0xad580000 < uVar8),-0x52a80000 - uVar8);
      FUN_004d5d30(SUB84((double)local_2c * 1.52587890625e-05,0),
                   (int)((ulonglong)((do
```

---

## 84. `0x00522e20`  (1376 bytes, 6 callers, 2 callees)

- **A** `wetness` (game)
- **B** `World_waterProximityInfluence` (gamemisc)

```c
void __thiscall FUN_00522e20(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  uint *local_94;
  int local_8c;
  int local_80;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_1 + -0x4000 >> 0x1f & 0x3fffU) + param_1 + -0x4000) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  bVar3 = false;
  if (local_80 <= iVar6) {
    iVar11 = local_80 * 0x400 + 0x10002f;
    iVar10 = iVar5;
    iVar14 = local_80;
    iVar12 = iVar11;
joined_r0x00522ec4:
    do {
      if (iVar10 <= iVar13) {
        if ((((iVar
```

---

## 85. `0x00522e20`  (1376 bytes, 6 callers, 2 callees)

- **A** `wetness_flag_avg` (game)
- **B** `wetness` (game)

```c
void __thiscall FUN_00522e20(void *this,int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  float10 fVar16;
  float10 fVar17;
  float fVar18;
  float fVar19;
  uint *local_94;
  int local_8c;
  int local_80;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  uVar4 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  iVar5 = (int)(param_2 + -0x4000 + (param_2 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  iVar6 = (int)(param_1 + 0x4000 + (param_1 + 0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (int)((param_1 + -0x4000 >> 0x1f & 0x3fffU) + param_1 + -0x4000) >> 0xe;
  iVar13 = (int)((param_2 + 0x4000 >> 0x1f & 0x3fffU) + param_2 + 0x4000) >> 0xe;
  bVar3 = false;
  if (local_80 <= iVar6) {
    iVar11 = local_80 * 0x400 + 0x10002f;
    iVar10 = iVar5;
    iVar14 = local_80;
    iVar12 = iVar11;
joined_r0x00522ec4:
    do {
      if (iVar10 <= iVar13) {
        if ((((iVar
```

---

## 86. `0x0052d030`  (1426 bytes, 8 callers, 5 callees)

- **A** `ground_color` (game)
- **B** `lib_fn_52d030` (lib)

```c
float * __thiscall
FUN_0052d030(void *this,float *param_1,float param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  float local_28;
  float local_18;
  float local_8;
  
  dVar7 = (double)(int)param_3 * 0.1 + 98984.0;
  fVar3 = FUN_004d5d30(SUB84(dVar7,0),(int)((ulonglong)dVar7 >> 0x20),(double)param_4 * 0.4);
  uVar12 = SUB84((double)(int)param_2 * 0.1,0);
  uVar13 = (undefined4)((ulonglong)((double)(int)param_2 * 0.1) >> 0x20);
  fVar4 = FUN_004d5d30(uVar12,uVar13,(double)param_4 * 0.4);
  iVar2 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar2 == 0) {
    fVar5 = (float10)FUN_004f8b40(this,(int)param_2,param_3);
    fVar9 = (float)fVar5;
  }
  else {
    fVar9 = *(float *)(iVar2 + 8);
  }
  iVar2 = FUN_00406100(this,(uint)param_2,param_3,param_5);
  if (iVar2 == 0) {
    FUN_004f8570(this,param_2,param_3);
  }
  local_28 = 120.0;
  local_18 = 120.0;
  local_
```

---

## 87. `0x004f8570`  (1482 bytes, 13 callers, 4 callees)

- **A** `temperature` (game)
- **B** `lib_fn_4f8570` (lib)

```c
void __thiscall FUN_004f8570(void *this,float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint *local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  float local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  int local_80;
  void *local_7c;
  int local_78;
  float local_74;
  float local_70;
  uint *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_84 = (int)((int)param_1 + -0x4000 + ((int)param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (i
```

---

## 88. `0x004f8570`  (1482 bytes, 13 callers, 4 callees)

- **A** `temperature_blend` (game)
- **B** `temperature` (game)

```c
void __thiscall FUN_004f8570(void *this,float param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  float fVar5;
  uint *puVar6;
  float10 fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint *local_a4;
  int local_a0;
  int local_9c;
  uint local_98;
  float local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  int local_80;
  void *local_7c;
  int local_78;
  float local_74;
  float local_70;
  uint *local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  uint local_58;
  uint uStack_54;
  uint local_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined8 local_28;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_84 = (int)((int)param_1 + -0x4000 + ((int)param_1 + -0x4000 >> 0x1f & 0x3fffU)) >> 0xe;
  local_80 = (i
```

---

## 89. `0x004fae90`  (1509 bytes, 4 callers, 7 callees)

- **A** `rock_base_color` (game)
- **B** `lib_fn_4fae90` (lib)

```c
void __thiscall
FUN_004fae90(void *this,float *param_1,float param_2,uint param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  double dVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_28;
  float local_20;
  double local_1c;
  float local_14;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_10 = (double)(int)param_3;
  local_1c = (double)(int)param_2;
  dVar15 = local_10 * 0.1 + 98984.0;
  fVar7 = FUN_004d5d30(SUB84(dVar15,0),(int)((ulonglong)dVar15 >> 0x20),
                       (double)param_4 * 0.4 + 8437.0);
  fVar8 = FUN_004d5d30(SUB84(local_1c * 0.1,0),(int)((ulonglong)(local_1c * 0.1) >> 0x20),
                       (double)param_4 * 0.4);
  local_10 = local_10 * 0.01;
  local_1c = local_1c * 0.01;
  fVar12 = (((float)fVar7 + (float)fVar8) * 0.5 + 1.0) * 0.5;
  dVar15 = (double)*(int *)((int)this + 
```

---

## 90. `0x004ffbf0`  (1802 bytes, 3 callers, 9 callees)

- **A** `tree_canopy_ellipsoid` (game)
- **B** `lib_fn_4ffbf0` (lib)

```c
void __thiscall
FUN_004ffbf0(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
            int param_7)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  void *this_00;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  float *pfVar8;
  float fVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float10 fVar14;
  double dVar15;
  double dVar16;
  float local_64;
  int local_60;
  undefined4 *local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  void *local_48;
  int local_44;
  int local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  float local_20;
  float local_1c;
  undefined4 local_18;
  float local_14;
  double local_10;
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  local_40 = param_2;
  local_44 = param_5;
  fVar9 = (float)(param_1 + param_4 * -2);
  local_60 = param_4 * 2 + param_1;
  local_34 = param_1;
  local_28 = param_7;
  local_5c = &DAT_005842c0;
  local_48 = this;
  local_24 
```

---

## 91. `0x004f9450`  (1822 bytes, 5 callers, 12 callees)

- **A** `surfaceCover` (game)
- **B** `lib_fn_4f9450` (lib)

```c
void __thiscall
FUN_004f9450(void *this,undefined4 *param_1,float param_2,float param_3,int param_4,float param_5,
            float param_6,int param_7)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float local_40;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  *param_1 = 0x4000000;
  pfVar1 = FUN_00522320(&local_20,(int)param_2,(int)param_3);
  local_40 = *pfVar1;
  local_30 = pfVar1[1];
  local_28 = pfVar1[2];
  local_14[0] = local_40;
  local_14[1] = local_30;
  local_14[2] = local_28;
  fVar5 = FUN_0052cd50(this,(uint)param_2,param_3,param_7);
  local_2c = ((float)fVar5 * 10.0 - 0.3) * 1.5;
  if (0.0 <= local_2c) {
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
  }
  else {
    local_2c = 0.0;
  }
  if (0.8 < param_6) {
    local_24 = (param_6 - 0.8) / 0.1;
    if (1.0 < local_24) {
      l
```

---

## 92. `0x004f9450`  (1822 bytes, 5 callers, 12 callees)

- **A** `surface_cover_placer` (game)
- **B** `surfaceCover` (game)

```c
void __thiscall
FUN_004f9450(void *this,undefined4 *param_1,float param_2,float param_3,int param_4,float param_5,
            float param_6,int param_7)

{
  float *pfVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float fVar6;
  double dVar7;
  float fVar8;
  float local_40;
  uint local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  uint local_1c;
  uint local_18;
  float local_14 [3];
  uint local_8;
  
  local_8 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  *param_1 = 0x4000000;
  pfVar1 = FUN_00522320(&local_20,(int)param_2,(int)param_3);
  local_40 = *pfVar1;
  local_30 = pfVar1[1];
  local_28 = pfVar1[2];
  local_14[0] = local_40;
  local_14[1] = local_30;
  local_14[2] = local_28;
  fVar5 = FUN_0052cd50(this,(uint)param_2,param_3,param_7);
  local_2c = ((float)fVar5 * 10.0 - 0.3) * 1.5;
  if (0.0 <= local_2c) {
    if (1.0 < local_2c) {
      local_2c = 1.0;
    }
  }
  else {
    local_2c = 0.0;
  }
  if (0.8 < param_6) {
    local_24 = (param_6 - 0.8) / 0.1;
    if (1.0 < local_24) {
      l
```

---

## 93. `0x00523d80`  (1920 bytes, 3 callers, 9 callees)

- **A** `landMask` (game)
- **B** `lib_fn_523d80` (lib)

```c
void FUN_00523d80(uint param_1,float param_2,float param_3)

{
  uint *this;
  uint *puVar1;
  uint uVar2;
  float10 fVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_90 [4];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint local_7c;
  void *local_78;
  uint local_74;
  uint local_6c;
  float local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  float local_28;
  uint local_20 [5];
  uint local_c;
  
  local_c = DAT_00583cc8 ^ (uint)auStack_90;
  local_60 = (double)(int)param_2 * 0.01;
  local_58 = (double)(int)param_1 * 0.01;
  local_6c = param_1;
  local_84 = param_2;
  local_68 = param_3;
  fVar3 = FUN_004d5d30(SUB84(local_58,0),(int)((ulonglong)local_58 >> 0x20),local_60);
  local_80 = (float)fVar3;
  local_8c = 1.0 - local_80 * local_80;
  dVar4 = (double)*(int *)((int)local_78 + 0x8001dc) + local_58 + 843.0;
  fVar3 = FUN_004d5d30(SUB84(dVar4,0),(int)((u
```

---

## 94. `0x00523d80`  (1920 bytes, 3 callers, 9 callees)

- **A** `land_mask` (game)
- **B** `landMask` (game)

```c
void FUN_00523d80(uint param_1,float param_2,float param_3)

{
  uint *this;
  uint *puVar1;
  uint uVar2;
  float10 fVar3;
  double dVar4;
  float fVar5;
  undefined1 auStack_90 [4];
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint local_7c;
  void *local_78;
  uint local_74;
  uint local_6c;
  float local_68;
  uint local_64;
  undefined8 local_60;
  undefined8 local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  uint local_2c;
  float local_28;
  uint local_20 [5];
  uint local_c;
  
  local_c = DAT_00583cc8 ^ (uint)auStack_90;
  local_60 = (double)(int)param_2 * 0.01;
  local_58 = (double)(int)param_1 * 0.01;
  local_6c = param_1;
  local_84 = param_2;
  local_68 = param_3;
  fVar3 = FUN_004d5d30(SUB84(local_58,0),(int)((ulonglong)local_58 >> 0x20),local_60);
  local_80 = (float)fVar3;
  local_8c = 1.0 - local_80 * local_80;
  dVar4 = (double)*(int *)((int)local_78 + 0x8001dc) + local_58 + 843.0;
  fVar3 = FUN_004d5d30(SUB84(dVar4,0),(int)((u
```

---

## 95. `0x0050bd60`  (2010 bytes, 2 callers, 6 callees)

- **A** `grass_ellipsoid` (game)
- **B** `lib_fn_50bd60` (lib)

```c
void FUN_0050bd60(int param_1,int param_2,int param_3,float param_4,float param_5,undefined8 param_6
                 ,float param_7,undefined8 param_8,float param_9,int param_10,int param_11)

{
  float *pfVar1;
  float fVar2;
  undefined8 uVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  void *pvVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  float fVar19;
  float fVar20;
  bool bVar21;
  float10 fVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double dVar28;
  double dVar29;
  double dVar30;
  float fVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  undefined2 local_98;
  undefined1 local_96;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined8 local_88;
  double local_80;
  void *local_78;
  int local_74;
  float local_70;
  float local_6c;
  undefined8 loca
```

---

## 96. `0x004e0740`  (2035 bytes, 1 callers, 13 callees)

- **A** `deco_site_accept` (game)
- **B** `lib_fn_4e0740` (lib)

```c
void __thiscall FUN_004e0740(void *this,int param_1,uint *param_2)

{
  uint *this_00;
  int *piVar1;
  int *piVar2;
  undefined4 *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  float10 fVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  uint local_360;
  uint local_35c;
  void *local_354 [2];
  int local_34c;
  int local_348;
  int local_344;
  int local_340;
  uint local_33c;
  uint local_338;
  uint local_334;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined4 *local_30c;
  undefined4 *local_308;
  int local_1cc [4];
  int local_1bc;
  int local_1b8;
  uint local_1b4;
  uint local_1b0;
  uint local_1ac;
  int local_1a8;
  int iStack_1a4;
  int local_1a0;
  undefined1 local_19c;
  int local_198;
  int local_194;
  undefined8 local_18c;
  undefined4 *local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  int local_178;
  undefined2 local_174 [2];
  undefined4 local_170;
  undefined4 local_16c;
  undefined2 local_168;
  undefined1 local_166;
  undefined2 local_164;
  und
```

---

## 97. `0x004e28e0`  (2083 bytes, 1 callers, 7 callees)

- **A** `townBuilder` (game)
- **B** `lib_fn_4e28e0` (lib)

```c

```

---

## 98. `0x004e28e0`  (2083 bytes, 1 callers, 7 callees)

- **A** `town_builder` (game)
- **B** `townBuilder` (game)

```c

```

---

## 99. `0x0052b470`  (2765 bytes, 2 callers, 7 callees)

- **A** `equipment_roller` (game)
- **B** `lib_fn_52b470` (lib)

```c
void FUN_0052b470(void *param_1,undefined2 param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  void *local_138;
  int local_134;
  undefined4 local_130;
  byte local_12c [4];
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120;
  undefined1 local_11f;
  undefined1 local_11e;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  puStack_c = &LAB_005561ab;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_138 = (void *)0x0;
  local_134 = 0;
  local_130 = 0;
  local_8 = 0;
  local_128 = 0;
  local_124 = 0;
  local_11e = 0;
  local_18 = 0;
  memset(local_118,0,0x100);
  local_11c = param_2;
  rand();
  rand();
  rand();
  rand();
  local_11f = 1;
  local_12c[0] = 3;
  iVar2 = rand();
  iVar6 = param_3 + 1;
  local_12c[1] = (char)(iVar2 % 3);
  iVar2 = rand();
  iVar2 = iVar2 % iVar6;
  iVar3 = rand();
  if (iVar3 % 100 == 0) {
    
```

---

## 100. `0x004fb480`  (2867 bytes, 5 callers, 4 callees)

- **A** `creature_base_stats` (game)
- **B** `lib_fn_4fb480` (lib)

```c
void ** FUN_004fb480(int param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  void *pvVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  void **ppvVar7;
  bool bVar8;
  float fVar9;
  int local_1c;
  int local_18;
  undefined4 local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  iVar3 = param_1;
  local_8 = 0xffffffff;
  puStack_c = &LAB_005556d8;
  local_10 = ExceptionList;
  if ((*(ushort *)(param_1 + 0x7a) & 0x40) != 0) {
    return &local_10;
  }
  cVar4 = *(char *)(param_1 + 0x30);
  ppvVar7 = (void **)CONCAT31((int3)((uint)&local_10 >> 8),cVar4);
  ExceptionList = &local_10;
  if (cVar4 == -0x78) {
LAB_004fbf3e:
    *(undefined2 *)(param_1 + 0x350) = 4;
    *(undefined1 *)(param_1 + 0x35d) = 6;
    iVar6 = rand();
    ppvVar7 = (void **)(iVar6 / 5);
    *(char *)(iVar3 + 0x351) = (char)(iVar6 % 5) + '\x02';
LAB_004fbf77:
    *(undefined4 *)(iVar3 + 0xf60) = 0x3dcccccd;
    *(undefined4 *)(iVar3 + 0xf5c) = 0x3e99999a;
    *(undefined4 *)(iVar3 + 0xf64) = 0x41200000;
    *(undefined4 *)(iVar3 + 0xf68) = 0x41200000;
    ExceptionList = local
```

---

## 101. `0x004fde90`  (3381 bytes, 1 callers, 9 callees)

- **A** `bldg_asm_role35` (game)
- **B** `lib_fn_4fde90` (lib)

```c
void FUN_004fde90(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  int local_144;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  float local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  byte local_120;
  undefined2 local_11f;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055570b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = 0;
  do {
    fVar10 = FUN_00411090((float)local_144 / 30.0);
    local_130 = (float)fVar10;
    fVar11 = FUN_00411090(((float)local_144 + 0.99999) / 30.0);
    local_130 = (float)fVar11;
    iVar2 = rand();
    local_13c = (undefined4 *)0x0;
    local_138 = (void *)0x0;
    local_134 = (undefined4 *)0x0;
    iVar2
```

---

## 102. `0x004f9b70`  (4874 bytes, 4 callers, 10 callees)

- **A** `baseHeight` (game)
- **B** `World_generateBiomeSample` (game)

```c
void __thiscall FUN_004f9b70(void *this,uint param_1,float param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  uint *local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
  uint local_134;
  float local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  uint local_f0;
  int local_ec;
  int local_e8;
  float local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0
```

---

## 103. `0x004f9b70`  (4874 bytes, 4 callers, 10 callees)

- **A** `base_height_carve_level` (game)
- **B** `baseHeight` (game)

```c
void __thiscall FUN_004f9b70(void *this,uint param_1,float param_2,int param_3)

{
  uint *puVar1;
  longlong lVar2;
  float fVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  float10 fVar10;
  double dVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  ulonglong uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  uint *local_15c;
  float local_158;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  double local_140;
  uint local_134;
  float local_130;
  uint local_12c;
  uint local_128;
  float local_124;
  undefined8 local_120;
  double local_118;
  double local_110;
  undefined8 local_108;
  undefined8 local_100;
  double local_f8;
  uint local_f0;
  int local_ec;
  int local_e8;
  float local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0
```

---

## 104. `0x004fc180`  (6033 bytes, 1 callers, 9 callees)

- **A** `bldg_asm_role4` (game)
- **B** `lib_fn_4fc180` (lib)

```c
void FUN_004fc180(int param_1)

{
  char *pcVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined2 uVar7;
  undefined4 *puVar8;
  byte bVar9;
  float10 fVar10;
  float10 fVar11;
  int local_144;
  undefined4 *local_13c;
  undefined4 *local_138;
  undefined4 *local_134;
  float local_130;
  undefined4 local_12c;
  int local_128;
  undefined4 local_124;
  byte local_120;
  undefined2 local_11f;
  undefined2 local_11c;
  undefined1 local_118 [256];
  undefined4 local_18;
  uint local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &LAB_0055570b;
  local_10 = ExceptionList;
  local_14 = DAT_00583cc8 ^ (uint)&stack0xfffffffc;
  ExceptionList = &local_10;
  local_144 = 0;
  do {
    fVar10 = FUN_00411090((float)local_144 / 30.0);
    local_130 = (float)fVar10;
    fVar11 = FUN_00411090(((float)local_144 + 0.99999) / 30.0);
    local_130 = (float)fVar11;
    iVar2 = rand();
    local_13c = (undefined4 *)0x0;
    local_138 = (void *)0x0;
    local_134 = (undefined4 *)0x0;
    iVar2
```

---

## 105. `0x00500300`  (6267 bytes, 1 callers, 10 callees)

- **A** `dungeonAssembler` (game)
- **B** `lib_fn_500300` (lib)

```c

```

---

## 106. `0x00500300`  (6267 bytes, 1 callers, 10 callees)

- **A** `dungeon_assembler` (game)
- **B** `dungeonAssembler` (game)

```c

```

---

## 107. `0x00509e40`  (6696 bytes, 1 callers, 32 callees)

- **A** `ambient_spawner` (game)
- **B** `stl_fn_509e40` (lib)
- strings: 'list<T> too long', 'vector<T> too long'

```c
/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_00509e40(void *this,int param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  WalkPathBehavior *pWVar3;
  undefined4 *puVar4;
  int *piVar5;
  vfunction1 *pvVar6;
  undefined4 *puVar7;
  SequentialBehavior *this_00;
  int *piVar8;
  char *pcVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  int iVar13;
  Spawn *pSVar14;
  uint uVar15;
  LookAtPlayerBehavior_vftable *pLVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int *piVar20;
  uint uVar21;
  SequentialBehavior *pSVar22;
  LookAtPlayerBehavior *pLVar23;
  SequentialBehavior_data *pSVar24;
  void *pvVar25;
  bool bVar26;
  double dVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined4 local_250;
  uint local_24c;
  uint local_248;
  undefined4 local_244;
  uint local_240;
  SequentialBehavior *local_23c;
  WalkPathBehavior *local_238 [2];
  WalkPathBehavior *local_230 [2];
  WalkPathBehavior *local_228 [2];
  WalkPathBehavior *local_220;
  WalkPathBehavior *local_21c;
  WalkPathBehavior *local_218 [3];
  CombatBehavior *local_20
```

---

## 108. `0x005104e0`  (7192 bytes, 1 callers, 15 callees)

- **A** `structure_populator_contested` (game)
- **B** `lib_fn_5104e0` (lib)

```c
void __thiscall FUN_005104e0(void *this,int param_1,uint *param_2,int *param_3)

{
  undefined1 *puVar1;
  CombatBehavior_vftable **ppCVar2;
  CombatBehavior_vftable **ppCVar3;
  vfunction2 *pvVar4;
  longlong lVar5;
  longlong lVar6;
  SequentialBehavior *pSVar7;
  Spawn *pSVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  _Container_base0 *p_Var11;
  char cVar12;
  uint uVar13;
  uint uVar14;
  Spawn *pSVar15;
  int iVar16;
  WalkPathBehavior *pWVar17;
  Spawn *pSVar18;
  int *piVar19;
  int iVar20;
  uint *puVar21;
  uint *puVar22;
  undefined4 *puVar23;
  SequentialBehavior_data *pSVar24;
  uint *puVar25;
  _Container_base0 *this_00;
  void *pvVar26;
  Spawn_data *pSVar27;
  code *pcVar28;
  uint uVar29;
  bool bVar30;
  float10 fVar31;
  float fVar32;
  double dVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  undefined4 local_7bc;
  undefined4 local_7b8;
  undefined4 local_7b4;
  undefined4 local_7b0;
  undefined4 local_7ac;
  undefined4 local_7a8;
  undefined4 local_7a4;
  undefined4 local_7a0;
  undefined4 local_79c;
  undefined4 local_798;
  int local_794;
  int local_790
```

---

## 109. `0x00513760`  (7494 bytes, 3 callers, 15 callees)

- **A** `forestTreeBuilder` (game)
- **B** `lib_fn_513760` (lib)

```c
/* WARNING: Removing unreachable block (ram,0x00516958) */
/* WARNING: Removing unreachable block (ram,0x005169f1) */

void FUN_00513760(float param_1,uint param_2,float param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  uint uVar9;
  void *pvVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 *puVar34;
  float fVar35;
  int local_814 [4];
  int local_804 [4];
  int local_7f4 [4];
  int local_7e4 [4];
  int local_7d4 [4];
  int local_7c4 [4];
  int local_7b4 [4];
  int local_7a4 [4];
  int local_794;
  uint local_790;
  float local_78c [32];
  double local_70c;
  un
```

---

## 110. `0x00513760`  (7494 bytes, 3 callers, 15 callees)

- **A** `plant_blob_generator` (game)
- **B** `forestTreeBuilder` (game)

```c
/* WARNING: Removing unreachable block (ram,0x00516958) */
/* WARNING: Removing unreachable block (ram,0x005169f1) */

void FUN_00513760(float param_1,uint param_2,float param_3,int param_4,int param_5,int param_6,
                 int param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  int iVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float fVar8;
  uint uVar9;
  void *pvVar10;
  undefined2 *puVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  code *pcVar18;
  uint uVar19;
  bool bVar20;
  float10 fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  double dVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  ulonglong uVar29;
  undefined8 uVar30;
  ulonglong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined4 *puVar34;
  float fVar35;
  int local_814 [4];
  int local_804 [4];
  int local_7f4 [4];
  int local_7e4 [4];
  int local_7d4 [4];
  int local_7c4 [4];
  int local_7b4 [4];
  int local_7a4 [4];
  int local_794;
  uint local_790;
  float local_78c [32];
  double local_70c;
  un
```

---

## 111. `0x0050e080`  (9264 bytes, 1 callers, 39 callees)

- **A** `feature_grid_gen` (game)
- **B** `featureGrid` (game)
- strings: 'mission', 'monster', 'vector<T> too long'

```c
/* WARNING: Removing unreachable block (ram,0x0050eac3) */

void __thiscall FUN_0050e080(void *this,int param_1,int param_2)

{
  float *pfVar1;
  uint *puVar2;
  longlong lVar3;
  float *pfVar4;
  void *this_00;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  basic_ostream<char,std::char_traits<char>_> *pbVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 *puVar13;
  undefined4 extraout_ECX;
  float *pfVar14;
  uint uVar15;
  undefined4 extraout_EDX;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar16;
  Region *pRVar17;
  int iVar18;
  uint uVar19;
  basic_iostream<char,std::char_traits<char>_>_vbtable *pbVar20;
  code *pcVar21;
  float fVar22;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar23;
  int iVar24;
  uint uVar25;
  float fVar26;
  undefined4 *puVar27;
  float10 fVar28;
  double dVar29;
  ulonglong uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  char *in_stack_fffffcac;
  basic_ostream<char,struct_std::char_traits<char>_> *pbVar33;
  char *pcVar34;
  float fVar35;
  undefined1 auStack_324 [4];
  int iStack_
```

---

## 112. `0x00524540`  (15842 bytes, 7 callers, 51 callees)

- **A** `model_entity_place` (game)
- **B** `lib_fn_524540` (lib)
- strings: 'list<T> too long'

```c
void __thiscall
FUN_00524540(void *this,void *param_1,uint *param_2,uint param_3,undefined4 param_4,int param_5,
            int param_6,char param_7,int *param_8,int param_9)

{
  Spawn_vftable **ppSVar1;
  void *this_00;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  void *pvVar6;
  undefined4 *puVar7;
  Spawn_vftable *pSVar8;
  _Container_base0 *p_Var9;
  undefined *puVar10;
  uint *puVar11;
  int *piVar12;
  uint *puVar13;
  SequentialBehavior *pSVar14;
  undefined1 *puVar15;
  float *pfVar16;
  Spawn *pSVar17;
  uint **ppuVar18;
  int iVar19;
  undefined1 *puVar20;
  int iVar21;
  _Container_base0 *this_01;
  float fVar22;
  bool bVar23;
  float10 fVar24;
  ulonglong uVar25;
  ulonglong uVar26;
  SequentialBehavior_vftable *pSVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 uVar31;
  ulonglong uVar30;
  undefined4 uVar32;
  undefined1 uVar33;
  undefined4 uVar34;
  int iVar35;
  undefined1 local_880 [4];
  undefined1 local_87c [4];
  undefined1 local_878 [4];
  undefined1 local_874 [4];
  undefined1 local_870 [4];
  undefined1 local_86c [4];
  undefined1
```

---

## 113. `0x00431400`  (187427 bytes, 1 callers, 23 callees)

- **A** `cub_loader_server` (game)
- **B** `game_loadVoxelModelsFromDb` (lib)
- strings: 'body2.cub', 'body3.cub', 'body4.cub'

```c

```

