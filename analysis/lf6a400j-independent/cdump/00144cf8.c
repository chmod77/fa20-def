
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00144cf8(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff74e & 0x40) != 0;
  if (bVar1) {
    DAT_ffff1e1e = DAT_ffff1e1e & 0xfb;
  }
  else {
    DAT_ffff1e1e = DAT_ffff1e1e | 4;
  }
  bVar2 = DAT_ffff1e1e | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e1e & 0xfd;
  }
  DAT_ffff1e1e = bVar2;
  bVar2 = DAT_ffff1e1f | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e1f & 0xfd;
  }
  DAT_ffff1e1f = bVar2;
  return;
}

