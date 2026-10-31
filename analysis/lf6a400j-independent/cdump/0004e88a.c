
void FUN_0004e88a(void)

{
  byte bVar1;
  undefined4 uVar2;
  
  if (DAT_ffff3694 == 'Z') {
    uVar2 = FUN_00001550();
    bVar1 = DAT_ffff0568 & 1;
joined_r0x0004e8c0:
    if (bVar1 == 0) {
      DAT_fffef330 = DAT_fffef330 & 0xbf;
      goto LAB_0004e8d4;
    }
  }
  else {
    uVar2 = FUN_00001550(0x70);
    if ((DAT_ffff0568 & 1) == 0) {
      bVar1 = DAT_fffef09e & 0x10;
      goto joined_r0x0004e8c0;
    }
  }
  DAT_fffef330 = DAT_fffef330 | 0x40;
LAB_0004e8d4:
  FUN_00001550(uVar2);
  return;
}

