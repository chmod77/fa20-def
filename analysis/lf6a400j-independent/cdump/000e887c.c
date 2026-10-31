
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e887c(char param_1,ushort param_2,byte param_3,byte param_4,char param_5,short *param_6)

{
  short sVar1;
  
  sVar1 = _DAT_fffed3cc;
  if ((((param_1 != '\0') && (param_3 < DAT_fffed3ce)) && (param_2 >= 0x1900)) &&
     (sVar1 = -1, _DAT_fffed3cc != -1)) {
    sVar1 = _DAT_fffed3cc + 1;
  }
  if (((param_5 != '\0') || (DAT_fffed3cf < param_4)) || (param_2 < 0x1900)) {
    sVar1 = 0;
  }
  *param_6 = sVar1;
  _DAT_fffed3cc = sVar1;
  DAT_fffed3cf = param_4;
  DAT_fffed3ce = param_3;
  return;
}

