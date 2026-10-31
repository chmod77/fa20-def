
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00109f68(char param_1,char param_2,undefined2 param_3,ushort param_4,undefined4 param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  
  bVar1 = false;
  if (((param_1 != '\0') && (DAT_fffedc28 != '\0')) && (param_2 != '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    DAT_fffedc24 = param_4 <= _DAT_fffedc26;
    *param_6 = DAT_fffedc24;
  }
  else {
    *param_6 = 0;
  }
  _DAT_fffedc26 = param_3;
  DAT_fffedc28 = param_1;
  return;
}

