
void FUN_00041a0c(void)

{
  if (DAT_ffffab41 != '\0') {
    DAT_fffee6d2 = DAT_fffee6d2 & 0xfd | 4;
    return;
  }
  DAT_fffee6d2 = DAT_fffee6d2 | 6;
  return;
}

