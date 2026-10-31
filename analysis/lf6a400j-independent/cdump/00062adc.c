
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00062adc(void)

{
  uint uVar1;
  
  FUN_00064380();
  FUN_000642a4();
  FUN_00066a26();
  FUN_00063ee8();
  FUN_00063ba8();
  uVar1 = 0xcd5;
  if (0xcd4 < _DAT_ffff003c) {
    if (DAT_ffff0130 == '\0') {
      uVar1 = FUN_00062fa0();
      return uVar1;
    }
    uVar1 = 0xf46;
    if (0xf45 < _DAT_ffff003c) {
      DAT_ffff0028 = 1;
      uVar1 = (int)(char)(DAT_ffff0087 & 0x7f) & 0xbf;
      DAT_ffff0087 = (byte)uVar1;
      DAT_ffff34f7 = 0;
    }
  }
  return uVar1;
}

