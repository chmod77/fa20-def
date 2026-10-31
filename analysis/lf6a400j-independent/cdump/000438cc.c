
/* WARNING: Removing unreachable block (ram,0x000438ea) */
/* WARNING: Removing unreachable block (ram,0x000438f6) */
/* WARNING: Removing unreachable block (ram,0x000438fe) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000438cc(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef371;
  if (((uVar1 & 0x80) == 0) || (DAT_ffff08e5 != '\0')) {
    _DAT_fffef92e = 0;
  }
  else {
    if (0x18 < _DAT_fffef92e) {
      DAT_ffff3161 = DAT_ffff3161 | 2;
    }
    uVar1 = FUN_00001540(_DAT_fffef92e + 1);
    _DAT_fffef92e = (ushort)uVar1;
  }
  _DAT_fffef930 = 0;
  return uVar1;
}

