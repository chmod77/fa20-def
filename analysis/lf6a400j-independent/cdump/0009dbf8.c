
void FUN_0009dbf8(char param_1,char param_2,uint param_3,uint param_4,byte param_5,
                 undefined1 *param_6,char *param_7,char *param_8,char *param_9)

{
  uint uVar1;
  uint uVar2;
  char cVar3;
  short sVar4;
  char cVar5;
  byte bVar6;
  
  if (param_2 == '\0') {
    DAT_fffec054 = '\0';
  }
  else {
    if (DAT_fffec054 == '\0') {
      DAT_fffec055 = '\0';
      DAT_fffec054 = '\x01';
    }
    uVar1 = LK_134A08((uint)&T_02D9C0,param_3 & 0xffff);
    DAT_fffec052 = (char)uVar1;
    uVar2 = LK_135400((uint)&T_02D9CC,param_4 & 0xff);
    cVar3 = (char)uVar2;
    if (DAT_fffec055 == '\0') {
      bVar6 = 0x3c;
    }
    else {
      bVar6 = 0x32;
    }
    cVar5 = '\0';
    DAT_fffec051 = cVar3;
    if (bVar6 <= param_5) {
      uVar2 = LK_134A08((uint)&T_02D9B4,param_3 & 0xffff);
      cVar5 = (char)uVar2;
    }
    sVar4 = (short)((ulonglong)((longlong)((int)(char)uVar1 * (int)cVar3) * 0x2000000) >> 0x20) +
            (short)cVar5;
    if (sVar4 < 0x80) {
      if (sVar4 < -0x80) {
        sVar4 = -0x80;
      }
    }
    else {
      sVar4 = 0x7f;
    }
    DAT_fffec050 = (undefined1)sVar4;
    DAT_fffec053 = cVar5;
    DAT_fffec055 = bVar6 <= param_5;
  }
  *param_7 = DAT_fffec051;
  *param_8 = DAT_fffec052;
  *param_9 = DAT_fffec053;
  if (param_1 == '\x01') {
    *param_6 = 0;
  }
  else {
    *param_6 = DAT_fffec050;
  }
  return;
}

