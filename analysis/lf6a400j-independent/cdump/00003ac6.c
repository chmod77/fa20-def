
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00003ac6(void)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (DAT_ffffab26 == '\0') {
    DAT_ffffab26 = '\x01';
  }
  else if (_DAT_fffff430 < 40000000) goto LAB_00003af6;
  _DAT_fffff430 = 0;
  uVar1 = 0xff;
LAB_00003af6:
  DAT_fffff401 = DAT_fffff401 & 0xfe;
  DAT_fffff401 = DAT_fffff401 | 1;
  return uVar1;
}

