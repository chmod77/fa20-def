
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005deb2(void)

{
  uint uVar1;
  
  uVar1 = _DAT_fffef680;
  if (((_DAT_fffef680 & 1) != 0) && ((_DAT_fffef680 & 2) != 0)) {
    if (DAT_ffff313b == '\x01') {
      DAT_fffef6ce = 0;
      return 1;
    }
    uVar1 = (uint)DAT_ffff313b;
    if (uVar1 == 2) {
      DAT_fffef6ce = 1;
    }
  }
  return uVar1;
}

