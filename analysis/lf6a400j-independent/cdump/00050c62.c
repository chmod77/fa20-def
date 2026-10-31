
void FUN_00050c62(void)

{
  if (DAT_ffff2ad2 != '\0') {
    if ((DAT_ffff077d & 1) == 0) {
      DAT_ffff077d = DAT_ffff077d | 1;
    }
    DAT_fffef51b = FUN_0000152c(DAT_fffef51b + 1);
  }
  if (DAT_fffeecee < 0xff) {
    DAT_fffeecee = DAT_fffeecee + 1;
  }
  else {
    DAT_fffeecee = '\x01';
  }
  if (DAT_fffeecef != -1) {
    DAT_fffeecef = DAT_fffeecef + '\x01';
  }
  return;
}

