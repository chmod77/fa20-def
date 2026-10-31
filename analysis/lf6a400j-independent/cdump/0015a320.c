
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0015a320(void)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  
  DAT_ffff2eef = (byte)((ushort)_DAT_ffff2d7c >> 8);
  DAT_ffff2ef0 = (char)_DAT_ffff2d7c;
  if ((DAT_ffff2eef < 8) && (DAT_ffff2ef0 != '\0')) {
    DAT_ffff2eef = DAT_ffff2eef + 1;
  }
  else if (7 < DAT_ffff2eef) {
    DAT_ffff2eef = 8;
    DAT_ffff2ef0 = '\0';
  }
  uVar1 = (uint)DAT_ffffab80;
  if ((uVar1 == 3) && (uVar1 = FUN_0014412c(), (uVar1 & 0xff) != 0)) {
    uVar2 = FUN_00001550(0xf0);
    uVar1 = FUN_0016b428(_DAT_ffff1a3a,&DAT_00002400,0x800,(DAT_ffff2d7a & 0x10) != 0);
    bVar3 = DAT_ffff2d7a | 0x10;
    if ((uVar1 & 1) == 0) {
      bVar3 = DAT_ffff2d7a & 0xef;
    }
    DAT_ffff2d7a = bVar3;
    FUN_00001550(uVar2);
    DAT_ffff2efb = (DAT_ffff2d7a & 0x10) == 0;
    uVar1 = FUN_00159968(_DAT_ffff2d78,_DAT_ffff2d7e);
    return uVar1;
  }
  return uVar1;
}

