
void FUN_000a7348(ushort param_1,short param_2,short param_3,short param_4,short param_5,
                 short param_6,short param_7,short param_8,ushort param_9,ushort *param_10)

{
  ushort uVar1;
  ushort uVar2;
  
  if (param_9 < 0xc801) {
    uVar1 = param_1 + param_2;
    if (uVar1 < param_1) {
      uVar1 = 0xffff;
    }
    uVar2 = uVar1 + param_3;
    if (uVar2 < uVar1) {
      uVar2 = 0xffff;
    }
    uVar1 = uVar2 + param_4;
    if (uVar1 < uVar2) {
      uVar1 = 0xffff;
    }
    uVar2 = uVar1 + param_5;
    if (uVar2 < uVar1) {
      uVar2 = 0xffff;
    }
    uVar1 = uVar2 + param_6;
    if (uVar1 < uVar2) {
      uVar1 = 0xffff;
    }
    if (0x1084 < uVar1) {
      uVar1 = 0x1084;
    }
    uVar2 = uVar1 + param_7;
    if (uVar2 < uVar1) {
      uVar2 = 0xffff;
    }
    uVar1 = uVar2 + param_8;
    if (uVar1 < uVar2) {
      uVar1 = 0xffff;
    }
    *param_10 = uVar1;
  }
  else {
    *param_10 = 0;
  }
  return;
}

