
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001409d8(void)

{
  short local_20 [2];
  short asStack_1c [4];
  
  do {
    if (_DAT_ffff6784 < 0x70) {
      FUN_00140bc4((int)(short)_DAT_ffff6784,local_20);
      FUN_00140bc4((short)_DAT_ffff6784 + 0x70,asStack_1c);
      FUN_00140a68((int)local_20[0],(int)asStack_1c[0]);
LAB_00140a2c:
      _DAT_ffff1cde = FUN_0016bd34(_DAT_ffff1cde - 1);
      if (_DAT_ffff1cde != 0) {
        _DAT_ffff6784 = FUN_00001540(_DAT_ffff6784 + 1);
      }
    }
    else if (0xdf < _DAT_ffff6784) {
      FUN_00140bc4((int)(short)_DAT_ffff6784,(uint)_DAT_ffff6784 * 2 + -0xcbe0);
      goto LAB_00140a2c;
    }
    if (_DAT_ffff1cde == 0) {
      DAT_ffff1cd2 = DAT_ffff1cd2 & 0x7f;
      return;
    }
  } while( true );
}

