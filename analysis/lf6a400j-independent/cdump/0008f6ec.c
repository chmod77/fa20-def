
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008f6ec(char param_1,byte param_2,uint param_3,byte param_4,char param_5,char param_6,
                 undefined2 *param_7,undefined1 *param_8,short *param_9)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  char cVar6;
  
  if (_DAT_fffebd2c != 0) {
    DAT_fffebd36 = '\0';
    uVar1 = _DAT_fffebd2e;
  }
  else {
    if (DAT_fffebd36 == '\0') {
      _DAT_fffebd2e = 0;
      DAT_fffebd36 = '\x01';
    }
    DAT_fffebd2a = 199 < _DAT_fffebd2e;
    uVar1 = 0xffff;
    if (_DAT_fffebd2e != 0xffff) {
      uVar1 = _DAT_fffebd2e + 1;
    }
  }
  _DAT_fffebd2e = uVar1;
  cVar6 = '\0';
  if (_DAT_fffebd2c == 0) {
    cVar6 = DAT_fffebd2a;
  }
  bVar5 = 0;
  if (((((param_1 == '\x03') && (param_2 < 6)) && (param_4 < DAT_fffebd33)) &&
      ((param_5 != '\0' || (param_6 == '\0')))) && (cVar6 != '\0')) {
    bVar5 = 1;
  }
  if ((bVar5 == 0) || (param_4 != 0)) {
    bVar2 = param_4;
    if (((bVar5 == 0) && (bVar2 = 0, param_4 != 0)) ||
       ((param_4 = bVar2, bVar5 != 0 && (param_4 != 0)))) {
      DAT_fffebd24 = '\0';
    }
  }
  else {
    DAT_fffebd24 = '\x01';
  }
  if (bVar5 <= DAT_fffebd31) {
    param_3 = (uint)DAT_fffebd34;
  }
  if (DAT_fffebd24 == '\0') {
    bVar2 = DAT_fffebd35;
    if (DAT_fffebd30 != '\0') {
      _DAT_fffebd26 = 0;
      DAT_fffebd28 = 0;
      DAT_fffebd29 = 0;
      DAT_fffebd30 = '\0';
      DAT_fffebd32 = '\0';
    }
  }
  else {
    if (DAT_fffebd32 == '\0') {
      DAT_fffebd35 = 0;
      DAT_fffebd32 = '\x01';
      DAT_fffebd30 = '\x01';
    }
    uVar3 = LK_133B38((uint)&T_02D010,param_3);
    DAT_fffebd29 = (byte)uVar3;
    uVar4 = LK_133B38((uint)&T_02D01C,param_3);
    DAT_fffebd28 = (undefined1)uVar4;
    if ((uint)DAT_fffebd35 < (uVar4 & 0xff)) {
      uVar3 = LK_133B38((uint)&T_02D004,param_3);
      uVar4 = (uVar3 & 0xff) << 5;
    }
    else {
      uVar4 = 0;
      if ((uVar3 & 0xff) * 2 <= (uint)_DAT_fffebd2c) {
        uVar4 = (int)(short)_DAT_fffebd2c + (uVar3 & 0xff) * -2;
      }
    }
    if ((uVar4 & 0xffff) == 0) {
      _DAT_fffebd26 = 0;
    }
    else {
      _DAT_fffebd26 = (undefined2)uVar4;
    }
    bVar2 = 0xff;
    if (DAT_fffebd35 != 0xff) {
      bVar2 = DAT_fffebd35 + 1;
    }
  }
  DAT_fffebd35 = bVar2;
  _DAT_fffebd2c = 0;
  if (DAT_fffebd24 != '\0') {
    _DAT_fffebd2c = _DAT_fffebd26;
  }
  *param_7 = _DAT_fffebd2c;
  *param_8 = DAT_fffebd28;
  *param_9 = (ushort)DAT_fffebd29 << 1;
  DAT_fffebd34 = (char)param_3;
  DAT_fffebd33 = param_4;
  DAT_fffebd31 = bVar5;
  return;
}

