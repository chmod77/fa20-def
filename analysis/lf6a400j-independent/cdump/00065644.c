
/* WARNING: Removing unreachable block (ram,0x0006573a) */
/* WARNING: Removing unreachable block (ram,0x00065756) */
/* WARNING: Removing unreachable block (ram,0x00065752) */
/* WARNING: Removing unreachable block (ram,0x000656e4) */
/* WARNING: Removing unreachable block (ram,0x00065700) */
/* WARNING: Removing unreachable block (ram,0x000656fc) */
/* WARNING: Removing unreachable block (ram,0x00065790) */
/* WARNING: Removing unreachable block (ram,0x000657ac) */
/* WARNING: Removing unreachable block (ram,0x000657a8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00065644(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  
  if ((DAT_ffff2b4a & 0x20) == 0) {
    _DAT_fffef5bc = 0;
  }
  else {
    _DAT_fffef5bc = FUN_00001540(_DAT_fffef5bc + 1);
  }
  if ((DAT_ffff2b4a & 0x10) == 0) {
    _DAT_fffef5be = 0;
  }
  else {
    _DAT_fffef5be = FUN_00001540(_DAT_fffef5be + 1);
  }
  uVar1 = FUN_0016ba80(&PTR_DAT_00168af0,(int)_DAT_fffeeee2);
  uVar2 = FUN_0016ba80(&PTR_DAT_00168b08,(int)_DAT_fffeeee2);
  uVar3 = FUN_0016ba80(&PTR_DAT_00168afc,(int)_DAT_fffeeed0);
  uVar4 = FUN_0016ba80(&PTR_DAT_00168b14,(int)_DAT_fffeeed0);
  _DAT_fffef5c0 = FUN_00001540(((uVar3 & 0xff) * (uVar1 & 0xff) * 0xa9d >> 0xe) + 1000);
  _DAT_fffef5c2 = FUN_00001540(((uVar3 & 0xff) * (uVar1 & 0xff) * 0x54eb >> 0xe) + 1000);
  _DAT_fffef5c4 = FUN_00001540(((uVar4 & 0xff) * (uVar2 & 0xff) * 0x52 >> 0xe) + 1000);
  uVar5 = FUN_0016bc08(&PTR_DAT_00168ae4,(uint)DAT_ffff29a6 << 8);
  uVar1 = FUN_0016b428((int)_v_Engine_Speed_OBD_copy_2ADA,uVar5,0,DAT_fffef5ac & 1);
  bVar6 = DAT_fffef5ac | 1;
  if ((uVar1 & 1) == 0) {
    bVar6 = DAT_fffef5ac & 0xfe;
  }
  DAT_fffef5ac = bVar6;
  if ((bVar6 & 1) == 0) {
    if ((_DAT_fffef5bc < 10) && (_DAT_fffef5be < 10)) {
      _DAT_ffff0100 = 1000;
    }
    else if ((9 < _DAT_fffef5bc) || (9 < _DAT_fffef5be)) {
      iVar7 = ((uint)_DAT_ffff0100 + (uint)_DAT_fffef5c4) - 1000;
      if ((uint)_DAT_ffff0100 + (uint)_DAT_fffef5c4 < 0x3e9) {
        iVar7 = 0;
      }
      uVar5 = FUN_0016bd60(iVar7,_DAT_fffef5c2);
      _DAT_ffff0100 = FUN_0016b618(uVar5,_DAT_fffef5c0);
    }
  }
  else {
    _DAT_ffff0100 = 0x717;
  }
  FUN_0006315e();
  _DAT_ffff34de = _DAT_ffff00ca;
  _DAT_ffff34e4 = _DAT_ffff00ca;
  _DAT_ffff34e0 = _DAT_ffff00cc;
  _DAT_ffff34e6 = _DAT_ffff00cc;
  _DAT_ffff34e2 = _DAT_ffff00ce;
  _DAT_ffff34e8 = _DAT_ffff00ce;
  _DAT_ffff00ee = 0xb040;
  _DAT_ffff00f0 = 0xb040;
  _DAT_ffff00f2 = 0xb040;
  return;
}

