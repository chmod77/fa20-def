
/* WARNING: Removing unreachable block (ram,0x00070934) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007089a(void)

{
  if (_DAT_ffff7b96 != 1) {
    DAT_ffff6b91 = 0x7f;
    DAT_ffff6b92 = 4;
    DAT_ffff6b93 = 0x12;
    _DAT_ffff7b98 = 3;
    return;
  }
  if ((((((((DAT_fffefa38 & 1) == 0) && ((DAT_fffefa38 & 2) == 0)) && ((DAT_fffefa38 & 4) == 0)) &&
        ((((DAT_fffefa38 & 8) == 0 && ((DAT_fffefa38 & 0x10) == 0)) &&
         (((DAT_fffefe9c & 1) == 0 && (((DAT_fffefe9c & 2) == 0 && ((DAT_fffefe9c & 4) == 0))))))))
       && (((DAT_fffefe9c & 8) == 0 &&
           ((((DAT_fffefe9c & 0x10) == 0 && ((DAT_fffefe9c & 0x20) == 0)) &&
            ((DAT_fffefe9d & 1) == 0)))))) &&
      ((((DAT_fffefe9d & 2) == 0 && ((DAT_fffefe9e & 1) == 0)) &&
       ((((DAT_fffefe9e & 2) == 0 && (((DAT_fffefe9e & 4) == 0 && ((DAT_fffefe9e & 8) == 0)))) &&
        ((DAT_fffeff79 & 4) == 0)))))) &&
     ((((DAT_fffeff79 & 8) == 0 && ((DAT_fffef733 & 1) == 0)) && ((DAT_fffef733 & 2) == 0)))) {
    DAT_fffef050 = DAT_fffef050 | 1;
  }
  else if ((DAT_fffeeec6 & 1) != 0) {
    _DAT_ffff2fc8 = 0x4055;
    DAT_fffef21f = DAT_fffef21f | 2;
  }
  _DAT_ffff7b98 = 1;
  DAT_ffff6b91 = 0x44;
  return;
}

