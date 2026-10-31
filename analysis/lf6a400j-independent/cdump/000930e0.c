
void FUN_000930e0(byte param_1,undefined1 *param_2)

{
  if (param_1 < DAT_fffebe55) {
    DAT_fffebe54 = 1;
  }
  if (param_1 != 0) {
    DAT_fffebe54 = 0;
  }
  *param_2 = DAT_fffebe54;
  DAT_fffebe55 = param_1;
  return;
}

