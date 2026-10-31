
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b2c44(ushort param_1,short param_2,char param_3,char param_4,short param_5,char param_6,
                 short *param_7,undefined2 *param_8,float *param_9)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  ushort uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  bVar2 = false;
  if (((param_4 != '\0') && (param_3 == DAT_fffec6c7)) && (param_3 != '\0')) {
    bVar2 = true;
  }
  if (bVar2) {
    fVar6 = (float)(int)param_2 * 3.0517578e-05;
    if (DAT_fffec6c8 == '\0') {
      _DAT_fffec6bc = 0;
      DAT_fffec6c6 = '\0';
      DAT_fffec6ca = 0;
      _DAT_fffec6b8 = 0.0;
      _DAT_fffec6c4 = 0;
      DAT_fffec6c9 = '\0';
      _DAT_fffec6c0 = 0;
      _DAT_fffec6be = 0;
      _DAT_fffec6c2 = 0;
      DAT_fffec6c8 = '\x01';
    }
    cVar4 = DAT_fffec6c6;
    bVar1 = 1 < param_1;
    bVar3 = false;
    if (((param_6 != '\0') && (-2 < param_5)) && (param_5 < 2)) {
      bVar3 = true;
    }
    _DAT_fffec6b0 = _DAT_fffec6b8;
    if ((bVar1 <= DAT_fffec6ca) && (DAT_fffec6c9 == '\0')) {
      param_1 = _DAT_fffec6c0;
    }
    if (param_1 != 0) {
      _DAT_fffec6cc = _DAT_fffec6b8 / (float)param_1;
    }
    fVar7 = 0.0;
    if (param_1 != 0) {
      fVar7 = _DAT_fffec6cc;
    }
    uVar5 = 0;
    if ((bVar1) && (uVar5 = 0xffff, _DAT_fffec6bc != 0xffff)) {
      uVar5 = _DAT_fffec6bc + 1;
    }
    if (DAT_fffec6c6 != '\0') {
      uVar5 = 1;
    }
    DAT_fffec6c6 = bVar1 && param_1 <= uVar5;
    if ((_DAT_fffec6be != 0) && (cVar4 == '\0')) {
      fVar6 = fVar6 + _DAT_fffec6b8;
    }
    if (!bVar3 || _DAT_fffec6c2 != -1) {
      param_2 = _DAT_fffec6c4;
    }
    if (cVar4 != '\0') {
      fVar8 = 0.9999694;
      if ((fVar7 <= 0.9999694) && (fVar8 = fVar7, fVar7 < -1.0)) {
        fVar8 = -1.0;
      }
      param_2 = 0x7fff;
      if ((fVar8 <= 0.9999694) && (param_2 = -0x8000, -1.0 <= fVar8)) {
        param_2 = (short)(int)(fVar8 * 32768.0);
      }
    }
    if (bVar3) {
      _DAT_fffec6c2 = _DAT_fffec6c2 + 1;
      if (_DAT_fffec6c2 == 0) {
        _DAT_fffec6c2 = -1;
      }
    }
    else {
      _DAT_fffec6c2 = 0;
    }
    DAT_fffec6c9 = cVar4;
    _DAT_fffec6be = (ushort)bVar1 << 0xf;
    _DAT_fffec6b4 = param_2;
    _DAT_fffec6b8 = fVar6;
    _DAT_fffec6bc = uVar5;
    _DAT_fffec6c0 = param_1;
    _DAT_fffec6c4 = param_2;
    DAT_fffec6ca = bVar1;
    if (_DAT_fffec6be < 0) {
      _DAT_fffec6be = 0x7fff;
    }
  }
  else {
    DAT_fffec6c8 = '\0';
  }
  if (bVar2) {
    *param_7 = _DAT_fffec6b4;
    fVar6 = 0.9999694;
    if ((_DAT_fffec6b0 <= 0.9999694) && (fVar6 = _DAT_fffec6b0, _DAT_fffec6b0 < -1.0)) {
      fVar6 = -1.0;
    }
    if (fVar6 <= 0.9999694) {
      if (-1.0 <= fVar6) {
        *param_8 = (short)(int)(fVar6 * 32768.0);
      }
      else {
        *param_8 = 0x8000;
      }
    }
    else {
      *param_8 = 0x7fff;
    }
  }
  else {
    *param_7 = 0;
    *param_8 = 0;
  }
  if (bVar2) {
    *param_9 = _DAT_fffec6b0;
  }
  else {
    *param_9 = 0.0;
  }
  DAT_fffec6c7 = param_3;
  return;
}

