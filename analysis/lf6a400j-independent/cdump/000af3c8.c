
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000af3c8(char param_1,ushort param_2,char param_3,ushort param_4,byte param_5,char param_6,
                 uint param_7,uint param_8,uint param_9,uint param_10,uint param_11,char param_12,
                 char param_13,char param_14,short *param_15,undefined2 *param_16)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  uint uVar7;
  
  uVar1 = LK_135ED8((uint)&T_02E07C,(param_9 & 0xffff) >> 8,param_10 & 0xff);
  *param_16 = (short)uVar1;
  if (param_1 == '\x03') {
    uVar6 = (uVar1 & 0xffff) - (uint)_DAT_fffec5ce;
    param_11 = param_11 & 0xffff;
    uVar7 = 0xffffffff;
    if (((int)uVar6 < 0x8000) && (uVar7 = 0, -0x8001 < (int)uVar6)) {
      uVar7 = (uVar6 & 0xffff) - 0x8000;
    }
    if (DAT_fffec5d0 == '\0') {
      DAT_fffec5d0 = '\x01';
    }
    if ((param_12 == '\0') || ((param_14 == '\0' && (param_13 != '\0')))) {
      if (param_13 != '\0') {
        uVar6 = LK_133BCC((uint)&T_02E070,param_11);
      }
      else {
        uVar6 = LK_133BCC((uint)&T_02E064,param_11);
      }
    }
    else {
      uVar6 = LK_133BCC((uint)&T_02E058,param_11);
    }
    uVar7 = (uVar7 & 0xffff) * 0xb66;
    uVar4 = uVar7 + 0xfa4d0000;
    uVar7 = (uint)(uVar7 < uVar4);
    if ((0 < (int)-uVar7) || ((uVar7 == 0 && (0x7fffffff < uVar4)))) {
      uVar4 = 0x7fffffff;
    }
    iVar2 = __sdiv32_r1_by_r0(uVar4,0x4ff);
    iVar3 = 0x7fff;
    if ((iVar2 < 0x8000) && (iVar3 = -0x8000, -0x8001 < iVar2)) {
      iVar3 = iVar2;
    }
    iVar3 = __sdiv32_r1_by_r0((short)iVar3 * 0x400,0x199a);
    sVar5 = 0x7fff;
    if ((iVar3 < 0x8000) && (sVar5 = -0x8000, -0x8001 < iVar3)) {
      sVar5 = (short)iVar3;
    }
    iVar3 = (int)((uVar6 & 0xff) * (int)sVar5) >> 6;
    _DAT_fffec5cc = -1;
    if ((iVar3 < 0x8000) && (_DAT_fffec5cc = 0, -0x8001 < iVar3)) {
      _DAT_fffec5cc = (short)iVar3 + -0x8000;
    }
    uVar7 = param_7 >> 6 & 0x3ff;
    uVar6 = 0;
    if ((3 < uVar7) && (uVar6 = 0xff, (uVar7 - 4 & 0xffff) < 0x100)) {
      uVar6 = uVar7 - 4;
    }
    uVar4 = uVar7 + 4;
    if ((uVar4 < uVar7) || (0xff < uVar4)) {
      uVar4 = 0xff;
    }
    if ((((param_2 < 100) && (param_3 != '\0')) || ((0x7fcc < param_4 && (param_4 < 0x8033)))) ||
       ((((0x6b < param_5 && (param_5 < 0x94)) && (param_6 == '\0')) &&
        (((uVar6 & 0xff) <= (param_8 & 0xff) && ((param_8 & 0xff) < (uVar4 & 0xff))))))) {
      _DAT_fffec5cc = -0x8000;
    }
  }
  else {
    DAT_fffec5d0 = '\0';
  }
  *param_15 = _DAT_fffec5cc;
  _DAT_fffec5ce = (short)uVar1;
  return;
}

