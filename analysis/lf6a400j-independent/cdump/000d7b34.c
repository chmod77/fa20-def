
void FUN_000d7b34(char param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 == '\0') {
    cVar1 = -1;
    if (DAT_fffecf38 != -1) {
      cVar1 = DAT_fffecf38 + '\x01';
    }
  }
  *param_2 = cVar1;
  DAT_fffecf38 = cVar1;
  return;
}

