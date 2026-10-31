
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00050992(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = FUN_0016bc08(&PTR_DAT_00163ad8,(int)_DAT_ffff0b16);
  iVar2 = __udiv32_r1_by_r0((uVar1 & 0xffff) * 0x62b,0x640);
  _DAT_fffef5a0 = FUN_00001540(iVar2);
  return;
}

