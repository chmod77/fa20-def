
/* WARNING: Removing unreachable block (ram,0x000e69a8) */

void FUN_000e6908(char param_1,char param_2,char param_3,char param_4,byte param_5,char param_6,
                 ushort param_7,ushort param_8,ushort param_9,uint param_10,char param_11,
                 char param_12,undefined1 *param_13)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  
  uVar3 = LK_133B38((uint)&T_02F28C,param_10 & 0xff);
  bVar1 = false;
  if (param_6 == '\0') {
    bVar1 = (uVar3 & 0xff) <= (uint)DAT_fffed365;
    cVar2 = -1;
    if (DAT_fffed365 != 0xff) {
      cVar2 = DAT_fffed365 + 1;
    }
  }
  else {
    DAT_fffed365 = '\0';
    cVar2 = DAT_fffed365;
  }
  DAT_fffed365 = cVar2;
  if (DAT_fffed366 == '\0') {
    DAT_fffed366 = false;
    if ((0x19ff < param_7) && (param_7 < 0x2701)) {
      DAT_fffed366 = true;
    }
  }
  else {
    DAT_fffed366 = false;
    if ((0x17ff < param_7) && (param_7 < 0x2801)) {
      DAT_fffed366 = true;
    }
  }
  if (DAT_fffed364 == '\0') {
    bVar5 = 0x28;
  }
  else {
    bVar5 = 0x23;
  }
  uVar4 = 0;
  if ((((((param_1 != '\0') && (param_11 != '\0')) && (param_12 == '\0')) &&
       ((param_2 != '\0' && (param_3 != '\0')))) &&
      ((param_4 != '\0' && ((bVar5 <= param_5 && (bVar1)))))) &&
     (((bool)DAT_fffed366 && ((param_8 < 3 && (0xd4c < param_9)))))) {
    uVar4 = 1;
  }
  *param_13 = uVar4;
  DAT_fffed364 = bVar5 <= param_5;
  return;
}

