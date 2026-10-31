
void FUN_000aced8(byte param_1,char param_2,byte param_3,short param_4,char param_5,byte param_6,
                 undefined1 *param_7)

{
  char cVar1;
  
  if ((DAT_fffec51b < param_1) && (0xe < param_6)) {
    DAT_fffec518 = 1;
  }
  cVar1 = '\0';
  if (param_3 < 0x6e) {
    cVar1 = DAT_fffec519;
  }
  if (param_5 != '\0') {
    cVar1 = '\x01';
  }
  if ((((param_2 != '\0') || (param_1 == 0)) || (param_6 < 10)) ||
     ((cVar1 != '\0' || ((DAT_fffec51a != '\0' && (param_4 == 0)))))) {
    DAT_fffec518 = 0;
  }
  *param_7 = DAT_fffec518;
  DAT_fffec51b = param_1;
  DAT_fffec51a = DAT_fffec518;
  DAT_fffec519 = cVar1;
  return;
}

