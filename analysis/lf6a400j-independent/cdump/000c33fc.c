
void FUN_000c33fc(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != '\0') && (param_2 != '\0')) {
    *param_3 = 3;
    return;
  }
  if ((param_1 == '\0') && (param_2 != '\0')) {
    *param_3 = 2;
    return;
  }
  uVar1 = 0;
  if ((param_1 != '\0') && (param_2 == '\0')) {
    uVar1 = 1;
  }
  *param_3 = uVar1;
  return;
}

