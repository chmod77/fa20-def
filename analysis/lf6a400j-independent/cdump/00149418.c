
void FUN_00149418(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff1fa0 | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff1fa0 & 0x7f;
  }
  DAT_ffff1fa0 = bVar1;
  return;
}

