
undefined4 FUN_0016b3dc(int param_1,ushort param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0xffffffff;
  if (param_2 != 0) {
    iVar1 = __udiv32_r1_by_r0(param_1,(uint)param_2);
    uVar2 = FUN_00001540(iVar1);
  }
  return uVar2;
}

