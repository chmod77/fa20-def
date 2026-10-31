
void FUN_00006ac4(void)

{
  DAT_ffffa309 = DAT_ffffa300 & 0xf0;
  if ((((DAT_ffffa309 != 0) && (DAT_ffffa309 != 0x10)) && (DAT_ffffa309 != 0x20)) &&
     (DAT_ffffa309 != 0x30)) {
    DAT_ffffa309 = 0xff;
    return;
  }
  return;
}

