
void FUN_0014f9d8(uint param_1)

{
  param_1 = param_1 & 0xff;
  **(undefined2 **)(&DAT_00168cf0 + param_1 * 0x10) = 0;
  *(byte *)(param_1 - 0xd334) = *(byte *)(param_1 - 0xd334) & 0xfe;
  return;
}

