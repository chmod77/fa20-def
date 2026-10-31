
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156250(void)

{
  undefined2 uVar2;
  int iVar1;
  undefined1 uVar3;
  undefined4 in_r7;
  undefined4 unaff_r14;
  undefined4 in_pr;
  
  FUN_0015ae98((int)_DAT_fffef040);
  FUN_00149840();
  FUN_00145a7e();
  FUN_0015a736();
  FUN_0015a74a((DAT_fffef519 & 0x20) != 0);
  FUN_0015a75e();
  FUN_0015a772(((int)(char)DAT_fffef519 & 0x80U) != 0);
  FUN_0014c0e2(v_CPC_Valve_Duty_Ratio_043B);
  uVar3 = 0;
  if (((int)DAT_ffff0438 & 0x80U) != 0) {
    uVar3 = 0xfa;
  }
  uVar2 = FUN_00001550(0xf0);
  _DAT_ffff2032 = 0x7a12;
  if (((int)DAT_ffff66c4 & 0x80U) == 0) {
    iVar1 = FUN_0016bd78(uVar3,0xfa,&DAT_ffff66c4,in_r7,in_pr,unaff_r14);
    iVar1 = iVar1 << 7;
  }
  else {
    iVar1 = 0;
  }
  _DAT_ffff2034 = FUN_0016bd78(iVar1,(int)_DAT_ffff2032);
  FUN_00001550(uVar2);
  return;
}

