
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c89a0(char param_1,byte param_2,byte param_3,short param_4,short param_5,char param_6,
                 char param_7,char param_8,ushort param_9,ushort param_10,char param_11,
                 char param_12,char param_13,ushort param_14,byte param_15,byte param_16,
                 char param_17,char *param_18)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short local_24;
  
  if (param_1 == '\0') {
    DAT_fffecb2e = '\0';
  }
  else {
    if (DAT_fffecb2e == '\0') {
      _DAT_fffecb26 = 0;
      _DAT_fffecb28 = 0;
      _DAT_fffecb2a = 0;
      _DAT_fffecb2c = 0;
      DAT_fffecb2e = '\x01';
    }
    bVar1 = true;
    if ((param_7 != '\0') && ((param_7 == '\0' || (param_17 == '\0')))) {
      bVar1 = false;
    }
    sVar6 = 1000;
    if ((DAT_fffecb2f <= param_2) && (sVar6 = 0, _DAT_fffecb26 != 0)) {
      sVar6 = _DAT_fffecb26 + -1;
    }
    local_24 = sVar6;
    if (sVar6 == 0) {
      local_24 = 0;
    }
    sVar7 = 1000;
    if ((DAT_fffecb31 <= param_3) && (sVar7 = 0, _DAT_fffecb28 != 0)) {
      sVar7 = _DAT_fffecb28 + -1;
    }
    sVar5 = 0;
    if (sVar7 != 0) {
      sVar5 = sVar7;
    }
    if ((DAT_fffecb30 != '\x05') || (DAT_fffecb24 = '\0', !bVar1)) {
      DAT_fffecb24 = DAT_fffecb30;
    }
    if ((DAT_fffecb30 == '\x04') && (param_4 == -1)) {
      DAT_fffecb24 = '\x05';
    }
    if ((DAT_fffecb30 == '\x01') && (param_15 < param_16)) {
      DAT_fffecb24 = '\x04';
    }
    if ((DAT_fffecb30 == '\x03') && (bVar1)) {
      DAT_fffecb24 = '\0';
    }
    if ((DAT_fffecb30 == '\x02') && (param_4 == -1)) {
      DAT_fffecb24 = '\x03';
    }
    if ((DAT_fffecb30 == '\x01') && (param_16 < param_15)) {
      DAT_fffecb24 = '\x02';
    }
    if ((DAT_fffecb30 == '\x01') && ((param_14 == 0 || (param_15 == param_16)))) {
      DAT_fffecb24 = '\0';
    }
    if ((DAT_fffecb30 == '\0') && (99 < param_14)) {
      DAT_fffecb24 = '\x01';
    }
    if ((param_12 == '\0') || (DAT_fffecb30 != '\x02')) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
    if ((param_12 == '\0') || (DAT_fffecb30 != '\x02')) {
      _DAT_fffecb2c = 0;
      sVar4 = _DAT_fffecb2c;
    }
    else {
      sVar4 = -1;
      if (_DAT_fffecb2c != -1) {
        sVar4 = _DAT_fffecb2c + 1;
      }
    }
    _DAT_fffecb2c = sVar4;
    if ((param_11 == '\0') || (DAT_fffecb30 != '\x02')) {
      bVar2 = false;
    }
    else {
      bVar2 = true;
    }
    if ((param_11 == '\0') || (DAT_fffecb30 != '\x02')) {
      _DAT_fffecb2a = 0;
      sVar4 = _DAT_fffecb2a;
    }
    else {
      sVar4 = -1;
      if (_DAT_fffecb2a != -1) {
        sVar4 = _DAT_fffecb2a + 1;
      }
    }
    _DAT_fffecb2a = sVar4;
    bVar3 = true;
    if (((((DAT_fffecb30 != '\0') && (DAT_fffecb30 != '\x01')) && (DAT_fffecb30 != '\x02')) &&
        ((DAT_fffecb30 != '\x03' && (DAT_fffecb30 != '\x04')))) && (DAT_fffecb30 != '\x05')) {
      bVar3 = false;
    }
    _DAT_fffecb26 = sVar6;
    _DAT_fffecb28 = sVar7;
    if (((((!bVar3) || (param_2 != 0)) ||
         ((local_24 != 0 || (((param_3 != 0 || (sVar5 != 0)) || (param_4 == 100)))))) ||
        ((param_5 == 100 || ((param_6 == '\0' && (param_7 == '\0')))))) ||
       ((((param_8 != '\0' || ((param_9 < 0x6000 || (param_10 < 0x10b)))) || (bVar2)) ||
        ((bVar1 || ((param_13 != '\0' && (DAT_fffecb30 == '\x02')))))))) {
      DAT_fffecb24 = '\0';
    }
  }
  *param_18 = DAT_fffecb24;
  DAT_fffecb30 = DAT_fffecb24;
  DAT_fffecb2f = param_2;
  DAT_fffecb31 = param_3;
  return;
}

