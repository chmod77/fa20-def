
void FUN_001493f2(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff1f98 | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff1f98 & 0x7f;
  }
  DAT_ffff1f98 = bVar1;
  return;
}

