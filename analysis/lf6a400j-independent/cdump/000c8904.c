
void FUN_000c8904(char param_1,char param_2,byte *param_3)

{
  if (param_1 != '\0') {
    DAT_fffecb18 = param_2 - 1;
    if (param_2 == '\0') {
      DAT_fffecb18 = 0;
    }
    if (DAT_fffecb18 < 2) {
      DAT_fffecb18 = 1;
    }
  }
  *param_3 = DAT_fffecb18;
  return;
}

