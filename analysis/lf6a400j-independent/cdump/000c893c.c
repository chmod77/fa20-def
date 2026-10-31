
void FUN_000c893c(char param_1,char param_2,undefined1 *param_3)

{
  if (param_2 != '\0') {
    if (param_1 == '\x02') {
      DAT_fffecb1c = 8;
    }
    else {
      DAT_fffecb1c = 7;
    }
  }
  *param_3 = DAT_fffecb1c;
  return;
}

