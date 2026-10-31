
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0013d522(char param_1,int param_2)

{
  byte bVar1;
  uint uVar2;
  
  uVar2 = (uint)param_1;
  bVar1 = (&DAT_ffff266c)[(int)uVar2 >> 3] & (&DAT_0013d898)[uVar2 & 7];
  if (param_2 == 0xe) {
    if (uVar2 == 0) {
      return _DAT_ffff2634 & 0x1000;
    }
    if (bVar1 != 0) {
      if (uVar2 == 0) {
        return 1;
      }
      if ((int)*(char *)(_DAT_ffff2640 + 2) == uVar2) {
        return 1;
      }
    }
  }
  else if (uVar2 == 0) {
    if ((_DAT_ffff2634 & 0x1000) == 0) {
      return 1;
    }
  }
  else if ((bVar1 == 0) &&
          (((&DAT_0013d898)[uVar2 & 7] & (&DAT_00169286)[((int)uVar2 >> 3) + _DAT_ffff2630 * 0x10])
           != 0)) {
    return 1;
  }
  return 0;
}

