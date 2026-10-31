
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e327c(char param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = _DAT_fffed270;
  if ((param_1 != '\0') && (sVar1 = -1, _DAT_fffed270 != -1)) {
    sVar1 = _DAT_fffed270 + 1;
  }
  *param_2 = sVar1;
  _DAT_fffed270 = sVar1;
  return;
}

