
/* WARNING: Removing unreachable block (ram,0x000590b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00058f8a(void)

{
  int iVar1;
  undefined4 uVar2;
  int extraout_r2;
  int extraout_r2_00;
  
  if ((DAT_fffeeec1 & 1) == 0) {
    iVar1 = __udiv32_r1_by_r0((int)_DAT_fffef29c << 0x10,0x708);
    uVar2 = FUN_0016b624(iVar1 - extraout_r2);
    _DAT_fffef2b8 = FUN_0016b914(uVar2);
    iVar1 = __udiv32_r1_by_r0((int)_DAT_fffef2a6 << 0x10,0x708);
    uVar2 = FUN_0016b624(iVar1 - extraout_r2_00);
    _DAT_fffef2ba = FUN_0016b914(uVar2);
    _DAT_fffef2bc = FUN_0016b520(&DAT_fffef2bc,(int)_DAT_fffef2b8,0xfffff000);
    _DAT_fffef2be = FUN_0016b520(&DAT_fffef2be,(int)_DAT_fffef2ba,0xfffff000);
    uVar2 = FUN_0016b970(_DAT_ffff1814,(int)_DAT_fffef2b8);
    _DAT_fffef2c0 = FUN_0016b5ec(uVar2);
    uVar2 = FUN_0016b970(_DAT_ffff1818,(int)_DAT_fffef2ba);
    _DAT_fffef2c2 = FUN_0016b5ec(uVar2);
  }
  else {
    _DAT_fffef2b8 = 0;
    _DAT_fffef2bc = 0;
    _DAT_fffef2c0 = 0;
    _DAT_fffef2ba = 0;
    _DAT_fffef2be = 0;
    _DAT_fffef2c2 = 0;
  }
  return;
}

