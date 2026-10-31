
/* WARNING: Removing unreachable block (ram,0x00041886) */
/* WARNING: Removing unreachable block (ram,0x00041892) */
/* WARNING: Removing unreachable block (ram,0x000418a0) */
/* WARNING: Removing unreachable block (ram,0x00041974) */
/* WARNING: Removing unreachable block (ram,0x00041980) */
/* WARNING: Removing unreachable block (ram,0x0004198e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00041842(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef9c;
  if ((((uVar1 == 3) && (uVar1 = DAT_fffeef98 >> 2 & 7, uVar1 == 4)) &&
      (uVar1 = (uint)DAT_fffef3e8, (uVar1 & 0x80) != 0)) && (DAT_fffefebf == '\0')) {
    DAT_fffefebe = 1;
    uVar1 = (int)(char)(DAT_fffefeba & 0x7f) & 0xbf;
    DAT_fffefeba = (byte)uVar1;
    DAT_fffefec2 = 1;
  }
  _DAT_fffefec0 = 0;
  _DAT_fffefebc = 0;
  return uVar1;
}

