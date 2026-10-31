
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00084cf4(byte param_1,ushort param_2,char param_3,ushort param_4,char param_5,char param_6,
                 ushort param_7,char param_8,char param_9,char param_10,char param_11,
                 undefined1 *param_12,char *param_13,ushort *param_14,byte *param_15,
                 ushort *param_16,undefined4 param_17,ushort *param_18,ushort *param_19,
                 ushort *param_20,ushort *param_21,char *param_22)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort in_r1;
  uint uVar4;
  undefined1 uVar5;
  char cVar9;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar10;
  ushort uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uStack_28;
  
  bVar1 = DAT_fffebb64 != '\0';
  cVar9 = '\f';
  if (bVar1) {
    cVar9 = DAT_fffebb64;
  }
  if (cVar9 == '\0') {
    DAT_fffebb64 = '\0';
  }
  else {
    DAT_fffebb64 = cVar9 + -1;
  }
  uVar6 = param_4 & 0xff;
  uVar2 = uVar6 != 0 ^ 1;
  if (!bVar1) {
    _DAT_fffebb50 = _DAT_fffebb54;
    uVar4 = (uint)_DAT_fffebb54 - (uint)param_2;
    if ((int)uVar4 < 0) {
      uVar4 = -uVar4;
      if ((int)uVar4 < 0) {
        uVar4 = 0;
      }
    }
    else if ((int)uVar4 < 0) {
      uVar4 = 0;
    }
    DAT_fffebb52 = DAT_fffebb61;
    in_r1 = 0;
    if ((((uVar2 != 0) && (0x1dff < param_2)) && ((undefined1 *)(uVar4 & 0xffff) < &LAB_00002800))
       && (param_4 = param_4 & 0xff, 0x31 < (short)(DAT_fffebb61 - param_4))) {
      in_r1 = 1;
    }
    DAT_fffebb53 = (char)in_r1;
    DAT_fffebb61 = (byte)param_4;
    _DAT_fffebb54 = param_2;
  }
  *param_14 = _DAT_fffebb50;
  *param_15 = DAT_fffebb52;
  if (DAT_fffebb63 == '\0') {
    uVar10 = 0x1e00;
  }
  else {
    uVar10 = 0x1900;
  }
  uVar7 = 0;
  if (uVar2 != 0) {
    uVar7 = _DAT_fffebb5a;
  }
  if ((((0x23 < param_1) && (0x13ff < param_2)) &&
      ((param_2 < 0x2800 && ((param_3 == '\0' && (uVar2 != 0)))))) &&
     (uVar7 = _DAT_fffebb5a + 1, uVar7 < _DAT_fffebb5a)) {
    uVar7 = 0xffff;
  }
  DAT_fffebb63 = uVar10 <= param_2;
  *param_16 = uVar7;
  uVar13 = 0;
  if (0x65ff < param_2) {
    uVar13 = _DAT_fffebb5e;
  }
  if ((0x6fff < param_2) && (uStack_28 = _DAT_fffebb5e + 1, uStack_28 < _DAT_fffebb5e)) {
    uStack_28 = 0xffff;
  }
  uVar11 = 0;
  if (0x45ff < param_2) {
    uVar11 = _DAT_fffebb5c;
  }
  if ((0x4fff < param_2) &&
     (param_4 = _DAT_fffebb5c + 1, (ushort)(_DAT_fffebb5c + 1) < _DAT_fffebb5c)) {
    param_4 = 0xffff;
  }
  uVar12 = 0;
  if (0x25ff < param_2) {
    uVar12 = _DAT_fffebb56;
  }
  if ((0x33ff < param_2) && (in_r1 = _DAT_fffebb56 + 1, in_r1 < _DAT_fffebb56)) {
    in_r1 = 0xffff;
  }
  uVar8 = 0;
  if (0x25ff < param_2) {
    uVar8 = _DAT_fffebb58;
  }
  uVar3 = uVar2;
  if ((0x33ff < param_2) && (uVar3 = _DAT_fffebb58 + 1, (ushort)(_DAT_fffebb58 + 1) < _DAT_fffebb58)
     ) {
    uVar3 = 0xffff;
  }
  if ((DAT_fffebb53 != '\0') || (0xb < uVar7)) {
    DAT_fffebb60 = '\x01';
  }
  if (uVar2 == 0) {
    DAT_fffebb60 = '\0';
  }
  if ((((((param_5 != '\0') || (param_6 != '\0')) || (param_7 < 0xa000)) || (param_8 != '\0')) ||
      (((DAT_fffebb60 != '\0' || (5 < uVar6)) && ((DAT_fffebb60 == '\0' || (param_3 == '\0')))))) ||
     (((param_9 != '\0' && (param_10 != '\0')) || (bVar1 = param_11 == '\0', !bVar1)))) {
    bVar1 = false;
  }
  *(bool *)param_17 = bVar1;
  if (bVar1) {
    if (0x6fff < param_2) {
      uVar13 = uStack_28;
    }
  }
  else {
    uVar13 = 0;
  }
  *param_18 = uVar13;
  if (bVar1) {
    if (param_2 < 0x5000) {
      param_4 = uVar11;
    }
  }
  else {
    param_4 = 0;
  }
  *param_19 = param_4;
  if (bVar1) {
    if (param_2 < 0x3400) {
      in_r1 = uVar12;
    }
  }
  else {
    in_r1 = 0;
  }
  *param_20 = in_r1;
  if (bVar1) {
    if (param_2 < 0x3400) {
      uVar3 = uVar8;
    }
  }
  else {
    uVar3 = 0;
  }
  *param_21 = uVar3;
  cVar9 = '\0';
  if ((bVar1) &&
     ((((0x176 < uVar13 || (0x36a < param_4)) || (0xea5 < in_r1)) ||
      (cVar9 = DAT_fffebb62, 0xea5 < uVar3)))) {
    cVar9 = '\x01';
  }
  uVar5 = 0;
  if ((uVar10 <= param_2) && (cVar9 != '\0')) {
    uVar5 = 1;
  }
  *param_12 = uVar5;
  *param_22 = cVar9;
  *param_13 = DAT_fffebb60;
  _DAT_fffebb5a = uVar7;
  _DAT_fffebb5e = uVar13;
  _DAT_fffebb5c = param_4;
  _DAT_fffebb56 = in_r1;
  _DAT_fffebb58 = uVar3;
  DAT_fffebb62 = cVar9;
  return;
}

