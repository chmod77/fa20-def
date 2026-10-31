
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0006bba0(void)

{
  char cVar2;
  uint uVar1;
  
  cVar2 = FUN_00140424(0,0x10e);
  if (((DAT_ffff0000 & 2) != 0) && (cVar2 == '\0')) {
    FUN_00001550(0xf0);
    _DAT_ffff3b68 = FUN_0004a5c2(&DAT_ffff2f80);
    FUN_000006e4();
  }
  uVar1 = (uint)DAT_fffef22c;
  if ((uVar1 & 0x80) != 0) {
    uVar1 = (int)DAT_fffef82d | 0x20;
    DAT_fffef82d = (char)uVar1;
  }
  return uVar1;
}

