
/* WARNING: Removing unreachable block (ram,0x0015ccb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001597ca(void)

{
  uint uVar1;
  
  FUN_0016075c();
  uVar1 = (uint)DAT_fffeed1b;
  if (((uVar1 & 0x80) != 0) && (uVar1 = FUN_0015cb08(1), (uVar1 & 0xff) == 0xff)) {
    FUN_00001550(0xf0);
    do {
    } while( true );
  }
  return uVar1;
}

