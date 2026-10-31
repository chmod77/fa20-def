
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb02c(char param_1,char param_2,short *param_3)

{
  short sVar1;
  
  sVar1 = _DAT_fffed4c8;
  if (((param_1 != '\0') && (param_2 != DAT_fffed4ca)) && (sVar1 = -1, _DAT_fffed4c8 != -1)) {
    sVar1 = _DAT_fffed4c8 + 1;
  }
  *param_3 = sVar1;
  DAT_fffed4ca = param_2;
  _DAT_fffed4c8 = sVar1;
  return;
}

