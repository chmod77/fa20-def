
/* WARNING: Removing unreachable block (ram,0x000a6176) */
/* WARNING: Removing unreachable block (ram,0x000a6412) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a6104(ushort param_1,char param_2,byte param_3,ushort param_4,byte param_5,short param_6
                 ,undefined *param_7,uint param_8,undefined *param_9,char param_10,ushort *param_11,
                 ushort *param_12,ushort *param_13,undefined2 *param_14,ushort *param_15,
                 undefined2 *param_16,undefined2 *param_17,ushort *param_18,short *param_19,
                 short *param_20,undefined2 *param_21,short *param_22)

{
  bool bVar1;
  ushort uVar3;
  int iVar2;
  undefined *puVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined *puVar10;
  float fVar11;
  float fVar12;
  short sVar13;
  undefined *puStack_34;
  
  if (0x6553 < param_1) {
    param_1 = 0x6553;
  }
  *param_11 = param_1;
  bVar1 = true;
  if ((param_3 <= DAT_fffec3ce) && (param_5 <= DAT_fffec3cc)) {
    bVar1 = false;
  }
  uVar8 = 0xffffffff;
  if (!bVar1) {
    uVar8 = 0xffff999a;
  }
  if (DAT_fffec3d2 == '\0') {
    DAT_fffec3d0 = '\0';
    DAT_fffec3d2 = '\x01';
  }
  uVar3 = param_4;
  if (DAT_fffec3d0 != '\0') {
    FUN_0016b4d8(&DAT_ffff19bc,param_4,uVar8);
    uVar3 = _DAT_ffff19bc;
  }
  _DAT_ffff19bc = uVar3;
  DAT_fffec3d0 = 1;
  *param_12 = _DAT_ffff19bc;
  puVar10 = param_7;
  if ((param_2 != '\0') && (param_3 != 0)) {
    param_9 = (undefined *)((uint)param_9 & 0xffff);
    puVar10 = (undefined *)((uint)_DAT_ffff19bc - (int)param_9);
    sVar6 = 0x7fff;
    if (((int)puVar10 < 0x8000) && (sVar6 = (short)puVar10, (int)puVar10 < -0x8000)) {
      sVar6 = -0x8000;
    }
    uVar7 = (uint)sVar6;
    puStack_34 = (undefined *)((uint)(param_9 + 0x1800) & 0xffff);
    if (puStack_34 < param_9) {
      puStack_34 = &DAT_0000ffff;
    }
    if ((int)uVar7 < 0) {
      if ((int)uVar7 < -0x400) {
        uVar7 = 0x733;
      }
      else {
        uVar7 = 0x7ec;
      }
    }
    else {
      uVar7 = LK_133F40((uint)&T_02DBA0,uVar7);
    }
    _DAT_fffec3c0 = (undefined2)uVar7;
    if ((undefined *)(uint)_DAT_ffff19bc < puStack_34) {
      iVar2 = (uint)_DAT_ffff19bc - (int)param_9;
      iVar9 = 0x7fff;
      if ((iVar2 < 0x8000) && (iVar9 = -0x8000, -0x8001 < iVar2)) {
        iVar9 = iVar2;
      }
      uVar7 = (uVar7 & 0xffff) * (int)(short)iVar9;
      if ((int)uVar7 < 0x3fff801) {
        if ((int)uVar7 < -0x3fff801) {
          sVar6 = -0x8000;
        }
        else {
          sVar6 = (short)((int)((int)(char)(uVar7 >> 0x18) << 0x10 | uVar7 >> 8 & 0xffff) >> 3);
        }
      }
      else {
        sVar6 = 0x7fff;
      }
      puVar10 = param_9 + sVar6;
      if ((int)puVar10 < (int)&DAT_00010000) {
        puVar4 = puVar10;
        if ((int)puVar10 < 0) {
          puVar4 = (undefined *)0x0;
        }
        _DAT_fffec3be = (ushort)puVar4;
      }
      else {
        _DAT_fffec3be = 0xffff;
      }
    }
    else if (_DAT_ffff19bc < 0x80) {
      _DAT_fffec3be = 0;
    }
    else {
      _DAT_fffec3be = _DAT_ffff19bc - 0x80;
    }
  }
  *param_15 = _DAT_fffec3be;
  *param_16 = _DAT_fffec3c0;
  puVar4 = (undefined *)((uint)_DAT_fffec3ca - (uint)param_1);
  if ((int)puVar4 < 0) {
    puVar10 = (undefined *)-(int)puVar4;
  }
  if (param_10 == '\x01') {
    puVar10 = (undefined *)0x147b;
  }
  else {
    if ((int)puVar4 < 0) {
      if ((int)puVar10 < 0) {
        puVar10 = (undefined *)0x0;
      }
    }
    else {
      puVar10 = puVar4;
      if ((int)puVar4 < 0) {
        puVar10 = (undefined *)0x0;
      }
    }
    if (((uint)puVar10 & 0xffff) < 0x200) {
      puVar10 = (undefined *)0x147b;
    }
    else {
      puVar10 = &DAT_00001eb8;
    }
  }
  *param_14 = (short)puVar10;
  if (bVar1) {
    puVar10 = (undefined *)0xffffffff;
  }
  if (DAT_fffec3d3 == '\0') {
    DAT_fffec3cf = '\0';
    DAT_fffec3d3 = '\x01';
  }
  if (DAT_fffec3cf != '\0') {
    FUN_0016b4d8(&DAT_ffff19be,(uint)param_1,puVar10);
    param_1 = _DAT_ffff19be;
  }
  _DAT_ffff19be = param_1;
  DAT_fffec3cf = 1;
  *param_13 = _DAT_ffff19be;
  if ((param_2 != '\0') && (param_3 != 0)) {
    uVar7 = (uint)_DAT_ffff19bc - ((uint)param_9 & 0xffff);
    if ((int)uVar7 < 0x8000) {
      if ((int)uVar7 < -0x8000) {
        uVar7 = 0xffff8000;
      }
    }
    else {
      uVar7 = 0x7fff;
    }
    _DAT_fffec3c6 = (undefined2)uVar7;
    uVar7 = LK_1369C4((uint)&T_02DBAC,(int)param_6,uVar7);
    _DAT_fffec3c2 = (undefined2)uVar7;
    puVar4 = (undefined *)(((int)(uVar7 & 0xffff) >> 2) + (uint)_DAT_ffff19be);
    puVar10 = (undefined *)0xffffffff;
    if ((puVar4 < &UNK_00012000) && (puVar10 = (undefined *)0x0, &DAT_00001fff < puVar4)) {
      puVar10 = puVar4 + -0x2000;
    }
    _DAT_fffec3c4 = (ushort)puVar10;
    if (0x6553 < ((uint)puVar10 & 0xffff)) {
      _DAT_fffec3c4 = 0x6553;
    }
  }
  *param_17 = _DAT_fffec3c2;
  *param_18 = _DAT_fffec3c4;
  if ((param_2 != '\0') && (param_3 != 0)) {
    iVar9 = (uint)_DAT_fffec3c4 - (uint)_DAT_ffff19be;
    sVar6 = 0x7fff;
    if ((iVar9 < 0x8000) && (sVar6 = -0x8000, -0x8001 < iVar9)) {
      sVar6 = (short)iVar9;
    }
    fVar12 = (float)(int)((uint)_DAT_fffec3c4 * (uint)_DAT_fffec3be);
    if ((int)((uint)_DAT_fffec3c4 * (uint)_DAT_fffec3be) < 0) {
      fVar12 = fVar12 + 4.2949673e+09;
    }
    fVar11 = (float)(int)((uint)_DAT_ffff19be * (uint)_DAT_ffff19bc);
    if ((int)((uint)_DAT_ffff19be * (uint)_DAT_ffff19bc) < 0) {
      fVar11 = fVar11 + 4.2949673e+09;
    }
    fVar11 = (fVar12 * 0.0007629394 + -fVar11 * 0.0007629394) * 60162.0 * 7.629394e-06;
    fVar12 = 639.98047;
    if ((fVar11 <= 639.98047) && (fVar12 = fVar11, fVar11 < -640.0)) {
      fVar12 = -640.0;
    }
    sVar13 = 0x7fff;
    if ((fVar12 <= 639.98047) && (sVar13 = -0x8000, -640.0 <= fVar12)) {
      sVar13 = (short)(int)(fVar12 * 51.199997);
    }
    uVar7 = sVar13 * 0x29c;
    if ((int)uVar7 < 0x3fff8001) {
      if ((int)uVar7 < -0x3fff8001) {
        sVar13 = -0x8000;
      }
      else {
        sVar13 = (short)((uVar7 & 0x7fffffff) >> 0xf);
      }
    }
    else {
      sVar13 = 0x7fff;
    }
    iVar9 = (param_8 & 0xffff) * (int)sVar13;
    _DAT_fffec3ba = 0x7fff;
    if (iVar9 < 0x7fff001) {
      if (iVar9 < -0x7fff001) {
        _DAT_fffec3ba = -0x8000;
      }
      else {
        _DAT_fffec3ba = (short)((ulonglong)((longlong)iVar9 * 0x100000) >> 0x20);
      }
    }
    uVar3 = _DAT_ffff19be;
    if ((param_3 <= DAT_fffec3cd) && (param_5 <= DAT_fffec3d1)) {
      uVar3 = _DAT_fffec3c8;
    }
    iVar9 = (uint)_DAT_ffff19be - (uint)uVar3;
    sVar13 = 0x7fff;
    if ((iVar9 < 0x8000) && (sVar13 = -0x8000, -0x8001 < iVar9)) {
      sVar13 = (short)iVar9;
    }
    sVar5 = sVar6 - sVar13;
    if (((sVar6 < 0) || (-1 < sVar13)) || (-1 < sVar5)) {
      if (((sVar6 < 0) && (-1 < sVar13)) && (-1 < sVar5)) {
        sVar5 = -0x8000;
      }
    }
    else {
      sVar5 = 0x7fff;
    }
    iVar2 = __sdiv32_r1_by_r0(sVar5 * 0xc36,0xa00);
    iVar9 = 0x7fff;
    if ((iVar2 < 0x8000) && (iVar9 = iVar2, iVar2 < -0x8000)) {
      iVar9 = -0x8000;
    }
    uVar7 = (short)iVar9 * 0x8000;
    sVar6 = 0x7fff;
    if ((int)uVar7 < 0x3fff8001) {
      if ((int)uVar7 < -0x3fff8001) {
        sVar6 = -0x8000;
      }
      else {
        sVar6 = (short)((uVar7 & 0x7fffffff) >> 0xf);
      }
    }
    iVar9 = (param_8 & 0xffff) * (int)sVar6;
    _DAT_fffec3b8 = 0x7fff;
    if (iVar9 < 0x7fff001) {
      if (iVar9 < -0x7fff001) {
        _DAT_fffec3b8 = -0x8000;
      }
      else {
        _DAT_fffec3b8 = (short)((ulonglong)((longlong)iVar9 * 0x100000) >> 0x20);
      }
    }
    _DAT_fffec3c8 = _DAT_ffff19be;
  }
  *param_19 = _DAT_fffec3b8;
  *param_20 = _DAT_fffec3ba;
  if (param_2 != '\0') {
    if (param_3 == 0) {
      _DAT_fffec3bc = 0;
    }
    else {
      sVar6 = param_7._2_2_ + _DAT_fffec3b8;
      if (((param_7._2_2_ < 0) || (_DAT_fffec3b8 < 0)) || (-1 < sVar6)) {
        if (((param_7._2_2_ < 0) && (_DAT_fffec3b8 < 0)) && (-1 < sVar6)) {
          sVar6 = -0x8000;
        }
      }
      else {
        sVar6 = 0x7fff;
      }
      _DAT_fffec3bc = sVar6 + _DAT_fffec3ba;
      if (((sVar6 < 0) || (_DAT_fffec3ba < 0)) || (-1 < _DAT_fffec3bc)) {
        if (((sVar6 < 0) && (_DAT_fffec3ba < 0)) && (-1 < _DAT_fffec3bc)) {
          _DAT_fffec3bc = -0x8000;
        }
      }
      else {
        _DAT_fffec3bc = 0x7fff;
      }
    }
  }
  *param_22 = _DAT_fffec3bc;
  *param_21 = _DAT_fffec3c6;
  DAT_fffec3cd = param_3;
  DAT_fffec3d1 = param_5;
  DAT_fffec3ce = param_3;
  DAT_fffec3cc = param_5;
  _DAT_fffec3ca = _DAT_ffff19be;
  return;
}

