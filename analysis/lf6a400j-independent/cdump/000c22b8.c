
void FUN_000c22b8(byte param_1,undefined1 *param_2)

{
  if (param_1 < 0x25) {
    if (param_1 == 0) {
      param_1 = 1;
    }
  }
  else {
    param_1 = 0x24;
  }
  if (-1 < (char)(&DAT_0002e8a0)[(byte)(param_1 - 1)]) {
    DAT_fffec9e4 = (&DAT_0002e8a0)[(byte)(param_1 - 1)] == '\x01';
  }
  *param_2 = DAT_fffec9e4;
  return;
}

