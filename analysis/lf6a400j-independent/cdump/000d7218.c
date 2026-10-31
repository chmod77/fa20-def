
void FUN_000d7218(short param_1,char param_2,ushort param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = '\x01';
  if (param_3 < 0x5dc) {
    cVar1 = DAT_fffecee0;
  }
  if (((param_1 == 0) || (DAT_fffecee0 != '\0')) || (param_2 != '\0')) {
    cVar1 = '\0';
  }
  *param_4 = cVar1;
  DAT_fffecee0 = cVar1;
  return;
}

