
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005e98a(void)

{
  uint uVar1;
  
  if (599 < _DAT_fffef3c2) {
    DAT_fffef47c = DAT_fffef47c | 1;
  }
  if (299 < _DAT_fffef3c4) {
    DAT_fffef47c = DAT_fffef47c | 2;
  }
  if (0x1d < _DAT_fffef3c6) {
    DAT_fffef47c = DAT_fffef47c | 4;
  }
  uVar1 = (uint)(char)DAT_fffef47c;
  if ((((uVar1 & 1) != 0) && (uVar1 = (uint)(char)DAT_fffef47c, (uVar1 & 2) != 0)) &&
     (uVar1 = (uint)(char)DAT_fffef47c, (uVar1 & 4) != 0)) {
    uVar1 = (int)DAT_fffef3c0 | 1;
    DAT_fffef3c0 = (char)uVar1;
  }
  return uVar1;
}

