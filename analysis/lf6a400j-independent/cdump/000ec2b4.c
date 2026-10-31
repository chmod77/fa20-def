
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ec2b4(ushort param_1,int param_2,int *param_3)

{
  if (0x9ff < param_1) {
    _DAT_fffed53c = param_2 - _DAT_fffed540;
    if (((param_2 < 0) || (-1 < _DAT_fffed540)) || (-1 < _DAT_fffed53c)) {
      if (((param_2 < 0) && (-1 < _DAT_fffed540)) && (-1 < _DAT_fffed53c)) {
        _DAT_fffed53c = -0x80000000;
      }
    }
    else {
      _DAT_fffed53c = 0x7fffffff;
    }
  }
  *param_3 = _DAT_fffed53c;
  _DAT_fffed540 = param_2;
  return;
}

