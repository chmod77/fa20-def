
void FUN_0015a772(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2bfb | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff2bfb & 0x7f;
  }
  DAT_ffff2bfb = bVar1;
  return;
}

