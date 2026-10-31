
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014c400(ushort param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  
  DAT_fffff400 = DAT_fffff400 & 0xfd;
  _DAT_fffff502 = param_1 - 1;
  _DAT_fffff50a = param_1;
  uVar1 = FUN_0016bd78(param_2,0x9c4);
  iVar2 = __udiv32_r1_by_r0((uint)param_1 * (uVar1 & 0xffff),0x9c4);
  _DAT_fffff512 = (short)iVar2;
  DAT_fffff400 = DAT_fffff400 | 2;
  return;
}

