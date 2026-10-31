
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0010a19c(char param_1,undefined1 param_2,ushort param_3,ushort param_4,ushort param_5,
                 byte param_6,short *param_7)

{
  short sVar1;
  
  sVar1 = _DAT_fffedc46;
  if ((((param_4 < 0x2ee) && (0x851e < param_5)) && (param_5 != 0xffff)) &&
     ((0xaa < param_6 && (sVar1 = -1, _DAT_fffedc46 != -1)))) {
    sVar1 = _DAT_fffedc46 + 1;
  }
  if (((param_1 != '\0') && (DAT_fffedc48 != '\0')) && ((_DAT_fffedc44 < 0x29b && (999 < param_3))))
  {
    sVar1 = 0;
  }
  *param_7 = sVar1;
  _DAT_fffedc46 = sVar1;
  _DAT_fffedc44 = param_3;
  DAT_fffedc48 = param_2;
  return;
}

