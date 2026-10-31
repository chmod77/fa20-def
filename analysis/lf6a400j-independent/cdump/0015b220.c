
uint FUN_0015b220(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff2f48;
  if ((uVar1 & 0x80) == 0) {
    FUN_0015aeb8(&DAT_00007a12);
    DAT_ffff209c = DAT_ffff209c | 0x80;
    uVar1 = (int)DAT_ffff2f48 | 0x80;
    DAT_ffff2f48 = (char)uVar1;
  }
  return uVar1;
}

