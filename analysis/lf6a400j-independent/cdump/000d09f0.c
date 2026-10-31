
void FUN_000d09f0(short param_1,char *param_2)

{
  short sVar1;
  
  sVar1 = (short)(param_1 * 0x4189 >> 0x11);
  if (sVar1 < 0x80) {
    if (sVar1 < -0x80) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)sVar1 + -0x80;
    }
  }
  else {
    *param_2 = -1;
  }
  return;
}

