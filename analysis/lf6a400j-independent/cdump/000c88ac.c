
void FUN_000c88ac(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,byte *param_9)

{
  if ((((param_1 != '\0') && (param_3 == '\x01')) || ((param_2 != '\0' && (param_4 == '\x01')))) &&
     (DAT_fffecb14 = param_6 * '\x04' + param_5 * '\b' + param_7 * '\x02' + param_8,
     8 < DAT_fffecb14)) {
    DAT_fffecb14 = 0;
  }
  *param_9 = DAT_fffecb14;
  return;
}

