
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7e84(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    if (DAT_fffec805 != '\0') {
      DAT_fffec800 = 0;
      DAT_fffec805 = '\0';
      DAT_fffec806 = '\0';
    }
  }
  else {
    if ((param_2 == '\0') && (param_3 == '\0')) {
      if (DAT_fffec806 == '\0') {
        _DAT_fffec802 = 0;
        DAT_fffec806 = '\x01';
        DAT_fffec804 = '\x01';
      }
      DAT_fffec807 = 999 < _DAT_fffec802;
      uVar1 = 0xffff;
      if (_DAT_fffec802 != 0xffff) {
        uVar1 = _DAT_fffec802 + 1;
      }
    }
    else {
      uVar1 = _DAT_fffec802;
      if (DAT_fffec804 != '\0') {
        DAT_fffec807 = 0;
        DAT_fffec804 = '\0';
        DAT_fffec806 = '\0';
      }
    }
    _DAT_fffec802 = uVar1;
    DAT_fffec800 = DAT_fffec807;
    DAT_fffec805 = '\x01';
  }
  *param_4 = DAT_fffec800;
  return;
}

