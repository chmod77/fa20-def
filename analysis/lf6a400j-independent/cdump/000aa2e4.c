
/* WARNING: Removing unreachable block (ram,0x000aa370) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aa2e4(char param_1,ushort param_2,undefined4 param_3,char param_4,short param_5,
                 ushort *param_6,ushort *param_7,ushort *param_8)

{
  bool bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  ushort unaff_r12;
  
  uVar4 = 0x700;
  if (param_4 == '\0') {
    unaff_r12 = 0xc454;
  }
  else {
    _DAT_fffec454 = 0;
  }
  if (_DAT_fffec454 == 0) {
    _DAT_fffec454 = 0;
  }
  *param_8 = _DAT_fffec454;
  bVar2 = 0x9ff >= param_2;
  if (bVar2) {
    unaff_r12 = 0xc454;
  }
  bVar1 = bVar2 && 4 < _DAT_fffec456;
  if ((bVar1) && (param_1 != '\0')) {
    unaff_r12 = 0xe00;
  }
  if (((param_1 == '\0') || (bVar1)) &&
     ((!bVar2 || 4 >= _DAT_fffec456 || (uVar4 = unaff_r12, param_1 == '\0')))) {
    uVar4 = 0;
  }
  *param_7 = uVar4;
  if (uVar4 <= _DAT_fffec454) {
    uVar4 = _DAT_fffec454;
  }
  uVar5 = uVar4 + param_5;
  if (uVar5 < uVar4) {
    uVar5 = 0xffff;
  }
  *param_6 = uVar5;
  if (0x9ff < param_2) {
    _DAT_fffec456 = 0;
    sVar3 = _DAT_fffec456;
  }
  else {
    sVar3 = -1;
    if (_DAT_fffec456 != 0xffff) {
      sVar3 = _DAT_fffec456 + 1;
    }
  }
  _DAT_fffec456 = sVar3;
  return;
}

