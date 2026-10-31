
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001471d4(void)

{
  byte bVar3;
  uint uVar1;
  undefined4 uVar2;
  
  bVar3 = DAT_ffff66ca & 0xfb;
  if ((DAT_ffff66ca & 8) == 0) {
    DAT_ffff66ca = bVar3;
    FUN_0014776c();
    uVar1 = (int)(char)DAT_ffff66ca | 4;
    DAT_ffff66ca = (byte)uVar1;
  }
  else {
    DAT_ffff66ca = bVar3;
    if ((((int)DAT_ffff1e54 & 0x80U) != 0) &&
       (((((((DAT_ffff1e90 != DAT_ffff1ea0 || (DAT_ffff1e91 != DAT_ffff1ea1)) ||
            (DAT_ffff1e92 != DAT_ffff1ea2)) ||
           ((DAT_ffff1e93 != DAT_ffff1ea3 || (DAT_ffff1e94 != DAT_ffff1ea4)))) ||
          ((DAT_ffff1e95 != DAT_ffff1ea5 ||
           ((DAT_ffff1e96 != DAT_ffff1ea6 ||
            (-(uint)(((int)(char)DAT_ffff1e9f & 0x80U) == 0) !=
             -(uint)(((int)(char)DAT_ffff1eaf & 0x80U) == 0))))))) ||
         (-(uint)((DAT_ffff1e9f & 0x40) == 0) != -(uint)((DAT_ffff1eaf & 0x40) == 0))) ||
        (((((-(uint)((DAT_ffff1e9f & 0x20) == 0) != -(uint)((DAT_ffff1eaf & 0x20) == 0) ||
            (DAT_ffff1e97 != DAT_ffff1ea7)) ||
           (-(uint)((DAT_ffff1e9f & 8) == 0) != -(uint)((DAT_ffff1eaf & 8) == 0))) ||
          (((DAT_ffff1e98 != DAT_ffff1ea8 || (DAT_ffff1e99 != DAT_ffff1ea9)) ||
           ((DAT_ffff1e9a != DAT_ffff1eaa ||
            ((DAT_ffff1e9b != DAT_ffff1eab || (DAT_ffff1e9c != DAT_ffff1eac)))))))) ||
         ((DAT_ffff1e9d != DAT_ffff1ead || (DAT_ffff1e9e != DAT_ffff1eae)))))))) {
      FUN_0014776c();
      DAT_ffff66ca = DAT_ffff66ca | 4;
    }
    uVar1 = (uint)(char)DAT_ffff66ca;
    if ((uVar1 & 4) == 0) {
      uVar2 = FUN_00001550(0xf0);
      _DAT_ffff1e28 = 0x8000;
      _DAT_ffff1e2c = 0x8400;
      _DAT_ffff1e30 = 0x8800;
      _DAT_ffff1e34 = 0x8c00;
      _DAT_ffff1e38 = 0x9000;
      _DAT_ffff1e3c = 0x9400;
      uVar1 = FUN_00001550(uVar2);
      return uVar1;
    }
  }
  return uVar1;
}

