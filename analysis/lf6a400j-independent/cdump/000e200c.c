
/* WARNING: Removing unreachable block (ram,0x000e20f6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e200c(char param_1,char param_2,char param_3,char param_4,short param_5,byte param_6,
                 ushort param_7,byte param_8,byte param_9,undefined4 param_10,ushort param_11,
                 ushort param_12,char param_13,char param_14,char param_15,undefined1 *param_16,
                 byte *param_17,short *param_18,short *param_19,short *param_20,short *param_21,
                 byte *param_22)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  undefined1 uVar7;
  byte bVar8;
  short sVar9;
  byte bVar10;
  
  sVar9 = _DAT_fffed23e;
  uVar5 = (uint)param_5;
  if ((int)uVar5 < 0) {
    uVar5 = -uVar5;
  }
  if ((int)uVar5 < 0) {
    uVar5 = 0;
  }
  if (DAT_fffed244 == '\0') {
    bVar6 = 0x46;
  }
  else {
    bVar6 = 0x41;
  }
  if (_DAT_fffed23e == -1) {
    _DAT_fffed23e = -1;
  }
  else {
    _DAT_fffed23e = _DAT_fffed23e + 1;
  }
  DAT_fffed244 = bVar6 <= param_6;
  *param_18 = sVar9;
  bVar1 = false;
  if ((param_11 < 0x9333) && (0x6ccc < param_11)) {
    bVar1 = true;
  }
  sVar9 = 0;
  if (bVar1) {
    sVar9 = _DAT_fffed23c;
    if (_DAT_fffed23c == -1) {
      _DAT_fffed23c = -1;
    }
    else {
      _DAT_fffed23c = _DAT_fffed23c + 1;
    }
  }
  else {
    _DAT_fffed23c = 0;
  }
  *param_19 = sVar9;
  bVar10 = DAT_fffed246;
  uVar5 = uVar5 & 0xffff;
  bVar8 = 0;
  if (uVar5 < 0xccd) {
    bVar8 = bVar10;
    if (DAT_fffed246 == 0xff) {
      DAT_fffed246 = -1;
    }
    else {
      DAT_fffed246 = DAT_fffed246 + 1;
    }
  }
  else {
    DAT_fffed246 = '\0';
  }
  *param_22 = bVar8;
  bVar4 = DAT_fffed245;
  bVar10 = 0;
  if (uVar5 < 0xccd) {
    bVar10 = bVar4;
    if (DAT_fffed245 == 0xff) {
      DAT_fffed245 = -1;
    }
    else {
      DAT_fffed245 = DAT_fffed245 + 1;
    }
  }
  else {
    DAT_fffed245 = '\0';
  }
  *param_17 = bVar10;
  bVar2 = false;
  if (((((param_1 != '\0') && (param_4 != '\0')) && (param_15 == '\0')) &&
      ((uVar5 < 0xccd && (0x31 < bVar8)))) && (param_9 == 0)) {
    bVar2 = true;
  }
  sVar9 = 0;
  if (bVar2) {
    sVar9 = _DAT_fffed242;
    if (_DAT_fffed242 == -1) {
      _DAT_fffed242 = -1;
    }
    else {
      _DAT_fffed242 = _DAT_fffed242 + 1;
    }
  }
  else {
    _DAT_fffed242 = 0;
  }
  *param_21 = sVar9;
  bVar3 = false;
  if ((((param_1 != '\0') && (param_2 != '\0')) &&
      ((param_3 == '\0' && (((param_4 != '\0' && (uVar5 < 0xccd)) && (0x31 < bVar10)))))) &&
     (((bVar6 <= param_6 && (param_7 < 0x2904)) &&
      ((0x5db < param_7 &&
       (((param_8 < 0x80 && (param_9 < 10)) &&
        ((bVar1 && ((param_12 < 0x8300 && (param_13 == '\0')))))))))))) {
    bVar3 = true;
  }
  sVar9 = 0;
  if (bVar3) {
    sVar9 = _DAT_fffed240;
    if (_DAT_fffed240 == -1) {
      _DAT_fffed240 = -1;
    }
    else {
      _DAT_fffed240 = _DAT_fffed240 + 1;
    }
  }
  else {
    _DAT_fffed240 = 0;
  }
  *param_20 = sVar9;
  if ((param_14 != -0x5b) || (!bVar2)) {
    uVar7 = 0;
    if ((param_14 != -0x5b) && (bVar3)) {
      uVar7 = 1;
    }
    *param_16 = uVar7;
  }
  else {
    *param_16 = 1;
  }
  return;
}

