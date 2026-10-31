
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00062876(void)

{
  uint uVar1;
  
  DAT_ffff0086 = DAT_ffff0086 & 0x3f;
  _DAT_ffff003e = 0;
  _DAT_ffff006e = 0;
  _DAT_ffff0070 = 0;
  _DAT_ffff0072 = 0;
  _DAT_ffff0074 = 0;
  _DAT_ffff0076 = 0;
  _DAT_ffff0078 = 0;
  _DAT_ffff01ce = 0;
  FUN_000669fa();
  FUN_000653c4();
  FUN_000674f0();
  FUN_00063612();
  uVar1 = (uint)DAT_ffff02da;
  if ((uVar1 == 1) && (uVar1 = (uint)DAT_fffeeec2, (uVar1 & 4) != 0)) {
    _DAT_ffff007a = 0;
    DAT_ffff0130 = 0;
    DAT_ffff0028 = 0;
  }
  return uVar1;
}

