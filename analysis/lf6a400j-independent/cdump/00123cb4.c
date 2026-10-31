
void FUN_00123cb4(uint param_1,uint param_2,undefined4 param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = LK_133FD8((uint)&T_030068,param_2);
  uVar2 = uVar1 & 0xffff;
  if ((param_1 & 0xffff) < (uVar1 & 0xffff)) {
    uVar2 = param_1;
  }
  uVar2 = LK_133FD8((uint)&T_030074,uVar2);
  *param_4 = (short)uVar2;
  return;
}

