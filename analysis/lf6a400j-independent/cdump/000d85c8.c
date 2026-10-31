
void FUN_000d85c8(char param_1,char param_2,char *param_3)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = DAT_fffecf60 != '\0';
  cVar2 = param_2;
  if (((!bVar1) && (param_1 == '\0')) && (cVar2 = '\0', param_2 != '\0')) {
    cVar2 = param_2 + -1;
  }
  if ((bVar1) || (param_1 == '\0')) {
    if ((bVar1) || (((param_1 != '\0' || (param_2 != '\0')) && (param_2 != '\0')))) {
      *param_3 = cVar2;
    }
    else {
      *param_3 = param_2;
    }
  }
  else {
    *param_3 = '\x03';
  }
  DAT_fffecf60 = 1;
  return;
}

