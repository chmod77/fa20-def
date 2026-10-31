
void FUN_000d3868(char param_1,undefined1 param_2,byte param_3,undefined1 *param_4)

{
  char cVar1;
  
  cVar1 = '\0';
  if (0xa0 < param_3) {
    cVar1 = DAT_fffecdfc;
  }
  if (0xa1 < param_3) {
    cVar1 = '\x01';
  }
  if ((cVar1 == '\0') && (DAT_fffecdfc != '\0')) {
    param_2 = 0;
  }
  if ((param_1 == '\0') && ((cVar1 == '\0' || (DAT_fffecdfc != '\0')))) {
    *param_4 = param_2;
  }
  else {
    *param_4 = 1;
  }
  DAT_fffecdfc = cVar1;
  return;
}

