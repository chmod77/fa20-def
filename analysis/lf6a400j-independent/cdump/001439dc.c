
uint FUN_001439dc(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int b;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  
  uVar5 = (uint)DAT_ffff1a59;
  pcVar6 = __sdiv32_r1_by_r0;
  uVar1 = __sdiv32_r1_by_r0(param_1 & 0xffff,0x168);
  __sdiv32b_r1_by_r0(param_1 & 0xffff,b);
  uVar2 = (*pcVar6)();
  uVar3 = uVar2 & 0xff;
  uVar4 = uVar1 & 0xffff;
  if (((uVar5 & 0xff) == 0) || ((uVar5 & 0xff) == 2)) {
    if (uVar3 < 4) {
      if (uVar3 != 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = uVar2 - 2;
    }
    if (uVar4 != 0) {
      uVar2 = uVar2 + ((uVar1 & 0xff) * 0x10 - ((int)((uVar1 & 0xffff) + 1) >> 1));
    }
  }
  else {
    if (uVar3 < 4) {
      if (uVar3 != 0) {
        uVar2 = 0;
      }
    }
    else {
      uVar2 = uVar2 - 3;
    }
    if (uVar4 != 0) {
      uVar2 = uVar2 + ((uVar1 & 0xff) * 0x10 - ((int)uVar4 >> 1));
    }
  }
  return uVar2;
}

