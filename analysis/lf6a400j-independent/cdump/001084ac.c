
void FUN_001084ac(char param_1,char param_2,undefined1 *param_3)

{
  bool bVar1;
  
  if (DAT_fffedb4c == '\0') {
    *param_3 = 1;
  }
  else {
    bVar1 = false;
    if ((param_1 != '\0') && (param_2 != '\0')) {
      bVar1 = true;
    }
    *param_3 = !bVar1;
  }
  DAT_fffedb4c = 1;
  return;
}

