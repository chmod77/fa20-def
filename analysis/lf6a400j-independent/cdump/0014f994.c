
void FUN_0014f994(byte param_1)

{
  **(byte **)(&DAT_00168cb0 + (uint)param_1 * 0x10) =
       **(byte **)(&DAT_00168cb0 + (uint)param_1 * 0x10) & ~(&DAT_00168cb4)[(uint)param_1 * 0x10];
  return;
}

