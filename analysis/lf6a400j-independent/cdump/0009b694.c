
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0009b694(char param_1,ushort param_2,char param_3,byte param_4,byte param_5,byte param_6,
                 char param_7,uint param_8,ushort param_9,ushort *param_10)

{
  undefined1 uVar1;
  ushort uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  
  uVar1 = DAT_fffec00c;
  DAT_fffec00c = DAT_fffec00b;
  uVar4 = (param_8 & 0xffff) >> 7;
  uVar5 = uVar4 - 0x14;
  uVar7 = 0;
  if ((0x13 < uVar4) && (uVar7 = uVar5, 0xff < (uVar5 & 0xffff))) {
    uVar7 = 0xff;
  }
  if ((param_2 <= param_9) || (param_2 == 0)) {
    uVar6 = 0;
  }
  else {
    uVar6 = 0x18;
  }
  DAT_fffec00b = DAT_fffec00a;
  bVar3 = 0;
  if (DAT_fffec00d <= param_4) {
    bVar3 = param_4 - DAT_fffec00d;
  }
  DAT_fffec00d = uVar1;
  if ((param_2 == 0) || (param_9 <= param_2)) {
    if ((param_3 != '\0') || (bVar3 >= 10)) {
      if ((param_3 != '\0') || (bVar3 < 10)) {
        if ((uint)param_5 < (uVar7 & 0xff)) {
          uVar2 = 0x30;
        }
        else if ((param_6 < 2) && (param_7 != '\0')) {
          uVar2 = 2;
        }
        else {
          uVar2 = 0x9a;
        }
      }
      else {
        uVar2 = 0x1400;
      }
    }
    else {
      uVar2 = 0x1400;
    }
  }
  else {
    uVar2 = 0x18;
  }
  if (param_1 != '\x01') {
    _DAT_fffec008 = uVar6 + param_9;
    if (_DAT_fffec008 < uVar6) {
      _DAT_fffec008 = 0xffff;
    }
    uVar6 = param_9 - uVar2;
    if (param_9 < uVar2) {
      uVar6 = 0;
    }
    if (param_2 < _DAT_fffec008) {
      _DAT_fffec008 = param_2;
    }
    if (_DAT_fffec008 <= uVar6) {
      _DAT_fffec008 = uVar6;
    }
  }
  *param_10 = _DAT_fffec008;
  DAT_fffec00a = param_4;
  return;
}

