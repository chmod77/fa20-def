
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da7b4(undefined2 param_1,char param_2,undefined2 *param_3)

{
  if (param_2 == '\0') {
    *param_3 = _DAT_fffed014;
  }
  else {
    *param_3 = 0x8000;
  }
  _DAT_fffed014 = param_1;
  return;
}

