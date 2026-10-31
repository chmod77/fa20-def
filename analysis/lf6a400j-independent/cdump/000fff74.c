
void FUN_000fff74(int param_1,short *param_2,undefined2 *param_3)

{
  int iVar1;
  
  *param_3 = *(undefined2 *)(param_1 + 2);
  iVar1 = 800 - (uint)*(ushort *)(param_1 + 2);
  if (0x7fff < iVar1) {
    *param_2 = -1;
    return;
  }
  if (iVar1 < -0x8000) {
    *param_2 = 0;
    return;
  }
  *param_2 = (short)iVar1 + -0x8000;
  return;
}

