
int FUN_00052306(void)

{
  int iVar1;
  
  iVar1 = (int)DAT_fffeef9c;
  if (iVar1 == 8) {
    if (((DAT_fffeef99 & 0x40) != 0) && (6 < DAT_fffef162)) {
      DAT_fffeef9c = '\t';
      DAT_fffeef9a = DAT_fffeef9a | 0x20;
    }
    iVar1 = FUN_0000152c(DAT_fffef162 + 1);
    DAT_fffef162 = (byte)iVar1;
  }
  else {
    DAT_fffef162 = 0;
  }
  return iVar1;
}

