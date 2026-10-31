
void FUN_0015a75e(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2bfb | 0x40;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff2bfb & 0xbf;
  }
  DAT_ffff2bfb = bVar1;
  return;
}

