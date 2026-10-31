
void FUN_000931d4(char param_1,char param_2,undefined1 *param_3)

{
  undefined1 uVar1;
  
  if ((param_1 != '\x03') || (uVar1 = 1, param_2 == '\0')) {
    uVar1 = DAT_fffebe68;
  }
  if (param_1 != '\x03') {
    uVar1 = 0;
  }
  *param_3 = uVar1;
  DAT_fffebe68 = uVar1;
  return;
}

