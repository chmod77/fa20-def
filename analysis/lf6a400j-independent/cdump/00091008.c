
uint FUN_00091008(uint param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  
  uVar1 = LK_138C74((uint)&T_02D2A8,param_1,param_2);
  uVar2 = LK_133B38((uint)&T_02D2BC,param_3);
  uVar1 = (uVar1 & 0xffff) * (uVar2 & 0xff);
  if (uVar1 < 0x7fff81) {
    uVar3 = (undefined2)(uVar1 >> 7);
  }
  else {
    uVar3 = 0xffff;
  }
  *param_4 = uVar3;
  return uVar2;
}

