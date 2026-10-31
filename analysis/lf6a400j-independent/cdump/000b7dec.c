
void FUN_000b7dec(ushort param_1,ushort param_2,undefined4 param_3)

{
  if (DAT_fffec7f4 != '\0') {
    if (param_2 < 0x7b) {
      param_2 = 0;
    }
    else {
      param_2 = param_2 - 0x7b;
    }
  }
  *(bool *)param_3 = param_2 <= param_1;
  DAT_fffec7f4 = param_2 <= param_1;
  return;
}

