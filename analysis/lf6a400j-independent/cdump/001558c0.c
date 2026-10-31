
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001558c0(void)

{
  uint uVar1;
  undefined *puVar2;
  
  _DAT_fffef1fc = FUN_001497a8();
  _DAT_fffef20a = FUN_0014985a();
  _DAT_fffeef66 = FUN_0014963a();
  _DAT_fffeef68 = FUN_00149640();
  _DAT_fffeef6a = FUN_00149646();
  _DAT_fffeef6c = FUN_0014964c();
  _DAT_fffef24e = FUN_0014963a();
  _DAT_fffef24e = _DAT_fffef24e << 6;
  uVar1 = FUN_00149598();
  puVar2 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 96000 < 0x7fff8000) {
    puVar2 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 0x2ee00) >> 0x10);
  }
  DAT_fffeef26 = (undefined1)((uint)puVar2 >> 5);
  _DAT_fffef250 = FUN_00149640();
  _DAT_fffef250 = _DAT_fffef250 << 6;
  uVar1 = FUN_00149628();
  puVar2 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 96000 < 0x7fff8000) {
    puVar2 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 0x2ee00) >> 0x10);
  }
  DAT_fffeef27 = (undefined1)((uint)puVar2 >> 5);
  _DAT_fffef252 = FUN_00149646();
  _DAT_fffef252 = _DAT_fffef252 << 6;
  uVar1 = FUN_0014962e();
  puVar2 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 96000 < 0x7fff8000) {
    puVar2 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 0x2ee00) >> 0x10);
  }
  DAT_fffeef28 = (undefined1)((uint)puVar2 >> 5);
  _DAT_fffef254 = FUN_0014964c();
  _DAT_fffef254 = _DAT_fffef254 << 6;
  uVar1 = FUN_00149634();
  puVar2 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 96000 < 0x7fff8000) {
    puVar2 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 0x2ee00) >> 0x10);
  }
  DAT_fffeef29 = (char)((uint)puVar2 >> 5);
  return;
}

