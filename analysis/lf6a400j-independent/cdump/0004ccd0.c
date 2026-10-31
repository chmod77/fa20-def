
void FUN_0004ccd0(void)

{
  undefined4 uVar1;
  
  if (((DAT_fffeeebb & 1) == 0) &&
     (((((DAT_fffeeebd & 1) == 0 || ((DAT_fffeeebc & 1) == 0)) || ((DAT_fffef32e & 0x20) != 0)) ||
      ((DAT_fffef32e & 0x40) != 0)))) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeebf = DAT_fffeeebf & 0xfe;
  }
  else {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeebf = DAT_fffeeebf | 1;
  }
  FUN_00001550(uVar1);
  return;
}

