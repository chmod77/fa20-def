
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001446b2(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 0x200) != 0;
  if (bVar1) {
    DAT_ffff1e06 = DAT_ffff1e06 & 0xfb;
  }
  else {
    DAT_ffff1e06 = DAT_ffff1e06 | 4;
  }
  bVar2 = DAT_ffff1e06 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e06 & 0xfd;
  }
  DAT_ffff1e06 = bVar2;
  bVar2 = DAT_ffff1e07 | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e07 & 0xfd;
  }
  DAT_ffff1e07 = bVar2;
  return;
}

