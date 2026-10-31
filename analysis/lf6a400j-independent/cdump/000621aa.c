
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000621aa(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  
  if (((int)DAT_fffef63a & 1U) == 0) {
    DAT_fffef5d3 = 0;
    uVar1 = (int)DAT_fffef63a;
    uVar3 = 0;
    for (bVar4 = 0; bVar4 < 10; bVar4 = bVar4 + 1) {
      *(undefined2 *)(uVar3 - 0x10a02) = 0;
      uVar1 = uVar3;
      uVar3 = uVar3 + 2;
    }
  }
  else {
    uVar1 = (uint)DAT_ffff29d3;
    if (uVar1 == 2) {
      if (DAT_fffef5d0 < 10) {
        uVar2 = FUN_0016b5ec((uint)_DAT_fffef478 - (uint)_DAT_fffef476);
        uVar1 = (uint)DAT_fffef5d0 * 2;
        *(undefined2 *)(uVar1 - 0x10a02) = uVar2;
      }
      DAT_fffef5d3 = 1;
    }
  }
  return uVar1;
}

