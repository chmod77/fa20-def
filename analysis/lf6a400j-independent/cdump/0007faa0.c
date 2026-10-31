
void FUN_0007faa0(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = LK_133F40((uint)&T_02C1F4,param_2);
  uVar2 = uVar1 & 0xffff;
  if ((param_1 & 0xffff) < (uVar1 & 0xffff)) {
    uVar2 = param_1;
  }
  uVar2 = LK_133F40((uint)&T_02C200,uVar2);
  *param_3 = (short)uVar2;
  return;
}

