
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a6a3c(char param_1,uint param_2,uint param_3,uint param_4,uint param_5,char param_6,
                 char param_7,char param_8,char param_9,undefined2 param_10,char param_11,
                 ushort param_12,ushort *param_13,ushort *param_14,char *param_15,
                 undefined2 *param_16)

{
  bool bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  bool bVar8;
  
  if (param_1 == '\0') {
    DAT_fffec3fe = '\0';
    DAT_fffec403 = '\0';
    DAT_fffec404 = '\0';
    uVar6 = _DAT_fffec3fa;
  }
  else {
    if (DAT_fffec3fe == '\0') {
      _DAT_fffec3fc = 0;
      _DAT_fffec3fa = 0;
      DAT_fffec3fe = '\x01';
    }
    if (param_6 == '\0') {
      DAT_fffec403 = '\0';
    }
    else {
      if (DAT_fffec403 == '\0') {
        DAT_fffec400 = '\0';
        DAT_fffec403 = '\x01';
      }
      cVar2 = (char)param_2;
      if (DAT_fffec400 != '\0') {
        FUN_0016b44c(&DAT_ffff198a,param_2 & 0xff,0xffffffff);
        cVar2 = DAT_ffff198a;
      }
      DAT_ffff198a = cVar2;
      DAT_fffec408 = DAT_ffff198a;
      DAT_fffec400 = '\x01';
    }
    if (param_6 == '\0') {
      DAT_fffec404 = '\0';
      DAT_fffec3f6 = (char)param_2;
    }
    else {
      param_2 = (uint)DAT_fffec408;
      DAT_fffec3f6 = DAT_fffec408;
      if (DAT_fffec404 == '\0') {
        DAT_fffec3ff = '\0';
        DAT_fffec404 = '\x01';
      }
      sVar3 = (short)param_3;
      if (DAT_fffec3ff != '\0') {
        FUN_0016b4d8(&DAT_ffff19c0,param_3 & 0xffff,0x666);
        sVar3 = _DAT_ffff19c0;
      }
      _DAT_ffff19c0 = sVar3;
      _DAT_fffec406 = _DAT_ffff19c0;
      DAT_fffec3ff = '\x01';
    }
    if (param_6 != '\0') {
      param_3 = (uint)_DAT_fffec406;
    }
    _DAT_fffec3f2 = (undefined2)param_3;
    if (param_7 == '\0') {
      uVar4 = LK_13AAF0((uint)&T_02DBF0,param_2,param_5 & 0xffff);
    }
    else {
      uVar4 = LK_13AAF0((uint)&T_02DC04,param_2,param_3);
    }
    uVar4 = uVar4 & 0xffff;
    bVar1 = false;
    if (param_6 != '\0') {
      uVar7 = (uint)_DAT_fffec3fa;
      uVar5 = LK_133E10((uint)&T_02DBE4,param_4 & 0xff);
      bVar1 = uVar7 < (uVar5 & 0xffff);
    }
    if (bVar1) {
      uVar5 = LK_133E10((uint)&T_02DBD8,param_4 & 0xff);
    }
    else {
      uVar5 = 0;
      if (0x16 < _DAT_fffec3fc) {
        uVar5 = (int)(short)_DAT_fffec3fc - 0x17;
      }
      uVar5 = uVar5 & 0xffff;
      if (uVar5 == 0) {
        uVar5 = 0;
      }
    }
    if (param_6 == '\0') {
      uVar5 = 0;
    }
    _DAT_fffec3f4 = (ushort)uVar5;
    if (uVar4 < 0x2c8) {
      uVar4 = 0x2c8;
    }
    _DAT_fffec3f0 = (ushort)uVar4;
    if (uVar4 < (uVar5 & 0xffff)) {
      _DAT_fffec3f0 = _DAT_fffec3f4;
    }
    _DAT_fffec3fc = _DAT_fffec3f4;
    if (param_6 == '\0') {
      _DAT_fffec3f0 = 0;
      _DAT_fffec3fa = 0;
      uVar6 = _DAT_fffec3fa;
    }
    else {
      uVar6 = 0xffff;
      if (_DAT_fffec3fa != 0xffff) {
        uVar6 = _DAT_fffec3fa + 1;
      }
    }
  }
  _DAT_fffec3fa = uVar6;
  *param_15 = DAT_fffec3f6;
  *param_16 = _DAT_fffec3f2;
  if (param_1 != '\0') {
    DAT_fffec405 = '\0';
  }
  else {
    if (DAT_fffec405 == '\0') {
      DAT_fffec401 = 0;
      _DAT_fffec3f8 = 0;
      DAT_fffec402 = 0;
      DAT_fffec405 = '\x01';
    }
    bVar1 = false;
    if (param_8 == '\0') {
      DAT_fffec401 = 0;
    }
    else {
      bVar1 = 0x13 < DAT_fffec401;
      DAT_fffec401 = DAT_fffec401 + 1;
      if (DAT_fffec401 == 0) {
        DAT_fffec401 = 0xff;
      }
    }
    bVar8 = 0x47 < param_12;
    if (param_9 == '\0') {
      if (param_11 == '\0') {
        if (bVar8) {
          uVar6 = FUN_0016bc68(&DAT_0001c53e,param_10);
        }
        else {
          uVar6 = FUN_0016bc68(&DAT_0001c55e,param_10);
        }
      }
      else if (bVar8) {
        uVar6 = FUN_0016bc68(&DAT_0001c57e,param_10);
      }
      else {
        uVar6 = FUN_0016bc68(&DAT_0001c59e,param_10);
      }
    }
    else if (param_11 == '\0') {
      if (bVar8) {
        uVar6 = FUN_0016bc68(&DAT_0001c4be,param_10);
      }
      else {
        uVar6 = FUN_0016bc68(&DAT_0001c4de,param_10);
      }
    }
    else if (bVar8) {
      uVar6 = FUN_0016bc68(&DAT_0001c4fe,param_10);
    }
    else {
      uVar6 = FUN_0016bc68(&DAT_0001c51e,param_10);
    }
    if (bVar1) {
      _DAT_fffec3ee = 0;
      if (0x1ff < _DAT_fffec3f8) {
        _DAT_fffec3ee = _DAT_fffec3f8 - 0x200;
      }
      if (_DAT_fffec3ee == 0) {
        _DAT_fffec3ee = 0;
      }
    }
    else if (param_9 == '\0') {
      if (param_11 == '\0') {
        if (bVar8) {
          _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c63e,param_10);
        }
        else {
          _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c65e,param_10);
        }
      }
      else if (bVar8) {
        _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c67e,param_10);
      }
      else {
        _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c69e,param_10);
      }
    }
    else if (param_11 == '\0') {
      if (bVar8) {
        _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c5be,param_10);
      }
      else {
        _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c5de,param_10);
      }
    }
    else if (bVar8) {
      _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c5fe,param_10);
    }
    else {
      _DAT_fffec3ee = FUN_0016bc68(&DAT_0001c61e,param_10);
    }
    DAT_fffec402 = bVar8;
    if (param_8 == '\0') {
      _DAT_fffec3ee = 0;
      _DAT_fffec3ec = 0;
      _DAT_fffec3f8 = _DAT_fffec3ee;
    }
    else {
      _DAT_fffec3ec = _DAT_fffec3ee;
      _DAT_fffec3f8 = _DAT_fffec3ee;
      if (_DAT_fffec3ee <= uVar6) {
        _DAT_fffec3ec = uVar6;
      }
    }
  }
  if (param_1 != '\0') {
    *param_14 = _DAT_fffec3f4;
    if (param_1 == '\0') {
      *param_13 = 0;
    }
    else {
      *param_13 = _DAT_fffec3f0;
    }
  }
  else {
    *param_14 = _DAT_fffec3ee;
    *param_13 = _DAT_fffec3ec;
  }
  return;
}

