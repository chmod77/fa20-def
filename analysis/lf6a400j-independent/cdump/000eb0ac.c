
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb0ac(char param_1,short *param_2)

{
  short sVar1;
  
  sVar1 = 0;
  if ((param_1 == DAT_fffed4d6) && (sVar1 = -1, _DAT_fffed4d4 != -1)) {
    sVar1 = _DAT_fffed4d4 + 1;
  }
  *param_2 = sVar1;
  DAT_fffed4d6 = param_1;
  _DAT_fffed4d4 = sVar1;
  return;
}

