
void FUN_0006cbd0(uint param_1)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)((param_1 & 0xffff) - 0x11548);
  *pbVar1 = *pbVar1 & 0xfb;
  FUN_0006cb8a(param_1 & 0xffff,4);
  return;
}

