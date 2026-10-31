
uint FUN_00143a8e(ushort param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = __sdiv32_r1_by_r0((uint)param_1,0x14);
  uVar2 = uVar1 & 0xff;
  if ((DAT_ffff1a59 == '\x01') || (DAT_ffff1a59 == '\x03')) {
    if (0xf < uVar2) {
      return uVar1 - 2;
    }
    if (0xd < uVar2) {
      return 0xd;
    }
  }
  else {
    if (0xf < uVar2) {
      return uVar1 - 3;
    }
    if (0xc < uVar2) {
      return 0xc;
    }
  }
  if (uVar2 == 1) {
    uVar1 = 0;
  }
  return uVar1;
}

