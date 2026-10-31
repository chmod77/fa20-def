
void FUN_000d5834(char param_1,char param_2,char param_3,undefined2 param_4,undefined2 *param_5)

{
  int iVar1;
  
  if (param_3 != '\0') {
    param_4 = 0x9334;
  }
  if (param_2 != '\0') {
    iVar1 = __sdiv32_r1_by_r0(0x8c62435,0xf40);
    if (iVar1 < (int)&DAT_00010000) {
      if (iVar1 < 0) {
        iVar1 = 0;
      }
      param_4 = (undefined2)iVar1;
    }
    else {
      param_4 = 0xffff;
    }
  }
  if (param_1 == '\0') {
    *param_5 = param_4;
  }
  else {
    *param_5 = 0;
  }
  return;
}

