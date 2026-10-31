
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000a2430(uint param_1,undefined4 param_2,ushort *param_3,ushort *param_4,byte param_5,
                 byte param_6,byte param_7,byte param_8,undefined1 param_9,ushort *param_10,
                 undefined2 *param_11,byte *param_12)

{
  undefined2 uVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  undefined *puVar5;
  uint uVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  int iVar14;
  ushort auStack_10080 [32698];
  byte local_10c;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int local_cc;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  undefined2 uStack_a0;
  undefined2 uStack_9e;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined2 uStack_98;
  undefined2 uStack_96;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined2 local_90 [4];
  undefined2 uStack_88;
  undefined2 uStack_86;
  undefined2 uStack_84;
  undefined2 uStack_82;
  ushort local_80 [4];
  undefined2 uStack_78;
  undefined2 uStack_76;
  undefined2 uStack_74;
  undefined2 uStack_72;
  uint local_70;
  undefined4 uStack_6c;
  ushort *puStack_68;
  ushort *puStack_64;
  undefined2 local_60;
  undefined2 uStack_5c;
  undefined2 uStack_58;
  undefined1 uStack_54;
  undefined1 uStack_50;
  bool bStack_4c;
  bool bStack_48;
  bool bStack_44;
  bool bStack_40;
  byte bStack_3c;
  bool bStack_38;
  bool bStack_34;
  bool bStack_30;
  bool bStack_2c;
  undefined1 *local_28;
  
  local_28 = &DAT_fffec278;
  puStack_64 = param_4;
  puStack_68 = param_3;
  local_70 = param_1;
  uStack_6c = param_2;
  local_60 = 0x100;
  uStack_5c = 0;
  uStack_58 = 0xffff;
  uStack_54 = 0;
  uStack_50 = 3;
  param_1 = param_1 & 0xff;
  bStack_4c = param_1 == 4;
  if (bStack_4c) {
    DAT_fffec2a7 = FUN_0016ba04(&DAT_00014adf,param_9);
  }
  bStack_48 = param_1 == 3;
  if (bStack_48) {
    DAT_fffec2a6 = FUN_0016ba04(&DAT_00014acf,param_9);
  }
  bVar2 = param_1 == 2;
  bStack_44 = bVar2;
  if (bVar2) {
    DAT_fffec2a5 = FUN_0016ba04(&DAT_00014abf,param_9);
  }
  bVar3 = param_1 == 1;
  bStack_40 = bVar3;
  if (bVar3) {
    DAT_fffec2a4 = FUN_0016ba04(&DAT_00014aaf,param_9);
    bStack_3c = 0xc1;
  }
  else if (bVar2) {
    bStack_3c = 0xc1;
  }
  else if (bStack_48) {
    bStack_3c = 0xc1;
  }
  else {
    bStack_3c = 0xc1;
  }
  bStack_3c = 0xc1;
  local_10c = 0x20;
  if (param_5 < DAT_fffec2a8) {
    if (DAT_fffec2a4 == 0) {
      local_10c = 0xff;
    }
    else {
      uVar4 = __sdiv32_r1_by_r0(0x400,(uint)DAT_fffec2a4);
      local_10c = (byte)uVar4;
      if (0xff < (uVar4 & 0xffff)) {
        local_10c = 0xff;
      }
    }
    if (0x3f < local_10c) {
      local_10c = 0x40;
    }
  }
  bVar6 = 0x20;
  if (param_6 < DAT_fffec2a9) {
    bVar6 = 0xff;
    if (DAT_fffec2a5 != 0) {
      uVar4 = __sdiv32_r1_by_r0(0x400,(uint)DAT_fffec2a5);
      if (0xff < (uVar4 & 0xffff)) {
        uVar4 = 0xff;
      }
      bVar6 = (byte)uVar4;
    }
    if (0x3f < bVar6) {
      bVar6 = 0x40;
    }
  }
  bVar7 = 0x20;
  if (param_7 < DAT_fffec2aa) {
    bVar7 = 0xff;
    if (DAT_fffec2a6 != 0) {
      uVar4 = __sdiv32_r1_by_r0(0x400,(uint)DAT_fffec2a6);
      if (0xff < (uVar4 & 0xffff)) {
        uVar4 = 0xff;
      }
      bVar7 = (byte)uVar4;
    }
    if (0x3f < bVar7) {
      bVar7 = 0x40;
    }
  }
  bVar8 = 0x20;
  if (param_8 < DAT_fffec2ab) {
    bVar8 = 0xff;
    if (DAT_fffec2a7 != 0) {
      uVar4 = __sdiv32_r1_by_r0(0x400,(uint)DAT_fffec2a7);
      if (0xff < (uVar4 & 0xffff)) {
        uVar4 = 0xff;
      }
      bVar8 = (byte)uVar4;
    }
    if (0x3f < bVar8) {
      bVar8 = 0x40;
    }
  }
  if (DAT_fffec2a8 < param_5) {
    local_10c = DAT_fffec2a4;
  }
  if (DAT_fffec2a9 < param_6) {
    bVar6 = DAT_fffec2a5;
  }
  if (DAT_fffec2aa < param_7) {
    bVar7 = DAT_fffec2a6;
  }
  if (DAT_fffec2ab < param_8) {
    bVar8 = DAT_fffec2a7;
  }
  uVar4 = (uint)local_10c;
  *param_12 = local_10c;
  uVar13 = (uint)bVar6;
  param_12[1] = bVar6;
  uVar11 = (uint)bVar7;
  param_12[2] = bVar7;
  uVar9 = (uint)bVar8;
  param_12[3] = bVar8;
  if (bStack_48) {
    iStack_100 = uVar11 * param_4[0x10];
    iStack_fc = uVar11 * param_4[0x11];
    iStack_f8 = uVar11 * param_4[0x12];
    iStack_f4 = uVar11 * param_4[0x13];
    iStack_f0 = uVar11 * param_4[0x14];
    iStack_ec = uVar11 * param_4[0x15];
    iStack_a8 = uVar11 * param_4[0x16];
  }
  else {
    iStack_100 = uVar9 * param_4[0x18];
    iStack_fc = uVar9 * param_4[0x19];
    iStack_f8 = uVar9 * param_4[0x1a];
    iStack_f4 = uVar9 * param_4[0x1b];
    iStack_f0 = uVar9 * param_4[0x1c];
    iStack_ec = uVar9 * param_4[0x1d];
    iStack_a8 = uVar9 * param_4[0x1e];
  }
  if (bVar2) {
    iStack_e0 = uVar13 * param_4[8];
    iStack_dc = uVar13 * param_4[9];
    iStack_d8 = uVar13 * param_4[10];
    iStack_d4 = uVar13 * param_4[0xb];
    iStack_d0 = uVar13 * param_4[0xc];
    local_cc = uVar13 * param_4[0xd];
    iStack_a8 = uVar13 * param_4[0xe];
  }
  else {
    iStack_e0 = iStack_100;
    iStack_dc = iStack_fc;
    iStack_d8 = iStack_f8;
    iStack_d4 = iStack_f4;
    iStack_d0 = iStack_f0;
    local_cc = iStack_ec;
  }
  if (bVar3) {
    local_c0 = uVar4 * *param_4;
    iStack_bc = uVar4 * param_4[1];
    iStack_b8 = uVar4 * param_4[2];
    iStack_b4 = uVar4 * param_4[3];
    iStack_b0 = uVar4 * param_4[4];
    iStack_ac = uVar4 * param_4[5];
    iStack_a8 = uVar4 * param_4[6];
    iVar14 = uVar4 * param_4[7];
  }
  else {
    local_c0 = iStack_e0;
    iStack_bc = iStack_dc;
    iStack_b8 = iStack_d8;
    iStack_b4 = iStack_d4;
    iStack_b0 = iStack_d0;
    iStack_ac = local_cc;
    if (bVar2) {
      iVar14 = uVar13 * param_4[0xf];
    }
    else if (bStack_48) {
      iVar14 = uVar11 * param_4[0x17];
    }
    else {
      iVar14 = uVar9 * param_4[0x1f];
    }
  }
  bStack_38 = local_c0 != 0;
  if (local_c0 != 0) {
    if (local_c0 == 0) {
      _DAT_fffec294 = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)*param_3 << 0xd,local_c0);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec294 = SUB42(puVar5,0);
    }
  }
  bStack_34 = iStack_bc != 0;
  if (iStack_bc != 0) {
    if (iStack_bc == 0) {
      _DAT_fffec296 = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[1] << 0xd,iStack_bc);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec296 = SUB42(puVar5,0);
    }
  }
  bStack_30 = iStack_b8 != 0;
  if (iStack_b8 != 0) {
    if (iStack_b8 == 0) {
      _DAT_fffec298 = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[2] << 0xd,iStack_b8);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec298 = SUB42(puVar5,0);
    }
  }
  bStack_2c = iStack_b4 != 0;
  if (iStack_b4 != 0) {
    if (iStack_b4 == 0) {
      _DAT_fffec29a = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[3] << 0xd,iStack_b4);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec29a = SUB42(puVar5,0);
    }
  }
  if (iStack_b0 != 0) {
    if (iStack_b0 == 0) {
      _DAT_fffec29c = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[4] << 0xd,iStack_b0);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec29c = SUB42(puVar5,0);
    }
  }
  if (iStack_ac != 0) {
    if (iStack_ac == 0) {
      _DAT_fffec29e = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[5] << 0xd,iStack_ac);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec29e = SUB42(puVar5,0);
    }
  }
  if (iStack_a8 != 0) {
    if (iStack_a8 == 0) {
      _DAT_fffec2a0 = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[6] << 0xd,iStack_a8);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec2a0 = SUB42(puVar5,0);
    }
  }
  if (iVar14 != 0) {
    if (iVar14 == 0) {
      _DAT_fffec2a2 = 0xffff;
    }
    else {
      puVar5 = (undefined *)__udiv32_r1_by_r0((uint)param_3[7] << 0xd,iVar14);
      if (&DAT_0000ffff < puVar5) {
        puVar5 = &DAT_0000ffff;
      }
      _DAT_fffec2a2 = SUB42(puVar5,0);
    }
  }
  uStack_6c._3_1_ = (char)param_2;
  uVar4 = (uint)(char)uStack_6c;
  if ((uVar4 & 1) == 0) {
    if ((bStack_3c & 1) == 0) {
      if (bStack_38 == false) {
        uStack_a0 = 0xffff;
      }
      else {
        uStack_a0 = _DAT_fffec294;
      }
    }
    else {
      uStack_a0 = 0;
    }
  }
  else {
    uStack_a0 = 0x100;
  }
  if ((uVar4 & 2) == 0) {
    if ((bStack_3c & 2) == 0) {
      if (bStack_34 == false) {
        uStack_9e = 0xffff;
      }
      else {
        uStack_9e = _DAT_fffec296;
      }
    }
    else {
      uStack_9e = 0;
    }
  }
  else {
    uStack_9e = 0x100;
  }
  if ((uVar4 & 4) == 0) {
    if ((bStack_3c & 4) == 0) {
      if (bStack_30 == false) {
        uStack_9c = 0xffff;
      }
      else {
        uStack_9c = _DAT_fffec298;
      }
    }
    else {
      uStack_9c = 0;
    }
  }
  else {
    uStack_9c = 0x100;
  }
  if ((uVar4 & 8) == 0) {
    if ((bStack_3c & 8) == 0) {
      if (bStack_2c == false) {
        uStack_9a = 0xffff;
      }
      else {
        uStack_9a = _DAT_fffec29a;
      }
    }
    else {
      uStack_9a = 0;
    }
  }
  else {
    uStack_9a = 0x100;
  }
  if ((uVar4 & 0x10) == 0) {
    if ((bStack_3c & 0x10) == 0) {
      if (iStack_b0 == 0) {
        uStack_98 = 0xffff;
      }
      else {
        uStack_98 = _DAT_fffec29c;
      }
    }
    else {
      uStack_98 = 0;
    }
  }
  else {
    uStack_98 = 0x100;
  }
  if ((uVar4 & 0x20) == 0) {
    if ((bStack_3c & 0x20) == 0) {
      if (iStack_ac == 0) {
        uStack_96 = 0xffff;
      }
      else {
        uStack_96 = _DAT_fffec29e;
      }
    }
    else {
      uStack_96 = 0;
    }
  }
  else {
    uStack_96 = 0x100;
  }
  if ((uVar4 & 0x40) == 0) {
    if ((bStack_3c & 0x40) == 0) {
      if (iStack_a8 == 0) {
        uStack_94 = 0xffff;
      }
      else {
        uStack_94 = _DAT_fffec2a0;
      }
    }
    else {
      uStack_94 = 0;
    }
  }
  else {
    uStack_94 = 0x100;
  }
  if ((uVar4 & 0x80) == 0) {
    if (((int)(char)bStack_3c & 0x80U) == 0) {
      if (iVar14 == 0) {
        uStack_92 = 0xffff;
      }
      else {
        uStack_92 = _DAT_fffec2a2;
      }
    }
    else {
      uStack_92 = 0;
    }
  }
  else {
    uStack_92 = 0x100;
  }
  *param_11 = uStack_a0;
  param_11[1] = uStack_9e;
  param_11[2] = uStack_9c;
  param_11[3] = uStack_9a;
  param_11[4] = uStack_98;
  param_11[5] = uStack_96;
  param_11[6] = uStack_94;
  param_11[7] = uStack_92;
  local_90[0] = uStack_a0;
  local_90[1] = uStack_9e;
  local_90[2] = uStack_9c;
  local_90[3] = uStack_9a;
  uStack_88 = uStack_98;
  uStack_86 = uStack_96;
  uStack_84 = uStack_94;
  uStack_82 = uStack_92;
  bVar6 = 0;
  bVar7 = 0;
  iVar14 = 0;
  do {
    *(undefined2 *)(&DAT_fffec278 + iVar14) = *(undefined2 *)((int)local_90 + iVar14);
    bVar7 = bVar7 + 1;
    iVar14 = iVar14 + 2;
    iVar10 = 0;
  } while (bVar7 < 8);
  while (bVar6 < 8) {
    bVar6 = bVar6 + 1;
    for (DAT_fffec288 = bVar6; DAT_fffec288 < 8; DAT_fffec288 = DAT_fffec288 + 1) {
      if (*(ushort *)(&DAT_fffec278 + iVar10) < *(ushort *)(&DAT_fffec278 + (uint)DAT_fffec288 * 2))
      {
        uVar1 = *(undefined2 *)(&DAT_fffec278 + (uint)DAT_fffec288 * 2);
        *(undefined2 *)(&DAT_fffec278 + (uint)DAT_fffec288 * 2) =
             *(undefined2 *)(&DAT_fffec278 + iVar10);
        *(undefined2 *)(&DAT_fffec278 + iVar10) = uVar1;
      }
    }
    iVar10 = iVar10 + 2;
  }
  local_80[0] = _DAT_fffec278;
  local_80[1] = _DAT_fffec27a;
  local_80[2] = _DAT_fffec27c;
  local_80[3] = _DAT_fffec27e;
  uStack_78 = _DAT_fffec280;
  uStack_76 = _DAT_fffec282;
  uStack_74 = _DAT_fffec284;
  uStack_72 = _DAT_fffec286;
  uVar12 = 0;
  for (iVar14 = 1; iVar14 < 4; iVar14 = iVar14 + 1) {
    uVar12 = local_80[(short)((short)iVar14 + -1)] + uVar12;
    if (uVar12 < local_80[(short)((short)iVar14 + -1)]) {
      uVar12 = 0xffff;
    }
    _DAT_fffec292 = uVar12;
  }
  if (bStack_40 != false) {
    _DAT_fffec28a = _DAT_fffec292;
  }
  if (bStack_44 != false) {
    _DAT_fffec28c = _DAT_fffec292;
  }
  if (bStack_48) {
    _DAT_fffec28e = _DAT_fffec292;
  }
  if (bStack_4c) {
    _DAT_fffec290 = _DAT_fffec292;
  }
  *param_10 = _DAT_fffec28a;
  param_10[1] = _DAT_fffec28c;
  param_10[2] = _DAT_fffec28e;
  param_10[3] = _DAT_fffec290;
  DAT_fffec2a8 = param_5;
  DAT_fffec2a9 = param_6;
  DAT_fffec2aa = param_7;
  DAT_fffec2ab = param_8;
  return;
}

