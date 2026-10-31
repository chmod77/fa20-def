
/* WARNING: Removing unreachable block (ram,0x0009f762) */
/* WARNING: Removing unreachable block (ram,0x0009f7b0) */
/* WARNING: Removing unreachable block (ram,0x0009f7de) */
/* WARNING: Removing unreachable block (ram,0x0009f86c) */

void FUN_0009f6c4(char param_1,char param_2,ushort param_3,short param_4,char param_5,char param_6,
                 char param_7,char param_8,char param_9,byte param_10,undefined4 param_11,
                 ushort param_12,char param_13,char param_14,char param_15,undefined1 param_16,
                 char param_17,char param_18,undefined1 *param_19)

{
  bool bVar1;
  bool bVar2;
  ushort uVar3;
  ushort uVar4;
  undefined1 uVar5;
  char cVar6;
  char cVar7;
  
  bVar1 = param_14 != '\0';
  cVar7 = '\x01';
  if (param_10 == 0) {
    cVar7 = DAT_fffec113;
  }
  cVar6 = '\x01';
  if (DAT_fffec10e <= param_10) {
    cVar6 = DAT_fffec10d;
  }
  if (cVar6 != '\0') {
    cVar7 = '\0';
  }
  if (DAT_fffec10c == '\0') {
    uVar4 = 0x7e00;
  }
  else {
    uVar4 = 0x8000;
  }
  if (DAT_fffec112 == '\0') {
    uVar3 = 0x1800;
  }
  else {
    uVar3 = 0x1600;
  }
  bVar2 = false;
  if (((param_13 != '\0') && (uVar3 <= param_3)) && (param_3 <= uVar4)) {
    bVar2 = true;
  }
  if ((((!bVar2) || (DAT_fffec10f == '\0')) || ((bVar1 || (uVar5 = 9, param_18 == '\0')))) &&
     (uVar5 = 10, cVar7 == '\0')) {
    if ((param_17 == '\0') && (param_2 != '\0')) {
      uVar5 = 0xc;
    }
    else if ((bVar2) && (param_15 != '\0')) {
      uVar5 = 0xd;
    }
    else if ((bVar2) && (param_14 != '\0')) {
      uVar5 = 0xe;
    }
    else if ((!bVar2) || ((param_12 < 100 || (bVar1)))) {
      if ((!bVar2) || ((99 < param_12 || (bVar1)))) {
        uVar5 = 0;
      }
      else {
        uVar5 = 0x10;
      }
    }
    else {
      uVar5 = 0xf;
    }
  }
  if ((((bVar2) && (DAT_fffec110 == '\0')) && (!bVar1)) && (param_18 != '\0')) {
    uVar5 = 8;
  }
  if (param_5 == '\0') {
    if ((param_6 != '\0') || (param_4 == 0)) {
      *param_19 = 2;
    }
    else if (param_7 == '\0') {
      if (param_8 == '\0') {
        if (param_1 == '\0') {
          *param_19 = 5;
        }
        else if (((bVar2) && (param_9 != '\0')) && (param_15 != '\0')) {
          *param_19 = 6;
        }
        else if (((bVar2) && (param_9 != '\0')) && (param_14 != '\0')) {
          *param_19 = 7;
        }
        else {
          *param_19 = uVar5;
        }
      }
      else {
        *param_19 = 4;
      }
    }
    else {
      *param_19 = 3;
    }
  }
  else {
    *param_19 = 1;
  }
  DAT_fffec113 = cVar7;
  DAT_fffec110 = param_16;
  DAT_fffec10f = param_16;
  DAT_fffec10e = param_10;
  DAT_fffec10d = cVar6;
  DAT_fffec111 = param_4 == 0;
  DAT_fffec10c = param_3 <= uVar4;
  DAT_fffec112 = uVar3 <= param_3;
  return;
}

