
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d3de4(char param_1,char param_2,char param_3,undefined1 param_4,undefined1 *param_5)

{
  char cVar1;
  ushort uVar2;
  
  if (param_1 != '\0') {
    DAT_fffece30 = '\0';
    uVar2 = _DAT_fffece2e;
  }
  else {
    if (DAT_fffece30 == '\0') {
      _DAT_fffece2e = 0;
      DAT_fffece30 = '\x01';
    }
    DAT_fffece2c = 0x13 < _DAT_fffece2e;
    uVar2 = 0xffff;
    if (_DAT_fffece2e != 0xffff) {
      uVar2 = _DAT_fffece2e + 1;
    }
  }
  _DAT_fffece2e = uVar2;
  cVar1 = '\0';
  if ((param_1 == '\0') && (cVar1 = DAT_fffece2c, DAT_fffece31 != '\0')) {
    param_4 = 0;
  }
  if (((cVar1 == '\0') || (param_2 == '\0')) || (param_3 != '\x01')) {
    *param_5 = param_4;
  }
  else {
    *param_5 = 1;
  }
  DAT_fffece31 = param_1;
  return;
}

