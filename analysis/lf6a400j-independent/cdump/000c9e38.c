
void FUN_000c9e38(uint param_1,char *param_2)

{
  uint uVar1;
  
  uVar1 = (param_1 & 0xffff) >> 7;
  if (0x17c < uVar1) {
    *param_2 = -1;
    return;
  }
  if (uVar1 < 0x7d) {
    *param_2 = '\0';
    return;
  }
  *param_2 = (char)uVar1 + -0x7d;
  return;
}

