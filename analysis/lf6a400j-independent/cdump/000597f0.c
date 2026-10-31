
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000597f0(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (uint)DAT_fffef25b;
  if ((uVar1 & 0x40) == 0) {
    _DAT_fffef26c = 0;
  }
  else {
    uVar3 = (uint)_DAT_fffef262 * 0x7d + (uint)_DAT_fffef266 * -0x2000;
    if ((int)uVar3 < 1) {
      _DAT_fffef26c = 0;
    }
    else {
      iVar2 = __udiv32_r1_by_r0(((uVar3 & 0x1fff) * 0x2828 >> 0xd) + (uVar3 >> 0xd) * 0x2828,100);
      uVar1 = FUN_00001540(iVar2);
      _DAT_fffef26c = (undefined2)uVar1;
    }
    uVar3 = (uint)_DAT_fffef264 * 0x7d + (uint)_DAT_fffef268 * -0x2000;
    if (0 < (int)uVar3) {
      iVar2 = __udiv32_r1_by_r0(((uVar3 & 0x1fff) * 0x2828 >> 0xd) + (uVar3 >> 0xd) * 0x2828,100);
      uVar1 = FUN_00001540(iVar2);
      _DAT_fffef26e = (short)uVar1;
      return uVar1;
    }
  }
  _DAT_fffef26e = 0;
  return uVar1;
}

