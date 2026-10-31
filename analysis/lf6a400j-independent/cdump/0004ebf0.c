
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004ebf0(void)

{
  byte bVar1;
  undefined4 uVar2;
  byte bVar3;
  
  bVar1 = DAT_fffef331;
  if ((DAT_fffef331 & 1) == 0) {
    if ((DAT_fffef6f1 & 1) != 0) {
      DAT_fffef356 = DAT_fffef356 | 1;
    }
  }
  else {
    DAT_fffef356 = DAT_fffef356 & 0xfe;
  }
  if ((DAT_fffef331 & 1) == 0) {
    if ((DAT_fffef356 & 1) != 0) {
      if (_DAT_fffef35c < 0xfa1) goto LAB_0004ece8;
    }
    uVar2 = FUN_00001550(0x70);
    DAT_fffef330 = DAT_fffef330 & 0x7f;
  }
  else {
LAB_0004ece8:
    uVar2 = FUN_00001550(0x70);
    DAT_fffef330 = DAT_fffef330 | 0x80;
  }
  FUN_00001550(uVar2);
  if ((DAT_fffef356 & 1) == 0) {
    _DAT_fffef35c = 0;
  }
  else {
    _DAT_fffef35c = FUN_00001540(_DAT_fffef35c + 1);
  }
  bVar3 = DAT_fffef6f1 | 1;
  if ((bVar1 & 1) == 0) {
    bVar3 = DAT_fffef6f1 & 0xfe;
  }
  DAT_fffef6f1 = bVar3;
  return;
}

