
/* WARNING: Removing unreachable block (ram,0x0009d81a) */
/* WARNING: Removing unreachable block (ram,0x0009d986) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009d7e4(char param_1,byte param_2,byte param_3,char param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  byte bVar4;
  
  DAT_fffec03b = param_3 <= (DAT_fffec03b != '\0');
  if (DAT_fffec03a == '\0') {
    bVar4 = 0xff;
  }
  else {
    bVar4 = 0xfa;
  }
  DAT_fffec03a = bVar4 <= param_2;
  if (((((bool)DAT_fffec03a) && ((bool)DAT_fffec03b)) && (param_4 != '\0')) &&
     ((param_5 != '\0' || (param_6 != '\0')))) {
    if (DAT_fffec03d == '\0') {
      _DAT_fffec038 = 0;
      DAT_fffec03d = '\x01';
      DAT_fffec03f = '\x01';
    }
    DAT_fffec031 = 0xfffe < _DAT_fffec038;
    _DAT_fffec038 = _DAT_fffec038 + 1;
    if (_DAT_fffec038 == 0) {
      _DAT_fffec038 = 0xffff;
    }
  }
  else if (DAT_fffec03f != '\0') {
    DAT_fffec031 = '\0';
    DAT_fffec03f = '\0';
    DAT_fffec03d = '\0';
  }
  bVar2 = false;
  if ((param_1 != '\0') && (DAT_fffec031 != '\0')) {
    bVar2 = true;
  }
  bVar1 = false;
  if ((((bool)DAT_fffec03a) && ((bool)DAT_fffec03b)) && (param_4 != '\0')) {
    bVar1 = true;
  }
  if (((!bVar2) || (bVar4 = bVar1, !bVar1)) &&
     (((!bVar2 && (!bVar1)) || ((bVar4 = DAT_fffec030, bVar2 && (!bVar1)))))) {
    bVar4 = bVar1;
  }
  DAT_fffec030 = bVar4;
  if (DAT_fffec030 == 0) {
    DAT_fffec040 = '\0';
    DAT_fffec03c = '\0';
  }
  else {
    if (DAT_fffec040 == '\0') {
      DAT_fffec03e = 0;
      DAT_fffec040 = '\x01';
    }
    if (DAT_fffec030 == 0) {
      DAT_fffec03c = '\0';
    }
    else {
      if (DAT_fffec03c == '\0') {
        _DAT_fffec034 = 0;
        DAT_fffec03c = '\x01';
      }
      DAT_fffec041 = 0xfffe < _DAT_fffec034;
      uVar3 = 0;
      if (!(bool)DAT_fffec041) {
        uVar3 = _DAT_fffec034;
      }
      _DAT_fffec034 = uVar3 + 1;
      if (_DAT_fffec034 == 0) {
        _DAT_fffec034 = 0xffff;
      }
    }
    DAT_fffec032 = 0;
    _DAT_fffec036 = (ushort)DAT_fffec030;
  }
  if (DAT_fffec030 == 0) {
    *param_7 = 0;
  }
  else {
    *param_7 = DAT_fffec032;
  }
  return;
}

