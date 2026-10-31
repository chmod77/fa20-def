
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144720(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 4) != 0;
  if (bVar1) {
    DAT_ffff1e08 = DAT_ffff1e08 & 0xfb;
  }
  else {
    DAT_ffff1e08 = DAT_ffff1e08 | 4;
  }
  bVar2 = DAT_ffff1e08 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e08 & 0xfd;
  }
  DAT_ffff1e08 = bVar2;
  bVar2 = DAT_ffff1e09 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e09 & 0xfd;
  }
  DAT_ffff1e09 = bVar2;
  return;
}

