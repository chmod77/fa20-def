
void FUN_0003e902(void)

{
  undefined4 uVar1;
  
  DAT_fffee6b5 = FUN_0016bd28(DAT_fffee6b5 - 1);
  if (((int)DAT_fffef711 & 0x80U) == 0) {
    if (((DAT_fffee693 & 8) == 0) || (DAT_fffee6b5 == '\0')) {
      uVar1 = FUN_00001550(0xf0);
LAB_0003e960:
      DAT_ffff6570 = DAT_ffff6570 & 0xfd;
      goto LAB_0003e968;
    }
    uVar1 = FUN_00001550(0xf0);
  }
  else {
    uVar1 = FUN_00001550(0xf0);
    if (((int)DAT_fffef712 & 0x80U) == 0) goto LAB_0003e960;
  }
  DAT_ffff6570 = DAT_ffff6570 | 2;
LAB_0003e968:
  FUN_00001550(uVar1);
  return;
}

