
/* WARNING: Removing unreachable block (ram,0x000f8d0a) */
/* WARNING: Removing unreachable block (ram,0x000f8a10) */
/* WARNING: Removing unreachable block (ram,0x000f8a46) */
/* WARNING: Removing unreachable block (ram,0x000f8cfa) */
/* WARNING: Removing unreachable block (ram,0x000f8ad4) */
/* WARNING: Removing unreachable block (ram,0x000f8adc) */
/* WARNING: Removing unreachable block (ram,0x000f8ae4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8864(char param_1,char param_2,ushort param_3,char param_4,ushort param_5,
                 ushort param_6,uint param_7,ushort param_8,char param_9,uint param_10,
                 ushort param_11,char param_12,char param_13,undefined4 param_14,char param_15,
                 char param_16,char param_17,char param_18,uint param_19,char param_20,char param_21
                 ,char param_22,char param_23,char param_24,short param_25,undefined1 *param_26,
                 char *param_27)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  short sVar12;
  uint uVar13;
  uint uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  char cVar18;
  
  uVar13 = LK_133F40((uint)&T_02F364,param_10 & 0xffff);
  uVar14 = LK_133BCC((uint)&T_02F370,param_19 & 0xffff);
  uVar15 = 0;
  bVar9 = false;
  if ((0xa00 < param_3) && ((0x9ff < param_3 || (DAT_fffed7f6 != '\0')))) {
    uVar15 = 1;
    bVar9 = true;
  }
  cVar18 = '\0';
  if (((((uVar14 & 0xff) <= (param_7 & 0xffff) * 0x148 >> 0x10) && (param_2 != '\0')) &&
      (param_20 != '\0')) && ((param_11 >> 8 < 0xfe || (bVar9)))) {
    cVar18 = '\x01';
  }
  *param_27 = cVar18;
  bVar9 = false;
  if ((-0x2666 < param_25) && ((-0x24fb < param_25 || (DAT_fffed7fd != '\0')))) {
    bVar9 = true;
  }
  bVar3 = false;
  if ((0x9580 < param_6) && ((0x95ff < param_6 || (DAT_fffed7f9 != '\0')))) {
    bVar3 = true;
  }
  bVar4 = false;
  if ((0x980 < param_6) && ((0x9ff < param_6 || (DAT_fffed7fc != '\0')))) {
    bVar4 = true;
  }
  bVar5 = false;
  if ((0x3a00 < param_3) && ((0x3bff < param_3 || (DAT_fffed7fa != '\0')))) {
    bVar5 = true;
  }
  bVar6 = false;
  if ((0x1e00 < param_3) && ((0x1fff < param_3 || (DAT_fffed7f7 != '\0')))) {
    bVar6 = true;
  }
  uVar16 = 0;
  bVar10 = false;
  if ((0x1600 < param_3) && ((0x17ff < param_3 || (DAT_fffed7f8 != '\0')))) {
    uVar16 = 1;
    bVar10 = true;
  }
  uVar17 = 0;
  bVar11 = false;
  if ((0xa00 < param_3) && ((0xbff < param_3 || (DAT_fffed7f4 != '\0')))) {
    uVar17 = 1;
    bVar11 = true;
  }
  bVar2 = true;
  if ((param_5 < 0x9000) && (DAT_fffed7f5 == '\0')) {
    bVar2 = false;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 499 < _DAT_fffed7f0;
    sVar12 = -1;
    if (_DAT_fffed7f0 != 0xffff) {
      sVar12 = _DAT_fffed7f0 + 1;
    }
  }
  else {
    _DAT_fffed7f0 = 0;
    sVar12 = _DAT_fffed7f0;
  }
  _DAT_fffed7f0 = sVar12;
  bVar7 = false;
  if ((((param_4 != '\0') && (1000 < param_8)) && (param_5 < 0xe001)) &&
     ((bVar1 && (param_5 >= 0x9000)))) {
    bVar7 = true;
  }
  if ((((param_24 != '\0') && (bVar3)) || ((!bVar4 || (((bVar5 || (!bVar6)) || (!bVar7)))))) ||
     (param_23 == '\0')) {
    bVar1 = false;
  }
  else {
    bVar1 = 0xe < _DAT_fffed7f2;
  }
  if (((param_24 != '\0') && (bVar3)) ||
     ((((!bVar4 || ((bVar5 || (!bVar6)))) || (!bVar7)) || (param_23 == '\0')))) {
    _DAT_fffed7f2 = 0;
    sVar12 = _DAT_fffed7f2;
  }
  else {
    sVar12 = -1;
    if (_DAT_fffed7f2 != 0xffff) {
      sVar12 = _DAT_fffed7f2 + 1;
    }
  }
  _DAT_fffed7f2 = sVar12;
  if ((((param_18 == '\0') && (param_17 == '\0')) && (param_9 == '\0')) && (param_22 == '\0')) {
    bVar8 = false;
    if ((param_3 < 0x901) && (param_13 != '\0')) {
      bVar8 = true;
    }
    if (((param_21 != '\0') || (param_1 != '\0')) ||
       ((param_15 != '\0' || ((bVar8 || ((uint)((int)(uint)param_8 >> 1) < (uVar13 & 0xffff))))))) {
      *param_26 = 4;
    }
    else if (param_13 != '\0') {
      if (((((bVar7) && (!bVar10)) && (bVar11)) &&
          (((param_6 < 0x200 && (param_12 == '\0')) && ((param_25 < 1 && (param_16 == '\0')))))) ||
         (bVar1)) {
        *param_26 = 2;
      }
      else if ((cVar18 == '\0') || (!bVar9)) {
        *param_26 = 9;
      }
      else {
        *param_26 = 1;
      }
    }
    else {
      *param_26 = 3;
    }
  }
  else {
    *param_26 = 0;
  }
  DAT_fffed7f6 = uVar15;
  DAT_fffed7fb = 0;
  DAT_fffed7fd = bVar9;
  DAT_fffed7f9 = bVar3;
  DAT_fffed7fc = bVar4;
  DAT_fffed7fa = bVar5;
  DAT_fffed7f7 = bVar6;
  DAT_fffed7f8 = uVar16;
  DAT_fffed7f4 = uVar17;
  DAT_fffed7f5 = bVar2;
  return;
}

