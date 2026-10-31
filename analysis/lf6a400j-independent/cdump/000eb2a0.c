
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb2a0(byte param_1,undefined2 param_2,undefined2 *param_3)

{
  if (param_1 <= DAT_fffed4ee) {
    param_2 = _DAT_fffed4ec;
  }
  *param_3 = param_2;
  _DAT_fffed4ec = param_2;
  DAT_fffed4ee = param_1;
  return;
}

