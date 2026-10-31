
/* WARNING: Removing unreachable block (ram,0x000f8fe6) */
/* WARNING: Removing unreachable block (ram,0x000f8ff0) */
/* WARNING: Removing unreachable block (ram,0x000f8ff6) */
/* WARNING: Removing unreachable block (ram,0x000f9000) */
/* WARNING: Removing unreachable block (ram,0x000f9004) */
/* WARNING: Removing unreachable block (ram,0x000f900a) */
/* WARNING: Removing unreachable block (ram,0x000f900e) */
/* WARNING: Removing unreachable block (ram,0x000f8ffa) */
/* WARNING: Removing unreachable block (ram,0x000f90a2) */
/* WARNING: Removing unreachable block (ram,0x000f90a8) */
/* WARNING: Removing unreachable block (ram,0x000f90ac) */
/* WARNING: Removing unreachable block (ram,0x000f90cc) */
/* WARNING: Removing unreachable block (ram,0x000f90d0) */
/* WARNING: Removing unreachable block (ram,0x000f917a) */
/* WARNING: Removing unreachable block (ram,0x000f9182) */
/* WARNING: Removing unreachable block (ram,0x000f9186) */
/* WARNING: Removing unreachable block (ram,0x000f91aa) */
/* WARNING: Removing unreachable block (ram,0x000f91ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f8ee0(uint param_1,char param_2,uint param_3,ushort param_4,char param_5,char param_6,
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
  uVar3 = LK_139C18((uint)&T_02F3DC,param_1,param_8);
  param_3 = param_3 & 0xffff;
  uVar4 = LK_133BCC((uint)&T_02F394,param_3);
  iVar8 = (uVar4 & 0xff) * (int)(short)uVar3;
  sVar7 = 0x7fff;
  if ((iVar8 < 0x3fff81) && (sVar7 = -0x8000, -0x3fff82 < iVar8)) {
    sVar7 = (short)((ulonglong)((longlong)iVar8 * 0x2000000) >> 0x20);
  }
  if (param_11 == '\0') {
    uVar3 = LK_139C18((uint)&T_02F3B4,param_1,param_8);
    sVar6 = (short)uVar3;
  }
  else {
    uVar3 = LK_139C18((uint)&T_02F3C8,param_1,param_8);
    sVar6 = (short)uVar3;
  }
  iVar8 = -(param_9 & 0xffff);
  if (iVar8 < 0) {
    uVar3 = (int)&DAT_00010000 + iVar8;
  }
  else {
    uVar3 = 0xffffffff;
  }
  uVar4 = LK_139C18((uint)&T_02F3A0,param_1,param_8);
  iVar8 = (int)(short)((int)(short)uVar4 * (uVar3 & 0xffff) >> 0x10) +
          (int)(short)((int)sVar6 * (param_9 & 0xffff) >> 0x10) + (int)sVar7;
  sVar7 = 0x7fff;
  if ((iVar8 < 0x8000) && (sVar7 = (short)iVar8, iVar8 < -0x8000)) {
    sVar7 = -0x8000;
  }
  if (sVar7 < -0x2665) {
    sVar7 = -0x2666;
  }
  *param_16 = sVar7;
  if (param_10 == '\0') {
    uVar3 = LK_134C84((uint)&T_02F388,param_3);
    sVar6 = (short)uVar3;
  }
  else {
    uVar3 = LK_134C84((uint)&T_02F37C,param_3);
    sVar6 = (short)uVar3;
  }
  bVar1 = true;
  if ((param_5 != '\x01') && (DAT_fffed804 == '\0')) {
    bVar1 = false;
  }
  if (sVar6 < _DAT_fffed800) {
    sVar5 = _DAT_fffed800 + -0x1d;
    if ((_DAT_fffed800 < 0) && (-1 < sVar5)) {
      sVar5 = -0x8000;
    }
    if (sVar6 < sVar5) {
      sVar6 = sVar5;
    }
  }
  else {
    sVar5 = _DAT_fffed800 + 0x1d;
    if ((-1 < _DAT_fffed800) && (sVar5 < 0)) {
      sVar5 = 0x7fff;
    }
    if (sVar5 < sVar6) {
      sVar6 = sVar5;
    }
  }
  _DAT_fffed800 = 0;
  if (bVar1) {
    _DAT_fffed800 = sVar6;
  }
  *param_15 = _DAT_fffed800;
  if (_DAT_fffed800 < param_12) {
    sVar6 = param_12 + -0x7fff;
    if ((param_12 < 0) && (-1 < sVar6)) {
      sVar6 = -0x8000;
    }
    if (_DAT_fffed800 < sVar6) goto LAB_000f91d0;
  }
  else {
    sVar6 = param_12 + 0x75;
    if ((-1 < param_12) && (sVar6 < 0)) {
      sVar6 = 0x7fff;
    }
    if (sVar6 < _DAT_fffed800) goto LAB_000f91d0;
  }
  sVar6 = _DAT_fffed800;
LAB_000f91d0:
  sVar5 = _DAT_fffed800 - param_12;
  if (((_DAT_fffed800 < 0) || (-1 < param_12)) || (-1 < sVar5)) {
    if (((_DAT_fffed800 < 0) && (-1 < param_12)) && (-1 < sVar5)) {
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
  if ((((DAT_fffed805 == '\0') || (param_2 == '\0')) || (DAT_fffed803 != '\0')) &&
     (((uVar3 & 0xffff) < 2 || (DAT_fffed802 == '\0')))) {
    bVar2 = false;
  }
  if ((!bVar2) || (param_10 == '\0')) {
    sVar6 = _DAT_fffed800;
  }
  *param_14 = sVar6;
  if ((param_2 == '\0') || ((param_10 == '\0' && (0x95ff < param_4)))) {
    if (param_6 == '\0') {
      if (param_7 == '\0') {
        *param_13 = sVar7;
      }
      else {
        *param_13 = _DAT_fffed800;
      }
    }
    else {
      *param_13 = 0;
    }
  }
  else {
    *param_13 = sVar6;
  }
  DAT_fffed805 = 1;
  DAT_fffed803 = param_2;
  DAT_fffed802 = bVar2;
  DAT_fffed804 = bVar1;
  return;
}

