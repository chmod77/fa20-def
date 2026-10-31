
void FUN_0014f978(byte param_1)

{
  **(byte **)(&DAT_00168c70 + (uint)param_1 * 0x10) =
       **(byte **)(&DAT_00168c70 + (uint)param_1 * 0x10) & ~(&DAT_00168c74)[(uint)param_1 * 0x10];
  return;
}

