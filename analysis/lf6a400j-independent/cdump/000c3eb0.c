
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000c3eb0(char param_1,char param_2,ushort param_3,char param_4,char param_5,char param_6,
                 ushort param_7,ushort param_8,ushort param_9,undefined2 *param_10)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  
  if (param_1 != '\0') {
    bVar1 = false;
    if ((DAT_fffecabc != '\x01') && (param_2 == '\x01')) {
      bVar1 = true;
    }
    _DAT_fffecab8 = _DAT_fffecaba;
    if (bVar1) {
      fVar3 = (((float)param_7 * 0.012499999 + -200.0) * (float)param_3 * 0.1953125) / 9549.3;
      fVar2 = 2000.0;
      if ((fVar3 <= 2000.0) && (fVar2 = fVar3, fVar3 < 0.0)) {
        fVar2 = 0.0;
      }
      _DAT_fffecab8 = 0xffff;
      if ((fVar2 <= 2000.0) && (_DAT_fffecab8 = 0, 0.0 <= fVar2)) {
        _DAT_fffecab8 = (short)(int)(fVar2 * 32.767498);
      }
    }
    if ((((bVar1) && (param_9 < param_3)) && (param_4 == '\0')) &&
       ((param_5 == '\0' && (param_6 == '\0')))) {
      _DAT_fffecab8 = _DAT_fffecaba;
    }
    if ((param_3 < param_8) && (bVar1)) {
      _DAT_fffecab8 = _DAT_fffecaba;
    }
  }
  *param_10 = _DAT_fffecab8;
  _DAT_fffecaba = _DAT_fffecab8;
  DAT_fffecabc = param_2;
  return;
}

