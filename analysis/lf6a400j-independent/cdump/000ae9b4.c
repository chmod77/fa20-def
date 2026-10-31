
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ae9b4(char param_1,ushort *param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 ushort *param_7)

{
  uint uVar1;
  ushort uVar5;
  uint uVar2;
  ushort uVar6;
  uint uVar3;
  uint uVar4;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  uint uVar13;
  
  if (param_1 == '\x03') {
    param_5 = param_5 & 0xffff;
    uVar1 = LK_133A54((uint)&T_02E01C,param_5);
    uVar5 = (ushort)uVar1;
    uVar2 = LK_133A54((uint)&T_02E028,param_5);
    uVar6 = (ushort)uVar2;
    if (*param_2 < 0x8000) {
      uVar13 = LK_133BCC((uint)&T_02E034,param_5);
    }
    else {
      uVar13 = 0x80;
    }
    if (*param_2 < 0x8000) {
      uVar3 = LK_133B38((uint)&T_02E010,param_4 & 0xff);
    }
    else {
      uVar3 = LK_133B38((uint)&T_02E004,param_4 & 0xff);
    }
    uVar4 = LK_133B38((uint)&T_02DFF8,param_3 & 0xff);
    uVar13 = (param_6 & 0xff) * ((uVar13 & 0xff) * (uVar3 & 0xff) * (uVar4 & 0xff) >> 8) >> 8;
    iVar12 = (uVar13 * *param_2 >> 0xb) + uVar13 * -0x10;
    uVar11 = 0xffff;
    if ((iVar12 < 0x8000) && (uVar11 = 0, -0x8001 < iVar12)) {
      uVar11 = (short)iVar12 + 0x8000;
    }
    iVar12 = (uVar13 * param_2[1] >> 0xb) + uVar13 * -0x10;
    uVar7 = 0xffff;
    if ((iVar12 < 0x8000) && (uVar7 = 0, -0x8001 < iVar12)) {
      uVar7 = (short)iVar12 + 0x8000;
    }
    iVar12 = (uVar13 * param_2[2] >> 0xb) + uVar13 * -0x10;
    uVar8 = 0xffff;
    if ((iVar12 < 0x8000) && (uVar8 = 0, -0x8001 < iVar12)) {
      uVar8 = (short)iVar12 + 0x8000;
    }
    iVar12 = (uVar13 * param_2[3] >> 0xb) + uVar13 * -0x10;
    uVar9 = 0xffff;
    if ((iVar12 < 0x8000) && (uVar9 = 0, -0x8001 < iVar12)) {
      uVar9 = (short)iVar12 + 0x8000;
    }
    uVar1 = uVar1 & 0xffff;
    uVar10 = uVar5;
    if (uVar1 < uVar11) {
      uVar10 = uVar11;
    }
    if (uVar7 <= uVar1) {
      uVar7 = uVar5;
    }
    if (uVar8 <= uVar1) {
      uVar8 = uVar5;
    }
    if (uVar9 <= uVar1) {
      uVar9 = uVar5;
    }
    uVar2 = uVar2 & 0xffff;
    _DAT_fffec5ac = uVar6;
    if (uVar10 < uVar2) {
      _DAT_fffec5ac = uVar10;
    }
    _DAT_fffec5ae = uVar6;
    if (uVar7 < uVar2) {
      _DAT_fffec5ae = uVar7;
    }
    _DAT_fffec5b0 = uVar6;
    if (uVar8 < uVar2) {
      _DAT_fffec5b0 = uVar8;
    }
    _DAT_fffec5b2 = uVar6;
    if (uVar9 < uVar2) {
      _DAT_fffec5b2 = uVar9;
    }
  }
  if (param_1 != '\x03') {
    *param_7 = 0x8000;
    param_7[1] = 0x8000;
    param_7[2] = 0x8000;
    param_7[3] = 0x8000;
  }
  else {
    *param_7 = _DAT_fffec5ac;
    param_7[1] = _DAT_fffec5ae;
    param_7[2] = _DAT_fffec5b0;
    param_7[3] = _DAT_fffec5b2;
  }
  return;
}

