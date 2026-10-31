
void FUN_000afc80(char param_1,char param_2,short param_3,char param_4,char param_5,char param_6,
                 char param_7,char *param_8)

{
  if (DAT_fffec5f6 == '\0') {
    param_3 = 0x98;
  }
  if (param_1 != '\0') {
    if (DAT_fffec5f8 != '\0') {
      DAT_fffec5f4 = '\0';
      DAT_fffec5f8 = '\0';
    }
  }
  else {
    if ((param_6 == '\0') || ((DAT_fffec5f4 = param_4, param_2 == '\0' && (param_7 == '\0')))) {
      if ((param_4 == '\x02') && (param_3 == 0)) {
        DAT_fffec5f4 = '\x02';
      }
      else if ((param_4 == '\x02') || (param_4 == '\x01')) {
        DAT_fffec5f4 = '\x01';
      }
      else {
        DAT_fffec5f4 = '\0';
      }
    }
    DAT_fffec5f8 = '\x01';
  }
  if (param_1 == '\0') {
    if (DAT_fffec5f7 != '\0') {
      DAT_fffec5f5 = '\0';
      DAT_fffec5f7 = '\0';
    }
  }
  else {
    if ((param_6 == '\0') || ((param_2 == '\0' && (param_7 == '\0')))) {
      if ((param_5 == '\x02') && (param_3 == 0)) {
        DAT_fffec5f5 = '\x02';
      }
      else if ((param_5 == '\x02') || (param_5 == '\x01')) {
        DAT_fffec5f5 = '\x01';
      }
      else {
        DAT_fffec5f5 = '\0';
      }
    }
    else {
      DAT_fffec5f5 = param_5;
    }
    DAT_fffec5f7 = '\x01';
  }
  if (param_1 != '\0') {
    *param_8 = DAT_fffec5f5;
  }
  else {
    *param_8 = DAT_fffec5f4;
  }
  DAT_fffec5f6 = 1;
  return;
}

