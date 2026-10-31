
void FUN_00084b1c(char param_1,char param_2,char param_3,char param_4,char param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (((param_2 == '\0') && ((param_1 != '\0' || (param_3 != '\0')))) &&
     ((param_5 != '\0' || ((param_4 == '\x05' || (param_4 == '\a')))))) {
    uVar1 = 1;
  }
  *param_6 = uVar1;
  return;
}

