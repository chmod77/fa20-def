
uint FUN_000bd11c(uint param_1,uint param_2,uint param_3,undefined2 *param_4,undefined2 *param_5)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  
  uVar1 = LK_1364B8((uint)&T_02E59C,param_1,param_2);
  *param_5 = (short)uVar1;
  uVar3 = (param_3 & 0xffff) * (uVar1 & 0xffff);
  if (uVar3 < 0x7fff8001) {
    uVar2 = (undefined2)(uVar3 >> 0xf);
  }
  else {
    uVar2 = 0xffff;
  }
  *param_4 = uVar2;
  return uVar1;
}

