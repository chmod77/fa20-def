
void FUN_000cc8a8(char param_1,char param_2,char param_3,char param_4,char *param_5)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = true;
  if (((param_1 == '\0') || (param_3 != '\x01')) && ((param_2 == '\0' || (param_4 != '\x01')))) {
    bVar1 = false;
  }
  cVar2 = DAT_fffecc25;
  if ((bVar1) && (DAT_fffecc24 = '\x01', cVar2 = DAT_fffecc24, DAT_fffecc25 != '\0')) {
    DAT_fffecc24 = DAT_fffecc25;
    cVar2 = DAT_fffecc25;
  }
  DAT_fffecc25 = cVar2;
  if (bVar1) {
    DAT_fffecc26 = DAT_fffecc24;
  }
  *param_5 = DAT_fffecc26;
  return;
}

