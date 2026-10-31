
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afa74(char param_1,short *param_2)

{
  short sVar1;
  
  if (((DAT_fffec5ea != '\0') || (sVar1 = 0, param_1 == '\0')) &&
     (sVar1 = _DAT_fffec5e8 + 1, sVar1 == 0)) {
    sVar1 = -1;
  }
  *param_2 = sVar1;
  DAT_fffec5ea = param_1;
  _DAT_fffec5e8 = sVar1;
  return;
}

