
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015b1ac(void)

{
  uint uVar1;
  
  uVar1 = (uint)DAT_ffff3649;
  if ((uVar1 & 0x80) != 0) {
    uVar1 = FUN_001446f6();
    if (uVar1 == 0) {
      _DAT_ffff20b2 = 0x8000;
    }
    else {
      _DAT_ffff20b2 = 0x4ccc;
    }
  }
  return uVar1;
}

