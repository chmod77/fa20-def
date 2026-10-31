
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_001491fc(uint param_1)

{
  uint uVar1;
  
  DAT_fffffc03 = DAT_fffffc03 & 0x3f;
  FUN_00149236();
  DAT_fffffc0c = DAT_fffffc0c & 0xb4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(DAT_ffff66c8) {
  case 0:
    return (uint)DAT_ffff66c8 * 0x14;
  case 1:
    DAT_ffff66c8 = 0;
    (*(code *)(&PTR_LAB_00162570)
              [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(1);
    uVar1 = (uint)DAT_ffff66ca;
    DAT_ffff66ca = (char)(uVar1 & 0xef);
    DAT_ffff6704 = 0;
    DAT_ffff6705 = 0xff;
    return uVar1 & 0xef;
  case 2:
    DAT_ffff66c8 = 0;
    (*(code *)(&PTR_LAB_00162570)
              [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(1);
    uVar1 = (uint)DAT_ffff66ca;
    DAT_ffff66ca = (char)(uVar1 & 0xfe);
    DAT_ffff6704 = 0;
    DAT_ffff6705 = 0xff;
    return uVar1 & 0xfe;
  case 3:
    DAT_ffff66c8 = 0;
    (*(code *)(&PTR_LAB_00162570)
              [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(1);
    uVar1 = (uint)DAT_ffff66ca;
    DAT_ffff66ca = (char)(uVar1 & 0xfd);
    DAT_ffff6704 = 0;
    DAT_ffff6705 = 0xff;
    return uVar1 & 0xfd;
  case 4:
    DAT_ffff66c8 = 0;
    uVar1 = (*(code *)(&PTR_LAB_00162570)
                      [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(1);
    DAT_ffff6704 = 0;
    DAT_ffff6705 = 0xff;
    return uVar1;
  case 5:
    DAT_ffff66c8 = 0;
    (*(code *)(&PTR_LAB_00162570)
              [(uint)*(byte *)(_DAT_ffff6708 + 8 + (uint)DAT_ffff670d * 0x10) * 5])(1);
    uVar1 = (uint)DAT_ffff66ca;
    DAT_ffff66ca = (char)(uVar1 & 0x7f);
    DAT_ffff6704 = 0;
    DAT_ffff6705 = 0xff;
    return uVar1 & 0x7f;
  }
  _DAT_fffff720 = _DAT_fffff720 & 0x3fff | 0x4000;
  _DAT_fffff730 = _DAT_fffff730 & 0xdfff | 0x2000;
  _DAT_fffff722 = _DAT_fffff722 & 0xfff | 0xa000;
  _DAT_fffff732 = _DAT_fffff732 & 0xf3ff | 0x800;
  param_1 = param_1 & 0xff;
  if (param_1 == 0) {
    DAT_fffffc01 = 0;
  }
  else {
    if (param_1 != 1) {
      DAT_fffffc00 = 0x8c;
      DAT_fffffc01 = param_1 == 2;
      DAT_fffffc02 = 0x84;
      DAT_fffffc03 = 0xc0;
      DAT_fffffc0c = 4;
      return 0xc0;
    }
    DAT_fffffc01 = 1;
  }
  DAT_fffffc02 = 4;
  DAT_fffffc00 = 0x8c;
  DAT_fffffc0c = 4;
  DAT_fffffc03 = 0xc0;
  return 0xc0;
}

