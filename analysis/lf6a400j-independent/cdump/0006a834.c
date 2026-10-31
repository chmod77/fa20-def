
uint FUN_0006a834(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeff5b;
  if (((uVar1 & 1) == 0) || (DAT_fffeff5d == '\0')) {
    if ((DAT_fffeff7f & 1) == 0) {
      if ((((int)DAT_fffef3b4 & 0x80U) != 0) && (((int)(char)DAT_fffeff7f & 1U) != 0)) {
        return (int)(char)DAT_fffeff7f;
      }
      uVar1 = (int)DAT_fffeff5b & 0xfe;
      DAT_fffeff5b = (char)uVar1;
    }
    else {
      uVar1 = (int)DAT_fffeff5b | 1;
      DAT_fffeff5b = (char)uVar1;
    }
    DAT_fffeff5d = '\x01';
  }
  return uVar1;
}

