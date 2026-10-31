
uint FUN_00050ff0(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_fffef04e;
  uVar2 = (int)DAT_fffef04e | 0x80;
  DAT_fffef04e = (char)uVar2;
  if ((((uVar1 & 0x80) != 0) && (uVar2 = (uint)DAT_fffef02a, (uVar2 & 2) != 0)) &&
     (uVar2 = (uint)DAT_fffef02a, (uVar2 & 1) != 0)) {
    return uVar2;
  }
  DAT_fffef02a = 0;
  DAT_fffeef9b = 0x80;
  return uVar2;
}

