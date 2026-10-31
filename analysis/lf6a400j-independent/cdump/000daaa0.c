
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000daaa0(undefined2 param_1,char param_2,undefined2 *param_3,undefined2 *param_4)

{
  if (param_2 == '\0') {
    *param_3 = _DAT_fffed032;
    *param_4 = _DAT_fffed030;
  }
  else {
    *param_3 = 0x8000;
    *param_4 = 0x8000;
  }
  _DAT_fffed032 = _DAT_fffed030;
  _DAT_fffed030 = param_1;
  return;
}

