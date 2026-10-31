
/* WARNING: Removing unreachable block (ram,0x001546a6) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00154602(void)

{
  uint uVar1;
  byte bVar3;
  int iVar2;
  undefined *puVar4;
  ushort *puVar5;
  
  _DAT_fffef23e = FUN_001494aa();
  puVar4 = &DAT_0000ffff;
  if ((uint)_DAT_fffef23e * 32000 < 0x7fff8000) {
    puVar4 = (undefined *)((uint)(&DAT_0000ffff + (uint)_DAT_fffef23e * 64000) >> 0x10);
  }
  _DAT_fffeef42 = (undefined2)((uint)puVar4 >> 6);
  DAT_fffeed20 = FUN_0015b46c();
  uVar1 = FUN_001494f4();
  bVar3 = DAT_ffff2982 | 0x10;
  if ((uVar1 & 1) == 0) {
    bVar3 = DAT_ffff2982 & 0xef;
  }
  puVar5 = &DAT_00013170;
  DAT_ffff2982 = bVar3;
  if (_DAT_ffff0b1a < 10) {
    _DAT_fffef186 = 10;
  }
  else {
    iVar2 = FUN_0016c588();
    _DAT_fffef186 = FUN_00001540(iVar2 + (uint)*puVar5);
  }
  _DAT_fffeef54 = FUN_00149438();
  _DAT_fffef240 = FUN_00149438();
  _DAT_fffef240 = _DAT_fffef240 << 6;
  uVar1 = FUN_00149432();
  puVar4 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
    puVar4 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
  }
  _v_Control_Module_Voltage_EF18 = SUB42(puVar4,0);
  DAT_ffffab41 = (undefined1)((uint)((int)puVar4 * 0xfa) >> 0x10);
  uVar1 = FUN_00149444();
  if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
    _DAT_ffff002e = (undefined2)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
  }
  else {
    _DAT_ffff002e = 0xffff;
  }
  return uVar1;
}

