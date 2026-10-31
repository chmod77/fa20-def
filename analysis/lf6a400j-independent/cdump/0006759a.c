
uint FUN_0006759a(void)

{
  uint uVar1;
  
  if ((DAT_fffefff3 & 0x20) != 0) {
    DAT_ffff0080 = DAT_ffff0080 | 2;
  }
  uVar1 = (uint)(char)DAT_fffefff3;
  if ((uVar1 & 0x10) != 0) {
    uVar1 = (int)(char)DAT_ffff0080 | 1;
    DAT_ffff0080 = (byte)uVar1;
  }
  return uVar1;
}

