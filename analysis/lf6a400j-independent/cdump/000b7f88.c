
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b7f88(byte param_1,ushort param_2,char param_3,uint param_4,undefined1 param_5,
                 byte param_6,char param_7,ushort param_8,uint param_9,char param_10,char param_11,
                 char param_12,undefined1 *param_13,undefined4 param_14,undefined4 param_15,
                 undefined4 param_16,undefined4 param_17,undefined4 param_18,char *param_19,
                 undefined4 param_20,undefined4 param_21,char *param_22)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  short sVar6;
  ushort uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  undefined1 uVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  
  uVar8 = FUN_0016bb44(&DAT_00029856,param_5);
  uVar8 = uVar8 & 0xffff;
  uVar9 = __udiv32_r1_by_r0((param_4 & 0xffff) << 1,5);
  bVar2 = (int)uVar8 <= (int)(uVar9 & 0xffff);
  *(bool *)param_17 = bVar2;
  *param_22 = param_10;
  *(bool *)param_18 = 9 < param_6;
  *param_19 = param_7;
  bVar5 = false;
  if ((param_8 < 0xb45d) && (0x9173 < param_8)) {
    bVar5 = true;
  }
  *(bool *)param_20 = bVar5;
  *(bool *)param_14 = 2 < param_1;
  bVar3 = false;
  if ((param_2 < 0xff01) && (0x9ff < param_2)) {
    bVar3 = true;
  }
  *(bool *)param_15 = bVar3;
  iVar15 = (param_9 & 0xffff) - (uint)_DAT_fffec812;
  uVar8 = iVar15 * 0x1a;
  uVar9 = uVar8;
  if ((int)uVar8 < 0) {
    uVar9 = iVar15 * -0x1a;
  }
  if (iVar15 < 0) {
    uVar10 = uVar8 - 0xff;
    uVar12 = uVar10;
    if (((int)uVar8 < 0) && (-1 < (int)uVar10)) {
      uVar10 = 0x80000000;
      uVar12 = uVar10;
    }
  }
  else {
    uVar10 = uVar8 + 0xff;
    uVar12 = 0;
    if ((-1 < (int)uVar8) && ((int)uVar10 < 0)) {
      uVar10 = 0x7fffffff;
      uVar12 = uVar10;
    }
  }
  if (((int)uVar9 < 0x100) && (uVar8 = uVar12, -1 < iVar15)) {
    uVar8 = uVar10;
  }
  puVar14 = (undefined *)
            (((uVar8 & 0xffffff) >> 8 | (int)(char)(uVar8 >> 0x18) << 0x10) + (uint)_DAT_fffec812);
  puVar13 = &DAT_0000ffff;
  if (((int)puVar14 < (int)&DAT_00010000) && (puVar13 = puVar14, (int)puVar14 < 0)) {
    puVar13 = (undefined *)0x0;
  }
  uVar8 = (uint)param_8 - ((uint)puVar13 & 0xffff);
  if ((int)uVar8 < 0) {
    uVar8 = -uVar8;
    if ((int)uVar8 < 0) {
      uVar8 = 0;
    }
  }
  else if ((int)uVar8 < 0) {
    uVar8 = 0;
  }
  if ((uVar8 & 0xffff) < 0x1747) {
    if (DAT_fffec818 == '\0') {
      _DAT_fffec816 = 0;
      DAT_fffec818 = '\x01';
      DAT_fffec819 = '\x01';
    }
    _DAT_fffec810 = _DAT_fffec816;
    uVar7 = 0xffff;
    if (_DAT_fffec816 != 0xffff) {
      uVar7 = _DAT_fffec816 + 1;
    }
  }
  else {
    uVar7 = _DAT_fffec816;
    if (DAT_fffec819 != '\0') {
      _DAT_fffec810 = 0;
      DAT_fffec819 = '\0';
      DAT_fffec818 = '\0';
    }
  }
  _DAT_fffec816 = uVar7;
  bVar1 = 99 < _DAT_fffec810;
  *(bool *)param_21 = bVar1;
  bVar4 = false;
  if (((param_3 == '\0') && (param_3 == '\0' && 0xf9 < _DAT_fffec814)) && (param_12 == '\0')) {
    bVar4 = true;
  }
  uVar11 = 0;
  if ((((param_10 != '\0') && (2 < param_1)) && ((bVar3 && ((bVar4 && (bVar2)))))) &&
     ((9 < param_6 && ((((param_7 != '\0' && (bVar5)) && (bVar1)) && (param_11 == '\0')))))) {
    uVar11 = 1;
  }
  *param_13 = uVar11;
  *(bool *)param_16 = bVar4;
  if (param_3 != '\0') {
    _DAT_fffec814 = 0;
    sVar6 = _DAT_fffec814;
  }
  else {
    sVar6 = -1;
    if (_DAT_fffec814 != 0xffff) {
      sVar6 = _DAT_fffec814 + 1;
    }
  }
  _DAT_fffec814 = sVar6;
  _DAT_fffec812 = (short)puVar13;
  return;
}

