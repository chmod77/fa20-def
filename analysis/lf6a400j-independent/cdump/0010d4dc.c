
void FUN_0010d4dc(int param_1,ushort param_2,undefined4 param_3,byte param_4,ushort param_5,
                 char param_6,char *param_7,char *param_8)

{
  int iVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  
  cVar2 = '\0';
  for (iVar4 = 1; iVar4 < 0x68; iVar4 = iVar4 + 1) {
    iVar1 = (int)(short)((short)iVar4 + -1);
    if (((&DAT_00023b08)[iVar1] & *(byte *)(param_1 + iVar1) & (&DAT_00023a22)[iVar1]) != 0) {
      cVar2 = '\x01';
    }
    DAT_fffedcc7 = cVar2;
  }
  cVar2 = '\0';
  if (DAT_fffedcc7 != '\0') {
    cVar2 = DAT_fffedcc8;
  }
  if (param_6 != '\0') {
    cVar2 = '\x01';
  }
  cVar3 = '\0';
  if (cVar2 != '\0') {
    cVar3 = '@';
  }
  *param_8 = cVar2;
  if (((param_2 < 0x4b0f) || (param_4 < 0x20)) || (0xfffb < param_5)) {
    DAT_fffedcc6 = '\0';
  }
  else {
    DAT_fffedcc6 = '\x04';
  }
  if (((*(byte *)(param_1 + 0x14) & 2) == 0) && ((*(byte *)(param_1 + 0x14) & 1) == 0)) {
    DAT_fffedcc5 = '\0';
  }
  else {
    DAT_fffedcc5 = '\x10';
  }
  if (((((int)*(char *)(param_1 + 0x12) & 0x40U) == 0) &&
      (((int)*(char *)(param_1 + 0x12) & 0x80U) == 0)) &&
     ((((int)*(char *)(param_1 + 0x2d) & 0x80U) == 0 && ((*(byte *)(param_1 + 0x2c) & 0x40) == 0))))
  {
    DAT_fffedcc4 = '\0';
  }
  else {
    DAT_fffedcc4 = ' ';
  }
  *param_7 = DAT_fffedcc4 + DAT_fffedcc5 + DAT_fffedcc6 + cVar3 + '\x03';
  DAT_fffedcc8 = cVar2;
  return;
}

