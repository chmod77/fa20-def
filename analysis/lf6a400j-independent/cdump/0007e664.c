
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e664(ushort param_1,char param_2,char param_3,ushort param_4,int param_5,char param_6,
                 uint param_7,ushort *param_8)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  
  bVar1 = false;
  if ((param_2 != '\0') && (param_3 == '\0')) {
    bVar1 = true;
  }
  if (param_4 == 0) {
    fVar2 = 0.0;
  }
  else {
    if (param_6 != '\0') {
      param_5 = (param_7 & 0xffff) << 9;
    }
    fVar2 = (float)param_5;
    if (param_5 < 0) {
      fVar2 = fVar2 + 4.2949673e+09;
    }
    fVar2 = (((fVar2 * 2918.0 * 0.10265624) / 14.7) / 4.0) / ((float)param_4 * 0.1953125);
  }
  fVar3 = 524280.0;
  if ((fVar2 <= 524280.0) && (fVar3 = fVar2, fVar2 < 0.0)) {
    fVar3 = 0.0;
  }
  uVar4 = (uint)(fVar3 * 0.125);
  if (bVar1) {
    if (DAT_fffeba1b == '\0') {
      DAT_fffeba1a = '\0';
      DAT_fffeba1b = '\x01';
    }
    if (DAT_fffeba1a == '\0') {
      _DAT_ffff19a0 = (short)uVar4;
    }
    else {
      FUN_0016b4d8(&DAT_ffff19a0,uVar4,0xff00);
    }
    _DAT_fffeba18 = _DAT_ffff19a0;
    DAT_fffeba1a = '\x01';
  }
  else {
    DAT_fffeba1b = '\0';
  }
  if (bVar1) {
    uVar4 = (uint)_DAT_fffeba18;
  }
  if ((uint)param_1 < (uVar4 & 0xffff)) {
    *param_8 = param_1;
  }
  else {
    *param_8 = (ushort)uVar4;
  }
  return;
}

