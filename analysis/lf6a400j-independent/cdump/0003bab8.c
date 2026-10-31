
uint FUN_0003bab8(void)

{
  uint uVar1;
  
  FUN_0003c578();
  if (((DAT_fffef72c & 2) == 0) && ((DAT_fffef72c & 1) == 0)) {
    uVar1 = (uint)DAT_fffef749;
    if (((uVar1 & 0x80) != 0) && (uVar1 = (uint)DAT_fffef74a, (uVar1 & 0x80) != 0)) {
      uVar1 = (int)DAT_fffee69d & 0x7f;
      DAT_fffee69d = (char)uVar1;
    }
  }
  else {
    uVar1 = (int)DAT_fffee69d | 0x80;
    DAT_fffee69d = (char)uVar1;
  }
  return uVar1;
}

