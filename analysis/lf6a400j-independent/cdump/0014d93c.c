
void FUN_0014d93c(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = __shl_r0_by_r1(1,(uint)*(byte *)(param_1 + 4));
  if ((param_2 & 0xff) == 0) {
    **(ushort **)(param_1 + 8) = **(ushort **)(param_1 + 8) & ~(ushort)iVar1;
  }
  else {
    **(ushort **)(param_1 + 8) = **(ushort **)(param_1 + 8) | (ushort)iVar1;
  }
  FUN_0014d9d8(param_1);
  return;
}

