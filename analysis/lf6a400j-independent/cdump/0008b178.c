
/* WARNING: Removing unreachable block (ram,0x0008b3a2) */
/* WARNING: Removing unreachable block (ram,0x0008b396) */
/* WARNING: Removing unreachable block (ram,0x0008b3ce) */
/* WARNING: Removing unreachable block (ram,0x0008b3e0) */
/* WARNING: Removing unreachable block (ram,0x0008b3f2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008b178(byte param_1,char param_2,byte param_3,uint param_4,uint param_5,char param_6,
                 char param_7,uint param_8,uint param_9,uint param_10,char param_11,char param_12,
                 undefined2 *param_13,byte *param_14,ushort *param_15,byte *param_16,
                 undefined1 *param_17)

{
  char cVar1;
  bool bVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  ushort uVar8;
  uint uVar7;
  short sVar9;
  int iVar10;
  float fVar11;
  byte bStack_34;
  byte bStack_28;
  
  param_5 = param_5 & 0xffff;
  if (param_5 < 0x5001) {
    param_4 = param_4 & 0xff;
    uVar4 = LK_133B38((uint)&T_02CB1C,param_4);
    uVar5 = LK_133B38((uint)&T_02CB28,param_4);
    if ((uVar5 & 0xff) < (uVar4 & 0xff)) {
      bStack_34 = 0;
    }
    else {
      bStack_34 = (char)uVar5 - (char)uVar4;
    }
    param_10 = param_10 & 0xffff;
    uVar5 = LK_138984((uint)&T_02CB48,param_5,param_10);
    if (param_6 == '\0') {
      uVar6 = LK_133F40((uint)&T_02CB68,param_10);
      uVar8 = (ushort)uVar6;
    }
    else {
      uVar6 = LK_133F40((uint)&T_02CB5C,param_10);
      uVar8 = (ushort)uVar6;
    }
    _DAT_fffebc26 = uVar8;
    if (param_11 == '\x01') {
      uVar6 = LK_133B38((uint)&T_02CAF8,param_4);
      bStack_28 = (byte)uVar6;
    }
    else if (param_11 == '\x02') {
      uVar6 = LK_133B38((uint)&T_02CB04,param_4);
      bStack_28 = (byte)uVar6;
    }
    else {
      bStack_28 = 0xff;
    }
    iVar10 = -(param_9 & 0xffff);
    DAT_fffebc29 = bStack_28;
    if (iVar10 < 0) {
      uVar6 = (int)&DAT_00010000 + iVar10;
    }
    else {
      uVar6 = 0xffffffff;
    }
    uVar7 = LK_138984((uint)&T_02CB34,param_5,param_10);
    uVar6 = (uVar6 & 0xffff) * (uVar7 & 0xff) >> 0x10;
    uVar5 = uVar6 + (int)(char)((param_9 & 0xffff) * (uVar5 & 0xff) >> 0x10);
    if ((uVar5 & 0xff) < uVar6) {
      uVar5 = 0xff;
    }
    if (DAT_fffebc32 == '\0') {
      DAT_fffebc33 = '\0';
      DAT_fffebc32 = '\x01';
    }
    if (param_4 < 0x40) {
      cVar1 = -0x4d;
    }
    else {
      cVar1 = '\r';
    }
    if (DAT_fffebc33 == '\0') {
      DAT_ffff1984 = (byte)uVar5;
    }
    else {
      FUN_0016b44c(&DAT_ffff1984,uVar5,(int)cVar1);
    }
    bVar3 = DAT_ffff1984;
    DAT_fffebc34 = DAT_ffff1984;
    DAT_fffebc33 = '\x01';
    DAT_fffebc28 = DAT_ffff1984;
    bVar2 = param_2 != '\x02';
    uVar5 = 0x40;
    if (param_12 != '\0') {
      uVar5 = LK_133B38((uint)&T_02CB10,param_4);
      uVar5 = uVar5 & 0xff;
    }
    DAT_fffebc2a = (undefined1)uVar5;
    uVar6 = 0;
    if (!bVar2) {
      uVar6 = (uint)_DAT_fffebc30;
    }
    if (bStack_34 != 0) {
      uVar6 = uVar6 & 0xffff;
      iVar10 = (uVar4 & 0xff) * 8 - uVar6;
      sVar9 = -0x8000;
      if (-0x8001 < iVar10) {
        sVar9 = (short)iVar10;
      }
      __sdiv32_r1_by_r0((int)sVar9 << 5,(uint)bStack_34);
    }
    if (bVar2) {
      param_8 = param_8 & 0xff;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          uVar4 = LK_133E10((uint)&T_02CB8C,param_8);
        }
        else {
          uVar4 = LK_133E10((uint)&T_02CB98,param_8);
        }
      }
      else if (param_7 == '\0') {
        uVar4 = LK_133E10((uint)&T_02CB74,param_8);
      }
      else {
        uVar4 = LK_133E10((uint)&T_02CB80,param_8);
      }
      _DAT_fffebc2c = (float)(uVar4 & 0xffff) * _DAT_fffebc2c;
      fVar11 = 1.5258788e-05;
    }
    else {
      _DAT_fffebc2c =
           (float)param_1 * (float)param_3 * 256.0 * (float)bVar3 * (float)uVar8 * (float)bStack_28
           * (float)uVar5;
      fVar11 = 9.130613e-13;
    }
    _DAT_fffebc2c = _DAT_fffebc2c * fVar11;
    fVar11 = 524280.0;
    if ((_DAT_fffebc2c <= 524280.0) && (fVar11 = 0.0, 0.0 <= _DAT_fffebc2c)) {
      fVar11 = _DAT_fffebc2c;
    }
    _DAT_fffebc24 = (undefined2)(int)(fVar11 * 0.125);
    if (bVar2) {
      _DAT_fffebc30 = 0;
    }
    else {
      _DAT_fffebc30 = (short)(uVar6 + 1);
      if ((uVar6 + 1 & 0xffff) == 0) {
        _DAT_fffebc30 = -1;
      }
    }
  }
  else {
    DAT_fffebc32 = '\0';
  }
  *param_13 = _DAT_fffebc24;
  *param_14 = DAT_fffebc28;
  *param_15 = _DAT_fffebc26;
  *param_16 = DAT_fffebc29;
  *param_17 = DAT_fffebc2a;
  return;
}

