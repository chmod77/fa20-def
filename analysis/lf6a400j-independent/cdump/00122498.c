
void FUN_00122498(char param_1,char param_2,char param_3,char param_4,byte param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if ((((param_1 != '\0') || (param_2 != '\0')) || (param_3 != '\0')) &&
     ((param_4 != '\0' && (0x4a < param_5)))) {
    uVar1 = 1;
  }
  *param_6 = uVar1;
  return;
}

