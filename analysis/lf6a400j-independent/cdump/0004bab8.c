
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0004bab8(void)

{
  char *pcVar1;
  
  if (DAT_fffeed8a == -0x48) {
    DAT_fffeee16 = 0x80;
    DAT_fffeee17 = 0xf0;
    DAT_fffeee18 = 0x10;
    DAT_fffeee1a = 0xf8;
    DAT_fffeee19 = 2;
    _DAT_fffeed80 = (uint)DAT_fffeed8b * 0x10000 + (uint)DAT_fffeed8c * 0x100 + (uint)DAT_fffeed8d;
    pcVar1 = (&PTR_DAT_0015f9d8)[_DAT_fffeed80];
    *pcVar1 = DAT_fffeed8e;
    DAT_fffeee1b = *pcVar1;
    DAT_fffeee1c = *pcVar1 + 'z';
    DAT_fffeeea8 = DAT_fffeeea8 & 0xfe | 0x22;
  }
  return;
}

