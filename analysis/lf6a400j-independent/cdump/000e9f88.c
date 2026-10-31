
void FUN_000e9f88(char param_1,ushort param_2,undefined4 param_3,char param_4,undefined1 *param_5)

{
  undefined1 uVar1;
  
  if ((DAT_fffed47c == '\0') && (param_1 != '\0')) {
    uVar1 = 1;
  }
  else if ((param_1 == '\0') && (0x36ff < param_2)) {
    uVar1 = 2;
  }
  else {
    uVar1 = 0;
  }
  if (param_4 == '\0') {
    *param_5 = uVar1;
  }
  else {
    *param_5 = 0;
  }
  DAT_fffed47c = param_1;
  return;
}

