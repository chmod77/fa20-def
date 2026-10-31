
/* WARNING: Removing unreachable block (ram,0x0015b2a4) */
/* WARNING: Removing unreachable block (ram,0x0015b2d8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015b25c(void)

{
  undefined1 extraout_var;
  undefined4 uVar1;
  
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
    if ((DAT_ffff20bc == '\x02') || (DAT_ffff20bc == '\x04')) {
      FUN_0014a4ac(7,0xfffff80e);
      DAT_ffff20ca = extraout_var;
    }
  }
  if (DAT_ffff20c7 != -1) {
    DAT_ffff20c7 = DAT_ffff20c7 + '\x01';
  }
  return;
}

