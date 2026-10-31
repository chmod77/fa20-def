
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00066a7c(void)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = (undefined *)(((uint)_DAT_ffff00ca - (uint)_DAT_ffff34c0) + 1000);
  if ((int)puVar1 < 0) {
    puVar1 = (undefined *)0x0;
  }
  if ((int)&DAT_0000ffff < (int)puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  _DAT_ffff00e8 = (short)puVar1;
  puVar1 = (undefined *)(((uint)_DAT_ffff00cc - (uint)_DAT_ffff34c2) + 1000);
  if ((int)puVar1 < 0) {
    puVar1 = (undefined *)0x0;
  }
  if ((int)&DAT_0000ffff < (int)puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  _DAT_ffff00ea = (short)puVar1;
  uVar2 = (uint)_DAT_ffff00ce - (uint)_DAT_ffff34c4;
  if ((int)uVar2 < 0) {
    uVar2 = 0;
  }
  puVar1 = (undefined *)(((uint)_DAT_ffff34ee * (uVar2 & 0xffff) >> 0x10) + 1000);
  if (&DAT_0000ffff < puVar1) {
    puVar1 = &DAT_0000ffff;
  }
  _DAT_ffff00ec = (short)puVar1;
  return;
}

