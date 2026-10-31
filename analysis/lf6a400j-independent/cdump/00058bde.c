
uint FUN_00058bde(char param_1,char param_2)

{
  uint uVar1;
  
  if ((param_1 == '\0') ||
     (((param_2 != '\0' && (DAT_fffef31f < 0x33)) || (((int)DAT_fffef51c & 0x80U) != 0)))) {
    uVar1 = (int)DAT_fffef371 & 0xfd;
    DAT_fffef371 = (char)uVar1;
  }
  else {
    uVar1 = (int)DAT_fffef371 | 2;
    DAT_fffef371 = (char)uVar1;
  }
  if (param_2 == '\0') {
    DAT_fffef31f = 0;
  }
  else {
    uVar1 = FUN_0000152c(DAT_fffef31f + 1);
    DAT_fffef31f = (byte)uVar1;
  }
  return uVar1;
}

