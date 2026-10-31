
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000d9378(char param_1,uint param_2,uint param_3,uint param_4,char param_5,
                 undefined1 *param_6)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  param_3 = param_3 & 0xffff;
  uVar3 = LK_133F40((uint)&T_02EE24,param_3);
  uVar4 = LK_133F40((uint)&T_02EE18,param_3);
  param_2 = param_2 & 0xffff;
  uVar9 = (uint)_DAT_fffecf92;
  uVar5 = LK_133F40((uint)&T_02EE18,param_3);
  if (param_2 < (uVar5 & 0xffff)) {
    _DAT_fffecf92 = 0;
    sVar2 = _DAT_fffecf92;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecf92 != 0xffff) {
      sVar2 = _DAT_fffecf92 + 1;
    }
  }
  _DAT_fffecf92 = sVar2;
  uVar5 = LK_133F40((uint)&T_02EE3C,param_3);
  uVar6 = LK_133F40((uint)&T_02EE30,param_3);
  uVar8 = (uint)_DAT_fffecf94;
  uVar7 = LK_133F40((uint)&T_02EE30,param_3);
  if (param_2 < (uVar7 & 0xffff)) {
    _DAT_fffecf94 = 0;
    sVar2 = _DAT_fffecf94;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecf94 != 0xffff) {
      sVar2 = _DAT_fffecf94 + 1;
    }
  }
  _DAT_fffecf94 = sVar2;
  uVar7 = LK_133F40((uint)&T_02EE48,param_4 & 0xffff);
  bVar1 = (uVar7 & 0xffff) <= param_2;
  uVar7 = LK_133F40((uint)&T_02EE48,param_4 & 0xffff);
  if (param_2 < (uVar7 & 0xffff)) {
    _DAT_fffecf90 = 0;
    sVar2 = _DAT_fffecf90;
  }
  else {
    sVar2 = -1;
    if (_DAT_fffecf90 != -1) {
      sVar2 = _DAT_fffecf90 + 1;
    }
  }
  _DAT_fffecf90 = sVar2;
  if ((param_5 != '\0') && ((bVar1 || ((uVar6 & 0xffff) <= param_2 && (uVar5 & 0xffff) <= uVar8))))
  {
    DAT_fffecf96 = 1;
  }
  if (param_1 == '\0') {
    if ((((uVar4 & 0xffff) <= param_2 && (uVar3 & 0xffff) <= uVar9) || (bVar1)) && (param_5 == '\0')
       ) {
      DAT_fffecf96 = 1;
    }
  }
  else {
    DAT_fffecf96 = 0;
  }
  *param_6 = DAT_fffecf96;
  return;
}

