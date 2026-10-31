
void FUN_000eb5e8(ushort param_1,uint param_2,undefined2 param_3,uint param_4,uint param_5,
                 char param_6,undefined2 *param_7)

{
  uint uVar1;
  uint uVar2;
  
  if (499 < param_1) {
    uVar1 = LK_133F40((uint)&T_02F2C8,param_5 & 0xffff);
    uVar2 = LK_133F40((uint)&T_02F2BC,param_4 & 0xffff);
    param_5 = __udiv32_r1_by_r0((uVar1 & 0xffff) * (uVar2 & 0xffff),(int)&DAT_0000ffff);
  }
  if (param_6 == '\0') {
    if (param_1 < 500) {
      *param_7 = param_3;
    }
    else {
      *param_7 = (short)((param_2 & 0xffff) + (param_5 & 0xffff) >> 4);
    }
  }
  else {
    *param_7 = 0;
  }
  return;
}

