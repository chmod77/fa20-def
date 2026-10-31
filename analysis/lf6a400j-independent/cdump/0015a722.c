
void FUN_0015a722(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff1e54 | 0x80;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff1e54 & 0x7f;
  }
  DAT_ffff1e54 = bVar1;
  return;
}

