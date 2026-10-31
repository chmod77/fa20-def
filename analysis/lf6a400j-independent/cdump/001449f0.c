
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001449f0(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 0x400) != 0;
  if (bVar1) {
    DAT_ffff1e24 = DAT_ffff1e24 & 0xfb;
  }
  else {
    DAT_ffff1e24 = DAT_ffff1e24 | 4;
  }
  bVar2 = DAT_ffff1e24 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e24 & 0xfd;
  }
  DAT_ffff1e24 = bVar2;
  bVar2 = DAT_ffff1e25 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e25 & 0xfd;
  }
  DAT_ffff1e25 = bVar2;
  return;
}

