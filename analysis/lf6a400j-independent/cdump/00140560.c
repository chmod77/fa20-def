
/* WARNING: Removing unreachable block (ram,0x001405dc) */
/* WARNING: Removing unreachable block (ram,0x00140640) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00140560(void)

{
  undefined4 uVar1;
  undefined1 local_14;
  
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff675e = _DAT_ffff675e & 0x7fff;
  _DAT_fffff76c = _DAT_fffff76c & 0x7fff;
  FUN_00001550(uVar1);
  do {
  } while (((int)(char)DAT_fffff01c & 0x80U) == 0);
  if (((int)(char)DAT_fffff01c & 0x80U) != 0) {
    DAT_fffff01b = 4;
    DAT_fffff01c = DAT_fffff01c & 0x7f;
  }
  do {
    if ((DAT_fffff01c & 0x20) != 0) {
      DAT_fffff01c = DAT_fffff01c & 0xdf;
    }
  } while ((DAT_fffff01c & 0x40) == 0);
  DAT_fffff01c = DAT_fffff01c & 0xbf;
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff675e = _DAT_ffff675e | 0x8000;
  _DAT_fffff76c = _DAT_fffff76c | 0x8000;
  FUN_00001550(uVar1);
  local_14 = 0;
  do {
    local_14 = local_14 + 1;
  } while (local_14 < 6);
  return;
}

