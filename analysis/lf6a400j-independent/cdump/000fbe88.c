
/* WARNING: Removing unreachable block (ram,0x000fc424) */
/* WARNING: Removing unreachable block (ram,0x000fc42e) */
/* WARNING: Removing unreachable block (ram,0x000fc436) */
/* WARNING: Removing unreachable block (ram,0x000fc438) */
/* WARNING: Removing unreachable block (ram,0x000fc3c6) */
/* WARNING: Removing unreachable block (ram,0x000fc3d2) */
/* WARNING: Removing unreachable block (ram,0x000fc3d6) */
/* WARNING: Removing unreachable block (ram,0x000fc076) */
/* WARNING: Removing unreachable block (ram,0x000fc002) */
/* WARNING: Removing unreachable block (ram,0x000fc412) */
/* WARNING: Removing unreachable block (ram,0x000fc344) */
/* WARNING: Removing unreachable block (ram,0x000fc332) */
/* WARNING: Removing unreachable block (ram,0x000fc104) */
/* WARNING: Removing unreachable block (ram,0x000fc10c) */
/* WARNING: Removing unreachable block (ram,0x000fc114) */
/* WARNING: Removing unreachable block (ram,0x000fc40c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fbe88(char param_1,char param_2,ushort param_3,char param_4,ushort param_5,
                 ushort param_6,uint param_7,ushort param_8,char param_9,uint param_10,
                 ushort param_11,char param_12,char param_13,undefined4 param_14,char param_15,
                 undefined4 param_16,char param_17,char param_18,uint param_19,char param_20,
                 char param_21,char param_22,undefined4 param_23,char param_24,short param_25,
                 undefined1 *param_26,char *param_27)

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
  short sVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  char cVar17;
  
  uVar12 = LK_133F40((uint)&T_02F5F0,param_10 & 0xffff);
  uVar13 = LK_133BCC((uint)&T_02F5FC,param_19 & 0xffff);
  uVar14 = 0;
  bVar8 = false;
  if ((0xa00 < param_3) && ((0x9ff < param_3 || (DAT_fffed8d0 != '\0')))) {
    uVar14 = 1;
    bVar8 = true;
  }
  cVar17 = '\0';
  if (((((uVar13 & 0xff) <= (param_7 & 0xffff) * 0x148 >> 0x10) && (param_2 != '\0')) &&
      (param_20 != '\0')) && ((param_11 >> 8 < 0xfe || (bVar8)))) {
    cVar17 = '\x01';
  }
  *param_27 = cVar17;
  bVar8 = false;
  if ((0x16c < param_25) && ((0x443 < param_25 || (DAT_fffed8d5 != '\0')))) {
    bVar8 = true;
  }
  bVar3 = false;
  if ((0x9580 < param_6) && ((0x95ff < param_6 || (DAT_fffed8d3 != '\0')))) {
    bVar3 = true;
  }
  bVar4 = false;
  if ((0x9580 < param_6) && ((0x95ff < param_6 || (DAT_fffed8ce != '\0')))) {
    bVar4 = true;
  }
  bVar5 = false;
  if ((0x3a00 < param_3) && ((0x3bff < param_3 || (DAT_fffed8d4 != '\0')))) {
    bVar5 = true;
  }
  bVar6 = false;
  if ((0x1e00 < param_3) && ((0x1fff < param_3 || (DAT_fffed8d1 != '\0')))) {
    bVar6 = true;
  }
  uVar15 = 0;
  bVar9 = false;
  if ((0x1600 < param_3) && ((0x17ff < param_3 || (DAT_fffed8d2 != '\0')))) {
    uVar15 = 1;
    bVar9 = true;
  }
  uVar16 = 0;
  bVar10 = false;
  if ((0xa00 < param_3) && ((0xbff < param_3 || (DAT_fffed8cd != '\0')))) {
    uVar16 = 1;
    bVar10 = true;
  }
  bVar2 = true;
  if ((param_5 < 0x9000) && (DAT_fffed8cf == '\0')) {
    bVar2 = false;
  }
  bVar1 = false;
  if (bVar2) {
    bVar1 = 499 < _DAT_fffed8ca;
    sVar11 = -1;
    if (_DAT_fffed8ca != 0xffff) {
      sVar11 = _DAT_fffed8ca + 1;
    }
  }
  else {
    _DAT_fffed8ca = 0;
    sVar11 = _DAT_fffed8ca;
  }
  _DAT_fffed8ca = sVar11;
  bVar7 = false;
  if ((((param_4 != '\0') && (1000 < param_8)) && (param_5 < 0xe001)) &&
     ((bVar1 && (param_5 >= 0x9000)))) {
    bVar7 = true;
  }
  if (((param_24 != '\0') && (bVar3)) || ((!bVar4 || (((bVar5 || (!bVar6)) || (!bVar7)))))) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (((param_24 != '\0') && (bVar3)) || (((!bVar4 || ((bVar5 || (!bVar6)))) || (!bVar7)))) {
    _DAT_fffed8c8 = 0;
    sVar11 = _DAT_fffed8c8;
  }
  else {
    sVar11 = -1;
    if (_DAT_fffed8c8 != -1) {
      sVar11 = _DAT_fffed8c8 + 1;
    }
  }
  _DAT_fffed8c8 = sVar11;
  if ((((param_18 == '\0') && (param_17 == '\0')) && (param_9 == '\0')) && (param_22 == '\0')) {
    if (((param_21 == '\0') && (param_1 == '\0')) &&
       ((param_15 == '\0' &&
        ((param_13 != '\0' && ((uVar12 & 0xffff) <= (uint)((int)(uint)param_8 >> 1))))))) {
      if ((((((bVar7) && (!bVar9)) && (bVar10)) && ((param_6 < 0x200 && (param_12 == '\0')))) &&
          (param_25 < 1)) || (bVar1)) {
        *param_26 = 2;
      }
      else if ((cVar17 == '\0') || (!bVar8)) {
        *param_26 = 9;
      }
      else {
        *param_26 = 1;
      }
    }
    else {
      *param_26 = 4;
    }
  }
  else {
    *param_26 = 0;
  }
  DAT_fffed8d0 = uVar14;
  DAT_fffed8cc = 0;
  DAT_fffed8d5 = bVar8;
  DAT_fffed8d3 = bVar3;
  DAT_fffed8ce = bVar4;
  DAT_fffed8d4 = bVar5;
  DAT_fffed8d1 = bVar6;
  DAT_fffed8d2 = uVar15;
  DAT_fffed8cd = uVar16;
  DAT_fffed8cf = bVar2;
  return;
}

