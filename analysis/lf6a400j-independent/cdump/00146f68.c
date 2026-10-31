
/* WARNING: Removing unreachable block (ram,0x00146faa) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00146f68(void)

{
  undefined2 uVar2;
  undefined4 uVar1;
  
  uVar2 = FUN_00001550(0xf0);
  if (((int)(char)DAT_ffff1e55 & 0x80U) != 0) {
    DAT_ffff1e55 = DAT_ffff1e55 & 0x7f;
    uVar1 = FUN_00001550(0xf0);
    _DAT_ffff6746 = _DAT_ffff6746 | 0x200;
    _DAT_fffff754 = _DAT_fffff754 | 0x200;
    FUN_00001550(uVar1);
    DAT_ffff66ca = DAT_ffff66ca & 0xf7;
  }
  FUN_00001550(uVar2);
  return;
}

