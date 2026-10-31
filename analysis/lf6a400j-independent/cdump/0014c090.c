
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c090(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0016bd78(param_1,0x683,param_3,FUN_0016bd78);
  iVar2 = __sdiv32_r1_by_r0((uVar1 & 0xffff) << 10,0x683);
  if (iVar2 < 0x400) {
    uVar1 = FUN_0016bd78(param_1,0x683);
    uVar1 = __sdiv32_r1_by_r0((uVar1 & 0xffff) << 10,0x683);
  }
  else {
    uVar1 = 0x400;
  }
  _DAT_fffff596 = (short)((uint)_DAT_fffff58e * (uVar1 & 0xffff) >> 10);
  return;
}

