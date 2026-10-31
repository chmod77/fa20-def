
void FUN_000a3738(uint param_1,uint param_2,char *param_3)

{
  short sVar1;
  
  sVar1 = (short)(((param_1 & 0xffff) + (param_2 & 0xffff)) * 0xb4 >> 0x10) + -0x8a;
  if (sVar1 < 0x80) {
    if (sVar1 < -0x80) {
      *param_3 = '\0';
    }
    else {
      *param_3 = (char)sVar1 + -0x80;
    }
  }
  else {
    *param_3 = -1;
  }
  return;
}

