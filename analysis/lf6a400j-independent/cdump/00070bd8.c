
undefined4 FUN_00070bd8(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  uVar2 = param_1 & 0xff;
  param_1 = param_1 & 7;
  if (param_1 == 0) {
    param_1 = 8;
  }
  uVar1 = __shl_r0_by_r1(1,8 - param_1);
  uVar1 = uVar1 & 0xff;
  if (uVar2 == 0) {
    uVar3 = 1;
  }
  else if (uVar2 < 9) {
    uVar3 = FUN_00070d44(0xffffffbe,uVar1);
  }
  else if (uVar2 < 0x11) {
    uVar3 = FUN_00070d44(0x3d,uVar1);
  }
  else if (uVar2 < 0x19) {
    uVar3 = FUN_00070d44(0xffffffa8,uVar1);
  }
  else if (uVar2 < 0x21) {
    uVar3 = FUN_00070d44(0x13,uVar1);
  }
  else if (uVar2 < 0x29) {
    uVar3 = FUN_00070d44(0xffffff90,uVar1);
  }
  else if (uVar2 < 0x31) {
    uVar3 = FUN_00070d44(0x1f,uVar1);
  }
  else if (uVar2 < 0x39) {
    uVar3 = FUN_00070d44(0xffffffb0,uVar1);
  }
  else if (uVar2 < 0x41) {
    uVar3 = FUN_00070d44(0x11,uVar1);
  }
  else if (uVar2 < 0x49) {
    uVar3 = FUN_00070d44(0xfffffffe,uVar1);
  }
  else if (uVar2 < 0x51) {
    uVar3 = FUN_00070d44(0xffffffdc,uVar1);
  }
  else if (uVar2 < 0x59) {
    uVar3 = FUN_00070d44(0xffffff80,uVar1);
  }
  else if (uVar2 < 0x61) {
    uVar3 = FUN_00070d44(0x51,uVar1);
  }
  else if (uVar2 < 0x69) {
    uVar3 = FUN_00070d44(9,uVar1);
  }
  else if (uVar2 < 0x71) {
    uVar3 = FUN_00070d44(8,uVar1);
  }
  return uVar3;
}

