
void FUN_000e00c0(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if (param_3 == '\0') {
    uVar1 = 1;
    if ((param_1 == '\0') && (param_2 == '\0')) {
      uVar1 = 0;
    }
    *param_4 = uVar1;
    return;
  }
  *param_4 = 0;
  return;
}

