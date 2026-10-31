
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000ceb84(ushort param_1,uint param_2,undefined2 *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  short sVar9;
  int iVar8;
  ushort uVar11;
  int iVar10;
  short sVar12;
  ushort uVar13;
  
  uVar7 = LK_135708((uint)&T_02EBC0,param_2 & 0xffff);
  uVar7 = uVar7 & 0xff;
  if (uVar7 < 8) {
    if (uVar7 == 0) {
      uVar7 = 1;
    }
  }
  else {
    uVar7 = 7;
  }
  uVar13 = param_1;
  uVar1 = param_1;
  uVar2 = param_1;
  uVar3 = param_1;
  uVar4 = param_1;
  uVar5 = param_1;
  uVar6 = param_1;
  if (DAT_fffecd27 != '\0') {
    uVar13 = _DAT_fffecd18;
    uVar1 = _DAT_fffecd1a;
    uVar2 = _DAT_fffecd20;
    uVar3 = _DAT_fffecd22;
    uVar4 = _DAT_fffecd24;
    uVar5 = _DAT_fffecd1c;
    uVar6 = _DAT_fffecd1e;
  }
  uVar11 = uVar4;
  if (((((uVar7 != 1) && (uVar11 = uVar3, uVar7 != 2)) && (uVar11 = uVar2, uVar7 != 3)) &&
      ((uVar11 = uVar1, uVar7 != 4 && (uVar11 = uVar13, uVar7 != 5)))) &&
     (uVar11 = uVar5, uVar7 == 6)) {
    uVar11 = uVar6;
  }
  iVar10 = (uint)uVar11 - (uint)param_1;
  sVar12 = 0x7fff;
  if ((iVar10 < 0x8000) && (sVar12 = (short)iVar10, iVar10 < -0x8000)) {
    sVar12 = -0x8000;
  }
  sVar9 = 0;
  if (uVar7 != 0) {
    iVar10 = __sdiv16_r1_by_r0((int)sVar12,uVar7);
    sVar9 = (short)iVar10;
  }
  iVar8 = (int)sVar9;
  iVar10 = 0x7fff;
  if ((iVar8 < 0x2aab) && (iVar10 = -0x8000, -0x2aab < iVar8)) {
    iVar10 = iVar8 * 3;
  }
  if (DAT_fffecd26 == '\0') {
    DAT_fffecd28 = '\0';
    DAT_fffecd26 = '\x01';
  }
  if (DAT_fffecd28 == '\0') {
    _DAT_ffff19ce = (undefined2)iVar10;
  }
  else {
    FUN_0016b520(&DAT_ffff19ce,iVar10,0x4000);
  }
  DAT_fffecd28 = 1;
  *param_3 = _DAT_ffff19ce;
  _DAT_fffecd24 = param_1;
  _DAT_fffecd22 = uVar4;
  _DAT_fffecd20 = uVar3;
  _DAT_fffecd1e = uVar13;
  _DAT_fffecd1c = uVar6;
  DAT_fffecd27 = 1;
  _DAT_fffecd1a = uVar2;
  _DAT_fffecd18 = uVar1;
  return;
}

