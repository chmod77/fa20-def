
undefined4 FUN_0005d88a(void)

{
  char cVar1;
  undefined4 uVar2;
  byte local_c [8];
  
  uVar2 = 2;
  cVar1 = FUN_0005d9a4(local_c,0,0);
  if (cVar1 == '\0') {
    if ((local_c[0] & 0xf) == 0) {
      uVar2 = 0;
    }
    else {
      cVar1 = '\x01';
    }
  }
  if (cVar1 == '\x01') {
    if (DAT_fffef6b9 != 0xff) {
      DAT_fffef6b9 = DAT_fffef6b9 + 1;
    }
    if (DAT_fffef6b9 < 3) {
      FUN_0005d99c();
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

