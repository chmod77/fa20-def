
void FUN_0015be08(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff20d9 | 0x20;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff20d9 & 0xdf;
  }
  DAT_ffff20d9 = bVar1;
  return;
}

