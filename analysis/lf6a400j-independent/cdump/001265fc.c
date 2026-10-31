
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001265fc(char param_1,char param_2,undefined1 *param_3)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    DAT_fffee2e0 = '\0';
    uVar1 = _DAT_fffee2de;
  }
  else {
    if (DAT_fffee2e0 == '\0') {
      _DAT_fffee2de = 0;
      DAT_fffee2e0 = '\x01';
    }
    if (param_2 == '\0') {
      DAT_fffee2dc = 0;
      _DAT_fffee2de = 0;
      uVar1 = _DAT_fffee2de;
    }
    else {
      DAT_fffee2dc = 2 < _DAT_fffee2de;
      uVar1 = 0xffff;
      if (_DAT_fffee2de != 0xffff) {
        uVar1 = _DAT_fffee2de + 1;
      }
    }
  }
  _DAT_fffee2de = uVar1;
  if (param_1 == '\0') {
    *param_3 = 0;
    return;
  }
  *param_3 = DAT_fffee2dc;
  return;
}

