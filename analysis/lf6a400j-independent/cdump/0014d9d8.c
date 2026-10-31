
void FUN_0014d9d8(undefined4 *param_1,char param_2)

{
  int iVar1;
  
  iVar1 = __shl_r0_by_r1(1,(uint)*(byte *)(param_1 + 1));
  if (param_2 == '\0') {
    *(ushort *)*param_1 = *(ushort *)*param_1 & ~(ushort)iVar1;
  }
  else {
    *(ushort *)*param_1 = *(ushort *)*param_1 | (ushort)iVar1;
  }
  return;
}

