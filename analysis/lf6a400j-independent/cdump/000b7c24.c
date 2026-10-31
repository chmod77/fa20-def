
void FUN_000b7c24(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = LK_133F40((uint)&T_02E448,param_1 & 0xffff);
  uVar2 = LK_133F40((uint)&T_02E454,param_1 & 0xffff);
  if ((param_2 & 0xffff) <= (uVar1 & 0xffff)) {
    param_2 = uVar1 & 0xffff;
  }
  if ((param_2 & 0xffff) < (uVar2 & 0xffff)) {
    *param_3 = (short)param_2;
  }
  else {
    *param_3 = (short)uVar2;
  }
  return;
}

