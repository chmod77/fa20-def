
/* WARNING: Removing unreachable block (ram,0x00120646) */
/* WARNING: Removing unreachable block (ram,0x001206ae) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001204dc(char param_1,ushort param_2,ushort param_3,ushort param_4,ushort param_5,
                 uint param_6,undefined1 *param_7,ushort *param_8,ushort *param_9,ushort *param_10,
                 ushort *param_11,ushort *param_12)

{
  bool bVar1;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar10;
  ushort uVar11;
  undefined1 uVar12;
  ushort uVar13;
  
  uVar10 = _DAT_fffee184;
  if (_DAT_fffee180 < _DAT_fffee184) {
    uVar10 = _DAT_fffee180;
  }
  uVar5 = _DAT_fffee184;
  if (_DAT_fffee184 < _DAT_fffee180) {
    uVar5 = _DAT_fffee180;
  }
  if ((param_1 == '\0') && (_DAT_fffee17e < 0xc)) {
    uVar7 = 0xffff;
    if (_DAT_fffee17e != 0xffff) {
      uVar7 = _DAT_fffee17e + 1;
    }
    uVar6 = 0xffff;
    if (uVar7 != 0xffff) {
      uVar6 = uVar7;
    }
  }
  else {
    uVar6 = 0;
  }
  *param_8 = uVar6;
  bVar1 = true;
  if ((param_1 == '\0') && (uVar6 < 0xc)) {
    bVar1 = false;
  }
  uVar7 = 0;
  if ((!bVar1) && (uVar7 = param_2 + _DAT_fffee180, uVar7 < param_2)) {
    uVar7 = 0xffff;
  }
  *param_9 = uVar7;
  uVar8 = 0;
  if ((!bVar1) && (uVar8 = param_3 + _DAT_fffee184, uVar8 < param_3)) {
    uVar8 = 0xffff;
  }
  *param_10 = uVar8;
  uVar9 = 0;
  if ((!bVar1) && (uVar9 = param_5 + _DAT_fffee182, uVar9 < param_5)) {
    uVar9 = 0xffff;
  }
  *param_12 = uVar9;
  uVar11 = _DAT_fffee182;
  if (_DAT_fffee182 < _DAT_fffee17c) {
    uVar11 = _DAT_fffee17c;
  }
  if (uVar10 < uVar11) {
    uVar11 = uVar10;
  }
  uVar2 = __udiv32_r1_by_r0((uint)uVar11 * 9,0x780);
  if (0xff < uVar2) {
    uVar2 = 0xff;
  }
  uVar11 = _DAT_fffee182;
  if (_DAT_fffee17c < _DAT_fffee182) {
    uVar11 = _DAT_fffee17c;
  }
  uVar13 = uVar11;
  if (uVar5 < uVar11) {
    uVar13 = uVar5;
  }
  uVar3 = __udiv32_r1_by_r0((uint)uVar13 * 9,0x780);
  if (0xff < uVar3) {
    uVar3 = 0xff;
  }
  if ((uVar6 < 0xc) || (uVar12 = (char)uVar2, uVar10 < uVar11)) {
    uVar12 = DAT_fffee186;
  }
  if (param_1 == '\0') {
    if ((0xb < uVar6) && (uVar10 < uVar11)) {
      uVar12 = (char)uVar3;
    }
  }
  else {
    iVar4 = __udiv32_r1_by_r0((param_6 & 0xffff) * 9,0xa0);
    uVar12 = (char)iVar4;
  }
  *param_7 = uVar12;
  uVar10 = 0;
  if ((!bVar1) && (uVar10 = param_4 + _DAT_fffee17c, uVar10 < param_4)) {
    uVar10 = 0xffff;
  }
  *param_11 = uVar10;
  _DAT_fffee184 = uVar8;
  _DAT_fffee182 = uVar9;
  DAT_fffee186 = uVar12;
  _DAT_fffee180 = uVar7;
  _DAT_fffee17e = uVar6;
  _DAT_fffee17c = uVar10;
  return;
}

