
void FUN_000d52c4(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 == '\0') {
    uVar1 = DAT_fffeceb4;
  }
  if ((param_1 != '\0') || (param_2 != '\0')) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  DAT_fffeceb4 = uVar1;
  return;
}

