
void FUN_00084acc(char param_1,ushort param_2,undefined1 *param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  
  if (DAT_fffebb48 == '\0') {
    uVar1 = 0x5000;
  }
  else {
    uVar1 = 0x4600;
  }
  DAT_fffebb48 = uVar1 <= param_2;
  uVar2 = 0;
  if ((param_1 != '\0') && ((bool)DAT_fffebb48)) {
    uVar2 = 1;
  }
  *param_3 = uVar2;
  return;
}

