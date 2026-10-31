
undefined4 FUN_00144e30(void)

{
  if ((DAT_ffff1e01 & 2) == 0) {
    if (DAT_ffff1e17 == '\0') {
      return 0;
    }
    DAT_ffff1e17 = DAT_ffff1e17 + -1;
  }
  else {
    DAT_ffff1e17 = '\f';
  }
  return 1;
}

