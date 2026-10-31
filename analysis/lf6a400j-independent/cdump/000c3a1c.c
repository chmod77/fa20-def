
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3a1c(char param_1,char param_2,char param_3,byte param_4,char param_5,char param_6,
                 short param_7,short *param_8)

{
  bool bVar1;
  ushort uVar2;
  
  if (param_1 != '\0') {
    if ((param_5 == '\x02') && (param_6 == '\0')) {
      bVar1 = 0x7c < _DAT_fffeca86;
    }
    else {
      bVar1 = false;
    }
    if ((param_5 == '\x02') && (param_6 == '\0')) {
      uVar2 = 0xffff;
      if (_DAT_fffeca86 != 0xffff) {
        uVar2 = _DAT_fffeca86 + 1;
      }
    }
    else {
      _DAT_fffeca86 = 0;
      uVar2 = _DAT_fffeca86;
    }
    _DAT_fffeca86 = uVar2;
    if (((param_5 == '\x03') || (_DAT_fffeca84 = param_7, param_5 == '\x04')) &&
       (_DAT_fffeca84 = -1, param_7 != -1)) {
      _DAT_fffeca84 = param_7 + 1;
    }
    if (((param_2 == '\0') && ((param_3 == '\0' || (DAT_fffeca88 <= param_4)))) ||
       (param_5 == '\x01')) {
      if (param_5 == '\0') {
        _DAT_fffeca84 = param_7;
        DAT_fffeca88 = param_4;
      }
      else if ((param_5 == '\x01') || (DAT_fffeca88 = param_4, bVar1)) {
        _DAT_fffeca84 = -1;
        DAT_fffeca88 = param_4;
      }
    }
    else {
      _DAT_fffeca84 = 0;
      DAT_fffeca88 = param_4;
    }
  }
  *param_8 = _DAT_fffeca84;
  return;
}

