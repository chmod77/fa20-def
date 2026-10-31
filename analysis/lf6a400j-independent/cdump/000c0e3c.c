
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c0e3c(byte param_1,char param_2,ushort param_3,short param_4,undefined2 *param_5,
                 short *param_6,undefined2 *param_7)

{
  bool bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  short sVar9;
  
  bVar1 = param_1 != 0;
  if (param_2 != '\0') {
    uVar3 = 0;
    if (0x51d < _DAT_fffec9c6) {
      uVar3 = (int)(short)_DAT_fffec9c6 - 0x51e;
    }
  }
  else {
    uVar3 = (int)(short)_DAT_fffec9c6 + 0x28f;
    if ((uVar3 & 0xffff) < (uint)_DAT_fffec9c6) {
      uVar3 = 0xffffffff;
    }
  }
  uVar7 = (undefined2)uVar3;
  if (bVar1) {
    uVar8 = (uint)_DAT_fffec9c2;
  }
  else {
    uVar6 = param_3 + param_4;
    if (uVar6 < param_3) {
      uVar6 = 0xffff;
    }
    uVar8 = (uint)(uVar6 >> 1);
  }
  sVar9 = (short)uVar8;
  if (bVar1) {
    DAT_fffec9c8 = '\0';
  }
  else {
    if (DAT_fffec9c8 == '\0') {
      DAT_fffec9cb = '\0';
      DAT_fffec9c8 = '\x01';
    }
    sVar2 = sVar9;
    if (DAT_fffec9cb != '\0') {
      FUN_0016b4d8(&DAT_ffff19cc,uVar8,0xffffffff);
      sVar2 = _DAT_ffff19cc;
    }
    _DAT_ffff19cc = sVar2;
    _DAT_fffec9c0 = _DAT_ffff19cc;
    DAT_fffec9cb = '\x01';
  }
  if (bVar1) {
    uVar8 = (uint)_DAT_fffec9c4;
  }
  else {
    uVar8 = (uint)_DAT_fffec9c0;
    uVar4 = LK_133F40((uint)&T_02E82C,uVar8);
    uVar3 = uVar3 & 0xffff;
    uVar5 = 0;
    if (uVar3 != 0) {
      uVar5 = uVar3;
    }
    uVar7 = (short)uVar4;
    if (uVar5 < (uVar4 & 0xffff)) {
      uVar7 = (short)uVar5;
    }
  }
  if ((!bVar1) && (param_2 == '\0')) {
    uVar5 = LK_133F40((uint)&T_02E820,uVar8);
    uVar7 = (short)uVar5;
    if ((uVar5 & 0xffff) < (uVar3 & 0xffff)) {
      uVar7 = (short)uVar3;
    }
  }
  *param_7 = (short)uVar8;
  *param_6 = sVar9;
  bVar1 = true;
  if ((DAT_fffec9ca <= param_1) && (DAT_fffec9c9 != '\0')) {
    bVar1 = false;
  }
  if ((param_2 == '\0') && (bVar1)) {
    uVar7 = 0xffff;
  }
  else if (bVar1) {
    uVar7 = 0;
  }
  *param_5 = uVar7;
  DAT_fffec9ca = param_1;
  _DAT_fffec9c6 = uVar7;
  _DAT_fffec9c4 = (short)uVar8;
  _DAT_fffec9c2 = sVar9;
  DAT_fffec9c9 = 1;
  return;
}

