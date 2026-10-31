
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00153e70(void)

{
  uint uVar1;
  byte bVar3;
  short sVar2;
  undefined *puVar4;
  
  _DAT_ffffabc2 = FUN_00149846();
  _DAT_fffee6a0 = FUN_00149750();
  _DAT_fffeef38 = FUN_00149778();
  DAT_fffeed65 = FUN_00149554();
  _DAT_fffeef54 = FUN_00149438();
  _DAT_fffef240 = FUN_00149438();
  _DAT_fffef240 = _DAT_fffef240 << 6;
  uVar1 = FUN_00149432();
  puVar4 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
    puVar4 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
  }
  _v_Control_Module_Voltage_EF18 = SUB42(puVar4,0);
  DAT_fffef1e5 = (undefined1)((uint)((int)puVar4 * 0xfa) >> 0x10);
  DAT_ffffab41 = DAT_fffef1e5;
  _DAT_fffef234 = FUN_001494ca();
  if ((uint)_DAT_fffef234 * 32000 < 0x7fff8000) {
    _DAT_ffff29ce = (undefined2)((uint)(&DAT_0000ffff + (uint)_DAT_fffef234 * 64000) >> 0x10);
  }
  else {
    _DAT_ffff29ce = 0xffff;
  }
  _DAT_fffee6f8 = FUN_001494b8();
  _DAT_fffef540 = FUN_001494be();
  _DAT_fffef592 = FUN_001494c4();
  _DAT_ffff29e4 = FUN_001494e8();
  _v_Manifold_Absolute_Pressure_OBD_F648 = FUN_001494ee();
  uVar1 = FUN_001445ea();
  bVar3 = DAT_ffff0006 | 2;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0006 & 0xfd;
  }
  DAT_ffff0006 = bVar3;
  uVar1 = FUN_00144928();
  bVar3 = DAT_ffff0006 | 1;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0006 & 0xfe;
  }
  DAT_ffff0006 = bVar3;
  uVar1 = FUN_00144978();
  bVar3 = DAT_ffff000e | 1;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000e & 0xfe;
  }
  DAT_ffff000e = bVar3;
  uVar1 = FUN_001448d0();
  bVar3 = DAT_ffff0006 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0006 & 0xdf;
  }
  DAT_ffff0006 = bVar3;
  uVar1 = FUN_00144a7e();
  bVar3 = DAT_ffff000b | 1;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000b & 0xfe;
  }
  DAT_ffff000b = bVar3;
  uVar1 = FUN_00144cd6();
  bVar3 = DAT_ffff0008 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0008 & 0x7f;
  }
  DAT_ffff0008 = bVar3;
  uVar1 = FUN_00144ce2();
  bVar3 = DAT_ffff0009 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0009 & 0x7f;
  }
  DAT_ffff0009 = bVar3;
  uVar1 = FUN_00144762();
  bVar3 = DAT_ffff0009 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0009 & 0xef;
  }
  DAT_ffff0009 = bVar3;
  uVar1 = FUN_00144a34();
  bVar3 = DAT_ffff000b | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000b & 0xdf;
  }
  DAT_ffff000b = bVar3;
  uVar1 = FUN_00144c52();
  bVar3 = DAT_ffff000b | 8;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000b & 0xf7;
  }
  DAT_ffff000b = bVar3;
  uVar1 = FUN_0014486e();
  bVar3 = DAT_ffff000d | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000d & 0xdf;
  }
  DAT_ffff000d = bVar3;
  uVar1 = FUN_00144640();
  bVar3 = DAT_ffff0006 | 4;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0006 & 0xfb;
  }
  DAT_ffff0006 = bVar3;
  uVar1 = FUN_001449ce();
  bVar3 = DAT_ffff0007 | 8;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0007 & 0xf7;
  }
  DAT_ffff0007 = bVar3;
  uVar1 = FUN_001446f6();
  bVar3 = DAT_ffff0008 | 1;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0008 & 0xfe;
  }
  DAT_ffff0008 = bVar3;
  uVar1 = FUN_00144cde();
  bVar3 = DAT_ffff000e | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000e & 0x7f;
  }
  DAT_ffff000e = bVar3;
  uVar1 = FUN_001447c8();
  bVar3 = DAT_ffff000e | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000e & 0xdf;
  }
  DAT_ffff000e = bVar3;
  uVar1 = FUN_00144b12();
  bVar3 = DAT_ffff0007 | 4;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0007 & 0xfb;
  }
  DAT_ffff0007 = bVar3;
  uVar1 = FUN_00144b6c();
  bVar3 = DAT_ffff0009 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0009 & 0xdf;
  }
  DAT_ffff0009 = bVar3;
  uVar1 = FUN_00144bbc();
  bVar3 = DAT_ffff000e | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000e & 0xef;
  }
  DAT_ffff000e = bVar3;
  uVar1 = FUN_00144cca();
  bVar3 = DAT_ffff000e | 8;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff000e & 0xf7;
  }
  DAT_ffff000e = bVar3;
  uVar1 = FUN_00144c0c();
  bVar3 = DAT_ffff0008 | 8;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff0008 & 0xf7;
  }
  DAT_ffff0008 = bVar3;
  uVar1 = FUN_00144dfe();
  bVar3 = DAT_fffef330 | 0x20;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef330 & 0xdf;
  }
  DAT_fffef330 = bVar3;
  _DAT_fffeecbe = FUN_0014271e(0);
  _DAT_fffeecc2 = FUN_0014271e(1);
  _DAT_fffeecc6 = FUN_0014271e(2);
  _DAT_fffeecca = FUN_0014271e(3);
  _DAT_fffeecc0 = FUN_00142728(0);
  _DAT_fffeecc4 = FUN_00142728(1);
  _DAT_fffeecc8 = FUN_00142728(2);
  _DAT_fffeeccc = FUN_00142728(3);
  _DAT_fffeecd6 = FUN_00142732(0);
  _DAT_fffeecda = FUN_00142732(1);
  _DAT_fffeecde = FUN_00142732(2);
  _DAT_fffeece2 = FUN_00142732(3);
  _DAT_fffeecd8 = FUN_0014273c(0);
  _DAT_fffeecdc = FUN_0014273c(1);
  _DAT_fffeece0 = FUN_0014273c(2);
  _DAT_fffeece4 = FUN_0014273c(3);
  _DAT_fffeecf0 = FUN_0014275c(3);
  _DAT_fffeecf2 = FUN_00142766(0);
  _DAT_fffeecf4 = FUN_00142766(1);
  _DAT_fffeecf6 = FUN_0014275c(2);
  DAT_fffeed24 = FUN_00142770(0);
  DAT_fffeed25 = FUN_00142770(1);
  DAT_fffeed26 = FUN_00142770(2);
  DAT_fffeed27 = FUN_00142770(3);
  FUN_0014f6fc((int)_DAT_ffff0b48,0);
  FUN_0014f6fc((int)_DAT_ffff0b4c,1);
  FUN_0014f6fc((int)_DAT_ffff0b50,2);
  FUN_0014f6fc((int)_DAT_ffff0b54,3);
  FUN_0014f706((int)_DAT_ffff0b4a,0);
  FUN_0014f706((int)_DAT_ffff0b4e,1);
  FUN_0014f706((int)_DAT_ffff0b52,2);
  FUN_0014f706((int)_DAT_ffff0b56,3);
  _DAT_ffff2aa0 = FUN_001493e0();
  _DAT_fffee744 = FUN_001493e6();
  _v_Barometric_Pressure_OBD_F320 = FUN_001493ec();
  _DAT_fffef646 = _v_Barometric_Pressure_OBD_F320;
  uVar1 = FUN_001418fc();
  bVar3 = DAT_fffef310 | 8;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef310 & 0xf7;
  }
  DAT_fffef310 = bVar3;
  uVar1 = FUN_00141908();
  bVar3 = DAT_fffef310 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef310 & 0xef;
  }
  DAT_fffef310 = bVar3;
  uVar1 = FUN_00141914();
  bVar3 = DAT_fffef310 | 4;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef310 & 0xfb;
  }
  DAT_fffef310 = bVar3;
  FUN_00005a88();
  _DAT_fffef1fc = FUN_001497a8();
  sVar2 = FUN_00149534();
  _DAT_fffef232 = sVar2 << 6;
  _DAT_fffef47e = 0xffff;
  if ((uint)_DAT_fffef232 * 32000 < 0x7fff8000) {
    _DAT_fffef47e = (undefined2)((uint)(&DAT_0000ffff + (uint)_DAT_fffef232 * 64000) >> 0x10);
  }
  DAT_fffee6a3 = (undefined1)((ushort)_DAT_fffef47e >> 8);
  _DAT_fffee75a = FUN_00149534();
  uVar1 = FUN_00140338();
  bVar3 = DAT_fffef3b4 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef3b4 & 0x7f;
  }
  DAT_fffef3b4 = bVar3;
  uVar1 = FUN_00140330();
  bVar3 = DAT_fffeff7f | 1;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffeff7f & 0xfe;
  }
  DAT_fffeff7f = bVar3;
  _DAT_fffef474 = 0xffff;
  _DAT_fffef476 = 0xffff;
  _DAT_fffef478 = 0xffff;
  _DAT_fffef47a = 0xffff;
  return;
}

