
void FUN_000d0b44(uint param_1,char *param_2)

{
  short sVar1;
  
  sVar1 = (short)((short)((short)((int)(param_1 & 0xffff) >> 1) + -0x5587) * 0x3bdd >> 0x12);
  if (sVar1 < 0xc0) {
    if (sVar1 < -0x40) {
      *param_2 = '\0';
    }
    else {
      *param_2 = (char)sVar1 + '@';
    }
  }
  else {
    *param_2 = -1;
  }
  return;
}

