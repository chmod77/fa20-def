
void FUN_000b1200(char param_1,char param_2,undefined1 *param_3)

{
  if (param_1 != '\0') {
    if (DAT_fffec662 != '\0') {
      DAT_fffec660 = 0;
      DAT_fffec662 = '\0';
    }
  }
  else {
    if ((param_2 == '\0') || (param_2 == '\x01')) {
      DAT_fffec660 = 0;
    }
    else {
      DAT_fffec660 = 1;
    }
    DAT_fffec662 = '\x01';
  }
  if (param_1 == '\0') {
    if (DAT_fffec663 != '\0') {
      DAT_fffec661 = 0;
      DAT_fffec663 = '\0';
    }
  }
  else {
    if ((param_2 == '\0') || (param_2 == '\x01')) {
      DAT_fffec661 = 0;
    }
    else {
      DAT_fffec661 = 1;
    }
    DAT_fffec663 = '\x01';
  }
  if (param_1 != '\0') {
    *param_3 = DAT_fffec661;
    return;
  }
  *param_3 = DAT_fffec660;
  return;
}

