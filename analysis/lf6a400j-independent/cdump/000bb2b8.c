
/* WARNING: Removing unreachable block (ram,0x000bb362) */
/* WARNING: Removing unreachable block (ram,0x000bb6ba) */

void FUN_000bb2b8(char param_1,byte *param_2,byte *param_3,byte *param_4,short param_5,short param_6
                 ,short param_7,short param_8,undefined4 param_9,undefined4 param_10,char param_11,
                 byte *param_12,byte *param_13,char *param_14)

{
  bool bVar1;
  bool bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  byte bStack_30;
  
  if ((param_1 == '\0') ||
     (((0xfe < (((uint)(param_5 * 0xb4) >> 0x10) + 0x80 & 0xff) &&
       (0xfc < (((uint)(param_7 * 0xb4) >> 0x10) + 0x80 & 0xff))) || (param_11 == '\0')))) {
    if (DAT_fffec8b3 != '\0') {
      DAT_fffec898 = '\0';
      DAT_fffec8b3 = '\0';
      DAT_fffec8a2 = '\0';
      DAT_fffec8a4 = '\0';
      DAT_fffec8ae = '\0';
      DAT_fffec8a8 = '\0';
      DAT_fffec89a = '\0';
      DAT_fffec8ad = '\0';
    }
  }
  else {
    if (DAT_fffec8a2 == '\0') {
      DAT_fffec8a0 = '\0';
      DAT_fffec89c = 0x80;
      DAT_fffec8a2 = '\x01';
      DAT_fffec8b3 = '\x01';
    }
    if (*param_4 < 0x80) {
      uVar4 = 0xff;
      if ((ushort)(0x100 - *param_4) < 0x100) {
        uVar4 = 0x100 - *param_4;
      }
    }
    else {
      uVar4 = (short)(char)*param_4;
    }
    if (*param_4 < 0x80) {
      uVar5 = 0xff;
      if ((ushort)(0x100 - *param_4) < 0x100) {
        uVar5 = 0x100 - *param_4;
      }
    }
    else {
      uVar5 = (short)(char)*param_4;
    }
    bVar1 = false;
    if ((DAT_fffec8a0 != '\0') && (0x80 < DAT_fffec89c)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffec89a == '\0') {
        DAT_fffec89d = 0;
        DAT_fffec89a = '\x01';
      }
      DAT_fffec8b9 = *param_3 <= DAT_fffec89d;
      bVar3 = 0xff;
      if (DAT_fffec89d != 0xff) {
        bVar3 = DAT_fffec89d + 1;
      }
    }
    else {
      DAT_fffec89a = '\0';
      bVar3 = DAT_fffec89d;
    }
    DAT_fffec89d = bVar3;
    cVar6 = '\0';
    if (bVar1) {
      cVar6 = DAT_fffec8b9;
    }
    bVar1 = false;
    if (((uVar4 & 0xff) < 0x81) && (cVar6 != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffec8a4 == '\0') {
        DAT_fffec89b = 0;
        DAT_fffec8a4 = '\x01';
      }
      DAT_fffec8b6 = 0x13 < DAT_fffec89b;
      bVar3 = 0xff;
      if (DAT_fffec89b != 0xff) {
        bVar3 = DAT_fffec89b + 1;
      }
    }
    else {
      DAT_fffec8a4 = '\0';
      bVar3 = DAT_fffec89b;
    }
    DAT_fffec89b = bVar3;
    bVar2 = false;
    if ((DAT_fffec8a0 != '\0') && (DAT_fffec89c == 0x80)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec8ad == '\0') {
        DAT_fffec8a1 = 0;
        DAT_fffec8ad = '\x01';
      }
      DAT_fffec8ba = *param_3 <= DAT_fffec8a1;
      bVar3 = 0xff;
      if (DAT_fffec8a1 != 0xff) {
        bVar3 = DAT_fffec8a1 + 1;
      }
    }
    else {
      DAT_fffec8ad = '\0';
      bVar3 = DAT_fffec8a1;
    }
    DAT_fffec8a1 = bVar3;
    cVar7 = '\0';
    if (bVar2) {
      cVar7 = DAT_fffec8ba;
    }
    bVar2 = false;
    if ((DAT_fffec8a0 != '\0') && (DAT_fffec89c < 0x80)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec8a8 == '\0') {
        DAT_fffec89f = 0;
        DAT_fffec8a8 = '\x01';
      }
      DAT_fffec8b8 = *param_3 <= DAT_fffec89f;
      bVar3 = 0xff;
      if (DAT_fffec89f != 0xff) {
        bVar3 = DAT_fffec89f + 1;
      }
    }
    else {
      DAT_fffec8a8 = '\0';
      bVar3 = DAT_fffec89f;
    }
    DAT_fffec89f = bVar3;
    cVar9 = '\0';
    if (bVar2) {
      cVar9 = DAT_fffec8b8;
    }
    bVar2 = false;
    if (((uVar5 & 0xff) < 0x81) && (cVar9 != '\0')) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec8ae == '\0') {
        DAT_fffec8ab = 0;
        DAT_fffec8ae = '\x01';
      }
      DAT_fffec8b7 = 0x13 < DAT_fffec8ab;
      bVar3 = 0xff;
      if (DAT_fffec8ab != 0xff) {
        bVar3 = DAT_fffec8ab + 1;
      }
    }
    else {
      DAT_fffec8ae = '\0';
      bVar3 = DAT_fffec8ab;
    }
    DAT_fffec8ab = bVar3;
    if ((*param_13 < 0xa6) && (0x67 < *param_12)) {
      cVar8 = '\0';
      if (bVar1) {
        cVar8 = DAT_fffec8b6;
      }
      if (cVar8 == '\0') {
        if ((cVar6 == '\0') || (*param_4 < 0x81)) {
          if ((*param_4 < 0x81) || (cVar7 == '\0')) {
            if ((cVar7 == '\0') || (DAT_fffec898 = '\x04', 0x7f < *param_4)) {
              cVar6 = '\0';
              if (bVar2) {
                cVar6 = DAT_fffec8b7;
              }
              if (cVar6 == '\0') {
                if ((cVar9 == '\0') || (0x7f < *param_4)) {
                  DAT_fffec898 = '\0';
                }
                else {
                  DAT_fffec898 = '\x02';
                }
              }
              else {
                DAT_fffec898 = '\x01';
              }
            }
          }
          else {
            DAT_fffec898 = '\x03';
          }
        }
        else {
          DAT_fffec898 = '\x06';
        }
      }
      else {
        DAT_fffec898 = '\x05';
      }
    }
    else {
      DAT_fffec898 = '\f';
    }
    DAT_fffec8a0 = DAT_fffec898 == '\0';
    DAT_fffec89c = *param_2;
  }
  if ((param_1 == '\0') ||
     (((0xfe < (((uint)(param_6 * 0xb4) >> 0x10) + 0x80 & 0xff) &&
       (0xfc < (((uint)(param_8 * 0xb4) >> 0x10) + 0x80 & 0xff))) || (param_11 == '\0')))) {
    if (DAT_fffec8b5 != '\0') {
      DAT_fffec899 = '\0';
      DAT_fffec8b5 = '\0';
      DAT_fffec8b4 = '\0';
      DAT_fffec8b0 = '\0';
      DAT_fffec8b2 = '\0';
      DAT_fffec8b1 = '\0';
      DAT_fffec8af = '\0';
      DAT_fffec8a3 = '\0';
    }
  }
  else {
    if (DAT_fffec8b4 == '\0') {
      DAT_fffec8ac = '\0';
      DAT_fffec8aa = 0x80;
      DAT_fffec8b4 = '\x01';
      DAT_fffec8b5 = '\x01';
    }
    if (param_4[1] < 0x80) {
      uVar4 = 0x100 - param_4[1];
      if (0xff < uVar4) {
        uVar4 = 0xff;
      }
    }
    else {
      uVar4 = (ushort)(char)param_4[1];
    }
    if (param_4[1] < 0x80) {
      uVar5 = 0x100 - param_4[1];
      if (0xff < uVar5) {
        uVar5 = 0xff;
      }
      bStack_30 = (byte)uVar5;
    }
    else {
      bStack_30 = param_4[1];
    }
    bVar1 = false;
    if ((DAT_fffec8ac != '\0') && (0x80 < DAT_fffec8aa)) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffec8af == '\0') {
        DAT_fffec8a9 = 0;
        DAT_fffec8af = '\x01';
      }
      DAT_fffec8be = param_3[1] <= DAT_fffec8a9;
      bVar3 = 0xff;
      if (DAT_fffec8a9 != 0xff) {
        bVar3 = DAT_fffec8a9 + 1;
      }
    }
    else {
      DAT_fffec8af = '\0';
      bVar3 = DAT_fffec8a9;
    }
    DAT_fffec8a9 = bVar3;
    cVar6 = '\0';
    if (bVar1) {
      cVar6 = DAT_fffec8be;
    }
    bVar1 = false;
    if (((uVar4 & 0xff) < 0x81) && (cVar6 != '\0')) {
      bVar1 = true;
    }
    if (bVar1) {
      if (DAT_fffec8b0 == '\0') {
        DAT_fffec8a5 = 0;
        DAT_fffec8b0 = '\x01';
      }
      DAT_fffec8bb = 0x13 < DAT_fffec8a5;
      bVar3 = 0xff;
      if (DAT_fffec8a5 != 0xff) {
        bVar3 = DAT_fffec8a5 + 1;
      }
    }
    else {
      DAT_fffec8b0 = '\0';
      bVar3 = DAT_fffec8a5;
    }
    DAT_fffec8a5 = bVar3;
    bVar2 = false;
    if ((DAT_fffec8ac != '\0') && (DAT_fffec8aa == 0x80)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec8a3 == '\0') {
        DAT_fffec89e = 0;
        DAT_fffec8a3 = '\x01';
      }
      DAT_fffec8bf = param_3[1] <= DAT_fffec89e;
      if (DAT_fffec89e < 0xff) {
        DAT_fffec89e = DAT_fffec89e + 1;
      }
      else {
        DAT_fffec89e = 0xff;
      }
    }
    else {
      DAT_fffec8a3 = '\0';
    }
    cVar7 = '\0';
    if (bVar2) {
      cVar7 = DAT_fffec8bf;
    }
    bVar2 = false;
    if ((DAT_fffec8ac != '\0') && (DAT_fffec8aa < 0x80)) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec8b1 == '\0') {
        DAT_fffec8a7 = 0;
        DAT_fffec8b1 = '\x01';
      }
      DAT_fffec8bd = param_3[1] <= DAT_fffec8a7;
      bVar3 = 0xff;
      if (DAT_fffec8a7 != 0xff) {
        bVar3 = DAT_fffec8a7 + 1;
      }
    }
    else {
      DAT_fffec8b1 = '\0';
      bVar3 = DAT_fffec8a7;
    }
    DAT_fffec8a7 = bVar3;
    cVar9 = '\0';
    if (bVar2) {
      cVar9 = DAT_fffec8bd;
    }
    bVar2 = false;
    if ((bStack_30 < 0x81) && (cVar9 != '\0')) {
      bVar2 = true;
    }
    if (bVar2) {
      if (DAT_fffec8b2 == '\0') {
        DAT_fffec8a6 = 0;
        DAT_fffec8b2 = '\x01';
      }
      DAT_fffec8bc = 0x13 < DAT_fffec8a6;
      bVar3 = 0xff;
      if (DAT_fffec8a6 != 0xff) {
        bVar3 = DAT_fffec8a6 + 1;
      }
    }
    else {
      DAT_fffec8b2 = '\0';
      bVar3 = DAT_fffec8a6;
    }
    DAT_fffec8a6 = bVar3;
    if ((param_13[1] < 0xa6) && (0x67 < param_12[1])) {
      cVar8 = '\0';
      if (bVar1) {
        cVar8 = DAT_fffec8bb;
      }
      DAT_fffec899 = '\x05';
      if (cVar8 == '\0') {
        if ((cVar6 == '\0') || (param_4[1] < 0x81)) {
          if ((param_4[1] < 0x81) || (bVar1 = cVar7 == '\0', cVar7 = '\0', bVar1)) {
            if ((cVar7 == '\0') || (DAT_fffec899 = '\x04', 0x7f < param_4[1])) {
              cVar6 = '\0';
              if (bVar2) {
                cVar6 = DAT_fffec8bc;
              }
              if (cVar6 == '\0') {
                if ((cVar9 == '\0') || (0x7f < param_4[1])) {
                  DAT_fffec899 = '\0';
                }
                else {
                  DAT_fffec899 = '\x02';
                }
              }
              else {
                DAT_fffec899 = '\x01';
              }
            }
          }
          else {
            DAT_fffec899 = '\x03';
          }
        }
        else {
          DAT_fffec899 = '\x06';
        }
      }
    }
    else {
      DAT_fffec899 = '\f';
    }
    DAT_fffec8ac = DAT_fffec899 == '\0';
    DAT_fffec8aa = param_2[1];
  }
  *param_14 = DAT_fffec898;
  param_14[1] = DAT_fffec899;
  return;
}

