
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001559fa(void)

{
  undefined2 uVar2;
  uint uVar1;
  undefined1 uVar4;
  uint uVar3;
  undefined4 in_r7;
  undefined4 unaff_r14;
  ushort uVar5;
  undefined4 in_macl;
  undefined4 in_pr;
  
  FUN_0014c186(_v_Primary_Wastegate_Duty_0E5E);
  uVar2 = FUN_0016bd34(1000 - (uint)_v_Fuel_Pump_Duty_0FDC);
  FUN_0014c5b0(uVar2);
  uVar4 = 0;
  if ((DAT_ffff6570 & 1) != 0) {
    uVar4 = 0xfa;
  }
  FUN_0014c606(uVar4);
  FUN_00145fca((DAT_ffff6570 & 0x10) != 0);
  if (_DAT_ffff1204 < 4000) {
    uVar5 = 4000;
  }
  else {
    uVar5 = _DAT_ffff1204;
    if (40000 < _DAT_ffff1204) {
      uVar5 = 40000;
    }
  }
  uVar1 = FUN_0014c65a();
  uVar3 = (uint)uVar5 * 5 >> 3;
  if (uVar3 == (uVar1 & 0xffff)) {
    FUN_0014c448(_DAT_ffff11e8);
  }
  else {
    uVar2 = FUN_00001550(0xf0);
    FUN_0014c474(uVar3,_DAT_ffff11e8);
    FUN_00001550(uVar2);
  }
  if (_DAT_ffff1206 < 4000) {
    uVar5 = 4000;
  }
  else {
    uVar5 = _DAT_ffff1206;
    if (40000 < _DAT_ffff1206) {
      uVar5 = 40000;
    }
  }
  uVar1 = FUN_0014c660();
  uVar3 = (uint)uVar5 * 5 >> 3;
  if (uVar3 == (uVar1 & 0xffff)) {
    FUN_0014c3d4(_DAT_ffff11f6);
  }
  else {
    uVar2 = FUN_00001550(0xf0);
    FUN_0014c400(uVar3,_DAT_ffff11f6);
    FUN_00001550(uVar2);
  }
  if (_DAT_ffff1254 < 4000) {
    uVar5 = 4000;
  }
  else {
    uVar5 = _DAT_ffff1254;
    if (40000 < _DAT_ffff1254) {
      uVar5 = 40000;
    }
  }
  uVar1 = FUN_0014c666();
  uVar3 = (uint)uVar5 * 5 >> 3;
  if (uVar3 == (uVar1 & 0xffff)) {
    FUN_0014c530(_DAT_ffff1238);
  }
  else {
    uVar2 = FUN_00001550(0xf0);
    FUN_0014c562(uVar3,_DAT_ffff1238);
    FUN_00001550(uVar2);
  }
  if (_DAT_ffff1256 < 4000) {
    uVar5 = 4000;
  }
  else {
    uVar5 = _DAT_ffff1256;
    if (40000 < _DAT_ffff1256) {
      uVar5 = 40000;
    }
  }
  uVar1 = FUN_0014c66c();
  uVar3 = (uint)uVar5 * 5 >> 3;
  if (uVar3 == (uVar1 & 0xffff)) {
    FUN_0016bd78(_DAT_ffff1246,0x9c4,&DAT_ffff1246,in_r7,in_macl,in_pr,unaff_r14);
    _DAT_fffff516 = FUN_0016c588();
    return;
  }
  uVar2 = FUN_00001550(0xf0);
  FUN_0014c4e8(uVar3,_DAT_ffff1246);
  FUN_00001550(uVar2);
  return;
}

