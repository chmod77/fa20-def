
byte FUN_000ac810(byte param_1,byte *param_2)

{
  if (6 < param_1) {
    param_1 = 7;
  }
  if (param_1 < 2) {
    param_1 = 1;
  }
  if ((param_1 == 1) || (param_1 == 2)) {
    DAT_fffec4f0 = 1;
  }
  else if (param_1 == 3) {
    DAT_fffec4f0 = 2;
  }
  else if (param_1 == 4) {
    DAT_fffec4f0 = 3;
  }
  else if (param_1 == 5) {
    DAT_fffec4f0 = 4;
  }
  else if ((param_1 != 6) && (DAT_fffec4f0 = param_1, param_1 == 7)) {
    DAT_fffec4f0 = 8;
  }
  *param_2 = DAT_fffec4f0;
  return param_1;
}

