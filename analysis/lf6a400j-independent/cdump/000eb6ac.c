
void FUN_000eb6ac(ushort param_1,uint param_2,undefined2 param_3,char param_4,undefined2 *param_5)

{
  uint uVar1;
  
  if (499 < param_1) {
    uVar1 = LK_133F40((uint)&T_02F2D4,param_2);
    param_3 = (undefined2)((int)(uVar1 & 0xffff) >> 4);
  }
  if (param_4 == '\0') {
    *param_5 = param_3;
  }
  else {
    *param_5 = 0;
  }
  return;
}

