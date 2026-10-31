
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000f1f6c(ushort param_1,int param_2,int *param_3)

{
  if (0x9ff < param_1) {
    _DAT_fffed6b4 = param_2 - _DAT_fffed6b8;
    if (((param_2 < 0) || (-1 < _DAT_fffed6b8)) || (-1 < _DAT_fffed6b4)) {
      if (((param_2 < 0) && (-1 < _DAT_fffed6b8)) && (-1 < _DAT_fffed6b4)) {
        _DAT_fffed6b4 = -0x80000000;
      }
    }
    else {
      _DAT_fffed6b4 = 0x7fffffff;
    }
  }
  *param_3 = _DAT_fffed6b4;
  _DAT_fffed6b8 = param_2;
  return;
}

