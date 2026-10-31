
void FUN_000c2314(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  char cVar2;
  
  cVar2 = '\x15';
  if ((param_2 == '\0') && (cVar2 = '\0', DAT_fffec9e9 != '\0')) {
    cVar2 = DAT_fffec9e9 + -1;
  }
  if ((param_1 == '\0') || (cVar2 != '\0')) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
    if (((param_3 != '\x14') && (param_3 != '\x15')) && (DAT_fffec9e8 == '\0')) {
      uVar1 = 0;
    }
  }
  *param_4 = uVar1;
  DAT_fffec9e8 = uVar1;
  DAT_fffec9e9 = cVar2;
  return;
}

