
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e7f8(char param_1,char param_2,ushort param_3,ushort param_4,byte param_5,uint param_6,
                 undefined1 *param_7)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  
  bVar1 = param_2 != '\x03';
  if (bVar1) {
    DAT_fffeba24 = '\0';
    uVar4 = _DAT_fffeba22;
  }
  else {
    if (DAT_fffeba24 == '\0') {
      _DAT_fffeba22 = 0;
      DAT_fffeba24 = '\x01';
    }
    _DAT_fffeba1c = _DAT_fffeba22;
    uVar4 = 0xffff;
    if (_DAT_fffeba22 != 0xffff) {
      uVar4 = _DAT_fffeba22 + 1;
    }
  }
  _DAT_fffeba22 = uVar4;
  if ((param_1 == '\0') || (DAT_fffeba27 != '\0')) {
    DAT_fffeba25 = '\0';
    DAT_fffeba26 = '\0';
  }
  else {
    param_6 = param_6 & 0xff;
    uVar3 = LK_133B38((uint)&T_02C170,param_6);
    uVar4 = 0;
    if (param_4 <= param_3) {
      uVar4 = param_3 - param_4;
    }
    if (param_5 < 0x17) {
      uVar7 = 3;
    }
    else if (param_5 < 0x3b) {
      uVar7 = 4;
    }
    else {
      uVar7 = 4;
    }
    if (uVar4 <= uVar7) {
      DAT_fffeba25 = '\0';
      bVar6 = DAT_fffeba28;
    }
    else {
      if (DAT_fffeba25 == '\0') {
        DAT_fffeba28 = 0;
        DAT_fffeba25 = '\x01';
      }
      DAT_fffeba2c = DAT_fffeba28;
      bVar6 = 0xff;
      if (DAT_fffeba28 != 0xff) {
        bVar6 = DAT_fffeba28 + 1;
      }
    }
    DAT_fffeba28 = bVar6;
    bVar6 = 0;
    if (uVar4 > uVar7) {
      bVar6 = DAT_fffeba2c;
    }
    if (bVar1) {
      DAT_fffeba26 = '\0';
      uVar4 = _DAT_fffeba20;
    }
    else {
      if (DAT_fffeba26 == '\0') {
        _DAT_fffeba20 = 0;
        DAT_fffeba26 = '\x01';
      }
      _DAT_fffeba2a = _DAT_fffeba20;
      uVar4 = 0xffff;
      if (_DAT_fffeba20 != 0xffff) {
        uVar4 = _DAT_fffeba20 + 1;
      }
    }
    _DAT_fffeba20 = uVar4;
    uVar4 = 0;
    if (!bVar1) {
      uVar4 = _DAT_fffeba2a;
    }
    uVar5 = (uint)uVar4;
    uVar4 = 0;
    if (!bVar1) {
      uVar4 = _DAT_fffeba1c;
    }
    bVar1 = 299 < uVar4;
    bVar2 = false;
    if ((bVar1) && (param_6 < 0x3c)) {
      bVar2 = true;
    }
    if ((bVar6 < 3) || (bVar1)) {
      if (((bVar6 >= 3) && ((bVar2 && (uVar5 < 6000)))) ||
         (((uVar3 & 0xff) <= uVar5 && ((bVar1 && (param_6 >= 0x3c)))))) {
        DAT_fffeba1e = 2;
      }
      else if ((!bVar2) || (uVar5 < 6000)) {
        DAT_fffeba1e = 0;
      }
      else {
        DAT_fffeba1e = 3;
      }
    }
    else {
      DAT_fffeba1e = 1;
    }
  }
  DAT_fffeba27 = 0;
  if (param_1 != '\0') {
    DAT_fffeba27 = DAT_fffeba1e;
  }
  *param_7 = DAT_fffeba27;
  return;
}

