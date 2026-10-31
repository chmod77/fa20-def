
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f424(byte param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  
  if (param_1 != 0) {
    if (param_1 == 0) {
      _DAT_fffeba64 = 0xffff;
    }
    else {
      puVar1 = (undefined *)__udiv32_r1_by_r0((param_2 & 0xffff) * 0x32,(uint)param_1);
      if (&DAT_0000ffff < puVar1) {
        puVar1 = &DAT_0000ffff;
      }
      _DAT_fffeba64 = SUB42(puVar1,0);
    }
  }
  if (param_1 == 0) {
    *param_3 = 0xffff;
  }
  else {
    *param_3 = _DAT_fffeba64;
  }
  return;
}

