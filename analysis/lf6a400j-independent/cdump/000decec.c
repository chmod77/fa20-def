
void FUN_000decec(char param_1,char param_2,char *param_3)

{
  char cVar1;
  
  if ((param_1 == '\0') && (param_2 == '\0')) {
    cVar1 = DAT_fffed126;
    if (DAT_fffed125 != '\0') {
      DAT_fffed124 = '\0';
      DAT_fffed125 = '\0';
      DAT_fffed127 = '\0';
    }
  }
  else {
    if (DAT_fffed127 == '\0') {
      DAT_fffed126 = '\0';
      DAT_fffed127 = '\x01';
      DAT_fffed125 = '\x01';
    }
    DAT_fffed124 = '\0';
    cVar1 = DAT_fffed124;
    if ((param_2 == '\0') && (DAT_fffed124 = -1, cVar1 = DAT_fffed124, DAT_fffed126 != -1)) {
      DAT_fffed124 = DAT_fffed126 + '\x01';
      cVar1 = DAT_fffed124;
    }
  }
  DAT_fffed126 = cVar1;
  *param_3 = DAT_fffed124;
  return;
}

