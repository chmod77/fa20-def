
void FUN_000afd84(char param_1,byte param_2,byte param_3,byte *param_4)

{
  if (param_1 == '\0') {
    if (DAT_fffec5fd != '\0') {
      DAT_fffec5fc = 0;
      DAT_fffec5fd = '\0';
    }
  }
  else {
    DAT_fffec5fc = param_3;
    if (param_3 < param_2) {
      DAT_fffec5fc = param_2;
    }
    DAT_fffec5fd = '\x01';
  }
  *param_4 = DAT_fffec5fc;
  return;
}

