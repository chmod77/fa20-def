
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000073c(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  FUN_00000820();
  FUN_000009a4();
  FUN_00000a2c();
  FUN_00000a6c();
  FUN_00000a9c();
  DAT_fffff404 = 1;
  iVar1 = 0x1a;
  do {
    iVar1 = iVar1 + -1;
  } while (iVar2 <= iVar1);
  DAT_fffff401 = DAT_fffff401 & 0xfe | 1;
  _DAT_ffffbffc = 0xa9c;
  FUN_00001b78();
  return;
}

