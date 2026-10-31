
void FUN_0007f874(char param_1,char param_2,char param_3,char param_4,undefined1 param_5,
                 char param_6,char param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  
  if (param_2 == '\0') {
    *param_8 = param_5;
  }
  else {
    uVar1 = 1;
    if (((param_1 != '\0') && ((param_6 == '\0' || (param_4 == '\0')))) &&
       ((param_3 == '\0' || (param_7 == '\0')))) {
      uVar1 = 0;
    }
    *param_8 = uVar1;
  }
  return;
}

