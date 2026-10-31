
/* WARNING: Removing unreachable block (ram,0x0015bf08) */
/* WARNING: Removing unreachable block (ram,0x0015bed4) */
/* WARNING: Removing unreachable block (ram,0x0015bf5c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001597a8(void)

{
  undefined4 uVar1;
  uint uVar2;
  
  FUN_00149b06();
  if ((DAT_ffff20cc & 2) == 0) {
    uVar2 = (uint)(char)DAT_ffff20cc;
    DAT_ffff20cc = (char)(uVar2 | 2);
    return uVar2 | 2;
  }
  if (DAT_ffff20c7 == '\x02') {
    if ((_DAT_fffff72c & 4) == 0) {
      uVar1 = FUN_00001550(0xf0);
      _DAT_ffff671e = _DAT_ffff671e | 4;
      _DAT_fffff72c = _DAT_fffff72c | 4;
      FUN_00001550(uVar1);
    }
    else {
      uVar1 = FUN_00001550(0xf0);
      _DAT_ffff671e = _DAT_ffff671e & 0xfffb;
      _DAT_fffff72c = _DAT_fffff72c & 0xfffb;
      FUN_00001550(uVar1);
    }
  }
  uVar2 = (uint)DAT_ffff20e0;
  DAT_ffff20e0 = (char)(uVar2 | 0x80);
  if (DAT_ffff20c7 != -1) {
    DAT_ffff20c7 = DAT_ffff20c7 + '\x01';
  }
  return uVar2 | 0x80;
}

