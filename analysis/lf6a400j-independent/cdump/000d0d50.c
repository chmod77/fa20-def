
void FUN_000d0d50(char param_1,char *param_2)

{
  int iVar1;
  short sVar2;
  
  iVar1 = param_1 * 0x2d >> 5;
  sVar2 = (short)iVar1;
  if (sVar2 < 0x80) {
    if (sVar2 < -0x80) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)iVar1 + -0x80;
    }
  }
  else {
    *param_2 = -1;
  }
  return;
}

