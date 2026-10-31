
/* WARNING: Removing unreachable block (ram,0x0006be1a) */
/* WARNING: Removing unreachable block (ram,0x0006be22) */

void FUN_0006bdf6(void)

{
  if (DAT_ffff66b8 != -0x5b) {
    if (((int)DAT_fffef230 & 0x80U) != 0) {
      DAT_fffef82d = DAT_fffef82d | 0x40;
      return;
    }
    DAT_fffef82d = DAT_fffef82d & 0xbf;
  }
  return;
}

