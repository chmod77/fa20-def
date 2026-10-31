
void FUN_000d7adc(char param_1,char param_2,undefined4 param_3,char *param_4)

{
  char cVar1;
  
  cVar1 = DAT_fffecf35;
  if (param_1 != '\0') {
    cVar1 = '\0';
  }
  if (((param_2 != '\0') && (DAT_fffecf34 == '\0')) && (cVar1 = -1, DAT_fffecf35 != -1)) {
    cVar1 = DAT_fffecf35 + '\x01';
  }
  *param_4 = cVar1;
  DAT_fffecf35 = cVar1;
  DAT_fffecf34 = param_2;
  return;
}

