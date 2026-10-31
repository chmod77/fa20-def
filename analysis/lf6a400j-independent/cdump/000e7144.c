
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7144(char param_1,char param_2,short *param_3)

{
  if ((param_2 == '\0') || (param_1 == '\0')) {
    _DAT_fffed3a0 = 0;
  }
  else {
    _DAT_fffed3a0 = _DAT_fffed3a0 + 1;
  }
  *param_3 = _DAT_fffed3a0;
  return;
}

