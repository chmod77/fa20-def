
uint FUN_000f167c(uint param_1,uint param_2,uint param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = LK_134F00((uint)&T_02F31C,param_2);
  uVar4 = (param_1 & 0xffff) + uVar1;
  uVar1 = -(uint)(-1 < (int)uVar1) ^ 0xffffffff;
  if (uVar4 < (param_1 & 0xffff)) {
    uVar1 = uVar1 + 1;
  }
  uVar2 = LK_134F00((uint)&T_02F328,param_3);
  if ((int)uVar2 < 0) {
    uVar1 = uVar1 - 1;
  }
  uVar3 = uVar4 + uVar2;
  if (uVar3 < uVar4) {
    uVar1 = uVar1 + 1;
  }
  if (((int)uVar1 < 1) && ((uVar1 != 0 || (uVar3 < 0x80000000)))) {
    if (((int)uVar1 < -1) || ((uVar2 = uVar1, uVar1 == 0xffffffff && (uVar3 < 0x80000000)))) {
      uVar3 = 0x80000000;
    }
  }
  else {
    uVar3 = 0x7fffffff;
  }
  *param_4 = uVar3;
  return uVar2;
}

