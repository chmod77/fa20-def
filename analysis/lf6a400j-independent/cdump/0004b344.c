
void FUN_0004b344(void)

{
  uint uVar1;
  
  FUN_0004b2b8();
  FUN_00061f4c();
  FUN_000622b0();
  FUN_00062032();
  FUN_000621aa();
  FUN_000620ee();
  FUN_00062406();
  FUN_00061ef2();
  FUN_00062212();
  FUN_00061f6a();
  FUN_00062156();
  FUN_0006209a();
  FUN_00062318();
  FUN_0006235c();
  FUN_000623dc();
  if (((int)DAT_ffffabc5 & 0x80U) != 0) {
    for (uVar1 = 0; (uVar1 & 0xff) < 4; uVar1 = uVar1 + 1) {
      uVar1 = uVar1 & 0xff;
      if ((&DAT_00168eec)[uVar1] == DAT_ffff29d3) {
        *(ushort *)(&DAT_00168ecc)[uVar1 * 2] = (ushort)(byte)(&DAT_00168ea4)[uVar1];
      }
      else {
        *(ushort *)(&DAT_00168ecc)[uVar1 * 2] = (ushort)(byte)(&DAT_00168ea8)[uVar1] << 1;
      }
    }
  }
  FUN_000be6c0();
  FUN_0009cae0();
  if (((int)DAT_ffffabc5 & 0x80U) == 0) {
    FUN_0008a670();
    FUN_00089a78();
  }
  FUN_000d172c();
  return;
}

