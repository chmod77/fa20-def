
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0014034c(void)

{
  uint uVar1;
  
  if ((((int)(char)DAT_ffffab74 & 0x80U) != 0) && ((DAT_ffffab74 & 1) == 0)) {
    DAT_ffffab74 = DAT_ffffab74 | 1;
    _DAT_ffff1ce2 = 0;
    DAT_ffff1cd2 = DAT_ffff1cd2 | 0x44;
  }
  FUN_00141094();
  if ((DAT_ffff1cd2 & 0x40) != 0) {
    FUN_00140df0();
  }
  uVar1 = (uint)(char)DAT_ffff1cd2;
  if (((uVar1 & 4) == 0) && (DAT_ffff1ce4 != '\0')) {
    uVar1 = FUN_00140bc4(DAT_ffff1ce5,0xffff1ce6);
    DAT_ffff1ce4 = '\0';
  }
  return uVar1;
}

