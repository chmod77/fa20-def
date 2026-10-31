
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000afaa0(char param_1,char param_2,short param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort *param_8)

{
  ushort uVar1;
  
  if (DAT_fffec5f0 == '\0') {
    param_3 = 0x98;
  }
  if (param_1 != '\0') {
    if (DAT_fffec5f2 != '\0') {
      _DAT_fffec5ec = 0;
      DAT_fffec5f2 = '\0';
    }
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = param_3 - 1;
    }
    if (param_4 == '\x01') {
      _DAT_fffec5ec = uVar1;
      if (uVar1 < 0x1a) {
        _DAT_fffec5ec = 0x19;
      }
    }
    else {
      _DAT_fffec5ec = 0x98;
    }
    if ((param_4 == '\x02') && (_DAT_fffec5ec = 0, uVar1 != 0)) {
      _DAT_fffec5ec = uVar1;
    }
    if ((param_6 == '\0') || ((param_2 == '\0' && (param_7 == '\0')))) {
      if ((param_4 == '\x02') && (param_3 == 0)) {
        _DAT_fffec5ec = 0;
      }
    }
    else {
      _DAT_fffec5ec = 0x98;
    }
    DAT_fffec5f2 = '\x01';
  }
  if (param_1 == '\0') {
    if (DAT_fffec5f1 != '\0') {
      _DAT_fffec5ee = 0;
      DAT_fffec5f1 = '\0';
    }
  }
  else {
    uVar1 = 0;
    if (param_3 != 0) {
      uVar1 = param_3 - 1;
    }
    if (param_5 == '\x01') {
      _DAT_fffec5ee = uVar1;
      if (uVar1 < 0x1a) {
        _DAT_fffec5ee = 0x19;
      }
    }
    else {
      _DAT_fffec5ee = 0x98;
    }
    if ((param_5 == '\x02') && (_DAT_fffec5ee = 0, uVar1 != 0)) {
      _DAT_fffec5ee = uVar1;
    }
    if ((param_6 == '\0') || ((param_2 == '\0' && (param_7 == '\0')))) {
      if ((param_5 == '\x02') && (param_3 == 0)) {
        _DAT_fffec5ee = 0;
      }
    }
    else {
      _DAT_fffec5ee = 0x98;
    }
    DAT_fffec5f1 = '\x01';
  }
  if (param_1 != '\0') {
    *param_8 = _DAT_fffec5ee;
  }
  else {
    *param_8 = _DAT_fffec5ec;
  }
  DAT_fffec5f0 = 1;
  return;
}

