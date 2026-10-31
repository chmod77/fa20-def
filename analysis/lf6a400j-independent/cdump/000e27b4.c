
void FUN_000e27b4(char param_1,char param_2,ushort param_3,undefined1 *param_4)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffed268 == '\0') {
    uVar1 = 0x6e00;
  }
  else {
    uVar1 = 0x6180;
  }
  uVar2 = 0;
  if (((param_1 != '\0') && (param_2 != '\0')) && (uVar1 <= param_3)) {
    uVar2 = 1;
  }
  *param_4 = uVar2;
  DAT_fffed268 = uVar1 <= param_3;
  return;
}

