
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144782(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff72c & 0x8000) != 0;
  if (bVar1) {
    DAT_ffff1e0a = DAT_ffff1e0a & 0xfb;
  }
  else {
    DAT_ffff1e0a = DAT_ffff1e0a | 4;
  }
  bVar2 = DAT_ffff1e0a | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e0a & 0xfd;
  }
  DAT_ffff1e0a = bVar2;
  bVar2 = DAT_ffff1e0b | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e0b & 0xfd;
  }
  DAT_ffff1e0b = bVar2;
  return;
}

