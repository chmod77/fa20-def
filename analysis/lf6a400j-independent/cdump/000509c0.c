
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000509c0(void)

{
  char cVar1;
  char cVar2;
  
  cVar2 = DAT_ffff057d;
  cVar1 = DAT_fffef51a;
  if ((DAT_fffeef76 & 0x40) == 0) {
    if ((DAT_fffef51a == DAT_fffef5b5) && (((int)(char)DAT_fffeef76 & 0x80U) != 0)) {
      DAT_fffef5b4 = DAT_fffef51a;
    }
    else if ((DAT_ffff057d == DAT_fffef5b6) && (((int)(char)DAT_fffeef76 & 0x80U) == 0)) {
      DAT_fffef5b4 = DAT_ffff057d;
    }
  }
  if ((DAT_fffef51a == DAT_fffef5b5) && (((int)(char)DAT_fffeef76 & 0x80U) != 0)) {
    _DAT_fffef5b8 = FUN_00001540(_DAT_fffef5b8 + 1);
  }
  else {
    _DAT_fffef5b8 = 0;
  }
  if ((cVar2 == DAT_fffef5b6) && (((int)(char)DAT_fffeef76 & 0x80U) == 0)) {
    _DAT_fffef5ba = FUN_00001540(_DAT_fffef5ba + 1);
  }
  else {
    _DAT_fffef5ba = 0;
  }
  DAT_fffef5b5 = cVar1;
  DAT_fffef5b6 = cVar2;
  return;
}

