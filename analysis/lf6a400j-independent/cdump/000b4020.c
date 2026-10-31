
void FUN_000b4020(char param_1,char param_2,char param_3,char param_4,char param_5,int param_6,
                 char param_7,char param_8,int param_9,byte param_10,byte param_11,char param_12,
                 char param_13,uint param_14,byte *param_15,undefined1 *param_16)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  int iVar6;
  ushort uVar8;
  int iVar7;
  short sVar9;
  
  if (param_11 < 0x19) {
    sVar5 = 1;
  }
  else if (param_11 < 0x23) {
    sVar5 = 2;
  }
  else if (param_11 < 0x2d) {
    sVar5 = 3;
  }
  else {
    sVar5 = 5;
    if (param_11 < 0x3c) {
      sVar5 = 4;
    }
  }
  sVar9 = 5;
  if (param_10 < 0x50) {
    sVar9 = 0;
  }
  uVar8 = sVar9 + sVar5;
  *param_16 = (char)uVar8;
  uVar3 = 1;
  if (1 < uVar8) {
    uVar3 = uVar8;
  }
  if (9 < uVar3) {
    uVar3 = 10;
  }
  iVar6 = (int)*(char *)(param_9 + (short)(uVar3 - 1));
  if (param_1 == '\0') {
    DAT_fffec711 = '\0';
  }
  else {
    uVar4 = param_14 & 0xffff;
    if (((param_7 == '\0') &&
        ((param_5 != '\0' || (((param_2 == '\0' && (param_3 == '\0')) && (param_13 != '\0')))))) ||
       (iVar7 = -6, -6 < iVar6)) {
      iVar7 = iVar6;
    }
    if ((param_4 != '\v') && (param_6 = iVar7, param_4 == '\f')) {
      param_6 = (int)param_8;
    }
    if (DAT_fffec711 == '\0') {
      DAT_fffec712 = '\0';
      DAT_fffec711 = '\x01';
    }
    bVar1 = (char)param_6 + 0x80;
    if (DAT_fffec712 != '\0') {
      FUN_0016b44c(&DAT_ffff198b,param_6 + 0x80,0x1a,param_14,uVar4,&DAT_00029046);
      bVar1 = DAT_ffff198b;
    }
    DAT_ffff198b = bVar1;
    bVar1 = DAT_ffff198b;
    DAT_fffec712 = '\x01';
    if (DAT_ffff198b < 0x80) {
      uVar2 = LK_133BCC((uint)&T_02E234,uVar4);
      uVar4 = LK_133BCC((uint)&T_02E234,uVar4);
      uVar3 = (ushort)uVar4;
    }
    else {
      uVar2 = LK_133BCC((uint)&T_02E228,uVar4);
      uVar4 = LK_133BCC((uint)&T_02E228,uVar4);
      uVar3 = (ushort)uVar4;
    }
    sVar5 = (short)((ulonglong)((longlong)(int)((uVar2 & 0xff) * (uint)bVar1) * 0x2000000) >> 0x20)
            - (uVar3 & 0xff);
    DAT_fffec710 = 0xff;
    if ((sVar5 < 0x80) && (DAT_fffec710 = 0, -0x81 < sVar5)) {
      DAT_fffec710 = (char)sVar5 + 0x80;
    }
    if (param_12 == '\0') {
      DAT_fffec710 = DAT_ffff198b;
    }
  }
  *param_15 = DAT_fffec710;
  return;
}

