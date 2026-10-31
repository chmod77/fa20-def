
void FUN_0015a70e(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff1e9f | 8;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff1e9f & 0xf7;
  }
  DAT_ffff1e9f = bVar1;
  return;
}

