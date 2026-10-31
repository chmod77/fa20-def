
/* WARNING: Removing unreachable block (ram,0x000a5d50) */
/* WARNING: Removing unreachable block (ram,0x000a5d54) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a5c58(uint param_1,char param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 ushort *param_7,undefined2 *param_8,short *param_9,short *param_10,short *param_11)

{
  bool bVar1;
  ushort uVar3;
  uint uVar2;
  short sVar4;
  short extraout_r0;
  uint p1;
  short sVar5;
  ushort uVar6;
  int iVar7;
  
  uVar3 = FUN_0016bc68(&DAT_00014574,param_1);
  if (param_2 == '\0') {
    DAT_fffec3a2 = '\0';
    sVar5 = _DAT_fffec3a0;
  }
  else {
    if (DAT_fffec3a2 == '\0') {
      _DAT_fffec3a0 = 0;
      DAT_fffec3a2 = '\x01';
    }
    uVar2 = LK_134C84((uint)&T_02DB50,param_1);
    iVar7 = (param_3 & 0xffff) - (param_4 & 0xffff);
    p1 = 0x7fff;
    if ((iVar7 < 0x8000) && (p1 = 0xffff8000, -0x8001 < iVar7)) {
      p1 = (uint)(short)iVar7;
    }
    sVar4 = (short)p1;
    _DAT_fffec398 = (short)uVar2;
    _DAT_fffec39c = sVar4;
    uVar2 = LK_1380FC((uint)&T_02DB5C,p1,param_1);
    extraout_r0 = (short)uVar2;
    uVar2 = (param_5 & 0xffff) - (param_6 & 0xffff);
    if ((int)uVar2 < 0) {
      uVar2 = -uVar2;
    }
    if ((int)uVar2 < 0) {
      uVar2 = 0;
    }
    bVar1 = 0x947 < (uVar2 & 0xffff);
    if ((bVar1) || (p1 = (uint)sVar4, -1 < (int)p1)) {
      sVar4 = (short)p1;
      _DAT_fffec39e = _DAT_fffec3a0;
    }
    else {
      _DAT_fffec39e = (short)(_DAT_fffec3a0 + -5);
      if (_DAT_fffec3a0 + -5 < -0x8000) {
        _DAT_fffec39e = -0x8000;
      }
    }
    _DAT_fffec39a = extraout_r0;
    sVar5 = _DAT_fffec39e;
    if ((((!bVar1) && (sVar5 = _DAT_fffec39e, 0 < sVar4)) &&
        (_DAT_fffec39e = _DAT_fffec3a0 + 5, sVar5 = _DAT_fffec39e, -1 < _DAT_fffec3a0)) &&
       (sVar5 = _DAT_fffec39e, _DAT_fffec39e < 0)) {
      _DAT_fffec39e = 0x7fff;
      sVar5 = _DAT_fffec39e;
    }
  }
  _DAT_fffec3a0 = sVar5;
  sVar5 = 0;
  if (param_2 != '\0') {
    sVar5 = _DAT_fffec39e;
  }
  *param_11 = sVar5;
  if (param_2 == '\0') {
    *param_10 = 0;
  }
  else {
    *param_10 = _DAT_fffec39c;
  }
  sVar4 = 0;
  if (param_2 != '\0') {
    sVar4 = _DAT_fffec39a;
  }
  *param_9 = sVar4;
  iVar7 = 0;
  if (param_2 != '\0') {
    iVar7 = (int)_DAT_fffec398;
  }
  *param_8 = (short)iVar7;
  iVar7 = iVar7 + sVar4 + (int)sVar5;
  uVar6 = 0x7fff;
  if ((iVar7 < 0x8000) && (uVar6 = (ushort)iVar7, iVar7 < -0x8000)) {
    uVar6 = 0x8000;
  }
  if ((short)uVar6 < 0) {
    uVar6 = 0;
  }
  else if ((short)uVar6 < 0) {
    uVar6 = 0;
  }
  if (uVar3 < uVar6) {
    *param_7 = uVar3;
  }
  else {
    *param_7 = uVar6;
  }
  return;
}

