
/* WARNING: Removing unreachable block (ram,0x0011de22) */
/* WARNING: Removing unreachable block (ram,0x0011de34) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0011dc50(ushort param_1,int param_2,char param_3,ushort param_4,ushort param_5,byte param_6
                 ,ushort param_7,ushort param_8,uint param_9,undefined2 *param_10,
                 undefined2 *param_11,int *param_12,undefined2 *param_13,undefined1 *param_14,
                 undefined1 *param_15,undefined1 *param_16,short *param_17)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  short sVar5;
  uint uVar4;
  undefined *puVar6;
  ushort uVar7;
  bool bVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  param_7 = param_7 & 0xff;
  sVar5 = param_6 - param_7;
  if (sVar5 < 0x80) {
    uVar4 = (uint)(char)sVar5;
    if (sVar5 < -0x80) {
      uVar4 = 0xffffff80;
    }
  }
  else {
    uVar4 = 0x7f;
  }
  uVar2 = LK_133C68((uint)&T_02FE08,uVar4);
  *param_15 = (char)uVar2;
  *param_14 = (char)uVar4;
  sVar5 = param_7 - (param_8 & 0xff);
  if (sVar5 < 0x80) {
    uVar4 = (uint)(char)sVar5;
    if (sVar5 < -0x80) {
      uVar4 = 0xffffff80;
    }
  }
  else {
    uVar4 = 0x7f;
  }
  puVar6 = &T_02FE14;
  uVar3 = LK_134D58((uint)&T_02FE14,uVar4);
  *param_17 = (short)uVar3;
  *param_16 = (char)uVar4;
  if (DAT_fffee0f4 == '\0') {
    uVar7 = 0x6e;
  }
  else {
    uVar7 = 100;
  }
  bVar8 = uVar7 <= param_7;
  bVar1 = false;
  if ((bVar8) && (puVar6 = &UNK_00000082, 0x81 < param_6)) {
    bVar1 = true;
  }
  if (!bVar1) {
    uVar7 = param_4;
    if (param_5 <= param_4) {
      uVar7 = param_5;
    }
    puVar6 = (undefined *)((uint)uVar7 - (int)(short)uVar3);
  }
  DAT_fffee0f4 = bVar8;
  *param_13 = 0x4d8;
  fVar10 = (_DAT_fffee0f0 + -(float)param_4 * 0.03125) * (float)param_1 * 645.0 * 4.7683716e-07;
  fVar9 = 16777216.0;
  fVar11 = fVar9;
  if ((fVar10 <= 16777216.0) && (fVar11 = fVar10, fVar10 < 0.0)) {
    fVar11 = 0.0;
  }
  if (fVar11 <= 16777216.0) {
    if (0.0 <= fVar11) {
      fVar11 = fVar11 * 256.0;
      if (2.1474836e+09 <= fVar11) {
        fVar11 = fVar11 - 4.2949673e+09;
      }
      *param_12 = (int)fVar11;
    }
    else {
      *param_12 = 0;
    }
  }
  else {
    *param_12 = -1;
  }
  fVar11 = (float)param_2;
  if (param_2 < 0) {
    fVar11 = fVar11 + 4.2949673e+09;
  }
  fVar10 = (fVar11 * 0.00390625 - fVar10) / 75.68359;
  fVar11 = fVar9;
  if ((fVar10 <= 16777216.0) && (fVar11 = fVar10, fVar10 < 0.0)) {
    fVar11 = 0.0;
  }
  if (fVar11 <= 1023.96875) {
    if (-1024.0 <= fVar11) {
      *param_11 = (short)(int)(fVar11 * 32.0);
    }
    else {
      *param_11 = 0x8000;
    }
  }
  else {
    *param_11 = 0x7fff;
  }
  if (param_3 == '\x03') {
    _DAT_fffee0f0 = ((fVar10 * 3.0 - _DAT_fffee0ec) * 0.08) / 2.0 + _DAT_fffee0f0;
  }
  else {
    if ((bVar8) && (0x81 < param_6)) {
      puVar6 = (undefined *)((param_9 & 0xffff) * (uVar2 & 0xff) >> 8);
    }
    else if ((int)puVar6 < (int)&DAT_00010000) {
      if ((int)puVar6 < 0) {
        puVar6 = (undefined *)0x0;
      }
    }
    else {
      puVar6 = &DAT_0000ffff;
    }
    _DAT_fffee0f0 = (float)((uint)puVar6 & 0xffff) * 0.03125;
  }
  if ((_DAT_fffee0f0 <= 16777216.0) && (fVar9 = _DAT_fffee0f0, _DAT_fffee0f0 < 0.0)) {
    fVar9 = 0.0;
  }
  if (fVar9 <= 2047.9688) {
    if (0.0 <= fVar9) {
      *param_10 = (short)(int)(fVar9 * 32.0);
    }
    else {
      *param_10 = 0;
    }
  }
  else {
    *param_10 = 0xffff;
  }
  _DAT_fffee0ec = fVar10;
  return;
}

