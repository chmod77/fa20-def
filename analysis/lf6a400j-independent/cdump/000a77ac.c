
/* WARNING: Removing unreachable block (ram,0x000a7814) */

void FUN_000a77ac(char param_1,ushort param_2,char param_3,char param_4,short param_5,short param_6,
                 short param_7,short param_8,ushort *param_9)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  
  uVar3 = param_5 + param_6;
  param_2 = param_2 & 0xff;
  if (((param_5 < 0) || (param_6 < 0)) || (-1 < (short)uVar3)) {
    if (((param_5 < 0) && (param_6 < 0)) && (-1 < (short)uVar3)) {
      uVar3 = 0x8000;
    }
  }
  else {
    uVar3 = 0x7fff;
  }
  if (DAT_fffec431 == '\0') {
    uVar6 = 2;
  }
  else {
    uVar6 = 3;
  }
  bVar1 = param_2 < uVar6;
  if (param_1 == '\0') {
    bVar1 = param_3 == '\0';
  }
  bVar2 = param_2 < 0xff;
  if (param_1 == '\0') {
    bVar2 = param_4 == '\0';
  }
  if (bVar2) {
    uVar4 = param_7 + uVar3;
    if (((param_7 < 0) || ((short)uVar3 < 0)) || (-1 < (short)uVar4)) {
      uVar5 = param_2;
      if (((param_7 < 0) && ((short)uVar3 < 0)) && (-1 < (short)uVar4)) {
        uVar4 = 0x8000;
        uVar5 = 0x8000;
      }
    }
    else {
      uVar4 = 0x7fff;
      uVar5 = 0x7fff;
    }
  }
  else {
    uVar4 = param_8 + uVar3;
    if (((param_8 < 0) || ((short)uVar3 < 0)) || (-1 < (short)uVar4)) {
      uVar5 = uVar4;
      if (((param_8 < 0) && ((short)uVar3 < 0)) && (-1 < (short)uVar4)) {
        uVar4 = 0x8000;
        uVar5 = 0x8000;
      }
    }
    else {
      uVar4 = 0x7fff;
      uVar5 = 0x7fff;
    }
  }
  if (bVar1) {
    *param_9 = uVar3;
  }
  else if (bVar2) {
    *param_9 = uVar4;
  }
  else {
    *param_9 = uVar5;
  }
  DAT_fffec431 = param_2 < uVar6;
  DAT_fffec430 = param_2 < 0xff;
  return;
}

