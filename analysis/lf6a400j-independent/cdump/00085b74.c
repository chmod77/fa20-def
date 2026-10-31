
/* WARNING: Removing unreachable block (ram,0x00085bf6) */

void FUN_00085b74(byte param_1,char param_2,char param_3,char param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,ushort param_10,ushort param_11,
                 char param_12,byte param_13,undefined4 param_14,undefined4 param_15,
                 undefined1 *param_16,ushort *param_17,ushort *param_18)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  
  if (param_12 != '\0') {
    if (param_13 < 0x50) {
      if ((param_13 < 0x50) && (0x4f < param_13)) {
        DAT_fffebb9c = 3;
      }
      else if ((param_13 < 0x50) && (0x4b < param_13)) {
        DAT_fffebb9c = 2;
      }
      else if ((param_13 < 0x4c) && (0x47 < param_13)) {
        DAT_fffebb9c = 1;
      }
      else {
        DAT_fffebb9c = 0;
      }
    }
    else {
      DAT_fffebb9c = 4;
    }
  }
  uVar5 = param_10 + 0x400;
  if (uVar5 < param_10) {
    uVar5 = 0xffff;
  }
  uVar1 = 0xffff;
  if (param_9 != '\0') {
    uVar1 = 0x7a00;
  }
  uVar3 = 0xffff;
  if (param_8 != '\0') {
    uVar3 = 0x7a00;
  }
  if (((param_5 != '\0') || (param_6 != '\0')) || (uVar4 = 0xffff, param_7 != '\0')) {
    uVar4 = 0x7a00;
  }
  if (uVar3 <= uVar4) {
    uVar4 = uVar3;
  }
  if (uVar1 < uVar4) {
    uVar4 = uVar1;
  }
  *param_17 = uVar4;
  if (uVar4 < uVar5) {
    uVar4 = uVar5;
  }
  *param_18 = uVar4;
  if (DAT_fffebb9e != '\0') {
    if (uVar4 < 0x200) {
      uVar4 = 0;
    }
    else {
      uVar4 = uVar4 - 0x200;
    }
  }
  DAT_fffebb9e = uVar4 <= param_11;
  if ((((param_3 == '\b') || (param_3 == '\t')) ||
      ((param_3 == '\v' || ((param_3 == '\f' || (param_3 == '\x19')))))) ||
     ((param_3 == '\x1a' ||
      ((((param_3 == '\x17' || (param_3 == '\x18')) || (param_3 == '\x1b')) ||
       (bVar2 = 0xff, param_4 != '\0')))))) {
    bVar2 = param_1;
  }
  DAT_fffebba5 = 0xbf < bVar2;
  DAT_fffebb9f = 0x7f < bVar2;
  DAT_fffebba2 = 0x3f < bVar2;
  DAT_fffebba4 = 9 < bVar2;
  DAT_fffebb9d = 0xbf < bVar2;
  DAT_fffebba0 = 0x7f < bVar2;
  DAT_fffebba3 = 0x3f < bVar2;
  DAT_fffebba1 = 9 < bVar2;
  if (param_2 != '\x04') {
    if (param_12 != '\0') {
      *param_16 = DAT_fffebb9c;
      return;
    }
    if (!(bool)DAT_fffebb9e) {
      if (0xbf < bVar2) {
        *param_16 = 0;
        return;
      }
      if (0x7f < bVar2) {
        *param_16 = 1;
        return;
      }
      if (0x3f < bVar2) {
        *param_16 = 2;
        return;
      }
      if (bVar2 < 10) {
        *param_16 = 4;
        return;
      }
      *param_16 = 3;
      return;
    }
  }
  *param_16 = 4;
  return;
}

