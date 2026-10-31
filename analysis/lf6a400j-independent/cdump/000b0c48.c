
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b0c48(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,ushort param_10,byte param_11,
                 ushort param_12,byte param_13,byte param_14,char param_15,char param_16,
                 byte *param_17)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  
  if (param_15 != '\0') {
    if (DAT_fffec641 != '\0') {
      DAT_fffec634 = 0;
      DAT_fffec641 = '\0';
      DAT_fffec642 = '\0';
    }
  }
  else {
    if (DAT_fffec642 == '\0') {
      DAT_fffec63f = '\0';
      _DAT_fffec636 = 0;
      _DAT_fffec638 = 0;
      DAT_fffec642 = '\x01';
      DAT_fffec641 = '\x01';
    }
    if (param_14 < param_13) {
      param_14 = param_13;
    }
    DAT_fffec634 = param_14;
    if (param_14 < param_11) {
      DAT_fffec634 = param_11;
    }
    bVar1 = true;
    if ((param_2 == '\0') && (param_16 == '\0')) {
      bVar1 = false;
    }
    bVar3 = false;
    if ((param_8 != '\0') && ((0xfffe < param_10 || (DAT_fffec63f != '\0')))) {
      bVar3 = true;
    }
    bVar2 = false;
    if (((bVar1) && (param_5 != '\0')) && (_DAT_fffec636 < 0xe1)) {
      bVar2 = true;
    }
    _DAT_fffec636 = 0;
    if (bVar2) {
      _DAT_fffec636 = _DAT_fffec638;
    }
    if (param_1 == '\0') {
LAB_000b0d6a:
      DAT_fffec634 = 0;
    }
    else if ((bVar1) && (param_5 != '\0')) {
      if (_DAT_fffec636 < 0x4b) goto LAB_000b0d6a;
      if (0x95 < _DAT_fffec636) goto LAB_000b0d62;
      DAT_fffec634 = 1;
    }
    else if ((param_3 != '\0') || ((param_4 != '\0' || (bVar3)))) {
LAB_000b0d62:
      DAT_fffec634 = 2;
    }
    DAT_fffec63f = bVar3;
    if (bVar2) {
      _DAT_fffec638 = _DAT_fffec636 + 1;
      if (_DAT_fffec638 == 0) {
        _DAT_fffec638 = 0xffff;
      }
    }
    else {
      _DAT_fffec638 = 0;
    }
  }
  if (param_15 == '\0') {
    if (DAT_fffec63e != '\0') {
      DAT_fffec635 = 0;
      DAT_fffec63e = '\0';
      DAT_fffec640 = '\0';
    }
    goto LAB_000b0ec8;
  }
  if (DAT_fffec640 == '\0') {
    _DAT_fffec63c = 0;
    _DAT_fffec63a = 0;
    DAT_fffec640 = '\x01';
    DAT_fffec63e = '\x01';
  }
  bVar1 = true;
  if ((param_2 == '\0') && (param_16 == '\0')) {
    bVar1 = false;
  }
  bVar3 = false;
  if (((bVar1) && (param_5 != '\0')) && (_DAT_fffec63c < 0xe1)) {
    bVar3 = true;
  }
  _DAT_fffec63c = 0;
  if (bVar3) {
    _DAT_fffec63c = _DAT_fffec63a;
  }
  if (param_1 == '\0') {
LAB_000b0e82:
    DAT_fffec635 = 0;
  }
  else if ((bVar1) && (param_5 != '\0')) {
    if (_DAT_fffec63c < 0x4b) goto LAB_000b0e82;
    if (_DAT_fffec63c < 0x96) {
      DAT_fffec635 = 4;
    }
    else {
      DAT_fffec635 = 2;
    }
  }
  else if ((((param_3 == '\0') && ((param_4 == '\0' && (param_6 == '\0')))) && (param_9 == '\0')) &&
          ((799 < param_12 || (param_7 == '\0')))) {
    if (param_7 == '\0') {
      DAT_fffec635 = 1;
    }
    else {
      DAT_fffec635 = 7;
    }
  }
  else {
    DAT_fffec635 = 3;
  }
  if (bVar3) {
    _DAT_fffec63a = _DAT_fffec63c + 1;
    if (_DAT_fffec63a == 0) {
      _DAT_fffec63a = 0xffff;
    }
  }
  else {
    _DAT_fffec63a = 0;
  }
LAB_000b0ec8:
  if (param_15 != '\0') {
    *param_17 = DAT_fffec635;
  }
  else {
    *param_17 = DAT_fffec634;
  }
  return;
}

