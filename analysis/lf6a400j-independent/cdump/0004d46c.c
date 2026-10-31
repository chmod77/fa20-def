
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0004d46c(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)DAT_fffeeecc;
  if ((uVar1 & 1) != 0) {
    uVar2 = (uint)_DAT_fffeeef2 * (uint)_DAT_fffeeef0 >> 8;
    uVar1 = __udiv32_r1_by_r0((uint)_DAT_fffeeef6 * 100,100);
    if (uVar2 + uVar1 < 0xffff) {
      _DAT_fffeeef4 = (undefined2)(uVar2 + uVar1);
    }
    else {
      _DAT_fffeeef4 = 0xffff;
    }
  }
  return uVar1;
}

