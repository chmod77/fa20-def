
void FUN_00124e60(short param_1,uint param_2,ushort *param_3)

{
  uint uVar1;
  ushort uVar2;
  
  uVar1 = LK_133FD8((uint)&T_030488,param_2);
  uVar2 = (ushort)uVar1 + param_1;
  if (uVar2 < (ushort)uVar1) {
    uVar2 = 0xffff;
  }
  *param_3 = uVar2;
  return;
}

