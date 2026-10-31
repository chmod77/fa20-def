
/* WARNING: Removing unreachable block (ram,0x000bd0bc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000bd070(char param_1,ushort param_2,ushort *param_3,ushort *param_4)

{
  if ((param_1 != '\x03') && (param_1 != '\x04')) {
    _DAT_fffec8da = _DAT_fffec8d8;
  }
  _DAT_fffec8d8 = _DAT_fffec8da;
  if (param_1 == '\x02') {
    _DAT_fffec8d8 = param_2;
  }
  *param_4 = _DAT_fffec8d8;
  if ((param_1 == '\x02') || (param_1 == '\x03')) {
    param_2 = _DAT_fffec8d8;
    if (_DAT_fffec8d8 < 0x6401) {
      param_2 = 0x6400;
    }
  }
  else if (_DAT_fffec8d8 < param_2) {
    param_2 = _DAT_fffec8d8;
  }
  if ((param_1 == '\x01') || (param_1 == '\x05')) {
    param_2 = 0x6400;
  }
  *param_3 = param_2;
  _DAT_fffec8da = param_2;
  return;
}

