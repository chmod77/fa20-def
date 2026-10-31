
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109d04(byte param_1,char param_2,char param_3,char param_4,undefined2 param_5,
                 ushort param_6,undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_3 != '\0') && (DAT_fffedc10 != '\0')) {
    bVar1 = true;
  }
  if (((bVar1) &&
      ((((DAT_fffedc0c = 0, param_4 != '\0' && (param_1 < DAT_fffedc11)) &&
        (_DAT_fffedc0e < param_6)) || ((param_4 == '\0' && (DAT_fffedc11 < param_1)))))) &&
     (param_2 == '\0')) {
    DAT_fffedc0c = 1;
  }
  if (bVar1) {
    *param_7 = DAT_fffedc0c;
  }
  else {
    *param_7 = 0;
  }
  DAT_fffedc11 = param_1;
  DAT_fffedc10 = param_3;
  _DAT_fffedc0e = param_5;
  return;
}

