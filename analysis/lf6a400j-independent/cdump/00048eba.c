
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00048eba(void)

{
  undefined2 uVar1;
  byte bVar2;
  
  if (((int)DAT_ffff06bf & 0x80U) != 0) {
    uVar1 = FUN_00001550(0xf0);
    bVar2 = FUN_0016b73c(&PTR_DAT_00163a04,(int)_v_Engine_Speed_OBD_copy_2ADA,(int)DAT_ffff03a0);
    if (bVar2 < DAT_ffff2b18) {
      DAT_ffff2b18 = bVar2;
    }
    FUN_00001550(uVar1);
    return;
  }
  return;
}

