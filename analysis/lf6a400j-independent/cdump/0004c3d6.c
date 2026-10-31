
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004c3d6(void)

{
  bool bVar1;
  
  DAT_fffeeebc = DAT_fffeeebc | 1;
  DAT_fffeeebd = DAT_fffeeebd | 1;
  DAT_fffeeebf = DAT_fffeeebf | 1;
  DAT_fffeeec0 = DAT_fffeeec0 | 1;
  DAT_fffeeec6 = DAT_fffeeec6 | 1;
  DAT_fffef358 = DAT_fffef358 | 1;
  DAT_fffef46e = DAT_fffef46e | 1;
  DAT_fffef46f = DAT_fffef46f | 1;
  DAT_fffef470 = DAT_fffef470 | 1;
  DAT_fffeeec1 = DAT_fffeeec1 | 3;
  bVar1 = (DAT_fffef210 & 1) != 0;
  if (bVar1) {
    DAT_fffeeec2 = DAT_fffeeec2 & 0xf8;
  }
  else {
    DAT_fffeeec2 = DAT_fffeeec2 | 7;
  }
  DAT_fffeeec3 = DAT_fffeeec3 & 0xfe;
  DAT_fffef6b8 = '\x01' - bVar1;
  DAT_fffeeec9 = DAT_fffeeec9 | 1;
  DAT_fffeeec7 = DAT_fffeeec7 & 0xfe;
  DAT_fffeeec8 = DAT_fffeeec8 & 0xfe;
  DAT_fffeeec4 = DAT_fffeeec4 & 0xfe;
  _DAT_fffeeee6 = 0;
  _DAT_fffeeee8 = 0xffff;
  _DAT_fffeef10 = 0;
  DAT_ffff2ade = 0;
  DAT_ffff091d = 0;
  _DAT_fffeef1a = 0;
  _DAT_fffeeeda = 0;
  _DAT_fffeef14 = 0xffff;
  _v_Ambient_Air_Temperature_F344 = 0xffff;
  DAT_fffef09e = DAT_fffef09e & 0x7f;
  _DAT_fffef342 = 0;
  _DAT_fffeef12 = 0;
  DAT_fffef331 = DAT_fffef331 & 0xfe;
  _DAT_fffef35e = 0;
  _v_Manifold_Absolute_Pressure_EECE = _DAT_fffee6f8;
  DAT_ffff2fe1 = DAT_ffff2fe1 | 2;
  DAT_fffeeebb = DAT_fffeeebb & 0xfd | 1;
  DAT_fffeeebe = DAT_fffeeebe & 0xfd | 1;
  _DAT_fffef662 = _DAT_ffff3508;
  _DAT_fffef664 = _DAT_ffff3502;
  _DAT_fffef666 = _DAT_ffff3504;
  _DAT_fffef668 = _DAT_ffff3506;
  DAT_fffef3b8 = DAT_fffef3b8 | 2;
  DAT_ffff0005 = DAT_ffff0005 | 2;
  return;
}

