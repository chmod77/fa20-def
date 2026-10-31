
/* WARNING: Removing unreachable block (ram,0x00059732) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00059602(void)

{
  undefined4 uVar1;
  
  if ((DAT_fffeeec1 & 1) == 0) {
    uVar1 = FUN_0016b624((uint)_DAT_ffff39b8 - (uint)_DAT_fffef288,0xffffd4ef,FUN_0016b624);
    _DAT_fffef2ac = FUN_0016b914(uVar1);
    uVar1 = FUN_0016b624((uint)_DAT_ffff39ba - (uint)_DAT_fffef292,0xffffd4ef,FUN_0016b624);
    _DAT_fffef2ae = FUN_0016b914(uVar1);
    _DAT_fffef2b0 = FUN_0016b520(&DAT_fffef2b0,(int)_DAT_fffef2ac,0xfffff000);
    _DAT_fffef2b2 = FUN_0016b520(&DAT_fffef2b2,(int)_DAT_fffef2ae,0xfffff000);
    uVar1 = FUN_0016b970(_DAT_ffff180c,(int)_DAT_fffef2ac);
    _DAT_fffef2b4 = FUN_0016b5ec(uVar1);
    uVar1 = FUN_0016b970(_DAT_ffff1810,(int)_DAT_fffef2ae);
    _DAT_fffef2b6 = FUN_0016b5ec(uVar1);
  }
  else {
    _DAT_fffef2ac = 0;
    _DAT_fffef2b0 = 0;
    _DAT_fffef2b4 = 0;
    _DAT_fffef2ae = 0;
    _DAT_fffef2b2 = 0;
    _DAT_fffef2b6 = 0;
  }
  return;
}

