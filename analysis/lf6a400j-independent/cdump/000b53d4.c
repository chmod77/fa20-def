
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000b53d4(ushort param_1,byte param_2,byte param_3,byte param_4,uint param_5,uint param_6,
                 uint param_7,uint param_8,uint param_9,byte param_10,char param_11,short param_12,
                 ushort param_13,byte param_14,byte param_15,uint param_16,uint param_17,
                 byte param_18,byte param_19,uint param_20,char param_21,ushort *param_22,
                 ushort *param_23,undefined2 *param_24,undefined1 *param_25,byte *param_26,
                 undefined1 *param_27,short *param_28)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  short sVar9;
  uint uVar10;
  int iVar11;
  ushort uStack_38;
  short sStack_34;
  
  iVar5 = (param_20 & 0xffff) - 0x8000;
  if (iVar5 < 0x8000) {
    if (iVar5 < -0x8000) {
      iVar5 = -0x8000;
    }
  }
  else {
    iVar5 = 0x7fff;
  }
  if (param_11 == '\0') {
    DAT_fffec742 = '\0';
    goto LAB_000b58e8;
  }
  if (DAT_fffec742 == '\0') {
    DAT_fffec741 = 0;
    DAT_fffec73e = 0;
    DAT_fffec73c = 0;
    DAT_fffec73d = 0;
    _DAT_fffec73a = 0;
    DAT_fffec740 = 0;
    DAT_fffec742 = '\x01';
  }
  uVar10 = ((param_17 & 0xff) * (param_16 & 0xffff) >> 1) + (param_17 & 0xff) * -0x4000;
  sVar6 = 0x7fff;
  if (((int)uVar10 < 0x8000) && (sVar6 = -0x8000, -0x8001 < (int)uVar10)) {
    sVar6 = (short)uVar10;
  }
  uStack_38 = sVar6 + _DAT_fffec73a;
  if (((sVar6 < 0) || ((short)_DAT_fffec73a < 0)) || (-1 < (short)uStack_38)) {
    if (((sVar6 < 0) && ((short)_DAT_fffec73a < 0)) && (-1 < (short)uStack_38)) {
      uStack_38 = 0x8000;
    }
  }
  else {
    uStack_38 = 0x7fff;
  }
  uVar2 = LK_133B38((uint)&T_02E300,param_8 & 0xff);
  DAT_fffec738 = (undefined1)uVar2;
  if (param_10 != 0) {
    param_6 = (uint)(short)param_6;
    if ((int)param_6 < 0) {
      uVar10 = param_6;
      if (((int)param_6 < 0) && (uVar10 = -param_6, 0x7fff < (int)uVar10)) {
        uVar10 = 0x7fff;
      }
      uVar10 = LK_134E2C((uint)&T_02E290,uVar10);
      uVar10 = -(int)(short)uVar10;
      uVar3 = 0x7fff;
      if ((int)uVar10 < 0x8000) {
        uVar3 = uVar10;
      }
      _DAT_fffec744 = (short)uVar3;
    }
    else {
      uVar3 = LK_134E2C((uint)&T_02E29C,param_6);
      _DAT_fffec744 = (short)uVar3;
    }
  }
  if (param_10 == 0) {
    sStack_34 = (short)param_6;
    param_6 = (uint)sStack_34;
    uVar3 = param_6;
    if ((int)param_6 < 0) {
      uVar10 = -param_6;
      sStack_34 = (short)uVar10;
      if (0x7fff < (int)uVar10) {
        sStack_34 = 0x7fff;
      }
      uVar3 = (int)sStack_34;
    }
    bVar1 = (int)param_6 < 0;
    if (bVar1) {
      uVar10 = LK_134E2C((uint)&T_02E2A8,(int)(short)uVar3);
      uVar10 = -(int)(short)uVar10;
      uVar3 = LK_134E2C((uint)&T_02E2B4,(int)sStack_34);
      uVar3 = -(int)(short)uVar3;
    }
    if ((param_8 & 0xff) < 100) {
      uVar10 = uVar3;
      if (bVar1) goto joined_r0x000b5664;
      uVar10 = LK_134E2C((uint)&T_02E2CC,param_6);
      _DAT_fffec746 = (short)uVar10;
    }
    else if (bVar1) {
joined_r0x000b5664:
      _DAT_fffec746 = (short)uVar10;
      if (0x7fff < (int)uVar10) {
        _DAT_fffec746 = 0x7fff;
      }
    }
    else {
      uVar10 = LK_134E2C((uint)&T_02E2C0,param_6);
      _DAT_fffec746 = (short)uVar10;
    }
  }
  sVar6 = _DAT_fffec746;
  if (param_10 != 0) {
    sVar6 = _DAT_fffec744;
  }
  sVar9 = (short)param_6;
  if (sVar9 < 0) {
    param_6 = -(int)sVar9;
  }
  if ((undefined *)(param_6 & 0xffff) < (undefined *)0xfffe) {
    if (((undefined *)(param_6 & 0xffff) < &DAT_0000fffd) ||
       (bVar4 = DAT_fffec73f, DAT_fffec73f == 0)) {
      bVar4 = 0x10;
    }
  }
  else {
    bVar4 = 0x10;
  }
  _DAT_fffec734 = sVar6;
  DAT_fffec737 = bVar4;
  if (sVar9 < 0) {
    uVar10 = LK_13852C((uint)&T_02E2EC,param_5 & 0xff,param_7 & 0xff);
  }
  else {
    uVar10 = LK_13852C((uint)&T_02E2D8,param_5 & 0xff,param_7 & 0xff);
  }
  DAT_fffec736 = (undefined1)uVar10;
  if (param_21 == '\0') {
    uVar10 = (uVar2 & 0xff) * (uVar10 & 0xff) * 0x10 >> 0xc;
  }
  else {
    uVar10 = (uVar2 & 0xff) * (uint)bVar4 * (uVar10 & 0xff) * 0x10 >> 0x10;
  }
  iVar11 = (int)sVar6 * uVar10;
  sVar6 = 0x7fff;
  _DAT_fffec732 = (undefined2)uVar10;
  if (iVar11 < 0x7fff01) {
    if (iVar11 < -0x7fff01) {
      sVar6 = -0x8000;
    }
    else {
      sVar6 = (short)((uint)iVar11 >> 8);
    }
  }
  uVar7 = sVar6 + _DAT_fffec73a;
  if (((sVar6 < 0) || ((short)_DAT_fffec73a < 0)) || (-1 < (short)uVar7)) {
    if (((sVar6 < 0) && ((short)_DAT_fffec73a < 0)) && (-1 < (short)uVar7)) {
      uVar7 = 0x8000;
    }
  }
  else {
    uVar7 = 0x7fff;
  }
  if ((((param_9 & 0xff) <= (uint)param_18 * 0xfa >> 8) && (DAT_fffec73d < DAT_fffec73c)) &&
     ((short)_DAT_fffec73a < 0)) {
    uVar7 = 0;
  }
  if ((DAT_fffec73e < param_10) && ((short)_DAT_fffec73a < -0x667)) {
    uVar7 = 0xf999;
  }
  bVar1 = false;
  if ((((DAT_fffec740 < param_19) && (0x7f00 < param_1)) && (param_1 < 0x8a00)) &&
     ((param_3 < param_2 && (param_2 < param_4)))) {
    bVar1 = true;
  }
  if ((param_14 <= DAT_fffec741) && (param_13 = uVar7, bVar1)) {
    param_13 = uStack_38;
  }
  if ((((param_12 != -0x5ac1) || (uVar7 = 0x253f, (short)param_13 < 0x2540)) &&
      (uVar7 = param_13, param_12 == 0x3334)) && ((short)param_13 < -0x4ccc)) {
    uVar7 = 0xb334;
  }
  DAT_fffec741 = param_14;
  DAT_fffec73e = param_10;
  _DAT_fffec730 = uVar7;
  uVar10 = __sdiv32_r1_by_r0((param_9 & 0xff) << 7,0x7d);
  if (0xff < (uVar10 & 0xffff)) {
    uVar10 = 0xff;
  }
  DAT_fffec73c = (byte)uVar10;
  DAT_fffec73d = param_18;
  DAT_fffec740 = param_19;
  _DAT_fffec73a = uVar7;
LAB_000b58e8:
  *param_23 = _DAT_fffec730;
  uVar8 = (ushort)param_15;
  uVar7 = _DAT_fffec730;
  if ((uVar8 != 1) &&
     ((uVar8 == 2 ||
      ((uVar7 = 0, uVar8 != 3 &&
       (((uVar8 == 4 || (uVar8 == 5)) ||
        ((uVar7 = (ushort)iVar5, uVar8 != 6 &&
         (((uVar8 == 7 || (uVar8 == 8)) || ((uVar8 == 9 || (uVar7 = uVar8, uVar8 == 10))))))))))))))
  {
    uVar7 = 0;
  }
  *param_22 = uVar7;
  *param_24 = _DAT_fffec732;
  *param_25 = DAT_fffec736;
  *param_26 = DAT_fffec737;
  *param_27 = DAT_fffec738;
  *param_28 = _DAT_fffec734;
  DAT_fffec73f = DAT_fffec737;
  return;
}

