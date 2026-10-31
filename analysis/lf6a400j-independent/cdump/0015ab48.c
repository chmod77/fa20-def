
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0015ab48(void)

{
  byte bVar1;
  byte bVar2;
  undefined4 *in_stack_00000000;
  
  bVar1 = (byte)((uint)_DAT_ffff1c20 >> 0x18);
  bVar2 = bVar1 | 0xc0;
  if ((_DAT_fffff76c & 0x400) != 0) {
    bVar2 = bVar1 & 0x7f | 0x40;
  }
  _DAT_ffff1c20 = CONCAT13(bVar2,DAT_ffff1c20_1);
  *in_stack_00000000 = _DAT_ffff1c20;
  return;
}

