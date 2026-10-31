
void thunk_FUN_0004bf44(void)

{
  undefined2 uVar1;
  
  uVar1 = FUN_00001550(0x70);
  DAT_fffeeeae = FUN_0016bd28(DAT_fffeeeae - 1);
  DAT_fffeeeaf = FUN_0016bd28(DAT_fffeeeaf - 1);
  if ((((DAT_fffff022 & 4) == 0) && (DAT_fffeeeae == '\0')) && ((DAT_fffeeea8 & 1) == 0)) {
    FUN_0004b61c();
  }
  FUN_00001550(uVar1);
  if (((int)(char)DAT_fffeeea8 & 0x80U) != 0) {
    DAT_fffeeea8 = DAT_fffeeea8 & 0x4f;
    FUN_0004b564();
  }
  if (((DAT_fffeeea8 & 0x40) != 0) && ((DAT_fffff022 & 4) == 0)) {
    if ((DAT_fffeeea8 & 2) == 0) {
      FUN_0004b658();
      FUN_0004b7ec();
      FUN_0004b974();
      FUN_0004bab8();
      FUN_0004bb40();
    }
    if ((DAT_fffeeeaf == '\0') && ((DAT_fffeeea8 & 0x10) == 0)) {
      FUN_0004b528();
    }
  }
  FUN_0004bc00();
  return;
}

