
void FUN_0015a736(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2bfb | 0x10;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff2bfb & 0xef;
  }
  DAT_ffff2bfb = bVar1;
  return;
}

