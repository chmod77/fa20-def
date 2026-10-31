
void FUN_0006bb30(void)

{
  DAT_fffef205 = DAT_fffef205 & 0xaf | 0x88;
  if (((int)DAT_fffef230 & 0x80U) == 0) {
    DAT_fffef82d = DAT_fffef82d & 0x8f | 0x80;
    DAT_fffef225 = 1;
    DAT_fffeed14 = 1;
    return;
  }
  DAT_fffef82d = DAT_fffef82d & 0x4f | 0x40;
  DAT_fffeed14 = 0x81;
  return;
}

