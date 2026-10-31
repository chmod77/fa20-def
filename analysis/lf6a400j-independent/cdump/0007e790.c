
uint FUN_0007e790(uint param_1,uint param_2,undefined1 *param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  undefined2 uVar3;
  uint uVar4;
  
  uVar1 = LK_133B38((uint)&T_02C164,param_2);
  uVar2 = LK_133E10((uint)&T_02C158,param_1);
  uVar4 = (uVar1 & 0xff) * (uVar2 & 0xffff);
  if (uVar4 < 0x7fff81) {
    uVar3 = (undefined2)(uVar4 >> 7);
  }
  else {
    uVar3 = 0xffff;
  }
  *param_4 = uVar3;
  *param_3 = (char)uVar1;
  return uVar2;
}

