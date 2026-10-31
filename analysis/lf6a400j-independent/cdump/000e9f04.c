
void FUN_000e9f04(char param_1,char param_2,char param_3,ushort param_4,char param_5,
                 undefined4 param_6,char param_7,undefined1 *param_8)

{
  undefined1 uVar1;
  
  if ((DAT_fffed478 == '\0') && (param_1 != '\0')) {
    uVar1 = 1;
  }
  else if (param_2 == '\0') {
    if ((((param_3 == '\0') || (0x36ff < param_4)) || (param_1 != '\0')) || (param_5 != '\0')) {
      if ((param_3 == '\0') || (param_1 == '\0')) {
        uVar1 = 5;
      }
      else {
        uVar1 = 4;
      }
    }
    else {
      uVar1 = 3;
    }
  }
  else {
    uVar1 = 2;
  }
  if (param_7 == '\0') {
    *param_8 = uVar1;
  }
  else {
    *param_8 = 0;
  }
  DAT_fffed478 = param_1;
  return;
}

