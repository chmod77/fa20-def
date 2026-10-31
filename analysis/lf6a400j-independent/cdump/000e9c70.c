
void FUN_000e9c70(char param_1,char param_2,char param_3,ushort param_4,char param_5,char param_6,
                 undefined1 *param_7)

{
  undefined1 uVar1;
  
  if ((DAT_fffed468 == '\0') && (param_1 != '\0')) {
    uVar1 = 1;
  }
  else if (param_2 == '\0') {
    if ((((param_3 == '\0') || (param_4 < 0xf01)) || (param_1 != '\0')) || (param_5 != '\0')) {
      if ((param_1 == '\0') || (param_3 == '\0')) {
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
  if (param_6 == '\0') {
    *param_7 = uVar1;
  }
  else {
    *param_7 = 0;
  }
  DAT_fffed468 = param_1;
  return;
}

