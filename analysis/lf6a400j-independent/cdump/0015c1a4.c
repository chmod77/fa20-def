
uint FUN_0015c1a4(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = (uint)DAT_ffff20ce;
  if ((uVar1 & 4) != 0) {
    iVar2 = (int)((int)DAT_ffff20c5 & 0xc0U) >> 6;
    if (DAT_ffff20e1 == '\0') {
      if (iVar2 == 0) {
        uVar1 = FUN_0015c242(0,(int)DAT_ffff20c5,&DAT_ffff20e4);
        if ((uVar1 & 0xff) == 0) {
          return uVar1;
        }
        uVar1 = (int)(char)(DAT_ffff20e2 | 2) | 8;
        DAT_ffff20d8 = DAT_ffff20e4;
        DAT_ffff20e1 = 1;
        DAT_ffff20e2 = (char)uVar1;
        return uVar1;
      }
    }
    else if (iVar2 == 1) {
      uVar1 = FUN_0015c242((int)DAT_ffff20e1,(int)DAT_ffff20c5,&DAT_ffff20e5);
      if ((uVar1 & 0xff) == 0) {
        return uVar1;
      }
      uVar1 = (uint)(char)DAT_ffff20e2;
      if ((uVar1 & 4) != 0) {
        uVar1 = (int)(char)(DAT_ffff20e2 | 1) & 0xfb;
        DAT_ffff20e2 = (byte)uVar1;
      }
      DAT_ffff20e1 = 0;
      DAT_ffff20e3 = DAT_ffff20e5;
      return uVar1;
    }
    DAT_ffff20e1 = '\0';
    uVar1 = (int)(char)DAT_ffff20e2 & 0xef;
    DAT_ffff20e2 = (byte)uVar1;
  }
  return uVar1;
}

