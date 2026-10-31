
void FUN_000936ac(char param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,uint param_8,undefined1 *param_9)

{
  if (param_1 != '\0') {
    DAT_fffebe80 = param_2 != '\0';
  }
  if (((param_3 == '\0') || ((param_4 == '\0' && (param_5 == '\0')))) &&
     ((param_6 == '\0' || ((param_7 != '\0' || ((param_8 & 0x80) == 0)))))) {
    *param_9 = DAT_fffebe80;
  }
  else {
    *param_9 = 1;
  }
  return;
}

