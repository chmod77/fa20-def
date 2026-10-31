
/* WARNING: Removing unreachable block (ram,0x0008b7a8) */
/* WARNING: Removing unreachable block (ram,0x0008b79c) */
/* WARNING: Removing unreachable block (ram,0x0008b7d2) */
/* WARNING: Removing unreachable block (ram,0x0008b7e2) */
/* WARNING: Removing unreachable block (ram,0x0008b7ee) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0008b5b4(byte param_1,char param_2,byte param_3,uint param_4,uint param_5,char param_6,
                 char param_7,uint param_8,uint param_9,uint param_10,char param_11,
                 undefined2 *param_12,byte *param_13,ushort *param_14,undefined1 *param_15)

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
  uint uVar11;
  float fVar12;
  byte bStack_30;
  
  param_5 = param_5 & 0xffff;
  if (param_5 < 0x5001) {
    param_4 = param_4 & 0xff;
    uVar4 = LK_133B38((uint)&T_02CBBC,param_4);
    uVar5 = LK_133B38((uint)&T_02CBC8,param_4);
    if ((uVar5 & 0xff) < (uVar4 & 0xff)) {
      bStack_30 = 0;
    }
    else {
      bStack_30 = (char)uVar5 - (char)uVar4;
    }
    param_10 = param_10 & 0xffff;
    uVar5 = LK_138984((uint)&T_02CBE8,param_5,param_10);
    if (param_6 == '\0') {
      uVar6 = LK_133F40((uint)&T_02CC08,param_10);
      uVar8 = (ushort)uVar6;
    }
    else {
      uVar6 = LK_133F40((uint)&T_02CBFC,param_10);
      uVar8 = (ushort)uVar6;
    }
    _DAT_fffebc3a = uVar8;
    if (param_11 == '\x01') {
      uVar6 = LK_133B38((uint)&T_02CBA4,param_4);
    }
    else {
      uVar6 = 0xff;
      if (param_11 == '\x02') {
        uVar6 = LK_133B38((uint)&T_02CBB0,param_4);
      }
    }
    iVar10 = -(param_9 & 0xffff);
    DAT_fffebc3d = (undefined1)uVar6;
    if (iVar10 < 0) {
      uVar11 = (int)&DAT_00010000 + iVar10;
    }
    else {
      uVar11 = 0xffffffff;
    }
    uVar7 = LK_138984((uint)&T_02CBD4,param_5,param_10);
    uVar11 = (uVar11 & 0xffff) * (uVar7 & 0xff) >> 0x10;
    uVar5 = uVar11 + (int)(char)((param_9 & 0xffff) * (uVar5 & 0xff) >> 0x10);
    if ((uVar5 & 0xff) < uVar11) {
      uVar5 = 0xff;
    }
    if (DAT_fffebc47 == '\0') {
      DAT_fffebc46 = '\0';
      DAT_fffebc47 = '\x01';
    }
    if (param_4 < 0x40) {
      cVar1 = -0x4d;
    }
    else {
      cVar1 = '\r';
    }
    if (DAT_fffebc46 == '\0') {
      DAT_ffff1985 = (byte)uVar5;
    }
    else {
      FUN_0016b44c(&DAT_ffff1985,uVar5,(int)cVar1);
    }
    bVar3 = DAT_ffff1985;
    DAT_fffebc48 = DAT_ffff1985;
    DAT_fffebc46 = '\x01';
    DAT_fffebc3c = DAT_ffff1985;
    bVar2 = param_2 != '\x02';
    uVar5 = 0;
    if (!bVar2) {
      uVar5 = (uint)_DAT_fffebc44;
    }
    if (bStack_30 != 0) {
      uVar5 = uVar5 & 0xffff;
      iVar10 = (uVar4 & 0xff) * 8 - uVar5;
      sVar9 = -0x8000;
      if (-0x8001 < iVar10) {
        sVar9 = (short)iVar10;
      }
      __sdiv32_r1_by_r0((int)sVar9 << 5,(uint)bStack_30);
    }
    if (bVar2) {
      param_8 = param_8 & 0xff;
      if (param_6 == '\0') {
        if (param_7 == '\0') {
          uVar4 = LK_133E10((uint)&T_02CC2C,param_8);
        }
        else {
          uVar4 = LK_133E10((uint)&T_02CC38,param_8);
        }
      }
      else if (param_7 == '\0') {
        uVar4 = LK_133E10((uint)&T_02CC14,param_8);
      }
      else {
        uVar4 = LK_133E10((uint)&T_02CC20,param_8);
      }
      _DAT_fffebc40 = (float)(uVar4 & 0xffff) * _DAT_fffebc40;
      fVar12 = 1.5258788e-05;
    }
    else {
      _DAT_fffebc40 =
           (float)param_1 * (float)param_3 * 256.0 * (float)bVar3 * (float)uVar8 *
           (float)(uVar6 & 0xff);
      fVar12 = 5.843592e-11;
    }
    _DAT_fffebc40 = _DAT_fffebc40 * fVar12;
    fVar12 = 524280.0;
    if ((_DAT_fffebc40 <= 524280.0) && (fVar12 = 0.0, 0.0 <= _DAT_fffebc40)) {
      fVar12 = _DAT_fffebc40;
    }
    _DAT_fffebc38 = (undefined2)(int)(fVar12 * 0.125);
    if (bVar2) {
      _DAT_fffebc44 = 0;
    }
    else {
      _DAT_fffebc44 = (short)(uVar5 + 1);
      if ((uVar5 + 1 & 0xffff) == 0) {
        _DAT_fffebc44 = -1;
      }
    }
  }
  else {
    DAT_fffebc47 = '\0';
  }
  *param_12 = _DAT_fffebc38;
  *param_13 = DAT_fffebc3c;
  *param_14 = _DAT_fffebc3a;
  *param_15 = DAT_fffebc3d;
  return;
}

