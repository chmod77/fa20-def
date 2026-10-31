
void FUN_0006d0b6(uint param_1)

{
  param_1 = param_1 & 0xffff;
  *(byte *)(param_1 - 0x11548) = *(byte *)(param_1 - 0x11548) & 0xef;
  FUN_0006cb8a(param_1,0x10);
  FUN_0006cb8a(param_1,1);
  return;
}

