
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e6794(byte param_1,undefined2 param_2,char param_3,undefined2 *param_4)

{
  if (DAT_fffed356 < param_1) {
    _DAT_fffed354 = param_2;
  }
  if (param_3 != '\0') {
    _DAT_fffed354 = 0;
  }
  *param_4 = _DAT_fffed354;
  DAT_fffed356 = param_1;
  return;
}

