
void FUN_0015bde0(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff20d9 | 0x10;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff20d9 & 0xef;
  }
  DAT_ffff20d9 = bVar1;
  return;
}

