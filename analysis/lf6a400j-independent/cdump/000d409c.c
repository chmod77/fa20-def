
void FUN_000d409c(byte param_1,undefined1 param_2,ushort param_3,undefined1 *param_4)

{
  if ((param_1 < 0x1e) && (param_3 < 0x2ea9)) {
    if (param_1 < 10) {
      *param_4 = 0;
    }
    else {
      *param_4 = param_2;
    }
  }
  else {
    *param_4 = 1;
  }
  return;
}

