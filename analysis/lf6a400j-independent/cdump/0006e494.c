
void FUN_0006e494(void)

{
  if (((int)DAT_fffee7e8 & 0x80U) != 0) {
    DAT_fffee7e9 = DAT_fffee7e9 & 0x7f;
    return;
  }
  DAT_fffee7e9 = DAT_fffee7e9 | 0x80;
  return;
}

