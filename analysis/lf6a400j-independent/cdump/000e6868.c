
void FUN_000e6868(char param_1,char param_2,byte param_3,ushort param_4,byte param_5,ushort param_6,
                 ushort param_7,byte param_8,char param_9,undefined1 *param_10)

{
  undefined1 uVar1;
  
  if (((((param_4 < 0x28) || (param_5 < 0x7d)) || (0x1dff < param_6)) ||
      ((param_7 < 0x4800 || (param_8 < 0xfa)))) ||
     ((param_1 != '\0' || (uVar1 = 1, param_2 == '\0')))) {
    uVar1 = DAT_fffed360;
  }
  if (((param_1 != '\0') || (param_2 == '\0')) || (param_3 < DAT_fffed361)) {
    uVar1 = 0;
  }
  if (param_9 != '\0') {
    uVar1 = 0;
  }
  *param_10 = uVar1;
  DAT_fffed361 = param_3;
  DAT_fffed360 = uVar1;
  return;
}

