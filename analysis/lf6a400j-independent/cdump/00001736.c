
/* WARNING: Removing unreachable block (ram,0x00001808) */
/* WARNING: Removing unreachable block (ram,0x0000180e) */
/* WARNING: Removing unreachable block (ram,0x00001812) */
/* WARNING: Removing unreachable block (ram,0x00001818) */
/* WARNING: Removing unreachable block (ram,0x0000181e) */
/* WARNING: Removing unreachable block (ram,0x0000182a) */
/* WARNING: Removing unreachable block (ram,0x00001856) */
/* WARNING: Removing unreachable block (ram,0x00001832) */
/* WARNING: Removing unreachable block (ram,0x0000185c) */
/* WARNING: Removing unreachable block (ram,0x00001860) */
/* WARNING: Removing unreachable block (ram,0x000017f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001736(void)

{
  undefined4 uVar1;
  
  _DAT_fffff720 = _DAT_fffff720 & 0x3fff | 0x4000;
  _DAT_fffff730 = _DAT_fffff730 & 0xdfff | 0x2000;
  _DAT_fffff722 = _DAT_fffff722 & 0xfff | 0xa000;
  _DAT_fffff732 = _DAT_fffff732 & 0xf3ff | 0x800;
  DAT_fffffc00 = 0x8c;
  DAT_fffffc01 = 0;
  DAT_fffffc02 = 4;
  DAT_fffffc0c = 4;
  DAT_fffffc03 = 0xc0;
  if (_DAT_ffff6714 == 0x94) {
    _DAT_ffff6714 = 0xa4;
  }
  else {
    _DAT_ffff6714 = 0x94;
  }
  uVar1 = FUN_00001550(0xf0);
  _DAT_ffff671e = _DAT_ffff671e & 0xefff;
  _DAT_fffff72c = _DAT_fffff72c & 0xefff;
  FUN_00001550(uVar1);
  do {
  } while( true );
}

