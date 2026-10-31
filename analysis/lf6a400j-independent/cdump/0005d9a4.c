
undefined4 FUN_0005d9a4(undefined1 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if ((DAT_fffef688 == '\x01') || (DAT_fffef688 == '\x02')) {
    uVar2 = 2;
  }
  else if (DAT_fffef688 == '\x03') {
    if (DAT_fffef6c2 == '\0') {
      uVar1 = (uint)DAT_fffef6c3;
      *param_1 = (&DAT_fffef6c2)[uVar1];
      if ((DAT_fffef6c4 == DAT_fffef6b0) && (uVar1 = uVar1 - 3, uVar1 == (param_3 & 0xff))) {
        FUN_0005de76(0xfffef6c5,param_2,uVar1,param_2,0xfffef6c5);
        uVar2 = 0;
      }
      else {
        FUN_0005de90(0x11);
      }
    }
  }
  else {
    FUN_0005de90(0xff);
  }
  return uVar2;
}

