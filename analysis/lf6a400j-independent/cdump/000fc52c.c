
/* WARNING: Removing unreachable block (ram,0x000fc62c) */
/* WARNING: Removing unreachable block (ram,0x000fc636) */
/* WARNING: Removing unreachable block (ram,0x000fc63c) */
/* WARNING: Removing unreachable block (ram,0x000fc646) */
/* WARNING: Removing unreachable block (ram,0x000fc64a) */
/* WARNING: Removing unreachable block (ram,0x000fc650) */
/* WARNING: Removing unreachable block (ram,0x000fc654) */
/* WARNING: Removing unreachable block (ram,0x000fc640) */
/* WARNING: Removing unreachable block (ram,0x000fc6e8) */
/* WARNING: Removing unreachable block (ram,0x000fc6ee) */
/* WARNING: Removing unreachable block (ram,0x000fc6f2) */
/* WARNING: Removing unreachable block (ram,0x000fc712) */
/* WARNING: Removing unreachable block (ram,0x000fc716) */
/* WARNING: Removing unreachable block (ram,0x000fc77a) */
/* WARNING: Removing unreachable block (ram,0x000fc782) */
/* WARNING: Removing unreachable block (ram,0x000fc786) */
/* WARNING: Removing unreachable block (ram,0x000fc7f8) */
/* WARNING: Removing unreachable block (ram,0x000fc7fc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fc52c(uint param_1,char param_2,uint param_3,ushort param_4,char param_5,char param_6,
                 char param_7,uint param_8,uint param_9,char param_10,char param_11,short param_12,
                 short *param_13,short *param_14,short *param_15,short *param_16)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  
  param_1 = param_1 & 0xffff;
  param_8 = param_8 & 0xff;
  uVar3 = LK_139C18((uint)&T_02F668,param_1,param_8);
  param_3 = param_3 & 0xffff;
  uVar4 = LK_133BCC((uint)&T_02F620,param_3);
  iVar8 = (uVar4 & 0xff) * (int)(short)uVar3;
  sVar7 = 0x7fff;
  if ((iVar8 < 0x3fff81) && (sVar7 = -0x8000, -0x3fff82 < iVar8)) {
    sVar7 = (short)((ulonglong)((longlong)iVar8 * 0x2000000) >> 0x20);
  }
  if (param_11 == '\0') {
    uVar3 = LK_139C18((uint)&T_02F640,param_1,param_8);
    sVar6 = (short)uVar3;
  }
  else {
    uVar3 = LK_139C18((uint)&T_02F654,param_1,param_8);
    sVar6 = (short)uVar3;
  }
  iVar8 = -(param_9 & 0xffff);
  if (iVar8 < 0) {
    uVar3 = (int)&DAT_00010000 + iVar8;
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar4 = LK_139C18((uint)&T_02F62C,param_1,param_8);
  iVar8 = (int)(short)((int)(short)uVar4 * (uVar3 & 0xffff) >> 0x10) +
          (int)(short)((int)sVar6 * (param_9 & 0xffff) >> 0x10) + (int)sVar7;
  sVar7 = 0x7fff;
  if ((iVar8 < 0x8000) && (sVar7 = (short)iVar8, iVar8 < -0x8000)) {
    sVar7 = -0x8000;
  }
  if (sVar7 < 1) {
    sVar7 = 0;
  }
  *param_16 = sVar7;
  if (param_10 == '\0') {
    uVar3 = LK_134C84((uint)&T_02F614,param_3);
    sVar6 = (short)uVar3;
  }
  else {
    uVar3 = LK_134C84((uint)&T_02F608,param_3);
    sVar6 = (short)uVar3;
  }
  bVar1 = true;
  if ((param_5 != '\x01') && (DAT_fffed8dd == '\0')) {
    bVar1 = false;
  }
  if (sVar6 < _DAT_fffed8d8) {
    sVar5 = _DAT_fffed8d8 + -0x1d;
    if ((_DAT_fffed8d8 < 0) && (-1 < sVar5)) {
      sVar5 = -0x8000;
    }
    if (sVar6 < sVar5) {
      sVar6 = sVar5;
    }
  }
  else {
    sVar5 = _DAT_fffed8d8 + 0x1d;
    if ((-1 < _DAT_fffed8d8) && (sVar5 < 0)) {
      sVar5 = 0x7fff;
    }
    if (sVar5 < sVar6) {
      sVar6 = sVar5;
    }
  }
  _DAT_fffed8d8 = 0;
  if (bVar1) {
    _DAT_fffed8d8 = sVar6;
  }
  *param_15 = _DAT_fffed8d8;
  if (_DAT_fffed8d8 < param_12) {
    sVar6 = param_12 + -0x7fff;
    if ((param_12 < 0) && (-1 < sVar6)) {
      sVar6 = -0x8000;
    }
    if (_DAT_fffed8d8 < sVar6) goto LAB_000fc81e;
  }
  else {
    sVar6 = param_12 + 0x1d;
    if ((-1 < param_12) && (sVar6 < 0)) {
      sVar6 = 0x7fff;
    }
    if (sVar6 < _DAT_fffed8d8) goto LAB_000fc81e;
  }
  sVar6 = _DAT_fffed8d8;
LAB_000fc81e:
  sVar5 = _DAT_fffed8d8 - param_12;
  if (((_DAT_fffed8d8 < 0) || (-1 < param_12)) || (-1 < sVar5)) {
    if (((_DAT_fffed8d8 < 0) && (-1 < param_12)) && (-1 < sVar5)) {
      sVar5 = -0x8000;
    }
  }
  else {
    sVar5 = 0x7fff;
  }
  uVar3 = (uint)sVar5;
  if ((int)uVar3 < 0) {
    uVar3 = -uVar3;
    if ((int)uVar3 < 0) {
      uVar3 = 0;
    }
  }
  else if ((int)uVar3 < 0) {
    uVar3 = 0;
  }
  bVar2 = true;
  if ((((DAT_fffed8db == '\0') || (param_2 == '\0')) || (DAT_fffed8dc != '\0')) &&
     (((uVar3 & 0xffff) < 2 || (DAT_fffed8da == '\0')))) {
    bVar2 = false;
  }
  if ((!bVar2) || (param_10 == '\0')) {
    sVar6 = _DAT_fffed8d8;
  }
  *param_14 = sVar6;
  if ((param_2 == '\0') || ((param_10 == '\0' && (0x95ff < param_4)))) {
    if (param_6 == '\0') {
      if (param_7 == '\0') {
        *param_13 = sVar7;
      }
      else {
        *param_13 = _DAT_fffed8d8;
      }
    }
    else {
      *param_13 = 0x1c72;
    }
  }
  else {
    *param_13 = sVar6;
  }
  DAT_fffed8db = 1;
  DAT_fffed8dc = param_2;
  DAT_fffed8da = bVar2;
  DAT_fffed8dd = bVar1;
  return;
}

