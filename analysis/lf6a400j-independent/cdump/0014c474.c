
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c474(ushort param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  DAT_fffff400 = DAT_fffff400 & 0xfe;
  _DAT_fffff500 = param_1 - 1;
  _DAT_fffff508 = param_1;
  uVar1 = FUN_0016bd78(param_2,0x9c4);
  iVar2 = __udiv32_r1_by_r0((uint)param_1 * (uVar1 & 0xffff),0x9c4);
  _DAT_fffff510 = (short)iVar2;
  DAT_fffff400 = DAT_fffff400 | 1;
  return;
}

