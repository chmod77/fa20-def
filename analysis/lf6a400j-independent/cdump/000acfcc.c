
void FUN_000acfcc(byte param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  
  if (param_1 < DAT_fffec522) {
    cVar2 = '\0';
  }
  else {
    cVar2 = '\0';
    if (DAT_fffec521 != '\0') {
      cVar2 = DAT_fffec521 + -1;
    }
  }
  if (DAT_fffec522 < param_1) {
    cVar2 = '\0';
  }
  bVar1 = param_1;
  if (cVar2 != '\0') {
    bVar1 = DAT_fffec520;
  }
  *param_2 = bVar1;
  DAT_fffec522 = param_1;
  DAT_fffec521 = cVar2;
  DAT_fffec520 = bVar1;
  return;
}

