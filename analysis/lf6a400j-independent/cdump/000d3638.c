
void FUN_000d3638(ushort param_1,undefined1 param_2,undefined1 *param_3)

{
  char cVar1;
  
  cVar1 = '\0';
  if (0x6dff < param_1) {
    cVar1 = DAT_fffecdec;
  }
  if (0x73ff < param_1) {
    cVar1 = '\x01';
  }
  if ((cVar1 != '\0') && (DAT_fffecdec == '\0')) {
    param_2 = 1;
  }
  if ((cVar1 == '\0') && (DAT_fffecdec != '\0')) {
    *param_3 = 0;
  }
  else {
    *param_3 = param_2;
  }
  DAT_fffecdec = cVar1;
  return;
}

