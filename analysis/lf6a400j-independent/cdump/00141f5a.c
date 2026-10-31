
void FUN_00141f5a(byte param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)((uint)param_1 * 8 + -0x7352);
  bVar2 = bVar1 | 1;
  if ((param_2 & 1) == 0) {
    bVar2 = bVar1 & 0xfe;
  }
  *(byte *)((uint)param_1 * 8 + -0x7352) = bVar2;
  return;
}

