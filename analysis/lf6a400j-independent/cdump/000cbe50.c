
void FUN_000cbe50(char param_1,char param_2,char param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if (param_1 == '\0') {
    uVar1 = 0;
    if (((param_2 != '\0') && (param_3 != '\0')) && (param_4 != '\0')) {
      uVar1 = 1;
    }
    *param_5 = uVar1;
    return;
  }
  *param_5 = 0;
  return;
}

