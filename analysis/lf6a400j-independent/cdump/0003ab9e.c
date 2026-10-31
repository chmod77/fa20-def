
/* WARNING: Removing unreachable block (ram,0x0003abec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003ab9e(void)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  
  sVar2 = _DAT_ffff13e4;
  uVar1 = _DAT_ffff13e6 & 0x3ff;
  uVar3 = FUN_00001550(0x70);
  _DAT_fffee680 = sVar2 * 0x400 + uVar1;
  _DAT_fffee682 = (ushort)DAT_ffff0947 + (ushort)DAT_fffef535 * 0x100;
  FUN_00001550(uVar3);
  return;
}

