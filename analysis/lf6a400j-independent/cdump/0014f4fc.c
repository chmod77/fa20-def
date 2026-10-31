
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014f4fc(void)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (uint)*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca7) * 2;
  iVar4 = (uint)*(byte *)((int)&PTR_DAT_00162a38 + (uint)DAT_ffff2ca6) * 2;
  uVar1 = FUN_0016caec((int)*(short *)(iVar3 + -0xd352) - (int)*(short *)(iVar4 + -0xd352));
  uVar2 = FUN_001426aa();
  uVar1 = __udiv32_r1_by_r0((uVar1 & 0xffff) * (uVar2 & 0xffff),0xb4);
  uVar1 = uVar1 >> 8 & 0xffff;
  if (*(short *)(iVar3 + -0xd352) < *(short *)(iVar4 + -0xd352)) {
    _DAT_ffff2c9e = FUN_0016b944((int)_DAT_ffff2c9e,uVar1,0);
  }
  else {
    _DAT_ffff2c9e = FUN_0016b390((int)_DAT_ffff2c9e,uVar1,0xffffffff);
  }
  return;
}

