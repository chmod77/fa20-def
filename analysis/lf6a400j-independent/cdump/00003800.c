
void FUN_00003800(undefined4 param_1,int param_2,undefined2 param_3)

{
  ushort *in_r1;
  
  *(undefined2 *)(param_2 + 0x12) = param_3;
  *in_r1 = *in_r1 | 0x200;
  if ((*(ushort *)(param_2 + 0x2a) & 0x200) != 0) {
    *(ushort *)(param_2 + 0x2a) = *(ushort *)(param_2 + 0x2a) & 0xfdff;
    *(undefined2 *)(param_2 + 0x12) = param_3;
    *(ushort *)(param_2 + 0x26) = *(ushort *)(param_2 + 0x26) | 0x200;
  }
  return;
}

