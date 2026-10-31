
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e872c(char param_1,ushort param_2,char param_3,byte param_4,char param_5,char param_6,
                 short *param_7)

{
  short sVar1;
  
  sVar1 = _DAT_fffed3c0;
  if ((((param_1 != '\0') && (param_3 == '\0')) && (0x36ff >= param_2)) &&
     ((param_6 != '\0' && (sVar1 = -1, _DAT_fffed3c0 != -1)))) {
    sVar1 = _DAT_fffed3c0 + 1;
  }
  if (((param_5 != '\0') || (DAT_fffed3c2 < param_4)) || ((0x36ff < param_2 || (param_6 == '\0'))))
  {
    sVar1 = 0;
  }
  *param_7 = sVar1;
  _DAT_fffed3c0 = sVar1;
  DAT_fffed3c2 = param_4;
  return;
}

