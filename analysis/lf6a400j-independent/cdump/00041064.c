
/* WARNING: Removing unreachable block (ram,0x0004108e) */
/* WARNING: Removing unreachable block (ram,0x0004109a) */
/* WARNING: Removing unreachable block (ram,0x000410a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041064(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if ((((uVar1 & 4) != 0) && (DAT_ffff08ec == '\0')) && (299 < _DAT_fffeef10)) {
    uVar1 = (int)DAT_fffef8a3 & 0xfd;
    DAT_fffef8a3 = (char)uVar1;
    DAT_fffef944 = 1;
  }
  DAT_fffef956 = 0;
  return uVar1;
}

