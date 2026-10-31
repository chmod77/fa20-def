
void FUN_000ca244(uint param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) * 5 >> 9;
  if (0x120 < uVar1) {
    *param_2 = -1;
    return;
  }
  if (uVar1 < 0x21) {
    *param_2 = '\0';
    return;
  }
  *param_2 = (char)uVar1 + -0x21;
  return;
}

