
void FUN_0010fcc4(char param_1,int param_2,int param_3,char param_4,char param_5,byte param_6,
                 byte *param_7)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  short sVar5;
  
  cVar1 = '\0';
  iVar4 = 1;
  while( true ) {
    sVar5 = (short)iVar4;
    if (0x67 < sVar5) break;
    cVar3 = '\x01';
    if ((*(byte *)(param_2 + (short)(sVar5 + -1)) & *(byte *)(param_3 + (short)(sVar5 + -1))) == 0)
    {
      cVar3 = cVar1;
    }
    cVar1 = cVar3;
    iVar4 = sVar5 + 1;
    DAT_fffedd08 = cVar1;
  }
  if ((param_1 == '\x01') && (param_4 != '\0')) {
    bVar2 = 0xfe;
    if (param_6 != 0xff) {
      bVar2 = param_6;
    }
    param_6 = 0x28;
    if ((byte)(bVar2 + 1) < 0x28) {
      param_6 = bVar2 + 1;
    }
  }
  if (param_5 == '\0') {
    if (DAT_fffedd08 == '\0') {
      *param_7 = param_6;
    }
    else {
      *param_7 = 0;
    }
  }
  else {
    *param_7 = 0x28;
  }
  return;
}

