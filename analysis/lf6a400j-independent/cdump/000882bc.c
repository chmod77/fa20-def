
void FUN_000882bc(char param_1,char param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  
  if (((param_3 == '\0') || (param_1 == '\0')) || (uVar1 = 1, param_2 != '\b')) {
    uVar1 = DAT_fffebc10;
  }
  if ((param_2 != '\b') && (param_1 == '\0')) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffebc10 = uVar1;
  return;
}

