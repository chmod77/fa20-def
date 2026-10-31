
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e87b4(char param_1,char param_2,byte param_3,char param_4,char param_5,short *param_6)

{
  short sVar1;
  
  sVar1 = _DAT_fffed3c4;
  if ((((param_1 != '\0') && (param_2 == '\0')) && (param_5 != '\0')) &&
     (sVar1 = -1, _DAT_fffed3c4 != -1)) {
    sVar1 = _DAT_fffed3c4 + 1;
  }
  if (((param_4 != '\0') || (DAT_fffed3c6 < param_3)) || (param_5 == '\0')) {
    sVar1 = 0;
  }
  *param_6 = sVar1;
  _DAT_fffed3c4 = sVar1;
  DAT_fffed3c6 = param_3;
  return;
}

