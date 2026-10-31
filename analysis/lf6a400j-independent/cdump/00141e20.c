
/* WARNING: Removing unreachable block (ram,0x00141e76) */
/* WARNING: Removing unreachable block (ram,0x0014247c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00141e20(void)

{
  uint uVar1;
  
  if ((_DAT_fffff75e & 0x10) == 0) {
    DAT_ffff8dac = DAT_ffff8dac & 0x7f;
  }
  else {
    DAT_ffff8dac = DAT_ffff8dac | 0x80;
  }
  if (((int)DAT_ffff8daf & 0x80U) != 0) {
    DAT_ffff1df8 = FUN_0000152c(DAT_ffff1df8 + 1);
  }
  FUN_001421a0();
  uVar1 = (uint)(char)DAT_ffff8dac;
  if ((uVar1 & 0x40) != 0) {
    FUN_00142414();
    uVar1 = 2;
  }
  return uVar1;
}

