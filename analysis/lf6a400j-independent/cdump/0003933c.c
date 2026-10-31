
uint FUN_0003933c(void)

{
  if ((DAT_ffff856e & 1) == 0) {
    DAT_ffff8db1 = FUN_0016bd28(DAT_ffff8db1 - 1);
    FUN_000393e4();
    thunk_FUN_00052c40();
  }
  if ((((int)DAT_fffef06f & 0x80U) == 0) || (DAT_fffeed51 == DAT_fffef0ee)) {
    DAT_ffff856c = '\0';
  }
  else {
    DAT_ffff856c = DAT_ffff856c + '\x01';
  }
  return (int)DAT_fffef06f;
}

