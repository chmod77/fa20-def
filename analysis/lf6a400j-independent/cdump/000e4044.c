
void FUN_000e4044(char param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  if ((param_1 != '\0') || (cVar1 = '\x01', DAT_fffed2bd == '\0')) {
    cVar1 = DAT_fffed2bc;
  }
  *(bool *)param_3 = cVar1 == '\0';
  DAT_fffed2bd = param_1;
  DAT_fffed2bc = cVar1;
  return;
}

