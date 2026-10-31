
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00042866(void)

{
  char cVar2;
  uint uVar1;
  ushort uVar3;
  
  if ((((((DAT_fffef0d6 & 1) == 0) || ((DAT_fffef0d7 & 1) == 0)) || ((DAT_fffef371 & 2) == 0)) ||
      ((DAT_ffff090b != '\0' || (DAT_ffffab41 < 100)))) || (0x11 < _DAT_fffef0da)) {
    if (((DAT_fffef0d6 & 1) == 0) || (uVar1 = (uint)(char)DAT_fffef0d7, (uVar1 & 1) == 0)) {
      uVar1 = (int)DAT_fffef9b9 & 0xfe;
      DAT_fffef9b9 = (char)uVar1;
      DAT_fffef990 = 1;
    }
    DAT_fffef8be = 0;
    DAT_fffef8bf = 0;
    DAT_fffef8c0 = 0;
    DAT_fffef8c1 = 0;
    DAT_fffef8c2 = '\0';
  }
  else {
    uVar3 = _DAT_fffef0e4 & 0x300;
    if ((((int)DAT_ffff067b & 0x80U) == 0) || (uVar3 != 0x300)) {
      if ((((int)DAT_ffff067b & 0x80U) == 0) || (uVar3 != 0)) {
        DAT_fffef8c1 = 0;
      }
      else {
        DAT_fffef8c1 = FUN_0000152c(DAT_fffef8c1 + 1);
        if (99 < DAT_fffef8c1) {
          DAT_fffef8be = 0;
          DAT_fffef8bd = DAT_fffef8bd & 0x7f;
        }
      }
    }
    else {
      DAT_fffef8be = FUN_0000152c(DAT_fffef8be + 1);
      DAT_fffef8c1 = 0;
      if (0xf9 < DAT_fffef8be) {
        DAT_fffef8bd = DAT_fffef8bd | 0x80;
      }
    }
    if (((((int)DAT_ffff067b & 0x80U) == 0) && (uVar3 == 0x200)) &&
       (DAT_fffef8bf = FUN_0000152c(DAT_fffef8bf + 1), 0xf9 < DAT_fffef8bf)) {
      DAT_fffef8bd = DAT_fffef8bd | 0x40;
      DAT_fffef98e = '\x01';
    }
    if (((((int)DAT_ffff067b & 0x80U) == 0) && (uVar3 == 0x100)) &&
       (DAT_fffef8c0 = FUN_0000152c(DAT_fffef8c0 + 1), 0xf9 < DAT_fffef8c0)) {
      DAT_fffef8bd = DAT_fffef8bd | 0x20;
      DAT_fffef98f = '\x01';
    }
    cVar2 = ((int)DAT_ffff067b & 0x80U) == 0;
    if ((((bool)cVar2) && (cVar2 = uVar3 == 0, uVar3 == 0)) &&
       (cVar2 = FUN_0000152c(DAT_fffef8c2 + 1), cVar2 != '\0')) {
      DAT_fffef8bf = 0;
      DAT_fffef98e = '\x01';
      DAT_fffef8c0 = 0;
      DAT_fffef8bd = DAT_fffef8bd & 0x9f;
      DAT_fffef98f = '\x01';
    }
    DAT_fffef8c2 = cVar2;
    if (((DAT_fffef8bd & 0x40) == 0) && ((DAT_fffef8bd & 0x20) == 0)) {
      if ((int)DAT_fffef98e != 1) {
        return (int)DAT_fffef98e;
      }
      if ((int)DAT_fffef98f != 1) {
        return (int)DAT_fffef98f;
      }
      uVar1 = (int)DAT_fffef9b9 & 0xfe;
      DAT_fffef9b9 = (char)uVar1;
    }
    else {
      uVar1 = (int)DAT_fffef9b9 | 1;
      DAT_fffef9b9 = (char)uVar1;
    }
    DAT_fffef990 = 1;
  }
  return uVar1;
}

