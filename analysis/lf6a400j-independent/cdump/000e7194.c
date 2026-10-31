
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e7194(char param_1,short param_2,char param_3,short *param_4)

{
  short sVar1;
  
  sVar1 = 16000;
  if ((param_1 != '\0') && (sVar1 = _DAT_fffed3a8, param_2 < _DAT_fffed3a8)) {
    sVar1 = param_2;
  }
  if ((param_3 != '\0') || (DAT_fffed3aa == '\0')) {
    sVar1 = 16000;
  }
  *param_4 = sVar1;
  _DAT_fffed3a8 = sVar1;
  DAT_fffed3aa = 1;
  return;
}

