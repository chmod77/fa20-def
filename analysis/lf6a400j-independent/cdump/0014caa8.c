
void FUN_0014caa8(short *param_1,short *param_2,char *param_3,short param_4,ushort param_5,
                 uint param_6)

{
  undefined2 uVar2;
  uint uVar1;
  ushort uVar3;
  code *pcVar4;
  uint uVar5;
  
  uVar2 = FUN_00001550(0xf0,param_2,param_3,FUN_00001550);
  uVar5 = (uint)*param_3;
  pcVar4 = __shl_r0_by_r1;
  uVar1 = __shl_r0_by_r1(7,param_6 & 0xff);
  uVar5 = uVar5 & ~uVar1;
  uVar1 = (*pcVar4)();
  *param_3 = (char)(uVar5 | uVar1);
  uVar3 = (*param_1 + 2) - param_4;
  if (uVar3 < param_5) {
    *param_2 = param_4 + param_5;
  }
  else {
    *param_2 = *param_1 + 2;
  }
  FUN_00001550(uVar2,uVar5 | uVar1,uVar3,FUN_00001550);
  return;
}

