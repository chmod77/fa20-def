
/* WARNING: Removing unreachable block (ram,0x000b701c) */
/* WARNING: Removing unreachable block (ram,0x000b7188) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b6fbc(char param_1,uint param_2,uint param_3,undefined2 *param_4,undefined2 *param_5,
                 undefined2 *param_6,short *param_7)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  ushort uVar8;
  uint uVar9;
  short sVar10;
  int iVar11;
  
  if (param_1 == '\0') {
    if (DAT_fffec7d2 != '\0') {
      _DAT_fffec7c4 = 0;
      _DAT_fffec7c6 = 0;
      _DAT_fffec7c8 = 0;
      _DAT_fffec7ca = 0;
      DAT_fffec7d2 = '\0';
      DAT_fffec7d7 = '\0';
    }
  }
  else {
    uVar9 = (param_2 & 0xffff) >> 8;
    bVar2 = 0x21 < uVar9;
    bVar3 = uVar9 < 0x4d;
    bVar7 = 1;
    if ((bVar2) && (bVar3)) {
      bVar7 = 0;
    }
    uVar9 = LK_133F40((uint)&T_02E430,param_3 & 0xffff);
    _DAT_fffec7c6 = (undefined2)uVar9;
    uVar5 = LK_133F40((uint)&T_02E43C,param_3 & 0xffff);
    _DAT_fffec7c8 = (undefined2)uVar5;
    uVar8 = 0;
    if (!bVar2) {
      uVar8 = 0x37e;
    }
    sVar10 = -0x8000;
    if (-0x8001 < (int)-(uint)uVar8) {
      sVar10 = (short)-(uint)uVar8;
    }
    uVar8 = 0;
    if (!bVar3) {
      uVar8 = 0x12a;
    }
    if (bVar7 == 0) {
      if (DAT_fffec7d4 != '\0') {
        _DAT_fffec7d8 = 0;
        DAT_fffec7d4 = '\0';
        DAT_fffec7d7 = '\0';
      }
    }
    else {
      if (DAT_fffec7d7 == '\0') {
        _DAT_fffec7d0 = 0;
        _DAT_fffec7cc = 0;
        DAT_fffec7d6 = '\0';
        DAT_fffec7d5 = '\0';
        DAT_fffec7d7 = '\x01';
        DAT_fffec7d4 = '\x01';
      }
      if ((DAT_fffec7d6 != '\0') || (bVar2)) {
        bVar1 = false;
      }
      else {
        bVar1 = 99 < _DAT_fffec7d0;
      }
      if ((DAT_fffec7d6 != '\0') || (bVar2)) {
        _DAT_fffec7d0 = 0;
        uVar4 = _DAT_fffec7d0;
      }
      else {
        uVar4 = 0xffff;
        if (_DAT_fffec7d0 != 0xffff) {
          uVar4 = _DAT_fffec7d0 + 1;
        }
      }
      _DAT_fffec7d0 = uVar4;
      if ((DAT_fffec7d5 != '\0') || (bVar3)) {
        bVar2 = false;
      }
      else {
        bVar2 = 99 < _DAT_fffec7cc;
      }
      if ((DAT_fffec7d5 != '\0') || (bVar3)) {
        _DAT_fffec7cc = 0;
        uVar4 = _DAT_fffec7cc;
      }
      else {
        uVar4 = 0xffff;
        if (_DAT_fffec7cc != 0xffff) {
          uVar4 = _DAT_fffec7cc + 1;
        }
      }
      _DAT_fffec7cc = uVar4;
      _DAT_fffec7d8 = _DAT_fffec7ce;
      if ((bVar2) &&
         (iVar6 = (int)_DAT_fffec7ce + (uVar5 & 0xffff), _DAT_fffec7d8 = (short)iVar6,
         0x7fff < iVar6)) {
        _DAT_fffec7d8 = 0x7fff;
      }
      DAT_fffec7d5 = bVar2;
      DAT_fffec7d6 = bVar1;
      if (bVar1) {
        iVar6 = (int)_DAT_fffec7ce - (uVar9 & 0xffff);
        if (iVar6 < -0x8000) {
          iVar6 = -0x8000;
        }
        _DAT_fffec7d8 = (short)iVar6;
      }
    }
    if (bVar7 < DAT_fffec7d3) {
      _DAT_fffec7ce = 0;
    }
    _DAT_fffec7ca = _DAT_fffec7ce;
    if (bVar7 != 0) {
      _DAT_fffec7ca = _DAT_fffec7d8;
    }
    iVar11 = (int)sVar10 + (int)_DAT_fffec7ca + (uint)uVar8;
    iVar6 = 0x7fff;
    if ((iVar11 < 0x8000) && (iVar6 = iVar11, iVar11 < -0x8000)) {
      iVar6 = -0x8000;
    }
    _DAT_fffec7c4 = (undefined2)iVar6;
    DAT_fffec7d2 = '\x01';
    _DAT_fffec7ce = _DAT_fffec7ca;
    DAT_fffec7d3 = bVar7;
  }
  *param_4 = _DAT_fffec7c4;
  *param_5 = _DAT_fffec7c6;
  *param_6 = _DAT_fffec7c8;
  *param_7 = _DAT_fffec7ca;
  return;
}

