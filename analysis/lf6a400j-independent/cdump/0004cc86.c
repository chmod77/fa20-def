
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004cc86(void)

{
  undefined4 uVar1;
  
  if (((DAT_fffef32e & 0x20) == 0) && ((DAT_fffef32e & 0x40) == 0)) {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec0 = DAT_fffeeec0 | 1;
  }
  else {
    uVar1 = FUN_00001550(0x70);
    DAT_fffeeec0 = DAT_fffeeec0 & 0xfe;
  }
  FUN_00001550(uVar1);
  return;
}

