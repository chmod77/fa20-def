
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00159a2a(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  
  piVar6 = (int *)&DAT_ffff2d80;
  piVar2 = (int *)&DAT_ffff2dc0;
  for (uVar4 = 0; uVar4 < 0x10; uVar4 = uVar4 + 1) {
    iVar5 = (int)(uint)*(ushort *)(param_1 + uVar4 * 2) >> 4;
    iVar3 = (int)(uint)*(ushort *)(uVar4 * 2 + param_1 + 0x20) >> 4;
    *piVar6 = iVar5 + iVar3;
    piVar6 = piVar6 + 1;
    *piVar2 = iVar5 - iVar3;
    piVar2 = piVar2 + 1;
  }
  piVar7 = (int *)&DAT_ffff2dc4;
  piVar9 = (int *)&DAT_ffff2dfc;
  iVar3 = _DAT_ffff2da0 + _DAT_ffff2d80;
  _DAT_ffff2da0 = _DAT_ffff2d80 - _DAT_ffff2da0;
  piVar6 = (int *)&DAT_ffff2d84;
  piVar8 = (int *)&DAT_ffff2da4;
  piVar2 = piVar6;
  _DAT_ffff2d80 = iVar3;
  for (uVar4 = 1; uVar4 < 8; uVar4 = uVar4 + 1) {
    iVar3 = *piVar2;
    *piVar2 = *piVar8 + iVar3;
    *piVar8 = iVar3 - *piVar8;
    iVar3 = *piVar7;
    *piVar7 = iVar3 - *piVar9;
    *piVar9 = *piVar9 + iVar3;
    piVar2 = piVar2 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
    piVar9 = piVar9 + -1;
  }
  piVar7 = (int *)&DAT_ffff2da4;
  piVar2 = (int *)&DAT_ffff2dbc;
  iVar3 = _DAT_ffff2d90 + _DAT_ffff2d80;
  _DAT_ffff2d90 = _DAT_ffff2d80 - _DAT_ffff2d90;
  piVar8 = (int *)&DAT_ffff2d94;
  _DAT_ffff2d80 = iVar3;
  for (uVar4 = 1; iVar1 = _DAT_ffff2d94, iVar5 = _DAT_ffff2d84, iVar3 = _DAT_ffff2d80, uVar4 < 4;
      uVar4 = uVar4 + 1) {
    iVar3 = *piVar6;
    *piVar6 = *piVar8 + iVar3;
    *piVar8 = iVar3 - *piVar8;
    iVar3 = *piVar7;
    *piVar7 = iVar3 - *piVar2;
    *piVar2 = *piVar2 + iVar3;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
    piVar7 = piVar7 + 1;
    piVar2 = piVar2 + -1;
  }
  _DAT_ffff2d80 = _DAT_ffff2d88 + _DAT_ffff2d80;
  _DAT_ffff2d88 = iVar3 - _DAT_ffff2d88;
  _DAT_ffff2d84 = _DAT_ffff2d8c + _DAT_ffff2d84;
  _DAT_ffff2d8c = iVar5 - _DAT_ffff2d8c;
  _DAT_ffff2d94 = _DAT_ffff2d94 - _DAT_ffff2d9c;
  _DAT_ffff2d9c = _DAT_ffff2d9c + iVar1;
  return;
}

