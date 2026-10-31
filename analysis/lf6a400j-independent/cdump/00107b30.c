
void FUN_00107b30(byte param_1,short param_2,char param_3,undefined1 param_4,undefined1 *param_5)

{
  if ((DAT_fffedb18 < param_1) && (param_3 != '\0')) {
    param_4 = 1;
  }
  if (param_2 == 0x4055) {
    *param_5 = 0;
  }
  else {
    *param_5 = param_4;
  }
  DAT_fffedb18 = param_1;
  return;
}

