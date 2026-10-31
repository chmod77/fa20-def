
void FUN_00099874(char param_1,uint param_2,byte param_3,char param_4,uint param_5,uint param_6,
                 byte *param_7,char *param_8)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  char cVar4;
  
  if (((param_4 == '\0') &&
      ((param_6 & 0xff) <=
       (uint)((ulonglong)((longlong)(int)(param_5 & 0xffff) * 0x2000000) >> 0x20))) ||
     (cVar4 = '\x01', DAT_fffebfb8 <= param_3)) {
    cVar4 = DAT_fffebfba;
  }
  if (param_3 != 0) {
    cVar4 = '\0';
  }
  DAT_fffebfba = cVar4;
  bVar2 = DAT_fffebfb9;
  if ((param_1 == '\x02') && (cVar4 == '\0')) {
    uVar1 = LK_133BCC((uint)&T_02D608,param_2);
    uVar3 = (uVar1 & 0xff) + (uint)DAT_fffebfb9;
    uVar1 = 0xff;
    if ((uVar3 < 0x180) && (uVar1 = 0, 0x7f < uVar3)) {
      uVar1 = uVar3 - 0x80;
    }
    bVar2 = (byte)uVar1;
    if (0x80 < (uVar1 & 0xff)) {
      bVar2 = 0x80;
    }
  }
  if ((param_1 == '\x02') && (cVar4 != '\0')) {
    uVar1 = LK_133BCC((uint)&T_02D5FC,param_2 & 0xffff);
    uVar3 = (uVar1 & 0xff) + (uint)DAT_fffebfb9;
    uVar1 = 0xff;
    if ((uVar3 < 0x180) && (uVar1 = 0, 0x7f < uVar3)) {
      uVar1 = uVar3 - 0x80;
    }
    bVar2 = 0x80;
    if ((uVar1 & 0xff) < 0x81) {
      bVar2 = (byte)uVar1;
    }
  }
  if (param_1 == '\x04') {
    bVar2 = 0x76;
  }
  else if (param_1 == '\x03') {
    bVar2 = 0x80;
  }
  *param_7 = bVar2;
  *param_8 = cVar4;
  DAT_fffebfb9 = bVar2;
  DAT_fffebfb8 = param_3;
  return;
}

