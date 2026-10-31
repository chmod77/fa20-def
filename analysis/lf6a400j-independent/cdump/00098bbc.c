
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00098bbc(char param_1,char param_2,char param_3,char param_4,char param_5,uint param_6,
                 uint param_7,char param_8,char param_9,uint param_10,uint param_11,char param_12,
                 char *param_13,byte *param_14,undefined2 *param_15,byte *param_16,byte *param_17,
                 char *param_18)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  ushort uVar7;
  byte bVar8;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar9;
  short sVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  char cVar14;
  
  bVar1 = false;
  if (param_8 == '\0') {
    _DAT_fffebf84 = 0;
    sVar10 = _DAT_fffebf84;
  }
  else {
    bVar1 = _DAT_fffebf84 < 0x32;
    sVar10 = -1;
    if (_DAT_fffebf84 != 0xffff) {
      sVar10 = _DAT_fffebf84 + 1;
    }
  }
  _DAT_fffebf84 = sVar10;
  if ((((param_8 != '\0') && (bVar1)) && ((undefined *)(param_6 & 0xffff) <= &UNK_000077ff)) &&
     (param_9 != '\0')) {
    param_7 = param_6;
  }
  *param_15 = (short)param_7;
  iVar3 = -(param_11 & 0xffff);
  if (iVar3 < 0) {
    uVar7 = (ushort)iVar3;
  }
  else {
    uVar7 = 0xffff;
  }
  if ((((param_2 == '\x01') || (param_2 == '\x02')) ||
      ((param_2 == '\x06' || ((param_2 == '\t' && (param_3 != '\0')))))) &&
     (((param_5 == '\x01' || ((param_5 == '\x02' || (param_5 == '\x06')))) ||
      ((param_5 == '\t' && (param_4 != '\0')))))) {
    uVar4 = DAT_fffebf87 + 0xff;
    if (uVar4 < 0x100) {
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
      bVar8 = (byte)uVar4;
    }
    else {
      bVar8 = 0xff;
    }
  }
  else {
    sVar10 = DAT_fffebf87 - 8;
    if (sVar10 < 0) {
      bVar8 = 0;
    }
    else {
      if (sVar10 < 0) {
        sVar10 = 0;
      }
      bVar8 = (byte)sVar10;
    }
  }
  if (param_1 != '\0') {
    bVar8 = 0;
  }
  *param_14 = bVar8;
  param_10 = param_10 & 0xffff;
  uVar4 = LK_135BE8((uint)&T_02D56C,param_7,param_10);
  uVar12 = (uint)bVar8;
  uVar4 = __udiv32_r1_by_r0(uVar12 * (uVar4 & 0xff) + uVar12 * -0x20 + 0x1fe0,0xff);
  if (0xff < (uVar4 & 0xffff)) {
    uVar4 = 0xff;
  }
  uVar5 = LK_135BE8((uint)&T_02D594,param_7,param_10);
  uVar5 = __udiv32_r1_by_r0(uVar12 * (uVar5 & 0xff) + uVar12 * -0x20 + 0x1fe0,0xff);
  if (0xff < (uVar5 & 0xffff)) {
    uVar5 = 0xff;
  }
  uVar6 = LK_135BE8((uint)&T_02D580,param_7,param_10);
  uVar13 = 0xff - uVar12 & 0xff;
  uVar6 = __udiv32_r1_by_r0(uVar13 * (uVar6 & 0xff) + uVar13 * -0x20 + 0x1fe0,0xff);
  uVar12 = 0xff;
  if ((uVar6 & 0xffff) < 0x100) {
    uVar12 = uVar6;
  }
  uVar4 = (uVar12 & 0xff) + (uVar4 & 0xff);
  if (uVar4 < 0x120) {
    bVar11 = 0;
    if (0x1f < uVar4) {
      bVar11 = (char)uVar4 - 0x20;
    }
  }
  else {
    bVar11 = 0xff;
  }
  *param_16 = bVar11;
  iVar3 = (int)(short)((short)((uint)uVar7 * (uint)bVar11 >> 0x10) -
                      (short)((int)(uint)(uVar7 >> 8) >> 3));
  uVar4 = 0xff;
  if (iVar3 < 0xe0) {
    uVar4 = iVar3 + 0x20;
  }
  uVar12 = LK_135BE8((uint)&T_02D5A8,param_7,param_10);
  uVar12 = __udiv32_r1_by_r0(uVar13 * (uVar12 & 0xff) + uVar13 * -0x20 + 0x1fe0,0xff);
  if (0xff < (uVar12 & 0xffff)) {
    uVar12 = 0xff;
  }
  uVar12 = (uVar12 & 0xff) + (uVar5 & 0xff);
  if (uVar12 < 0x120) {
    bVar11 = 0;
    if (0x1f < uVar12) {
      bVar11 = (char)uVar12 - 0x20;
    }
  }
  else {
    bVar11 = 0xff;
  }
  *param_17 = bVar11;
  iVar9 = (int)(short)((short)((uint)bVar11 * (param_11 & 0xffff) >> 0x10) -
                      (short)((int)((param_11 & 0xffff) >> 8) >> 3));
  iVar3 = 0xdf;
  if (iVar9 < 0xe0) {
    iVar3 = iVar9;
  }
  uVar4 = (uVar4 & 0xff) + (iVar3 + 0x20U & 0xff);
  iVar3 = 0xff;
  if ((uVar4 < 0x120) && (iVar3 = 0, 0x1f < uVar4)) {
    iVar3 = uVar4 - 0x20;
  }
  cVar14 = (char)iVar3;
  *param_18 = cVar14;
  if (DAT_fffebf89 == '\0') {
    DAT_fffebf88 = '\0';
    DAT_fffebf89 = '\x01';
  }
  cVar2 = cVar14;
  if (DAT_fffebf88 != '\0') {
    FUN_0016b44c(&DAT_ffff1986,iVar3,0xffffff80);
    cVar2 = DAT_ffff1986;
  }
  DAT_ffff1986 = cVar2;
  DAT_fffebf88 = 1;
  uVar7 = (ushort)iVar3 & 0xff;
  if ((short)(DAT_fffebf86 - uVar7) < 0x58) {
    if (param_12 == '\0') {
      *param_13 = cVar14;
    }
    else {
      *param_13 = DAT_ffff1986;
    }
  }
  else {
    *param_13 = (char)((short)(uVar7 + DAT_fffebf86 + -0x40) >> 1) + ' ';
  }
  DAT_fffebf87 = bVar8;
  DAT_fffebf86 = cVar14;
  return;
}

