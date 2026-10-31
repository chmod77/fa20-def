
/* WARNING: Removing unreachable block (ram,0x0014bdca) */
/* WARNING: Removing unreachable block (ram,0x0014be26) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0014bd5c(void)

{
  undefined2 uVar1;
  uint uVar2;
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff1f4a = _DAT_fffff814;
  FUN_001499e4(&DAT_ffff1f4a,&DAT_00002710);
  _DAT_ffff1f4e = _DAT_fffff810;
  FUN_001499e4(&DAT_ffff1f4e,&DAT_00002710);
  _DAT_ffff1f52 = _DAT_fffff812;
  FUN_001499e4(&DAT_ffff1f52,0xffff9c40);
  FUN_00001550(uVar1);
  _DAT_ffff1fd8 = FUN_0016b5d4(_DAT_ffff1f4c);
  uVar2 = (uint)_DAT_ffff1f50 * -0x100;
  if ((int)uVar2 < 0) {
    uVar2 = uVar2 + 0xff;
  }
  _DAT_ffff1fda = FUN_0016b5d4(((int)(char)(uVar2 >> 0x18) << 0x10 | uVar2 >> 8 & 0xffff) + 0x10000)
  ;
  _DAT_ffff1fdc = FUN_0016b5d4(_DAT_ffff1f54);
  _DAT_ffff1fde = _DAT_ffff1f4c;
  _DAT_ffff1fe0 = _DAT_ffff1f50;
  _DAT_ffff1fe2 = _DAT_ffff1f54;
  return;
}

