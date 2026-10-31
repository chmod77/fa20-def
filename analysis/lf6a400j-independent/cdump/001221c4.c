
void FUN_001221c4(char param_1,char param_2,char param_3,char param_4,char param_5,byte param_6,
                 undefined1 *param_7)

{
  undefined1 uVar1;
  
  uVar1 = 0;
  if (((((param_1 != '\0') || (param_2 == '\x01')) || (param_3 != '\0')) || (param_4 != '\0')) &&
     ((param_5 != '\0' && (0x4a < param_6)))) {
    uVar1 = 1;
  }
  *param_7 = uVar1;
  return;
}

