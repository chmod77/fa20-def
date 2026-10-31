
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000aeff4(char param_1,uint param_2,uint param_3,uint param_4,byte param_5,uint param_6,
                 ushort param_7,uint param_8,ushort *param_9)

{
  short sVar1;
  uint uVar2;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar3;
  uint uVar7;
  undefined *puVar8;
  ushort uVar9;
  ushort uVar12;
  uint uVar10;
  uint uVar11;
  ushort uVar13;
  byte bVar14;
  ushort uStack_38;
  ushort uStack_36;
  ushort uStack_34;
  
  uVar12 = param_7 & 0xff;
  param_7 = param_7 & 1;
  uVar13 = uVar12;
  if ((param_7 != 0) && (uVar13 = 0, uVar12 != 0)) {
    uVar13 = uVar12 - 1;
  }
  uVar12 = uVar13 & 3;
  uVar10 = (uint)(uVar13 >> 1);
  uVar7 = uVar10;
  if ((uVar12 != 0) && (uVar7 = 0, uVar10 != 0)) {
    uVar7 = uVar10 - 1;
  }
  uVar10 = uVar7 & 3;
  uVar7 = (uVar7 & 0xffff) >> 1;
  uVar13 = (ushort)uVar7;
  if ((uVar10 != 0) && (uVar13 = uVar13 - 1, uVar7 == 0)) {
    uVar13 = 0;
  }
  if (param_1 == '\x03') {
    uVar7 = LK_133B38((uint)&T_02E040,param_3);
    uVar2 = LK_133E10((uint)&T_02E04C,param_6 & 0xff);
    bVar14 = 0xff;
    uVar11 = uVar2 & 0xffff;
    if (param_5 < 0xc0) {
      bVar14 = param_5 + 0x40;
    }
    uVar7 = (uint)bVar14 * (param_4 & 0xff) * (uVar7 & 0xff) >> 8;
    iVar3 = (uVar7 * (param_2 & 0xffff) >> 0xb) + uVar7 * -0x10;
    uVar7 = 0xffffffff;
    if ((iVar3 < 0x8000) && (uVar7 = 0, -0x8001 < iVar3)) {
      uVar7 = iVar3 - 0x8000;
    }
    uVar7 = uVar7 & 0xffff;
    puVar8 = (undefined *)(_DAT_fffec5c4 + uVar7);
    if (puVar8 < &DAT_00018000) {
      if (&DAT_00007fff < puVar8) {
        uVar9 = (short)puVar8 + 0x8000;
      }
      else {
        uVar9 = 0;
      }
    }
    else {
      uVar9 = 0xffff;
    }
    puVar8 = (undefined *)(_DAT_fffec5c6 + uVar7);
    uVar4 = 0xffff;
    if ((puVar8 < &DAT_00018000) && (uVar4 = 0, &DAT_00007fff < puVar8)) {
      uVar4 = (short)puVar8 + 0x8000;
    }
    puVar8 = (undefined *)(_DAT_fffec5c8 + uVar7);
    uVar5 = 0xffff;
    if ((puVar8 < &DAT_00018000) && (uVar5 = 0, &DAT_00007fff < puVar8)) {
      uVar5 = (short)puVar8 + 0x8000;
    }
    puVar8 = (undefined *)(_DAT_fffec5ca + uVar7);
    uVar6 = 0xffff;
    if ((puVar8 < &DAT_00018000) && (uVar6 = 0, &DAT_00007fff < puVar8)) {
      uVar6 = (short)puVar8 + 0x8000;
    }
    _DAT_fffec5c2 = (ushort)uVar2;
    _DAT_fffec5bc = _DAT_fffec5c2;
    if (uVar11 < uVar9) {
      _DAT_fffec5bc = uVar9;
    }
    _DAT_fffec5be = _DAT_fffec5c2;
    if (uVar11 < uVar4) {
      _DAT_fffec5be = uVar4;
    }
    _DAT_fffec5c0 = _DAT_fffec5c2;
    if (uVar11 < uVar5) {
      _DAT_fffec5c0 = uVar5;
    }
    if (uVar11 < uVar6) {
      _DAT_fffec5c2 = uVar6;
    }
  }
  if (param_7 != 0) {
    if (_DAT_fffec5bc < 0x8000) {
      iVar3 = -(uint)_DAT_fffec5bc;
    }
    else {
      iVar3 = (int)(short)_DAT_fffec5bc;
    }
    sVar1 = (short)((param_8 & 0xff) * (iVar3 - 0x8000U & 0xffff) >> 8);
    if (_DAT_fffec5bc < 0x8000) {
      _DAT_fffec5b4 = 0x8000 - sVar1;
    }
    else {
      _DAT_fffec5b4 = sVar1 + 0x8000;
    }
  }
  if (uVar12 != 0) {
    if (_DAT_fffec5be < 0x8000) {
      iVar3 = -(uint)_DAT_fffec5be;
    }
    else {
      iVar3 = (int)(short)_DAT_fffec5be;
    }
    sVar1 = (short)((param_8 & 0xff) * (iVar3 - 0x8000U & 0xffff) >> 8);
    if (_DAT_fffec5be < 0x8000) {
      _DAT_fffec5b6 = 0x8000 - sVar1;
    }
    else {
      _DAT_fffec5b6 = sVar1 + 0x8000;
    }
  }
  if (uVar10 != 0) {
    if (_DAT_fffec5c0 < 0x8000) {
      iVar3 = -(uint)_DAT_fffec5c0;
    }
    else {
      iVar3 = (int)(short)_DAT_fffec5c0;
    }
    sVar1 = (short)((param_8 & 0xff) * (iVar3 - 0x8000U & 0xffff) >> 8);
    if (_DAT_fffec5c0 < 0x8000) {
      _DAT_fffec5b8 = 0x8000 - sVar1;
    }
    else {
      _DAT_fffec5b8 = sVar1 + 0x8000;
    }
  }
  if ((uVar13 & 3) != 0) {
    if (_DAT_fffec5c2 < 0x8000) {
      iVar3 = -(uint)_DAT_fffec5c2;
    }
    else {
      iVar3 = (int)(short)_DAT_fffec5c2;
    }
    sVar1 = (short)((param_8 & 0xff) * (iVar3 - 0x8000U & 0xffff) >> 8);
    if (_DAT_fffec5c2 < 0x8000) {
      _DAT_fffec5ba = 0x8000 - sVar1;
    }
    else {
      _DAT_fffec5ba = sVar1 + 0x8000;
    }
  }
  if (param_1 != '\x03') {
    _DAT_fffec5ca = 0x8000;
    uStack_38 = 0x8000;
    uStack_36 = 0x8000;
    uStack_34 = 0x8000;
  }
  else {
    uStack_38 = _DAT_fffec5bc;
    if (param_7 != 0) {
      uStack_38 = _DAT_fffec5b4;
    }
    uStack_36 = _DAT_fffec5be;
    if (uVar12 != 0) {
      uStack_36 = _DAT_fffec5b6;
    }
    uStack_34 = _DAT_fffec5c0;
    if (uVar10 != 0) {
      uStack_34 = _DAT_fffec5b8;
    }
    _DAT_fffec5ca = _DAT_fffec5c2;
    if ((uVar13 & 3) != 0) {
      _DAT_fffec5ca = _DAT_fffec5ba;
    }
  }
  *param_9 = uStack_38;
  param_9[1] = uStack_36;
  param_9[2] = uStack_34;
  param_9[3] = _DAT_fffec5ca;
  _DAT_fffec5c4 = uStack_38;
  _DAT_fffec5c6 = uStack_36;
  _DAT_fffec5c8 = uStack_34;
  return;
}

