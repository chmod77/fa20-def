
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014776c(void)

{
  undefined4 uVar1;
  
  DAT_ffff1ea0 = FUN_0016bd40((int)DAT_ffff1e90,0x3f);
  DAT_ffff1ea1 = FUN_0016bd40((int)DAT_ffff1e91,0x3f);
  DAT_ffff1ea2 = FUN_0016bd40((int)DAT_ffff1e92,0x3f);
  DAT_ffff1ea3 = FUN_0016bd40((int)DAT_ffff1e93,3);
  DAT_ffff1ea4 = FUN_0016bd40((int)DAT_ffff1e94,0xf);
  DAT_ffff1ea7 = FUN_0016bd40((int)DAT_ffff1e97,0xf);
  DAT_ffff1ea8 = FUN_0016bd40((int)DAT_ffff1e98,3);
  DAT_ffff1ea9 = FUN_0016bd40((int)DAT_ffff1e99,0xf);
  DAT_ffff1eac = FUN_0016bd40((int)DAT_ffff1e9c,0x3f);
  DAT_ffff1ead = FUN_0016bd40((int)DAT_ffff1e9d,7);
  DAT_ffff1eae = FUN_0016bd40((int)DAT_ffff1e9e,0xf);
  DAT_ffff1eaf = DAT_ffff1e9f;
  DAT_ffff1ea5 = FUN_0016bd40((int)DAT_ffff1e95,0x3f);
  DAT_ffff1ea6 = FUN_0016bd40((int)DAT_ffff1e96,0x3f);
  DAT_ffff1eaa = FUN_0016bd40((int)DAT_ffff1e9a,3);
  DAT_ffff1eab = FUN_0016bd40((int)DAT_ffff1e9b,0x1f);
  _DAT_ffff1e58 = ((short)DAT_ffff1ea0 & 0x3fU) << 1 | 0x400;
  _DAT_ffff1e5a = ((short)DAT_ffff1ea1 & 0x3fU) << 1 | 0x800;
  _DAT_ffff1e5c = ((short)DAT_ffff1ea2 & 0x3fU) << 1 | 0xc00;
  _DAT_ffff1e5e = ((short)DAT_ffff1ea3 & 3U) << 5 | 0x1000 | ((short)DAT_ffff1ea4 & 0xfU) << 1;
  _DAT_ffff1e64 =
       (ushort)(((int)(char)DAT_ffff1eaf & 0x80U) != 0) * 0x80 | 0x1c00 |
       (ushort)((DAT_ffff1eaf & 0x40) != 0) * 0x40 | (ushort)((DAT_ffff1eaf & 0x20) != 0) * 0x20 |
       ((short)DAT_ffff1ea7 & 0xfU) << 1;
  _DAT_ffff1e66 =
       (ushort)((DAT_ffff1eaf & 8) != 0) * 0x80 | 0x2000 | ((short)DAT_ffff1ea8 & 3U) << 5 |
       ((short)DAT_ffff1ea9 & 0xfU) << 1;
  _DAT_ffff1e6a = ((short)DAT_ffff1eac & 0x3fU) << 1 | 0x2800;
  _DAT_ffff1e6c = ((short)DAT_ffff1ead & 7U) << 5 | 0x2c00 | ((short)DAT_ffff1eae & 0xfU) << 1;
  _DAT_ffff1e60 = ((short)DAT_ffff1ea5 & 0x3fU) << 1 | 0x1400;
  _DAT_ffff1e62 = ((short)DAT_ffff1ea6 & 0x3fU) << 1 | 0x1800;
  _DAT_ffff1e68 = ((short)DAT_ffff1eaa & 3U) << 6 | 0x2400 | ((short)DAT_ffff1eab & 0x1fU) << 1;
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff1e28 = _DAT_ffff1e58;
  _DAT_ffff1e2c = _DAT_ffff1e5a;
  _DAT_ffff1e30 = _DAT_ffff1e5c;
  _DAT_ffff1e34 = _DAT_ffff1e5e;
  _DAT_ffff1e38 = _DAT_ffff1e60;
  _DAT_ffff1e3c = _DAT_ffff1e62;
  _DAT_ffff1e40 = _DAT_ffff1e64;
  _DAT_ffff1e44 = _DAT_ffff1e66;
  _DAT_ffff1e48 = _DAT_ffff1e68;
  _DAT_ffff1e4c = _DAT_ffff1e6a;
  _DAT_ffff1e50 = _DAT_ffff1e6c;
  FUN_00001550(uVar1);
  return;
}

