
void FUN_0003e10a(void)

{
  if (((DAT_ffff2aeb == '\x02') && (DAT_ffff2aed != '\0')) && (DAT_ffff2aef == DAT_ffff2aed)) {
    DAT_ffff2aea = DAT_ffff2aea | 0x80;
    return;
  }
  DAT_ffff2aea = DAT_ffff2aea & 0x7f;
  return;
}

