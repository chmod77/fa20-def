
void FUN_00096688(byte param_1,byte param_2,undefined1 param_3,undefined1 *param_4)

{
  if (DAT_fffebf30 < param_2) {
    param_3 = 1;
  }
  if (DAT_fffebf31 < param_1) {
    *param_4 = 0;
  }
  else {
    *param_4 = param_3;
  }
  DAT_fffebf31 = param_1;
  DAT_fffebf30 = param_2;
  return;
}

