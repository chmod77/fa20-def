
/* WARNING: Removing unreachable block (ram,0x00141ee8) */
/* WARNING: Removing unreachable block (ram,0x001425c2) */

uint FUN_00141ebc(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff8dac;
  if (((uVar1 & 0x40) != 0) && (0x12 < DAT_ffff1df8)) {
    FUN_00142508();
    uVar1 = 2;
  }
  return uVar1;
}

