
void FUN_000cb664(uint param_1,uint param_2,uint param_3,undefined2 *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uStack_28;
  uint uStack_20;
  
  uVar1 = LK_138C74((uint)&T_02EB08,param_2 & 0xffff,param_3 & 0xff);
  uVar5 = (param_1 & 0xffff) * (uVar1 & 0xffff);
  puVar4 = (undefined *)(param_1 & 0xffff);
  uVar1 = uVar5 + (int)puVar4 * -16000;
  iVar3 = -(uint)(uVar5 < uVar1);
  uStack_28 = uVar1 + 0x3e800000;
  if (uStack_28 < uVar1) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != 0) {
    uStack_28 = 0xffffffff;
  }
  uVar1 = uStack_28;
  if (puVar4 < &DAT_00010000) {
    uVar5 = -(int)puVar4 - 1;
  }
  else {
    uVar5 = 0;
  }
  uVar2 = LK_138C74((uint)&T_02EAF4,param_2 & 0xffff,param_3 & 0xff);
  uVar2 = (uVar5 & 0xffff) * (uVar2 & 0xffff);
  uVar5 = uVar2 + (uVar5 & 0xffff) * -16000;
  iVar3 = -(uint)(uVar2 < uVar5);
  uStack_28 = uVar5 + 0x3e800000;
  if (uStack_28 < uVar5) {
    iVar3 = iVar3 + 1;
  }
  if (iVar3 != 0) {
    uStack_28 = 0xffffffff;
  }
  uStack_28 = uStack_28 + uVar1;
  uVar1 = uVar1 <= uStack_28 ^ 1;
  uStack_20 = uStack_28 + 0xc1800000;
  if (uStack_28 < uStack_20) {
    uVar1 = uVar1 - 1;
  }
  if ((int)uVar1 < 1) {
    if ((int)uVar1 < 0) {
      uStack_20 = 0;
    }
  }
  else {
    uStack_20._0_2_ = 0xffff;
  }
  *param_4 = uStack_20._0_2_;
  return;
}

