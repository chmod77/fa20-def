
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00156100(void)

{
  uint uVar1;
  undefined *puVar2;
  
  _DAT_ffffabc2 = FUN_00149846();
  _DAT_fffeef62 = FUN_001494a4();
  _DAT_fffef24a = FUN_001494a4();
  _DAT_fffef24a = _DAT_fffef24a << 6;
  uVar1 = FUN_0014949e();
  puVar2 = &DAT_0000ffff;
  if ((uVar1 & 0xffff) * 32000 < 0x7fff8000) {
    puVar2 = (undefined *)((uint)(&DAT_0000ffff + (uVar1 & 0xffff) * 64000) >> 0x10);
  }
  DAT_fffee6d1 = (char)((uint)puVar2 >> 2);
  _DAT_fffef3ac = _DAT_ffff34c0;
  return;
}

