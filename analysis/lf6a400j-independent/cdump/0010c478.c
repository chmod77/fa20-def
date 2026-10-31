
void FUN_0010c478(char param_1,char param_2,char param_3,char *param_4,char *param_5)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = false;
  if ((param_1 != '\0') && (DAT_fffedcc0 == '\0')) {
    bVar1 = true;
  }
  if (bVar1) {
    cVar2 = -2;
    if (param_3 != -1) {
      cVar2 = param_3;
    }
    param_3 = -1;
    if ((char)(cVar2 + '\x01') != -1) {
      param_3 = cVar2 + '\x01';
    }
  }
  if (param_2 == '\0') {
    *param_4 = param_3;
  }
  else {
    *param_4 = '\0';
  }
  cVar2 = '\x01';
  if (!bVar1) {
    cVar2 = DAT_fffedcc0;
  }
  if (param_2 != '\0') {
    cVar2 = '\0';
  }
  *param_5 = cVar2;
  DAT_fffedcc0 = cVar2;
  return;
}

