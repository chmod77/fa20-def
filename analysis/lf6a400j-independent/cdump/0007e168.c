
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0007e168(void)

{
  if ((((DAT_fffef73b & 2) == 0) && ((DAT_fffef73b & 4) == 0)) && ((DAT_fffef72e & 2) == 0)) {
    DAT_fffef72e = DAT_fffef72e & 0xf7;
    DAT_fffef72d = DAT_fffef72d & 0xfb;
    _DAT_fffee72c = _DAT_fffee72c & 0xfff7;
    return;
  }
  DAT_fffef72e = DAT_fffef72e | 8;
  DAT_fffef72d = DAT_fffef72d | 4;
  _DAT_fffee72c = _DAT_fffee72c | 8;
  return;
}

