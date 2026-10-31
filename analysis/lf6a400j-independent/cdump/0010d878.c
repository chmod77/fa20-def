
void FUN_0010d878(char param_1,int param_2,char param_3,int param_4,char *param_5)

{
  uint uVar1;
  ushort uVar2;
  byte bVar4;
  ushort uVar3;
  int iVar5;
  short sVar6;
  
  uVar3 = 0;
  iVar5 = 1;
  while( true ) {
    sVar6 = (short)iVar5;
    if (0x67 < sVar6) break;
    bVar4 = *(byte *)(param_2 + (short)(sVar6 + -1));
    if (param_3 != -0x5b) {
      bVar4 = *(byte *)(param_4 + (short)(sVar6 + -1));
    }
    uVar2 = 0;
    uVar1 = (uint)(char)(bVar4 & (&DAT_00023b08)[(short)(sVar6 + -1)]);
    for (bVar4 = 0; bVar4 < 8; bVar4 = bVar4 + 1) {
      if ((uVar1 & 1) != 0) {
        uVar2 = uVar2 + 1;
      }
      uVar1 = (int)(uVar1 & 0xff) >> 1;
    }
    uVar3 = uVar2 + (uVar3 & 0xff);
    if ((uVar3 < uVar2) || (0xff < uVar3)) {
      uVar3 = 0xff;
    }
    DAT_fffedcdc = (byte)uVar3;
    iVar5 = sVar6 + 1;
  }
  bVar4 = *(byte *)(param_4 + 0x14);
  if (param_3 == -0x5b) {
    bVar4 = *(byte *)(param_2 + 0x14);
  }
  uVar3 = (bVar4 & 1) == 0 ^ 1;
  if ((bVar4 & 2) != 0) {
    uVar3 = uVar3 + 1;
  }
  uVar2 = 0;
  if ((uVar3 <= DAT_fffedcdc) && (uVar2 = 0xff, (ushort)(DAT_fffedcdc - uVar3) < 0x100)) {
    uVar2 = DAT_fffedcdc - uVar3;
  }
  uVar3 = uVar2 & 0xff;
  if (0x7f < (uVar2 & 0xff)) {
    uVar3 = 0x7f;
  }
  if (param_1 == '\0') {
    *param_5 = (char)uVar3;
  }
  else if (uVar3 < 0x80) {
    *param_5 = (char)uVar3 + -0x80;
  }
  else {
    *param_5 = -1;
  }
  return;
}

