
void FUN_0005e8a8(void)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00001550(0xf0);
  if (((int)(char)DAT_fffeffcb & 0x80U) != 0) {
    if (((DAT_fffeffcb & 0x40) == 0) ||
       (((((DAT_ffff37ed & 1) == 0 && ((DAT_ffff371f & 1) == 0)) && ((DAT_ffff37ed & 2) == 0)) &&
        ((DAT_ffff371f & 2) == 0)))) {
      DAT_fffef37e = DAT_fffef37e & 0xfd;
    }
    else {
      DAT_fffef37e = DAT_fffef37e | 2;
    }
  }
  DAT_fffeffcb = DAT_fffeffcb & 0x3f;
  FUN_00001550(uVar1);
  return;
}

