
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000050f4(void)

{
  undefined2 uVar1;
  
  if (_DAT_ffffa2ec == 0x7e8) {
    _DAT_ffffd400 = 0x7e80;
    _DAT_ffffd404 = (short)DAT_ffffa2ee & 0xf;
    FUN_00005144(0xffffd408,&DAT_ffffa2f2,8);
    uVar1 = FUN_00001550(0x80);
    _DAT_ffffd020 = _DAT_ffffd020 | 0x100;
    FUN_00001550(uVar1);
    return;
  }
  return;
}

