
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c5b0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  int extraout_r2;
  
  uVar1 = FUN_0016bd78(param_1,1000);
  iVar2 = __sdiv32_r1_by_r0((uVar1 & 0xffff) << 10,1000);
  if (iVar2 < extraout_r2 + 0x18) {
    uVar1 = FUN_0016bd78(param_1,1000);
    uVar1 = __sdiv32_r1_by_r0((uVar1 & 0xffff) << 10,1000);
  }
  else {
    uVar1 = 0x400;
  }
  _DAT_fffff594 = (short)((uint)_DAT_fffff58c * (uVar1 & 0xffff) >> 10);
  return;
}

