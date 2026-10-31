
void FUN_000e5bc8(char param_1,byte param_2,undefined4 param_3,char param_4,char param_5,
                 char param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  
  if (param_6 == '\0') {
    uVar1 = 0;
    if ((((param_1 != '\0') && (9 < param_2)) && (param_4 != '\0')) && (param_5 == '\0')) {
      uVar1 = 1;
    }
    *param_7 = uVar1;
  }
  else {
    *param_7 = 0;
  }
  return;
}

