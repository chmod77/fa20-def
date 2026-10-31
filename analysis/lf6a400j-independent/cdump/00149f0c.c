
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00149f0c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0014ae50();
  FUN_0014af60();
  FUN_0014afdc();
  DAT_ffff2c12 = (undefined1)((ushort)_DAT_fffff844 >> 8);
  DAT_ffff2c14 = (undefined1)((ushort)_DAT_fffff846 >> 8);
  _DAT_ffff2c16 = _DAT_fffff816;
  DAT_ffff2c13 = DAT_ffff2c12;
  DAT_ffff2c15 = DAT_ffff2c14;
  FUN_00149aa0();
  puVar2 = (undefined *)((uint)_DAT_ffffabd0 * (uint)_DAT_ffff2c16 >> 0xf);
  puVar1 = &DAT_0000ffc0;
  if (puVar2 < &UNK_0000ffc1) {
    puVar1 = puVar2;
  }
  _DAT_ffff2c18 = SUB42(puVar1,0);
  _DAT_ffff2c6c = (undefined2)((int)(uint)_DAT_ffff2c16 >> 6);
  _DAT_ffff2c68 = FUN_00001540(((uint)puVar1 & 0xffff) << 1);
  FUN_0014a760();
  FUN_0014a7c0();
  FUN_0014ae18();
  FUN_0014b338();
  FUN_0014abc0();
  FUN_0014b0b8();
  FUN_0014b104();
  FUN_0014b150();
  FUN_0014b19c();
  return;
}

