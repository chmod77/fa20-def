
/* WARNING: Removing unreachable block (ram,0x0015b52e) */

uint FUN_0015b51c(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff20cd;
  if ((uVar1 & 0x80) == 0) {
    FUN_0015b548();
    uVar1 = (int)DAT_ffff20cd | 0x80;
    DAT_ffff20cd = (char)uVar1;
  }
  return uVar1;
}

