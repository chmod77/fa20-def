
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000672cc(void)

{
  bool bVar1;
  bool bVar2;
  
  if (DAT_ffff34bc != '\0') {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x20;
  }
  if (DAT_ffff0084 != '\0') {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x40;
  }
  if (DAT_fffefff7 != 0) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x40;
  }
  if ((DAT_ffff34f7 & 0x10) != 0) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0xc0;
  }
  bVar1 = (DAT_ffff34f7 & 0x20) != 0;
  if (bVar1) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0xc0;
  }
  bVar2 = (DAT_ffff34f7 & 0x40) != 0;
  if (bVar2) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x80;
  }
  bVar2 = bVar2 || bVar1;
  if ((((DAT_fffefff3 & 0x20) != 0) || ((DAT_ffff0080 & 2) != 0)) &&
     (((DAT_fffefff3 & 0x10) != 0 || ((DAT_ffff0080 & 1) != 0)))) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x40;
    DAT_fffefff7 = DAT_fffefff7 | 4;
    bVar2 = true;
  }
  if (((((DAT_fffefff3 & 0x20) != 0) || ((DAT_ffff0080 & 2) != 0)) || ((DAT_fffefff3 & 0x10) != 0))
     || ((DAT_ffff0080 & 1) != 0)) {
    DAT_ffff34f7 = DAT_ffff34f7 | 0x40;
    DAT_fffefff7 = DAT_fffefff7 | 0x20;
  }
  if (((int)DAT_ffff0950 & 0x80U) != 0) {
    bVar2 = true;
  }
  if ((DAT_fffefff6 & 2) != 0) {
    bVar2 = true;
  }
  if (bVar2) {
    _DAT_ffff0100 = 1000;
    DAT_ffff002c = DAT_ffff002c | 0x80;
  }
  else if ((ushort)(_DAT_ffff34ea + _DAT_ffff34ec) == 0) {
    if (_DAT_ffff34ea == 0) {
      DAT_ffff002c = DAT_ffff002c & 0x7f | 0x40;
    }
    else {
      DAT_ffff002c = DAT_ffff002c & 0x3f;
    }
    _DAT_ffff0100 = _DAT_ffff34ea;
    if ((((int)(char)DAT_ffff34f7 & 0x80U) != 0) && (0x2e60 < _DAT_ffff34ea)) {
      _DAT_ffff0100 = 0x2e60;
    }
  }
  else {
    DAT_ffff34bd = DAT_ffff34bd | 0x90;
    _DAT_ffff0100 = 1000;
    DAT_ffff002c = DAT_ffff002c & 0x7f;
  }
  if ((DAT_ffff002c & 0x40) != 0) {
    _DAT_ffff0100 = _DAT_ffff002a;
  }
  if (0xb428 < _DAT_ffff0100) {
    _DAT_ffff0100 = 0xb428;
  }
  return;
}

