
void FUN_0009efe8(char param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = '\0';
  if (param_1 == '\0') {
    cVar1 = -1;
    if (DAT_fffec0ec != -1) {
      cVar1 = DAT_fffec0ec + '\x01';
    }
  }
  *param_2 = cVar1;
  DAT_fffec0ec = cVar1;
  return;
}

