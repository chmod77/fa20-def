
void FUN_000dbbb4(char param_1,char param_2,byte param_3,char param_4,char param_5,byte *param_6)

{
  if ((param_1 != '\0') && (DAT_fffed0a0 = param_3 + DAT_fffed0a0, DAT_fffed0a0 < param_3)) {
    DAT_fffed0a0 = 0xff;
  }
  if ((param_5 != '\0') || (param_4 != '\0')) {
    DAT_fffed0a0 = 0;
  }
  *param_6 = DAT_fffed0a0;
  if (param_2 != '\0') {
    DAT_fffed0a0 = 0;
  }
  return;
}

