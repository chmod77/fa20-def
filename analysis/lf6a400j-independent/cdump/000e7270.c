
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7270(byte param_1,undefined2 param_2,undefined2 *param_3)

{
  if (param_1 <= DAT_fffed3ba) {
    param_2 = _DAT_fffed3b8;
  }
  *param_3 = param_2;
  _DAT_fffed3b8 = param_2;
  DAT_fffed3ba = param_1;
  return;
}

