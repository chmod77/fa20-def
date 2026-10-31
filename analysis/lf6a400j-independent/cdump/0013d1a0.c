
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0013d1a0(uint param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((0x1e < param_1) || ((_DAT_ffff2634 & *(uint *)(&DAT_0013dde0 + param_1 * 4)) != 0)) {
    uVar1 = 2;
  }
  return uVar1;
}

