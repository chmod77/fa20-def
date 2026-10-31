
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000eb104(char param_1,uint param_2,short *param_3)

{
  if (param_1 == '\0') {
    param_2 = (uint)(short)_DAT_fffed4d8;
  }
  else {
    param_2 = param_2 & 0xffff;
    _DAT_fffed4da = (short)((int)(param_2 - _DAT_fffed4d8) >> 1);
    if ((int)(param_2 - _DAT_fffed4d8) < 0) {
      _DAT_fffed4da = -_DAT_fffed4da;
    }
    if (_DAT_fffed4da < 0) {
      _DAT_fffed4da = 0;
    }
  }
  *param_3 = _DAT_fffed4da;
  _DAT_fffed4d8 = (short)param_2;
  return;
}

