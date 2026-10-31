
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e67c4(byte param_1,undefined2 param_2,char param_3,undefined2 *param_4)

{
  if (DAT_fffed35a < param_1) {
    _DAT_fffed358 = param_2;
  }
  if (param_3 != '\0') {
    _DAT_fffed358 = 0;
  }
  *param_4 = _DAT_fffed358;
  DAT_fffed35a = param_1;
  return;
}

