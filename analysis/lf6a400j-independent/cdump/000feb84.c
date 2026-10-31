
/* WARNING: Removing unreachable block (ram,0x000febec) */
/* WARNING: Removing unreachable block (ram,0x000fec52) */
/* WARNING: Removing unreachable block (ram,0x000fece4) */
/* WARNING: Removing unreachable block (ram,0x000fecec) */
/* WARNING: Removing unreachable block (ram,0x000fecf2) */
/* WARNING: Removing unreachable block (ram,0x000fecf6) */
/* WARNING: Removing unreachable block (ram,0x000fece8) */
/* WARNING: Removing unreachable block (ram,0x000fed18) */
/* WARNING: Removing unreachable block (ram,0x000fed66) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000feb84(uint param_1,ushort param_2,uint param_3,uint param_4,ushort param_5,
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
  
  uVar3 = LK_133F40((uint)&T_02F790,param_1 & 0xffff);
  *param_13 = (short)uVar3;
  param_4 = param_4 & 0xffff;
  uVar4 = LK_133F40((uint)&T_02F7B4,param_4);
  fVar10 = (float)param_5 * 3.8146973e-05;
  *param_7 = (short)uVar4;
  if (param_2 < 0x14) {
    uVar5 = LK_133F40((uint)&T_02F7A8,param_3 & 0xffff);
  }
  else {
    uVar5 = LK_133F40((uint)&T_02F79C,param_3 & 0xffff);
  }
  *param_10 = (short)uVar5;
  bVar1 = DAT_fffed982 == '\0';
  bVar2 = true;
  if ((499 < param_4) && (499 < _DAT_fffed980)) {
    bVar2 = false;
  }
  if (!bVar1) {
    fVar10 = _DAT_fffed978 + (fVar10 - _DAT_fffed978) * 0.19999693;
  }
  fVar9 = 2.4999616;
  if ((fVar10 <= 2.4999616) && (fVar9 = fVar10, fVar10 < 0.0)) {
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
  uVar4 = LK_1343B8((uint)&T_02F7CC,p1);
  fVar11 = (float)(uVar4 & 0xffff) * 4096.0 * 7.450581e-09;
  *param_12 = 0;
  fVar9 = _DAT_fffed974;
  if ((int)p1 < 0) {
    fVar9 = _DAT_fffed974 - fVar11;
  }
  if (0 < (int)p1) {
    fVar9 = _DAT_fffed974 + fVar11;
  }
  if (bVar2) {
    fVar9 = _DAT_fffed974;
  }
  if (bVar1) {
    fVar9 = 1.0;
  }
  fVar11 = 15.999756;
  if (fVar9 < 15.999756) {
    fVar11 = fVar9;
  }
  _DAT_fffed974 = 0.0;
  if (0.0 < fVar11) {
    _DAT_fffed974 = fVar11;
  }
  fVar9 = 1.9999694;
  if ((_DAT_fffed974 <= 1.9999694) && (fVar9 = _DAT_fffed974, _DAT_fffed974 < 0.0)) {
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
  _DAT_fffed980 = 0xffff;
  if (fVar9 <= 2621.4) {
    _DAT_fffed980 = (ushort)(int)(fVar9 * 25.0);
  }
  *param_6 = _DAT_fffed980;
  fVar9 = 0.0;
  if (!bVar1) {
    fVar9 = _DAT_fffed97c;
  }
  _DAT_fffed97c = 16777216.0;
  if ((float)!bVar2 + fVar9 <= 16777216.0) {
    _DAT_fffed97c = (float)!bVar2 + fVar9;
  }
  *(bool *)param_9 = 1020.0 <= _DAT_fffed97c * 20.0;
  DAT_fffed982 = 1;
  _DAT_fffed978 = fVar10;
  _DAT_fffed970 = 0;
  return;
}

