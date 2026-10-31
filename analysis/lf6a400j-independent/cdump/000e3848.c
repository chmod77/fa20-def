
void FUN_000e3848(ushort param_1,ushort param_2,undefined2 *param_3)

{
  if (param_1 < 0x2d00) {
    if (param_2 < 0x2ee) {
      *param_3 = 0x20c;
    }
    else {
      *param_3 = 0x708;
    }
  }
  else if (param_2 < 0x2ee) {
    *param_3 = 0x20c;
  }
  else {
    *param_3 = 0x20c;
  }
  return;
}

