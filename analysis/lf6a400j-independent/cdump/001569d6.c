
void FUN_001569d6(uint param_1)

{
  undefined2 uVar1;
  
  param_1 = param_1 & 0xff;
  FUN_0014f710(*(undefined4 *)(&DAT_00168eac)[param_1 * 2],param_1);
  FUN_0014f71a(*(undefined4 *)(&DAT_00168eb0)[param_1 * 2],param_1);
  uVar1 = FUN_00001540(*(uint *)(&DAT_00168eac)[param_1 * 2] >> 2);
  *(undefined2 *)(param_1 * 2 + -0xd4b2) = uVar1;
  return;
}

