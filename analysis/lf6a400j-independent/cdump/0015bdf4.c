
void FUN_0015bdf4(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff20d9 | 0x40;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff20d9 & 0xbf;
  }
  DAT_ffff20d9 = bVar1;
  return;
}

