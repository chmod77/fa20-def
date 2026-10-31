
void FUN_001150e4(int param_1,char param_2,undefined1 *param_3)

{
  if (param_2 != '@') {
    *param_3 = (*(byte *)(param_1 + 0x14) & 1) != 0;
    return;
  }
  *param_3 = 0;
  return;
}

