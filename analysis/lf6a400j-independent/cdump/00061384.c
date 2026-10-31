
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00061384(void)

{
  bool bVar1;
  char cVar2;
  uint uVar3;
  byte bVar4;
  undefined1 local_4c;
  undefined1 uStack_48;
  undefined1 uStack_44;
  
  uVar3 = FUN_0016b428(&LAB_00001200,(int)_v_Engine_Speed_2994,0x100);
  bVar4 = DAT_fffef4d3 | 0x80;
  if ((uVar3 & 1) == 0) {
    bVar4 = DAT_fffef4d3 & 0x7f;
  }
  DAT_fffef4d3 = bVar4;
  uVar3 = FUN_0016b428((int)_v_Engine_Speed_2994,0,0x100);
  bVar4 = DAT_fffef4d3 | 0x20;
  if ((uVar3 & 1) == 0) {
    bVar4 = DAT_fffef4d3 & 0xdf;
  }
  DAT_fffef4d3 = bVar4;
  uVar3 = FUN_0016b428(0x299a,(int)_v_Fuel_Rail_Pressure_gauge_ED16,0x666);
  bVar4 = DAT_fffef4d3 | 0x40;
  if ((uVar3 & 1) == 0) {
    bVar4 = DAT_fffef4d3 & 0xbf;
  }
  DAT_fffef4d3 = bVar4;
  uVar3 = FUN_0016b428(0x47,(int)_DAT_fffef0da,0x23);
  bVar4 = DAT_fffef4d3 | 0x10;
  if ((uVar3 & 1) == 0) {
    bVar4 = DAT_fffef4d3 & 0xef;
  }
  DAT_fffef4d3 = bVar4;
  uVar3 = FUN_0016b428((int)_DAT_fffeeede,0xffffc000,0x800,(bVar4 & 8) != 0);
  cVar2 = DAT_fffef4e4;
  bVar1 = (uVar3 & 1) == 0;
  bVar4 = DAT_fffef4d3 | 8;
  if (bVar1) {
    bVar4 = DAT_fffef4d3 & 0xf7;
  }
  DAT_fffef4d3 = bVar4;
  if ((((((((int)(char)bVar4 & 0x80U) == 0) || ((bVar4 & 0x20) == 0)) || (0x11ff < _DAT_ffff0d06))
       || (((bVar4 & 0x40) == 0 || (0x19eb < _DAT_ffff1276)))) ||
      (((bVar4 & 0x10) == 0 || ((bVar1 || ((DAT_fffef152 & 0x20) == 0)))))) ||
     ((DAT_ffff66b0 != '\x03' || ((DAT_fffef32e & 4) != 0)))) {
    DAT_fffef4e6 = DAT_fffef4e6 & 0x7f;
    bVar1 = false;
  }
  else {
    DAT_fffef4e6 = DAT_fffef4e6 | 0x80;
    bVar1 = true;
  }
  DAT_fffef4e5 = DAT_fffef4e4;
  if ((DAT_fffef9f2 & 0x40) == 0) {
    if ((DAT_fffef498 & 2) == 0) {
      if ((DAT_fffef3fc & 0x40) == 0) {
        if (bVar1) {
          local_4c = 0x16;
          uStack_48 = 0xf;
          uStack_44 = 0xf;
          DAT_fffef4e4 = '\x04';
        }
        else {
          local_4c = 0x24;
          uStack_48 = 0xf;
          uStack_44 = 0xf;
          DAT_fffef4e4 = '\0';
        }
      }
      else {
        local_4c = 0x2c;
        uStack_48 = 0x10;
        uStack_44 = 0x10;
        DAT_fffef4e4 = '\x03';
      }
    }
    else {
      local_4c = 0x24;
      uStack_48 = 0xf;
      uStack_44 = 0xf;
      DAT_fffef4e4 = '\x02';
    }
  }
  else {
    local_4c = 0x24;
    uStack_48 = 0xf;
    uStack_44 = 0x10;
    DAT_fffef4e4 = '\x01';
  }
  DAT_fffef4d4 = local_4c;
  DAT_fffef4d5 = uStack_48;
  DAT_fffef4d6 = uStack_44;
  DAT_fffef4d7 = 0;
  DAT_fffef4d8 = 0;
  DAT_fffef4d9 = 0x2d;
  DAT_fffef4da = 0xf;
  DAT_fffef4db = 0;
  DAT_fffef4d2 = DAT_fffef4d2 & 0x17;
  DAT_fffef4dc = 3;
  DAT_fffef4dd = 0;
  DAT_fffef4de = 1;
  DAT_fffef4df = 0;
  DAT_fffef4e0 = 0;
  DAT_fffef4e1 = 4;
  DAT_fffef4e2 = 0xc;
  if (DAT_fffef4e4 == cVar2) {
    if (DAT_fffef4e7 < 10) {
      DAT_fffef4e7 = DAT_fffef4e7 + 1;
    }
    else {
      DAT_fffef4e3 = DAT_fffef4e3 & 0x7f;
    }
  }
  else {
    DAT_fffef4e3 = DAT_fffef4e3 | 0x80;
    DAT_fffef4e7 = 0;
  }
  return;
}

