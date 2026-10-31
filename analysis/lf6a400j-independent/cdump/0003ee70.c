
uint FUN_0003ee70(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_fffeef74;
  if ((uVar1 & 0x80) == 0) {
    uVar1 = FUN_0000152c(DAT_fffeef73 + 1);
    DAT_fffeef73 = (byte)uVar1;
  }
  else {
    DAT_fffeef73 = 0;
  }
  return uVar1;
}

