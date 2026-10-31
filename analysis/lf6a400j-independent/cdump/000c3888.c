
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3888(char param_1,char param_2,char param_3,char param_4,char param_5,ushort *param_6)

{
  bool bVar1;
  
  if (param_5 != '\0') {
    bVar1 = true;
    if ((param_1 != '\x02') && (param_1 != '\x04')) {
      bVar1 = false;
    }
    _DAT_fffeca70 = 0xffff;
    if (bVar1) {
      _DAT_fffeca70 = 0xffff;
      if (_DAT_fffeca72 != 0xffff) {
        _DAT_fffeca70 = _DAT_fffeca72 + 1;
      }
      if (100 < _DAT_fffeca70) {
        _DAT_fffeca70 = 100;
      }
    }
    if (((param_1 == '\x02') && (DAT_fffeca74 != '\x02')) ||
       ((param_1 == '\x04' && (DAT_fffeca74 != '\x04')))) {
      _DAT_fffeca70 = 0;
    }
    else if ((bVar1) &&
            (((param_2 != '\0' && (param_3 != '\0')) || ((param_3 == '\0' && (param_4 != '\0'))))))
    {
      _DAT_fffeca70 = 0xffff;
    }
  }
  if (param_5 != '\0') {
    _DAT_fffeca72 = _DAT_fffeca70;
  }
  *param_6 = _DAT_fffeca72;
  DAT_fffeca74 = param_1;
  return;
}

