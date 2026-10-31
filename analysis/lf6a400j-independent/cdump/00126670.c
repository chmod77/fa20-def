
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126670(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  ushort uVar1;
  
  if (param_1 != '\0') {
    if (DAT_fffee2e8 == '\0') {
      _DAT_fffee2e6 = 0;
      DAT_fffee2e8 = '\x01';
    }
    if (param_2 == param_3) {
      DAT_fffee2e4 = 0;
      _DAT_fffee2e6 = 0;
      uVar1 = _DAT_fffee2e6;
    }
    else {
      DAT_fffee2e4 = 0x18 < _DAT_fffee2e6;
      uVar1 = 0xffff;
      if (_DAT_fffee2e6 != 0xffff) {
        uVar1 = _DAT_fffee2e6 + 1;
      }
    }
  }
  else {
    DAT_fffee2e8 = '\0';
    uVar1 = _DAT_fffee2e6;
  }
  _DAT_fffee2e6 = uVar1;
  if (param_1 != '\0') {
    *param_4 = DAT_fffee2e4;
  }
  else {
    *param_4 = 0;
  }
  return;
}

