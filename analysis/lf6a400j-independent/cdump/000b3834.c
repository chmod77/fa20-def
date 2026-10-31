
void FUN_000b3834(short param_1,char param_2,short param_3,char param_4,char param_5,char param_6,
                 char param_7,char *param_8)

{
  if (param_2 != '\0') {
    if ((param_4 != '\f') || (param_3 < 0x106)) {
      DAT_fffec6f4 = param_7;
      if ((param_4 == '\f') && (param_3 < -0x105)) {
        DAT_fffec6f4 = param_7 - param_6;
      }
    }
    else {
      DAT_fffec6f4 = param_7 + param_6;
    }
    if (param_5 != '\0') {
      DAT_fffec6f4 = (char)((ulonglong)((longlong)(int)param_1 * 0x2000000) >> 0x20);
    }
    if (DAT_fffec6f4 < -0x65) {
      DAT_fffec6f4 = -0x66;
    }
    if ('e' < DAT_fffec6f4) {
      DAT_fffec6f4 = 'f';
    }
  }
  if (param_2 == '\0') {
    *param_8 = param_7;
  }
  else {
    *param_8 = DAT_fffec6f4;
  }
  return;
}

