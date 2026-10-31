
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_00148816(byte param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = (uint)_DAT_ffff66cc;
  uVar1 = __shl_r0_by_r1(1,(uint)param_1);
  return (uVar1 & 0xff & uVar2) != 0;
}

