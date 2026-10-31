
void FUN_0009dac8(char param_1,byte param_2,undefined4 param_3,ushort param_4,ushort param_5,
                 char *param_6)

{
  bool bVar1;
  byte bVar3;
  uint uVar2;
  short sVar5;
  char cVar6;
  undefined1 uVar7;
  char cVar4;
  
  if (DAT_fffec04b == '\0') {
    bVar3 = 200;
  }
  else {
    bVar3 = 0xc0;
  }
  if ((param_1 == '\x02') || (bVar1 = false, param_1 == '\x03')) {
    bVar1 = bVar3 <= param_2;
  }
  if (param_1 != '\x03') {
    DAT_fffec04c = '\0';
  }
  else {
    if (DAT_fffec04c == '\0') {
      DAT_fffec049 = '\0';
      DAT_fffec04a = 0;
      DAT_fffec04c = '\x01';
    }
    cVar6 = 0x1f < param_2;
    if (0x1f >= param_2) {
      cVar6 = DAT_fffec049;
    }
    uVar7 = 1;
    if (cVar6 == '\0') {
      DAT_fffec048 = '\0';
      DAT_fffec049 = cVar6;
      DAT_fffec04a = uVar7;
    }
    else {
      if (bVar1) {
        uVar2 = LK_134A08((uint)&T_02D99C,(uint)param_4);
        cVar4 = (char)uVar2;
      }
      else {
        uVar2 = LK_134A08((uint)&T_02D9A8,(uint)param_4);
        cVar4 = (char)uVar2;
      }
      sVar5 = (param_5 & 0xff) + (short)cVar4;
      if (sVar5 < 0x100) {
        if (sVar5 < 0) {
          DAT_fffec048 = -0x80;
          DAT_fffec049 = cVar6;
          DAT_fffec04a = uVar7;
        }
        else {
          DAT_fffec048 = (char)sVar5 + -0x80;
          DAT_fffec049 = cVar6;
          DAT_fffec04a = uVar7;
        }
      }
      else {
        DAT_fffec048 = '\x7f';
        DAT_fffec049 = cVar6;
        DAT_fffec04a = uVar7;
      }
    }
  }
  if (param_1 != '\x03') {
    *param_6 = '\0';
  }
  else {
    *param_6 = DAT_fffec048;
  }
  DAT_fffec04b = bVar1;
  return;
}

