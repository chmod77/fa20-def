
uint FUN_00005a1c(void)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_00005278();
  if (iVar1 == 3) {
    uVar2 = (int)(char)(DAT_ffff8dae | 0x40) & 0x7f;
    DAT_ffff8dae = (byte)uVar2;
  }
  else {
    uVar2 = (int)(char)(DAT_ffff8dae & 0xbf) | 0x80;
    DAT_ffff8dae = (byte)uVar2;
  }
  return uVar2;
}

