
void FUN_0015a6fa(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff1e9f | 0x20;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff1e9f & 0xdf;
  }
  DAT_ffff1e9f = bVar1;
  return;
}

