
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008e4d0(char param_1,uint param_2,char param_3,ushort param_4,uint param_5,ushort param_6,
                 char param_7,char param_8,char param_9,char param_10,short *param_11,char *param_12
                 )

{
  int iVar1;
  uint uVar2;
  short sVar3;
  
  if ((param_8 != '\0') || (param_1 == '\x01')) {
    if (param_3 == '\x02') {
      if (param_6 < 0x2d0) {
        sVar3 = 0;
      }
      else {
        sVar3 = param_6 - 0x2d0;
      }
    }
    else {
      sVar3 = 0x1fe;
    }
    if ((param_3 == '\0') && (sVar3 = 0, 0x437 < param_4)) {
      sVar3 = param_4 - 0x438;
    }
    if (param_3 == '\x01') {
      param_5 = param_5 & 0xffff;
      iVar1 = __udiv16b_r1_by_r0(param_5,0x168);
      sVar3 = (short)iVar1;
    }
    if (param_7 == '\0') {
      sVar3 = _DAT_fffebcdc;
    }
    if ((param_1 == '\x01') || ((param_3 == '\0' && (param_10 == '\0')))) {
      sVar3 = 0x1fe;
    }
    if (param_7 == '\0') {
      uVar2 = (uint)DAT_fffebcde;
    }
    else {
      uVar2 = __udiv16_r1_by_r0(param_5 & 0xffff,0x168);
      if (0xff < (uVar2 & 0xffff)) {
        uVar2 = 0xff;
      }
    }
    DAT_fffebcda = (char)uVar2;
    if (((param_3 != '\x01') && (uVar2 = 3, param_3 != '\0')) && (uVar2 = 0xfe, param_3 == '\x02'))
    {
      uVar2 = 2;
    }
    _DAT_fffebcdc = sVar3;
    DAT_fffebcde = DAT_fffebcda;
    if (((param_2 & 0xff) != (uVar2 & 0xff)) || (_DAT_fffebcd8 = sVar3, param_9 != '\0')) {
      _DAT_fffebcd8 = 0x1fe;
    }
  }
  *param_11 = _DAT_fffebcd8;
  *param_12 = DAT_fffebcda;
  return;
}

