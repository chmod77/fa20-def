
void FUN_000ce0d8(char param_1,ushort param_2,char param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  ushort uVar2;
  
  if (DAT_fffeccc4 == '\0') {
    uVar2 = 0x4b;
  }
  else {
    uVar2 = 0x32;
  }
  uVar1 = 1;
  if ((param_1 == '\0') && (param_3 != '\0' && uVar2 > param_2)) {
    uVar1 = 0;
  }
  *param_4 = uVar1;
  DAT_fffeccc4 = uVar2 <= param_2;
  return;
}

