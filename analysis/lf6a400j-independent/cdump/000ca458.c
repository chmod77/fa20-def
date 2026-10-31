
void FUN_000ca458(char param_1,uint param_2,char *param_3)

{
  uint uVar1;
  
  if (param_1 == '\0') {
    uVar1 = (param_2 & 0xffff) * 5 >> 9;
    if (0x120 < uVar1) {
      *param_3 = -1;
      return;
    }
    if (0x20 < uVar1) {
      *param_3 = (char)uVar1 + -0x21;
      return;
    }
  }
  *param_3 = '\0';
  return;
}

