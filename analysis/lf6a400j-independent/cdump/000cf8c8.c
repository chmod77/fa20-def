
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000cf8c8(float param_1,float param_2,float param_3,float param_4,char param_5,
                 ushort param_6,ushort param_7,char param_8,char param_9,char param_10,
                 ushort param_11,float *param_12)

{
  if (param_5 != '\0') {
    _DAT_fffecd44 = 300000.0;
    param_3 = param_3 + (float)param_7 * 287.0 * (param_1 - param_2) * param_4 * 2.6041664e-07;
    if (param_3 < 300000.0) {
      _DAT_fffecd44 = param_3;
    }
  }
  if (((param_8 == '\0') && (param_9 == '\0')) && (param_10 == '\0')) {
    if (param_5 == '\0') {
      *param_12 = (float)param_6 * 3.90625;
    }
    else {
      *param_12 = _DAT_fffecd44;
    }
  }
  else {
    *param_12 = (float)param_11 * 3.90625;
  }
  return;
}

