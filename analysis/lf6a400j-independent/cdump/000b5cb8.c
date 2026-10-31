
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b5cb8(ushort param_1,undefined2 *param_2)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    if (param_1 == 0) {
      _DAT_fffec754 = 0xffff;
    }
    else {
      puVar1 = (undefined *)__udiv32_r1_by_r0(0x545d0000,(uint)param_1);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      _DAT_fffec754 = SUB42(puVar1,0);
    }
  }
  if (param_1 == 0) {
    *param_2 = 0xffff;
  }
  else {
    *param_2 = _DAT_fffec754;
  }
  return;
}

