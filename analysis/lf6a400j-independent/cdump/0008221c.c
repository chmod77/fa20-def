
void FUN_0008221c(byte param_1,ushort param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = (ushort)param_1 * 0x80 + param_2;
  if (uVar1 < param_2) {
    uVar1 = 0xffff;
  }
  *param_3 = uVar1;
  return;
}

