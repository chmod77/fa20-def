
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00104500(ushort param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  uVar6 = _DAT_fffeda1a;
  _DAT_fffeda1a = _DAT_fffeda1c;
  uVar10 = (uint)param_1 - (uint)_DAT_fffeda16;
  uVar11 = (uVar10 & 0xffff) * 0x5555;
  uVar12 = (uVar10 >> 0x10) * 0x5555;
  puVar9 = (undefined *)((uVar10 >> 0x10) * 8);
  uVar8 = (uVar11 >> 0x10) + uVar12;
  _DAT_fffeda16 = _DAT_fffeda18;
  if (uVar8 < uVar12) {
    puVar9 = &DAT_00010000 + (int)puVar9;
  }
  uVar12 = (uVar10 & 0xffff) * 8 + uVar8;
  if (uVar12 < uVar8) {
    puVar9 = &DAT_00010000 + (int)puVar9;
  }
  puVar9 = puVar9 + (uVar12 >> 0x10);
  if ((int)uVar10 < 0) {
    puVar9 = puVar9 + -0x85555;
  }
  uVar8 = uVar12 * 0x10000 + (uVar11 & 0xffff) >> 0x11 | (int)puVar9 << 0xf;
  if ((((param_1 < 0x8480) && (-6 < (int)uVar8)) && ((int)uVar8 < 5)) || (param_1 >= 0x8480)) {
    *param_2 = 0;
  }
  else {
    *param_2 = (short)uVar8;
  }
  uVar7 = _DAT_fffeda1e;
  uVar5 = _DAT_fffeda14;
  _DAT_fffeda1e = _DAT_fffeda12;
  uVar4 = _DAT_fffeda10;
  uVar3 = _DAT_fffeda0e;
  uVar2 = _DAT_fffeda0c;
  uVar1 = _DAT_fffeda0a;
  _DAT_fffeda14 = uVar6;
  _DAT_fffeda12 = uVar5;
  _DAT_fffeda10 = uVar7;
  _DAT_fffeda0e = uVar4;
  _DAT_fffeda0c = uVar3;
  _DAT_fffeda0a = uVar2;
  _DAT_fffeda18 = _DAT_fffeda08;
  _DAT_fffeda08 = uVar1;
  _DAT_fffeda1c = param_1;
  return;
}

