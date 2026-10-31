
void FUN_000d29c8(uint param_1,char *param_2)

{
  *param_2 = (char)((param_1 & 0xffff) * 32000 >> 0x18) + '2';
  return;
}

