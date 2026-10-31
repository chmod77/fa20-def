
uint FUN_00080fec(uint param_1,uint param_2,undefined2 *param_3)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = LK_133F40((uint)&T_02C3B8,param_1);
  uVar2 = LK_133F40((uint)&T_02C3C4,param_2);
  uVar1 = (uVar1 & 0xffff) * (uVar2 & 0xffff);
  if (uVar1 < 0x3fffc001) {
    uVar3 = (undefined2)(uVar1 >> 0xe);
  }
  else {
    uVar3 = 0xffff;
  }
  *param_3 = uVar3;
  return uVar2;
}

