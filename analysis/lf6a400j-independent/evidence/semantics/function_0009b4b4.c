
int FUN_0009b4b4(char param_1,char param_2,char *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  short sVar4;
  char cVar5;
  
  pcVar2 = DAT_0009b518;
  if (param_2 < *DAT_0009b518) {
    if (param_1 == '\0') {
      bVar1 = PTR_DAT_0009b51c[4];
    }
    else {
      bVar1 = PTR_DAT_0009b51c[3];
    }
    iVar3 = (int)(char)bVar1;
    sVar4 = (short)*DAT_0009b518 - (ushort)bVar1;
    if (sVar4 < -0x80) {
      sVar4 = -0x80;
    }
    cVar5 = (char)sVar4;
    if (param_2 <= cVar5) goto LAB_0009b50e;
  }
  else {
    if (param_1 == '\0') {
      bVar1 = PTR_DAT_0009b51c[1];
    }
    else {
      bVar1 = *PTR_DAT_0009b51c;
    }
    iVar3 = (int)(char)bVar1;
    sVar4 = (ushort)bVar1 + (short)*DAT_0009b518;
    if (0x7f < sVar4) {
      sVar4 = 0x7f;
    }
    cVar5 = (char)sVar4;
    if (cVar5 <= param_2) goto LAB_0009b50e;
  }
  cVar5 = param_2;
LAB_0009b50e:
  *param_3 = cVar5;
  *pcVar2 = cVar5;
  return iVar3;
}

