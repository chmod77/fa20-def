
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004689c(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffef53d;
  if ((uVar1 & 4) == 0) {
    DAT_fffef53c = 0;
    _DAT_ffff3542 = 0;
    FUN_001403b4(0x21,1);
    uVar1 = (int)DAT_fffef53d | 4;
    DAT_fffef53d = (char)uVar1;
  }
  return uVar1;
}

