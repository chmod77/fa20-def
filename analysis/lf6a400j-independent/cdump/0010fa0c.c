
void FUN_0010fa0c(int param_1,int param_2,char param_3,char param_4,int param_5,char param_6,
                 byte param_7,byte *param_8)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  char cVar6;
  int iVar7;
  short sVar8;
  
  cVar3 = '\0';
  cVar4 = '\0';
  cVar6 = '\0';
  iVar7 = 1;
  while( true ) {
    sVar8 = (short)iVar7;
    if (0x67 < sVar8) break;
    bVar5 = *(byte *)(param_2 + (short)(sVar8 + -1));
    bVar1 = *(byte *)(param_1 + (short)(sVar8 + -1));
    bVar2 = (&DAT_00023a9e)[(short)(sVar8 + -1)];
    if ((bVar5 & bVar2) != 0) {
      cVar3 = '\x01';
    }
    if ((bVar1 & bVar5 & bVar2) != 0) {
      cVar4 = '\x01';
    }
    if ((bVar1 & *(byte *)(param_5 + (short)(sVar8 + -1)) & bVar2) != 0) {
      cVar6 = '\x01';
    }
    iVar7 = sVar8 + 1;
    DAT_fffedd04 = cVar4;
    DAT_fffedd05 = cVar3;
    DAT_fffedd06 = cVar6;
  }
  bVar5 = param_7;
  if ((((DAT_fffedd05 == '\0') && (DAT_fffedd06 == '\0')) && (param_3 != '\0')) &&
     (param_4 == '\x01')) {
    bVar1 = 0xfe;
    if (param_7 != 0xff) {
      bVar1 = param_7;
    }
    bVar5 = bVar1 + 1;
    if (2 < (byte)(bVar1 + 1)) {
      bVar5 = 3;
    }
  }
  if (param_6 == '\0') {
    if ((DAT_fffedd04 == '\0') && ((DAT_fffedd05 == '\0' || (2 < param_7)))) {
      *param_8 = bVar5;
    }
    else {
      *param_8 = 0;
    }
  }
  else {
    *param_8 = 3;
  }
  return;
}

