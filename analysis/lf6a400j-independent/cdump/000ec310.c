
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ec310(ushort param_1,int param_2,int *param_3)

{
  if (0x9ff < param_1) {
    _DAT_fffed544 = param_2 - _DAT_fffed548;
    if (((param_2 < 0) || (-1 < _DAT_fffed548)) || (-1 < _DAT_fffed544)) {
      if (((param_2 < 0) && (-1 < _DAT_fffed548)) && (-1 < _DAT_fffed544)) {
        _DAT_fffed544 = -0x80000000;
      }
    }
    else {
      _DAT_fffed544 = 0x7fffffff;
    }
  }
  *param_3 = _DAT_fffed544;
  _DAT_fffed548 = param_2;
  return;
}

