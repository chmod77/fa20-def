
int FUN_0003e0b4(void)

{
  int iVar1;
  
  iVar1 = (int)DAT_ffff2aeb;
  if ((iVar1 == 2) && (DAT_ffff2aed != 0)) {
    iVar1 = __sdiv32_r1_by_r0(1000,(uint)DAT_ffff2aed);
    iVar1 = FUN_0000152c(iVar1);
    DAT_ffff2aec = (undefined1)iVar1;
    if (DAT_ffff2aed <= DAT_ffff2aef) {
      DAT_ffff2aee = 1;
      DAT_ffff2aef = 1;
      return iVar1;
    }
    DAT_ffff2aef = DAT_ffff2aef + 1;
  }
  else {
    DAT_ffff2aef = '\0';
  }
  DAT_ffff2aee = 0;
  return iVar1;
}

