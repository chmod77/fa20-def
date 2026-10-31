
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000e1748(byte param_1,char param_2,char param_3,uint param_4,char param_5,
                 undefined2 *param_6,uint *param_7,ushort *param_8,uint *param_9,ushort *param_10)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  ushort uVar8;
  uint a;
  ushort uVar9;
  
  bVar1 = false;
  if ((param_2 != '\0') && (param_1 == 0)) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((param_2 != '\0') && (param_1 != 0)) {
    bVar2 = true;
  }
  bVar3 = false;
  if ((param_3 != '\0') && (bVar1)) {
    bVar3 = true;
  }
  uVar9 = 0;
  if (bVar1) {
    uVar9 = _DAT_fffed1f4;
  }
  uVar6 = 0;
  if (bVar1) {
    uVar6 = _DAT_fffed1ec;
  }
  bVar1 = DAT_fffed1f6 < param_1;
  uVar5 = _DAT_fffed1e4;
  if (bVar1) {
    uVar5 = _DAT_fffed1e8;
  }
  uVar7 = uVar5;
  if (param_5 != '\0') {
    uVar7 = 0;
  }
  *param_9 = uVar7;
  if ((bVar2) && (uVar5 = (param_4 & 0xffff) + _DAT_fffed1ec, uVar5 < (param_4 & 0xffff))) {
    uVar5 = 0xffffffff;
  }
  a = 0;
  if (((param_5 == '\0') && (a = uVar5, !bVar2)) && (a = uVar6, bVar3)) {
    a = uVar7;
  }
  *param_7 = a;
  uVar8 = _DAT_fffed1f0;
  if (bVar1) {
    uVar8 = _DAT_fffed1f2;
  }
  if (param_5 != '\0') {
    uVar8 = 0;
  }
  *param_10 = uVar8;
  if (bVar2) {
    uVar9 = 0xffff;
    if (_DAT_fffed1f4 != 0xffff) {
      uVar9 = _DAT_fffed1f4 + 1;
    }
  }
  else if (bVar3) {
    uVar9 = uVar8;
  }
  if (param_5 != '\0') {
    uVar9 = 0;
  }
  *param_8 = uVar9;
  if (uVar9 == 0) {
    *param_6 = 0;
  }
  else {
    puVar4 = (undefined *)__udiv32_r1_by_r0(a,(uint)uVar9);
    if (&DAT_0000ffff < puVar4) {
      puVar4 = &DAT_0000ffff;
    }
    *param_6 = (short)puVar4;
  }
  _DAT_fffed1f4 = uVar9;
  _DAT_fffed1ec = a;
  DAT_fffed1f6 = param_1;
  _DAT_fffed1e8 = a;
  _DAT_fffed1e4 = uVar7;
  _DAT_fffed1f2 = uVar9;
  _DAT_fffed1f0 = uVar8;
  return;
}

