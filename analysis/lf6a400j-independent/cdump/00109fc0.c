
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109fc0(char param_1,undefined2 param_2,ushort param_3,byte param_4,ushort param_5,
                 ushort param_6,char param_7,undefined1 *param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != '\0') && (DAT_fffedc31 != '\0')) && (param_7 == '\0')) {
    bVar1 = true;
  }
  if (((bVar1) && (DAT_fffedc2c = 0, param_3 <= _DAT_fffedc2e)) &&
     ((param_4 < DAT_fffedc30 && (param_6 < param_5)))) {
    DAT_fffedc2c = 1;
  }
  if (bVar1) {
    *param_8 = DAT_fffedc2c;
  }
  else {
    *param_8 = 0;
  }
  DAT_fffedc31 = param_1;
  DAT_fffedc30 = param_4;
  _DAT_fffedc2e = param_2;
  return;
}

