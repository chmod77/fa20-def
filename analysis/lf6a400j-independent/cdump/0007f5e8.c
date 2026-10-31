
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007f5e8(byte param_1,char param_2,char param_3,char *param_4)

{
  bool bVar1;
  ushort uVar2;
  char cVar3;
  
  if (param_2 != '\x03') {
    DAT_fffeba7c = '\0';
    DAT_fffeba79 = '\0';
  }
  else {
    if (DAT_fffeba7c == '\0') {
      DAT_fffeba7b = '\0';
      DAT_fffeba7a = '\0';
      DAT_fffeba7c = '\x01';
    }
    bVar1 = param_3 != DAT_fffeba7b;
    if ((bVar1) || (param_1 == 0)) {
      DAT_fffeba79 = '\0';
      uVar2 = _DAT_fffeba76;
    }
    else {
      if (DAT_fffeba79 == '\0') {
        _DAT_fffeba76 = 0;
        DAT_fffeba79 = '\x01';
      }
      _DAT_fffeba7e = _DAT_fffeba76;
      DAT_fffeba80 = 2 < _DAT_fffeba76;
      uVar2 = 0xffff;
      if (_DAT_fffeba76 != 0xffff) {
        uVar2 = _DAT_fffeba76 + 1;
      }
    }
    _DAT_fffeba76 = uVar2;
    cVar3 = '\0';
    if (!bVar1) {
      cVar3 = DAT_fffeba80;
    }
    if (DAT_fffeba7a == '\0') {
      DAT_fffeba7a = 9 < param_1;
    }
    else {
      DAT_fffeba7a = 7 < param_1;
    }
    DAT_fffeba74 = '\x01';
    DAT_fffeba7b = param_3;
    if ((((param_3 == '\0') || (cVar3 == '\0')) || (!(bool)DAT_fffeba7a)) &&
       ((((bool)DAT_fffeba7a || (bVar1)) || (_DAT_fffeba7e < 0x32)))) {
      DAT_fffeba74 = '\0';
    }
  }
  if ((param_2 == '\x04') || (DAT_fffeba74 == '\0')) {
    param_3 = DAT_fffeba78;
  }
  if (((param_2 == '\x01') || (param_2 == '\x02')) || ((param_2 == '\x03' && (param_1 == 0)))) {
    param_3 = '\0';
  }
  *param_4 = param_3;
  DAT_fffeba78 = param_3;
  return;
}

