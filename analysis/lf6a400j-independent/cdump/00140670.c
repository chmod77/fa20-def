
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00140670(void)

{
  undefined4 uVar1;
  undefined1 local_c;
  
  uVar1 = FUN_00001550(0xf0);
  DAT_ffff1ce9 = (undefined1)_DAT_fffff736;
  DAT_ffff1cea = DAT_fffff019;
  DAT_ffff1ceb = DAT_fffff01e;
  DAT_fffff018 = 0x80;
  DAT_fffff01e = 0xfa;
  _DAT_fffff736 = _DAT_fffff736 & 0xff;
  DAT_fffff019 = 1;
  local_c = 0;
  do {
    local_c = local_c + 1;
  } while (local_c < 7);
  DAT_fffff01c = DAT_fffff01c & 199;
  DAT_fffff01a = 0x30;
  uVar1 = FUN_00001550(uVar1);
  return uVar1;
}

