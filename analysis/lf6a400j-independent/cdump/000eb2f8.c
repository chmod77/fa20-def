
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb2f8(byte param_1,undefined2 param_2,undefined2 *param_3)

{
  if (DAT_fffed4f6 <= param_1) {
    param_2 = _DAT_fffed4f4;
  }
  *param_3 = param_2;
  _DAT_fffed4f4 = param_2;
  DAT_fffed4f6 = param_1;
  return;
}

