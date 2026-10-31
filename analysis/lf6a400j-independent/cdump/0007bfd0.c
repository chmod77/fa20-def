
/* WARNING: Removing unreachable block (ram,0x0007bfe0) */
/* WARNING: Removing unreachable block (ram,0x0007bfec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0007bfd0(void)

{
  uint uVar1;
  
  if ((DAT_fffef4ed & 1) != 0) {
    uVar1 = (uint)(char)DAT_fffef054;
    if (((uVar1 & 0x10) != 0) && (uVar1 = (uint)DAT_fffeeec6, (uVar1 & 1) == 0)) {
      _DAT_ffff66b6 = 0x8105;
      uVar1 = (int)(char)DAT_fffef054 & 0xef;
      DAT_fffef054 = (byte)uVar1;
    }
    return uVar1;
  }
  DAT_fffef054 = DAT_fffef054 & 0xef;
  uVar1 = (uint)(char)DAT_fffef4ed;
  DAT_fffef4ed = (char)(uVar1 | 1);
  return uVar1 | 1;
}

