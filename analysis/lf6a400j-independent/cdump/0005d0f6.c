
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0005d0f6(void)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 auStack_18 [8];
  byte abStack_10 [8];
  
  uVar3 = 2;
  uVar2 = 0;
  if ((_DAT_fffef64c & 0x100) != 0) {
    uVar2 = 5;
  }
  cVar1 = FUN_0005d9a4(abStack_10,auStack_18,uVar2);
  if (cVar1 == '\0') {
    if ((abStack_10[0] & 0xf) == 0) {
      uVar3 = 0;
      if (DAT_fffef6b0 == '\x01') {
        uVar3 = 1;
      }
      else {
        FUN_0005d83a();
      }
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
      uVar3 = 1;
    }
  }
  return uVar3;
}

