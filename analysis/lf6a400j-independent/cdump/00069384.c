
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00069384(void)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = (uint)DAT_ffff0006;
  if ((uVar1 & 2) != 0) {
    uVar1 = FUN_00001540(_DAT_ffff0350 + 1);
    _DAT_ffff0350 = (ushort)uVar1;
    if (7 < _DAT_ffff0350) {
      uVar2 = FUN_00001550(0xf0);
      DAT_fffef7b1 = DAT_fffef7b1 | 0x80;
      DAT_fffef7b2 = DAT_fffef7b2 | 0x80;
      DAT_fffef7b3 = DAT_fffef7b3 | 0x80;
      DAT_fffef7b4 = DAT_fffef7b4 | 0x80;
      DAT_fffef7b5 = DAT_fffef7b5 | 0x80;
      DAT_fffef7b6 = DAT_fffef7b6 | 0x80;
      DAT_fffef7b7 = DAT_fffef7b7 | 0x80;
      DAT_fffef7a9 = DAT_fffef7a9 | 0x80;
      DAT_fffef7aa = DAT_fffef7aa | 0x80;
      DAT_fffef7ab = DAT_fffef7ab | 0x80;
      DAT_fffef7ac = DAT_fffef7ac | 0x80;
      DAT_fffef7af = DAT_fffef7af | 0x80;
      DAT_fffef7a5 = DAT_fffef7a5 | 0x80;
      DAT_fffef7a6 = DAT_fffef7a6 | 0x80;
      DAT_fffef7a7 = DAT_fffef7a7 | 0x80;
      DAT_fffef18a = DAT_fffef18a | 4;
      uVar1 = FUN_00001550(uVar2);
      return uVar1;
    }
  }
  return uVar1;
}

