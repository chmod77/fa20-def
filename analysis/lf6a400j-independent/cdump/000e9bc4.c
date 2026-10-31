
void FUN_000e9bc4(char param_1,char param_2,char param_3,char param_4,char param_5,ushort param_6,
                 ushort param_7,undefined4 param_8,char param_9,char param_10,char param_11,
                 undefined1 *param_12)

{
  undefined1 uVar1;
  
  if ((DAT_fffed464 == '\0') && (param_1 != '\0')) {
    uVar1 = 1;
  }
  else if ((param_2 == '\0') || (((param_9 != '\0' || (param_10 == '\0')) || (param_3 != '\0')))) {
    uVar1 = 2;
  }
  else if ((param_4 == '\0') && (param_5 != '\0')) {
    uVar1 = 3;
  }
  else if (((param_5 == '\0') && ((0x7c < param_6 && (0x1800 < param_7)))) && (param_10 != '\0')) {
    uVar1 = 4;
  }
  else {
    uVar1 = 0;
  }
  if (param_11 == '\0') {
    *param_12 = uVar1;
  }
  else {
    *param_12 = 0;
  }
  DAT_fffed464 = param_1;
  return;
}

