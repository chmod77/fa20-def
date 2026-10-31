
void FUN_0010bfa4(short param_1,char *param_2)

{
  short sVar1;
  
  sVar1 = (short)((uint)(param_1 * 0xb) >> 8);
  if (sVar1 < 0x80) {
    if (sVar1 < -0x80) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)((uint)(param_1 * 0xb) >> 8) + -0x80;
    }
  }
  else {
    *param_2 = -1;
  }
  return;
}

