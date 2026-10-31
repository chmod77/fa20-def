
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b5a8c(char param_1,uint param_2,undefined2 *param_3)

{
  undefined *puVar1;
  
  param_2 = param_2 & 0xffff;
  if (param_1 == '\0') {
    if (DAT_fffec74e != '\0') {
      _DAT_fffec74c = 0;
      DAT_fffec74e = '\0';
    }
  }
  else {
    if (param_2 != 0) {
      if (param_2 * 0xb == 0) {
        _DAT_fffec750 = 0xffff;
      }
      else {
        puVar1 = (undefined *)__udiv32_r1_by_r0(0x545d0000,param_2 * 0xb);
        if (&DAT_0000ffff < puVar1) {
          puVar1 = &DAT_0000ffff;
        }
        _DAT_fffec750 = (ushort)puVar1;
      }
    }
    if (param_2 == 0) {
      _DAT_fffec74c = 0x1746;
    }
    else {
      _DAT_fffec74c = _DAT_fffec750;
    }
    DAT_fffec74e = '\x01';
  }
  puVar1 = (undefined *)((uint)_DAT_fffec74c * 0xb);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  *param_3 = (short)puVar1;
  return;
}

