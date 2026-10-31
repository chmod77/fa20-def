
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001490d4(char param_1)

{
  _DAT_fffff720 = _DAT_fffff720 & 0x3fff | 0x4000;
  _DAT_fffff730 = _DAT_fffff730 & 0xdfff | 0x2000;
  _DAT_fffff722 = _DAT_fffff722 & 0xfff | 0xa000;
  _DAT_fffff732 = _DAT_fffff732 & 0xf3ff | 0x800;
  if (param_1 == '\0') {
    DAT_fffffc01 = 0;
  }
  else {
    if (param_1 != '\x01') {
      DAT_fffffc00 = 0x8c;
      DAT_fffffc01 = param_1 == '\x02';
      DAT_fffffc02 = 0x84;
      DAT_fffffc03 = 0xc0;
      DAT_fffffc0c = 4;
      return;
    }
    DAT_fffffc01 = 1;
  }
  DAT_fffffc02 = 4;
  DAT_fffffc00 = 0x8c;
  DAT_fffffc0c = 4;
  DAT_fffffc03 = 0xc0;
  return;
}

