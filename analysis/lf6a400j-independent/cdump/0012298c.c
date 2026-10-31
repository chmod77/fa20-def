
void FUN_0012298c(uint param_1,ushort param_2,ushort *param_3)

{
  uint uVar1;
  
  uVar1 = LK_133FD8((uint)&T_02FF8C,param_1);
  if (param_2 < (ushort)uVar1) {
    *param_3 = param_2;
  }
  else {
    *param_3 = (ushort)uVar1;
  }
  return;
}

