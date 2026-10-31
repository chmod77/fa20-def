
void FUN_000d52ec(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (param_3 == '\0') {
    uVar1 = DAT_fffeceb8;
  }
  if ((param_1 != '\0') || (param_2 != '\0')) {
    uVar1 = 1;
  }
  *param_4 = uVar1;
  DAT_fffeceb8 = uVar1;
  return;
}

