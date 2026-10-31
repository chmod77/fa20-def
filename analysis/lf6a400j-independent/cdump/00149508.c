
void FUN_00149508(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff1fb6 | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff1fb6 & 0x7f;
  }
  DAT_ffff1fb6 = bVar1;
  return;
}

