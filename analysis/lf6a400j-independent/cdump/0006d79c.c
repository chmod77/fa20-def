
uint FUN_0006d79c(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeebc0;
  if ((((uVar1 == 0) && (uVar1 = (uint)DAT_fffeebc3, uVar1 == 0)) &&
      (uVar1 = (uint)DAT_fffeebc6, uVar1 == 0)) &&
     (((uVar1 = (uint)DAT_fffeebc9, uVar1 == 0 && (uVar1 = (uint)DAT_fffeebcc, uVar1 == 0)) &&
      ((uVar1 = 0x10, DAT_fffeebcf == '\0' && (uVar1 = 0x13, DAT_fffeebd2 == '\0')))))) {
    uVar1 = (int)DAT_fffeebb6 & 0xf7;
    DAT_fffeebb6 = (char)uVar1;
  }
  return uVar1;
}

