
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a68b0(byte param_1,ushort param_2,char param_3,ushort param_4,ushort param_5,
                 byte param_6,ushort param_7,short *param_8,ushort *param_9)

{
  bool bVar1;
  short sVar2;
  short sVar3;
  
  if ((_DAT_fffec3de == 0) || (_DAT_fffec3de == 0)) {
    sVar3 = 100;
  }
  else {
    sVar3 = 0;
    if (_DAT_fffec3dc != 0) {
      sVar3 = _DAT_fffec3dc + -1;
    }
  }
  bVar1 = false;
  if ((((DAT_fffec3e4 < param_1) && (param_2 < 0x2800)) && (param_3 != '\0')) &&
     (((0xafff < param_4 && (199 < param_5)) && (sVar3 == 0)))) {
    bVar1 = true;
  }
  if ((bVar1) && (param_6 >= 4)) {
    _DAT_fffec3e0 = 0;
  }
  _DAT_fffec3de = _DAT_fffec3e0;
  if ((bVar1) && (param_6 < 4)) {
    _DAT_fffec3de = 0;
  }
  *param_9 = _DAT_fffec3de;
  if ((param_1 == 0) || (((0x1d < _DAT_fffec3e2 && (param_7 <= param_2)) || (_DAT_fffec3de < 0x1d)))
     ) {
    _DAT_fffec3e0 = 0;
  }
  else {
    _DAT_fffec3e0 = _DAT_fffec3de - 0x1d;
  }
  *param_8 = _DAT_fffec3e0;
  if (param_1 == 0) {
    _DAT_fffec3e2 = 0;
    sVar2 = _DAT_fffec3e2;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffec3e2 != 0xffff) {
      sVar2 = _DAT_fffec3e2 + 1;
    }
  }
  _DAT_fffec3e2 = sVar2;
  DAT_fffec3e4 = param_1;
  _DAT_fffec3dc = sVar3;
  return;
}

