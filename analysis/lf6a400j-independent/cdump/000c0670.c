
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0670(char param_1,char param_2,byte param_3,short *param_4)

{
  short sVar1;
  
  if ((param_2 == '\0') || (DAT_fffec98e <= param_3)) {
    sVar1 = 0;
    if (_DAT_fffec98c != 0) {
      sVar1 = _DAT_fffec98c + -1;
    }
  }
  else {
    sVar1 = 0;
  }
  if ((param_2 != '\0') && (DAT_fffec98e < param_3)) {
    sVar1 = 0;
  }
  if (param_1 != '\0') {
    sVar1 = 0;
  }
  *param_4 = sVar1;
  _DAT_fffec98c = sVar1;
  DAT_fffec98e = param_3;
  return;
}

