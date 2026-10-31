
void FUN_001426ec(uint param_1)

{
  byte bVar1;
  
  bVar1 = DAT_ffff2b64 | 0x40;
  if ((param_1 & 1) == 0) {
    bVar1 = DAT_ffff2b64 & 0xbf;
  }
  DAT_ffff2b64 = bVar1;
  return;
}

