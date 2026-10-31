
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109d9c(char param_1,char param_2,undefined2 param_3,ushort param_4,undefined4 param_5,
                 undefined4 param_6,undefined1 *param_7)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != '\0') && (DAT_fffedc18 != '\0')) && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_fffedc14 = param_4 <= _DAT_fffedc16;
    *param_7 = DAT_fffedc14;
  }
  else {
    *param_7 = 0;
  }
  _DAT_fffedc16 = param_3;
  DAT_fffedc18 = param_1;
  return;
}

