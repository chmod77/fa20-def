
/* WARNING: Removing unreachable block (ram,0x0003de94) */
/* WARNING: Removing unreachable block (ram,0x0003de80) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0003de28(void)

{
  short sVar1;
  byte bVar6;
  uint uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  
  bVar6 = DAT_ffff000b & 1;
  uVar2 = FUN_0016b5d4(_DAT_fffeef42 - 100);
  _DAT_fffef4ce = FUN_00001540((uVar2 & 0xffff) * 0x7b >> 1);
  if (((DAT_fffef32e & 4) != 0) || (sVar1 = _DAT_fffef4ce, ((int)DAT_fffef3fc & 0x80U) != 0)) {
    sVar1 = 0x23e;
  }
  uVar3 = FUN_0016bd78((int)sVar1,0xffffc01c);
  uVar4 = FUN_0016b630(uVar3,0);
  uVar5 = uVar4;
  _DAT_fffeef44 = uVar4;
  if ((bVar6 != 0) && (4 < _DAT_fffef4d0)) {
    _v_Fuel_Rail_Pressure_gauge_ED16 =
         FUN_0016b4d8(&v_Fuel_Rail_Pressure_gauge_ED16,uVar4,(uint)DAT_fffeed1a << 8);
    uVar5 = FUN_0016b4d8(&DAT_fffeed18,uVar4,0xff00);
    uVar4 = _v_Fuel_Rail_Pressure_gauge_ED16;
  }
  _DAT_fffeed18 = uVar5;
  _v_Fuel_Rail_Pressure_gauge_ED16 = uVar4;
  if (bVar6 == 0) {
    _DAT_fffef4d0 = 0;
  }
  else {
    _DAT_fffef4d0 = FUN_00001540(_DAT_fffef4d0 + 1);
  }
  return;
}

