
void FUN_000cde84(char param_1,char param_2,byte param_3,char param_4,undefined1 param_5,
                 undefined1 *param_6)

{
  if (param_1 != '\0') {
    if ((param_2 == '\0') || (DAT_fffeccb1 <= param_3)) {
      if (param_4 == '\0') {
        DAT_fffeccb0 = param_5;
        DAT_fffeccb1 = param_3;
      }
      else {
        DAT_fffeccb0 = 0;
        DAT_fffeccb1 = param_3;
      }
    }
    else {
      DAT_fffeccb0 = 1;
      DAT_fffeccb1 = param_3;
    }
  }
  *param_6 = DAT_fffeccb0;
  return;
}

