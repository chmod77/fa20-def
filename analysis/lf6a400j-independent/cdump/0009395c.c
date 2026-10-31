
/* WARNING: Removing unreachable block (ram,0x00093acc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009395c(char param_1,byte param_2,undefined2 param_3,char param_4,char param_5,
                 byte param_6,char param_7,undefined2 *param_8)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  
  bVar2 = DAT_fffebea8;
  uVar5 = _DAT_fffebe98;
  if ((param_7 != DAT_fffebea6) &&
     (uVar5 = _DAT_fffebe9e + _DAT_fffebe98, _DAT_fffebe9e + _DAT_fffebe98 < (uint)_DAT_fffebe9e)) {
    uVar5 = 0xffffffff;
  }
  if (param_1 != '\0') {
    uVar5 = 0;
  }
  _DAT_fffebe98 = uVar5;
  if (param_2 != 0) {
    _DAT_fffebe98 = 0;
    _DAT_fffebe9c = 0xffff;
    if (uVar5 < 0x3fffd) {
      _DAT_fffebe9c = (undefined2)(uVar5 >> 2);
    }
  }
  if ((param_4 != '\0') || (param_5 != '\0')) {
    _DAT_fffebe9c = 0x8000;
  }
  if (((DAT_fffebea9 < param_2) || (uVar5 = _DAT_fffebe94, param_2 == 0)) &&
     (uVar5 = _DAT_fffebea0 + _DAT_fffebe94, _DAT_fffebea0 + _DAT_fffebe94 < (uint)_DAT_fffebea0)) {
    uVar5 = 0xffffffff;
  }
  cVar4 = '\x01';
  if (param_6 <= DAT_fffebeaa) {
    cVar4 = DAT_fffebeab;
  }
  if (DAT_fffebea8 < DAT_fffebea7) {
    cVar4 = '\0';
  }
  bVar1 = false;
  if (cVar4 == '\0') {
    _DAT_fffebea4 = 0;
    sVar3 = _DAT_fffebea4;
  }
  else {
    bVar1 = _DAT_fffebea4 < 0x33;
    sVar3 = -1;
    if (_DAT_fffebea4 != 0xffff) {
      sVar3 = _DAT_fffebea4 + 1;
    }
  }
  _DAT_fffebea4 = sVar3;
  DAT_fffebea8 = false;
  if ((cVar4 != '\0') && (bVar1)) {
    DAT_fffebea8 = true;
  }
  if (((param_1 != '\0') || (param_6 == 0)) || ((bool)DAT_fffebea8)) {
    uVar5 = 0;
  }
  _DAT_fffebe94 = uVar5;
  if (param_2 != 0) {
    _DAT_fffebe94 = 0;
    _DAT_fffebea2 = 0xffff;
    if (uVar5 < 0x7fff9) {
      _DAT_fffebea2 = (undefined2)(uVar5 >> 3);
    }
  }
  if ((param_4 != '\0') || (param_5 != '\0')) {
    _DAT_fffebea2 = 0x8000;
  }
  DAT_fffebeab = cVar4;
  *param_8 = _DAT_fffebe9c;
  _DAT_fffebe9e = param_3;
  DAT_fffebea6 = param_7;
  _DAT_fffebea0 = param_3;
  DAT_fffebeaa = param_6;
  DAT_fffebea9 = param_2;
  DAT_fffebea7 = bVar2;
  return;
}

