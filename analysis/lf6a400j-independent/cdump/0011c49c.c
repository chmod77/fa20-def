
/* WARNING: Removing unreachable block (ram,0x0011c756) */
/* WARNING: Removing unreachable block (ram,0x0011c782) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011c49c(char param_1,char param_2,uint param_3,byte param_4,byte param_5,byte param_6,
                 char param_7,char param_8,ushort param_9,short param_10,undefined4 param_11,
                 ushort param_12,byte param_13,char param_14,char param_15,ushort param_16,
                 ushort param_17,short param_18,short param_19,char param_20,char param_21,
                 char param_22,short param_23,short param_24,short param_25,ushort param_26,
                 ushort param_27,undefined1 *param_28,ushort *param_29,ushort *param_30,
                 ushort *param_31,ushort *param_32)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  ushort uVar7;
  uint uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  undefined1 uVar12;
  short sVar13;
  ushort uVar14;
  short sVar15;
  
  uVar8 = LK_133B38((uint)&T_02FD70,param_3);
  uVar9 = 0;
  if (param_7 == '\0') {
    uVar9 = _DAT_fffee07e;
    if (_DAT_fffee07e == 0xffff) {
      _DAT_fffee07e = -1;
    }
    else {
      _DAT_fffee07e = _DAT_fffee07e + 1;
    }
  }
  else {
    _DAT_fffee07e = 0;
  }
  *param_29 = uVar9;
  uVar10 = 0;
  if (param_8 == '\0') {
    uVar10 = _DAT_fffee07c;
    if (_DAT_fffee07c == 0xffff) {
      _DAT_fffee07c = -1;
    }
    else {
      _DAT_fffee07c = _DAT_fffee07c + 1;
    }
  }
  else {
    _DAT_fffee07c = 0;
  }
  *param_30 = uVar10;
  bVar4 = false;
  if ((param_3 < 0x51) && (0x47 < param_3)) {
    bVar4 = true;
  }
  bVar5 = false;
  if ((param_4 < 0x51) && (0x3b < param_4)) {
    bVar5 = true;
  }
  bVar6 = false;
  if ((param_12 < 0x281) && (0x1ff < param_12)) {
    bVar6 = true;
  }
  bVar1 = false;
  if ((param_26 < 0x8030) && (0x7fd0 < param_26)) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((param_27 < 0x8030) && (0x7fd0 < param_27)) {
    bVar2 = true;
  }
  bVar3 = true;
  if ((!bVar1) && (!bVar2)) {
    bVar3 = false;
  }
  uVar11 = 0;
  if (bVar3) {
    uVar11 = _DAT_fffee074;
    if (_DAT_fffee074 == 0xffff) {
      _DAT_fffee074 = -1;
    }
    else {
      _DAT_fffee074 = _DAT_fffee074 + 1;
    }
  }
  else {
    _DAT_fffee074 = 0;
  }
  uVar14 = 0;
  if (param_10 == 0) {
    uVar14 = _DAT_fffee078;
    if (_DAT_fffee078 == 0xffff) {
      _DAT_fffee078 = -1;
    }
    else {
      _DAT_fffee078 = _DAT_fffee078 + 1;
    }
  }
  else {
    _DAT_fffee078 = 0;
  }
  *param_31 = uVar14;
  uVar7 = _DAT_fffee076;
  if (_DAT_fffee076 == 0xffff) {
    _DAT_fffee076 = -1;
  }
  else {
    _DAT_fffee076 = _DAT_fffee076 + 1;
  }
  *param_32 = uVar7;
  if ((param_15 == '\0') || (DAT_fffee080 != '\0')) {
    sVar15 = 0;
    if (_DAT_fffee07a != 0) {
      sVar15 = _DAT_fffee07a + -1;
    }
  }
  else {
    sVar15 = 0x96;
  }
  sVar13 = 0;
  if (sVar15 != 0) {
    sVar13 = sVar15;
  }
  uVar12 = 0;
  if ((((((param_1 == '\0') && (param_2 != '\0')) && (bVar4)) &&
       (((((bVar5 && (param_5 < 9)) && ((param_6 < 0xb && ((2 < uVar9 && (param_7 == '\0')))))) &&
         (5 < uVar10)) &&
        ((((param_8 == '\0' && (0xa7f < param_9)) && (8 < uVar14)) &&
         ((param_10 == 0 && (0xb < uVar7)))))))) &&
      (((bVar6 && ((0xfe < param_13 && (param_14 == '\0')))) &&
       ((param_15 == '\0' || (((sVar13 == 0 && (param_16 < 0x8601)) && (0xf9 < param_17)))))))) &&
     ((((param_18 == 0 && (param_19 == 0)) &&
       ((param_20 == '\0' && ((param_21 == '\0' && (param_22 == '\0')))))) &&
      ((param_23 == 0 &&
       ((((param_24 == 0 && (param_25 == 0)) && (bVar3)) && ((uVar8 & 0xff) <= (uint)uVar11))))))))
  {
    uVar12 = 1;
  }
  *param_28 = uVar12;
  DAT_fffee080 = param_15;
  _DAT_fffee07a = sVar15;
  return;
}

