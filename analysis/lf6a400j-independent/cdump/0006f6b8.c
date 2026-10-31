
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0006f6b8(uint param_1)

{
  byte bVar1;
  undefined4 in_r0;
  undefined4 in_r1;
  byte extraout_r2;
  int extraout_r3;
  
  if ((param_1 & 0xff) >> 3 < (uint)(int)DAT_ffff2b61) {
    FUN_00001550(0xf0);
    bVar1 = (&DAT_ffff2b5c)[extraout_r3];
    (&DAT_ffff2b5c)[extraout_r3] = bVar1 | extraout_r2;
    *(byte *)(extraout_r3 + -0xd4a2) = bVar1 & extraout_r2;
    _DAT_fffff482 = _DAT_fffff482 | 0x4000;
  }
  return CONCAT44(in_r1,in_r0);
}

