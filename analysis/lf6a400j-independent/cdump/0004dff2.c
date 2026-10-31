
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004dff2(void)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  int *piVar3;
  
  _DAT_ffff2b0a = _DAT_ffff2b08;
  _DAT_ffff2b08 = _DAT_ffff2b06;
  _DAT_ffff2b06 = _DAT_ffff2b04;
  _DAT_ffff2b04 = _DAT_ffff2b02;
  _DAT_ffff2b02 = _DAT_ffff2b00;
  piVar3 = (int *)&DAT_ffff2a44;
  if (_DAT_ffff2a44 == 0) {
    _DAT_ffff2b00 = 0xffff;
  }
  else {
    if (_DAT_ffff2a44 < 0x10000000) {
      uVar2 = __udiv32_r1_by_r0(272000000,_DAT_ffff2a44);
      if (uVar2 < extraout_r2) {
        iVar1 = __udiv32b_r1_by_r0(272000000,*piVar3);
        iVar1 = __udiv32_r1_by_r0(iVar1 << 4,*piVar3);
        iVar1 = iVar1 + uVar2 * 0x10;
      }
      else {
        iVar1 = -1;
      }
    }
    else {
      iVar1 = __udiv32_r1_by_r0(272000000,_DAT_ffff2a44 >> 4);
    }
    iVar1 = __udiv32_r1_by_r0(iVar1,3);
    _DAT_ffff2b00 = FUN_00001540(iVar1);
  }
  return;
}

