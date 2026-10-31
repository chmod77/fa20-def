
void FUN_000c23dc(byte param_1,undefined1 *param_2)

{
  if (param_1 < 0x25) {
    if (param_1 == 0) {
      param_1 = 1;
    }
  }
  else {
    param_1 = 0x24;
  }
  if (-1 < (char)(&DAT_0002e8c4)[(byte)(param_1 - 1)]) {
    DAT_fffec9f0 = (&DAT_0002e8c4)[(byte)(param_1 - 1)] == '\x01';
  }
  *param_2 = DAT_fffec9f0;
  return;
}

