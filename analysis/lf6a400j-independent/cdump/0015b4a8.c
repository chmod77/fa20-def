
/* WARNING: Removing unreachable block (ram,0x0015b4b4) */

uint FUN_0015b4a8(void)

{
  uint uVar1;
  
  if ((DAT_ffff20cc & 2) == 0) {
    if (DAT_ffff20d4 < 0x19) {
      DAT_ffff20d4 = DAT_ffff20d4 + 1;
    }
    else {
      FUN_0015b8fc();
    }
    uVar1 = (int)DAT_ffff0005 | 2;
    if ((DAT_ffff0006 & 2) == 0) {
      uVar1 = (int)DAT_ffff0005 & 0xfd;
    }
    DAT_ffff0005 = (char)uVar1;
    return uVar1;
  }
  uVar1 = FUN_0015b25c();
  return uVar1;
}

