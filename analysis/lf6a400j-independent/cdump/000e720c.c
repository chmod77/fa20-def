
void FUN_000e720c(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = '\0';
  if (param_4 == '\0') {
    cVar2 = DAT_fffed3b0;
  }
  if ((param_2 != '\0') || (param_3 != '\0')) {
    cVar2 = '\x01';
  }
  uVar1 = 0;
  if ((param_1 != '\0') && (cVar2 != '\0')) {
    uVar1 = 1;
  }
  *param_5 = uVar1;
  DAT_fffed3b0 = cVar2;
  return;
}

