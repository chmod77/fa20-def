
void FUN_000b25a8(uint param_1,uint param_2,char param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (param_3 == '\0') {
    *param_4 = (short)param_1;
  }
  else {
    uVar1 = __sdiv32_r1_by_r0(param_2 & 0xffff,5);
    uVar2 = 0;
    if ((uVar1 & 0xffff) <= (param_1 & 0xffff)) {
      uVar2 = param_1 - uVar1;
    }
    if ((uVar2 & 0xffff) == 0) {
      *param_4 = 0;
    }
    else {
      *param_4 = (short)uVar2;
    }
  }
  return;
}

