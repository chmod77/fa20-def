
void FUN_00098fac(char param_1,char param_2,char param_3,char param_4,uint param_5,char param_6,
                 char param_7,char param_8,uint param_9,uint param_10,char param_11,char param_12,
                 char param_13,char param_14,char param_15,char param_16,char param_17,char param_18
                 ,char param_19,uint param_20,byte param_21,char param_22,char param_23,
                 ushort param_24,char param_25,char param_26,ushort param_27,char param_28,
                 char param_29,char param_30,byte param_31,byte param_32,char param_33,
                 char *param_34,char *param_35)

{
  char cVar1;
  char cVar2;
  short sVar3;
  char cVar4;
  uint uVar5;
  
  uVar5 = (param_9 & 0xff) + (param_10 & 0xff);
  cVar1 = '\x7f';
  if ((uVar5 < 0x120) && (cVar1 = -0x80, 0x1f < uVar5)) {
    cVar1 = (char)uVar5 + '`';
  }
  *param_35 = cVar1;
  if ((((param_11 != '\x01') && (param_12 = param_13, param_11 != '\x02')) &&
      (param_12 = param_14, param_11 != '\x03')) && (param_11 == '\x04')) {
    param_12 = param_15;
  }
  if (((param_6 == '\0') && (uVar5 = (int)(param_20 & 0xffff) >> 2, 4 < uVar5)) && (uVar5 < 0x51)) {
    uVar5 = LK_134A08((uint)&T_02D5BC,param_5 & 0xffff);
    cVar2 = (char)uVar5;
  }
  else {
    cVar2 = -0x32;
  }
  if (param_1 == '\x03') {
    sVar3 = (((short)(char)((uint)(param_22 * 0xb4) >> 8) + (short)param_2 + (short)param_23) -
            (ushort)param_21) + (param_24 & 0xff) + (short)param_30 + (ushort)param_31 * -2 +
            (ushort)param_32 + (short)param_33;
    cVar4 = '\x7f';
    if ((sVar3 < 0x100) && (cVar4 = -0x80, -1 < sVar3)) {
      cVar4 = (char)sVar3 + -0x80;
    }
  }
  else {
    cVar4 = '\n';
    if (param_1 == '\x02') {
      cVar4 = param_3;
    }
  }
  if (((((param_16 != '\x01') && (param_11 == '\x01')) ||
       ((param_17 != '\x01' && (param_11 == '\x02')))) ||
      ((param_18 != '\x01' && (param_11 == '\x03')))) ||
     ((param_19 != '\x01' && (param_11 == '\x04')))) {
    sVar3 = (((short)(char)((uint)(param_22 * 0xb4) >> 8) + (short)param_12 + (short)param_23) -
            (ushort)param_21) + (short)param_30 + (ushort)param_31 * -2 + (ushort)param_32;
    cVar4 = '\x7f';
    if ((sVar3 < 0x80) && (cVar4 = -0x80, -0x81 < sVar3)) {
      cVar4 = (char)sVar3;
    }
  }
  if (param_4 == '\0') {
    if (param_29 == '\0') {
      if (param_7 == '\0') {
        DAT_fffebf90 = cVar4;
        if (param_8 != '\0') {
          DAT_fffebf90 = cVar1;
        }
      }
      else {
        DAT_fffebf90 = '(';
      }
    }
    else {
      DAT_fffebf90 = '\n';
    }
  }
  if ((((param_25 != '\0') && (param_6 != '\0')) && (param_26 < '\x01')) && (param_27 < 0x2801)) {
    DAT_fffebf90 = param_28 + -0x20;
  }
  if (DAT_fffebf90 <= cVar2) {
    DAT_fffebf90 = cVar2;
  }
  if ('w' < DAT_fffebf90) {
    DAT_fffebf90 = 'x';
  }
  *param_34 = DAT_fffebf90;
  return;
}

