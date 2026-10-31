
void FUN_00108f7c(char param_1,byte param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,undefined1 *param_9)

{
  if (param_1 == '\0') {
    DAT_fffedbb5 = '\0';
  }
  else {
    if (DAT_fffedbb5 == '\0') {
      DAT_fffedbb3 = 0;
      DAT_fffedbb5 = '\x01';
    }
    if ((DAT_fffedbb4 != '\0') || (DAT_fffedbb0 = 1, param_2 <= DAT_fffedbb2)) {
      DAT_fffedbb0 = DAT_fffedbb3;
    }
    if ((((((param_3 != '\0') || (param_4 != '\0')) || (DAT_fffedbb1 != '\0')) ||
         ((param_5 != '\0' || (param_6 != '\0')))) || ((param_7 == '\0' || (param_8 != '\0')))) ||
       ((DAT_fffedbb3 = DAT_fffedbb0, DAT_fffedbb4 != '\0' && (param_2 > DAT_fffedbb2)))) {
      DAT_fffedbb0 = 0;
      DAT_fffedbb3 = DAT_fffedbb0;
    }
  }
  DAT_fffedbb4 = 0;
  if (param_1 != '\0') {
    DAT_fffedbb4 = DAT_fffedbb0;
  }
  *param_9 = DAT_fffedbb4;
  DAT_fffedbb2 = param_2;
  DAT_fffedbb1 = param_4;
  return;
}

