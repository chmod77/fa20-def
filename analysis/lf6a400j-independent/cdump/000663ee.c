
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000663ee(void)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  if ((0x37 < _DAT_ffff008e) && (uVar2 = 0xfffff000, _DAT_ffff008e < 0x82)) {
    iVar1 = __udiv32_r1_by_r0((_DAT_ffff008e - 0x37) * 0xf000,0x4b);
    uVar2 = FUN_00001540(iVar1);
  }
  _DAT_ffff020c = FUN_0016aeb4(&DAT_00019b68,uVar2,FUN_0016aeb4);
  _DAT_ffff020e = FUN_0016aeb4(&DAT_00019b48,uVar2,FUN_0016aeb4);
  return;
}

