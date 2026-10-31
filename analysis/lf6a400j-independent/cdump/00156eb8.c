
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156eb8(void)

{
  undefined1 extraout_var;
  uint uVar1;
  byte bVar3;
  short sVar2;
  
  FUN_000386e0();
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
  _v_Engine_Speed_2994 = FUN_00142698();
  DAT_ffff299c = FUN_0014269e();
  DAT_fffee6a3 = FUN_0014952e();
  DAT_fffee6a5 = FUN_0014951c();
  DAT_fffee6a6 = FUN_00149522();
  DAT_fffee6a2 = FUN_00149528();
  _v_Manifold_Absolute_Pressure_OBD_F648 = FUN_001494ee();
  FUN_00149652(0);
  DAT_fffee6de = extraout_var;
  DAT_fffee6df = extraout_var;
  _DAT_ffff29e4 = FUN_001494e8();
  DAT_ffff2a0e = FUN_0014958c(0);
  DAT_ffff2ae1 = FUN_0014958c(1);
  DAT_fffee6af = FUN_0014e6ae();
  FUN_0013b930();
  DAT_fffee684 = FUN_0015b446();
  DAT_fffee685 = FUN_0015b45a();
  DAT_fffee686 = FUN_0015b466();
  FUN_00159918(DAT_ffffb3d3);
  _DAT_ffffb3d6 = FUN_00159936();
  _DAT_ffffb3d8 = FUN_0015993c();
  _DAT_ffffb3da = FUN_00145e12();
  _DAT_ffffb3dc = FUN_00145e18();
  _DAT_ffffb3de = FUN_00145e1e();
  _DAT_ffffb3e0 = FUN_00145e24();
  _DAT_ffffb3e2 = FUN_00145e2a();
  uVar1 = FUN_00144d3a();
  bVar3 = DAT_fffef22d | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef22d & 0x7f;
  }
  DAT_fffef22d = bVar3;
  uVar1 = FUN_0015be22();
  bVar3 = DAT_fffef205 | 0x80;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef205 & 0x7f;
  }
  DAT_fffef205 = bVar3;
  uVar1 = FUN_0015be2e();
  bVar3 = DAT_fffef205 | 0x40;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef205 & 0xbf;
  }
  DAT_fffef205 = bVar3;
  uVar1 = FUN_0015be3a();
  bVar3 = DAT_fffef205 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef205 & 0xef;
  }
  DAT_fffef205 = bVar3;
  uVar1 = FUN_0015be46();
  bVar3 = DAT_fffef205 | 8;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_fffef205 & 0xf7;
  }
  DAT_fffef205 = bVar3;
  DAT_fffef226 = FUN_0015be52();
  _DAT_fffef24e = FUN_0014963a();
  _DAT_fffef24e = _DAT_fffef24e << 6;
  _DAT_fffef250 = FUN_00149640();
  _DAT_fffef250 = _DAT_fffef250 << 6;
  _DAT_fffef252 = FUN_00149646();
  _DAT_fffef252 = _DAT_fffef252 << 6;
  sVar2 = FUN_0014964c();
  _DAT_fffef254 = sVar2 << 6;
  return;
}

