
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00062212(void)

{
  uint uVar1;
  int a;
  
  uVar1 = (uint)DAT_fffef63a;
  if ((uVar1 & 1) == 0) {
    _DAT_fffef62c = 0;
  }
  else if (DAT_fffef5d0 == '\n') {
    a = 0;
    for (uVar1 = 0; (uVar1 & 0xff) < 10; uVar1 = (uVar1 & 0xff) + 1) {
      a = a + *(short *)((uVar1 & 0xff) * 2 + -0x109ee);
    }
    uVar1 = __sdiv32_r1_by_r0(a,10);
    _DAT_fffef62c = (undefined2)uVar1;
  }
  return uVar1;
}

