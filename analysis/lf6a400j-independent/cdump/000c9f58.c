
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c9f58(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,char param_10,ushort param_11,char param_12,
                 char param_13,ushort param_14,undefined1 *param_15,short *param_16,short *param_17)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  ushort uVar5;
  char cVar6;
  short sVar7;
  
  if (param_1 == '\0') {
    DAT_fffecb93 = '\0';
    DAT_fffecb95 = '\0';
    goto LAB_000ca20c;
  }
  bVar3 = param_8 == '\0';
  if ((param_14 < 0x3200) && (0x1400 < param_14)) {
    bVar1 = 0x18 < _DAT_fffecb8e;
  }
  else {
    bVar1 = false;
  }
  if ((param_14 < 0x3200) && (0x1400 < param_14)) {
    uVar5 = 0xffff;
    if (_DAT_fffecb8e != 0xffff) {
      uVar5 = _DAT_fffecb8e + 1;
    }
  }
  else {
    _DAT_fffecb8e = 0;
    uVar5 = _DAT_fffecb8e;
  }
  _DAT_fffecb8e = uVar5;
  if ((param_14 < 0x3c00) && (0x1400 < param_14)) {
    bVar2 = 0x18 < _DAT_fffecb90;
  }
  else {
    bVar2 = false;
  }
  if ((param_14 < 0x3c00) && (0x1400 < param_14)) {
    uVar5 = 0xffff;
    if (_DAT_fffecb90 != 0xffff) {
      uVar5 = _DAT_fffecb90 + 1;
    }
  }
  else {
    _DAT_fffecb90 = 0;
    uVar5 = _DAT_fffecb90;
  }
  _DAT_fffecb90 = uVar5;
  if (DAT_fffecb95 == '\0') {
    DAT_fffecb94 = '\0';
    DAT_fffecb95 = '\x01';
  }
  cVar6 = param_3;
  if (DAT_fffecb94 != '\0') {
    FUN_0016b49c(&DAT_ffff198d,(int)param_3,3);
    cVar6 = DAT_ffff198d;
  }
  DAT_ffff198d = cVar6;
  DAT_fffecb94 = '\x01';
  sVar7 = (short)DAT_ffff198d << 4;
  if (DAT_fffecb93 == '\0') {
    DAT_fffecb92 = '\0';
    DAT_fffecb93 = '\x01';
  }
  _DAT_fffecb8a = sVar7;
  cVar6 = param_2;
  if (DAT_fffecb92 != '\0') {
    FUN_0016b49c(&DAT_ffff198c,(int)param_2,3);
    cVar6 = DAT_ffff198c;
  }
  DAT_ffff198c = cVar6;
  DAT_fffecb92 = '\x01';
  _DAT_fffecb88 = (short)DAT_ffff198c << 4;
  bVar4 = false;
  if ((((_DAT_fffecb88 < 0x20) && (-0x60 < _DAT_fffecb88)) && (sVar7 < 0x11)) && (-0x32 < sVar7)) {
    bVar4 = true;
  }
  if (((param_5 == '\0') && (param_6 == '\0')) &&
     ((param_7 != '\0' && ((param_12 == '\0' || (param_4 != '\0')))))) {
    if ((param_8 != '\0') && (param_9 != '\0')) {
      DAT_fffecb8c = 1;
      goto LAB_000ca20c;
    }
    if (((((bVar3) && (param_9 != '\0')) && (param_10 == '\0')) &&
        ((_DAT_fffecb88 < 0x20 && (-0x48 < _DAT_fffecb88)))) &&
       ((sVar7 < 0x11 && ((-0x26 < sVar7 && (param_13 == '\0')))))) {
      DAT_fffecb8c = 2;
      goto LAB_000ca20c;
    }
    if ((((bVar3) && (param_9 == '\0')) && (0x7ce0 < param_11)) && ((bVar1 && (bVar4)))) {
      DAT_fffecb8c = 3;
      goto LAB_000ca20c;
    }
    if (((bVar3) && (param_9 == '\0')) &&
       ((0x31f3 < param_11 && (((bVar4 && (param_12 != '\0')) && (bVar2)))))) {
      DAT_fffecb8c = 4;
      goto LAB_000ca20c;
    }
  }
  DAT_fffecb8c = 0;
LAB_000ca20c:
  *param_15 = DAT_fffecb8c;
  *param_16 = _DAT_fffecb88;
  *param_17 = _DAT_fffecb8a;
  return;
}

