
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ce4e8(char param_1,short param_2,char param_3,ushort param_4,undefined1 *param_5)

{
  bool bVar1;
  short sVar2;
  
  bVar1 = 99 < _DAT_fffecce0;
  if (param_2 == 0) {
    sVar2 = -1;
    if (_DAT_fffecce0 != 0xffff) {
      sVar2 = _DAT_fffecce0 + 1;
    }
  }
  else {
    _DAT_fffecce0 = 0;
    sVar2 = _DAT_fffecce0;
  }
  _DAT_fffecce0 = sVar2;
  if ((0xfffe < param_4) || (param_1 != '\0')) {
    DAT_fffecce2 = 1;
  }
  if ((param_2 == 0 && bVar1) || (param_3 != '\x03')) {
    DAT_fffecce2 = 0;
  }
  *param_5 = DAT_fffecce2;
  return;
}

