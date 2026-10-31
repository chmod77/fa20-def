
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014488e(void)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = (_DAT_fffff754 & 0x40) != 0;
  if (bVar1) {
    DAT_ffff1e0e = DAT_ffff1e0e & 0xfb;
  }
  else {
    DAT_ffff1e0e = DAT_ffff1e0e | 4;
  }
  bVar2 = DAT_ffff1e0e | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e0e & 0xfd;
  }
  DAT_ffff1e0e = bVar2;
  bVar2 = DAT_ffff1e0f | 2;
  if (bVar1) {
    bVar2 = DAT_ffff1e0f & 0xfd;
  }
  DAT_ffff1e0f = bVar2;
  return;
}

