
void FUN_000b6044(uint param_1,uint param_2,short param_3,ushort *param_4)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = LK_138AFC((uint)&T_02E3EC,param_1,param_2);
  uVar2 = (ushort)uVar1 + param_3;
  if (uVar2 < (ushort)uVar1) {
    uVar2 = 0xffff;
  }
  *param_4 = uVar2;
  return;
}

