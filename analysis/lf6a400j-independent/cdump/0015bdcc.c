
void FUN_0015bdcc(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff20d9 | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff20d9 & 0x7f;
  }
  DAT_ffff20d9 = bVar1;
  return;
}

