
/* WARNING: Removing unreachable block (ram,0x000fc978) */
/* WARNING: Removing unreachable block (ram,0x000fc97c) */
/* WARNING: Removing unreachable block (ram,0x000fc980) */
/* WARNING: Removing unreachable block (ram,0x000fc9b2) */
/* WARNING: Removing unreachable block (ram,0x000fc9a2) */
/* WARNING: Removing unreachable block (ram,0x000fcb06) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000fc918(char param_1,char param_2,char param_3,short param_4,undefined2 *param_5,
                 undefined2 *param_6,int *param_7,undefined2 *param_8,undefined2 *param_9,
                 int *param_10,undefined2 *param_11,undefined2 *param_12,undefined4 param_13)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float local_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar3 = (int)param_4;
  bVar2 = true;
  bVar1 = true;
  if (((param_3 != '\x01') && (param_3 != '\x06')) && ((param_3 != '\t' || (param_2 == '\0')))) {
    bVar1 = false;
  }
  if ((bVar1) && (param_1 == '\0')) {
    bVar2 = false;
  }
  *(bool *)param_13 = bVar2;
  if ((-1 < iVar3) && (param_4 < 0)) {
    param_4 = 0x7fff;
  }
  fVar6 = 0.0;
  if (!bVar2) {
    fVar6 = (float)(int)param_4 * 10.0 * 0.00027465814 + 0.0;
  }
  fVar8 = 0.0;
  fVar5 = fVar8;
  fVar4 = fVar6;
  if (!bVar2) {
    fVar4 = _DAT_fffed8e4 + (fVar6 - _DAT_fffed8e4) * 0.9999847;
    fVar5 = _DAT_fffed8f0 +
            (((float)(int)param_4 * 10.0 * 0.00027465814 + 0.0) - _DAT_fffed8f0) * 0.9999847;
    fVar8 = _DAT_fffed8ec + (fVar5 - _DAT_fffed8ec) * 0.96874994;
    fVar6 = _DAT_fffed8e0 + (fVar4 - _DAT_fffed8e0) * 0.96874994;
  }
  fStack_14 = (float)iVar3 * 0.0027465818;
  if (bVar2) {
    local_30 = 0.0;
    fStack_2c = 0.0;
    fStack_28 = 0.0;
    fStack_24 = 0.0;
    fStack_20 = 0.0;
    fStack_1c = 0.0;
    fStack_18 = 0.0;
    fStack_14 = 0.0;
  }
  else {
    fStack_28 = (float)(int)param_4 * 0.0027465818;
    fStack_1c = (float)(int)param_4 * 0.0027465818;
    fStack_18 = (float)(int)param_4 * 0.0027465818;
    local_30 = fVar5;
    fStack_2c = fVar8;
    fStack_24 = fVar4;
    fStack_20 = fVar6;
  }
  fVar7 = 89.99725;
  fVar9 = fVar7;
  if ((local_30 <= 89.99725) && (fVar9 = local_30, local_30 < -90.0)) {
    fVar9 = -90.0;
  }
  if (fVar9 <= 89.99725) {
    if (-90.0 <= fVar9) {
      *param_5 = (short)(int)(fVar9 * 364.08887);
    }
    else {
      *param_5 = 0x8000;
    }
  }
  else {
    *param_5 = 0x7fff;
  }
  fVar9 = fVar7;
  if ((fStack_2c <= 89.99725) && (fVar9 = fStack_2c, fStack_2c < -90.0)) {
    fVar9 = -90.0;
  }
  if (fVar9 <= 89.99725) {
    if (-90.0 <= fVar9) {
      *param_6 = (short)(int)(fVar9 * 364.08887);
    }
    else {
      *param_6 = 0x8000;
    }
  }
  else {
    *param_6 = 0x7fff;
  }
  if (5898239.5 < fStack_28) {
    fStack_28 = 5898239.5;
  }
  if (fStack_28 <= 5898239.5) {
    *param_7 = (int)(fStack_28 * 364.08887);
  }
  else {
    *param_7 = 0x7fffffff;
  }
  fVar9 = fVar7;
  if ((fStack_24 <= 89.99725) && (fVar9 = fStack_24, fStack_24 < -90.0)) {
    fVar9 = -90.0;
  }
  if (fVar9 <= 89.99725) {
    if (-90.0 <= fVar9) {
      *param_8 = (short)(int)(fVar9 * 364.08887);
    }
    else {
      *param_8 = 0x8000;
    }
  }
  else {
    *param_8 = 0x7fff;
  }
  fVar9 = fVar7;
  if ((fStack_20 <= 89.99725) && (fVar9 = fStack_20, fStack_20 < -90.0)) {
    fVar9 = -90.0;
  }
  if (fVar9 <= 89.99725) {
    if (-90.0 <= fVar9) {
      *param_9 = (short)(int)(fVar9 * 364.08887);
    }
    else {
      *param_9 = 0x8000;
    }
  }
  else {
    *param_9 = 0x7fff;
  }
  if (5898239.5 < fStack_1c) {
    fStack_1c = 5898239.5;
  }
  if (fStack_1c <= 5898239.5) {
    *param_10 = (int)(fStack_1c * 364.08887);
  }
  else {
    *param_10 = 0x7fffffff;
  }
  if (89.99725 < fStack_18) {
    fStack_18 = fVar7;
  }
  if (fStack_18 <= 89.99725) {
    *param_12 = (short)(int)(fStack_18 * 364.08887);
  }
  else {
    *param_12 = 0x7fff;
  }
  if ((fStack_14 <= 89.99725) && (fVar7 = fStack_14, fStack_14 < -90.0)) {
    fVar7 = -90.0;
  }
  if (fVar7 <= 89.99725) {
    if (-90.0 <= fVar7) {
      *param_11 = (short)(int)(fVar7 * 364.08887);
    }
    else {
      *param_11 = 0x8000;
    }
  }
  else {
    *param_11 = 0x7fff;
  }
  _DAT_fffed8e4 = fVar4;
  _DAT_fffed8f0 = fVar5;
  _DAT_fffed8ec = fVar8;
  _DAT_fffed8e0 = fVar6;
  _DAT_fffed8e8 = fStack_14;
  return;
}

