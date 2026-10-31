
void FUN_000d4554(byte param_1,ushort param_2,ushort param_3,short param_4,undefined1 *param_5)

{
  if (((DAT_fffece5c != '\0') && (param_4 == 0)) || ((param_4 == 0 && (param_3 <= param_2)))) {
    DAT_fffece5e = 0;
  }
  if ((param_1 < DAT_fffece5d) || (param_4 < 0)) {
    DAT_fffece5e = 1;
  }
  *param_5 = DAT_fffece5e;
  DAT_fffece5d = param_1;
  DAT_fffece5c = param_4 < 0;
  return;
}

