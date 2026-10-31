
void FUN_00096f3c(char param_1,uint param_2,uint param_3,byte param_4,uint param_5,char param_6,
                 uint param_7,uint param_8,char param_9,ushort param_10,uint param_11,char *param_12
                 )

{
  short sVar3;
  uint uVar1;
  int iVar2;
  char cVar4;
  ushort uVar5;
  int iVar6;
  
  iVar6 = (param_2 & 0xff) * 0x80;
  if (param_1 == '\0') {
    uVar5 = (ushort)param_4 << 7;
    if ((ushort)((ushort)param_4 << 7) <= param_10) {
      uVar5 = param_10;
    }
    iVar6 = ((param_8 & 0xff) * 0x5a + (iVar6 - (uint)uVar5) + param_9 * 0x5a) - (param_11 & 0xffff)
    ;
    sVar3 = 0x7fff;
    if ((int)&DAT_00009000 <= iVar6) goto LAB_00096fd8;
  }
  else {
    iVar6 = ((iVar6 + (param_3 & 0xff) * -0x80) - (uint)param_10) - (param_11 & 0xffff);
  }
  sVar3 = -0x8000;
  if (-0x7001 < iVar6) {
    sVar3 = (short)iVar6 + -0x1000;
  }
LAB_00096fd8:
  if (((param_6 == '\0') && (uVar1 = (int)(param_7 & 0xffff) >> 2, 4 < uVar1)) && (uVar1 < 0x51)) {
    uVar1 = LK_134A08((uint)&T_02D4A0,param_5 & 0xffff);
    cVar4 = (char)uVar1;
  }
  else {
    cVar4 = -0x32;
  }
  iVar2 = (int)(short)((ulonglong)((longlong)(int)sVar3 * 0x2000000) >> 0x20);
  iVar6 = (int)cVar4;
  if (iVar6 < iVar2) {
    if (iVar2 < 0x80) {
      iVar6 = iVar2;
      if (iVar2 < -0x80) {
        iVar6 = -0x80;
      }
    }
    else {
      iVar6 = 0x7f;
    }
  }
  if ((char)iVar6 < 'x') {
    *param_12 = (char)iVar6;
  }
  else {
    *param_12 = 'x';
  }
  return;
}

