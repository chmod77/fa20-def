
void FUN_001098f4(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  if (param_1 == '\0') {
    DAT_fffedbfb = '\0';
  }
  else {
    if (DAT_fffedbfb == '\0') {
      DAT_fffedbfa = '\0';
      DAT_fffedbf9 = '\0';
      DAT_fffedbfb = '\x01';
    }
    if ((param_3 == '\0') ||
       (((DAT_fffedbf9 == '\x01' && ((param_2 == '\0' || (param_2 == -0x5d)))) ||
        (param_2 == '\x02')))) {
      DAT_fffedbfa = '\0';
    }
    if ((param_2 == '\x01') || (param_3 != '\0')) {
      DAT_fffedbfa = '\x01';
    }
    DAT_fffedbf8 = DAT_fffedbfa != '\0';
    DAT_fffedbf9 = param_2;
  }
  if (param_1 == '\0') {
    *param_4 = 0;
  }
  else {
    *param_4 = DAT_fffedbf8;
  }
  return;
}

