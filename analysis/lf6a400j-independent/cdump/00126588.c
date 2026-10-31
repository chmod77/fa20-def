
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00126588(char param_1,char param_2,undefined1 *param_3)

{
  ushort uVar1;
  
  if (param_1 == '\0') {
    DAT_fffee2d8 = '\0';
    uVar1 = _DAT_fffee2d6;
  }
  else {
    if (DAT_fffee2d8 == '\0') {
      _DAT_fffee2d6 = 0;
      DAT_fffee2d8 = '\x01';
    }
    if (param_2 == '\0') {
      DAT_fffee2d4 = 0;
      _DAT_fffee2d6 = 0;
      uVar1 = _DAT_fffee2d6;
    }
    else {
      DAT_fffee2d4 = 2 < _DAT_fffee2d6;
      uVar1 = 0xffff;
      if (_DAT_fffee2d6 != 0xffff) {
        uVar1 = _DAT_fffee2d6 + 1;
      }
    }
  }
  _DAT_fffee2d6 = uVar1;
  if (param_1 == '\0') {
    *param_3 = 0;
    return;
  }
  *param_3 = DAT_fffee2d4;
  return;
}

