
void FUN_000b1278(char param_1,char param_2,undefined1 *param_3)

{
  if (param_1 != '\0') {
    if (DAT_fffec666 != '\0') {
      DAT_fffec664 = 0;
      DAT_fffec666 = '\0';
    }
  }
  else {
    DAT_fffec664 = param_2 != '\0';
    DAT_fffec666 = '\x01';
  }
  if (param_1 == '\0') {
    if (DAT_fffec667 != '\0') {
      DAT_fffec665 = 0;
      DAT_fffec667 = '\0';
    }
  }
  else {
    DAT_fffec665 = param_2 != '\0';
    DAT_fffec667 = '\x01';
  }
  if (param_1 != '\0') {
    *param_3 = DAT_fffec665;
    return;
  }
  *param_3 = DAT_fffec664;
  return;
}

