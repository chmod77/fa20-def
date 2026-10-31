
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00157720(void)

{
  undefined1 uVar1;
  undefined2 uVar3;
  int iVar2;
  undefined4 in_r7;
  undefined4 in_pr;
  
  FUN_0014c0e2(DAT_ffffb3c0);
  uVar1 = DAT_ffffb3c1;
  uVar3 = FUN_00001550(0xf0);
  _DAT_ffff2032 = 0x7a12;
  if (((int)DAT_ffff66c4 & 0x80U) == 0) {
    iVar2 = FUN_0016bd78(uVar1,0xfa,&DAT_ffff66c4,in_r7,in_pr);
    iVar2 = iVar2 << 7;
  }
  else {
    iVar2 = 0;
  }
  _DAT_ffff2034 = FUN_0016bd78(iVar2,(int)_DAT_ffff2032);
  FUN_00001550(uVar3);
  return;
}

