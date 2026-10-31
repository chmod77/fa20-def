
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0005915c(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)DAT_fffef25b;
  if ((uVar1 & 0x20) == 0) {
    _DAT_fffef280 = 0;
  }
  else {
    uVar3 = (uint)_DAT_fffef276 * 0x7d + (uint)_DAT_fffef27a * -0x2000;
    if ((int)uVar3 < 1) {
      _DAT_fffef280 = 0;
    }
    else {
      iVar2 = __udiv32_r1_by_r0(((uVar3 & 0x1fff) * 0x2828 >> 0xd) + (uVar3 >> 0xd) * 0x2828,100);
      uVar1 = FUN_00001540(iVar2);
      _DAT_fffef280 = (undefined2)uVar1;
    }
    uVar3 = (uint)_DAT_fffef278 * 0x7d + (uint)_DAT_fffef27c * -0x2000;
    if (0 < (int)uVar3) {
      iVar2 = __udiv32_r1_by_r0(((uVar3 & 0x1fff) * 0x2828 >> 0xd) + (uVar3 >> 0xd) * 0x2828,100);
      uVar1 = FUN_00001540(iVar2);
      _DAT_fffef282 = (short)uVar1;
      return uVar1;
    }
  }
  _DAT_fffef282 = 0;
  return uVar1;
}

