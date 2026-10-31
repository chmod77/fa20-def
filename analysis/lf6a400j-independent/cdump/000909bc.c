
char FUN_000909bc(char param_1,char param_2,uint param_3,uint param_4,char param_5,char param_6,
                 uint param_7,uint param_8,uint param_9,ushort *param_10)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  ushort uVar5;
  ushort uVar6;
  
  param_3 = param_3 & 0xffff;
  uVar2 = param_3;
  uVar1 = LK_139FA4((uint)&T_02D238,param_3,param_9 & 0xffff);
  uVar6 = (ushort)uVar2;
  uVar5 = (ushort)uVar1;
  if ((param_5 == '\0') && (param_6 == '\0')) {
    uVar2 = LK_139C18((uint)&T_02D210,param_3,param_4 & 0xff);
    uVar1 = LK_13852C((uint)&T_02D224,param_7 & 0xff,param_8 & 0xff);
    iVar3 = __sdiv32_r1_by_r0((uVar1 & 0xff) * (int)(short)uVar2,0xff);
    sVar4 = (short)iVar3;
    uVar6 = uVar5 + sVar4;
    if (((short)uVar5 < 0) || ((sVar4 < 0 || (-1 < (short)uVar6)))) {
      if (((short)uVar5 < 0) && ((sVar4 < 0 && (-1 < (short)uVar6)))) {
        uVar6 = 0x8000;
      }
    }
    else {
      uVar6 = 0x7fff;
    }
  }
  if ((param_1 == '\x02') || (param_1 == '\x03')) {
    if (param_2 == '\0') {
      param_1 = '+';
      if ((param_5 != '\0') || (param_1 = '/', param_6 != '\0')) {
        uVar6 = uVar5;
      }
      if ((short)uVar6 < 0) {
        uVar6 = 0;
      }
    }
    else {
      uVar6 = 0;
    }
    if (uVar6 < 0x438) {
      if (uVar6 < 0x2d0) {
        uVar6 = 0x2d0;
      }
    }
    else {
      uVar6 = 0x437;
    }
    *param_10 = uVar6;
  }
  else {
    *param_10 = 0x4ce;
  }
  return param_1;
}

