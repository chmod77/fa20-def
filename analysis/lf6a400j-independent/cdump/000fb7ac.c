
/* WARNING: Removing unreachable block (ram,0x000fb87c) */
/* WARNING: Removing unreachable block (ram,0x000fb80a) */
/* WARNING: Removing unreachable block (ram,0x000fb9aa) */
/* WARNING: Removing unreachable block (ram,0x000fb9b2) */
/* WARNING: Removing unreachable block (ram,0x000fb9b8) */
/* WARNING: Removing unreachable block (ram,0x000fb9bc) */
/* WARNING: Removing unreachable block (ram,0x000fb9ae) */
/* WARNING: Removing unreachable block (ram,0x000fb9de) */
/* WARNING: Removing unreachable block (ram,0x000fba78) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fb7ac(uint param_1,ushort param_2,uint param_3,uint param_4,ushort param_5,
                 undefined2 *param_6,undefined2 *param_7,ushort *param_8,undefined4 param_9,
                 undefined2 *param_10,ushort *param_11,undefined2 *param_12,undefined2 *param_13)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  short sVar8;
  uint p1;
  float fVar9;
  float fVar10;
  float fVar11;
  
  uVar3 = LK_133F40((uint)&T_02F54C,param_1 & 0xffff);
  *param_13 = (short)uVar3;
  param_4 = param_4 & 0xffff;
  uVar4 = LK_133F40((uint)&T_02F570,param_4);
  fVar11 = (float)param_5 * 3.8146973e-05;
  *param_7 = (short)uVar4;
  if (param_2 < 0x14) {
    uVar5 = LK_133F40((uint)&T_02F564,param_3 & 0xffff);
  }
  else {
    uVar5 = LK_133F40((uint)&T_02F558,param_3 & 0xffff);
  }
  *param_10 = (short)uVar5;
  bVar1 = DAT_fffed8be == '\0';
  bVar2 = true;
  if ((499 < param_4) && (499 < _DAT_fffed8bc)) {
    bVar2 = false;
  }
  if (!bVar1) {
    fVar11 = _DAT_fffed8b8 + (fVar11 - _DAT_fffed8b8) * 0.35000607;
  }
  fVar9 = 2.4999616;
  if ((fVar11 <= 2.4999616) && (fVar9 = fVar11, fVar11 < 0.0)) {
    fVar9 = 0.0;
  }
  uVar6 = 0xffff;
  if ((fVar9 <= 2.4999616) && (uVar6 = 0, 0.0 <= fVar9)) {
    uVar6 = (ushort)(int)(fVar9 * 26214.398);
  }
  *param_8 = uVar6;
  iVar7 = (uVar4 & 0xffff) - (uint)uVar6;
  sVar8 = 0x7fff;
  if ((iVar7 < 0x8000) && (sVar8 = (short)iVar7, iVar7 < -0x8000)) {
    sVar8 = -0x8000;
  }
  p1 = (uint)sVar8;
  uVar4 = LK_1343B8((uint)&T_02F57C,p1);
  fVar10 = (float)(uVar4 & 0xffff) * 4096.0 * 7.450581e-09;
  fVar9 = _DAT_fffed8b0;
  if ((int)p1 < 0) {
    fVar9 = _DAT_fffed8b0 - fVar10;
  }
  if (0 < (int)p1) {
    fVar9 = _DAT_fffed8b0 + fVar10;
  }
  if (bVar2) {
    fVar9 = _DAT_fffed8b0;
  }
  if (bVar1) {
    fVar9 = 1.0;
  }
  if (15.999756 <= fVar9) {
    fVar9 = 15.999756;
  }
  _DAT_fffed8b0 = 0.0;
  if (0.0 < fVar9) {
    _DAT_fffed8b0 = fVar9;
  }
  fVar9 = 1.9999694;
  if ((_DAT_fffed8b0 <= 1.9999694) && (fVar9 = _DAT_fffed8b0, _DAT_fffed8b0 < 0.0)) {
    fVar9 = 0.0;
  }
  uVar6 = 0xffff;
  if ((fVar9 <= 1.9999694) && (uVar6 = 0, 0.0 <= fVar9)) {
    uVar6 = (ushort)(int)(fVar9 * 32768.0);
  }
  *param_11 = uVar6;
  fVar9 = ((float)param_4 * (float)(uVar5 & 0xffff) * (float)uVar6 * 3.7252902e-11 + 0.0) *
          (float)(uVar3 & 0xffff) * 3.0517578e-05;
  if (2621.4 < fVar9) {
    fVar9 = 2621.4;
  }
  _DAT_fffed8bc = 0xffff;
  if (fVar9 <= 2621.4) {
    _DAT_fffed8bc = (ushort)(int)(fVar9 * 25.0);
  }
  *param_6 = _DAT_fffed8bc;
  *param_12 = 0;
  fVar9 = 0.0;
  if (!bVar1) {
    fVar9 = _DAT_fffed8ac;
  }
  _DAT_fffed8ac = 16777216.0;
  if ((float)!bVar2 + fVar9 <= 16777216.0) {
    _DAT_fffed8ac = (float)!bVar2 + fVar9;
  }
  *(bool *)param_9 = 1020.0 <= _DAT_fffed8ac * 20.0;
  DAT_fffed8be = 1;
  _DAT_fffed8b8 = fVar11;
  _DAT_fffed8b4 = 0;
  return;
}

