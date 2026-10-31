
void FUN_001198a4(char param_1,char param_2,ushort param_3,ushort param_4,ushort param_5,
                 undefined1 *param_6)

{
  undefined1 uVar1;
  
  if (((param_1 == '\0') || (param_4 != 0)) || (param_2 != -1)) {
    uVar1 = 0;
    if ((((param_1 != '\0') && (0x8b85 < param_3)) && ((0x9ff < param_4 && (99 < param_5)))) &&
       ((param_2 == -1 || (param_2 == -0x5b)))) {
      uVar1 = 1;
    }
    *param_6 = uVar1;
  }
  else {
    *param_6 = 0;
  }
  return;
}

