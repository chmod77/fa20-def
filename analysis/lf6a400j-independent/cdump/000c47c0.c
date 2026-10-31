
void FUN_000c47c0(char *param_1)

{
  char cVar1;
  char cVar2;
  
  cVar2 = '\0';
  if ((DAT_fffecadd != '\x04') && (cVar2 = -1, DAT_fffecadd != -1)) {
    cVar2 = DAT_fffecadd + '\x01';
  }
  cVar1 = '\0';
  if ((DAT_fffecadc != -1) && (cVar1 = -1, DAT_fffecadc != -1)) {
    cVar1 = DAT_fffecadc + '\x01';
  }
  if (cVar2 != '\0') {
    cVar1 = DAT_fffecadc;
  }
  *param_1 = cVar1;
  DAT_fffecadd = cVar2;
  DAT_fffecadc = cVar1;
  return;
}

