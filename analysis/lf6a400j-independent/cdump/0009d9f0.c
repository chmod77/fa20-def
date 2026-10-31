
void FUN_0009d9f0(char param_1,uint param_2,byte param_3,uint param_4,uint param_5,
                 undefined1 *param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  
  if (param_1 != '\x03') {
    DAT_fffec046 = '\0';
  }
  else {
    if (DAT_fffec046 == '\0') {
      DAT_fffec045 = '\0';
      DAT_fffec046 = '\x01';
    }
    cVar4 = 0x1f < param_3;
    if (0x1f >= param_3) {
      cVar4 = DAT_fffec045;
    }
    if (cVar4 == '\0') {
      DAT_fffec044 = 0;
      DAT_fffec045 = cVar4;
    }
    else {
      uVar1 = LK_134A08((uint)&T_02D990,param_5 & 0xffff);
      uVar2 = LK_138984((uint)&T_02D97C,param_2,param_4);
      iVar3 = (int)(short)(((ushort)uVar2 & 0xff) * (short)(char)uVar1);
      DAT_fffec044 = 0x7f;
      DAT_fffec045 = cVar4;
      if ((iVar3 < 0x3f81) && (DAT_fffec044 = 0x80, -0x3f82 < iVar3)) {
        DAT_fffec044 = (undefined1)((ulonglong)((longlong)iVar3 * 0x2000000) >> 0x20);
      }
    }
  }
  if (param_1 != '\x03') {
    *param_6 = 0;
  }
  else {
    *param_6 = DAT_fffec044;
  }
  return;
}

