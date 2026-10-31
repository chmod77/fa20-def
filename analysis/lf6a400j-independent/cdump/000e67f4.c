
void FUN_000e67f4(char param_1,char param_2,byte param_3,byte param_4,ushort param_5,
                 undefined4 param_6,undefined1 *param_7)

{
  undefined1 uVar1;
  
  if (((((param_2 != '\0') || (param_1 == '\0')) || (param_3 == 0)) ||
      ((param_4 < 0x19 || (uVar1 = 1, param_5 < 0x1e00)))) &&
     ((uVar1 = 0, param_5 >= 0x1e00 && (DAT_fffed35c < param_3)))) {
    uVar1 = 1;
  }
  if ((param_1 == '\0') || (param_2 == '\0')) {
    *param_7 = uVar1;
  }
  else {
    *param_7 = 1;
  }
  DAT_fffed35c = param_3;
  return;
}

