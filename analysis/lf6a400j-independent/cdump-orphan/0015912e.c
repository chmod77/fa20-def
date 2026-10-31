
/* WARNING: Removing unreachable block (ram,0x0015ccb8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015912e(void)

{
  uint uVar1;
  
  if (((DAT_ffff000b & 1) == 0) || (DAT_fffef4c4 != '\x05')) {
    FUN_0014d9ac();
  }
  FUN_0016075c();
  uVar1 = (uint)DAT_fffeed1b;
  if (((uVar1 & 0x80) != 0) && (uVar1 = FUN_0015cb08(1), (uVar1 & 0xff) == 0xff)) {
    FUN_00001550(0xf0);
    do {
    } while( true );
  }
  return uVar1;
}

