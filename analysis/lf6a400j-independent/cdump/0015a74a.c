
void FUN_0015a74a(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2bfb | 0x20;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff2bfb & 0xdf;
  }
  DAT_ffff2bfb = bVar1;
  return;
}

