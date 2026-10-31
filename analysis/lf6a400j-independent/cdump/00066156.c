
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066156(char param_1)

{
  short sVar1;
  
  _DAT_ffff2fa6 = -_DAT_ffff2f9c;
  _DAT_ffff2fa8 = -_DAT_ffff2f9e;
  if (((_DAT_ffff34c0 < 0x7ae) || (0x2b5d < _DAT_ffff34c0)) ||
     (sVar1 = _DAT_ffff34d8, (ushort)(_DAT_ffff34c0 + _DAT_ffff34d8) != 0)) {
    _DAT_ffff34c0 = 0x1999;
    _DAT_ffff34d8 = -0x1999;
    sVar1 = -0x1999;
    if (param_1 == '\x02') {
      DAT_fffefff3 = DAT_fffefff3 | 4;
      sVar1 = _DAT_ffff34d8;
    }
  }
  _DAT_ffff34d8 = sVar1;
  if (((_DAT_ffff34c2 < 0x823) || (0x2b0e < _DAT_ffff34c2)) ||
     (sVar1 = _DAT_ffff34da, (ushort)(_DAT_ffff34c2 + _DAT_ffff34da) != 0)) {
    _DAT_ffff34c2 = 0x1999;
    _DAT_ffff34da = -0x1999;
    sVar1 = -0x1999;
    if (param_1 == '\x02') {
      DAT_fffefff3 = DAT_fffefff3 | 2;
      sVar1 = _DAT_ffff34da;
    }
  }
  _DAT_ffff34da = sVar1;
  if ((0x71ad < _DAT_ffff34c4) ||
     (sVar1 = _DAT_ffff34dc, (ushort)(_DAT_ffff34c4 + _DAT_ffff34dc) != 0)) {
    _DAT_ffff34c4 = 0x248e;
    _DAT_ffff34dc = -0x248e;
    sVar1 = -0x248e;
    if (param_1 == '\x02') {
      DAT_fffefff3 = DAT_fffefff3 | 1;
      sVar1 = _DAT_ffff34dc;
    }
  }
  _DAT_ffff34dc = sVar1;
  if (((999 < _DAT_ffff34ea) && (_DAT_ffff34ea < 0xb429)) &&
     ((ushort)(_DAT_ffff34ea + _DAT_ffff34ec) == 0)) {
    return;
  }
  FUN_0006627e(1000);
  return;
}

