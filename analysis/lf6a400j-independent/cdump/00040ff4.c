
/* WARNING: Removing unreachable block (ram,0x0004101e) */
/* WARNING: Removing unreachable block (ram,0x0004102a) */
/* WARNING: Removing unreachable block (ram,0x00041038) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00040ff4(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if ((((uVar1 & 4) != 0) && (DAT_ffff08ec == '\0')) && (299 < _DAT_fffeef10)) {
    uVar1 = (int)DAT_fffef8a3 & 0xfe;
    DAT_fffef8a3 = (char)uVar1;
    DAT_fffef943 = 1;
  }
  DAT_fffef955 = 0;
  return uVar1;
}

