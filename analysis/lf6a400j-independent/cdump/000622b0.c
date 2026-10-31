
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_000622b0(void)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  byte bVar4;
  
  uVar1 = (uint)DAT_fffef63a;
  if ((uVar1 & 1) == 0) {
    DAT_fffef5d4 = 0;
    uVar3 = 0;
    for (bVar4 = 0; bVar4 < 10; bVar4 = bVar4 + 1) {
      *(undefined2 *)(uVar3 - 0x109ee) = 0;
      uVar1 = uVar3;
      uVar3 = uVar3 + 2;
    }
  }
  else if (DAT_ffff29d3 == '\0') {
    if (DAT_fffef5d0 < 10) {
      uVar2 = FUN_0016b5ec((uint)_DAT_fffef474 - (uint)_DAT_fffef47a);
      uVar1 = (uint)DAT_fffef5d0 * 2;
      *(undefined2 *)(uVar1 - 0x109ee) = uVar2;
    }
    DAT_fffef5d4 = 1;
  }
  return uVar1;
}

