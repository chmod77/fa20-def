
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000da88c(ushort param_1,char param_2,char param_3,ushort *param_4,ushort *param_5,
                 ushort *param_6,ushort *param_7,ushort *param_8,char *param_9,char *param_10)

{
  bool bVar1;
  ushort uVar3;
  ushort uVar4;
  int iVar2;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar3 = 0x8000;
  if (param_2 != '\0') {
    uVar3 = _DAT_fffed024;
  }
  if (param_3 != '\0') {
    uVar3 = 0x8000;
  }
  *param_7 = uVar3;
  _DAT_fffed024 = 0x8000;
  if (param_2 != '\0') {
    _DAT_fffed024 = _DAT_fffed022;
  }
  if (param_3 != '\0') {
    _DAT_fffed024 = 0x8000;
  }
  *param_8 = _DAT_fffed024;
  uVar4 = 0x8000;
  if (param_3 == '\0') {
    uVar4 = _DAT_fffed020;
  }
  iVar2 = (uint)uVar4 - (uint)uVar3;
  uVar6 = 0xffffffff;
  if ((iVar2 < 0x8000) && (uVar6 = 0, -0x8001 < iVar2)) {
    uVar6 = iVar2 - 0x8000;
  }
  uVar7 = uVar6 & 0xffff;
  bVar1 = true;
  if ((uVar7 < 0xffff) && (0xfffe < uVar7)) {
    bVar1 = false;
  }
  if (!bVar1) {
    iVar2 = (uint)uVar3 * 3;
    uVar6 = 0xffffffff;
    if (((int)(&DAT_fffe8000 + iVar2) < 0x8000) &&
       (uVar6 = 0, -0x8001 < (int)(&DAT_fffe8000 + iVar2))) {
      uVar6 = iVar2 - 0x20000;
    }
  }
  if ((param_3 == '\0') && (param_2 != '\0')) {
    if ((uVar7 < 0xffff) && (0xfffe < uVar7)) {
      _DAT_fffed024 = (short)((int)((uVar6 & 0xffff) + (uint)uVar4 + -0x10000) >> 2) + 0x8000;
    }
  }
  else {
    _DAT_fffed024 = 0x8000;
  }
  *param_6 = _DAT_fffed024;
  uVar5 = _DAT_fffed024 >> 4;
  if (uVar5 < 0x880) {
    if (uVar5 < 0x780) {
      *param_10 = '\0';
    }
    else {
      *param_10 = (char)uVar5 + -0x80;
    }
  }
  else {
    *param_10 = -1;
  }
  iVar2 = _DAT_fffed024 - 0x8000;
  uVar6 = 0xffffffff;
  if ((iVar2 < 0x8000) && (uVar6 = 0, -0x8001 < iVar2)) {
    uVar6 = _DAT_fffed024 - 0x10000;
  }
  iVar2 = (uint)param_1 - (uVar6 & 0xffff);
  uVar5 = 0xffff;
  if ((iVar2 < 0x8000) && (uVar5 = 0, -0x8001 < iVar2)) {
    uVar5 = (short)iVar2 + 0x8000;
  }
  *param_4 = uVar5;
  uVar5 = uVar5 >> 4;
  if (uVar5 < 0x880) {
    if (uVar5 < 0x780) {
      *param_9 = '\0';
    }
    else {
      *param_9 = (char)uVar5 + -0x80;
    }
  }
  else {
    *param_9 = -1;
  }
  *param_5 = uVar4;
  _DAT_fffed022 = uVar3;
  _DAT_fffed020 = param_1;
  return;
}

