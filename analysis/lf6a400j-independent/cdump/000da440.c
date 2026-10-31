
char FUN_000da440(char param_1,char param_2,undefined1 *param_3)

{
  if ((param_1 == '\x04') && (DAT_fffecfe8 = 3, param_2 != '\0')) {
    DAT_fffecfe8 = 2;
  }
  if (param_1 == '\x01') {
    DAT_fffecfe8 = 2;
    if (param_2 == '\0') goto LAB_000da484;
LAB_000da472:
    DAT_fffecfe8 = 4;
  }
  else {
    if (param_1 == '\x02') {
      if (param_2 == '\0') goto LAB_000da472;
    }
    else {
      if (param_1 != '\x03') goto LAB_000da484;
      if (param_2 != '\0') {
        DAT_fffecfe8 = 3;
        goto LAB_000da484;
      }
    }
    DAT_fffecfe8 = 1;
  }
LAB_000da484:
  *param_3 = DAT_fffecfe8;
  return param_1;
}

