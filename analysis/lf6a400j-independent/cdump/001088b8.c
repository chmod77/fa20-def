
/* WARNING: Removing unreachable block (ram,0x001088e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001088b8(byte param_1,byte param_2,byte param_3,byte param_4,byte param_5,char param_6,
                 char param_7,undefined1 *param_8,undefined1 *param_9,undefined1 *param_10)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  
  DAT_fffedb6a = false;
  if ((param_7 != '\0') && (DAT_fffedb71 == '\0')) {
    DAT_fffedb6a = true;
  }
  if (((bool)DAT_fffedb6a) &&
     ((((param_1 != 0 || (param_2 != 0)) || (param_3 != 0)) || ((param_5 != 0 || (param_4 != 0))))))
  {
    DAT_fffedb75 = '\x01';
  }
  if (((!(bool)DAT_fffedb6a) || (param_1 < DAT_fffedb70)) ||
     ((param_2 < DAT_fffedb78 ||
      (((param_3 < DAT_fffedb76 || (param_5 < DAT_fffedb77)) || (param_4 < DAT_fffedb74)))))) {
    DAT_fffedb75 = '\0';
  }
  if (((((bool)DAT_fffedb6a) && (param_1 == 0)) &&
      ((param_2 == 0 && ((param_3 == 0 && (param_4 == 0)))))) && (param_5 == 0)) {
    bVar1 = 99 < _DAT_fffedb6c;
  }
  else {
    bVar1 = false;
  }
  if ((((((bool)DAT_fffedb6a) && (param_1 == 0)) && (param_2 == 0)) &&
      ((param_3 == 0 && (param_4 == 0)))) && (param_5 == 0)) {
    sVar3 = -1;
    if (_DAT_fffedb6c != 0xffff) {
      sVar3 = _DAT_fffedb6c + 1;
    }
  }
  else {
    _DAT_fffedb6c = 0;
    sVar3 = _DAT_fffedb6c;
  }
  _DAT_fffedb6c = sVar3;
  bVar2 = false;
  if (DAT_fffedb75 == '\0') {
    _DAT_fffedb6e = 0;
    sVar3 = _DAT_fffedb6e;
  }
  else {
    bVar2 = 0x1963 < _DAT_fffedb6e;
    sVar3 = -1;
    if (_DAT_fffedb6e != 0xffff) {
      sVar3 = _DAT_fffedb6e + 1;
    }
  }
  _DAT_fffedb6e = sVar3;
  DAT_fffedb68 = 1;
  if (!bVar2) {
    DAT_fffedb68 = DAT_fffedb73;
  }
  if (param_6 != '\0') {
    DAT_fffedb68 = 0;
  }
  if (bVar1) {
    DAT_fffedb69 = 1;
  }
  else {
    DAT_fffedb69 = DAT_fffedb72;
  }
  DAT_fffedb73 = DAT_fffedb68;
  *param_8 = DAT_fffedb68;
  *param_9 = DAT_fffedb69;
  *param_10 = DAT_fffedb6a;
  DAT_fffedb70 = param_1;
  DAT_fffedb78 = param_2;
  DAT_fffedb76 = param_3;
  DAT_fffedb74 = param_4;
  DAT_fffedb77 = param_5;
  DAT_fffedb72 = DAT_fffedb69;
  DAT_fffedb71 = DAT_fffedb68;
  return;
}

