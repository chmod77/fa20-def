
uint FUN_00005a4a(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_0000528e();
  if (iVar1 == 3) {
    uVar2 = (int)(char)(DAT_ffff8daf | 0x40) & 0x7f;
    DAT_ffff8daf = (byte)uVar2;
  }
  else {
    uVar2 = (int)(char)(DAT_ffff8daf & 0xbf) | 0x80;
    DAT_ffff8daf = (byte)uVar2;
  }
  return uVar2;
}

