
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002c88(void)

{
  do {
    do {
      while (FUN_00002d1c(), (_DAT_ffffd008 & 2) == 0) {
        if ((DAT_ffffab2c != '\0') && (FUN_0000382e(), DAT_ffffab23 == '\x01')) {
          return;
        }
      }
      _DAT_ffffd008 = 2;
    } while ((((_DAT_ffffd040 & 0x40) == 0) || (_DAT_ffffd040 = 0x40, (_DAT_fffff75e & 0x10) == 0))
            || (((int)DAT_ffff8723 & 0x80U) != 0));
    FUN_00002d80(0xffffd3c5,0xffffd3c8);
    FUN_00002dc6();
    if (DAT_ffffab25 != '\0') {
      return;
    }
  } while (DAT_ffffab2a != -1);
  return;
}

