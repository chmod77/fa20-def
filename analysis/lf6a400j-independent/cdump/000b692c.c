
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b692c(char param_1,short param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,ushort param_8,ushort param_9,char param_10,uint param_11,
                 short param_12,short *param_13,short *param_14,short *param_15,short *param_16,
                 short *param_17,short *param_18,undefined1 *param_19)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  uint uVar7;
  ushort uVar8;
  char cVar11;
  char cVar12;
  int iVar9;
  short sVar10;
  short sVar13;
  short local_44;
  byte bStack_34;
  byte bStack_30;
  
  uVar7 = LK_133B38((uint)&T_02E424,param_11 & 0xff);
  *param_19 = (char)uVar7;
  bVar1 = false;
  if ((param_8 < 0x8030) && (0x7fd0 < param_8)) {
    bVar1 = true;
  }
  bVar2 = false;
  if ((param_9 < 0x8030) && (0x7fd0 < param_9)) {
    bVar2 = true;
  }
  bVar3 = true;
  if ((!bVar1) && (!bVar2)) {
    bVar3 = false;
  }
  uVar8 = 0;
  if (bVar3) {
    uVar8 = _DAT_fffec792;
    if (_DAT_fffec792 == 0xffff) {
      _DAT_fffec792 = -1;
    }
    else {
      _DAT_fffec792 = _DAT_fffec792 + 1;
    }
  }
  else {
    _DAT_fffec792 = 0;
  }
  if ((param_10 == '\0') || (DAT_fffec7a1 != '\0')) {
    sVar13 = 0;
    if (_DAT_fffec796 != 0) {
      sVar13 = _DAT_fffec796 + -1;
    }
  }
  else {
    sVar13 = 0x96;
  }
  local_44 = sVar13;
  if (sVar13 == 0) {
    local_44 = 0;
  }
  if ((param_1 != '\0') &&
     ((((bVar3 && ((uVar7 & 0xff) <= (uint)uVar8)) || (param_10 == '\0')) || (local_44 == 0)))) {
    cVar11 = '\0';
    if (((param_2 < -0x66) && (param_3 == '\0')) && (param_4 == '\0')) {
      cVar11 = '\x01';
    }
    bVar1 = false;
    if ((param_2 < -0x44) && (param_4 != '\0')) {
      bVar1 = true;
    }
    cVar12 = '\0';
    if (((0x1b4 < param_2) && (param_3 == '\0')) && (param_4 == '\0')) {
      cVar12 = '\x01';
    }
    bVar2 = false;
    if ((0x123 < param_2) && (param_3 != '\0')) {
      bVar2 = true;
    }
    if ((cVar11 != '\0') && (DAT_fffec7b2 == '\0')) {
      iVar9 = _DAT_fffec79c + -7;
      if (iVar9 < -0x8000) {
        iVar9 = -0x8000;
      }
      _DAT_fffec7a2 = (short)iVar9;
    }
    if ((cVar12 != '\0') && (DAT_fffec7b6 == '\0')) {
      iVar9 = _DAT_fffec79c + 7;
      if (0x7fff < iVar9) {
        iVar9 = 0x7fff;
      }
      _DAT_fffec7aa = (short)iVar9;
    }
    if (cVar12 != '\0') {
      _DAT_fffec79c = _DAT_fffec7aa;
    }
    _DAT_fffec790 = _DAT_fffec79c;
    if (cVar11 != '\0') {
      _DAT_fffec790 = _DAT_fffec7a2;
    }
    bVar3 = false;
    if ((DAT_fffec79e == '\0') && (param_4 != '\0')) {
      bVar3 = true;
    }
    bVar6 = false;
    if ((DAT_fffec79e != '\0') && (param_3 != '\0')) {
      bVar6 = true;
    }
    bVar4 = false;
    if ((DAT_fffec79e == '\0') && (param_3 != '\0')) {
      bVar4 = true;
    }
    bVar5 = false;
    if ((DAT_fffec79e != '\0') && (param_4 != '\0')) {
      bVar5 = true;
    }
    if ((bVar1) && (DAT_fffec7b3 == '\0')) {
      iVar9 = _DAT_fffec79a + -7;
      if (iVar9 < -0x8000) {
        iVar9 = -0x8000;
      }
      _DAT_fffec7a4 = (short)iVar9;
    }
    if ((bVar2) && (DAT_fffec7b7 == '\0')) {
      iVar9 = _DAT_fffec79a + 7;
      if (0x7fff < iVar9) {
        iVar9 = 0x7fff;
      }
      _DAT_fffec7ac = (short)iVar9;
    }
    if (bVar2) {
      _DAT_fffec79a = _DAT_fffec7ac;
    }
    _DAT_fffec78e = _DAT_fffec79a;
    if (bVar1) {
      _DAT_fffec78e = _DAT_fffec7a4;
    }
    if ((bVar5) && (DAT_fffec7b4 == '\0')) {
      if (param_2 < 0x91) {
        iVar9 = _DAT_fffec794 + -7;
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
        _DAT_fffec7a6 = (short)iVar9;
      }
      else {
        _DAT_fffec7a6 = _DAT_fffec794;
      }
    }
    if ((bVar6) && (DAT_fffec7b8 == '\0')) {
      if (param_2 < -0x21) {
        _DAT_fffec7ae = _DAT_fffec794;
      }
      else {
        iVar9 = _DAT_fffec794 + 7;
        if (0x7fff < iVar9) {
          iVar9 = 0x7fff;
        }
        _DAT_fffec7ae = (short)iVar9;
      }
    }
    if (bVar6) {
      _DAT_fffec794 = _DAT_fffec7ae;
    }
    _DAT_fffec78c = _DAT_fffec794;
    if (bVar5) {
      _DAT_fffec78c = _DAT_fffec7a6;
    }
    if ((bVar3) && (DAT_fffec7b5 == '\0')) {
      bStack_34 = 0;
      if (1 >= DAT_fffec7a0) {
        bStack_34 = DAT_fffec7a0;
      }
      if ((param_6 == '\0') || (1 < DAT_fffec7a0)) {
        if (param_6 != '\0') {
          bStack_34 = 1;
        }
      }
      else if (DAT_fffec7a0 == 0xff) {
        bStack_34 = 0xff;
      }
      else {
        bStack_34 = DAT_fffec7a0 + 1;
      }
      if (bStack_34 < 2) {
        _DAT_fffec7a8 = _DAT_fffec798;
      }
      else {
        iVar9 = _DAT_fffec798 + -7;
        if (iVar9 < -0x8000) {
          iVar9 = -0x8000;
        }
        _DAT_fffec7a8 = (short)iVar9;
      }
      DAT_fffec7a0 = bStack_34;
    }
    if ((bVar4) && (DAT_fffec7b9 == '\0')) {
      bStack_30 = 0;
      if (1 >= DAT_fffec79f) {
        bStack_30 = DAT_fffec79f;
      }
      if ((param_7 == '\0') || (1 < DAT_fffec79f)) {
        if (param_7 != '\0') {
          bStack_30 = 1;
        }
      }
      else if (DAT_fffec79f == 0xff) {
        bStack_30 = 0xff;
      }
      else {
        bStack_30 = DAT_fffec79f + 1;
      }
      if (bStack_30 < 2) {
        _DAT_fffec7b0 = _DAT_fffec798;
      }
      else {
        iVar9 = _DAT_fffec798 + 7;
        if (0x7fff < iVar9) {
          iVar9 = 0x7fff;
        }
        _DAT_fffec7b0 = (short)iVar9;
      }
      DAT_fffec79f = bStack_30;
    }
    if (bVar4) {
      _DAT_fffec798 = _DAT_fffec7b0;
    }
    _DAT_fffec78a = _DAT_fffec798;
    if (bVar3) {
      _DAT_fffec78a = _DAT_fffec7a8;
    }
    iVar9 = (int)_DAT_fffec78a + (int)_DAT_fffec78c + (int)_DAT_fffec78e + (int)_DAT_fffec790;
    if (iVar9 < 0x8000) {
      if (iVar9 < -0x8000) {
        iVar9 = -0x8000;
      }
    }
    else {
      iVar9 = 0x7fff;
    }
    _DAT_fffec788 = (short)iVar9;
    DAT_fffec79e = param_5;
    _DAT_fffec794 = _DAT_fffec78c;
    _DAT_fffec798 = _DAT_fffec78a;
    _DAT_fffec79a = _DAT_fffec78e;
    _DAT_fffec79c = _DAT_fffec790;
    DAT_fffec7b2 = cVar11;
    DAT_fffec7b3 = bVar1;
    DAT_fffec7b4 = bVar5;
    DAT_fffec7b5 = bVar3;
    DAT_fffec7b6 = cVar12;
    DAT_fffec7b7 = bVar2;
    DAT_fffec7b8 = bVar6;
    DAT_fffec7b9 = bVar4;
  }
  sVar10 = param_12 + _DAT_fffec788;
  if (((param_12 < 0) || (_DAT_fffec788 < 0)) || (-1 < sVar10)) {
    if (((param_12 < 0) && (_DAT_fffec788 < 0)) && (-1 < sVar10)) {
      sVar10 = -0x8000;
    }
  }
  else {
    sVar10 = 0x7fff;
  }
  if (sVar10 < 0x5d2) {
    if (sVar10 < -0x5d1) {
      sVar10 = -0x5d1;
    }
  }
  else {
    sVar10 = 0x5d1;
  }
  *param_13 = sVar10;
  *param_14 = _DAT_fffec78a;
  *param_15 = _DAT_fffec78c;
  *param_16 = _DAT_fffec78e;
  *param_17 = _DAT_fffec790;
  *param_18 = local_44;
  DAT_fffec7a1 = param_10;
  _DAT_fffec796 = sVar13;
  return;
}

