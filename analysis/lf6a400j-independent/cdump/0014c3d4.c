
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c3d4(undefined4 param_1)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  uVar1 = _DAT_fffff50a;
  uVar2 = FUN_0016bd78(param_1,0x9c4);
  iVar3 = __udiv32_r1_by_r0((uint)uVar1 * (uVar2 & 0xffff),0x9c4);
  _DAT_fffff512 = (short)iVar3;
  return;
}

