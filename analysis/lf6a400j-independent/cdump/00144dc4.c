
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144dc4(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 0x800) == 0;
  if (bVar1) {
    DAT_ffff1e26 = DAT_ffff1e26 & 0xfb;
  }
  else {
    DAT_ffff1e26 = DAT_ffff1e26 | 4;
  }
  bVar2 = DAT_ffff1e26 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e26 & 0xfd;
  }
  DAT_ffff1e26 = bVar2;
  bVar2 = DAT_ffff1e27 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e27 & 0xfd;
  }
  DAT_ffff1e27 = bVar2;
  return;
}

