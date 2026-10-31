
undefined4 FUN_000714e0(uint param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  
  uVar3 = param_1 & 0xff;
  param_1 = param_1 & 7;
  if (param_1 == 0) {
    param_1 = 8;
  }
  uVar1 = __shl_r0_by_r1(1,8 - param_1);
  uVar1 = uVar1 & 0xff;
  if (uVar3 == 0) {
    uVar2 = 1;
  }
  else if (uVar3 < 9) {
    uVar2 = FUN_00070d44(0x7e,uVar1);
  }
  else if (uVar3 < 0x11) {
    uVar2 = FUN_00070d44(0x3d,uVar1);
  }
  else if (uVar3 < 0x19) {
    uVar2 = FUN_00070d44(0xffffffa8,uVar1);
  }
  else if (uVar3 < 0x21) {
    uVar2 = FUN_00070d44(0x13,uVar1);
  }
  else if (uVar3 < 0x29) {
    uVar2 = FUN_00070d44(0,uVar1);
  }
  else if (uVar3 < 0x31) {
    uVar2 = FUN_00070d44(0x1e,uVar1);
  }
  else if (uVar3 < 0x39) {
    uVar2 = FUN_00070d44(0x20,uVar1);
  }
  else if (uVar3 < 0x41) {
    uVar2 = FUN_00070d44(1,uVar1);
  }
  else if (uVar3 < 0x49) {
    uVar2 = FUN_00070d44(0x7e,uVar1);
  }
  else if (uVar3 < 0x51) {
    uVar2 = FUN_00070d44(0xffffffd0,uVar1);
  }
  else if (uVar3 < 0x59) {
    uVar2 = FUN_00070d44(0,uVar1);
  }
  else if (uVar3 < 0x61) {
    uVar2 = FUN_00070d44(1,uVar1);
  }
  else if (uVar3 < 0x69) {
    uVar2 = FUN_00070d44(9,uVar1);
  }
  else if (uVar3 < 0x71) {
    uVar2 = FUN_00070d44(8,uVar1);
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

