
/* WARNING: Removing unreachable block (ram,0x0003ec7e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003e9a0(void)

{
  ushort uVar1;
  byte bVar2;
  ushort uVar3;
  undefined4 uVar4;
  uint uVar5;
  byte bVar7;
  undefined2 uVar6;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  
  uVar1 = _DAT_fffeeee0;
  iVar8 = (int)DAT_ffff299c;
  iVar9 = (int)DAT_ffff03a0;
  iVar11 = (int)DAT_ffffab41;
  iVar10 = (int)(short)_DAT_fffeeee0;
  uVar4 = FUN_0016b9a4(&PTR_DAT_00163934,iVar8);
  uVar5 = FUN_0016b404(iVar9,uVar4,5);
  bVar7 = DAT_ffff2a15 | 0x80;
  if ((uVar5 & 1) == 0) {
    bVar7 = DAT_ffff2a15 & 0x7f;
  }
  DAT_ffff2a15 = bVar7;
  uVar5 = FUN_0016b404(iVar11,0xffffffc8,1,(bVar7 & 0x40) != 0);
  bVar7 = DAT_ffff2a15 | 0x40;
  if ((uVar5 & 1) == 0) {
    bVar7 = DAT_ffff2a15 & 0xbf;
  }
  DAT_ffff2a15 = bVar7;
  DAT_fffef56a = FUN_0016ba80(&PTR_s_xxxxxxxx_0016394c,iVar10);
  DAT_fffef579 = FUN_0016b9a4(&PTR_DAT_00163958,iVar11);
  uVar5 = (uint)uVar1;
  bVar7 = FUN_0016bd28((uint)DAT_fffee69c - ((uVar5 + 0x1000) * 5 >> 0xb & 0xff));
  if ((DAT_ffff6569 & 0x20) == 0) {
    if ((DAT_fffef567 == '\x03') || (DAT_ffff66b0 != '\x03')) goto LAB_0003eb30;
    if (((DAT_fffef32a & 2) != 0) || (bVar7 < DAT_fffef56a)) {
      DAT_fffef00b = DAT_fffef00b | 0x80;
      goto LAB_0003eb30;
    }
  }
  DAT_fffef00b = DAT_fffef00b & 0x7f;
LAB_0003eb30:
  if (((int)(char)DAT_fffef00b & 0x80U) == 0) {
    _DAT_fffef56c = FUN_0016bc08(&PTR_DAT_00163964,uVar5);
    DAT_fffef56e = FUN_0016ba80(&PTR_DAT_00163970,uVar5);
    _DAT_fffef570 = FUN_0016bc08(&PTR_DAT_0016397c,uVar5);
    DAT_fffef572 = FUN_0016ba80(&PTR_DAT_00163988,uVar5);
    _DAT_fffef574 = FUN_0016bc08(&PTR_DAT_00163994,uVar5);
    DAT_fffef576 = FUN_0016ba80(&PTR_DAT_001639a0,uVar5);
  }
  else {
    _DAT_fffef56c = FUN_0016bc08(&PTR_DAT_001639ac,uVar5);
    DAT_fffef56e = FUN_0016ba80(&PTR_DAT_001639b8,uVar5);
    _DAT_fffef570 = FUN_0016bc08(&PTR_DAT_001639d4,uVar5);
    DAT_fffef572 = FUN_0016ba80(&PTR_DAT_001639e0,uVar5);
  }
  DAT_fffef577 = FUN_0016b650(&PTR_DAT_001639c4,iVar8,iVar9);
  if ((DAT_ffffab40 & 0x40) == 0) {
    _DAT_ffff2a52 = FUN_0016bd34(_DAT_ffff2a52 - 1);
  }
  if ((DAT_fffef32a & 2) == 0) {
    uVar5 = FUN_0016bc08(&PTR_DAT_00163940,(int)(short)_DAT_fffeeee0);
  }
  else {
    uVar5 = FUN_0016bc08(&PTR_DAT_00163940,0);
  }
  if ((((((int)(char)DAT_ffff2a15 & 0x80U) == 0) && ((DAT_ffff2a15 & 0x40) == 0)) &&
      ((DAT_ffffab40 & 0x40) == 0)) &&
     ((_DAT_ffff2a52 == 0 && ((uVar5 & 0xffff) << 8 <= _DAT_ffff2a78)))) {
    DAT_ffff2a15 = DAT_ffff2a15 & 0xf7;
  }
  else {
    DAT_ffff2a15 = DAT_ffff2a15 | 8;
  }
  if ((DAT_ffff2a15 & 8) == 0) {
    bVar7 = DAT_fffef56e;
    uVar1 = _DAT_fffef570;
    bVar2 = DAT_fffef572;
    uVar3 = _DAT_fffef56c;
    if (((((int)(char)DAT_fffef00b & 0x80U) != 0) ||
        (DAT_fffef578 = DAT_fffef56e, bVar7 = DAT_fffef572, uVar1 = _DAT_fffef574,
        bVar2 = DAT_fffef576, uVar3 = _DAT_fffef570, _DAT_fffef56c < _DAT_fffef568)) &&
       ((DAT_fffef578 = bVar7, uVar3 < _DAT_fffef568 &&
        (DAT_fffef578 = bVar2, uVar1 < _DAT_fffef568)))) {
      DAT_fffef578 = DAT_fffef577;
    }
    DAT_ffff2a4f = FUN_0000152c((int)((ulonglong)
                                      ((longlong)(int)((uint)DAT_fffef579 * (uint)DAT_fffef578) *
                                      0x2000000) >> 0x20));
  }
  else {
    DAT_ffff2a4f = 0;
  }
  uVar6 = 0;
  if (DAT_ffff66b0 == '\x03') {
    uVar6 = FUN_00001540(_DAT_fffef568 + 1);
  }
  _DAT_fffef568 = uVar6;
  DAT_fffef567 = DAT_ffff66b0;
  return;
}

