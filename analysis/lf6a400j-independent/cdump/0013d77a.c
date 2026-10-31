
void FUN_0013d77a(int param_1)

{
  if (*(short *)(param_1 + 6) != -1) {
    FUN_0013d7b8();
    return;
  }
  *(undefined4 *)(param_1 + 8) = 0x80000000;
  *(undefined2 *)(param_1 + 4) = 0xffff;
  *(undefined **)(param_1 + 0x18) = &DAT_00169768;
  *(undefined1 **)(param_1 + 0x14) = &DAT_ffff5d88;
  FUN_0013dbb8(param_1,0);
  return;
}

