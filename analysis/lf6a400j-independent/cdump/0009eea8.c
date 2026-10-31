
void FUN_0009eea8(byte param_1,int param_2,undefined2 *param_3)

{
  byte bVar1;
  
  bVar1 = param_1 + 1;
  if (0xfe < param_1) {
    bVar1 = 0xff;
  }
  if (bVar1 < 0x24) {
    if (bVar1 == 0) {
      bVar1 = 1;
    }
  }
  else {
    bVar1 = 0x23;
  }
  *param_3 = *(undefined2 *)(param_2 + (uint)(byte)(bVar1 - 1) * 2);
  return;
}

