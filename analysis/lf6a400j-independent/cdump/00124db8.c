
void FUN_00124db8(ushort param_1,uint param_2,uint param_3,uint param_4,ushort *param_5)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = LK_1390DC((uint)&T_030474,param_4,param_2);
  uVar2 = LK_13AC68((uint)&T_030460,param_3,param_4);
  if ((ushort)uVar1 <= param_1) {
    param_1 = (ushort)uVar1;
  }
  if ((ushort)uVar2 < param_1) {
    param_1 = (ushort)uVar2;
  }
  *param_5 = param_1;
  return;
}

