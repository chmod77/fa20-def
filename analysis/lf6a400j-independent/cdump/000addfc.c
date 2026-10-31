
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000addfc(char param_1,char param_2,ushort param_3,char param_4,undefined1 *param_5)

{
  bool bVar1;
  undefined1 uVar2;
  
  bVar1 = false;
  if (param_2 == '\0') {
    _DAT_fffec56e = 0;
  }
  else {
    bVar1 = 11999 < _DAT_fffec56e;
    _DAT_fffec56e = _DAT_fffec56e + 1;
    if (_DAT_fffec56e == 0) {
      _DAT_fffec56e = -1;
    }
  }
  uVar2 = 1;
  if ((((param_1 == '\0') && (!bVar1)) || (param_4 != '\0')) &&
     ((param_4 == '\0' || (param_3 < 0x290 || _DAT_fffec56c < 12000)))) {
    uVar2 = 0;
  }
  *param_5 = uVar2;
  if (param_3 < 0x290) {
    _DAT_fffec56c = 0;
  }
  else {
    _DAT_fffec56c = _DAT_fffec56c + 1;
    if (_DAT_fffec56c == 0) {
      _DAT_fffec56c = -1;
    }
  }
  return;
}

